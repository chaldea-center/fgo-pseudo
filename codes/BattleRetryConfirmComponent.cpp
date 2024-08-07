void __fastcall BattleRetryConfirmComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A01CE5 & 1) == 0 )
  {
    sub_1B64A00(&BattleRetryConfirmComponent_TypeInfo, v1);
    byte_4A01CE5 = 1;
  }
  *BattleRetryConfirmComponent_TypeInfo->static_fields = (struct BattleRetryConfirmComponent_StaticFields)xmmword_BA3B50;
}


void __fastcall BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.CONFIRM_BUTTON_POSITION_ON_THREE.fields.x = xmmword_BA34D0;
  *(_QWORD *)&this->fields.CANCEL_BUTTON_POSITION_ON_THREE.fields.y = 3273916416LL;
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
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A01CE0 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, *(_QWORD *)&result);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v9);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4A01CE0 = 1;
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
        (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v14,
                (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v14.fields._current )
          sub_1B64C5C(0LL, v12);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v14.fields._current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v14,
        (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_20:
    sub_1B64C5C(battleResultComponent, *(_QWORD *)&result);
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
    sub_1B64C5C(cancelLabel, method);
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
    sub_1B64C5C(reqSingleParent, method);
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
      sub_1B64C64(reqSingleParent, method);
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
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v23; // x21
  unsigned __int64 v24; // x22
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 klass_low; // x10
  __int64 v28; // x8
  __int64 v29; // x1
  UILabel_o *mainText; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *confirmLabel; // x20
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A01CDE & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIButton__Add__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIButton___ctor__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIButton__get_Count__, v9);
    sub_1B64A00(&System_Collections_Generic_List_UIButton__TypeInfo, v10);
    sub_1B64A00(&LocalizationManager_TypeInfo, v11);
    sub_1B64A00(&StringLiteral_2946/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, v12);
    sub_1B64A00(&StringLiteral_2948/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, v13);
    sub_1B64A00(&StringLiteral_2947/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, v14);
    byte_4A01CDE = 1;
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
    v17 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_UIButton__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v17;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.buttons, (int32_t)v17, v18, v19);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_2E33270 *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    if ( !root )
      goto LABEL_32;
    klass = root[1].klass;
    v23 = root;
    if ( (int)klass >= 1 )
    {
      v24 = 0LL;
      while ( 1 )
      {
        if ( v24 >= (unsigned int)klass )
          sub_1B64C64(root, method);
        root = (UnityEngine_GameObject_o *)*p_buttons;
        if ( !*p_buttons )
          break;
        method = (const MethodInfo *)*((_QWORD *)&v23[1].monitor + v24);
        v25 = *(_QWORD *)&root->fields.m_CachedPtr;
        v26 = Method_System_Collections_Generic_List_UIButton__Add__;
        ++HIDWORD(root[1].klass);
        if ( !v25 )
          break;
        klass_low = SLODWORD(root[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v25 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)root,
            (Il2CppObject *)method,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = v25 + 8 * klass_low;
          LODWORD(root[1].klass) = klass_low + 1;
          *(_QWORD *)(v28 + 32) = method;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v28 + 32), (int32_t)method, v20, v21);
        }
        LODWORD(klass) = v23[1].klass;
        if ( (__int64)++v24 >= (int)klass )
          goto LABEL_18;
      }
LABEL_32:
      sub_1B64C5C(root, method);
    }
