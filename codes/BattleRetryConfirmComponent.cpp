void __fastcall BattleRetryConfirmComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB7B3C & 1) == 0 )
  {
    sub_1C13D24(&BattleRetryConfirmComponent_TypeInfo, v1);
    byte_4BB7B3C = 1;
  }
  *BattleRetryConfirmComponent_TypeInfo->static_fields = (struct BattleRetryConfirmComponent_StaticFields)xmmword_BF6EE0;
}


void __fastcall BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BB7B3B & 1) == 0 )
  {
    sub_1C13D24(&BaseDialog_TypeInfo, method);
    byte_4BB7B3B = 1;
  }
  *(_OWORD *)&this->fields.CONFIRM_BUTTON_POSITION_ON_THREE.fields.x = xmmword_BF6850;
  *(_QWORD *)&this->fields.CANCEL_BUTTON_POSITION_ON_THREE.fields.y = 3273916416LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall BattleRetryConfirmComponent__BaseDialogClose(
        BattleRetryConfirmComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, callBack, 0LL);
}


void __fastcall BattleRetryConfirmComponent__BaseDialogOpen(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4BB7B34 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_BattleRetryConfirmComponent__BaseDialogOpen_b__54_0__, v3);
    byte_4BB7B34 = 1;
  }
  v4 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleRetryConfirmComponent__BaseDialogOpen_b__54_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v4, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRetryConfirmComponent__BoostSupportRequestDialogCallback(
        BattleRetryConfirmComponent_o *this,
        int32_t result,
        int32_t boostId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BB7B36 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, *(_QWORD *)&result);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4BB7B36 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  switch ( result )
  {
    case 2:
      battleResultComponent = this->fields.battleResultComponent;
      if ( !battleResultComponent )
        goto LABEL_20;
      v13 = boostId;
LABEL_17:
      BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, v13, 0LL);
      break;
    case 1:
      battleResultComponent = this->fields.battleResultComponent;
      if ( !battleResultComponent )
        goto LABEL_20;
      v13 = 0;
      goto LABEL_17;
    case 0:
      battleResultComponent = (BattleResultComponent_o *)this->fields.buttons;
      if ( !battleResultComponent )
        goto LABEL_20;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v14,
        (System_Collections_Generic_List_object__o *)battleResultComponent,
        (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v14,
                (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v14.fields._current )
          sub_1C13F80(0LL, v12);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v14.fields._current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v14,
        (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_20:
    sub_1C13F80(battleResultComponent, *(_QWORD *)&result);
  CommonUI__CloseBoostSupportRequestMenu((CommonUI_o *)battleResultComponent, 0LL, 0LL);
}


void __fastcall BattleRetryConfirmComponent__Close(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  cancelLabel = (UnityEngine_Component_o *)this->fields.cancelLabel;
  if ( !cancelLabel
    || (cancelLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(cancelLabel, 0LL)) == 0LL
    || (cancelLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)cancelLabel,
                                                   0LL)) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(cancelLabel, 0LL),
        AndroidBackKeyManager__RemoveBackBtn(gameObject, 0LL),
        (cancelLabel = (UnityEngine_Component_o *)this->fields.bgObj) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelLabel, 0, 0LL),
        (cancelLabel = (UnityEngine_Component_o *)this->fields.window) == 0LL) )
  {
    sub_1C13F80(cancelLabel, method);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))cancelLabel->klass[1]._1.events)(
    cancelLabel,
    0LL,
    cancelLabel->klass[1]._1.properties);
}


void __fastcall BattleRetryConfirmComponent__CostPointLabelCentering(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *reqSingleParent; // x0
  struct RetryConfirmItem_array *doubleItems; // x8
  __int64 v5; // x20
  int max_length; // w9

  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_14;
  reqSingleParent = UnityEngine_GameObject__get_gameObject(reqSingleParent, 0LL);
  if ( !reqSingleParent )
    goto LABEL_14;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL) )
  {
    reqSingleParent = (UnityEngine_GameObject_o *)this->fields.singleAp;
    if ( reqSingleParent )
    {
      RetryConfirmItem__CenteringAmountLabel((RetryConfirmItem_o *)reqSingleParent, 0LL);
      reqSingleParent = (UnityEngine_GameObject_o *)this->fields.singleItem;
      if ( reqSingleParent )
      {
        RetryConfirmItem__CenteringAmountLabel((RetryConfirmItem_o *)reqSingleParent, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1C13F80(reqSingleParent, method);
  }
  reqSingleParent = (UnityEngine_GameObject_o *)this->fields.doubleAp;
  if ( !reqSingleParent )
    goto LABEL_14;
  RetryConfirmItem__CenteringAmountLabel((RetryConfirmItem_o *)reqSingleParent, 0LL);
  doubleItems = this->fields.doubleItems;
  if ( !doubleItems )
    goto LABEL_14;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = doubleItems->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1C13F88(reqSingleParent, method);
    reqSingleParent = (UnityEngine_GameObject_o *)doubleItems->m_Items[v5];
    if ( reqSingleParent )
    {
      RetryConfirmItem__CenteringAmountLabel((RetryConfirmItem_o *)reqSingleParent, 0LL);
      doubleItems = this->fields.doubleItems;
      ++v5;
      if ( doubleItems )
        continue;
    }
    goto LABEL_14;
  }
}


void __fastcall BattleRetryConfirmComponent__Init(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_GameObject_o *root; // x0
  struct System_Collections_Generic_List_UIButton__o **p_buttons; // x20
  System_Collections_Generic_List_object__o *v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v31; // x21
  unsigned __int64 v32; // x22
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 klass_low; // x10
  __int64 v36; // x8
  __int64 v37; // x1
  UILabel_o *mainText; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *confirmLabel; // x20
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BB7B33 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIButton__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIButton___ctor__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIButton__get_Count__, v9);
    sub_1C13D24(&System_Collections_Generic_List_UIButton__TypeInfo, v10);
    sub_1C13D24(&LocalizationManager_TypeInfo, v11);
    sub_1C13D24(&StringLiteral_2996/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/, v12);
    sub_1C13D24(&StringLiteral_2998/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, v13);
    sub_1C13D24(&StringLiteral_2997/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, v14);
    byte_4BB7B33 = 1;
  }
  memset(&i, 0, sizeof(i));
  root = this->fields.root;
  if ( !root )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  root = this->fields.reqSingleParent;
  if ( !root )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  root = this->fields.reqDoubleParent;
  if ( !root )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  root = (UnityEngine_GameObject_o *)this->fields.buttons;
  if ( !root || !LODWORD(root[1].klass) )
  {
    p_buttons = &this->fields.buttons;
    v17 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_UIButton__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v17;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.buttons, (int64_t)v17, v18, v19, v20, v21, v22, v23);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_2F869FC *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    if ( !root )
      goto LABEL_32;
    klass = root[1].klass;
    v31 = root;
    if ( (int)klass >= 1 )
    {
      v32 = 0LL;
      while ( 1 )
      {
        if ( v32 >= (unsigned int)klass )
          sub_1C13F88(root, method);
        root = (UnityEngine_GameObject_o *)*p_buttons;
        if ( !*p_buttons )
          break;
        method = (const MethodInfo *)*((_QWORD *)&v31[1].monitor + v32);
        v33 = *(_QWORD *)&root->fields.m_CachedPtr;
        v34 = Method_System_Collections_Generic_List_UIButton__Add__;
        ++HIDWORD(root[1].klass);
        if ( !v33 )
          break;
        klass_low = SLODWORD(root[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v33 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)root,
            (Il2CppObject *)method,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = v33 + 8 * klass_low;
          LODWORD(root[1].klass) = klass_low + 1;
          *(_QWORD *)(v36 + 32) = method;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v36 + 32), (int64_t)method, v24, v25, v26, v27, v28, v29);
        }
        LODWORD(klass) = v31[1].klass;
        if ( (__int64)++v32 >= (int)klass )
          goto LABEL_18;
      }
LABEL_32:
      sub_1C13F80(root, method);
    }
LABEL_18:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_32;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)root,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  for ( i = v41;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0LL) )
  {
    if ( !i.fields._current )
      sub_1C13F80(0LL, v37);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  if ( !this->fields.isInitialized )
  {
    mainText = this->fields.mainText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2998/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    if ( !mainText )
      goto LABEL_32;
    UILabel__set_text(mainText, (System_String_o *)root, 0LL);
    cancelLabel = this->fields.cancelLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2996/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_32;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0LL);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2997/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    if ( !confirmLabel )
      goto LABEL_32;
    UILabel__set_text(confirmLabel, (System_String_o *)root, 0LL);
    this->fields.isInitialized = 1;
  }
}


void __fastcall BattleRetryConfirmComponent__OnClickBoostSupportRequest(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v15; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w21
  BoostFunctionUtility_CallbackFunc_o *v18; // x23
  System_Collections_Generic_List_object__o *buttons; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BB7B35 & 1) == 0 )
  {
    sub_1C13D24(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__, method);
    sub_1C13D24(&Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__, v3);
    sub_1C13D24(&BoostFunctionUtility_CallbackFunc_TypeInfo, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v8);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v10);
    byte_4BB7B35 = 1;
  }
  v11 = Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__;
  memset(&v22, 0, sizeof(v22));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1C13D3C(Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
  v12 = (System_Reflection_MethodBase_o *)sub_1C13D08(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 8, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v13);
    byte_4BAF44D = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v15->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BAF44C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v13);
    v15 = TerminalPramsManager_TypeInfo;
    byte_4BAF44C = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v15->static_fields->_PhaseCnt_k__BackingField;
  v18 = (BoostFunctionUtility_CallbackFunc_o *)sub_1C13F70(BoostFunctionUtility_CallbackFunc_TypeInfo);
  BoostFunctionUtility_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__,
    0LL);
  if ( !Instance )
    goto LABEL_24;
  CommonUI__OpenBoostSupportRequestMenu(
    (CommonUI_o *)Instance,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField,
    v18,
    1,
    0LL);
  buttons = (System_Collections_Generic_List_object__o *)this->fields.buttons;
  if ( !buttons )
    goto LABEL_24;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    buttons,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v22.fields._current )
      sub_1C13F80(0LL, v21);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v22.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  buttons = (System_Collections_Generic_List_object__o *)this->fields.friendshipUpItemSwitchComponent;
  if ( !buttons )
LABEL_24:
    sub_1C13F80(buttons, v20);
  FriendshipUpItemSwitchComponent__EnableUseButton((FriendshipUpItemSwitchComponent_o *)buttons, 0, 0LL);
}


void __fastcall BattleRetryConfirmComponent__OnClickCancel(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB7B2C & 1) == 0 )
  {
    sub_1C13D24(&Method_BattleRetryConfirmComponent_OnClickCancel__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_4BB7B2C = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !this->fields.state )
  {
    v7 = Method_BattleRetryConfirmComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C13D3C(Method_BattleRetryConfirmComponent_OnClickCancel__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C13D08(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent )
      goto LABEL_16;
    BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0LL);
    battleResultComponent = (BattleResultComponent_o *)this->fields.buttons;
    if ( !battleResultComponent )
      goto LABEL_16;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v12.fields._current )
        sub_1C13F80(0LL, v11);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    battleResultComponent = (BattleResultComponent_o *)this->fields.friendshipUpItemSwitchComponent;
    if ( !battleResultComponent )
LABEL_16:
      sub_1C13F80(battleResultComponent, v9);
    FriendshipUpItemSwitchComponent__EnableUseButton((FriendshipUpItemSwitchComponent_o *)battleResultComponent, 0, 0LL);
  }
}


void __fastcall BattleRetryConfirmComponent__OnClickConfirm(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  __int64 v9; // x1
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BB7B2D & 1) == 0 )
  {
    sub_1C13D24(&Method_BattleRetryConfirmComponent_OnClickConfirm__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_4BB7B2D = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !this->fields.state )
  {
    v7 = Method_BattleRetryConfirmComponent_OnClickConfirm__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickConfirm__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C13D3C(Method_BattleRetryConfirmComponent_OnClickConfirm__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C13D08(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0LL);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent )
      goto LABEL_16;
    BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0LL);
    battleResultComponent = (BattleResultComponent_o *)this->fields.buttons;
    if ( !battleResultComponent )
      goto LABEL_16;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v12.fields._current )
        sub_1C13F80(0LL, v11);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    battleResultComponent = (BattleResultComponent_o *)this->fields.friendshipUpItemSwitchComponent;
    if ( !battleResultComponent )
