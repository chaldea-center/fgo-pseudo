void __fastcall BattleRetryConfirmComponent___cctor(const MethodInfo *method)
{
  BattleRetryConfirmComponent_c *v1; // x8

  if ( (byte_42AD597 & 1) == 0 )
  {
    sub_B52984(&BattleRetryConfirmComponent_TypeInfo);
    byte_42AD597 = 1;
  }
  BattleRetryConfirmComponent_TypeInfo->static_fields->MAIN_TEXT_DEFAULT_FONT_SIZE = 24;
  BattleRetryConfirmComponent_TypeInfo->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM = 22;
  v1 = BattleRetryConfirmComponent_TypeInfo;
  BattleRetryConfirmComponent_TypeInfo->static_fields->MAIN_TEXT_FONT_SIZE_FOR_DOUBLE_ITEM_AND_BUTTON = 22;
  v1->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM_AND_BUTTON = 19;
}


void __fastcall BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.CANCEL_BUTTON_POSITION_ON_THREE.fields.z = 3273916416LL;
  *(_OWORD *)&this->fields.CONFIRM_BUTTON_POSITION_ON_THREE.fields.y = xmmword_3279110;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRetryConfirmComponent__BoostSupportRequestDialogCallback(
        BattleRetryConfirmComponent_o *this,
        int32_t result,
        int32_t boostId,
        const MethodInfo *method)
{
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AD592 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD592 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  switch ( result )
  {
    case 2:
      battleResultComponent = this->fields.battleResultComponent;
      if ( !battleResultComponent )
        goto LABEL_20;
      v9 = boostId;
LABEL_17:
      BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, v9, 0LL);
      break;
    case 1:
      battleResultComponent = this->fields.battleResultComponent;
      if ( !battleResultComponent )
        goto LABEL_20;
      v9 = 0;
      goto LABEL_17;
    case 0:
      battleResultComponent = (BattleResultComponent_o *)this->fields.buttons;
      if ( !battleResultComponent )
        goto LABEL_20;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v10,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleResultComponent,
        (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v10,
                (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v10.fields.current )
          sub_B52A5C(0LL, v8);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10.fields.current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v10,
        (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_20:
    sub_B52A5C(battleResultComponent, *(_QWORD *)&result);
  CommonUI__CloseBoostSupportRequestMenu((CommonUI_o *)battleResultComponent, 0LL, 0LL);
}


void __fastcall BattleRetryConfirmComponent__Close(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_42AD590 & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    byte_42AD590 = 1;
  }
  cancelLabel = (UnityEngine_Component_o *)this->fields.cancelLabel;
  if ( !cancelLabel )
    goto LABEL_12;
  cancelLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(cancelLabel, 0LL);
  if ( !cancelLabel )
    goto LABEL_12;
  cancelLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)cancelLabel,
                                             0LL);
  if ( !cancelLabel )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject(cancelLabel, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__RemoveBackBtn(gameObject, 0LL);
  cancelLabel = (UnityEngine_Component_o *)this->fields.bgObj;
  if ( !cancelLabel
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelLabel, 0, 0LL),
        (cancelLabel = (UnityEngine_Component_o *)this->fields.window) == 0LL) )
  {
LABEL_12:
    sub_B52A5C(cancelLabel, method);
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
  __int64 v7; // x0

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
    sub_B52A5C(reqSingleParent, method);
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
    {
      v7 = sub_B52A88(reqSingleParent);
      sub_B52A28(v7, 0LL);
    }
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
  UnityEngine_GameObject_o *root; // x0
  struct System_Collections_Generic_List_UIButton__o **p_buttons; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v7; // x21
  unsigned __int64 v8; // x22
  __int64 v9; // x1
  UILabel_o *mainText; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *confirmLabel; // x20
  __int64 v13; // x0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42AD58E & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UIButton__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_UIButton___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_UIButton__get_Count__);
    sub_B52984(&System_Collections_Generic_List_UIButton__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_2533/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/);
    sub_B52984(&StringLiteral_2535/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/);
    sub_B52984(&StringLiteral_2534/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/);
    byte_42AD58E = 1;
  }
  memset(&v14, 0, sizeof(v14));
  root = this->fields.root;
  if ( !root )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  root = this->fields.reqSingleParent;
  if ( !root )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  root = this->fields.reqDoubleParent;
  if ( !root )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  root = (UnityEngine_GameObject_o *)this->fields.buttons;
  if ( !root || !LODWORD(root[1].klass) )
  {
    p_buttons = &this->fields.buttons;
    v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UIButton__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v5,
      (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v5;
    sub_B52920(&this->fields.buttons);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_1A49604 *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    if ( !root )
      goto LABEL_29;
    klass = root[1].klass;
    v7 = root;
    if ( (int)klass >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)klass )
        {
          v13 = sub_B52A88(root);
          sub_B52A28(v13, 0LL);
        }
        root = (UnityEngine_GameObject_o *)*p_buttons;
        if ( !*p_buttons )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)root,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&v7[1].monitor + v8),
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UIButton__Add__);
        LODWORD(klass) = v7[1].klass;
        if ( (__int64)++v8 >= (int)klass )
          goto LABEL_14;
      }
LABEL_29:
      sub_B52A5C(root, method);
    }
LABEL_14:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_29;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)root,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v14.fields.current )
      sub_B52A5C(0LL, v9);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v14.fields.current, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  if ( !this->fields.isInitialized )
  {
    mainText = this->fields.mainText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2535/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    if ( !mainText )
      goto LABEL_29;
    UILabel__set_text(mainText, (System_String_o *)root, 0LL);
    cancelLabel = this->fields.cancelLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2533/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_29;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0LL);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2534/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    if ( !confirmLabel )
      goto LABEL_29;
    UILabel__set_text(confirmLabel, (System_String_o *)root, 0LL);
    this->fields.isInitialized = 1;
  }
}


void __fastcall BattleRetryConfirmComponent__OnClickBoostSupportRequest(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  TerminalPramsManager_c *v4; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w21
  BoostFunctionUtility_CallbackFunc_o *v7; // x23
  struct System_Collections_Generic_List_UIButton__o *buttons; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42AD591 & 1) == 0 )
  {
    sub_B52984(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__);
    sub_B52984(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD591 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B5 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v4->static_fields->_QuestId_k__BackingField;
  if ( !byte_42AC2B6 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
    byte_42AC2B6 = 1;
  }
  if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v4);
    v4 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v4->static_fields->_PhaseCnt_k__BackingField;
  v7 = (BoostFunctionUtility_CallbackFunc_o *)sub_B52A54(BoostFunctionUtility_CallbackFunc_TypeInfo);
  BoostFunctionUtility_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__,
    0LL);
  if ( !Instance
    || (CommonUI__OpenBoostSupportRequestMenu(Instance, QuestId_k__BackingField, PhaseCnt_k__BackingField, v7, 1, 0LL),
        (buttons = this->fields.buttons) == 0LL) )
  {
    sub_B52A5C(buttons, v9);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buttons,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v11.fields.current )
      sub_B52A5C(0LL, v10);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11.fields.current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
}


void __fastcall BattleRetryConfirmComponent__OnClickCancel(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AD587 & 1) == 0 )
  {
    sub_B52984(&Method_BattleRetryConfirmComponent_OnClickCancel__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    byte_42AD587 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  v3 = Method_BattleRetryConfirmComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B5298C(Method_BattleRetryConfirmComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_B52A5C(battleResultComponent, v5);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleResultComponent,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B52A5C(0LL, v7);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8.fields.current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
}


void __fastcall BattleRetryConfirmComponent__OnClickConfirm(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AD588 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AD588 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_B52A5C(battleResultComponent, v3);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleResultComponent,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v6.fields.current )
      sub_B52A5C(0LL, v5);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v6.fields.current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
}


void __fastcall BattleRetryConfirmComponent__OnClickFriendshipUpItemUseButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_c *v3; // x0
  PartyOrganizationUtility_c *v4; // x0
  __int64 v5; // x1
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v7; // w1
  PartyOrganizationUtility_c *v8; // x0

  if ( (byte_42AD596 & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationUtility_TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AD596 = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v8 = PartyOrganizationUtility_TypeInfo;
    if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v8 = PartyOrganizationUtility_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v8->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 1, 0LL);
    friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
    if ( friendshipUpItemUseButton )
    {
      v7 = 1;
      goto LABEL_23;
    }
LABEL_24:
    sub_B52A5C(friendshipUpItemUseButton, v5);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  v4 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v4 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v4->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
  if ( !friendshipUpItemUseButton )
    goto LABEL_24;
  v7 = 0;
LABEL_23:
  FriendshipUpItemUseItem__ChangeButtonState(friendshipUpItemUseButton, v7, 0LL);
}


void __fastcall BattleRetryConfirmComponent__Open(
        BattleRetryConfirmComponent_o *this,
        BattleWindowComponent_EndCall_o *opendFunc,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgObj; // x0
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_42AD58F & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    byte_42AD58F = 1;
  }
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
    sub_B52A5C(bgObj, opendFunc);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObj, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
}


