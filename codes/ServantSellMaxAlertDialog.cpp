void __fastcall ServantSellMaxAlertDialog___ctor(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAADB & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAADB = 1;
  }
  *(_OWORD *)&this->fields.BIG_FONT_SIZE = xmmword_32A51C0;
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o *v27; // x20

  if ( (byte_42EAAD8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)onCloseEnd, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ServantSellMaxAlertDialog___c__DisplayClass22_0__Close_b__0__, v6, v7, v8);
    sub_B5D5C4(&ServantSellMaxAlertDialog___c__DisplayClass22_0_TypeInfo, v9, v10, v11);
    byte_42EAAD8 = 1;
  }
  v12 = sub_B5D694(ServantSellMaxAlertDialog___c__DisplayClass22_0_TypeInfo);
  ServantSellMaxAlertDialog___c__DisplayClass22_0___ctor((ServantSellMaxAlertDialog___c__DisplayClass22_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  *(_QWORD *)(v12 + 16) = onCloseEnd;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v12 + 16),
    (System_Int32_array **)onCloseEnd,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  *(_QWORD *)(v12 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  this->fields.state = 5;
  v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v12,
    Method_ServantSellMaxAlertDialog___c__DisplayClass22_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v27, 0LL);
}


void __fastcall ServantSellMaxAlertDialog__EndOpen(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 3;
}


