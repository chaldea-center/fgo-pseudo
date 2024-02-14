void __fastcall BattleRetryConfirmComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleRetryConfirmComponent_c *v2; // x8

  if ( (byte_4211CFF & 1) == 0 )
  {
    sub_B0D8A4(&BattleRetryConfirmComponent_TypeInfo, v1);
    byte_4211CFF = 1;
  }
  BattleRetryConfirmComponent_TypeInfo->static_fields->MAIN_TEXT_DEFAULT_FONT_SIZE = 24;
  BattleRetryConfirmComponent_TypeInfo->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM = 22;
  v2 = BattleRetryConfirmComponent_TypeInfo;
  BattleRetryConfirmComponent_TypeInfo->static_fields->MAIN_TEXT_FONT_SIZE_FOR_DOUBLE_ITEM_AND_BUTTON = 22;
  v2->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM_AND_BUTTON = 19;
}


void __fastcall BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.CANCEL_BUTTON_POSITION_ON_THREE.fields.z = 3273916416LL;
  *(_OWORD *)&this->fields.CONFIRM_BUTTON_POSITION_ON_THREE.fields.y = xmmword_3200DC0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
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
  int32_t v12; // w2
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4211CFA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, *(_QWORD *)&result);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4211CFA = 1;
  }
  memset(&v13, 0, sizeof(v13));
  switch ( result )
  {
    case 2:
      battleResultComponent = this->fields.battleResultComponent;
      if ( !battleResultComponent )
        goto LABEL_20;
      v12 = boostId;
LABEL_17:
      BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, v12, 0LL);
      break;
    case 1:
      battleResultComponent = this->fields.battleResultComponent;
      if ( !battleResultComponent )
        goto LABEL_20;
      v12 = 0;
      goto LABEL_17;
    case 0:
      battleResultComponent = (BattleResultComponent_o *)this->fields.buttons;
      if ( !battleResultComponent )
        goto LABEL_20;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v13,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleResultComponent,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v13,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v13.fields.current )
          sub_B0D97C(0LL);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13.fields.current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v13,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_20:
    sub_B0D97C(battleResultComponent);
  CommonUI__CloseBoostSupportRequestMenu((CommonUI_o *)battleResultComponent, 0LL, 0LL);
}


void __fastcall BattleRetryConfirmComponent__Close(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_4211CF8 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    byte_4211CF8 = 1;
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
    sub_B0D97C(cancelLabel);
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
    sub_B0D97C(reqSingleParent);
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
      v7 = sub_B0D9A8(reqSingleParent);
      sub_B0D948(v7, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Collections_Generic_List_UIButton__o **p_buttons; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v21; // x21
  unsigned __int64 v22; // x22
  UILabel_o *mainText; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *confirmLabel; // x20
  __int64 v26; // x0
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4211CF6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIButton__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIButton___ctor__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIButton__get_Count__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_UIButton__TypeInfo, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_2512/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, v12);
    sub_B0D8A4(&StringLiteral_2514/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, v13);
    sub_B0D8A4(&StringLiteral_2513/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, v14);
    byte_4211CF6 = 1;
  }
  memset(&v27, 0, sizeof(v27));
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
    v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_List_UIButton__TypeInfo,
                                                                                                    v16,
                                                                                                    v17);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v19,
      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v19;
    sub_B0D840(&this->fields.buttons, v19);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    if ( !root )
      goto LABEL_29;
    klass = root[1].klass;
    v21 = root;
    if ( (int)klass >= 1 )
    {
      v22 = 0LL;
      while ( 1 )
      {
        if ( v22 >= (unsigned int)klass )
        {
          v26 = sub_B0D9A8(root);
          sub_B0D948(v26, 0LL);
        }
        root = (UnityEngine_GameObject_o *)*p_buttons;
        if ( !*p_buttons )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)root,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&v21[1].monitor + v22),
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UIButton__Add__);
        LODWORD(klass) = v21[1].klass;
        if ( (__int64)++v22 >= (int)klass )
          goto LABEL_14;
      }
LABEL_29:
      sub_B0D97C(root);
    }
LABEL_14:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_29;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)root,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v27.fields.current )
      sub_B0D97C(0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v27.fields.current, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  if ( !this->fields.isInitialized )
  {
    mainText = this->fields.mainText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2514/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    if ( !mainText )
      goto LABEL_29;
    UILabel__set_text(mainText, (System_String_o *)root, 0LL);
    cancelLabel = this->fields.cancelLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2512/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_29;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0LL);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2513/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x2
  CommonUI_o *Instance; // x20
  TerminalPramsManager_c *v14; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w21
  BoostFunctionUtility_CallbackFunc_o *v17; // x23
  struct System_Collections_Generic_List_UIButton__o *buttons; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4211CF9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__, method);
    sub_B0D8A4(&BoostFunctionUtility_CallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&SoundManager_TypeInfo, v9);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    byte_4211CF9 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v11);
    byte_4210852 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v14->static_fields->_QuestId_k__BackingField;
  if ( !byte_4210853 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v11);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4210853 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v14->static_fields->_PhaseCnt_k__BackingField;
  v17 = (BoostFunctionUtility_CallbackFunc_o *)sub_B0D974(BoostFunctionUtility_CallbackFunc_TypeInfo, v11, v12);
  BoostFunctionUtility_CallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__,
    0LL);
  if ( !Instance
    || (CommonUI__OpenBoostSupportRequestMenu(Instance, QuestId_k__BackingField, PhaseCnt_k__BackingField, v17, 1, 0LL),
        (buttons = this->fields.buttons) == 0LL) )
  {
    sub_B0D97C(buttons);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buttons,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B0D97C(0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v19.fields.current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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
  BattleResultComponent_o *battleResultComponent; // x0
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4211CEF & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleRetryConfirmComponent_OnClickCancel__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_4211CEF = 1;
  }
  memset(&v10, 0, sizeof(v10));
  v7 = Method_BattleRetryConfirmComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 75) & 2) != 0 )
    v7 = (_QWORD *)sub_B0D8AC(Method_BattleRetryConfirmComponent_OnClickCancel__);
  v8 = (System_Reflection_MethodBase_o *)sub_B0D888(v7, v7[3]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_B0D97C(battleResultComponent);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleResultComponent,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v10.fields.current )
      sub_B0D97C(0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10.fields.current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
}


