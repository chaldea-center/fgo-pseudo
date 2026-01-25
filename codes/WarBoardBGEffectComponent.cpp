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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  UnityEngine_Object_o *v12; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *m_Clip; // x21
  struct System_String_o *name; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CEBE2A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEBE2A = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)Component_object;
  p_simpleAnimationComponent = &this->fields.simpleAnimationComponent;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.simpleAnimationComponent,
    (int32_t)Component_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    if ( !*p_simpleAnimationComponent )
      goto LABEL_14;
    m_Clip = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)->fields.m_Clip;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
    if ( ((unsigned __int8)v12 & 1) != 0 )
    {
      if ( *p_simpleAnimationComponent )
      {
        v12 = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)->fields.m_Clip;
        if ( v12 )
        {
          name = UnityEngine_Object__get_name(v12, 0);
          this->fields.currentAnimationName = name;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.currentAnimationName,
            (int32_t)name,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          return;
        }
      }
LABEL_14:
      sub_1C7BD40(v12, v13);
    }
  }
}


void WarBoardBGEffectComponent__NextPlayAnimation(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  bool v4; // w0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t status; // w8
  SimpleAnimation_o *v12; // x20
  System_String_o *v13; // x0
  struct System_String_o *v14; // x1
  SimpleAnimation_State_o *Item; // x20
  struct System_String_o **p_requestAnimation; // x0
  SimpleAnimation_o *v17; // x20
  System_String_c *v18; // x8
  System_String_o *currentAnimationName; // x21
  __int64 v20; // x9
  SimpleAnimation_State_c **v21; // x10
  __int64 v22; // x0
  System_String_o *v23; // x0
  struct SimpleAnimation_o *v24; // x8
  UnityEngine_Object_o *m_Clip; // x21
  struct SimpleAnimation_o *v26; // x20
  System_String_o *name; // x0
  SimpleAnimation_State_c *klass; // x8
  __int64 v29; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v31; // x0

  if ( (byte_4CEBE29 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16625/*"_loop"*/);
    sub_1C7BAE8(&StringLiteral_16609/*"_end"*/);
    byte_4CEBE29 = 1;
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
        v14 = 0;
        this->fields.status = 5;
LABEL_42:
        this->fields.requestAnimation = v14;
        p_requestAnimation = &this->fields.requestAnimation;
        goto LABEL_43;
      }
      v12 = this->fields.simpleAnimationComponent;
      v13 = System_String__Concat_64176912(this->fields.animationName, (System_String_o *)StringLiteral_16625/*"_loop"*/, 0);
      if ( v12 )
      {
        Item = SimpleAnimation__get_Item(v12, v13, 0);
        if ( !Item )
          goto LABEL_10;
LABEL_35:
        klass = Item->klass;
        v29 = *(unsigned __int16 *)&Item->klass->_2.rank;
        if ( *(_WORD *)&Item->klass->_2.rank )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v29;
            p_offset += 2;
            if ( !v29 )
              goto LABEL_39;
          }
          v31 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9];
        }
        else
        {
LABEL_39:
          v31 = sub_1C51E70(Item, SimpleAnimation_State_TypeInfo, 9);
        }
        v13 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v31)(
                                   Item,
                                   *(_QWORD *)(v31 + 8));
        v14 = v13;
        if ( this )
          goto LABEL_42;
      }
    }
    else
    {
      if ( status != 5 )
      {
        v14 = 0;
        goto LABEL_42;
      }
      v17 = this->fields.simpleAnimationComponent;
      v13 = System_String__Concat_64176912(this->fields.animationName, (System_String_o *)StringLiteral_16609/*"_end"*/, 0);
      if ( v17 )
      {
        v13 = (System_String_o *)SimpleAnimation__get_Item(v17, v13, 0);
        Item = (SimpleAnimation_State_o *)v13;
        if ( !v13 )
          goto LABEL_26;
        v18 = v13->klass;
        currentAnimationName = this->fields.currentAnimationName;
        v20 = *(unsigned __int16 *)&v13->klass->_2.rank;
        if ( *(_WORD *)&v13->klass->_2.rank )
        {
          v21 = (SimpleAnimation_State_c **)&v18->_1.interfaceOffsets->offset;
          while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v20;
            v21 += 2;
            if ( !v20 )
              goto LABEL_22;
          }
          v22 = (__int64)(&v18->vtable._9_GetTypeCode + *(_DWORD *)v21);
        }
        else
        {
LABEL_22:
          v22 = sub_1C51E70(v13, SimpleAnimation_State_TypeInfo, 9);
        }
        v23 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v22)(
                                   Item,
                                   *(_QWORD *)(v22 + 8));
        v13 = (System_String_o *)System_String__op_Equality(currentAnimationName, v23, 0);
        if ( ((unsigned __int8)v13 & 1) != 0 )
        {
LABEL_26:
          v24 = this->fields.simpleAnimationComponent;
          if ( !v24 )
            goto LABEL_45;
          m_Clip = (UnityEngine_Object_o *)v24->fields.m_Clip;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v13 = (System_String_o *)UnityEngine_Object__op_Inequality(m_Clip, 0, 0);
          if ( ((unsigned __int8)v13 & 1) != 0 )
          {
            v26 = this->fields.simpleAnimationComponent;
            if ( !v26 )
              goto LABEL_45;
            v13 = (System_String_o *)v26->fields.m_Clip;
            if ( !v13 )
              goto LABEL_45;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v13, 0);
            v13 = (System_String_o *)SimpleAnimation__get_Item(v26, name, 0);
            Item = (SimpleAnimation_State_o *)v13;
            this->fields.status = 1;
          }
          this->fields.totaltime = 0.0;
        }
        if ( Item )
          goto LABEL_35;
        v14 = 0;
        if ( this )
          goto LABEL_42;
      }
    }
