void EventInfoJobLevelNoticeDialog___ctor(EventInfoJobLevelNoticeDialog_o *this, const MethodInfo *method)
{
  if ( (byte_59386AC & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59386AC = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void EventInfoJobLevelNoticeDialog__Awake(EventInfoJobLevelNoticeDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void EventInfoJobLevelNoticeDialog__Init(EventInfoJobLevelNoticeDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.closeAction = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeAction, 0, v3, v4, v5, v6, v7, v8);
}


void EventInfoJobLevelNoticeDialog__OnClickCloseButton(EventInfoJobLevelNoticeDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_59386AB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoJobLevelNoticeDialog_OnClickCloseButton__);
    sub_21FFC50(&Method_EventInfoJobLevelNoticeDialog__OnClickCloseButton_b__6_0__);
    byte_59386AB = 1;
  }
  if ( BaseDialog__IsInputState((BaseDialog_o *)this, 0) )
  {
    v3 = Method_EventInfoJobLevelNoticeDialog_OnClickCloseButton__;
    if ( (*((_BYTE *)Method_EventInfoJobLevelNoticeDialog_OnClickCloseButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_EventInfoJobLevelNoticeDialog_OnClickCloseButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_EventInfoJobLevelNoticeDialog__OnClickCloseButton_b__6_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void EventInfoJobLevelNoticeDialog__Open(
        EventInfoJobLevelNoticeDialog_o *this,
        EventJobEntity_o *eventJobEntity,
        EventJobPointBonusEntity_o *beforeLevelEventJobPointBonusEntity,
        EventJobPointBonusEntity_o *afterLevelEventJobPointBonusEntity,
        int32_t maskType,
        System_Action_o *onClose,
        const MethodInfo *method)
{
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  float v19; // s0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  const MethodInfo *v27; // x4
  EventInfoJobLevelNoticeElement_o *before; // x0
  const MethodInfo *v29; // x4

  BaseDialog__Init((BaseDialog_o *)this, 0);
  this->fields.closeAction = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.closeAction, 0, v13, v14, v15, v16, v17, v18);
  v19 = 1.0;
  if ( maskType == 1 )
    v19 = ColorHelper__ToNormalizedColor(113, 0);
  BaseDialog__SetMaskAlpha((BaseDialog_o *)this, v19, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, maskType, 0);
  this->fields.closeAction = onClose;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeAction,
    (int32_t)onClose,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  before = this->fields.before;
  if ( !before
    || (EventInfoJobLevelNoticeElement__SetJobLevelInfo(
          before,
          eventJobEntity,
          beforeLevelEventJobPointBonusEntity,
          0,
          v27),
        (before = this->fields.after) == 0) )
  {
    sub_21FFECC(before, v26);
  }
  EventInfoJobLevelNoticeElement__SetJobLevelInfo(before, eventJobEntity, afterLevelEventJobPointBonusEntity, 1, v29);
}


void EventInfoJobLevelNoticeDialog___OnClickCloseButton_b__6_0(
        EventInfoJobLevelNoticeDialog_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_closeAction; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  p_closeAction = (MissionNaviTransitionBoardItem_o *)&this->fields.closeAction;
  ActionExtensions__Call(this->fields.closeAction, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
  p_closeAction->klass = 0;
  sub_21FFBF4(p_closeAction, 0, v4, v5, v6, v7, v8, v9);
}