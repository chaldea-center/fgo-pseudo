void __fastcall BattleRetryConfirmComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  BattleRetryConfirmComponent_c *v4; // x8

  if ( (byte_42E574F & 1) == 0 )
  {
    sub_B5D5C4(&BattleRetryConfirmComponent_TypeInfo, v1, v2, v3);
    byte_42E574F = 1;
  }
  BattleRetryConfirmComponent_TypeInfo->static_fields->MAIN_TEXT_DEFAULT_FONT_SIZE = 24;
  BattleRetryConfirmComponent_TypeInfo->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM = 22;
  v4 = BattleRetryConfirmComponent_TypeInfo;
  BattleRetryConfirmComponent_TypeInfo->static_fields->MAIN_TEXT_FONT_SIZE_FOR_DOUBLE_ITEM_AND_BUTTON = 22;
  v4->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM_AND_BUTTON = 19;
}


void __fastcall BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.CANCEL_BUTTON_POSITION_ON_THREE.fields.z = 3273916416LL;
  *(_OWORD *)&this->fields.CONFIRM_BUTTON_POSITION_ON_THREE.fields.y = xmmword_329F700;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRetryConfirmComponent__BoostSupportRequestDialogCallback(
        BattleRetryConfirmComponent_o *this,
        int32_t result,
        int32_t boostId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E574A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, result, boostId, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17, v18);
    byte_42E574A = 1;
  }
  memset(&v22, 0, sizeof(v22));
  switch ( result )
  {
    case 2:
      battleResultComponent = this->fields.battleResultComponent;
      if ( !battleResultComponent )
        goto LABEL_20;
      v21 = boostId;
LABEL_17:
      BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, v21, 0LL);
      break;
    case 1:
      battleResultComponent = this->fields.battleResultComponent;
      if ( !battleResultComponent )
        goto LABEL_20;
      v21 = 0;
      goto LABEL_17;
    case 0:
      battleResultComponent = (BattleResultComponent_o *)this->fields.buttons;
      if ( !battleResultComponent )
        goto LABEL_20;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v22,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleResultComponent,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v22,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v22.fields.current )
          sub_B5D69C(0LL, v20);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v22.fields.current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v22,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_20:
    sub_B5D69C(battleResultComponent, *(_QWORD *)&result);
  CommonUI__CloseBoostSupportRequestMenu((CommonUI_o *)battleResultComponent, 0LL, 0LL);
}


void __fastcall BattleRetryConfirmComponent__Close(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *cancelLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  if ( (byte_42E5748 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5748 = 1;
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
    sub_B5D69C(cancelLabel, method);
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
    sub_B5D69C(reqSingleParent, method);
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
      v7 = sub_B5D6C8(reqSingleParent);
      sub_B5D668(v7, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  UnityEngine_GameObject_o *root; // x0
  struct System_Collections_Generic_List_UIButton__o **p_buttons; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v43; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v45; // x21
  unsigned __int64 v46; // x22
  __int64 v47; // x1
  UILabel_o *mainText; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *confirmLabel; // x20
  __int64 v51; // x0
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E5746 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIButton__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIButton___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIButton__get_Count__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_UIButton__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_2555/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_2557/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_2556/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, v38, v39, v40);
    byte_42E5746 = 1;
  }
  memset(&v52, 0, sizeof(v52));
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
    v43 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIButton__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v43,
      (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v43;
    sub_B5D560(&this->fields.buttons);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    if ( !root )
      goto LABEL_29;
    klass = root[1].klass;
    v45 = root;
    if ( (int)klass >= 1 )
    {
      v46 = 0LL;
      while ( 1 )
      {
        if ( v46 >= (unsigned int)klass )
        {
          v51 = sub_B5D6C8(root);
          sub_B5D668(v51, 0LL);
        }
        root = (UnityEngine_GameObject_o *)*p_buttons;
        if ( !*p_buttons )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)root,
          *((EventMissionProgressRequest_Argument_ProgressData_o **)&v45[1].monitor + v46),
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UIButton__Add__);
        LODWORD(klass) = v45[1].klass;
        if ( (__int64)++v46 >= (int)klass )
          goto LABEL_14;
      }
LABEL_29:
      sub_B5D69C(root, method);
    }
LABEL_14:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_29;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v52,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)root,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v52.fields.current )
      sub_B5D69C(0LL, v47);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v52.fields.current, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  if ( !this->fields.isInitialized )
  {
    mainText = this->fields.mainText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2557/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    if ( !mainText )
      goto LABEL_29;
    UILabel__set_text(mainText, (System_String_o *)root, 0LL);
    cancelLabel = this->fields.cancelLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2555/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_29;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0LL);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2556/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  CommonUI_o *Instance; // x20
  TerminalPramsManager_c *v33; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w21
  BoostFunctionUtility_CallbackFunc_o *v36; // x23
  struct System_Collections_Generic_List_UIButton__o *buttons; // x0
  __int64 v38; // x1
  __int64 v39; // x1
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E5749 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BoostFunctionUtility_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&SoundManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v26, v27, v28);
    byte_42E5749 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v29, v30, v31);
    byte_42E4B33 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v33->static_fields->_QuestId_k__BackingField;
  if ( !byte_42E4B34 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v29, v30, v31);
    v33 = TerminalPramsManager_TypeInfo;
    byte_42E4B34 = 1;
  }
  if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v33);
    v33 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v33->static_fields->_PhaseCnt_k__BackingField;
  v36 = (BoostFunctionUtility_CallbackFunc_o *)sub_B5D694(BoostFunctionUtility_CallbackFunc_TypeInfo);
  BoostFunctionUtility_CallbackFunc___ctor(
    v36,
    (Il2CppObject *)this,
    Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__,
    0LL);
  if ( !Instance
    || (CommonUI__OpenBoostSupportRequestMenu(Instance, QuestId_k__BackingField, PhaseCnt_k__BackingField, v36, 1, 0LL),
        (buttons = this->fields.buttons) == 0LL) )
  {
    sub_B5D69C(buttons, v38);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v40,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buttons,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v40.fields.current )
      sub_B5D69C(0LL, v39);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v40.fields.current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
}


