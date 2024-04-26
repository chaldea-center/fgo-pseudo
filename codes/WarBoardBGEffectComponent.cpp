void __fastcall WarBoardBGEffectComponent___ctor(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.endtime = 5.0;
  this->fields.loop = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardBGEffectComponent__Awake(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  struct SimpleAnimation_o *Component_WebViewObject; // x0
  struct SimpleAnimation_o **p_simpleAnimationComponent; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  UnityEngine_Object_o *v12; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *monitor; // x21
  struct System_String_o *name; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_434FA47 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FA47 = 1;
  }
  Component_WebViewObject = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  p_simpleAnimationComponent = &this->fields.simpleAnimationComponent;
  this->fields.simpleAnimationComponent = Component_WebViewObject;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimationComponent,
    (System_Int32_array **)Component_WebViewObject,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v12 & 1) != 0 )
  {
    if ( !*p_simpleAnimationComponent )
      goto LABEL_16;
    monitor = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)v12 & 1) != 0 )
    {
      if ( *p_simpleAnimationComponent )
      {
        v12 = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)[1].monitor;
        if ( v12 )
        {
          name = UnityEngine_Object__get_name(v12, 0LL);
          this->fields.currentAnimationName = name;
          sub_B70630(
            (BattleServantConfConponent_o *)&this->fields.currentAnimationName,
            (System_Int32_array **)name,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          return;
        }
      }
LABEL_16:
      sub_B7076C(v12, v13);
    }
  }
}


