void __fastcall RecommendSupportCancelConfirmDialog___ctor(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A1BCD2 & 1) == 0 )
  {
    sub_1B715CC(&BaseDialog_TypeInfo, method);
    byte_4A1BCD2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommendSupportCancelConfirmDialog__Awake(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommendSupportCancelConfirmDialog__Close(
        RecommendSupportCancelConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4A1BCCF & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, callback);
    sub_1B715CC(&Method_RecommendSupportCancelConfirmDialog_EndClose__, v6);
    byte_4A1BCCF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_RecommendSupportCancelConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall RecommendSupportCancelConfirmDialog__EndClose(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  RecommendSupportCancelConfirmDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B71570(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall RecommendSupportCancelConfirmDialog__Init(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4A1BCCD & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_1/*""*/, method);
    byte_4A1BCCD = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_10;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.currentSupportMemberTitleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.oldSupportMemberTitleLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL) )
  {
LABEL_10:
    sub_1B71828(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommendSupportCancelConfirmDialog__OnClickCancel(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  RecommendSupportCancelConfirmDialog___c_c *v10; // x0
  System_Action_o *_9__23_0; // x20
  Il2CppObject *v12; // x21
  struct RecommendSupportCancelConfirmDialog___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A1BCD1 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_RecommendSupportCancelConfirmDialog_OnClickCancel__, v3);
    sub_1B715CC(&Method_RecommendSupportCancelConfirmDialog___c__OnClickCancel_b__23_0__, v4);
    sub_1B715CC(&RecommendSupportCancelConfirmDialog___c_TypeInfo, v5);
    byte_4A1BCD1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v6 = Method_RecommendSupportCancelConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportCancelConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B715E4(Method_RecommendSupportCancelConfirmDialog_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B715B0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
    RecommendSupportCancelConfirmDialog__ResultCallback(this, 0, v8);
    v10 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
    if ( !RecommendSupportCancelConfirmDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportCancelConfirmDialog___c_TypeInfo);
      v10 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
    }
    _9__23_0 = v10->static_fields->__9__23_0;
    if ( !_9__23_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__23_0 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(_9__23_0, v12, Method_RecommendSupportCancelConfirmDialog___c__OnClickCancel_b__23_0__, 0LL);
      static_fields = RecommendSupportCancelConfirmDialog___c_TypeInfo->static_fields;
      static_fields->__9__23_0 = _9__23_0;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v14, v15);
    }
    RecommendSupportCancelConfirmDialog__Close(this, _9__23_0, v9);
  }
}


void __fastcall RecommendSupportCancelConfirmDialog__OnClickDecide(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  RecommendSupportCancelConfirmDialog___c_c *v10; // x0
  System_Action_o *_9__22_0; // x20
  Il2CppObject *v12; // x21
  struct RecommendSupportCancelConfirmDialog___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A1BCD0 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_RecommendSupportCancelConfirmDialog_OnClickDecide__, v3);
    sub_1B715CC(&Method_RecommendSupportCancelConfirmDialog___c__OnClickDecide_b__22_0__, v4);
    sub_1B715CC(&RecommendSupportCancelConfirmDialog___c_TypeInfo, v5);
    byte_4A1BCD0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v6 = Method_RecommendSupportCancelConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommendSupportCancelConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B715E4(Method_RecommendSupportCancelConfirmDialog_OnClickDecide__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B715B0(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0LL);
    RecommendSupportCancelConfirmDialog__ResultCallback(this, 1, v8);
    v10 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
    if ( !RecommendSupportCancelConfirmDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportCancelConfirmDialog___c_TypeInfo);
      v10 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
    }
    _9__22_0 = v10->static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__22_0 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(_9__22_0, v12, Method_RecommendSupportCancelConfirmDialog___c__OnClickDecide_b__22_0__, 0LL);
      static_fields = RecommendSupportCancelConfirmDialog___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = _9__22_0;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v14, v15);
    }
    RecommendSupportCancelConfirmDialog__Close(this, _9__22_0, v9);
  }
}


