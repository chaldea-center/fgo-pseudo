void __fastcall WarBoardBGEffectComponent___ctor(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.endtime = 5.0;
  this->fields.loop = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardBGEffectComponent__Awake(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct SimpleAnimation_o *Component_WebViewObject; // x0
  struct SimpleAnimation_o **p_simpleAnimationComponent; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  UnityEngine_Object_o *v17; // x0
  __int64 v18; // x1
  UnityEngine_Object_o *monitor; // x21
  struct System_String_o *name; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_42E6940 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E6940 = 1;
  }
  Component_WebViewObject = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  p_simpleAnimationComponent = &this->fields.simpleAnimationComponent;
  this->fields.simpleAnimationComponent = Component_WebViewObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.simpleAnimationComponent,
    (System_Int32_array **)Component_WebViewObject,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v17 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
  {
    if ( !*p_simpleAnimationComponent )
      goto LABEL_16;
    monitor = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v17 = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
    if ( ((unsigned __int8)v17 & 1) != 0 )
    {
      if ( *p_simpleAnimationComponent )
      {
        v17 = (UnityEngine_Object_o *)(*p_simpleAnimationComponent)[1].monitor;
        if ( v17 )
        {
          name = UnityEngine_Object__get_name(v17, 0LL);
          this->fields.currentAnimationName = name;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.currentAnimationName,
            (System_Int32_array **)name,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          return;
        }
      }
LABEL_16:
      sub_B5D69C(v17, v18);
    }
  }
}


void __fastcall WarBoardBGEffectComponent__NextPlayAnimation(
        WarBoardBGEffectComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  bool v15; // w0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t status; // w8
  SimpleAnimation_o *v23; // x20
  System_String_o *v24; // x0
  struct System_String_o *v25; // x1
  SimpleAnimation_State_o *Item; // x20
  struct System_String_o **p_requestAnimation; // x0
  SimpleAnimation_o *v28; // x20
  __int64 v29; // x3
  System_String_c *v30; // x8
  System_String_o *currentAnimationName; // x21
  unsigned __int64 v32; // x10
  SimpleAnimation_State_c **v33; // x11
  __int64 v34; // x0
  System_String_o *v35; // x0
  struct SimpleAnimation_o *v36; // x8
  UnityEngine_Object_o *monitor; // x21
  struct SimpleAnimation_o *v38; // x20
  System_String_o *name; // x0
  SimpleAnimation_State_c *klass; // x8
  unsigned __int64 v41; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42E693F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_16347/*"_loop"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16334/*"_end"*/, v11, v12, v13);
    byte_42E693F = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL);
  status = this->fields.status;
  if ( v15 )
  {
    if ( status == 4 )
    {
      if ( !this->fields.loop )
      {
LABEL_11:
        v25 = 0LL;
        this->fields.status = 5;
LABEL_44:
        this->fields.requestAnimation = v25;
        p_requestAnimation = &this->fields.requestAnimation;
        goto LABEL_45;
      }
      v23 = this->fields.simpleAnimationComponent;
      v24 = System_String__Concat_44577788(this->fields.animationName, (System_String_o *)StringLiteral_16347/*"_loop"*/, 0LL);
      if ( v23 )
      {
        Item = SimpleAnimation__get_Item(v23, v24, 0LL);
        if ( !Item )
          goto LABEL_11;
LABEL_37:
        klass = Item->klass;
        if ( *(_WORD *)&Item->klass->_2.bitflags1 )
        {
          v41 = 0LL;
          p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
          while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v41;
            p_offset += 2;
            if ( v41 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
              goto LABEL_41;
          }
          p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 9].method;
        }
        else
        {
LABEL_41:
          p_method = sub_AF54C0(Item, SimpleAnimation_State_TypeInfo, 9LL, v17);
        }
        v24 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                   Item,
                                   *(_QWORD *)(p_method + 8));
        v25 = v24;
        if ( this )
          goto LABEL_44;
      }
    }
    else
    {
      if ( status != 5 )
      {
        v25 = 0LL;
        goto LABEL_44;
      }
      v28 = this->fields.simpleAnimationComponent;
      v24 = System_String__Concat_44577788(this->fields.animationName, (System_String_o *)StringLiteral_16334/*"_end"*/, 0LL);
      if ( v28 )
      {
        v24 = (System_String_o *)SimpleAnimation__get_Item(v28, v24, 0LL);
        Item = (SimpleAnimation_State_o *)v24;
        if ( !v24 )
          goto LABEL_27;
        v30 = v24->klass;
        currentAnimationName = this->fields.currentAnimationName;
        if ( *(_WORD *)&v24->klass->_2.bitflags1 )
        {
          v32 = 0LL;
          v33 = (SimpleAnimation_State_c **)&v30->_1.interfaceOffsets->offset;
          while ( *(v33 - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v32;
            v33 += 2;
            if ( v32 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
              goto LABEL_23;
          }
          v34 = (__int64)(&v30->vtable._9_System_IConvertible_ToSByte.method + 2 * *(_DWORD *)v33);
        }
        else
        {
LABEL_23:
          v34 = sub_AF54C0(v24, SimpleAnimation_State_TypeInfo, 9LL, v29);
        }
        v35 = (System_String_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v34)(
                                   Item,
                                   *(_QWORD *)(v34 + 8));
        v24 = (System_String_o *)System_String__op_Equality(currentAnimationName, v35, 0LL);
        if ( ((unsigned __int8)v24 & 1) != 0 )
        {
LABEL_27:
          v36 = this->fields.simpleAnimationComponent;
          if ( !v36 )
            goto LABEL_47;
          monitor = (UnityEngine_Object_o *)v36[1].monitor;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v24 = (System_String_o *)UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL);
          if ( ((unsigned __int8)v24 & 1) != 0 )
          {
            v38 = this->fields.simpleAnimationComponent;
            if ( !v38 )
              goto LABEL_47;
            v24 = (System_String_o *)v38[1].monitor;
            if ( !v24 )
              goto LABEL_47;
            name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v24, 0LL);
            v24 = (System_String_o *)SimpleAnimation__get_Item(v38, name, 0LL);
            Item = (SimpleAnimation_State_o *)v24;
            this->fields.status = 1;
          }
          this->fields.totaltime = 0.0;
        }
        if ( Item )
          goto LABEL_37;
        v25 = 0LL;
        if ( this )
          goto LABEL_44;
      }
    }
