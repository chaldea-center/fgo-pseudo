void __fastcall ServantSellMaxAlertDialog___ctor(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A576F0 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A576F0 = 1;
  }
  *(_OWORD *)&this->fields.BIG_FONT_SIZE = xmmword_BB5410;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantSellMaxAlertDialog__Close(
        ServantSellMaxAlertDialog_o *this,
        System_Action_o *onCloseEnd,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  System_Action_o *v12; // x20

  if ( (byte_4A576ED & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantSellMaxAlertDialog___c__DisplayClass22_0__Close_b__0__);
    sub_1B885B0(&ServantSellMaxAlertDialog___c__DisplayClass22_0_TypeInfo);
    byte_4A576ED = 1;
  }
  v5 = sub_1B887FC(ServantSellMaxAlertDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = onCloseEnd;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)onCloseEnd, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  this->fields.state = 5;
  v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_ServantSellMaxAlertDialog___c__DisplayClass22_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
}


void __fastcall ServantSellMaxAlertDialog__EndOpen(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 3;
}


void __fastcall ServantSellMaxAlertDialog__Init(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *eventMissionMessageLabel; // x20
  struct UICommonButton_o *decideButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v7; // x21
  struct UICommonButton_o *transitionButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v9; // x20
  EventDelegate_Callback_o *v10; // x21
  struct UICommonButton_o *closeButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v12; // x20
  EventDelegate_Callback_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A576EB & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&EventDelegate_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_ServantSellMaxAlertDialog_OnClickClose__);
    sub_1B885B0(&Method_ServantSellMaxAlertDialog_OnClickDecide__);
    sub_1B885B0(&Method_ServantSellMaxAlertDialog_OnClickTransition__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A576EB = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.getableLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.decideLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.transitionLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.closeLabel;
  if ( !titleLabel )
    goto LABEL_20;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  eventMissionMessageLabel = (UnityEngine_Object_o *)this->fields.eventMissionMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  titleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(eventMissionMessageLabel, 0LL, 0LL);
  if ( ((unsigned __int8)titleLabel & 1) != 0 )
  {
    titleLabel = this->fields.eventMissionMessageLabel;
    if ( !titleLabel )
      goto LABEL_20;
    UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  decideButton = this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_20;
  onClick = decideButton->fields.onClick;
  v7 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v7, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog_OnClickDecide__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  titleLabel = (UILabel_o *)EventDelegate__Set_46771408(onClick, v7, 0LL);
  transitionButton = this->fields.transitionButton;
  if ( !transitionButton
    || (v9 = transitionButton->fields.onClick,
        v10 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v10,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantSellMaxAlertDialog_OnClickTransition__,
          0LL),
        titleLabel = (UILabel_o *)EventDelegate__Set_46771408(v9, v10, 0LL),
        (closeButton = this->fields.closeButton) == 0LL) )
  {
LABEL_20:
    sub_1B8880C(titleLabel, method);
  }
  v12 = closeButton->fields.onClick;
  v13 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellMaxAlertDialog_OnClickClose__,
    0LL);
  EventDelegate__Set_46771408(v12, v13, 0LL);
  this->fields.onDecide = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, 0, v14, v15);
  this->fields.onTransition = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onTransition, 0, v16, v17);
  this->fields.onClose = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClose, 0, v18, v19);
  this->fields.state = 1;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantSellMaxAlertDialog__OnClickClose(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4A576EF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ServantSellMaxAlertDialog_OnClickClose__);
    sub_1B885B0(&Method_ServantSellMaxAlertDialog__OnClickClose_b__26_0__);
    byte_4A576EF = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 4;
    v3 = Method_ServantSellMaxAlertDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantSellMaxAlertDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSellMaxAlertDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog__OnClickClose_b__26_0__, 0LL);
    ServantSellMaxAlertDialog__Close(this, v5, v6);
  }
}


void __fastcall ServantSellMaxAlertDialog__OnClickDecide(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Action_o *onDecide; // x8

  if ( this->fields.state == 3 )
  {
    onDecide = this->fields.onDecide;
    this->fields.state = 4;
    if ( onDecide )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onDecide->fields.m_target)(
        onDecide->fields.original_method_info,
        *(_QWORD *)&onDecide->fields.extra_arg);
    ServantSellMaxAlertDialog__Close(this, 0LL, v2);
  }
}


