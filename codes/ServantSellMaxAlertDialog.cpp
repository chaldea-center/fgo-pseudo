void __fastcall ServantSellMaxAlertDialog___ctor(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4216AB8 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4216AB8 = 1;
  }
  *(_OWORD *)&this->fields.BIG_FONT_SIZE = xmmword_3205B10;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantSellMaxAlertDialog__Close(
        ServantSellMaxAlertDialog_o *this,
        System_Action_o *onCloseEnd,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x20

  if ( (byte_4216AB5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, onCloseEnd);
    sub_B0D8A4(&Method_ServantSellMaxAlertDialog___c__DisplayClass22_0__Close_b__0__, v5);
    sub_B0D8A4(&ServantSellMaxAlertDialog___c__DisplayClass22_0_TypeInfo, v6);
    byte_4216AB5 = 1;
  }
  v7 = sub_B0D974(ServantSellMaxAlertDialog___c__DisplayClass22_0_TypeInfo, onCloseEnd, method);
  ServantSellMaxAlertDialog___c__DisplayClass22_0___ctor((ServantSellMaxAlertDialog___c__DisplayClass22_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 16) = onCloseEnd;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)onCloseEnd, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v7 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  this->fields.state = 5;
  v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v21, v22);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v7,
    Method_ServantSellMaxAlertDialog___c__DisplayClass22_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v23, 0LL);
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
  UnityEngine_Object_o *eventMissionMessageLabel; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  struct UICommonButton_o *decideButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  struct UICommonButton_o *transitionButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v19; // x20
  EventDelegate_Callback_o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  struct UICommonButton_o *closeButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v24; // x20
  EventDelegate_Callback_o *v25; // x21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_4216AB3 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, method);
    sub_B0D8A4(&EventDelegate_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_ServantSellMaxAlertDialog_OnClickClose__, v5);
    sub_B0D8A4(&Method_ServantSellMaxAlertDialog_OnClickDecide__, v6);
    sub_B0D8A4(&Method_ServantSellMaxAlertDialog_OnClickTransition__, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_4216AB3 = 1;
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
  v15 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v11, v12);
  EventDelegate_Callback___ctor(v15, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog_OnClickDecide__, 0LL);
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  titleLabel = (UILabel_o *)EventDelegate__Set_28893376(onClick, v15, 0LL);
  transitionButton = this->fields.transitionButton;
  if ( !transitionButton
    || (v19 = transitionButton->fields.onClick,
        v20 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v16, v17),
        EventDelegate_Callback___ctor(
          v20,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantSellMaxAlertDialog_OnClickTransition__,
          0LL),
        titleLabel = (UILabel_o *)EventDelegate__Set_28893376(v19, v20, 0LL),
        (closeButton = this->fields.closeButton) == 0LL) )
  {
LABEL_22:
    sub_B0D97C(titleLabel);
  }
  v24 = closeButton->fields.onClick;
  v25 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v21, v22);
  EventDelegate_Callback___ctor(
    v25,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellMaxAlertDialog_OnClickClose__,
    0LL);
  EventDelegate__Set_28893376(v24, v25, 0LL);
  this->fields.onDecide = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.onDecide, 0LL, v26, v27, v28, v29, v30, v31);
  this->fields.onTransition = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.onTransition, 0LL, v32, v33, v34, v35, v36, v37);
  this->fields.onClose = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.onClose, 0LL, v38, v39, v40, v41, v42, v43);
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
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_4216AB7 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ServantSellMaxAlertDialog_OnClickClose__, v3);
    sub_B0D8A4(&Method_ServantSellMaxAlertDialog__OnClickClose_b__26_0__, v4);
    byte_4216AB7 = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 4;
    v5 = Method_ServantSellMaxAlertDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantSellMaxAlertDialog_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B0D8AC(Method_ServantSellMaxAlertDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog__OnClickClose_b__26_0__, 0LL);
    ServantSellMaxAlertDialog__Close(this, v9, v10);
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
  CommonUI_o *Instance; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21
  __int64 v14; // x0
  AvalonSceneManager_c *v15; // x8

  if ( (byte_4216AB6 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_ServantSellMaxAlertDialog_OnClickTransition__, v4);
    sub_B0D8A4(&Method_ServantSellMaxAlertDialog__OnClickTransition_b__25_0__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4216AB6 = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 4;
    v7 = Method_ServantSellMaxAlertDialog_OnClickTransition__;
    if ( (*((_BYTE *)Method_ServantSellMaxAlertDialog_OnClickTransition__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B0D8AC(Method_ServantSellMaxAlertDialog_OnClickTransition__);
    v8 = (System_Reflection_MethodBase_o *)sub_B0D888(v7, v7[3]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = AvalonSceneManager_TypeInfo;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v15 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
    v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog__OnClickTransition_b__25_0__, 0LL);
    if ( !Instance )
      sub_B0D97C(v14);
    CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v13, 0LL);
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
  int32_t v23; // w28
  int v24; // w23
  uint16_t Chars; // w0
  bool v26; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t WORD_DEFAULT_POSITION_Y; // s0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_o *v49; // x20

  if ( (byte_4216AB4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, title);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    sub_B0D8A4(&Method_ServantSellMaxAlertDialog_EndOpen__, v19);
    byte_4216AB4 = 1;
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
        v26 = 0;
      }
      else
      {
        v23 = 0;
        v24 = 0;
        do
        {
          Chars = System_String__get_Chars(message, v23++, 0LL);
          if ( Chars == 10 )
            ++v24;
        }
        while ( v23 < message->fields.m_stringLength );
        v26 = v24 > 6;
      }
      titleLabel = this->fields.eventMissionMessageLabel;
      if ( v26 )
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
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.onDecide,
              (System_Int32_array **)onDecide,
              v29,
              v30,
              v31,
              v32,
              v33,
              v34);
            this->fields.onTransition = onTransition;
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.onTransition,
              (System_Int32_array **)onTransition,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
            this->fields.onClose = onClose;
            sub_B0D840(
              (BattleServantConfConponent_o *)&this->fields.onClose,
              (System_Int32_array **)onClose,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
            this->fields.state = 2;
            v49 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v47, v48);
            System_Action___ctor(v49, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_37:
    sub_B0D97C(titleLabel);
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
    sub_B0D97C(0LL);
  ServantSellMaxAlertDialog__EndClose(_4__this, 0LL);
}