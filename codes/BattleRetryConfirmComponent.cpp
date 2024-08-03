void __fastcall BattleRetryConfirmComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FF5C6 & 1) == 0 )
  {
    sub_1B640C8(&BattleRetryConfirmComponent_TypeInfo, v1);
    byte_49FF5C6 = 1;
  }
  *BattleRetryConfirmComponent_TypeInfo->static_fields = (struct BattleRetryConfirmComponent_StaticFields)xmmword_BA3790;
}


void __fastcall BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.CONFIRM_BUTTON_POSITION_ON_THREE.fields.x = xmmword_BA3110;
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
  int32_t v12; // w2
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FF5C1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, *(_QWORD *)&result);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_49FF5C1 = 1;
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
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v13,
        (System_Collections_Generic_List_object__o *)battleResultComponent,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v13,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v13.fields._current )
          sub_1B64324(0LL);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13.fields._current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v13,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_20:
    sub_1B64324(battleResultComponent);
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
    sub_1B64324(cancelLabel);
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
  __int64 v4; // x1
  struct RetryConfirmItem_array *doubleItems; // x8
  __int64 v6; // x20
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
    sub_1B64324(reqSingleParent);
  }
  reqSingleParent = (UnityEngine_GameObject_o *)this->fields.doubleAp;
  if ( !reqSingleParent )
    goto LABEL_14;
  RetryConfirmItem__CenteringAmountLabel((RetryConfirmItem_o *)reqSingleParent, 0LL);
  doubleItems = this->fields.doubleItems;
  if ( !doubleItems )
    goto LABEL_14;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = doubleItems->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1B6432C(reqSingleParent, v4);
    reqSingleParent = (UnityEngine_GameObject_o *)doubleItems->m_Items[v6];
    if ( reqSingleParent )
    {
      RetryConfirmItem__CenteringAmountLabel((RetryConfirmItem_o *)reqSingleParent, 0LL);
      doubleItems = this->fields.doubleItems;
      ++v6;
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
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v26; // x21
  unsigned __int64 v27; // x22
  Il2CppObject *v28; // x1
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 klass_low; // x10
  __int64 v32; // x8
  UILabel_o *mainText; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *confirmLabel; // x20
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FF5BF & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIButton__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIButton___ctor__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIButton__get_Count__, v9);
    sub_1B640C8(&System_Collections_Generic_List_UIButton__TypeInfo, v10);
    sub_1B640C8(&LocalizationManager_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_2946/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, v12);
    sub_1B640C8(&StringLiteral_2948/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, v13);
    sub_1B640C8(&StringLiteral_2947/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, v14);
    byte_49FF5BF = 1;
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
    v19 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_UIButton__TypeInfo,
                                                         v16,
                                                         v17);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v19;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.buttons, (int32_t)v19, v20, v21);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_2E3097C *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    if ( !root )
      goto LABEL_32;
    klass = root[1].klass;
    v26 = root;
    if ( (int)klass >= 1 )
    {
      v27 = 0LL;
      while ( 1 )
      {
        if ( v27 >= (unsigned int)klass )
          sub_1B6432C(root, v22);
        root = (UnityEngine_GameObject_o *)*p_buttons;
        if ( !*p_buttons )
          break;
        v28 = (Il2CppObject *)*((_QWORD *)&v26[1].monitor + v27);
        v29 = *(_QWORD *)&root->fields.m_CachedPtr;
        v30 = Method_System_Collections_Generic_List_UIButton__Add__;
        ++HIDWORD(root[1].klass);
        if ( !v29 )
          break;
        klass_low = SLODWORD(root[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v29 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)root,
            v28,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = v29 + 8 * klass_low;
          LODWORD(root[1].klass) = klass_low + 1;
          *(_QWORD *)(v32 + 32) = v28;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v32 + 32), (int32_t)v28, v23, v24);
        }
        LODWORD(klass) = v26[1].klass;
        if ( (__int64)++v27 >= (int)klass )
          goto LABEL_18;
      }
LABEL_32:
      sub_1B64324(root);
    }
