void __fastcall WarBoardBGEffectComponent___ctor(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.endtime = 5.0;
  this->fields.loop = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardBGEffectComponent__Awake(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Component_object; // x0
  struct SimpleAnimation_o **p_simpleAnimationComponent; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  UnityEngine_Object_o *v9; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *monitor; // x21
  struct System_String_o *name; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FBFFB & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, method);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v3);
    byte_49FBFFB = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)Component_object;
  p_simpleAnimationComponent = &this->fields.simpleAnimationComponent;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.simpleAnimationComponent,
    (int32_t)Component_object,
    v6,
    v7);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    if ( !*p_simpleAnimationComponent )
      goto LABEL_14;
    monitor = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      if ( *p_simpleAnimationComponent )
      {
        v9 = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)[1].monitor;
        if ( v9 )
        {
          name = UnityEngine_Object__get_name(v9, 0LL);
          this->fields.currentAnimationName = name;
          sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.currentAnimationName, (int32_t)name, v13, v14);
          return;
        }
      }
LABEL_14:
      sub_1B64ACC(v9, v10);
    }
  }
}


void __fastcall WarBoardBGEffectComponent__NextPlayAnimation(
        WarBoardBGEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  bool v7; // w0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t status; // w8
  SimpleAnimation_o *v11; // x20
  System_String_o *v12; // x0
  struct System_String_o *v13; // x1
  SimpleAnimation_State_o *Item; // x20
  struct System_String_o **p_requestAnimation; // x0
  SimpleAnimation_o *v16; // x20
  System_String_c *v17; // x8
  System_String_o *currentAnimationName; // x21
  __int64 v19; // x9
  SimpleAnimation_State_c **v20; // x10
  __int64 v21; // x0
  System_String_o *v22; // x0
  struct SimpleAnimation_o *v23; // x8
  UnityEngine_Object_o *monitor; // x21
  struct SimpleAnimation_o *v25; // x20
  System_String_o *name; // x0
  SimpleAnimation_State_c *klass; // x8
  __int64 v28; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49FBFFA & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&SimpleAnimation_State_TypeInfo, v3);
    sub_1B64870(&StringLiteral_16485/*"_loop"*/, v4);
    sub_1B64870(&StringLiteral_16470/*"_end"*/, v5);
    byte_49FBFFA = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  status = this->fields.status;
  if ( v7 )
  {
    if ( status == 4 )
    {
      if ( !this->fields.loop )
      {
LABEL_10:
        v13 = 0LL;
        this->fields.status = 5;
LABEL_42:
        this->fields.requestAnimation = v13;
        p_requestAnimation = &this->fields.requestAnimation;
        goto LABEL_43;
      }
      v11 = this->fields.simpleAnimationComponent;
      v12 = System_String__Concat_61383576(this->fields.animationName, (System_String_o *)StringLiteral_16485/*"_loop"*/, 0LL);
      if ( v11 )
      {
        Item = SimpleAnimation__get_Item(v11, v12, 0LL);
        if ( !Item )
          goto LABEL_10;
LABEL_35:
        klass = Item->klass;
        v28 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v28;
            p_offset += 2;
            if ( !v28 )
              goto LABEL_39;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
        }
        else
        {
LABEL_39:
          p_method = sub_1BB6850(Item, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v12 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                   Item,
                                   *(_QWORD *)(p_method + 8));
        v13 = v12;
        if ( this )
          goto LABEL_42;
      }
    }
    else
    {
      if ( status != 5 )
      {
        v13 = 0LL;
        goto LABEL_42;
      }
      v16 = this->fields.simpleAnimationComponent;
      v12 = System_String__Concat_61383576(this->fields.animationName, (System_String_o *)StringLiteral_16470/*"_end"*/, 0LL);
      if ( v16 )
      {
        v12 = (System_String_o *)SimpleAnimation__get_Item(v16, v12, 0LL);
        Item = (SimpleAnimation_State_o *)v12;
        if ( !v12 )
          goto LABEL_26;
        v17 = v12->klass;
        currentAnimationName = this->fields.currentAnimationName;
        v19 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
        {
          v20 = (SimpleAnimation_State_c **)&v17->_1.interfaceOffsets->offset;
          while ( *(v20 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v19;
            v20 += 2;
            if ( !v19 )
              goto LABEL_22;
          }
          v21 = (__int64)(&v17->vtable._9_GetTypeCode.method + 2 * *(_DWORD *)v20);
        }
        else
        {
LABEL_22:
          v21 = sub_1BB6850(v12, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v22 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v21)(
                                   Item,
                                   *(_QWORD *)(v21 + 8));
        v12 = (System_String_o *)System_String__op_Equality(currentAnimationName, v22, 0LL);
        if ( ((unsigned __int8)v12 & 1) != 0 )
        {
LABEL_26:
          v23 = this->fields.simpleAnimationComponent;
          if ( !v23 )
            goto LABEL_45;
          monitor = (UnityEngine_Object_o *)v23[1].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v12 = (System_String_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
          if ( ((unsigned __int8)v12 & 1) != 0 )
          {
            v25 = this->fields.simpleAnimationComponent;
            if ( !v25 )
              goto LABEL_45;
            v12 = (System_String_o *)v25[1].monitor;
            if ( !v12 )
              goto LABEL_45;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v12, 0LL);
            v12 = (System_String_o *)SimpleAnimation__get_Item(v25, name, 0LL);
            Item = (SimpleAnimation_State_o *)v12;
            this->fields.status = 1;
          }
          this->fields.totaltime = 0.0;
        }
        if ( Item )
          goto LABEL_35;
        v13 = 0LL;
        if ( this )
          goto LABEL_42;
      }
    }
LABEL_45:
    sub_1B64ACC(v12, v13);
  }
  if ( status == 4 && !this->fields.loop )
    this->fields.status = 5;
  this->fields.requestAnimation = 0LL;
  p_requestAnimation = &this->fields.requestAnimation;
  LODWORD(v13) = 0;
LABEL_43:
  sub_1B64814((ServantStatusBattleListViewItem_o *)p_requestAnimation, (int32_t)v13, v8, v9);
}


void __fastcall WarBoardBGEffectComponent__OtherObjectPlayAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *eventStr,
        const MethodInfo *method)
{
  WarBoardBGEffectComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x19
  System_String_o *simpleAnimationComponent; // x21
  bool v9; // w20
  UnityEngine_Object_o *v10; // x21
  Il2CppObject *Component_object; // x21
  const MethodInfo *v12; // x3

  v4 = this;
  if ( (byte_49FBFF8 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___, eventStr);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v5);
    this = (WarBoardBGEffectComponent_o *)sub_1B64870(&StringLiteral_23984/*"true"*/, v6);
    byte_49FBFF8 = 1;
  }
  if ( v4->fields.oldStatus == v4->fields.status )
  {
    if ( !eventStr )
      goto LABEL_17;
    this = (WarBoardBGEffectComponent_o *)System_String__Split(eventStr, 0x2Fu, 0, 0LL);
    if ( !this )
      goto LABEL_17;
    if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 3 )
    {
      simpleAnimationComponent = (System_String_o *)this->fields.simpleAnimationComponent;
      v7 = *(System_String_o **)&this->fields.status;
      v9 = System_String__op_Equality(
             *(System_String_o **)&this->fields.totaltime,
             (System_String_o *)StringLiteral_23984/*"true"*/,
             0LL);
      v10 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(simpleAnimationComponent, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (WarBoardBGEffectComponent_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v10 )
          goto LABEL_17;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v10,
                             (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (WarBoardBGEffectComponent_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Component_object,
                                                0LL,
                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( Component_object )
          {
            WarBoardBGEffectComponent__PlayAnimation((WarBoardBGEffectComponent_o *)Component_object, v7, v9, v12);
            return;
          }
LABEL_17:
          sub_1B64ACC(this, eventStr);
        }
      }
    }
  }
}


