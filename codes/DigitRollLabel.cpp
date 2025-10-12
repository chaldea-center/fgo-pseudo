void DigitRollLabel___ctor(DigitRollLabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C390BE & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C390BE = 1;
  }
  v5 = StringLiteral_1/*""*/;
  this->fields.nexttext = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.nexttext, v5, v2, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DigitRollLabel__Awake(DigitRollLabel_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct UILabel_o *nextlabel; // x8
  struct System_String_o *mText; // x1

  nextlabel = this->fields.nextlabel;
  if ( !nextlabel )
    sub_1C32E7C(this);
  mText = nextlabel->fields.mText;
  this->fields.nexttext = mText;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.nexttext, (int32_t)mText, v2, v3);
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
    sub_1C32E7C(nowlabel);
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
  Il2CppObject *Component_object; // x21
  Il2CppObject *v8; // x20
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v10; // x21
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x21
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x22
  __int64 v25; // x8
  __int64 v26; // x9
  SimpleAnimation_State_c **v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  System_Collections_IEnumerator_c *v38; // x8
  __int64 v39; // x9
  System_Collections_IEnumerator_c **v40; // x10
  __int64 v41; // x0
  UnityEngine_AnimationState_o *v42; // x0
  __int64 v43; // x0
  __int64 v44; // x8
  __int64 v45; // x20
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0

  if ( (byte_4C390BB & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_AnimationState_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C390BB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_78;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_78;
  v8 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
        v10 = gameObject;
        v11 = *(unsigned __int16 *)&gameObject->klass->_2.rank;
        if ( *(_WORD *)&gameObject->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
          {
            --v11;
            p_offset += 4;
            if ( !v11 )
              goto LABEL_14;
          }
          v13 = (__int64)&klass->vtable + 16 * *p_offset;
        }
        else
        {
LABEL_14:
          v13 = sub_1C83438(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
        }
        v14 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
        if ( !v14 )
          sub_1C32E7C(0);
        while ( 1 )
        {
          v15 = *(_QWORD *)v14;
          v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
          {
            v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v16;
              v17 += 4;
              if ( !v16 )
                goto LABEL_21;
            }
            v18 = v15 + 16LL * *v17 + 312;
          }
          else
          {
LABEL_21:
            v18 = sub_1C83438(v14, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
            break;
          v19 = *(_QWORD *)v14;
          v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
          {
            v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v21 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v20;
              v21 += 4;
              if ( !v20 )
                goto LABEL_28;
            }
            v22 = v19 + 16LL * *v21 + 312;
          }
          else
          {
LABEL_28:
            v22 = sub_1C83438(v14, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
          }
          v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
          v24 = v23;
          if ( !v23 )
            sub_1C32E7C(0);
          v25 = *(_QWORD *)v23;
          v26 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
          {
            v27 = (SimpleAnimation_State_c **)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *(v27 - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v26;
              v27 += 2;
              if ( !v26 )
                goto LABEL_35;
            }
            v28 = v25 + 16LL * (*(_DWORD *)v27 + 8) + 312;
          }
          else
          {
LABEL_35:
            v28 = sub_1C83438(v23, SimpleAnimation_State_TypeInfo, 8);
          }
          *(float *)&v3 = (float)speed * 1.9;
          (*(void (__fastcall **)(__int64, _QWORD, long double))v28)(v24, *(_QWORD *)(v28 + 8), v3);
        }
        v29 = *(_QWORD *)v14;
        v30 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
        {
          v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
          {
            --v30;
            v31 += 4;
            if ( !v30 )
              goto LABEL_42;
          }
          v32 = v29 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_42:
          v32 = sub_1C83438(v14, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v32)(v14, *(_QWORD *)(v32 + 8));
        return;
      }
    }
LABEL_78:
    sub_1C32E7C(gameObject);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    return;
  if ( !v8 )
    goto LABEL_78;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v8, 0);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v34 = Enumerator->klass;
    v35 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v36 = &v34->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_54;
      }
      v37 = (__int64)&v34->vtable[*v36];
    }
    else
    {
LABEL_54:
      v37 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8))
        & 1) == 0 )
      break;
    v38 = Enumerator->klass;
    v39 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v40 = (System_Collections_IEnumerator_c **)&v38->_1.interfaceOffsets->offset;
      while ( *(v40 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v39;
        v40 += 2;
        if ( !v39 )
          goto LABEL_61;
      }
      v41 = (__int64)&v38->vtable[*(_DWORD *)v40 + 1];
    }
    else
    {
LABEL_61:
      v41 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v42 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v41)(
                                            Enumerator,
                                            *(_QWORD *)(v41 + 8));
    if ( !v42 )
      goto LABEL_77;
    if ( v42->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C3313C(v42);
LABEL_77:
      sub_1C32E7C(v42);
    }
    UnityEngine_AnimationState__set_speed(v42, (float)speed * 1.9, 0);
  }
  v43 = sub_1C32D5C(Enumerator, System_IDisposable_TypeInfo);
  if ( v43 )
  {
    v44 = *(_QWORD *)v43;
    v45 = v43;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_71;
      }
      v48 = v44 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_71:
      v48 = sub_1C83438(v43, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v48)(v45, *(_QWORD *)(v48 + 8));
  }
}


