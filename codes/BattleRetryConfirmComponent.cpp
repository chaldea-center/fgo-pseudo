void __fastcall BattleRetryConfirmComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleRetryConfirmComponent_c *v2; // x8

  if ( (byte_4184DD0 & 1) == 0 )
  {
    sub_B2C35C(&BattleRetryConfirmComponent_TypeInfo, v1);
    byte_4184DD0 = 1;
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
  *(_OWORD *)&this->fields.CONFIRM_BUTTON_POSITION_ON_THREE.fields.y = xmmword_319EA60;
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
  __int64 v12; // x1
  int32_t v13; // w2
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4184DCB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, *(_QWORD *)&result);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4184DCB = 1;
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
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v14,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleResultComponent,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v14,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v14.fields.current )
          sub_B2C434(0LL, v12);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v14.fields.current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v14,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_20:
    sub_B2C434(battleResultComponent, *(_QWORD *)&result);
  CommonUI__CloseBoostSupportRequestMenu((CommonUI_o *)battleResultComponent, 0LL, 0LL);
}


void __fastcall BattleRetryConfirmComponent__Close(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_4184DC9 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    byte_4184DC9 = 1;
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
    sub_B2C434(cancelLabel, method);
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
    sub_B2C434(reqSingleParent, method);
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
      v7 = sub_B2C460(reqSingleParent);
      sub_B2C400(v7, 0LL);
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
  struct System_Collections_Generic_List_UIButton__o **p_buttons; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v19; // x21
  unsigned __int64 v20; // x22
  __int64 v21; // x1
  UILabel_o *mainText; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *confirmLabel; // x20
  __int64 v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4184DC7 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIButton__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIButton___ctor__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIButton__get_Count__, v9);
    sub_B2C35C(&System_Collections_Generic_List_UIButton__TypeInfo, v10);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_2501/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, v12);
    sub_B2C35C(&StringLiteral_2503/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, v13);
    sub_B2C35C(&StringLiteral_2502/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, v14);
    byte_4184DC7 = 1;
  }
  memset(&v26, 0, sizeof(v26));
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
    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UIButton__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v17,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v17;
    sub_B2C2F8(&this->fields.buttons, v17);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    if ( !root )
      goto LABEL_29;
    klass = root[1].klass;
    v19 = root;
    if ( (int)klass >= 1 )
    {
      v20 = 0LL;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)klass )
        {
          v25 = sub_B2C460(root);
          sub_B2C400(v25, 0LL);
        }
        root = (UnityEngine_GameObject_o *)*p_buttons;
        if ( !*p_buttons )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)root,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&v19[1].monitor + v20),
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UIButton__Add__);
        LODWORD(klass) = v19[1].klass;
        if ( (__int64)++v20 >= (int)klass )
          goto LABEL_14;
      }
LABEL_29:
      sub_B2C434(root, method);
    }
LABEL_14:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_29;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)root,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v26.fields.current )
      sub_B2C434(0LL, v21);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v26.fields.current, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  if ( !this->fields.isInitialized )
  {
    mainText = this->fields.mainText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2503/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    if ( !mainText )
      goto LABEL_29;
    UILabel__set_text(mainText, (System_String_o *)root, 0LL);
    cancelLabel = this->fields.cancelLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2501/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_29;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0LL);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2502/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0LL);
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
  CommonUI_o *Instance; // x20
  TerminalPramsManager_c *v13; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w21
  BoostFunctionUtility_CallbackFunc_o *v16; // x23
  struct System_Collections_Generic_List_UIButton__o *buttons; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4184DCA & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__, method);
    sub_B2C35C(&BoostFunctionUtility_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&SoundManager_TypeInfo, v9);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    byte_4184DCA = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
    byte_4183C7A = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v13->static_fields->_QuestId_k__BackingField;
  if ( !byte_4183C7B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v11);
    v13 = TerminalPramsManager_TypeInfo;
    byte_4183C7B = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v13->static_fields->_PhaseCnt_k__BackingField;
  v16 = (BoostFunctionUtility_CallbackFunc_o *)sub_B2C42C(BoostFunctionUtility_CallbackFunc_TypeInfo);
  BoostFunctionUtility_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__,
    0LL);
  if ( !Instance
    || (CommonUI__OpenBoostSupportRequestMenu(Instance, QuestId_k__BackingField, PhaseCnt_k__BackingField, v16, 1, 0LL),
        (buttons = this->fields.buttons) == 0LL) )
  {
    sub_B2C434(buttons, v18);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buttons,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v20.fields.current )
      sub_B2C434(0LL, v19);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v20.fields.current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4184DC0 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleRetryConfirmComponent_OnClickCancel__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_4184DC0 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v7 = Method_BattleRetryConfirmComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 75) & 2) != 0 )
    v7 = (_QWORD *)sub_B2C364(Method_BattleRetryConfirmComponent_OnClickCancel__);
  v8 = (System_Reflection_MethodBase_o *)sub_B2C340(v7, v7[3]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_B2C434(battleResultComponent, v9);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleResultComponent,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v12.fields.current )
      sub_B2C434(0LL, v11);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12.fields.current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
}


