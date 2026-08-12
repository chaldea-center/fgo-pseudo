void WarBoardBGEffectComponent___ctor(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.endtime = 5.0;
  this->fields.loop = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardBGEffectComponent__Awake(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  struct SimpleAnimation_o **p_simpleAnimationComponent; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  UnityEngine_Object_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *m_Clip; // x21
  struct System_String_o *name; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_596DEE5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DEE5 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)Component_object;
  p_simpleAnimationComponent = &this->fields.simpleAnimationComponent;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnimationComponent,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
  v14 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0);
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    if ( !*p_simpleAnimationComponent )
      goto LABEL_14;
    m_Clip = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)->fields.m_Clip;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
    v14 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
    if ( ((unsigned __int8)v14 & 1) != 0 )
    {
      if ( *p_simpleAnimationComponent )
      {
        v14 = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)->fields.m_Clip;
        if ( v14 )
        {
          name = UnityEngine_Object__get_name(v14, 0);
          this->fields.currentAnimationName = name;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.currentAnimationName,
            (int32_t)name,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          return;
        }
      }
LABEL_14:
      sub_2213CDC(v14, v15);
    }
  }
}


void WarBoardBGEffectComponent__NextPlayAnimation(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  bool v5; // w0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  int32_t status; // w8
  SimpleAnimation_o *v13; // x20
  System_String_o *Item; // x0
  struct System_String_o *v15; // x1
  SimpleAnimation_State_o *v16; // x20
  struct System_String_o **p_requestAnimation; // x0
  SimpleAnimation_o *v18; // x20
  System_String_c *klass; // x8
  System_String_o *currentAnimationName; // x21
  __int64 v21; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v23; // x0
  System_String_o *v24; // x0
  struct SimpleAnimation_o *v25; // x8
  UnityEngine_Object_o *m_Clip; // x21
  struct SimpleAnimation_o *v27; // x20
  System_String_o *name; // x0
  SimpleAnimation_State_c *v29; // x8
  __int64 v30; // x9
  SimpleAnimation_State_c **v31; // x10
  __int64 v32; // x0

  if ( (byte_596DEE4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&StringLiteral_17237/*"_loop"*/);
    sub_2213A60(&StringLiteral_17220/*"_end"*/);
    byte_596DEE4 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0);
  status = this->fields.status;
  if ( v5 )
  {
    if ( status == 5 )
    {
      v18 = this->fields.simpleAnimationComponent;
      Item = System_String__Concat_75651716(this->fields.animationName, (System_String_o *)StringLiteral_17220/*"_end"*/, 0);
      if ( !v18 )
        goto LABEL_46;
      Item = (System_String_o *)SimpleAnimation__get_Item(v18, Item, 0);
      v16 = (SimpleAnimation_State_o *)Item;
      if ( !Item )
        goto LABEL_26;
      klass = Item->klass;
      currentAnimationName = this->fields.currentAnimationName;
      v21 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v21;
          p_offset += 2;
          if ( !v21 )
            goto LABEL_22;
        }
        v23 = (__int64)(&klass->vtable._9_GetTypeCode + *(_DWORD *)p_offset);
      }
      else
      {
LABEL_22:
        v23 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 9);
      }
      v24 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v23)(
                                 v16,
                                 *(_QWORD *)(v23 + 8));
      Item = (System_String_o *)System_String__op_Equality(currentAnimationName, v24, 0);
      if ( ((unsigned __int8)Item & 1) != 0 )
      {
LABEL_26:
        v25 = this->fields.simpleAnimationComponent;
        if ( !v25 )
          goto LABEL_46;
        m_Clip = (UnityEngine_Object_o *)v25->fields.m_Clip;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v6);
        Item = (System_String_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          v27 = this->fields.simpleAnimationComponent;
          if ( !v27 )
            goto LABEL_46;
          Item = (System_String_o *)v27->fields.m_Clip;
          if ( !Item )
            goto LABEL_46;
          name = UnityEngine_Object__get_name((UnityEngine_Object_o *)Item, 0);
          Item = (System_String_o *)SimpleAnimation__get_Item(v27, name, 0);
          v16 = (SimpleAnimation_State_o *)Item;
          this->fields.status = 1;
        }
        this->fields.totaltime = 0.0;
      }
      if ( !v16 )
      {
        v15 = 0;
        goto LABEL_43;
      }
    }
    else
    {
      if ( status != 4 )
      {
        v15 = 0;
        goto LABEL_44;
      }
      if ( !this->fields.loop )
      {
LABEL_11:
        v15 = 0;
        this->fields.status = 5;
LABEL_44:
        this->fields.requestAnimation = v15;
        p_requestAnimation = &this->fields.requestAnimation;
        goto LABEL_45;
      }
      v13 = this->fields.simpleAnimationComponent;
      Item = System_String__Concat_75651716(this->fields.animationName, (System_String_o *)StringLiteral_17237/*"_loop"*/, 0);
      if ( !v13 )
LABEL_46:
        sub_2213CDC(Item, v15);
      v16 = SimpleAnimation__get_Item(v13, Item, 0);
      if ( !v16 )
        goto LABEL_11;
    }
    v29 = v16->klass;
    v30 = *(unsigned __int16 *)&v16->klass->_2.rank;
    if ( *(_WORD *)&v16->klass->_2.rank )
    {
      v31 = (SimpleAnimation_State_c **)&v29->_1.interfaceOffsets->offset;
      while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v30;
        v31 += 2;
        if ( !v30 )
          goto LABEL_39;
      }
      v32 = (__int64)&v29->vtable[*(_DWORD *)v31 + 9];
    }
    else
    {
LABEL_39:
      v32 = sub_224BC3C(v16, SimpleAnimation_State_TypeInfo, 9);
    }
    Item = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v32)(
                                v16,
                                *(_QWORD *)(v32 + 8));
    v15 = Item;