void __fastcall BattleRetryConfirmComponent__SetBoostSupportRequestButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t WarId_k__BackingField; // w22
  int32_t QuestId_k__BackingField; // w20
  int32_t PhaseCnt_k__BackingField; // w21
  BattleSetupInfo_o *v7; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  BattleSetupInfo_o *v10; // x22
  UnityEngine_Object_o *boostSupportRequestLabel; // x20
  UILabel_o *v12; // x20
  UnityEngine_Object_o *v13; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AD593 & 1) == 0 )
  {
    sub_B52984(&BattleSetupInfo_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_BoostFunctionUtility__TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&StringLiteral_11217/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/);
    sub_B52984(&StringLiteral_2532/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/);
    byte_42AD593 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2A2 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2A2 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_42AC2B5 = 1;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v3->static_fields->_QuestId_k__BackingField;
  if ( !byte_42AC2B6 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_42AC2B6 = 1;
  }
  if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v3->static_fields->_PhaseCnt_k__BackingField;
  v7 = (BattleSetupInfo_o *)sub_B52A54(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_66;
  v10 = BattleSetupInfo__ConvertBattleSetupInfo(
          v7,
          WarId_k__BackingField,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          0,
          0,
          0,
          0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v10 || !Master_WarQuestSelectionMaster )
    goto LABEL_66;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          v10->fields.eventId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_56;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
  if ( !entity )
    goto LABEL_66;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
    if ( (BYTE3(SingletonTemplate_BoostFunctionUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_BoostFunctionUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_BoostFunctionUtility__TypeInfo);
    }
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_66;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_WarQuestSelectionMaster,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0LL)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11217/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0LL) == 1 )
    {
      boostSupportRequestLabel = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(boostSupportRequestLabel, 0LL, 0LL) )
      {
        v12 = this->fields.boostSupportRequestLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                          (System_String_o *)StringLiteral_2532/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/,
                                                                                          0LL);
        if ( !v12 )
          goto LABEL_66;
        UILabel__set_text(v12, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.boostSupportRequestLabel;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_66;
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                          0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_66;
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Transform__get_parent(
                                                                                          (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                                                                                          0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_66;
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                          (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                          0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_66;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
      }
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.cancelLabel;
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_transform(
                                                                                          (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                          0LL);
        if ( Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Transform__get_parent(
                                                                                            (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                                                                                            0LL);
          if ( Master_WarQuestSelectionMaster )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
              *(UnityEngine_Vector3_o *)&this->fields.CANCEL_BUTTON_POSITION_ON_THREE.fields.y,
              0LL);
            Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.confirmLabel;
            if ( Master_WarQuestSelectionMaster )
            {
              Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_transform(
                                                                                                (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                                0LL);
              if ( Master_WarQuestSelectionMaster )
              {
                Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Transform__get_parent(
                                                                                                  (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                                                                                                  0LL);
                if ( Master_WarQuestSelectionMaster )
                {
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                    *(UnityEngine_Vector3_o *)&this->fields.CONFIRM_BUTTON_POSITION_ON_THREE.fields.y,
                    0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_66:
      sub_B52A5C(Master_WarQuestSelectionMaster, v9);
    }
  }
  else
  {
LABEL_56:
    v13 = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
    {
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.boostSupportRequestLabel;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_66;
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_transform(
                                                                                        (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                        0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_66;
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Transform__get_parent(
                                                                                        (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                                                                                        0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_66;
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                        0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_66;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
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
  __int64 v14; // x0

  if ( !value )
    goto LABEL_13;
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
      {
LABEL_14:
        v14 = sub_B52A88(this);
        sub_B52A28(v14, 0LL);
      }
      if ( *i )
      {
        if ( v7 >= max_length )
          goto LABEL_14;
        v11 = &v9->obj.klass + v7;
        v12 = (UnityEngine_MonoBehaviour_o *)v11[4];
        if ( !v12 )
          break;
        v13 = RetryConfirmItem__SetCondensedScalePossessionAmount((RetryConfirmItem_o *)v11[4], 0LL);
        this = (BattleRetryConfirmComponent_o *)UnityEngine_MonoBehaviour__StartCoroutine_35611808(v12, v13, 0LL);
      }
      LODWORD(v4) = value->max_length;
      if ( (__int64)++v7 >= (int)v4 )
        return;
    }
LABEL_13:
    sub_B52A5C(this, value);
  }
}


void __fastcall BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *items,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *reqSingleParent; // x0
  struct RetryConfirmItem_o *singleItem; // x20
  __int64 v7; // x21
  _BOOL8 activeSelf; // x0
  const MethodInfo *v9; // x3
  __int64 *p_doubleItems; // x2
  struct RetryConfirmItem_o *singleItemWithUseItemButton; // x20
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // [xsp+8h] [xbp-28h] BYREF
  __int64 v16; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42AD595 & 1) == 0 )
  {
    sub_B52984(&RetryConfirmItem___TypeInfo);
    byte_42AD595 = 1;
  }
  v16 = 0LL;
  v15 = 0LL;
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_31;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL) )
  {
    reqSingleParent = (UnityEngine_GameObject_o *)sub_B5299C(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItem = this->fields.singleItem;
      v7 = (__int64)reqSingleParent;
      if ( !singleItem
        || (reqSingleParent = (UnityEngine_GameObject_o *)sub_B52A44(
                                                            singleItem,
                                                            reqSingleParent->klass->_1.element_class)) != 0LL )
      {
        if ( *(_DWORD *)(v7 + 24) )
        {
          *(_QWORD *)(v7 + 32) = singleItem;
          sub_B52920(v7 + 32);
          v16 = v7;
          p_doubleItems = &v16;
          goto LABEL_29;
        }
LABEL_32:
        v13 = sub_B52A88(reqSingleParent);
        sub_B52A28(v13, 0LL);
      }
      goto LABEL_33;
    }
    goto LABEL_31;
  }
  reqSingleParent = this->fields.reqSingleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_31;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL) )
  {
    reqSingleParent = (UnityEngine_GameObject_o *)sub_B5299C(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItemWithUseItemButton = this->fields.singleItemWithUseItemButton;
      v12 = (__int64)reqSingleParent;
      if ( !singleItemWithUseItemButton
        || (reqSingleParent = (UnityEngine_GameObject_o *)sub_B52A44(
                                                            singleItemWithUseItemButton,
                                                            reqSingleParent->klass->_1.element_class)) != 0LL )
      {
        if ( *(_DWORD *)(v12 + 24) )
        {
          *(_QWORD *)(v12 + 32) = singleItemWithUseItemButton;
          sub_B52920(v12 + 32);
          v15 = v12;
          p_doubleItems = &v15;
          goto LABEL_29;
        }
        goto LABEL_32;
      }
LABEL_33:
      v14 = sub_B52A7C();
      sub_B52A28(v14, 0LL);
    }
LABEL_31:
    sub_B52A5C(reqSingleParent, items);
  }
  reqSingleParent = this->fields.reqDoubleParent;
  if ( !reqSingleParent )
    goto LABEL_31;
  activeSelf = UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL);
  if ( activeSelf )
  {
    p_doubleItems = (__int64 *)&this->fields.doubleItems;
    goto LABEL_29;
  }
  reqSingleParent = this->fields.reqDoubleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_31;
  activeSelf = UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL);
  if ( activeSelf )
  {
    p_doubleItems = (__int64 *)&this->fields.doubleItemsWithUseItemButton;
    goto LABEL_29;
  }
  reqSingleParent = this->fields.reqTripleParent;
  if ( !reqSingleParent )
    goto LABEL_31;
  activeSelf = UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL);
  if ( activeSelf )
  {
    p_doubleItems = (__int64 *)&this->fields.tripleItems;
    goto LABEL_29;
  }
  reqSingleParent = this->fields.reqTripleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_31;
  activeSelf = UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL);
  if ( !activeSelf )
    return;
  p_doubleItems = (__int64 *)&this->fields.tripleItemsWithUseItemButton;
LABEL_29:
  BattleRetryConfirmComponent__SetCondensedScalePossessionAmount(
    (BattleRetryConfirmComponent_o *)activeSelf,
    items,
    (RetryConfirmItem_array **)p_doubleItems,
    v9);
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
  __int128 v9; // q0
  __int128 v10; // q1
  __int128 v11; // q1
  __int64 v12; // x8
  __int128 *v13; // x1
  BattleRetryConfirmComponent_RetryConfirmItemStr_o *v14; // x2
  __int128 v15; // q0
  __int128 v16; // q1
  __int128 v17; // q0
  __int128 v18; // q1
  __int128 v19; // q0
  __int128 v20; // q1
  __int64 v21; // x0
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v22; // [xsp+0h] [xbp-170h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v23; // [xsp+30h] [xbp-140h] BYREF
  __int128 v24[2]; // [xsp+60h] [xbp-110h] BYREF
  __int64 v25; // [xsp+80h] [xbp-F0h]
  __int128 v26[2]; // [xsp+90h] [xbp-E0h] BYREF
  __int64 v27; // [xsp+B0h] [xbp-C0h]
  __int128 v28; // [xsp+C0h] [xbp-B0h]
  __int128 v29; // [xsp+D0h] [xbp-A0h]
  __int64 v30; // [xsp+E0h] [xbp-90h]
  __int64 v31[5]; // [xsp+E8h] [xbp-88h] BYREF
  __int128 v32[2]; // [xsp+110h] [xbp-60h] BYREF
  __int64 v33; // [xsp+130h] [xbp-40h]

  v6 = this;
  if ( (byte_42AD58D & 1) == 0 )
  {
    this = (BattleRetryConfirmComponent_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD58D = 1;
  }
  if ( !items )
    sub_B52A5C(this, costPoint);
  v7 = *(_QWORD *)&items->max_length;
  if ( !v7 )
  {
    v15 = *(_OWORD *)&costPoint->fields.useName;
    v16 = *(_OWORD *)&costPoint->fields.possessionName;
    v13 = v32;
    v14 = (BattleRetryConfirmComponent_RetryConfirmItemStr_o *)v31;
    v33 = *(_QWORD *)&costPoint->fields.isIndividualLimit;
    v32[0] = v15;
    v32[1] = v16;
    memset(v31, 0, sizeof(v31));
LABEL_10:
    BattleRetryConfirmComponent__SetCostValueTextSingle(
      v6,
      (BattleRetryConfirmComponent_RetryConfirmItemStr_o *)v13,
      v14,
      method);
    return;
  }
  if ( (_DWORD)v7 == 1 )
  {
    v8 = System_String__op_Equality(costPoint->fields.useName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v8 )
    {
      v10 = *(_OWORD *)&costPoint->fields.useName;
      v9 = *(_OWORD *)&costPoint->fields.possessionName;
      v30 = *(_QWORD *)&costPoint->fields.isIndividualLimit;
      v28 = v10;
      v29 = v9;
      if ( !items->max_length )
      {
        v21 = sub_B52A88(v8);
        sub_B52A28(v21, 0LL);
      }
      v11 = *(_OWORD *)&items->m_Items[0].fields.possessionName;
      v12 = *(_QWORD *)&items->m_Items[0].fields.isIndividualLimit;
      v24[0] = *(_OWORD *)&items->m_Items[0].fields.useName;
      v24[1] = v11;
      v25 = v12;
      v27 = v30;
      v26[0] = v28;
      v26[1] = v29;
      v13 = v26;
      v14 = (BattleRetryConfirmComponent_RetryConfirmItemStr_o *)v24;
      goto LABEL_10;
    }
    v7 = *(_QWORD *)&items->max_length;
  }
  if ( (_DWORD)v7 == 2 )
  {
    if ( System_String__op_Equality(costPoint->fields.useName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
LABEL_17:
      v18 = *(_OWORD *)&costPoint->fields.useName;
      v17 = *(_OWORD *)&costPoint->fields.possessionName;
      *(_QWORD *)&v23.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
      *(_OWORD *)&v23.fields.useName = v18;
      *(_OWORD *)&v23.fields.possessionName = v17;
      BattleRetryConfirmComponent__SetCostValueTextDouble(v6, &v23, items, method);
      return;
    }
    v7 = *(_QWORD *)&items->max_length;
  }
  if ( (_DWORD)v7 == 1
    && System_String__op_Inequality(costPoint->fields.useName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    goto LABEL_17;
  }
  v20 = *(_OWORD *)&costPoint->fields.useName;
  v19 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v22.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v22.fields.useName = v20;
  *(_OWORD *)&v22.fields.possessionName = v19;
  BattleRetryConfirmComponent__SetCostValueTextTriple(v6, &v22, items, method);
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
  __int64 v30; // x0
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v31; // [xsp+0h] [xbp-130h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v32; // [xsp+30h] [xbp-100h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v33; // [xsp+60h] [xbp-D0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v34; // [xsp+90h] [xbp-A0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v35; // [xsp+C0h] [xbp-70h] BYREF

  if ( (byte_42AD58B & 1) == 0 )
  {
    sub_B52984(&BattleRetryConfirmComponent_TypeInfo);
    byte_42AD58B = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqSingleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqDoubleParent;
  if ( !reqSingleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqSingleParent, 1, 0LL);
  reqSingleParent = this->fields.reqDoubleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqTripleParent;
  if ( !reqSingleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqTripleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  mainText = this->fields.mainText;
  reqSingleParent = (UnityEngine_GameObject_o *)BattleRetryConfirmComponent_TypeInfo;
  if ( (BYTE3(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
  }
  if ( !mainText )
    goto LABEL_24;
  UILabel__set_fontSize(mainText, BattleRetryConfirmComponent_TypeInfo->static_fields->MAIN_TEXT_DEFAULT_FONT_SIZE, 0LL);
  v10 = *(_OWORD *)&costPoint->fields.useName;
  v9 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v35.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v35.fields.useName = v10;
  *(_OWORD *)&v35.fields.possessionName = v9;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v11, &v35, &this->fields.doubleAp, v12);
  v14 = *(_OWORD *)&costPoint->fields.useName;
  v13 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v34.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v34.fields.useName = v14;
  *(_OWORD *)&v34.fields.possessionName = v13;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v15, &v34, &this->fields.doubleApWithUseItemButton, v16);
  doubleItems = this->fields.doubleItems;
  if ( !doubleItems )
LABEL_24:
    sub_B52A5C(reqSingleParent, costPoint);
  v19 = 0LL;
  m_Items = items->m_Items;
  v21 = 32LL;
  while ( 1 )
  {
    max_length = doubleItems->max_length;
    if ( (__int64)v19 >= (int)max_length )
      break;
    if ( !items )
      goto LABEL_24;
    v23 = items->max_length;
    if ( (__int64)v19 >= (int)v23 )
      break;
    if ( v19 >= v23 )
      goto LABEL_26;
    v25 = *(_OWORD *)&m_Items->fields.useName;
    v24 = *(_OWORD *)&m_Items->fields.possessionName;
    *(_QWORD *)&v33.fields.isIndividualLimit = *(_QWORD *)&m_Items->fields.isIndividualLimit;
    *(_OWORD *)&v33.fields.useName = v25;
    *(_OWORD *)&v33.fields.possessionName = v24;
    if ( v19 >= max_length )
      goto LABEL_26;
    BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
      (BattleRetryConfirmComponent_o *)reqSingleParent,
      &v33,
      (RetryConfirmItem_o **)((char *)doubleItems + v21),
      v17);
    if ( v19 >= items->max_length )
      goto LABEL_26;
    v28 = *(_OWORD *)&m_Items->fields.useName;
    v27 = *(_OWORD *)&m_Items->fields.possessionName;
    *(_QWORD *)&v32.fields.isIndividualLimit = *(_QWORD *)&m_Items->fields.isIndividualLimit;
    *(_OWORD *)&v32.fields.useName = v28;
    *(_OWORD *)&v32.fields.possessionName = v27;
    doubleItemsWithUseItemButton = this->fields.doubleItemsWithUseItemButton;
    if ( !doubleItemsWithUseItemButton )
      goto LABEL_24;
    v31 = v32;
    if ( v19 >= doubleItemsWithUseItemButton->max_length )
    {
LABEL_26:
      v30 = sub_B52A88(reqSingleParent);
      sub_B52A28(v30, 0LL);
    }
    ++v19;
    ++m_Items;
    BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
      (BattleRetryConfirmComponent_o *)reqSingleParent,
      &v31,
      (RetryConfirmItem_o **)((char *)doubleItemsWithUseItemButton + v21),
      v26);
    doubleItems = this->fields.doubleItems;
    v21 += 8LL;
    if ( !doubleItems )
      goto LABEL_24;
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

  if ( (byte_42AD58A & 1) == 0 )
  {
    sub_B52984(&BattleRetryConfirmComponent_TypeInfo);
    byte_42AD58A = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(reqSingleParent, 1, 0LL);
  reqSingleParent = this->fields.reqSingleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqDoubleParent;
  if ( !reqSingleParent )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqDoubleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqTripleParent;
  if ( !reqSingleParent )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqTripleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  mainText = this->fields.mainText;
  reqSingleParent = (UnityEngine_GameObject_o *)BattleRetryConfirmComponent_TypeInfo;
  if ( (BYTE3(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
  }
  if ( !mainText )
LABEL_14:
    sub_B52A5C(reqSingleParent, costPoint);
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
  __int64 v30; // x0
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v31; // [xsp+0h] [xbp-130h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v32; // [xsp+30h] [xbp-100h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v33; // [xsp+60h] [xbp-D0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v34; // [xsp+90h] [xbp-A0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v35; // [xsp+C0h] [xbp-70h] BYREF

  if ( (byte_42AD58C & 1) == 0 )
  {
    sub_B52984(&BattleRetryConfirmComponent_TypeInfo);
    byte_42AD58C = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqSingleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqDoubleParent;
  if ( !reqSingleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqDoubleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParent = this->fields.reqTripleParent;
  if ( !reqSingleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqSingleParent, 1, 0LL);
  reqSingleParent = this->fields.reqTripleParentWithUseItemButton;
  if ( !reqSingleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  mainText = this->fields.mainText;
  reqSingleParent = (UnityEngine_GameObject_o *)BattleRetryConfirmComponent_TypeInfo;
  if ( (BYTE3(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
  }
  if ( !mainText )
    goto LABEL_24;
  UILabel__set_fontSize(
    mainText,
    BattleRetryConfirmComponent_TypeInfo->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM,
    0LL);
  v10 = *(_OWORD *)&costPoint->fields.useName;
  v9 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v35.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v35.fields.useName = v10;
  *(_OWORD *)&v35.fields.possessionName = v9;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v11, &v35, &this->fields.tripleAp, v12);
  v14 = *(_OWORD *)&costPoint->fields.useName;
  v13 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v34.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v34.fields.useName = v14;
  *(_OWORD *)&v34.fields.possessionName = v13;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v15, &v34, &this->fields.tripleApWithUseItemButton, v16);
  tripleItems = this->fields.tripleItems;
  if ( !tripleItems )
LABEL_24:
    sub_B52A5C(reqSingleParent, costPoint);
  v19 = 0LL;
  m_Items = items->m_Items;
  v21 = 32LL;
  while ( 1 )
  {
    max_length = tripleItems->max_length;
    if ( (__int64)v19 >= (int)max_length )
      break;
    if ( !items )
      goto LABEL_24;
    v23 = items->max_length;
    if ( (__int64)v19 >= (int)v23 )
      break;
    if ( v19 >= v23 )
      goto LABEL_26;
    v25 = *(_OWORD *)&m_Items->fields.useName;
    v24 = *(_OWORD *)&m_Items->fields.possessionName;
    *(_QWORD *)&v33.fields.isIndividualLimit = *(_QWORD *)&m_Items->fields.isIndividualLimit;
    *(_OWORD *)&v33.fields.useName = v25;
    *(_OWORD *)&v33.fields.possessionName = v24;
    if ( v19 >= max_length )
      goto LABEL_26;
    BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
      (BattleRetryConfirmComponent_o *)reqSingleParent,
      &v33,
      (RetryConfirmItem_o **)((char *)tripleItems + v21),
      v17);
    if ( v19 >= items->max_length )
      goto LABEL_26;
    v28 = *(_OWORD *)&m_Items->fields.useName;
    v27 = *(_OWORD *)&m_Items->fields.possessionName;
    *(_QWORD *)&v32.fields.isIndividualLimit = *(_QWORD *)&m_Items->fields.isIndividualLimit;
    *(_OWORD *)&v32.fields.useName = v28;
    *(_OWORD *)&v32.fields.possessionName = v27;
    tripleItemsWithUseItemButton = this->fields.tripleItemsWithUseItemButton;
    if ( !tripleItemsWithUseItemButton )
      goto LABEL_24;
    v31 = v32;
    if ( v19 >= tripleItemsWithUseItemButton->max_length )
    {
LABEL_26:
      v30 = sub_B52A88(reqSingleParent);
      sub_B52A28(v30, 0LL);
    }
    ++v19;
    ++m_Items;
    BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
      (BattleRetryConfirmComponent_o *)reqSingleParent,
      &v31,
      (RetryConfirmItem_o **)((char *)tripleItemsWithUseItemButton + v21),
      v26);
    tripleItems = this->fields.tripleItems;
    v21 += 8LL;
    if ( !tripleItems )
      goto LABEL_24;
  }
}


void __fastcall BattleRetryConfirmComponent__SetFriendshipUpItemUseButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemUseButton; // x20
  PartyOrganizationUtility_o *IsAvailableFriendshipUpItem; // x0
  __int64 v5; // x1
  char v6; // w20
  PartyOrganizationUtility_c *v7; // x0
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x20
  UILabel_o *mainText; // x19
  struct BattleRetryConfirmComponent_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_GameObject_o *v13; // x20
  BattleRetryConfirmComponent_c *v14; // x8
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x20
  BattleRetryConfirmComponent_c *v17; // x8

  if ( (byte_42AD594 & 1) == 0 )
  {
    sub_B52984(&BattleRetryConfirmComponent_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&PartyOrganizationUtility_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_B52984(&SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    byte_42AD594 = 1;
  }
  friendshipUpItemUseButton = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemUseButton, 0LL, 0LL) )
  {
    if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
    }
    IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( IsAvailableFriendshipUpItem )
    {
      IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                                                                    IsAvailableFriendshipUpItem,
                                                                    0LL);
      if ( this->fields.friendshipUpItemUseButton )
      {
        v6 = (char)IsAvailableFriendshipUpItem;
        IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                      0LL);
        if ( IsAvailableFriendshipUpItem )
        {
          if ( (v6 & 1) != 0 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem, 1, 0LL);
            IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
            if ( !IsAvailableFriendshipUpItem )
              goto LABEL_75;
            FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)IsAvailableFriendshipUpItem, 0LL);
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem, 0, 0LL);
            v7 = PartyOrganizationUtility_TypeInfo;
            if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
              v7 = PartyOrganizationUtility_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v7->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
          }
          IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)this->fields.reqSingleParent;
          if ( IsAvailableFriendshipUpItem )
          {
            IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                          (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                          0LL);
            if ( IsAvailableFriendshipUpItem )
            {
              if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem, 0LL) )
              {
                IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)this->fields.reqSingleParent;
                if ( IsAvailableFriendshipUpItem )
                {
                  IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                                (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                0LL);
                  if ( this->fields.friendshipUpItemUseButton )
                  {
                    v8 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                    IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                  0LL);
                    if ( IsAvailableFriendshipUpItem )
                    {
                      IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                    (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                    0LL);
                      if ( v8 )
                      {
                        UnityEngine_GameObject__SetActive(
                          v8,
                          ((unsigned __int8)IsAvailableFriendshipUpItem & 1) == 0,
                          0LL);
                        IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)this->fields.reqSingleParentWithUseItemButton;
                        if ( IsAvailableFriendshipUpItem )
                        {
                          IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                                        (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                        0LL);
                          if ( this->fields.friendshipUpItemUseButton )
                          {
                            v9 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                            IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                          (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                          0LL);
                            if ( IsAvailableFriendshipUpItem )
                            {
                              IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                            (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                            0LL);
                              if ( v9 )
                              {
                                UnityEngine_GameObject__SetActive(
                                  v9,
                                  (unsigned __int8)IsAvailableFriendshipUpItem & 1,
                                  0LL);
                                mainText = this->fields.mainText;
                                IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)BattleRetryConfirmComponent_TypeInfo;
                                if ( (BYTE3(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                  && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                {
                                  j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                }
                                if ( mainText )
                                {
                                  static_fields = BattleRetryConfirmComponent_TypeInfo->static_fields;
LABEL_80:
                                  UILabel__set_fontSize(mainText, static_fields->MAIN_TEXT_DEFAULT_FONT_SIZE, 0LL);
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
                IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)this->fields.reqDoubleParent;
                if ( IsAvailableFriendshipUpItem )
                {
                  IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                                (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                0LL);
                  if ( IsAvailableFriendshipUpItem )
                  {
                    if ( UnityEngine_GameObject__get_activeSelf(
                           (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                           0LL) )
                    {
                      IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)this->fields.reqDoubleParent;
                      if ( IsAvailableFriendshipUpItem )
                      {
                        IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                                      (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                      0LL);
                        if ( this->fields.friendshipUpItemUseButton )
                        {
                          v12 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                          IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                        0LL);
                          if ( IsAvailableFriendshipUpItem )
                          {
                            IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                          (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                          0LL);
                            if ( v12 )
                            {
                              UnityEngine_GameObject__SetActive(
                                v12,
                                ((unsigned __int8)IsAvailableFriendshipUpItem & 1) == 0,
                                0LL);
                              IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)this->fields.reqDoubleParentWithUseItemButton;
                              if ( IsAvailableFriendshipUpItem )
                              {
                                IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                                              (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                              0LL);
                                if ( this->fields.friendshipUpItemUseButton )
                                {
                                  v13 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                                  IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                                (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                                0LL);
                                  if ( IsAvailableFriendshipUpItem )
                                  {
                                    IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                                  (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                                  0LL);
                                    if ( v13 )
                                    {
                                      UnityEngine_GameObject__SetActive(
                                        v13,
                                        (unsigned __int8)IsAvailableFriendshipUpItem & 1,
                                        0LL);
                                      IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
                                      if ( IsAvailableFriendshipUpItem )
                                      {
                                        mainText = this->fields.mainText;
                                        IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsAvailableFriendshipUpItem, 0LL);
                                        if ( IsAvailableFriendshipUpItem )
                                        {
                                          IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem, 0LL);
                                          v14 = BattleRetryConfirmComponent_TypeInfo;
                                          if ( ((unsigned __int8)IsAvailableFriendshipUpItem & 1) != 0 )
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v14 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)&v14->static_fields->MAIN_TEXT_FONT_SIZE_FOR_DOUBLE_ITEM_AND_BUTTON;
                                            if ( mainText )
                                              goto LABEL_80;
                                          }
                                          else
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v14 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = v14->static_fields;
                                            if ( mainText )
                                              goto LABEL_80;
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
                      IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)this->fields.reqTripleParent;
                      if ( IsAvailableFriendshipUpItem )
                      {
                        IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                                      (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                      0LL);
                        if ( this->fields.friendshipUpItemUseButton )
                        {
                          v15 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                          IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                        0LL);
                          if ( IsAvailableFriendshipUpItem )
                          {
                            IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                          (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                          0LL);
                            if ( v15 )
                            {
                              UnityEngine_GameObject__SetActive(
                                v15,
                                ((unsigned __int8)IsAvailableFriendshipUpItem & 1) == 0,
                                0LL);
                              IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)this->fields.reqTripleParentWithUseItemButton;
                              if ( IsAvailableFriendshipUpItem )
                              {
                                IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                                              (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                              0LL);
                                if ( this->fields.friendshipUpItemUseButton )
                                {
                                  v16 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                                  IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                                (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                                0LL);
                                  if ( IsAvailableFriendshipUpItem )
                                  {
                                    IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                                  (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                                  0LL);
                                    if ( v16 )
                                    {
                                      UnityEngine_GameObject__SetActive(
                                        v16,
                                        (unsigned __int8)IsAvailableFriendshipUpItem & 1,
                                        0LL);
                                      IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
                                      if ( IsAvailableFriendshipUpItem )
                                      {
                                        mainText = this->fields.mainText;
                                        IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsAvailableFriendshipUpItem, 0LL);
                                        if ( IsAvailableFriendshipUpItem )
                                        {
                                          IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem, 0LL);
                                          v17 = BattleRetryConfirmComponent_TypeInfo;
                                          if ( ((unsigned __int8)IsAvailableFriendshipUpItem & 1) != 0 )
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v17 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)&v17->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM_AND_BUTTON;
                                            if ( mainText )
                                              goto LABEL_80;
                                          }
                                          else
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v17 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)&v17->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM;
                                            if ( mainText )
                                              goto LABEL_80;
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
LABEL_75:
    sub_B52A5C(IsAvailableFriendshipUpItem, v5);
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
    sub_B52A5C(this, value);
  }
  UILabel__set_text((UILabel_o *)this, value->fields.possessionAmount, 0LL);
}


bool __fastcall BattleRetryConfirmComponent__SetValues(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  BattleRetryConfirmComponent___c__DisplayClass37_0_o *v3; // x25
  int64_t Instance; // x0
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  char *v7; // x22
  QuestEntity_o *v8; // x21
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v10; // x19
  System_Text_StringBuilder_o *v11; // x26
  Il2CppObject *v12; // x28
  int actMax; // w27
  BalanceConfig_c *v14; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x28
  UserItemMaster_o *v16; // x22
  il2cpp_array_size_t v17; // w23
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v19; // x8
  int64_t v20; // x20
  ItemEntity_o *v21; // x25
  int32_t qp; // w24
  struct System_Int32_array *nums; // x8
  System_String_o *v24; // x0
  struct System_Int32_array *v25; // x8
  System_String_o *v26; // x20
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  int32_t MaxNum; // w20
  System_String_o *v30; // x19
  Il2CppObject *v31; // x24
  Il2CppObject *v32; // x0
  struct System_String_o *v33; // x0
  System_String_o *v34; // x19
  Il2CppObject *v35; // x0
  System_String_o *v36; // x19
  Il2CppObject *v37; // x0
  System_String_o *v38; // x0
  System_String_o *v39; // x19
  System_String_o *v40; // x0
  System_String_o *v41; // x19
  CommonUI_o *v42; // x20
  BattleRetryConfirmComponent___c_c *v43; // x8
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__37_1; // x22
  System_String_o *v46; // x21
  Il2CppObject *v47; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v48; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v49; // x28
  UserItemMaster_o *v50; // x22
  il2cpp_array_size_t v51; // w23
  struct System_Int32_array *v52; // x8
  struct System_Int32_array *v53; // x8
  int64_t v54; // x20
  ItemEntity_o *v55; // x25
  int32_t v56; // w24
  struct System_Int32_array *v57; // x8
  System_String_o *v58; // x0
  struct System_Int32_array *v59; // x8
  System_String_o *v60; // x20
  Il2CppObject *v61; // x0
  System_String_o *v62; // x0
  int32_t v63; // w20
  System_String_o *v64; // x19
  Il2CppObject *v65; // x24
  Il2CppObject *v66; // x0
  struct System_String_o *v67; // x0
  System_String_o *v68; // x19
  Il2CppObject *v69; // x0
  System_String_o *v70; // x19
  Il2CppObject *v71; // x0
  System_String_o *v72; // x0
  System_String_o *v73; // x19
  System_String_o *v74; // x0
  System_String_o *v75; // x19
  CommonUI_o *v76; // x20
  BattleRetryConfirmComponent___c_c *v77; // x8
  struct BattleRetryConfirmComponent___c_StaticFields *v78; // x9
  System_Action_o *_9__37_2; // x22
  System_String_o *v80; // x21
  Il2CppObject *v81; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v82; // x0
  MapControl_QuestInfo_o *v84; // x19
  int32_t questId; // w20
  bool IsQuestClear_25987760; // w0
  bool v87; // w20
  TerminalPramsManager_c *v88; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t CampaignCostCalcValue; // w20
  int32_t ActConsume; // w0
  int v92; // w22
  int32_t v93; // w23
  System_String_o *CostValueColor; // x19
  Il2CppObject *v95; // x0
  Il2CppObject *v96; // x20
  System_String_o *v97; // x0
  System_String_o *v98; // x19
  Il2CppObject *v99; // x0
  Il2CppObject *v100; // x19
  System_String_o *v101; // x0
  System_String_o *v102; // x0
  System_String_o *v103; // x0
  System_String_o *v104; // x20
  Il2CppObject *v105; // x0
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v106; // x0
  const MethodInfo *v107; // x3
  const MethodInfo *v108; // x1
  const MethodInfo *v109; // x1
  System_Action_o *v110; // x19
  BattleRetryConfirmComponent_o *v111; // x0
  const MethodInfo *v112; // x2
  System_Collections_IEnumerator_o *v113; // x0
  __int64 v114; // x0
  int32_t v115; // [xsp+34h] [xbp-1BCh]
  Il2CppObject *v116; // [xsp+38h] [xbp-1B8h]
  Il2CppObject *v117; // [xsp+38h] [xbp-1B8h]
  BattleRetryConfirmComponent___c__DisplayClass37_0_o *v118; // [xsp+48h] [xbp-1A8h]
  BattleRetryConfirmComponent___c__DisplayClass37_0_o *v119; // [xsp+48h] [xbp-1A8h]
  BattleRetryConfirmComponent_o *v120; // [xsp+50h] [xbp-1A0h]
  BattleRetryConfirmComponent_o *v121; // [xsp+50h] [xbp-1A0h]
  UserGameEntity_o **p_userGameEntity; // [xsp+70h] [xbp-180h]
  int64_t *p_rciItems; // [xsp+78h] [xbp-178h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v124; // [xsp+80h] [xbp-170h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v125; // [xsp+B0h] [xbp-140h] BYREF
  int32_t fixedVal; // [xsp+DCh] [xbp-114h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v127; // [xsp+E0h] [xbp-110h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v128; // [xsp+108h] [xbp-E8h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v129; // [xsp+130h] [xbp-C0h] BYREF
  int v130; // [xsp+15Ch] [xbp-94h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v131; // [xsp+160h] [xbp-90h] BYREF

  if ( (byte_42AD586 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
    sub_B52984(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&MapControl_QuestInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__);
    sub_B52984(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__);
    sub_B52984(&Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__);
    sub_B52984(&BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo);
    sub_B52984(&BattleRetryConfirmComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    sub_B52984(&StringLiteral_2541/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/);
    sub_B52984(&StringLiteral_3391/*"CONSUME_TYPE_AP"*/);
    sub_B52984(&StringLiteral_11029/*"QUEST_ITEM_COST_OVER"*/);
    sub_B52984(&StringLiteral_2539/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/);
    sub_B52984(&StringLiteral_2540/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/);
    sub_B52984(&StringLiteral_1747/*"AP_OVER_MAX_COLOR"*/);
    sub_B52984(&StringLiteral_3392/*"CONSUME_TYPE_RP"*/);
    sub_B52984(&StringLiteral_2545/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/);
    sub_B52984(&StringLiteral_2544/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/);
    sub_B52984(&StringLiteral_27/*"\n\n"*/);
    sub_B52984(&StringLiteral_2542/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/);
    sub_B52984(&StringLiteral_2536/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_2543/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/);
    sub_B52984(&StringLiteral_2537/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/);
    sub_B52984(&StringLiteral_2538/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/);
    byte_42AD586 = 1;
  }
  v130 = 0;
  memset(&v129, 0, sizeof(v129));
  memset(&v128, 0, sizeof(v128));
  memset(&v127, 0, sizeof(v127));
  fixedVal = 0;
  v3 = (BattleRetryConfirmComponent___c__DisplayClass37_0_o *)sub_B52A54(BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo);
  BattleRetryConfirmComponent___c__DisplayClass37_0___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_196;
  v3->fields.__4__this = this;
  sub_B52920(&v3->fields);
  this->fields.userGameEntity = UserGameMaster__getSelfUserGame(0LL);
  p_userGameEntity = &this->fields.userGameEntity;
  sub_B52920(&this->fields.userGameEntity);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_196;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  v7 = &byte_42AC000;
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B5 = 1;
  }
  Instance = (int64_t)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_196;
  Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                        MasterData_WarQuestSelectionMaster,
                        *(_DWORD *)(*(_QWORD *)(Instance + 184) + 16LL),
                        (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_196;
  v8 = (QuestEntity_o *)Instance;
  v130 = 0;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0LL);
  memset(&v129, 0, sizeof(v129));
  v10 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_B52A54(System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v10,
    (const MethodInfo_2F805CC *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  v3->fields.rciItems = v10;
  p_rciItems = (int64_t *)&v3->fields.rciItems;
  sub_B52920(&v3->fields.rciItems);
  v11 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v11, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3391/*"CONSUME_TYPE_AP"*/, 0LL);
  switch ( QuestEntity__GetConsumeType(v8, 0LL) )
  {
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3391/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v12 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      v130 = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_196;
      actMax = (*p_userGameEntity)->fields.actMax;
      goto LABEL_160;
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3392/*"CONSUME_TYPE_RP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v12 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getRp(*p_userGameEntity, 0LL);
      v130 = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_196;
      if ( !byte_42AC29F )
      {
        sub_B52984(&BalanceConfig_TypeInfo);
        byte_42AC29F = 1;
      }
      v14 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v14 = BalanceConfig_TypeInfo;
      }
      actMax = v14->static_fields->UerGameRpMax;
      goto LABEL_160;
    case 3:
      v118 = v3;
      v120 = this;
      v129.fields.useName = (struct System_String_o *)StringLiteral_1/*""*/;
      v116 = (Il2CppObject *)StringLiteral_1/*""*/;
      sub_B52920(&v129);
      v129.fields.useAmount = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B52920(&v129.fields.useAmount);
      if ( !ItemConsumeEntity )
        goto LABEL_79;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      v16 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_79;
      v17 = 0;
      do
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_196;
        if ( v17 >= itemIds->max_length )
          goto LABEL_197;
        if ( !v16 )
          goto LABEL_196;
        Instance = (int64_t)UserItemMaster__GetEntity(v16, Instance, itemIds->m_Items[v17 + 1], 0LL);
        v19 = ItemConsumeEntity->fields.itemIds;
        if ( !v19 )
          goto LABEL_196;
        if ( v17 >= v19->max_length )
          goto LABEL_197;
        if ( !v15 )
          goto LABEL_196;
        v20 = Instance;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v15,
                              v19->m_Items[v17 + 1],
                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_196;
        v21 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_196;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v20 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          qp = *(_DWORD *)(v20 + 28);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_196;
        if ( v17 >= nums->max_length )
          goto LABEL_197;
        if ( nums->m_Items[v17 + 1] > qp )
        {
          Instance = (int64_t)System_String__Concat_44568316((System_String_o *)StringLiteral_26/*"\n"*/, v21->fields.name, 0LL);
          if ( !v11 )
            goto LABEL_196;
          System_Text_StringBuilder__Append_42994048(v11, (System_String_o *)Instance, 0LL);
        }
        memset(&v128, 0, sizeof(v128));
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2540/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v128.fields.useName = System_String__Format(v24, (Il2CppObject *)v21->fields.name, 0LL);
        sub_B52920(&v128);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2541/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v25 = ItemConsumeEntity->fields.nums;
        if ( !v25 )
          goto LABEL_196;
        if ( v17 >= v25->max_length )
          goto LABEL_197;
        v26 = (System_String_o *)Instance;
        LODWORD(v131.fields.useName) = v25->m_Items[v17 + 1];
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
        v128.fields.useAmount = System_String__Format(v26, v27, 0LL);
        sub_B52920(&v128.fields.useAmount);
        v28 = LocalizationManager__Get((System_String_o *)StringLiteral_2543/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v128.fields.possessionName = System_String__Format(v28, (Il2CppObject *)v21->fields.name, 0LL);
        sub_B52920(&v128.fields.possessionName);
        MaxNum = ItemEntity__GetMaxNum(v21, 0LL);
        if ( MaxNum < 1 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v34 = LocalizationManager__Get((System_String_o *)StringLiteral_2544/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v131.fields.useName) = qp;
          v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
          v33 = System_String__Format(v34, v35, 0LL);
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2545/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v131.fields.useName) = qp;
          v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
          LODWORD(v125.fields.useName) = ItemEntity__GetMaxNum(v21, 0LL);
          v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125);
          v33 = System_String__Format_44563852(v30, v31, v32, 0LL);
        }
        v128.fields.possessionAmount = v33;
        sub_B52920(&v128.fields.possessionAmount);
        v128.fields.isIndividualLimit = MaxNum > 0;
        Instance = *p_rciItems;
        v125 = v128;
        if ( !Instance )
          goto LABEL_196;
        v131 = v125;
        System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___Add(
          (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
          &v131,
          (const MethodInfo_2F81404 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v17, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_79:
      if ( !v11 )
        goto LABEL_196;
      v3 = v118;
      this = v120;
      v7 = &byte_42AC000;
      if ( System_Text_StringBuilder__get_Length(v11, 0LL) < 1 )
      {
        v12 = v116;
LABEL_159:
        actMax = 0;
LABEL_160:
        if ( QuestEntity__GetConsumeType(v8, 0LL) == 1
          || QuestEntity__GetConsumeType(v8, 0LL) == 2
          || QuestEntity__GetConsumeType(v8, 0LL) == 4 )
        {
          v84 = (MapControl_QuestInfo_o *)sub_B52A54(MapControl_QuestInfo_TypeInfo);
          MapControl_QuestInfo___ctor(v84, 0LL);
          if ( !v84 )
            goto LABEL_196;
          MapControl_QuestInfo__SetTerminalParamsValue(v84, 0LL);
          questId = v84->fields.questId;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_25987760 = CondType__IsQuestClear_25987760(questId, -1, 0, 0LL);
          fixedVal = -1;
          v87 = IsQuestClear_25987760;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !v7[693] )
          {
            sub_B52984(&TerminalPramsManager_TypeInfo);
            v7[693] = 1;
          }
          v88 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v88 = TerminalPramsManager_TypeInfo;
          }
          QuestId_k__BackingField = v88->static_fields->_QuestId_k__BackingField;
          if ( !byte_42AC2B6 )
          {
            sub_B52984(&TerminalPramsManager_TypeInfo);
            v88 = TerminalPramsManager_TypeInfo;
            byte_42AC2B6 = 1;
          }
          if ( (BYTE3(v88->vtable._0_Equals.methodPtr) & 4) != 0 && !v88->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v88);
            v88 = TerminalPramsManager_TypeInfo;
          }
          CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                                    v8,
                                    QuestId_k__BackingField,
                                    v88->static_fields->_PhaseCnt_k__BackingField,
                                    !v87,
                                    &fixedVal,
                                    0LL);
          Instance = (int64_t)MapControl_QuestInfo__GetMine(v84, 0LL);
          if ( !Instance )
            goto LABEL_196;
          Instance = (int64_t)QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
          v84->fields._fixedCostVal_k__BackingField = fixedVal;
          if ( !Instance )
            goto LABEL_196;
          ActConsume = QuestEntity__getActConsume((QuestEntity_o *)Instance, CampaignCostCalcValue, 0LL);
          v84->fields.costCalcVal = CampaignCostCalcValue;
          v92 = v130;
          if ( fixedVal >= 0 )
            v93 = fixedVal;
          else
            v93 = ActConsume;
          CostValueColor = QuestEntity__GetCostValueColor(
                             CampaignCostCalcValue,
                             (v93 > actMax) | (unsigned __int8)(v93 > v130),
                             0LL);
          LODWORD(v131.fields.useName) = v93;
          v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
          v96 = (Il2CppObject *)System_String__Format(CostValueColor, v95, 0LL);
          v97 = System_Int32__ToString((int32_t)&v130, 0LL);
          if ( actMax < v92 )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v98 = LocalizationManager__Get((System_String_o *)StringLiteral_1747/*"AP_OVER_MAX_COLOR"*/, 0LL);
            LODWORD(v131.fields.useName) = v130;
            v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
            v97 = System_String__Format(v98, v99, 0LL);
          }
          v100 = (Il2CppObject *)v97;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v101 = LocalizationManager__Get((System_String_o *)StringLiteral_2538/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0LL);
          v129.fields.useName = System_String__Format(v101, v12, 0LL);
          sub_B52920(&v129);
          v102 = LocalizationManager__Get((System_String_o *)StringLiteral_2539/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0LL);
          v129.fields.useAmount = System_String__Format(v102, v96, 0LL);
          sub_B52920(&v129.fields.useAmount);
          v103 = LocalizationManager__Get((System_String_o *)StringLiteral_2536/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0LL);
          v129.fields.possessionName = System_String__Format(v103, v12, 0LL);
          sub_B52920(&v129.fields.possessionName);
          v104 = LocalizationManager__Get((System_String_o *)StringLiteral_2537/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0LL);
          LODWORD(v131.fields.useName) = actMax;
          v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
          v129.fields.possessionAmount = System_String__Format_44563852(v104, v100, v105, 0LL);
          sub_B52920(&v129.fields.possessionAmount);
        }
        v131 = v129;
        Instance = *p_rciItems;
        if ( *p_rciItems )
        {
          v106 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                   (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
                   (const MethodInfo_2F839AC *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
          v124 = v131;
          BattleRetryConfirmComponent__SetCostValueText(this, &v124, v106, v107);
          BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v108);
          BattleRetryConfirmComponent__SetFriendshipUpItemUseButton(this, v109);
          v110 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v110,
            (Il2CppObject *)v3,
            Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__,
            0LL);
          v113 = BattleRetryConfirmComponent__WaitOneFrame(v111, v110, v112);
          UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v113, 0LL);
          return 1;
        }
LABEL_196:
        sub_B52A5C(Instance, v5);
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_11029/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v37 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v11->klass->vtable._3_ToString.method)(
                              v11,
                              v11->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v38 = System_String__Format(v36, v37, 0LL);
      v39 = System_String__Concat_44568316(v38, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_2542/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v41 = System_String__Concat_44568316(v39, v40, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v42 = (CommonUI_o *)Instance;
      v43 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( (BYTE3(BattleRetryConfirmComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v43 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      static_fields = v43->static_fields;
      _9__37_1 = static_fields->__9__37_1;
      v46 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__37_1 )
      {
        if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        }
        v47 = (Il2CppObject *)static_fields->__9;
        _9__37_1 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(_9__37_1, v47, Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, 0LL);
        v48 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v48->__9__37_1 = _9__37_1;
        sub_B52920(&v48->__9__37_1);
      }
      if ( !v42 )
        goto LABEL_196;
      CommonUI__OpenNotificationDialog(v42, v46, v41, _9__37_1, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
      return 0;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3391/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v117 = (Il2CppObject *)Instance;
      v119 = v3;
      v121 = this;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      v130 = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v115 = (*p_userGameEntity)->fields.actMax;
      v129.fields.useName = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B52920(&v129);
      v129.fields.useAmount = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B52920(&v129.fields.useAmount);
      if ( !ItemConsumeEntity )
        goto LABEL_142;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      v49 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      v50 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_142;
      v51 = 0;
      do
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        v52 = ItemConsumeEntity->fields.itemIds;
        if ( !v52 )
          goto LABEL_196;
        if ( v51 >= v52->max_length )
          goto LABEL_197;
        if ( !v50 )
          goto LABEL_196;
        Instance = (int64_t)UserItemMaster__GetEntity(v50, Instance, v52->m_Items[v51 + 1], 0LL);
        v53 = ItemConsumeEntity->fields.itemIds;
        if ( !v53 )
          goto LABEL_196;
        if ( v51 >= v53->max_length )
          goto LABEL_197;
        if ( !v49 )
          goto LABEL_196;
        v54 = Instance;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v49,
                              v53->m_Items[v51 + 1],
                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_196;
        v55 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_196;
          v56 = (*p_userGameEntity)->fields.qp;
        }
        else if ( v54 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          v56 = *(_DWORD *)(v54 + 28);
        }
        else
        {
          v56 = 0;
        }
        v57 = ItemConsumeEntity->fields.nums;
        if ( !v57 )
          goto LABEL_196;
        if ( v51 >= v57->max_length )
          goto LABEL_197;
        if ( v57->m_Items[v51 + 1] > v56 )
        {
          Instance = (int64_t)System_String__Concat_44568316((System_String_o *)StringLiteral_26/*"\n"*/, v55->fields.name, 0LL);
          if ( !v11 )
            goto LABEL_196;
          System_Text_StringBuilder__Append_42994048(v11, (System_String_o *)Instance, 0LL);
        }
        memset(&v127, 0, sizeof(v127));
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v58 = LocalizationManager__Get((System_String_o *)StringLiteral_2540/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v127.fields.useName = System_String__Format(v58, (Il2CppObject *)v55->fields.name, 0LL);
        sub_B52920(&v127);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2541/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v59 = ItemConsumeEntity->fields.nums;
        if ( !v59 )
          goto LABEL_196;
        if ( v51 >= v59->max_length )
        {
LABEL_197:
          v114 = sub_B52A88(Instance);
          sub_B52A28(v114, 0LL);
        }
        v60 = (System_String_o *)Instance;
        LODWORD(v131.fields.useName) = v59->m_Items[v51 + 1];
        v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
        v127.fields.useAmount = System_String__Format(v60, v61, 0LL);
        sub_B52920(&v127.fields.useAmount);
        v62 = LocalizationManager__Get((System_String_o *)StringLiteral_2543/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v127.fields.possessionName = System_String__Format(v62, (Il2CppObject *)v55->fields.name, 0LL);
        sub_B52920(&v127.fields.possessionName);
        v63 = ItemEntity__GetMaxNum(v55, 0LL);
        if ( v63 < 1 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v68 = LocalizationManager__Get((System_String_o *)StringLiteral_2544/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v131.fields.useName) = v56;
          v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
          v67 = System_String__Format(v68, v69, 0LL);
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v64 = LocalizationManager__Get((System_String_o *)StringLiteral_2545/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v131.fields.useName) = v56;
          v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
          LODWORD(v125.fields.useName) = ItemEntity__GetMaxNum(v55, 0LL);
          v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v125);
          v67 = System_String__Format_44563852(v64, v65, v66, 0LL);
        }
        v127.fields.possessionAmount = v67;
        sub_B52920(&v127.fields.possessionAmount);
        v127.fields.isIndividualLimit = v63 > 0;
        Instance = *p_rciItems;
        v125 = v127;
        if ( !Instance )
          goto LABEL_196;
        v131 = v125;
        System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___Add(
          (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
          &v131,
          (const MethodInfo_2F81404 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v51, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_142:
      if ( !v11 )
        goto LABEL_196;
      v3 = v119;
      this = v121;
      v12 = v117;
      actMax = v115;
      v7 = &byte_42AC000;
      if ( System_Text_StringBuilder__get_Length(v11, 0LL) < 1 )
        goto LABEL_160;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v70 = LocalizationManager__Get((System_String_o *)StringLiteral_11029/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v71 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v11->klass->vtable._3_ToString.method)(
                              v11,
                              v11->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v72 = System_String__Format(v70, v71, 0LL);
      v73 = System_String__Concat_44568316(v72, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
      v74 = LocalizationManager__Get((System_String_o *)StringLiteral_2542/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v75 = System_String__Concat_44568316(v73, v74, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v76 = (CommonUI_o *)Instance;
      v77 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( (BYTE3(BattleRetryConfirmComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v77 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      v78 = v77->static_fields;
      _9__37_2 = v78->__9__37_2;
      v80 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__37_2 )
      {
        if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v77);
          v78 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        }
        v81 = (Il2CppObject *)v78->__9;
        _9__37_2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(_9__37_2, v81, Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, 0LL);
        v82 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v82->__9__37_2 = _9__37_2;
        sub_B52920(&v82->__9__37_2);
      }
      if ( !v76 )
        goto LABEL_196;
      CommonUI__OpenNotificationDialog(v76, v80, v75, _9__37_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
      return 0;
    default:
      goto LABEL_159;
  }
}


System_Collections_IEnumerator_o *__fastcall BattleRetryConfirmComponent__WaitOneFrame(
        BattleRetryConfirmComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  BattleRetryConfirmComponent__WaitOneFrame_d__42_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42AD589 & 1) == 0 )
  {
    sub_B52984(&BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo);
    byte_42AD589 = 1;
  }
  v4 = (BattleRetryConfirmComponent__WaitOneFrame_d__42_o *)sub_B52A54(BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo);
  BattleRetryConfirmComponent__WaitOneFrame_d__42___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B52A5C(v5, v6);
  v4->fields.action = action;
  sub_B52920(&v4->fields.action);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattleRetryConfirmComponent__WaitOneFrame_d__42___ctor(
        BattleRetryConfirmComponent__WaitOneFrame_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRetryConfirmComponent__WaitOneFrame_d__42__MoveNext(
        BattleRetryConfirmComponent__WaitOneFrame_d__42_o *this,
        const MethodInfo *method)
{
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
    sub_B52920(&this->fields.__2__current);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleRetryConfirmComponent__WaitOneFrame_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRetryConfirmComponent__WaitOneFrame_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRetryConfirmComponent__WaitOneFrame_d__42__System_Collections_IEnumerator_Reset(
        BattleRetryConfirmComponent__WaitOneFrame_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__42_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall BattleRetryConfirmComponent__WaitOneFrame_d__42__System_Collections_IEnumerator_get_Current(
        BattleRetryConfirmComponent__WaitOneFrame_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRetryConfirmComponent__WaitOneFrame_d__42__System_IDisposable_Dispose(
        BattleRetryConfirmComponent__WaitOneFrame_d__42_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleRetryConfirmComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42AD835 & 1) == 0 )
  {
    sub_B52984(&BattleRetryConfirmComponent___c_TypeInfo);
    byte_42AD835 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleRetryConfirmComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall BattleRetryConfirmComponent___c___ctor(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__37_1(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AD836 & 1) == 0 )
  {
    sub_B52984(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AD836 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1A406E4 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__37_2(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_42AD837 & 1) == 0 )
  {
    sub_B52984(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AD837 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1A406E4 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c__DisplayClass37_0___ctor(
        BattleRetryConfirmComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmComponent___c__DisplayClass37_0___SetValues_b__0(
        BattleRetryConfirmComponent___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *rciItems; // x0
  BattleRetryConfirmComponent_o *_4__this; // x19

  if ( (byte_42AD838 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
    byte_42AD838 = 1;
  }
  rciItems = this->fields.rciItems;
  if ( !rciItems
    || (_4__this = this->fields.__4__this,
        rciItems = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(rciItems, (const MethodInfo_2F839AC *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__),
        !_4__this) )
  {
    sub_B52A5C(rciItems, method);
  }
  BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
    _4__this,
    (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)rciItems,
    0LL);
}