void __fastcall BattleRetryConfirmComponent__OnClickConfirm(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4184DC1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_4184DC1 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_B2C434(battleResultComponent, v7);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleResultComponent,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v10.fields.current )
      sub_B2C434(0LL, v9);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10.fields.current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
}


void __fastcall BattleRetryConfirmComponent__OnClickFriendshipUpItemUseButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_c *v4; // x0
  PartyOrganizationUtility_c *v5; // x0
  __int64 v6; // x1
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v8; // w1
  PartyOrganizationUtility_c *v9; // x0

  if ( (byte_4184DCF & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationUtility_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_4184DCF = 1;
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
    v9 = PartyOrganizationUtility_TypeInfo;
    if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v9 = PartyOrganizationUtility_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v9->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 1, 0LL);
    friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
    if ( friendshipUpItemUseButton )
    {
      v8 = 1;
      goto LABEL_23;
    }
LABEL_24:
    sub_B2C434(friendshipUpItemUseButton, v6);
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
  v8 = 0;
LABEL_23:
  FriendshipUpItemUseItem__ChangeButtonState(friendshipUpItemUseButton, v8, 0LL);
}


void __fastcall BattleRetryConfirmComponent__Open(
        BattleRetryConfirmComponent_o *this,
        BattleWindowComponent_EndCall_o *opendFunc,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgObj; // x0
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4184DC8 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, opendFunc);
    byte_4184DC8 = 1;
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
    sub_B2C434(bgObj, opendFunc);
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
  TerminalPramsManager_c *v13; // x0
  int32_t WarId_k__BackingField; // w22
  int32_t QuestId_k__BackingField; // w20
  int32_t PhaseCnt_k__BackingField; // w21
  BattleSetupInfo_o *v17; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x1
  BattleSetupInfo_o *v20; // x22
  UnityEngine_Object_o *boostSupportRequestLabel; // x20
  UILabel_o *v22; // x20
  UnityEngine_Object_o *v23; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4184DCC & 1) == 0 )
  {
    sub_B2C35C(&BattleSetupInfo_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_EventDetailMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v8);
    sub_B2C35C(&SingletonTemplate_BoostFunctionUtility__TypeInfo, v9);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_11130/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, v11);
    sub_B2C35C(&StringLiteral_2500/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/, v12);
    byte_4184DCC = 1;
  }
  entity = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4183C67 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v13->static_fields->_WarId_k__BackingField;
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_4183C7A = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v13->static_fields->_QuestId_k__BackingField;
  if ( !byte_4183C7B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_4183C7B = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v13->static_fields->_PhaseCnt_k__BackingField;
  v17 = (BattleSetupInfo_o *)sub_B2C42C(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_66;
  v20 = BattleSetupInfo__ConvertBattleSetupInfo(
          v17,
          WarId_k__BackingField,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          0,
          0,
          0,
          0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v20 || !Master_WarQuestSelectionMaster )
    goto LABEL_66;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          v20->fields.eventId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_66;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_WarQuestSelectionMaster,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0LL)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11130/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0LL) == 1 )
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
                                                                                          (System_String_o *)StringLiteral_2500/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/,
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
      sub_B2C434(Master_WarQuestSelectionMaster, v19);
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
        v14 = sub_B2C460(this);
        sub_B2C400(v14, 0LL);
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
        this = (BattleRetryConfirmComponent_o *)UnityEngine_MonoBehaviour__StartCoroutine_35309748(v12, v13, 0LL);
      }
      LODWORD(v4) = value->max_length;
      if ( (__int64)++v7 >= (int)v4 )
        return;
    }
