void __fastcall PartyOrganizationConfirmSupportMenu___ctor(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_438E536 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438E536 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmSupportMenu__Callback(
        PartyOrganizationConfirmSupportMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  PartyOrganizationConfirmSupportMenu_CallbackFunc_o *v9; // x19
  struct PartyOrganizationConfirmSupportMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmSupportMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmSupportMenu__Close(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmSupportMenu__Close_31257356(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmSupportMenu__Close_31257356(
        PartyOrganizationConfirmSupportMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438E532 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationConfirmSupportMenu_EndClose__);
    byte_438E532 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationConfirmSupportMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall PartyOrganizationConfirmSupportMenu__EndClose(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmSupportMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B77560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmSupportMenu__EndOpen(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationConfirmSupportMenu__Init(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_438E530 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E530 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_9:
    sub_B7769C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmSupportMenu__OnClickCancel(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_438E534 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E534 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    PartyOrganizationConfirmSupportMenu__Callback(this, 0, v3);
  }
}


void __fastcall PartyOrganizationConfirmSupportMenu__OnClickClose(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_438E535 & 1) == 0 )
  {
    sub_B775C4(&Method_PartyOrganizationConfirmSupportMenu_OnClickClose__);
    byte_438E535 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmSupportMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmSupportMenu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_PartyOrganizationConfirmSupportMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationConfirmSupportMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmSupportMenu__OnClickDecide(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_438E533 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E533 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    PartyOrganizationConfirmSupportMenu__Callback(this, 1, v3);
  }
}


void __fastcall PartyOrganizationConfirmSupportMenu__Open(
        PartyOrganizationConfirmSupportMenu_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  void *gameObject; // x0
  void *v14; // x1
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int max_length; // w21
  int v17; // w28
  _DWORD *v18; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x24
  const MethodInfo *v20; // x5
  __int64 v21; // x23
  FollowerInfo_o *v22; // x27
  PartyOrganizationListViewItem_o *v23; // x26
  int32_t i; // w22
  UnityEngine_GameObject_o *supportMemberBase; // x22
  PartyOrganizationConfirmItemDraw_array *v26; // x23
  UILabel_o *titleLabel; // x21
  bool IsFixedSupportPositionIndividuality; // w0
  UILabel_o *messageLabel; // x21
  UILabel_o *closeLabel; // x20
  System_Action_o *v31; // x20
  __int64 v32; // x0
  int32_t v33; // [xsp+24h] [xbp-6Ch]

  if ( (byte_438E531 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_B775C4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationConfirmSupportMenu_EndOpen__);
    sub_B775C4(&PartyOrganizationListViewItem_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_10494/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_TITLE"*/);
    sub_B775C4(&StringLiteral_10492/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_CLOSE"*/);
    sub_B775C4(&StringLiteral_10493/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_MESSAGE"*/);
    byte_438E531 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)partyItem,
      (System_String_array **)setupInfo,
      (System_Boolean_array **)questRestrictionInfo,
      (System_Int32_array **)callback,
      (System_Int32_array *)method,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_63;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_63;
    gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)gameObject,
                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
    if ( !questRestrictionInfo )
      goto LABEL_63;
    if ( !gameObject )
      goto LABEL_63;
    gameObject = NpcFollowerMaster__GetQuestFollowerList(
                   (NpcFollowerMaster_o *)gameObject,
                   questRestrictionInfo->fields.questId,
                   questRestrictionInfo->fields.questPhase,
                   0LL);
    if ( !gameObject )
      goto LABEL_63;
    supportMemberObjectList = this->fields.supportMemberObjectList;
    if ( !supportMemberObjectList )
      goto LABEL_63;
    v33 = kind;
    max_length = supportMemberObjectList->max_length;
    v17 = *((_DWORD *)gameObject + 6);
    v18 = gameObject;
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    if ( v17 < 1 )
    {
      for ( i = 0; ; ++i )
      {
        gameObject = BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          gameObject = BalanceConfig_TypeInfo;
        }
        if ( i >= *(_DWORD *)(*((_QWORD *)gameObject + 23) + 156LL) )
          goto LABEL_35;
        if ( !partyItem )
          goto LABEL_63;
        gameObject = PartyListViewItem__GetMember(partyItem, i, 0LL);
        if ( !gameObject )
          goto LABEL_63;
        v14 = gameObject;
        if ( *((_BYTE *)gameObject + 128) )
        {
          if ( !*((_BYTE *)gameObject + 232) )
            break;
        }
      }
      if ( !v19 )
LABEL_63:
        sub_B7769C(gameObject, v14);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v19,
        (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    }
    else if ( max_length >= 1 )
    {
      v21 = 0LL;
      do
      {
        if ( (unsigned int)v21 >= v18[6] )
        {
          v32 = sub_B776C8(gameObject);
          sub_B77668(v32, 0LL);
        }
        v22 = *(FollowerInfo_o **)&v18[2 * v21 + 8];
        if ( !v22 )
          goto LABEL_63;
        if ( !v22->fields.isMySvtOrNpc )
        {
          v23 = (PartyOrganizationListViewItem_o *)sub_B77694(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_38648852(
            v23,
            v21,
            v22,
            0,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0,
            0,
            0LL);
          if ( !v19 )
            goto LABEL_63;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
        }
      }
      while ( (int)++v21 < v17 && (int)v21 < max_length );
    }
LABEL_35:
    supportMemberBase = this->fields.supportMemberBase;
    v26 = this->fields.supportMemberObjectList;
    if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    }
    PartyOrganizationConfirmItemDraw__SetPartyIcon(
      (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v19,
      v26,
      supportMemberBase,
      0,
      0,
      v20);
    if ( !v33 )
    {
      gameObject = this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_63;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_63;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_63;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_63;
      (*(void (__fastcall **)(void *, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0LL,
        1LL,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      titleLabel = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10494/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_63;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      IsFixedSupportPositionIndividuality = QuestRestrictionInfo__IsFixedSupportPositionIndividuality(
                                              questRestrictionInfo,
                                              0LL);
      messageLabel = this->fields.messageLabel;
      if ( IsFixedSupportPositionIndividuality )
      {
        gameObject = QuestRestrictionInfo__GetDialogMessageSupportSvtPos(questRestrictionInfo, 0LL);
        if ( !messageLabel )
          goto LABEL_63;
      }
      else
      {
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10493/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
        if ( !messageLabel )
          goto LABEL_63;
      }
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
      closeLabel = this->fields.closeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10492/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_CLOSE"*/, 0LL);
      if ( !closeLabel )
        goto LABEL_63;
      UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    }
    this->fields.state = 1;
    v31 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_PartyOrganizationConfirmSupportMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmSupportMenu__add_callbackFunc(
        PartyOrganizationConfirmSupportMenu_o *this,
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmSupportMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmSupportMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmSupportMenu_o *v11; // x0
  PartyOrganizationConfirmSupportMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438E52E & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo);
    byte_438E52E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmSupportMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  PartyOrganizationConfirmSupportMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationConfirmSupportMenu__remove_callbackFunc(
        PartyOrganizationConfirmSupportMenu_o *this,
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmSupportMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmSupportMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmSupportMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438E52F & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo);
    byte_438E52F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmSupportMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  PartyOrganizationConfirmSupportMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmSupportMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall PartyOrganizationConfirmSupportMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_438A0B7 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438A0B7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmSupportMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmSupportMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PartyOrganizationConfirmSupportMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationConfirmSupportMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  PartyOrganizationConfirmSupportMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (PartyOrganizationConfirmSupportMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}