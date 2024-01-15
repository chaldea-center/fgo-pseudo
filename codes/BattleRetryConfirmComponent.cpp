void __fastcall BattleRetryConfirmComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleRetryConfirmComponent_c *v2; // x8

  if ( (byte_40F74E6 & 1) == 0 )
  {
    sub_B16FFC(&BattleRetryConfirmComponent_TypeInfo, v1);
    byte_40F74E6 = 1;
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
  *(_OWORD *)&this->fields.CONFIRM_BUTTON_POSITION_ON_THREE.fields.y = xmmword_3132C40;
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
  struct System_Collections_Generic_List_UIButton__o *buttons; // x0
  BattleResultComponent_o *battleResultComponent; // x0
  int32_t v13; // w2
  CommonUI_o *Instance; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F74E1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, *(_QWORD *)&result);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_40F74E1 = 1;
  }
  memset(&v15, 0, sizeof(v15));
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
      buttons = this->fields.buttons;
      if ( !buttons )
        goto LABEL_20;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v15,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buttons,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v15,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v15.fields.current )
          sub_B170D4();
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v15.fields.current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v15,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      break;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_20:
    sub_B170D4();
  CommonUI__CloseBoostSupportRequestMenu(Instance, 0LL, 0LL);
}


void __fastcall BattleRetryConfirmComponent__Close(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelLabel; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *bgObj; // x0
  struct BattleWindowComponent_o *window; // x0

  if ( (byte_40F74DF & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    byte_40F74DF = 1;
  }
  cancelLabel = (UnityEngine_Component_o *)this->fields.cancelLabel;
  if ( !cancelLabel )
    goto LABEL_12;
  transform = UnityEngine_Component__get_transform(cancelLabel, 0LL);
  if ( !transform )
    goto LABEL_12;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
  if ( !parent )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject(parent, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__RemoveBackBtn(gameObject, 0LL);
  bgObj = this->fields.bgObj;
  if ( !bgObj || (UnityEngine_GameObject__SetActive(bgObj, 0, 0LL), (window = this->fields.window) == 0LL) )
LABEL_12:
    sub_B170D4();
  ((void (__fastcall *)(struct BattleWindowComponent_o *, _QWORD, Il2CppMethodPointer))window->klass->vtable._12_Close.method)(
    window,
    0LL,
    window->klass->vtable._13_CompClose.methodPtr);
}


void __fastcall BattleRetryConfirmComponent__CostPointLabelCentering(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *reqSingleParent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  RetryConfirmItem_o *singleAp; // x0
  RetryConfirmItem_o *singleItem; // x0
  RetryConfirmItem_o *doubleAp; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct RetryConfirmItem_array *doubleItems; // x8
  __int64 v12; // x20
  int max_length; // w9
  RetryConfirmItem_o *v14; // x0

  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_14;
  gameObject = UnityEngine_GameObject__get_gameObject(reqSingleParent, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
  {
    singleAp = this->fields.singleAp;
    if ( singleAp )
    {
      RetryConfirmItem__CenteringAmountLabel(singleAp, 0LL);
      singleItem = this->fields.singleItem;
      if ( singleItem )
      {
        RetryConfirmItem__CenteringAmountLabel(singleItem, 0LL);
        return;
      }
    }
LABEL_14:
    sub_B170D4();
  }
  doubleAp = this->fields.doubleAp;
  if ( !doubleAp )
    goto LABEL_14;
  RetryConfirmItem__CenteringAmountLabel(doubleAp, 0LL);
  doubleItems = this->fields.doubleItems;
  if ( !doubleItems )
    goto LABEL_14;
  v12 = 0LL;
  while ( 1 )
  {
    max_length = doubleItems->max_length;
    if ( (int)v12 >= max_length )
      break;
    if ( (unsigned int)v12 >= max_length )
    {
      sub_B17100(v8, v9, v10);
      sub_B170A0();
    }
    v14 = doubleItems->m_Items[v12];
    if ( v14 )
    {
      RetryConfirmItem__CenteringAmountLabel(v14, 0LL);
      doubleItems = this->fields.doubleItems;
      ++v12;
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
  UnityEngine_GameObject_o *reqSingleParent; // x0
  UnityEngine_GameObject_o *reqDoubleParent; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *buttons; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_buttons; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x8
  WarBoardControlPlayTalkUiComponent_array *v29; // x21
  unsigned __int64 v30; // x22
  UILabel_o *mainText; // x20
  System_String_o *v32; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v34; // x0
  UILabel_o *confirmLabel; // x20
  System_String_o *v36; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F74DD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIButton__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIButton___ctor__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIButton__get_Count__, v9);
    sub_B16FFC(&System_Collections_Generic_List_UIButton__TypeInfo, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_2491/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, v12);
    sub_B16FFC(&StringLiteral_2493/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, v13);
    sub_B16FFC(&StringLiteral_2492/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, v14);
    byte_40F74DD = 1;
  }
  memset(&v37, 0, sizeof(v37));
  root = this->fields.root;
  if ( !root )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqDoubleParent = this->fields.reqDoubleParent;
  if ( !reqDoubleParent )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive(reqDoubleParent, 0, 0LL);
  buttons = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.buttons;
  if ( !buttons || !buttons->fields._size )
  {
    p_buttons = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.buttons;
    v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_List_UIButton__TypeInfo,
                                                                                                    v18,
                                                                                                    v19,
                                                                                                    v20,
                                                                                                    v21);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v24,
      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v24;
    sub_B16F98(&this->fields.buttons, v24);
    ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                (UnityEngine_Component_o *)this,
                                                                1,
                                                                (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    if ( !ComponentsInChildren_WarBoardControlPlayTalkUiComponent )
      goto LABEL_29;
    v28 = *(_QWORD *)&ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
    v29 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
    if ( (int)v28 >= 1 )
    {
      v30 = 0LL;
      while ( 1 )
      {
        if ( v30 >= (unsigned int)v28 )
        {
          sub_B17100(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v26, v27);
          sub_B170A0();
        }
        if ( !*p_buttons )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          *p_buttons,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v29->m_Items[v30],
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UIButton__Add__);
        LODWORD(v28) = v29->max_length;
        if ( (__int64)++v30 >= (int)v28 )
          goto LABEL_14;
      }
LABEL_29:
      sub_B170D4();
    }
LABEL_14:
    buttons = *p_buttons;
    if ( !*p_buttons )
      goto LABEL_29;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buttons,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v37,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v37.fields.current )
      sub_B170D4();
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v37.fields.current, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v37,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  if ( !this->fields.isInitialized )
  {
    mainText = this->fields.mainText;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_2493/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    if ( !mainText )
      goto LABEL_29;
    UILabel__set_text(mainText, v32, 0LL);
    cancelLabel = this->fields.cancelLabel;
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_2491/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_29;
    UILabel__set_text(cancelLabel, v34, 0LL);
    confirmLabel = this->fields.confirmLabel;
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2492/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    if ( !confirmLabel )
      goto LABEL_29;
    UILabel__set_text(confirmLabel, v36, 0LL);
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
  __int64 v13; // x3
  __int64 v14; // x4
  CommonUI_o *Instance; // x20
  TerminalPramsManager_c *v16; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w21
  BoostFunctionUtility_CallbackFunc_o *v19; // x23
  struct System_Collections_Generic_List_UIButton__o *buttons; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F74E0 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__, method);
    sub_B16FFC(&BoostFunctionUtility_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    byte_40F74E0 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    byte_40F6057 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v16->static_fields->_QuestId_k__BackingField;
  if ( !byte_40F6058 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    v16 = TerminalPramsManager_TypeInfo;
    byte_40F6058 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v16->static_fields->_PhaseCnt_k__BackingField;
  v19 = (BoostFunctionUtility_CallbackFunc_o *)sub_B170CC(
                                                 BoostFunctionUtility_CallbackFunc_TypeInfo,
                                                 v11,
                                                 v12,
                                                 v13,
                                                 v14);
  BoostFunctionUtility_CallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__,
    0LL);
  if ( !Instance
    || (CommonUI__OpenBoostSupportRequestMenu(Instance, QuestId_k__BackingField, PhaseCnt_k__BackingField, v19, 1, 0LL),
        (buttons = this->fields.buttons) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buttons,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v21.fields.current )
      sub_B170D4();
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v21.fields.current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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
  struct System_Collections_Generic_List_UIButton__o *buttons; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F74D6 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleRetryConfirmComponent_OnClickCancel__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_40F74D6 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  v7 = Method_BattleRetryConfirmComponent_OnClickCancel__;
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 75) & 2) != 0 )
    v7 = (_QWORD *)sub_B17004(Method_BattleRetryConfirmComponent_OnClickCancel__);
  v8 = (System_Reflection_MethodBase_o *)sub_B16FE0(v7, v7[3]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0LL),
        (buttons = this->fields.buttons) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buttons,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v11.fields.current )
      sub_B170D4();
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11.fields.current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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
  struct System_Collections_Generic_List_UIButton__o *buttons; // x0
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F74D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40F74D7 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0LL),
        (buttons = this->fields.buttons) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)buttons,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B170D4();
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v9.fields.current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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

  if ( (byte_40F74E5 & 1) == 0 )
  {
    sub_B16FFC(&PartyOrganizationUtility_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F74E5 = 1;
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
    sub_B170D4();
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
  struct BattleWindowComponent_o *window; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Component_o *cancelLabel; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_40F74DE & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, opendFunc);
    byte_40F74DE = 1;
  }
  bgObj = this->fields.bgObj;
  if ( !bgObj
    || (UnityEngine_GameObject__SetActive(bgObj, 1, 0LL), (window = this->fields.window) == 0LL)
    || (((void (__fastcall *)(struct BattleWindowComponent_o *, BattleWindowComponent_EndCall_o *, Il2CppMethodPointer))window->klass->vtable._10_Open.method)(
          window,
          opendFunc,
          window->klass->vtable._11_CompOpen.methodPtr),
        BattleRetryConfirmComponent__CostPointLabelCentering(this, v7),
        (cancelLabel = (UnityEngine_Component_o *)this->fields.cancelLabel) == 0LL)
    || (transform = UnityEngine_Component__get_transform(cancelLabel, 0LL)) == 0LL
    || (parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  gameObject = UnityEngine_Component__get_gameObject(parent, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  TerminalPramsManager_c *v16; // x0
  int32_t WarId_k__BackingField; // w22
  int32_t QuestId_k__BackingField; // w20
  int32_t PhaseCnt_k__BackingField; // w21
  BattleSetupInfo_o *v20; // x23
  BattleSetupInfo_o *v21; // x22
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  BoostFunctionUtility_o *v23; // x0
  UnityEngine_Object_o *boostSupportRequestLabel; // x20
  UILabel_o *v25; // x20
  System_String_o *v26; // x0
  UnityEngine_Component_o *v27; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *cancelLabel; // x0
  UnityEngine_Transform_o *v32; // x0
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_Component_o *confirmLabel; // x0
  UnityEngine_Transform_o *v35; // x0
  UnityEngine_Transform_o *v36; // x0
  UnityEngine_Object_o *v37; // x20
  UnityEngine_Component_o *v38; // x0
  UnityEngine_Transform_o *v39; // x0
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F74E2 & 1) == 0 )
  {
    sub_B16FFC(&BattleSetupInfo_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMaster_EventDetailMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v11);
    sub_B16FFC(&SingletonTemplate_BoostFunctionUtility__TypeInfo, v12);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_11094/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, v14);
    sub_B16FFC(&StringLiteral_2490/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/, v15);
    byte_40F74E2 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6044 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6044 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v16->static_fields->_WarId_k__BackingField;
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v16 = TerminalPramsManager_TypeInfo;
    byte_40F6057 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v16->static_fields->_QuestId_k__BackingField;
  if ( !byte_40F6058 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v16 = TerminalPramsManager_TypeInfo;
    byte_40F6058 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v16->static_fields->_PhaseCnt_k__BackingField;
  v20 = (BattleSetupInfo_o *)sub_B170CC(BattleSetupInfo_TypeInfo, method, v2, v3, v4);
  BattleSetupInfo___ctor(v20, 0LL);
  if ( !v20 )
    goto LABEL_66;
  v21 = BattleSetupInfo__ConvertBattleSetupInfo(
          v20,
          WarId_k__BackingField,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          0,
          0,
          0,
          0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v21 || !Master_WarQuestSelectionMaster )
    goto LABEL_66;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          v21->fields.eventId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_56;
  if ( !entity )
    goto LABEL_66;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
    if ( (BYTE3(SingletonTemplate_BoostFunctionUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SingletonTemplate_BoostFunctionUtility__TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SingletonTemplate_BoostFunctionUtility__TypeInfo);
    }
    v23 = (BoostFunctionUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !v23 )
      goto LABEL_66;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(v23, QuestId_k__BackingField, PhaseCnt_k__BackingField, 0LL)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11094/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0LL) == 1 )
    {
      boostSupportRequestLabel = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(boostSupportRequestLabel, 0LL, 0LL) )
      {
        v25 = this->fields.boostSupportRequestLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2490/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/, 0LL);
        if ( !v25 )
          goto LABEL_66;
        UILabel__set_text(v25, v26, 0LL);
        v27 = (UnityEngine_Component_o *)this->fields.boostSupportRequestLabel;
        if ( !v27 )
          goto LABEL_66;
        transform = UnityEngine_Component__get_transform(v27, 0LL);
        if ( !transform )
          goto LABEL_66;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL);
        if ( !parent )
          goto LABEL_66;
        gameObject = UnityEngine_Component__get_gameObject(parent, 0LL);
        if ( !gameObject )
          goto LABEL_66;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      }
      cancelLabel = (UnityEngine_Component_o *)this->fields.cancelLabel;
      if ( cancelLabel )
      {
        v32 = UnityEngine_Component__get_transform(cancelLabel, 0LL);
        if ( v32 )
        {
          v33 = UnityEngine_Transform__get_parent(v32, 0LL);
          if ( v33 )
          {
            UnityEngine_Transform__set_localPosition(
              v33,
              *(UnityEngine_Vector3_o *)&this->fields.CANCEL_BUTTON_POSITION_ON_THREE.fields.y,
              0LL);
            confirmLabel = (UnityEngine_Component_o *)this->fields.confirmLabel;
            if ( confirmLabel )
            {
              v35 = UnityEngine_Component__get_transform(confirmLabel, 0LL);
              if ( v35 )
              {
                v36 = UnityEngine_Transform__get_parent(v35, 0LL);
                if ( v36 )
                {
                  UnityEngine_Transform__set_localPosition(
                    v36,
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
      sub_B170D4();
    }
  }
  else
  {
LABEL_56:
    v37 = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
    {
      v38 = (UnityEngine_Component_o *)this->fields.boostSupportRequestLabel;
      if ( !v38 )
        goto LABEL_66;
      v39 = UnityEngine_Component__get_transform(v38, 0LL);
      if ( !v39 )
        goto LABEL_66;
      v40 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(v39, 0LL);
      if ( !v40 )
        goto LABEL_66;
      v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
      if ( !v41 )
        goto LABEL_66;
      UnityEngine_GameObject__SetActive(v41, 0, 0LL);
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
        sub_B17100(this, value, items);
        sub_B170A0();
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
        this = (BattleRetryConfirmComponent_o *)UnityEngine_MonoBehaviour__StartCoroutine_34804316(v12, v13, 0LL);
      }
      LODWORD(v4) = value->max_length;
      if ( (__int64)++v7 >= (int)v4 )
        return;
    }
LABEL_13:
    sub_B170D4();
  }
}


void __fastcall BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *items,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *reqSingleParent; // x0
  __int64 v6; // x2
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct RetryConfirmItem_o *singleItem; // x20
  __int64 v11; // x21
  _BOOL8 activeSelf; // x0
  const MethodInfo *v13; // x3
  __int64 *p_doubleItems; // x2
  UnityEngine_GameObject_o *reqSingleParentWithUseItemButton; // x0
  __int64 v16; // x2
  struct RetryConfirmItem_o *singleItemWithUseItemButton; // x20
  __int64 v18; // x21
  UnityEngine_GameObject_o *reqDoubleParent; // x0
  UnityEngine_GameObject_o *reqDoubleParentWithUseItemButton; // x0
  UnityEngine_GameObject_o *reqTripleParent; // x0
  UnityEngine_GameObject_o *reqTripleParentWithUseItemButton; // x0
  __int64 v23; // [xsp+8h] [xbp-28h] BYREF
  __int64 v24; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40F74E4 & 1) == 0 )
  {
    sub_B16FFC(&RetryConfirmItem___TypeInfo, items);
    byte_40F74E4 = 1;
  }
  v24 = 0LL;
  v23 = 0LL;
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_31;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL) )
  {
    v7 = sub_B17014(RetryConfirmItem___TypeInfo, 1LL, v6);
    if ( v7 )
    {
      singleItem = this->fields.singleItem;
      v11 = v7;
      if ( !singleItem || (v7 = sub_B170BC(singleItem, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v11 + 24) )
        {
          *(_QWORD *)(v11 + 32) = singleItem;
          sub_B16F98(v11 + 32, singleItem);
          v24 = v11;
          p_doubleItems = &v24;
          goto LABEL_29;
        }
LABEL_32:
        sub_B17100(v7, v8, v9);
        sub_B170A0();
      }
      goto LABEL_33;
    }
    goto LABEL_31;
  }
  reqSingleParentWithUseItemButton = this->fields.reqSingleParentWithUseItemButton;
  if ( !reqSingleParentWithUseItemButton )
    goto LABEL_31;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParentWithUseItemButton, 0LL) )
  {
    v7 = sub_B17014(RetryConfirmItem___TypeInfo, 1LL, v16);
    if ( v7 )
    {
      singleItemWithUseItemButton = this->fields.singleItemWithUseItemButton;
      v18 = v7;
      if ( !singleItemWithUseItemButton
        || (v7 = sub_B170BC(singleItemWithUseItemButton, *(_QWORD *)(*(_QWORD *)v7 + 64LL))) != 0 )
      {
        if ( *(_DWORD *)(v18 + 24) )
        {
          *(_QWORD *)(v18 + 32) = singleItemWithUseItemButton;
          sub_B16F98(v18 + 32, singleItemWithUseItemButton);
          v23 = v18;
          p_doubleItems = &v23;
          goto LABEL_29;
        }
        goto LABEL_32;
      }
LABEL_33:
      sub_B170F4();
      sub_B170A0();
    }
LABEL_31:
    sub_B170D4();
  }
  reqDoubleParent = this->fields.reqDoubleParent;
  if ( !reqDoubleParent )
    goto LABEL_31;
  activeSelf = UnityEngine_GameObject__get_activeSelf(reqDoubleParent, 0LL);
  if ( activeSelf )
  {
    p_doubleItems = (__int64 *)&this->fields.doubleItems;
    goto LABEL_29;
  }
  reqDoubleParentWithUseItemButton = this->fields.reqDoubleParentWithUseItemButton;
  if ( !reqDoubleParentWithUseItemButton )
    goto LABEL_31;
  activeSelf = UnityEngine_GameObject__get_activeSelf(reqDoubleParentWithUseItemButton, 0LL);
  if ( activeSelf )
  {
    p_doubleItems = (__int64 *)&this->fields.doubleItemsWithUseItemButton;
    goto LABEL_29;
  }
  reqTripleParent = this->fields.reqTripleParent;
  if ( !reqTripleParent )
    goto LABEL_31;
  activeSelf = UnityEngine_GameObject__get_activeSelf(reqTripleParent, 0LL);
  if ( activeSelf )
  {
    p_doubleItems = (__int64 *)&this->fields.tripleItems;
    goto LABEL_29;
  }
  reqTripleParentWithUseItemButton = this->fields.reqTripleParentWithUseItemButton;
  if ( !reqTripleParentWithUseItemButton )
    goto LABEL_31;
  activeSelf = UnityEngine_GameObject__get_activeSelf(reqTripleParentWithUseItemButton, 0LL);
  if ( !activeSelf )
    return;
  p_doubleItems = (__int64 *)&this->fields.tripleItemsWithUseItemButton;