LABEL_16:
      sub_1C13F80(battleResultComponent, v9);
    FriendshipUpItemSwitchComponent__EnableUseButton((FriendshipUpItemSwitchComponent_o *)battleResultComponent, 0, 0LL);
  }
}


void __fastcall BattleRetryConfirmComponent__OnClickFriendshipUpItemUseButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BB7B3A & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&Method_BattleRetryConfirmComponent__OnClickFriendshipUpItemUseButton_b__61_0__, v3);
    byte_4BB7B3A = 1;
  }
  if ( !this->fields.state )
  {
    friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
    v5 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattleRetryConfirmComponent__OnClickFriendshipUpItemUseButton_b__61_0__,
      0LL);
    if ( !friendshipUpItemSwitchComponent )
      sub_1C13F80(v6, v7);
    FriendshipUpItemSwitchComponent__ChangeButtonState(friendshipUpItemSwitchComponent, v5, 0LL);
  }
}


void __fastcall BattleRetryConfirmComponent__Open(
        BattleRetryConfirmComponent_o *this,
        BattleWindowComponent_EndCall_o *opendFunc,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgObj; // x0
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  bgObj = this->fields.bgObj;
  if ( !bgObj
    || (UnityEngine_GameObject__SetActive(bgObj, 1, 0LL),
        (bgObj = (UnityEngine_GameObject_o *)this->fields.window) == 0LL)
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, BattleWindowComponent_EndCall_o *, void *))bgObj->klass[1]._1.typeMetadataHandle)(
          bgObj,
          opendFunc,
          bgObj->klass[1]._1.interopData),
        BattleRetryConfirmComponent__CostPointLabelCentering(this, v6),
        (bgObj = (UnityEngine_GameObject_o *)this->fields.cancelLabel) == 0LL)
    || (bgObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)bgObj, 0LL)) == 0LL
    || (bgObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)bgObj, 0LL)) == 0LL )
  {
    sub_1C13F80(bgObj, opendFunc);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObj, 0LL);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
}


void __fastcall BattleRetryConfirmComponent__SetBoostSupportRequestButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0
  int32_t WarId_k__BackingField; // w22
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v16; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v18; // x1
  BattleSetupInfo_o *v19; // x22
  UnityEngine_Object_o *boostSupportRequestLabel; // x20
  UILabel_o *v21; // x20
  UnityEngine_Object_o *v22; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BB7B37 & 1) == 0 )
  {
    sub_1C13D24(&BattleSetupInfo_TypeInfo, method);
    sub_1C13D24(&Method_DataManager_GetMaster_EventDetailMaster___, v3);
    sub_1C13D24(&DataManager_TypeInfo, v4);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1C13D24(&LocalizationManager_TypeInfo, v6);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v8);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_11305/*"RESULT_FRIEND_REQUEST_YES"*/, v10);
    sub_1C13D24(&StringLiteral_2995/*"BATTLE_RETIRE_INTERRUPTION_BATTLE_ITEM_CHECK_STR"*/, v11);
    byte_4BB7B37 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BB1250 )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    byte_4BB1250 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v12->static_fields->_WarId_k__BackingField;
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4BAF44D = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v12->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BAF44C )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, method);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4BAF44C = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v12->static_fields->_PhaseCnt_k__BackingField;
  v16 = (BattleSetupInfo_o *)sub_1C13F70(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_55;
  v19 = BattleSetupInfo__ConvertBattleSetupInfo(
          v16,
          WarId_k__BackingField,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          0,
          0,
          0,
          0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v19 || !Master_object )
    goto LABEL_55;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          v19->fields.eventId,
          (const MethodInfo_3238670 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_46;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_55;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_object )
      goto LABEL_55;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_object,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0LL)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11305/*"RESULT_FRIEND_REQUEST_YES"*/, 0LL) == 1 )
    {
      boostSupportRequestLabel = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(boostSupportRequestLabel, 0LL, 0LL) )
      {
        v21 = this->fields.boostSupportRequestLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_2995/*"BATTLE_RETIRE_INTERRUPTION_BATTLE_ITEM_CHECK_STR"*/,
                                                                        0LL);
        if ( !v21 )
          goto LABEL_55;
        UILabel__set_text(v21, (System_String_o *)Master_object, 0LL);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.boostSupportRequestLabel;
        if ( !Master_object )
          goto LABEL_55;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                        (UnityEngine_Component_o *)Master_object,
                                                                        0LL);
        if ( !Master_object )
          goto LABEL_55;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Transform__get_parent(
                                                                        (UnityEngine_Transform_o *)Master_object,
                                                                        0LL);
        if ( !Master_object )
          goto LABEL_55;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)Master_object,
                                                                        0LL);
        if ( !Master_object )
          goto LABEL_55;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.cancelLabel;
      if ( Master_object )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                        (UnityEngine_Component_o *)Master_object,
                                                                        0LL);
        if ( Master_object )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Transform__get_parent(
                                                                          (UnityEngine_Transform_o *)Master_object,
                                                                          0LL);
          if ( Master_object )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)Master_object,
              this->fields.CANCEL_BUTTON_POSITION_ON_THREE,
              0LL);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.confirmLabel;
            if ( Master_object )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                              (UnityEngine_Component_o *)Master_object,
                                                                              0LL);
              if ( Master_object )
              {
                Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Transform__get_parent(
                                                                                (UnityEngine_Transform_o *)Master_object,
                                                                                0LL);
                if ( Master_object )
                {
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)Master_object,
                    this->fields.CONFIRM_BUTTON_POSITION_ON_THREE,
                    0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_55:
      sub_1C13F80(Master_object, v18);
    }
  }
  else
  {
LABEL_46:
    v22 = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v22, 0LL, 0LL) )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.boostSupportRequestLabel;
      if ( !Master_object )
        goto LABEL_55;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)Master_object,
                                                                      0LL);
      if ( !Master_object )
        goto LABEL_55;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Transform__get_parent(
                                                                      (UnityEngine_Transform_o *)Master_object,
                                                                      0LL);
      if ( !Master_object )
        goto LABEL_55;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)Master_object,
                                                                      0LL);
      if ( !Master_object )
        goto LABEL_55;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    }
  }
}


void __fastcall BattleRetryConfirmComponent__SetCondensedScalePossessionAmount(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *value,
        RetryConfirmItem_array **items,
        const MethodInfo *method)
{
  __int64 v4; // x8
  unsigned __int64 v7; // x22
  bool *i; // x23
  RetryConfirmItem_array *v9; // x9
  unsigned __int64 max_length; // x10
  Il2CppClass **v11; // x8
  UnityEngine_MonoBehaviour_o *v12; // x21
  System_Collections_IEnumerator_o *v13; // x0

  if ( !value )
    goto LABEL_14;
  v4 = *(_QWORD *)&value->max_length;
  if ( (int)v4 >= 1 )
  {
    v7 = 0LL;
    for ( i = &value->m_Items[0].fields.isIndividualLimit; ; i += 40 )
    {
      v9 = *items;
      if ( !*items )
        break;
      max_length = v9->max_length;
      if ( (__int64)v7 >= (int)max_length )
        return;
      if ( v7 >= (unsigned int)v4 )
LABEL_13:
        sub_1C13F88(this, value);
      if ( *i )
      {
        if ( v7 >= max_length )
          goto LABEL_13;
        v11 = &v9->obj.klass + v7;
        v12 = (UnityEngine_MonoBehaviour_o *)v11[4];
        if ( !v12 )
          break;
        v13 = RetryConfirmItem__SetCondensedScalePossessionAmount((RetryConfirmItem_o *)v11[4], 0LL);
        this = (BattleRetryConfirmComponent_o *)UnityEngine_MonoBehaviour__StartCoroutine_70707260(v12, v13, 0LL);
      }
      LODWORD(v4) = value->max_length;
      if ( (__int64)++v7 >= (int)v4 )
        return;
    }
LABEL_14:
    sub_1C13F80(this, value);
  }
}


void __fastcall BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *items,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *reqSingleParent; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct RetryConfirmItem_o *singleItem; // x20
  UnityEngine_GameObject_o *v13; // x21
  _BOOL8 activeSelf; // x0
  const MethodInfo *v15; // x3
  RetryConfirmItem_array **p_itemsa; // x2
  __int64 v17; // x0
  RetryConfirmItem_array *itemsa; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB7B39 & 1) == 0 )
  {
    sub_1C13D24(&RetryConfirmItem___TypeInfo, items);
    byte_4BB7B39 = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_29;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL) )
  {
    reqSingleParent = (UnityEngine_GameObject_o *)sub_1C13DCC(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItem = this->fields.singleItem;
      goto LABEL_11;
    }
    goto LABEL_29;
  }
  reqSingleParent = this->fields.reqSingleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_29;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL) )
  {
    reqSingleParent = (UnityEngine_GameObject_o *)sub_1C13DCC(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItem = this->fields.singleItemWithUseItemButton;
LABEL_11:
      v13 = reqSingleParent;
      if ( singleItem )
      {
        reqSingleParent = (UnityEngine_GameObject_o *)sub_1C13E60(singleItem, reqSingleParent->klass->_1.element_class);
        if ( !reqSingleParent )
        {
          v17 = sub_1C13FA4(0LL);
          sub_1C13E4C(v17, 0LL);
        }
      }
      if ( !LODWORD(v13[1].klass) )
        sub_1C13F88(reqSingleParent, items);
      v13[1].monitor = singleItem;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v13[1].monitor, (int64_t)singleItem, v6, v7, v8, v9, v10, v11);
      itemsa = (RetryConfirmItem_array *)v13;
      p_itemsa = &itemsa;
      goto LABEL_15;
    }
LABEL_29:
    sub_1C13F80(reqSingleParent, items);
  }
  reqSingleParent = this->fields.reqDoubleParent;
  if ( !reqSingleParent )
    goto LABEL_29;
  activeSelf = UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL);
  if ( activeSelf )
  {
    p_itemsa = &this->fields.doubleItems;
LABEL_15:
    BattleRetryConfirmComponent__SetCondensedScalePossessionAmount(
      (BattleRetryConfirmComponent_o *)activeSelf,
      items,
      p_itemsa,
      v15);
    return;
  }
  reqSingleParent = this->fields.reqDoubleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_29;
  activeSelf = UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL);
  if ( activeSelf )
  {
    p_itemsa = &this->fields.doubleItemsWithUseItemButton;
    goto LABEL_15;
  }
  reqSingleParent = this->fields.reqTripleParent;
  if ( !reqSingleParent )
    goto LABEL_29;
  activeSelf = UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL);
  if ( activeSelf )
  {
    p_itemsa = &this->fields.tripleItems;
    goto LABEL_15;
  }
  reqSingleParent = this->fields.reqTripleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_29;
  activeSelf = UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL);
  if ( activeSelf )
  {
    p_itemsa = &this->fields.tripleItemsWithUseItemButton;
    goto LABEL_15;
  }
}


