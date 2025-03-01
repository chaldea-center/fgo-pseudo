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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  UnityEngine_Object_o *v13; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *monitor; // x21
  struct System_String_o *name; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BFB062 & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    byte_4BFB062 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FC82D4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)Component_object;
  p_simpleAnimationComponent = &this->fields.simpleAnimationComponent;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnimationComponent,
    (int64_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v13 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v13 & 1) != 0 )
  {
    if ( !*p_simpleAnimationComponent )
      goto LABEL_14;
    monitor = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)v13 & 1) != 0 )
    {
      if ( *p_simpleAnimationComponent )
      {
        v13 = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)[1].monitor;
        if ( v13 )
        {
          name = UnityEngine_Object__get_name(v13, 0LL);
          this->fields.currentAnimationName = name;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&this->fields.currentAnimationName,
            (int64_t)name,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22);
          return;
        }
      }
LABEL_14:
      sub_1C2E388(v13, v14);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int32_t status; // w8
  SimpleAnimation_o *v15; // x20
  System_String_o *v16; // x0
  struct System_String_o *v17; // x1
  SimpleAnimation_State_o *Item; // x20
  struct System_String_o **p_requestAnimation; // x0
  SimpleAnimation_o *v20; // x20
  System_String_c *v21; // x8
  System_String_o *currentAnimationName; // x21
  __int64 v23; // x9
  SimpleAnimation_State_c **v24; // x10
  __int64 v25; // x0
  System_String_o *v26; // x0
  struct SimpleAnimation_o *v27; // x8
  UnityEngine_Object_o *monitor; // x21
  struct SimpleAnimation_o *v29; // x20
  System_String_o *name; // x0
  SimpleAnimation_State_c *klass; // x8
  __int64 v32; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4BFB061 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_16843/*"_loop"*/, v4);
    sub_1C2E12C(&StringLiteral_16828/*"_end"*/, v5);
    byte_4BFB061 = 1;
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
        v17 = 0LL;
        this->fields.status = 5;
