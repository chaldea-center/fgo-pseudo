void __fastcall PartyOrganizationConfirmSupportMenu___ctor(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_418B6BC & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418B6BC = 1;
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmSupportMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmSupportMenu__Close(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmSupportMenu__Close_32185724(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmSupportMenu__Close_32185724(
        PartyOrganizationConfirmSupportMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_418B6B8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_PartyOrganizationConfirmSupportMenu_EndClose__, v10);
    byte_418B6B8 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationConfirmSupportMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_418B6B6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418B6B6 = 1;
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
    sub_B2C434(titleLabel, method);
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

  if ( (byte_418B6BA & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B6BA = 1;
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

  if ( (byte_418B6BB & 1) == 0 )
  {
    sub_B2C35C(&Method_PartyOrganizationConfirmSupportMenu_OnClickClose__, method);
    byte_418B6BB = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmSupportMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmSupportMenu_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_PartyOrganizationConfirmSupportMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    PartyOrganizationConfirmSupportMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationConfirmSupportMenu__OnClickDecide(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_418B6B9 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418B6B9 = 1;
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  void *gameObject; // x0
  void *v27; // x1
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  int max_length; // w21
  int v30; // w28
  _DWORD *v31; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x24
  const MethodInfo *v33; // x5
  __int64 v34; // x23
  FollowerInfo_o *v35; // x27
  PartyOrganizationListViewItem_o *v36; // x26
  int32_t i; // w22
  UnityEngine_GameObject_o *supportMemberBase; // x22
  PartyOrganizationConfirmItemDraw_array *v39; // x23
  UILabel_o *titleLabel; // x21
  bool IsFixedSupportPositionIndividuality; // w0
  UILabel_o *messageLabel; // x21
  UILabel_o *closeLabel; // x20
  System_Action_o *v44; // x20
  __int64 v45; // x0
  const MethodInfo *v46; // [xsp+10h] [xbp-80h]
  int32_t v47; // [xsp+24h] [xbp-6Ch]

  if ( (byte_418B6B7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&BalanceConfig_TypeInfo, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcFollowerMaster___, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&PartyOrganizationConfirmItemDraw_TypeInfo, v19);
    sub_B2C35C(&Method_PartyOrganizationConfirmSupportMenu_EndOpen__, v20);
    sub_B2C35C(&PartyOrganizationListViewItem_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&StringLiteral_10310/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_TITLE"*/, v23);
    sub_B2C35C(&StringLiteral_10308/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_CLOSE"*/, v24);
    sub_B2C35C(&StringLiteral_10309/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_MESSAGE"*/, v25);
    byte_418B6B7 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
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
    gameObject = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_63;
    gameObject = DataManager__GetMasterData_WarQuestSelectionMaster_(
                   (DataManager_o *)gameObject,
                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
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
    v47 = kind;
    max_length = supportMemberObjectList->max_length;
    v30 = *((_DWORD *)gameObject + 6);
    v31 = gameObject;
    v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v32,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    if ( v30 < 1 )
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
        v27 = gameObject;
        if ( *((_BYTE *)gameObject + 128) )
        {
          if ( !*((_BYTE *)gameObject + 224) )
            break;
        }
      }
      if ( !v32 )
LABEL_63:
        sub_B2C434(gameObject, v27);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v32,
        (EventMissionProgressRequest_Argument_ProgressData_o *)gameObject,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    }
    else if ( max_length >= 1 )
    {
      v34 = 0LL;
      do
      {
        if ( (unsigned int)v34 >= v31[6] )
        {
          v45 = sub_B2C460(gameObject);
          sub_B2C400(v45, 0LL);
        }
        v35 = *(FollowerInfo_o **)&v31[2 * v34 + 8];
        if ( !v35 )
          goto LABEL_63;
        if ( !v35->fields.isMySvtOrNpc )
        {
          v36 = (PartyOrganizationListViewItem_o *)sub_B2C42C(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_32183040(
            v36,
            v34,
            v35,
            0,
            setupInfo,
            questRestrictionInfo,
            0LL,
            0,
            0,
            0,
            v46);
          if ( !v32 )
            goto LABEL_63;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v32,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
        }
      }
      while ( (int)++v34 < v30 && (int)v34 < max_length );
    }
LABEL_35:
    supportMemberBase = this->fields.supportMemberBase;
    v39 = this->fields.supportMemberObjectList;
    if ( (BYTE3(PartyOrganizationConfirmItemDraw_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    }
    PartyOrganizationConfirmItemDraw__SetPartyIcon(
      (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v32,
      v39,
      supportMemberBase,
      0,
      0,
      v33);
    if ( !v47 )
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
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10310/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_TITLE"*/, 0LL);
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
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10309/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_MESSAGE"*/, 0LL);
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
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10308/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_CLOSE"*/, 0LL);
      if ( !closeLabel )
        goto LABEL_63;
      UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    }
    this->fields.state = 1;
    v44 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v44, (Il2CppObject *)this, Method_PartyOrganizationConfirmSupportMenu_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v44, 0, 0LL);
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

  if ( (byte_418B6B4 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo, value);
    byte_418B6B4 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418B6B5 & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo, value);
    byte_418B6B5 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_418528D & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_418528D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmSupportMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
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
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
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
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
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
            v16 = sub_AC5258(v21, class_0, v10, v12);
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