void __fastcall RecommendSupportCancelConfirmDialog___ctor(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A57343 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A57343 = 1;
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
  System_Action_o *v6; // x20

  if ( (byte_4A57340 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportCancelConfirmDialog_EndClose__);
    byte_4A57340 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_RecommendSupportCancelConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
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

  if ( (byte_4A5733E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5733E = 1;
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
    sub_1B8880C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommendSupportCancelConfirmDialog__OnClickCancel(
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
  int32_t v12; // w3

  if ( (byte_4A57342 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportCancelConfirmDialog_OnClickCancel__);
    sub_1B885B0(&Method_RecommendSupportCancelConfirmDialog___c__OnClickCancel_b__23_0__);
    sub_1B885B0(&RecommendSupportCancelConfirmDialog___c_TypeInfo);
    byte_4A57342 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RecommendSupportCancelConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportCancelConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportCancelConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
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
      _9__23_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(_9__23_0, v9, Method_RecommendSupportCancelConfirmDialog___c__OnClickCancel_b__23_0__, 0LL);
      static_fields = RecommendSupportCancelConfirmDialog___c_TypeInfo->static_fields;
      static_fields->__9__23_0 = _9__23_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__23_0, (int32_t)_9__23_0, v11, v12);
    }
    RecommendSupportCancelConfirmDialog__Close(this, _9__23_0, v6);
  }
}


void __fastcall RecommendSupportCancelConfirmDialog__OnClickDecide(
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
  int32_t v12; // w3

  if ( (byte_4A57341 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportCancelConfirmDialog_OnClickDecide__);
    sub_1B885B0(&Method_RecommendSupportCancelConfirmDialog___c__OnClickDecide_b__22_0__);
    sub_1B885B0(&RecommendSupportCancelConfirmDialog___c_TypeInfo);
    byte_4A57341 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_RecommendSupportCancelConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommendSupportCancelConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_RecommendSupportCancelConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
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
      _9__22_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(_9__22_0, v9, Method_RecommendSupportCancelConfirmDialog___c__OnClickDecide_b__22_0__, 0LL);
      static_fields = RecommendSupportCancelConfirmDialog___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = _9__22_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v11, v12);
    }
    RecommendSupportCancelConfirmDialog__Close(this, _9__22_0, v6);
  }
}