void __fastcall BattleRetryConfirmComponent__SetCostValueText(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_o *costPoint,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *items,
        const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *v6; // x19
  __int64 v7; // x8
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int128 v10; // q0
  __int128 v11; // q1
  __int128 v12; // q1
  __int64 v13; // x8
  __int128 *v14; // x1
  __int128 *v15; // x2
  __int128 v16; // q0
  __int128 v17; // q1
  __int64 v18; // x8
  __int128 v19; // q0
  __int128 v20; // q1
  __int128 v21; // q0
  __int128 v22; // q1
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v23; // [xsp+0h] [xbp-180h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v24; // [xsp+30h] [xbp-150h] BYREF
  __int128 v25[2]; // [xsp+60h] [xbp-120h] BYREF
  __int64 v26; // [xsp+80h] [xbp-100h]
  __int128 v27[2]; // [xsp+90h] [xbp-F0h] BYREF
  __int64 v28; // [xsp+B0h] [xbp-D0h]
  __int128 v29; // [xsp+C0h] [xbp-C0h]
  __int128 v30; // [xsp+D0h] [xbp-B0h]
  __int64 v31; // [xsp+E0h] [xbp-A0h]
  __int128 v32[2]; // [xsp+F0h] [xbp-90h] BYREF
  __int64 v33; // [xsp+110h] [xbp-70h]
  __int128 v34[2]; // [xsp+120h] [xbp-60h] BYREF
  __int64 v35; // [xsp+140h] [xbp-40h]

  v6 = this;
  if ( (byte_4BB7B32 & 1) == 0 )
  {
    this = (BattleRetryConfirmComponent_o *)sub_1C13D24(&StringLiteral_1/*""*/, costPoint);
    byte_4BB7B32 = 1;
  }
  if ( !items )
    sub_1C13F80(this, costPoint);
  v7 = *(_QWORD *)&items->max_length;
  if ( !v7 )
  {
    v16 = *(_OWORD *)&costPoint->fields.useName;
    v17 = *(_OWORD *)&costPoint->fields.possessionName;
    v18 = *(_QWORD *)&costPoint->fields.isIndividualLimit;
    v14 = v34;
    v15 = v32;
    memset(v32, 0, sizeof(v32));
    v35 = v18;
    v34[0] = v16;
    v34[1] = v17;
    v33 = 0LL;
LABEL_10:
    BattleRetryConfirmComponent__SetCostValueTextSingle(
      v6,
      (BattleRetryConfirmComponent_RetryConfirmItemStr_o *)v14,
      (BattleRetryConfirmComponent_RetryConfirmItemStr_o *)v15,
      method);
    return;
  }
  if ( (_DWORD)v7 == 1 )
  {
    v8 = System_String__op_Equality(costPoint->fields.useName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v8 )
    {
      v11 = *(_OWORD *)&costPoint->fields.useName;
      v10 = *(_OWORD *)&costPoint->fields.possessionName;
      v31 = *(_QWORD *)&costPoint->fields.isIndividualLimit;
      v29 = v11;
      v30 = v10;
      if ( !items->max_length )
        sub_1C13F88(v8, v9);
      v12 = *(_OWORD *)&items->m_Items[0].fields.possessionName;
      v13 = *(_QWORD *)&items->m_Items[0].fields.isIndividualLimit;
      v25[0] = *(_OWORD *)&items->m_Items[0].fields.useName;
      v25[1] = v12;
      v26 = v13;
      v27[0] = v29;
      v27[1] = v30;
      v28 = v31;
      v14 = v27;
      v15 = v25;
      goto LABEL_10;
    }
    v7 = *(_QWORD *)&items->max_length;
  }
  if ( (_DWORD)v7 == 2 )
  {
    if ( System_String__op_Equality(costPoint->fields.useName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
LABEL_17:
      v20 = *(_OWORD *)&costPoint->fields.useName;
      v19 = *(_OWORD *)&costPoint->fields.possessionName;
      *(_QWORD *)&v24.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
      *(_OWORD *)&v24.fields.useName = v20;
      *(_OWORD *)&v24.fields.possessionName = v19;
      BattleRetryConfirmComponent__SetCostValueTextDouble(v6, &v24, items, method);
      return;
    }
    v7 = *(_QWORD *)&items->max_length;
  }
  if ( (_DWORD)v7 == 1
    && System_String__op_Inequality(costPoint->fields.useName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    goto LABEL_17;
  }
  v22 = *(_OWORD *)&costPoint->fields.useName;
  v21 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v23.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v23.fields.useName = v22;
  *(_OWORD *)&v23.fields.possessionName = v21;
  BattleRetryConfirmComponent__SetCostValueTextTriple(v6, &v23, items, method);
}


void __fastcall BattleRetryConfirmComponent__SetCostValueTextDouble(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_o *costPoint,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *items,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *reqSingleParent; // x0
  UILabel_o *mainText; // x22
  __int128 v9; // q0
  __int128 v10; // q1
  BattleRetryConfirmComponent_o *v11; // x0
  const MethodInfo *v12; // x3
  __int128 v13; // q0
  __int128 v14; // q1
  BattleRetryConfirmComponent_o *v15; // x0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  struct RetryConfirmItem_array *doubleItems; // x8
  unsigned __int64 v19; // x21
  BattleRetryConfirmComponent_RetryConfirmItemStr_o *m_Items; // x22
  __int64 v21; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v23; // x10
  __int128 v24; // q0
  __int128 v25; // q1
  const MethodInfo *v26; // x3
  __int128 v27; // q0
  __int128 v28; // q1
  struct RetryConfirmItem_array *doubleItemsWithUseItemButton; // x8
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v30; // [xsp+0h] [xbp-130h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v31; // [xsp+30h] [xbp-100h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v32; // [xsp+60h] [xbp-D0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v33; // [xsp+90h] [xbp-A0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v34; // [xsp+C0h] [xbp-70h] BYREF

  if ( (byte_4BB7B30 & 1) == 0 )
  {
    sub_1C13D24(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_4BB7B30 = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqSingleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqDoubleParent;
  if ( !reqSingleParent )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(reqSingleParent, 1, 0LL);
  reqSingleParent = this->fields.reqDoubleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqTripleParent;
  if ( !reqSingleParent )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqTripleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = (UnityEngine_GameObject_o *)BattleRetryConfirmComponent_TypeInfo;
  mainText = this->fields.mainText;
  if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
  if ( !mainText )
    goto LABEL_23;
  UILabel__set_fontSize(mainText, BattleRetryConfirmComponent_TypeInfo->static_fields->MAIN_TEXT_DEFAULT_FONT_SIZE, 0LL);
  v10 = *(_OWORD *)&costPoint->fields.useName;
  v9 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v34.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v34.fields.useName = v10;
  *(_OWORD *)&v34.fields.possessionName = v9;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v11, &v34, &this->fields.doubleAp, v12);
  v14 = *(_OWORD *)&costPoint->fields.useName;
  v13 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v33.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v33.fields.useName = v14;
  *(_OWORD *)&v33.fields.possessionName = v13;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v15, &v33, &this->fields.doubleApWithUseItemButton, v16);
  doubleItems = this->fields.doubleItems;
  if ( !doubleItems )
LABEL_23:
    sub_1C13F80(reqSingleParent, costPoint);
  v19 = 0LL;
  m_Items = items->m_Items;
  v21 = 32LL;
  while ( 1 )
  {
    max_length = doubleItems->max_length;
    if ( (__int64)v19 >= (int)max_length )
      break;
    if ( !items )
      goto LABEL_23;
    v23 = items->max_length;
    if ( (__int64)v19 >= (int)v23 )
      break;
    if ( v19 >= v23 )
      goto LABEL_25;
    v25 = *(_OWORD *)&m_Items->fields.useName;
    v24 = *(_OWORD *)&m_Items->fields.possessionName;
    *(_QWORD *)&v32.fields.isIndividualLimit = *(_QWORD *)&m_Items->fields.isIndividualLimit;
    *(_OWORD *)&v32.fields.useName = v25;
    *(_OWORD *)&v32.fields.possessionName = v24;
    if ( v19 >= max_length )
      goto LABEL_25;
    BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
      (BattleRetryConfirmComponent_o *)reqSingleParent,
      &v32,
      (RetryConfirmItem_o **)((char *)doubleItems + v21),
      v17);
    if ( v19 >= items->max_length )
      goto LABEL_25;
    v28 = *(_OWORD *)&m_Items->fields.useName;
    v27 = *(_OWORD *)&m_Items->fields.possessionName;
    *(_QWORD *)&v31.fields.isIndividualLimit = *(_QWORD *)&m_Items->fields.isIndividualLimit;
    *(_OWORD *)&v31.fields.useName = v28;
    *(_OWORD *)&v31.fields.possessionName = v27;
    doubleItemsWithUseItemButton = this->fields.doubleItemsWithUseItemButton;
    if ( !doubleItemsWithUseItemButton )
      goto LABEL_23;
    v30 = v31;
    if ( v19 >= doubleItemsWithUseItemButton->max_length )
LABEL_25:
      sub_1C13F88(reqSingleParent, costPoint);
    ++v19;
    ++m_Items;
    BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
      (BattleRetryConfirmComponent_o *)reqSingleParent,
      &v30,
      (RetryConfirmItem_o **)((char *)doubleItemsWithUseItemButton + v21),
      v26);
    doubleItems = this->fields.doubleItems;
    v21 += 8LL;
    if ( !doubleItems )
      goto LABEL_23;
  }
}


void __fastcall BattleRetryConfirmComponent__SetCostValueTextSingle(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_o *costPoint,
        BattleRetryConfirmComponent_RetryConfirmItemStr_o *item,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *reqSingleParent; // x0
  UILabel_o *mainText; // x22
  __int128 v9; // q0
  __int128 v10; // q1
  BattleRetryConfirmComponent_o *v11; // x0
  const MethodInfo *v12; // x3
  __int128 v13; // q0
  __int128 v14; // q1
  BattleRetryConfirmComponent_o *v15; // x0
  const MethodInfo *v16; // x3
  __int128 v17; // q0
  __int128 v18; // q1
  BattleRetryConfirmComponent_o *v19; // x0
  const MethodInfo *v20; // x3
  __int128 v21; // q0
  __int128 v22; // q1
  BattleRetryConfirmComponent_o *v23; // x0
  const MethodInfo *v24; // x3
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v25; // [xsp+0h] [xbp-F0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v26; // [xsp+30h] [xbp-C0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v27; // [xsp+60h] [xbp-90h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v28; // [xsp+90h] [xbp-60h] BYREF

  if ( (byte_4BB7B2F & 1) == 0 )
  {
    sub_1C13D24(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_4BB7B2F = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(reqSingleParent, 1, 0LL);
  reqSingleParent = this->fields.reqSingleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqDoubleParent;
  if ( !reqSingleParent )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqDoubleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqTripleParent;
  if ( !reqSingleParent )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqTripleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = (UnityEngine_GameObject_o *)BattleRetryConfirmComponent_TypeInfo;
  mainText = this->fields.mainText;
  if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
  if ( !mainText )
LABEL_13:
    sub_1C13F80(reqSingleParent, costPoint);
  UILabel__set_fontSize(mainText, BattleRetryConfirmComponent_TypeInfo->static_fields->MAIN_TEXT_DEFAULT_FONT_SIZE, 0LL);
  v10 = *(_OWORD *)&costPoint->fields.useName;
  v9 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v28.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v28.fields.useName = v10;
  *(_OWORD *)&v28.fields.possessionName = v9;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v11, &v28, &this->fields.singleAp, v12);
  v14 = *(_OWORD *)&costPoint->fields.useName;
  v13 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v27.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v27.fields.useName = v14;
  *(_OWORD *)&v27.fields.possessionName = v13;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v15, &v27, &this->fields.singleApWithUseItemButton, v16);
  v18 = *(_OWORD *)&item->fields.useName;
  v17 = *(_OWORD *)&item->fields.possessionName;
  *(_QWORD *)&v26.fields.isIndividualLimit = *(_QWORD *)&item->fields.isIndividualLimit;
  *(_OWORD *)&v26.fields.useName = v18;
  *(_OWORD *)&v26.fields.possessionName = v17;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v19, &v26, &this->fields.singleItem, v20);
  v22 = *(_OWORD *)&item->fields.useName;
  v21 = *(_OWORD *)&item->fields.possessionName;
  *(_QWORD *)&v25.fields.isIndividualLimit = *(_QWORD *)&item->fields.isIndividualLimit;
  *(_OWORD *)&v25.fields.useName = v22;
  *(_OWORD *)&v25.fields.possessionName = v21;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v23, &v25, &this->fields.singleItemWithUseItemButton, v24);
}