LABEL_42:
        this->fields.requestAnimation = v17;
        p_requestAnimation = &this->fields.requestAnimation;
        goto LABEL_43;
      }
      v15 = this->fields.simpleAnimationComponent;
      v16 = System_String__Concat_63235584(this->fields.animationName, (System_String_o *)StringLiteral_16843/*"_loop"*/, 0LL);
      if ( v15 )
      {
        Item = SimpleAnimation__get_Item(v15, v16, 0LL);
        if ( !Item )
          goto LABEL_10;
LABEL_35:
        klass = Item->klass;
        v32 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v32;
            p_offset += 2;
            if ( !v32 )
              goto LABEL_39;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
        }
        else
        {
LABEL_39:
          p_method = sub_1C8010C(Item, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v16 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                   Item,
                                   *(_QWORD *)(p_method + 8));
        v17 = v16;
        if ( this )
          goto LABEL_42;
      }
    }
    else
    {
      if ( status != 5 )
      {
        v17 = 0LL;
        goto LABEL_42;
      }
      v20 = this->fields.simpleAnimationComponent;
      v16 = System_String__Concat_63235584(this->fields.animationName, (System_String_o *)StringLiteral_16828/*"_end"*/, 0LL);
      if ( v20 )
      {
        v16 = (System_String_o *)SimpleAnimation__get_Item(v20, v16, 0LL);
        Item = (SimpleAnimation_State_o *)v16;
        if ( !v16 )
          goto LABEL_26;
        v21 = v16->klass;
        currentAnimationName = this->fields.currentAnimationName;
        v23 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
        {
          v24 = (SimpleAnimation_State_c **)&v21->_1.interfaceOffsets->offset;
          while ( *(v24 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v23;
            v24 += 2;
            if ( !v23 )
              goto LABEL_22;
          }
          v25 = (__int64)(&v21->vtable._9_GetTypeCode.method + 2 * *(_DWORD *)v24);
        }
        else
        {
LABEL_22:
          v25 = sub_1C8010C(v16, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v26 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v25)(
                                   Item,
                                   *(_QWORD *)(v25 + 8));
        v16 = (System_String_o *)System_String__op_Equality(currentAnimationName, v26, 0LL);
        if ( ((unsigned __int8)v16 & 1) != 0 )
        {
LABEL_26:
          v27 = this->fields.simpleAnimationComponent;
          if ( !v27 )
            goto LABEL_45;
          monitor = (UnityEngine_Object_o *)v27[1].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v16 = (System_String_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
          if ( ((unsigned __int8)v16 & 1) != 0 )
          {
            v29 = this->fields.simpleAnimationComponent;
            if ( !v29 )
              goto LABEL_45;
            v16 = (System_String_o *)v29[1].monitor;
            if ( !v16 )
              goto LABEL_45;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v16, 0LL);
            v16 = (System_String_o *)SimpleAnimation__get_Item(v29, name, 0LL);
            Item = (SimpleAnimation_State_o *)v16;
            this->fields.status = 1;
          }
          this->fields.totaltime = 0.0;
        }
        if ( Item )
          goto LABEL_35;
        v17 = 0LL;
        if ( this )
          goto LABEL_42;
      }
    }
LABEL_45:
    sub_1C2E388(v16, v17);
  }
  if ( status == 4 && !this->fields.loop )
    this->fields.status = 5;
  this->fields.requestAnimation = 0LL;
  p_requestAnimation = &this->fields.requestAnimation;
  v17 = 0LL;
LABEL_43:
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_requestAnimation, (int64_t)v17, v8, v9, v10, v11, v12, v13);
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
  if ( (byte_4BFB05F & 1) == 0 )
  {
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___, eventStr);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    this = (WarBoardBGEffectComponent_o *)sub_1C2E12C(&StringLiteral_24537/*"true"*/, v6);
    byte_4BFB05F = 1;
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
             (System_String_o *)StringLiteral_24537/*"true"*/,
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
                             (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
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
          sub_1C2E388(this, eventStr);
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

  if ( (byte_4BFB05D & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFB05D = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v5 = this->fields.simpleAnimationComponent;
    if ( !v5 )
      sub_1C2E388(0LL, v4);
    SimpleAnimation__Stop_65371476(v5, this->fields.currentAnimationName, 0LL);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_String_o **p_animationName; // x0
  SimpleAnimation_o *v19; // x0
  SimpleAnimation_o *v20; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v23; // x21
  __int64 v24; // x9
  SimpleAnimation_State_c *v25; // x1
  SimpleAnimation_State_c **p_offset; // x10
  SimpleAnimation_State_o *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x9
  __int64 p_method; // x0
  SimpleAnimation_State_c *v36; // x8
  __int64 v37; // x9
  SimpleAnimation_State_c **v38; // x10
  __int64 v39; // x0
  struct System_String_o *v40; // x1

  v5 = animName;
  if ( (byte_4BFB060 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, animName);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_16864/*"_start"*/, v8);
    sub_1C2E12C(&StringLiteral_1/*""*/, v9);
    byte_4BFB060 = 1;
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
      v19 = this->fields.simpleAnimationComponent;
      if ( !v19 )
        goto LABEL_37;
      SimpleAnimation__Stop(v19, 0LL);
    }
    v20 = this->fields.simpleAnimationComponent;
    v19 = (SimpleAnimation_o *)System_String__Concat_63235584(v5, (System_String_o *)StringLiteral_16864/*"_start"*/, 0LL);
    if ( !v20 )
LABEL_37:
      sub_1C2E388(v19, v11);
    Item = SimpleAnimation__get_Item(v20, (System_String_o *)v19, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v23 = Item;
      v24 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      v25 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v24;
          p_offset += 2;
          if ( !v24 )
            goto LABEL_24;
        }
LABEL_25:
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
LABEL_26:
        this->fields.endtime = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                 v23,
                                 *(_QWORD *)(p_method + 8));
        v36 = v23->klass;
        v37 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
        {
          v38 = (SimpleAnimation_State_c **)&v36->_1.interfaceOffsets->offset;
          while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v37;
            v38 += 2;
            if ( !v37 )
              goto LABEL_30;
          }
          v39 = (__int64)&v36->vtable[*(_DWORD *)v38 + 9].method;
        }
        else
        {
LABEL_30:
          v39 = sub_1C8010C(v23, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v19 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v39)(
                                     v23,
                                     *(_QWORD *)(v39 + 8));
        if ( this )
        {
          v40 = (struct System_String_o *)v19;
LABEL_34:
          this->fields.requestAnimation = v40;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&this->fields.requestAnimation,
            (int64_t)v40,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          this->fields.animationName = v5;
          p_animationName = &this->fields.animationName;
          goto LABEL_35;
        }
        goto LABEL_37;
      }
    }
    else
    {
      v19 = this->fields.simpleAnimationComponent;
      if ( !v19 )
        goto LABEL_37;
      v27 = SimpleAnimation__get_Item(v19, v5, 0LL);
      if ( !v27 )
      {
        this->fields.endtime = 0.0;
        v40 = (struct System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_34;
      }
      klass = v27->klass;
      v23 = v27;
      v34 = *(unsigned __int16 *)(&v27->klass->_2.bitflags2 + 3);
      v25 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)(&v27->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v34;
          p_offset += 2;
          if ( !v34 )
            goto LABEL_24;
        }
        goto LABEL_25;
      }
    }
