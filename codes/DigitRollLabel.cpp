void DigitRollLabel___ctor(DigitRollLabel_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_5971FBB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5971FBB = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.nexttext = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.nexttext, v9, v2, v3, v4, v5, v6, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DigitRollLabel__Awake(DigitRollLabel_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct UILabel_o *nextlabel; // x8
  struct System_String_o *mText; // x1

  nextlabel = this->fields.nextlabel;
  if ( !nextlabel )
    sub_2213CDC(this, method);
  mText = nextlabel->fields.mText;
  this->fields.nexttext = mText;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.nexttext, (int32_t)mText, v2, v3, v4, v5, v6, v7);
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
    sub_2213CDC(nowlabel, method);
  }
  v9.fields.g = g;
  v9.fields.b = b;
  v9.fields.a = nowlabel->fields.mColor.fields.a;
  v9.fields.r = r;
  UIWidget__set_color(nowlabel, v9, 0);
}


void DigitRollLabel__changeSpeed(DigitRollLabel_o *this, int32_t speed, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x21
  __int64 v8; // x1
  Il2CppObject *v9; // x20
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v11; // x21
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
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
  __int64 v27; // x21
  __int64 v28; // x8
  __int64 v29; // x9
  SimpleAnimation_State_c **v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v37; // x1
  System_Collections_IEnumerator_c *v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  System_Collections_IEnumerator_c *v42; // x8
  __int64 v43; // x9
  System_Collections_IEnumerator_c **v44; // x10
  __int64 v45; // x0
  UnityEngine_AnimationState_o *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x20
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  System_Collections_IEnumerator_o *v55; // [xsp+28h] [xbp-58h]
  __int64 v56; // [xsp+38h] [xbp-48h]

  if ( (byte_5971FB8 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_AnimationState_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    byte_5971FB8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_82;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_82;
  v9 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
          v14 = sub_224BC3C(gameObject, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
        }
        v15 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
        v56 = v15;
        while ( 1 )
        {
          if ( !v56 )
            sub_2213CDC(v15, v16);
          v17 = *(_QWORD *)v56;
          v18 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
          {
            v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v18;
              v19 += 4;
              if ( !v18 )
                goto LABEL_22;
            }
            v20 = v17 + 16LL * *v19 + 312;
          }
          else
          {
LABEL_22:
            v20 = sub_224BC3C(v56, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v56, *(_QWORD *)(v20 + 8)) & 1) == 0 )
            break;
          v21 = *(_QWORD *)v56;
          v22 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
          {
            v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v23 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
            {
              --v22;
              v23 += 4;
              if ( !v22 )
                goto LABEL_29;
            }
            v24 = v21 + 16LL * *v23 + 312;
          }
          else
          {
LABEL_29:
            v24 = sub_224BC3C(v56, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
          }
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v56, *(_QWORD *)(v24 + 8));
          v27 = v25;
          if ( !v25 )
            sub_2213CDC(0, v26);
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
                goto LABEL_36;
            }
            v31 = v28 + 16LL * (*(_DWORD *)v30 + 8) + 312;
          }
          else
          {
LABEL_36:
            v31 = sub_224BC3C(v25, SimpleAnimation_State_TypeInfo, 8);
          }
          v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, float))v31)(v27, *(_QWORD *)(v31 + 8), (float)speed * 1.9);
        }
        v32 = *(_QWORD *)v56;
        v33 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
        {
          v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
          {
            --v33;
            v34 += 4;
            if ( !v33 )
              goto LABEL_43;
          }
          v35 = v32 + 16LL * *v34 + 312;
        }
        else
        {
LABEL_43:
          v35 = sub_224BC3C(v56, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v35)(v56, *(_QWORD *)(v35 + 8));
        return;
      }
    }
LABEL_82:
    sub_2213CDC(gameObject, v6);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !v9 )
      goto LABEL_82;
    Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v9, 0);
    v55 = Enumerator;
    while ( 1 )
    {
      if ( !v55 )
        sub_2213CDC(Enumerator, v37);
      v38 = v55->klass;
      v39 = *(unsigned __int16 *)&v55->klass->_2.rank;
      if ( *(_WORD *)&v55->klass->_2.rank )
      {
        v40 = &v38->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v39;
          v40 += 4;
          if ( !v39 )
            goto LABEL_56;
        }
        v41 = (__int64)&v38->vtable[*v40];
      }
      else
      {
LABEL_56:
        v41 = sub_224BC3C(v55, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v41)(v55, *(_QWORD *)(v41 + 8)) & 1) == 0 )
        break;
      v42 = v55->klass;
      v43 = *(unsigned __int16 *)&v55->klass->_2.rank;
      if ( *(_WORD *)&v55->klass->_2.rank )
      {
        v44 = (System_Collections_IEnumerator_c **)&v42->_1.interfaceOffsets->offset;
        while ( *(v44 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v43;
          v44 += 2;
          if ( !v43 )
            goto LABEL_63;
        }
        v45 = (__int64)&v42->vtable[*(_DWORD *)v44 + 1];
      }
      else
      {
LABEL_63:
        v45 = sub_224BC3C(v55, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v46 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v45)(
                                              v55,
                                              *(_QWORD *)(v45 + 8));
      if ( !v46 )
        sub_2213CDC(0, v47);
      if ( v46->klass != UnityEngine_AnimationState_TypeInfo )
      {
        sub_221405C(v46, UnityEngine_AnimationState_TypeInfo, v48);
        goto LABEL_82;
      }
      UnityEngine_AnimationState__set_speed(v46, (float)speed * 1.9, 0);
    }
    v49 = sub_2213BB4(v55, System_IDisposable_TypeInfo);
    if ( v49 )
    {
      v50 = *(_QWORD *)v49;
      v51 = v49;
      v52 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
      {
        v53 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
        {
          --v52;
          v53 += 4;
          if ( !v52 )
            goto LABEL_73;
        }
        v54 = v50 + 16LL * *v53 + 312;
      }
      else
      {
LABEL_73:
        v54 = sub_224BC3C(v49, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v54)(v51, *(_QWORD *)(v54 + 8));
    }
  }
}


