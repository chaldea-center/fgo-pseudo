void __fastcall PartyOrganizationConfirmSupportMenu___ctor(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B3583 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B3583 = 1;
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
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmSupportMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmSupportMenu__Close(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmSupportMenu__Close_31240088(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmSupportMenu__Close_31240088(
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

  if ( (byte_42B357F & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_PartyOrganizationConfirmSupportMenu_EndClose__);
    byte_42B357F = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
    sub_B52920(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_42B357D & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B357D = 1;
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
    sub_B52A5C(titleLabel, method);
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

  if ( (byte_42B3581 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3581 = 1;
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

  if ( (byte_42B3582 & 1) == 0 )
  {
    sub_B52984(&Method_PartyOrganizationConfirmSupportMenu_OnClickClose__);
    byte_42B3582 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmSupportMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmSupportMenu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_PartyOrganizationConfirmSupportMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationConfirmSupportMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmSupportMenu__OnClickDecide(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42B3580 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3580 = 1;
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
  const MethodInfo *v33; // [xsp+10h] [xbp-80h]
  int32_t v34; // [xsp+24h] [xbp-6Ch]

  if ( (byte_42B357E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_B52984(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_B52984(&Method_PartyOrganizationConfirmSupportMenu_EndOpen__);
    sub_B52984(&PartyOrganizationListViewItem_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_10374/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_TITLE"*/);
    sub_B52984(&StringLiteral_10372/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_CLOSE"*/);
    sub_B52984(&StringLiteral_10373/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_MESSAGE"*/);
    byte_42B357E = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B52920(
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
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_63;
    gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)gameObject,
                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
    v34 = kind;
    max_length = supportMemberObjectList->max_length;
    v17 = *((_DWORD *)gameObject + 6);
    v18 = gameObject;
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
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
          if ( !*((_BYTE *)gameObject + 224) )
            break;
        }
      }
      if ( !v19 )
LABEL_63:
        sub_B52A5C(gameObject, v14);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v19,
        (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    }
    else if ( max_length >= 1 )
    {
      v21 = 0LL;
      do
      {
        if ( (unsigned int)v21 >= v18[6] )
        {
          v32 = sub_B52A88(gameObject);
          sub_B52A28(v32, 0LL);
        }
        v22 = *(FollowerInfo_o **)&v18[2 * v21 + 8];
        if ( !v22 )
          goto LABEL_63;
        if ( !v22->fields.isMySvtOrNpc )
        {
          v23 = (PartyOrganizationListViewItem_o *)sub_B52A54(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_31237364(
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
            v33);
          if ( !v19 )
            goto LABEL_63;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v19,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
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
    if ( !v34 )
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
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10374/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_TITLE"*/, 0LL);
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
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10373/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
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
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10372/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_CLOSE"*/, 0LL);
      if ( !closeLabel )
        goto LABEL_63;
      UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    }
    this->fields.state = 1;
    v31 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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

  if ( (byte_42B357B & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo);
    byte_42B357B = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
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

  if ( (byte_42B357C & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo);
    byte_42B357C = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  PartyOrganizationConfirmSupportMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmSupportMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
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
  if ( (byte_42AD410 & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD410 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmSupportMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmSupportMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PartyOrganizationConfirmSupportMenu_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationConfirmSupportMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  PartyOrganizationConfirmSupportMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (PartyOrganizationConfirmSupportMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}