void __fastcall BattleRetryConfirmComponent__SetCostValueTextTriple(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_o *costPoint,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *items,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *reqSingleParent; // x0
  UILabel_o *mainText; // x22
  __int128 v9; // q0
  __int128 v10; // q1
  BattleRetryConfirmComponent_o *v11; // x0
  const MethodInfo *v12; // x3
  __int128 v13; // q0
  __int128 v14; // q1
  BattleRetryConfirmComponent_o *v15; // x0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  struct RetryConfirmItem_array *tripleItems; // x8
  unsigned __int64 v19; // x21
  BattleRetryConfirmComponent_RetryConfirmItemStr_o *m_Items; // x22
  __int64 v21; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v23; // x10
  __int128 v24; // q0
  __int128 v25; // q1
  const MethodInfo *v26; // x3
  __int128 v27; // q0
  __int128 v28; // q1
  struct RetryConfirmItem_array *tripleItemsWithUseItemButton; // x8
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v30; // [xsp+0h] [xbp-130h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v31; // [xsp+30h] [xbp-100h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v32; // [xsp+60h] [xbp-D0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v33; // [xsp+90h] [xbp-A0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v34; // [xsp+C0h] [xbp-70h] BYREF

  if ( (byte_4BB7B31 & 1) == 0 )
  {
    sub_1C13D24(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_4BB7B31 = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqSingleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqDoubleParent;
  if ( !reqSingleParent )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqDoubleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqTripleParent;
  if ( !reqSingleParent )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(reqSingleParent, 1, 0LL);
  reqSingleParent = this->fields.reqTripleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = (UnityEngine_GameObject_o *)BattleRetryConfirmComponent_TypeInfo;
  mainText = this->fields.mainText;
  if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
  if ( !mainText )
    goto LABEL_23;
  UILabel__set_fontSize(
    mainText,
    BattleRetryConfirmComponent_TypeInfo->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM,
    0LL);
  v10 = *(_OWORD *)&costPoint->fields.useName;
  v9 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v34.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v34.fields.useName = v10;
  *(_OWORD *)&v34.fields.possessionName = v9;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v11, &v34, &this->fields.tripleAp, v12);
  v14 = *(_OWORD *)&costPoint->fields.useName;
  v13 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v33.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v33.fields.useName = v14;
  *(_OWORD *)&v33.fields.possessionName = v13;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v15, &v33, &this->fields.tripleApWithUseItemButton, v16);
  tripleItems = this->fields.tripleItems;
  if ( !tripleItems )
LABEL_23:
    sub_1C13F80(reqSingleParent, costPoint);
  v19 = 0LL;
  m_Items = items->m_Items;
  v21 = 32LL;
  while ( 1 )
  {
    max_length = tripleItems->max_length;
    if ( (__int64)v19 >= (int)max_length )
      break;
    if ( !items )
      goto LABEL_23;
    v23 = items->max_length;
    if ( (__int64)v19 >= (int)v23 )
      break;
    if ( v19 >= v23 )
      goto LABEL_25;
    v25 = *(_OWORD *)&m_Items->fields.useName;
    v24 = *(_OWORD *)&m_Items->fields.possessionName;
    *(_QWORD *)&v32.fields.isIndividualLimit = *(_QWORD *)&m_Items->fields.isIndividualLimit;
    *(_OWORD *)&v32.fields.useName = v25;
    *(_OWORD *)&v32.fields.possessionName = v24;
    if ( v19 >= max_length )
      goto LABEL_25;
    BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
      (BattleRetryConfirmComponent_o *)reqSingleParent,
      &v32,
      (RetryConfirmItem_o **)((char *)tripleItems + v21),
      v17);
    if ( v19 >= items->max_length )
      goto LABEL_25;
    v28 = *(_OWORD *)&m_Items->fields.useName;
    v27 = *(_OWORD *)&m_Items->fields.possessionName;
    *(_QWORD *)&v31.fields.isIndividualLimit = *(_QWORD *)&m_Items->fields.isIndividualLimit;
    *(_OWORD *)&v31.fields.useName = v28;
    *(_OWORD *)&v31.fields.possessionName = v27;
    tripleItemsWithUseItemButton = this->fields.tripleItemsWithUseItemButton;
    if ( !tripleItemsWithUseItemButton )
      goto LABEL_23;
    v30 = v31;
    if ( v19 >= tripleItemsWithUseItemButton->max_length )
LABEL_25:
      sub_1C13F88(reqSingleParent, costPoint);
    ++v19;
    ++m_Items;
    BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
      (BattleRetryConfirmComponent_o *)reqSingleParent,
      &v30,
      (RetryConfirmItem_o **)((char *)tripleItemsWithUseItemButton + v21),
      v26);
    tripleItems = this->fields.tripleItems;
    v21 += 8LL;
    if ( !tripleItems )
      goto LABEL_23;
  }
}


