void DigitRollLabel___ctor(DigitRollLabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D2DFB9 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2DFB9 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.nexttext = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.nexttext, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DigitRollLabel__Awake(DigitRollLabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UILabel_o *nextlabel; // x8
  struct System_String_o *mText; // x1

  nextlabel = this->fields.nextlabel;
  if ( !nextlabel )
    sub_1C942F0(this, method);
  mText = nextlabel->fields.mText;
  this->fields.nexttext = mText;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.nexttext, (int32_t)mText, v2, v3, v4, v5, v6, v7);
}


void DigitRollLabel__ChangeColor(DigitRollLabel_o *this, UnityEngine_Color_o color, const MethodInfo *method)
{
  UIWidget_o *nowlabel; // x0
  float a; // s3
  float b; // s8
  float g; // s9
  float r; // s10
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  nowlabel = (UIWidget_o *)this->fields.nowlabel;
  if ( !nowlabel
    || (a = nowlabel->fields.mColor.fields.a,
        b = color.fields.b,
        g = color.fields.g,
        r = color.fields.r,
        UIWidget__set_color(nowlabel, color, 0),
        (nowlabel = (UIWidget_o *)this->fields.nextlabel) == 0) )
  {
    sub_1C942F0(nowlabel, method);
  }
  v9.fields.a = nowlabel->fields.mColor.fields.a;
  v9.fields.g = g;
  v9.fields.b = b;
  v9.fields.r = r;
  UIWidget__set_color(nowlabel, v9, 0);
}


void DigitRollLabel__changeSpeed(DigitRollLabel_o *this, int32_t speed, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v9; // x20
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v11; // x21
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x22
  __int64 v28; // x8
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x1
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  System_Collections_IEnumerator_c *v42; // x8
  __int64 v43; // x9
  System_Collections_IEnumerator_c **v44; // x10
  __int64 v45; // x0
  UnityEngine_AnimationState_o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x0
  __int64 v49; // x8
  __int64 v50; // x20
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0

  if ( (byte_4D2DFB6 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AnimationState_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SimpleAnimation_State_TypeInfo);
    byte_4D2DFB6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_78;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_78;
  v9 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__GetStates((SimpleAnimation_o *)Component_object, 0);
      if ( gameObject )
      {
        klass = gameObject->klass;
        v11 = gameObject;
        v12 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
        if ( *(_WORD *)&gameObject->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v12;
            p_offset += 4;
            if ( !v12 )
              goto LABEL_14;
          }
          v14 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_14:
          v14 = sub_1C6A420(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
        }
        v16 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
        if ( !v16 )
          sub_1C942F0(0, v15);
        while ( 1 )
        {
          v17 = *(_QWORD *)v16;
          v18 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
          {
            v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v18;
              v19 += 4;
              if ( !v18 )
                goto LABEL_21;
            }
            v20 = v17 + 16LL * *v19 + 312;
          }
          else
          {
LABEL_21:
            v20 = sub_1C6A420(v16, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
            break;
          v21 = *(_QWORD *)v16;
          v22 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
          {
            v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v23 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v22;
              v23 += 4;
              if ( !v22 )
                goto LABEL_28;
            }
            v24 = v21 + 16LL * *v23 + 312;
          }
          else
          {
LABEL_28:
            v24 = sub_1C6A420(v16, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
          }
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
          v27 = v25;
          if ( !v25 )
            sub_1C942F0(0, v26);
          v28 = *(_QWORD *)v25;
          v29 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
          {
            v30 = (SimpleAnimation_State_c **)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *(v30 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v29;
              v30 += 2;
              if ( !v29 )
                goto LABEL_35;
            }
            v31 = v28 + 16LL * (*(_DWORD *)v30 + 8) + 312;
          }
          else
          {
LABEL_35:
            v31 = sub_1C6A420(v25, SimpleAnimation_State_TypeInfo, 8);
          }
          *(float *)&v3 = (float)speed * 1.9;
          (*(void (__fastcall **)(__int64, _QWORD, long double))v31)(v27, *(_QWORD *)(v31 + 8), v3);
        }
        v32 = *(_QWORD *)v16;
        v33 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
        {
          v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
          {
            --v33;
            v34 += 4;
            if ( !v33 )
              goto LABEL_42;
          }
          v35 = v32 + 16LL * *v34 + 312;
        }
        else
        {
LABEL_42:
          v35 = sub_1C6A420(v16, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v35)(v16, *(_QWORD *)(v35 + 8));
        return;
      }
    }
LABEL_78:
    sub_1C942F0(gameObject, v7);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return;
  if ( !v9 )
    goto LABEL_78;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v9, 0);
  if ( !Enumerator )
    sub_1C942F0(0, v36);
  while ( 1 )
  {
    v38 = Enumerator->klass;
    v39 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_54;
      }
      v41 = (__int64)&v38->vtable[*v40];
    }
    else
    {
LABEL_54:
      v41 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8))
        & 1) == 0 )
      break;
    v42 = Enumerator->klass;
    v43 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v44 = (System_Collections_IEnumerator_c **)&v42->_1.interfaceOffsets->offset;
      while ( *(v44 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v43;
        v44 += 2;
        if ( !v43 )
          goto LABEL_61;
      }
      v45 = (__int64)&v42->vtable[*(_DWORD *)v44 + 1];
    }
    else
    {
LABEL_61:
      v45 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v46 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v45)(
                                            Enumerator,
                                            *(_QWORD *)(v45 + 8));
    if ( !v46 )
      goto LABEL_77;
    if ( v46->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C9468C(v46);
LABEL_77:
      sub_1C942F0(v46, v47);
    }
    UnityEngine_AnimationState__set_speed(v46, (float)speed * 1.9, 0);
  }
  v48 = sub_1C941D4(Enumerator, System_IDisposable_TypeInfo);
  if ( v48 )
  {
    v49 = *(_QWORD *)v48;
    v50 = v48;
    v51 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
    {
      v52 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_71;
      }
      v53 = v49 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_71:
      v53 = sub_1C6A420(v48, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v53)(v50, *(_QWORD *)(v53 + 8));
  }
}


