void ServantSellMaxAlertDialog___ctor(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_596C76D & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596C76D = 1;
  }
  v4 = BaseDialog_TypeInfo;
  *(_OWORD *)&this->fields.BIG_FONT_SIZE = xmmword_E9BB10;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ServantSellMaxAlertDialog__Close(
        ServantSellMaxAlertDialog_o *this,
        System_Action_o *onCloseEnd,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_c *v20; // x0
  System_Action_o *v21; // x20

  if ( (byte_596C76A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantSellMaxAlertDialog___c__DisplayClass22_0__Close_b__0__);
    sub_2213A60(&ServantSellMaxAlertDialog___c__DisplayClass22_0_TypeInfo);
    byte_596C76A = 1;
  }
  v5 = sub_2213CCC(ServantSellMaxAlertDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = onCloseEnd;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)onCloseEnd, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v20 = System_Action_TypeInfo;
  this->fields.state = 5;
  v21 = (System_Action_o *)sub_2213CCC(v20);
  System_Action___ctor(v21, (Il2CppObject *)v5, Method_ServantSellMaxAlertDialog___c__DisplayClass22_0__Close_b__0__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v21, 0);
}


void ServantSellMaxAlertDialog__EndOpen(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 3;
}


void ServantSellMaxAlertDialog__Init(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *eventMissionMessageLabel; // x20
  struct UICommonButton_o *decideButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  struct UICommonButton_o *transitionButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v13; // x20
  EventDelegate_Callback_o *v14; // x21
  struct UICommonButton_o *closeButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v16; // x20
  EventDelegate_Callback_o *v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7

  if ( (byte_596C768 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantSellMaxAlertDialog_OnClickClose__);
    sub_2213A60(&Method_ServantSellMaxAlertDialog_OnClickDecide__);
    sub_2213A60(&Method_ServantSellMaxAlertDialog_OnClickTransition__);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596C768 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.getableLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.decideLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.transitionLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.closeLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  eventMissionMessageLabel = (UnityEngine_Object_o *)this->fields.eventMissionMessageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  titleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(eventMissionMessageLabel, 0, 0);
  if ( ((unsigned __int8)titleLabel & 1) != 0 )
  {
    titleLabel = this->fields.eventMissionMessageLabel;
    if ( !titleLabel )
      goto LABEL_20;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_20;
  onClick = decideButton->fields.onClick;
  v9 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v9, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog_OnClickDecide__, 0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v10, v11);
  titleLabel = (UILabel_o *)EventDelegate__Set_56322328(onClick, v9, 0);
  transitionButton = this->fields.transitionButton;
  if ( !transitionButton
    || (v13 = transitionButton->fields.onClick,
        v14 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantSellMaxAlertDialog_OnClickTransition__,
          0),
        titleLabel = (UILabel_o *)EventDelegate__Set_56322328(v13, v14, 0),
        (closeButton = this->fields.closeButton) == 0) )
  {
LABEL_20:
    sub_2213CDC(titleLabel, method);
  }
  v16 = closeButton->fields.onClick;
  v17 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v17, (Il2CppObject *)this, (intptr_t)Method_ServantSellMaxAlertDialog_OnClickClose__, 0);
  EventDelegate__Set_56322328(v16, v17, 0);
  this->fields.onDecide = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onDecide, 0, v18, v19, v20, v21, v22, v23);
  this->fields.onTransition = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onTransition, 0, v24, v25, v26, v27, v28, v29);
  this->fields.onClose = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onClose, 0, v30, v31, v32, v33, v34, v35);
  this->fields.state = 1;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ServantSellMaxAlertDialog__OnClickClose(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_596C76C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ServantSellMaxAlertDialog_OnClickClose__);
    sub_2213A60(&Method_ServantSellMaxAlertDialog__OnClickClose_b__26_0__);
    byte_596C76C = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 4;
    v3 = Method_ServantSellMaxAlertDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantSellMaxAlertDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSellMaxAlertDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog__OnClickClose_b__26_0__, 0);
    ServantSellMaxAlertDialog__Close(this, v5, v6);
  }
}


void ServantSellMaxAlertDialog__OnClickDecide(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Action_o *onDecide; // x8

  if ( this->fields.state == 3 )
  {
    onDecide = this->fields.onDecide;
    this->fields.state = 4;
    if ( onDecide )
      ((void (__fastcall *)(intptr_t, intptr_t))onDecide->fields.invoke_impl)(
        onDecide->fields.method_code,
        onDecide->fields.method);
    ServantSellMaxAlertDialog__Close(this, 0, v2);
  }
}


void ServantSellMaxAlertDialog__OnClickTransition(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_596C76B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_ServantSellMaxAlertDialog_OnClickTransition__);
    sub_2213A60(&Method_ServantSellMaxAlertDialog__OnClickTransition_b__25_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596C76B = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 4;
    v3 = Method_ServantSellMaxAlertDialog_OnClickTransition__;
    if ( (*((_BYTE *)Method_ServantSellMaxAlertDialog_OnClickTransition__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_ServantSellMaxAlertDialog_OnClickTransition__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = AvalonSceneManager_TypeInfo;
    v9 = (CommonUI_o *)Instance;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v6, v7);
      v8 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
    v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog__OnClickTransition_b__25_0__, 0);
    if ( !v9 )
      sub_2213CDC(v12, v13);
    CommonUI__maskFadeout(v9, 1, DEFAULT_FADE_TIME, v11, 0);
  }
}