void __fastcall BattleRetryConfirmComponent__SetFriendshipUpItemUseButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *friendshipUpItemSwitchComponent; // x20
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v11; // x1
  char v12; // w20
  System_Collections_Generic_IEnumerable_T__o *CachedFriendshipUpItemInfo_k__BackingField; // x20
  BattleRetryConfirmComponent___c_c *v14; // x0
  System_Action_object__o *_9__59_0; // x21
  Il2CppObject *v16; // x22
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_GameObject_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x20
  UILabel_o *mainText; // x19
  struct BattleRetryConfirmComponent_StaticFields *v27; // x8
  UnityEngine_GameObject_o *v28; // x20
  UnityEngine_GameObject_o *v29; // x20
  char v30; // w20
  BattleRetryConfirmComponent_c *v31; // x8
  UnityEngine_GameObject_o *v32; // x20
  UnityEngine_GameObject_o *v33; // x20
  char v34; // w20
  __int64 v35; // x9

  if ( (byte_4BB7B38 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_FriendshipUpItemInfo__TypeInfo, method);
    sub_1C13D24(&Method_BasicHelper_ForEach_FriendshipUpItemInfo___, v3);
    sub_1C13D24(&BattleRetryConfirmComponent_TypeInfo, v4);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    sub_1C13D24(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v6);
    sub_1C13D24(&Method_BattleRetryConfirmComponent___c__SetFriendshipUpItemUseButton_b__59_0__, v7);
    sub_1C13D24(&BattleRetryConfirmComponent___c_TypeInfo, v8);
    byte_4BB7B38 = 1;
  }
  friendshipUpItemSwitchComponent = (UnityEngine_Object_o *)this->fields.friendshipUpItemSwitchComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemSwitchComponent, 0LL, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL);
      if ( this->fields.friendshipUpItemSwitchComponent )
      {
        v12 = (char)Instance;
        Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                   0LL);
        if ( Instance )
        {
          if ( (v12 & 1) != 0 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
            if ( !Instance )
              goto LABEL_71;
            FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, 0LL);
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
            Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( !Instance )
              goto LABEL_71;
            CachedFriendshipUpItemInfo_k__BackingField = (System_Collections_Generic_IEnumerable_T__o *)Instance->fields._CachedFriendshipUpItemInfo_k__BackingField;
            v14 = BattleRetryConfirmComponent___c_TypeInfo;
            if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
              v14 = BattleRetryConfirmComponent___c_TypeInfo;
            }
            _9__59_0 = (System_Action_object__o *)v14->static_fields->__9__59_0;
            if ( !_9__59_0 )
            {
              if ( !v14->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v14);
                v14 = BattleRetryConfirmComponent___c_TypeInfo;
              }
              v16 = (Il2CppObject *)v14->static_fields->__9;
              _9__59_0 = (System_Action_object__o *)sub_1C13F70(System_Action_FriendshipUpItemInfo__TypeInfo);
              System_Action_object____ctor(
                _9__59_0,
                v16,
                Method_BattleRetryConfirmComponent___c__SetFriendshipUpItemUseButton_b__59_0__,
                0LL);
              static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
              static_fields->__9__59_0 = (struct System_Action_FriendshipUpItemInfo__o *)_9__59_0;
              sub_1C13CC8(
                (PartyOrganizationUtility_o *)&static_fields->__9__59_0,
                (int64_t)_9__59_0,
                v18,
                v19,
                v20,
                v21,
                v22,
                v23);
            }
            BasicHelper__ForEach_object_(
              CachedFriendshipUpItemInfo_k__BackingField,
              (System_Action_T__o *)_9__59_0,
              (const MethodInfo_2F7C3C8 *)Method_BasicHelper_ForEach_FriendshipUpItemInfo___);
          }
          Instance = (PartyOrganizationUtility_o *)this->fields.reqSingleParent;
          if ( Instance )
          {
            Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                       (UnityEngine_GameObject_o *)Instance,
                                                       0LL);
            if ( Instance )
            {
              if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
              {
                Instance = (PartyOrganizationUtility_o *)this->fields.reqSingleParent;
                if ( Instance )
                {
                  Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                             (UnityEngine_GameObject_o *)Instance,
                                                             0LL);
                  if ( this->fields.friendshipUpItemSwitchComponent )
                  {
                    v24 = (UnityEngine_GameObject_o *)Instance;
                    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                               0LL);
                    if ( Instance )
                    {
                      Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                 (UnityEngine_GameObject_o *)Instance,
                                                                 0LL);
                      if ( v24 )
                      {
                        UnityEngine_GameObject__SetActive(v24, ((unsigned __int8)Instance & 1) == 0, 0LL);
                        Instance = (PartyOrganizationUtility_o *)this->fields.reqSingleParentWithUseItemButton;
                        if ( Instance )
                        {
                          Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                     (UnityEngine_GameObject_o *)Instance,
                                                                     0LL);
                          if ( this->fields.friendshipUpItemSwitchComponent )
                          {
                            v25 = (UnityEngine_GameObject_o *)Instance;
                            Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                                       0LL);
                            if ( Instance )
                            {
                              Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                         (UnityEngine_GameObject_o *)Instance,
                                                                         0LL);
                              if ( v25 )
                              {
                                UnityEngine_GameObject__SetActive(v25, (unsigned __int8)Instance & 1, 0LL);
                                mainText = this->fields.mainText;
                                Instance = (PartyOrganizationUtility_o *)BattleRetryConfirmComponent_TypeInfo;
                                if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                if ( mainText )
                                {
                                  v27 = BattleRetryConfirmComponent_TypeInfo->static_fields;
LABEL_70:
                                  UILabel__set_fontSize(mainText, v27->MAIN_TEXT_DEFAULT_FONT_SIZE, 0LL);
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
              else
              {
                Instance = (PartyOrganizationUtility_o *)this->fields.reqDoubleParent;
                if ( Instance )
                {
                  Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                             (UnityEngine_GameObject_o *)Instance,
                                                             0LL);
                  if ( Instance )
                  {
                    if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)Instance, 0LL) )
                    {
                      Instance = (PartyOrganizationUtility_o *)this->fields.reqDoubleParent;
                      if ( Instance )
                      {
                        Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                   (UnityEngine_GameObject_o *)Instance,
                                                                   0LL);
                        if ( this->fields.friendshipUpItemSwitchComponent )
                        {
                          v28 = (UnityEngine_GameObject_o *)Instance;
                          Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                                     0LL);
                          if ( Instance )
                          {
                            Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                       (UnityEngine_GameObject_o *)Instance,
                                                                       0LL);
                            if ( v28 )
                            {
                              UnityEngine_GameObject__SetActive(v28, ((unsigned __int8)Instance & 1) == 0, 0LL);
                              Instance = (PartyOrganizationUtility_o *)this->fields.reqDoubleParentWithUseItemButton;
                              if ( Instance )
                              {
                                Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                           0LL);
                                if ( this->fields.friendshipUpItemSwitchComponent )
                                {
                                  v29 = (UnityEngine_GameObject_o *)Instance;
                                  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                                             0LL);
                                  if ( Instance )
                                  {
                                    Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                               (UnityEngine_GameObject_o *)Instance,
                                                                               0LL);
                                    if ( v29 )
                                    {
                                      UnityEngine_GameObject__SetActive(v29, (unsigned __int8)Instance & 1, 0LL);
                                      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
                                      if ( Instance )
                                      {
                                        mainText = this->fields.mainText;
                                        Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)Instance,
                                                                                   0LL);
                                        if ( Instance )
                                        {
                                          Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                     (UnityEngine_GameObject_o *)Instance,
                                                                                     0LL);
                                          v30 = (char)Instance;
                                          v31 = BattleRetryConfirmComponent_TypeInfo;
                                          if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                            v31 = BattleRetryConfirmComponent_TypeInfo;
                                          }
                                          if ( mainText )
                                          {
                                            v27 = v31->static_fields;
                                            if ( (v30 & 1) != 0 )
                                              v27 = (struct BattleRetryConfirmComponent_StaticFields *)((char *)v27 + 8);
                                            goto LABEL_70;
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
                    else
                    {
                      Instance = (PartyOrganizationUtility_o *)this->fields.reqTripleParent;
                      if ( Instance )
                      {
                        Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                   (UnityEngine_GameObject_o *)Instance,
                                                                   0LL);
                        if ( this->fields.friendshipUpItemSwitchComponent )
                        {
                          v32 = (UnityEngine_GameObject_o *)Instance;
                          Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                                     0LL);
                          if ( Instance )
                          {
                            Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                       (UnityEngine_GameObject_o *)Instance,
                                                                       0LL);
                            if ( v32 )
                            {
                              UnityEngine_GameObject__SetActive(v32, ((unsigned __int8)Instance & 1) == 0, 0LL);
                              Instance = (PartyOrganizationUtility_o *)this->fields.reqTripleParentWithUseItemButton;
                              if ( Instance )
                              {
                                Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                           0LL);
                                if ( this->fields.friendshipUpItemSwitchComponent )
                                {
                                  v33 = (UnityEngine_GameObject_o *)Instance;
                                  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                                             0LL);
                                  if ( Instance )
                                  {
                                    Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                               (UnityEngine_GameObject_o *)Instance,
                                                                               0LL);
                                    if ( v33 )
                                    {
                                      UnityEngine_GameObject__SetActive(v33, (unsigned __int8)Instance & 1, 0LL);
                                      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
                                      if ( Instance )
                                      {
                                        mainText = this->fields.mainText;
                                        Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                   (UnityEngine_Component_o *)Instance,
                                                                                   0LL);
                                        if ( Instance )
                                        {
                                          Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                     (UnityEngine_GameObject_o *)Instance,
                                                                                     0LL);
                                          v34 = (char)Instance;
                                          if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                          if ( mainText )
                                          {
                                            v35 = 4LL;
                                            if ( (v34 & 1) != 0 )
                                              v35 = 12LL;
                                            v27 = (struct BattleRetryConfirmComponent_StaticFields *)((char *)BattleRetryConfirmComponent_TypeInfo->static_fields + v35);
                                            goto LABEL_70;
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
    }
LABEL_71:
    sub_1C13F80(Instance, v11);
  }
}


void __fastcall BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_o *value,
        RetryConfirmItem_o **item,
        const MethodInfo *method)
{
  if ( !*item
    || (this = (BattleRetryConfirmComponent_o *)(*item)->fields.useName) == 0LL
    || (UILabel__set_text((UILabel_o *)this, value->fields.useName, 0LL), !*item)
    || (this = (BattleRetryConfirmComponent_o *)(*item)->fields.useAmount) == 0LL
    || (UILabel__set_text((UILabel_o *)this, value->fields.useAmount, 0LL), !*item)
    || (this = (BattleRetryConfirmComponent_o *)(*item)->fields.possessionName) == 0LL
    || (UILabel__set_text((UILabel_o *)this, value->fields.possessionName, 0LL), !*item)
    || (this = (BattleRetryConfirmComponent_o *)(*item)->fields.possessionAmount) == 0LL )
  {
    sub_1C13F80(this, value);
  }
  UILabel__set_text((UILabel_o *)this, value->fields.possessionAmount, 0LL);
}


bool __fastcall BattleRetryConfirmComponent__SetValues(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x24
  void *Instance; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  Il2CppObject *MasterData_object; // x20
  QuestEntity_o *v64; // x29
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v66; // x20
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_Text_StringBuilder_o *v73; // x26
  System_String_o *v74; // x20
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  QuestEntity_o *v81; // x25
  __int64 *v82; // x23
  Il2CppObject *v83; // x26
  int32_t actMax; // w27
  BalanceConfig_c *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  Il2CppObject *v92; // x28
  Il2CppObject *v93; // x29
  il2cpp_array_size_t v94; // w22
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v96; // x8
  _DWORD *v97; // x25
  ItemEntity_o *v98; // x20
  int32_t qp; // w24
  struct System_Int32_array *nums; // x8
  System_String_o *v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  struct System_Int32_array *v111; // x8
  System_String_o *v112; // x25
  Il2CppObject *v113; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  System_String_o *v120; // x0
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  int32_t MaxNum; // w25
  bool v128; // w19
  System_String_o *v129; // x25
  __int64 v130; // x2
  __int64 v131; // x3
  __int64 v132; // x4
  Il2CppObject *v133; // x24
  __int64 v134; // x2
  __int64 v135; // x3
  __int64 v136; // x4
  Il2CppObject *v137; // x0
  System_String_o *v138; // x0
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  System_String_o *v145; // x20
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  Il2CppObject *v149; // x0
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  __int64 v156; // x8
  _QWORD *v157; // x10
  __int64 v158; // x9
  __int128 v159; // q0
  __int128 v160; // q1
  __int64 v161; // x8
  const MethodInfo_3696E50 *v162; // x2
  System_String_o *v163; // x19
  Il2CppObject *v164; // x0
  System_String_o *v165; // x0
  System_String_o *v166; // x19
  System_String_o *v167; // x0
  System_String_o *v168; // x19
  CommonUI_o *v169; // x20
  BattleRetryConfirmComponent___c_c *v170; // x8
  System_Action_o *_9__40_1; // x22
  System_String_o *v172; // x21
  Il2CppObject *v173; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int64_t v175; // x2
  int32_t v176; // w3
  System_String_o *v177; // x4
  BattleSetupInfo_o *v178; // x5
  FollowerInfo_o *v179; // x6
  PartyListViewItem_o *v180; // x7
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  Il2CppObject *v193; // x28
  Il2CppObject *v194; // x29
  il2cpp_array_size_t v195; // w22
  struct System_Int32_array *v196; // x8
  struct System_Int32_array *v197; // x8
  _DWORD *v198; // x25
  ItemEntity_o *v199; // x20
  int32_t v200; // w24
  struct System_Int32_array *v201; // x8
  System_String_o *v202; // x0
  int64_t v203; // x2
  int32_t v204; // w3
  System_String_o *v205; // x4
  BattleSetupInfo_o *v206; // x5
  FollowerInfo_o *v207; // x6
  PartyListViewItem_o *v208; // x7
  __int64 v209; // x2
  __int64 v210; // x3
  __int64 v211; // x4
  struct System_Int32_array *v212; // x8
  System_String_o *v213; // x25
  Il2CppObject *v214; // x0
  int64_t v215; // x2
  int32_t v216; // w3
  System_String_o *v217; // x4
  BattleSetupInfo_o *v218; // x5
  FollowerInfo_o *v219; // x6
  PartyListViewItem_o *v220; // x7
  System_String_o *v221; // x0
  int64_t v222; // x2
  int32_t v223; // w3
  System_String_o *v224; // x4
  BattleSetupInfo_o *v225; // x5
  FollowerInfo_o *v226; // x6
  PartyListViewItem_o *v227; // x7
  int32_t v228; // w25
  bool v229; // w19
  System_String_o *v230; // x25
  __int64 v231; // x2
  __int64 v232; // x3
  __int64 v233; // x4
  Il2CppObject *v234; // x24
  __int64 v235; // x2
  __int64 v236; // x3
  __int64 v237; // x4
  Il2CppObject *v238; // x0
  System_String_o *v239; // x0
  int64_t v240; // x2
  int32_t v241; // w3
  System_String_o *v242; // x4
  BattleSetupInfo_o *v243; // x5
  FollowerInfo_o *v244; // x6
  PartyListViewItem_o *v245; // x7
  System_String_o *v246; // x20
  __int64 v247; // x2
  __int64 v248; // x3
  __int64 v249; // x4
  Il2CppObject *v250; // x0
  int64_t v251; // x2
  int32_t v252; // w3
  System_String_o *v253; // x4
  BattleSetupInfo_o *v254; // x5
  FollowerInfo_o *v255; // x6
  PartyListViewItem_o *v256; // x7
  __int64 v257; // x8
  _QWORD *v258; // x10
  __int64 v259; // x9
  __int128 v260; // q0
  __int128 v261; // q1
  __int64 v262; // x8
  const MethodInfo_3696E50 *v263; // x2
  System_String_o *v264; // x19
  Il2CppObject *v265; // x0
  System_String_o *v266; // x0
  System_String_o *v267; // x19
  System_String_o *v268; // x0
  System_String_o *v269; // x19
  CommonUI_o *v270; // x20
  BattleRetryConfirmComponent___c_c *v271; // x8
  System_String_o *v272; // x21
  System_Action_o *_9__40_2; // x22
  Il2CppObject *v274; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v275; // x0
  int64_t v276; // x2
  int32_t v277; // w3
  System_String_o *v278; // x4
  BattleSetupInfo_o *v279; // x5
  FollowerInfo_o *v280; // x6
  PartyListViewItem_o *v281; // x7
  MapControl_QuestInfo_o *v283; // x20
  int32_t questId; // w22
  __int64 v285; // x1
  bool IsQuestClear_38735352; // w22
  TerminalPramsManager_c *v287; // x0
  int32_t QuestId_k__BackingField; // w23
  int32_t CampaignCostCalcValue; // w22
  int32_t v290; // w8
  int32_t ActConsumeCost; // w0
  int32_t npcFollowerInfos_high; // w19
  int32_t v293; // w20
  System_String_o *CostValueColor; // x22
  __int64 v295; // x2
  __int64 v296; // x3
  __int64 v297; // x4
  Il2CppObject *v298; // x0
  Il2CppObject *v299; // x22
  System_String_o *v300; // x0
  System_String_o *v301; // x20
  __int64 v302; // x2
  __int64 v303; // x3
  __int64 v304; // x4
  Il2CppObject *v305; // x0
  Il2CppObject *v306; // x20
  System_String_o *v307; // x0
  int64_t v308; // x2
  int32_t v309; // w3
  System_String_o *v310; // x4
  BattleSetupInfo_o *v311; // x5
  FollowerInfo_o *v312; // x6
  PartyListViewItem_o *v313; // x7
  System_String_o *v314; // x0
  int64_t v315; // x2
  int32_t v316; // w3
  System_String_o *v317; // x4
  BattleSetupInfo_o *v318; // x5
  FollowerInfo_o *v319; // x6
  PartyListViewItem_o *v320; // x7
  System_String_o *v321; // x0
  int64_t v322; // x2
  int32_t v323; // w3
  System_String_o *v324; // x4
  BattleSetupInfo_o *v325; // x5
  FollowerInfo_o *v326; // x6
  PartyListViewItem_o *v327; // x7
  System_String_o *v328; // x22
  __int64 v329; // x2
  __int64 v330; // x3
  __int64 v331; // x4
  Il2CppObject *v332; // x0
  int64_t v333; // x2
  int32_t v334; // w3
  System_String_o *v335; // x4
  BattleSetupInfo_o *v336; // x5
  FollowerInfo_o *v337; // x6
  PartyListViewItem_o *v338; // x7
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v339; // x0
  const MethodInfo *v340; // x3
  const MethodInfo *v341; // x1
  UnityEngine_Object_o *friendshipUpItemSwitchComponent; // x21
  Il2CppObject *Component_object; // x0
  int64_t v344; // x2
  int32_t v345; // w3
  System_String_o *v346; // x4
  BattleSetupInfo_o *v347; // x5
  FollowerInfo_o *v348; // x6
  PartyListViewItem_o *v349; // x7
  int64_t v350; // x2
  int32_t v351; // w3
  System_String_o *v352; // x4
  BattleSetupInfo_o *v353; // x5
  FollowerInfo_o *v354; // x6
  PartyListViewItem_o *v355; // x7
  struct FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x1
  const MethodInfo *v357; // x1
  System_Action_o *v358; // x20
  BattleRetryConfirmComponent_o *v359; // x0
  const MethodInfo *v360; // x2
  System_Collections_IEnumerator_o *v361; // x0
  int32_t v362; // [xsp+44h] [xbp-1FCh]
  Il2CppObject *v363; // [xsp+48h] [xbp-1F8h]
  Il2CppObject *v364; // [xsp+48h] [xbp-1F8h]
  BattleRetryConfirmComponent_o *v365; // [xsp+50h] [xbp-1F0h]
  BattleRetryConfirmComponent_o *v366; // [xsp+50h] [xbp-1F0h]
  Il2CppObject *object; // [xsp+58h] [xbp-1E8h]
  QuestEntity_o *v368; // [xsp+60h] [xbp-1E0h]
  UserGameEntity_o **p_userGameEntity; // [xsp+80h] [xbp-1C0h]
  void **v370; // [xsp+88h] [xbp-1B8h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v371; // [xsp+90h] [xbp-1B0h] BYREF
  __int128 v372; // [xsp+C0h] [xbp-180h]
  __int128 v373; // [xsp+D0h] [xbp-170h]
  __int64 v374; // [xsp+E0h] [xbp-160h]
  int32_t fixedVal; // [xsp+ECh] [xbp-154h] BYREF
  __int128 v376[3]; // [xsp+F0h] [xbp-150h] BYREF
  __int128 v377[3]; // [xsp+120h] [xbp-120h] BYREF
  PartyOrganizationUtility_o v378; // [xsp+150h] [xbp-F0h] BYREF

  if ( (byte_4BB7B2B & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&CondType_TypeInfo, v3);
    sub_1C13D24(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1C13D24(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1C13D24(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_1C13D24(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_1C13D24(&Method_UnityEngine_GameObject_AddComponent_FriendshipUpItemSwitchComponent___, v9);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSwitchComponent___, v10);
    sub_1C13D24(&int_TypeInfo, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__, v14);
    sub_1C13D24(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo, v15);
    sub_1C13D24(&LocalizationManager_TypeInfo, v16);
    sub_1C13D24(&NetworkManager_TypeInfo, v17);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v18);
    sub_1C13D24(&MapControl_QuestInfo_TypeInfo, v19);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1C13D24(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v22);
    sub_1C13D24(&System_Text_StringBuilder_TypeInfo, v23);
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v24);
    sub_1C13D24(&Method_BattleRetryConfirmComponent___c__SetValues_b__40_1__, v25);
    sub_1C13D24(&Method_BattleRetryConfirmComponent___c__SetValues_b__40_2__, v26);
    sub_1C13D24(&Method_BattleRetryConfirmComponent___c__DisplayClass40_0__SetValues_b__0__, v27);
    sub_1C13D24(&BattleRetryConfirmComponent___c__DisplayClass40_0_TypeInfo, v28);
    sub_1C13D24(&BattleRetryConfirmComponent___c_TypeInfo, v29);
    sub_1C13D24(&StringLiteral_43/*"\n"*/, v30);
    sub_1C13D24(&StringLiteral_3004/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, v31);
    sub_1C13D24(&StringLiteral_3901/*"CONNECT_TIP_MESSAGE"*/, v32);
    sub_1C13D24(&StringLiteral_11075/*"QUEST_CONFIRM_START2"*/, v33);
    sub_1C13D24(&StringLiteral_3002/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, v34);
    sub_1C13D24(&StringLiteral_3003/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, v35);
    sub_1C13D24(&StringLiteral_2150/*"AP_FULL_MSG"*/, v36);
    sub_1C13D24(&StringLiteral_3902/*"CONSTRUCTED ("*/, v37);
    sub_1C13D24(&StringLiteral_3008/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v38);
    sub_1C13D24(&StringLiteral_3007/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, v39);
    sub_1C13D24(&StringLiteral_44/*"\n\n"*/, v40);
    sub_1C13D24(&StringLiteral_3005/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, v41);
    sub_1C13D24(&StringLiteral_2999/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, v42);
    sub_1C13D24(&StringLiteral_1/*""*/, v43);
    sub_1C13D24(&StringLiteral_3006/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, v44);
    sub_1C13D24(&StringLiteral_3000/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/, v45);
    sub_1C13D24(&StringLiteral_3001/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_SUB"*/, v46);
    byte_4BB7B2B = 1;
  }
  HIDWORD(v378.fields._npcFollowerInfos) = 0;
  memset(&v378, 0, 40);
  memset(v377, 0, 40);
  memset(v376, 0, 40);
  fixedVal = 0;
  v47 = sub_1C13F70(BattleRetryConfirmComponent___c__DisplayClass40_0_TypeInfo);
  BattleRetryConfirmComponent___c__DisplayClass40_0___ctor(
    (BattleRetryConfirmComponent___c__DisplayClass40_0_o *)v47,
    0LL);
  if ( !v47 )
    goto LABEL_188;
  *(_QWORD *)(v47 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v47 + 16), (int64_t)this, v50, v51, v52, v53, v54, v55);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
    (int64_t)SelfUserGame,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_188;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BAF44D )
  {
    sub_1C13D24(&TerminalPramsManager_TypeInfo, v49);
    byte_4BAF44D = 1;
  }
  Instance = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = TerminalPramsManager_TypeInfo;
  }
  p_userGameEntity = &this->fields.userGameEntity;
  if ( !MasterData_object )
    goto LABEL_188;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
               *(_DWORD *)(*((_QWORD *)Instance + 23) + 20LL),
               (const MethodInfo_3238624 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_188;
  v64 = (QuestEntity_o *)Instance;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0, 0LL);
  HIDWORD(v378.fields._npcFollowerInfos) = 0;
  memset(&v378, 0, 40);
  v66 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_1C13F70(System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v66,
    (const MethodInfo_369652C *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  object = (Il2CppObject *)v47;
  *(_QWORD *)(v47 + 24) = v66;
  v370 = (void **)(v47 + 24);
  sub_1C13CC8((PartyOrganizationUtility_o *)(v47 + 24), (int64_t)v66, v67, v68, v69, v70, v71, v72);
  v73 = (System_Text_StringBuilder_o *)sub_1C13F70(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v73, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v74 = LocalizationManager__Get((System_String_o *)StringLiteral_3901/*"CONNECT_TIP_MESSAGE"*/, 0LL);
  v368 = v64;
  switch ( QuestEntity__GetConsumeType(v64, 0LL) )
  {
    case 1:
      v81 = v64;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3901/*"CONNECT_TIP_MESSAGE"*/, 0LL);
      v82 = &qword_4BAF000;
      if ( !*p_userGameEntity )
        goto LABEL_188;
      v83 = (Il2CppObject *)Instance;
      Instance = (void *)UserGameEntity__getAct(*p_userGameEntity, 0LL);
      HIDWORD(v378.fields._npcFollowerInfos) = (_DWORD)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_188;
      actMax = (*p_userGameEntity)->fields.actMax;
      break;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3902/*"CONSTRUCTED ("*/, 0LL);
      v81 = v64;
      v82 = &qword_4BAF000;
      if ( !*p_userGameEntity )
        goto LABEL_188;
      v83 = (Il2CppObject *)Instance;
      Instance = (void *)UserGameEntity__getRp(*p_userGameEntity, 0LL);
      HIDWORD(v378.fields._npcFollowerInfos) = (_DWORD)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_188;
      if ( !byte_4BB14F1 )
      {
        sub_1C13D24(&BalanceConfig_TypeInfo, v49);
        byte_4BB14F1 = 1;
      }
      v85 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v85 = BalanceConfig_TypeInfo;
      }
      actMax = v85->static_fields->UerGameRpMax;
      break;
    case 3:
      v365 = this;
      v378.klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
      v363 = (Il2CppObject *)StringLiteral_1/*""*/;
      sub_1C13CC8(&v378, (int64_t)StringLiteral_1/*""*/, v75, v76, v77, v78, v79, v80);
      v378.monitor = StringLiteral_1/*""*/;
      sub_1C13CC8((PartyOrganizationUtility_o *)&v378.monitor, (int64_t)StringLiteral_1/*""*/, v86, v87, v88, v89, v90, v91);
      if ( !ItemConsumeEntity )
        goto LABEL_76;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_188;
      v92 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_188;
      v93 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = (void *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_76;
      v94 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BAF1E5 )
        {
          sub_1C13D24(&NetworkManager_TypeInfo, v49);
          byte_4BAF1E5 = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager_TypeInfo;
        }
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_188;
        if ( v94 >= itemIds->max_length )
          goto LABEL_189;
        if ( !v93 )
          goto LABEL_188;
        Instance = UserItemMaster__GetEntity(
                     (UserItemMaster_o *)v93,
                     *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                     itemIds->m_Items[v94 + 1],
                     0LL);
        v96 = ItemConsumeEntity->fields.itemIds;
        if ( !v96 )
          goto LABEL_188;
        if ( v94 >= v96->max_length )
          goto LABEL_189;
        if ( !v92 )
          goto LABEL_188;
        v97 = Instance;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)v92,
                     v96->m_Items[v94 + 1],
                     (const MethodInfo_3238624 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_188;
        v98 = (ItemEntity_o *)Instance;
        if ( *((_DWORD *)Instance + 12) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_188;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v97
               && (Instance = (void *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL),
                   ((unsigned __int8)Instance & 1) != 0) )
        {
          qp = v97[7];
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_188;
        if ( v94 >= nums->max_length )
          goto LABEL_189;
        if ( nums->m_Items[v94 + 1] > qp )
        {
          Instance = System_String__Concat_62967944((System_String_o *)StringLiteral_43/*"\n"*/, v98->fields.name, 0LL);
          if ( !v73 )
            goto LABEL_188;
          System_Text_StringBuilder__Append_62129096(v73, (System_String_o *)Instance, 0LL);
        }
        memset(v377, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v101 = LocalizationManager__Get((System_String_o *)StringLiteral_3003/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0LL);
        *(_QWORD *)&v377[0] = System_String__Format(v101, (Il2CppObject *)v98->fields.name, 0LL);
        sub_1C13CC8((PartyOrganizationUtility_o *)v377, *(int64_t *)&v377[0], v102, v103, v104, v105, v106, v107);
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3004/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0LL);
        v111 = ItemConsumeEntity->fields.nums;
        if ( !v111 )
          goto LABEL_188;
        if ( v94 >= v111->max_length )
          goto LABEL_189;
        v112 = (System_String_o *)Instance;
        *(_DWORD *)&v378.fields._IsWaveBattleRestart_k__BackingField = v111->m_Items[v94 + 1];
        v113 = (Il2CppObject *)j_il2cpp_value_box_0(
                                 int_TypeInfo,
                                 &v378.fields._IsWaveBattleRestart_k__BackingField,
                                 v108,
                                 v109,
                                 v110);
        *((_QWORD *)&v377[0] + 1) = System_String__Format(v112, v113, 0LL);
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)((char *)v377 + 8),
          *((int64_t *)&v377[0] + 1),
          v114,
          v115,
          v116,
          v117,
          v118,
          v119);
        v120 = LocalizationManager__Get((System_String_o *)StringLiteral_3006/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        *(_QWORD *)&v377[1] = System_String__Format(v120, (Il2CppObject *)v98->fields.name, 0LL);
        sub_1C13CC8((PartyOrganizationUtility_o *)&v377[1], *(int64_t *)&v377[1], v121, v122, v123, v124, v125, v126);
        MaxNum = ItemEntity__GetMaxNum(v98, 0LL);
        v128 = MaxNum > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( MaxNum < 1 )
        {
          v145 = LocalizationManager__Get((System_String_o *)StringLiteral_3007/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
          *(_DWORD *)&v378.fields._IsWaveBattleRestart_k__BackingField = qp;
          v149 = (Il2CppObject *)j_il2cpp_value_box_0(
                                   int_TypeInfo,
                                   &v378.fields._IsWaveBattleRestart_k__BackingField,
                                   v146,
                                   v147,
                                   v148);
          v138 = System_String__Format(v145, v149, 0LL);
        }
        else
        {
          v129 = LocalizationManager__Get((System_String_o *)StringLiteral_3008/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
          *(_DWORD *)&v378.fields._IsWaveBattleRestart_k__BackingField = qp;
          v133 = (Il2CppObject *)j_il2cpp_value_box_0(
                                   int_TypeInfo,
                                   &v378.fields._IsWaveBattleRestart_k__BackingField,
                                   v130,
                                   v131,
                                   v132);
          v378.fields._SelectedPartyPosition_k__BackingField = ItemEntity__GetMaxNum(v98, 0LL);
          v137 = (Il2CppObject *)j_il2cpp_value_box_0(
                                   int_TypeInfo,
                                   &v378.fields._SelectedPartyPosition_k__BackingField,
                                   v134,
                                   v135,
                                   v136);
          v138 = System_String__Format_62982316(v129, v133, v137, 0LL);
        }
        *((_QWORD *)&v377[1] + 1) = v138;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)((char *)&v377[1] + 8),
          (int64_t)v138,
          v139,
          v140,
          v141,
          v142,
          v143,
          v144);
        LOBYTE(v377[2]) = v128;
        Instance = *v370;
        v372 = v377[0];
        v373 = v377[1];
        v374 = *(_QWORD *)&v377[2];
        if ( !Instance )
          goto LABEL_188;
        *(_OWORD *)&v378.fields._SelectedPartyPosition_k__BackingField = v372;
        *(_OWORD *)&v378.fields._BasePartyItem_k__BackingField = v373;
        *(_QWORD *)&v378.fields._IsForceDisableSupportSelectBackBtn_k__BackingField = v374;
        v156 = *((_QWORD *)Instance + 2);
        v157 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++*((_DWORD *)Instance + 7);
        if ( !v156 )
          goto LABEL_188;
        v158 = *((int *)Instance + 6);
        if ( (unsigned int)v158 >= *(_DWORD *)(v156 + 24) )
        {
          v162 = *(const MethodInfo_3696E50 **)(*(_QWORD *)(v157[4] + 192LL) + 112LL);
          *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v378.fields._IsWaveBattleRestart_k__BackingField = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v378.fields._SelectedPartyPosition_k__BackingField;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
            (BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v378.fields._IsWaveBattleRestart_k__BackingField,
            v162);
        }
        else
        {
          *((_DWORD *)Instance + 6) = v158 + 1;
          v159 = *(_OWORD *)&v378.fields._SelectedPartyPosition_k__BackingField;
          v160 = *(_OWORD *)&v378.fields._BasePartyItem_k__BackingField;
          v161 = v156 + 40 * v158;
          *(_QWORD *)(v161 + 64) = *(_QWORD *)&v378.fields._IsForceDisableSupportSelectBackBtn_k__BackingField;
          *(_OWORD *)(v161 + 32) = v159;
          *(_OWORD *)(v161 + 48) = v160;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v161 + 32), 0LL, v150, v151, v152, v153, v154, v155);
        }
        Instance = (void *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v94, 0LL);
      }
      while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_76:
      if ( !v73 )
        goto LABEL_188;
      this = v365;
      v81 = v368;
      v82 = &qword_4BAF000;
      if ( System_Text_StringBuilder__get_Length(v73, 0LL) >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v163 = LocalizationManager__Get((System_String_o *)StringLiteral_11075/*"QUEST_CONFIRM_START2"*/, 0LL);
        v164 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v73->klass->vtable._3_ToString.method)(
                                 v73,
                                 v73->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        v165 = System_String__Format(v163, v164, 0LL);
        v166 = System_String__Concat_62967944(v165, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
        v167 = LocalizationManager__Get((System_String_o *)StringLiteral_3005/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0LL);
        v168 = System_String__Concat_62967944(v166, v167, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v169 = (CommonUI_o *)Instance;
        v170 = BattleRetryConfirmComponent___c_TypeInfo;
        if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
          v170 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        _9__40_1 = v170->static_fields->__9__40_1;
        v172 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__40_1 )
        {
          if ( !v170->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v170);
            v170 = BattleRetryConfirmComponent___c_TypeInfo;
          }
          v173 = (Il2CppObject *)v170->static_fields->__9;
          _9__40_1 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(_9__40_1, v173, Method_BattleRetryConfirmComponent___c__SetValues_b__40_1__, 0LL);
          static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
          static_fields->__9__40_1 = _9__40_1;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&static_fields->__9__40_1,
            (int64_t)_9__40_1,
            v175,
            v176,
            v177,
            v178,
            v179,
            v180);
        }
        if ( v169 )
        {
          CommonUI__OpenNotificationDialog(v169, v172, v168, _9__40_1, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
          return 0;
        }
        goto LABEL_188;
      }
      v83 = v363;
      actMax = 0;
      break;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3901/*"CONNECT_TIP_MESSAGE"*/, 0LL);
      v364 = (Il2CppObject *)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_188;
      v366 = this;
      Instance = (void *)UserGameEntity__getAct(*p_userGameEntity, 0LL);
      HIDWORD(v378.fields._npcFollowerInfos) = (_DWORD)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_188;
      v362 = (*p_userGameEntity)->fields.actMax;
      v378.klass = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
      sub_1C13CC8(&v378, (int64_t)StringLiteral_1/*""*/, v181, v182, v183, v184, v185, v186);
      v378.monitor = StringLiteral_1/*""*/;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&v378.monitor,
        (int64_t)StringLiteral_1/*""*/,
        v187,
        v188,
        v189,
        v190,
        v191,
        v192);
      if ( !ItemConsumeEntity )
        goto LABEL_137;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_188;
      v193 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_188;
      v194 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = (void *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_137;
      v195 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BAF1E5 )
        {
          sub_1C13D24(&NetworkManager_TypeInfo, v49);
          byte_4BAF1E5 = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager_TypeInfo;
        }
        v196 = ItemConsumeEntity->fields.itemIds;
        if ( !v196 )
          goto LABEL_188;
        if ( v195 >= v196->max_length )
          goto LABEL_189;
        if ( !v194 )
          goto LABEL_188;
        Instance = UserItemMaster__GetEntity(
                     (UserItemMaster_o *)v194,
                     *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                     v196->m_Items[v195 + 1],
                     0LL);
        v197 = ItemConsumeEntity->fields.itemIds;
        if ( !v197 )
          goto LABEL_188;
        if ( v195 >= v197->max_length )
          goto LABEL_189;
        if ( !v193 )
          goto LABEL_188;
        v198 = Instance;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)v193,
                     v197->m_Items[v195 + 1],
                     (const MethodInfo_3238624 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_188;
        v199 = (ItemEntity_o *)Instance;
        if ( *((_DWORD *)Instance + 12) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_188;
          v200 = (*p_userGameEntity)->fields.qp;
        }
        else if ( v198
               && (Instance = (void *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL),
                   ((unsigned __int8)Instance & 1) != 0) )
        {
          v200 = v198[7];
        }
        else
        {
          v200 = 0;
        }
        v201 = ItemConsumeEntity->fields.nums;
        if ( !v201 )
          goto LABEL_188;
        if ( v195 >= v201->max_length )
          goto LABEL_189;
        if ( v201->m_Items[v195 + 1] > v200 )
        {
          Instance = System_String__Concat_62967944((System_String_o *)StringLiteral_43/*"\n"*/, v199->fields.name, 0LL);
          if ( !v73 )
            goto LABEL_188;
          System_Text_StringBuilder__Append_62129096(v73, (System_String_o *)Instance, 0LL);
        }
        memset(v376, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v202 = LocalizationManager__Get((System_String_o *)StringLiteral_3003/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0LL);
        *(_QWORD *)&v376[0] = System_String__Format(v202, (Il2CppObject *)v199->fields.name, 0LL);
        sub_1C13CC8((PartyOrganizationUtility_o *)v376, *(int64_t *)&v376[0], v203, v204, v205, v206, v207, v208);
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3004/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0LL);
        v212 = ItemConsumeEntity->fields.nums;
        if ( !v212 )
          goto LABEL_188;
        if ( v195 >= v212->max_length )
LABEL_189:
          sub_1C13F88(Instance, v49);
        v213 = (System_String_o *)Instance;
        *(_DWORD *)&v378.fields._IsWaveBattleRestart_k__BackingField = v212->m_Items[v195 + 1];
        v214 = (Il2CppObject *)j_il2cpp_value_box_0(
                                 int_TypeInfo,
                                 &v378.fields._IsWaveBattleRestart_k__BackingField,
                                 v209,
                                 v210,
                                 v211);
        *((_QWORD *)&v376[0] + 1) = System_String__Format(v213, v214, 0LL);
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)((char *)v376 + 8),
          *((int64_t *)&v376[0] + 1),
          v215,
          v216,
          v217,
          v218,
          v219,
          v220);
        v221 = LocalizationManager__Get((System_String_o *)StringLiteral_3006/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        *(_QWORD *)&v376[1] = System_String__Format(v221, (Il2CppObject *)v199->fields.name, 0LL);
        sub_1C13CC8((PartyOrganizationUtility_o *)&v376[1], *(int64_t *)&v376[1], v222, v223, v224, v225, v226, v227);
        v228 = ItemEntity__GetMaxNum(v199, 0LL);
        v229 = v228 > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v228 < 1 )
        {
          v246 = LocalizationManager__Get((System_String_o *)StringLiteral_3007/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
          *(_DWORD *)&v378.fields._IsWaveBattleRestart_k__BackingField = v200;
          v250 = (Il2CppObject *)j_il2cpp_value_box_0(
                                   int_TypeInfo,
                                   &v378.fields._IsWaveBattleRestart_k__BackingField,
                                   v247,
                                   v248,
                                   v249);
          v239 = System_String__Format(v246, v250, 0LL);
        }
        else
        {
          v230 = LocalizationManager__Get((System_String_o *)StringLiteral_3008/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
          *(_DWORD *)&v378.fields._IsWaveBattleRestart_k__BackingField = v200;
          v234 = (Il2CppObject *)j_il2cpp_value_box_0(
                                   int_TypeInfo,
                                   &v378.fields._IsWaveBattleRestart_k__BackingField,
                                   v231,
                                   v232,
                                   v233);
          v378.fields._SelectedPartyPosition_k__BackingField = ItemEntity__GetMaxNum(v199, 0LL);
          v238 = (Il2CppObject *)j_il2cpp_value_box_0(
                                   int_TypeInfo,
                                   &v378.fields._SelectedPartyPosition_k__BackingField,
                                   v235,
                                   v236,
                                   v237);
          v239 = System_String__Format_62982316(v230, v234, v238, 0LL);
        }
        *((_QWORD *)&v376[1] + 1) = v239;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)((char *)&v376[1] + 8),
          (int64_t)v239,
          v240,
          v241,
          v242,
          v243,
          v244,
          v245);
        LOBYTE(v376[2]) = v229;
        Instance = *v370;
        v372 = v376[0];
        v373 = v376[1];
        v374 = *(_QWORD *)&v376[2];
        if ( !Instance )
          goto LABEL_188;
        *(_OWORD *)&v378.fields._SelectedPartyPosition_k__BackingField = v372;
        *(_OWORD *)&v378.fields._BasePartyItem_k__BackingField = v373;
        *(_QWORD *)&v378.fields._IsForceDisableSupportSelectBackBtn_k__BackingField = v374;
        v257 = *((_QWORD *)Instance + 2);
        v258 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++*((_DWORD *)Instance + 7);
        if ( !v257 )
          goto LABEL_188;
        v259 = *((int *)Instance + 6);
        if ( (unsigned int)v259 >= *(_DWORD *)(v257 + 24) )
        {
          v263 = *(const MethodInfo_3696E50 **)(*(_QWORD *)(v258[4] + 192LL) + 112LL);
          *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v378.fields._IsWaveBattleRestart_k__BackingField = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v378.fields._SelectedPartyPosition_k__BackingField;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
            (BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v378.fields._IsWaveBattleRestart_k__BackingField,
            v263);
        }
        else
        {
          *((_DWORD *)Instance + 6) = v259 + 1;
          v260 = *(_OWORD *)&v378.fields._SelectedPartyPosition_k__BackingField;
          v261 = *(_OWORD *)&v378.fields._BasePartyItem_k__BackingField;
          v262 = v257 + 40 * v259;
          *(_QWORD *)(v262 + 64) = *(_QWORD *)&v378.fields._IsForceDisableSupportSelectBackBtn_k__BackingField;
          *(_OWORD *)(v262 + 32) = v260;
          *(_OWORD *)(v262 + 48) = v261;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v262 + 32), 0LL, v251, v252, v253, v254, v255, v256);
        }
        Instance = (void *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v195, 0LL);
      }
      while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_137:
      if ( !v73 )
        goto LABEL_188;
      this = v366;
      v81 = v368;
      v82 = &qword_4BAF000;
      if ( System_Text_StringBuilder__get_Length(v73, 0LL) >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v264 = LocalizationManager__Get((System_String_o *)StringLiteral_11075/*"QUEST_CONFIRM_START2"*/, 0LL);
        v265 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v73->klass->vtable._3_ToString.method)(
                                 v73,
                                 v73->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        v266 = System_String__Format(v264, v265, 0LL);
        v267 = System_String__Concat_62967944(v266, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
        v268 = LocalizationManager__Get((System_String_o *)StringLiteral_3005/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0LL);
        v269 = System_String__Concat_62967944(v267, v268, 0LL);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v270 = (CommonUI_o *)Instance;
        v271 = BattleRetryConfirmComponent___c_TypeInfo;
        if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
          v271 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v272 = (System_String_o *)StringLiteral_1/*""*/;
        _9__40_2 = v271->static_fields->__9__40_2;
        if ( !_9__40_2 )
        {
          if ( !v271->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v271);
            v271 = BattleRetryConfirmComponent___c_TypeInfo;
          }
          v274 = (Il2CppObject *)v271->static_fields->__9;
          _9__40_2 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
          System_Action___ctor(_9__40_2, v274, Method_BattleRetryConfirmComponent___c__SetValues_b__40_2__, 0LL);
          v275 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
          v275->__9__40_2 = _9__40_2;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&v275->__9__40_2,
            (int64_t)_9__40_2,
            v276,
            v277,
            v278,
            v279,
            v280,
            v281);
        }
        if ( v270 )
        {
          CommonUI__OpenNotificationDialog(v270, v272, v269, _9__40_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
          return 0;
        }
LABEL_188:
        sub_1C13F80(Instance, v49);
      }
      v83 = v364;
      actMax = v362;
      break;
    default:
      v81 = v64;
      actMax = 0;
      v83 = (Il2CppObject *)v74;
      v82 = &qword_4BAF000;
      break;
  }
  if ( QuestEntity__GetConsumeType(v81, 0LL) == 1
    || QuestEntity__GetConsumeType(v81, 0LL) == 2
    || QuestEntity__GetConsumeType(v81, 0LL) == 4 )
  {
    v283 = (MapControl_QuestInfo_o *)sub_1C13F70(MapControl_QuestInfo_TypeInfo);
    MapControl_QuestInfo___ctor(v283, 0LL);
    if ( !v283 )
      goto LABEL_188;
    MapControl_QuestInfo__SetTerminalParamsValue(v283, 0LL);
    questId = v283->fields.questId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    fixedVal = -1;
    IsQuestClear_38735352 = CondType__IsQuestClear_38735352(questId, -1, 0, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !*((_BYTE *)v82 + 1101) )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v285);
      *((_BYTE *)v82 + 1101) = 1;
    }
    v287 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v287 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v287->static_fields->_QuestId_k__BackingField;
    if ( !byte_4BAF44C )
    {
      sub_1C13D24(&TerminalPramsManager_TypeInfo, v285);
      v287 = TerminalPramsManager_TypeInfo;
      byte_4BAF44C = 1;
    }
    if ( !v287->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v287);
      v287 = TerminalPramsManager_TypeInfo;
    }
    CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                              v81,
                              QuestId_k__BackingField,
                              v287->static_fields->_PhaseCnt_k__BackingField,
                              !IsQuestClear_38735352,
                              &fixedVal,
                              0LL);
    Instance = MapControl_QuestInfo__GetMine(v283, 0LL);
    if ( !Instance )
      goto LABEL_188;
    QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
    v290 = fixedVal;
    v283->fields.costCalcVal = CampaignCostCalcValue;
    v283->fields._fixedCostVal_k__BackingField = v290;
    ActConsumeCost = MapControl_QuestInfo__GetActConsumeCost(v283, 0LL);
    npcFollowerInfos_high = HIDWORD(v378.fields._npcFollowerInfos);
    v293 = ActConsumeCost;
    CostValueColor = QuestEntity__GetCostValueColor(
                       CampaignCostCalcValue,
                       (ActConsumeCost > actMax) | (unsigned __int8)(ActConsumeCost > SHIDWORD(v378.fields._npcFollowerInfos)),
                       0LL);
    *(_DWORD *)&v378.fields._IsWaveBattleRestart_k__BackingField = v293;
    v298 = (Il2CppObject *)j_il2cpp_value_box_0(
                             int_TypeInfo,
                             &v378.fields._IsWaveBattleRestart_k__BackingField,
                             v295,
                             v296,
                             v297);
    v299 = (Il2CppObject *)System_String__Format(CostValueColor, v298, 0LL);
    v300 = System_Int32__ToString((int32_t)&v378.fields._npcFollowerInfos + 4, 0LL);
    if ( actMax < npcFollowerInfos_high )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v301 = LocalizationManager__Get((System_String_o *)StringLiteral_2150/*"AP_FULL_MSG"*/, 0LL);
      *(_DWORD *)&v378.fields._IsWaveBattleRestart_k__BackingField = HIDWORD(v378.fields._npcFollowerInfos);
      v305 = (Il2CppObject *)j_il2cpp_value_box_0(
                               int_TypeInfo,
                               &v378.fields._IsWaveBattleRestart_k__BackingField,
                               v302,
                               v303,
                               v304);
      v300 = System_String__Format(v301, v305, 0LL);
    }
    v306 = (Il2CppObject *)v300;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v307 = LocalizationManager__Get((System_String_o *)StringLiteral_3001/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_SUB"*/, 0LL);
    v378.klass = (PartyOrganizationUtility_c *)System_String__Format(v307, v83, 0LL);
    sub_1C13CC8(&v378, (int64_t)v378.klass, v308, v309, v310, v311, v312, v313);
    v314 = LocalizationManager__Get((System_String_o *)StringLiteral_3002/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0LL);
    v378.monitor = System_String__Format(v314, v299, 0LL);
    sub_1C13CC8((PartyOrganizationUtility_o *)&v378.monitor, (int64_t)v378.monitor, v315, v316, v317, v318, v319, v320);
    v321 = LocalizationManager__Get((System_String_o *)StringLiteral_2999/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    v378.fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)System_String__Format(
                                                                                                     v321,
                                                                                                     v83,
                                                                                                     0LL);
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v378.fields,
      (int64_t)v378.fields.restrictionDialogHistoryList,
      v322,
      v323,
      v324,
      v325,
      v326,
      v327);
    v328 = LocalizationManager__Get((System_String_o *)StringLiteral_3000/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/, 0LL);
    *(_DWORD *)&v378.fields._IsWaveBattleRestart_k__BackingField = actMax;
    v332 = (Il2CppObject *)j_il2cpp_value_box_0(
                             int_TypeInfo,
                             &v378.fields._IsWaveBattleRestart_k__BackingField,
                             v329,
                             v330,
                             v331);
    v378.fields._normalFollowerInfo = (struct FollowerInfo_o *)System_String__Format_62982316(v328, v306, v332, 0LL);
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&v378.fields._normalFollowerInfo,
      (int64_t)v378.fields._normalFollowerInfo,
      v333,
      v334,
      v335,
      v336,
      v337,
      v338);
  }
  *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v378.fields._IsWaveBattleRestart_k__BackingField = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v378.klass;
  Instance = *v370;
  if ( !*v370 )
    goto LABEL_188;
  v339 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
           (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
           (const MethodInfo_3698E60 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
  v371 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v378.fields._IsWaveBattleRestart_k__BackingField;
  BattleRetryConfirmComponent__SetCostValueText(this, &v371, v339, v340);
  BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v341);
  friendshipUpItemSwitchComponent = (UnityEngine_Object_o *)this->fields.friendshipUpItemSwitchComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(friendshipUpItemSwitchComponent, 0LL, 0LL) )
  {
    Instance = this->fields.friendshipUpItemUseButton;
    if ( !Instance )
      goto LABEL_188;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_188;
    UnityEngine_GameObject__AddComponent_object_(
      (UnityEngine_GameObject_o *)Instance,
      (const MethodInfo_2FDF914 *)Method_UnityEngine_GameObject_AddComponent_FriendshipUpItemSwitchComponent___);
    Instance = this->fields.friendshipUpItemUseButton;
    if ( !Instance )
      goto LABEL_188;
    Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_188;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Instance,
                         (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSwitchComponent___);
    this->fields.friendshipUpItemSwitchComponent = (struct FriendshipUpItemSwitchComponent_o *)Component_object;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.friendshipUpItemSwitchComponent,
      (int64_t)Component_object,
      v344,
      v345,
      v346,
      v347,
      v348,
      v349);
    Instance = this->fields.friendshipUpItemSwitchComponent;
    if ( !Instance )
      goto LABEL_188;
    friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
    *((_QWORD *)Instance + 4) = friendshipUpItemUseButton;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)((char *)Instance + 32),
      (int64_t)friendshipUpItemUseButton,
      v350,
      v351,
      v352,
      v353,
      v354,
      v355);
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_386A7A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_188;
  PartyOrganizationUtility__SetFriendshipUpItemInfoCache((PartyOrganizationUtility_o *)Instance, 0LL);
  BattleRetryConfirmComponent__SetFriendshipUpItemUseButton(this, v357);
  v358 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(v358, object, Method_BattleRetryConfirmComponent___c__DisplayClass40_0__SetValues_b__0__, 0LL);
  v361 = BattleRetryConfirmComponent__WaitOneFrame(v359, v358, v360);
  UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, v361, 0LL);
  return 1;
}