void DigitRollLabel__changeText(DigitRollLabel_o *this, System_String_o *text, const MethodInfo *method)
{
  UILabel_o *nowlabel; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  nowlabel = this->fields.nowlabel;
  if ( !nowlabel || (UILabel__set_text(nowlabel, text, 0), (nowlabel = this->fields.nextlabel) == 0) )
    sub_1C32E7C(nowlabel);
  UILabel__set_text(nowlabel, text, 0);
  this->fields.nexttext = text;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.nexttext, (int32_t)text, v6, v7);
}


void DigitRollLabel__endChange(DigitRollLabel_o *this, System_String_o *text, const MethodInfo *method)
{
  DigitRollLabel_o *v4; // x20
  struct UILabel_o *nextlabel; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *Component_object; // x19
  Il2CppObject *v9; // x20
  DigitRollLabel_c *klass; // x8
  DigitRollLabel_o *v11; // x20
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0

  v4 = this;
  if ( (byte_4C390BD & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    this = (DigitRollLabel_o *)sub_1C32C20(&StringLiteral_18317/*"cpcount"*/);
    byte_4C390BD = 1;
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
  sub_1C32BC4((CGThumbnailListItem_o *)&v4->fields.nexttext, (int32_t)text, v6, v7);
  this = (DigitRollLabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
  if ( !this )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this = (DigitRollLabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
  if ( !this )
    goto LABEL_27;
  v9 = UnityEngine_GameObject__GetComponent_object_(
         (UnityEngine_GameObject_o *)this,
         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (DigitRollLabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (DigitRollLabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    if ( v9 )
    {
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v9, 0);
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v9, 0);
      this = (DigitRollLabel_o *)UnityEngine_Animation__get_Item(
                                   (UnityEngine_Animation_o *)v9,
                                   (System_String_o *)StringLiteral_18317/*"cpcount"*/,
                                   0);
      if ( this )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)this, 1.0, 0);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v9, 0);
        return;
      }
    }
LABEL_27:
    sub_1C32E7C(this);
  }
  if ( !Component_object )
    goto LABEL_27;
  SimpleAnimation__Stop((SimpleAnimation_o *)Component_object, 0);
  SimpleAnimation__Play((SimpleAnimation_o *)Component_object, 0);
  this = (DigitRollLabel_o *)SimpleAnimation__get_Item(
                               (SimpleAnimation_o *)Component_object,
                               (System_String_o *)StringLiteral_18317/*"cpcount"*/,
                               0);
  if ( !this )
    goto LABEL_27;
  klass = this->klass;
  v11 = this;
  v12 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_17;
    }
    v14 = (__int64)&klass[1] + 16 * *p_offset;
  }
  else
  {
LABEL_17:
    v14 = sub_1C83438(this, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(DigitRollLabel_o *, _QWORD, float))v14)(v11, *(_QWORD *)(v14 + 8), 1.0);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0);
}


void DigitRollLabel__startChange(DigitRollLabel_o *this, System_String_o *text, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x21
  Il2CppObject *v7; // x22
  struct UILabel_o *nextlabel; // x8
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_String_o **p_nexttext; // x0
  struct UILabel_o *v12; // x8

  if ( (byte_4C390BC & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C390BC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_29;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_29;
  v7 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
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
      gameObject = (UnityEngine_GameObject_o *)System_String__Equals_63553848(text, this->fields.nexttext, 0);
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
              sub_1C32BC4((CGThumbnailListItem_o *)p_nexttext, (int32_t)text, v9, v10);
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
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v7, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v7 )
        goto LABEL_29;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v7, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !text )
          goto LABEL_29;
        gameObject = (UnityEngine_GameObject_o *)System_String__Equals_63553848(text, this->fields.nexttext, 0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          v12 = this->fields.nextlabel;
          if ( v12 )
          {
            gameObject = (UnityEngine_GameObject_o *)this->fields.nowlabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, v12->fields.mText, 0);
              gameObject = (UnityEngine_GameObject_o *)this->fields.nextlabel;
              if ( gameObject )
              {
                UILabel__set_text((UILabel_o *)gameObject, text, 0);
                UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v7, 0);
                UnityEngine_Animation__Play((UnityEngine_Animation_o *)v7, 0);
                this->fields.nexttext = text;
                p_nexttext = &this->fields.nexttext;
                goto LABEL_28;
              }
            }
          }
LABEL_29:
          sub_1C32E7C(gameObject);
        }
      }
    }
  }
}