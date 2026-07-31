void QuestSkipConfirmDialog___ctor(QuestSkipConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59352CE & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59352CE = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void QuestSkipConfirmDialog__Awake(QuestSkipConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *messageLabel; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct UILabel_o *v7; // x8

  if ( (byte_59352C6 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59352C6 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(messageLabel, 0, 0);
  if ( v5 )
  {
    v7 = this->fields.messageLabel;
    if ( !v7 )
      sub_21FFECC(v5, v6);
    this->fields.defaultFontSize = v7->fields.mFontSize;
  }
}


void QuestSkipConfirmDialog__Close(QuestSkipConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  QuestSkipConfirmDialog__Close_43404744(this, 0, v2);
}


void QuestSkipConfirmDialog__Close_43404744(
        QuestSkipConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *v10; // x20

  if ( (byte_59352C9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_QuestSkipConfirmDialog_EndClose__);
    byte_59352C9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_QuestSkipConfirmDialog_EndClose__, 0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v10, 0);
}


void QuestSkipConfirmDialog__EndClose(QuestSkipConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void QuestSkipConfirmDialog__OnClickClose(QuestSkipConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct QuestSkipConfirmDialog_ClickDelegate_o *decideFunc; // x8

  if ( (byte_59352CC & 1) == 0 )
  {
    sub_21FFC50(&Method_QuestSkipConfirmDialog_OnClickClose__);
    byte_59352CC = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_QuestSkipConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_QuestSkipConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_QuestSkipConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_59352CA & 1) == 0 )
  {
    sub_21FFC50(&Method_QuestSkipConfirmDialog_OnClickDecide__);
    byte_59352CA = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_QuestSkipConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_QuestSkipConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_QuestSkipConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_59352CB & 1) == 0 )
  {
    sub_21FFC50(&Method_QuestSkipConfirmDialog_OnClickSkip__);
    byte_59352CB = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_QuestSkipConfirmDialog_OnClickSkip__;
    if ( (*((_BYTE *)Method_QuestSkipConfirmDialog_OnClickSkip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_QuestSkipConfirmDialog_OnClickSkip__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_59352CD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_4818/*"ConfirmWindow/CancelButton"*/);
    sub_21FFC50(&StringLiteral_16227/*"Window/CancelButton"*/);
    byte_59352CD = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_16227/*"Window/CancelButton"*/, 0);
  v4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51910300(v4, (System_String_o *)StringLiteral_4818/*"ConfirmWindow/CancelButton"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void QuestSkipConfirmDialog__Open(
        QuestSkipConfirmDialog_o *this,
        int32_t questId,
        int32_t phase,
        QuestSkipConfirmDialog_ClickDelegate_o *delegateFunc,
        System_Action_o *skipFunc,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2
  QuestMessageMaster_o *Master_object; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t targetNum; // x23
  int32_t condType; // w21
  int32_t targetId; // w22
  UnityEngine_GameObject_o *decideBtn; // x21
  EventDelegate_Callback_o *v28; // x22
  QuestSkipConfirmDialog_o *v29; // x0
  const MethodInfo *v30; // x3
  UnityEngine_GameObject_o *skipBtn; // x21
  EventDelegate_Callback_o *v32; // x22
  QuestSkipConfirmDialog_o *v33; // x0
  const MethodInfo *v34; // x3
  UnityEngine_GameObject_o *cancelBtn; // x21
  EventDelegate_Callback_o *v36; // x22
  QuestSkipConfirmDialog_o *v37; // x0
  const MethodInfo *v38; // x3
  __int64 v39; // x1
  __int64 v40; // x2
  UILabel_o *decideBtnLabel; // x21
  UILabel_o *skipBtnLabel; // x21
  UILabel_o *cancelBtnLabel; // x21
  __int64 v44; // x8
  QuestMessageEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59352C7 & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_QuestMessageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_QuestSkipConfirmDialog_OnClickClose__);
    sub_21FFC50(&Method_QuestSkipConfirmDialog_OnClickDecide__);
    sub_21FFC50(&Method_QuestSkipConfirmDialog_OnClickSkip__);
    sub_21FFC50(&StringLiteral_11338/*"QUEST_MESSAGE_DLG_DECIDE"*/);
    sub_21FFC50(&StringLiteral_11337/*"QUEST_MESSAGE_DLG_CANCEL"*/);
    sub_21FFC50(&StringLiteral_11353/*"QUEST_MESSAGE_DLG_SKIP"*/);
    byte_59352C7 = 1;
  }
  entity = 0;
  this->fields.decideFunc = delegateFunc;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.decideFunc,
    (int32_t)delegateFunc,
    *(System_String_o **)&phase,
    (System_String_o *)delegateFunc,
    (int32_t)skipFunc,
    (int32_t)method,
    v6,
    v7);
  this->fields.skipCallbackFunc = skipFunc;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skipCallbackFunc,
    (int32_t)skipFunc,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19, v20);
  Master_object = (QuestMessageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_QuestMessageMaster___);
  if ( !Master_object )
    goto LABEL_28;
  Master_object = (QuestMessageMaster_o *)QuestMessageMaster__TryGetEntity(Master_object, &entity, questId, phase, 0, 0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_28;
  targetNum = entity->fields.targetNum;
  condType = entity->fields.condType;
  targetId = entity->fields.targetId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v22, v23);
  if ( !CondType__IsOpen(condType, targetId, targetNum, 0, 0, 0) )
  {
    Master_object = (QuestMessageMaster_o *)this->fields.skipBtn;
    if ( !Master_object )
      goto LABEL_28;
    Master_object = (QuestMessageMaster_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)Master_object,
                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
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
                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !Master_object )
      goto LABEL_28;
    v46.fields.r = 0.5;
    v46.fields.g = 0.5;
    v46.fields.b = 0.5;
    v46.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)Master_object, v46, 0);
  }
  decideBtn = this->fields.decideBtn;
  v28 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v28, (Il2CppObject *)this, (intptr_t)Method_QuestSkipConfirmDialog_OnClickDecide__, 0);
  QuestSkipConfirmDialog__SetButtonEvent(v29, decideBtn, v28, v30);
  skipBtn = this->fields.skipBtn;
  v32 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v32, (Il2CppObject *)this, (intptr_t)Method_QuestSkipConfirmDialog_OnClickSkip__, 0);
  QuestSkipConfirmDialog__SetButtonEvent(v33, skipBtn, v32, v34);
  cancelBtn = this->fields.cancelBtn;
  v36 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v36, (Il2CppObject *)this, (intptr_t)Method_QuestSkipConfirmDialog_OnClickClose__, 0);
  QuestSkipConfirmDialog__SetButtonEvent(v37, cancelBtn, v36, v38);
  if ( !entity )
    goto LABEL_28;
  Master_object = (QuestMessageMaster_o *)this->fields.messageLabel;
  if ( !Master_object )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)Master_object, entity->fields.message, 0);
  decideBtnLabel = this->fields.decideBtnLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39, v40);
  Master_object = (QuestMessageMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11338/*"QUEST_MESSAGE_DLG_DECIDE"*/, 0);
  if ( !decideBtnLabel )
    goto LABEL_28;
  UILabel__set_text(decideBtnLabel, (System_String_o *)Master_object, 0);
  skipBtnLabel = this->fields.skipBtnLabel;
  Master_object = (QuestMessageMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11353/*"QUEST_MESSAGE_DLG_SKIP"*/, 0);
  if ( !skipBtnLabel
    || (UILabel__set_text(skipBtnLabel, (System_String_o *)Master_object, 0),
        cancelBtnLabel = this->fields.cancelBtnLabel,
        Master_object = (QuestMessageMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_11337/*"QUEST_MESSAGE_DLG_CANCEL"*/, 0),
        !cancelBtnLabel)
    || (UILabel__set_text(cancelBtnLabel, (System_String_o *)Master_object, 0),
        (Master_object = (QuestMessageMaster_o *)this->fields.messageLabel) == 0) )
  {
LABEL_28:
    sub_21FFECC(Master_object, v22);
  }
  v44 = 192;
  if ( this->fields.fontSizeForceChangeQuestId == questId )
    v44 = 164;
  UILabel__set_fontSize((UILabel_o *)Master_object, *(_DWORD *)((char *)&this->klass + v44), 0);
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
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *Component_object; // x20
  System_Array_o **monitor; // x21
  __int64 v12; // x2
  int v13; // w8

  if ( (byte_59352C8 & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59352C8 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, btnObj, callback);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)btnObj, 0, 0);
  if ( !v6 )
  {
    if ( !btnObj )
      goto LABEL_18;
    Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 btnObj,
                                                 (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    v6 = UnityEngine_Object__op_Inequality(Component_object, 0, 0);
    if ( v6 )
    {
      if ( Component_object )
      {
        monitor = (System_Array_o **)Component_object[8].monitor;
        if ( monitor )
        {
          v12 = *((unsigned int *)monitor + 6);
          v13 = *((_DWORD *)monitor + 7) + 1;
          *((_DWORD *)monitor + 6) = 0;
          *((_DWORD *)monitor + 7) = v13;
          if ( (int)v12 >= 1 )
          {
            System_Array__Clear(monitor[2], 0, v12, 0);
            monitor = (System_Array_o **)Component_object[8].monitor;
          }
          if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v7, v12);
          EventDelegate__Add((System_Collections_Generic_List_EventDelegate__o *)monitor, callback, 0);
          return;
        }
      }
LABEL_18:
      sub_21FFECC(v6, v7);
    }
  }
}


void QuestSkipConfirmDialog_ClickDelegate___ctor(
        QuestSkipConfirmDialog_ClickDelegate_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF4D10;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FF4CC8;
}


System_IAsyncResult_o *QuestSkipConfirmDialog_ClickDelegate__BeginInvoke(
        QuestSkipConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void QuestSkipConfirmDialog_ClickDelegate__EndInvoke(
        QuestSkipConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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