LABEL_24:
    p_method = sub_1C8010C(v23, v25, 13LL);
    goto LABEL_26;
  }
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  this->fields.requestAnimation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_animationName = &this->fields.requestAnimation;
LABEL_35:
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_animationName, (int64_t)v5, v12, v13, v14, v15, v16, v17);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BFB05E & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, animName);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_16843/*"_loop"*/, v7);
    sub_1C2E12C(&StringLiteral_1/*""*/, v8);
    byte_4BFB05E = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    this->fields.status = 4;
    State = System_String__Concat_63235584(animName, (System_String_o *)StringLiteral_16843/*"_loop"*/, 0LL);
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
      v19 = sub_1C8010C(State, SimpleAnimation_State_TypeInfo, 4LL);
    }
    (*(void (__fastcall **)(System_String_o *, _QWORD, long double))v19)(v16, *(_QWORD *)(v19 + 8), v3);
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
LABEL_21:
      sub_1C2E388(State, v11);
    SimpleAnimation__Play_65373960((SimpleAnimation_o *)State, currentAnimationName, 0LL);
    this->fields.currentAnimationName = currentAnimationName;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.currentAnimationName,
      (int64_t)currentAnimationName,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
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

  if ( (byte_4BFB05C & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v3);
    byte_4BFB05C = 1;
  }
  this->fields.loop = 0;
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v6 = this->fields.simpleAnimationComponent;
    if ( !v6 )
      sub_1C2E388(0LL, v5);
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
        p_method = sub_1C8010C(Item, SimpleAnimation_State_TypeInfo, 18LL);
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

  if ( (byte_4BFB05B & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, playAfterCurrentAnim);
    byte_4BFB05B = 1;
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
        sub_1C2E388(0LL, v6);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  UnityEngine_Object_o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_Object_o *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v33; // x21
  __int64 v34; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v36; // x0
  struct System_String_o **p_playAnimation; // x0
  struct System_String_o *v38; // x1
  struct System_String_o *requestAnimation; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  float v46; // s0

  if ( (byte_4BFB063 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&SimpleAnimation_State_TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_1/*""*/, v5);
    byte_4BFB063 = 1;
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
          sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.playAnimation, 0LL, v12, v13, v14, v15, v16, v17);
        }
      }
      if ( this->fields.endtime < this->fields.totaltime )
        ((void (__fastcall *)(WarBoardBGEffectComponent_o *, void *))this->klass->vtable._4_NextPlayAnimation.method)(
          this,
          this->klass[1]._1.image);
      if ( !*p_requestAnimation )
        return;
    }
    v18 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
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
      v38 = 0LL;
LABEL_40:
      sub_1C2E0D0((PartyOrganizationUtility_o *)p_playAnimation, (int64_t)v38, v19, v20, v21, v22, v23, v24);
      goto LABEL_41;
    }
    v25 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
      goto LABEL_41;
    State = this->fields.simpleAnimationComponent;
    if ( State )
    {
      if ( !SimpleAnimation__get_Item(State, *p_requestAnimation, 0LL) )
      {
LABEL_41:
        if ( this->fields.status == 5 )
        {
          v46 = this->fields.totaltime;
          if ( v46 > this->fields.endtime )
            this->fields.endtime = v46;
        }
        *p_requestAnimation = 0LL;
        sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.requestAnimation, 0LL, v26, v27, v28, v29, v30, v31);
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
          v33 = State;
          v34 = *(unsigned __int16 *)(&State->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&State->klass->_2.bitflags2 + 3) )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v34;
              p_offset += 2;
              if ( !v34 )
                goto LABEL_34;
            }
            v36 = (__int64)(&klass->vtable._4_OnEnable.method + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_34:
            v36 = sub_1C8010C(State, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v36)(v33, *(_QWORD *)(v36 + 8), v2);
          State = this->fields.simpleAnimationComponent;
          if ( State )
          {
            SimpleAnimation__Rewind_65376220(State, this->fields.requestAnimation, 0LL);
            State = this->fields.simpleAnimationComponent;
            if ( State )
            {
              SimpleAnimation__Play_65373960(State, this->fields.requestAnimation, 0LL);
              requestAnimation = this->fields.requestAnimation;
              this->fields.currentAnimationName = requestAnimation;
              sub_1C2E0D0(
                (PartyOrganizationUtility_o *)&this->fields.currentAnimationName,
                (int64_t)requestAnimation,
                v40,
                v41,
                v42,
                v43,
                v44,
                v45);
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
    sub_1C2E388(State, v10);
  }
}