void __fastcall WarBoardBGEffectComponent___ctor(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.endtime = 5.0;
  this->fields.loop = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardBGEffectComponent__Awake(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct SimpleAnimation_o *Component_WebViewObject; // x0
  struct SimpleAnimation_o **p_simpleAnimationComponent; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  UnityEngine_Object_o *v13; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *monitor; // x21
  struct System_String_o *name; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_41867CA & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_41867CA = 1;
  }
  Component_WebViewObject = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  p_simpleAnimationComponent = &this->fields.simpleAnimationComponent;
  this->fields.simpleAnimationComponent = Component_WebViewObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimationComponent,
    (System_Int32_array **)Component_WebViewObject,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v13 & 1) != 0 )
  {
    if ( !*p_simpleAnimationComponent )
      goto LABEL_16;
    monitor = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
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
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.currentAnimationName,
            (System_Int32_array **)name,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22);
          return;
        }
      }
LABEL_16:
      sub_B2C434(v13, v14);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  int32_t status; // w8
  SimpleAnimation_o *v15; // x20
  System_String_o *v16; // x0
  struct System_String_o *v17; // x1
  SimpleAnimation_State_o *Item; // x20
  struct System_String_o **p_requestAnimation; // x0
  SimpleAnimation_o *v20; // x20
  __int64 v21; // x3
  System_String_c *v22; // x8
  System_String_o *currentAnimationName; // x21
  unsigned __int64 v24; // x10
  SimpleAnimation_State_c **v25; // x11
  __int64 v26; // x0
  System_String_o *v27; // x0
  struct SimpleAnimation_o *v28; // x8
  UnityEngine_Object_o *monitor; // x21
  struct SimpleAnimation_o *v30; // x20
  System_String_o *name; // x0
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v33; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_41867C9 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_16154/*"_loop"*/, v4);
    sub_B2C35C(&StringLiteral_16141/*"_end"*/, v5);
    byte_41867C9 = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  status = this->fields.status;
  if ( v7 )
  {
    if ( status == 4 )
    {
      if ( !this->fields.loop )
      {
LABEL_11:
        v17 = 0LL;
        this->fields.status = 5;
LABEL_44:
        this->fields.requestAnimation = v17;
        p_requestAnimation = &this->fields.requestAnimation;
        goto LABEL_45;
      }
      v15 = this->fields.simpleAnimationComponent;
      v16 = System_String__Concat_44305532(this->fields.animationName, (System_String_o *)StringLiteral_16154/*"_loop"*/, 0LL);
      if ( v15 )
      {
        Item = SimpleAnimation__get_Item(v15, v16, 0LL);
        if ( !Item )
          goto LABEL_11;
LABEL_37:
        klass = Item->klass;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v33 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v33;
            p_offset += 2;
            if ( v33 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_41;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
        }
        else
        {
LABEL_41:
          p_method = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 9LL, v9);
        }
        v16 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                   Item,
                                   *(_QWORD *)(p_method + 8));
        v17 = v16;
        if ( this )
          goto LABEL_44;
      }
    }
    else
    {
      if ( status != 5 )
      {
        v17 = 0LL;
        goto LABEL_44;
      }
      v20 = this->fields.simpleAnimationComponent;
      v16 = System_String__Concat_44305532(this->fields.animationName, (System_String_o *)StringLiteral_16141/*"_end"*/, 0LL);
      if ( v20 )
      {
        v16 = (System_String_o *)SimpleAnimation__get_Item(v20, v16, 0LL);
        Item = (SimpleAnimation_State_o *)v16;
        if ( !v16 )
          goto LABEL_27;
        v22 = v16->klass;
        currentAnimationName = this->fields.currentAnimationName;
        if ( *(_WORD *)&v16->klass->_2.bitflags1 )
        {
          v24 = 0LL;
          v25 = (SimpleAnimation_State_c **)&v22->_1.interfaceOffsets->offset;
          while ( *(v25 - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v24;
            v25 += 2;
            if ( v24 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
              goto LABEL_23;
          }
          v26 = (__int64)(&v22->vtable._9_System_IConvertible_ToSByte.method + 2 * *(_DWORD *)v25);
        }
        else
        {
LABEL_23:
          v26 = sub_AC5258(v16, SimpleAnimation_State_TypeInfo, 9LL, v21);
        }
        v27 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v26)(
                                   Item,
                                   *(_QWORD *)(v26 + 8));
        v16 = (System_String_o *)System_String__op_Equality(currentAnimationName, v27, 0LL);
        if ( ((unsigned __int8)v16 & 1) != 0 )
        {
LABEL_27:
          v28 = this->fields.simpleAnimationComponent;
          if ( !v28 )
            goto LABEL_47;
          monitor = (UnityEngine_Object_o *)v28[1].monitor;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v16 = (System_String_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
          if ( ((unsigned __int8)v16 & 1) != 0 )
          {
            v30 = this->fields.simpleAnimationComponent;
            if ( !v30 )
              goto LABEL_47;
            v16 = (System_String_o *)v30[1].monitor;
            if ( !v16 )
              goto LABEL_47;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v16, 0LL);
            v16 = (System_String_o *)SimpleAnimation__get_Item(v30, name, 0LL);
            Item = (SimpleAnimation_State_o *)v16;
            this->fields.status = 1;
          }
          this->fields.totaltime = 0.0;
        }
        if ( Item )
          goto LABEL_37;
        v17 = 0LL;
        if ( this )
          goto LABEL_44;
      }
    }
LABEL_47:
    sub_B2C434(v16, v17);
  }
  if ( status == 4 && !this->fields.loop )
    this->fields.status = 5;
  this->fields.requestAnimation = 0LL;
  p_requestAnimation = &this->fields.requestAnimation;
  v17 = 0LL;