LABEL_13:
    sub_B2C434(this, value);
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

  if ( (byte_4184DCE & 1) == 0 )
  {
    sub_B2C35C(&RetryConfirmItem___TypeInfo, items);
    byte_4184DCE = 1;
  }
  v16 = 0LL;
  v15 = 0LL;
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_31;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL) )
  {
    reqSingleParent = (UnityEngine_GameObject_o *)sub_B2C374(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItem = this->fields.singleItem;
      v7 = (__int64)reqSingleParent;
      if ( !singleItem
        || (reqSingleParent = (UnityEngine_GameObject_o *)sub_B2C41C(
                                                            singleItem,
                                                            reqSingleParent->klass->_1.element_class)) != 0LL )
      {
        if ( *(_DWORD *)(v7 + 24) )
        {
          *(_QWORD *)(v7 + 32) = singleItem;
          sub_B2C2F8(v7 + 32, singleItem);
          v16 = v7;
          p_doubleItems = &v16;
          goto LABEL_29;
        }
LABEL_32:
        v13 = sub_B2C460(reqSingleParent);
        sub_B2C400(v13, 0LL);
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
    reqSingleParent = (UnityEngine_GameObject_o *)sub_B2C374(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItemWithUseItemButton = this->fields.singleItemWithUseItemButton;
      v12 = (__int64)reqSingleParent;
      if ( !singleItemWithUseItemButton
        || (reqSingleParent = (UnityEngine_GameObject_o *)sub_B2C41C(
                                                            singleItemWithUseItemButton,
                                                            reqSingleParent->klass->_1.element_class)) != 0LL )
      {
        if ( *(_DWORD *)(v12 + 24) )
        {
          *(_QWORD *)(v12 + 32) = singleItemWithUseItemButton;
          sub_B2C2F8(v12 + 32, singleItemWithUseItemButton);
          v15 = v12;
          p_doubleItems = &v15;
          goto LABEL_29;
        }
        goto LABEL_32;
      }
LABEL_33:
      v14 = sub_B2C454();
      sub_B2C400(v14, 0LL);
    }
LABEL_31:
    sub_B2C434(reqSingleParent, items);
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
  if ( (byte_4184DC6 & 1) == 0 )
  {
    this = (BattleRetryConfirmComponent_o *)sub_B2C35C(&StringLiteral_1/*""*/, costPoint);
    byte_4184DC6 = 1;
  }
  if ( !items )
    sub_B2C434(this, costPoint);
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
        v21 = sub_B2C460(v8);
        sub_B2C400(v21, 0LL);
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

  if ( (byte_4184DC4 & 1) == 0 )
  {
    sub_B2C35C(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_4184DC4 = 1;
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
    sub_B2C434(reqSingleParent, costPoint);
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
      v30 = sub_B2C460(reqSingleParent);
      sub_B2C400(v30, 0LL);
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

  if ( (byte_4184DC3 & 1) == 0 )
  {
    sub_B2C35C(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_4184DC3 = 1;
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
    sub_B2C434(reqSingleParent, costPoint);
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

  if ( (byte_4184DC5 & 1) == 0 )
  {
    sub_B2C35C(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_4184DC5 = 1;
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
    sub_B2C434(reqSingleParent, costPoint);
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
      v30 = sub_B2C460(reqSingleParent);
      sub_B2C400(v30, 0LL);
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
  __int64 v9; // x1
  char v10; // w20
  PartyOrganizationUtility_c *v11; // x0
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_GameObject_o *v13; // x20
  UILabel_o *mainText; // x19
  struct BattleRetryConfirmComponent_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_GameObject_o *v17; // x20
  BattleRetryConfirmComponent_c *v18; // x8
  UnityEngine_GameObject_o *v19; // x20
  UnityEngine_GameObject_o *v20; // x20
  BattleRetryConfirmComponent_c *v21; // x8

  if ( (byte_4184DCD & 1) == 0 )
  {
    sub_B2C35C(&BattleRetryConfirmComponent_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&PartyOrganizationUtility_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v6);
    byte_4184DCD = 1;
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
    IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( IsAvailableFriendshipUpItem )
    {
      IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                                                                    IsAvailableFriendshipUpItem,
                                                                    0LL);
      if ( this->fields.friendshipUpItemUseButton )
      {
        v10 = (char)IsAvailableFriendshipUpItem;
        IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                      0LL);
        if ( IsAvailableFriendshipUpItem )
        {
          if ( (v10 & 1) != 0 )
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
            v11 = PartyOrganizationUtility_TypeInfo;
            if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
              v11 = PartyOrganizationUtility_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v11->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
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
                        IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)this->fields.reqSingleParentWithUseItemButton;
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
                                  v17 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                                  IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                                (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                                0LL);
                                  if ( IsAvailableFriendshipUpItem )
                                  {
                                    IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                                  (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                                  0LL);
                                    if ( v17 )
                                    {
                                      UnityEngine_GameObject__SetActive(
                                        v17,
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
                                          v18 = BattleRetryConfirmComponent_TypeInfo;
                                          if ( ((unsigned __int8)IsAvailableFriendshipUpItem & 1) != 0 )
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v18 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)&v18->static_fields->MAIN_TEXT_FONT_SIZE_FOR_DOUBLE_ITEM_AND_BUTTON;
                                            if ( mainText )
                                              goto LABEL_80;
                                          }
                                          else
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v18 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = v18->static_fields;
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
                                  v20 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                                  IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                                (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                                0LL);
                                  if ( IsAvailableFriendshipUpItem )
                                  {
                                    IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                                  (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                                  0LL);
                                    if ( v20 )
                                    {
                                      UnityEngine_GameObject__SetActive(
                                        v20,
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
                                          v21 = BattleRetryConfirmComponent_TypeInfo;
                                          if ( ((unsigned __int8)IsAvailableFriendshipUpItem & 1) != 0 )
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v21 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)&v21->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM_AND_BUTTON;
                                            if ( mainText )
                                              goto LABEL_80;
                                          }
                                          else
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v21 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)&v21->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM;
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
    sub_B2C434(IsAvailableFriendshipUpItem, v9);
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
    sub_B2C434(this, value);
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
  BattleRetryConfirmComponent___c__DisplayClass37_0_o *v43; // x25
  int64_t Instance; // x0
  __int64 v45; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  __int64 *v48; // x22
  QuestEntity_o *v49; // x21
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v51; // x19
  System_Text_StringBuilder_o *v52; // x26
  Il2CppObject *v53; // x28
  int actMax; // w27
  BalanceConfig_c *v55; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v56; // x28
  UserItemMaster_o *v57; // x22
  il2cpp_array_size_t v58; // w23
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v60; // x8
  int64_t v61; // x20
  ItemEntity_o *v62; // x25
  int32_t qp; // w24
  struct System_Int32_array *nums; // x8
  System_String_o *v65; // x0
  struct System_Int32_array *v66; // x8
  System_String_o *v67; // x20
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  int32_t MaxNum; // w20
  System_String_o *v71; // x19
  Il2CppObject *v72; // x24
  Il2CppObject *v73; // x0
  struct System_String_o *v74; // x0
  System_String_o *v75; // x19
  Il2CppObject *v76; // x0
  System_String_o *v77; // x19
  Il2CppObject *v78; // x0
  System_String_o *v79; // x0
  System_String_o *v80; // x19
  System_String_o *v81; // x0
  System_String_o *v82; // x19
  CommonUI_o *v83; // x20
  BattleRetryConfirmComponent___c_c *v84; // x8
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__37_1; // x22
  System_String_o *v87; // x21
  Il2CppObject *v88; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v89; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v90; // x28
  UserItemMaster_o *v91; // x22
  il2cpp_array_size_t v92; // w23
  struct System_Int32_array *v93; // x8
  struct System_Int32_array *v94; // x8
  int64_t v95; // x20
  ItemEntity_o *v96; // x25
  int32_t v97; // w24
  struct System_Int32_array *v98; // x8
  System_String_o *v99; // x0
  struct System_Int32_array *v100; // x8
  System_String_o *v101; // x20
  Il2CppObject *v102; // x0
  System_String_o *v103; // x0
  int32_t v104; // w20
  System_String_o *v105; // x19
  Il2CppObject *v106; // x24
  Il2CppObject *v107; // x0
  struct System_String_o *v108; // x0
  System_String_o *v109; // x19
  Il2CppObject *v110; // x0
  System_String_o *v111; // x19
  Il2CppObject *v112; // x0
  System_String_o *v113; // x0
  System_String_o *v114; // x19
  System_String_o *v115; // x0
  System_String_o *v116; // x19
  CommonUI_o *v117; // x20
  BattleRetryConfirmComponent___c_c *v118; // x8
  struct BattleRetryConfirmComponent___c_StaticFields *v119; // x9
  System_Action_o *_9__37_2; // x22
  System_String_o *v121; // x21
  Il2CppObject *v122; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v123; // x0
  MapControl_QuestInfo_o *v125; // x19
  int32_t questId; // w20
  bool IsQuestClear_25746984; // w0
  __int64 v128; // x1
  bool v129; // w20
  TerminalPramsManager_c *v130; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t CampaignCostCalcValue; // w20
  int32_t ActConsume; // w0
  int v134; // w22
  int32_t v135; // w23
  System_String_o *CostValueColor; // x19
  Il2CppObject *v137; // x0
  Il2CppObject *v138; // x20
  System_String_o *v139; // x0
  System_String_o *v140; // x19
  Il2CppObject *v141; // x0
  Il2CppObject *v142; // x19
  System_String_o *v143; // x0
  System_String_o *v144; // x0
  System_String_o *v145; // x0
  System_String_o *v146; // x20
  Il2CppObject *v147; // x0
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v148; // x0
  const MethodInfo *v149; // x3
  const MethodInfo *v150; // x1
  const MethodInfo *v151; // x1
  System_Action_o *v152; // x19
  BattleRetryConfirmComponent_o *v153; // x0
  const MethodInfo *v154; // x2
  System_Collections_IEnumerator_o *v155; // x0
  __int64 v156; // x0
  int32_t v157; // [xsp+34h] [xbp-1BCh]
  Il2CppObject *v158; // [xsp+38h] [xbp-1B8h]
  Il2CppObject *v159; // [xsp+38h] [xbp-1B8h]
  BattleRetryConfirmComponent___c__DisplayClass37_0_o *v160; // [xsp+48h] [xbp-1A8h]
  BattleRetryConfirmComponent___c__DisplayClass37_0_o *v161; // [xsp+48h] [xbp-1A8h]
  BattleRetryConfirmComponent_o *v162; // [xsp+50h] [xbp-1A0h]
  BattleRetryConfirmComponent_o *v163; // [xsp+50h] [xbp-1A0h]
  UserGameEntity_o **p_userGameEntity; // [xsp+70h] [xbp-180h]
  int64_t *p_rciItems; // [xsp+78h] [xbp-178h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v166; // [xsp+80h] [xbp-170h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v167; // [xsp+B0h] [xbp-140h] BYREF
  int32_t fixedVal; // [xsp+DCh] [xbp-114h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v169; // [xsp+E0h] [xbp-110h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v170; // [xsp+108h] [xbp-E8h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v171; // [xsp+130h] [xbp-C0h] BYREF
  int v172; // [xsp+15Ch] [xbp-94h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v173; // [xsp+160h] [xbp-90h] BYREF

  if ( (byte_4184DBF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&CondType_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&MapControl_QuestInfo_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v19);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v20);
    sub_B2C35C(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, v21);
    sub_B2C35C(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, v22);
    sub_B2C35C(&Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__, v23);
    sub_B2C35C(&BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo, v24);
    sub_B2C35C(&BattleRetryConfirmComponent___c_TypeInfo, v25);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v26);
    sub_B2C35C(&StringLiteral_2509/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, v27);
    sub_B2C35C(&StringLiteral_3358/*"CONSUME_TYPE_AP"*/, v28);
    sub_B2C35C(&StringLiteral_10945/*"QUEST_ITEM_COST_OVER"*/, v29);
    sub_B2C35C(&StringLiteral_2507/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, v30);
    sub_B2C35C(&StringLiteral_2508/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, v31);
    sub_B2C35C(&StringLiteral_1727/*"AP_OVER_MAX_COLOR"*/, v32);
    sub_B2C35C(&StringLiteral_3359/*"CONSUME_TYPE_RP"*/, v33);
    sub_B2C35C(&StringLiteral_2513/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, v34);
    sub_B2C35C(&StringLiteral_2512/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, v35);
    sub_B2C35C(&StringLiteral_27/*"\n\n"*/, v36);
    sub_B2C35C(&StringLiteral_2510/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v37);
    sub_B2C35C(&StringLiteral_2504/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, v38);
    sub_B2C35C(&StringLiteral_1/*""*/, v39);
    sub_B2C35C(&StringLiteral_2511/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, v40);
    sub_B2C35C(&StringLiteral_2505/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, v41);
    sub_B2C35C(&StringLiteral_2506/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, v42);
    byte_4184DBF = 1;
  }
  v172 = 0;
  memset(&v171, 0, sizeof(v171));
  memset(&v170, 0, sizeof(v170));
  memset(&v169, 0, sizeof(v169));
  fixedVal = 0;
  v43 = (BattleRetryConfirmComponent___c__DisplayClass37_0_o *)sub_B2C42C(BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo);
  BattleRetryConfirmComponent___c__DisplayClass37_0___ctor(v43, 0LL);
  if ( !v43 )
    goto LABEL_196;
  v43->fields.__4__this = this;
  sub_B2C2F8(&v43->fields, this);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_userGameEntity = &this->fields.userGameEntity;
  sub_B2C2F8(&this->fields.userGameEntity, SelfUserGame);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_196;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  v48 = &qword_4183000;
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v45);
    byte_4183C7A = 1;
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
                        (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_196;
  v49 = (QuestEntity_o *)Instance;
  v172 = 0;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0LL);
  memset(&v171, 0, sizeof(v171));
  v51 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_B2C42C(System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v51,
    (const MethodInfo_2EA1C84 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  v43->fields.rciItems = v51;
  p_rciItems = (int64_t *)&v43->fields.rciItems;
  sub_B2C2F8(&v43->fields.rciItems, v51);
  v52 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v52, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v53 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3358/*"CONSUME_TYPE_AP"*/, 0LL);
  switch ( QuestEntity__GetConsumeType(v49, 0LL) )
  {
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3358/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v53 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      v172 = Instance;
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
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3359/*"CONSUME_TYPE_RP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v53 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getRp(*p_userGameEntity, 0LL);
      v172 = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_196;
      if ( !byte_4183C64 )
      {
        sub_B2C35C(&BalanceConfig_TypeInfo, v45);
        byte_4183C64 = 1;
      }
      v55 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v55 = BalanceConfig_TypeInfo;
      }
      actMax = v55->static_fields->UerGameRpMax;
      goto LABEL_160;
    case 3:
      v160 = v43;
      v162 = this;
      v171.fields.useName = (struct System_String_o *)StringLiteral_1/*""*/;
      v158 = (Il2CppObject *)StringLiteral_1/*""*/;
      sub_B2C2F8(&v171, StringLiteral_1/*""*/);
      v171.fields.useAmount = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B2C2F8(&v171.fields.useAmount, StringLiteral_1/*""*/);
      if ( !ItemConsumeEntity )
        goto LABEL_79;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      v56 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      v57 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_79;
      v58 = 0;
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
        if ( v58 >= itemIds->max_length )
          goto LABEL_197;
        if ( !v57 )
          goto LABEL_196;
        Instance = (int64_t)UserItemMaster__GetEntity(v57, Instance, itemIds->m_Items[v58 + 1], 0LL);
        v60 = ItemConsumeEntity->fields.itemIds;
        if ( !v60 )
          goto LABEL_196;
        if ( v58 >= v60->max_length )
          goto LABEL_197;
        if ( !v56 )
          goto LABEL_196;
        v61 = Instance;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v56,
                              v60->m_Items[v58 + 1],
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_196;
        v62 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_196;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v61 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          qp = *(_DWORD *)(v61 + 28);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_196;
        if ( v58 >= nums->max_length )
          goto LABEL_197;
        if ( nums->m_Items[v58 + 1] > qp )
        {
          Instance = (int64_t)System_String__Concat_44305532((System_String_o *)StringLiteral_26/*"\n"*/, v62->fields.name, 0LL);
          if ( !v52 )
            goto LABEL_196;
          System_Text_StringBuilder__Append_42408700(v52, (System_String_o *)Instance, 0LL);
        }
        memset(&v170, 0, sizeof(v170));
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v65 = LocalizationManager__Get((System_String_o *)StringLiteral_2508/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v170.fields.useName = System_String__Format(v65, (Il2CppObject *)v62->fields.name, 0LL);
        sub_B2C2F8(&v170, v170.fields.useName);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2509/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v66 = ItemConsumeEntity->fields.nums;
        if ( !v66 )
          goto LABEL_196;
        if ( v58 >= v66->max_length )
          goto LABEL_197;
        v67 = (System_String_o *)Instance;
        LODWORD(v173.fields.useName) = v66->m_Items[v58 + 1];
        v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v173);
        v170.fields.useAmount = System_String__Format(v67, v68, 0LL);
        sub_B2C2F8(&v170.fields.useAmount, v170.fields.useAmount);
        v69 = LocalizationManager__Get((System_String_o *)StringLiteral_2511/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v170.fields.possessionName = System_String__Format(v69, (Il2CppObject *)v62->fields.name, 0LL);
        sub_B2C2F8(&v170.fields.possessionName, v170.fields.possessionName);
        MaxNum = ItemEntity__GetMaxNum(v62, 0LL);
        if ( MaxNum < 1 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v75 = LocalizationManager__Get((System_String_o *)StringLiteral_2512/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v173.fields.useName) = qp;
          v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v173);
          v74 = System_String__Format(v75, v76, 0LL);
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v71 = LocalizationManager__Get((System_String_o *)StringLiteral_2513/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v173.fields.useName) = qp;
          v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v173);
          LODWORD(v167.fields.useName) = ItemEntity__GetMaxNum(v62, 0LL);
          v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v167);
          v74 = System_String__Format_44301068(v71, v72, v73, 0LL);
        }
        v170.fields.possessionAmount = v74;
        sub_B2C2F8(&v170.fields.possessionAmount, v74);
        v170.fields.isIndividualLimit = MaxNum > 0;
        Instance = *p_rciItems;
        v167 = v170;
        if ( !Instance )
          goto LABEL_196;
        v173 = v167;
        System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___Add(
          (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
          &v173,
          (const MethodInfo_2EA2ABC *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v58, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_79:
      if ( !v52 )
        goto LABEL_196;
      v43 = v160;
      this = v162;
      v48 = &qword_4183000;
      if ( System_Text_StringBuilder__get_Length(v52, 0LL) < 1 )
      {
        v53 = v158;
LABEL_159:
        actMax = 0;
LABEL_160:
        if ( QuestEntity__GetConsumeType(v49, 0LL) == 1
          || QuestEntity__GetConsumeType(v49, 0LL) == 2
          || QuestEntity__GetConsumeType(v49, 0LL) == 4 )
        {
          v125 = (MapControl_QuestInfo_o *)sub_B2C42C(MapControl_QuestInfo_TypeInfo);
          MapControl_QuestInfo___ctor(v125, 0LL);
          if ( !v125 )
            goto LABEL_196;
          MapControl_QuestInfo__SetTerminalParamsValue(v125, 0LL);
          questId = v125->fields.questId;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_25746984 = CondType__IsQuestClear_25746984(questId, -1, 0, 0LL);
          fixedVal = -1;
          v129 = IsQuestClear_25746984;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !*((_BYTE *)v48 + 3194) )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, v128);
            *((_BYTE *)v48 + 3194) = 1;
          }
          v130 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v130 = TerminalPramsManager_TypeInfo;
          }
          QuestId_k__BackingField = v130->static_fields->_QuestId_k__BackingField;
          if ( !byte_4183C7B )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, v128);
            v130 = TerminalPramsManager_TypeInfo;
            byte_4183C7B = 1;
          }
          if ( (BYTE3(v130->vtable._0_Equals.methodPtr) & 4) != 0 && !v130->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v130);
            v130 = TerminalPramsManager_TypeInfo;
          }
          CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                                    v49,
                                    QuestId_k__BackingField,
                                    v130->static_fields->_PhaseCnt_k__BackingField,
                                    !v129,
                                    &fixedVal,
                                    0LL);
          Instance = (int64_t)MapControl_QuestInfo__GetMine(v125, 0LL);
          if ( !Instance )
            goto LABEL_196;
          Instance = (int64_t)QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
          v125->fields._fixedCostVal_k__BackingField = fixedVal;
          if ( !Instance )
            goto LABEL_196;
          ActConsume = QuestEntity__getActConsume((QuestEntity_o *)Instance, CampaignCostCalcValue, 0LL);
          v125->fields.costCalcVal = CampaignCostCalcValue;
          v134 = v172;
          if ( fixedVal >= 0 )
            v135 = fixedVal;
          else
            v135 = ActConsume;
          CostValueColor = QuestEntity__GetCostValueColor(
                             CampaignCostCalcValue,
                             (v135 > actMax) | (unsigned __int8)(v135 > v172),
                             0LL);
          LODWORD(v173.fields.useName) = v135;
          v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v173);
          v138 = (Il2CppObject *)System_String__Format(CostValueColor, v137, 0LL);
          v139 = System_Int32__ToString((int32_t)&v172, 0LL);
          if ( actMax < v134 )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v140 = LocalizationManager__Get((System_String_o *)StringLiteral_1727/*"AP_OVER_MAX_COLOR"*/, 0LL);
            LODWORD(v173.fields.useName) = v172;
            v141 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v173);
            v139 = System_String__Format(v140, v141, 0LL);
          }
          v142 = (Il2CppObject *)v139;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v143 = LocalizationManager__Get((System_String_o *)StringLiteral_2506/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0LL);
          v171.fields.useName = System_String__Format(v143, v53, 0LL);
          sub_B2C2F8(&v171, v171.fields.useName);
          v144 = LocalizationManager__Get((System_String_o *)StringLiteral_2507/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0LL);
          v171.fields.useAmount = System_String__Format(v144, v138, 0LL);
          sub_B2C2F8(&v171.fields.useAmount, v171.fields.useAmount);
          v145 = LocalizationManager__Get((System_String_o *)StringLiteral_2504/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0LL);
          v171.fields.possessionName = System_String__Format(v145, v53, 0LL);
          sub_B2C2F8(&v171.fields.possessionName, v171.fields.possessionName);
          v146 = LocalizationManager__Get((System_String_o *)StringLiteral_2505/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0LL);
          LODWORD(v173.fields.useName) = actMax;
          v147 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v173);
          v171.fields.possessionAmount = System_String__Format_44301068(v146, v142, v147, 0LL);
          sub_B2C2F8(&v171.fields.possessionAmount, v171.fields.possessionAmount);
        }
        v173 = v171;
        Instance = *p_rciItems;
        if ( *p_rciItems )
        {
          v148 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                   (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
                   (const MethodInfo_2EA5064 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
          v166 = v173;
          BattleRetryConfirmComponent__SetCostValueText(this, &v166, v148, v149);
          BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v150);
          BattleRetryConfirmComponent__SetFriendshipUpItemUseButton(this, v151);
          v152 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v152,
            (Il2CppObject *)v43,
            Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__,
            0LL);
          v155 = BattleRetryConfirmComponent__WaitOneFrame(v153, v152, v154);
          UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v155, 0LL);
          return 1;
        }