LABEL_43:
    if ( this )
      goto LABEL_44;
    goto LABEL_46;
  }
  if ( status == 4 && !this->fields.loop )
    this->fields.status = 5;
  this->fields.requestAnimation = 0;
  p_requestAnimation = &this->fields.requestAnimation;
  LODWORD(v15) = 0;
LABEL_45:
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_requestAnimation, (int32_t)v15, v6, v7, v8, v9, v10, v11);
}


void WarBoardBGEffectComponent__OtherObjectPlayAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *eventStr,
        const MethodInfo *method)
{
  WarBoardBGEffectComponent_o *v4; // x20
  System_String_o *v5; // x19
  System_String_o *simpleAnimationComponent; // x21
  bool v7; // w20
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Component_object; // x21
  const MethodInfo *v14; // x3

  v4 = this;
  if ( (byte_596DEE2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (WarBoardBGEffectComponent_o *)sub_2213A60(&StringLiteral_25526/*"true"*/);
    byte_596DEE2 = 1;
  }
  if ( v4->fields.oldStatus == v4->fields.status )
  {
    if ( !eventStr )
      goto LABEL_17;
    this = (WarBoardBGEffectComponent_o *)System_String__Split(eventStr, 0x2Fu, 0, 0);
    if ( !this )
      goto LABEL_17;
    if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 3 )
    {
      simpleAnimationComponent = (System_String_o *)this->fields.simpleAnimationComponent;
      v5 = *(System_String_o **)&this->fields.status;
      v7 = System_String__op_Equality(
             *(System_String_o **)&this->fields.totaltime,
             (System_String_o *)StringLiteral_25526/*"true"*/,
             0);
      v10 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(simpleAnimationComponent, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      this = (WarBoardBGEffectComponent_o *)UnityEngine_Object__op_Equality(v10, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v10 )
          goto LABEL_17;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v10,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
        this = (WarBoardBGEffectComponent_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Component_object,
                                                0,
                                                0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( Component_object )
          {
            WarBoardBGEffectComponent__PlayAnimation((WarBoardBGEffectComponent_o *)Component_object, v5, v7, v14);
            return;
          }
LABEL_17:
          sub_2213CDC(this, eventStr);
        }
      }
    }
  }
}


