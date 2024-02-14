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
  UnityEngine_Object_o *monitor; // x21
  struct System_String_o *name; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4212B70 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4212B70 = 1;
  }
  Component_WebViewObject = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  p_simpleAnimationComponent = &this->fields.simpleAnimationComponent;
  this->fields.simpleAnimationComponent = Component_WebViewObject;
  sub_B0D840(
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
          sub_B0D840(
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
      sub_B0D97C(v13);
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
  SimpleAnimation_State_o *Item; // x20
  struct System_String_o *v18; // x1
  struct System_String_o **p_requestAnimation; // x0
  SimpleAnimation_o *v20; // x20
  System_String_c *v21; // x8
  System_String_o *currentAnimationName; // x21
  unsigned __int64 v23; // x10
  SimpleAnimation_State_c **v24; // x11
  __int64 v25; // x0
  System_String_o *v26; // x0
  struct SimpleAnimation_o *v27; // x8
  UnityEngine_Object_o *monitor; // x21
  struct SimpleAnimation_o *v29; // x20
  System_String_o *name; // x0
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v32; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4212B6F & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_16202/*"_loop"*/, v4);
    sub_B0D8A4(&StringLiteral_16189/*"_end"*/, v5);
    byte_4212B6F = 1;
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
        v18 = 0LL;
        this->fields.status = 5;
LABEL_44:
        this->fields.requestAnimation = v18;
        p_requestAnimation = &this->fields.requestAnimation;
        goto LABEL_45;
      }
      v15 = this->fields.simpleAnimationComponent;
      v16 = System_String__Concat_43849904(this->fields.animationName, (System_String_o *)StringLiteral_16202/*"_loop"*/, 0LL);
      if ( v15 )
      {
        Item = SimpleAnimation__get_Item(v15, v16, 0LL);
        if ( !Item )
          goto LABEL_11;
LABEL_37:
        klass = Item->klass;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v32 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v32;
            p_offset += 2;
            if ( v32 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_41;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
        }
        else
        {
LABEL_41:
          p_method = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v16 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                   Item,
                                   *(_QWORD *)(p_method + 8));
        v18 = v16;
        if ( this )
          goto LABEL_44;
      }
    }
    else
    {
      if ( status != 5 )
      {
        v18 = 0LL;
        goto LABEL_44;
      }
      v20 = this->fields.simpleAnimationComponent;
      v16 = System_String__Concat_43849904(this->fields.animationName, (System_String_o *)StringLiteral_16189/*"_end"*/, 0LL);
      if ( v20 )
      {
        v16 = (System_String_o *)SimpleAnimation__get_Item(v20, v16, 0LL);
        Item = (SimpleAnimation_State_o *)v16;
        if ( !v16 )
          goto LABEL_27;
        v21 = v16->klass;
        currentAnimationName = this->fields.currentAnimationName;
        if ( *(_WORD *)&v16->klass->_2.bitflags1 )
        {
          v23 = 0LL;
          v24 = (SimpleAnimation_State_c **)&v21->_1.interfaceOffsets->offset;
          while ( *(v24 - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v23;
            v24 += 2;
            if ( v23 >= *(unsigned __int16 *)&v16->klass->_2.bitflags1 )
              goto LABEL_23;
          }
          v25 = (__int64)(&v21->vtable._9_System_IConvertible_ToSByte.method + 2 * *(_DWORD *)v24);
        }
        else
        {
LABEL_23:
          v25 = sub_AA67A0(v16, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v26 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v25)(
                                   Item,
                                   *(_QWORD *)(v25 + 8));
        v16 = (System_String_o *)System_String__op_Equality(currentAnimationName, v26, 0LL);
        if ( ((unsigned __int8)v16 & 1) != 0 )
        {
LABEL_27:
          v27 = this->fields.simpleAnimationComponent;
          if ( !v27 )
            goto LABEL_47;
          monitor = (UnityEngine_Object_o *)v27[1].monitor;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v16 = (System_String_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
          if ( ((unsigned __int8)v16 & 1) != 0 )
          {
            v29 = this->fields.simpleAnimationComponent;
            if ( !v29 )
              goto LABEL_47;
            v16 = (System_String_o *)v29[1].monitor;
            if ( !v16 )
              goto LABEL_47;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v16, 0LL);
            v16 = (System_String_o *)SimpleAnimation__get_Item(v29, name, 0LL);
            Item = (SimpleAnimation_State_o *)v16;
            this->fields.status = 1;
          }
          this->fields.totaltime = 0.0;
        }
        if ( Item )
          goto LABEL_37;
        v18 = 0LL;
        if ( this )
          goto LABEL_44;
      }
    }
LABEL_47:
    sub_B0D97C(v16);
  }
  if ( status == 4 && !this->fields.loop )
    this->fields.status = 5;
  this->fields.requestAnimation = 0LL;
  p_requestAnimation = &this->fields.requestAnimation;
  v18 = 0LL;
LABEL_45:
  sub_B0D840((BattleServantConfConponent_o *)p_requestAnimation, (System_Int32_array **)v18, v8, v9, v10, v11, v12, v13);
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
  System_String_o *v9; // x19
  System_String_o *v10; // x21
  bool v11; // w20
  UnityEngine_Object_o *v12; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v14; // x3
  __int64 v15; // x0

  if ( (byte_4212B6D & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, eventStr);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_22883/*"true"*/, v7);
    byte_4212B6D = 1;
  }
  if ( this->fields.oldStatus == this->fields.status )
  {
    v8 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v8 )
      goto LABEL_21;
    if ( !v8->max_length )
    {
      v15 = sub_B0D9A8(v8);
      sub_B0D948(v15, 0LL);
    }
    LOWORD(v8->m_Items[0]) = 47;
    if ( !eventStr )
      goto LABEL_21;
    v8 = System_String__Split(eventStr, (System_Char_array *)v8, 0LL);
    if ( !v8 )
      goto LABEL_21;
    if ( (int)v8->max_length >= 3 )
    {
      v10 = v8->m_Items[0];
      v9 = v8->m_Items[1];
      v11 = System_String__op_Equality(v8->m_Items[2], (System_String_o *)StringLiteral_22883/*"true"*/, 0LL);
      v12 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(v10, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = (System_String_array *)UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
      if ( ((unsigned __int8)v8 & 1) == 0 )
      {
        if ( !v12 )
          goto LABEL_21;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)v12,
                                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
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
              v9,
              v11,
              v14);
            return;
          }
