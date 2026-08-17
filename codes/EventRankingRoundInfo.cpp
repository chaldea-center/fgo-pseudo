void EventRankingRoundInfo___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventRankingRoundInfo_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596A9A2 & 1) == 0 )
  {
    sub_2213A60(&EventRankingRoundInfo_TypeInfo);
    sub_2213A60(&StringLiteral_18209/*"btn_bg_20"*/);
    sub_2213A60(&StringLiteral_18211/*"btn_bg_21"*/);
    byte_596A9A2 = 1;
  }
  v7 = StringLiteral_18211/*"btn_bg_21"*/;
  EventRankingRoundInfo_TypeInfo->static_fields->SELECTED_SPRITE_NAME = (struct System_String_o *)StringLiteral_18211/*"btn_bg_21"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventRankingRoundInfo_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_18209/*"btn_bg_20"*/;
  static_fields = EventRankingRoundInfo_TypeInfo->static_fields;
  static_fields->NON_SELECT_SPRITE_NAME = (struct System_String_o *)StringLiteral_18209/*"btn_bg_20"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->NON_SELECT_SPRITE_NAME,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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
  if ( (byte_596A9A1 & 1) == 0 )
  {
    this = (EventRankingRoundInfo_o *)sub_2213A60(&Method_EventRankingRoundInfo_OnClikcButton__);
    byte_596A9A1 = 1;
  }
  if ( v2->fields.isSelect )
  {
    v3 = Method_EventRankingRoundInfo_OnClikcButton__;
    if ( (*((_BYTE *)Method_EventRankingRoundInfo_OnClikcButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_EventRankingRoundInfo_OnClikcButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 2, 0, 0);
  }
  else
  {
    onClickFunc = v2->fields.onClickFunc;
    if ( !onClickFunc )
      sub_2213CDC(this, method);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

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
    sub_2213CDC(baseButton, isOpen);
  }
  UILabel__set_text((UILabel_o *)baseButton, roundName, 0);
  this->fields.onClickFunc = callback;
  p_onClickFunc = &this->fields.onClickFunc;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_onClickFunc, (int32_t)callback, v14, v15, v16, v17, v18, v19);
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
  UILabel_o *gameObject; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  UISprite_o *roundSprite; // x20
  int v14; // w8
  System_String_o **onChange; // x8
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = color.fields.a;
  b = color.fields.b;
  g = color.fields.g;
  r = color.fields.r;
  if ( (byte_596A9A0 & 1) == 0 )
  {
    sub_2213A60(&EventRankingRoundInfo_TypeInfo);
    byte_596A9A0 = 1;
  }
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0) )
  {
    gameObject = this->fields.roundLabel;
    this->fields.isSelect = isSelect;
    if ( gameObject )
    {
      v16.fields.r = r;
      v16.fields.g = g;
      v16.fields.b = b;
      v16.fields.a = a;
      UILabel__set_effectColor(gameObject, v16, 0);
      roundSprite = this->fields.roundSprite;
      gameObject = (UILabel_o *)EventRankingRoundInfo_TypeInfo;
      v14 = *(&EventRankingRoundInfo_TypeInfo->_2.cctor_finished + 1);
      if ( isSelect )
      {
        if ( !v14 )
        {
          j_il2cpp_runtime_class_init_0(EventRankingRoundInfo_TypeInfo, v11, v12);
          gameObject = (UILabel_o *)EventRankingRoundInfo_TypeInfo;
        }
        onChange = (System_String_o **)gameObject->fields.onChange;
      }
      else
      {
        if ( !v14 )
        {
          j_il2cpp_runtime_class_init_0(EventRankingRoundInfo_TypeInfo, v11, v12);
          gameObject = (UILabel_o *)EventRankingRoundInfo_TypeInfo;
        }
        onChange = (System_String_o **)&gameObject->fields.onChange->monitor;
      }
      if ( roundSprite )
      {
        UISprite__set_spriteName(roundSprite, *onChange, 0);
        return;
      }
    }
LABEL_16:
    sub_2213CDC(gameObject, v11);
  }
}


void EventRankingRoundInfo_ClickFunc___ctor(
        EventRankingRoundInfo_ClickFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20001EC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20001A4;
}


System_IAsyncResult_o *EventRankingRoundInfo_ClickFunc__BeginInvoke(
        EventRankingRoundInfo_ClickFunc_o *this,
        int32_t num,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = num;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984348, &v10);
  return (System_IAsyncResult_o *)sub_2213A14(this, v9, callback, object);
}


void EventRankingRoundInfo_ClickFunc__EndInvoke(
        EventRankingRoundInfo_ClickFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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