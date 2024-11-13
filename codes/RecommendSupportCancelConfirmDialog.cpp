void __fastcall RecommendSupportCancelConfirmDialog___ctor(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12321 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B12321 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B1231E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_RecommendSupportCancelConfirmDialog_EndClose__, v10, v11);
    byte_4B1231E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_RecommendSupportCancelConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall RecommendSupportCancelConfirmDialog__EndClose(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  RecommendSupportCancelConfirmDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall RecommendSupportCancelConfirmDialog__Init(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B1231C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B1231C = 1;
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
    sub_1BCAA3C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall RecommendSupportCancelConfirmDialog__OnClickCancel(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x3
  RecommendSupportCancelConfirmDialog___c_c *v16; // x0
  System_Action_o *_9__23_0; // x20
  Il2CppObject *v18; // x21
  struct RecommendSupportCancelConfirmDialog___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B12320 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportCancelConfirmDialog_OnClickCancel__, v4, v5);
    sub_1BCA7E0(&Method_RecommendSupportCancelConfirmDialog___c__OnClickCancel_b__23_0__, v6, v7);
    sub_1BCA7E0(&RecommendSupportCancelConfirmDialog___c_TypeInfo, v8, v9);
    byte_4B12320 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v10 = Method_RecommendSupportCancelConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_RecommendSupportCancelConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportCancelConfirmDialog_OnClickCancel__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 1, 0LL);
    RecommendSupportCancelConfirmDialog__ResultCallback(this, 0, v12);
    v16 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
    if ( !RecommendSupportCancelConfirmDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportCancelConfirmDialog___c_TypeInfo, v13);
      v16 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
    }
    _9__23_0 = v16->static_fields->__9__23_0;
    if ( !_9__23_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16, v13);
        v16 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__23_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
      System_Action___ctor(_9__23_0, v18, Method_RecommendSupportCancelConfirmDialog___c__OnClickCancel_b__23_0__, 0LL);
      static_fields = RecommendSupportCancelConfirmDialog___c_TypeInfo->static_fields;
      static_fields->__9__23_0 = _9__23_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__23_0,
        (int64_t)_9__23_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    RecommendSupportCancelConfirmDialog__Close(this, _9__23_0, v14);
  }
}


void __fastcall RecommendSupportCancelConfirmDialog__OnClickDecide(
        RecommendSupportCancelConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x3
  RecommendSupportCancelConfirmDialog___c_c *v16; // x0
  System_Action_o *_9__22_0; // x20
  Il2CppObject *v18; // x21
  struct RecommendSupportCancelConfirmDialog___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B1231F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_RecommendSupportCancelConfirmDialog_OnClickDecide__, v4, v5);
    sub_1BCA7E0(&Method_RecommendSupportCancelConfirmDialog___c__OnClickDecide_b__22_0__, v6, v7);
    sub_1BCA7E0(&RecommendSupportCancelConfirmDialog___c_TypeInfo, v8, v9);
    byte_4B1231F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v10 = Method_RecommendSupportCancelConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_RecommendSupportCancelConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_RecommendSupportCancelConfirmDialog_OnClickDecide__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 8, 0LL);
    RecommendSupportCancelConfirmDialog__ResultCallback(this, 1, v12);
    v16 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
    if ( !RecommendSupportCancelConfirmDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportCancelConfirmDialog___c_TypeInfo, v13);
      v16 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
    }
    _9__22_0 = v16->static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16, v13);
        v16 = RecommendSupportCancelConfirmDialog___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__22_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
      System_Action___ctor(_9__22_0, v18, Method_RecommendSupportCancelConfirmDialog___c__OnClickDecide_b__22_0__, 0LL);
      static_fields = RecommendSupportCancelConfirmDialog___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = _9__22_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
        (int64_t)_9__22_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    RecommendSupportCancelConfirmDialog__Close(this, _9__22_0, v14);
  }
}