void __fastcall WarBoardBGEffectComponent__PauseAnimation(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v4; // x1
  SimpleAnimation_o *v5; // x0

  if ( (byte_49FBFF6 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    byte_49FBFF6 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v5 = this->fields.simpleAnimationComponent;
    if ( !v5 )
      sub_1B64ACC(0LL, v4);
    SimpleAnimation__Stop_63518756(v5, this->fields.currentAnimationName, 0LL);
    this->fields.status = 2;
  }
}


void __fastcall WarBoardBGEffectComponent__PlayAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *animName,
        bool playAfterCurrentAnim,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  const MethodInfo *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_String_o **p_animationName; // x0
  SimpleAnimation_o *v15; // x0
  SimpleAnimation_o *v16; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v19; // x21
  __int64 v20; // x9
  SimpleAnimation_State_c *v21; // x1
  SimpleAnimation_State_c **p_offset; // x10
  SimpleAnimation_State_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x9
  __int64 p_method; // x0
  SimpleAnimation_State_c *v28; // x8
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x0
  struct System_String_o *v32; // x1

  v5 = animName;
  if ( (byte_49FBFF9 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, animName);
    sub_1B64870(&SimpleAnimation_State_TypeInfo, v7);
    sub_1B64870(&StringLiteral_16506/*"_start"*/, v8);
    sub_1B64870(&StringLiteral_1/*""*/, v9);
    byte_49FBFF9 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    if ( playAfterCurrentAnim )
    {
      WarBoardBGEffectComponent__Stop(this, v11);
    }
    else
    {
      v15 = this->fields.simpleAnimationComponent;
      if ( !v15 )
        goto LABEL_37;
      SimpleAnimation__Stop(v15, 0LL);
    }
    v16 = this->fields.simpleAnimationComponent;
    v15 = (SimpleAnimation_o *)System_String__Concat_61383576(v5, (System_String_o *)StringLiteral_16506/*"_start"*/, 0LL);
    if ( !v16 )
LABEL_37:
      sub_1B64ACC(v15, v11);
    Item = SimpleAnimation__get_Item(v16, (System_String_o *)v15, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v19 = Item;
      v20 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      v21 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v20;
          p_offset += 2;
          if ( !v20 )
            goto LABEL_24;
        }
LABEL_25:
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
LABEL_26:
        this->fields.endtime = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                 v19,
                                 *(_QWORD *)(p_method + 8));
        v28 = v19->klass;
        v29 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
        {
          v30 = (SimpleAnimation_State_c **)&v28->_1.interfaceOffsets->offset;
          while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v29;
            v30 += 2;
            if ( !v29 )
              goto LABEL_30;
          }
          v31 = (__int64)&v28->vtable[*(_DWORD *)v30 + 9].method;
        }
        else
        {
LABEL_30:
          v31 = sub_1BB6850(v19, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v15 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v31)(
                                     v19,
                                     *(_QWORD *)(v31 + 8));
        if ( this )
        {
          v32 = (struct System_String_o *)v15;
LABEL_34:
          this->fields.requestAnimation = v32;
          sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.requestAnimation, (int32_t)v32, v24, v25);
          this->fields.animationName = v5;
          p_animationName = &this->fields.animationName;
          goto LABEL_35;
        }
        goto LABEL_37;
      }
    }
    else
    {
      v15 = this->fields.simpleAnimationComponent;
      if ( !v15 )
        goto LABEL_37;
      v23 = SimpleAnimation__get_Item(v15, v5, 0LL);
      if ( !v23 )
      {
        this->fields.endtime = 0.0;
        v32 = (struct System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_34;
      }
      klass = v23->klass;
      v19 = v23;
      v26 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
      v21 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v26;
          p_offset += 2;
          if ( !v26 )
            goto LABEL_24;
        }
        goto LABEL_25;
      }
    }
