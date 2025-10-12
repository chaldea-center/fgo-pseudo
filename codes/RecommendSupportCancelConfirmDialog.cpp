void RecommendSupportCancelConfirmDialog___ctor(RecommendSupportCancelConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C33818 & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C33818 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void RecommendSupportCancelConfirmDialog__Awake(RecommendSupportCancelConfirmDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0);
}


void RecommendSupportCancelConfirmDialog__Close(
        RecommendSupportCancelConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C33815 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportCancelConfirmDialog_EndClose__);
    byte_4C33815 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_RecommendSupportCancelConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void RecommendSupportCancelConfirmDialog__EndClose(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  RecommendSupportCancelConfirmDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C32BC4(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void RecommendSupportCancelConfirmDialog__Init(RecommendSupportCancelConfirmDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C33813 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33813 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.currentSupportMemberTitleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.oldSupportMemberTitleLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0) )
  {
LABEL_10:
    sub_1C32E7C(titleLabel);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void RecommendSupportCancelConfirmDialog__OnClickCancel(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  RecommendSupportCancelConfirmDialog___c_c *v7; // x0
  System_Action_o *_9__23_0; // x20
  Il2CppObject *v9; // x21
  struct RecommendSupportCancelConfirmDialog___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C33817 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportCancelConfirmDialog_OnClickCancel__);
    sub_1C32C20(&Method_RecommendSupportCancelConfirmDialog___c__OnClickCancel_b__23_0__);
    sub_1C32C20(&RecommendSupportCancelConfirmDialog___c_TypeInfo);
    byte_4C33817 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RecommendSupportCancelConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportCancelConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_RecommendSupportCancelConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    RecommendSupportCancelConfirmDialog__ResultCallback(this, 0, v5);
    v7 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
    if ( !RecommendSupportCancelConfirmDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportCancelConfirmDialog___c_TypeInfo);
      v7 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
    }
    _9__23_0 = v7->static_fields->__9__23_0;
    if ( !_9__23_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__23_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(_9__23_0, v9, Method_RecommendSupportCancelConfirmDialog___c__OnClickCancel_b__23_0__, 0);
      static_fields = RecommendSupportCancelConfirmDialog___c_TypeInfo->static_fields;
      static_fields->__9__23_0 = _9__23_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v11, v12);
    }
    RecommendSupportCancelConfirmDialog__Close(this, _9__23_0, v6);
  }
}


void RecommendSupportCancelConfirmDialog__OnClickDecide(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  RecommendSupportCancelConfirmDialog___c_c *v7; // x0
  System_Action_o *_9__22_0; // x20
  Il2CppObject *v9; // x21
  struct RecommendSupportCancelConfirmDialog___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C33816 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportCancelConfirmDialog_OnClickDecide__);
    sub_1C32C20(&Method_RecommendSupportCancelConfirmDialog___c__OnClickDecide_b__22_0__);
    sub_1C32C20(&RecommendSupportCancelConfirmDialog___c_TypeInfo);
    byte_4C33816 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RecommendSupportCancelConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommendSupportCancelConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_RecommendSupportCancelConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    RecommendSupportCancelConfirmDialog__ResultCallback(this, 1, v5);
    v7 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
    if ( !RecommendSupportCancelConfirmDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportCancelConfirmDialog___c_TypeInfo);
      v7 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
    }
    _9__22_0 = v7->static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__22_0 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(_9__22_0, v9, Method_RecommendSupportCancelConfirmDialog___c__OnClickDecide_b__22_0__, 0);
      static_fields = RecommendSupportCancelConfirmDialog___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = _9__22_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v11, v12);
    }
    RecommendSupportCancelConfirmDialog__Close(this, _9__22_0, v6);
  }
}