LABEL_18:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_32;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_object__o *)root,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  for ( i = v33;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0LL) )
  {
    if ( !i.fields._current )
      sub_1B64C5C(0LL, v29);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  if ( !this->fields.isInitialized )
  {
    mainText = this->fields.mainText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2948/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    if ( !mainText )
      goto LABEL_32;
    UILabel__set_text(mainText, (System_String_o *)root, 0LL);
    cancelLabel = this->fields.cancelLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2946/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_32;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0LL);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2947/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0LL);
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

  if ( (byte_4A01CDF & 1) == 0 )
  {
    sub_1B64A00(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__, method);
    sub_1B64A00(&Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__, v3);
    sub_1B64A00(&BoostFunctionUtility_CallbackFunc_TypeInfo, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v8);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v10);
    byte_4A01CDF = 1;
  }
  v11 = Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__;
  memset(&v22, 0, sizeof(v22));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1B64A18(Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
  v12 = (System_Reflection_MethodBase_o *)sub_1B649E4(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB754 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v13);
    byte_49FB754 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v15->static_fields->_QuestId_k__BackingField;
  if ( !byte_49FB75F )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v13);
    v15 = TerminalPramsManager_TypeInfo;
    byte_49FB75F = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v15->static_fields->_PhaseCnt_k__BackingField;
  v18 = (BoostFunctionUtility_CallbackFunc_o *)sub_1B64C4C(BoostFunctionUtility_CallbackFunc_TypeInfo);
  BoostFunctionUtility_CallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__,
    0LL);
  if ( !Instance
    || (CommonUI__OpenBoostSupportRequestMenu(
          (CommonUI_o *)Instance,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          v18,
          1,
          0LL),
        (buttons = (System_Collections_Generic_List_object__o *)this->fields.buttons) == 0LL) )
  {
    sub_1B64C5C(buttons, v20);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    buttons,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v22.fields._current )
      sub_1B64C5C(0LL, v21);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v22.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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

  if ( (byte_4A01CD7 & 1) == 0 )
  {
    sub_1B64A00(&Method_BattleRetryConfirmComponent_OnClickCancel__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_4A01CD7 = 1;
  }
  v7 = Method_BattleRetryConfirmComponent_OnClickCancel__;
  memset(&v12, 0, sizeof(v12));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B64A18(Method_BattleRetryConfirmComponent_OnClickCancel__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B649E4(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_1B64C5C(battleResultComponent, v9);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)battleResultComponent,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B64C5C(0LL, v11);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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

  if ( (byte_4A01CD8 & 1) == 0 )
  {
    sub_1B64A00(&Method_BattleRetryConfirmComponent_OnClickConfirm__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_4A01CD8 = 1;
  }
  v7 = Method_BattleRetryConfirmComponent_OnClickConfirm__;
  memset(&v12, 0, sizeof(v12));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickConfirm__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B64A18(Method_BattleRetryConfirmComponent_OnClickConfirm__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B649E4(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_1B64C5C(battleResultComponent, v9);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)battleResultComponent,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B64C5C(0LL, v11);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
}


void __fastcall BattleRetryConfirmComponent__OnClickFriendshipUpItemUseButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_c *v4; // x0
  int32_t Int; // w0
  _QWORD *v6; // x8
  int32_t v7; // w20
  System_Reflection_MethodBase_o *v8; // x0
  PartyOrganizationUtility_c *v9; // x0
  __int64 v10; // x1
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v12; // w1
  PartyOrganizationUtility_c *v13; // x0

  if ( (byte_4A01CE4 & 1) == 0 )
  {
    sub_1B64A00(&Method_BattleRetryConfirmComponent_OnClickFriendshipUpItemUseButton__, method);
    sub_1B64A00(&PartyOrganizationUtility_TypeInfo, v3);
    byte_4A01CE4 = 1;
  }
  v4 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v4 = PartyOrganizationUtility_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  v6 = Method_BattleRetryConfirmComponent_OnClickFriendshipUpItemUseButton__;
  v7 = Int;
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickFriendshipUpItemUseButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B64A18(Method_BattleRetryConfirmComponent_OnClickFriendshipUpItemUseButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B649E4(v6, v6[4]);
  if ( !v7 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    v13 = PartyOrganizationUtility_TypeInfo;
    if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v13 = PartyOrganizationUtility_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v13->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 1, 0LL);
    friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
    if ( friendshipUpItemUseButton )
    {
      v12 = 1;
      goto LABEL_16;
    }
LABEL_17:
    sub_1B64C5C(friendshipUpItemUseButton, v10);
  }
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
  v9 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v9 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v9->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
  if ( !friendshipUpItemUseButton )
    goto LABEL_17;
  v12 = 0;
LABEL_16:
  FriendshipUpItemUseItem__ChangeButtonState(friendshipUpItemUseButton, v12, 0LL);
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
    sub_1B64C5C(bgObj, opendFunc);
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

  if ( (byte_4A01CE1 & 1) == 0 )
  {
    sub_1B64A00(&BattleSetupInfo_TypeInfo, method);
    sub_1B64A00(&Method_DataManager_GetMaster_EventDetailMaster___, v3);
    sub_1B64A00(&DataManager_TypeInfo, v4);
    sub_1B64A00(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1B64A00(&LocalizationManager_TypeInfo, v6);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64A00(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v8);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v9);
    sub_1B64A00(&StringLiteral_11061/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, v10);
    sub_1B64A00(&StringLiteral_2945/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/, v11);
    byte_4A01CE1 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB757 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    byte_49FB757 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v12->static_fields->_WarId_k__BackingField;
  if ( !byte_49FB754 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v12 = TerminalPramsManager_TypeInfo;
    byte_49FB754 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v12->static_fields->_QuestId_k__BackingField;
  if ( !byte_49FB75F )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, method);
    v12 = TerminalPramsManager_TypeInfo;
    byte_49FB75F = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v12->static_fields->_PhaseCnt_k__BackingField;
  v16 = (BattleSetupInfo_o *)sub_1B64C4C(BattleSetupInfo_TypeInfo);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v19 || !Master_object )
    goto LABEL_55;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          v19->fields.eventId,
          (const MethodInfo_30D67EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_46;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_55;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_object )
      goto LABEL_55;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_object,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0LL)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11061/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0LL) == 1 )
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
                                                                        (System_String_o *)StringLiteral_2945/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/,
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
      sub_1B64C5C(Master_object, v18);
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
        sub_1B64C64(this, value);
      if ( *i )
      {
        if ( v7 >= max_length )
          goto LABEL_13;
        v11 = &v9->obj.klass + v7;
        v12 = (UnityEngine_MonoBehaviour_o *)v11[4];
        if ( !v12 )
          break;
        v13 = RetryConfirmItem__SetCondensedScalePossessionAmount((RetryConfirmItem_o *)v11[4], 0LL);
        this = (BattleRetryConfirmComponent_o *)UnityEngine_MonoBehaviour__StartCoroutine_69122748(v12, v13, 0LL);
      }
      LODWORD(v4) = value->max_length;
      if ( (__int64)++v7 >= (int)v4 )
        return;
    }
LABEL_14:
    sub_1B64C5C(this, value);
  }
}


void __fastcall BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *items,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *reqSingleParent; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct RetryConfirmItem_o *singleItem; // x20
  UnityEngine_GameObject_o *v9; // x21
  _BOOL8 activeSelf; // x0
  const MethodInfo *v11; // x3
  RetryConfirmItem_array **p_itemsa; // x2
  __int64 v13; // x0
  RetryConfirmItem_array *itemsa; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A01CE3 & 1) == 0 )
  {
    sub_1B64A00(&RetryConfirmItem___TypeInfo, items);
    byte_4A01CE3 = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_29;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL) )
  {
    reqSingleParent = (UnityEngine_GameObject_o *)sub_1B64AA8(RetryConfirmItem___TypeInfo, 1LL);
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
    reqSingleParent = (UnityEngine_GameObject_o *)sub_1B64AA8(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItem = this->fields.singleItemWithUseItemButton;
LABEL_11:
      v9 = reqSingleParent;
      if ( singleItem )
      {
        reqSingleParent = (UnityEngine_GameObject_o *)sub_1B64B3C(singleItem, reqSingleParent->klass->_1.element_class);
        if ( !reqSingleParent )
        {
          v13 = sub_1B64C80(0LL);
          sub_1B64B28(v13, 0LL);
        }
      }
      if ( !LODWORD(v9[1].klass) )
        sub_1B64C64(reqSingleParent, items);
      v9[1].monitor = singleItem;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v9[1].monitor, (int32_t)singleItem, v6, v7);
      itemsa = (RetryConfirmItem_array *)v9;
      p_itemsa = &itemsa;
      goto LABEL_15;
    }
