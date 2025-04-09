void __fastcall ServantSellMaxAlertDialog___ctor(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49B71EB & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    byte_49B71EB = 1;
  }
  *(_OWORD *)&this->fields.BIG_FONT_SIZE = xmmword_BAAD70;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Action_o *v14; // x20

  if ( (byte_49B71E8 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, onCloseEnd);
    sub_1B4CF90(&Method_ServantSellMaxAlertDialog___c__DisplayClass22_0__Close_b__0__, v5);
    sub_1B4CF90(&ServantSellMaxAlertDialog___c__DisplayClass22_0_TypeInfo, v6);
    byte_49B71E8 = 1;
  }
  v7 = sub_1B4D1DC(ServantSellMaxAlertDialog___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B4D1EC(v8, v9);
  *(_QWORD *)(v7 + 16) = onCloseEnd;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 16), (int32_t)onCloseEnd, v10, v11);
  *(_QWORD *)(v7 + 24) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v12, v13);
  this->fields.state = 5;
  v14 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_ServantSellMaxAlertDialog___c__DisplayClass22_0__Close_b__0__,
    0LL);
  BaseDialog__Close((BaseDialog_o *)this, v14, 0LL);
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
  struct UICommonButton_o *decideButton; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v13; // x21
  struct UICommonButton_o *transitionButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v15; // x20
  EventDelegate_Callback_o *v16; // x21
  struct UICommonButton_o *closeButton; // x8
  System_Collections_Generic_List_EventDelegate__o *v18; // x20
  EventDelegate_Callback_o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_49B71E6 & 1) == 0 )
  {
    sub_1B4CF90(&EventDelegate_Callback_TypeInfo, method);
    sub_1B4CF90(&EventDelegate_TypeInfo, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    sub_1B4CF90(&Method_ServantSellMaxAlertDialog_OnClickClose__, v5);
    sub_1B4CF90(&Method_ServantSellMaxAlertDialog_OnClickDecide__, v6);
    sub_1B4CF90(&Method_ServantSellMaxAlertDialog_OnClickTransition__, v7);
    sub_1B4CF90(&StringLiteral_1/*""*/, v8);
    byte_49B71E6 = 1;
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
  v13 = (EventDelegate_Callback_o *)sub_1B4D1DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v13, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog_OnClickDecide__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  titleLabel = (UILabel_o *)EventDelegate__Set_47333260(onClick, v13, 0LL);
  transitionButton = this->fields.transitionButton;
  if ( !transitionButton
    || (v15 = transitionButton->fields.onClick,
        v16 = (EventDelegate_Callback_o *)sub_1B4D1DC(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v16,
          (Il2CppObject *)this,
          (intptr_t)Method_ServantSellMaxAlertDialog_OnClickTransition__,
          0LL),
        titleLabel = (UILabel_o *)EventDelegate__Set_47333260(v15, v16, 0LL),
        (closeButton = this->fields.closeButton) == 0LL) )
  {
LABEL_20:
    sub_1B4D1EC(titleLabel, method);
  }
  v18 = closeButton->fields.onClick;
  v19 = (EventDelegate_Callback_o *)sub_1B4D1DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v19,
    (Il2CppObject *)this,
    (intptr_t)Method_ServantSellMaxAlertDialog_OnClickClose__,
    0LL);
  EventDelegate__Set_47333260(v18, v19, 0LL);
  this->fields.onDecide = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.onDecide, 0, v20, v21);
  this->fields.onTransition = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.onTransition, 0, v22, v23);
  this->fields.onClose = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.onClose, 0, v24, v25);
  this->fields.state = 1;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall ServantSellMaxAlertDialog__OnClickClose(ServantSellMaxAlertDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_49B71EA & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_ServantSellMaxAlertDialog_OnClickClose__, v3);
    sub_1B4CF90(&Method_ServantSellMaxAlertDialog__OnClickClose_b__26_0__, v4);
    byte_49B71EA = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 4;
    v5 = Method_ServantSellMaxAlertDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ServantSellMaxAlertDialog_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B4CFA8(Method_ServantSellMaxAlertDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
    v7 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog__OnClickClose_b__26_0__, 0LL);
    ServantSellMaxAlertDialog__Close(this, v7, v8);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v10; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_49B71E9 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&AvalonSceneManager_TypeInfo, v3);
    sub_1B4CF90(&Method_ServantSellMaxAlertDialog_OnClickTransition__, v4);
    sub_1B4CF90(&Method_ServantSellMaxAlertDialog__OnClickTransition_b__25_0__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_49B71E9 = 1;
  }
  if ( this->fields.state == 3 )
  {
    this->fields.state = 4;
    v7 = Method_ServantSellMaxAlertDialog_OnClickTransition__;
    if ( (*((_BYTE *)Method_ServantSellMaxAlertDialog_OnClickTransition__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B4CFA8(Method_ServantSellMaxAlertDialog_OnClickTransition__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v10 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
    v12 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog__OnClickTransition_b__25_0__, 0LL);
    if ( !Instance )
      sub_1B4D1EC(v13, v14);
    CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v12, 0LL);
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
  __int64 v19; // x1
  __int64 v20; // x1
  int32_t state; // w8
  UILabel_o *titleLabel; // x0
  UnityEngine_Object_o *eventMissionMessageLabel; // x28
  int32_t v24; // w28
  int v25; // w29
  uint16_t Chars; // w0
  bool v27; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t WORD_DEFAULT_POSITION_Y; // s0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Action_o *v36; // x20

  if ( (byte_49B71E7 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, title);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v19);
    sub_1B4CF90(&Method_ServantSellMaxAlertDialog_EndOpen__, v20);
    byte_49B71E7 = 1;
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
        while ( v24 < message->fields._stringLength );
        v27 = v25 > 6;
      }
      titleLabel = this->fields.eventMissionMessageLabel;
      if ( v27 )
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
            sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.onDecide, (int32_t)onDecide, v30, v31);
            this->fields.onTransition = onTransition;
            sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.onTransition, (int32_t)onTransition, v32, v33);
            this->fields.onClose = onClose;
            sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.onClose, (int32_t)onClose, v34, v35);
            this->fields.state = 2;
            v36 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            System_Action___ctor(v36, (Il2CppObject *)this, Method_ServantSellMaxAlertDialog_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0LL);
            return;
          }
        }
      }
    }
LABEL_36:
    sub_1B4D1EC(titleLabel, title);
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
    sub_1B4D1EC(0LL, method);
  ServantSellMaxAlertDialog__Init(_4__this, method);
}