LABEL_18:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_32;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)root,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  for ( i = v36;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0LL) )
  {
    if ( !i.fields._current )
      sub_1B64324(0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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
  __int64 v14; // x2
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v16; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w21
  BoostFunctionUtility_CallbackFunc_o *v19; // x23
  System_Collections_Generic_List_object__o *buttons; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FF5C0 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__, method);
    sub_1B640C8(&Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__, v3);
    sub_1B640C8(&BoostFunctionUtility_CallbackFunc_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    byte_49FF5C0 = 1;
  }
  v11 = Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__;
  memset(&v21, 0, sizeof(v21));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1B640E0(Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
  v12 = (System_Reflection_MethodBase_o *)sub_1B640AC(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v13);
    byte_49F9045 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v16->static_fields->_QuestId_k__BackingField;
  if ( !byte_49F9050 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v13);
    v16 = TerminalPramsManager_TypeInfo;
    byte_49F9050 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v16->static_fields->_PhaseCnt_k__BackingField;
  v19 = (BoostFunctionUtility_CallbackFunc_o *)sub_1B64314(BoostFunctionUtility_CallbackFunc_TypeInfo, v13, v14);
  BoostFunctionUtility_CallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__,
    0LL);
  if ( !Instance
    || (CommonUI__OpenBoostSupportRequestMenu(
          (CommonUI_o *)Instance,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          v19,
          1,
          0LL),
        (buttons = (System_Collections_Generic_List_object__o *)this->fields.buttons) == 0LL) )
  {
    sub_1B64324(buttons);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    buttons,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v21.fields._current )
      sub_1B64324(0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v21.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FF5B8 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleRetryConfirmComponent_OnClickCancel__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_49FF5B8 = 1;
  }
  v7 = Method_BattleRetryConfirmComponent_OnClickCancel__;
  memset(&v10, 0, sizeof(v10));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_BattleRetryConfirmComponent_OnClickCancel__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_1B64324(battleResultComponent);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)battleResultComponent,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v10.fields._current )
      sub_1B64324(0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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
  BattleResultComponent_o *battleResultComponent; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FF5B9 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleRetryConfirmComponent_OnClickConfirm__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_49FF5B9 = 1;
  }
  v7 = Method_BattleRetryConfirmComponent_OnClickConfirm__;
  memset(&v10, 0, sizeof(v10));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickConfirm__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B640E0(Method_BattleRetryConfirmComponent_OnClickConfirm__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_1B64324(battleResultComponent);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    (System_Collections_Generic_List_object__o *)battleResultComponent,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v10.fields._current )
      sub_1B64324(0LL);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v11; // w1
  PartyOrganizationUtility_c *v12; // x0

  if ( (byte_49FF5C5 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleRetryConfirmComponent_OnClickFriendshipUpItemUseButton__, method);
    sub_1B640C8(&PartyOrganizationUtility_TypeInfo, v3);
    byte_49FF5C5 = 1;
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
    v6 = (_QWORD *)sub_1B640E0(Method_BattleRetryConfirmComponent_OnClickFriendshipUpItemUseButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B640AC(v6, v6[4]);
  if ( !v7 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
    v12 = PartyOrganizationUtility_TypeInfo;
    if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v12 = PartyOrganizationUtility_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v12->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 1, 0LL);
    friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
    if ( friendshipUpItemUseButton )
    {
      v11 = 1;
      goto LABEL_16;
    }
LABEL_17:
    sub_1B64324(friendshipUpItemUseButton);
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
  v11 = 0;
LABEL_16:
  FriendshipUpItemUseItem__ChangeButtonState(friendshipUpItemUseButton, v11, 0LL);
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
    sub_1B64324(bgObj);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObj, 0LL);
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
  TerminalPramsManager_c *v13; // x0
  int32_t WarId_k__BackingField; // w22
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v17; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  BattleSetupInfo_o *v19; // x22
  UnityEngine_Object_o *boostSupportRequestLabel; // x20
  UILabel_o *v21; // x20
  UnityEngine_Object_o *v22; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FF5C2 & 1) == 0 )
  {
    sub_1B640C8(&BattleSetupInfo_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_EventDetailMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v9);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_11057/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, v11);
    sub_1B640C8(&StringLiteral_2945/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/, v12);
    byte_49FF5C2 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9048 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9048 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v13->static_fields->_WarId_k__BackingField;
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_49F9045 = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v13->static_fields->_QuestId_k__BackingField;
  if ( !byte_49F9050 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
    byte_49F9050 = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v13->static_fields->_PhaseCnt_k__BackingField;
  v17 = (BattleSetupInfo_o *)sub_1B64314(BattleSetupInfo_TypeInfo, method, v2);
  BattleSetupInfo___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_55;
  v19 = BattleSetupInfo__ConvertBattleSetupInfo(
          v17,
          WarId_k__BackingField,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          0,
          0,
          0,
          0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v19 || !Master_object )
    goto LABEL_55;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          v19->fields.eventId,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_46;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_55;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_object )
      goto LABEL_55;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_object,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0LL)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11057/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0LL) == 1 )
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
      sub_1B64324(Master_object);
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
        sub_1B6432C(this, value);
      if ( *i )
      {
        if ( v7 >= max_length )
          goto LABEL_13;
        v11 = &v9->obj.klass + v7;
        v12 = (UnityEngine_MonoBehaviour_o *)v11[4];
        if ( !v12 )
          break;
        v13 = RetryConfirmItem__SetCondensedScalePossessionAmount((RetryConfirmItem_o *)v11[4], 0LL);
        this = (BattleRetryConfirmComponent_o *)UnityEngine_MonoBehaviour__StartCoroutine_69113008(v12, v13, 0LL);
      }
      LODWORD(v4) = value->max_length;
      if ( (__int64)++v7 >= (int)v4 )
        return;
    }
LABEL_14:
    sub_1B64324(this);
  }
}


void __fastcall BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *items,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *reqSingleParent; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct RetryConfirmItem_o *singleItem; // x20
  UnityEngine_GameObject_o *v10; // x21
  _BOOL8 activeSelf; // x0
  const MethodInfo *v12; // x3
  RetryConfirmItem_array **p_itemsa; // x2
  __int64 v14; // x0
  RetryConfirmItem_array *itemsa; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FF5C4 & 1) == 0 )
  {
    sub_1B640C8(&RetryConfirmItem___TypeInfo, items);
    byte_49FF5C4 = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_29;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL) )
  {
    reqSingleParent = (UnityEngine_GameObject_o *)sub_1B64170(RetryConfirmItem___TypeInfo, 1LL);
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
    reqSingleParent = (UnityEngine_GameObject_o *)sub_1B64170(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItem = this->fields.singleItemWithUseItemButton;
LABEL_11:
      v10 = reqSingleParent;
      if ( singleItem )
      {
        reqSingleParent = (UnityEngine_GameObject_o *)sub_1B64204(singleItem, reqSingleParent->klass->_1.element_class);
        if ( !reqSingleParent )
        {
          v14 = sub_1B64348(0LL);
          sub_1B641F0(v14, 0LL);
        }
      }
      if ( !LODWORD(v10[1].klass) )
        sub_1B6432C(reqSingleParent, v6);
      v10[1].monitor = singleItem;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10[1].monitor, (int32_t)singleItem, v7, v8);
      itemsa = (RetryConfirmItem_array *)v10;
      p_itemsa = &itemsa;
      goto LABEL_15;
    }