LABEL_24:
    p_method = sub_1BB6850(v19, v21, 13LL);
    goto LABEL_26;
  }
  LODWORD(v5) = (_DWORD)StringLiteral_1/*""*/;
  this->fields.requestAnimation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_animationName = &this->fields.requestAnimation;
LABEL_35:
  sub_1B64814((ServantStatusBattleListViewItem_o *)p_animationName, (int32_t)v5, v12, v13);
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.status = 4;
}


void __fastcall WarBoardBGEffectComponent__ResumeAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *animName,
        const MethodInfo *method)
{
  long double v3; // q8
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *State; // x0
  __int64 v11; // x1
  System_String_o *currentAnimationName; // x20
  SimpleAnimation_State_o *Item; // x21
  bool v14; // w0
  System_String_c *klass; // x8
  System_String_o *v16; // x21
  __int64 v17; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49FBFF7 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, animName);
    sub_1B64870(&SimpleAnimation_State_TypeInfo, v6);
    sub_1B64870(&StringLiteral_16485/*"_loop"*/, v7);
    sub_1B64870(&StringLiteral_1/*""*/, v8);
    byte_49FBFF7 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    this->fields.status = 4;
    State = System_String__Concat_61383576(animName, (System_String_o *)StringLiteral_16485/*"_loop"*/, 0LL);
    if ( !this->fields.simpleAnimationComponent )
      goto LABEL_21;
    currentAnimationName = State;
    Item = SimpleAnimation__get_Item(this->fields.simpleAnimationComponent, State, 0LL);
    v14 = System_String__op_Equality(currentAnimationName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !Item || v14 )
      currentAnimationName = this->fields.currentAnimationName;
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
      goto LABEL_21;
    State = (System_String_o *)SimpleAnimation__GetState((SimpleAnimation_o *)State, currentAnimationName, 0LL);
    if ( !State )
      goto LABEL_21;
    klass = State->klass;
    *(float *)&v3 = this->fields.totaltime;
    v16 = State;
    v17 = *(unsigned __int16 *)(&State->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&State->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v17;
        p_offset += 2;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)(&klass->vtable._4_CompareTo.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_16:
      v19 = sub_1BB6850(State, SimpleAnimation_State_TypeInfo, 4LL);
    }
    (*(void (__fastcall **)(System_String_o *, _QWORD, long double))v19)(v16, *(_QWORD *)(v19 + 8), v3);
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
LABEL_21:
      sub_1B64ACC(State, v11);
    SimpleAnimation__Play_63521240((SimpleAnimation_o *)State, currentAnimationName, 0LL);
    this->fields.currentAnimationName = currentAnimationName;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)&this->fields.currentAnimationName,
      (int32_t)currentAnimationName,
      v20,
      v21);
  }
}