void WarBoardBGEffectComponent__PauseAnimation(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0

  if ( (byte_596DEE0 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DEE0 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    v6 = this->fields.simpleAnimationComponent;
    if ( !v6 )
      sub_2213CDC(0, v5);
    SimpleAnimation__Stop_78549736(v6, this->fields.currentAnimationName, 0);
    this->fields.status = 2;
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardBGEffectComponent__PlayAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *animName,
        bool playAfterCurrentAnim,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  const MethodInfo *v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  int32_t v15; // w1
  struct System_String_o **p_animationName; // x0
  SimpleAnimation_o *v17; // x0
  SimpleAnimation_o *v18; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v21; // x21
  __int64 v22; // x9
  SimpleAnimation_State_c *v23; // x1
  SimpleAnimation_State_c **p_offset; // x10
  SimpleAnimation_State_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x9
  __int64 v33; // x0
  SimpleAnimation_State_c *v34; // x8
  __int64 v35; // x9
  SimpleAnimation_State_c **v36; // x10
  __int64 v37; // x0
  struct System_String_o *v38; // x1

  if ( (byte_596DEE3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&StringLiteral_17256/*"_start"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DEE3 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, animName, playAfterCurrentAnim);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    if ( playAfterCurrentAnim )
    {
      WarBoardBGEffectComponent__Stop(this, v8);
    }
    else
    {
      v17 = this->fields.simpleAnimationComponent;
      if ( !v17 )
        goto LABEL_37;
      SimpleAnimation__Stop(v17, 0);
    }
    v18 = this->fields.simpleAnimationComponent;
    v17 = (SimpleAnimation_o *)System_String__Concat_75651716(animName, (System_String_o *)StringLiteral_17256/*"_start"*/, 0);
    if ( !v18 )
LABEL_37:
      sub_2213CDC(v17, v8);
    Item = SimpleAnimation__get_Item(v18, (System_String_o *)v17, 0);
    if ( Item )
    {
      klass = Item->klass;
      v21 = Item;
      v22 = *(unsigned __int16 *)&Item->klass->_2.rank;
      v23 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v22;
          p_offset += 2;
          if ( !v22 )
            goto LABEL_24;
        }
LABEL_25:
        v33 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13];
LABEL_26:
        this->fields.endtime = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v33)(
                                 v21,
                                 *(_QWORD *)(v33 + 8));
        v34 = v21->klass;
        v35 = *(unsigned __int16 *)&v21->klass->_2.rank;
        if ( *(_WORD *)&v21->klass->_2.rank )
        {
          v36 = (SimpleAnimation_State_c **)&v34->_1.interfaceOffsets->offset;
          while ( *(v36 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v35;
            v36 += 2;
            if ( !v35 )
              goto LABEL_30;
          }
          v37 = (__int64)&v34->vtable[*(_DWORD *)v36 + 9];
        }
        else
        {
LABEL_30:
          v37 = sub_224BC3C(v21, SimpleAnimation_State_TypeInfo, 9);
        }
        v17 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v37)(
                                     v21,
                                     *(_QWORD *)(v37 + 8));
        if ( this )
        {
          v38 = (struct System_String_o *)v17;
LABEL_34:
          this->fields.requestAnimation = v38;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.requestAnimation,
            (int32_t)v38,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
          v15 = (int)animName;
          this->fields.animationName = animName;
          p_animationName = &this->fields.animationName;
          goto LABEL_35;
        }
        goto LABEL_37;
      }
    }
    else
    {
      v17 = this->fields.simpleAnimationComponent;
      if ( !v17 )
        goto LABEL_37;
      v25 = SimpleAnimation__get_Item(v17, animName, 0);
      if ( !v25 )
      {
        v38 = (struct System_String_o *)StringLiteral_1/*""*/;
        this->fields.endtime = 0.0;
        goto LABEL_34;
      }
      klass = v25->klass;
      v21 = v25;
      v32 = *(unsigned __int16 *)&v25->klass->_2.rank;
      v23 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)&v25->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v32;
          p_offset += 2;
          if ( !v32 )
            goto LABEL_24;
        }
        goto LABEL_25;
      }
    }
LABEL_24:
    v33 = sub_224BC3C(v21, v23, 13);
    goto LABEL_26;
  }
  v15 = (int)StringLiteral_1/*""*/;
  this->fields.requestAnimation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_animationName = &this->fields.requestAnimation;
LABEL_35:
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_animationName, v15, v9, v10, v11, v12, v13, v14);
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.status = 4;
}


