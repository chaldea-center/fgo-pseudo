void __fastcall WarBoardBGEffectComponent___ctor(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.endtime = 5.0;
  this->fields.loop = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardBGEffectComponent__Awake(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Component_object; // x0
  struct SimpleAnimation_o **p_simpleAnimationComponent; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  UnityEngine_Object_o *v16; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *monitor; // x21
  struct System_String_o *name; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B13B79 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B13B79 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnimationComponent = (struct SimpleAnimation_o *)Component_object;
  p_simpleAnimationComponent = &this->fields.simpleAnimationComponent;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnimationComponent,
    (int64_t)Component_object,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  v16 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v16 & 1) != 0 )
  {
    if ( !*p_simpleAnimationComponent )
      goto LABEL_14;
    monitor = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    v16 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)v16 & 1) != 0 )
    {
      if ( *p_simpleAnimationComponent )
      {
        v16 = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)[1].monitor;
        if ( v16 )
        {
          name = UnityEngine_Object__get_name(v16, 0LL);
          this->fields.currentAnimationName = name;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.currentAnimationName,
            (int64_t)name,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          return;
        }
      }
LABEL_14:
      sub_1BCAA3C(v16, v17);
    }
  }
}


void __fastcall WarBoardBGEffectComponent__NextPlayAnimation(
        WarBoardBGEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  bool v11; // w0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int32_t status; // w8
  SimpleAnimation_o *v19; // x20
  System_String_o *v20; // x0
  struct System_String_o *v21; // x1
  SimpleAnimation_State_o *Item; // x20
  struct System_String_o **p_requestAnimation; // x0
  SimpleAnimation_o *v24; // x20
  System_String_c *v25; // x8
  System_String_o *currentAnimationName; // x21
  __int64 v27; // x9
  SimpleAnimation_State_c **v28; // x10
  __int64 v29; // x0
  System_String_o *v30; // x0
  struct SimpleAnimation_o *v31; // x8
  UnityEngine_Object_o *monitor; // x21
  struct SimpleAnimation_o *v33; // x20
  System_String_o *name; // x0
  SimpleAnimation_State_c *klass; // x8
  __int64 v36; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B13B78 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_16721/*"_loop"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_16706/*"_end"*/, v8, v9);
    byte_4B13B78 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v11 = UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  status = this->fields.status;
  if ( v11 )
  {
    if ( status == 4 )
    {
      if ( !this->fields.loop )
      {
LABEL_10:
        v21 = 0LL;
        this->fields.status = 5;
LABEL_42:
        this->fields.requestAnimation = v21;
        p_requestAnimation = &this->fields.requestAnimation;
        goto LABEL_43;
      }
      v19 = this->fields.simpleAnimationComponent;
      v20 = System_String__Concat_62401220(this->fields.animationName, (System_String_o *)StringLiteral_16721/*"_loop"*/, 0LL);
      if ( v19 )
      {
        Item = SimpleAnimation__get_Item(v19, v20, 0LL);
        if ( !Item )
          goto LABEL_10;
LABEL_35:
        klass = Item->klass;
        v36 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
        {
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v36;
            p_offset += 2;
            if ( !v36 )
              goto LABEL_39;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
        }
        else
        {
LABEL_39:
          p_method = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v20 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                   Item,
                                   *(_QWORD *)(p_method + 8));
        v21 = v20;
        if ( this )
          goto LABEL_42;
      }
    }
    else
    {
      if ( status != 5 )
      {
        v21 = 0LL;
        goto LABEL_42;
      }
      v24 = this->fields.simpleAnimationComponent;
      v20 = System_String__Concat_62401220(this->fields.animationName, (System_String_o *)StringLiteral_16706/*"_end"*/, 0LL);
      if ( v24 )
      {
        v20 = (System_String_o *)SimpleAnimation__get_Item(v24, v20, 0LL);
        Item = (SimpleAnimation_State_o *)v20;
        if ( !v20 )
          goto LABEL_26;
        v25 = v20->klass;
        currentAnimationName = this->fields.currentAnimationName;
        v27 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
        {
          v28 = (SimpleAnimation_State_c **)&v25->_1.interfaceOffsets->offset;
          while ( *(v28 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v27;
            v28 += 2;
            if ( !v27 )
              goto LABEL_22;
          }
          v29 = (__int64)(&v25->vtable._9_GetTypeCode.method + 2 * *(_DWORD *)v28);
        }
        else
        {
LABEL_22:
          v29 = sub_1C1C7C0(v20, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v30 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v29)(
                                   Item,
                                   *(_QWORD *)(v29 + 8));
        v20 = (System_String_o *)System_String__op_Equality(currentAnimationName, v30, 0LL);
        if ( ((unsigned __int8)v20 & 1) != 0 )
        {
LABEL_26:
          v31 = this->fields.simpleAnimationComponent;
          if ( !v31 )
            goto LABEL_45;
          monitor = (UnityEngine_Object_o *)v31[1].monitor;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
          v20 = (System_String_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
          if ( ((unsigned __int8)v20 & 1) != 0 )
          {
            v33 = this->fields.simpleAnimationComponent;
            if ( !v33 )
              goto LABEL_45;
            v20 = (System_String_o *)v33[1].monitor;
            if ( !v20 )
              goto LABEL_45;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v20, 0LL);
            v20 = (System_String_o *)SimpleAnimation__get_Item(v33, name, 0LL);
            Item = (SimpleAnimation_State_o *)v20;
            this->fields.status = 1;
          }
          this->fields.totaltime = 0.0;
        }
        if ( Item )
          goto LABEL_35;
        v21 = 0LL;
        if ( this )
          goto LABEL_42;
      }
    }
LABEL_45:
    sub_1BCAA3C(v20, v21);
  }
  if ( status == 4 && !this->fields.loop )
    this->fields.status = 5;
  this->fields.requestAnimation = 0LL;
  p_requestAnimation = &this->fields.requestAnimation;
  v21 = 0LL;
LABEL_43:
  sub_1BCA784((PartyOrganizationUtility_o *)p_requestAnimation, (int64_t)v21, v12, v13, v14, v15, v16, v17);
}


void __fastcall WarBoardBGEffectComponent__OtherObjectPlayAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *eventStr,
        const MethodInfo *method)
{
  WarBoardBGEffectComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *v9; // x19
  System_String_o *simpleAnimationComponent; // x21
  bool v11; // w20
  __int64 v12; // x1
  UnityEngine_Object_o *v13; // x21
  __int64 v14; // x1
  Il2CppObject *Component_object; // x21
  const MethodInfo *v16; // x3

  v4 = this;
  if ( (byte_4B13B76 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___, eventStr, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    this = (WarBoardBGEffectComponent_o *)sub_1BCA7E0(&StringLiteral_24331/*"true"*/, v7, v8);
    byte_4B13B76 = 1;
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
      v9 = *(System_String_o **)&this->fields.status;
      v11 = System_String__op_Equality(
              *(System_String_o **)&this->fields.totaltime,
              (System_String_o *)StringLiteral_24331/*"true"*/,
              0LL);
      v13 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(simpleAnimationComponent, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      this = (WarBoardBGEffectComponent_o *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v13 )
          goto LABEL_17;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v13,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
        this = (WarBoardBGEffectComponent_o *)UnityEngine_Object__op_Inequality(
                                                (UnityEngine_Object_o *)Component_object,
                                                0LL,
                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( Component_object )
          {
            WarBoardBGEffectComponent__PlayAnimation((WarBoardBGEffectComponent_o *)Component_object, v9, v11, v16);
            return;
          }
LABEL_17:
          sub_1BCAA3C(this, eventStr);
        }
      }
    }
  }
}