System_Collections_IEnumerator_o *__fastcall BattleRetryConfirmComponent__WaitOneFrame(
        BattleRetryConfirmComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BB7B2E & 1) == 0 )
  {
    sub_1C13D24(&BattleRetryConfirmComponent__WaitOneFrame_d__45_TypeInfo, action);
    byte_4BB7B2E = 1;
  }
  v4 = sub_1C13F70(BattleRetryConfirmComponent__WaitOneFrame_d__45_TypeInfo);
  BattleRetryConfirmComponent__WaitOneFrame_d__45___ctor(
    (BattleRetryConfirmComponent__WaitOneFrame_d__45_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_1C13F80(v5, v6);
  *(_QWORD *)(v4 + 32) = action;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v4 + 32), (int64_t)action, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattleRetryConfirmComponent___BaseDialogOpen_b__54_0(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


void __fastcall BattleRetryConfirmComponent___OnClickFriendshipUpItemUseButton_b__61_0(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  BattleResultComponent_o *battleResultComponent; // x0

  battleResultComponent = this->fields.battleResultComponent;
  this->fields.state = 1;
  if ( !battleResultComponent )
    sub_1C13F80(0LL, method);
  BattleResultComponent__OpenFriendshipUpItemSelectDialog(battleResultComponent, 0LL);
}


void __fastcall BattleRetryConfirmComponent__WaitOneFrame_d__45___ctor(
        BattleRetryConfirmComponent__WaitOneFrame_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRetryConfirmComponent__WaitOneFrame_d__45__MoveNext(
        BattleRetryConfirmComponent__WaitOneFrame_d__45_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t _1__state; // w8
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *action; // x0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    action = this->fields.action;
    this->fields.__1__state = -1;
    ActionExtensions__Call(action, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleRetryConfirmComponent__WaitOneFrame_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRetryConfirmComponent__WaitOneFrame_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRetryConfirmComponent__WaitOneFrame_d__45__System_Collections_IEnumerator_Reset(
        BattleRetryConfirmComponent__WaitOneFrame_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
}


Il2CppObject *__fastcall BattleRetryConfirmComponent__WaitOneFrame_d__45__System_Collections_IEnumerator_get_Current(
        BattleRetryConfirmComponent__WaitOneFrame_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRetryConfirmComponent__WaitOneFrame_d__45__System_IDisposable_Dispose(
        BattleRetryConfirmComponent__WaitOneFrame_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleRetryConfirmComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB7B3D & 1) == 0 )
  {
    sub_1C13D24(&BattleRetryConfirmComponent___c_TypeInfo, v1);
    byte_4BB7B3D = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(BattleRetryConfirmComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleRetryConfirmComponent___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)BattleRetryConfirmComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BattleRetryConfirmComponent___c___ctor(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmComponent___c___SetFriendshipUpItemUseButton_b__59_0(
        BattleRetryConfirmComponent___c_o *this,
        FriendshipUpItemInfo_o *info,
        const MethodInfo *method)
{
  if ( !info )
    sub_1C13F80(this, 0LL);
  FriendshipUpItemInfo__SetUseFlag(info, 0, 0LL);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__40_1(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BB7B3E & 1) == 0 )
  {
    sub_1C13D24(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4BB7B3E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2F78C44 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__40_2(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BB7B3F & 1) == 0 )
  {
    sub_1C13D24(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1C13D24(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4BB7B3F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2F78C44 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c__DisplayClass40_0___ctor(
        BattleRetryConfirmComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmComponent___c__DisplayClass40_0___SetValues_b__0(
        BattleRetryConfirmComponent___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *rciItems; // x0
  BattleRetryConfirmComponent_o *_4__this; // x19

  if ( (byte_4BB7B40 & 1) == 0 )
  {
    sub_1C13D24(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__,
      method);
    byte_4BB7B40 = 1;
  }
  rciItems = this->fields.rciItems;
  if ( !rciItems
    || (_4__this = this->fields.__4__this,
        rciItems = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(rciItems, (const MethodInfo_3698E60 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__),
        !_4__this) )
  {
    sub_1C13F80(rciItems, method);
  }
  BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
    _4__this,
    (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)rciItems,
    0LL);
}