void __fastcall RecommendSupportCancelConfirmDialog__Open(
        RecommendSupportCancelConfirmDialog_o *this,
        RecommendSupportSelectControl_DialogResultCallBack_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  RecommendSupportListViewItemDraw_o *currentSupportMemberObject; // x20
  __int64 v33; // x8
  __int64 v34; // x21
  __int64 klass_low; // x8
  RecommendSupportListViewItemDraw_o *oldSupportMemberObject; // x20
  __int64 v37; // x8
  __int64 v38; // x21
  __int64 v39; // x8
  __int64 v40; // x1
  UILabel_o *currentSupportMemberTitleLabel; // x20
  UILabel_o *oldSupportMemberTitleLabel; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UnityEngine_GameObject_o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  System_Action_o *v51; // x20

  if ( (byte_4B1231D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_RecommendSupportCancelConfirmDialog__Open_b__18_0__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_11174/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_OLD_STATE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_11173/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_MESSAGE"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_11171/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_CURRENT_STATE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11170/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_CANCEL"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11175/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_TITLE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_11172/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_DECIDE"*/, v21, v22);
    byte_4B1231D = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      RecommendSupportCancelConfirmDialog__SetActiveInfo(this, 1, v25);
      this->fields.resultCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.resultCallback,
        (int64_t)callback,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      currentSupportMemberObject = this->fields.currentSupportMemberObject;
      gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
      if ( gameObject )
      {
        v33 = *(_QWORD *)&gameObject[4].fields.m_CachedPtr;
        if ( v33 )
        {
          v34 = *(_QWORD *)(v33 + 16);
          gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
          if ( gameObject )
          {
            if ( v34 )
            {
              klass_low = SLODWORD(gameObject[5].klass);
              if ( (unsigned int)klass_low >= *(_DWORD *)(v34 + 24) )
                goto LABEL_35;
              if ( !currentSupportMemberObject )
                goto LABEL_34;
              RecommendSupportListViewItemDraw__SetConfirmItem(
                currentSupportMemberObject,
                *(RecommendSupportData_RecommendDeckData_o **)(v34 + 8 * klass_low + 32),
                0LL);
              oldSupportMemberObject = this->fields.oldSupportMemberObject;
              gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
              if ( !gameObject )
                goto LABEL_34;
              v37 = *(_QWORD *)&gameObject[4].fields.m_CachedPtr;
              if ( !v37 )
                goto LABEL_34;
              v38 = *(_QWORD *)(v37 + 24);
              gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
              if ( !gameObject || !v38 )
                goto LABEL_34;
              v39 = SLODWORD(gameObject[5].klass);
              if ( (unsigned int)v39 >= *(_DWORD *)(v38 + 24) )
LABEL_35:
                sub_1BCAA44(gameObject, v24);
              if ( oldSupportMemberObject )
              {
                RecommendSupportListViewItemDraw__SetConfirmItem(
                  oldSupportMemberObject,
                  *(RecommendSupportData_RecommendDeckData_o **)(v38 + 8 * v39 + 32),
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
                              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v40);
                            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_11171/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_CURRENT_STATE"*/,
                                                                       0LL);
                            if ( currentSupportMemberTitleLabel )
                            {
                              UILabel__set_text(currentSupportMemberTitleLabel, (System_String_o *)gameObject, 0LL);
                              oldSupportMemberTitleLabel = this->fields.oldSupportMemberTitleLabel;
                              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_11174/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_OLD_STATE"*/,
                                                                         0LL);
                              if ( oldSupportMemberTitleLabel )
                              {
                                UILabel__set_text(oldSupportMemberTitleLabel, (System_String_o *)gameObject, 0LL);
                                titleLabel = this->fields.titleLabel;
                                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                           (System_String_o *)StringLiteral_11175/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_TITLE"*/,
                                                                           0LL);
                                if ( titleLabel )
                                {
                                  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
                                  messageLabel = this->fields.messageLabel;
                                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                             (System_String_o *)StringLiteral_11173/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_MESSAGE"*/,
                                                                             0LL);
                                  if ( messageLabel )
                                  {
                                    UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
                                    decideLabel = this->fields.decideLabel;
                                    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_11172/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_DECIDE"*/,
                                                                               0LL);
                                    if ( decideLabel )
                                    {
                                      UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
                                      cancelLabel = this->fields.cancelLabel;
                                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                 (System_String_o *)StringLiteral_11170/*"RECOMMEND_SUPPORT_SELECT_CANCEL_CONFIRM_CANCEL"*/,
                                                                                 0LL);
                                      if ( cancelLabel )
                                      {
                                        UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                                        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                                        if ( gameObject )
                                        {
                                          v47 = UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)gameObject,
                                                  0LL);
                                          AndroidBackKeyManager__AddBackBtn(v47, 0LL);
                                          this->fields.state = 1;
                                          v51 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v48, v49, v50);
                                          System_Action___ctor(
                                            v51,
                                            (Il2CppObject *)this,
                                            Method_RecommendSupportCancelConfirmDialog__Open_b__18_0__,
                                            0LL);
                                          BaseDialog__Open((BaseDialog_o *)this, v51, 1, 0LL);
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
    sub_1BCAA3C(gameObject, v24);
  }
}


void __fastcall RecommendSupportCancelConfirmDialog__ResultCallback(
        RecommendSupportCancelConfirmDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_resultCallback; // x0
  struct RecommendSupportSelectControl_DialogResultCallBack_o *v9; // x20
  struct RecommendSupportSelectControl_DialogResultCallBack_o *resultCallback; // t1

  resultCallback = this->fields.resultCallback;
  p_resultCallback = (PartyOrganizationUtility_o *)&this->fields.resultCallback;
  v9 = resultCallback;
  if ( resultCallback )
  {
    p_resultCallback->klass = 0LL;
    sub_1BCA784(p_resultCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v9->fields.extra_arg);
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
    sub_1BCAA3C(messageLabel, active);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12322 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportCancelConfirmDialog___c_TypeInfo, v1, v2);
    byte_4B12322 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RecommendSupportCancelConfirmDialog___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RecommendSupportCancelConfirmDialog___c_TypeInfo->static_fields->__9 = (struct RecommendSupportCancelConfirmDialog___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecommendSupportCancelConfirmDialog___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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