void __fastcall BattleRetryConfirmComponent__OnClickConfirm(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleResultComponent_o *battleResultComponent; // x0
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4211CF0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4211CF0 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_B0D97C(battleResultComponent);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleResultComponent,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8.fields.current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
}


void __fastcall BattleRetryConfirmComponent__OnClickFriendshipUpItemUseButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_c *v4; // x0
  PartyOrganizationUtility_c *v5; // x0
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v7; // w1
  PartyOrganizationUtility_c *v8; // x0

  if ( (byte_4211CFE & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationUtility_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4211CFE = 1;
  }
  v4 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v4 = PartyOrganizationUtility_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
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
    sub_B0D97C(friendshipUpItemUseButton);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  v5 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v5 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v5->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
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

  if ( (byte_4211CF7 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, opendFunc);
    byte_4211CF7 = 1;
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
    sub_B0D97C(bgObj);
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
  __int64 v2; // x2
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
  TerminalPramsManager_c *v14; // x0
  int32_t WarId_k__BackingField; // w22
  int32_t QuestId_k__BackingField; // w20
  int32_t PhaseCnt_k__BackingField; // w21
  BattleSetupInfo_o *v18; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  BattleSetupInfo_o *v20; // x22
  UnityEngine_Object_o *boostSupportRequestLabel; // x20
  UILabel_o *v22; // x20
  UnityEngine_Object_o *v23; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4211CFB & 1) == 0 )
  {
    sub_B0D8A4(&BattleSetupInfo_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDetailMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v9);
    sub_B0D8A4(&SingletonTemplate_BoostFunctionUtility__TypeInfo, v10);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_11157/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, v12);
    sub_B0D8A4(&StringLiteral_2511/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/, v13);
    byte_4211CFB = 1;
  }
  entity = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421083F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_421083F = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v14->static_fields->_WarId_k__BackingField;
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4210852 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v14->static_fields->_QuestId_k__BackingField;
  if ( !byte_4210853 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4210853 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v14->static_fields->_PhaseCnt_k__BackingField;
  v18 = (BattleSetupInfo_o *)sub_B0D974(BattleSetupInfo_TypeInfo, method, v2);
  BattleSetupInfo___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_66;
  v20 = BattleSetupInfo__ConvertBattleSetupInfo(
          v18,
          WarId_k__BackingField,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          0,
          0,
          0,
          0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v20 || !Master_WarQuestSelectionMaster )
    goto LABEL_66;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          v20->fields.eventId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_66;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_WarQuestSelectionMaster,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0LL)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11157/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0LL) == 1 )
    {
      boostSupportRequestLabel = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(boostSupportRequestLabel, 0LL, 0LL) )
      {
        v22 = this->fields.boostSupportRequestLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                          (System_String_o *)StringLiteral_2511/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/,
                                                                                          0LL);
        if ( !v22 )
          goto LABEL_66;
        UILabel__set_text(v22, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
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
      sub_B0D97C(Master_WarQuestSelectionMaster);
    }
  }
  else
  {
LABEL_56:
    v23 = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
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
        v14 = sub_B0D9A8(this);
        sub_B0D948(v14, 0LL);
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
        this = (BattleRetryConfirmComponent_o *)UnityEngine_MonoBehaviour__StartCoroutine_34930128(v12, v13, 0LL);
      }
      LODWORD(v4) = value->max_length;
      if ( (__int64)++v7 >= (int)v4 )
        return;
    }