LABEL_45:
    sub_1C7BD40(v13, v14);
  }
  if ( status == 4 && !this->fields.loop )
    this->fields.status = 5;
  this->fields.requestAnimation = 0;
  p_requestAnimation = &this->fields.requestAnimation;
  LODWORD(v14) = 0;
LABEL_43:
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_requestAnimation, (int32_t)v14, v5, v6, v7, v8, v9, v10);
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
  if ( (byte_4CEBE27 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    this = (WarBoardBGEffectComponent_o *)sub_1C7BAE8(&StringLiteral_24455/*"true"*/);
    byte_4CEBE27 = 1;
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
             (System_String_o *)StringLiteral_24455/*"true"*/,
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
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
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
          sub_1C7BD40(this, eventStr);
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

  if ( (byte_4CEBE25 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEBE25 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    v5 = this->fields.simpleAnimationComponent;
    if ( !v5 )
      sub_1C7BD40(0, v4);
    SimpleAnimation__Stop_67119476(v5, this->fields.currentAnimationName, 0);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_String_o **p_animationName; // x0
  SimpleAnimation_o *v16; // x0
  SimpleAnimation_o *v17; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v20; // x21
  __int64 v21; // x9
  SimpleAnimation_State_c *v22; // x1
  SimpleAnimation_State_c **p_offset; // x10
  SimpleAnimation_State_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x9
  __int64 v32; // x0
  SimpleAnimation_State_c *v33; // x8
  __int64 v34; // x9
  SimpleAnimation_State_c **v35; // x10
  __int64 v36; // x0
  struct System_String_o *v37; // x1

  if ( (byte_4CEBE28 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16644/*"_start"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEBE28 = 1;
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
      v16 = this->fields.simpleAnimationComponent;
      if ( !v16 )
        goto LABEL_37;
      SimpleAnimation__Stop(v16, 0);
    }
    v17 = this->fields.simpleAnimationComponent;
    v16 = (SimpleAnimation_o *)System_String__Concat_64176912(animName, (System_String_o *)StringLiteral_16644/*"_start"*/, 0);
    if ( !v17 )
LABEL_37:
      sub_1C7BD40(v16, v8);
    Item = SimpleAnimation__get_Item(v17, (System_String_o *)v16, 0);
    if ( Item )
    {
      klass = Item->klass;
      v20 = Item;
      v21 = *(unsigned __int16 *)&Item->klass->_2.rank;
      v22 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)&Item->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v21;
          p_offset += 2;
          if ( !v21 )
            goto LABEL_24;
        }
LABEL_25:
        v32 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13];
LABEL_26:
        this->fields.endtime = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v32)(
                                 v20,
                                 *(_QWORD *)(v32 + 8));
        v33 = v20->klass;
        v34 = *(unsigned __int16 *)&v20->klass->_2.rank;
        if ( *(_WORD *)&v20->klass->_2.rank )
        {
          v35 = (SimpleAnimation_State_c **)&v33->_1.interfaceOffsets->offset;
          while ( *(v35 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v34;
            v35 += 2;
            if ( !v34 )
              goto LABEL_30;
          }
          v36 = (__int64)&v33->vtable[*(_DWORD *)v35 + 9];
        }
        else
        {
LABEL_30:
          v36 = sub_1C51E70(v20, SimpleAnimation_State_TypeInfo, 9);
        }
        v16 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v36)(
                                     v20,
                                     *(_QWORD *)(v36 + 8));
        if ( this )
        {
          v37 = (struct System_String_o *)v16;
LABEL_34:
          this->fields.requestAnimation = v37;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&this->fields.requestAnimation,
            (int32_t)v37,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
          this->fields.animationName = animName;
          p_animationName = &this->fields.animationName;
          goto LABEL_35;
        }
        goto LABEL_37;
      }
    }
    else
    {
      v16 = this->fields.simpleAnimationComponent;
      if ( !v16 )
        goto LABEL_37;
      v24 = SimpleAnimation__get_Item(v16, animName, 0);
      if ( !v24 )
      {
        this->fields.endtime = 0.0;
        v37 = (struct System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_34;
      }
      klass = v24->klass;
      v20 = v24;
      v31 = *(unsigned __int16 *)&v24->klass->_2.rank;
      v22 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)&v24->klass->_2.rank )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v31;
          p_offset += 2;
          if ( !v31 )
            goto LABEL_24;
        }
        goto LABEL_25;
      }
    }