LABEL_29:
  BattleRetryConfirmComponent__SetCondensedScalePossessionAmount(
    (BattleRetryConfirmComponent_o *)activeSelf,
    items,
    (RetryConfirmItem_array **)p_doubleItems,
    v13);
}


void __fastcall BattleRetryConfirmComponent__SetCostValueText(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_o *costPoint,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *items,
        const MethodInfo *method)
{
  __int64 v7; // x8
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int128 v11; // q0
  __int128 v12; // q1
  __int128 v13; // q1
  __int64 v14; // x8
  __int128 *v15; // x1
  BattleRetryConfirmComponent_RetryConfirmItemStr_o *v16; // x2
  __int128 v17; // q0
  __int128 v18; // q1
  __int128 v19; // q0
  __int128 v20; // q1
  __int128 v21; // q0
  __int128 v22; // q1
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v23; // [xsp+0h] [xbp-170h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v24; // [xsp+30h] [xbp-140h] BYREF
  __int128 v25[2]; // [xsp+60h] [xbp-110h] BYREF
  __int64 v26; // [xsp+80h] [xbp-F0h]
  __int128 v27[2]; // [xsp+90h] [xbp-E0h] BYREF
  __int64 v28; // [xsp+B0h] [xbp-C0h]
  __int128 v29; // [xsp+C0h] [xbp-B0h]
  __int128 v30; // [xsp+D0h] [xbp-A0h]
  __int64 v31; // [xsp+E0h] [xbp-90h]
  __int64 v32[5]; // [xsp+E8h] [xbp-88h] BYREF
  __int128 v33[2]; // [xsp+110h] [xbp-60h] BYREF
  __int64 v34; // [xsp+130h] [xbp-40h]

  if ( (byte_40F74DC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, costPoint);
    byte_40F74DC = 1;
  }
  if ( !items )
    sub_B170D4();
  v7 = *(_QWORD *)&items->max_length;
  if ( !v7 )
  {
    v17 = *(_OWORD *)&costPoint->fields.useName;
    v18 = *(_OWORD *)&costPoint->fields.possessionName;
    v15 = v33;
    v16 = (BattleRetryConfirmComponent_RetryConfirmItemStr_o *)v32;
    v34 = *(_QWORD *)&costPoint->fields.isIndividualLimit;
    v33[0] = v17;
    v33[1] = v18;
    memset(v32, 0, sizeof(v32));
LABEL_10:
    BattleRetryConfirmComponent__SetCostValueTextSingle(
      this,
      (BattleRetryConfirmComponent_RetryConfirmItemStr_o *)v15,
      v16,
      method);
    return;
  }
  if ( (_DWORD)v7 == 1 )
  {
    v8 = System_String__op_Equality(costPoint->fields.useName, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( v8 )
    {
      v12 = *(_OWORD *)&costPoint->fields.useName;
      v11 = *(_OWORD *)&costPoint->fields.possessionName;
      v31 = *(_QWORD *)&costPoint->fields.isIndividualLimit;
      v29 = v12;
      v30 = v11;
      if ( !items->max_length )
      {
        sub_B17100(v8, v9, v10);
        sub_B170A0();
      }
      v13 = *(_OWORD *)&items->m_Items[0].fields.possessionName;
      v14 = *(_QWORD *)&items->m_Items[0].fields.isIndividualLimit;
      v25[0] = *(_OWORD *)&items->m_Items[0].fields.useName;
      v25[1] = v13;
      v26 = v14;
      v28 = v31;
      v27[0] = v29;
      v27[1] = v30;
      v15 = v27;
      v16 = (BattleRetryConfirmComponent_RetryConfirmItemStr_o *)v25;
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
      BattleRetryConfirmComponent__SetCostValueTextDouble(this, &v24, items, method);
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
  BattleRetryConfirmComponent__SetCostValueTextTriple(this, &v23, items, method);
}


void __fastcall BattleRetryConfirmComponent__SetCostValueTextDouble(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_o *costPoint,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *items,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *reqSingleParent; // x0
  UnityEngine_GameObject_o *reqSingleParentWithUseItemButton; // x0
  UnityEngine_GameObject_o *reqDoubleParent; // x0
  UnityEngine_GameObject_o *reqDoubleParentWithUseItemButton; // x0
  UnityEngine_GameObject_o *reqTripleParent; // x0
  UnityEngine_GameObject_o *reqTripleParentWithUseItemButton; // x0
  UILabel_o *mainText; // x22
  __int128 v14; // q0
  __int128 v15; // q1
  BattleRetryConfirmComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  __int128 v18; // q0
  __int128 v19; // q1
  BattleRetryConfirmComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  BattleRetryConfirmComponent_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  struct RetryConfirmItem_array *doubleItems; // x8
  unsigned __int64 v27; // x21
  BattleRetryConfirmComponent_RetryConfirmItemStr_o *m_Items; // x22
  __int64 v29; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v31; // x10
  __int128 v32; // q0
  __int128 v33; // q1
  const MethodInfo *v34; // x3
  __int128 v35; // q0
  __int128 v36; // q1
  struct RetryConfirmItem_array *doubleItemsWithUseItemButton; // x8
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v38; // [xsp+0h] [xbp-130h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v39; // [xsp+30h] [xbp-100h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v40; // [xsp+60h] [xbp-D0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v41; // [xsp+90h] [xbp-A0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v42; // [xsp+C0h] [xbp-70h] BYREF

  if ( (byte_40F74DA & 1) == 0 )
  {
    sub_B16FFC(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_40F74DA = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParentWithUseItemButton = this->fields.reqSingleParentWithUseItemButton;
  if ( !reqSingleParentWithUseItemButton )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqSingleParentWithUseItemButton, 0, 0LL);
  reqDoubleParent = this->fields.reqDoubleParent;
  if ( !reqDoubleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqDoubleParent, 1, 0LL);
  reqDoubleParentWithUseItemButton = this->fields.reqDoubleParentWithUseItemButton;
  if ( !reqDoubleParentWithUseItemButton )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqDoubleParentWithUseItemButton, 0, 0LL);
  reqTripleParent = this->fields.reqTripleParent;
  if ( !reqTripleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqTripleParent, 0, 0LL);
  reqTripleParentWithUseItemButton = this->fields.reqTripleParentWithUseItemButton;
  if ( !reqTripleParentWithUseItemButton )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqTripleParentWithUseItemButton, 0, 0LL);
  mainText = this->fields.mainText;
  if ( (BYTE3(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
  }
  if ( !mainText )
    goto LABEL_24;
  UILabel__set_fontSize(mainText, BattleRetryConfirmComponent_TypeInfo->static_fields->MAIN_TEXT_DEFAULT_FONT_SIZE, 0LL);
  v15 = *(_OWORD *)&costPoint->fields.useName;
  v14 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v42.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v42.fields.useName = v15;
  *(_OWORD *)&v42.fields.possessionName = v14;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v16, &v42, &this->fields.doubleAp, v17);
  v19 = *(_OWORD *)&costPoint->fields.useName;
  v18 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v41.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v41.fields.useName = v19;
  *(_OWORD *)&v41.fields.possessionName = v18;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v20, &v41, &this->fields.doubleApWithUseItemButton, v21);
  doubleItems = this->fields.doubleItems;
  if ( !doubleItems )
LABEL_24:
    sub_B170D4();
  v27 = 0LL;
  m_Items = items->m_Items;
  v29 = 32LL;
  while ( 1 )
  {
    max_length = doubleItems->max_length;
    if ( (__int64)v27 >= (int)max_length )
      break;
    if ( !items )
      goto LABEL_24;
    v31 = items->max_length;
    if ( (__int64)v27 >= (int)v31 )
      break;
    if ( v27 >= v31 )
      goto LABEL_26;
    v33 = *(_OWORD *)&m_Items->fields.useName;
    v32 = *(_OWORD *)&m_Items->fields.possessionName;
    *(_QWORD *)&v40.fields.isIndividualLimit = *(_QWORD *)&m_Items->fields.isIndividualLimit;
    *(_OWORD *)&v40.fields.useName = v33;
    *(_OWORD *)&v40.fields.possessionName = v32;
    if ( v27 >= max_length )
      goto LABEL_26;
    BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
      v22,
      &v40,
      (RetryConfirmItem_o **)((char *)doubleItems + v29),
      v25);
    if ( v27 >= items->max_length )
      goto LABEL_26;
    v36 = *(_OWORD *)&m_Items->fields.useName;
    v35 = *(_OWORD *)&m_Items->fields.possessionName;
    *(_QWORD *)&v39.fields.isIndividualLimit = *(_QWORD *)&m_Items->fields.isIndividualLimit;
    *(_OWORD *)&v39.fields.useName = v36;
    *(_OWORD *)&v39.fields.possessionName = v35;
    doubleItemsWithUseItemButton = this->fields.doubleItemsWithUseItemButton;
    if ( !doubleItemsWithUseItemButton )
      goto LABEL_24;
    v38 = v39;
    if ( v27 >= doubleItemsWithUseItemButton->max_length )
    {
LABEL_26:
      sub_B17100(v22, v23, v24);
      sub_B170A0();
    }
    ++v27;
    ++m_Items;
    BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
      v22,
      &v38,
      (RetryConfirmItem_o **)((char *)doubleItemsWithUseItemButton + v29),
      v34);
    doubleItems = this->fields.doubleItems;
    v29 += 8LL;
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
  UnityEngine_GameObject_o *reqSingleParentWithUseItemButton; // x0
  UnityEngine_GameObject_o *reqDoubleParent; // x0
  UnityEngine_GameObject_o *reqDoubleParentWithUseItemButton; // x0
  UnityEngine_GameObject_o *reqTripleParent; // x0
  UnityEngine_GameObject_o *reqTripleParentWithUseItemButton; // x0
  UILabel_o *mainText; // x22
  __int128 v14; // q0
  __int128 v15; // q1
  BattleRetryConfirmComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  __int128 v18; // q0
  __int128 v19; // q1
  BattleRetryConfirmComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  __int128 v22; // q0
  __int128 v23; // q1
  BattleRetryConfirmComponent_o *v24; // x0
  const MethodInfo *v25; // x3
  __int128 v26; // q0
  __int128 v27; // q1
  BattleRetryConfirmComponent_o *v28; // x0
  const MethodInfo *v29; // x3
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v30; // [xsp+0h] [xbp-F0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v31; // [xsp+30h] [xbp-C0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v32; // [xsp+60h] [xbp-90h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v33; // [xsp+90h] [xbp-60h] BYREF

  if ( (byte_40F74D9 & 1) == 0 )
  {
    sub_B16FFC(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_40F74D9 = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(reqSingleParent, 1, 0LL);
  reqSingleParentWithUseItemButton = this->fields.reqSingleParentWithUseItemButton;
  if ( !reqSingleParentWithUseItemButton )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(reqSingleParentWithUseItemButton, 0, 0LL);
  reqDoubleParent = this->fields.reqDoubleParent;
  if ( !reqDoubleParent )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(reqDoubleParent, 0, 0LL);
  reqDoubleParentWithUseItemButton = this->fields.reqDoubleParentWithUseItemButton;
  if ( !reqDoubleParentWithUseItemButton )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(reqDoubleParentWithUseItemButton, 0, 0LL);
  reqTripleParent = this->fields.reqTripleParent;
  if ( !reqTripleParent )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(reqTripleParent, 0, 0LL);
  reqTripleParentWithUseItemButton = this->fields.reqTripleParentWithUseItemButton;
  if ( !reqTripleParentWithUseItemButton )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(reqTripleParentWithUseItemButton, 0, 0LL);
  mainText = this->fields.mainText;
  if ( (BYTE3(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
  }
  if ( !mainText )
LABEL_14:
    sub_B170D4();
  UILabel__set_fontSize(mainText, BattleRetryConfirmComponent_TypeInfo->static_fields->MAIN_TEXT_DEFAULT_FONT_SIZE, 0LL);
  v15 = *(_OWORD *)&costPoint->fields.useName;
  v14 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v33.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v33.fields.useName = v15;
  *(_OWORD *)&v33.fields.possessionName = v14;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v16, &v33, &this->fields.singleAp, v17);
  v19 = *(_OWORD *)&costPoint->fields.useName;
  v18 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v32.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v32.fields.useName = v19;
  *(_OWORD *)&v32.fields.possessionName = v18;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v20, &v32, &this->fields.singleApWithUseItemButton, v21);
  v23 = *(_OWORD *)&item->fields.useName;
  v22 = *(_OWORD *)&item->fields.possessionName;
  *(_QWORD *)&v31.fields.isIndividualLimit = *(_QWORD *)&item->fields.isIndividualLimit;
  *(_OWORD *)&v31.fields.useName = v23;
  *(_OWORD *)&v31.fields.possessionName = v22;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v24, &v31, &this->fields.singleItem, v25);
  v27 = *(_OWORD *)&item->fields.useName;
  v26 = *(_OWORD *)&item->fields.possessionName;
  *(_QWORD *)&v30.fields.isIndividualLimit = *(_QWORD *)&item->fields.isIndividualLimit;
  *(_OWORD *)&v30.fields.useName = v27;
  *(_OWORD *)&v30.fields.possessionName = v26;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v28, &v30, &this->fields.singleItemWithUseItemButton, v29);
}


void __fastcall BattleRetryConfirmComponent__SetCostValueTextTriple(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_o *costPoint,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *items,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *reqSingleParent; // x0
  UnityEngine_GameObject_o *reqSingleParentWithUseItemButton; // x0
  UnityEngine_GameObject_o *reqDoubleParent; // x0
  UnityEngine_GameObject_o *reqDoubleParentWithUseItemButton; // x0
  UnityEngine_GameObject_o *reqTripleParent; // x0
  UnityEngine_GameObject_o *reqTripleParentWithUseItemButton; // x0
  UILabel_o *mainText; // x22
  __int128 v14; // q0
  __int128 v15; // q1
  BattleRetryConfirmComponent_o *v16; // x0
  const MethodInfo *v17; // x3
  __int128 v18; // q0
  __int128 v19; // q1
  BattleRetryConfirmComponent_o *v20; // x0
  const MethodInfo *v21; // x3
  BattleRetryConfirmComponent_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  struct RetryConfirmItem_array *tripleItems; // x8
  unsigned __int64 v27; // x21
  BattleRetryConfirmComponent_RetryConfirmItemStr_o *m_Items; // x22
  __int64 v29; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v31; // x10
  __int128 v32; // q0
  __int128 v33; // q1
  const MethodInfo *v34; // x3
  __int128 v35; // q0
  __int128 v36; // q1
  struct RetryConfirmItem_array *tripleItemsWithUseItemButton; // x8
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v38; // [xsp+0h] [xbp-130h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v39; // [xsp+30h] [xbp-100h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v40; // [xsp+60h] [xbp-D0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v41; // [xsp+90h] [xbp-A0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v42; // [xsp+C0h] [xbp-70h] BYREF

  if ( (byte_40F74DB & 1) == 0 )
  {
    sub_B16FFC(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_40F74DB = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqSingleParent, 0, 0LL);
  reqSingleParentWithUseItemButton = this->fields.reqSingleParentWithUseItemButton;
  if ( !reqSingleParentWithUseItemButton )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqSingleParentWithUseItemButton, 0, 0LL);
  reqDoubleParent = this->fields.reqDoubleParent;
  if ( !reqDoubleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqDoubleParent, 0, 0LL);
  reqDoubleParentWithUseItemButton = this->fields.reqDoubleParentWithUseItemButton;
  if ( !reqDoubleParentWithUseItemButton )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqDoubleParentWithUseItemButton, 0, 0LL);
  reqTripleParent = this->fields.reqTripleParent;
  if ( !reqTripleParent )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqTripleParent, 1, 0LL);
  reqTripleParentWithUseItemButton = this->fields.reqTripleParentWithUseItemButton;
  if ( !reqTripleParentWithUseItemButton )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(reqTripleParentWithUseItemButton, 0, 0LL);
  mainText = this->fields.mainText;
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
  v15 = *(_OWORD *)&costPoint->fields.useName;
  v14 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v42.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v42.fields.useName = v15;
  *(_OWORD *)&v42.fields.possessionName = v14;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v16, &v42, &this->fields.tripleAp, v17);
  v19 = *(_OWORD *)&costPoint->fields.useName;
  v18 = *(_OWORD *)&costPoint->fields.possessionName;
  *(_QWORD *)&v41.fields.isIndividualLimit = *(_QWORD *)&costPoint->fields.isIndividualLimit;
  *(_OWORD *)&v41.fields.useName = v19;
  *(_OWORD *)&v41.fields.possessionName = v18;
  BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(v20, &v41, &this->fields.tripleApWithUseItemButton, v21);
  tripleItems = this->fields.tripleItems;
  if ( !tripleItems )