LABEL_47:
    sub_B5D69C(v24, v25);
  }
  if ( status == 4 && !this->fields.loop )
    this->fields.status = 5;
  this->fields.requestAnimation = 0LL;
  p_requestAnimation = &this->fields.requestAnimation;
  v25 = 0LL;
LABEL_45:
  sub_B5D560(
    (BattleServantConfConponent_o *)p_requestAnimation,
    (System_Int32_array **)v25,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


void __fastcall WarBoardBGEffectComponent__OtherObjectPlayAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *eventStr,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_String_array *v15; // x0
  System_String_array *v16; // x1
  System_String_o *v17; // x19
  System_String_o *v18; // x21
  bool v19; // w20
  UnityEngine_Object_o *v20; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v22; // x3
  __int64 v23; // x0

  if ( (byte_42E693D & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)eventStr, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_23112/*"true"*/, v12, v13, v14);
    byte_42E693D = 1;
  }
  if ( this->fields.oldStatus == this->fields.status )
  {
    v15 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v15 )
      goto LABEL_21;
    v16 = v15;
    if ( !v15->max_length )
    {
      v23 = sub_B5D6C8(v15);
      sub_B5D668(v23, 0LL);
    }
    LOWORD(v15->m_Items[0]) = 47;
    if ( !eventStr )
      goto LABEL_21;
    v15 = System_String__Split(eventStr, (System_Char_array *)v15, 0LL);
    if ( !v15 )
      goto LABEL_21;
    if ( (int)v15->max_length >= 3 )
    {
      v18 = v15->m_Items[0];
      v17 = v15->m_Items[1];
      v19 = System_String__op_Equality(v15->m_Items[2], (System_String_o *)StringLiteral_23112/*"true"*/, 0LL);
      v20 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(v18, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v15 = (System_String_array *)UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
      if ( ((unsigned __int8)v15 & 1) == 0 )
      {
        if ( !v20 )
          goto LABEL_21;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)v20,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v15 = (System_String_array *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
        if ( ((unsigned __int8)v15 & 1) != 0 )
        {
          if ( Component_srcLineSprite )
          {
            WarBoardBGEffectComponent__PlayAnimation(
              (WarBoardBGEffectComponent_o *)Component_srcLineSprite,
              v17,
              v19,
              v22);
            return;
          }
LABEL_21:
          sub_B5D69C(v15, v16);
        }
      }
    }
  }
}