LABEL_29:
    sub_1B64324(reqSingleParent);
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
      v12);
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
  if ( (byte_49FF5BE & 1) == 0 )
  {
    this = (BattleRetryConfirmComponent_o *)sub_1B640C8(&StringLiteral_1/*""*/, costPoint);
    byte_49FF5BE = 1;
  }
  if ( !items )
    sub_1B64324(this);
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
        sub_1B6432C(v8, v9);
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
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  struct RetryConfirmItem_array *doubleItems; // x8
  unsigned __int64 v20; // x21
  BattleRetryConfirmComponent_RetryConfirmItemStr_o *m_Items; // x22
  __int64 v22; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v24; // x10
  __int128 v25; // q0
  __int128 v26; // q1
  const MethodInfo *v27; // x3
  __int128 v28; // q0
  __int128 v29; // q1
  struct RetryConfirmItem_array *doubleItemsWithUseItemButton; // x8
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v31; // [xsp+0h] [xbp-130h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v32; // [xsp+30h] [xbp-100h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v33; // [xsp+60h] [xbp-D0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v34; // [xsp+90h] [xbp-A0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v35; // [xsp+C0h] [xbp-70h] BYREF

  if ( (byte_49FF5BC & 1) == 0 )
  {
    sub_1B640C8(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_49FF5BC = 1;
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
LABEL_23:
    sub_1B64324(reqSingleParent);
  v20 = 0LL;
  m_Items = items->m_Items;
  v22 = 32LL;
  while ( 1 )
  {
    max_length = doubleItems->max_length;
    if ( (__int64)v20 >= (int)max_length )
      break;
    if ( !items )
      goto LABEL_23;
    v24 = items->max_length;
    if ( (__int64)v20 >= (int)v24 )
      break;
    if ( v20 >= v24 )
      goto LABEL_25;
    v26 = *(_OWORD *)&m_Items->fields.useName;
    v25 = *(_OWORD *)&m_Items->fields.possessionName;
    *(_QWORD *)&v33.fields.isIndividualLimit = *(_QWORD *)&m_Items->fields.isIndividualLimit;
    *(_OWORD *)&v33.fields.useName = v26;
    *(_OWORD *)&v33.fields.possessionName = v25;
    if ( v20 >= max_length )
      goto LABEL_25;
    BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
      (BattleRetryConfirmComponent_o *)reqSingleParent,
      &v33,
      (RetryConfirmItem_o **)((char *)doubleItems + v22),
      v18);
    if ( v20 >= items->max_length )
      goto LABEL_25;
    v29 = *(_OWORD *)&m_Items->fields.useName;
    v28 = *(_OWORD *)&m_Items->fields.possessionName;
    *(_QWORD *)&v32.fields.isIndividualLimit = *(_QWORD *)&m_Items->fields.isIndividualLimit;
    *(_OWORD *)&v32.fields.useName = v29;
    *(_OWORD *)&v32.fields.possessionName = v28;
    doubleItemsWithUseItemButton = this->fields.doubleItemsWithUseItemButton;
    if ( !doubleItemsWithUseItemButton )
      goto LABEL_23;
    v31 = v32;
    if ( v20 >= doubleItemsWithUseItemButton->max_length )
LABEL_25:
      sub_1B6432C(reqSingleParent, v17);
    ++v20;
    ++m_Items;
    BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
      (BattleRetryConfirmComponent_o *)reqSingleParent,
      &v31,
      (RetryConfirmItem_o **)((char *)doubleItemsWithUseItemButton + v22),
      v27);
    doubleItems = this->fields.doubleItems;
    v22 += 8LL;
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

  if ( (byte_49FF5BB & 1) == 0 )
  {
    sub_1B640C8(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_49FF5BB = 1;
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
    sub_1B64324(reqSingleParent);
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
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  struct RetryConfirmItem_array *tripleItems; // x8
  unsigned __int64 v20; // x21
  BattleRetryConfirmComponent_RetryConfirmItemStr_o *m_Items; // x22
  __int64 v22; // x23
  unsigned __int64 max_length; // x9
  unsigned __int64 v24; // x10
  __int128 v25; // q0
  __int128 v26; // q1
  const MethodInfo *v27; // x3
  __int128 v28; // q0
  __int128 v29; // q1
  struct RetryConfirmItem_array *tripleItemsWithUseItemButton; // x8
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v31; // [xsp+0h] [xbp-130h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v32; // [xsp+30h] [xbp-100h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v33; // [xsp+60h] [xbp-D0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v34; // [xsp+90h] [xbp-A0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v35; // [xsp+C0h] [xbp-70h] BYREF

  if ( (byte_49FF5BD & 1) == 0 )
  {
    sub_1B640C8(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_49FF5BD = 1;
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
LABEL_23:
    sub_1B64324(reqSingleParent);
  v20 = 0LL;
  m_Items = items->m_Items;
  v22 = 32LL;
  while ( 1 )
  {
    max_length = tripleItems->max_length;
    if ( (__int64)v20 >= (int)max_length )
      break;
    if ( !items )
      goto LABEL_23;
    v24 = items->max_length;
    if ( (__int64)v20 >= (int)v24 )
      break;
    if ( v20 >= v24 )
      goto LABEL_25;
    v26 = *(_OWORD *)&m_Items->fields.useName;
    v25 = *(_OWORD *)&m_Items->fields.possessionName;
    *(_QWORD *)&v33.fields.isIndividualLimit = *(_QWORD *)&m_Items->fields.isIndividualLimit;
    *(_OWORD *)&v33.fields.useName = v26;
    *(_OWORD *)&v33.fields.possessionName = v25;
    if ( v20 >= max_length )
      goto LABEL_25;
    BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
      (BattleRetryConfirmComponent_o *)reqSingleParent,
      &v33,
      (RetryConfirmItem_o **)((char *)tripleItems + v22),
      v18);
    if ( v20 >= items->max_length )
      goto LABEL_25;
    v29 = *(_OWORD *)&m_Items->fields.useName;
    v28 = *(_OWORD *)&m_Items->fields.possessionName;
    *(_QWORD *)&v32.fields.isIndividualLimit = *(_QWORD *)&m_Items->fields.isIndividualLimit;
    *(_OWORD *)&v32.fields.useName = v29;
    *(_OWORD *)&v32.fields.possessionName = v28;
    tripleItemsWithUseItemButton = this->fields.tripleItemsWithUseItemButton;
    if ( !tripleItemsWithUseItemButton )
      goto LABEL_23;
    v31 = v32;
    if ( v20 >= tripleItemsWithUseItemButton->max_length )
LABEL_25:
      sub_1B6432C(reqSingleParent, v17);
    ++v20;
    ++m_Items;
    BattleRetryConfirmComponent__SetRetryConfirmItemTextWithStr(
      (BattleRetryConfirmComponent_o *)reqSingleParent,
      &v31,
      (RetryConfirmItem_o **)((char *)tripleItemsWithUseItemButton + v22),
      v27);
    tripleItems = this->fields.tripleItems;
    v22 += 8LL;
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
  char v8; // w20
  PartyOrganizationUtility_c *v9; // x0
  UnityEngine_GameObject_o *v10; // x20
  UnityEngine_GameObject_o *v11; // x20
  UILabel_o *mainText; // x19
  struct BattleRetryConfirmComponent_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v14; // x20
  UnityEngine_GameObject_o *v15; // x20
  char v16; // w20
  BattleRetryConfirmComponent_c *v17; // x8
  UnityEngine_GameObject_o *v18; // x20
  UnityEngine_GameObject_o *v19; // x20
  char v20; // w20
  __int64 v21; // x9

  if ( (byte_49FF5C3 & 1) == 0 )
  {
    sub_1B640C8(&BattleRetryConfirmComponent_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&PartyOrganizationUtility_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    byte_49FF5C3 = 1;
  }
  friendshipUpItemUseButton = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemUseButton, 0LL, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL);
      if ( this->fields.friendshipUpItemUseButton )
      {
        v8 = (char)Instance;
        Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                   0LL);
        if ( Instance )
        {
          if ( (v8 & 1) != 0 )
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
            v9 = PartyOrganizationUtility_TypeInfo;
            if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
              v9 = PartyOrganizationUtility_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v9->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
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
                    v10 = (UnityEngine_GameObject_o *)Instance;
                    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                               0LL);
                    if ( Instance )
                    {
                      Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                 (UnityEngine_GameObject_o *)Instance,
                                                                 0LL);
                      if ( v10 )
                      {
                        UnityEngine_GameObject__SetActive(v10, ((unsigned __int8)Instance & 1) == 0, 0LL);
                        Instance = (PartyOrganizationUtility_o *)this->fields.reqSingleParentWithUseItemButton;
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
                                UnityEngine_GameObject__SetActive(v11, (unsigned __int8)Instance & 1, 0LL);
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
                          v14 = (UnityEngine_GameObject_o *)Instance;
                          Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                     0LL);
                          if ( Instance )
                          {
                            Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                       (UnityEngine_GameObject_o *)Instance,
                                                                       0LL);
                            if ( v14 )
                            {
                              UnityEngine_GameObject__SetActive(v14, ((unsigned __int8)Instance & 1) == 0, 0LL);
                              Instance = (PartyOrganizationUtility_o *)this->fields.reqDoubleParentWithUseItemButton;
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
                                      UnityEngine_GameObject__SetActive(v15, (unsigned __int8)Instance & 1, 0LL);
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
                                          v16 = (char)Instance;
                                          v17 = BattleRetryConfirmComponent_TypeInfo;
                                          if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                            v17 = BattleRetryConfirmComponent_TypeInfo;
                                          }
                                          if ( mainText )
                                          {
                                            static_fields = v17->static_fields;
                                            if ( (v16 & 1) != 0 )
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
                          v18 = (UnityEngine_GameObject_o *)Instance;
                          Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                     0LL);
                          if ( Instance )
                          {
                            Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                       (UnityEngine_GameObject_o *)Instance,
                                                                       0LL);
                            if ( v18 )
                            {
                              UnityEngine_GameObject__SetActive(v18, ((unsigned __int8)Instance & 1) == 0, 0LL);
                              Instance = (PartyOrganizationUtility_o *)this->fields.reqTripleParentWithUseItemButton;
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
                                      UnityEngine_GameObject__SetActive(v19, (unsigned __int8)Instance & 1, 0LL);
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
                                          v20 = (char)Instance;
                                          if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                          if ( mainText )
                                          {
                                            v21 = 4LL;
                                            if ( (v20 & 1) != 0 )
                                              v21 = 12LL;
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)((char *)BattleRetryConfirmComponent_TypeInfo->static_fields + v21);
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
    sub_1B64324(Instance);
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
    sub_1B64324(this);
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
  __int64 v44; // x24
  int64_t Instance; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x1
  Il2CppObject *MasterData_object; // x19
  QuestEntity_o *v53; // x29
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  __int64 v55; // x1
  __int64 v56; // x2
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v57; // x19
  int32_t v58; // w2
  int32_t v59; // w3
  __int64 v60; // x1
  __int64 v61; // x2
  System_Text_StringBuilder_o *v62; // x26
  System_String_o *v63; // x19
  int32_t v64; // w2
  int32_t v65; // w3
  QuestEntity_o *v66; // x25
  Il2CppObject *v67; // x26
  int32_t actMax; // w27
  __int64 v69; // x1
  BalanceConfig_c *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  Il2CppObject *v73; // x28
  Il2CppObject *v74; // x29
  il2cpp_array_size_t v75; // w22
  __int64 v76; // x1
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v78; // x8
  int64_t v79; // x24
  ItemEntity_o *v80; // x25
  int32_t qp; // w20
  struct System_Int32_array *nums; // x8
  System_String_o *v83; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  struct System_Int32_array *v86; // x8
  System_String_o *v87; // x24
  Il2CppObject *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  int32_t MaxNum; // w24
  bool v95; // w19
  System_String_o *v96; // x24
  Il2CppObject *v97; // x23
  Il2CppObject *v98; // x0
  struct System_String_o *v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x23
  Il2CppObject *v103; // x0
  int32_t v104; // w2
  int32_t v105; // w3
  __int64 v106; // x8
  _QWORD *v107; // x10
  __int64 v108; // x9
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o dispLimitCount; // q0
  __int128 v110; // q1
  __int64 v111; // x8
  const MethodInfo_3519118 *v112; // x2
  System_String_o *v113; // x19
  Il2CppObject *v114; // x0
  System_String_o *v115; // x0
  System_String_o *v116; // x19
  System_String_o *v117; // x0
  System_String_o *v118; // x19
  __int64 v119; // x1
  __int64 v120; // x2
  CommonUI_o *v121; // x20
  BattleRetryConfirmComponent___c_c *v122; // x8
  System_Action_o *_9__37_1; // x22
  System_String_o *v124; // x21
  int32_t v125; // w2
  int32_t v126; // w3
  int32_t v127; // w2
  int32_t v128; // w3
  Il2CppObject *v129; // x28
  Il2CppObject *v130; // x29
  il2cpp_array_size_t v131; // w22
  struct System_Int32_array *v132; // x8
  struct System_Int32_array *v133; // x8
  int64_t v134; // x24
  ItemEntity_o *v135; // x25
  int32_t v136; // w20
  struct System_Int32_array *v137; // x8
  System_String_o *v138; // x0
  int32_t v139; // w2
  int32_t v140; // w3
  struct System_Int32_array *v141; // x8
  System_String_o *v142; // x24
  Il2CppObject *v143; // x0
  int32_t v144; // w2
  int32_t v145; // w3
  System_String_o *v146; // x0
  int32_t v147; // w2
  int32_t v148; // w3
  int32_t v149; // w24
  bool v150; // w19
  System_String_o *v151; // x24
  Il2CppObject *v152; // x23
  Il2CppObject *v153; // x0
  System_String_o *v154; // x0
  int32_t v155; // w2
  int32_t v156; // w3
  System_String_o *v157; // x23
  Il2CppObject *v158; // x0
  int32_t v159; // w2
  int32_t v160; // w3
  __int64 v161; // x8
  _QWORD *v162; // x10
  __int64 v163; // x9
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v164; // q0
  __int128 v165; // q1
  __int64 v166; // x8
  const MethodInfo_3519118 *v167; // x2
  System_String_o *v168; // x19
  Il2CppObject *v169; // x0
  System_String_o *v170; // x0
  System_String_o *v171; // x19
  System_String_o *v172; // x0
  System_String_o *v173; // x19
  __int64 v174; // x1
  __int64 v175; // x2
  CommonUI_o *v176; // x20
  BattleRetryConfirmComponent___c_c *v177; // x8
  System_String_o *v178; // x21
  System_Action_o *_9__37_2; // x22
  __int64 v180; // x1
  __int64 v181; // x2
  MapControl_QuestInfo_o *v182; // x19
  int32_t questId; // w20
  __int64 v184; // x1
  bool IsQuestClear_37285996; // w20
  TerminalPramsManager_c *v186; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t CampaignCostCalcValue; // w20
  int32_t v189; // w8
  int32_t ActConsumeCost; // w0
  int32_t v191; // w22
  int32_t v192; // w19
  System_String_o *CostValueColor; // x20
  Il2CppObject *v194; // x0
  Il2CppObject *v195; // x20
  System_String_o *v196; // x0
  System_String_o *v197; // x19
  Il2CppObject *v198; // x0
  Il2CppObject *v199; // x19
  System_String_o *v200; // x0
  int32_t v201; // w2
  int32_t v202; // w3
  System_String_o *v203; // x0
  int32_t v204; // w2
  int32_t v205; // w3
  System_String_o *v206; // x0
  int32_t v207; // w2
  int32_t v208; // w3
  System_String_o *v209; // x20
  Il2CppObject *v210; // x0
  int32_t v211; // w2
  int32_t v212; // w3
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v213; // x0
  const MethodInfo *v214; // x3
  const MethodInfo *v215; // x1
  const MethodInfo *v216; // x1
  __int64 v217; // x1
  __int64 v218; // x2
  System_Action_o *v219; // x19
  BattleRetryConfirmComponent_o *v220; // x0
  const MethodInfo *v221; // x2
  System_Collections_IEnumerator_o *v222; // x0
  Il2CppObject *v224; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int32_t v226; // w2
  int32_t v227; // w3
  Il2CppObject *v228; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v229; // x0
  int32_t v230; // w2
  int32_t v231; // w3
  int32_t v232; // [xsp+44h] [xbp-1FCh]
  Il2CppObject *v233; // [xsp+48h] [xbp-1F8h]
  Il2CppObject *v234; // [xsp+48h] [xbp-1F8h]
  BattleRetryConfirmComponent_o *v235; // [xsp+50h] [xbp-1F0h]
  BattleRetryConfirmComponent_o *v236; // [xsp+50h] [xbp-1F0h]
  Il2CppObject *object; // [xsp+58h] [xbp-1E8h]
  QuestEntity_o *v238; // [xsp+60h] [xbp-1E0h]
  UserGameEntity_o **p_userGameEntity; // [xsp+80h] [xbp-1C0h]
  int64_t *v240; // [xsp+88h] [xbp-1B8h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v241; // [xsp+90h] [xbp-1B0h] BYREF
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v242; // [xsp+C0h] [xbp-180h]
  __int128 v243; // [xsp+D0h] [xbp-170h]
  int64_t sortValue1B; // [xsp+E0h] [xbp-160h]
  int32_t fixedVal; // [xsp+ECh] [xbp-154h] BYREF
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v246; // [xsp+F0h] [xbp-150h] BYREF
  ServantStatusBattleListViewItem_o v247; // [xsp+100h] [xbp-140h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v248; // [xsp+1B0h] [xbp-90h] BYREF

  if ( (byte_49FF5B7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&CondType_TypeInfo, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v7);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v9);
    sub_1B640C8(&int_TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&NetworkManager_TypeInfo, v16);
    sub_1B640C8(&MapControl_QuestInfo_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v20);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v21);
    sub_1B640C8(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, v22);
    sub_1B640C8(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, v23);
    sub_1B640C8(&Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__, v24);
    sub_1B640C8(&BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo, v25);
    sub_1B640C8(&BattleRetryConfirmComponent___c_TypeInfo, v26);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v27);
    sub_1B640C8(&StringLiteral_2954/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, v28);
    sub_1B640C8(&StringLiteral_3832/*"CONSUME_TYPE_AP"*/, v29);
    sub_1B640C8(&StringLiteral_10831/*"QUEST_ITEM_COST_OVER"*/, v30);
    sub_1B640C8(&StringLiteral_2952/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, v31);
    sub_1B640C8(&StringLiteral_2953/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, v32);
    sub_1B640C8(&StringLiteral_2124/*"AP_OVER_MAX_COLOR"*/, v33);
    sub_1B640C8(&StringLiteral_3833/*"CONSUME_TYPE_RP"*/, v34);
    sub_1B640C8(&StringLiteral_2958/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, v35);
    sub_1B640C8(&StringLiteral_2957/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, v36);
    sub_1B640C8(&StringLiteral_44/*"\n\n"*/, v37);
    sub_1B640C8(&StringLiteral_2955/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v38);
    sub_1B640C8(&StringLiteral_2949/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, v39);
    sub_1B640C8(&StringLiteral_1/*""*/, v40);
    sub_1B640C8(&StringLiteral_2956/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, v41);
    sub_1B640C8(&StringLiteral_2950/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, v42);
    sub_1B640C8(&StringLiteral_2951/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, v43);
    byte_49FF5B7 = 1;
  }
  *(_DWORD *)&v247.fields.svtId.fields.inited = 0;
  memset(&v247.fields.sortValue2B, 0, 40);
  memset(&v247.fields.sortValue0, 0, 40);
  v246 = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0;
  memset(&v247, 0, 24);
  fixedVal = 0;
  v44 = sub_1B64314(BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v44, 0LL);
  if ( !v44 )
    goto LABEL_172;
  *(_QWORD *)(v44 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 16), (int32_t)this, v46, v47);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v49, v50);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_172;
  p_userGameEntity = &this->fields.userGameEntity;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v51);
    byte_49F9045 = 1;
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
                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_172;
  v53 = (QuestEntity_o *)Instance;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0, 0LL);
  *(_DWORD *)&v247.fields.svtId.fields.inited = 0;
  memset(&v247.fields.sortValue2B, 0, 40);
  v57 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_1B64314(
                                                                                                System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo,
                                                                                                v55,
                                                                                                v56);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v57,
    (const MethodInfo_35187F4 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  object = (Il2CppObject *)v44;
  *(_QWORD *)(v44 + 24) = v57;
  v240 = (int64_t *)(v44 + 24);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v44 + 24), (int32_t)v57, v58, v59);
  v62 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v60, v61);
  System_Text_StringBuilder___ctor(v62, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v63 = LocalizationManager__Get((System_String_o *)StringLiteral_3832/*"CONSUME_TYPE_AP"*/, 0LL);
  v238 = v53;
  switch ( QuestEntity__GetConsumeType(v53, 0LL) )
  {
    case 1:
      v66 = v53;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3832/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_172;
      v67 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      *(_DWORD *)&v247.fields.svtId.fields.inited = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      actMax = (*p_userGameEntity)->fields.actMax;
      goto LABEL_137;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3833/*"CONSUME_TYPE_RP"*/, 0LL);
      v66 = v53;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      v67 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getRp(*p_userGameEntity, 0LL);
      *(_DWORD *)&v247.fields.svtId.fields.inited = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      if ( !byte_49F93A5 )
      {
        sub_1B640C8(&BalanceConfig_TypeInfo, v69);
        byte_49F93A5 = 1;
      }
      v70 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v70 = BalanceConfig_TypeInfo;
      }
      actMax = v70->static_fields->UerGameRpMax;
      goto LABEL_137;
    case 3:
      v235 = this;
      v247.fields.sortValue2B = (int64_t)StringLiteral_1/*""*/;
      v233 = (Il2CppObject *)StringLiteral_1/*""*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v247.fields.sortValue2B, (int32_t)StringLiteral_1/*""*/, v64, v65);
      *(_QWORD *)&v247.fields.isTermination = StringLiteral_1/*""*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v247.fields.isTermination, (int32_t)StringLiteral_1/*""*/, v71, v72);
      if ( !ItemConsumeEntity )
        goto LABEL_72;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      v73 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      v74 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_72;
      v75 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_172;
        if ( v75 >= itemIds->max_length )
          goto LABEL_173;
        if ( !v74 )
          goto LABEL_172;
        Instance = (int64_t)UserItemMaster__GetEntity((UserItemMaster_o *)v74, Instance, itemIds->m_Items[v75 + 1], 0LL);
        v78 = ItemConsumeEntity->fields.itemIds;
        if ( !v78 )
          goto LABEL_172;
        if ( v75 >= v78->max_length )
          goto LABEL_173;
        if ( !v73 )
          goto LABEL_172;
        v79 = Instance;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v73,
                              v78->m_Items[v75 + 1],
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_172;
        v80 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_172;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v79 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          qp = *(_DWORD *)(v79 + 28);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_172;
        if ( v75 >= nums->max_length )
          goto LABEL_173;
        if ( nums->m_Items[v75 + 1] > qp )
        {
          Instance = (int64_t)System_String__Concat_61375396((System_String_o *)StringLiteral_43/*"\n"*/, v80->fields.name, 0LL);
          if ( !v62 )
            goto LABEL_172;
          System_Text_StringBuilder__Append_60536548(v62, (System_String_o *)Instance, 0LL);
        }
        memset(&v247.fields.sortValue0, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v83 = LocalizationManager__Get((System_String_o *)StringLiteral_2953/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v247.fields.sortValue0 = (int64_t)System_String__Format(v83, (Il2CppObject *)v80->fields.name, 0LL);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v247.fields.sortValue0, v247.fields.sortValue0, v84, v85);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2954/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v86 = ItemConsumeEntity->fields.nums;
        if ( !v86 )
          goto LABEL_172;
        if ( v75 >= v86->max_length )
          goto LABEL_173;
        v87 = (System_String_o *)Instance;
        LODWORD(v248.fields.useName) = v86->m_Items[v75 + 1];
        v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v248);
        v247.fields.sortValue0B = (int64_t)System_String__Format(v87, v88, 0LL);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v247.fields.sortValue0B, v247.fields.sortValue0B, v89, v90);
        v91 = LocalizationManager__Get((System_String_o *)StringLiteral_2956/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v247.fields.sortValue1 = (int64_t)System_String__Format(v91, (Il2CppObject *)v80->fields.name, 0LL);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v247.fields.sortValue1, v247.fields.sortValue1, v92, v93);
        MaxNum = ItemEntity__GetMaxNum(v80, 0LL);
        v95 = MaxNum > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( MaxNum < 1 )
        {
          v102 = LocalizationManager__Get((System_String_o *)StringLiteral_2957/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v248.fields.useName) = qp;
          v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v248);
          v99 = System_String__Format(v102, v103, 0LL);
        }
        else
        {
          v96 = LocalizationManager__Get((System_String_o *)StringLiteral_2958/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v248.fields.useName) = qp;
          v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v248);
          v247.fields.dispLimitCount.fields.currentCryptoKey = ItemEntity__GetMaxNum(v80, 0LL);
          v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v247.fields.dispLimitCount);
          v99 = System_String__Format_61389768(v96, v97, v98, 0LL);
        }
        v247.fields.sortStr1 = v99;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v247.fields.sortStr1, (int32_t)v99, v100, v101);
        LOBYTE(v247.fields.sortValue1B) = v95;
        Instance = *v240;
        v242 = *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v247.fields.sortValue0;
        v243 = *(_OWORD *)&v247.fields.sortValue1;
        sortValue1B = v247.fields.sortValue1B;
        if ( !Instance )
          goto LABEL_172;
        v247.fields.dispLimitCount = v242;
        *(_OWORD *)&v247.fields.isEnabled = v243;
        *(_QWORD *)&v247.fields.isMine = sortValue1B;
        v106 = *(_QWORD *)(Instance + 16);
        v107 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v106 )
          goto LABEL_172;
        v108 = *(int *)(Instance + 24);
        if ( (unsigned int)v108 >= *(_DWORD *)(v106 + 24) )
        {
          v112 = *(const MethodInfo_3519118 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL);
          *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v248.fields.useName = v247.fields.dispLimitCount;
          *(_OWORD *)&v248.fields.possessionName = *(_OWORD *)&v247.fields.isEnabled;
          *(_QWORD *)&v248.fields.isIndividualLimit = *(_QWORD *)&v247.fields.isMine;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
            &v248,
            v112);
        }
        else
        {
          *(_DWORD *)(Instance + 24) = v108 + 1;
          dispLimitCount = v247.fields.dispLimitCount;
          v110 = *(_OWORD *)&v247.fields.isEnabled;
          v111 = v106 + 40 * v108;
          *(_QWORD *)(v111 + 64) = *(_QWORD *)&v247.fields.isMine;
          *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v111 + 32) = dispLimitCount;
          *(_OWORD *)(v111 + 48) = v110;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v111 + 32), 0, v104, v105);
        }
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v75, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_72:
      if ( !v62 )
        goto LABEL_172;
      this = v235;
      v66 = v238;
      if ( System_Text_StringBuilder__get_Length(v62, 0LL) < 1 )
      {
        v67 = v233;
        actMax = 0;
LABEL_137:
        if ( QuestEntity__GetConsumeType(v66, 0LL) == 1
          || QuestEntity__GetConsumeType(v66, 0LL) == 2
          || QuestEntity__GetConsumeType(v66, 0LL) == 4 )
        {
          v182 = (MapControl_QuestInfo_o *)sub_1B64314(MapControl_QuestInfo_TypeInfo, v180, v181);
          MapControl_QuestInfo___ctor(v182, 0LL);
          if ( !v182 )
            goto LABEL_172;
          MapControl_QuestInfo__SetTerminalParamsValue(v182, 0LL);
          questId = v182->fields.questId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          fixedVal = -1;
          IsQuestClear_37285996 = CondType__IsQuestClear_37285996(questId, -1, 0, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49F9045 )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, v184);
            byte_49F9045 = 1;
          }
          v186 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v186 = TerminalPramsManager_TypeInfo;
          }
          QuestId_k__BackingField = v186->static_fields->_QuestId_k__BackingField;
          if ( !byte_49F9050 )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, v184);
            v186 = TerminalPramsManager_TypeInfo;
            byte_49F9050 = 1;
          }
          if ( !v186->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v186);
            v186 = TerminalPramsManager_TypeInfo;
          }
          CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                                    v66,
                                    QuestId_k__BackingField,
                                    v186->static_fields->_PhaseCnt_k__BackingField,
                                    !IsQuestClear_37285996,
                                    &fixedVal,
                                    0LL);
          Instance = (int64_t)MapControl_QuestInfo__GetMine(v182, 0LL);
          if ( !Instance )
            goto LABEL_172;
          QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
          v189 = fixedVal;
          v182->fields.costCalcVal = CampaignCostCalcValue;
          v182->fields._fixedCostVal_k__BackingField = v189;
          ActConsumeCost = MapControl_QuestInfo__GetActConsumeCost(v182, 0LL);
          v191 = *(_DWORD *)&v247.fields.svtId.fields.inited;
          v192 = ActConsumeCost;
          CostValueColor = QuestEntity__GetCostValueColor(
                             CampaignCostCalcValue,
                             (ActConsumeCost > actMax) | (unsigned __int8)(ActConsumeCost > *(_DWORD *)&v247.fields.svtId.fields.inited),
                             0LL);
          LODWORD(v248.fields.useName) = v192;
          v194 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v248);
          v195 = (Il2CppObject *)System_String__Format(CostValueColor, v194, 0LL);
          v196 = System_Int32__ToString((int32_t)&v247.fields.svtId.fields.inited, 0LL);
          if ( actMax < v191 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v197 = LocalizationManager__Get((System_String_o *)StringLiteral_2124/*"AP_OVER_MAX_COLOR"*/, 0LL);
            LODWORD(v248.fields.useName) = *(_DWORD *)&v247.fields.svtId.fields.inited;
            v198 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v248);
            v196 = System_String__Format(v197, v198, 0LL);
          }
          v199 = (Il2CppObject *)v196;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v200 = LocalizationManager__Get((System_String_o *)StringLiteral_2951/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0LL);
          v247.fields.sortValue2B = (int64_t)System_String__Format(v200, v67, 0LL);
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&v247.fields.sortValue2B,
            v247.fields.sortValue2B,
            v201,
            v202);
          v203 = LocalizationManager__Get((System_String_o *)StringLiteral_2952/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0LL);
          *(_QWORD *)&v247.fields.isTermination = System_String__Format(v203, v195, 0LL);
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&v247.fields.isTermination,
            *(int32_t *)&v247.fields.isTermination,
            v204,
            v205);
          v206 = LocalizationManager__Get((System_String_o *)StringLiteral_2949/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0LL);
          *(_QWORD *)&v247.fields.basePosition.fields.y = System_String__Format(v206, v67, 0LL);
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&v247.fields.basePosition.fields.y,
            SLODWORD(v247.fields.basePosition.fields.y),
            v207,
            v208);
          v209 = LocalizationManager__Get((System_String_o *)StringLiteral_2950/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0LL);
          LODWORD(v248.fields.useName) = actMax;
          v210 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v248);
          v247.fields.viewObject = (struct ListViewObject_o *)System_String__Format_61389768(v209, v199, v210, 0LL);
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&v247.fields.viewObject,
            (int32_t)v247.fields.viewObject,
            v211,
            v212);
        }
        v248 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v247.fields.sortValue2B;
        Instance = *v240;
        if ( *v240 )
        {
          v213 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                   (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
                   (const MethodInfo_351B210 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
          v241 = v248;
          BattleRetryConfirmComponent__SetCostValueText(this, &v241, v213, v214);
          BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v215);
          BattleRetryConfirmComponent__SetFriendshipUpItemUseButton(this, v216);
          v219 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v217, v218);
          System_Action___ctor(
            v219,
            object,
            Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__,
            0LL);
          v222 = BattleRetryConfirmComponent__WaitOneFrame(v220, v219, v221);
          UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v222, 0LL);
          return 1;
        }
