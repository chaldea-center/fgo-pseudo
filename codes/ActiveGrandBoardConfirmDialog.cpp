void ActiveGrandBoardConfirmDialog___ctor(ActiveGrandBoardConfirmDialog_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct GrandServantListServantFaceIcon_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D27EDF & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&BaseDialog_TypeInfo);
    sub_1C94098(&GrandServantListServantFaceIcon___TypeInfo);
    byte_4D27EDF = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v3 = BalanceConfig_TypeInfo;
  }
  v4 = (struct GrandServantListServantFaceIcon_array *)sub_1C94140(
                                                         GrandServantListServantFaceIcon___TypeInfo,
                                                         (unsigned int)(v3->static_fields->DeckMemberMax - 1));
  this->fields.faceIcons = v4;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.faceIcons, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ActiveGrandBoardConfirmDialog__Awake(ActiveGrandBoardConfirmDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x20
  System_String_o *cancelBtn; // x0
  __int64 v5; // x1
  UILabel_o *messageLabel1; // x20
  UILabel_o *messageLabel2; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4D27EDB & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_10912/*"QUEST_CONFIRM_START"*/);
    sub_1C94098(&StringLiteral_10127/*"PARTY_ORGANIZATION_ACTIVE_GRAND_BOARD_CONFIRM_MESSAGE_2"*/);
    sub_1C94098(&StringLiteral_10126/*"PARTY_ORGANIZATION_ACTIVE_GRAND_BOARD_CONFIRM_MESSAGE_1"*/);
    sub_1C94098(&StringLiteral_10128/*"PARTY_ORGANIZATION_ACTIVE_GRAND_BOARD_CONFIRM_TITLE"*/);
    sub_1C94098(&StringLiteral_3689/*"COMMON_CONFIRM_CANCEL"*/);
    byte_4D27EDB = 1;
  }
  BaseDialog__Awake((BaseDialog_o *)this, 0);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  cancelBtn = LocalizationManager__Get((System_String_o *)StringLiteral_10128/*"PARTY_ORGANIZATION_ACTIVE_GRAND_BOARD_CONFIRM_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_12;
  UILabel__set_text(titleLabel, cancelBtn, 0);
  messageLabel1 = this->fields.messageLabel1;
  cancelBtn = LocalizationManager__Get((System_String_o *)StringLiteral_10126/*"PARTY_ORGANIZATION_ACTIVE_GRAND_BOARD_CONFIRM_MESSAGE_1"*/, 0);
  if ( !messageLabel1 )
    goto LABEL_12;
  UILabel__set_text(messageLabel1, cancelBtn, 0);
  messageLabel2 = this->fields.messageLabel2;
  cancelBtn = LocalizationManager__Get((System_String_o *)StringLiteral_10127/*"PARTY_ORGANIZATION_ACTIVE_GRAND_BOARD_CONFIRM_MESSAGE_2"*/, 0);
  if ( !messageLabel2 )
    goto LABEL_12;
  UILabel__set_text(messageLabel2, cancelBtn, 0);
  decideLabel = this->fields.decideLabel;
  cancelBtn = LocalizationManager__Get((System_String_o *)StringLiteral_10912/*"QUEST_CONFIRM_START"*/, 0);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, cancelBtn, 0),
        cancelLabel = this->fields.cancelLabel,
        cancelBtn = LocalizationManager__Get((System_String_o *)StringLiteral_3689/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, cancelBtn, 0), (cancelBtn = (System_String_o *)this->fields.cancelBtn) == 0) )
  {
LABEL_12:
    sub_1C942F0(cancelBtn, v5);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cancelBtn, 0);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0);
}


void ActiveGrandBoardConfirmDialog__OnClickCancel(ActiveGrandBoardConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D27EDE & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ActiveGrandBoardConfirmDialog_OnClickCancel__);
    sub_1C94098(&Method_ActiveGrandBoardConfirmDialog__OnClickCancel_b__12_0__);
    byte_4D27EDE = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_ActiveGrandBoardConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_ActiveGrandBoardConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_ActiveGrandBoardConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_ActiveGrandBoardConfirmDialog__OnClickCancel_b__12_0__, 0);
    BaseDialog__SafeClose((BaseDialog_o *)this, v5, 0);
  }
}