LABEL_196:
        sub_B2C434(Instance, v45);
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v77 = LocalizationManager__Get((System_String_o *)StringLiteral_10945/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v78 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v52->klass->vtable._3_ToString.method)(
                              v52,
                              v52->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v79 = System_String__Format(v77, v78, 0LL);
      v80 = System_String__Concat_44305532(v79, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
      v81 = LocalizationManager__Get((System_String_o *)StringLiteral_2510/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v82 = System_String__Concat_44305532(v80, v81, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v83 = (CommonUI_o *)Instance;
      v84 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( (BYTE3(BattleRetryConfirmComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v84 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      static_fields = v84->static_fields;
      _9__37_1 = static_fields->__9__37_1;
      v87 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__37_1 )
      {
        if ( (BYTE3(v84->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v84);
          static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        }
        v88 = (Il2CppObject *)static_fields->__9;
        _9__37_1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(_9__37_1, v88, Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, 0LL);
        v89 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v89->__9__37_1 = _9__37_1;
        sub_B2C2F8(&v89->__9__37_1, _9__37_1);
      }
      if ( !v83 )
        goto LABEL_196;
      CommonUI__OpenNotificationDialog(v83, v87, v82, _9__37_1, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
      return 0;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3358/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v159 = (Il2CppObject *)Instance;
      v161 = v43;
      v163 = this;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      v172 = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v157 = (*p_userGameEntity)->fields.actMax;
      v171.fields.useName = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B2C2F8(&v171, StringLiteral_1/*""*/);
      v171.fields.useAmount = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B2C2F8(&v171.fields.useAmount, StringLiteral_1/*""*/);
      if ( !ItemConsumeEntity )
        goto LABEL_142;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      v90 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      v91 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_142;
      v92 = 0;
      do
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        v93 = ItemConsumeEntity->fields.itemIds;
        if ( !v93 )
          goto LABEL_196;
        if ( v92 >= v93->max_length )
          goto LABEL_197;
        if ( !v91 )
          goto LABEL_196;
        Instance = (int64_t)UserItemMaster__GetEntity(v91, Instance, v93->m_Items[v92 + 1], 0LL);
        v94 = ItemConsumeEntity->fields.itemIds;
        if ( !v94 )
          goto LABEL_196;
        if ( v92 >= v94->max_length )
          goto LABEL_197;
        if ( !v90 )
          goto LABEL_196;
        v95 = Instance;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v90,
                              v94->m_Items[v92 + 1],
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_196;
        v96 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_196;
          v97 = (*p_userGameEntity)->fields.qp;
        }
        else if ( v95 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          v97 = *(_DWORD *)(v95 + 28);
        }
        else
        {
          v97 = 0;
        }
        v98 = ItemConsumeEntity->fields.nums;
        if ( !v98 )
          goto LABEL_196;
        if ( v92 >= v98->max_length )
          goto LABEL_197;
        if ( v98->m_Items[v92 + 1] > v97 )
        {
          Instance = (int64_t)System_String__Concat_44305532((System_String_o *)StringLiteral_26/*"\n"*/, v96->fields.name, 0LL);
          if ( !v52 )
            goto LABEL_196;
          System_Text_StringBuilder__Append_42408700(v52, (System_String_o *)Instance, 0LL);
        }
        memset(&v169, 0, sizeof(v169));
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v99 = LocalizationManager__Get((System_String_o *)StringLiteral_2508/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v169.fields.useName = System_String__Format(v99, (Il2CppObject *)v96->fields.name, 0LL);
        sub_B2C2F8(&v169, v169.fields.useName);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2509/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v100 = ItemConsumeEntity->fields.nums;
        if ( !v100 )
          goto LABEL_196;
        if ( v92 >= v100->max_length )
        {
LABEL_197:
          v156 = sub_B2C460(Instance);
          sub_B2C400(v156, 0LL);
        }
        v101 = (System_String_o *)Instance;
        LODWORD(v173.fields.useName) = v100->m_Items[v92 + 1];
        v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v173);
        v169.fields.useAmount = System_String__Format(v101, v102, 0LL);
        sub_B2C2F8(&v169.fields.useAmount, v169.fields.useAmount);
        v103 = LocalizationManager__Get((System_String_o *)StringLiteral_2511/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v169.fields.possessionName = System_String__Format(v103, (Il2CppObject *)v96->fields.name, 0LL);
        sub_B2C2F8(&v169.fields.possessionName, v169.fields.possessionName);
        v104 = ItemEntity__GetMaxNum(v96, 0LL);
        if ( v104 < 1 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v109 = LocalizationManager__Get((System_String_o *)StringLiteral_2512/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v173.fields.useName) = v97;
          v110 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v173);
          v108 = System_String__Format(v109, v110, 0LL);
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v105 = LocalizationManager__Get((System_String_o *)StringLiteral_2513/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v173.fields.useName) = v97;
          v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v173);
          LODWORD(v167.fields.useName) = ItemEntity__GetMaxNum(v96, 0LL);
          v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v167);
          v108 = System_String__Format_44301068(v105, v106, v107, 0LL);
        }
        v169.fields.possessionAmount = v108;
        sub_B2C2F8(&v169.fields.possessionAmount, v108);
        v169.fields.isIndividualLimit = v104 > 0;
        Instance = *p_rciItems;
        v167 = v169;
        if ( !Instance )
          goto LABEL_196;
        v173 = v167;
        System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___Add(
          (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
          &v173,
          (const MethodInfo_2EA2ABC *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v92, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_142:
      if ( !v52 )
        goto LABEL_196;
      v43 = v161;
      this = v163;
      v53 = v159;
      actMax = v157;
      v48 = &qword_4183000;
      if ( System_Text_StringBuilder__get_Length(v52, 0LL) < 1 )
        goto LABEL_160;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v111 = LocalizationManager__Get((System_String_o *)StringLiteral_10945/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v112 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v52->klass->vtable._3_ToString.method)(
                               v52,
                               v52->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v113 = System_String__Format(v111, v112, 0LL);
      v114 = System_String__Concat_44305532(v113, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
      v115 = LocalizationManager__Get((System_String_o *)StringLiteral_2510/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v116 = System_String__Concat_44305532(v114, v115, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v117 = (CommonUI_o *)Instance;
      v118 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( (BYTE3(BattleRetryConfirmComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v118 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      v119 = v118->static_fields;
      _9__37_2 = v119->__9__37_2;
      v121 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__37_2 )
      {
        if ( (BYTE3(v118->vtable._0_Equals.methodPtr) & 4) != 0 && !v118->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v118);
          v119 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        }
        v122 = (Il2CppObject *)v119->__9;
        _9__37_2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(_9__37_2, v122, Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, 0LL);
        v123 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v123->__9__37_2 = _9__37_2;
        sub_B2C2F8(&v123->__9__37_2, _9__37_2);
      }
      if ( !v117 )
        goto LABEL_196;
      CommonUI__OpenNotificationDialog(v117, v121, v116, _9__37_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
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

  if ( (byte_4184DC2 & 1) == 0 )
  {
    sub_B2C35C(&BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo, action);
    byte_4184DC2 = 1;
  }
  v4 = (BattleRetryConfirmComponent__WaitOneFrame_d__42_o *)sub_B2C42C(BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo);
  BattleRetryConfirmComponent__WaitOneFrame_d__42___ctor(v4, 0, 0LL);
  if ( !v4 )
    sub_B2C434(v5, v6);
  v4->fields.action = action;
  sub_B2C2F8(&v4->fields.action, action);
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
    sub_B2C2F8(&this->fields.__2__current, 0LL);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__42_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  Il2CppObject *v2; // x19
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0

  if ( (byte_41850A0 & 1) == 0 )
  {
    sub_B2C35C(&BattleRetryConfirmComponent___c_TypeInfo, v1);
    byte_41850A0 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleRetryConfirmComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v4; // x1

  if ( (byte_41850A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_41850A1 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1725124 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__37_2(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_41850A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_41850A2 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1725124 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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

  if ( (byte_41850A3 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__,
      method);
    byte_41850A3 = 1;
  }
  rciItems = this->fields.rciItems;
  if ( !rciItems
    || (_4__this = this->fields.__4__this,
        rciItems = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(rciItems, (const MethodInfo_2EA5064 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__),
        !_4__this) )
  {
    sub_B2C434(rciItems, method);
  }
  BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
    _4__this,
    (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)rciItems,
    0LL);
}