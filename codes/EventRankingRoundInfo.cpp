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

  if ( (byte_40F60EC & 1) == 0 )
  {
    sub_B16FFC(&EventRankingRoundInfo_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_16899/*"btn_bg_20"*/, v8);
    sub_B16FFC(&StringLiteral_16900/*"btn_bg_21"*/, v9);
    byte_40F60EC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventRankingRoundInfo_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_16900/*"btn_bg_21"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16900/*"btn_bg_21"*/;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = EventRankingRoundInfo_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_16899/*"btn_bg_20"*/;
  v12->NON_SELECT_SPRITE_NAME = (struct System_String_o *)StringLiteral_16899/*"btn_bg_20"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v12->NON_SELECT_SPRITE_NAME, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall EventRankingRoundInfo___ctor(EventRankingRoundInfo_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRankingRoundInfo__OnClikcButton(EventRankingRoundInfo_o *this, const MethodInfo *method)
{
  EventRankingRoundInfo_ClickFunc_o *onClickFunc; // x0

  if ( (byte_40F60EB & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F60EB = 1;
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
      sub_B170D4();
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
  struct UICommonButton_o *baseButton; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *maskObject; // x0
  UILabel_o *roundLabel; // x0
  struct EventRankingRoundInfo_ClickFunc_o **p_onClickFunc; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  baseButton = this->fields.baseButton;
  if ( !baseButton
    || (!isOpen ? (v11 = 3LL) : (v11 = 0LL),
        (((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer, EventRankingRoundInfo_ClickFunc_o *, const MethodInfo *))baseButton->klass->vtable._14_SetState.method)(
           baseButton,
           v11,
           1LL,
           baseButton->klass->vtable._15_OnPress.methodPtr,
           callback,
           method),
         (maskObject = this->fields.maskObject) == 0LL)
     || (UnityEngine_GameObject__SetActive(maskObject, !isOpen, 0LL),
         roundLabel = this->fields.roundLabel,
         this->fields.roundNum = roundIndex,
         !roundLabel)) )
  {
    sub_B170D4();
  }
  UILabel__set_text(roundLabel, roundName, 0LL);
  this->fields.onClickFunc = callback;
  p_onClickFunc = &this->fields.onClickFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_onClickFunc,
    (System_Int32_array **)callback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UILabel_o *roundLabel; // x0
  UISprite_o *roundSprite; // x20
  EventRankingRoundInfo_c *v13; // x0
  System_String_o **p_SELECTED_SPRITE_NAME; // x8
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_40F60EA & 1) == 0 )
  {
    sub_B16FFC(&EventRankingRoundInfo_TypeInfo, isSelect);
    byte_40F60EA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
  {
    roundLabel = this->fields.roundLabel;
    this->fields.isSelect = isSelect;
    if ( !roundLabel )
      goto LABEL_18;
    v15.fields.r = r;
    v15.fields.g = g;
    v15.fields.b = b;
    v15.fields.a = a;
    UILabel__set_effectColor(roundLabel, v15, 0LL);
    roundSprite = this->fields.roundSprite;
    v13 = EventRankingRoundInfo_TypeInfo;
    if ( isSelect )
    {
      if ( (WORD1(EventRankingRoundInfo_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !EventRankingRoundInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventRankingRoundInfo_TypeInfo);
        v13 = EventRankingRoundInfo_TypeInfo;
      }
      p_SELECTED_SPRITE_NAME = &v13->static_fields->SELECTED_SPRITE_NAME;
      if ( !roundSprite )
        goto LABEL_18;
      goto LABEL_17;
    }
    if ( (WORD1(EventRankingRoundInfo_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !EventRankingRoundInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventRankingRoundInfo_TypeInfo);
      v13 = EventRankingRoundInfo_TypeInfo;
    }
    p_SELECTED_SPRITE_NAME = &v13->static_fields->NON_SELECT_SPRITE_NAME;
    if ( roundSprite )
    {
LABEL_17:
      UISprite__set_spriteName(roundSprite, *p_SELECTED_SPRITE_NAME, 0LL);
      return;
    }
LABEL_18:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingRoundInfo_ClickFunc___ctor(
        EventRankingRoundInfo_ClickFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7025 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&num);
    byte_40F7025 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall EventRankingRoundInfo_ClickFunc__EndInvoke(
        EventRankingRoundInfo_ClickFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingRoundInfo_ClickFunc__Invoke(
        EventRankingRoundInfo_ClickFunc_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  EventRankingRoundInfo_ClickFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  EventRankingRoundInfo_ClickFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(_QWORD, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  EventRankingRoundInfo_ClickFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (EventRankingRoundInfo_ClickFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(_QWORD, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&num, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int)num, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, (unsigned int)num, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, (unsigned int)num, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            (unsigned int)num,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, (unsigned int)num, v20);
    goto LABEL_37;
  }
}