void __fastcall RecommendSupportCancelConfirmDialog__Open(
        RecommendSupportCancelConfirmDialog_o *this,
        RecommendSupportSelectControl_DialogResultCallBack_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32_t v8; // w2
  int32_t v9; // w3
  RecommendSupportListViewItemDraw_o *currentSupportMemberObject; // x20
  __int64 v11; // x8
  __int64 v12; // x21
  __int64 klass_low; // x8
  RecommendSupportListViewItemDraw_o *oldSupportMemberObject; // x20
  __int64 v15; // x8
  __int64 v16; // x21
  __int64 v17; // x8
  UILabel_o *currentSupportMemberTitleLabel; // x20
  UILabel_o *oldSupportMemberTitleLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UnityEngine_GameObject_o *v24; // x0
  System_Action_o *v25; // x20

  if ( (byte_4A5733F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportCancelConfirmDialog__Open_b__18_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1B885B0(&StringLiteral_11037/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_OLD_STATE"*/);
    sub_1B885B0(&StringLiteral_11036/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_11034/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_CURRENT_STATE"*/);
    sub_1B885B0(&StringLiteral_11033/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_CANCEL"*/);
    sub_1B885B0(&StringLiteral_11038/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_TITLE"*/);
    sub_1B885B0(&StringLiteral_11035/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_DECIDE"*/);
    byte_4A5733F = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      RecommendSupportCancelConfirmDialog__SetActiveInfo(this, 1, v7);
      this->fields.resultCallback = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resultCallback, (int32_t)callback, v8, v9);
      currentSupportMemberObject = this->fields.currentSupportMemberObject;
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( gameObject )
      {
        v11 = *(_QWORD *)&gameObject[4].fields.m_CachedPtr;
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 16);
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
          if ( gameObject )
          {
            if ( v12 )
            {
              klass_low = SLODWORD(gameObject[5].klass);
              if ( (unsigned int)klass_low >= *(_DWORD *)(v12 + 24) )
                goto LABEL_35;
              if ( !currentSupportMemberObject )
                goto LABEL_34;
              RecommendSupportListViewItemDraw__SetConfirmItem(
                currentSupportMemberObject,
                *(RecommendSupportData_RecommendDeckData_o **)(v12 + 8 * klass_low + 32),
                0LL);
              oldSupportMemberObject = this->fields.oldSupportMemberObject;
              gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
              if ( !gameObject )
                goto LABEL_34;
              v15 = *(_QWORD *)&gameObject[4].fields.m_CachedPtr;
              if ( !v15 )
                goto LABEL_34;
              v16 = *(_QWORD *)(v15 + 24);
              gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
              if ( !gameObject || !v16 )
                goto LABEL_34;
              v17 = SLODWORD(gameObject[5].klass);
              if ( (unsigned int)v17 >= *(_DWORD *)(v16 + 24) )
LABEL_35:
                sub_1B88814(gameObject, v6);
              if ( oldSupportMemberObject )
              {
                RecommendSupportListViewItemDraw__SetConfirmItem(
                  oldSupportMemberObject,
                  *(RecommendSupportData_RecommendDeckData_o **)(v16 + 8 * v17 + 32),
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
                                                                       (System_String_o *)StringLiteral_11034/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_CURRENT_STATE"*/,
                                                                       0LL);
                            if ( currentSupportMemberTitleLabel )
                            {
                              UILabel__set_text(currentSupportMemberTitleLabel, (System_String_o *)gameObject, 0LL);
                              oldSupportMemberTitleLabel = this->fields.oldSupportMemberTitleLabel;
                              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_11037/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_OLD_STATE"*/,
                                                                         0LL);
                              if ( oldSupportMemberTitleLabel )
                              {
                                UILabel__set_text(oldSupportMemberTitleLabel, (System_String_o *)gameObject, 0LL);
                                titleLabel = this->fields.titleLabel;
                                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                           (System_String_o *)StringLiteral_11038/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_TITLE"*/,
                                                                           0LL);
                                if ( titleLabel )
                                {
                                  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
                                  messageLabel = this->fields.messageLabel;
                                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_11036/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_MESSAGE"*/,
                                                                             0LL);
                                  if ( messageLabel )
                                  {
                                    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
                                    decideLabel = this->fields.decideLabel;
                                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_11035/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_DECIDE"*/,
                                                                               0LL);
                                    if ( decideLabel )
                                    {
                                      UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
                                      cancelLabel = this->fields.cancelLabel;
                                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_11033/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_CANCEL"*/,
                                                                                 0LL);
                                      if ( cancelLabel )
                                      {
                                        UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                                        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                                        if ( gameObject )
                                        {
                                          v24 = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)gameObject,
                                                  0LL);
                                          AndroidBackKeyManager__AddBackBtn(v24, 0LL);
                                          this->fields.state = 1;
                                          v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                                          System_Action___ctor(
                                            v25,
                                            (Il2CppObject *)this,
                                            Method_RecommendSupportCancelConfirmDialog__Open_b__18_0__,
                                            0LL);
                                          BaseDialog__Open((BaseDialog_o *)this, v25, 1, 0LL);
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
    sub_1B8880C(gameObject, v6);
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
    sub_1B88554(p_resultCallback, 0, (int32_t)method, v3);
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
    sub_1B8880C(messageLabel, active);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57344 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportCancelConfirmDialog___c_TypeInfo);
    byte_4A57344 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(RecommendSupportCancelConfirmDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RecommendSupportCancelConfirmDialog___c_TypeInfo->static_fields->__9 = (struct RecommendSupportCancelConfirmDialog___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RecommendSupportCancelConfirmDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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