LABEL_45:
  sub_B2C2F8((BattleServantConfConponent_o *)p_requestAnimation, (System_Int32_array **)v17, v8, v9, v10, v11, v12, v13);
}


void __fastcall WarBoardBGEffectComponent__OtherObjectPlayAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *eventStr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_array *v8; // x0
  System_String_array *v9; // x1
  System_String_o *v10; // x19
  System_String_o *v11; // x21
  bool v12; // w20
  UnityEngine_Object_o *v13; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v15; // x3
  __int64 v16; // x0

  if ( (byte_41867C7 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, eventStr);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_22807/*"true"*/, v7);
    byte_41867C7 = 1;
  }
  if ( this->fields.oldStatus == this->fields.status )
  {
    v8 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v8 )
      goto LABEL_21;
    v9 = v8;
    if ( !v8->max_length )
    {
      v16 = sub_B2C460(v8);
      sub_B2C400(v16, 0LL);
    }
    LOWORD(v8->m_Items[0]) = 47;
    if ( !eventStr )
      goto LABEL_21;
    v8 = System_String__Split(eventStr, (System_Char_array *)v8, 0LL);
    if ( !v8 )
      goto LABEL_21;
    if ( (int)v8->max_length >= 3 )
    {
      v11 = v8->m_Items[0];
      v10 = v8->m_Items[1];
      v12 = System_String__op_Equality(v8->m_Items[2], (System_String_o *)StringLiteral_22807/*"true"*/, 0LL);
      v13 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(v11, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = (System_String_array *)UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        if ( !v13 )
          goto LABEL_21;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)v13,
                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v8 = (System_String_array *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
        if ( ((unsigned __int8)v8 & 1) != 0 )
        {
          if ( Component_srcLineSprite )
          {
            WarBoardBGEffectComponent__PlayAnimation(
              (WarBoardBGEffectComponent_o *)Component_srcLineSprite,
              v10,
              v12,
              v15);
            return;
          }
LABEL_21:
          sub_B2C434(v8, v9);
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

  if ( (byte_41867C5 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41867C5 = 1;
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
      sub_B2C434(0LL, v4);
    SimpleAnimation__Stop_16484120(v5, this->fields.currentAnimationName, 0LL);
    this->fields.status = 2;
  }
}


void __fastcall WarBoardBGEffectComponent__PlayAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *animName,
        bool playAfterCurrentAnim,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  const MethodInfo *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x1
  struct System_String_o **p_animationName; // x0
  SimpleAnimation_o *v20; // x0
  SimpleAnimation_o *v21; // x21
  SimpleAnimation_State_o *Item; // x0
  System_String_array **v23; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v25; // x21
  SimpleAnimation_State_c *v26; // x1
  unsigned __int64 v27; // x10
  SimpleAnimation_State_c **p_offset; // x11
  SimpleAnimation_State_o *v29; // x0
  System_String_array **v30; // x2
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  unsigned __int64 v35; // x10
  __int64 p_method; // x0
  __int64 v37; // x3
  WarBoardBGEffectComponent_o *v38; // x22
  float v39; // s0
  SimpleAnimation_State_c *v40; // x8
  unsigned __int64 v41; // x10
  SimpleAnimation_State_c **v42; // x11
  __int64 v43; // x0
  System_Int32_array **v44; // x1

  if ( (byte_41867C8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, animName);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_16178/*"_start"*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_41867C8 = 1;
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
      WarBoardBGEffectComponent__Stop(this, v11);
    }
    else
    {
      v20 = this->fields.simpleAnimationComponent;
      if ( !v20 )
        goto LABEL_38;
      SimpleAnimation__Stop(v20, 0LL);
    }
    v21 = this->fields.simpleAnimationComponent;
    v20 = (SimpleAnimation_o *)System_String__Concat_44305532(animName, (System_String_o *)StringLiteral_16178/*"_start"*/, 0LL);
    if ( !v21 )
LABEL_38:
      sub_B2C434(v20, v11);
    Item = SimpleAnimation__get_Item(v21, (System_String_o *)v20, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v25 = Item;
      v26 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
      {
        v27 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v27;
          p_offset += 2;
          if ( v27 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
            goto LABEL_25;
        }
LABEL_26:
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
LABEL_27:
        (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v25, *(_QWORD *)(p_method + 8));
        v38 = this;
        this->fields.endtime = v39;
        v40 = v25->klass;
        if ( *(_WORD *)&v25->klass->_2.bitflags1 )
        {
          v41 = 0LL;
          v42 = (SimpleAnimation_State_c **)&v40->_1.interfaceOffsets->offset;
          while ( *(v42 - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v41;
            v42 += 2;
            if ( v41 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
              goto LABEL_31;
          }
          v43 = (__int64)&v40->vtable[*(_DWORD *)v42 + 9].method;
        }
        else
        {
LABEL_31:
          v43 = sub_AC5258(v25, SimpleAnimation_State_TypeInfo, 9LL, v37);
        }
        v20 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v43)(
                                     v25,
                                     *(_QWORD *)(v43 + 8));
        if ( this )
        {
          v44 = (System_Int32_array **)v20;
LABEL_36:
          v38->fields.requestAnimation = (struct System_String_o *)v44;
          sub_B2C2F8((BattleServantConfConponent_o *)&v38->fields.requestAnimation, v44, v30, v23, v31, v32, v33, v34);
          this->fields.animationName = animName;
          p_animationName = &this->fields.animationName;
          v18 = (System_Int32_array **)animName;
          goto LABEL_37;
        }
        goto LABEL_38;
      }
    }
    else
    {
      v20 = this->fields.simpleAnimationComponent;
      if ( !v20 )
        goto LABEL_38;
      v29 = SimpleAnimation__get_Item(v20, animName, 0LL);
      if ( !v29 )
      {
        this->fields.endtime = 0.0;
        v38 = this;
        v44 = (System_Int32_array **)StringLiteral_1/*""*/;
        goto LABEL_36;
      }
      klass = v29->klass;
      v25 = v29;
      v26 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)&v29->klass->_2.bitflags1 )
      {
        v35 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v35;
          p_offset += 2;
          if ( v35 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
            goto LABEL_25;
        }
        goto LABEL_26;
      }
    }
LABEL_25:
    p_method = sub_AC5258(v25, v26, 13LL, v23);
    goto LABEL_27;
  }
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.requestAnimation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_animationName = &this->fields.requestAnimation;
LABEL_37:
  sub_B2C2F8((BattleServantConfConponent_o *)p_animationName, v18, v12, v13, v14, v15, v16, v17);
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
  __int64 v15; // x3
  System_String_c *klass; // x8
  System_String_o *v17; // x21
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_41867C6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, animName);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_16154/*"_loop"*/, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_41867C6 = 1;
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
    State = System_String__Concat_44305532(animName, (System_String_o *)StringLiteral_16154/*"_loop"*/, 0LL);
    if ( !this->fields.simpleAnimationComponent )
      goto LABEL_22;
    currentAnimationName = State;
    Item = SimpleAnimation__get_Item(this->fields.simpleAnimationComponent, State, 0LL);
    v14 = System_String__op_Equality(currentAnimationName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !Item || v14 )
      currentAnimationName = this->fields.currentAnimationName;
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
      goto LABEL_22;
    State = (System_String_o *)SimpleAnimation__GetState((SimpleAnimation_o *)State, currentAnimationName, 0LL);
    if ( !State )
      goto LABEL_22;
    klass = State->klass;
    *(float *)&v3 = this->fields.totaltime;
    v17 = State;
    if ( *(_WORD *)&State->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v18;
        p_offset += 2;
        if ( v18 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v20 = (__int64)(&klass->vtable._4_CompareTo.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_17:
      v20 = sub_AC5258(State, SimpleAnimation_State_TypeInfo, 4LL, v15);
    }
    (*(void (__fastcall **)(System_String_o *, _QWORD, long double))v20)(v17, *(_QWORD *)(v20 + 8), v3);
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
LABEL_22:
      sub_B2C434(State, v11);
    SimpleAnimation__Play_16486620((SimpleAnimation_o *)State, currentAnimationName, 0LL);
    this->fields.currentAnimationName = currentAnimationName;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.currentAnimationName,
      (System_Int32_array **)currentAnimationName,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
}


void __fastcall WarBoardBGEffectComponent__Stop(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v5; // x1
  SimpleAnimation_o *v6; // x0
  SimpleAnimation_State_o *Item; // x0
  __int64 v8; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v10; // x19
  unsigned __int64 v11; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_41867C4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v3);
    byte_41867C4 = 1;
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
    v6 = this->fields.simpleAnimationComponent;
    if ( !v6 )
      sub_B2C434(0LL, v5);
    Item = SimpleAnimation__get_Item(v6, this->fields.currentAnimationName, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v10 = Item;
      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
      {
        v11 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v11;
          p_offset += 2;
          if ( v11 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
      }
      else
      {
LABEL_13:
        p_method = sub_AC5258(Item, SimpleAnimation_State_TypeInfo, 18LL, v8);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v10, 1LL, *(_QWORD *)(p_method + 8));
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

  if ( (byte_41867C3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, playAfterCurrentAnim);
    byte_41867C3 = 1;
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
        sub_B2C434(0LL, v6);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Object_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_Object_o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v34; // x21
  unsigned __int64 v35; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v37; // x0
  struct System_String_o **p_playAnimation; // x0
  System_Int32_array **v39; // x1
  struct System_String_o *requestAnimation; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  float v47; // s0

  if ( (byte_41867CB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_41867CB = 1;
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
          sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.playAnimation, 0LL, v12, v13, v14, v15, v16, v17);
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
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
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
      v39 = 0LL;
LABEL_43:
      sub_B2C2F8((BattleServantConfConponent_o *)p_playAnimation, v39, v19, v20, v21, v22, v23, v24);
      goto LABEL_44;
    }
    v25 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
      goto LABEL_44;
    State = this->fields.simpleAnimationComponent;
    if ( State )
    {
      if ( !SimpleAnimation__get_Item(State, *p_requestAnimation, 0LL) )
      {
LABEL_44:
        if ( this->fields.status == 5 )
        {
          v47 = this->fields.totaltime;
          if ( v47 > this->fields.endtime )
            this->fields.endtime = v47;
        }
        *p_requestAnimation = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.requestAnimation, 0LL, v26, v27, v28, v29, v30, v31);
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
          v34 = State;
          if ( *(_WORD *)&State->klass->_2.bitflags1 )
          {
            v35 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v35;
              p_offset += 2;
              if ( v35 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
                goto LABEL_37;
            }
            v37 = (__int64)(&klass->vtable._4_OnEnable.method + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_37:
            v37 = sub_AC5258(State, SimpleAnimation_State_TypeInfo, 4LL, v32);
          }
          (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v37)(v34, *(_QWORD *)(v37 + 8), v2);
          State = this->fields.simpleAnimationComponent;
          if ( State )
          {
            SimpleAnimation__Rewind_16488788(State, this->fields.requestAnimation, 0LL);
            State = this->fields.simpleAnimationComponent;
            if ( State )
            {
              SimpleAnimation__Play_16486620(State, this->fields.requestAnimation, 0LL);
              requestAnimation = this->fields.requestAnimation;
              this->fields.currentAnimationName = requestAnimation;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&this->fields.currentAnimationName,
                (System_Int32_array **)requestAnimation,
                v41,
                v42,
                v43,
                v44,
                v45,
                v46);
              v39 = (System_Int32_array **)this->fields.requestAnimation;
              p_playAnimation = &this->fields.playAnimation;
              this->fields.playAnimation = (struct System_String_o *)v39;
              goto LABEL_43;
            }
          }
        }
      }
    }
LABEL_48:
    sub_B2C434(State, v10);
  }
}