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
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  UnityEngine_Object_o *v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *m_Clip; // x21
  struct System_String_o *name; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C545B0 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C545B0 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)Component_object;
  p_simpleAnimationComponent = &this->fields.simpleAnimationComponent;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.simpleAnimationComponent, (int32_t)Component_object, v5, v6);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    if ( !*p_simpleAnimationComponent )
      goto LABEL_14;
    m_Clip = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)->fields.m_Clip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
    if ( ((unsigned __int8)v8 & 1) != 0 )
    {
      if ( *p_simpleAnimationComponent )
      {
        v8 = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)->fields.m_Clip;
        if ( v8 )
        {
          name = UnityEngine_Object__get_name(v8, 0);
          this->fields.currentAnimationName = name;
          sub_1C3E508((CGThumbnailListItem_o *)&this->fields.currentAnimationName, (int32_t)name, v12, v13);
          return;
        }
      }
LABEL_14:
      sub_1C3E7C0(v8, v9);
    }
  }
}


void WarBoardBGEffectComponent__NextPlayAnimation(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  bool v4; // w0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t status; // w8
  SimpleAnimation_o *v8; // x20
  System_String_o *v9; // x0
  struct System_String_o *v10; // x1
  SimpleAnimation_State_o *Item; // x20
  struct System_String_o **p_requestAnimation; // x0
  SimpleAnimation_o *v13; // x20
  System_String_c *v14; // x8
  System_String_o *currentAnimationName; // x21
  __int64 v16; // x9
  SimpleAnimation_State_c **v17; // x10
  __int64 v18; // x0
  System_String_o *v19; // x0
  struct SimpleAnimation_o *v20; // x8
  UnityEngine_Object_o *m_Clip; // x21
  struct SimpleAnimation_o *v22; // x20
  System_String_o *name; // x0
  SimpleAnimation_State_c *klass; // x8
  __int64 v25; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v27; // x0

  if ( (byte_4C545AF & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    sub_1C3E564(&StringLiteral_16574/*"_loop"*/);
    sub_1C3E564(&StringLiteral_16558/*"_end"*/);
    byte_4C545AF = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0);
  status = this->fields.status;
  if ( v4 )
  {
    if ( status == 4 )
    {
      if ( !this->fields.loop )
      {
LABEL_10:
        v10 = 0;
        this->fields.status = 5;
LABEL_42:
        this->fields.requestAnimation = v10;
        p_requestAnimation = &this->fields.requestAnimation;
        goto LABEL_43;
      }
      v8 = this->fields.simpleAnimationComponent;
      v9 = System_String__Concat_63636468(this->fields.animationName, (System_String_o *)StringLiteral_16574/*"_loop"*/, 0);
      if ( v8 )
      {
        Item = SimpleAnimation__get_Item(v8, v9, 0);
        if ( !Item )
          goto LABEL_10;
LABEL_35:
        klass = Item->klass;
        v25 = *(unsigned __int16 *)&Item->klass->_2.rank;
        if ( *(_WORD *)&Item->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v25;
            p_offset += 2;
            if ( !v25 )
              goto LABEL_39;
          }
          v27 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9];
        }
        else
        {
LABEL_39:
          v27 = sub_1C8ED7C(Item, SimpleAnimation_State_TypeInfo, 9);
        }
        v9 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v27)(
                                  Item,
                                  *(_QWORD *)(v27 + 8));
        v10 = v9;
        if ( this )
          goto LABEL_42;
      }
    }
    else
    {
      if ( status != 5 )
      {
        v10 = 0;
        goto LABEL_42;
      }
      v13 = this->fields.simpleAnimationComponent;
      v9 = System_String__Concat_63636468(this->fields.animationName, (System_String_o *)StringLiteral_16558/*"_end"*/, 0);
      if ( v13 )
      {
        v9 = (System_String_o *)SimpleAnimation__get_Item(v13, v9, 0);
        Item = (SimpleAnimation_State_o *)v9;
        if ( !v9 )
          goto LABEL_26;
        v14 = v9->klass;
        currentAnimationName = this->fields.currentAnimationName;
        v16 = *(unsigned __int16 *)&v9->klass->_2.rank;
        if ( *(_WORD *)&v9->klass->_2.rank )
        {
          v17 = (SimpleAnimation_State_c **)&v14->_1.interfaceOffsets->offset;
          while ( *(v17 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v16;
            v17 += 2;
            if ( !v16 )
              goto LABEL_22;
          }
          v18 = (__int64)(&v14->vtable._9_GetTypeCode + *(_DWORD *)v17);
        }
        else
        {
LABEL_22:
          v18 = sub_1C8ED7C(v9, SimpleAnimation_State_TypeInfo, 9);
        }
        v19 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v18)(
                                   Item,
                                   *(_QWORD *)(v18 + 8));
        v9 = (System_String_o *)System_String__op_Equality(currentAnimationName, v19, 0);
        if ( ((unsigned __int8)v9 & 1) != 0 )
        {
LABEL_26:
          v20 = this->fields.simpleAnimationComponent;
          if ( !v20 )
            goto LABEL_45;
          m_Clip = (UnityEngine_Object_o *)v20->fields.m_Clip;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v9 = (System_String_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
          if ( ((unsigned __int8)v9 & 1) != 0 )
          {
            v22 = this->fields.simpleAnimationComponent;
            if ( !v22 )
              goto LABEL_45;
            v9 = (System_String_o *)v22->fields.m_Clip;
            if ( !v9 )
              goto LABEL_45;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v9, 0);
            v9 = (System_String_o *)SimpleAnimation__get_Item(v22, name, 0);
            Item = (SimpleAnimation_State_o *)v9;
            this->fields.status = 1;
          }
          this->fields.totaltime = 0.0;
        }
        if ( Item )
          goto LABEL_35;
        v10 = 0;
        if ( this )
          goto LABEL_42;
      }
    }