void __fastcall BattleRetryConfirmComponent__OnClickCancel(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  __int64 v19; // x1
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E573F & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleRetryConfirmComponent_OnClickCancel__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v14, v15, v16);
    byte_42E573F = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v17 = Method_BattleRetryConfirmComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 75) & 2) != 0 )
    v17 = (_QWORD *)sub_B5D5CC(Method_BattleRetryConfirmComponent_OnClickCancel__);
  v18 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v17, v17[3]);
  OverwriteAssetSoundName__PlaySystemSe(v18, 1, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_B5D69C(battleResultComponent, v19);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleResultComponent,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v22.fields.current )
      sub_B5D69C(0LL, v21);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v22.fields.current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
}


void __fastcall BattleRetryConfirmComponent__OnClickConfirm(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x1
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E5740 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42E5740 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_B5D69C(battleResultComponent, v17);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)battleResultComponent,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v20.fields.current )
      sub_B5D69C(0LL, v19);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v20.fields.current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
}


void __fastcall BattleRetryConfirmComponent__OnClickFriendshipUpItemUseButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  PartyOrganizationUtility_c *v8; // x0
  PartyOrganizationUtility_c *v9; // x0
  __int64 v10; // x1
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v12; // w1
  PartyOrganizationUtility_c *v13; // x0

  if ( (byte_42E574E & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E574E = 1;
  }
  v8 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v8 = PartyOrganizationUtility_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__GetInt(v8->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v13 = PartyOrganizationUtility_TypeInfo;
    if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v13 = PartyOrganizationUtility_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v13->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 1, 0LL);
    friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
    if ( friendshipUpItemUseButton )
    {
      v12 = 1;
      goto LABEL_23;
    }
LABEL_24:
    sub_B5D69C(friendshipUpItemUseButton, v10);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  v9 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v9 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v9->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
  if ( !friendshipUpItemUseButton )
    goto LABEL_24;
  v12 = 0;
LABEL_23:
  FriendshipUpItemUseItem__ChangeButtonState(friendshipUpItemUseButton, v12, 0LL);
}


void __fastcall BattleRetryConfirmComponent__Open(
        BattleRetryConfirmComponent_o *this,
        BattleWindowComponent_EndCall_o *opendFunc,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *bgObj; // x0
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_42E5747 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)opendFunc, (_DWORD)method, v3);
    byte_42E5747 = 1;
  }
  bgObj = this->fields.bgObj;
  if ( !bgObj
    || (UnityEngine_GameObject__SetActive(bgObj, 1, 0LL),
        (bgObj = (UnityEngine_GameObject_o *)this->fields.window) == 0LL)
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, BattleWindowComponent_EndCall_o *, void *))bgObj->klass[1]._1.typeMetadataHandle)(
          bgObj,
          opendFunc,
          bgObj->klass[1]._1.interopData),
        BattleRetryConfirmComponent__CostPointLabelCentering(this, v7),
        (bgObj = (UnityEngine_GameObject_o *)this->fields.cancelLabel) == 0LL)
    || (bgObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)bgObj, 0LL)) == 0LL
    || (bgObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)bgObj, 0LL)) == 0LL )
  {
    sub_B5D69C(bgObj, opendFunc);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  TerminalPramsManager_c *v35; // x0
  int32_t WarId_k__BackingField; // w22
  int32_t QuestId_k__BackingField; // w20
  int32_t PhaseCnt_k__BackingField; // w21
  BattleSetupInfo_o *v39; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v41; // x1
  BattleSetupInfo_o *v42; // x22
  UnityEngine_Object_o *boostSupportRequestLabel; // x20
  UILabel_o *v44; // x20
  UnityEngine_Object_o *v45; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E574B & 1) == 0 )
  {
    sub_B5D5C4(&BattleSetupInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDetailMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&SingletonTemplate_BoostFunctionUtility__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_11263/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_2554/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/, v32, v33, v34);
    byte_42E574B = 1;
  }
  entity = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B20 = 1;
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v35 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v35->static_fields->_WarId_k__BackingField;
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v35 = TerminalPramsManager_TypeInfo;
    byte_42E4B33 = 1;
  }
  if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v35->static_fields->_QuestId_k__BackingField;
  if ( !byte_42E4B34 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v35 = TerminalPramsManager_TypeInfo;
    byte_42E4B34 = 1;
  }
  if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35);
    v35 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v35->static_fields->_PhaseCnt_k__BackingField;
  v39 = (BattleSetupInfo_o *)sub_B5D694(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v39, 0LL);
  if ( !v39 )
    goto LABEL_66;
  v42 = BattleSetupInfo__ConvertBattleSetupInfo(
          v39,
          WarId_k__BackingField,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          0,
          0,
          0,
          0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v42 || !Master_WarQuestSelectionMaster )
    goto LABEL_66;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          v42->fields.eventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_66;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_WarQuestSelectionMaster,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0LL)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11263/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0LL) == 1 )
    {
      boostSupportRequestLabel = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(boostSupportRequestLabel, 0LL, 0LL) )
      {
        v44 = this->fields.boostSupportRequestLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                          (System_String_o *)StringLiteral_2554/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/,
                                                                                          0LL);
        if ( !v44 )
          goto LABEL_66;
        UILabel__set_text(v44, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
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
      sub_B5D69C(Master_WarQuestSelectionMaster, v41);
    }
  }
  else
  {
LABEL_56:
    v45 = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
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
        v14 = sub_B5D6C8(this);
        sub_B5D668(v14, 0LL);
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
        this = (BattleRetryConfirmComponent_o *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(v12, v13, 0LL);
      }
      LODWORD(v4) = value->max_length;
      if ( (__int64)++v7 >= (int)v4 )
        return;
    }
LABEL_13:
    sub_B5D69C(this, value);
  }
}