void DigitRollLabel__changeText(DigitRollLabel_o *this, System_String_o *text, const MethodInfo *method)
{
  UILabel_o *nowlabel; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  nowlabel = this->fields.nowlabel;
  if ( !nowlabel || (UILabel__set_text(nowlabel, text, 0), (nowlabel = this->fields.nextlabel) == 0) )
    sub_1C942F0(nowlabel, text);
  UILabel__set_text(nowlabel, text, 0);
  this->fields.nexttext = text;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.nexttext, (int32_t)text, v6, v7, v8, v9, v10, v11);
}


void DigitRollLabel__endChange(DigitRollLabel_o *this, System_String_o *text, const MethodInfo *method)
{
  DigitRollLabel_o *v4; // x20
  struct UILabel_o *nextlabel; // x8
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *Component_object; // x19
  Il2CppObject *v13; // x20
  DigitRollLabel_c *klass; // x8
  DigitRollLabel_o *v15; // x20
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0

  v4 = this;
  if ( (byte_4D2DFB8 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&SimpleAnimation_State_TypeInfo);
    this = (DigitRollLabel_o *)sub_1C94098(&StringLiteral_18424/*"cpcount"*/);
    byte_4D2DFB8 = 1;
  }
  nextlabel = v4->fields.nextlabel;
  if ( !nextlabel )
    goto LABEL_27;
  this = (DigitRollLabel_o *)v4->fields.nowlabel;
  if ( !this )
    goto LABEL_27;
  UILabel__set_text((UILabel_o *)this, nextlabel->fields.mText, 0);
  this = (DigitRollLabel_o *)v4->fields.nextlabel;
  if ( !this )
    goto LABEL_27;
  UILabel__set_text((UILabel_o *)this, text, 0);
  v4->fields.nexttext = text;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v4->fields.nexttext, (int32_t)text, v6, v7, v8, v9, v10, v11);
  this = (DigitRollLabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
  if ( !this )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this = (DigitRollLabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
  if ( !this )
    goto LABEL_27;
  v13 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DigitRollLabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (DigitRollLabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    if ( v13 )
    {
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v13, 0);
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v13, 0);
      this = (DigitRollLabel_o *)UnityEngine_Animation__get_Item(
                                   (UnityEngine_Animation_o *)v13,
                                   (System_String_o *)StringLiteral_18424/*"cpcount"*/,
                                   0);
      if ( this )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)this, 1.0, 0);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v13, 0);
        return;
      }
    }
