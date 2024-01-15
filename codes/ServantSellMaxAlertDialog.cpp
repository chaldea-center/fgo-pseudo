void __fastcall ServantSellMaxAlertDialog___ctor(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FBC22 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FBC22 = 1;
  }
  *(_OWORD *)&this->fields.BIG_FONT_SIZE = xmmword_3137820;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantSellMaxAlertDialog__Close(
        ServantSellMaxAlertDialog_o *this,
        System_Action_o *onCloseEnd,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x20

  if ( (byte_40FBC1F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, onCloseEnd);
    sub_B16FFC(&Method_ServantSellMaxAlertDialog___c__DisplayClass22_0__Close_b__0__, v7);
    sub_B16FFC(&ServantSellMaxAlertDialog___c__DisplayClass22_0_TypeInfo, v8);
    byte_40FBC1F = 1;
  }
  v9 = sub_B170CC(ServantSellMaxAlertDialog___c__DisplayClass22_0_TypeInfo, onCloseEnd, method, v3, v4);
  ServantSellMaxAlertDialog___c__DisplayClass22_0___ctor((ServantSellMaxAlertDialog___c__DisplayClass22_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 16) = onCloseEnd;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)onCloseEnd, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  this->fields.state = 5;
  v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v9,
    Method_ServantSellMaxAlertDialog___c__DisplayClass22_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v26, 0LL);
}


void __fastcall ServantSellMaxAlertDialog__EndOpen(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 3;
}


void __fastcall ServantSellMaxAlertDialog__Init(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *getableLabel; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *transitionLabel; // x0
  UILabel_o *closeLabel; // x0
  UnityEngine_Object_o *eventMissionMessageLabel; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  UILabel_o *v20; // x0
  struct UICommonButton_o *decideButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  struct UICommonButton_o *transitionButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v29; // x20
  EventDelegate_Callback_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  struct UICommonButton_o *closeButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v36; // x20
  EventDelegate_Callback_o *v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7

  if ( (byte_40FBC1D & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&EventDelegate_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_ServantSellMaxAlertDialog_OnClickClose__, v5);
    sub_B16FFC(&Method_ServantSellMaxAlertDialog_OnClickDecide__, v6);
    sub_B16FFC(&Method_ServantSellMaxAlertDialog_OnClickTransition__, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    byte_40FBC1D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_22;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  getableLabel = this->fields.getableLabel;
  if ( !getableLabel )
    goto LABEL_22;
  UILabel__set_text(getableLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  decideLabel = this->fields.decideLabel;
  if ( !decideLabel )
    goto LABEL_22;
  UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  transitionLabel = this->fields.transitionLabel;
  if ( !transitionLabel )
    goto LABEL_22;
  UILabel__set_text(transitionLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  closeLabel = this->fields.closeLabel;
  if ( !closeLabel )
    goto LABEL_22;
  UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  eventMissionMessageLabel = (UnityEngine_Object_o *)this->fields.eventMissionMessageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventMissionMessageLabel, 0LL, 0LL) )
  {
    v20 = this->fields.eventMissionMessageLabel;
    if ( !v20 )
      goto LABEL_22;
    UILabel__set_text(v20, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_22;
  onClick = decideButton->fields.onClick;
  v23 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v16, v17, v18, v19);
  EventDelegate_Callback___ctor(v23, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog_OnClickDecide__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Set_29416612(onClick, v23, 0LL);
  transitionButton = this->fields.transitionButton;
  if ( !transitionButton
    || (v29 = transitionButton->fields.onClick,
        v30 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v24, v25, v26, v27),
        EventDelegate_Callback___ctor(
          v30,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantSellMaxAlertDialog_OnClickTransition__,
          0LL),
        EventDelegate__Set_29416612(v29, v30, 0LL),
        (closeButton = this->fields.closeButton) == 0LL) )
  {
LABEL_22:
    sub_B170D4();
  }
  v36 = closeButton->fields.onClick;
  v37 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v31, v32, v33, v34);
  EventDelegate_Callback___ctor(
    v37,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellMaxAlertDialog_OnClickClose__,
    0LL);
  EventDelegate__Set_29416612(v36, v37, 0LL);
  this->fields.onDecide = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.onDecide, 0LL, v38, v39, v40, v41, v42, v43);
  this->fields.onTransition = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.onTransition, 0LL, v44, v45, v46, v47, v48, v49);
  this->fields.onClose = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.onClose, 0LL, v50, v51, v52, v53, v54, v55);
  this->fields.state = 1;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantSellMaxAlertDialog__OnClickClose(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_40FBC21 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ServantSellMaxAlertDialog_OnClickClose__, v3);
    sub_B16FFC(&Method_ServantSellMaxAlertDialog__OnClickClose_b__26_0__, v4);
    byte_40FBC21 = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 4;
    v5 = Method_ServantSellMaxAlertDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantSellMaxAlertDialog_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B17004(Method_ServantSellMaxAlertDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog__OnClickClose_b__26_0__, 0LL);
    ServantSellMaxAlertDialog__Close(this, v11, v12);
  }
}


