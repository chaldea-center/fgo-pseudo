void EventRankingRoundInfo___cctor(const MethodInfo *method)
{
  struct EventRankingRoundInfo_StaticFields *static_fields; // x0

  if ( (byte_4C218E2 & 1) == 0 )
  {
    sub_1C2D490(&EventRankingRoundInfo_TypeInfo);
    sub_1C2D490(&StringLiteral_17441/*"btn_bg_20"*/);
    sub_1C2D490(&StringLiteral_17442/*"btn_bg_21"*/);
    byte_4C218E2 = 1;
  }
  EventRankingRoundInfo_TypeInfo->static_fields->SELECTED_SPRITE_NAME = (struct System_String_o *)StringLiteral_17442/*"btn_bg_21"*/;
  sub_1C2D434(EventRankingRoundInfo_TypeInfo->static_fields);
  static_fields = EventRankingRoundInfo_TypeInfo->static_fields;
  static_fields->NON_SELECT_SPRITE_NAME = (struct System_String_o *)StringLiteral_17441/*"btn_bg_20"*/;
  sub_1C2D434(&static_fields->NON_SELECT_SPRITE_NAME);
}


void EventRankingRoundInfo___ctor(EventRankingRoundInfo_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventRankingRoundInfo__OnClikcButton(EventRankingRoundInfo_o *this, const MethodInfo *method)
{
  EventRankingRoundInfo_o *v2; // x19
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct EventRankingRoundInfo_ClickFunc_o *onClickFunc; // x8

  v2 = this;
  if ( (byte_4C218E1 & 1) == 0 )
  {
    this = (EventRankingRoundInfo_o *)sub_1C2D490(&Method_EventRankingRoundInfo_OnClikcButton__);
    byte_4C218E1 = 1;
  }
  if ( v2->fields.isSelect )
  {
    v3 = Method_EventRankingRoundInfo_OnClikcButton__;
    if ( (*((_BYTE *)Method_EventRankingRoundInfo_OnClikcButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_EventRankingRoundInfo_OnClikcButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0, 0);
  }
  else
  {
    onClickFunc = v2->fields.onClickFunc;
    if ( !onClickFunc )
      sub_1C2D6EC(this, method);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onClickFunc->fields.invoke_impl)(
      onClickFunc->fields.method_code,
      (unsigned int)v2->fields.roundNum,
      onClickFunc->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventRankingRoundInfo__SetRoundInfo(
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

  baseButton = (UnityEngine_GameObject_o *)this->fields.baseButton;
  if ( !baseButton
    || (!isOpen ? (v11 = 3) : (v11 = 0),
        (((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppClass **, EventRankingRoundInfo_ClickFunc_o *, const MethodInfo *))baseButton->klass[1]._1.nestedTypes)(
           baseButton,
           v11,
           1,
           baseButton->klass[1]._1.implementedInterfaces,
           callback,
           method),
         (baseButton = this->fields.maskObject) == 0)
     || (UnityEngine_GameObject__SetActive(baseButton, !isOpen, 0),
         baseButton = (UnityEngine_GameObject_o *)this->fields.roundLabel,
         this->fields.roundNum = roundIndex,
         !baseButton)) )
  {
    sub_1C2D6EC(baseButton, isOpen);
  }
  UILabel__set_text((UILabel_o *)baseButton, roundName, 0);
  this->fields.onClickFunc = callback;
  p_onClickFunc = &this->fields.onClickFunc;
  sub_1C2D434(p_onClickFunc);
  *((_BYTE *)p_onClickFunc - 4) = 0;
}


void EventRankingRoundInfo__SetSelectInfo(
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
  __int64 v11; // x1
  UISprite_o *roundSprite; // x20
  System_String_o **m_CachedPtr; // x8
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_4C218E0 & 1) == 0 )
  {
    sub_1C2D490(&EventRankingRoundInfo_TypeInfo);
    byte_4C218E0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_13;
  if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
    return;
  gameObject = (UnityEngine_GameObject_o *)this->fields.roundLabel;
  this->fields.isSelect = isSelect;
  if ( !gameObject )
    goto LABEL_13;
  v14.fields.r = r;
  v14.fields.g = g;
  v14.fields.b = b;
  v14.fields.a = a;
  UILabel__set_effectColor((UILabel_o *)gameObject, v14, 0);
  roundSprite = this->fields.roundSprite;
  gameObject = (UnityEngine_GameObject_o *)EventRankingRoundInfo_TypeInfo;
  if ( !EventRankingRoundInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventRankingRoundInfo_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)EventRankingRoundInfo_TypeInfo;
  }
  if ( !roundSprite )
LABEL_13:
    sub_1C2D6EC(gameObject, v11);
  m_CachedPtr = (System_String_o **)gameObject[7].fields.m_CachedPtr;
  if ( !isSelect )
    ++m_CachedPtr;
  UISprite__set_spriteName(roundSprite, *m_CachedPtr, 0);
}


void EventRankingRoundInfo_ClickFunc___ctor(
        EventRankingRoundInfo_ClickFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434(&this->fields.m_target);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6967C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A69634;
}


System_IAsyncResult_o *EventRankingRoundInfo_ClickFunc__BeginInvoke(
        EventRankingRoundInfo_ClickFunc_o *this,
        int32_t num,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = num;
  if ( (byte_4C218E3 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    byte_4C218E3 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void EventRankingRoundInfo_ClickFunc__EndInvoke(
        EventRankingRoundInfo_ClickFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void EventRankingRoundInfo_ClickFunc__Invoke(
        EventRankingRoundInfo_ClickFunc_o *this,
        int32_t num,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    num,
    this->fields.method);
}