void WarBoardBGEffectComponent__ResumeAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *animName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *State; // x0
  __int64 v7; // x1
  System_String_o *currentAnimationName; // x20
  SimpleAnimation_State_o *Item; // x21
  System_String_c *klass; // x8
  System_String_o *v11; // x21
  float totaltime; // s8
  __int64 v13; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_596DEE1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&StringLiteral_17237/*"_loop"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DEE1 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, animName, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    this->fields.status = 4;
    State = System_String__Concat_75651716(animName, (System_String_o *)StringLiteral_17237/*"_loop"*/, 0);
    if ( !this->fields.simpleAnimationComponent )
      goto LABEL_21;
    currentAnimationName = State;
    Item = SimpleAnimation__get_Item(this->fields.simpleAnimationComponent, State, 0);
    if ( System_String__op_Equality(currentAnimationName, (System_String_o *)StringLiteral_1/*""*/, 0) || !Item )
      currentAnimationName = this->fields.currentAnimationName;
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
      goto LABEL_21;
    State = (System_String_o *)SimpleAnimation__GetState((SimpleAnimation_o *)State, currentAnimationName, 0);
    if ( !State )
      goto LABEL_21;
    klass = State->klass;
    v11 = State;
    totaltime = this->fields.totaltime;
    v13 = *(unsigned __int16 *)&State->klass->_2.rank;
    if ( *(_WORD *)&State->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v13;
        p_offset += 2;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)(&klass->vtable._4_CompareTo + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_16:
      v15 = sub_224BC3C(State, SimpleAnimation_State_TypeInfo, 4);
    }
    (*(void (__fastcall **)(System_String_o *, _QWORD, float))v15)(v11, *(_QWORD *)(v15 + 8), totaltime);
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
LABEL_21:
      sub_2213CDC(State, v7);
    SimpleAnimation__Play_78552168((SimpleAnimation_o *)State, currentAnimationName, 0);
    this->fields.currentAnimationName = currentAnimationName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.currentAnimationName,
      (int32_t)currentAnimationName,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
}