void __fastcall ServantSellMaxAlertDialog__OnClickDecide(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Action_o *onDecide; // x0

  if ( this->fields.state == 3 )
  {
    onDecide = this->fields.onDecide;
    this->fields.state = 4;
    if ( onDecide )
      System_Action__Invoke(onDecide, 0LL);
    ServantSellMaxAlertDialog__Close(this, 0LL, v2);
  }
}


void __fastcall ServantSellMaxAlertDialog__OnClickTransition(
        ServantSellMaxAlertDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v14; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v16; // x21

  if ( (byte_40FBC20 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_ServantSellMaxAlertDialog_OnClickTransition__, v4);
    sub_B16FFC(&Method_ServantSellMaxAlertDialog__OnClickTransition_b__25_0__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FBC20 = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 4;
    v7 = Method_ServantSellMaxAlertDialog_OnClickTransition__;
    if ( (*((_BYTE *)Method_ServantSellMaxAlertDialog_OnClickTransition__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B17004(Method_ServantSellMaxAlertDialog_OnClickTransition__);
    v8 = (System_Reflection_MethodBase_o *)sub_B16FE0(v7, v7[3]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v14 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
    v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog__OnClickTransition_b__25_0__, 0LL);
    if ( !Instance )
      sub_B170D4();
    CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v16, 0LL);
  }
}


void __fastcall ServantSellMaxAlertDialog__Open(
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
  __int64 v18; // x1
  __int64 v19; // x1
  int32_t state; // w8
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *eventMissionMessageLabel; // x28
  UILabel_o *v23; // x0
  int32_t v24; // w28
  int v25; // w23
  uint16_t Chars; // w0
  bool v27; // w8
  UILabel_o *messageLabel; // x0
  UILabel_o *v29; // x0
  UnityEngine_Component_o *v30; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t WORD_DEFAULT_POSITION_Y; // s0
  UnityEngine_Component_o *v33; // x0
  UILabel_o *getableLabel; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *transitionLabel; // x0
  UILabel_o *closeLabel; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Action_o *v60; // x20

  if ( (byte_40FBC1E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, title);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&Method_ServantSellMaxAlertDialog_EndOpen__, v19);
    byte_40FBC1E = 1;
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
      goto LABEL_37;
    UILabel__set_text(titleLabel, title, 0LL);
    if ( !isEventMission )
      goto LABEL_21;
    eventMissionMessageLabel = (UnityEngine_Object_o *)this->fields.eventMissionMessageLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(eventMissionMessageLabel, 0LL, 0LL) )
    {
      v23 = this->fields.eventMissionMessageLabel;
      if ( !v23 )
        goto LABEL_37;
      UILabel__set_text(v23, message, 0LL);
      if ( !message )
        goto LABEL_37;
      if ( message->fields.m_stringLength < 1 )
      {
        v27 = 0;
      }
      else
      {
        v24 = 0;
        v25 = 0;
        do
        {
          Chars = System_String__get_Chars(message, v24++, 0LL);
          if ( Chars == 10 )
            ++v25;
        }
        while ( v24 < message->fields.m_stringLength );
        v27 = v25 > 6;
      }
      v29 = this->fields.eventMissionMessageLabel;
      if ( v27 )
      {
        if ( !v29 )
          goto LABEL_37;
        UILabel__set_fontSize(v29, this->fields.DEFAULT_FONT_SIZE, 0LL);
        v30 = (UnityEngine_Component_o *)this->fields.eventMissionMessageLabel;
        if ( !v30 )
          goto LABEL_37;
        gameObject = UnityEngine_Component__get_gameObject(v30, 0LL);
        WORD_DEFAULT_POSITION_Y = this->fields.WORD_DEFAULT_POSITION_Y;
      }
      else
      {
        if ( !v29 )
          goto LABEL_37;
        UILabel__set_fontSize(v29, this->fields.BIG_FONT_SIZE, 0LL);
        v33 = (UnityEngine_Component_o *)this->fields.eventMissionMessageLabel;
        if ( !v33 )
          goto LABEL_37;
        gameObject = UnityEngine_Component__get_gameObject(v33, 0LL);
        WORD_DEFAULT_POSITION_Y = this->fields.WORD_POSITION_Y;
      }
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)WORD_DEFAULT_POSITION_Y, 0LL);
    }
    else
    {
LABEL_21:
      messageLabel = this->fields.messageLabel;
      if ( !messageLabel )
        goto LABEL_37;
      UILabel__set_text(messageLabel, message, 0LL);
    }
    getableLabel = this->fields.getableLabel;
    if ( getableLabel )
    {
      UILabel__set_text(getableLabel, getable, 0LL);
      decideLabel = this->fields.decideLabel;
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, decide, 0LL);
        transitionLabel = this->fields.transitionLabel;
        if ( transitionLabel )
        {
          UILabel__set_text(transitionLabel, transition, 0LL);
          closeLabel = this->fields.closeLabel;
          if ( closeLabel )
          {
            UILabel__set_text(closeLabel, close, 0LL);
            this->fields.onDecide = onDecide;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.onDecide,
              (System_Int32_array **)onDecide,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43);
            this->fields.onTransition = onTransition;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.onTransition,
              (System_Int32_array **)onTransition,
              v44,
              v45,
              v46,
              v47,
              v48,
              v49);
            this->fields.onClose = onClose;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.onClose,
              (System_Int32_array **)onClose,
              v50,
              v51,
              v52,
              v53,
              v54,
              v55);
            this->fields.state = 2;
            v60 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v56, v57, v58, v59);
            System_Action___ctor(v60, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)this, v60, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_37:
    sub_B170D4();
  }
}


void __fastcall ServantSellMaxAlertDialog___OnClickClose_b__26_0(
        ServantSellMaxAlertDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *onClose; // x0

  onClose = this->fields.onClose;
  if ( onClose )
    System_Action__Invoke(onClose, 0LL);
}


void __fastcall ServantSellMaxAlertDialog___OnClickTransition_b__25_0(
        ServantSellMaxAlertDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Action_o *onTransition; // x0

  onTransition = this->fields.onTransition;
  if ( onTransition )
    System_Action__Invoke(onTransition, 0LL);
  ServantSellMaxAlertDialog__Close(this, 0LL, v2);
}


void __fastcall ServantSellMaxAlertDialog___c__DisplayClass22_0___ctor(
        ServantSellMaxAlertDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantSellMaxAlertDialog___c__DisplayClass22_0___Close_b__0(
        ServantSellMaxAlertDialog___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *onCloseEnd; // x0
  ServantSellMaxAlertDialog_o *_4__this; // x0

  onCloseEnd = this->fields.onCloseEnd;
  if ( onCloseEnd )
    System_Action__Invoke(onCloseEnd, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ServantSellMaxAlertDialog__EndClose(_4__this, 0LL);
}