LABEL_29:
    sub_1B64C5C(reqSingleParent, items);
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
      v11);
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
  if ( (byte_4A01CDD & 1) == 0 )
  {
    this = (BattleRetryConfirmComponent_o *)sub_1B64A00(&StringLiteral_1/*""*/, costPoint);
    byte_4A01CDD = 1;
  }
  if ( !items )
    sub_1B64C5C(this, costPoint);
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
        sub_1B64C64(v8, v9);
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

  if ( (byte_4A01CDB & 1) == 0 )
  {
    sub_1B64A00(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_4A01CDB = 1;
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
    sub_1B64C5C(reqSingleParent, costPoint);
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
      sub_1B64C64(reqSingleParent, costPoint);
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

  if ( (byte_4A01CDA & 1) == 0 )
  {
    sub_1B64A00(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_4A01CDA = 1;
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
    sub_1B64C5C(reqSingleParent, costPoint);
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

  if ( (byte_4A01CDC & 1) == 0 )
  {
    sub_1B64A00(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_4A01CDC = 1;
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
    sub_1B64C5C(reqSingleParent, costPoint);
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
      sub_1B64C64(reqSingleParent, costPoint);
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
  UnityEngine_Object_o *friendshipUpItemUseButton; // x20
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v8; // x1
  char v9; // w20
  PartyOrganizationUtility_c *v10; // x0
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x20
  UILabel_o *mainText; // x19
  struct BattleRetryConfirmComponent_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x20
  char v17; // w20
  BattleRetryConfirmComponent_c *v18; // x8
  UnityEngine_GameObject_o *v19; // x20
  UnityEngine_GameObject_o *v20; // x20
  char v21; // w20
  __int64 v22; // x9

  if ( (byte_4A01CE2 & 1) == 0 )
  {
    sub_1B64A00(&BattleRetryConfirmComponent_TypeInfo, method);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    sub_1B64A00(&PartyOrganizationUtility_TypeInfo, v4);
    sub_1B64A00(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    byte_4A01CE2 = 1;
  }
  friendshipUpItemUseButton = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemUseButton, 0LL, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL);
      if ( this->fields.friendshipUpItemUseButton )
      {
        v9 = (char)Instance;
        Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                   0LL);
        if ( Instance )
        {
          if ( (v9 & 1) != 0 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
            if ( !Instance )
              goto LABEL_66;
            FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)Instance, 0LL);
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
            v10 = PartyOrganizationUtility_TypeInfo;
            if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
              v10 = PartyOrganizationUtility_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v10->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
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
                  if ( this->fields.friendshipUpItemUseButton )
                  {
                    v11 = (UnityEngine_GameObject_o *)Instance;
                    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                               0LL);
                    if ( Instance )
                    {
                      Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                 (UnityEngine_GameObject_o *)Instance,
                                                                 0LL);
                      if ( v11 )
                      {
                        UnityEngine_GameObject__SetActive(v11, ((unsigned __int8)Instance & 1) == 0, 0LL);
                        Instance = (PartyOrganizationUtility_o *)this->fields.reqSingleParentWithUseItemButton;
                        if ( Instance )
                        {
                          Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                     (UnityEngine_GameObject_o *)Instance,
                                                                     0LL);
                          if ( this->fields.friendshipUpItemUseButton )
                          {
                            v12 = (UnityEngine_GameObject_o *)Instance;
                            Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                       0LL);
                            if ( Instance )
                            {
                              Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                         (UnityEngine_GameObject_o *)Instance,
                                                                         0LL);
                              if ( v12 )
                              {
                                UnityEngine_GameObject__SetActive(v12, (unsigned __int8)Instance & 1, 0LL);
                                mainText = this->fields.mainText;
                                Instance = (PartyOrganizationUtility_o *)BattleRetryConfirmComponent_TypeInfo;
                                if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                if ( mainText )
                                {
                                  static_fields = BattleRetryConfirmComponent_TypeInfo->static_fields;
LABEL_65:
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
                        if ( this->fields.friendshipUpItemUseButton )
                        {
                          v15 = (UnityEngine_GameObject_o *)Instance;
                          Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                     0LL);
                          if ( Instance )
                          {
                            Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                       (UnityEngine_GameObject_o *)Instance,
                                                                       0LL);
                            if ( v15 )
                            {
                              UnityEngine_GameObject__SetActive(v15, ((unsigned __int8)Instance & 1) == 0, 0LL);
                              Instance = (PartyOrganizationUtility_o *)this->fields.reqDoubleParentWithUseItemButton;
                              if ( Instance )
                              {
                                Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                           0LL);
                                if ( this->fields.friendshipUpItemUseButton )
                                {
                                  v16 = (UnityEngine_GameObject_o *)Instance;
                                  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                             0LL);
                                  if ( Instance )
                                  {
                                    Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                               (UnityEngine_GameObject_o *)Instance,
                                                                               0LL);
                                    if ( v16 )
                                    {
                                      UnityEngine_GameObject__SetActive(v16, (unsigned __int8)Instance & 1, 0LL);
                                      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
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
                                          v17 = (char)Instance;
                                          v18 = BattleRetryConfirmComponent_TypeInfo;
                                          if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                            v18 = BattleRetryConfirmComponent_TypeInfo;
                                          }
                                          if ( mainText )
                                          {
                                            static_fields = v18->static_fields;
                                            if ( (v17 & 1) != 0 )
                                              static_fields = (struct BattleRetryConfirmComponent_StaticFields *)((char *)static_fields + 8);
                                            goto LABEL_65;
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
                        if ( this->fields.friendshipUpItemUseButton )
                        {
                          v19 = (UnityEngine_GameObject_o *)Instance;
                          Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                     0LL);
                          if ( Instance )
                          {
                            Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                       (UnityEngine_GameObject_o *)Instance,
                                                                       0LL);
                            if ( v19 )
                            {
                              UnityEngine_GameObject__SetActive(v19, ((unsigned __int8)Instance & 1) == 0, 0LL);
                              Instance = (PartyOrganizationUtility_o *)this->fields.reqTripleParentWithUseItemButton;
                              if ( Instance )
                              {
                                Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                           0LL);
                                if ( this->fields.friendshipUpItemUseButton )
                                {
                                  v20 = (UnityEngine_GameObject_o *)Instance;
                                  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                             0LL);
                                  if ( Instance )
                                  {
                                    Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                               (UnityEngine_GameObject_o *)Instance,
                                                                               0LL);
                                    if ( v20 )
                                    {
                                      UnityEngine_GameObject__SetActive(v20, (unsigned __int8)Instance & 1, 0LL);
                                      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
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
                                          v21 = (char)Instance;
                                          if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                          if ( mainText )
                                          {
                                            v22 = 4LL;
                                            if ( (v21 & 1) != 0 )
                                              v22 = 12LL;
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)((char *)BattleRetryConfirmComponent_TypeInfo->static_fields + v22);
                                            goto LABEL_65;
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
LABEL_66:
    sub_1B64C5C(Instance, v8);
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
    sub_1B64C5C(this, value);
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
  __int64 v43; // x24
  int64_t Instance; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  int32_t v47; // w3
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  Il2CppObject *MasterData_object; // x19
  QuestEntity_o *v52; // x29
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v54; // x19
  int32_t v55; // w2
  int32_t v56; // w3
  System_Text_StringBuilder_o *v57; // x26
  System_String_o *v58; // x19
  int32_t v59; // w2
  int32_t v60; // w3
  QuestEntity_o *v61; // x25
  Il2CppObject *v62; // x26
  int32_t actMax; // w27
  BalanceConfig_c *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppObject *v67; // x28
  Il2CppObject *v68; // x29
  il2cpp_array_size_t v69; // w22
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v71; // x8
  int64_t v72; // x24
  ItemEntity_o *v73; // x25
  int32_t qp; // w20
  struct System_Int32_array *nums; // x8
  System_String_o *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  struct System_Int32_array *v82; // x8
  System_String_o *v83; // x24
  Il2CppObject *v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  int32_t MaxNum; // w24
  bool v91; // w19
  System_String_o *v92; // x24
  __int64 v93; // x2
  __int64 v94; // x3
  __int64 v95; // x4
  Il2CppObject *v96; // x23
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  Il2CppObject *v100; // x0
  struct System_String_o *v101; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x23
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  Il2CppObject *v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  __int64 v111; // x8
  _QWORD *v112; // x10
  __int64 v113; // x9
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o dispLimitCount; // q0
  __int128 v115; // q1
  __int64 v116; // x8
  const MethodInfo_351BA0C *v117; // x2
  System_String_o *v118; // x19
  Il2CppObject *v119; // x0
  System_String_o *v120; // x0
  System_String_o *v121; // x19
  System_String_o *v122; // x0
  System_String_o *v123; // x19
  CommonUI_o *v124; // x20
  BattleRetryConfirmComponent___c_c *v125; // x8
  System_Action_o *_9__37_1; // x22
  System_String_o *v127; // x21
  int32_t v128; // w2
  int32_t v129; // w3
  int32_t v130; // w2
  int32_t v131; // w3
  Il2CppObject *v132; // x28
  Il2CppObject *v133; // x29
  il2cpp_array_size_t v134; // w22
  struct System_Int32_array *v135; // x8
  struct System_Int32_array *v136; // x8
  int64_t v137; // x24
  ItemEntity_o *v138; // x25
  int32_t v139; // w20
  struct System_Int32_array *v140; // x8
  System_String_o *v141; // x0
  int32_t v142; // w2
  int32_t v143; // w3
  __int64 v144; // x2
  __int64 v145; // x3
  __int64 v146; // x4
  struct System_Int32_array *v147; // x8
  System_String_o *v148; // x24
  Il2CppObject *v149; // x0
  int32_t v150; // w2
  int32_t v151; // w3
  System_String_o *v152; // x0
  int32_t v153; // w2
  int32_t v154; // w3
  int32_t v155; // w24
  bool v156; // w19
  System_String_o *v157; // x24
  __int64 v158; // x2
  __int64 v159; // x3
  __int64 v160; // x4
  Il2CppObject *v161; // x23
  __int64 v162; // x2
  __int64 v163; // x3
  __int64 v164; // x4
  Il2CppObject *v165; // x0
  System_String_o *v166; // x0
  int32_t v167; // w2
  int32_t v168; // w3
  System_String_o *v169; // x23
  __int64 v170; // x2
  __int64 v171; // x3
  __int64 v172; // x4
  Il2CppObject *v173; // x0
  int32_t v174; // w2
  int32_t v175; // w3
  __int64 v176; // x8
  _QWORD *v177; // x10
  __int64 v178; // x9
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v179; // q0
  __int128 v180; // q1
  __int64 v181; // x8
  const MethodInfo_351BA0C *v182; // x2
  System_String_o *v183; // x19
  Il2CppObject *v184; // x0
  System_String_o *v185; // x0
  System_String_o *v186; // x19
  System_String_o *v187; // x0
  System_String_o *v188; // x19
  CommonUI_o *v189; // x20
  BattleRetryConfirmComponent___c_c *v190; // x8
  System_String_o *v191; // x21
  System_Action_o *_9__37_2; // x22
  MapControl_QuestInfo_o *v193; // x19
  int32_t questId; // w20
  __int64 v195; // x1
  bool IsQuestClear_37290712; // w20
  TerminalPramsManager_c *v197; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t CampaignCostCalcValue; // w20
  int32_t v200; // w8
  int32_t ActConsumeCost; // w0
  int32_t v202; // w22
  int32_t v203; // w19
  System_String_o *CostValueColor; // x20
  __int64 v205; // x2
  __int64 v206; // x3
  __int64 v207; // x4
  Il2CppObject *v208; // x0
  Il2CppObject *v209; // x20
  System_String_o *v210; // x0
  System_String_o *v211; // x19
  __int64 v212; // x2
  __int64 v213; // x3
  __int64 v214; // x4
  Il2CppObject *v215; // x0
  Il2CppObject *v216; // x19
  System_String_o *v217; // x0
  int32_t v218; // w2
  int32_t v219; // w3
  System_String_o *v220; // x0
  int32_t v221; // w2
  int32_t v222; // w3
  System_String_o *v223; // x0
  int32_t v224; // w2
  int32_t v225; // w3
  System_String_o *v226; // x20
  __int64 v227; // x2
  __int64 v228; // x3
  __int64 v229; // x4
  Il2CppObject *v230; // x0
  int32_t v231; // w2
  int32_t v232; // w3
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v233; // x0
  const MethodInfo *v234; // x3
  const MethodInfo *v235; // x1
  const MethodInfo *v236; // x1
  System_Action_o *v237; // x19
  BattleRetryConfirmComponent_o *v238; // x0
  const MethodInfo *v239; // x2
  System_Collections_IEnumerator_o *v240; // x0
  Il2CppObject *v242; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int32_t v244; // w2
  int32_t v245; // w3
  Il2CppObject *v246; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v247; // x0
  int32_t v248; // w2
  int32_t v249; // w3
  int32_t v250; // [xsp+44h] [xbp-1FCh]
  Il2CppObject *v251; // [xsp+48h] [xbp-1F8h]
  Il2CppObject *v252; // [xsp+48h] [xbp-1F8h]
  BattleRetryConfirmComponent_o *v253; // [xsp+50h] [xbp-1F0h]
  BattleRetryConfirmComponent_o *v254; // [xsp+50h] [xbp-1F0h]
  Il2CppObject *object; // [xsp+58h] [xbp-1E8h]
  QuestEntity_o *v256; // [xsp+60h] [xbp-1E0h]
  UserGameEntity_o **p_userGameEntity; // [xsp+80h] [xbp-1C0h]
  int64_t *v258; // [xsp+88h] [xbp-1B8h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v259; // [xsp+90h] [xbp-1B0h] BYREF
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v260; // [xsp+C0h] [xbp-180h]
  __int128 v261; // [xsp+D0h] [xbp-170h]
  int64_t sortValue1B; // [xsp+E0h] [xbp-160h]
  int32_t fixedVal; // [xsp+ECh] [xbp-154h] BYREF
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v264; // [xsp+F0h] [xbp-150h] BYREF
  ServantStatusBattleListViewItem_o v265; // [xsp+100h] [xbp-140h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v266; // [xsp+1B0h] [xbp-90h] BYREF

  if ( (byte_4A01CD6 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&CondType_TypeInfo, v3);
    sub_1B64A00(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1B64A00(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1B64A00(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_1B64A00(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_1B64A00(&int_TypeInfo, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__, v12);
    sub_1B64A00(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo, v13);
    sub_1B64A00(&LocalizationManager_TypeInfo, v14);
    sub_1B64A00(&NetworkManager_TypeInfo, v15);
    sub_1B64A00(&MapControl_QuestInfo_TypeInfo, v16);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B64A00(&System_Text_StringBuilder_TypeInfo, v19);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v20);
    sub_1B64A00(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, v21);
    sub_1B64A00(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, v22);
    sub_1B64A00(&Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__, v23);
    sub_1B64A00(&BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo, v24);
    sub_1B64A00(&BattleRetryConfirmComponent___c_TypeInfo, v25);
    sub_1B64A00(&StringLiteral_43/*"\n"*/, v26);
    sub_1B64A00(&StringLiteral_2954/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, v27);
    sub_1B64A00(&StringLiteral_3833/*"CONSUME_TYPE_AP"*/, v28);
    sub_1B64A00(&StringLiteral_10833/*"QUEST_ITEM_COST_OVER"*/, v29);
    sub_1B64A00(&StringLiteral_2952/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, v30);
    sub_1B64A00(&StringLiteral_2953/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, v31);
    sub_1B64A00(&StringLiteral_2124/*"AP_OVER_MAX_COLOR"*/, v32);
    sub_1B64A00(&StringLiteral_3834/*"CONSUME_TYPE_RP"*/, v33);
    sub_1B64A00(&StringLiteral_2958/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, v34);
    sub_1B64A00(&StringLiteral_2957/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, v35);
    sub_1B64A00(&StringLiteral_44/*"\n\n"*/, v36);
    sub_1B64A00(&StringLiteral_2955/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v37);
    sub_1B64A00(&StringLiteral_2949/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, v38);
    sub_1B64A00(&StringLiteral_1/*""*/, v39);
    sub_1B64A00(&StringLiteral_2956/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, v40);
    sub_1B64A00(&StringLiteral_2950/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, v41);
    sub_1B64A00(&StringLiteral_2951/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, v42);
    byte_4A01CD6 = 1;
  }
  *(_DWORD *)&v265.fields.svtId.fields.inited = 0;
  memset(&v265.fields.sortValue2B, 0, 40);
  memset(&v265.fields.sortValue0, 0, 40);
  v264 = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0;
  memset(&v265, 0, 24);
  fixedVal = 0;
  v43 = sub_1B64C4C(BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v43, 0LL);
  if ( !v43 )
    goto LABEL_172;
  *(_QWORD *)(v43 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v43 + 16), (int32_t)this, v46, v47);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v49, v50);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_172;
  p_userGameEntity = &this->fields.userGameEntity;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FB754 )
  {
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v45);
    byte_49FB754 = 1;
  }
  Instance = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_172;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        *(_DWORD *)(*(_QWORD *)(Instance + 184) + 16LL),
                        (const MethodInfo_30D6798 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_172;
  v52 = (QuestEntity_o *)Instance;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0, 0LL);
  *(_DWORD *)&v265.fields.svtId.fields.inited = 0;
  memset(&v265.fields.sortValue2B, 0, 40);
  v54 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_1B64C4C(System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v54,
    (const MethodInfo_351B0E8 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  object = (Il2CppObject *)v43;
  *(_QWORD *)(v43 + 24) = v54;
  v258 = (int64_t *)(v43 + 24);
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v43 + 24), (int32_t)v54, v55, v56);
  v57 = (System_Text_StringBuilder_o *)sub_1B64C4C(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v57, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v58 = LocalizationManager__Get((System_String_o *)StringLiteral_3833/*"CONSUME_TYPE_AP"*/, 0LL);
  v256 = v52;
  switch ( QuestEntity__GetConsumeType(v52, 0LL) )
  {
    case 1:
      v61 = v52;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3833/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_172;
      v62 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      *(_DWORD *)&v265.fields.svtId.fields.inited = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      actMax = (*p_userGameEntity)->fields.actMax;
      goto LABEL_137;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3834/*"CONSUME_TYPE_RP"*/, 0LL);
      v61 = v52;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      v62 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getRp(*p_userGameEntity, 0LL);
      *(_DWORD *)&v265.fields.svtId.fields.inited = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      if ( !byte_49FBAB4 )
      {
        sub_1B64A00(&BalanceConfig_TypeInfo, v45);
        byte_49FBAB4 = 1;
      }
      v64 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v64 = BalanceConfig_TypeInfo;
      }
      actMax = v64->static_fields->UerGameRpMax;
      goto LABEL_137;
    case 3:
      v253 = this;
      v265.fields.sortValue2B = (int64_t)StringLiteral_1/*""*/;
      v251 = (Il2CppObject *)StringLiteral_1/*""*/;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v265.fields.sortValue2B, (int32_t)StringLiteral_1/*""*/, v59, v60);
      *(_QWORD *)&v265.fields.isTermination = StringLiteral_1/*""*/;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v265.fields.isTermination, (int32_t)StringLiteral_1/*""*/, v65, v66);
      if ( !ItemConsumeEntity )
        goto LABEL_72;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      v67 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      v68 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_72;
      v69 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_172;
        if ( v69 >= itemIds->max_length )
          goto LABEL_173;
        if ( !v68 )
          goto LABEL_172;
        Instance = (int64_t)UserItemMaster__GetEntity((UserItemMaster_o *)v68, Instance, itemIds->m_Items[v69 + 1], 0LL);
        v71 = ItemConsumeEntity->fields.itemIds;
        if ( !v71 )
          goto LABEL_172;
        if ( v69 >= v71->max_length )
          goto LABEL_173;
        if ( !v67 )
          goto LABEL_172;
        v72 = Instance;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v67,
                              v71->m_Items[v69 + 1],
                              (const MethodInfo_30D6798 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_172;
        v73 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_172;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v72 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          qp = *(_DWORD *)(v72 + 28);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_172;
        if ( v69 >= nums->max_length )
          goto LABEL_173;
        if ( nums->m_Items[v69 + 1] > qp )
        {
          Instance = (int64_t)System_String__Concat_61385136((System_String_o *)StringLiteral_43/*"\n"*/, v73->fields.name, 0LL);
          if ( !v57 )
            goto LABEL_172;
          System_Text_StringBuilder__Append_60547032(v57, (System_String_o *)Instance, 0LL);
        }
        memset(&v265.fields.sortValue0, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v76 = LocalizationManager__Get((System_String_o *)StringLiteral_2953/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v265.fields.sortValue0 = (int64_t)System_String__Format(v76, (Il2CppObject *)v73->fields.name, 0LL);
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v265.fields.sortValue0, v265.fields.sortValue0, v77, v78);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2954/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v82 = ItemConsumeEntity->fields.nums;
        if ( !v82 )
          goto LABEL_172;
        if ( v69 >= v82->max_length )
          goto LABEL_173;
        v83 = (System_String_o *)Instance;
        LODWORD(v266.fields.useName) = v82->m_Items[v69 + 1];
        v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v266, v79, v80, v81);
        v265.fields.sortValue0B = (int64_t)System_String__Format(v83, v84, 0LL);
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v265.fields.sortValue0B, v265.fields.sortValue0B, v85, v86);
        v87 = LocalizationManager__Get((System_String_o *)StringLiteral_2956/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v265.fields.sortValue1 = (int64_t)System_String__Format(v87, (Il2CppObject *)v73->fields.name, 0LL);
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v265.fields.sortValue1, v265.fields.sortValue1, v88, v89);
        MaxNum = ItemEntity__GetMaxNum(v73, 0LL);
        v91 = MaxNum > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( MaxNum < 1 )
        {
          v104 = LocalizationManager__Get((System_String_o *)StringLiteral_2957/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v266.fields.useName) = qp;
          v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v266, v105, v106, v107);
          v101 = System_String__Format(v104, v108, 0LL);
        }
        else
        {
          v92 = LocalizationManager__Get((System_String_o *)StringLiteral_2958/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v266.fields.useName) = qp;
          v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v266, v93, v94, v95);
          v265.fields.dispLimitCount.fields.currentCryptoKey = ItemEntity__GetMaxNum(v73, 0LL);
          v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v265.fields.dispLimitCount, v97, v98, v99);
          v101 = System_String__Format_61399508(v92, v96, v100, 0LL);
        }
        v265.fields.sortStr1 = v101;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v265.fields.sortStr1, (int32_t)v101, v102, v103);
        LOBYTE(v265.fields.sortValue1B) = v91;
        Instance = *v258;
        v260 = *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v265.fields.sortValue0;
        v261 = *(_OWORD *)&v265.fields.sortValue1;
        sortValue1B = v265.fields.sortValue1B;
        if ( !Instance )
          goto LABEL_172;
        v265.fields.dispLimitCount = v260;
        *(_OWORD *)&v265.fields.isEnabled = v261;
        *(_QWORD *)&v265.fields.isMine = sortValue1B;
        v111 = *(_QWORD *)(Instance + 16);
        v112 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v111 )
          goto LABEL_172;
        v113 = *(int *)(Instance + 24);
        if ( (unsigned int)v113 >= *(_DWORD *)(v111 + 24) )
        {
          v117 = *(const MethodInfo_351BA0C **)(*(_QWORD *)(v112[4] + 192LL) + 112LL);
          *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v266.fields.useName = v265.fields.dispLimitCount;
          *(_OWORD *)&v266.fields.possessionName = *(_OWORD *)&v265.fields.isEnabled;
          *(_QWORD *)&v266.fields.isIndividualLimit = *(_QWORD *)&v265.fields.isMine;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
            &v266,
            v117);
        }
        else
        {
          *(_DWORD *)(Instance + 24) = v113 + 1;
          dispLimitCount = v265.fields.dispLimitCount;
          v115 = *(_OWORD *)&v265.fields.isEnabled;
          v116 = v111 + 40 * v113;
          *(_QWORD *)(v116 + 64) = *(_QWORD *)&v265.fields.isMine;
          *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v116 + 32) = dispLimitCount;
          *(_OWORD *)(v116 + 48) = v115;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v116 + 32), 0, v109, v110);
        }
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v69, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_72:
      if ( !v57 )
        goto LABEL_172;
      this = v253;
      v61 = v256;
      if ( System_Text_StringBuilder__get_Length(v57, 0LL) < 1 )
      {
        v62 = v251;
        actMax = 0;
LABEL_137:
        if ( QuestEntity__GetConsumeType(v61, 0LL) == 1
          || QuestEntity__GetConsumeType(v61, 0LL) == 2
          || QuestEntity__GetConsumeType(v61, 0LL) == 4 )
        {
          v193 = (MapControl_QuestInfo_o *)sub_1B64C4C(MapControl_QuestInfo_TypeInfo);
          MapControl_QuestInfo___ctor(v193, 0LL);
          if ( !v193 )
            goto LABEL_172;
          MapControl_QuestInfo__SetTerminalParamsValue(v193, 0LL);
          questId = v193->fields.questId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          fixedVal = -1;
          IsQuestClear_37290712 = CondType__IsQuestClear_37290712(questId, -1, 0, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49FB754 )
          {
            sub_1B64A00(&TerminalPramsManager_TypeInfo, v195);
            byte_49FB754 = 1;
          }
          v197 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v197 = TerminalPramsManager_TypeInfo;
          }
          QuestId_k__BackingField = v197->static_fields->_QuestId_k__BackingField;
          if ( !byte_49FB75F )
          {
            sub_1B64A00(&TerminalPramsManager_TypeInfo, v195);
            v197 = TerminalPramsManager_TypeInfo;
            byte_49FB75F = 1;
          }
          if ( !v197->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v197);
            v197 = TerminalPramsManager_TypeInfo;
          }
          CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                                    v61,
                                    QuestId_k__BackingField,
                                    v197->static_fields->_PhaseCnt_k__BackingField,
                                    !IsQuestClear_37290712,
                                    &fixedVal,
                                    0LL);
          Instance = (int64_t)MapControl_QuestInfo__GetMine(v193, 0LL);
          if ( !Instance )
            goto LABEL_172;
          QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
          v200 = fixedVal;
          v193->fields.costCalcVal = CampaignCostCalcValue;
          v193->fields._fixedCostVal_k__BackingField = v200;
          ActConsumeCost = MapControl_QuestInfo__GetActConsumeCost(v193, 0LL);
          v202 = *(_DWORD *)&v265.fields.svtId.fields.inited;
          v203 = ActConsumeCost;
          CostValueColor = QuestEntity__GetCostValueColor(
                             CampaignCostCalcValue,
                             (ActConsumeCost > actMax) | (unsigned __int8)(ActConsumeCost > *(_DWORD *)&v265.fields.svtId.fields.inited),
                             0LL);
          LODWORD(v266.fields.useName) = v203;
          v208 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v266, v205, v206, v207);
          v209 = (Il2CppObject *)System_String__Format(CostValueColor, v208, 0LL);
          v210 = System_Int32__ToString((int32_t)&v265.fields.svtId.fields.inited, 0LL);
          if ( actMax < v202 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v211 = LocalizationManager__Get((System_String_o *)StringLiteral_2124/*"AP_OVER_MAX_COLOR"*/, 0LL);
            LODWORD(v266.fields.useName) = *(_DWORD *)&v265.fields.svtId.fields.inited;
            v215 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v266, v212, v213, v214);
            v210 = System_String__Format(v211, v215, 0LL);
          }
          v216 = (Il2CppObject *)v210;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v217 = LocalizationManager__Get((System_String_o *)StringLiteral_2951/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0LL);
          v265.fields.sortValue2B = (int64_t)System_String__Format(v217, v62, 0LL);
          sub_1B649A4(
            (ServantStatusBattleListViewItem_o *)&v265.fields.sortValue2B,
            v265.fields.sortValue2B,
            v218,
            v219);
          v220 = LocalizationManager__Get((System_String_o *)StringLiteral_2952/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0LL);
          *(_QWORD *)&v265.fields.isTermination = System_String__Format(v220, v209, 0LL);
          sub_1B649A4(
            (ServantStatusBattleListViewItem_o *)&v265.fields.isTermination,
            *(int32_t *)&v265.fields.isTermination,
            v221,
            v222);
          v223 = LocalizationManager__Get((System_String_o *)StringLiteral_2949/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0LL);
          *(_QWORD *)&v265.fields.basePosition.fields.y = System_String__Format(v223, v62, 0LL);
          sub_1B649A4(
            (ServantStatusBattleListViewItem_o *)&v265.fields.basePosition.fields.y,
            SLODWORD(v265.fields.basePosition.fields.y),
            v224,
            v225);
          v226 = LocalizationManager__Get((System_String_o *)StringLiteral_2950/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0LL);
          LODWORD(v266.fields.useName) = actMax;
          v230 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v266, v227, v228, v229);
          v265.fields.viewObject = (struct ListViewObject_o *)System_String__Format_61399508(v226, v216, v230, 0LL);
          sub_1B649A4(
            (ServantStatusBattleListViewItem_o *)&v265.fields.viewObject,
            (int32_t)v265.fields.viewObject,
            v231,
            v232);
        }
        v266 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v265.fields.sortValue2B;
        Instance = *v258;
        if ( *v258 )
        {
          v233 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                   (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
                   (const MethodInfo_351DB04 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
          v259 = v266;
          BattleRetryConfirmComponent__SetCostValueText(this, &v259, v233, v234);
          BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v235);
          BattleRetryConfirmComponent__SetFriendshipUpItemUseButton(this, v236);
          v237 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
          System_Action___ctor(
            v237,
            object,
            Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__,
            0LL);
          v240 = BattleRetryConfirmComponent__WaitOneFrame(v238, v237, v239);
          UnityEngine_MonoBehaviour__StartCoroutine_69122748((UnityEngine_MonoBehaviour_o *)this, v240, 0LL);
          return 1;
        }
LABEL_172:
        sub_1B64C5C(Instance, v45);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v118 = LocalizationManager__Get((System_String_o *)StringLiteral_10833/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v119 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v57->klass->vtable._3_ToString.method)(
                               v57,
                               v57->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v120 = System_String__Format(v118, v119, 0LL);
      v121 = System_String__Concat_61385136(v120, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v122 = LocalizationManager__Get((System_String_o *)StringLiteral_2955/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v123 = System_String__Concat_61385136(v121, v122, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v124 = (CommonUI_o *)Instance;
      v125 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v125 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      _9__37_1 = v125->static_fields->__9__37_1;
      v127 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__37_1 )
      {
        if ( !v125->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v125);
          v125 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v242 = (Il2CppObject *)v125->static_fields->__9;
        _9__37_1 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
        System_Action___ctor(_9__37_1, v242, Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, 0LL);
        static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        static_fields->__9__37_1 = _9__37_1;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__37_1, (int32_t)_9__37_1, v244, v245);
      }
      if ( !v124 )
        goto LABEL_172;
      CommonUI__OpenNotificationDialog(v124, v127, v123, _9__37_1, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
      return 0;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3833/*"CONSUME_TYPE_AP"*/, 0LL);
      v252 = (Il2CppObject *)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      v254 = this;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      *(_DWORD *)&v265.fields.svtId.fields.inited = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      v250 = (*p_userGameEntity)->fields.actMax;
      v265.fields.sortValue2B = (int64_t)StringLiteral_1/*""*/;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v265.fields.sortValue2B, (int32_t)StringLiteral_1/*""*/, v128, v129);
      *(_QWORD *)&v265.fields.isTermination = StringLiteral_1/*""*/;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v265.fields.isTermination, (int32_t)StringLiteral_1/*""*/, v130, v131);
      if ( !ItemConsumeEntity )
        goto LABEL_126;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      v132 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      v133 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_126;
      v134 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        v135 = ItemConsumeEntity->fields.itemIds;
        if ( !v135 )
          goto LABEL_172;
        if ( v134 >= v135->max_length )
          goto LABEL_173;
        if ( !v133 )
          goto LABEL_172;
        Instance = (int64_t)UserItemMaster__GetEntity((UserItemMaster_o *)v133, Instance, v135->m_Items[v134 + 1], 0LL);
        v136 = ItemConsumeEntity->fields.itemIds;
        if ( !v136 )
          goto LABEL_172;
        if ( v134 >= v136->max_length )
          goto LABEL_173;
        if ( !v132 )
          goto LABEL_172;
        v137 = Instance;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v132,
                              v136->m_Items[v134 + 1],
                              (const MethodInfo_30D6798 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_172;
        v138 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_172;
          v139 = (*p_userGameEntity)->fields.qp;
        }
        else if ( v137 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          v139 = *(_DWORD *)(v137 + 28);
        }
        else
        {
          v139 = 0;
        }
        v140 = ItemConsumeEntity->fields.nums;
        if ( !v140 )
          goto LABEL_172;
        if ( v134 >= v140->max_length )
          goto LABEL_173;
        if ( v140->m_Items[v134 + 1] > v139 )
        {
          Instance = (int64_t)System_String__Concat_61385136(
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                v138->fields.name,
                                0LL);
          if ( !v57 )
            goto LABEL_172;
          System_Text_StringBuilder__Append_60547032(v57, (System_String_o *)Instance, 0LL);
        }
        v264 = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0;
        memset(&v265, 0, 24);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v141 = LocalizationManager__Get((System_String_o *)StringLiteral_2953/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        *(_QWORD *)&v264.fields.currentCryptoKey = System_String__Format(v141, (Il2CppObject *)v138->fields.name, 0LL);
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v264, v264.fields.currentCryptoKey, v142, v143);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2954/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v147 = ItemConsumeEntity->fields.nums;
        if ( !v147 )
          goto LABEL_172;
        if ( v134 >= v147->max_length )
LABEL_173:
          sub_1B64C64(Instance, v45);
        v148 = (System_String_o *)Instance;
        LODWORD(v266.fields.useName) = v147->m_Items[v134 + 1];
        v149 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v266, v144, v145, v146);
        *(_QWORD *)&v264.fields.fakeValue = System_String__Format(v148, v149, 0LL);
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v264.fields.fakeValue, v264.fields.fakeValue, v150, v151);
        v152 = LocalizationManager__Get((System_String_o *)StringLiteral_2956/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v265.klass = (ServantStatusBattleListViewItem_c *)System_String__Format(
                                                            v152,
                                                            (Il2CppObject *)v138->fields.name,
                                                            0LL);
        sub_1B649A4(&v265, (int32_t)v265.klass, v153, v154);
        v155 = ItemEntity__GetMaxNum(v138, 0LL);
        v156 = v155 > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v155 < 1 )
        {
          v169 = LocalizationManager__Get((System_String_o *)StringLiteral_2957/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v266.fields.useName) = v139;
          v173 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v266, v170, v171, v172);
          v166 = System_String__Format(v169, v173, 0LL);
        }
        else
        {
          v157 = LocalizationManager__Get((System_String_o *)StringLiteral_2958/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v266.fields.useName) = v139;
          v161 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v266, v158, v159, v160);
          v265.fields.dispLimitCount.fields.currentCryptoKey = ItemEntity__GetMaxNum(v138, 0LL);
          v165 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v265.fields.dispLimitCount, v162, v163, v164);
          v166 = System_String__Format_61399508(v157, v161, v165, 0LL);
        }
        v265.monitor = v166;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v265.monitor, (int32_t)v166, v167, v168);
        LOBYTE(v265.fields.selectNum) = v156;
        Instance = *v258;
        v260 = v264;
        v261 = *(_OWORD *)&v265.klass;
        sortValue1B = *(_QWORD *)&v265.fields.selectNum;
        if ( !Instance )
          goto LABEL_172;
        v265.fields.dispLimitCount = v260;
        *(_OWORD *)&v265.fields.isEnabled = v261;
        *(_QWORD *)&v265.fields.isMine = sortValue1B;
        v176 = *(_QWORD *)(Instance + 16);
        v177 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v176 )
          goto LABEL_172;
        v178 = *(int *)(Instance + 24);
        if ( (unsigned int)v178 >= *(_DWORD *)(v176 + 24) )
        {
          v182 = *(const MethodInfo_351BA0C **)(*(_QWORD *)(v177[4] + 192LL) + 112LL);
          *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v266.fields.useName = v265.fields.dispLimitCount;
          *(_OWORD *)&v266.fields.possessionName = *(_OWORD *)&v265.fields.isEnabled;
          *(_QWORD *)&v266.fields.isIndividualLimit = *(_QWORD *)&v265.fields.isMine;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
            &v266,
            v182);
        }
        else
        {
          *(_DWORD *)(Instance + 24) = v178 + 1;
          v179 = v265.fields.dispLimitCount;
          v180 = *(_OWORD *)&v265.fields.isEnabled;
          v181 = v176 + 40 * v178;
          *(_QWORD *)(v181 + 64) = *(_QWORD *)&v265.fields.isMine;
          *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v181 + 32) = v179;
          *(_OWORD *)(v181 + 48) = v180;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v181 + 32), 0, v174, v175);
        }
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v134, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_126:
      if ( !v57 )
        goto LABEL_172;
      this = v254;
      v61 = v256;
      if ( System_Text_StringBuilder__get_Length(v57, 0LL) >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v183 = LocalizationManager__Get((System_String_o *)StringLiteral_10833/*"QUEST_ITEM_COST_OVER"*/, 0LL);
        v184 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v57->klass->vtable._3_ToString.method)(
                                 v57,
                                 v57->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        v185 = System_String__Format(v183, v184, 0LL);
        v186 = System_String__Concat_61385136(v185, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
        v187 = LocalizationManager__Get((System_String_o *)StringLiteral_2955/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
        v188 = System_String__Concat_61385136(v186, v187, 0LL);
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v189 = (CommonUI_o *)Instance;
        v190 = BattleRetryConfirmComponent___c_TypeInfo;
        if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
          v190 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v191 = (System_String_o *)StringLiteral_1/*""*/;
        _9__37_2 = v190->static_fields->__9__37_2;
        if ( !_9__37_2 )
        {
          if ( !v190->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v190);
            v190 = BattleRetryConfirmComponent___c_TypeInfo;
          }
          v246 = (Il2CppObject *)v190->static_fields->__9;
          _9__37_2 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
          System_Action___ctor(_9__37_2, v246, Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, 0LL);
          v247 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
          v247->__9__37_2 = _9__37_2;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)&v247->__9__37_2, (int32_t)_9__37_2, v248, v249);
        }
        if ( v189 )
        {
          CommonUI__OpenNotificationDialog(v189, v191, v188, _9__37_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
          return 0;
        }
        goto LABEL_172;
      }
      v62 = v252;
      actMax = v250;
      goto LABEL_137;
    default:
      v61 = v52;
      actMax = 0;
      v62 = (Il2CppObject *)v58;
      goto LABEL_137;
  }
}