void __fastcall WarBoardBGEffectComponent__PauseAnimation(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v6; // x1
  SimpleAnimation_o *v7; // x0

  if ( (byte_42E693B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E693B = 1;
  }
  simpleAnimationComponent = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(simpleAnimationComponent, 0LL, 0LL) )
  {
    v7 = this->fields.simpleAnimationComponent;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    SimpleAnimation__Stop_16673544(v7, this->fields.currentAnimationName, 0LL);
    this->fields.status = 2;
  }
}


void __fastcall WarBoardBGEffectComponent__PlayAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *animName,
        bool playAfterCurrentAnim,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x22
  const MethodInfo *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x1
  struct System_String_o **p_animationName; // x0
  SimpleAnimation_o *v26; // x0
  SimpleAnimation_o *v27; // x21
  SimpleAnimation_State_o *Item; // x0
  System_String_array **v29; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v31; // x21
  SimpleAnimation_State_c *v32; // x1
  unsigned __int64 v33; // x10
  SimpleAnimation_State_c **p_offset; // x11
  SimpleAnimation_State_o *v35; // x0
  System_String_array **v36; // x2
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  unsigned __int64 v41; // x10
  __int64 p_method; // x0
  __int64 v43; // x3
  WarBoardBGEffectComponent_o *v44; // x22
  float v45; // s0
  SimpleAnimation_State_c *v46; // x8
  unsigned __int64 v47; // x10
  SimpleAnimation_State_c **v48; // x11
  __int64 v49; // x0
  System_Int32_array **v50; // x1

  if ( (byte_42E693E & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)animName, playAfterCurrentAnim, method);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_16371/*"_start"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_1/*""*/, v13, v14, v15);
    byte_42E693E = 1;
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
      WarBoardBGEffectComponent__Stop(this, v17);
    }
    else
    {
      v26 = this->fields.simpleAnimationComponent;
      if ( !v26 )
        goto LABEL_38;
      SimpleAnimation__Stop(v26, 0LL);
    }
    v27 = this->fields.simpleAnimationComponent;
    v26 = (SimpleAnimation_o *)System_String__Concat_44577788(animName, (System_String_o *)StringLiteral_16371/*"_start"*/, 0LL);
    if ( !v27 )
LABEL_38:
      sub_B5D69C(v26, v17);
    Item = SimpleAnimation__get_Item(v27, (System_String_o *)v26, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v31 = Item;
      v32 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
      {
        v33 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v33;
          p_offset += 2;
          if ( v33 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
            goto LABEL_25;
        }
LABEL_26:
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 13].method;
LABEL_27:
        (*(void (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(v31, *(_QWORD *)(p_method + 8));
        v44 = this;
        this->fields.endtime = v45;
        v46 = v31->klass;
        if ( *(_WORD *)&v31->klass->_2.bitflags1 )
        {
          v47 = 0LL;
          v48 = (SimpleAnimation_State_c **)&v46->_1.interfaceOffsets->offset;
          while ( *(v48 - 1) != SimpleAnimation_State_TypeInfo )
          {
            ++v47;
            v48 += 2;
            if ( v47 >= *(unsigned __int16 *)&v31->klass->_2.bitflags1 )
              goto LABEL_31;
          }
          v49 = (__int64)&v46->vtable[*(_DWORD *)v48 + 9].method;
        }
        else
        {
LABEL_31:
          v49 = sub_AF54C0(v31, SimpleAnimation_State_TypeInfo, 9LL, v43);
        }
        v26 = (SimpleAnimation_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))v49)(
                                     v31,
                                     *(_QWORD *)(v49 + 8));
        if ( this )
        {
          v50 = (System_Int32_array **)v26;
LABEL_36:
          v44->fields.requestAnimation = (struct System_String_o *)v50;
          sub_B5D560((BattleServantConfConponent_o *)&v44->fields.requestAnimation, v50, v36, v29, v37, v38, v39, v40);
          this->fields.animationName = animName;
          p_animationName = &this->fields.animationName;
          v24 = (System_Int32_array **)animName;
          goto LABEL_37;
        }
        goto LABEL_38;
      }
    }
    else
    {
      v26 = this->fields.simpleAnimationComponent;
      if ( !v26 )
        goto LABEL_38;
      v35 = SimpleAnimation__get_Item(v26, animName, 0LL);
      if ( !v35 )
      {
        this->fields.endtime = 0.0;
        v44 = this;
        v50 = (System_Int32_array **)StringLiteral_1/*""*/;
        goto LABEL_36;
      }
      klass = v35->klass;
      v31 = v35;
      v32 = SimpleAnimation_State_TypeInfo;
      if ( *(_WORD *)&v35->klass->_2.bitflags1 )
      {
        v41 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v41;
          p_offset += 2;
          if ( v41 >= *(unsigned __int16 *)&v35->klass->_2.bitflags1 )
            goto LABEL_25;
        }
        goto LABEL_26;
      }
    }