LABEL_24:
    sub_B170D4();
  v27 = 0LL;
  m_Items = items->m_Items;
  v29 = 32LL;
  while ( 1 )
  {
    max_length = tripleItems->max_length;
    if ( (__int64)v27 >= (int)max_length )
      break;
    if ( !items )
      goto LABEL_24;
    v31 = items->max_length;
    if ( (__int64)v27 >= (int)v31 )
      break;
    if ( v27 >= v31 )
      goto LABEL_26;
    v33 = *(_OWORD *)&m_Items->fields.useName;
    v32 = *(_OWORD *)&m_Items->fields.possessionName;
    *(_QWORD *)&v40.fields.isIndividualLimit = *(_QWORD *)&m_Items->fields.isIndividualLimit;
    *(_OWORD *)&v40.fields.useName = v33;
    *(_OWORD *)&v40.fields.possessionName = v32;
    if ( v27 >= max_length )
      goto LABEL_26;
    BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
      v22,
      &v40,
      (RetryConfirmItem_o **)((char *)tripleItems + v29),
      v25);
    if ( v27 >= items->max_length )
      goto LABEL_26;
    v36 = *(_OWORD *)&m_Items->fields.useName;
    v35 = *(_OWORD *)&m_Items->fields.possessionName;
    *(_QWORD *)&v39.fields.isIndividualLimit = *(_QWORD *)&m_Items->fields.isIndividualLimit;
    *(_OWORD *)&v39.fields.useName = v36;
    *(_OWORD *)&v39.fields.possessionName = v35;
    tripleItemsWithUseItemButton = this->fields.tripleItemsWithUseItemButton;
    if ( !tripleItemsWithUseItemButton )
      goto LABEL_24;
    v38 = v39;
    if ( v27 >= tripleItemsWithUseItemButton->max_length )
    {
LABEL_26:
      sub_B17100(v22, v23, v24);
      sub_B170A0();
    }
    ++v27;
    ++m_Items;
    BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
      v22,
      &v38,
      (RetryConfirmItem_o **)((char *)tripleItemsWithUseItemButton + v29),
      v34);
    tripleItems = this->fields.tripleItems;
    v29 += 8LL;
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
  PartyOrganizationUtility_o *v8; // x0
  bool IsAvailableFriendshipUpItem; // w0
  bool v10; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  FriendshipUpItemUseItem_o *v12; // x0
  PartyOrganizationUtility_c *v13; // x0
  UnityEngine_GameObject_o *reqSingleParent; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x0
  bool activeSelf; // w0
  UnityEngine_GameObject_o *reqSingleParentWithUseItemButton; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x20
  UnityEngine_GameObject_o *v24; // x0
  bool v25; // w0
  UILabel_o *mainText; // x19
  struct BattleRetryConfirmComponent_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *reqDoubleParent; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x20
  UnityEngine_GameObject_o *v33; // x0
  bool v34; // w0
  UnityEngine_GameObject_o *reqDoubleParentWithUseItemButton; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x20
  UnityEngine_GameObject_o *v38; // x0
  bool v39; // w0
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  bool v42; // w0
  BattleRetryConfirmComponent_c *v43; // x8
  UnityEngine_GameObject_o *reqTripleParent; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x20
  UnityEngine_GameObject_o *v47; // x0
  bool v48; // w0
  UnityEngine_GameObject_o *reqTripleParentWithUseItemButton; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x20
  UnityEngine_GameObject_o *v52; // x0
  bool v53; // w0
  UnityEngine_Component_o *v54; // x0
  UnityEngine_GameObject_o *v55; // x0
  bool v56; // w0
  BattleRetryConfirmComponent_c *v57; // x8

  if ( (byte_40F74E3 & 1) == 0 )
  {
    sub_B16FFC(&BattleRetryConfirmComponent_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&PartyOrganizationUtility_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    sub_B16FFC(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v6);
    byte_40F74E3 = 1;
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
    v8 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( v8 )
    {
      IsAvailableFriendshipUpItem = PartyOrganizationUtility__IsAvailableFriendshipUpItem(v8, 0LL);
      if ( this->fields.friendshipUpItemUseButton )
      {
        v10 = IsAvailableFriendshipUpItem;
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                       0LL);
        if ( gameObject )
        {
          if ( v10 )
          {
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
            v12 = this->fields.friendshipUpItemUseButton;
            if ( !v12 )
              goto LABEL_75;
            FriendshipUpItemUseItem__SetInit(v12, 0LL);
          }
          else
          {
            UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
            v13 = PartyOrganizationUtility_TypeInfo;
            if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
              v13 = PartyOrganizationUtility_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v13->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
          }
          reqSingleParent = this->fields.reqSingleParent;
          if ( reqSingleParent )
          {
            v15 = UnityEngine_GameObject__get_gameObject(reqSingleParent, 0LL);
            if ( v15 )
            {
              if ( UnityEngine_GameObject__get_activeSelf(v15, 0LL) )
              {
                v16 = this->fields.reqSingleParent;
                if ( v16 )
                {
                  v17 = UnityEngine_GameObject__get_gameObject(v16, 0LL);
                  if ( this->fields.friendshipUpItemUseButton )
                  {
                    v18 = v17;
                    v19 = UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                            0LL);
                    if ( v19 )
                    {
                      activeSelf = UnityEngine_GameObject__get_activeSelf(v19, 0LL);
                      if ( v18 )
                      {
                        UnityEngine_GameObject__SetActive(v18, !activeSelf, 0LL);
                        reqSingleParentWithUseItemButton = this->fields.reqSingleParentWithUseItemButton;
                        if ( reqSingleParentWithUseItemButton )
                        {
                          v22 = UnityEngine_GameObject__get_gameObject(reqSingleParentWithUseItemButton, 0LL);
                          if ( this->fields.friendshipUpItemUseButton )
                          {
                            v23 = v22;
                            v24 = UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                    0LL);
                            if ( v24 )
                            {
                              v25 = UnityEngine_GameObject__get_activeSelf(v24, 0LL);
                              if ( v23 )
                              {
                                UnityEngine_GameObject__SetActive(v23, v25, 0LL);
                                mainText = this->fields.mainText;
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
                reqDoubleParent = this->fields.reqDoubleParent;
                if ( reqDoubleParent )
                {
                  v29 = UnityEngine_GameObject__get_gameObject(reqDoubleParent, 0LL);
                  if ( v29 )
                  {
                    if ( UnityEngine_GameObject__get_activeSelf(v29, 0LL) )
                    {
                      v30 = this->fields.reqDoubleParent;
                      if ( v30 )
                      {
                        v31 = UnityEngine_GameObject__get_gameObject(v30, 0LL);
                        if ( this->fields.friendshipUpItemUseButton )
                        {
                          v32 = v31;
                          v33 = UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                  0LL);
                          if ( v33 )
                          {
                            v34 = UnityEngine_GameObject__get_activeSelf(v33, 0LL);
                            if ( v32 )
                            {
                              UnityEngine_GameObject__SetActive(v32, !v34, 0LL);
                              reqDoubleParentWithUseItemButton = this->fields.reqDoubleParentWithUseItemButton;
                              if ( reqDoubleParentWithUseItemButton )
                              {
                                v36 = UnityEngine_GameObject__get_gameObject(reqDoubleParentWithUseItemButton, 0LL);
                                if ( this->fields.friendshipUpItemUseButton )
                                {
                                  v37 = v36;
                                  v38 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                          0LL);
                                  if ( v38 )
                                  {
                                    v39 = UnityEngine_GameObject__get_activeSelf(v38, 0LL);
                                    if ( v37 )
                                    {
                                      UnityEngine_GameObject__SetActive(v37, v39, 0LL);
                                      v40 = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton;
                                      if ( v40 )
                                      {
                                        mainText = this->fields.mainText;
                                        v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
                                        if ( v41 )
                                        {
                                          v42 = UnityEngine_GameObject__get_activeSelf(v41, 0LL);
                                          v43 = BattleRetryConfirmComponent_TypeInfo;
                                          if ( v42 )
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v43 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)&v43->static_fields->MAIN_TEXT_FONT_SIZE_FOR_DOUBLE_ITEM_AND_BUTTON;
                                            if ( mainText )
                                              goto LABEL_80;
                                          }
                                          else
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v43 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = v43->static_fields;
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
                      reqTripleParent = this->fields.reqTripleParent;
                      if ( reqTripleParent )
                      {
                        v45 = UnityEngine_GameObject__get_gameObject(reqTripleParent, 0LL);
                        if ( this->fields.friendshipUpItemUseButton )
                        {
                          v46 = v45;
                          v47 = UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                  0LL);
                          if ( v47 )
                          {
                            v48 = UnityEngine_GameObject__get_activeSelf(v47, 0LL);
                            if ( v46 )
                            {
                              UnityEngine_GameObject__SetActive(v46, !v48, 0LL);
                              reqTripleParentWithUseItemButton = this->fields.reqTripleParentWithUseItemButton;
                              if ( reqTripleParentWithUseItemButton )
                              {
                                v50 = UnityEngine_GameObject__get_gameObject(reqTripleParentWithUseItemButton, 0LL);
                                if ( this->fields.friendshipUpItemUseButton )
                                {
                                  v51 = v50;
                                  v52 = UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                          0LL);
                                  if ( v52 )
                                  {
                                    v53 = UnityEngine_GameObject__get_activeSelf(v52, 0LL);
                                    if ( v51 )
                                    {
                                      UnityEngine_GameObject__SetActive(v51, v53, 0LL);
                                      v54 = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton;
                                      if ( v54 )
                                      {
                                        mainText = this->fields.mainText;
                                        v55 = UnityEngine_Component__get_gameObject(v54, 0LL);
                                        if ( v55 )
                                        {
                                          v56 = UnityEngine_GameObject__get_activeSelf(v55, 0LL);
                                          v57 = BattleRetryConfirmComponent_TypeInfo;
                                          if ( v56 )
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v57 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)&v57->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM_AND_BUTTON;
                                            if ( mainText )
                                              goto LABEL_80;
                                          }
                                          else
                                          {
                                            if ( (WORD1(BattleRetryConfirmComponent_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                                              && !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            {
                                              j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                              v57 = BattleRetryConfirmComponent_TypeInfo;
                                            }
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)&v57->static_fields->MAIN_TEXT_FONT_SIZE_FOR_THREE_ITEM;
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
    sub_B170D4();
  }
}


void __fastcall BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_o *value,
        RetryConfirmItem_o **item,
        const MethodInfo *method)
{
  UILabel_o *useName; // x0
  UILabel_o *useAmount; // x0
  UILabel_o *possessionName; // x0
  UILabel_o *possessionAmount; // x0

  if ( !*item
    || (useName = (*item)->fields.useName) == 0LL
    || (UILabel__set_text(useName, value->fields.useName, 0LL), !*item)
    || (useAmount = (*item)->fields.useAmount) == 0LL
    || (UILabel__set_text(useAmount, value->fields.useAmount, 0LL), !*item)
    || (possessionName = (*item)->fields.possessionName) == 0LL
    || (UILabel__set_text(possessionName, value->fields.possessionName, 0LL), !*item)
    || (possessionAmount = (*item)->fields.possessionAmount) == 0LL )
  {
    sub_B170D4();
  }
  UILabel__set_text(possessionAmount, value->fields.possessionAmount, 0LL);
}


bool __fastcall BattleRetryConfirmComponent__SetValues(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  BattleRetryConfirmComponent___c__DisplayClass37_0_o *v46; // x25
  struct UserGameEntity_o *SelfUserGame; // x0
  WebViewManager_o *Instance; // x0
  __int64 v49; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x19
  char *v51; // x22
  TerminalPramsManager_c *v52; // x0
  QuestEntity_o *Entity; // x0
  QuestEntity_o *v54; // x21
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v60; // x19
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_Text_StringBuilder_o *v65; // x26
  Il2CppObject *v66; // x28
  System_String_o *v67; // x0
  int32_t actMax; // w27
  System_String_o *v69; // x0
  __int64 v70; // x1
  BalanceConfig_c *v71; // x0
  WebViewManager_o *v72; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v73; // x28
  WebViewManager_o *v74; // x0
  UserItemMaster_o *v75; // x22
  int32_t v76; // w23
  int64_t UserId; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v81; // x8
  int64_t v82; // x20
  ItemEntity_o *v83; // x25
  int32_t qp; // w24
  struct System_Int32_array *nums; // x8
  System_String_o *v86; // x0
  System_String_o *v87; // x0
  struct System_Int32_array *v88; // x8
  System_String_o *v89; // x20
  Il2CppObject *v90; // x0
  System_String_o *v91; // x0
  int32_t MaxNum; // w20
  System_String_o *v93; // x19
  Il2CppObject *v94; // x24
  Il2CppObject *v95; // x0
  struct System_String_o *v96; // x0
  System_String_o *v97; // x19
  Il2CppObject *v98; // x0
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v99; // x0
  System_String_o *v100; // x19
  Il2CppObject *v101; // x0
  System_String_o *v102; // x0
  System_String_o *v103; // x19
  System_String_o *v104; // x0
  System_String_o *v105; // x19
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  CommonUI_o *v110; // x20
  BattleRetryConfirmComponent___c_c *v111; // x8
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__37_1; // x22
  System_String_o *v114; // x21
  Il2CppObject *v115; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v116; // x0
  System_String_o *v117; // x0
  WebViewManager_o *v118; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v119; // x28
  WebViewManager_o *v120; // x0
  UserItemMaster_o *v121; // x22
  int32_t v122; // w23
  struct System_Int32_array *v123; // x8
  struct System_Int32_array *v124; // x8
  int64_t v125; // x20
  ItemEntity_o *v126; // x25
  int32_t v127; // w24
  struct System_Int32_array *v128; // x8
  System_String_o *v129; // x0
  System_String_o *v130; // x0
  struct System_Int32_array *v131; // x8
  System_String_o *v132; // x20
  Il2CppObject *v133; // x0
  System_String_o *v134; // x0
  int32_t v135; // w20
  System_String_o *v136; // x19
  Il2CppObject *v137; // x24
  Il2CppObject *v138; // x0
  struct System_String_o *v139; // x0
  System_String_o *v140; // x19
  Il2CppObject *v141; // x0
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v142; // x0
  System_String_o *v143; // x19
  Il2CppObject *v144; // x0
  System_String_o *v145; // x0
  System_String_o *v146; // x19
  System_String_o *v147; // x0
  System_String_o *v148; // x19
  __int64 v149; // x1
  __int64 v150; // x2
  __int64 v151; // x3
  __int64 v152; // x4
  CommonUI_o *v153; // x20
  BattleRetryConfirmComponent___c_c *v154; // x8
  struct BattleRetryConfirmComponent___c_StaticFields *v155; // x9
  System_Action_o *_9__37_2; // x22
  System_String_o *v157; // x21
  Il2CppObject *v158; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v159; // x0
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x3
  __int64 v164; // x4
  MapControl_QuestInfo_o *v165; // x19
  int32_t questId; // w20
  bool IsQuestClear_25438860; // w0
  __int64 v168; // x1
  bool v169; // w20
  TerminalPramsManager_c *v170; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t CampaignCostCalcValue; // w20
  QuestEntity_o *Mine; // x0
  QuestEntity_o *PhaseDetailedEntity; // x0
  int32_t ActConsume; // w0
  int32_t v176; // w22
  int32_t v177; // w23
  System_String_o *CostValueColor; // x19
  Il2CppObject *v179; // x0
  Il2CppObject *v180; // x20
  System_String_o *v181; // x0
  System_String_o *v182; // x19
  Il2CppObject *v183; // x0
  Il2CppObject *v184; // x19
  System_String_o *v185; // x0
  System_String_o *v186; // x0
  System_String_o *v187; // x0
  System_String_o *v188; // x20
  Il2CppObject *v189; // x0
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v190; // x0
  const MethodInfo *v191; // x3
  const MethodInfo *v192; // x1
  const MethodInfo *v193; // x1
  __int64 v194; // x1
  __int64 v195; // x2
  __int64 v196; // x3
  __int64 v197; // x4
  System_Action_o *v198; // x19
  BattleRetryConfirmComponent_o *v199; // x0
  const MethodInfo *v200; // x2
  System_Collections_IEnumerator_o *v201; // x0
  int32_t v202; // [xsp+34h] [xbp-1BCh]
  Il2CppObject *v203; // [xsp+38h] [xbp-1B8h]
  Il2CppObject *v204; // [xsp+38h] [xbp-1B8h]
  BattleRetryConfirmComponent___c__DisplayClass37_0_o *v205; // [xsp+48h] [xbp-1A8h]
  BattleRetryConfirmComponent___c__DisplayClass37_0_o *v206; // [xsp+48h] [xbp-1A8h]
  BattleRetryConfirmComponent_o *v207; // [xsp+50h] [xbp-1A0h]
  BattleRetryConfirmComponent_o *v208; // [xsp+50h] [xbp-1A0h]
  UserGameEntity_o **p_userGameEntity; // [xsp+70h] [xbp-180h]
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o **p_rciItems; // [xsp+78h] [xbp-178h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v211; // [xsp+80h] [xbp-170h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v212; // [xsp+B0h] [xbp-140h] BYREF
  int32_t fixedVal; // [xsp+DCh] [xbp-114h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v214; // [xsp+E0h] [xbp-110h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v215; // [xsp+108h] [xbp-E8h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v216; // [xsp+130h] [xbp-C0h] BYREF
  int32_t Act; // [xsp+15Ch] [xbp-94h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v218; // [xsp+160h] [xbp-90h] BYREF

  if ( (byte_40F74D5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&CondType_TypeInfo, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__, v15);
    sub_B16FFC(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo, v16);
    sub_B16FFC(&LocalizationManager_TypeInfo, v17);
    sub_B16FFC(&NetworkManager_TypeInfo, v18);
    sub_B16FFC(&MapControl_QuestInfo_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v22);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v23);
    sub_B16FFC(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, v24);
    sub_B16FFC(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, v25);
    sub_B16FFC(&Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__, v26);
    sub_B16FFC(&BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo, v27);
    sub_B16FFC(&BattleRetryConfirmComponent___c_TypeInfo, v28);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v29);
    sub_B16FFC(&StringLiteral_2499/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, v30);
    sub_B16FFC(&StringLiteral_3349/*"CONSUME_TYPE_AP"*/, v31);
    sub_B16FFC(&StringLiteral_10909/*"QUEST_ITEM_COST_OVER"*/, v32);
    sub_B16FFC(&StringLiteral_2497/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, v33);
    sub_B16FFC(&StringLiteral_2498/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, v34);
    sub_B16FFC(&StringLiteral_1729/*"AP_OVER_MAX_COLOR"*/, v35);
    sub_B16FFC(&StringLiteral_3350/*"CONSUME_TYPE_RP"*/, v36);
    sub_B16FFC(&StringLiteral_2503/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, v37);
    sub_B16FFC(&StringLiteral_2502/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, v38);
    sub_B16FFC(&StringLiteral_27/*"\n\n"*/, v39);
    sub_B16FFC(&StringLiteral_2500/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v40);
    sub_B16FFC(&StringLiteral_2494/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, v41);
    sub_B16FFC(&StringLiteral_1/*""*/, v42);
    sub_B16FFC(&StringLiteral_2501/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, v43);
    sub_B16FFC(&StringLiteral_2495/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, v44);
    sub_B16FFC(&StringLiteral_2496/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, v45);
    byte_40F74D5 = 1;
  }
  Act = 0;
  memset(&v216, 0, sizeof(v216));
  memset(&v215, 0, sizeof(v215));
  memset(&v214, 0, sizeof(v214));
  fixedVal = 0;
  v46 = (BattleRetryConfirmComponent___c__DisplayClass37_0_o *)sub_B170CC(
                                                                 BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3,
                                                                 v4);
  BattleRetryConfirmComponent___c__DisplayClass37_0___ctor(v46, 0LL);
  if ( !v46 )
    goto LABEL_196;
  v46->fields.__4__this = this;
  sub_B16F98(&v46->fields, this);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_userGameEntity = &this->fields.userGameEntity;
  sub_B16F98(&this->fields.userGameEntity, SelfUserGame);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_196;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  v51 = &byte_40F6000;
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v49);
    byte_40F6057 = 1;
  }
  v52 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v52 = TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_196;
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              v52->static_fields->_QuestId_k__BackingField,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_196;
  v54 = Entity;
  Act = 0;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity(Entity, 0LL);
  memset(&v216, 0, sizeof(v216));
  v60 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_B170CC(
                                                                                                System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo,
                                                                                                v56,
                                                                                                v57,
                                                                                                v58,
                                                                                                v59);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v60,
    (const MethodInfo_2E667A8 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  v46->fields.rciItems = v60;
  p_rciItems = &v46->fields.rciItems;
  sub_B16F98(&v46->fields.rciItems, v60);
  v65 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v61, v62, v63, v64);
  System_Text_StringBuilder___ctor(v65, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v66 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3349/*"CONSUME_TYPE_AP"*/, 0LL);
  switch ( QuestEntity__GetConsumeType(v54, 0LL) )
  {
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v67 = LocalizationManager__Get((System_String_o *)StringLiteral_3349/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v66 = (Il2CppObject *)v67;
      Act = UserGameEntity__getAct(*p_userGameEntity, 0LL);
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
      v69 = LocalizationManager__Get((System_String_o *)StringLiteral_3350/*"CONSUME_TYPE_RP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v66 = (Il2CppObject *)v69;
      Act = UserGameEntity__getRp(*p_userGameEntity, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      if ( !byte_40F6041 )
      {
        sub_B16FFC(&BalanceConfig_TypeInfo, v70);
        byte_40F6041 = 1;
      }
      v71 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v71 = BalanceConfig_TypeInfo;
      }
      actMax = v71->static_fields->UerGameRpMax;
      goto LABEL_160;
    case 3:
      v205 = v46;
      v207 = this;
      v216.fields.useName = (struct System_String_o *)StringLiteral_1/*""*/;
      v203 = (Il2CppObject *)StringLiteral_1/*""*/;
      sub_B16F98(&v216, StringLiteral_1/*""*/);
      v216.fields.useAmount = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B16F98(&v216.fields.useAmount, StringLiteral_1/*""*/);
      if ( !ItemConsumeEntity )
        goto LABEL_79;
      v72 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v72 )
        goto LABEL_196;
      v73 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v72,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      v74 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v74 )
        goto LABEL_196;
      v75 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)v74,
                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL) )
        goto LABEL_79;
      v76 = 0;
      do
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_196;
        if ( v76 >= itemIds->max_length )
          goto LABEL_197;
        if ( !v75 )
          goto LABEL_196;
        UserId = (int64_t)UserItemMaster__GetEntity(v75, UserId, itemIds->m_Items[v76 + 1], 0LL);
        v81 = ItemConsumeEntity->fields.itemIds;
        if ( !v81 )
          goto LABEL_196;
        if ( v76 >= v81->max_length )
          goto LABEL_197;
        if ( !v73 )
          goto LABEL_196;
        v82 = UserId;
        UserId = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v73,
                            v81->m_Items[v76 + 1],
                            (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !UserId )
          goto LABEL_196;
        v83 = (ItemEntity_o *)UserId;
        if ( *(_DWORD *)(UserId + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_196;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v82 && (UserId = ItemEntity__IsEnable((ItemEntity_o *)UserId, 0LL), (UserId & 1) != 0) )
        {
          qp = *(_DWORD *)(v82 + 28);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_196;
        if ( v76 >= nums->max_length )
          goto LABEL_197;
        if ( nums->m_Items[v76 + 1] > qp )
        {
          v86 = System_String__Concat_43743732((System_String_o *)StringLiteral_26/*"\n"*/, v83->fields.name, 0LL);
          if ( !v65 )
            goto LABEL_196;
          System_Text_StringBuilder__Append_41914240(v65, v86, 0LL);
        }
        memset(&v215, 0, sizeof(v215));
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v87 = LocalizationManager__Get((System_String_o *)StringLiteral_2498/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v215.fields.useName = System_String__Format(v87, (Il2CppObject *)v83->fields.name, 0LL);
        sub_B16F98(&v215, v215.fields.useName);
        UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2499/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v88 = ItemConsumeEntity->fields.nums;
        if ( !v88 )
          goto LABEL_196;
        if ( v76 >= v88->max_length )
          goto LABEL_197;
        v89 = (System_String_o *)UserId;
        LODWORD(v218.fields.useName) = v88->m_Items[v76 + 1];
        v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218);
        v215.fields.useAmount = System_String__Format(v89, v90, 0LL);
        sub_B16F98(&v215.fields.useAmount, v215.fields.useAmount);
        v91 = LocalizationManager__Get((System_String_o *)StringLiteral_2501/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v215.fields.possessionName = System_String__Format(v91, (Il2CppObject *)v83->fields.name, 0LL);
        sub_B16F98(&v215.fields.possessionName, v215.fields.possessionName);
        MaxNum = ItemEntity__GetMaxNum(v83, 0LL);
        if ( MaxNum < 1 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v97 = LocalizationManager__Get((System_String_o *)StringLiteral_2502/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v218.fields.useName) = qp;
          v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218);
          v96 = System_String__Format(v97, v98, 0LL);
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v93 = LocalizationManager__Get((System_String_o *)StringLiteral_2503/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v218.fields.useName) = qp;
          v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218);
          LODWORD(v212.fields.useName) = ItemEntity__GetMaxNum(v83, 0LL);
          v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v212);
          v96 = System_String__Format_43739268(v93, v94, v95, 0LL);
        }
        v215.fields.possessionAmount = v96;
        sub_B16F98(&v215.fields.possessionAmount, v96);
        v215.fields.isIndividualLimit = MaxNum > 0;
        v99 = *p_rciItems;
        v212 = v215;
        if ( !v99 )
          goto LABEL_196;
        v218 = v212;
        System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___Add(
          v99,
          &v218,
          (const MethodInfo_2E675E0 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
        ++v76;
      }
      while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v76, 0LL) );
LABEL_79:
      if ( !v65 )
        goto LABEL_196;
      v46 = v205;
      this = v207;
      v51 = &byte_40F6000;
      if ( System_Text_StringBuilder__get_Length(v65, 0LL) < 1 )
      {
        v66 = v203;
LABEL_159:
        actMax = 0;
LABEL_160:
        if ( QuestEntity__GetConsumeType(v54, 0LL) == 1
          || QuestEntity__GetConsumeType(v54, 0LL) == 2
          || QuestEntity__GetConsumeType(v54, 0LL) == 4 )
        {
          v165 = (MapControl_QuestInfo_o *)sub_B170CC(MapControl_QuestInfo_TypeInfo, v161, v162, v163, v164);
          MapControl_QuestInfo___ctor(v165, 0LL);
          if ( !v165 )
            goto LABEL_196;
          MapControl_QuestInfo__SetTerminalParamsValue(v165, 0LL);
          questId = v165->fields.questId;
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsQuestClear_25438860 = CondType__IsQuestClear_25438860(questId, -1, 0, 0LL);
          fixedVal = -1;
          v169 = IsQuestClear_25438860;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !v51[87] )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, v168);
            v51[87] = 1;
          }
          v170 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v170 = TerminalPramsManager_TypeInfo;
          }
          QuestId_k__BackingField = v170->static_fields->_QuestId_k__BackingField;
          if ( !byte_40F6058 )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, v168);
            v170 = TerminalPramsManager_TypeInfo;
            byte_40F6058 = 1;
          }
          if ( (BYTE3(v170->vtable._0_Equals.methodPtr) & 4) != 0 && !v170->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v170);
            v170 = TerminalPramsManager_TypeInfo;
          }
          CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                                    v54,
                                    QuestId_k__BackingField,
                                    v170->static_fields->_PhaseCnt_k__BackingField,
                                    !v169,
                                    &fixedVal,
                                    0LL);
          Mine = MapControl_QuestInfo__GetMine(v165, 0LL);
          if ( !Mine )
            goto LABEL_196;
          PhaseDetailedEntity = QuestEntity__GetPhaseDetailedEntity(Mine, 0LL);
          v165->fields._fixedCostVal_k__BackingField = fixedVal;
          if ( !PhaseDetailedEntity )
            goto LABEL_196;
          ActConsume = QuestEntity__getActConsume(PhaseDetailedEntity, CampaignCostCalcValue, 0LL);
          v165->fields.costCalcVal = CampaignCostCalcValue;
          v176 = Act;
          if ( fixedVal >= 0 )
            v177 = fixedVal;
          else
            v177 = ActConsume;
          CostValueColor = QuestEntity__GetCostValueColor(
                             CampaignCostCalcValue,
                             (v177 > actMax) | (unsigned __int8)(v177 > Act),
                             0LL);
          LODWORD(v218.fields.useName) = v177;
          v179 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218);
          v180 = (Il2CppObject *)System_String__Format(CostValueColor, v179, 0LL);
          v181 = System_Int32__ToString((int32_t)&Act, 0LL);
          if ( actMax < v176 )
          {
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v182 = LocalizationManager__Get((System_String_o *)StringLiteral_1729/*"AP_OVER_MAX_COLOR"*/, 0LL);
            LODWORD(v218.fields.useName) = Act;
            v183 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218);
            v181 = System_String__Format(v182, v183, 0LL);
          }
          v184 = (Il2CppObject *)v181;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v185 = LocalizationManager__Get((System_String_o *)StringLiteral_2496/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0LL);
          v216.fields.useName = System_String__Format(v185, v66, 0LL);
          sub_B16F98(&v216, v216.fields.useName);
          v186 = LocalizationManager__Get((System_String_o *)StringLiteral_2497/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0LL);
          v216.fields.useAmount = System_String__Format(v186, v180, 0LL);
          sub_B16F98(&v216.fields.useAmount, v216.fields.useAmount);
          v187 = LocalizationManager__Get((System_String_o *)StringLiteral_2494/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0LL);
          v216.fields.possessionName = System_String__Format(v187, v66, 0LL);
          sub_B16F98(&v216.fields.possessionName, v216.fields.possessionName);
          v188 = LocalizationManager__Get((System_String_o *)StringLiteral_2495/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0LL);
          LODWORD(v218.fields.useName) = actMax;
          v189 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218);
          v216.fields.possessionAmount = System_String__Format_43739268(v188, v184, v189, 0LL);
          sub_B16F98(&v216.fields.possessionAmount, v216.fields.possessionAmount);
        }
        v218 = v216;
        if ( *p_rciItems )
        {
          v190 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                   *p_rciItems,
                   (const MethodInfo_2E69B88 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
          v211 = v218;
          BattleRetryConfirmComponent__SetCostValueText(this, &v211, v190, v191);
          BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v192);
          BattleRetryConfirmComponent__SetFriendshipUpItemUseButton(this, v193);
          v198 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v194, v195, v196, v197);
          System_Action___ctor(
            v198,
            (Il2CppObject *)v46,
            Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__,
            0LL);
          v201 = BattleRetryConfirmComponent__WaitOneFrame(v199, v198, v200);
          UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v201, 0LL);
          return 1;
        }
LABEL_196:
        sub_B170D4();
      }
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v100 = LocalizationManager__Get((System_String_o *)StringLiteral_10909/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v101 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v65->klass->vtable._3_ToString.method)(
                               v65,
                               v65->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v102 = System_String__Format(v100, v101, 0LL);
      v103 = System_String__Concat_43743732(v102, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
      v104 = LocalizationManager__Get((System_String_o *)StringLiteral_2500/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v105 = System_String__Concat_43743732(v103, v104, 0LL);
      v110 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v111 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( (BYTE3(BattleRetryConfirmComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v111 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      static_fields = v111->static_fields;
      _9__37_1 = static_fields->__9__37_1;
      v114 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__37_1 )
      {
        if ( (BYTE3(v111->vtable._0_Equals.methodPtr) & 4) != 0 && !v111->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v111);
          static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        }
        v115 = (Il2CppObject *)static_fields->__9;
        _9__37_1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v106, v107, v108, v109);
        System_Action___ctor(_9__37_1, v115, Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, 0LL);
        v116 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v116->__9__37_1 = _9__37_1;
        sub_B16F98(&v116->__9__37_1, _9__37_1);
      }
      if ( !v110 )
        goto LABEL_196;
      CommonUI__OpenNotificationDialog(v110, v114, v105, _9__37_1, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0LL);
      return 0;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v117 = LocalizationManager__Get((System_String_o *)StringLiteral_3349/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v204 = (Il2CppObject *)v117;
      v206 = v46;
      v208 = this;
      Act = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_196;
      v202 = (*p_userGameEntity)->fields.actMax;
      v216.fields.useName = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B16F98(&v216, StringLiteral_1/*""*/);
      v216.fields.useAmount = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B16F98(&v216.fields.useAmount, StringLiteral_1/*""*/);
      if ( !ItemConsumeEntity )
        goto LABEL_142;
      v118 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v118 )
        goto LABEL_196;
      v119 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)v118,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      v120 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !v120 )
        goto LABEL_196;
      v121 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v120,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
      if ( !QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL) )
        goto LABEL_142;
      v122 = 0;
      do
      {
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        v123 = ItemConsumeEntity->fields.itemIds;
        if ( !v123 )
          goto LABEL_196;
        if ( v122 >= v123->max_length )
          goto LABEL_197;
        if ( !v121 )
          goto LABEL_196;
        UserId = (int64_t)UserItemMaster__GetEntity(v121, UserId, v123->m_Items[v122 + 1], 0LL);
        v124 = ItemConsumeEntity->fields.itemIds;
        if ( !v124 )
          goto LABEL_196;
        if ( v122 >= v124->max_length )
          goto LABEL_197;
        if ( !v119 )
          goto LABEL_196;
        v125 = UserId;
        UserId = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                            v119,
                            v124->m_Items[v122 + 1],
                            (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !UserId )
          goto LABEL_196;
        v126 = (ItemEntity_o *)UserId;
        if ( *(_DWORD *)(UserId + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_196;
          v127 = (*p_userGameEntity)->fields.qp;
        }
        else if ( v125 && (UserId = ItemEntity__IsEnable((ItemEntity_o *)UserId, 0LL), (UserId & 1) != 0) )
        {
          v127 = *(_DWORD *)(v125 + 28);
        }
        else
        {
          v127 = 0;
        }
        v128 = ItemConsumeEntity->fields.nums;
        if ( !v128 )
          goto LABEL_196;
        if ( v122 >= v128->max_length )
          goto LABEL_197;
        if ( v128->m_Items[v122 + 1] > v127 )
        {
          v129 = System_String__Concat_43743732((System_String_o *)StringLiteral_26/*"\n"*/, v126->fields.name, 0LL);
          if ( !v65 )
            goto LABEL_196;
          System_Text_StringBuilder__Append_41914240(v65, v129, 0LL);
        }
        memset(&v214, 0, sizeof(v214));
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v130 = LocalizationManager__Get((System_String_o *)StringLiteral_2498/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v214.fields.useName = System_String__Format(v130, (Il2CppObject *)v126->fields.name, 0LL);
        sub_B16F98(&v214, v214.fields.useName);
        UserId = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2499/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v131 = ItemConsumeEntity->fields.nums;
        if ( !v131 )
          goto LABEL_196;
        if ( v122 >= v131->max_length )
        {
LABEL_197:
          sub_B17100(UserId, v78, v79);
          sub_B170A0();
        }
        v132 = (System_String_o *)UserId;
        LODWORD(v218.fields.useName) = v131->m_Items[v122 + 1];
        v133 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218);
        v214.fields.useAmount = System_String__Format(v132, v133, 0LL);
        sub_B16F98(&v214.fields.useAmount, v214.fields.useAmount);
        v134 = LocalizationManager__Get((System_String_o *)StringLiteral_2501/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v214.fields.possessionName = System_String__Format(v134, (Il2CppObject *)v126->fields.name, 0LL);
        sub_B16F98(&v214.fields.possessionName, v214.fields.possessionName);
        v135 = ItemEntity__GetMaxNum(v126, 0LL);
        if ( v135 < 1 )
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v140 = LocalizationManager__Get((System_String_o *)StringLiteral_2502/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v218.fields.useName) = v127;
          v141 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218);
          v139 = System_String__Format(v140, v141, 0LL);
        }
        else
        {
          if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v136 = LocalizationManager__Get((System_String_o *)StringLiteral_2503/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v218.fields.useName) = v127;
          v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218);
          LODWORD(v212.fields.useName) = ItemEntity__GetMaxNum(v126, 0LL);
          v138 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v212);
          v139 = System_String__Format_43739268(v136, v137, v138, 0LL);
        }
        v214.fields.possessionAmount = v139;
        sub_B16F98(&v214.fields.possessionAmount, v139);
        v214.fields.isIndividualLimit = v135 > 0;
        v142 = *p_rciItems;
        v212 = v214;
        if ( !v142 )
          goto LABEL_196;
        v218 = v212;
        System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___Add(
          v142,
          &v218,
          (const MethodInfo_2E675E0 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
        ++v122;
      }
      while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, v122, 0LL) );
LABEL_142:
      if ( !v65 )
        goto LABEL_196;
      v46 = v206;
      this = v208;
      v66 = v204;
      actMax = v202;
      v51 = &byte_40F6000;
      if ( System_Text_StringBuilder__get_Length(v65, 0LL) < 1 )
        goto LABEL_160;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v143 = LocalizationManager__Get((System_String_o *)StringLiteral_10909/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v144 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v65->klass->vtable._3_ToString.method)(
                               v65,
                               v65->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v145 = System_String__Format(v143, v144, 0LL);
      v146 = System_String__Concat_43743732(v145, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
      v147 = LocalizationManager__Get((System_String_o *)StringLiteral_2500/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v148 = System_String__Concat_43743732(v146, v147, 0LL);
      v153 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v154 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( (BYTE3(BattleRetryConfirmComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v154 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      v155 = v154->static_fields;
      _9__37_2 = v155->__9__37_2;
      v157 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__37_2 )
      {
        if ( (BYTE3(v154->vtable._0_Equals.methodPtr) & 4) != 0 && !v154->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v154);
          v155 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        }
        v158 = (Il2CppObject *)v155->__9;
        _9__37_2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v149, v150, v151, v152);
        System_Action___ctor(_9__37_2, v158, Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, 0LL);
        v159 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v159->__9__37_2 = _9__37_2;
        sub_B16F98(&v159->__9__37_2, _9__37_2);
      }
      if ( !v153 )
        goto LABEL_196;
      CommonUI__OpenNotificationDialog(v153, v157, v148, _9__37_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
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
  __int64 v4; // x4
  BattleRetryConfirmComponent__WaitOneFrame_d__42_o *v6; // x20

  if ( (byte_40F74D8 & 1) == 0 )
  {
    sub_B16FFC(&BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo, action);
    byte_40F74D8 = 1;
  }
  v6 = (BattleRetryConfirmComponent__WaitOneFrame_d__42_o *)sub_B170CC(
                                                              BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo,
                                                              action,
                                                              method,
                                                              v3,
                                                              v4);
  BattleRetryConfirmComponent__WaitOneFrame_d__42___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  v6->fields.action = action;
  sub_B16F98(&v6->fields.action, action);
  return (System_Collections_IEnumerator_o *)v6;
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
    sub_B16F98(&this->fields.__2__current, 0LL);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__42_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0

  if ( (byte_40F7196 & 1) == 0 )
  {
    sub_B16FFC(&BattleRetryConfirmComponent___c_TypeInfo, v1);
    byte_40F7196 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleRetryConfirmComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v5;
  sub_B16F98(static_fields, v5);
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

  if ( (byte_40F7197 & 1) == 0 )
  {
    sub_B16FFC(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_40F7197 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_18B4A40 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__37_2(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F7198 & 1) == 0 )
  {
    sub_B16FFC(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_40F7198 = 1;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    Instance,
    10,
    0,
    (const MethodInfo_18B4A40 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v5; // x0

  if ( (byte_40F7199 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__,
      method);
    byte_40F7199 = 1;
  }
  rciItems = this->fields.rciItems;
  if ( !rciItems
    || (_4__this = this->fields.__4__this,
        v5 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
               rciItems,
               (const MethodInfo_2E69B88 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__),
        !_4__this) )
  {
    sub_B170D4();
  }
  BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(_4__this, v5, 0LL);
}