void DigitRollLabel__changeText(DigitRollLabel_o *this, System_String_o *text, const MethodInfo *method)
{
  UILabel_o *nowlabel; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  nowlabel = this->fields.nowlabel;
  if ( !nowlabel || (UILabel__set_text(nowlabel, text, 0), (nowlabel = this->fields.nextlabel) == 0) )
    sub_2213CDC(nowlabel, text);
  UILabel__set_text(nowlabel, text, 0);
  this->fields.nexttext = text;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.nexttext, (int32_t)text, v6, v7, v8, v9, v10, v11);
}


void DigitRollLabel__endChange(DigitRollLabel_o *this, System_String_o *text, const MethodInfo *method)
{
  DigitRollLabel_o *v4; // x20
  struct UILabel_o *nextlabel; // x8
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *Component_object; // x19
  __int64 v13; // x1
  Il2CppObject *v14; // x20
  DigitRollLabel_c *klass; // x8
  DigitRollLabel_o *v16; // x20
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0

  v4 = this;
  if ( (byte_5971FBA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SimpleAnimation_State_TypeInfo);
    this = (DigitRollLabel_o *)sub_2213A60(&StringLiteral_19143/*"cpcount"*/);
    byte_5971FBA = 1;
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->fields.nexttext, (int32_t)text, v6, v7, v8, v9, v10, v11);
  this = (DigitRollLabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
  if ( !this )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  this = (DigitRollLabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
  if ( !this )
    goto LABEL_27;
  v14 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)this,
          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  this = (DigitRollLabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, text);
    this = (DigitRollLabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
      return;
    if ( v14 )
    {
      UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v14, 0);
      UnityEngine_Animation__Play((UnityEngine_Animation_o *)v14, 0);
      this = (DigitRollLabel_o *)UnityEngine_Animation__get_Item(
                                   (UnityEngine_Animation_o *)v14,
                                   (System_String_o *)StringLiteral_19143/*"cpcount"*/,
                                   0);
      if ( this )
      {
        UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)this, 1.0, 0);
        UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v14, 0);
        return;
      }
    }
LABEL_27:
    sub_2213CDC(this, text);
  }
  if ( !Component_object )
    goto LABEL_27;
  SimpleAnimation__Stop((SimpleAnimation_o *)Component_object, 0);
  SimpleAnimation__Play((SimpleAnimation_o *)Component_object, 0);
  this = (DigitRollLabel_o *)SimpleAnimation__get_Item(
                               (SimpleAnimation_o *)Component_object,
                               (System_String_o *)StringLiteral_19143/*"cpcount"*/,
                               0);
  if ( !this )
    goto LABEL_27;
  klass = this->klass;
  v16 = this;
  v17 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((SimpleAnimation_State_c **)p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_17;
    }
    v19 = (__int64)&klass[1] + 16 * *p_offset;
  }
  else
  {
LABEL_17:
    v19 = sub_224BC3C(this, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(DigitRollLabel_o *, _QWORD, float))v19)(v16, *(_QWORD *)(v19 + 8), 1.0);
  SimpleAnimation__Sample((SimpleAnimation_o *)Component_object, 0);
}


void DigitRollLabel__startChange(DigitRollLabel_o *this, System_String_o *text, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x22
  __int64 v8; // x1
  Il2CppObject *v9; // x23
  MissionNaviTransitionBoardItem_o *p_nexttext; // x21
  struct UILabel_o *nextlabel; // x8
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct UILabel_o *v18; // x8

  if ( (byte_5971FB9 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Animation___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5971FB9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_29;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_29;
  v9 = UnityEngine_GameObject__GetComponent_object_(
         gameObject,
         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
      p_nexttext = (MissionNaviTransitionBoardItem_o *)&this->fields.nexttext;
      gameObject = (UnityEngine_GameObject_o *)System_String__Equals_75686512(text, this->fields.nexttext, 0);
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
LABEL_28:
              p_nexttext->klass = (MissionNaviTransitionBoardItem_c *)text;
              sub_2213A04(p_nexttext, (int32_t)text, v12, v13, v14, v15, v16, v17);
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
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0, 0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !v9 )
        goto LABEL_29;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)v9, 0);
      if ( ((unsigned __int8)gameObject & 1) == 0 )
      {
        if ( !text )
          goto LABEL_29;
        p_nexttext = (MissionNaviTransitionBoardItem_o *)&this->fields.nexttext;
        gameObject = (UnityEngine_GameObject_o *)System_String__Equals_75686512(text, this->fields.nexttext, 0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          v18 = this->fields.nextlabel;
          if ( v18 )
          {
            gameObject = (UnityEngine_GameObject_o *)this->fields.nowlabel;
            if ( gameObject )
            {
              UILabel__set_text((UILabel_o *)gameObject, v18->fields.mText, 0);
              gameObject = (UnityEngine_GameObject_o *)this->fields.nextlabel;
              if ( gameObject )
              {
                UILabel__set_text((UILabel_o *)gameObject, text, 0);
                UnityEngine_Animation__Stop((UnityEngine_Animation_o *)v9, 0);
                UnityEngine_Animation__Play((UnityEngine_Animation_o *)v9, 0);
                goto LABEL_28;
              }
            }
          }
LABEL_29:
          sub_2213CDC(gameObject, v6);
        }
      }
    }
  }
}