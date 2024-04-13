void __fastcall PartyOrganizationConfirmSupportMenu___ctor(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB093 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB093 = 1;
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmSupportMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmSupportMenu__Close(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmSupportMenu__Close_29731336(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmSupportMenu__Close_29731336(
        PartyOrganizationConfirmSupportMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EB08F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyOrganizationConfirmSupportMenu_EndClose__, v10, v11, v12);
    byte_42EB08F = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyOrganizationConfirmSupportMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *titleLabel; // x0

  if ( (byte_42EB08D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42EB08D = 1;
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
    sub_B5D69C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmSupportMenu__OnClickCancel(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EB091 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB091 = 1;
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
    PartyOrganizationConfirmSupportMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmSupportMenu__OnClickClose(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42EB092 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PartyOrganizationConfirmSupportMenu_OnClickClose__, (_DWORD)method, v2, v3);
    byte_42EB092 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_PartyOrganizationConfirmSupportMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmSupportMenu_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_PartyOrganizationConfirmSupportMenu_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    PartyOrganizationConfirmSupportMenu__Callback(this, 0, v7);
  }
}


void __fastcall PartyOrganizationConfirmSupportMenu__OnClickDecide(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EB090 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB090 = 1;
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
    PartyOrganizationConfirmSupportMenu__Callback(this, 1, v5);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  void *gameObject; // x0
  void *v53; // x1
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int max_length; // w21
  int v56; // w28
  _DWORD *v57; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x24
  const MethodInfo *v59; // x5
  __int64 v60; // x23
  FollowerInfo_o *v61; // x27
  PartyOrganizationListViewItem_o *v62; // x26
  int32_t i; // w22
  UnityEngine_GameObject_o *supportMemberBase; // x22
  PartyOrganizationConfirmItemDraw_array *v65; // x23
  UILabel_o *titleLabel; // x21
  bool IsFixedSupportPositionIndividuality; // w0
  UILabel_o *messageLabel; // x21
  UILabel_o *closeLabel; // x20
  System_Action_o *v70; // x20
  __int64 v71; // x0
  const MethodInfo *v72; // [xsp+10h] [xbp-80h]
  int32_t v73; // [xsp+24h] [xbp-6Ch]

  if ( (byte_42EB08E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, (_DWORD)partyItem, setupInfo);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&PartyOrganizationConfirmItemDraw_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_PartyOrganizationConfirmSupportMenu_EndOpen__, v34, v35, v36);
    sub_B5D5C4(&PartyOrganizationListViewItem_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_10416/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_TITLE"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_10414/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_CLOSE"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_10415/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_MESSAGE"*/, v49, v50, v51);
    byte_42EB08E = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B5D560(
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
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_63;
    gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)gameObject,
                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
    v73 = kind;
    max_length = supportMemberObjectList->max_length;
    v56 = *((_DWORD *)gameObject + 6);
    v57 = gameObject;
    v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v58,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    if ( v56 < 1 )
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
        v53 = gameObject;
        if ( *((_BYTE *)gameObject + 128) )
        {
          if ( !*((_BYTE *)gameObject + 232) )
            break;
        }
      }
      if ( !v58 )
LABEL_63:
        sub_B5D69C(gameObject, v53);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v58,
        (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    }
    else if ( max_length >= 1 )
    {
      v60 = 0LL;
      do
      {
        if ( (unsigned int)v60 >= v57[6] )
        {
          v71 = sub_B5D6C8(gameObject);
          sub_B5D668(v71, 0LL);
        }
        v61 = *(FollowerInfo_o **)&v57[2 * v60 + 8];
        if ( !v61 )
          goto LABEL_63;
        if ( !v61->fields.isMySvtOrNpc )
        {
          v62 = (PartyOrganizationListViewItem_o *)sub_B5D694(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_29728604(
            v62,
            v60,
            v61,
            0,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0,
            0,
            v72);
          if ( !v58 )
            goto LABEL_63;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v58,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v62,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
        }
      }
      while ( (int)++v60 < v56 && (int)v60 < max_length );
    }
LABEL_35:
    supportMemberBase = this->fields.supportMemberBase;
    v65 = this->fields.supportMemberObjectList;
    if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    }
    PartyOrganizationConfirmItemDraw__SetPartyIcon(
      (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v58,
      v65,
      supportMemberBase,
      0,
      0,
      v59);
    if ( !v73 )
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
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10416/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_TITLE"*/, 0LL);
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
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10415/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
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
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10414/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_CLOSE"*/, 0LL);
      if ( !closeLabel )
        goto LABEL_63;
      UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    }
    this->fields.state = 1;
    v70 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v70, (Il2CppObject *)this, Method_PartyOrganizationConfirmSupportMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v70, 0, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmSupportMenu__add_callbackFunc(
        PartyOrganizationConfirmSupportMenu_o *this,
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationConfirmSupportMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationConfirmSupportMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationConfirmSupportMenu_o *v12; // x0
  PartyOrganizationConfirmSupportMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB08B & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB08B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationConfirmSupportMenu_CallbackFunc_c *)v9->klass != PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  PartyOrganizationConfirmSupportMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall PartyOrganizationConfirmSupportMenu__remove_callbackFunc(
        PartyOrganizationConfirmSupportMenu_o *this,
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PartyOrganizationConfirmSupportMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PartyOrganizationConfirmSupportMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PartyOrganizationConfirmSupportMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EB08C & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB08C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PartyOrganizationConfirmSupportMenu_CallbackFunc_c *)v9->klass != PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  PartyOrganizationConfirmSupportMenu__Init(v12, v13);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5A81 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5A81 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmSupportMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationConfirmSupportMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  PartyOrganizationConfirmSupportMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
}