void __fastcall ServantSellMaxAlertDialog__Init(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *eventMissionMessageLabel; // x20
  struct UICommonButton_o *decideButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v27; // x21
  struct UICommonButton_o *transitionButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v29; // x20
  EventDelegate_Callback_o *v30; // x21
  struct UICommonButton_o *closeButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v32; // x20
  EventDelegate_Callback_o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_42EAAD6 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EventDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_ServantSellMaxAlertDialog_OnClickClose__, v11, v12, v13);
    sub_B5D5C4(&Method_ServantSellMaxAlertDialog_OnClickDecide__, v14, v15, v16);
    sub_B5D5C4(&Method_ServantSellMaxAlertDialog_OnClickTransition__, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42EAAD6 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.getableLabel;
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideLabel;
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.transitionLabel;
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.closeLabel;
  if ( !titleLabel )
    goto LABEL_22;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  eventMissionMessageLabel = (UnityEngine_Object_o *)this->fields.eventMissionMessageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  titleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(eventMissionMessageLabel, 0LL, 0LL);
  if ( ((unsigned __int8)titleLabel & 1) != 0 )
  {
    titleLabel = this->fields.eventMissionMessageLabel;
    if ( !titleLabel )
      goto LABEL_22;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_22;
  onClick = decideButton->fields.onClick;
  v27 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v27, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog_OnClickDecide__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  titleLabel = (UILabel_o *)EventDelegate__Set_29826436(onClick, v27, 0LL);
  transitionButton = this->fields.transitionButton;
  if ( !transitionButton
    || (v29 = transitionButton->fields.onClick,
        v30 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v30,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantSellMaxAlertDialog_OnClickTransition__,
          0LL),
        titleLabel = (UILabel_o *)EventDelegate__Set_29826436(v29, v30, 0LL),
        (closeButton = this->fields.closeButton) == 0LL) )
  {
LABEL_22:
    sub_B5D69C(titleLabel, method);
  }
  v32 = closeButton->fields.onClick;
  v33 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v33,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellMaxAlertDialog_OnClickClose__,
    0LL);
  EventDelegate__Set_29826436(v32, v33, 0LL);
  this->fields.onDecide = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.onDecide, 0LL, v34, v35, v36, v37, v38, v39);
  this->fields.onTransition = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.onTransition, 0LL, v40, v41, v42, v43, v44, v45);
  this->fields.onClose = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.onClose, 0LL, v46, v47, v48, v49, v50, v51);
  this->fields.state = 1;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantSellMaxAlertDialog__OnClickClose(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2

  if ( (byte_42EAADA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ServantSellMaxAlertDialog_OnClickClose__, v5, v6, v7);
    sub_B5D5C4(&Method_ServantSellMaxAlertDialog__OnClickClose_b__26_0__, v8, v9, v10);
    byte_42EAADA = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 4;
    v11 = Method_ServantSellMaxAlertDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantSellMaxAlertDialog_OnClickClose__ + 75) & 2) != 0 )
      v11 = (_QWORD *)sub_B5D5CC(Method_ServantSellMaxAlertDialog_OnClickClose__);
    v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 1, 0LL);
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog__OnClickClose_b__26_0__, 0LL);
    ServantSellMaxAlertDialog__Close(this, v13, v14);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v20; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1

  if ( (byte_42EAAD9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ServantSellMaxAlertDialog_OnClickTransition__, v8, v9, v10);
    sub_B5D5C4(&Method_ServantSellMaxAlertDialog__OnClickTransition_b__25_0__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    byte_42EAAD9 = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 4;
    v17 = Method_ServantSellMaxAlertDialog_OnClickTransition__;
    if ( (*((_BYTE *)Method_ServantSellMaxAlertDialog_OnClickTransition__ + 75) & 2) != 0 )
      v17 = (_QWORD *)sub_B5D5CC(Method_ServantSellMaxAlertDialog_OnClickTransition__);
    v18 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v17, v17[3]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v20 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
    v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog__OnClickTransition_b__25_0__, 0LL);
    if ( !Instance )
      sub_B5D69C(v23, v24);
    CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v22, 0LL);
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
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int32_t state; // w8
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *eventMissionMessageLabel; // x28
  int32_t v27; // w28
  int v28; // w23
  uint16_t Chars; // w0
  bool v30; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t WORD_DEFAULT_POSITION_Y; // s0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Action_o *v51; // x20

  if ( (byte_42EAAD7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)title, (_DWORD)message, getable);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_ServantSellMaxAlertDialog_EndOpen__, v21, v22, v23);
    byte_42EAAD7 = 1;
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
      titleLabel = this->fields.eventMissionMessageLabel;
      if ( !titleLabel )
        goto LABEL_37;
      UILabel__set_text(titleLabel, message, 0LL);
      if ( !message )
        goto LABEL_37;
      if ( message->fields.m_stringLength < 1 )
      {
        v30 = 0;
      }
      else
      {
        v27 = 0;
        v28 = 0;
        do
        {
          Chars = System_String__get_Chars(message, v27++, 0LL);
          if ( Chars == 10 )
            ++v28;
        }
        while ( v27 < message->fields.m_stringLength );
        v30 = v28 > 6;
      }
      titleLabel = this->fields.eventMissionMessageLabel;
      if ( v30 )
      {
        if ( !titleLabel )
          goto LABEL_37;
        UILabel__set_fontSize(titleLabel, this->fields.DEFAULT_FONT_SIZE, 0LL);
        titleLabel = this->fields.eventMissionMessageLabel;
        if ( !titleLabel )
          goto LABEL_37;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
        WORD_DEFAULT_POSITION_Y = this->fields.WORD_DEFAULT_POSITION_Y;
      }
      else
      {
        if ( !titleLabel )
          goto LABEL_37;
        UILabel__set_fontSize(titleLabel, this->fields.BIG_FONT_SIZE, 0LL);
        titleLabel = this->fields.eventMissionMessageLabel;
        if ( !titleLabel )
          goto LABEL_37;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
        WORD_DEFAULT_POSITION_Y = this->fields.WORD_POSITION_Y;
      }
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)WORD_DEFAULT_POSITION_Y, 0LL);
    }
    else
    {
LABEL_21:
      titleLabel = this->fields.messageLabel;
      if ( !titleLabel )
        goto LABEL_37;
      UILabel__set_text(titleLabel, message, 0LL);
    }
    titleLabel = this->fields.getableLabel;
    if ( titleLabel )
    {
      UILabel__set_text(titleLabel, getable, 0LL);
      titleLabel = this->fields.decideLabel;
      if ( titleLabel )
      {
        UILabel__set_text(titleLabel, decide, 0LL);
        titleLabel = this->fields.transitionLabel;
        if ( titleLabel )
        {
          UILabel__set_text(titleLabel, transition, 0LL);
          titleLabel = this->fields.closeLabel;
          if ( titleLabel )
          {
            UILabel__set_text(titleLabel, close, 0LL);
            this->fields.onDecide = onDecide;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.onDecide,
              (System_Int32_array **)onDecide,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            this->fields.onTransition = onTransition;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.onTransition,
              (System_Int32_array **)onTransition,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
            this->fields.onClose = onClose;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.onClose,
              (System_Int32_array **)onClose,
              v45,
              v46,
              v47,
              v48,
              v49,
              v50);
            this->fields.state = 2;
            v51 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(v51, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)this, v51, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_37:
    sub_B5D69C(titleLabel, title);
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
    sub_B5D69C(0LL, method);
  ServantSellMaxAlertDialog__EndClose(_4__this, 0LL);
}