LABEL_45:
    sub_1C3E7C0(v9, v10);
  }
  if ( status == 4 && !this->fields.loop )
    this->fields.status = 5;
  this->fields.requestAnimation = 0;
  p_requestAnimation = &this->fields.requestAnimation;
  LODWORD(v10) = 0;
LABEL_43:
  sub_1C3E508((CGThumbnailListItem_o *)p_requestAnimation, (int32_t)v10, v5, v6);
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
  UnityEngine_Object_o *v8; // x21
  Il2CppObject *Component_object; // x21
  const MethodInfo *v10; // x3

  v4 = this;
  if ( (byte_4C545AD & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (WarBoardBGEffectComponent_o *)sub_1C3E564(&StringLiteral_24236/*"true"*/);
    byte_4C545AD = 1;
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
             (System_String_o *)StringLiteral_24236/*"true"*/,
             0);
      v8 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(simpleAnimationComponent, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardBGEffectComponent_o *)UnityEngine_Object__op_Equality(v8, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v8 )
          goto LABEL_17;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v8,
                             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (WarBoardBGEffectComponent_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Component_object,
                                                0,
                                                0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( Component_object )
          {
            WarBoardBGEffectComponent__PlayAnimation((WarBoardBGEffectComponent_o *)Component_object, v5, v7, v10);
            return;
          }
LABEL_17:
          sub_1C3E7C0(this, eventStr);
        }
      }
    }
  }
}