void __fastcall WarBoardBGEffectComponent__PauseAnimation(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0

  if ( (byte_4B13B74 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B13B74 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v6 = this->fields.simpleAnimationComponent;
    if ( !v6 )
      sub_1BCAA3C(0LL, v5);
    SimpleAnimation__Stop_64536852(v6, this->fields.currentAnimationName, 0LL);
    this->fields.status = 2;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBGEffectComponent__PlayAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *animName,
        bool playAfterCurrentAnim,
        const MethodInfo *method)
{
  System_String_o *v5; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  const MethodInfo *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_String_o **p_animationName; // x0
  SimpleAnimation_o *v22; // x0
  SimpleAnimation_o *v23; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v26; // x21
  __int64 v27; // x9
  SimpleAnimation_State_c *v28; // x1
  SimpleAnimation_State_c **p_offset; // x10
  SimpleAnimation_State_o *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x9
  __int64 p_method; // x0
  SimpleAnimation_State_c *v39; // x8
  __int64 v40; // x9
  SimpleAnimation_State_c **v41; // x10
  __int64 v42; // x0
  struct System_String_o *v43; // x1

  v5 = animName;
  if ( (byte_4B13B77 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, animName, playAfterCurrentAnim);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_16742/*"_start"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B13B77 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, animName);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    if ( playAfterCurrentAnim )
    {
      WarBoardBGEffectComponent__Stop(this, v14);
    }
    else
    {
      v22 = this->fields.simpleAnimationComponent;
      if ( !v22 )
        goto LABEL_37;
      SimpleAnimation__Stop(v22, 0LL);
    }
    v23 = this->fields.simpleAnimationComponent;
    v22 = (SimpleAnimation_o *)System_String__Concat_62401220(v5, (System_String_o *)StringLiteral_16742/*"_start"*/, 0LL);
    if ( !v23 )
LABEL_37:
      sub_1BCAA3C(v22, v14);
    Item = SimpleAnimation__get_Item(v23, (System_String_o *)v22, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v26 = Item;
      v27 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      v28 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v27;
          p_offset += 2;
          if ( !v27 )
            goto LABEL_24;
        }
LABEL_25:
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
LABEL_26:
        this->fields.endtime = (*(float (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                 v26,
                                 *(_QWORD *)(p_method + 8));
        v39 = v26->klass;
        v40 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
        {
          v41 = (SimpleAnimation_State_c **)&v39->_1.interfaceOffsets->offset;
          while ( *(v41 - 1) != SimpleAnimation_State_TypeInfo )
          {
            --v40;
            v41 += 2;
            if ( !v40 )
              goto LABEL_30;
          }
          v42 = (__int64)&v39->vtable[*(_DWORD *)v41 + 9].method;
        }
        else
        {
LABEL_30:
          v42 = sub_1C1C7C0(v26, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v22 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v42)(
                                     v26,
                                     *(_QWORD *)(v42 + 8));
        if ( this )
        {
          v43 = (struct System_String_o *)v22;
LABEL_34:
          this->fields.requestAnimation = v43;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.requestAnimation,
            (int64_t)v43,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
          this->fields.animationName = v5;
          p_animationName = &this->fields.animationName;
          goto LABEL_35;
        }
        goto LABEL_37;
      }
    }
    else
    {
      v22 = this->fields.simpleAnimationComponent;
      if ( !v22 )
        goto LABEL_37;
      v30 = SimpleAnimation__get_Item(v22, v5, 0LL);
      if ( !v30 )
      {
        this->fields.endtime = 0.0;
        v43 = (struct System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_34;
      }
      klass = v30->klass;
      v26 = v30;
      v37 = *(unsigned __int16 *)(&v30->klass->_2.bitflags2 + 3);
      v28 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)(&v30->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v37;
          p_offset += 2;
          if ( !v37 )
            goto LABEL_24;
        }
        goto LABEL_25;
      }
    }
LABEL_24:
    p_method = sub_1C1C7C0(v26, v28, 13LL);
    goto LABEL_26;
  }
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  this->fields.requestAnimation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_animationName = &this->fields.requestAnimation;
LABEL_35:
  sub_1BCA784((PartyOrganizationUtility_o *)p_animationName, (int64_t)v5, v15, v16, v17, v18, v19, v20);
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *State; // x0
  __int64 v14; // x1
  System_String_o *currentAnimationName; // x20
  SimpleAnimation_State_o *Item; // x21
  bool v17; // w0
  System_String_c *klass; // x8
  System_String_o *v19; // x21
  __int64 v20; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B13B75 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, animName, method);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_16721/*"_loop"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B13B75 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, animName);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    this->fields.status = 4;
    State = System_String__Concat_62401220(animName, (System_String_o *)StringLiteral_16721/*"_loop"*/, 0LL);
    if ( !this->fields.simpleAnimationComponent )
      goto LABEL_21;
    currentAnimationName = State;
    Item = SimpleAnimation__get_Item(this->fields.simpleAnimationComponent, State, 0LL);
    v17 = System_String__op_Equality(currentAnimationName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !Item || v17 )
      currentAnimationName = this->fields.currentAnimationName;
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
      goto LABEL_21;
    State = (System_String_o *)SimpleAnimation__GetState((SimpleAnimation_o *)State, currentAnimationName, 0LL);
    if ( !State )
      goto LABEL_21;
    klass = State->klass;
    *(float *)&v3 = this->fields.totaltime;
    v19 = State;
    v20 = *(unsigned __int16 *)(&State->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&State->klass->_2.bitflags2 + 3) )
    {
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v20;
        p_offset += 2;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)(&klass->vtable._4_CompareTo.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_16:
      v22 = sub_1C1C7C0(State, SimpleAnimation_State_TypeInfo, 4LL);
    }
    (*(void (__fastcall **)(System_String_o *, _QWORD, long double))v22)(v19, *(_QWORD *)(v22 + 8), v3);
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
LABEL_21:
      sub_1BCAA3C(State, v14);
    SimpleAnimation__Play_64539336((SimpleAnimation_o *)State, currentAnimationName, 0LL);
    this->fields.currentAnimationName = currentAnimationName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.currentAnimationName,
      (int64_t)currentAnimationName,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
}