void __fastcall RecommendSupportCancelConfirmDialog__Open(
        RecommendSupportCancelConfirmDialog_o *this,
        RecommendSupportSelectControl_DialogResultCallBack_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  int32_t v17; // w2
  int32_t v18; // w3
  RecommendSupportListViewItemDraw_o *currentSupportMemberObject; // x20
  __int64 v20; // x8
  __int64 v21; // x21
  __int64 klass_low; // x8
  RecommendSupportListViewItemDraw_o *oldSupportMemberObject; // x20
  __int64 v24; // x8
  __int64 v25; // x21
  __int64 v26; // x8
  UILabel_o *currentSupportMemberTitleLabel; // x20
  UILabel_o *oldSupportMemberTitleLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UnityEngine_GameObject_o *v33; // x0
  System_Action_o *v34; // x20

  if ( (byte_4A1BCCE & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, callback);
    sub_1B715CC(&LocalizationManager_TypeInfo, v5);
    sub_1B715CC(&Method_RecommendSupportCancelConfirmDialog__Open_b__18_0__, v6);
    sub_1B715CC(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v7);
    sub_1B715CC(&StringLiteral_10997/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_OLD_STATE"*/, v8);
    sub_1B715CC(&StringLiteral_10996/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_MESSAGE"*/, v9);
    sub_1B715CC(&StringLiteral_10994/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_CURRENT_STATE"*/, v10);
    sub_1B715CC(&StringLiteral_10993/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_CANCEL"*/, v11);
    sub_1B715CC(&StringLiteral_10998/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_TITLE"*/, v12);
    sub_1B715CC(&StringLiteral_10995/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_DECIDE"*/, v13);
    byte_4A1BCCE = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      RecommendSupportCancelConfirmDialog__SetActiveInfo(this, 1, v16);
      this->fields.resultCallback = callback;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.resultCallback, (int32_t)callback, v17, v18);
      currentSupportMemberObject = this->fields.currentSupportMemberObject;
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( gameObject )
      {
        v20 = *(_QWORD *)&gameObject[4].fields.m_CachedPtr;
        if ( v20 )
        {
          v21 = *(_QWORD *)(v20 + 16);
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
          if ( gameObject )
          {
            if ( v21 )
            {
              klass_low = SLODWORD(gameObject[5].klass);
              if ( (unsigned int)klass_low >= *(_DWORD *)(v21 + 24) )
                goto LABEL_35;
              if ( !currentSupportMemberObject )
                goto LABEL_34;
              RecommendSupportListViewItemDraw__SetConfirmItem(
                currentSupportMemberObject,
                *(RecommendSupportData_RecommendDeckData_o **)(v21 + 8 * klass_low + 32),
                0LL);
              oldSupportMemberObject = this->fields.oldSupportMemberObject;
              gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
              if ( !gameObject )
                goto LABEL_34;
              v24 = *(_QWORD *)&gameObject[4].fields.m_CachedPtr;
              if ( !v24 )
                goto LABEL_34;
              v25 = *(_QWORD *)(v24 + 24);
              gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
              if ( !gameObject || !v25 )
                goto LABEL_34;
              v26 = SLODWORD(gameObject[5].klass);
              if ( (unsigned int)v26 >= *(_DWORD *)(v25 + 24) )
LABEL_35:
                sub_1B71830(gameObject, v15);
              if ( oldSupportMemberObject )
              {
                RecommendSupportListViewItemDraw__SetConfirmItem(
                  oldSupportMemberObject,
                  *(RecommendSupportData_RecommendDeckData_o **)(v25 + 8 * v26 + 32),
                  0LL);
                gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                if ( gameObject )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                  if ( gameObject )
                  {
                    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                    if ( gameObject )
                    {
                      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                      if ( gameObject )
                      {
                        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
                        if ( gameObject )
                        {
                          ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                            gameObject,
                            0LL,
                            1LL,
                            gameObject->klass[1]._1.interfaceOffsets);
                          gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                          if ( gameObject )
                          {
                            ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
                              gameObject,
                              0LL,
                              1LL,
                              gameObject->klass[1]._1.interfaceOffsets);
                            currentSupportMemberTitleLabel = this->fields.currentSupportMemberTitleLabel;
                            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_10994/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_CURRENT_STATE"*/,
                                                                       0LL);
                            if ( currentSupportMemberTitleLabel )
                            {
                              UILabel__set_text(currentSupportMemberTitleLabel, (System_String_o *)gameObject, 0LL);
                              oldSupportMemberTitleLabel = this->fields.oldSupportMemberTitleLabel;
                              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_10997/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_OLD_STATE"*/,
                                                                         0LL);
                              if ( oldSupportMemberTitleLabel )
                              {
                                UILabel__set_text(oldSupportMemberTitleLabel, (System_String_o *)gameObject, 0LL);
                                titleLabel = this->fields.titleLabel;
                                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                           (System_String_o *)StringLiteral_10998/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_TITLE"*/,
                                                                           0LL);
                                if ( titleLabel )
                                {
                                  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
                                  messageLabel = this->fields.messageLabel;
                                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_10996/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_MESSAGE"*/,
                                                                             0LL);
                                  if ( messageLabel )
                                  {
                                    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
                                    decideLabel = this->fields.decideLabel;
                                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_10995/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_DECIDE"*/,
                                                                               0LL);
                                    if ( decideLabel )
                                    {
                                      UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
                                      cancelLabel = this->fields.cancelLabel;
                                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_10993/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_CANCEL"*/,
                                                                                 0LL);
                                      if ( cancelLabel )
                                      {
                                        UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                                        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                                        if ( gameObject )
                                        {
                                          v33 = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)gameObject,
                                                  0LL);
                                          AndroidBackKeyManager__AddBackBtn(v33, 0LL);
                                          this->fields.state = 1;
                                          v34 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
                                          System_Action___ctor(
                                            v34,
                                            (Il2CppObject *)this,
                                            Method_RecommendSupportCancelConfirmDialog__Open_b__18_0__,
                                            0LL);
                                          BaseDialog__Open((BaseDialog_o *)this, v34, 1, 0LL);
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
    sub_1B71828(gameObject, v15);
  }
}


void __fastcall RecommendSupportCancelConfirmDialog__ResultCallback(
        RecommendSupportCancelConfirmDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_resultCallback; // x0
  struct RecommendSupportSelectControl_DialogResultCallBack_o *v5; // x20
  struct RecommendSupportSelectControl_DialogResultCallBack_o *resultCallback; // t1

  resultCallback = this->fields.resultCallback;
  p_resultCallback = (ServantStatusBattleListViewItem_o *)&this->fields.resultCallback;
  v5 = resultCallback;
  if ( resultCallback )
  {
    p_resultCallback->klass = 0LL;
    sub_1B71570(p_resultCallback, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportCancelConfirmDialog__SetActiveInfo(
        RecommendSupportCancelConfirmDialog_o *this,
        bool active,
        const MethodInfo *method)
{
  UnityEngine_Component_o *messageLabel; // x0

  messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_10;
  messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.currentMemberContainer;
  if ( !messageLabel )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0LL);
  messageLabel = (UnityEngine_Component_o *)this->fields.lastMemberContainer;
  if ( !messageLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0LL),
        (messageLabel = (UnityEngine_Component_o *)this->fields.currentSupportMemberTitleLabel) == 0LL)
    || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0LL),
        (messageLabel = (UnityEngine_Component_o *)this->fields.oldSupportMemberTitleLabel) == 0LL)
    || (messageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(messageLabel, 0LL)) == 0LL )
  {
LABEL_10:
    sub_1B71828(messageLabel, active);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, active, 0LL);
}


void __fastcall RecommendSupportCancelConfirmDialog___Open_b__18_0(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall RecommendSupportCancelConfirmDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A1BCD3 & 1) == 0 )
  {
    sub_1B715CC(&RecommendSupportCancelConfirmDialog___c_TypeInfo, v1);
    byte_4A1BCD3 = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(RecommendSupportCancelConfirmDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportCancelConfirmDialog___c_TypeInfo->static_fields->__9 = (struct RecommendSupportCancelConfirmDialog___c_o *)v2;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)RecommendSupportCancelConfirmDialog___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall RecommendSupportCancelConfirmDialog___c___ctor(
        RecommendSupportCancelConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportCancelConfirmDialog___c___OnClickCancel_b__23_0(
        RecommendSupportCancelConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportCancelConfirmDialog___c___OnClickDecide_b__22_0(
        RecommendSupportCancelConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  ;
}