LABEL_25:
    p_method = sub_AF54C0(v31, v32, 13LL, v29);
    goto LABEL_27;
  }
  v24 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.requestAnimation = (struct System_String_o *)StringLiteral_1/*""*/;
  p_animationName = &this->fields.requestAnimation;
LABEL_37:
  sub_B5D560((BattleServantConfConponent_o *)p_animationName, v24, v18, v19, v20, v21, v22, v23);
  this->fields.totaltime = 0.0;
  this->fields.loop = 1;
  this->fields.status = 4;
}


void __fastcall WarBoardBGEffectComponent__ResumeAnimation(
        WarBoardBGEffectComponent_o *this,
        System_String_o *animName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  long double v4; // q8
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  System_String_o *State; // x0
  __int64 v18; // x1
  System_String_o *currentAnimationName; // x20
  SimpleAnimation_State_o *Item; // x21
  bool v21; // w0
  __int64 v22; // x3
  System_String_c *klass; // x8
  System_String_o *v24; // x21
  unsigned __int64 v25; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42E693C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)animName, (_DWORD)method, v3);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_16347/*"_loop"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_1/*""*/, v13, v14, v15);
    byte_42E693C = 1;
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
    State = System_String__Concat_44577788(animName, (System_String_o *)StringLiteral_16347/*"_loop"*/, 0LL);
    if ( !this->fields.simpleAnimationComponent )
      goto LABEL_22;
    currentAnimationName = State;
    Item = SimpleAnimation__get_Item(this->fields.simpleAnimationComponent, State, 0LL);
    v21 = System_String__op_Equality(currentAnimationName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !Item || v21 )
      currentAnimationName = this->fields.currentAnimationName;
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
      goto LABEL_22;
    State = (System_String_o *)SimpleAnimation__GetState((SimpleAnimation_o *)State, currentAnimationName, 0LL);
    if ( !State )
      goto LABEL_22;
    klass = State->klass;
    *(float *)&v4 = this->fields.totaltime;
    v24 = State;
    if ( *(_WORD *)&State->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
      while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v25;
        p_offset += 2;
        if ( v25 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
          goto LABEL_17;
      }
      v27 = (__int64)(&klass->vtable._4_CompareTo.method + 2 * *(_DWORD *)p_offset);
    }
    else
    {
LABEL_17:
      v27 = sub_AF54C0(State, SimpleAnimation_State_TypeInfo, 4LL, v22);
    }
    (*(void (__fastcall **)(System_String_o *, _QWORD, long double))v27)(v24, *(_QWORD *)(v27 + 8), v4);
    State = (System_String_o *)this->fields.simpleAnimationComponent;
    if ( !State )
LABEL_22:
      sub_B5D69C(State, v18);
    SimpleAnimation__Play_16676044((SimpleAnimation_o *)State, currentAnimationName, 0LL);
    this->fields.currentAnimationName = currentAnimationName;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.currentAnimationName,
      (System_Int32_array **)currentAnimationName,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
}


void __fastcall WarBoardBGEffectComponent__Stop(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x20
  __int64 v9; // x1
  SimpleAnimation_o *v10; // x0
  SimpleAnimation_State_o *Item; // x0
  __int64 v12; // x3
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v14; // x19
  unsigned __int64 v15; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42E693A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v5, v6, v7);
    byte_42E693A = 1;
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
    v10 = this->fields.simpleAnimationComponent;
    if ( !v10 )
      sub_B5D69C(0LL, v9);
    Item = SimpleAnimation__get_Item(v10, this->fields.currentAnimationName, 0LL);
    if ( Item )
    {
      klass = Item->klass;
      v14 = Item;
      if ( *(_WORD *)&Item->klass->_2.bitflags1 )
      {
        v15 = 0LL;
        p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
        while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
        {
          ++v15;
          p_offset += 2;
          if ( v15 >= *(unsigned __int16 *)&Item->klass->_2.bitflags1 )
            goto LABEL_13;
        }
        p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 18].method;
      }
      else
      {
LABEL_13:
        p_method = sub_AF54C0(Item, SimpleAnimation_State_TypeInfo, 18LL, v12);
      }
      (*(void (__fastcall **)(SimpleAnimation_State_o *, __int64, _QWORD))p_method)(v14, 1LL, *(_QWORD *)(p_method + 8));
    }
  }
}


