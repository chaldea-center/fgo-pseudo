void PartyOrganizationConfirmSupportMenu___ctor(PartyOrganizationConfirmSupportMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C22D0B & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C22D0B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationConfirmSupportMenu__Callback(
        PartyOrganizationConfirmSupportMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct PartyOrganizationConfirmSupportMenu_CallbackFunc_o *v5; // x20
  struct PartyOrganizationConfirmSupportMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void PartyOrganizationConfirmSupportMenu__Close(PartyOrganizationConfirmSupportMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmSupportMenu__Close_33995824(this, 0, v2);
}


void PartyOrganizationConfirmSupportMenu__Close_33995824(
        PartyOrganizationConfirmSupportMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C22D07 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationConfirmSupportMenu_EndClose__);
    byte_4C22D07 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyOrganizationConfirmSupportMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void PartyOrganizationConfirmSupportMenu__EndClose(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmSupportMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C2D434(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void PartyOrganizationConfirmSupportMenu__EndOpen(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void PartyOrganizationConfirmSupportMenu__Init(PartyOrganizationConfirmSupportMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C22D05 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22D05 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0) )
  {
LABEL_9:
    sub_1C2D6EC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PartyOrganizationConfirmSupportMenu__OnClickCancel(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C22D09 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationConfirmSupportMenu_OnClickCancel__);
    byte_4C22D09 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmSupportMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmSupportMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationConfirmSupportMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    PartyOrganizationConfirmSupportMenu__Callback(this, 0, v5);
  }
}


void PartyOrganizationConfirmSupportMenu__OnClickClose(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C22D0A & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationConfirmSupportMenu_OnClickClose__);
    byte_4C22D0A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmSupportMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmSupportMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationConfirmSupportMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationConfirmSupportMenu__Callback(this, 0, v5);
  }
}


void PartyOrganizationConfirmSupportMenu__OnClickDecide(
        PartyOrganizationConfirmSupportMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C22D08 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyOrganizationConfirmSupportMenu_OnClickDecide__);
    byte_4C22D08 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmSupportMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmSupportMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyOrganizationConfirmSupportMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationConfirmSupportMenu__Callback(this, 1, v5);
  }
}


