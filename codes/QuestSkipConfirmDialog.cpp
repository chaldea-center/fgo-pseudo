void QuestSkipConfirmDialog___ctor(QuestSkipConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D29537 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D29537 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void QuestSkipConfirmDialog__Awake(QuestSkipConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *messageLabel; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UILabel_o *v6; // x8

  if ( (byte_4D2952F & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2952F = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(messageLabel, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.messageLabel;
    if ( !v6 )
      sub_1C942F0(v4, v5);
    this->fields.defaultFontSize = v6->fields.mFontSize;
  }
}


void QuestSkipConfirmDialog__Close(QuestSkipConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestSkipConfirmDialog__Close_37239916(this, 0, v2);
}


void QuestSkipConfirmDialog__Close_37239916(
        QuestSkipConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D29532 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_QuestSkipConfirmDialog_EndClose__);
    byte_4D29532 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_QuestSkipConfirmDialog_EndClose__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v10, 0);
}


void QuestSkipConfirmDialog__EndClose(QuestSkipConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C942F0(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C9403C(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void QuestSkipConfirmDialog__OnClickClose(QuestSkipConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct QuestSkipConfirmDialog_ClickDelegate_o *decideFunc; // x8

  if ( (byte_4D29535 & 1) == 0 )
  {
    sub_1C94098(&Method_QuestSkipConfirmDialog_OnClickClose__);
    byte_4D29535 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_QuestSkipConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_QuestSkipConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_QuestSkipConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    decideFunc = this->fields.decideFunc;
    if ( decideFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))decideFunc->fields.invoke_impl)(
        decideFunc->fields.method_code,
        0,
        decideFunc->fields.method);
  }
}


void QuestSkipConfirmDialog__OnClickDecide(QuestSkipConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct QuestSkipConfirmDialog_ClickDelegate_o *decideFunc; // x8

  if ( (byte_4D29533 & 1) == 0 )
  {
    sub_1C94098(&Method_QuestSkipConfirmDialog_OnClickDecide__);
    byte_4D29533 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_QuestSkipConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_QuestSkipConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_QuestSkipConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    decideFunc = this->fields.decideFunc;
    if ( decideFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))decideFunc->fields.invoke_impl)(
        decideFunc->fields.method_code,
        1,
        decideFunc->fields.method);
  }
}