void WarBoardBGEffectComponent__PauseAnimation(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v4; // x1
  SimpleAnimation_o *v5; // x0

  if ( (byte_4C545AB & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C545AB = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    v5 = this->fields.simpleAnimationComponent;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
    SimpleAnimation__Stop_66579740(v5, this->fields.currentAnimationName, 0);
    this->fields.status = 2;
  }
}


void WarBoardBGEffectComponent__PlayAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *animName,
        bool playAfterCurrentAnim,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_String_o **p_animationName; // x0
  SimpleAnimation_o *v12; // x0
  SimpleAnimation_o *v13; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v16; // x21
  __int64 v17; // x9
  SimpleAnimation_State_c *v18; // x1
  SimpleAnimation_State_c **p_offset; // x10
  SimpleAnimation_State_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x9
  __int64 v24; // x0
  SimpleAnimation_State_c *v25; // x8
  __int64 v26; // x9
  SimpleAnimation_State_c **v27; // x10
  __int64 v28; // x0
  struct System_String_o *v29; // x1

  if ( (byte_4C545AE & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    sub_1C3E564(&StringLiteral_16593/*"_start"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C545AE = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    if ( playAfterCurrentAnim )
    {
      WarBoardBGEffectComponent__Stop(this, v8);
    }
    else
    {
      v12 = this->fields.simpleAnimationComponent;
      if ( !v12 )
        goto LABEL_37;
      SimpleAnimation__Stop(v12, 0);
    }
    v13 = this->fields.simpleAnimationComponent;
    v12 = (SimpleAnimation_o *)System_String__Concat_63636468(animName, (System_String_o *)StringLiteral_16593/*"_start"*/, 0);
    if ( !v13 )
LABEL_37:
      sub_1C3E7C0(v12, v8);
    Item = SimpleAnimation__get_Item(v13, (System_String_o *)v12, 0);
    if ( Item )
    {
      klass = Item->klass;
      v16 = Item;
      v17 = *(unsigned __int16 *)&Item->klass->_2.rank;
      v18 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v17;
          p_offset += 2;
          if ( !v17 )
            goto LABEL_24;
        }
LABEL_25:
        v24 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13];
LABEL_26:
        this->fields.endtime = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v24)(
                                 v16,
                                 *(_QWORD *)(v24 + 8));
        v25 = v16->klass;
        v26 = *(unsigned __int16 *)&v16->klass->_2.rank;
        if ( *(_WORD *)&v16->klass->_2.rank )
        {
          v27 = (SimpleAnimation_State_c **)&v25->_1.interfaceOffsets->offset;
          while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v26;
            v27 += 2;
            if ( !v26 )
              goto LABEL_30;
          }
          v28 = (__int64)&v25->vtable[*(_DWORD *)v27 + 9];
        }
        else
        {
LABEL_30:
          v28 = sub_1C8ED7C(v16, SimpleAnimation_State_TypeInfo, 9);
        }
        v12 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v28)(
                                     v16,
                                     *(_QWORD *)(v28 + 8));
        if ( this )
        {
          v29 = (struct System_String_o *)v12;
LABEL_34:
          this->fields.requestAnimation = v29;
          sub_1C3E508((CGThumbnailListItem_o *)&this->fields.requestAnimation, (int32_t)v29, v21, v22);
          this->fields.animationName = animName;
          p_animationName = &this->fields.animationName;
          goto LABEL_35;
        }
        goto LABEL_37;
      }
    }
    else
    {
      v12 = this->fields.simpleAnimationComponent;
      if ( !v12 )
        goto LABEL_37;
      v20 = SimpleAnimation__get_Item(v12, animName, 0);
      if ( !v20 )
      {
        this->fields.endtime = 0.0;
        v29 = (struct System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_34;
      }
      klass = v20->klass;
      v16 = v20;
      v23 = *(unsigned __int16 *)&v20->klass->_2.rank;
      v18 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)&v20->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v23;
          p_offset += 2;
          if ( !v23 )
            goto LABEL_24;
        }
        goto LABEL_25;
      }
    }
LABEL_24:
    v24 = sub_1C8ED7C(v16, v18, 13);
    goto LABEL_26;
  }
  LODWORD(animName) = StringLiteral_1/*""*/;
  this->fields.requestAnimation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_animationName = &this->fields.requestAnimation;
LABEL_35:
  sub_1C3E508((CGThumbnailListItem_o *)p_animationName, (int32_t)animName, v9, v10);
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.status = 4;
}