LABEL_13:
    sub_B0D97C(this);
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

  if ( (byte_4211CFD & 1) == 0 )
  {
    sub_B0D8A4(&RetryConfirmItem___TypeInfo, items);
    byte_4211CFD = 1;
  }
  v16 = 0LL;
  v15 = 0LL;
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_31;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL) )
  {
    reqSingleParent = (UnityEngine_GameObject_o *)sub_B0D8BC(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItem = this->fields.singleItem;
      v7 = (__int64)reqSingleParent;
      if ( !singleItem
        || (reqSingleParent = (UnityEngine_GameObject_o *)sub_B0D964(
                                                            singleItem,
                                                            reqSingleParent->klass->_1.element_class)) != 0LL )
      {
        if ( *(_DWORD *)(v7 + 24) )
        {
          *(_QWORD *)(v7 + 32) = singleItem;
          sub_B0D840(v7 + 32, singleItem);
          v16 = v7;
          p_doubleItems = &v16;
          goto LABEL_29;
        }
LABEL_32:
        v13 = sub_B0D9A8(reqSingleParent);
        sub_B0D948(v13, 0LL);
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
    reqSingleParent = (UnityEngine_GameObject_o *)sub_B0D8BC(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItemWithUseItemButton = this->fields.singleItemWithUseItemButton;
      v12 = (__int64)reqSingleParent;
      if ( !singleItemWithUseItemButton
        || (reqSingleParent = (UnityEngine_GameObject_o *)sub_B0D964(
                                                            singleItemWithUseItemButton,
                                                            reqSingleParent->klass->_1.element_class)) != 0LL )
      {
        if ( *(_DWORD *)(v12 + 24) )
        {
          *(_QWORD *)(v12 + 32) = singleItemWithUseItemButton;
          sub_B0D840(v12 + 32, singleItemWithUseItemButton);
          v15 = v12;
          p_doubleItems = &v15;
          goto LABEL_29;
        }
        goto LABEL_32;
      }
LABEL_33:
      v14 = sub_B0D99C();
      sub_B0D948(v14, 0LL);
    }
LABEL_31:
    sub_B0D97C(reqSingleParent);
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
  if ( (byte_4211CF5 & 1) == 0 )
  {
    this = (BattleRetryConfirmComponent_o *)sub_B0D8A4(&StringLiteral_1/*""*/, costPoint);
    byte_4211CF5 = 1;
  }
  if ( !items )
    sub_B0D97C(this);
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
        v21 = sub_B0D9A8(v8);
        sub_B0D948(v21, 0LL);
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

  if ( (byte_4211CF3 & 1) == 0 )
  {
    sub_B0D8A4(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_4211CF3 = 1;
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
    sub_B0D97C(reqSingleParent);
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
      v30 = sub_B0D9A8(reqSingleParent);
      sub_B0D948(v30, 0LL);
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

  if ( (byte_4211CF2 & 1) == 0 )
  {
    sub_B0D8A4(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_4211CF2 = 1;
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
    sub_B0D97C(reqSingleParent);
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

  if ( (byte_4211CF4 & 1) == 0 )
  {
    sub_B0D8A4(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_4211CF4 = 1;
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
    sub_B0D97C(reqSingleParent);
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
      v30 = sub_B0D9A8(reqSingleParent);
      sub_B0D948(v30, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *friendshipUpItemUseButton; // x20
  PartyOrganizationUtility_o *IsAvailableFriendshipUpItem; // x0
  char v9; // w20
  PartyOrganizationUtility_c *v10; // x0
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x20
  UILabel_o *mainText; // x19
  struct BattleRetryConfirmComponent_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x20
  BattleRetryConfirmComponent_c *v17; // x8
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x20
  BattleRetryConfirmComponent_c *v20; // x8

  if ( (byte_4211CFC & 1) == 0 )
  {
    sub_B0D8A4(&BattleRetryConfirmComponent_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&PartyOrganizationUtility_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v6);
    byte_4211CFC = 1;
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
    IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( IsAvailableFriendshipUpItem )
    {
      IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                                                                    IsAvailableFriendshipUpItem,
                                                                    0LL);
      if ( this->fields.friendshipUpItemUseButton )
      {
        v9 = (char)IsAvailableFriendshipUpItem;
        IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                      0LL);
        if ( IsAvailableFriendshipUpItem )
        {
          if ( (v9 & 1) != 0 )
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
            v10 = PartyOrganizationUtility_TypeInfo;
            if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
              v10 = PartyOrganizationUtility_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v10->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
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
                    v11 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                    IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                  0LL);
                    if ( IsAvailableFriendshipUpItem )
                    {
                      IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                    (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                    0LL);
                      if ( v11 )
                      {
                        UnityEngine_GameObject__SetActive(
                          v11,
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
                              IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)this->fields.reqDoubleParentWithUseItemButton;
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
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)&v17->static_fields->MAIN_TEXT_FONT_SIZE_FOR_DOUBLE_ITEM_AND_BUTTON;
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
                                            static_fields = v17->static_fields;
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
                          v18 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                          IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                        0LL);
                          if ( IsAvailableFriendshipUpItem )
                          {
                            IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                          (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                          0LL);
                            if ( v18 )
                            {
                              UnityEngine_GameObject__SetActive(
                                v18,
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
                                  v19 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                                  IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                                (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                                0LL);
                                  if ( IsAvailableFriendshipUpItem )
                                  {
                                    IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                                  (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                                  0LL);
                                    if ( v19 )
                                    {
                                      UnityEngine_GameObject__SetActive(
                                        v19,
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
                                          v20 = BattleRetryConfirmComponent_TypeInfo;
                                          if ( ((unsigned __int8)IsAvailableFriendshipUpItem & 1) != 0 )
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v20 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)&v20->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM_AND_BUTTON;
                                            if ( mainText )
                                              goto LABEL_80;
                                          }
                                          else
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v20 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)&v20->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM;
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
    sub_B0D97C(IsAvailableFriendshipUpItem);
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
    sub_B0D97C(this);
  }
  UILabel__set_text((UILabel_o *)this, value->fields.possessionAmount, 0LL);
}


bool __fastcall BattleRetryConfirmComponent__SetValues(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  BattleRetryConfirmComponent___c__DisplayClass37_0_o *v44; // x25
  int64_t Instance; // x0
  struct UserGameEntity_o *SelfUserGame; // x0
  __int64 v47; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  char *v49; // x22
  QuestEntity_o *v50; // x21
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  __int64 v52; // x1
  __int64 v53; // x2
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v54; // x19
  __int64 v55; // x1
  __int64 v56; // x2
  System_Text_StringBuilder_o *v57; // x26
  Il2CppObject *v58; // x28
  int actMax; // w27
  __int64 v60; // x1
  BalanceConfig_c *v61; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v62; // x28
  UserItemMaster_o *v63; // x22
  il2cpp_array_size_t v64; // w23
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v66; // x8
  int64_t v67; // x20
  ItemEntity_o *v68; // x25
  int32_t qp; // w24
  struct System_Int32_array *nums; // x8
  System_String_o *v71; // x0
  struct System_Int32_array *v72; // x8
  System_String_o *v73; // x20
  Il2CppObject *v74; // x0
  System_String_o *v75; // x0
  int32_t MaxNum; // w20
  System_String_o *v77; // x19
  Il2CppObject *v78; // x24
  Il2CppObject *v79; // x0
  struct System_String_o *v80; // x0
  System_String_o *v81; // x19
  Il2CppObject *v82; // x0
  System_String_o *v83; // x19
  Il2CppObject *v84; // x0
  System_String_o *v85; // x0
  System_String_o *v86; // x19
  System_String_o *v87; // x0
  System_String_o *v88; // x19
  __int64 v89; // x1
  __int64 v90; // x2
  CommonUI_o *v91; // x20
  BattleRetryConfirmComponent___c_c *v92; // x8
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__37_1; // x22
  System_String_o *v95; // x21
  Il2CppObject *v96; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v97; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v98; // x28
  UserItemMaster_o *v99; // x22
  il2cpp_array_size_t v100; // w23
  struct System_Int32_array *v101; // x8
  struct System_Int32_array *v102; // x8
  int64_t v103; // x20
  ItemEntity_o *v104; // x25
  int32_t v105; // w24
  struct System_Int32_array *v106; // x8
  System_String_o *v107; // x0
  struct System_Int32_array *v108; // x8
  System_String_o *v109; // x20
  Il2CppObject *v110; // x0
  System_String_o *v111; // x0
  int32_t v112; // w20
  System_String_o *v113; // x19
  Il2CppObject *v114; // x24
  Il2CppObject *v115; // x0
  struct System_String_o *v116; // x0
  System_String_o *v117; // x19
  Il2CppObject *v118; // x0
  System_String_o *v119; // x19
  Il2CppObject *v120; // x0
  System_String_o *v121; // x0
  System_String_o *v122; // x19
  System_String_o *v123; // x0
  System_String_o *v124; // x19
  __int64 v125; // x1
  __int64 v126; // x2
  CommonUI_o *v127; // x20
  BattleRetryConfirmComponent___c_c *v128; // x8
  struct BattleRetryConfirmComponent___c_StaticFields *v129; // x9
  System_Action_o *_9__37_2; // x22
  System_String_o *v131; // x21
  Il2CppObject *v132; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v133; // x0
  __int64 v135; // x1
  __int64 v136; // x2
  MapControl_QuestInfo_o *v137; // x19
  int32_t questId; // w20
  bool IsQuestClear_25410236; // w0
  __int64 v140; // x1
  bool v141; // w20
  TerminalPramsManager_c *v142; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t CampaignCostCalcValue; // w20
  int32_t ActConsume; // w0
  int v146; // w22
  int32_t v147; // w23
  System_String_o *CostValueColor; // x19
  Il2CppObject *v149; // x0
  Il2CppObject *v150; // x20
  System_String_o *v151; // x0
  System_String_o *v152; // x19
  Il2CppObject *v153; // x0
  Il2CppObject *v154; // x19
  System_String_o *v155; // x0
  System_String_o *v156; // x0
  System_String_o *v157; // x0
  System_String_o *v158; // x20
  Il2CppObject *v159; // x0
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v160; // x0
  const MethodInfo *v161; // x3
  const MethodInfo *v162; // x1
  const MethodInfo *v163; // x1
  __int64 v164; // x1
  __int64 v165; // x2
  System_Action_o *v166; // x19
  BattleRetryConfirmComponent_o *v167; // x0
  const MethodInfo *v168; // x2
  System_Collections_IEnumerator_o *v169; // x0
  __int64 v170; // x0
  int32_t v171; // [xsp+34h] [xbp-1BCh]
  Il2CppObject *v172; // [xsp+38h] [xbp-1B8h]
  Il2CppObject *v173; // [xsp+38h] [xbp-1B8h]
  BattleRetryConfirmComponent___c__DisplayClass37_0_o *v174; // [xsp+48h] [xbp-1A8h]
  BattleRetryConfirmComponent___c__DisplayClass37_0_o *v175; // [xsp+48h] [xbp-1A8h]
  BattleRetryConfirmComponent_o *v176; // [xsp+50h] [xbp-1A0h]
  BattleRetryConfirmComponent_o *v177; // [xsp+50h] [xbp-1A0h]
  UserGameEntity_o **p_userGameEntity; // [xsp+70h] [xbp-180h]
  int64_t *p_rciItems; // [xsp+78h] [xbp-178h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v180; // [xsp+80h] [xbp-170h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v181; // [xsp+B0h] [xbp-140h] BYREF
  int32_t fixedVal; // [xsp+DCh] [xbp-114h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v183; // [xsp+E0h] [xbp-110h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v184; // [xsp+108h] [xbp-E8h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v185; // [xsp+130h] [xbp-C0h] BYREF
  int v186; // [xsp+15Ch] [xbp-94h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v187; // [xsp+160h] [xbp-90h] BYREF

  if ( (byte_4211CEE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&CondType_TypeInfo, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v9);
    sub_B0D8A4(&int_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo, v14);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&NetworkManager_TypeInfo, v16);
    sub_B0D8A4(&MapControl_QuestInfo_TypeInfo, v17);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v20);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v21);
    sub_B0D8A4(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, v22);
    sub_B0D8A4(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, v23);
    sub_B0D8A4(&Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__, v24);
    sub_B0D8A4(&BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo, v25);
    sub_B0D8A4(&BattleRetryConfirmComponent___c_TypeInfo, v26);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v27);
    sub_B0D8A4(&StringLiteral_2520/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, v28);
    sub_B0D8A4(&StringLiteral_3371/*"CONSUME_TYPE_AP"*/, v29);
    sub_B0D8A4(&StringLiteral_10971/*"QUEST_ITEM_COST_OVER"*/, v30);
    sub_B0D8A4(&StringLiteral_2518/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, v31);
    sub_B0D8A4(&StringLiteral_2519/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, v32);
    sub_B0D8A4(&StringLiteral_1735/*"AP_OVER_MAX_COLOR"*/, v33);
    sub_B0D8A4(&StringLiteral_3372/*"CONSUME_TYPE_RP"*/, v34);
    sub_B0D8A4(&StringLiteral_2524/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, v35);
    sub_B0D8A4(&StringLiteral_2523/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, v36);
    sub_B0D8A4(&StringLiteral_27/*"\n\n"*/, v37);
    sub_B0D8A4(&StringLiteral_2521/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v38);
    sub_B0D8A4(&StringLiteral_2515/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, v39);
    sub_B0D8A4(&StringLiteral_1/*""*/, v40);
    sub_B0D8A4(&StringLiteral_2522/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, v41);
    sub_B0D8A4(&StringLiteral_2516/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, v42);
    sub_B0D8A4(&StringLiteral_2517/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, v43);
    byte_4211CEE = 1;
  }
  v186 = 0;
  memset(&v185, 0, sizeof(v185));
  memset(&v184, 0, sizeof(v184));
  memset(&v183, 0, sizeof(v183));
  fixedVal = 0;
  v44 = (BattleRetryConfirmComponent___c__DisplayClass37_0_o *)sub_B0D974(
                                                                 BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo,
                                                                 method,
                                                                 v2);
  BattleRetryConfirmComponent___c__DisplayClass37_0___ctor(v44, 0LL);
  if ( !v44 )
    goto LABEL_196;
  v44->fields.__4__this = this;
  sub_B0D840(&v44->fields, this);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_userGameEntity = &this->fields.userGameEntity;
  sub_B0D840(&this->fields.userGameEntity, SelfUserGame);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_196;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  v49 = &byte_4210000;
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v47);
    byte_4210852 = 1;
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
                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_196;
  v50 = (QuestEntity_o *)Instance;
  v186 = 0;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0LL);
  memset(&v185, 0, sizeof(v185));
  v54 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_B0D974(
                                                                                                System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo,
                                                                                                v52,
                                                                                                v53);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v54,
    (const MethodInfo_2EEFF9C *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  v44->fields.rciItems = v54;
  p_rciItems = (int64_t *)&v44->fields.rciItems;
  sub_B0D840(&v44->fields.rciItems, v54);
  v57 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v55, v56);
  System_Text_StringBuilder___ctor(v57, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v58 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3371/*"CONSUME_TYPE_AP"*/, 0LL);
  switch ( QuestEntity__GetConsumeType(v50, 0LL) )
  {
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3371/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v58 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      v186 = Instance;
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
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3372/*"CONSUME_TYPE_RP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v58 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getRp(*p_userGameEntity, 0LL);
      v186 = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_196;
      if ( !byte_421083C )
      {
        sub_B0D8A4(&BalanceConfig_TypeInfo, v60);
        byte_421083C = 1;
      }
      v61 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v61 = BalanceConfig_TypeInfo;
      }
      actMax = v61->static_fields->UerGameRpMax;
      goto LABEL_160;
    case 3:
      v174 = v44;
      v176 = this;
      v185.fields.useName = (struct System_String_o *)StringLiteral_1/*""*/;
      v172 = (Il2CppObject *)StringLiteral_1/*""*/;
      sub_B0D840(&v185, StringLiteral_1/*""*/);
      v185.fields.useAmount = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B0D840(&v185.fields.useAmount, StringLiteral_1/*""*/);
      if ( !ItemConsumeEntity )
        goto LABEL_79;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      v62 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      v63 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_79;
      v64 = 0;
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
        if ( v64 >= itemIds->max_length )
          goto LABEL_197;
        if ( !v63 )
          goto LABEL_196;
        Instance = (int64_t)UserItemMaster__GetEntity(v63, Instance, itemIds->m_Items[v64 + 1], 0LL);
        v66 = ItemConsumeEntity->fields.itemIds;
        if ( !v66 )
          goto LABEL_196;
        if ( v64 >= v66->max_length )
          goto LABEL_197;
        if ( !v62 )
          goto LABEL_196;
        v67 = Instance;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v62,
                              v66->m_Items[v64 + 1],
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_196;
        v68 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_196;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v67 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          qp = *(_DWORD *)(v67 + 28);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_196;
        if ( v64 >= nums->max_length )
          goto LABEL_197;
        if ( nums->m_Items[v64 + 1] > qp )
        {
          Instance = (int64_t)System_String__Concat_43849904((System_String_o *)StringLiteral_26/*"\n"*/, v68->fields.name, 0LL);
          if ( !v57 )
            goto LABEL_196;
          System_Text_StringBuilder__Append_42155400(v57, (System_String_o *)Instance, 0LL);
        }
        memset(&v184, 0, sizeof(v184));
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v71 = LocalizationManager__Get((System_String_o *)StringLiteral_2519/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v184.fields.useName = System_String__Format(v71, (Il2CppObject *)v68->fields.name, 0LL);
        sub_B0D840(&v184, v184.fields.useName);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2520/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v72 = ItemConsumeEntity->fields.nums;
        if ( !v72 )
          goto LABEL_196;
        if ( v64 >= v72->max_length )
          goto LABEL_197;
        v73 = (System_String_o *)Instance;
        LODWORD(v187.fields.useName) = v72->m_Items[v64 + 1];
        v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v187);
        v184.fields.useAmount = System_String__Format(v73, v74, 0LL);
        sub_B0D840(&v184.fields.useAmount, v184.fields.useAmount);
        v75 = LocalizationManager__Get((System_String_o *)StringLiteral_2522/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v184.fields.possessionName = System_String__Format(v75, (Il2CppObject *)v68->fields.name, 0LL);
        sub_B0D840(&v184.fields.possessionName, v184.fields.possessionName);
        MaxNum = ItemEntity__GetMaxNum(v68, 0LL);
        if ( MaxNum < 1 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v81 = LocalizationManager__Get((System_String_o *)StringLiteral_2523/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v187.fields.useName) = qp;
          v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v187);
          v80 = System_String__Format(v81, v82, 0LL);
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v77 = LocalizationManager__Get((System_String_o *)StringLiteral_2524/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v187.fields.useName) = qp;
          v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v187);
          LODWORD(v181.fields.useName) = ItemEntity__GetMaxNum(v68, 0LL);
          v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v181);
          v80 = System_String__Format_43845440(v77, v78, v79, 0LL);
        }
        v184.fields.possessionAmount = v80;
        sub_B0D840(&v184.fields.possessionAmount, v80);
        v184.fields.isIndividualLimit = MaxNum > 0;
        Instance = *p_rciItems;
        v181 = v184;
        if ( !Instance )
          goto LABEL_196;
        v187 = v181;
        System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___Add(
          (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
          &v187,
          (const MethodInfo_2EF0DD4 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v64, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_79:
      if ( !v57 )
        goto LABEL_196;
      v44 = v174;
      this = v176;
      v49 = &byte_4210000;
      if ( System_Text_StringBuilder__get_Length(v57, 0LL) < 1 )
      {
        v58 = v172;
LABEL_159:
        actMax = 0;
LABEL_160:
        if ( QuestEntity__GetConsumeType(v50, 0LL) == 1
          || QuestEntity__GetConsumeType(v50, 0LL) == 2
          || QuestEntity__GetConsumeType(v50, 0LL) == 4 )
        {
          v137 = (MapControl_QuestInfo_o *)sub_B0D974(MapControl_QuestInfo_TypeInfo, v135, v136);
          MapControl_QuestInfo___ctor(v137, 0LL);
          if ( !v137 )
            goto LABEL_196;
          MapControl_QuestInfo__SetTerminalParamsValue(v137, 0LL);
          questId = v137->fields.questId;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_25410236 = CondType__IsQuestClear_25410236(questId, -1, 0, 0LL);
          fixedVal = -1;
          v141 = IsQuestClear_25410236;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !v49[2130] )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v140);
            v49[2130] = 1;
          }
          v142 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v142 = TerminalPramsManager_TypeInfo;
          }
          QuestId_k__BackingField = v142->static_fields->_QuestId_k__BackingField;
          if ( !byte_4210853 )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v140);
            v142 = TerminalPramsManager_TypeInfo;
            byte_4210853 = 1;
          }
          if ( (BYTE3(v142->vtable._0_Equals.methodPtr) & 4) != 0 && !v142->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v142);
            v142 = TerminalPramsManager_TypeInfo;
          }
          CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                                    v50,
                                    QuestId_k__BackingField,
                                    v142->static_fields->_PhaseCnt_k__BackingField,
                                    !v141,
                                    &fixedVal,
                                    0LL);
          Instance = (int64_t)MapControl_QuestInfo__GetMine(v137, 0LL);
          if ( !Instance )
            goto LABEL_196;
          Instance = (int64_t)QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
          v137->fields._fixedCostVal_k__BackingField = fixedVal;
          if ( !Instance )
            goto LABEL_196;
          ActConsume = QuestEntity__getActConsume((QuestEntity_o *)Instance, CampaignCostCalcValue, 0LL);
          v137->fields.costCalcVal = CampaignCostCalcValue;
          v146 = v186;
          if ( fixedVal >= 0 )
            v147 = fixedVal;
          else
            v147 = ActConsume;
          CostValueColor = QuestEntity__GetCostValueColor(
                             CampaignCostCalcValue,
                             (v147 > actMax) | (unsigned __int8)(v147 > v186),
                             0LL);
          LODWORD(v187.fields.useName) = v147;
          v149 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v187);
          v150 = (Il2CppObject *)System_String__Format(CostValueColor, v149, 0LL);
          v151 = System_Int32__ToString((int32_t)&v186, 0LL);
          if ( actMax < v146 )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v152 = LocalizationManager__Get((System_String_o *)StringLiteral_1735/*"AP_OVER_MAX_COLOR"*/, 0LL);
            LODWORD(v187.fields.useName) = v186;
            v153 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v187);
            v151 = System_String__Format(v152, v153, 0LL);
          }
          v154 = (Il2CppObject *)v151;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v155 = LocalizationManager__Get((System_String_o *)StringLiteral_2517/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0LL);
          v185.fields.useName = System_String__Format(v155, v58, 0LL);
          sub_B0D840(&v185, v185.fields.useName);
          v156 = LocalizationManager__Get((System_String_o *)StringLiteral_2518/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0LL);
          v185.fields.useAmount = System_String__Format(v156, v150, 0LL);
          sub_B0D840(&v185.fields.useAmount, v185.fields.useAmount);
          v157 = LocalizationManager__Get((System_String_o *)StringLiteral_2515/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0LL);
          v185.fields.possessionName = System_String__Format(v157, v58, 0LL);
          sub_B0D840(&v185.fields.possessionName, v185.fields.possessionName);
          v158 = LocalizationManager__Get((System_String_o *)StringLiteral_2516/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0LL);
          LODWORD(v187.fields.useName) = actMax;
          v159 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v187);
          v185.fields.possessionAmount = System_String__Format_43845440(v158, v154, v159, 0LL);
          sub_B0D840(&v185.fields.possessionAmount, v185.fields.possessionAmount);
        }
        v187 = v185;
        Instance = *p_rciItems;
        if ( *p_rciItems )
        {
          v160 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                   (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
                   (const MethodInfo_2EF337C *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
          v180 = v187;
          BattleRetryConfirmComponent__SetCostValueText(this, &v180, v160, v161);
          BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v162);
          BattleRetryConfirmComponent__SetFriendshipUpItemUseButton(this, v163);
          v166 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v164, v165);
          System_Action___ctor(
            v166,
            (Il2CppObject *)v44,
            Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__,
            0LL);
          v169 = BattleRetryConfirmComponent__WaitOneFrame(v167, v166, v168);
          UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v169, 0LL);
          return 1;
        }