LABEL_21:
          sub_B0D97C(v8);
        }
      }
    }
  }
}


void __fastcall WarBoardBGEffectComponent__PauseAnimation(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  SimpleAnimation_o *v4; // x0

  if ( (byte_4212B6B & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4212B6B = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v4 = this->fields.simpleAnimationComponent;
    if ( !v4 )
      sub_B0D97C(0LL);
    SimpleAnimation__Stop_50479904(v4, this->fields.currentAnimationName, 0LL);
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
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v24; // x21
  SimpleAnimation_State_c *v25; // x1
  unsigned __int64 v26; // x10
  SimpleAnimation_State_c **p_offset; // x11
  SimpleAnimation_State_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  unsigned __int64 v35; // x10
  __int64 p_method; // x0
  WarBoardBGEffectComponent_o *v37; // x22
  float v38; // s0
  SimpleAnimation_State_c *v39; // x8
  unsigned __int64 v40; // x10
  SimpleAnimation_State_c **v41; // x11
  __int64 v42; // x0
  System_Int32_array **v43; // x1

  if ( (byte_4212B6E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, animName);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_16226/*"_start"*/, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4212B6E = 1;
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
    v20 = (SimpleAnimation_o *)System_String__Concat_43849904(animName, (System_String_o *)StringLiteral_16226/*"_start"*/, 0LL);
    if ( !v21 )
LABEL_38:
      sub_B0D97C(v20);
    Item = SimpleAnimation__get_Item(v21, (System_String_o *)v20, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v24 = Item;
      v25 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
      {
        v26 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v26;
          p_offset += 2;
          if ( v26 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
            goto LABEL_25;
        }
LABEL_26:
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
LABEL_27:
        (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v24, *(_QWORD *)(p_method + 8));
        v37 = this;
        this->fields.endtime = v38;
        v39 = v24->klass;
        if ( *(_WORD *)&v24->klass->_2.bitflags1 )
        {
          v40 = 0LL;
          v41 = (SimpleAnimation_State_c **)&v39->_1.interfaceOffsets->offset;
          while ( *(v41 - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v40;
            v41 += 2;
            if ( v40 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
              goto LABEL_31;
          }
          v42 = (__int64)&v39->vtable[*(_DWORD *)v41 + 9].method;
        }
        else
        {
LABEL_31:
          v42 = sub_AA67A0(v24, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v20 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v42)(
                                     v24,
                                     *(_QWORD *)(v42 + 8));
        if ( this )
        {
          v43 = (System_Int32_array **)v20;
LABEL_36:
          v37->fields.requestAnimation = (struct System_String_o *)v43;
          sub_B0D840((BattleServantConfConponent_o *)&v37->fields.requestAnimation, v43, v29, v30, v31, v32, v33, v34);
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
      v28 = SimpleAnimation__get_Item(v20, animName, 0LL);
      if ( !v28 )
      {
        this->fields.endtime = 0.0;
        v37 = this;
        v43 = (System_Int32_array **)StringLiteral_1/*""*/;
        goto LABEL_36;
      }
      klass = v28->klass;
      v24 = v28;
      v25 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)&v28->klass->_2.bitflags1 )
      {
        v35 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v35;
          p_offset += 2;
          if ( v35 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
            goto LABEL_25;
        }
        goto LABEL_26;
      }
    }
LABEL_25:
    p_method = sub_AA67A0(v24, v25, 13LL);
    goto LABEL_27;
  }
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.requestAnimation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_animationName = &this->fields.requestAnimation;
LABEL_37:
  sub_B0D840((BattleServantConfConponent_o *)p_animationName, v18, v12, v13, v14, v15, v16, v17);
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
  System_String_o *currentAnimationName; // x20
  SimpleAnimation_State_o *Item; // x21
  bool v13; // w0
  System_String_c *klass; // x8
  System_String_o *v15; // x21
  unsigned __int64 v16; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_4212B6C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, animName);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_16202/*"_loop"*/, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_4212B6C = 1;
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
    State = System_String__Concat_43849904(animName, (System_String_o *)StringLiteral_16202/*"_loop"*/, 0LL);
    if ( !this->fields.simpleAnimationComponent )
      goto LABEL_22;
    currentAnimationName = State;
    Item = SimpleAnimation__get_Item(this->fields.simpleAnimationComponent, State, 0LL);
    v13 = System_String__op_Equality(currentAnimationName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !Item || v13 )
      currentAnimationName = this->fields.currentAnimationName;
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
      goto LABEL_22;
    State = (System_String_o *)SimpleAnimation__GetState((SimpleAnimation_o *)State, currentAnimationName, 0LL);
    if ( !State )
      goto LABEL_22;
    klass = State->klass;
    *(float *)&v3 = this->fields.totaltime;
    v15 = State;
    if ( *(_WORD *)&State->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v16;
        p_offset += 2;
        if ( v16 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v18 = (__int64)(&klass->vtable._4_CompareTo.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_17:
      v18 = sub_AA67A0(State, SimpleAnimation_State_TypeInfo, 4LL);
    }
    (*(void (__fastcall **)(System_String_o *, _QWORD, long double))v18)(v15, *(_QWORD *)(v18 + 8), v3);
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
LABEL_22:
      sub_B0D97C(State);
    SimpleAnimation__Play_50482404((SimpleAnimation_o *)State, currentAnimationName, 0LL);
    this->fields.currentAnimationName = currentAnimationName;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.currentAnimationName,
      (System_Int32_array **)currentAnimationName,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
}


void __fastcall WarBoardBGEffectComponent__Stop(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  SimpleAnimation_o *v5; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v8; // x19
  unsigned __int64 v9; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4212B6A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v3);
    byte_4212B6A = 1;
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
      sub_B0D97C(0LL);
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
        p_method = sub_AA67A0(Item, SimpleAnimation_State_TypeInfo, 18LL);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v8, 1LL, *(_QWORD *)(p_method + 8));
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

  if ( (byte_4212B69 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, playAfterCurrentAnim);
    byte_4212B69 = 1;
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
        sub_B0D97C(0LL);
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
  SimpleAnimation_o *State; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Object_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Object_o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v32; // x21
  unsigned __int64 v33; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v35; // x0
  struct System_String_o **p_playAnimation; // x0
  System_Int32_array **v37; // x1
  struct System_String_o *requestAnimation; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  float v45; // s0

  if ( (byte_4212B71 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4212B71 = 1;
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
          sub_B0D840((BattleServantConfConponent_o *)&this->fields.playAnimation, 0LL, v11, v12, v13, v14, v15, v16);
        }
      }
      if ( this->fields.endtime < this->fields.totaltime )
        ((void (__fastcall *)(WarBoardBGEffectComponent_o *, void *))this->klass->vtable._4_NextPlayAnimation.method)(
          this,
          this->klass[1]._1.image);
      if ( !*p_requestAnimation )
        return;
    }
    v17 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
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
      v37 = 0LL;
LABEL_43:
      sub_B0D840((BattleServantConfConponent_o *)p_playAnimation, v37, v18, v19, v20, v21, v22, v23);
      goto LABEL_44;
    }
    v24 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
      goto LABEL_44;
    State = this->fields.simpleAnimationComponent;
    if ( State )
    {
      if ( !SimpleAnimation__get_Item(State, *p_requestAnimation, 0LL) )
      {
LABEL_44:
        if ( this->fields.status == 5 )
        {
          v45 = this->fields.totaltime;
          if ( v45 > this->fields.endtime )
            this->fields.endtime = v45;
        }
        *p_requestAnimation = 0LL;
        sub_B0D840((BattleServantConfConponent_o *)&this->fields.requestAnimation, 0LL, v25, v26, v27, v28, v29, v30);
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
          v32 = State;
          if ( *(_WORD *)&State->klass->_2.bitflags1 )
          {
            v33 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v33;
              p_offset += 2;
              if ( v33 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
                goto LABEL_37;
            }
            v35 = (__int64)(&klass->vtable._4_OnEnable.method + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_37:
            v35 = sub_AA67A0(State, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v35)(v32, *(_QWORD *)(v35 + 8), v2);
          State = this->fields.simpleAnimationComponent;
          if ( State )
          {
            SimpleAnimation__Rewind_50484572(State, this->fields.requestAnimation, 0LL);
            State = this->fields.simpleAnimationComponent;
            if ( State )
            {
              SimpleAnimation__Play_50482404(State, this->fields.requestAnimation, 0LL);
              requestAnimation = this->fields.requestAnimation;
              this->fields.currentAnimationName = requestAnimation;
              sub_B0D840(
                (BattleServantConfConponent_o *)&this->fields.currentAnimationName,
                (System_Int32_array **)requestAnimation,
                v39,
                v40,
                v41,
                v42,
                v43,
                v44);
              v37 = (System_Int32_array **)this->fields.requestAnimation;
              p_playAnimation = &this->fields.playAnimation;
              this->fields.playAnimation = (struct System_String_o *)v37;
              goto LABEL_43;
            }
          }
        }
      }
    }
LABEL_48:
    sub_B0D97C(State);
  }
}