void WarBoardBGEffectComponent__ResumeAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *animName,
        const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *State; // x0
  __int64 v8; // x1
  System_String_o *currentAnimationName; // x20
  SimpleAnimation_State_o *Item; // x21
  bool v11; // w0
  System_String_c *klass; // x8
  System_String_o *v13; // x21
  __int64 v14; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C545AC & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    sub_1C3E564(&StringLiteral_16574/*"_loop"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C545AC = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    this->fields.status = 4;
    State = System_String__Concat_63636468(animName, (System_String_o *)StringLiteral_16574/*"_loop"*/, 0);
    if ( !this->fields.simpleAnimationComponent )
      goto LABEL_21;
    currentAnimationName = State;
    Item = SimpleAnimation__get_Item(this->fields.simpleAnimationComponent, State, 0);
    v11 = System_String__op_Equality(currentAnimationName, (System_String_o *)StringLiteral_1/*""*/, 0);
    if ( !Item || v11 )
      currentAnimationName = this->fields.currentAnimationName;
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
      goto LABEL_21;
    State = (System_String_o *)SimpleAnimation__GetState((SimpleAnimation_o *)State, currentAnimationName, 0);
    if ( !State )
      goto LABEL_21;
    klass = State->klass;
    *(float *)&v3 = this->fields.totaltime;
    v13 = State;
    v14 = *(unsigned __int16 *)&State->klass->_2.rank;
    if ( *(_WORD *)&State->klass->_2.rank )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v14;
        p_offset += 2;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)(&klass->vtable._4_CompareTo + *(_DWORD *)p_offset);
    }
    else
    {
LABEL_16:
      v16 = sub_1C8ED7C(State, SimpleAnimation_State_TypeInfo, 4);
    }
    (*(void (__fastcall **)(System_String_o *, _QWORD, long double))v16)(v13, *(_QWORD *)(v16 + 8), v3);
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
LABEL_21:
      sub_1C3E7C0(State, v8);
    SimpleAnimation__Play_66582224((SimpleAnimation_o *)State, currentAnimationName, 0);
    this->fields.currentAnimationName = currentAnimationName;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.currentAnimationName, (int32_t)currentAnimationName, v17, v18);
  }
}


void WarBoardBGEffectComponent__Stop(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v4; // x1
  SimpleAnimation_o *v5; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v8; // x19
  __int64 v9; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v11; // x0

  if ( (byte_4C545AA & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    byte_4C545AA = 1;
  }
  this->fields.loop = 0;
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    v5 = this->fields.simpleAnimationComponent;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
    Item = SimpleAnimation__get_Item(v5, this->fields.currentAnimationName, 0);
    if ( Item )
    {
      klass = Item->klass;
      v8 = Item;
      v9 = *(unsigned __int16 *)&Item->klass->_2.rank;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v9;
          p_offset += 2;
          if ( !v9 )
            goto LABEL_12;
        }
        v11 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18];
      }
      else
      {
LABEL_12:
        v11 = sub_1C8ED7C(Item, SimpleAnimation_State_TypeInfo, 18);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))v11)(v8, 1, *(_QWORD *)(v11 + 8));
    }
  }
}


void WarBoardBGEffectComponent__StopAnimation(
        WarBoardBGEffectComponent_o *this,
        bool playAfterCurrentAnim,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  const MethodInfo *v6; // x1
  SimpleAnimation_o *v7; // x0

  if ( (byte_4C545A9 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C545A9 = 1;
  }
  this->fields.status = 5;
  this->fields.loop = 0;
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    if ( playAfterCurrentAnim )
    {
      WarBoardBGEffectComponent__Stop(this, v6);
    }
    else
    {
      v7 = this->fields.simpleAnimationComponent;
      if ( !v7 )
        sub_1C3E7C0(0, v6);
      SimpleAnimation__Stop(v7, 0);
    }
  }
}