LABEL_172:
        sub_1B64324(Instance);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v113 = LocalizationManager__Get((System_String_o *)StringLiteral_10831/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v114 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v62->klass->vtable._3_ToString.method)(
                               v62,
                               v62->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v115 = System_String__Format(v113, v114, 0LL);
      v116 = System_String__Concat_61375396(v115, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v117 = LocalizationManager__Get((System_String_o *)StringLiteral_2955/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v118 = System_String__Concat_61375396(v116, v117, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v121 = (CommonUI_o *)Instance;
      v122 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v122 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      _9__37_1 = v122->static_fields->__9__37_1;
      v124 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__37_1 )
      {
        if ( !v122->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v122);
          v122 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v224 = (Il2CppObject *)v122->static_fields->__9;
        _9__37_1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v119, v120);
        System_Action___ctor(_9__37_1, v224, Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, 0LL);
        static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        static_fields->__9__37_1 = _9__37_1;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__37_1, (int32_t)_9__37_1, v226, v227);
      }
      if ( !v121 )
        goto LABEL_172;
      CommonUI__OpenNotificationDialog(v121, v124, v118, _9__37_1, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
      return 0;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3832/*"CONSUME_TYPE_AP"*/, 0LL);
      v234 = (Il2CppObject *)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      v236 = this;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      *(_DWORD *)&v247.fields.svtId.fields.inited = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      v232 = (*p_userGameEntity)->fields.actMax;
      v247.fields.sortValue2B = (int64_t)StringLiteral_1/*""*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v247.fields.sortValue2B, (int32_t)StringLiteral_1/*""*/, v125, v126);
      *(_QWORD *)&v247.fields.isTermination = StringLiteral_1/*""*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v247.fields.isTermination, (int32_t)StringLiteral_1/*""*/, v127, v128);
      if ( !ItemConsumeEntity )
        goto LABEL_126;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      v129 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      v130 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_126;
      v131 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        v132 = ItemConsumeEntity->fields.itemIds;
        if ( !v132 )
          goto LABEL_172;
        if ( v131 >= v132->max_length )
          goto LABEL_173;
        if ( !v130 )
          goto LABEL_172;
        Instance = (int64_t)UserItemMaster__GetEntity((UserItemMaster_o *)v130, Instance, v132->m_Items[v131 + 1], 0LL);
        v133 = ItemConsumeEntity->fields.itemIds;
        if ( !v133 )
          goto LABEL_172;
        if ( v131 >= v133->max_length )
          goto LABEL_173;
        if ( !v129 )
          goto LABEL_172;
        v134 = Instance;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v129,
                              v133->m_Items[v131 + 1],
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_172;
        v135 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_172;
          v136 = (*p_userGameEntity)->fields.qp;
        }
        else if ( v134 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          v136 = *(_DWORD *)(v134 + 28);
        }
        else
        {
          v136 = 0;
        }
        v137 = ItemConsumeEntity->fields.nums;
        if ( !v137 )
          goto LABEL_172;
        if ( v131 >= v137->max_length )
          goto LABEL_173;
        if ( v137->m_Items[v131 + 1] > v136 )
        {
          Instance = (int64_t)System_String__Concat_61375396(
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                v135->fields.name,
                                0LL);
          if ( !v62 )
            goto LABEL_172;
          System_Text_StringBuilder__Append_60536548(v62, (System_String_o *)Instance, 0LL);
        }
        v246 = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0;
        memset(&v247, 0, 24);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v138 = LocalizationManager__Get((System_String_o *)StringLiteral_2953/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        *(_QWORD *)&v246.fields.currentCryptoKey = System_String__Format(v138, (Il2CppObject *)v135->fields.name, 0LL);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v246, v246.fields.currentCryptoKey, v139, v140);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2954/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v141 = ItemConsumeEntity->fields.nums;
        if ( !v141 )
          goto LABEL_172;
        if ( v131 >= v141->max_length )
