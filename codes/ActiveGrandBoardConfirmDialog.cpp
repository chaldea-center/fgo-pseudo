void ActiveGrandBoardConfirmDialog___ctor(ActiveGrandBoardConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0
  struct GrandServantListServantFaceIcon_array *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v13; // x2

  if ( (byte_5933CA7 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&BaseDialog_TypeInfo);
    sub_21FFC50(&GrandServantListServantFaceIcon___TypeInfo);
    byte_5933CA7 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  v5 = (struct GrandServantListServantFaceIcon_array *)sub_21FFD10(
                                                         GrandServantListServantFaceIcon___TypeInfo,
                                                         (unsigned int)(v4->static_fields->DeckMemberMax - 1));
  this->fields.faceIcons = v5;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.faceIcons, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, v12, v13);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ActiveGrandBoardConfirmDialog__Awake(ActiveGrandBoardConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UILabel_o *titleLabel; // x20
  System_String_o *cancelBtn; // x0
  __int64 v7; // x1
  UILabel_o *messageLabel1; // x20
  UILabel_o *messageLabel2; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_5933CA3 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11326/*"QUEST_CONFIRM_START"*/);
    sub_21FFC50(&StringLiteral_10495/*"PARTY_ORGANIZATION_ACTIVE_GRAND_BOARD_CONFIRM_MESSAGE_2"*/);
    sub_21FFC50(&StringLiteral_10494/*"PARTY_ORGANIZATION_ACTIVE_GRAND_BOARD_CONFIRM_MESSAGE_1"*/);
    sub_21FFC50(&StringLiteral_10496/*"PARTY_ORGANIZATION_ACTIVE_GRAND_BOARD_CONFIRM_TITLE"*/);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    byte_5933CA3 = 1;
  }
  BaseDialog__Awake((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3, v4);
  cancelBtn = LocalizationManager__Get((System_String_o *)StringLiteral_10496/*"PARTY_ORGANIZATION_ACTIVE_GRAND_BOARD_CONFIRM_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, cancelBtn, 0);
  messageLabel1 = this->fields.messageLabel1;
  cancelBtn = LocalizationManager__Get((System_String_o *)StringLiteral_10494/*"PARTY_ORGANIZATION_ACTIVE_GRAND_BOARD_CONFIRM_MESSAGE_1"*/, 0);
  if ( !messageLabel1 )
    goto LABEL_12;
  UILabel__set_text(messageLabel1, cancelBtn, 0);
  messageLabel2 = this->fields.messageLabel2;
  cancelBtn = LocalizationManager__Get((System_String_o *)StringLiteral_10495/*"PARTY_ORGANIZATION_ACTIVE_GRAND_BOARD_CONFIRM_MESSAGE_2"*/, 0);
  if ( !messageLabel2 )
    goto LABEL_12;
  UILabel__set_text(messageLabel2, cancelBtn, 0);
  decideLabel = this->fields.decideLabel;
  cancelBtn = LocalizationManager__Get((System_String_o *)StringLiteral_11326/*"QUEST_CONFIRM_START"*/, 0);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, cancelBtn, 0),
        cancelLabel = this->fields.cancelLabel,
        cancelBtn = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, cancelBtn, 0), (cancelBtn = (System_String_o *)this->fields.cancelBtn) == 0) )
  {
LABEL_12:
    sub_21FFECC(cancelBtn, v7);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cancelBtn, 0);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0);
}