void __fastcall WarBoardBGEffectComponent__Stop(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v9; // x19
  __int64 v10; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_49FBFF5 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&SimpleAnimation_State_TypeInfo, v3);
    byte_49FBFF5 = 1;
  }
  this->fields.loop = 0;
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v6 = this->fields.simpleAnimationComponent;
    if ( !v6 )
      sub_1B64ACC(0LL, v5);
    Item = SimpleAnimation__get_Item(v6, this->fields.currentAnimationName, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v9 = Item;
      v10 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v10;
          p_offset += 2;
          if ( !v10 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
      }
      else
      {
LABEL_12:
        p_method = sub_1BB6850(Item, SimpleAnimation_State_TypeInfo, 18LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v9, 1LL, *(_QWORD *)(p_method + 8));
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBGEffectComponent__StopAnimation(
        WarBoardBGEffectComponent_o *this,
        bool playAfterCurrentAnim,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  const MethodInfo *v6; // x1
  SimpleAnimation_o *v7; // x0

  if ( (byte_49FBFF4 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, playAfterCurrentAnim);
    byte_49FBFF4 = 1;
  }
  this->fields.status = 5;
  this->fields.loop = 0;
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    if ( playAfterCurrentAnim )
    {
      WarBoardBGEffectComponent__Stop(this, v6);
    }
    else
    {
      v7 = this->fields.simpleAnimationComponent;
      if ( !v7 )
        sub_1B64ACC(0LL, v6);
      SimpleAnimation__Stop(v7, 0LL);
    }
  }
}


void __fastcall WarBoardBGEffectComponent__Update(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  long double v2; // q8
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t status; // w8
  float totaltime; // s8
  System_String_o **p_requestAnimation; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  __int64 v10; // x1
  SimpleAnimation_o *State; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Object_o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v21; // x21
  __int64 v22; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v24; // x0
  struct System_String_o **p_playAnimation; // x0
  struct System_String_o *v26; // x1
  struct System_String_o *requestAnimation; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  float v30; // s0

  if ( (byte_49FBFFC & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    sub_1B64870(&SimpleAnimation_State_TypeInfo, v4);
    sub_1B64870(&StringLiteral_1/*""*/, v5);
    byte_49FBFFC = 1;
  }
  status = this->fields.status;
  this->fields.oldStatus = status;
  if ( (status | 2) != 2 )
  {
    totaltime = this->fields.totaltime;
    this->fields.totaltime = totaltime + UnityEngine_Time__get_deltaTime(0LL);
    p_requestAnimation = &this->fields.requestAnimation;
    if ( !this->fields.requestAnimation )
    {
      simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) && this->fields.playAnimation )
      {
        State = this->fields.simpleAnimationComponent;
        if ( !State )
          goto LABEL_45;
        if ( SimpleAnimation__CheckPlaying(State, 0LL) )
          return;
        if ( this->fields.status == 5 )
        {
          this->fields.playAnimation = 0LL;
          sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.playAnimation, 0, v12, v13);
        }
      }
      if ( this->fields.endtime < this->fields.totaltime )
        ((void (__fastcall *)(WarBoardBGEffectComponent_o *, void *))this->klass->vtable._4_NextPlayAnimation.method)(
          this,
          this->klass[1]._1.image);
      if ( !*p_requestAnimation )
        return;
    }
    v14 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
    {
      State = this->fields.simpleAnimationComponent;
      if ( !State )
        goto LABEL_45;
      if ( SimpleAnimation__CheckPlaying(State, 0LL) )
        return;
    }
    if ( !System_String__op_Inequality(*p_requestAnimation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      this->fields.playAnimation = 0LL;
      p_playAnimation = &this->fields.playAnimation;
      LODWORD(v26) = 0;
LABEL_40:
      sub_1B64814((ServantStatusBattleListViewItem_o *)p_playAnimation, (int32_t)v26, v15, v16);
      goto LABEL_41;
    }
    v17 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
      goto LABEL_41;
    State = this->fields.simpleAnimationComponent;
    if ( State )
    {
      if ( !SimpleAnimation__get_Item(State, *p_requestAnimation, 0LL) )
      {
LABEL_41:
        if ( this->fields.status == 5 )
        {
          v30 = this->fields.totaltime;
          if ( v30 > this->fields.endtime )
            this->fields.endtime = v30;
        }
        *p_requestAnimation = 0LL;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.requestAnimation, 0, v18, v19);
        return;
      }
      State = this->fields.simpleAnimationComponent;
      if ( State )
      {
        State = (SimpleAnimation_o *)SimpleAnimation__GetState(State, this->fields.requestAnimation, 0LL);
        if ( State )
        {
          klass = State->klass;
          *(float *)&v2 = this->fields.totaltime;
          v21 = State;
          v22 = *(unsigned __int16 *)(&State->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&State->klass->_2.bitflags2 + 3) )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v22;
              p_offset += 2;
              if ( !v22 )
                goto LABEL_34;
            }
            v24 = (__int64)(&klass->vtable._4_OnEnable.method + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_34:
            v24 = sub_1BB6850(State, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v24)(v21, *(_QWORD *)(v24 + 8), v2);
          State = this->fields.simpleAnimationComponent;
          if ( State )
          {
            SimpleAnimation__Rewind_63523500(State, this->fields.requestAnimation, 0LL);
            State = this->fields.simpleAnimationComponent;
            if ( State )
            {
              SimpleAnimation__Play_63521240(State, this->fields.requestAnimation, 0LL);
              requestAnimation = this->fields.requestAnimation;
              this->fields.currentAnimationName = requestAnimation;
              sub_1B64814(
                (ServantStatusBattleListViewItem_o *)&this->fields.currentAnimationName,
                (int32_t)requestAnimation,
                v28,
                v29);
              v26 = this->fields.requestAnimation;
              this->fields.playAnimation = v26;
              p_playAnimation = &this->fields.playAnimation;
              goto LABEL_40;
            }
          }
        }
      }
    }
LABEL_45:
    sub_1B64ACC(State, v10);
  }
}