void __fastcall WarBoardBGEffectComponent__StopAnimation(
        WarBoardBGEffectComponent_o *this,
        bool playAfterCurrentAnim,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  const MethodInfo *v7; // x1
  SimpleAnimation_o *v8; // x0

  if ( (byte_42E6939 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, playAfterCurrentAnim, (_DWORD)method, v3);
    byte_42E6939 = 1;
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
      WarBoardBGEffectComponent__Stop(this, v7);
    }
    else
    {
      v8 = this->fields.simpleAnimationComponent;
      if ( !v8 )
        sub_B5D69C(0LL, v7);
      SimpleAnimation__Stop(v8, 0LL);
    }
  }
}


void __fastcall WarBoardBGEffectComponent__Update(WarBoardBGEffectComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  long double v4; // q8
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t status; // w8
  float totaltime; // s8
  System_String_o **p_requestAnimation; // x20
  UnityEngine_Object_o *simpleAnimationComponent; // x21
  __int64 v16; // x1
  SimpleAnimation_o *State; // x0
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
  UnityEngine_Object_o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v40; // x21
  unsigned __int64 v41; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v43; // x0
  struct System_String_o **p_playAnimation; // x0
  System_Int32_array **v45; // x1
  struct System_String_o *requestAnimation; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  float v53; // s0

  if ( (byte_42E6941 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42E6941 = 1;
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
          sub_B5D560((BattleServantConfConponent_o *)&this->fields.playAnimation, 0LL, v18, v19, v20, v21, v22, v23);
        }
      }
      if ( this->fields.endtime < this->fields.totaltime )
        ((void (__fastcall *)(WarBoardBGEffectComponent_o *, void *))this->klass->vtable._4_NextPlayAnimation.method)(
          this,
          this->klass[1]._1.image);
      if ( !*p_requestAnimation )
        return;
    }
    v24 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
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
      v45 = 0LL;
LABEL_43:
      sub_B5D560((BattleServantConfConponent_o *)p_playAnimation, v45, v25, v26, v27, v28, v29, v30);
      goto LABEL_44;
    }
    v31 = (UnityEngine_Object_o *)this->fields.simpleAnimationComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
      goto LABEL_44;
    State = this->fields.simpleAnimationComponent;
    if ( State )
    {
      if ( !SimpleAnimation__get_Item(State, *p_requestAnimation, 0LL) )
      {
LABEL_44:
        if ( this->fields.status == 5 )
        {
          v53 = this->fields.totaltime;
          if ( v53 > this->fields.endtime )
            this->fields.endtime = v53;
        }
        *p_requestAnimation = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.requestAnimation, 0LL, v32, v33, v34, v35, v36, v37);
        return;
      }
      State = this->fields.simpleAnimationComponent;
      if ( State )
      {
        State = (SimpleAnimation_o *)SimpleAnimation__GetState(State, this->fields.requestAnimation, 0LL);
        if ( State )
        {
          klass = State->klass;
          *(float *)&v4 = this->fields.totaltime;
          v40 = State;
          if ( *(_WORD *)&State->klass->_2.bitflags1 )
          {
            v41 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v41;
              p_offset += 2;
              if ( v41 >= *(unsigned __int16 *)&State->klass->_2.bitflags1 )
                goto LABEL_37;
            }
            v43 = (__int64)(&klass->vtable._4_OnEnable.method + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_37:
            v43 = sub_AF54C0(State, SimpleAnimation_State_TypeInfo, 4LL, v38);
          }
          (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v43)(v40, *(_QWORD *)(v43 + 8), v4);
          State = this->fields.simpleAnimationComponent;
          if ( State )
          {
            SimpleAnimation__Rewind_16678212(State, this->fields.requestAnimation, 0LL);
            State = this->fields.simpleAnimationComponent;
            if ( State )
            {
              SimpleAnimation__Play_16676044(State, this->fields.requestAnimation, 0LL);
              requestAnimation = this->fields.requestAnimation;
              this->fields.currentAnimationName = requestAnimation;
              sub_B5D560(
                (BattleServantConfConponent_o *)&this->fields.currentAnimationName,
                (System_Int32_array **)requestAnimation,
                v47,
                v48,
                v49,
                v50,
                v51,
                v52);
              v45 = (System_Int32_array **)this->fields.requestAnimation;
              p_playAnimation = &this->fields.playAnimation;
              this->fields.playAnimation = (struct System_String_o *)v45;
              goto LABEL_43;
            }
          }
        }
      }
    }
LABEL_48:
    sub_B5D69C(State, v16);
  }
}