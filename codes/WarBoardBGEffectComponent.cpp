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
  UnityEngine_Object_o *monitor; // x21
  UnityEngine_Object_o *v14; // x0
  struct System_String_o *name; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F8C38 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F8C38 = 1;
  }
  Component_WebViewObject = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  p_simpleAnimationComponent = &this->fields.simpleAnimationComponent;
  this->fields.simpleAnimationComponent = Component_WebViewObject;
  sub_B16F98(
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
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    if ( !*p_simpleAnimationComponent )
      goto LABEL_16;
    monitor = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      if ( *p_simpleAnimationComponent )
      {
        v14 = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)[1].monitor;
        if ( v14 )
        {
          name = UnityEngine_Object__get_name(v14, 0LL);
          this->fields.currentAnimationName = name;
          sub_B16F98(
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
      sub_B170D4();
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
  System_String_o *v21; // x0
  SimpleAnimation_State_o *v22; // x0
  SimpleAnimation_State_c *v23; // x8
  System_String_o *currentAnimationName; // x21
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **v26; // x11
  __int64 v27; // x0
  System_String_o *v28; // x0
  struct SimpleAnimation_o *v29; // x8
  UnityEngine_Object_o *monitor; // x21
  struct SimpleAnimation_o *v31; // x20
  UnityEngine_Object_o *v32; // x0
  System_String_o *name; // x0
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v35; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40F8C37 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_16090/*"_loop"*/, v4);
    sub_B16FFC(&StringLiteral_16078/*"_end"*/, v5);
    byte_40F8C37 = 1;
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
      v16 = System_String__Concat_43743732(this->fields.animationName, (System_String_o *)StringLiteral_16090/*"_loop"*/, 0LL);
      if ( v15 )
      {
        Item = SimpleAnimation__get_Item(v15, v16, 0LL);
        if ( !Item )
          goto LABEL_11;
LABEL_37:
        klass = Item->klass;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v35 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v35;
            p_offset += 2;
            if ( v35 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_41;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
        }
        else
        {
LABEL_41:
          p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v18 = (struct System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                          Item,
                                          *(_QWORD *)(p_method + 8));
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
      v21 = System_String__Concat_43743732(this->fields.animationName, (System_String_o *)StringLiteral_16078/*"_end"*/, 0LL);
      if ( v20 )
      {
        v22 = SimpleAnimation__get_Item(v20, v21, 0LL);
        Item = v22;
        if ( !v22 )
          goto LABEL_27;
        v23 = v22->klass;
        currentAnimationName = this->fields.currentAnimationName;
        if ( *(_WORD *)&v22->klass->_2.bitflags1 )
        {
          v25 = 0LL;
          v26 = (SimpleAnimation_State_c **)&v23->_1.interfaceOffsets->offset;
          while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v25;
            v26 += 2;
            if ( v25 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
              goto LABEL_23;
          }
          v27 = (__int64)&v23->vtable[*(_DWORD *)v26 + 9].method;
        }
        else
        {
LABEL_23:
          v27 = sub_AAFEF8(v22, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v28 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v27)(
                                   Item,
                                   *(_QWORD *)(v27 + 8));
        if ( System_String__op_Equality(currentAnimationName, v28, 0LL) )
        {
LABEL_27:
          v29 = this->fields.simpleAnimationComponent;
          if ( !v29 )
            goto LABEL_47;
          monitor = (UnityEngine_Object_o *)v29[1].monitor;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
          {
            v31 = this->fields.simpleAnimationComponent;
            if ( !v31 )
              goto LABEL_47;
            v32 = (UnityEngine_Object_o *)v31[1].monitor;
            if ( !v32 )
              goto LABEL_47;
            name = UnityEngine_Object__get_name(v32, 0LL);
            Item = SimpleAnimation__get_Item(v31, name, 0LL);
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
    sub_B170D4();
  }
  if ( status == 4 && !this->fields.loop )
    this->fields.status = 5;
  this->fields.requestAnimation = 0LL;
  p_requestAnimation = &this->fields.requestAnimation;
  v18 = 0LL;
LABEL_45:
  sub_B16F98((BattleServantConfConponent_o *)p_requestAnimation, (System_Int32_array **)v18, v8, v9, v10, v11, v12, v13);
}


void __fastcall WarBoardBGEffectComponent__OtherObjectPlayAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *eventStr,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Char_array *v8; // x0
  __int64 v9; // x2
  System_String_array *v10; // x0
  System_String_o *v11; // x19
  System_String_o *v12; // x21
  bool v13; // w20
  UnityEngine_GameObject_o *v14; // x21
  srcLineSprite_o *Component_srcLineSprite; // x21
  const MethodInfo *v16; // x3

  if ( (byte_40F8C35 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, eventStr);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_22714/*"true"*/, v7);
    byte_40F8C35 = 1;
  }
  if ( this->fields.oldStatus == this->fields.status )
  {
    v8 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, method);
    if ( !v8 )
      goto LABEL_21;
    if ( !v8->max_length )
    {
      sub_B17100(v8, v8, v9);
      sub_B170A0();
    }
    v8->m_Items[2] = 47;
    if ( !eventStr )
      goto LABEL_21;
    v10 = System_String__Split(eventStr, v8, 0LL);
    if ( !v10 )
      goto LABEL_21;
    if ( (int)v10->max_length >= 3 )
    {
      v12 = v10->m_Items[0];
      v11 = v10->m_Items[1];
      v13 = System_String__op_Equality(v10->m_Items[2], (System_String_o *)StringLiteral_22714/*"true"*/, 0LL);
      v14 = UnityEngine_GameObject__Find(v12, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
      {
        if ( !v14 )
          goto LABEL_21;
        Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    v14,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
        {
          if ( Component_srcLineSprite )
          {
            WarBoardBGEffectComponent__PlayAnimation(
              (WarBoardBGEffectComponent_o *)Component_srcLineSprite,
              v11,
              v13,
              v16);
            return;
          }
LABEL_21:
          sub_B170D4();
        }
      }
    }
  }
}


void __fastcall WarBoardBGEffectComponent__PauseAnimation(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  SimpleAnimation_o *v4; // x0

  if ( (byte_40F8C33 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F8C33 = 1;
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
      sub_B170D4();
    SimpleAnimation__Stop_16377956(v4, this->fields.currentAnimationName, 0LL);
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
  System_String_o *v22; // x0
  SimpleAnimation_State_o *Item; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v25; // x21
  SimpleAnimation_State_c *v26; // x1
  unsigned __int64 v27; // x10
  SimpleAnimation_State_c **p_offset; // x11
  SimpleAnimation_o *v29; // x0
  SimpleAnimation_State_o *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  unsigned __int64 v37; // x10
  __int64 p_method; // x0
  WarBoardBGEffectComponent_o *v39; // x22
  float v40; // s0
  SimpleAnimation_State_c *v41; // x8
  unsigned __int64 v42; // x10
  SimpleAnimation_State_c **v43; // x11
  __int64 v44; // x0
  __int64 v45; // x0
  System_Int32_array **v46; // x1

  if ( (byte_40F8C36 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, animName);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_16113/*"_start"*/, v8);
    sub_B16FFC(&StringLiteral_1/*""*/, v9);
    byte_40F8C36 = 1;
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
    v22 = System_String__Concat_43743732(animName, (System_String_o *)StringLiteral_16113/*"_start"*/, 0LL);
    if ( !v21 )
LABEL_38:
      sub_B170D4();
    Item = SimpleAnimation__get_Item(v21, v22, 0LL);
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
        v39 = this;
        this->fields.endtime = v40;
        v41 = v25->klass;
        if ( *(_WORD *)&v25->klass->_2.bitflags1 )
        {
          v42 = 0LL;
          v43 = (SimpleAnimation_State_c **)&v41->_1.interfaceOffsets->offset;
          while ( *(v43 - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v42;
            v43 += 2;
            if ( v42 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
              goto LABEL_31;
          }
          v44 = (__int64)&v41->vtable[*(_DWORD *)v43 + 9].method;
        }
        else
        {
LABEL_31:
          v44 = sub_AAFEF8(v25, SimpleAnimation_State_TypeInfo, 9LL);
        }
        v45 = (*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v44)(v25, *(_QWORD *)(v44 + 8));
        if ( this )
        {
          v46 = (System_Int32_array **)v45;
LABEL_36:
          v39->fields.requestAnimation = (struct System_String_o *)v46;
          sub_B16F98((BattleServantConfConponent_o *)&v39->fields.requestAnimation, v46, v31, v32, v33, v34, v35, v36);
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
      v29 = this->fields.simpleAnimationComponent;
      if ( !v29 )
        goto LABEL_38;
      v30 = SimpleAnimation__get_Item(v29, animName, 0LL);
      if ( !v30 )
      {
        this->fields.endtime = 0.0;
        v39 = this;
        v46 = (System_Int32_array **)StringLiteral_1/*""*/;
        goto LABEL_36;
      }
      klass = v30->klass;
      v25 = v30;
      v26 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)&v30->klass->_2.bitflags1 )
      {
        v37 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v37;
          p_offset += 2;
          if ( v37 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
            goto LABEL_25;
        }
        goto LABEL_26;
      }
    }
LABEL_25:
    p_method = sub_AAFEF8(v25, v26, 13LL);
    goto LABEL_27;
  }
  v18 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.requestAnimation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_animationName = &this->fields.requestAnimation;
LABEL_37:
  sub_B16F98((BattleServantConfConponent_o *)p_animationName, v18, v12, v13, v14, v15, v16, v17);
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
  System_String_o *v10; // x0
  System_String_o *currentAnimationName; // x20
  SimpleAnimation_State_o *Item; // x21
  bool v13; // w0
  SimpleAnimation_o *v14; // x0
  SimpleAnimation_State_o *State; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v17; // x21
  unsigned __int64 v18; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  SimpleAnimation_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40F8C34 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, animName);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_16090/*"_loop"*/, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    byte_40F8C34 = 1;
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
    v10 = System_String__Concat_43743732(animName, (System_String_o *)StringLiteral_16090/*"_loop"*/, 0LL);
    if ( !this->fields.simpleAnimationComponent )
      goto LABEL_22;
    currentAnimationName = v10;
    Item = SimpleAnimation__get_Item(this->fields.simpleAnimationComponent, v10, 0LL);
    v13 = System_String__op_Equality(currentAnimationName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !Item || v13 )
      currentAnimationName = this->fields.currentAnimationName;
    v14 = this->fields.simpleAnimationComponent;
    if ( !v14 )
      goto LABEL_22;
    State = SimpleAnimation__GetState(v14, currentAnimationName, 0LL);
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
      p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
    }
    else
    {
LABEL_17:
      p_method = sub_AAFEF8(State, SimpleAnimation_State_TypeInfo, 4LL);
    }
    (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
      v17,
      *(_QWORD *)(p_method + 8),
      v3);
    v21 = this->fields.simpleAnimationComponent;
    if ( !v21 )
LABEL_22:
      sub_B170D4();
    SimpleAnimation__Play_16380456(v21, currentAnimationName, 0LL);
    this->fields.currentAnimationName = currentAnimationName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.currentAnimationName,
      (System_Int32_array **)currentAnimationName,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
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

  if ( (byte_40F8C32 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v3);
    byte_40F8C32 = 1;
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
      sub_B170D4();
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
        p_method = sub_AAFEF8(Item, SimpleAnimation_State_TypeInfo, 18LL);
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

  if ( (byte_40F8C31 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, playAfterCurrentAnim);
    byte_40F8C31 = 1;
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
        sub_B170D4();
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
  SimpleAnimation_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Object_o *v17; // x21
  SimpleAnimation_o *v18; // x0
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
  SimpleAnimation_o *v32; // x0
  SimpleAnimation_o *v33; // x0
  SimpleAnimation_State_o *State; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v36; // x21
  unsigned __int64 v37; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  struct System_String_o **p_playAnimation; // x0
  System_Int32_array **v41; // x1
  SimpleAnimation_o *v42; // x0
  SimpleAnimation_o *v43; // x0
  struct System_String_o *requestAnimation; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  float v51; // s0

  if ( (byte_40F8C39 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40F8C39 = 1;
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
        v10 = this->fields.simpleAnimationComponent;
        if ( !v10 )
          goto LABEL_48;
        if ( SimpleAnimation__CheckPlaying(v10, 0LL) )
          return;
        if ( this->fields.status == 5 )
        {
          this->fields.playAnimation = 0LL;
          sub_B16F98((BattleServantConfConponent_o *)&this->fields.playAnimation, 0LL, v11, v12, v13, v14, v15, v16);
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
      v18 = this->fields.simpleAnimationComponent;
      if ( !v18 )
        goto LABEL_48;
      if ( SimpleAnimation__CheckPlaying(v18, 0LL) )
        return;
    }
    if ( !System_String__op_Inequality(*p_requestAnimation, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      this->fields.playAnimation = 0LL;
      p_playAnimation = &this->fields.playAnimation;
      v41 = 0LL;
LABEL_43:
      sub_B16F98((BattleServantConfConponent_o *)p_playAnimation, v41, v19, v20, v21, v22, v23, v24);
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
    v32 = this->fields.simpleAnimationComponent;
    if ( v32 )
    {
      if ( !SimpleAnimation__get_Item(v32, *p_requestAnimation, 0LL) )
      {
LABEL_44:
        if ( this->fields.status == 5 )
        {
          v51 = this->fields.totaltime;
          if ( v51 > this->fields.endtime )
            this->fields.endtime = v51;
        }
        *p_requestAnimation = 0LL;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.requestAnimation, 0LL, v26, v27, v28, v29, v30, v31);
        return;
      }
      v33 = this->fields.simpleAnimationComponent;
      if ( v33 )
      {
        State = SimpleAnimation__GetState(v33, this->fields.requestAnimation, 0LL);
        if ( State )
        {
          klass = State->klass;
          *(float *)&v2 = this->fields.totaltime;
          v36 = State;
          if ( *(_WORD *)&State->klass->_2.bitflags1 )
          {
            v37 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v37;
              p_offset += 2;
              if ( v37 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
                goto LABEL_37;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 4].method;
          }
          else
          {
LABEL_37:
            p_method = sub_AAFEF8(State, SimpleAnimation_State_TypeInfo, 4LL);
          }
          (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD, long double))p_method)(
            v36,
            *(_QWORD *)(p_method + 8),
            v2);
          v42 = this->fields.simpleAnimationComponent;
          if ( v42 )
          {
            SimpleAnimation__Rewind_16382624(v42, this->fields.requestAnimation, 0LL);
            v43 = this->fields.simpleAnimationComponent;
            if ( v43 )
            {
              SimpleAnimation__Play_16380456(v43, this->fields.requestAnimation, 0LL);
              requestAnimation = this->fields.requestAnimation;
              this->fields.currentAnimationName = requestAnimation;
              sub_B16F98(
                (BattleServantConfConponent_o *)&this->fields.currentAnimationName,
                (System_Int32_array **)requestAnimation,
                v45,
                v46,
                v47,
                v48,
                v49,
                v50);
              v41 = (System_Int32_array **)this->fields.requestAnimation;
              p_playAnimation = &this->fields.playAnimation;
              this->fields.playAnimation = (struct System_String_o *)v41;
              goto LABEL_43;
            }
          }
        }
      }
    }
LABEL_48:
    sub_B170D4();
  }
}