void WarBoardBGEffectComponent__Update(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  long double v2; // q8
  int32_t status; // w8
  float totaltime; // s8
  System_String_o **p_requestAnimation; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  __int64 v8; // x1
  SimpleAnimation_o *State; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v19; // x21
  __int64 v20; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v22; // x0
  struct System_String_o **p_playAnimation; // x0
  struct System_String_o *v24; // x1
  struct System_String_o *requestAnimation; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  float v28; // s0

  if ( (byte_4C545B1 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SimpleAnimation_State_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C545B1 = 1;
  }
  status = this->fields.status;
  this->fields.oldStatus = status;
  if ( (status | 2) != 2 )
  {
    totaltime = this->fields.totaltime;
    this->fields.totaltime = totaltime + UnityEngine_Time__get_deltaTime(0);
    p_requestAnimation = &this->fields.requestAnimation;
    if ( !this->fields.requestAnimation )
    {
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          sub_1C3E508((CGThumbnailListItem_o *)&this->fields.playAnimation, 0, v10, v11);
        }
      }
      if ( this->fields.endtime < this->fields.totaltime )
        ((void (__fastcall *)(WarBoardBGEffectComponent_o *, const MethodInfo *))this->klass->vtable._4_NextPlayAnimation.methodPtr)(
          this,
          this->klass->vtable._4_NextPlayAnimation.method);
      if ( !*p_requestAnimation )
        return;
    }
    v12 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v12, 0, 0) )
    {
      State = this->fields.simpleAnimationComponent;
      if ( !State )
        goto LABEL_45;
      if ( SimpleAnimation__CheckPlaying(State, 0) )
        return;
    }
    if ( !System_String__op_Inequality(*p_requestAnimation, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      this->fields.playAnimation = 0;
      p_playAnimation = &this->fields.playAnimation;
      LODWORD(v24) = 0;
LABEL_40:
      sub_1C3E508((CGThumbnailListItem_o *)p_playAnimation, (int32_t)v24, v13, v14);
      goto LABEL_41;
    }
    v15 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v15, 0, 0) )
      goto LABEL_41;
    State = this->fields.simpleAnimationComponent;
    if ( State )
    {
      if ( !SimpleAnimation__get_Item(State, *p_requestAnimation, 0) )
      {
LABEL_41:
        if ( this->fields.status == 5 )
        {
          v28 = this->fields.totaltime;
          if ( v28 > this->fields.endtime )
            this->fields.endtime = v28;
        }
        *p_requestAnimation = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.requestAnimation, 0, v16, v17);
        return;
      }
      State = this->fields.simpleAnimationComponent;
      if ( State )
      {
        State = (SimpleAnimation_o *)SimpleAnimation__GetState(State, this->fields.requestAnimation, 0);
        if ( State )
        {
          klass = State->klass;
          *(float *)&v2 = this->fields.totaltime;
          v19 = State;
          v20 = *(unsigned __int16 *)&State->klass->_2.rank;
          if ( *(_WORD *)&State->klass->_2.rank )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v20;
              p_offset += 2;
              if ( !v20 )
                goto LABEL_34;
            }
            v22 = (__int64)(&klass->vtable._4_OnEnable + *(_DWORD *)p_offset);
          }
          else
          {
LABEL_34:
            v22 = sub_1C8ED7C(State, SimpleAnimation_State_TypeInfo, 4);
          }
          (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v22)(v19, *(_QWORD *)(v22 + 8), v2);
          State = this->fields.simpleAnimationComponent;
          if ( State )
          {
            SimpleAnimation__Rewind_66584484(State, this->fields.requestAnimation, 0);
            State = this->fields.simpleAnimationComponent;
            if ( State )
            {
              SimpleAnimation__Play_66582224(State, this->fields.requestAnimation, 0);
              requestAnimation = this->fields.requestAnimation;
              this->fields.currentAnimationName = requestAnimation;
              sub_1C3E508(
                (CGThumbnailListItem_o *)&this->fields.currentAnimationName,
                (int32_t)requestAnimation,
                v26,
                v27);
              v24 = this->fields.requestAnimation;
              this->fields.playAnimation = v24;
              p_playAnimation = &this->fields.playAnimation;
              goto LABEL_40;
            }
          }
        }
      }
    }
LABEL_45:
    sub_1C3E7C0(State, v8);
  }
}