void __fastcall WarBoardBGEffectComponent__Stop(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v7; // x1
  SimpleAnimation_o *v8; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v11; // x19
  __int64 v12; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B13B73 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v4, v5);
    byte_4B13B73 = 1;
  }
  this->fields.loop = 0;
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v8 = this->fields.simpleAnimationComponent;
    if ( !v8 )
      sub_1BCAA3C(0LL, v7);
    Item = SimpleAnimation__get_Item(v8, this->fields.currentAnimationName, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v11 = Item;
      v12 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
      {
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          --v12;
          p_offset += 2;
          if ( !v12 )
            goto LABEL_12;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
      }
      else
      {
LABEL_12:
        p_method = sub_1C1C7C0(Item, SimpleAnimation_State_TypeInfo, 18LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v11, 1LL, *(_QWORD *)(p_method + 8));
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

  if ( (byte_4B13B72 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, playAfterCurrentAnim, method);
    byte_4B13B72 = 1;
  }
  this->fields.status = 5;
  this->fields.loop = 0;
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, playAfterCurrentAnim);
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
        sub_1BCAA3C(0LL, v6);
      SimpleAnimation__Stop(v7, 0LL);
    }
  }
}


void __fastcall WarBoardBGEffectComponent__Update(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q8
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t status; // w8
  float totaltime; // s8
  __int64 v11; // x1
  System_String_o **p_requestAnimation; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  SimpleAnimation_o *State; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UnityEngine_Object_o *v21; // x21
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_Object_o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v37; // x21
  __int64 v38; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v40; // x0
  struct System_String_o **p_playAnimation; // x0
  struct System_String_o *v42; // x1
  struct System_String_o *requestAnimation; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  float v50; // s0

  if ( (byte_4B13B7A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B13B7A = 1;
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.playAnimation, 0LL, v15, v16, v17, v18, v19, v20);
        }
      }
      if ( this->fields.endtime < this->fields.totaltime )
        ((void (__fastcall *)(WarBoardBGEffectComponent_o *, void *))this->klass->vtable._4_NextPlayAnimation.method)(
          this,
          this->klass[1]._1.image);
      if ( !*p_requestAnimation )
        return;
    }
    v21 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
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
      v42 = 0LL;