void ServantSellMaxAlertDialog__Open(
        ServantSellMaxAlertDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *getable,
        System_String_o *decide,
        System_String_o *transition,
        System_String_o *close,
        System_Action_o *onDecide,
        System_Action_o *onTransition,
        System_Action_o *onClose,
        bool isEventMission,
        const MethodInfo *method)
{
  int32_t state; // w8
  UILabel_o *titleLabel; // x0
  __int64 v21; // x2
  UnityEngine_Object_o *eventMissionMessageLabel; // x28
  int32_t v23; // w28
  int v24; // w29
  uint16_t Chars; // w0
  bool v26; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t WORD_DEFAULT_POSITION_Y; // s0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Action_o *v47; // x20

  if ( (byte_596C769 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_ServantSellMaxAlertDialog_EndOpen__);
    byte_596C769 = 1;
  }
  state = this->fields.state;
  if ( !state )
  {
    ServantSellMaxAlertDialog__Init(this, (const MethodInfo *)title);
    state = this->fields.state;
  }
  if ( state == 1 )
  {
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_36;
    UILabel__set_text(titleLabel, title, 0);
    if ( !isEventMission )
      goto LABEL_20;
    eventMissionMessageLabel = (UnityEngine_Object_o *)this->fields.eventMissionMessageLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, title, v21);
    if ( UnityEngine_Object__op_Inequality(eventMissionMessageLabel, 0, 0) )
    {
      titleLabel = this->fields.eventMissionMessageLabel;
      if ( !titleLabel )
        goto LABEL_36;
      UILabel__set_text(titleLabel, message, 0);
      if ( !message )
        goto LABEL_36;
      if ( message->fields._stringLength < 1 )
      {
        v26 = 0;
      }
      else
      {
        v23 = 0;
        v24 = 0;
        do
        {
          Chars = System_String__get_Chars(message, v23++, 0);
          if ( Chars == 10 )
            ++v24;
        }
        while ( v23 < message->fields._stringLength );
        v26 = v24 > 6;
      }
      titleLabel = this->fields.eventMissionMessageLabel;
      if ( v26 )
      {
        if ( !titleLabel )
          goto LABEL_36;
        UILabel__set_fontSize(titleLabel, this->fields.DEFAULT_FONT_SIZE, 0);
        titleLabel = this->fields.eventMissionMessageLabel;
        if ( !titleLabel )
          goto LABEL_36;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
        WORD_DEFAULT_POSITION_Y = this->fields.WORD_DEFAULT_POSITION_Y;
      }
      else
      {
        if ( !titleLabel )
          goto LABEL_36;
        UILabel__set_fontSize(titleLabel, this->fields.BIG_FONT_SIZE, 0);
        titleLabel = this->fields.eventMissionMessageLabel;
        if ( !titleLabel )
          goto LABEL_36;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0);
        WORD_DEFAULT_POSITION_Y = this->fields.WORD_POSITION_Y;
      }
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)WORD_DEFAULT_POSITION_Y, 0);
    }
    else
    {
LABEL_20:
      titleLabel = this->fields.messageLabel;
      if ( !titleLabel )
        goto LABEL_36;
      UILabel__set_text(titleLabel, message, 0);
    }
    titleLabel = this->fields.getableLabel;
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, getable, 0);
      titleLabel = this->fields.decideLabel;
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, decide, 0);
        titleLabel = this->fields.transitionLabel;
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, transition, 0);
          titleLabel = this->fields.closeLabel;
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, close, 0);
            this->fields.onDecide = onDecide;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.onDecide,
              (int32_t)onDecide,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
            this->fields.onTransition = onTransition;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.onTransition,
              (int32_t)onTransition,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
            this->fields.onClose = onClose;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&this->fields.onClose,
              (int32_t)onClose,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
            this->fields.state = 2;
            v47 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
            System_Action___ctor(v47, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog_EndOpen__, 0);
            BaseDialog__Open((BaseDialog_o *)this, v47, 0, 0, 0);
            return;
          }
        }
      }
    }
LABEL_36:
    sub_2213CDC(titleLabel, title);
  }
}


void ServantSellMaxAlertDialog___OnClickClose_b__26_0(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o *onClose; // x8

  onClose = this->fields.onClose;
  if ( onClose )
    ((void (__fastcall *)(intptr_t, intptr_t))onClose->fields.invoke_impl)(
      onClose->fields.method_code,
      onClose->fields.method);
}


void ServantSellMaxAlertDialog___OnClickTransition_b__25_0(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Action_o *onTransition; // x8

  onTransition = this->fields.onTransition;
  if ( onTransition )
    ((void (__fastcall *)(intptr_t, intptr_t))onTransition->fields.invoke_impl)(
      onTransition->fields.method_code,
      onTransition->fields.method);
  ServantSellMaxAlertDialog__Close(this, 0, v2);
}


void ServantSellMaxAlertDialog___c__DisplayClass22_0___ctor(
        ServantSellMaxAlertDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantSellMaxAlertDialog___c__DisplayClass22_0___Close_b__0(
        ServantSellMaxAlertDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *onCloseEnd; // x8
  ServantSellMaxAlertDialog_o *_4__this; // x0

  onCloseEnd = this->fields.onCloseEnd;
  if ( onCloseEnd )
    ((void (__fastcall *)(intptr_t, intptr_t))onCloseEnd->fields.invoke_impl)(
      onCloseEnd->fields.method_code,
      onCloseEnd->fields.method);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  ServantSellMaxAlertDialog__Init(_4__this, method);
}