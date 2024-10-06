void __fastcall EventRankingRoundInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct EventRankingRoundInfo_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A73E55 & 1) == 0 )
  {
    sub_1B90010(&EventRankingRoundInfo_TypeInfo, v1);
    sub_1B90010(&StringLiteral_17504/*"btn_bg_20"*/, v4);
    sub_1B90010(&StringLiteral_17505/*"btn_bg_21"*/, v5);
    byte_4A73E55 = 1;
  }
  EventRankingRoundInfo_TypeInfo->static_fields->SELECTED_SPRITE_NAME = (struct System_String_o *)StringLiteral_17505/*"btn_bg_21"*/;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)EventRankingRoundInfo_TypeInfo->static_fields,
    StringLiteral_17505/*"btn_bg_21"*/,
    v2,
    v3);
  v6 = StringLiteral_17504/*"btn_bg_20"*/;
  static_fields = EventRankingRoundInfo_TypeInfo->static_fields;
  static_fields->NON_SELECT_SPRITE_NAME = (struct System_String_o *)StringLiteral_17504/*"btn_bg_20"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->NON_SELECT_SPRITE_NAME, v6, v8, v9);
}


void __fastcall EventRankingRoundInfo___ctor(EventRankingRoundInfo_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventRankingRoundInfo__OnClikcButton(EventRankingRoundInfo_o *this, const MethodInfo *method)
{
  EventRankingRoundInfo_o *v2; // x19
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct EventRankingRoundInfo_ClickFunc_o *onClickFunc; // x8

  v2 = this;
  if ( (byte_4A73E54 & 1) == 0 )
  {
    this = (EventRankingRoundInfo_o *)sub_1B90010(&Method_EventRankingRoundInfo_OnClikcButton__, method);
    byte_4A73E54 = 1;
  }
  if ( v2->fields.isSelect )
  {
    v3 = Method_EventRankingRoundInfo_OnClikcButton__;
    if ( (*((_BYTE *)Method_EventRankingRoundInfo_OnClikcButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028(Method_EventRankingRoundInfo_OnClikcButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0LL);
  }
  else
  {
    onClickFunc = v2->fields.onClickFunc;
    if ( !onClickFunc )
      sub_1B9026C(this, method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onClickFunc->fields.m_target)(
      onClickFunc->fields.original_method_info,
      (unsigned int)v2->fields.roundNum,
      *(_QWORD *)&onClickFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v14; // w2
  int32_t v15; // w3

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
    sub_1B9026C(baseButton, isOpen);
  }
  UILabel__set_text((UILabel_o *)baseButton, roundName, 0LL);
  this->fields.onClickFunc = callback;
  p_onClickFunc = &this->fields.onClickFunc;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)p_onClickFunc, (int32_t)callback, v14, v15);
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
  void *gameObject; // x0
  __int64 v11; // x1
  UISprite_o *roundSprite; // x20
  System_String_o **v13; // x8
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4A73E53 & 1) == 0 )
  {
    sub_1B90010(&EventRankingRoundInfo_TypeInfo, isSelect);
    byte_4A73E53 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL) )
    return;
  gameObject = this->fields.roundLabel;
  this->fields.isSelect = isSelect;
  if ( !gameObject )
    goto LABEL_13;
  v14.fields.r = r;
  v14.fields.g = g;
  v14.fields.b = b;
  v14.fields.a = a;
  UILabel__set_effectColor((UILabel_o *)gameObject, v14, 0LL);
  roundSprite = this->fields.roundSprite;
  gameObject = EventRankingRoundInfo_TypeInfo;
  if ( !EventRankingRoundInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingRoundInfo_TypeInfo);
    gameObject = EventRankingRoundInfo_TypeInfo;
  }
  if ( !roundSprite )
LABEL_13:
    sub_1B9026C(gameObject, v11);
  v13 = (System_String_o **)*((_QWORD *)gameObject + 23);
  if ( !isSelect )
    ++v13;
  UISprite__set_spriteName(roundSprite, *v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventRankingRoundInfo_ClickFunc___ctor(
        EventRankingRoundInfo_ClickFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B900D0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B90288(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B90138(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19DAE18;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19DADD0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EventRankingRoundInfo_ClickFunc__BeginInvoke(
        EventRankingRoundInfo_ClickFunc_o *this,
        int32_t num,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = num;
  if ( (byte_4A73E56 & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, *(_QWORD *)&num);
    byte_4A73E56 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B8FFC4(this, v9, callback, object);
}


void __fastcall EventRankingRoundInfo_ClickFunc__EndInvoke(
        EventRankingRoundInfo_ClickFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B8FFC8(result, 0LL, method);
}


void __fastcall EventRankingRoundInfo_ClickFunc__Invoke(
        EventRankingRoundInfo_ClickFunc_o *this,
        int32_t num,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    num,
    *(_QWORD *)&this->fields.extra_arg);
}