LABEL_173:
          sub_1B6432C(Instance, v76);
        v142 = (System_String_o *)Instance;
        LODWORD(v248.fields.useName) = v141->m_Items[v131 + 1];
        v143 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v248);
        *(_QWORD *)&v246.fields.fakeValue = System_String__Format(v142, v143, 0LL);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v246.fields.fakeValue, v246.fields.fakeValue, v144, v145);
        v146 = LocalizationManager__Get((System_String_o *)StringLiteral_2956/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v247.klass = (ServantStatusBattleListViewItem_c *)System_String__Format(
                                                            v146,
                                                            (Il2CppObject *)v135->fields.name,
                                                            0LL);
        sub_1B6406C(&v247, (int32_t)v247.klass, v147, v148);
        v149 = ItemEntity__GetMaxNum(v135, 0LL);
        v150 = v149 > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v149 < 1 )
        {
          v157 = LocalizationManager__Get((System_String_o *)StringLiteral_2957/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v248.fields.useName) = v136;
          v158 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v248);
          v154 = System_String__Format(v157, v158, 0LL);
        }
        else
        {
          v151 = LocalizationManager__Get((System_String_o *)StringLiteral_2958/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v248.fields.useName) = v136;
          v152 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v248);
          v247.fields.dispLimitCount.fields.currentCryptoKey = ItemEntity__GetMaxNum(v135, 0LL);
          v153 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v247.fields.dispLimitCount);
          v154 = System_String__Format_61389768(v151, v152, v153, 0LL);
        }
        v247.monitor = v154;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v247.monitor, (int32_t)v154, v155, v156);
        LOBYTE(v247.fields.selectNum) = v150;
        Instance = *v240;
        v242 = v246;
        v243 = *(_OWORD *)&v247.klass;
        sortValue1B = *(_QWORD *)&v247.fields.selectNum;
        if ( !Instance )
          goto LABEL_172;
        v247.fields.dispLimitCount = v242;
        *(_OWORD *)&v247.fields.isEnabled = v243;
        *(_QWORD *)&v247.fields.isMine = sortValue1B;
        v161 = *(_QWORD *)(Instance + 16);
        v162 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v161 )
          goto LABEL_172;
        v163 = *(int *)(Instance + 24);
        if ( (unsigned int)v163 >= *(_DWORD *)(v161 + 24) )
        {
          v167 = *(const MethodInfo_3519118 **)(*(_QWORD *)(v162[4] + 192LL) + 112LL);
          *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v248.fields.useName = v247.fields.dispLimitCount;
          *(_OWORD *)&v248.fields.possessionName = *(_OWORD *)&v247.fields.isEnabled;
          *(_QWORD *)&v248.fields.isIndividualLimit = *(_QWORD *)&v247.fields.isMine;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
            &v248,
            v167);
        }
        else
        {
          *(_DWORD *)(Instance + 24) = v163 + 1;
          v164 = v247.fields.dispLimitCount;
          v165 = *(_OWORD *)&v247.fields.isEnabled;
          v166 = v161 + 40 * v163;
          *(_QWORD *)(v166 + 64) = *(_QWORD *)&v247.fields.isMine;
          *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v166 + 32) = v164;
          *(_OWORD *)(v166 + 48) = v165;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v166 + 32), 0, v159, v160);
        }
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v131, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_126:
      if ( !v62 )
        goto LABEL_172;
      this = v236;
      v66 = v238;
      if ( System_Text_StringBuilder__get_Length(v62, 0LL) >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v168 = LocalizationManager__Get((System_String_o *)StringLiteral_10831/*"QUEST_ITEM_COST_OVER"*/, 0LL);
        v169 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v62->klass->vtable._3_ToString.method)(
                                 v62,
                                 v62->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        v170 = System_String__Format(v168, v169, 0LL);
        v171 = System_String__Concat_61375396(v170, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
        v172 = LocalizationManager__Get((System_String_o *)StringLiteral_2955/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
        v173 = System_String__Concat_61375396(v171, v172, 0LL);
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v176 = (CommonUI_o *)Instance;
        v177 = BattleRetryConfirmComponent___c_TypeInfo;
        if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
          v177 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v178 = (System_String_o *)StringLiteral_1/*""*/;
        _9__37_2 = v177->static_fields->__9__37_2;
        if ( !_9__37_2 )
        {
          if ( !v177->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v177);
            v177 = BattleRetryConfirmComponent___c_TypeInfo;
          }
          v228 = (Il2CppObject *)v177->static_fields->__9;
          _9__37_2 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v174, v175);
          System_Action___ctor(_9__37_2, v228, Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, 0LL);
          v229 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
          v229->__9__37_2 = _9__37_2;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v229->__9__37_2, (int32_t)_9__37_2, v230, v231);
        }
        if ( v176 )
        {
          CommonUI__OpenNotificationDialog(v176, v178, v173, _9__37_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
          return 0;
        }
        goto LABEL_172;
      }
      v67 = v234;
      actMax = v232;
      goto LABEL_137;
    default:
      v66 = v53;
      actMax = 0;
      v67 = (Il2CppObject *)v63;
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

  if ( (byte_49FF5BA & 1) == 0 )
  {
    sub_1B640C8(&BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo, action);
    byte_49FF5BA = 1;
  }
  v4 = sub_1B64314(BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo, action, method);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = action;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)action, v5, v6);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v2, v3);
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF5C7 & 1) == 0 )
  {
    sub_1B640C8(&BattleRetryConfirmComponent___c_TypeInfo, v1);
    byte_49FF5C7 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleRetryConfirmComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleRetryConfirmComponent___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleRetryConfirmComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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

  if ( (byte_49FF5C8 & 1) == 0 )
  {
    sub_1B640C8(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_49FF5C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2E23130 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__37_2(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FF5C9 & 1) == 0 )
  {
    sub_1B640C8(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_49FF5C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2E23130 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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

  if ( (byte_49FF5CA & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__,
      method);
    byte_49FF5CA = 1;
  }
  rciItems = this->fields.rciItems;
  if ( !rciItems
    || (_4__this = this->fields.__4__this,
        rciItems = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(rciItems, (const MethodInfo_351B210 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__),
        !_4__this) )
  {
    sub_1B64324(rciItems);
  }
  BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
    _4__this,
    (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)rciItems,
    v5);
}