void __fastcall ServantSellMaxAlertDialog__OnClickTransition(
        ServantSellMaxAlertDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v6; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A576EE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AvalonSceneManager_TypeInfo);
    sub_1B885B0(&Method_ServantSellMaxAlertDialog_OnClickTransition__);
    sub_1B885B0(&Method_ServantSellMaxAlertDialog__OnClickTransition_b__25_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A576EE = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 4;
    v3 = Method_ServantSellMaxAlertDialog_OnClickTransition__;
    if ( (*((_BYTE *)Method_ServantSellMaxAlertDialog_OnClickTransition__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ServantSellMaxAlertDialog_OnClickTransition__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v6 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
    v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog__OnClickTransition_b__25_0__, 0LL);
    if ( !Instance )
      sub_1B8880C(v9, v10);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v8, 0LL);
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
  int32_t state; // w8
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *eventMissionMessageLabel; // x28
  int32_t v22; // w28
  int v23; // w29
  uint16_t Chars; // w0
  bool v25; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t WORD_DEFAULT_POSITION_Y; // s0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  System_Action_o *v34; // x20

  if ( (byte_4A576EC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_ServantSellMaxAlertDialog_EndOpen__);
    byte_4A576EC = 1;
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
    UILabel__set_text(titleLabel, title, 0LL);
    if ( !isEventMission )
      goto LABEL_20;
    eventMissionMessageLabel = (UnityEngine_Object_o *)this->fields.eventMissionMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(eventMissionMessageLabel, 0LL, 0LL) )
    {
      titleLabel = this->fields.eventMissionMessageLabel;
      if ( !titleLabel )
        goto LABEL_36;
      UILabel__set_text(titleLabel, message, 0LL);
      if ( !message )
        goto LABEL_36;
      if ( message->fields._stringLength < 1 )
      {
        v25 = 0;
      }
      else
      {
        v22 = 0;
        v23 = 0;
        do
        {
          Chars = System_String__get_Chars(message, v22++, 0LL);
          if ( Chars == 10 )
            ++v23;
        }
        while ( v22 < message->fields._stringLength );
        v25 = v23 > 6;
      }
      titleLabel = this->fields.eventMissionMessageLabel;
      if ( v25 )
      {
        if ( !titleLabel )
          goto LABEL_36;
        UILabel__set_fontSize(titleLabel, this->fields.DEFAULT_FONT_SIZE, 0LL);
        titleLabel = this->fields.eventMissionMessageLabel;
        if ( !titleLabel )
          goto LABEL_36;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
        WORD_DEFAULT_POSITION_Y = this->fields.WORD_DEFAULT_POSITION_Y;
      }
      else
      {
        if ( !titleLabel )
          goto LABEL_36;
        UILabel__set_fontSize(titleLabel, this->fields.BIG_FONT_SIZE, 0LL);
        titleLabel = this->fields.eventMissionMessageLabel;
        if ( !titleLabel )
          goto LABEL_36;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleLabel, 0LL);
        WORD_DEFAULT_POSITION_Y = this->fields.WORD_POSITION_Y;
      }
      GameObjectExtensions__SetLocalPositionX(gameObject, (float)WORD_DEFAULT_POSITION_Y, 0LL);
    }
    else
    {
LABEL_20:
      titleLabel = this->fields.messageLabel;
      if ( !titleLabel )
        goto LABEL_36;
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
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onDecide, (int32_t)onDecide, v28, v29);
            this->fields.onTransition = onTransition;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&this->fields.onTransition,
              (int32_t)onTransition,
              v30,
              v31);
            this->fields.onClose = onClose;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClose, (int32_t)onClose, v32, v33);
            this->fields.state = 2;
            v34 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
            System_Action___ctor(v34, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)this, v34, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_36:
    sub_1B8880C(titleLabel, title);
  }
}


void __fastcall ServantSellMaxAlertDialog___OnClickClose_b__26_0(
        ServantSellMaxAlertDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *onClose; // x8

  onClose = this->fields.onClose;
  if ( onClose )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClose->fields.m_target)(
      onClose->fields.original_method_info,
      *(_QWORD *)&onClose->fields.extra_arg);
}


void __fastcall ServantSellMaxAlertDialog___OnClickTransition_b__25_0(
        ServantSellMaxAlertDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct System_Action_o *onTransition; // x8

  onTransition = this->fields.onTransition;
  if ( onTransition )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onTransition->fields.m_target)(
      onTransition->fields.original_method_info,
      *(_QWORD *)&onTransition->fields.extra_arg);
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
  struct System_Action_o *onCloseEnd; // x8
  ServantSellMaxAlertDialog_o *_4__this; // x0

  onCloseEnd = this->fields.onCloseEnd;
  if ( onCloseEnd )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onCloseEnd->fields.m_target)(
      onCloseEnd->fields.original_method_info,
      *(_QWORD *)&onCloseEnd->fields.extra_arg);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  ServantSellMaxAlertDialog__Init(_4__this, method);
}