LABEL_27:
    sub_1C942F0(this, text);
  }
  if ( !Component_object )
    goto LABEL_27;
  SimpleAnimation__Stop((SimpleAnimation_o *)Component_object, 0);
  SimpleAnimation__Play((SimpleAnimation_o *)Component_object, 0);
  this = (DigitRollLabel_o *)SimpleAnimation__get_Item(
                               (SimpleAnimation_o *)Component_object,
                               (System_String_o *)StringLiteral_18424/*"cpcount"*/,
                               0);
  if ( !this )
    goto LABEL_27;
  klass = this->klass;
  v15 = this;
  v16 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_17;
    }
    v18 = (__int64)&klass[1] + 16 * *p_offset;
  }
  else
  {
LABEL_17:
    v18 = sub_1C6A420(this, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(DigitRollLabel_o *, _QWORD, float))v18)(v15, *(_QWORD *)(v18 + 8), 1.0);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0);
}


void DigitRollLabel__startChange(DigitRollLabel_o *this, System_String_o *text, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x21
  Il2CppObject *v8; // x22
  struct UILabel_o *nextlabel; // x8
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_String_o **p_nexttext; // x0
  struct UILabel_o *v17; // x8

  if ( (byte_4D2DFB7 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2DFB7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_29;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_29;
  v8 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_29;
    gameObject = (UnityEngine_GameObject_o *)SimpleAnimation__get_isPlaying((SimpleAnimation_o *)Component_object, 0);
    if ( ((unsigned __int8)gameObject & 1) == 0 )
    {
      if ( !text )
        goto LABEL_29;
      gameObject = (UnityEngine_GameObject_o *)System_String__Equals_64453064(text, this->fields.nexttext, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        nextlabel = this->fields.nextlabel;
        if ( nextlabel )
        {
          gameObject = (UnityEngine_GameObject_o *)this->fields.nowlabel;
          if ( gameObject )
          {
            UILabel__set_text((UILabel_o *)gameObject, nextlabel->fields.mText, 0);
            gameObject = (UnityEngine_GameObject_o *)this->fields.nextlabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, text, 0);
              SimpleAnimation__Stop((SimpleAnimation_o *)Component_object, 0);
              SimpleAnimation__Play((SimpleAnimation_o *)Component_object, 0);
              p_nexttext = &this->fields.nexttext;
              this->fields.nexttext = text;
LABEL_28:
              sub_1C9403C((GrandQuestFolderBoardItem_o *)p_nexttext, (int32_t)text, v10, v11, v12, v13, v14, v15);
              return;
            }
          }
        }
        goto LABEL_29;
      }
    }
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v8 )
        goto LABEL_29;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v8, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !text )
          goto LABEL_29;
        gameObject = (UnityEngine_GameObject_o *)System_String__Equals_64453064(text, this->fields.nexttext, 0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          v17 = this->fields.nextlabel;
          if ( v17 )
          {
            gameObject = (UnityEngine_GameObject_o *)this->fields.nowlabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, v17->fields.mText, 0);
              gameObject = (UnityEngine_GameObject_o *)this->fields.nextlabel;
              if ( gameObject )
              {
                UILabel__set_text((UILabel_o *)gameObject, text, 0);
                UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v8, 0);
                UnityEngine_Animation__Play((UnityEngine_Animation_o *)v8, 0);
                this->fields.nexttext = text;
                p_nexttext = &this->fields.nexttext;
                goto LABEL_28;
              }
            }
          }
LABEL_29:
          sub_1C942F0(gameObject, v6);
        }
      }
    }
  }
}