LABEL_24:
    v32 = sub_1C51E70(v20, v22, 13);
    goto LABEL_26;
  }
  LODWORD(animName) = StringLiteral_1/*""*/;
  this->fields.requestAnimation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_animationName = &this->fields.requestAnimation;
LABEL_35:
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_animationName, (int32_t)animName, v9, v10, v11, v12, v13, v14);
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
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4CEBE26 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16625/*"_loop"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEBE26 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    this->fields.status = 4;
    State = System_String__Concat_64176912(animName, (System_String_o *)StringLiteral_16625/*"_loop"*/, 0);
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
      v16 = sub_1C51E70(State, SimpleAnimation_State_TypeInfo, 4);
    }
    (*(void (__fastcall **)(System_String_o *, _QWORD, long double))v16)(v13, *(_QWORD *)(v16 + 8), v3);
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
LABEL_21:
      sub_1C7BD40(State, v8);
    SimpleAnimation__Play_67121960((SimpleAnimation_o *)State, currentAnimationName, 0);
    this->fields.currentAnimationName = currentAnimationName;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.currentAnimationName,
      (int32_t)currentAnimationName,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
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

  if ( (byte_4CEBE24 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    byte_4CEBE24 = 1;
  }
  this->fields.loop = 0;
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0, 0) )
  {
    v5 = this->fields.simpleAnimationComponent;
    if ( !v5 )
      sub_1C7BD40(0, v4);
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
        v11 = sub_1C51E70(Item, SimpleAnimation_State_TypeInfo, 18);
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

  if ( (byte_4CEBE23 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEBE23 = 1;
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
        sub_1C7BD40(0, v6);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Object_o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_Object_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v31; // x21
  __int64 v32; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v34; // x0
  struct System_String_o **p_playAnimation; // x0
  struct System_String_o *v36; // x1
  struct System_String_o *requestAnimation; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  float v44; // s0

  if ( (byte_4CEBE2B & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SimpleAnimation_State_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEBE2B = 1;
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
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.playAnimation, 0, v10, v11, v12, v13, v14, v15);
        }
      }
      if ( this->fields.endtime < this->fields.totaltime )
        ((void (__fastcall *)(WarBoardBGEffectComponent_o *, const MethodInfo *))this->klass->vtable._4_NextPlayAnimation.methodPtr)(
          this,
          this->klass->vtable._4_NextPlayAnimation.method);
      if ( !*p_requestAnimation )
        return;
    }
    v16 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
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
      LODWORD(v36) = 0;
LABEL_40:
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_playAnimation, (int32_t)v36, v17, v18, v19, v20, v21, v22);
      goto LABEL_41;
    }
    v23 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v23, 0, 0) )
      goto LABEL_41;
    State = this->fields.simpleAnimationComponent;
    if ( State )
    {
      if ( !SimpleAnimation__get_Item(State, *p_requestAnimation, 0) )
      {
LABEL_41:
        if ( this->fields.status == 5 )
        {
          v44 = this->fields.totaltime;
          if ( v44 > this->fields.endtime )
            this->fields.endtime = v44;
        }
        *p_requestAnimation = 0;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.requestAnimation, 0, v24, v25, v26, v27, v28, v29);
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
          v31 = State;
          v32 = *(unsigned __int16 *)&State->klass->_2.rank;
          if ( *(_WORD *)&State->klass->_2.rank )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v32;
              p_offset += 2;
              if ( !v32 )
                goto LABEL_34;
            }
            v34 = (__int64)(&klass->vtable._4_ApplyUpdateMode + *(_DWORD *)p_offset);
          }
          else
          {
LABEL_34:
            v34 = sub_1C51E70(State, SimpleAnimation_State_TypeInfo, 4);
          }
          (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v34)(v31, *(_QWORD *)(v34 + 8), v2);
          State = this->fields.simpleAnimationComponent;
          if ( State )
          {
            SimpleAnimation__Rewind_67124284(State, this->fields.requestAnimation, 0);
            State = this->fields.simpleAnimationComponent;
            if ( State )
            {
              SimpleAnimation__Play_67121960(State, this->fields.requestAnimation, 0);
              requestAnimation = this->fields.requestAnimation;
              this->fields.currentAnimationName = requestAnimation;
              sub_1C7BA8C(
                (GrandQuestFolderBoardItem_o *)&this->fields.currentAnimationName,
                (int32_t)requestAnimation,
                v38,
                v39,
                v40,
                v41,
                v42,
                v43);
              v36 = this->fields.requestAnimation;
              this->fields.playAnimation = v36;
              p_playAnimation = &this->fields.playAnimation;
              goto LABEL_40;
            }
          }
        }
      }
    }
LABEL_45:
    sub_1C7BD40(State, v8);
  }
}