void WarBoardBGEffectComponent__Stop(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_c *v4; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v6; // x1
  SimpleAnimation_o *v7; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v10; // x19
  __int64 v11; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v13; // x0

  if ( (byte_596DEDF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_596DEDF = 1;
  }
  v4 = UnityEngine_Object_TypeInfo;
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  this->fields.loop = 0;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    v7 = this->fields.simpleAnimationComponent;
    if ( !v7 )
      sub_2213CDC(0, v6);
    Item = SimpleAnimation__get_Item(v7, this->fields.currentAnimationName, 0);
    if ( Item )
    {
      klass = Item->klass;
      v10 = Item;
      v11 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v11;
          p_offset += 2;
          if ( !v11 )
            goto LABEL_12;
        }
        v13 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
      }
      else
      {
LABEL_12:
        v13 = sub_224BC3C(Item, SimpleAnimation_State_TypeInfo, 18);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v13)(v10, 1, *(_QWORD *)(v13 + 8));
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardBGEffectComponent__StopAnimation(
        WarBoardBGEffectComponent_o *this,
        bool playAfterCurrentAnim,
        const MethodInfo *method)
{
  UnityEngine_Object_c *v5; // x0
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  int v7; // w9
  const MethodInfo *v8; // x1
  SimpleAnimation_o *v9; // x0

  if ( (byte_596DEDE & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596DEDE = 1;
  }
  v5 = UnityEngine_Object_TypeInfo;
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  this->fields.status = 5;
  v7 = *(&v5->_2.cctor_finished + 1);
  this->fields.loop = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(v5, playAfterCurrentAnim, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    if ( playAfterCurrentAnim )
    {
      WarBoardBGEffectComponent__Stop(this, v8);
    }
    else
    {
      v9 = this->fields.simpleAnimationComponent;
      if ( !v9 )
        sub_2213CDC(0, v8);
      SimpleAnimation__Stop(v9, 0);
    }
  }
}


void WarBoardBGEffectComponent__Update(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  int32_t status; // w8
  float totaltime; // s8
  __int64 v5; // x1
  System_String_o *v6; // x2
  float deltaTime; // s0
  struct System_String_o *requestAnimation; // x8
  System_String_o **p_requestAnimation; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  SimpleAnimation_o *State; // x0
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_Object_o *v17; // x21
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  UnityEngine_Object_o *v25; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v33; // x21
  float v34; // s8
  __int64 v35; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v37; // x0
  struct System_String_o *v38; // x1
  struct System_String_o **p_playAnimation; // x0
  struct System_String_o *v40; // x1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  float v47; // s0

  if ( (byte_596DEE6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596DEE6 = 1;
  }
  status = this->fields.status;
  this->fields.oldStatus = status;
  if ( (status | 2) != 2 )
  {
    totaltime = this->fields.totaltime;
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    p_requestAnimation = &this->fields.requestAnimation;
    requestAnimation = this->fields.requestAnimation;
    this->fields.totaltime = totaltime + deltaTime;
    if ( !requestAnimation )
    {
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) && this->fields.playAnimation )
      {
        State = this->fields.simpleAnimationComponent;
        if ( !State )
          goto LABEL_45;
        if ( SimpleAnimation__CheckPlaying(State, 0) )
          return;
        if ( this->fields.status == 5 )
        {
          this->fields.playAnimation = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.playAnimation, 0, v6, v12, v13, v14, v15, v16);
        }
      }
      if ( this->fields.endtime < this->fields.totaltime )
        ((void (__fastcall *)(WarBoardBGEffectComponent_o *, const MethodInfo *))this->klass->vtable._4_NextPlayAnimation.methodPtr)(
          this,
          this->klass->vtable._4_NextPlayAnimation.method);
      if ( !*p_requestAnimation )
        return;
    }
    v17 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
    {
      State = this->fields.simpleAnimationComponent;
      if ( !State )
        goto LABEL_45;
      if ( SimpleAnimation__CheckPlaying(State, 0) )
        return;
    }
    if ( !System_String__op_Inequality(*p_requestAnimation, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      LODWORD(v38) = 0;
      this->fields.playAnimation = 0;
      p_playAnimation = &this->fields.playAnimation;
LABEL_40:
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p_playAnimation, (int32_t)v38, v19, v20, v21, v22, v23, v24);
      goto LABEL_41;
    }
    v25 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
    if ( !UnityEngine_Object__op_Inequality(v25, 0, 0) )
      goto LABEL_41;
    State = this->fields.simpleAnimationComponent;
    if ( State )
    {
      if ( !SimpleAnimation__get_Item(State, *p_requestAnimation, 0) )
      {
LABEL_41:
        if ( this->fields.status == 5 )
        {
          v47 = this->fields.totaltime;
          if ( v47 > this->fields.endtime )
            this->fields.endtime = v47;
        }
        *p_requestAnimation = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.requestAnimation, 0, v26, v27, v28, v29, v30, v31);
        return;
      }
      State = this->fields.simpleAnimationComponent;
      if ( State )
      {
        State = (SimpleAnimation_o *)SimpleAnimation__GetState(State, this->fields.requestAnimation, 0);
        if ( State )
        {
          klass = State->klass;
          v33 = State;
          v34 = this->fields.totaltime;
          v35 = *(unsigned __int16 *)&State->klass->_2.rank;
          if ( *(_WORD *)&State->klass->_2.rank )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v35;
              p_offset += 2;
              if ( !v35 )
                goto LABEL_34;
            }
            v37 = (__int64)(&klass->vtable._4_ApplyUpdateMode + *(_DWORD *)p_offset);
          }
          else
          {
LABEL_34:
            v37 = sub_224BC3C(State, SimpleAnimation_State_TypeInfo, 4);
          }
          (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, float))v37)(v33, *(_QWORD *)(v37 + 8), v34);
          State = this->fields.simpleAnimationComponent;
          if ( State )
          {
            SimpleAnimation__Rewind_78554488(State, this->fields.requestAnimation, 0);
            State = this->fields.simpleAnimationComponent;
            if ( State )
            {
              SimpleAnimation__Play_78552168(State, this->fields.requestAnimation, 0);
              v40 = this->fields.requestAnimation;
              this->fields.currentAnimationName = v40;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.currentAnimationName,
                (int32_t)v40,
                v41,
                v42,
                v43,
                v44,
                v45,
                v46);
              v38 = this->fields.requestAnimation;
              this->fields.playAnimation = v38;
              p_playAnimation = &this->fields.playAnimation;
              goto LABEL_40;
            }
          }
        }
      }
    }
LABEL_45:
    sub_2213CDC(State, v5);
  }
}