System_Collections_IEnumerator_o *__fastcall BattleRetryConfirmComponent__WaitOneFrame(
        BattleRetryConfirmComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A01CD9 & 1) == 0 )
  {
    sub_1B64A00(&BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo, action);
    byte_4A01CD9 = 1;
  }
  v4 = sub_1B64C4C(BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = action;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)action, v5, v6);
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
  int32_t v2; // w2
  int32_t v3; // w3
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
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v2, v3);
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

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
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
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A01CE6 & 1) == 0 )
  {
    sub_1B64A00(&BattleRetryConfirmComponent___c_TypeInfo, v1);
    byte_4A01CE6 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(BattleRetryConfirmComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleRetryConfirmComponent___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)BattleRetryConfirmComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A01CE7 & 1) == 0 )
  {
    sub_1B64A00(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1B64A00(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4A01CE7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2E25A24 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__37_2(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A01CE8 & 1) == 0 )
  {
    sub_1B64A00(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1B64A00(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4A01CE8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2E25A24 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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
  const MethodInfo *v5; // x2

  if ( (byte_4A01CE9 & 1) == 0 )
  {
    sub_1B64A00(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__,
      method);
    byte_4A01CE9 = 1;
  }
  rciItems = this->fields.rciItems;
  if ( !rciItems
    || (_4__this = this->fields.__4__this,
        rciItems = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(rciItems, (const MethodInfo_351DB04 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__),
        !_4__this) )
  {
    sub_1B64C5C(rciItems, method);
  }
  BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
    _4__this,
    (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)rciItems,
    v5);
}