void QuestSkipConfirmDialog__OnClickSkip(QuestSkipConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *skipCallbackFunc; // x8

  if ( (byte_4D29534 & 1) == 0 )
  {
    sub_1C94098(&Method_QuestSkipConfirmDialog_OnClickSkip__);
    byte_4D29534 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_QuestSkipConfirmDialog_OnClickSkip__;
    if ( (*((_BYTE *)Method_QuestSkipConfirmDialog_OnClickSkip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_QuestSkipConfirmDialog_OnClickSkip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    skipCallbackFunc = this->fields.skipCallbackFunc;
    if ( skipCallbackFunc )
      ((void (__fastcall *)(intptr_t, intptr_t))skipCallbackFunc->fields.invoke_impl)(
        skipCallbackFunc->fields.method_code,
        skipCallbackFunc->fields.method);
  }
}


void QuestSkipConfirmDialog__OnEnable(QuestSkipConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v4; // x0

  if ( (byte_4D29536 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_4651/*"ConfirmWindow/CancelButton"*/);
    sub_1C94098(&StringLiteral_15698/*"Window/CancelButton"*/);
    byte_4D29536 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45761432(transform, (System_String_o *)StringLiteral_15698/*"Window/CancelButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45761432(v4, (System_String_o *)StringLiteral_4651/*"ConfirmWindow/CancelButton"*/, 0);
}


void QuestSkipConfirmDialog__Open(
        QuestSkipConfirmDialog_o *this,
        int32_t questId,
        int32_t phase,
        QuestSkipConfirmDialog_ClickDelegate_o *delegateFunc,
        System_Action_o *skipFunc,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  QuestMessageMaster_o *Master_object; // x0
  __int64 v20; // x1
  int32_t targetId; // w21
  int32_t condType; // w23
  int64_t targetNum; // x22
  UnityEngine_GameObject_o *decideBtn; // x21
  EventDelegate_Callback_o *v25; // x22
  QuestSkipConfirmDialog_o *v26; // x0
  const MethodInfo *v27; // x3
  UnityEngine_GameObject_o *skipBtn; // x21
  EventDelegate_Callback_o *v29; // x22
  QuestSkipConfirmDialog_o *v30; // x0
  const MethodInfo *v31; // x3
  UnityEngine_GameObject_o *cancelBtn; // x21
  EventDelegate_Callback_o *v33; // x22
  QuestSkipConfirmDialog_o *v34; // x0
  const MethodInfo *v35; // x3
  UILabel_o *decideBtnLabel; // x21
  UILabel_o *skipBtnLabel; // x21
  UILabel_o *cancelBtnLabel; // x21
  __int64 v39; // x8
  QuestMessageEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D29530 & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_QuestMessageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_QuestSkipConfirmDialog_OnClickClose__);
    sub_1C94098(&Method_QuestSkipConfirmDialog_OnClickDecide__);
    sub_1C94098(&Method_QuestSkipConfirmDialog_OnClickSkip__);
    sub_1C94098(&StringLiteral_10924/*"QUEST_MESSAGE_DLG_DECIDE"*/);
    sub_1C94098(&StringLiteral_10923/*"QUEST_MESSAGE_DLG_CANCEL"*/);
    sub_1C94098(&StringLiteral_10939/*"QUEST_MESSAGE_DLG_SKIP"*/);
    byte_4D29530 = 1;
  }
  entity = 0;
  this->fields.decideFunc = delegateFunc;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.decideFunc,
    (int32_t)delegateFunc,
    phase,
    (int32_t)delegateFunc,
    (System_String_o *)skipFunc,
    (int32_t)method,
    v6,
    v7);
  this->fields.skipCallbackFunc = skipFunc;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.skipCallbackFunc,
    (int32_t)skipFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestMessageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_QuestMessageMaster___);
  if ( !Master_object )
    goto LABEL_28;
  Master_object = (QuestMessageMaster_o *)QuestMessageMaster__TryGetEntity(Master_object, &entity, questId, phase, 0, 0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_28;
  condType = entity->fields.condType;
  targetId = entity->fields.targetId;
  targetNum = entity->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsOpen(condType, targetId, targetNum, 0, 0, 0) )
  {
    Master_object = (QuestMessageMaster_o *)this->fields.skipBtn;
    if ( !Master_object )
      goto LABEL_28;
    Master_object = (QuestMessageMaster_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)Master_object,
                                              (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    if ( !Master_object )
      goto LABEL_28;
    ((void (__fastcall *)(QuestMessageMaster_o *, _QWORD, const MethodInfo *))Master_object->klass->vtable._5_preProcess.methodPtr)(
      Master_object,
      0,
      Master_object->klass->vtable._5_preProcess.method);
    Master_object = (QuestMessageMaster_o *)this->fields.skipBtn;
    if ( !Master_object )
      goto LABEL_28;
    Master_object = (QuestMessageMaster_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)Master_object,
                                              (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !Master_object )
      goto LABEL_28;
    v41.fields.r = 0.5;
    v41.fields.g = 0.5;
    v41.fields.b = 0.5;
    v41.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)Master_object, v41, 0);
  }
  decideBtn = this->fields.decideBtn;
  v25 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v25, (Il2CppObject *)this, (intptr_t)Method_QuestSkipConfirmDialog_OnClickDecide__, 0);
  QuestSkipConfirmDialog__SetButtonEvent(v26, decideBtn, v25, v27);
  skipBtn = this->fields.skipBtn;
  v29 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v29, (Il2CppObject *)this, (intptr_t)Method_QuestSkipConfirmDialog_OnClickSkip__, 0);
  QuestSkipConfirmDialog__SetButtonEvent(v30, skipBtn, v29, v31);
  cancelBtn = this->fields.cancelBtn;
  v33 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v33, (Il2CppObject *)this, (intptr_t)Method_QuestSkipConfirmDialog_OnClickClose__, 0);
  QuestSkipConfirmDialog__SetButtonEvent(v34, cancelBtn, v33, v35);
  if ( !entity )
    goto LABEL_28;
  Master_object = (QuestMessageMaster_o *)this->fields.messageLabel;
  if ( !Master_object )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)Master_object, entity->fields.message, 0);
  decideBtnLabel = this->fields.decideBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (QuestMessageMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10924/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0);
  if ( !decideBtnLabel )
    goto LABEL_28;
  UILabel__set_text(decideBtnLabel, (System_String_o *)Master_object, 0);
  skipBtnLabel = this->fields.skipBtnLabel;
  Master_object = (QuestMessageMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10939/*"QUEST_MESSAGE_DLG_SKIP"*/, 0);
  if ( !skipBtnLabel
    || (UILabel__set_text(skipBtnLabel, (System_String_o *)Master_object, 0),
        cancelBtnLabel = this->fields.cancelBtnLabel,
        Master_object = (QuestMessageMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10923/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0),
        !cancelBtnLabel)
    || (UILabel__set_text(cancelBtnLabel, (System_String_o *)Master_object, 0),
        (Master_object = (QuestMessageMaster_o *)this->fields.messageLabel) == 0) )
  {
LABEL_28:
    sub_1C942F0(Master_object, v20);
  }
  v39 = 164;
  if ( this->fields.fontSizeForceChangeQuestId != questId )
    v39 = 192;
  UILabel__set_fontSize((UILabel_o *)Master_object, *(_DWORD *)((char *)&this->klass + v39), 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void QuestSkipConfirmDialog__SetButtonEvent(
        QuestSkipConfirmDialog_o *this,
        UnityEngine_GameObject_o *btnObj,
        EventDelegate_Callback_o *callback,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *Component_object; // x20
  void *monitor; // x21
  int32_t v10; // w2
  int v11; // w8

  if ( (byte_4D29531 & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C94098(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D29531 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)btnObj, 0, 0);
  if ( !v6 )
  {
    if ( !btnObj )
      goto LABEL_18;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 btnObj,
                                                 (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
    if ( v6 )
    {
      if ( Component_object )
      {
        monitor = Component_object[8].monitor;
        if ( monitor )
        {
          v10 = *((_DWORD *)monitor + 6);
          v11 = *((_DWORD *)monitor + 7) + 1;
          *((_DWORD *)monitor + 6) = 0;
          *((_DWORD *)monitor + 7) = v11;
          if ( v10 >= 1 )
          {
            System_Array__Clear(*((System_Array_o **)monitor + 2), 0, v10, 0);
            monitor = Component_object[8].monitor;
          }
          if ( !EventDelegate_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
          EventDelegate__Add((System_Collections_Generic_List_EventDelegate__o *)monitor, callback, 0);
          return;
        }
      }
LABEL_18:
      sub_1C942F0(v6, v7);
    }
  }
}


void QuestSkipConfirmDialog_ClickDelegate___ctor(
        QuestSkipConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC5498;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC5450;
}


System_IAsyncResult_o *QuestSkipConfirmDialog_ClickDelegate__BeginInvoke(
        QuestSkipConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isDecide;
  if ( (byte_4D29538 & 1) == 0 )
  {
    sub_1C94098(&bool_TypeInfo);
    byte_4D29538 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C9404C(this, v9, callback, object);
}


void QuestSkipConfirmDialog_ClickDelegate__EndInvoke(
        QuestSkipConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void QuestSkipConfirmDialog_ClickDelegate__Invoke(
        QuestSkipConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}