void ActiveGrandBoardConfirmDialog__OnClickCancel(ActiveGrandBoardConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_5933CA6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ActiveGrandBoardConfirmDialog_OnClickCancel__);
    sub_21FFC50(&Method_ActiveGrandBoardConfirmDialog__OnClickCancel_b__12_0__);
    byte_5933CA6 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_ActiveGrandBoardConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ActiveGrandBoardConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ActiveGrandBoardConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_ActiveGrandBoardConfirmDialog__OnClickCancel_b__12_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void ActiveGrandBoardConfirmDialog__OnClickDecide(ActiveGrandBoardConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_5933CA5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ActiveGrandBoardConfirmDialog_OnClickDecide__);
    sub_21FFC50(&Method_ActiveGrandBoardConfirmDialog__OnClickDecide_b__11_0__);
    byte_5933CA5 = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_ActiveGrandBoardConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ActiveGrandBoardConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ActiveGrandBoardConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_ActiveGrandBoardConfirmDialog__OnClickDecide_b__11_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void ActiveGrandBoardConfirmDialog__Open(
        ActiveGrandBoardConfirmDialog_o *this,
        System_Collections_Generic_List_UserServantEntity__o *confirmSvtList,
        QuestRestrictionInfo_o *info,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  ActiveGrandBoardConfirmDialog___c_c *v14; // x0
  System_Collections_Generic_IEnumerable_T__o *faceIcons; // x22
  struct ActiveGrandBoardConfirmDialog___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__10_0; // x23
  Il2CppObject *v18; // x24
  struct ActiveGrandBoardConfirmDialog___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UnityEngine_Component_o *gameObject; // x0
  __int64 v27; // x1
  __int64 v28; // x25
  struct GrandServantListServantFaceIcon_array *v29; // x8
  int max_length; // w9
  unsigned int v31; // w22
  struct GrandServantListServantFaceIcon_array *v32; // x8
  GrandServantListServantFaceIcon_o *v33; // x23

  if ( (byte_5933CA4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_GrandServantListServantFaceIcon__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_GrandServantListServantFaceIcon___);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_21FFC50(&Method_ActiveGrandBoardConfirmDialog___c__Open_b__10_0__);
    sub_21FFC50(&ActiveGrandBoardConfirmDialog___c_TypeInfo);
    byte_5933CA4 = 1;
  }
  this->fields.closeCallback = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallback,
    (int32_t)callback,
    (System_String_o *)info,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
  v14 = ActiveGrandBoardConfirmDialog___c_TypeInfo;
  faceIcons = (System_Collections_Generic_IEnumerable_T__o *)this->fields.faceIcons;
  if ( !*(&ActiveGrandBoardConfirmDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ActiveGrandBoardConfirmDialog___c_TypeInfo, v12, v13);
    v14 = ActiveGrandBoardConfirmDialog___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__10_0 = (System_Action_object__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !*(&v14->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v14, v12, v13);
      static_fields = ActiveGrandBoardConfirmDialog___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_GrandServantListServantFaceIcon__TypeInfo);
    System_Action_object____ctor(_9__10_0, v18, Method_ActiveGrandBoardConfirmDialog___c__Open_b__10_0__, 0);
    v19 = ActiveGrandBoardConfirmDialog___c_TypeInfo->static_fields;
    v19->__9__10_0 = (struct System_Action_GrandServantListServantFaceIcon__o *)_9__10_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v19->__9__10_0, (int32_t)_9__10_0, v20, v21, v22, v23, v24, v25);
  }
  BasicHelper__ForEach_object_(
    faceIcons,
    (System_Action_T__o *)_9__10_0,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_GrandServantListServantFaceIcon___);
  if ( !confirmSvtList )
    goto LABEL_23;
  if ( confirmSvtList->fields._size >= 1 )
  {
    v28 = 4;
    while ( 1 )
    {
      v29 = this->fields.faceIcons;
      if ( !v29 )
        break;
      max_length = v29->max_length;
      v31 = v28 - 4;
      if ( (int)v28 - 4 >= max_length )
        goto LABEL_21;
      if ( v31 >= max_length )
LABEL_24:
        sub_21FFED4(gameObject);
      gameObject = (UnityEngine_Component_o *)*((_QWORD *)&v29->obj.klass + v28);
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v32 = this->fields.faceIcons;
      if ( !v32 )
        break;
      if ( v31 >= LODWORD(v32->max_length) )
        goto LABEL_24;
      v33 = (GrandServantListServantFaceIcon_o *)*((_QWORD *)&v32->obj.klass + v28);
      gameObject = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)confirmSvtList,
                                                v31,
                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !v33 )
        break;
      GrandServantListServantFaceIcon__Setup(v33, (UserServantEntity_o *)gameObject, info, 0);
      if ( (int)++v28 - 4 >= confirmSvtList->fields._size )
        goto LABEL_21;
    }
LABEL_23:
    sub_21FFECC(gameObject, v27);
  }
LABEL_21:
  gameObject = (UnityEngine_Component_o *)this->fields.grid;
  if ( !gameObject )
    goto LABEL_23;
  UIGrid__set_repositionNow((UIGrid_o *)gameObject, 1, 0);
  BaseDialog__SafeOpen((BaseDialog_o *)this, 0, 0, 0);
}


void ActiveGrandBoardConfirmDialog___OnClickCancel_b__12_0(
        ActiveGrandBoardConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_bool__o *closeCallback; // x8

  closeCallback = this->fields.closeCallback;
  if ( !closeCallback )
    sub_21FFECC(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))closeCallback->fields.invoke_impl)(
    closeCallback->fields.method_code,
    0,
    closeCallback->fields.method);
}


void ActiveGrandBoardConfirmDialog___OnClickDecide_b__11_0(
        ActiveGrandBoardConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct System_Action_bool__o *closeCallback; // x8

  closeCallback = this->fields.closeCallback;
  if ( !closeCallback )
    sub_21FFECC(this, method);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))closeCallback->fields.invoke_impl)(
    closeCallback->fields.method_code,
    1,
    closeCallback->fields.method);
}


void ActiveGrandBoardConfirmDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5933CA8 & 1) == 0 )
  {
    sub_21FFC50(&ActiveGrandBoardConfirmDialog___c_TypeInfo);
    byte_5933CA8 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ActiveGrandBoardConfirmDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ActiveGrandBoardConfirmDialog___c_TypeInfo->static_fields->__9 = (struct ActiveGrandBoardConfirmDialog___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ActiveGrandBoardConfirmDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ActiveGrandBoardConfirmDialog___c___ctor(ActiveGrandBoardConfirmDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ActiveGrandBoardConfirmDialog___c___Open_b__10_0(
        ActiveGrandBoardConfirmDialog___c_o *this,
        GrandServantListServantFaceIcon_o *x,
        const MethodInfo *method)
{
  if ( !x
    || (this = (ActiveGrandBoardConfirmDialog___c_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)x,
                                                        0)) == 0 )
  {
    sub_21FFECC(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}