void __fastcall BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *items,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *reqSingleParent; // x0
  struct RetryConfirmItem_o *singleItem; // x20
  __int64 v8; // x21
  _BOOL8 activeSelf; // x0
  const MethodInfo *v10; // x3
  __int64 *p_doubleItems; // x2
  struct RetryConfirmItem_o *singleItemWithUseItemButton; // x20
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // [xsp+8h] [xbp-28h] BYREF
  __int64 v17; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42E574D & 1) == 0 )
  {
    sub_B5D5C4(&RetryConfirmItem___TypeInfo, (_DWORD)items, (_DWORD)method, v3);
    byte_42E574D = 1;
  }
  v17 = 0LL;
  v16 = 0LL;
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_31;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL) )
  {
    reqSingleParent = (UnityEngine_GameObject_o *)sub_B5D5DC(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItem = this->fields.singleItem;
      v8 = (__int64)reqSingleParent;
      if ( !singleItem
        || (reqSingleParent = (UnityEngine_GameObject_o *)sub_B5D684(
                                                            singleItem,
                                                            reqSingleParent->klass->_1.element_class)) != 0LL )
      {
        if ( *(_DWORD *)(v8 + 24) )
        {
          *(_QWORD *)(v8 + 32) = singleItem;
          sub_B5D560(v8 + 32);
          v17 = v8;
          p_doubleItems = &v17;
          goto LABEL_29;
        }
LABEL_32:
        v14 = sub_B5D6C8(reqSingleParent);
        sub_B5D668(v14, 0LL);
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
    reqSingleParent = (UnityEngine_GameObject_o *)sub_B5D5DC(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItemWithUseItemButton = this->fields.singleItemWithUseItemButton;
      v13 = (__int64)reqSingleParent;
      if ( !singleItemWithUseItemButton
        || (reqSingleParent = (UnityEngine_GameObject_o *)sub_B5D684(
                                                            singleItemWithUseItemButton,
                                                            reqSingleParent->klass->_1.element_class)) != 0LL )
      {
        if ( *(_DWORD *)(v13 + 24) )
        {
          *(_QWORD *)(v13 + 32) = singleItemWithUseItemButton;
          sub_B5D560(v13 + 32);
          v16 = v13;
          p_doubleItems = &v16;
          goto LABEL_29;
        }
        goto LABEL_32;
      }
LABEL_33:
      v15 = sub_B5D6BC();
      sub_B5D668(v15, 0LL);
    }
LABEL_31:
    sub_B5D69C(reqSingleParent, items);
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
    v10);
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
  if ( (byte_42E5745 & 1) == 0 )
  {
    this = (BattleRetryConfirmComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)costPoint, (_DWORD)items, method);
    byte_42E5745 = 1;
  }
  if ( !items )
    sub_B5D69C(this, costPoint);
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
        v21 = sub_B5D6C8(v8);
        sub_B5D668(v21, 0LL);
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

  if ( (byte_42E5743 & 1) == 0 )
  {
    sub_B5D5C4(&BattleRetryConfirmComponent_TypeInfo, (_DWORD)costPoint, (_DWORD)items, method);
    byte_42E5743 = 1;
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
    sub_B5D69C(reqSingleParent, costPoint);
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
      v30 = sub_B5D6C8(reqSingleParent);
      sub_B5D668(v30, 0LL);
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

  if ( (byte_42E5742 & 1) == 0 )
  {
    sub_B5D5C4(&BattleRetryConfirmComponent_TypeInfo, (_DWORD)costPoint, (_DWORD)item, method);
    byte_42E5742 = 1;
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
    sub_B5D69C(reqSingleParent, costPoint);
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

  if ( (byte_42E5744 & 1) == 0 )
  {
    sub_B5D5C4(&BattleRetryConfirmComponent_TypeInfo, (_DWORD)costPoint, (_DWORD)items, method);
    byte_42E5744 = 1;
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
    sub_B5D69C(reqSingleParent, costPoint);
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
      v30 = sub_B5D6C8(reqSingleParent);
      sub_B5D668(v30, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Object_o *friendshipUpItemUseButton; // x20
  PartyOrganizationUtility_o *IsAvailableFriendshipUpItem; // x0
  __int64 v19; // x1
  char v20; // w20
  PartyOrganizationUtility_c *v21; // x0
  UnityEngine_GameObject_o *v22; // x20
  UnityEngine_GameObject_o *v23; // x20
  UILabel_o *mainText; // x19
  struct BattleRetryConfirmComponent_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v26; // x20
  UnityEngine_GameObject_o *v27; // x20
  BattleRetryConfirmComponent_c *v28; // x8
  UnityEngine_GameObject_o *v29; // x20
  UnityEngine_GameObject_o *v30; // x20
  BattleRetryConfirmComponent_c *v31; // x8

  if ( (byte_42E574C & 1) == 0 )
  {
    sub_B5D5C4(&BattleRetryConfirmComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&PartyOrganizationUtility_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v14, v15, v16);
    byte_42E574C = 1;
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
    IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( IsAvailableFriendshipUpItem )
    {
      IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                                                                    IsAvailableFriendshipUpItem,
                                                                    0LL);
      if ( this->fields.friendshipUpItemUseButton )
      {
        v20 = (char)IsAvailableFriendshipUpItem;
        IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                      0LL);
        if ( IsAvailableFriendshipUpItem )
        {
          if ( (v20 & 1) != 0 )
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
            v21 = PartyOrganizationUtility_TypeInfo;
            if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
              v21 = PartyOrganizationUtility_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v21->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
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
                    v22 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                    IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                  0LL);
                    if ( IsAvailableFriendshipUpItem )
                    {
                      IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                    (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                    0LL);
                      if ( v22 )
                      {
                        UnityEngine_GameObject__SetActive(
                          v22,
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
                            v23 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                            IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                          (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                          0LL);
                            if ( IsAvailableFriendshipUpItem )
                            {
                              IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                            (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                            0LL);
                              if ( v23 )
                              {
                                UnityEngine_GameObject__SetActive(
                                  v23,
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
                          v26 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                          IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                        0LL);
                          if ( IsAvailableFriendshipUpItem )
                          {
                            IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                          (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                          0LL);
                            if ( v26 )
                            {
                              UnityEngine_GameObject__SetActive(
                                v26,
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
                                  v27 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                                  IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                                (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                                0LL);
                                  if ( IsAvailableFriendshipUpItem )
                                  {
                                    IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                                  (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                                  0LL);
                                    if ( v27 )
                                    {
                                      UnityEngine_GameObject__SetActive(
                                        v27,
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
                                          v28 = BattleRetryConfirmComponent_TypeInfo;
                                          if ( ((unsigned __int8)IsAvailableFriendshipUpItem & 1) != 0 )
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v28 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)&v28->static_fields->MAIN_TEXT_FONT_SIZE_FOR_DOUBLE_ITEM_AND_BUTTON;
                                            if ( mainText )
                                              goto LABEL_80;
                                          }
                                          else
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v28 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = v28->static_fields;
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
                          v29 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                          IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                        0LL);
                          if ( IsAvailableFriendshipUpItem )
                          {
                            IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                          (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                          0LL);
                            if ( v29 )
                            {
                              UnityEngine_GameObject__SetActive(
                                v29,
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
                                  v30 = (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem;
                                  IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                                                (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                                                0LL);
                                  if ( IsAvailableFriendshipUpItem )
                                  {
                                    IsAvailableFriendshipUpItem = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                                                  (UnityEngine_GameObject_o *)IsAvailableFriendshipUpItem,
                                                                                                  0LL);
                                    if ( v30 )
                                    {
                                      UnityEngine_GameObject__SetActive(
                                        v30,
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
                                          v31 = BattleRetryConfirmComponent_TypeInfo;
                                          if ( ((unsigned __int8)IsAvailableFriendshipUpItem & 1) != 0 )
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v31 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)&v31->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM_AND_BUTTON;
                                            if ( mainText )
                                              goto LABEL_80;
                                          }
                                          else
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v31 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)&v31->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM;
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
    sub_B5D69C(IsAvailableFriendshipUpItem, v19);
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
    sub_B5D69C(this, value);
  }
  UILabel__set_text((UILabel_o *)this, value->fields.possessionAmount, 0LL);
}


bool __fastcall BattleRetryConfirmComponent__SetValues(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  int v110; // w1
  int v111; // w2
  __int64 v112; // x3
  int v113; // w1
  int v114; // w2
  __int64 v115; // x3
  int v116; // w1
  int v117; // w2
  __int64 v118; // x3
  int v119; // w1
  int v120; // w2
  __int64 v121; // x3
  int v122; // w1
  int v123; // w2
  __int64 v124; // x3
  BattleRetryConfirmComponent___c__DisplayClass37_0_o *v125; // x25
  int64_t Instance; // x0
  __int64 v127; // x1
  int v128; // w2
  __int64 v129; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  _BYTE *v131; // x22
  QuestEntity_o *v132; // x21
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v134; // x19
  System_Text_StringBuilder_o *v135; // x26
  Il2CppObject *v136; // x28
  int actMax; // w27
  int v138; // w2
  __int64 v139; // x3
  BalanceConfig_c *v140; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v141; // x28
  UserItemMaster_o *v142; // x22
  il2cpp_array_size_t v143; // w23
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v145; // x8
  int64_t v146; // x20
  ItemEntity_o *v147; // x25
  int32_t qp; // w24
  struct System_Int32_array *nums; // x8
  System_String_o *v150; // x0
  struct System_Int32_array *v151; // x8
  System_String_o *v152; // x20
  Il2CppObject *v153; // x0
  System_String_o *v154; // x0
  int32_t MaxNum; // w20
  System_String_o *v156; // x19
  Il2CppObject *v157; // x24
  Il2CppObject *v158; // x0
  struct System_String_o *v159; // x0
  System_String_o *v160; // x19
  Il2CppObject *v161; // x0
  System_String_o *v162; // x19
  Il2CppObject *v163; // x0
  System_String_o *v164; // x0
  System_String_o *v165; // x19
  System_String_o *v166; // x0
  System_String_o *v167; // x19
  CommonUI_o *v168; // x20
  BattleRetryConfirmComponent___c_c *v169; // x8
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__37_1; // x22
  System_String_o *v172; // x21
  Il2CppObject *v173; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v174; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v175; // x28
  UserItemMaster_o *v176; // x22
  il2cpp_array_size_t v177; // w23
  struct System_Int32_array *v178; // x8
  struct System_Int32_array *v179; // x8
  int64_t v180; // x20
  ItemEntity_o *v181; // x25
  int32_t v182; // w24
  struct System_Int32_array *v183; // x8
  System_String_o *v184; // x0
  struct System_Int32_array *v185; // x8
  System_String_o *v186; // x20
  Il2CppObject *v187; // x0
  System_String_o *v188; // x0
  int32_t v189; // w20
  System_String_o *v190; // x19
  Il2CppObject *v191; // x24
  Il2CppObject *v192; // x0
  struct System_String_o *v193; // x0
  System_String_o *v194; // x19
  Il2CppObject *v195; // x0
  System_String_o *v196; // x19
  Il2CppObject *v197; // x0
  System_String_o *v198; // x0
  System_String_o *v199; // x19
  System_String_o *v200; // x0
  System_String_o *v201; // x19
  CommonUI_o *v202; // x20
  BattleRetryConfirmComponent___c_c *v203; // x8
  struct BattleRetryConfirmComponent___c_StaticFields *v204; // x9
  System_Action_o *_9__37_2; // x22
  System_String_o *v206; // x21
  Il2CppObject *v207; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v208; // x0
  MapControl_QuestInfo_o *v210; // x19
  int32_t questId; // w20
  bool IsQuestClear_25877652; // w0
  int v213; // w1
  int v214; // w2
  __int64 v215; // x3
  bool v216; // w20
  TerminalPramsManager_c *v217; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t CampaignCostCalcValue; // w20
  int32_t ActConsume; // w0
  int v221; // w22
  int32_t v222; // w23
  System_String_o *CostValueColor; // x19
  Il2CppObject *v224; // x0
  Il2CppObject *v225; // x20
  System_String_o *v226; // x0
  System_String_o *v227; // x19
  Il2CppObject *v228; // x0
  Il2CppObject *v229; // x19
  System_String_o *v230; // x0
  System_String_o *v231; // x0
  System_String_o *v232; // x0
  System_String_o *v233; // x20
  Il2CppObject *v234; // x0
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v235; // x0
  const MethodInfo *v236; // x3
  const MethodInfo *v237; // x1
  const MethodInfo *v238; // x1
  System_Action_o *v239; // x19
  BattleRetryConfirmComponent_o *v240; // x0
  const MethodInfo *v241; // x2
  System_Collections_IEnumerator_o *v242; // x0
  __int64 v243; // x0
  int32_t v244; // [xsp+34h] [xbp-1BCh]
  Il2CppObject *v245; // [xsp+38h] [xbp-1B8h]
  Il2CppObject *v246; // [xsp+38h] [xbp-1B8h]
  BattleRetryConfirmComponent___c__DisplayClass37_0_o *v247; // [xsp+48h] [xbp-1A8h]
  BattleRetryConfirmComponent___c__DisplayClass37_0_o *v248; // [xsp+48h] [xbp-1A8h]
  BattleRetryConfirmComponent_o *v249; // [xsp+50h] [xbp-1A0h]
  BattleRetryConfirmComponent_o *v250; // [xsp+50h] [xbp-1A0h]
  UserGameEntity_o **p_userGameEntity; // [xsp+70h] [xbp-180h]
  int64_t *p_rciItems; // [xsp+78h] [xbp-178h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v253; // [xsp+80h] [xbp-170h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v254; // [xsp+B0h] [xbp-140h] BYREF
  int32_t fixedVal; // [xsp+DCh] [xbp-114h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v256; // [xsp+E0h] [xbp-110h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v257; // [xsp+108h] [xbp-E8h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v258; // [xsp+130h] [xbp-C0h] BYREF
  int v259; // [xsp+15Ch] [xbp-94h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v260; // [xsp+160h] [xbp-90h] BYREF

  if ( (byte_42E573E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CondType_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v20, v21, v22);
    sub_B5D5C4(&int_TypeInfo, v23, v24, v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__,
      v26,
      v27,
      v28);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__,
      v29,
      v30,
      v31);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__,
      v32,
      v33,
      v34);
    sub_B5D5C4(
      &System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo,
      v35,
      v36,
      v37);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&NetworkManager_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&MapControl_QuestInfo_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v50, v51, v52);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v56, v57, v58);
    sub_B5D5C4(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, v59, v60, v61);
    sub_B5D5C4(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, v62, v63, v64);
    sub_B5D5C4(&Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__, v65, v66, v67);
    sub_B5D5C4(&BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo, v68, v69, v70);
    sub_B5D5C4(&BattleRetryConfirmComponent___c_TypeInfo, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v74, v75, v76);
    sub_B5D5C4(&StringLiteral_2563/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, v77, v78, v79);
    sub_B5D5C4(&StringLiteral_3424/*"CONSUME_TYPE_AP"*/, v80, v81, v82);
    sub_B5D5C4(&StringLiteral_11075/*"QUEST_ITEM_COST_OVER"*/, v83, v84, v85);
    sub_B5D5C4(&StringLiteral_2561/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, v86, v87, v88);
    sub_B5D5C4(&StringLiteral_2562/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, v89, v90, v91);
    sub_B5D5C4(&StringLiteral_1752/*"AP_OVER_MAX_COLOR"*/, v92, v93, v94);
    sub_B5D5C4(&StringLiteral_3425/*"CONSUME_TYPE_RP"*/, v95, v96, v97);
    sub_B5D5C4(&StringLiteral_2567/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, v98, v99, v100);
    sub_B5D5C4(&StringLiteral_2566/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, v101, v102, v103);
    sub_B5D5C4(&StringLiteral_27/*"\n\n"*/, v104, v105, v106);
    sub_B5D5C4(&StringLiteral_2564/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v107, v108, v109);
    sub_B5D5C4(&StringLiteral_2558/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, v110, v111, v112);
    sub_B5D5C4(&StringLiteral_1/*""*/, v113, v114, v115);
    sub_B5D5C4(&StringLiteral_2565/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, v116, v117, v118);
    sub_B5D5C4(&StringLiteral_2559/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, v119, v120, v121);
    sub_B5D5C4(&StringLiteral_2560/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, v122, v123, v124);
    byte_42E573E = 1;
  }
  v259 = 0;
  memset(&v258, 0, sizeof(v258));
  memset(&v257, 0, sizeof(v257));
  memset(&v256, 0, sizeof(v256));
  fixedVal = 0;
  v125 = (BattleRetryConfirmComponent___c__DisplayClass37_0_o *)sub_B5D694(BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo);
  BattleRetryConfirmComponent___c__DisplayClass37_0___ctor(v125, 0LL);
  if ( !v125 )
    goto LABEL_196;
  v125->fields.__4__this = this;
  sub_B5D560(&v125->fields);
  this->fields.userGameEntity = UserGameMaster__getSelfUserGame(0LL);
  p_userGameEntity = &this->fields.userGameEntity;
  sub_B5D560(&this->fields.userGameEntity);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_196;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  v131 = &unk_42E4000;
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v127, v128, v129);
    byte_42E4B33 = 1;
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
                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_196;
  v132 = (QuestEntity_o *)Instance;
  v259 = 0;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0LL);
  memset(&v258, 0, sizeof(v258));
  v134 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_B5D694(System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v134,
    (const MethodInfo_2FA2B40 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  v125->fields.rciItems = v134;
  p_rciItems = (int64_t *)&v125->fields.rciItems;
  sub_B5D560(&v125->fields.rciItems);
  v135 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v135, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v136 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3424/*"CONSUME_TYPE_AP"*/, 0LL);
  switch ( QuestEntity__GetConsumeType(v132, 0LL) )
  {
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3424/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v136 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      v259 = Instance;
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
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3425/*"CONSUME_TYPE_RP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v136 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getRp(*p_userGameEntity, 0LL);
      v259 = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_196;
      if ( !byte_42E4B1D )
      {
        sub_B5D5C4(&BalanceConfig_TypeInfo, v127, v138, v139);
        byte_42E4B1D = 1;
      }
      v140 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v140 = BalanceConfig_TypeInfo;
      }
      actMax = v140->static_fields->UerGameRpMax;
      goto LABEL_160;
    case 3:
      v247 = v125;
      v249 = this;
      v258.fields.useName = (struct System_String_o *)StringLiteral_1/*""*/;
      v245 = (Il2CppObject *)StringLiteral_1/*""*/;
      sub_B5D560(&v258);
      v258.fields.useAmount = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B5D560(&v258.fields.useAmount);
      if ( !ItemConsumeEntity )
        goto LABEL_79;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      v141 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      v142 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_79;
      v143 = 0;
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
        if ( v143 >= itemIds->max_length )
          goto LABEL_197;
        if ( !v142 )
          goto LABEL_196;
        Instance = (int64_t)UserItemMaster__GetEntity(v142, Instance, itemIds->m_Items[v143 + 1], 0LL);
        v145 = ItemConsumeEntity->fields.itemIds;
        if ( !v145 )
          goto LABEL_196;
        if ( v143 >= v145->max_length )
          goto LABEL_197;
        if ( !v141 )
          goto LABEL_196;
        v146 = Instance;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v141,
                              v145->m_Items[v143 + 1],
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_196;
        v147 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_196;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v146 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          qp = *(_DWORD *)(v146 + 28);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_196;
        if ( v143 >= nums->max_length )
          goto LABEL_197;
        if ( nums->m_Items[v143 + 1] > qp )
        {
          Instance = (int64_t)System_String__Concat_44577788(
                                (System_String_o *)StringLiteral_26/*"\n"*/,
                                v147->fields.name,
                                0LL);
          if ( !v135 )
            goto LABEL_196;
          System_Text_StringBuilder__Append_42953744(v135, (System_String_o *)Instance, 0LL);
        }
        memset(&v257, 0, sizeof(v257));
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v150 = LocalizationManager__Get((System_String_o *)StringLiteral_2562/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v257.fields.useName = System_String__Format(v150, (Il2CppObject *)v147->fields.name, 0LL);
        sub_B5D560(&v257);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2563/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v151 = ItemConsumeEntity->fields.nums;
        if ( !v151 )
          goto LABEL_196;
        if ( v143 >= v151->max_length )
          goto LABEL_197;
        v152 = (System_String_o *)Instance;
        LODWORD(v260.fields.useName) = v151->m_Items[v143 + 1];
        v153 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v260);
        v257.fields.useAmount = System_String__Format(v152, v153, 0LL);
        sub_B5D560(&v257.fields.useAmount);
        v154 = LocalizationManager__Get((System_String_o *)StringLiteral_2565/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v257.fields.possessionName = System_String__Format(v154, (Il2CppObject *)v147->fields.name, 0LL);
        sub_B5D560(&v257.fields.possessionName);
        MaxNum = ItemEntity__GetMaxNum(v147, 0LL);
        if ( MaxNum < 1 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v160 = LocalizationManager__Get((System_String_o *)StringLiteral_2566/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v260.fields.useName) = qp;
          v161 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v260);
          v159 = System_String__Format(v160, v161, 0LL);
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v156 = LocalizationManager__Get((System_String_o *)StringLiteral_2567/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v260.fields.useName) = qp;
          v157 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v260);
          LODWORD(v254.fields.useName) = ItemEntity__GetMaxNum(v147, 0LL);
          v158 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v254);
          v159 = System_String__Format_44573324(v156, v157, v158, 0LL);
        }
        v257.fields.possessionAmount = v159;
        sub_B5D560(&v257.fields.possessionAmount);
        v257.fields.isIndividualLimit = MaxNum > 0;
        Instance = *p_rciItems;
        v254 = v257;
        if ( !Instance )
          goto LABEL_196;
        v260 = v254;
        System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___Add(
          (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
          &v260,
          (const MethodInfo_2FA3978 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v143, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_79:
      if ( !v135 )
        goto LABEL_196;
      v125 = v247;
      this = v249;
      v131 = &unk_42E4000;
      if ( System_Text_StringBuilder__get_Length(v135, 0LL) < 1 )
      {
        v136 = v245;
LABEL_159:
        actMax = 0;
LABEL_160:
        if ( QuestEntity__GetConsumeType(v132, 0LL) == 1
          || QuestEntity__GetConsumeType(v132, 0LL) == 2
          || QuestEntity__GetConsumeType(v132, 0LL) == 4 )
        {
          v210 = (MapControl_QuestInfo_o *)sub_B5D694(MapControl_QuestInfo_TypeInfo);
          MapControl_QuestInfo___ctor(v210, 0LL);
          if ( !v210 )
            goto LABEL_196;
          MapControl_QuestInfo__SetTerminalParamsValue(v210, 0LL);
          questId = v210->fields.questId;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_25877652 = CondType__IsQuestClear_25877652(questId, -1, 0, 0LL);
          fixedVal = -1;
          v216 = IsQuestClear_25877652;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !v131[2867] )
          {
            sub_B5D5C4(&TerminalPramsManager_TypeInfo, v213, v214, v215);
            v131[2867] = 1;
          }
          v217 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v217 = TerminalPramsManager_TypeInfo;
          }
          QuestId_k__BackingField = v217->static_fields->_QuestId_k__BackingField;
          if ( !byte_42E4B34 )
          {
            sub_B5D5C4(&TerminalPramsManager_TypeInfo, v213, v214, v215);
            v217 = TerminalPramsManager_TypeInfo;
            byte_42E4B34 = 1;
          }
          if ( (BYTE3(v217->vtable._0_Equals.methodPtr) & 4) != 0 && !v217->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v217);
            v217 = TerminalPramsManager_TypeInfo;
          }
          CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                                    v132,
                                    QuestId_k__BackingField,
                                    v217->static_fields->_PhaseCnt_k__BackingField,
                                    !v216,
                                    &fixedVal,
                                    0LL);
          Instance = (int64_t)MapControl_QuestInfo__GetMine(v210, 0LL);
          if ( !Instance )
            goto LABEL_196;
          Instance = (int64_t)QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
          v210->fields._fixedCostVal_k__BackingField = fixedVal;
          if ( !Instance )
            goto LABEL_196;
          ActConsume = QuestEntity__getActConsume((QuestEntity_o *)Instance, CampaignCostCalcValue, 0LL);
          v210->fields.costCalcVal = CampaignCostCalcValue;
          v221 = v259;
          if ( fixedVal >= 0 )
            v222 = fixedVal;
          else
            v222 = ActConsume;
          CostValueColor = QuestEntity__GetCostValueColor(
                             CampaignCostCalcValue,
                             (v222 > actMax) | (unsigned __int8)(v222 > v259),
                             0LL);
          LODWORD(v260.fields.useName) = v222;
          v224 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v260);
          v225 = (Il2CppObject *)System_String__Format(CostValueColor, v224, 0LL);
          v226 = System_Int32__ToString((int32_t)&v259, 0LL);
          if ( actMax < v221 )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v227 = LocalizationManager__Get((System_String_o *)StringLiteral_1752/*"AP_OVER_MAX_COLOR"*/, 0LL);
            LODWORD(v260.fields.useName) = v259;
            v228 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v260);
            v226 = System_String__Format(v227, v228, 0LL);
          }
          v229 = (Il2CppObject *)v226;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v230 = LocalizationManager__Get((System_String_o *)StringLiteral_2560/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0LL);
          v258.fields.useName = System_String__Format(v230, v136, 0LL);
          sub_B5D560(&v258);
          v231 = LocalizationManager__Get((System_String_o *)StringLiteral_2561/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0LL);
          v258.fields.useAmount = System_String__Format(v231, v225, 0LL);
          sub_B5D560(&v258.fields.useAmount);
          v232 = LocalizationManager__Get((System_String_o *)StringLiteral_2558/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0LL);
          v258.fields.possessionName = System_String__Format(v232, v136, 0LL);
          sub_B5D560(&v258.fields.possessionName);
          v233 = LocalizationManager__Get((System_String_o *)StringLiteral_2559/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0LL);
          LODWORD(v260.fields.useName) = actMax;
          v234 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v260);
          v258.fields.possessionAmount = System_String__Format_44573324(v233, v229, v234, 0LL);
          sub_B5D560(&v258.fields.possessionAmount);
        }
        v260 = v258;
        Instance = *p_rciItems;
        if ( *p_rciItems )
        {
          v235 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                   (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
                   (const MethodInfo_2FA5F20 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
          v253 = v260;
          BattleRetryConfirmComponent__SetCostValueText(this, &v253, v235, v236);
          BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v237);
          BattleRetryConfirmComponent__SetFriendshipUpItemUseButton(this, v238);
          v239 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v239,
            (Il2CppObject *)v125,
            Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__,
            0LL);
          v242 = BattleRetryConfirmComponent__WaitOneFrame(v240, v239, v241);
          UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v242, 0LL);
          return 1;
        }
LABEL_196:
        sub_B5D69C(Instance, v127);
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v162 = LocalizationManager__Get((System_String_o *)StringLiteral_11075/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v163 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v135->klass->vtable._3_ToString.method)(
                               v135,
                               v135->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v164 = System_String__Format(v162, v163, 0LL);
      v165 = System_String__Concat_44577788(v164, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
      v166 = LocalizationManager__Get((System_String_o *)StringLiteral_2564/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v167 = System_String__Concat_44577788(v165, v166, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v168 = (CommonUI_o *)Instance;
      v169 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( (BYTE3(BattleRetryConfirmComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v169 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      static_fields = v169->static_fields;
      _9__37_1 = static_fields->__9__37_1;
      v172 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__37_1 )
      {
        if ( (BYTE3(v169->vtable._0_Equals.methodPtr) & 4) != 0 && !v169->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v169);
          static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        }
        v173 = (Il2CppObject *)static_fields->__9;
        _9__37_1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__37_1, v173, Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, 0LL);
        v174 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v174->__9__37_1 = _9__37_1;
        sub_B5D560(&v174->__9__37_1);
      }
      if ( !v168 )
        goto LABEL_196;
      CommonUI__OpenNotificationDialog(v168, v172, v167, _9__37_1, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
      return 0;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3424/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v246 = (Il2CppObject *)Instance;
      v248 = v125;
      v250 = this;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      v259 = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v244 = (*p_userGameEntity)->fields.actMax;
      v258.fields.useName = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B5D560(&v258);
      v258.fields.useAmount = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B5D560(&v258.fields.useAmount);
      if ( !ItemConsumeEntity )
        goto LABEL_142;
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      v175 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_196;
      v176 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_142;
      v177 = 0;
      do
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        Instance = NetworkManager__get_UserId(0LL);
        v178 = ItemConsumeEntity->fields.itemIds;
        if ( !v178 )
          goto LABEL_196;
        if ( v177 >= v178->max_length )
          goto LABEL_197;
        if ( !v176 )
          goto LABEL_196;
        Instance = (int64_t)UserItemMaster__GetEntity(v176, Instance, v178->m_Items[v177 + 1], 0LL);
        v179 = ItemConsumeEntity->fields.itemIds;
        if ( !v179 )
          goto LABEL_196;
        if ( v177 >= v179->max_length )
          goto LABEL_197;
        if ( !v175 )
          goto LABEL_196;
        v180 = Instance;
        Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              v175,
                              v179->m_Items[v177 + 1],
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_196;
        v181 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_196;
          v182 = (*p_userGameEntity)->fields.qp;
        }
        else if ( v180 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          v182 = *(_DWORD *)(v180 + 28);
        }
        else
        {
          v182 = 0;
        }
        v183 = ItemConsumeEntity->fields.nums;
        if ( !v183 )
          goto LABEL_196;
        if ( v177 >= v183->max_length )
          goto LABEL_197;
        if ( v183->m_Items[v177 + 1] > v182 )
        {
          Instance = (int64_t)System_String__Concat_44577788(
                                (System_String_o *)StringLiteral_26/*"\n"*/,
                                v181->fields.name,
                                0LL);
          if ( !v135 )
            goto LABEL_196;
          System_Text_StringBuilder__Append_42953744(v135, (System_String_o *)Instance, 0LL);
        }
        memset(&v256, 0, sizeof(v256));
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v184 = LocalizationManager__Get((System_String_o *)StringLiteral_2562/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v256.fields.useName = System_String__Format(v184, (Il2CppObject *)v181->fields.name, 0LL);
        sub_B5D560(&v256);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2563/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v185 = ItemConsumeEntity->fields.nums;
        if ( !v185 )
          goto LABEL_196;
        if ( v177 >= v185->max_length )
        {
LABEL_197:
          v243 = sub_B5D6C8(Instance);
          sub_B5D668(v243, 0LL);
        }
        v186 = (System_String_o *)Instance;
        LODWORD(v260.fields.useName) = v185->m_Items[v177 + 1];
        v187 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v260);
        v256.fields.useAmount = System_String__Format(v186, v187, 0LL);
        sub_B5D560(&v256.fields.useAmount);
        v188 = LocalizationManager__Get((System_String_o *)StringLiteral_2565/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v256.fields.possessionName = System_String__Format(v188, (Il2CppObject *)v181->fields.name, 0LL);
        sub_B5D560(&v256.fields.possessionName);
        v189 = ItemEntity__GetMaxNum(v181, 0LL);
        if ( v189 < 1 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v194 = LocalizationManager__Get((System_String_o *)StringLiteral_2566/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v260.fields.useName) = v182;
          v195 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v260);
          v193 = System_String__Format(v194, v195, 0LL);
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v190 = LocalizationManager__Get((System_String_o *)StringLiteral_2567/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v260.fields.useName) = v182;
          v191 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v260);
          LODWORD(v254.fields.useName) = ItemEntity__GetMaxNum(v181, 0LL);
          v192 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v254);
          v193 = System_String__Format_44573324(v190, v191, v192, 0LL);
        }
        v256.fields.possessionAmount = v193;
        sub_B5D560(&v256.fields.possessionAmount);
        v256.fields.isIndividualLimit = v189 > 0;
        Instance = *p_rciItems;
        v254 = v256;
        if ( !Instance )
          goto LABEL_196;
        v260 = v254;
        System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___Add(
          (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
          &v260,
          (const MethodInfo_2FA3978 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v177, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_142:
      if ( !v135 )
        goto LABEL_196;
      v125 = v248;
      this = v250;
      v136 = v246;
      actMax = v244;
      v131 = (_BYTE *)&unk_42E4000;
      if ( System_Text_StringBuilder__get_Length(v135, 0LL) < 1 )
        goto LABEL_160;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v196 = LocalizationManager__Get((System_String_o *)StringLiteral_11075/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v197 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v135->klass->vtable._3_ToString.method)(
                               v135,
                               v135->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v198 = System_String__Format(v196, v197, 0LL);
      v199 = System_String__Concat_44577788(v198, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
      v200 = LocalizationManager__Get((System_String_o *)StringLiteral_2564/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v201 = System_String__Concat_44577788(v199, v200, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v202 = (CommonUI_o *)Instance;
      v203 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( (BYTE3(BattleRetryConfirmComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v203 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      v204 = v203->static_fields;
      _9__37_2 = v204->__9__37_2;
      v206 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__37_2 )
      {
        if ( (BYTE3(v203->vtable._0_Equals.methodPtr) & 4) != 0 && !v203->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v203);
          v204 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        }
        v207 = (Il2CppObject *)v204->__9;
        _9__37_2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(_9__37_2, v207, Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, 0LL);
        v208 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v208->__9__37_2 = _9__37_2;
        sub_B5D560(&v208->__9__37_2);
      }
      if ( !v202 )
        goto LABEL_196;
      CommonUI__OpenNotificationDialog(v202, v206, v201, _9__37_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
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
  __int64 v3; // x3
  BattleRetryConfirmComponent__WaitOneFrame_d__42_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42E5741 & 1) == 0 )
  {
    sub_B5D5C4(&BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo, (_DWORD)action, (_DWORD)method, v3);
    byte_42E5741 = 1;
  }
  v5 = (BattleRetryConfirmComponent__WaitOneFrame_d__42_o *)sub_B5D694(BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo);
  BattleRetryConfirmComponent__WaitOneFrame_d__42___ctor(v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  v5->fields.action = action;
  sub_B5D560(&v5->fields.action);
  return (System_Collections_IEnumerator_o *)v5;
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
    sub_B5D560(&this->fields.__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__42_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E60B8 & 1) == 0 )
  {
    sub_B5D5C4(&BattleRetryConfirmComponent___c_TypeInfo, v1, v2, v3);
    byte_42E60B8 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleRetryConfirmComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E60B9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5, v6);
    byte_42E60B9 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1AD57AC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__37_2(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  AvalonSceneManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E60BA & 1) == 0 )
  {
    sub_B5D5C4(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4, v5, v6);
    byte_42E60BA = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v8);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_1AD57AC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *rciItems; // x0
  BattleRetryConfirmComponent_o *_4__this; // x19

  if ( (byte_42E60BB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E60BB = 1;
  }
  rciItems = this->fields.rciItems;
  if ( !rciItems
    || (_4__this = this->fields.__4__this,
        rciItems = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(rciItems, (const MethodInfo_2FA5F20 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__),
        !_4__this) )
  {
    sub_B5D69C(rciItems, method);
  }
  BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
    _4__this,
    (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)rciItems,
    0LL);
}