void PartyOrganizationConfirmSupportMenu__Open(
        PartyOrganizationConfirmSupportMenu_o *this,
        int32_t kind,
        PartyListViewItem_o *partyItem,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  void *gameObject; // x0
  Il2CppClass *v14; // x1
  struct PartyOrganizationConfirmItemDraw_array *supportMemberObjectList; // x8
  _DWORD *v16; // x25
  int v17; // w21
  int max_length; // w26
  System_Collections_Generic_List_object__o *v19; // x24
  __int64 v20; // x2
  int v21; // w29
  int32_t v22; // w23
  FollowerInfo_o *v23; // x27
  PartyOrganizationListViewItem_o *v24; // x26
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  UnityEngine_GameObject_o *supportMemberBase; // x22
  PartyOrganizationConfirmItemDraw_array *v32; // x23
  UILabel_o *titleLabel; // x21
  bool IsFixedSupportPositionIndividuality; // w0
  UILabel_o *messageLabel; // x21
  int32_t i; // w22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  UILabel_o *closeLabel; // x20
  System_Action_o *v40; // x20
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  const MethodInfo *v45; // [xsp+18h] [xbp-78h]
  int32_t v46; // [xsp+2Ch] [xbp-64h]

  if ( (byte_4C22D06 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_NpcFollowerMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&PartyOrganizationConfirmItemDraw_TypeInfo);
    sub_1C2D490(&Method_PartyOrganizationConfirmSupportMenu_EndOpen__);
    sub_1C2D490(&PartyOrganizationListViewItem_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_10197/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_TITLE"*/);
    sub_1C2D490(&StringLiteral_10195/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_CLOSE"*/);
    sub_1C2D490(&StringLiteral_10196/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_MESSAGE"*/);
    byte_4C22D06 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)partyItem,
      (const MethodInfo *)setupInfo);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_64;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_64;
    gameObject = DataManager__GetMasterData_object_(
                   (DataManager_o *)gameObject,
                   (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_NpcFollowerMaster___);
    if ( !questRestrictionInfo )
      goto LABEL_64;
    if ( !gameObject )
      goto LABEL_64;
    gameObject = NpcFollowerMaster__GetQuestFollowerList(
                   (NpcFollowerMaster_o *)gameObject,
                   questRestrictionInfo->fields.questId,
                   questRestrictionInfo->fields.questPhase,
                   0);
    if ( !gameObject )
      goto LABEL_64;
    supportMemberObjectList = this->fields.supportMemberObjectList;
    v46 = kind;
    if ( !supportMemberObjectList )
      goto LABEL_64;
    v16 = gameObject;
    v17 = *((_DWORD *)gameObject + 6);
    max_length = supportMemberObjectList->max_length;
    v19 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_PartyOrganizationListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_PartyOrganizationListViewItem___ctor__);
    if ( v17 < 1 )
    {
      for ( i = 0; ; ++i )
      {
        gameObject = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          gameObject = BalanceConfig_TypeInfo;
        }
        if ( i >= *(_DWORD *)(*((_QWORD *)gameObject + 23) + 172LL) )
          goto LABEL_25;
        if ( !partyItem )
          goto LABEL_64;
        gameObject = PartyListViewItem__GetMember(partyItem, i, 0);
        if ( !gameObject )
          goto LABEL_64;
        v14 = (Il2CppClass *)gameObject;
        if ( *((_BYTE *)gameObject + 136) )
        {
          if ( !*((_BYTE *)gameObject + 264) )
            break;
        }
      }
      if ( !v19
        || (items = v19->fields._items,
            v42 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__,
            ++v19->fields._version,
            !items) )
      {
LABEL_64:
        sub_1C2D6EC(gameObject, v14);
      }
      size = v19->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v19,
          (Il2CppObject *)gameObject,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        v19->fields._size = size + 1;
        v44[4] = v14;
        sub_1C2D434((CGThumbnailListItem_o *)(v44 + 4), (int32_t)v14, v37, v38);
      }
    }
    else if ( max_length >= 1 )
    {
      if ( max_length - 1 >= (unsigned int)(v17 - 1) )
        v21 = v17;
      else
        v21 = max_length;
      v22 = 0;
      do
      {
        if ( (unsigned int)v22 >= v16[6] )
          sub_1C2D6F4(gameObject, v14, v20);
        v23 = *(FollowerInfo_o **)&v16[2 * v22 + 8];
        if ( !v23 )
          goto LABEL_64;
        if ( !v23->fields.isMySvtOrNpc )
        {
          v24 = (PartyOrganizationListViewItem_o *)sub_1C2D6DC(PartyOrganizationListViewItem_TypeInfo);
          PartyOrganizationListViewItem___ctor_33993044(
            v24,
            v22,
            v23,
            0,
            0,
            setupInfo,
            questRestrictionInfo,
            0,
            0,
            0,
            0,
            v45);
          if ( !v19 )
            goto LABEL_64;
          v27 = v19->fields._items;
          v28 = Method_System_Collections_Generic_List_PartyOrganizationListViewItem__Add__;
          ++v19->fields._version;
          if ( !v27 )
            goto LABEL_64;
          v29 = v19->fields._size;
          if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v19,
              (Il2CppObject *)v24,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &v27->obj.klass + v29;
            v19->fields._size = v29 + 1;
            v30[4] = (Il2CppClass *)v24;
            sub_1C2D434((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
          }
        }
      }
      while ( v21 != ++v22 );
    }
LABEL_25:
    supportMemberBase = this->fields.supportMemberBase;
    v32 = this->fields.supportMemberObjectList;
    if ( !PartyOrganizationConfirmItemDraw_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmItemDraw_TypeInfo);
    PartyOrganizationConfirmItemDraw__SetPartyIcon(
      (System_Collections_Generic_List_PartyOrganizationListViewItem__o *)v19,
      v32,
      supportMemberBase,
      0,
      0,
      0);
    if ( !v46 )
    {
      gameObject = this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_64;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_64;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_64;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_64;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_64;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_64;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_64;
      (*(void (__fastcall **)(void *, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
        gameObject,
        0,
        1,
        *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10197/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_TITLE"*/, 0);
      if ( !titleLabel )
        goto LABEL_64;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
      IsFixedSupportPositionIndividuality = QuestRestrictionInfo__IsFixedSupportPositionIndividuality(
                                              questRestrictionInfo,
                                              0);
      messageLabel = this->fields.messageLabel;
      if ( IsFixedSupportPositionIndividuality )
      {
        gameObject = QuestRestrictionInfo__GetDialogMessageSupportSvtPos(questRestrictionInfo, 0);
        if ( !messageLabel )
          goto LABEL_64;
      }
      else
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10196/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_MESSAGE"*/, 0);
        if ( !messageLabel )
          goto LABEL_64;
      }
      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
      closeLabel = this->fields.closeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_10195/*"PARTY_ORGANIZATION_CONFIRM_START_FIXED_SUPPORT_POSITION_RESTRICTION_CLOSE"*/, 0);
      if ( !closeLabel )
        goto LABEL_64;
      UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
    }
    this->fields.state = 1;
    v40 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v40, (Il2CppObject *)this, Method_PartyOrganizationConfirmSupportMenu_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v40, 0, 0);
  }
}


void PartyOrganizationConfirmSupportMenu__add_callbackFunc(
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

  if ( (byte_4C22D03 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo);
    byte_4C22D03 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmSupportMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmSupportMenu_o *)sub_1C2D9AC(v8);
  PartyOrganizationConfirmSupportMenu__remove_callbackFunc(v11, v12, v13);
}


void PartyOrganizationConfirmSupportMenu__remove_callbackFunc(
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

  if ( (byte_4C22D04 & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo);
    byte_4C22D04 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmSupportMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmSupportMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmSupportMenu_o *)sub_1C2D9AC(v8);
  PartyOrganizationConfirmSupportMenu__Init(v11, v12);
}


void PartyOrganizationConfirmSupportMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6C3D0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6C388;
}


System_IAsyncResult_o *PartyOrganizationConfirmSupportMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4C22D0C & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C22D0C = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void PartyOrganizationConfirmSupportMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void PartyOrganizationConfirmSupportMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmSupportMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}