void __fastcall WarBoardBGEffectComponent__NextPlayAnimation(
        WarBoardBGEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  bool v4; // w0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  int32_t status; // w8
  SimpleAnimation_o *v12; // x20
  System_String_o *v13; // x0
  struct System_String_o *v14; // x1
  SimpleAnimation_State_o *Item; // x20
  struct System_String_o **p_requestAnimation; // x0
  SimpleAnimation_o *v17; // x20
  System_String_c *v18; // x8
  System_String_o *currentAnimationName; // x21
  unsigned __int64 v20; // x10
  SimpleAnimation_State_c **v21; // x11
  __int64 v22; // x0
  System_String_o *v23; // x0
  struct SimpleAnimation_o *v24; // x8
  UnityEngine_Object_o *monitor; // x21
  struct SimpleAnimation_o *v26; // x20
  System_String_o *name; // x0
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v29; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_434FA46 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    sub_B70694(&StringLiteral_16391/*"_loop"*/);
    sub_B70694(&StringLiteral_16378/*"_end"*/);
    byte_434FA46 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  status = this->fields.status;
  if ( v4 )
  {
    if ( status == 4 )
    {
      if ( !this->fields.loop )
      {
LABEL_11:
        v14 = 0LL;
        this->fields.status = 5;
LABEL_44:
        this->fields.requestAnimation = v14;
        p_requestAnimation = &this->fields.requestAnimation;
        goto LABEL_45;
      }
      v12 = this->fields.simpleAnimationComponent;
      v13 = System_String__Concat_44758168(this->fields.animationName, (System_String_o *)StringLiteral_16391/*"_loop"*/, 0LL);
      if ( v12 )
      {
        Item = SimpleAnimation__get_Item(v12, v13, 0LL);
        if ( !Item )
          goto LABEL_11;
LABEL_37:
        klass = Item->klass;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v29 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v29;
            p_offset += 2;
            if ( v29 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_41;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
        }
        else
        {
LABEL_41:
          p_method = sub_B08590(Item, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v13 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                   Item,
                                   *(_QWORD *)(p_method + 8));
        v14 = v13;
        if ( this )
          goto LABEL_44;
      }
    }
    else
    {
      if ( status != 5 )
      {
        v14 = 0LL;
        goto LABEL_44;
      }
      v17 = this->fields.simpleAnimationComponent;
      v13 = System_String__Concat_44758168(this->fields.animationName, (System_String_o *)StringLiteral_16378/*"_end"*/, 0LL);
      if ( v17 )
      {
        v13 = (System_String_o *)SimpleAnimation__get_Item(v17, v13, 0LL);
        Item = (SimpleAnimation_State_o *)v13;
        if ( !v13 )
          goto LABEL_27;
        v18 = v13->klass;
        currentAnimationName = this->fields.currentAnimationName;
        if ( *(_WORD *)&v13->klass->_2.bitflags1 )
        {
          v20 = 0LL;
          v21 = (SimpleAnimation_State_c **)&v18->_1.interfaceOffsets->offset;
          while ( *(v21 - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v20;
            v21 += 2;
            if ( v20 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
              goto LABEL_23;
          }
          v22 = (__int64)(&v18->vtable._9_System_IConvertible_ToSByte.method + 2 * *(_DWORD *)v21);
        }
        else
        {
LABEL_23:
          v22 = sub_B08590(v13, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v23 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v22)(
                                   Item,
                                   *(_QWORD *)(v22 + 8));
        v13 = (System_String_o *)System_String__op_Equality(currentAnimationName, v23, 0LL);
        if ( ((unsigned __int8)v13 & 1) != 0 )
        {
LABEL_27:
          v24 = this->fields.simpleAnimationComponent;
          if ( !v24 )
            goto LABEL_47;
          monitor = (UnityEngine_Object_o *)v24[1].monitor;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v13 = (System_String_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
          if ( ((unsigned __int8)v13 & 1) != 0 )
          {
            v26 = this->fields.simpleAnimationComponent;
            if ( !v26 )
              goto LABEL_47;
            v13 = (System_String_o *)v26[1].monitor;
            if ( !v13 )
              goto LABEL_47;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v13, 0LL);
            v13 = (System_String_o *)SimpleAnimation__get_Item(v26, name, 0LL);
            Item = (SimpleAnimation_State_o *)v13;
            this->fields.status = 1;
          }
          this->fields.totaltime = 0.0;
        }
        if ( Item )
          goto LABEL_37;
        v14 = 0LL;
        if ( this )
          goto LABEL_44;
      }
    }
LABEL_47:
    sub_B7076C(v13, v14);
  }
  if ( status == 4 && !this->fields.loop )
    this->fields.status = 5;
  this->fields.requestAnimation = 0LL;
  p_requestAnimation = &this->fields.requestAnimation;
  v14 = 0LL;
LABEL_45:
  sub_B70630((BattleServantConfConponent_o *)p_requestAnimation, (System_Int32_array **)v14, v5, v6, v7, v8, v9, v10);
}


void __fastcall WarBoardBGEffectComponent__OtherObjectPlayAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *eventStr,
        const MethodInfo *method)
{
  System_String_array *v5; // x0
  System_String_array *v6; // x1
  System_String_o *v7; // x19
  System_String_o *v8; // x21
  bool v9; // w20
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v12; // x3
  __int64 v13; // x0

  if ( (byte_434FA44 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_23184/*"true"*/);
    byte_434FA44 = 1;
  }
  if ( this->fields.oldStatus == this->fields.status )
  {
    v5 = (System_String_array *)sub_B706AC(char___TypeInfo, 1LL);
    if ( !v5 )
      goto LABEL_21;
    v6 = v5;
    if ( !v5->max_length )
    {
      v13 = sub_B70798(v5);
      sub_B70738(v13, 0LL);
    }
    LOWORD(v5->m_Items[0]) = 47;
    if ( !eventStr )
      goto LABEL_21;
    v5 = System_String__Split(eventStr, (System_Char_array *)v5, 0LL);
    if ( !v5 )
      goto LABEL_21;
    if ( (int)v5->max_length >= 3 )
    {
      v8 = v5->m_Items[0];
      v7 = v5->m_Items[1];
      v9 = System_String__op_Equality(v5->m_Items[2], (System_String_o *)StringLiteral_23184/*"true"*/, 0LL);
      v10 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(v8, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v5 = (System_String_array *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)v5 & 1) == 0 )
      {
        if ( !v10 )
          goto LABEL_21;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)v10,
                                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v5 = (System_String_array *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
        if ( ((unsigned __int8)v5 & 1) != 0 )
        {
          if ( Component_srcLineSprite )
          {
            WarBoardBGEffectComponent__PlayAnimation(
              (WarBoardBGEffectComponent_o *)Component_srcLineSprite,
              v7,
              v9,
              v12);
            return;
          }
LABEL_21:
          sub_B7076C(v5, v6);
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

  if ( (byte_434FA42 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FA42 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v5 = this->fields.simpleAnimationComponent;
    if ( !v5 )
      sub_B7076C(0LL, v4);
    SimpleAnimation__Stop_16670420(v5, this->fields.currentAnimationName, 0LL);
    this->fields.status = 2;
  }
}


void __fastcall WarBoardBGEffectComponent__PlayAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *animName,
        bool playAfterCurrentAnim,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  const MethodInfo *v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Int32_array **v15; // x1
  struct System_String_o **p_animationName; // x0
  SimpleAnimation_o *v17; // x0
  SimpleAnimation_o *v18; // x21
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v21; // x21
  SimpleAnimation_State_c *v22; // x1
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **p_offset; // x11
  SimpleAnimation_State_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  unsigned __int64 v32; // x10
  __int64 p_method; // x0
  WarBoardBGEffectComponent_o *v34; // x22
  float v35; // s0
  SimpleAnimation_State_c *v36; // x8
  unsigned __int64 v37; // x10
  SimpleAnimation_State_c **v38; // x11
  __int64 v39; // x0
  System_Int32_array **v40; // x1

  if ( (byte_434FA45 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    sub_B70694(&StringLiteral_16415/*"_start"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434FA45 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    if ( playAfterCurrentAnim )
    {
      WarBoardBGEffectComponent__Stop(this, v8);
    }
    else
    {
      v17 = this->fields.simpleAnimationComponent;
      if ( !v17 )
        goto LABEL_38;
      SimpleAnimation__Stop(v17, 0LL);
    }
    v18 = this->fields.simpleAnimationComponent;
    v17 = (SimpleAnimation_o *)System_String__Concat_44758168(animName, (System_String_o *)StringLiteral_16415/*"_start"*/, 0LL);
    if ( !v18 )
LABEL_38:
      sub_B7076C(v17, v8);
    Item = SimpleAnimation__get_Item(v18, (System_String_o *)v17, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v21 = Item;
      v22 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
      {
        v23 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v23;
          p_offset += 2;
          if ( v23 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
            goto LABEL_25;
        }
LABEL_26:
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
LABEL_27:
        (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v21, *(_QWORD *)(p_method + 8));
        v34 = this;
        this->fields.endtime = v35;
        v36 = v21->klass;
        if ( *(_WORD *)&v21->klass->_2.bitflags1 )
        {
          v37 = 0LL;
          v38 = (SimpleAnimation_State_c **)&v36->_1.interfaceOffsets->offset;
          while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v37;
            v38 += 2;
            if ( v37 >= *(unsigned __int16 *)&v21->klass->_2.bitflags1 )
              goto LABEL_31;
          }
          v39 = (__int64)&v36->vtable[*(_DWORD *)v38 + 9].method;
        }
        else
        {
LABEL_31:
          v39 = sub_B08590(v21, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v17 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v39)(
                                     v21,
                                     *(_QWORD *)(v39 + 8));
        if ( this )
        {
          v40 = (System_Int32_array **)v17;
LABEL_36:
          v34->fields.requestAnimation = (struct System_String_o *)v40;
          sub_B70630((BattleServantConfConponent_o *)&v34->fields.requestAnimation, v40, v26, v27, v28, v29, v30, v31);
          this->fields.animationName = animName;
          p_animationName = &this->fields.animationName;
          v15 = (System_Int32_array **)animName;
          goto LABEL_37;
        }
        goto LABEL_38;
      }
    }
    else
    {
      v17 = this->fields.simpleAnimationComponent;
      if ( !v17 )
        goto LABEL_38;
      v25 = SimpleAnimation__get_Item(v17, animName, 0LL);
      if ( !v25 )
      {
        this->fields.endtime = 0.0;
        v34 = this;
        v40 = (System_Int32_array **)StringLiteral_1/*""*/;
        goto LABEL_36;
      }
      klass = v25->klass;
      v21 = v25;
      v22 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)&v25->klass->_2.bitflags1 )
      {
        v32 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v32;
          p_offset += 2;
          if ( v32 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
            goto LABEL_25;
        }
        goto LABEL_26;
      }
    }
LABEL_25:
    p_method = sub_B08590(v21, v22, 13LL);
    goto LABEL_27;
  }
  v15 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.requestAnimation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_animationName = &this->fields.requestAnimation;
LABEL_37:
  sub_B70630((BattleServantConfConponent_o *)p_animationName, v15, v9, v10, v11, v12, v13, v14);
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
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *State; // x0
  __int64 v8; // x1
  System_String_o *currentAnimationName; // x20
  SimpleAnimation_State_o *Item; // x21
  bool v11; // w0
  System_String_c *klass; // x8
  System_String_o *v13; // x21
  unsigned __int64 v14; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_434FA43 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    sub_B70694(&StringLiteral_16391/*"_loop"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434FA43 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    this->fields.status = 4;
    State = System_String__Concat_44758168(animName, (System_String_o *)StringLiteral_16391/*"_loop"*/, 0LL);
    if ( !this->fields.simpleAnimationComponent )
      goto LABEL_22;
    currentAnimationName = State;
    Item = SimpleAnimation__get_Item(this->fields.simpleAnimationComponent, State, 0LL);
    v11 = System_String__op_Equality(currentAnimationName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !Item || v11 )
      currentAnimationName = this->fields.currentAnimationName;
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
      goto LABEL_22;
    State = (System_String_o *)SimpleAnimation__GetState((SimpleAnimation_o *)State, currentAnimationName, 0LL);
    if ( !State )
      goto LABEL_22;
    klass = State->klass;
    *(float *)&v3 = this->fields.totaltime;
    v13 = State;
    if ( *(_WORD *)&State->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v14;
        p_offset += 2;
        if ( v14 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v16 = (__int64)(&klass->vtable._4_CompareTo.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_17:
      v16 = sub_B08590(State, SimpleAnimation_State_TypeInfo, 4LL);
    }
    (*(void (__fastcall **)(System_String_o *, _QWORD, long double))v16)(v13, *(_QWORD *)(v16 + 8), v3);
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
LABEL_22:
      sub_B7076C(State, v8);
    SimpleAnimation__Play_16672920((SimpleAnimation_o *)State, currentAnimationName, 0LL);
    this->fields.currentAnimationName = currentAnimationName;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.currentAnimationName,
      (System_Int32_array **)currentAnimationName,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
}


void __fastcall WarBoardBGEffectComponent__Stop(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v4; // x1
  SimpleAnimation_o *v5; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v8; // x19
  unsigned __int64 v9; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_434FA41 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    byte_434FA41 = 1;
  }
  this->fields.loop = 0;
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v5 = this->fields.simpleAnimationComponent;
    if ( !v5 )
      sub_B7076C(0LL, v4);
    Item = SimpleAnimation__get_Item(v5, this->fields.currentAnimationName, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v8 = Item;
      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
      {
        v9 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v9;
          p_offset += 2;
          if ( v9 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
      }
      else
      {
LABEL_13:
        p_method = sub_B08590(Item, SimpleAnimation_State_TypeInfo, 18LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v8, 1LL, *(_QWORD *)(p_method + 8));
    }
  }
}


void __fastcall WarBoardBGEffectComponent__StopAnimation(
        WarBoardBGEffectComponent_o *this,
        bool playAfterCurrentAnim,
        const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  const MethodInfo *v6; // x1
  SimpleAnimation_o *v7; // x0

  if ( (byte_434FA40 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434FA40 = 1;
  }
  this->fields.loop = 0;
  this->fields.status = 5;
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
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
        sub_B7076C(0LL, v6);
      SimpleAnimation__Stop(v7, 0LL);
    }
  }
}


void __fastcall WarBoardBGEffectComponent__Update(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  long double v2; // q8
  int32_t status; // w8
  float totaltime; // s8
  System_String_o **p_requestAnimation; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  __int64 v8; // x1
  SimpleAnimation_o *State; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Object_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v31; // x21
  unsigned __int64 v32; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v34; // x0
  struct System_String_o **p_playAnimation; // x0
  System_Int32_array **v36; // x1
  struct System_String_o *requestAnimation; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  float v44; // s0

  if ( (byte_434FA48 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&SimpleAnimation_State_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434FA48 = 1;
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
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) && this->fields.playAnimation )
      {
        State = this->fields.simpleAnimationComponent;
        if ( !State )
          goto LABEL_48;
        if ( SimpleAnimation__CheckPlaying(State, 0LL) )
          return;
        if ( this->fields.status == 5 )
        {
          this->fields.playAnimation = 0LL;
          sub_B70630((BattleServantConfConponent_o *)&this->fields.playAnimation, 0LL, v10, v11, v12, v13, v14, v15);
        }
      }
      if ( this->fields.endtime < this->fields.totaltime )
        ((void (__fastcall *)(WarBoardBGEffectComponent_o *, void *))this->klass->vtable._4_NextPlayAnimation.method)(
          this,
          this->klass[1]._1.image);
      if ( !*p_requestAnimation )
        return;
    }
    v16 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
    {
      State = this->fields.simpleAnimationComponent;
      if ( !State )
        goto LABEL_48;
      if ( SimpleAnimation__CheckPlaying(State, 0LL) )
        return;
    }
    if ( !System_String__op_Inequality(*p_requestAnimation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      this->fields.playAnimation = 0LL;
      p_playAnimation = &this->fields.playAnimation;
      v36 = 0LL;
LABEL_43:
      sub_B70630((BattleServantConfConponent_o *)p_playAnimation, v36, v17, v18, v19, v20, v21, v22);
      goto LABEL_44;
    }
    v23 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
      goto LABEL_44;
    State = this->fields.simpleAnimationComponent;
    if ( State )
    {
      if ( !SimpleAnimation__get_Item(State, *p_requestAnimation, 0LL) )
      {
LABEL_44:
        if ( this->fields.status == 5 )
        {
          v44 = this->fields.totaltime;
          if ( v44 > this->fields.endtime )
            this->fields.endtime = v44;
        }
        *p_requestAnimation = 0LL;
        sub_B70630((BattleServantConfConponent_o *)&this->fields.requestAnimation, 0LL, v24, v25, v26, v27, v28, v29);
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
          v31 = State;
          if ( *(_WORD *)&State->klass->_2.bitflags1 )
          {
            v32 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v32;
              p_offset += 2;
              if ( v32 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
                goto LABEL_37;
            }
            v34 = (__int64)(&klass->vtable._4_OnEnable.method + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_37:
            v34 = sub_B08590(State, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v34)(v31, *(_QWORD *)(v34 + 8), v2);
          State = this->fields.simpleAnimationComponent;
          if ( State )
          {
            SimpleAnimation__Rewind_16675088(State, this->fields.requestAnimation, 0LL);
            State = this->fields.simpleAnimationComponent;
            if ( State )
            {
              SimpleAnimation__Play_16672920(State, this->fields.requestAnimation, 0LL);
              requestAnimation = this->fields.requestAnimation;
              this->fields.currentAnimationName = requestAnimation;
              sub_B70630(
                (BattleServantConfConponent_o *)&this->fields.currentAnimationName,
                (System_Int32_array **)requestAnimation,
                v38,
                v39,
                v40,
                v41,
                v42,
                v43);
              v36 = (System_Int32_array **)this->fields.requestAnimation;
              p_playAnimation = &this->fields.playAnimation;
              this->fields.playAnimation = (struct System_String_o *)v36;
              goto LABEL_43;
            }
          }
        }
      }
    }
LABEL_48:
    sub_B7076C(State, v8);
  }
}