void RecommendSupportCancelConfirmDialog__Open(
        RecommendSupportCancelConfirmDialog_o *this,
        RecommendSupportSelectControl_DialogResultCallBack_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x2
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  RecommendSupportListViewItemDraw_o *currentSupportMemberObject; // x20
  intptr_t m_CachedPtr; // x8
  __int64 v11; // x21
  __int64 klass_low; // x8
  RecommendSupportListViewItemDraw_o *oldSupportMemberObject; // x20
  intptr_t v14; // x8
  __int64 v15; // x21
  __int64 v16; // x8
  UILabel_o *currentSupportMemberTitleLabel; // x20
  UILabel_o *oldSupportMemberTitleLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UnityEngine_GameObject_o *v23; // x0
  System_Action_o *v24; // x20

  if ( (byte_4C33814 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_RecommendSupportCancelConfirmDialog__Open_b__18_0__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C32C20(&StringLiteral_11060/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_OLD_STATE"*/);
    sub_1C32C20(&StringLiteral_11059/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_MESSAGE"*/);
    sub_1C32C20(&StringLiteral_11057/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_CURRENT_STATE"*/);
    sub_1C32C20(&StringLiteral_11056/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_11061/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_TITLE"*/);
    sub_1C32C20(&StringLiteral_11058/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_DECIDE"*/);
    byte_4C33814 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      RecommendSupportCancelConfirmDialog__SetActiveInfo(this, 1, v6);
      this->fields.resultCallback = callback;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.resultCallback, (int32_t)callback, v7, v8);
      currentSupportMemberObject = this->fields.currentSupportMemberObject;
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( gameObject )
      {
        m_CachedPtr = gameObject[4].fields.m_CachedPtr;
        if ( m_CachedPtr )
        {
          v11 = *(_QWORD *)(m_CachedPtr + 16);
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
          if ( gameObject )
          {
            if ( v11 )
            {
              klass_low = SLODWORD(gameObject[5].klass);
              if ( (unsigned int)klass_low >= *(_DWORD *)(v11 + 24) )
                goto LABEL_35;
              if ( !currentSupportMemberObject )
                goto LABEL_34;
              RecommendSupportListViewItemDraw__SetConfirmItem(
                currentSupportMemberObject,
                *(RecommendSupportData_RecommendDeckData_o **)(v11 + 8 * klass_low + 32),
                0);
              oldSupportMemberObject = this->fields.oldSupportMemberObject;
              gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
              if ( !gameObject )
                goto LABEL_34;
              v14 = gameObject[4].fields.m_CachedPtr;
              if ( !v14 )
                goto LABEL_34;
              v15 = *(_QWORD *)(v14 + 24);
              gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
              if ( !gameObject || !v15 )
                goto LABEL_34;
              v16 = SLODWORD(gameObject[5].klass);
              if ( (unsigned int)v16 >= *(_DWORD *)(v15 + 24) )
LABEL_35:
                sub_1C32E84(gameObject);
              if ( oldSupportMemberObject )
              {
                RecommendSupportListViewItemDraw__SetConfirmItem(
                  oldSupportMemberObject,
                  *(RecommendSupportData_RecommendDeckData_o **)(v15 + 8 * v16 + 32),
                  0);
                gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                if ( gameObject )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                    if ( gameObject )
                    {
                      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                        if ( gameObject )
                        {
                          ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                            gameObject,
                            0,
                            1,
                            gameObject->klass[1]._1.implementedInterfaces);
                          gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                          if ( gameObject )
                          {
                            ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
                              gameObject,
                              0,
                              1,
                              gameObject->klass[1]._1.implementedInterfaces);
                            currentSupportMemberTitleLabel = this->fields.currentSupportMemberTitleLabel;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_11057/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_CURRENT_STATE"*/,
                                                                       0);
                            if ( currentSupportMemberTitleLabel )
                            {
                              UILabel__set_text(currentSupportMemberTitleLabel, (System_String_o *)gameObject, 0);
                              oldSupportMemberTitleLabel = this->fields.oldSupportMemberTitleLabel;
                              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_11060/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_OLD_STATE"*/,
                                                                         0);
                              if ( oldSupportMemberTitleLabel )
                              {
                                UILabel__set_text(oldSupportMemberTitleLabel, (System_String_o *)gameObject, 0);
                                titleLabel = this->fields.titleLabel;
                                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                           (System_String_o *)StringLiteral_11061/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_TITLE"*/,
                                                                           0);
                                if ( titleLabel )
                                {
                                  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
                                  messageLabel = this->fields.messageLabel;
                                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_11059/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_MESSAGE"*/,
                                                                             0);
                                  if ( messageLabel )
                                  {
                                    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
                                    decideLabel = this->fields.decideLabel;
                                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_11058/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_DECIDE"*/,
                                                                               0);
                                    if ( decideLabel )
                                    {
                                      UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
                                      cancelLabel = this->fields.cancelLabel;
                                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_11056/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_CANCEL"*/,
                                                                                 0);
                                      if ( cancelLabel )
                                      {
                                        UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
                                        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                                        if ( gameObject )
                                        {
                                          v23 = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)gameObject,
                                                  0);
                                          AndroidBackKeyManager__AddBackBtn(v23, 0);
                                          this->fields.state = 1;
                                          v24 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
                                          System_Action___ctor(
                                            v24,
                                            (Il2CppObject *)this,
                                            Method_RecommendSupportCancelConfirmDialog__Open_b__18_0__,
                                            0);
                                          BaseDialog__Open((BaseDialog_o *)this, v24, 1, 0, 0);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_34:
    sub_1C32E7C(gameObject);
  }
}


void RecommendSupportCancelConfirmDialog__ResultCallback(
        RecommendSupportCancelConfirmDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_resultCallback; // x0
  struct RecommendSupportSelectControl_DialogResultCallBack_o *v5; // x20
  struct RecommendSupportSelectControl_DialogResultCallBack_o *resultCallback; // t1

  resultCallback = this->fields.resultCallback;
  p_resultCallback = (CGThumbnailListItem_o *)&this->fields.resultCallback;
  v5 = resultCallback;
  if ( resultCallback )
  {
    p_resultCallback->klass = 0;
    sub_1C32BC4(p_resultCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)result,
      v5->fields.method);
  }
}


void RecommendSupportCancelConfirmDialog__SetActiveInfo(
        RecommendSupportCancelConfirmDialog_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0

  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_10;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0);
  if ( !messageLabel )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0);
  messageLabel = (UnityEngine_Component_o *)this->fields.currentMemberContainer;
  if ( !messageLabel )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0);
  messageLabel = (UnityEngine_Component_o *)this->fields.lastMemberContainer;
  if ( !messageLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0),
        (messageLabel = (UnityEngine_Component_o *)this->fields.currentSupportMemberTitleLabel) == 0)
    || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0),
        (messageLabel = (UnityEngine_Component_o *)this->fields.oldSupportMemberTitleLabel) == 0)
    || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0)) == 0 )
  {
LABEL_10:
    sub_1C32E7C(messageLabel);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0);
}


void RecommendSupportCancelConfirmDialog___Open_b__18_0(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void RecommendSupportCancelConfirmDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C33819 & 1) == 0 )
  {
    sub_1C32C20(&RecommendSupportCancelConfirmDialog___c_TypeInfo);
    byte_4C33819 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(RecommendSupportCancelConfirmDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportCancelConfirmDialog___c_TypeInfo->static_fields->__9 = (struct RecommendSupportCancelConfirmDialog___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)RecommendSupportCancelConfirmDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void RecommendSupportCancelConfirmDialog___c___ctor(
        RecommendSupportCancelConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportCancelConfirmDialog___c___OnClickCancel_b__23_0(
        RecommendSupportCancelConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportCancelConfirmDialog___c___OnClickDecide_b__22_0(
        RecommendSupportCancelConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  ;
}