void ActiveGrandBoardConfirmDialog__OnClickDecide(ActiveGrandBoardConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4D27EDD & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_ActiveGrandBoardConfirmDialog_OnClickDecide__);
    sub_1C94098(&Method_ActiveGrandBoardConfirmDialog__OnClickDecide_b__11_0__);
    byte_4D27EDD = 1;
  }
  if ( this->fields.baseState == 2 )
  {
    v3 = Method_ActiveGrandBoardConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_ActiveGrandBoardConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_ActiveGrandBoardConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  ActiveGrandBoardConfirmDialog___c_c *v12; // x0
  System_Collections_Generic_IEnumerable_T__o *faceIcons; // x22
  System_Action_object__o *_9__10_0; // x23
  Il2CppObject *v15; // x24
  struct ActiveGrandBoardConfirmDialog___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  UnityEngine_Component_o *gameObject; // x0
  __int64 v24; // x1
  int32_t v25; // w22
  struct GrandServantListServantFaceIcon_array *v26; // x8
  int32_t max_length; // w9
  struct GrandServantListServantFaceIcon_array *v28; // x8
  GrandServantListServantFaceIcon_o *v29; // x23

  if ( (byte_4D27EDC & 1) == 0 )
  {
    sub_1C94098(&System_Action_GrandServantListServantFaceIcon__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_GrandServantListServantFaceIcon___);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_1C94098(&Method_ActiveGrandBoardConfirmDialog___c__Open_b__10_0__);
    sub_1C94098(&ActiveGrandBoardConfirmDialog___c_TypeInfo);
    byte_4D27EDC = 1;
  }
  this->fields.closeCallback = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallback,
    (int32_t)callback,
    (int32_t)info,
    (int32_t)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  v12 = ActiveGrandBoardConfirmDialog___c_TypeInfo;
  faceIcons = (System_Collections_Generic_IEnumerable_T__o *)this->fields.faceIcons;
  if ( !ActiveGrandBoardConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ActiveGrandBoardConfirmDialog___c_TypeInfo);
    v12 = ActiveGrandBoardConfirmDialog___c_TypeInfo;
  }
  _9__10_0 = (System_Action_object__o *)v12->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = ActiveGrandBoardConfirmDialog___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__10_0 = (System_Action_object__o *)sub_1C942E4(System_Action_GrandServantListServantFaceIcon__TypeInfo);
    System_Action_object____ctor(_9__10_0, v15, Method_ActiveGrandBoardConfirmDialog___c__Open_b__10_0__, 0);
    static_fields = ActiveGrandBoardConfirmDialog___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Action_GrandServantListServantFaceIcon__o *)_9__10_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0,
      (int32_t)_9__10_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  BasicHelper__ForEach_object_(
    faceIcons,
    (System_Action_T__o *)_9__10_0,
    (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_GrandServantListServantFaceIcon___);
  if ( !confirmSvtList )
    goto LABEL_23;
  if ( confirmSvtList->fields._size >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      v26 = this->fields.faceIcons;
      if ( !v26 )
        break;
      max_length = v26->max_length;
      if ( v25 >= max_length )
        goto LABEL_21;
      if ( v25 >= (unsigned int)max_length )
LABEL_24:
        sub_1C942F8(gameObject);
      gameObject = (UnityEngine_Component_o *)v26->m_Items[v25];
      if ( !gameObject )
        break;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v28 = this->fields.faceIcons;
      if ( !v28 )
        break;
      if ( (unsigned int)v25 >= LODWORD(v28->max_length) )
        goto LABEL_24;
      v29 = v28->m_Items[v25];
      gameObject = (UnityEngine_Component_o *)System_Collections_Generic_List_object___get_Item(
                                                (System_Collections_Generic_List_object__o *)confirmSvtList,
                                                v25,
                                                (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
      if ( !v29 )
        break;
      GrandServantListServantFaceIcon__Setup(v29, (UserServantEntity_o *)gameObject, info, 0);
      if ( ++v25 >= confirmSvtList->fields._size )
        goto LABEL_21;
    }
LABEL_23:
    sub_1C942F0(gameObject, v24);
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
    sub_1C942F0(this, method);
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
    sub_1C942F0(this, method);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))closeCallback->fields.invoke_impl)(
    closeCallback->fields.method_code,
    1,
    closeCallback->fields.method);
}


void ActiveGrandBoardConfirmDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D27EE0 & 1) == 0 )
  {
    sub_1C94098(&ActiveGrandBoardConfirmDialog___c_TypeInfo);
    byte_4D27EE0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(ActiveGrandBoardConfirmDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ActiveGrandBoardConfirmDialog___c_TypeInfo->static_fields->__9 = (struct ActiveGrandBoardConfirmDialog___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)ActiveGrandBoardConfirmDialog___c_TypeInfo->static_fields,
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
    sub_1C942F0(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}