LABEL_196:
        sub_B0D97C(Instance);
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v83 = LocalizationManager__Get((System_String_o *)StringLiteral_10971/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v84 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v57->klass->vtable._3_ToString.method)(
                              v57,
                              v57->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v85 = System_String__Format(v83, v84, 0LL);
      v86 = System_String__Concat_43849904(v85, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
      v87 = LocalizationManager__Get((System_String_o *)StringLiteral_2521/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v88 = System_String__Concat_43849904(v86, v87, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v91 = (CommonUI_o *)Instance;
      v92 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( (BYTE3(BattleRetryConfirmComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v92 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      static_fields = v92->static_fields;
      _9__37_1 = static_fields->__9__37_1;
      v95 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__37_1 )
      {
        if ( (BYTE3(v92->vtable._0_Equals.methodPtr) & 4) != 0 && !v92->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v92);
          static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        }
        v96 = (Il2CppObject *)static_fields->__9;
        _9__37_1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v89, v90);
        System_Action___ctor(_9__37_1, v96, Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, 0LL);
        v97 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v97->__9__37_1 = _9__37_1;
        sub_B0D840(&v97->__9__37_1, _9__37_1);
      }
      if ( !v91 )
        goto LABEL_196;
      CommonUI__OpenNotificationDialog(v91, v95, v88, _9__37_1, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
      return 0;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3371/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v173 = (Il2CppObject *)Instance;
      v175 = v44;
      v177 = this;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      v186 = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v171 = (*p_userGameEntity)->fields.actMax;
      v185.fields.useName = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B0D840(&v185, StringLiteral_1/*""*/);
      v185.fields.useAmount = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B0D840(&v185.fields.useAmount, StringLiteral_1/*""*/);
      if ( !ItemConsumeEntity )
        goto LABEL_142;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      v98 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      v99 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_142;
      v100 = 0;
      do
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        v101 = ItemConsumeEntity->fields.itemIds;
        if ( !v101 )
          goto LABEL_196;
        if ( v100 >= v101->max_length )
          goto LABEL_197;
        if ( !v99 )
          goto LABEL_196;
        Instance = (int64_t)UserItemMaster__GetEntity(v99, Instance, v101->m_Items[v100 + 1], 0LL);
        v102 = ItemConsumeEntity->fields.itemIds;
        if ( !v102 )
          goto LABEL_196;
        if ( v100 >= v102->max_length )
          goto LABEL_197;
        if ( !v98 )
          goto LABEL_196;
        v103 = Instance;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v98,
                              v102->m_Items[v100 + 1],
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_196;
        v104 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_196;
          v105 = (*p_userGameEntity)->fields.qp;
        }
        else if ( v103 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          v105 = *(_DWORD *)(v103 + 28);
        }
        else
        {
          v105 = 0;
        }
        v106 = ItemConsumeEntity->fields.nums;
        if ( !v106 )
          goto LABEL_196;
        if ( v100 >= v106->max_length )
          goto LABEL_197;
        if ( v106->m_Items[v100 + 1] > v105 )
        {
          Instance = (int64_t)System_String__Concat_43849904(
                                (System_String_o *)StringLiteral_26/*"\n"*/,
                                v104->fields.name,
                                0LL);
          if ( !v57 )
            goto LABEL_196;
          System_Text_StringBuilder__Append_42155400(v57, (System_String_o *)Instance, 0LL);
        }
        memset(&v183, 0, sizeof(v183));
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v107 = LocalizationManager__Get((System_String_o *)StringLiteral_2519/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v183.fields.useName = System_String__Format(v107, (Il2CppObject *)v104->fields.name, 0LL);
        sub_B0D840(&v183, v183.fields.useName);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2520/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v108 = ItemConsumeEntity->fields.nums;
        if ( !v108 )
          goto LABEL_196;
        if ( v100 >= v108->max_length )
        {
LABEL_197:
          v170 = sub_B0D9A8(Instance);
          sub_B0D948(v170, 0LL);
        }
        v109 = (System_String_o *)Instance;
        LODWORD(v187.fields.useName) = v108->m_Items[v100 + 1];
        v110 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v187);
        v183.fields.useAmount = System_String__Format(v109, v110, 0LL);
        sub_B0D840(&v183.fields.useAmount, v183.fields.useAmount);
        v111 = LocalizationManager__Get((System_String_o *)StringLiteral_2522/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v183.fields.possessionName = System_String__Format(v111, (Il2CppObject *)v104->fields.name, 0LL);
        sub_B0D840(&v183.fields.possessionName, v183.fields.possessionName);
        v112 = ItemEntity__GetMaxNum(v104, 0LL);
        if ( v112 < 1 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v117 = LocalizationManager__Get((System_String_o *)StringLiteral_2523/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v187.fields.useName) = v105;
          v118 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v187);
          v116 = System_String__Format(v117, v118, 0LL);
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v113 = LocalizationManager__Get((System_String_o *)StringLiteral_2524/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v187.fields.useName) = v105;
          v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v187);
          LODWORD(v181.fields.useName) = ItemEntity__GetMaxNum(v104, 0LL);
          v115 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v181);
          v116 = System_String__Format_43845440(v113, v114, v115, 0LL);
        }
        v183.fields.possessionAmount = v116;
        sub_B0D840(&v183.fields.possessionAmount, v116);
        v183.fields.isIndividualLimit = v112 > 0;
        Instance = *p_rciItems;
        v181 = v183;
        if ( !Instance )
          goto LABEL_196;
        v187 = v181;
        System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___Add(
          (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
          &v187,
          (const MethodInfo_2EF0DD4 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v100, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_142:
      if ( !v57 )
        goto LABEL_196;
      v44 = v175;
      this = v177;
      v58 = v173;
      actMax = v171;
      v49 = &byte_4210000;
      if ( System_Text_StringBuilder__get_Length(v57, 0LL) < 1 )
        goto LABEL_160;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v119 = LocalizationManager__Get((System_String_o *)StringLiteral_10971/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v120 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v57->klass->vtable._3_ToString.method)(
                               v57,
                               v57->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v121 = System_String__Format(v119, v120, 0LL);
      v122 = System_String__Concat_43849904(v121, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
      v123 = LocalizationManager__Get((System_String_o *)StringLiteral_2521/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v124 = System_String__Concat_43849904(v122, v123, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v127 = (CommonUI_o *)Instance;
      v128 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( (BYTE3(BattleRetryConfirmComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v128 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      v129 = v128->static_fields;
      _9__37_2 = v129->__9__37_2;
      v131 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__37_2 )
      {
        if ( (BYTE3(v128->vtable._0_Equals.methodPtr) & 4) != 0 && !v128->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v128);
          v129 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        }
        v132 = (Il2CppObject *)v129->__9;
        _9__37_2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v125, v126);
        System_Action___ctor(_9__37_2, v132, Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, 0LL);
        v133 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v133->__9__37_2 = _9__37_2;
        sub_B0D840(&v133->__9__37_2, _9__37_2);
      }
      if ( !v127 )
        goto LABEL_196;
      CommonUI__OpenNotificationDialog(v127, v131, v124, _9__37_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
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

  if ( (byte_4211CF1 & 1) == 0 )
  {
    sub_B0D8A4(&BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo, action);
    byte_4211CF1 = 1;
  }
  v4 = (BattleRetryConfirmComponent__WaitOneFrame_d__42_o *)sub_B0D974(
                                                              BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo,
                                                              action,
                                                              method);
  BattleRetryConfirmComponent__WaitOneFrame_d__42___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  v4->fields.action = action;
  sub_B0D840(&v4->fields.action, action);
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
    sub_B0D840(&this->fields.__2__current, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__42_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4211ECC & 1) == 0 )
  {
    sub_B0D8A4(&BattleRetryConfirmComponent___c_TypeInfo, v1);
    byte_4211ECC = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleRetryConfirmComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4211ECD & 1) == 0 )
  {
    sub_B0D8A4(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4211ECD = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1705BB0 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__37_2(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_4211ECE & 1) == 0 )
  {
    sub_B0D8A4(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4211ECE = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1705BB0 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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

  if ( (byte_4211ECF & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__,
      method);
    byte_4211ECF = 1;
  }
  rciItems = this->fields.rciItems;
  if ( !rciItems
    || (_4__this = this->fields.__4__this,
        rciItems = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(rciItems, (const MethodInfo_2EF337C *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__),
        !_4__this) )
  {
    sub_B0D97C(rciItems);
  }
  BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
    _4__this,
    (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)rciItems,
    0LL);
}