LABEL_40:
      sub_1BCA784((PartyOrganizationUtility_o *)p_playAnimation, (int64_t)v42, v23, v24, v25, v26, v27, v28);
      goto LABEL_41;
    }
    v29 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    if ( !UnityEngine_Object__op_Inequality(v29, 0LL, 0LL) )
      goto LABEL_41;
    State = this->fields.simpleAnimationComponent;
    if ( State )
    {
      if ( !SimpleAnimation__get_Item(State, *p_requestAnimation, 0LL) )
      {
LABEL_41:
        if ( this->fields.status == 5 )
        {
          v50 = this->fields.totaltime;
          if ( v50 > this->fields.endtime )
            this->fields.endtime = v50;
        }
        *p_requestAnimation = 0LL;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.requestAnimation, 0LL, v30, v31, v32, v33, v34, v35);
        return;
      }
      State = this->fields.simpleAnimationComponent;
      if ( State )
      {
        State = (SimpleAnimation_o *)SimpleAnimation__GetState(State, this->fields.requestAnimation, 0LL);
        if ( State )
        {
          klass = State->klass;
          *(float *)&v3 = this->fields.totaltime;
          v37 = State;
          v38 = *(unsigned __int16 *)(&State->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&State->klass->_2.bitflags2 + 3) )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v38;
              p_offset += 2;
              if ( !v38 )
                goto LABEL_34;
            }
            v40 = (__int64)(&klass->vtable._4_OnEnable.method + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_34:
            v40 = sub_1C1C7C0(State, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v40)(v37, *(_QWORD *)(v40 + 8), v3);
          State = this->fields.simpleAnimationComponent;
          if ( State )
          {
            SimpleAnimation__Rewind_64541596(State, this->fields.requestAnimation, 0LL);
            State = this->fields.simpleAnimationComponent;
            if ( State )
            {
              SimpleAnimation__Play_64539336(State, this->fields.requestAnimation, 0LL);
              requestAnimation = this->fields.requestAnimation;
              this->fields.currentAnimationName = requestAnimation;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&this->fields.currentAnimationName,
                (int64_t)requestAnimation,
                v44,
                v45,
                v46,
                v47,
                v48,
                v49);
              v42 = this->fields.requestAnimation;
              this->fields.playAnimation = v42;
              p_playAnimation = &this->fields.playAnimation;
              goto LABEL_40;
            }
          }
        }
      }
    }
LABEL_45:
    sub_1BCAA3C(State, v11);
  }
}