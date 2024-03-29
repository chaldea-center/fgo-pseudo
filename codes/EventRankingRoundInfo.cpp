void __fastcall EventRankingRoundInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct EventRankingRoundInfo_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4214A44 & 1) == 0 )
  {
    sub_B0D8A4(&EventRankingRoundInfo_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_17016/*"btn_bg_20"*/, v8);
    sub_B0D8A4(&StringLiteral_17017/*"btn_bg_21"*/, v9);
    byte_4214A44 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRankingRoundInfo_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_17017/*"btn_bg_21"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_17017/*"btn_bg_21"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventRankingRoundInfo_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_17016/*"btn_bg_20"*/;
  v12->NON_SELECT_SPRITE_NAME = (struct System_String_o *)StringLiteral_17016/*"btn_bg_20"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->NON_SELECT_SPRITE_NAME, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall EventRankingRoundInfo___ctor(EventRankingRoundInfo_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRankingRoundInfo__OnClikcButton(EventRankingRoundInfo_o *this, const MethodInfo *method)
{
  EventRankingRoundInfo_ClickFunc_o *onClickFunc; // x0

  if ( (byte_4214A43 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4214A43 = 1;
  }
  if ( this->fields.isSelect )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
  else
  {
    onClickFunc = this->fields.onClickFunc;
    if ( !onClickFunc )
      sub_B0D97C(0LL);
    EventRankingRoundInfo_ClickFunc__Invoke(onClickFunc, this->fields.roundNum, 0LL);
  }
}


void __fastcall EventRankingRoundInfo__SetRoundInfo(
        EventRankingRoundInfo_o *this,
        bool isOpen,
        int32_t roundIndex,
        System_String_o *roundName,
        EventRankingRoundInfo_ClickFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseButton; // x0
  __int64 v11; // x1
  struct EventRankingRoundInfo_ClickFunc_o **p_onClickFunc; // x19
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  baseButton = (UnityEngine_GameObject_o *)this->fields.baseButton;
  if ( !baseButton
    || (!isOpen ? (v11 = 3LL) : (v11 = 0LL),
        (((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *, EventRankingRoundInfo_ClickFunc_o *, const MethodInfo *))baseButton->klass[1]._1.implementedInterfaces)(
           baseButton,
           v11,
           1LL,
           baseButton->klass[1]._1.interfaceOffsets,
           callback,
           method),
         (baseButton = this->fields.maskObject) == 0LL)
     || (UnityEngine_GameObject__SetActive(baseButton, !isOpen, 0LL),
         baseButton = (UnityEngine_GameObject_o *)this->fields.roundLabel,
         this->fields.roundNum = roundIndex,
         !baseButton)) )
  {
    sub_B0D97C(baseButton);
  }
  UILabel__set_text((UILabel_o *)baseButton, roundName, 0LL);
  this->fields.onClickFunc = callback;
  p_onClickFunc = &this->fields.onClickFunc;
  sub_B0D840(
    (BattleServantConfConponent_o *)p_onClickFunc,
    (System_Int32_array **)callback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  *((_BYTE *)p_onClickFunc - 4) = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingRoundInfo__SetSelectInfo(
        EventRankingRoundInfo_o *this,
        bool isSelect,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UILabel_o *gameObject; // x0
  UISprite_o *roundSprite; // x20
  System_String_o **onPostFill; // x8
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4214A42 & 1) == 0 )
  {
    sub_B0D8A4(&EventRankingRoundInfo_TypeInfo, isSelect);
    byte_4214A42 = 1;
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
  {
    gameObject = this->fields.roundLabel;
    this->fields.isSelect = isSelect;
    if ( !gameObject )
      goto LABEL_18;
    v13.fields.r = r;
    v13.fields.g = g;
    v13.fields.b = b;
    v13.fields.a = a;
    UILabel__set_effectColor(gameObject, v13, 0LL);
    roundSprite = this->fields.roundSprite;
    gameObject = (UILabel_o *)EventRankingRoundInfo_TypeInfo;
    if ( isSelect )
    {
      if ( (WORD1(EventRankingRoundInfo_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !EventRankingRoundInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingRoundInfo_TypeInfo);
        gameObject = (UILabel_o *)EventRankingRoundInfo_TypeInfo;
      }
      onPostFill = (System_String_o **)gameObject->fields.onPostFill;
      if ( !roundSprite )
        goto LABEL_18;
      goto LABEL_17;
    }
    if ( (WORD1(EventRankingRoundInfo_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !EventRankingRoundInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRankingRoundInfo_TypeInfo);
      gameObject = (UILabel_o *)EventRankingRoundInfo_TypeInfo;
    }
    onPostFill = (System_String_o **)&gameObject->fields.onPostFill->monitor;
    if ( roundSprite )
    {
LABEL_17:
      UISprite__set_spriteName(roundSprite, *onPostFill, 0LL);
      return;
    }
LABEL_18:
    sub_B0D97C(gameObject);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingRoundInfo_ClickFunc___ctor(
        EventRankingRoundInfo_ClickFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventRankingRoundInfo_ClickFunc__BeginInvoke(
        EventRankingRoundInfo_ClickFunc_o *this,
        int32_t num,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = num;
  if ( (byte_4211BC0 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&num);
    byte_4211BC0 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall EventRankingRoundInfo_ClickFunc__EndInvoke(
        EventRankingRoundInfo_ClickFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingRoundInfo_ClickFunc__Invoke(
        EventRankingRoundInfo_ClickFunc_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  EventRankingRoundInfo_ClickFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  EventRankingRoundInfo_ClickFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(_QWORD, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  EventRankingRoundInfo_ClickFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (EventRankingRoundInfo_ClickFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&num, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)num, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, (unsigned int)num, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, (unsigned int)num, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            (unsigned int)num,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, (unsigned int)num, v21);
    goto LABEL_37;
  }
}