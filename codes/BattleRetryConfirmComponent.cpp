void __fastcall BattleRetryConfirmComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B3A581 & 1) == 0 )
  {
    sub_1BD3458(&BattleRetryConfirmComponent_TypeInfo, v1);
    byte_4B3A581 = 1;
  }
  *BattleRetryConfirmComponent_TypeInfo->static_fields = (struct BattleRetryConfirmComponent_StaticFields)xmmword_BD8570;
}


void __fastcall BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.CONFIRM_BUTTON_POSITION_ON_THREE.fields.x = xmmword_BD7F00;
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

  if ( (byte_4B3A57C & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, *(_QWORD *)&result);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v9);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4B3A57C = 1;
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
        (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v14,
                (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v14.fields._current )
          sub_1BD36B4(0LL, v12);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v14.fields._current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v14,
        (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_20:
    sub_1BD36B4(battleResultComponent, *(_QWORD *)&result);
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
    sub_1BD36B4(cancelLabel, method);
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
    sub_1BD36B4(reqSingleParent, method);
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
      sub_1BD36BC(reqSingleParent, method);
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

  if ( (byte_4B3A57A & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_UIButton__Add__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UIButton___ctor__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_UIButton__get_Count__, v9);
    sub_1BD3458(&System_Collections_Generic_List_UIButton__TypeInfo, v10);
    sub_1BD3458(&LocalizationManager_TypeInfo, v11);
    sub_1BD3458(&StringLiteral_2992/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, v12);
    sub_1BD3458(&StringLiteral_2994/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, v13);
    sub_1BD3458(&StringLiteral_2993/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, v14);
    byte_4B3A57A = 1;
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
    v17 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_UIButton__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v17,
      (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v17;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.buttons, (int64_t)v17, v18, v19, v20, v21, v22, v23);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_2F28C14 *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
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
          sub_1BD36BC(root, method);
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
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = v33 + 8 * klass_low;
          LODWORD(root[1].klass) = klass_low + 1;
          *(_QWORD *)(v36 + 32) = method;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v36 + 32), (int64_t)method, v24, v25, v26, v27, v28, v29);
        }
        LODWORD(klass) = v31[1].klass;
        if ( (__int64)++v32 >= (int)klass )
          goto LABEL_18;
      }
LABEL_32:
      sub_1BD36B4(root, method);
    }
LABEL_18:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_32;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)root,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  for ( i = v41;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0LL) )
  {
    if ( !i.fields._current )
      sub_1BD36B4(0LL, v37);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  if ( !this->fields.isInitialized )
  {
    mainText = this->fields.mainText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2994/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    if ( !mainText )
      goto LABEL_32;
    UILabel__set_text(mainText, (System_String_o *)root, 0LL);
    cancelLabel = this->fields.cancelLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2992/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_32;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0LL);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2993/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0LL);
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

  if ( (byte_4B3A57B & 1) == 0 )
  {
    sub_1BD3458(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__, method);
    sub_1BD3458(&Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__, v3);
    sub_1BD3458(&BoostFunctionUtility_CallbackFunc_TypeInfo, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v8);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v10);
    byte_4B3A57B = 1;
  }
  v11 = Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__;
  memset(&v22, 0, sizeof(v22));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BD3470(Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BD343C(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D4D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v13);
    byte_4B33D4D = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v15->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B33D58 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v13);
    v15 = TerminalPramsManager_TypeInfo;
    byte_4B33D58 = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v15->static_fields->_PhaseCnt_k__BackingField;
  v18 = (BoostFunctionUtility_CallbackFunc_o *)sub_1BD36A4(BoostFunctionUtility_CallbackFunc_TypeInfo);
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
    sub_1BD36B4(buttons, v20);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    buttons,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v22.fields._current )
      sub_1BD36B4(0LL, v21);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v22.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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

  if ( (byte_4B3A573 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattleRetryConfirmComponent_OnClickCancel__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_4B3A573 = 1;
  }
  v7 = Method_BattleRetryConfirmComponent_OnClickCancel__;
  memset(&v12, 0, sizeof(v12));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BD3470(Method_BattleRetryConfirmComponent_OnClickCancel__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BD343C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_1BD36B4(battleResultComponent, v9);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)battleResultComponent,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1BD36B4(0LL, v11);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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

  if ( (byte_4B3A574 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattleRetryConfirmComponent_OnClickConfirm__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_4B3A574 = 1;
  }
  v7 = Method_BattleRetryConfirmComponent_OnClickConfirm__;
  memset(&v12, 0, sizeof(v12));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickConfirm__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1BD3470(Method_BattleRetryConfirmComponent_OnClickConfirm__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BD343C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_1BD36B4(battleResultComponent, v9);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)battleResultComponent,
    (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1BD36B4(0LL, v11);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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

  if ( (byte_4B3A580 & 1) == 0 )
  {
    sub_1BD3458(&Method_BattleRetryConfirmComponent_OnClickFriendshipUpItemUseButton__, method);
    sub_1BD3458(&PartyOrganizationUtility_TypeInfo, v3);
    byte_4B3A580 = 1;
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
    v6 = (_QWORD *)sub_1BD3470(Method_BattleRetryConfirmComponent_OnClickFriendshipUpItemUseButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BD343C(v6, v6[4]);
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
    sub_1BD36B4(friendshipUpItemUseButton, v10);
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
    sub_1BD36B4(bgObj, opendFunc);
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

  if ( (byte_4B3A57D & 1) == 0 )
  {
    sub_1BD3458(&BattleSetupInfo_TypeInfo, method);
    sub_1BD3458(&Method_DataManager_GetMaster_EventDetailMaster___, v3);
    sub_1BD3458(&DataManager_TypeInfo, v4);
    sub_1BD3458(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1BD3458(&LocalizationManager_TypeInfo, v6);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v7);
    sub_1BD3458(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v8);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v9);
    sub_1BD3458(&StringLiteral_11266/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, v10);
    sub_1BD3458(&StringLiteral_2991/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/, v11);
    byte_4B3A57D = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D50 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    byte_4B33D50 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v12->static_fields->_WarId_k__BackingField;
  if ( !byte_4B33D4D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4B33D4D = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v12->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B33D58 )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, method);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4B33D58 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v12->static_fields->_PhaseCnt_k__BackingField;
  v16 = (BattleSetupInfo_o *)sub_1BD36A4(BattleSetupInfo_TypeInfo);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v19 || !Master_object )
    goto LABEL_55;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          v19->fields.eventId,
          (const MethodInfo_31D1F44 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_46;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_55;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_object )
      goto LABEL_55;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_object,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0LL)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11266/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0LL) == 1 )
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
                                                                        (System_String_o *)StringLiteral_2991/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/,
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
      sub_1BD36B4(Master_object, v18);
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
        sub_1BD36BC(this, value);
      if ( *i )
      {
        if ( v7 >= max_length )
          goto LABEL_13;
        v11 = &v9->obj.klass + v7;
        v12 = (UnityEngine_MonoBehaviour_o *)v11[4];
        if ( !v12 )
          break;
        v13 = RetryConfirmItem__SetCondensedScalePossessionAmount((RetryConfirmItem_o *)v11[4], 0LL);
        this = (BattleRetryConfirmComponent_o *)UnityEngine_MonoBehaviour__StartCoroutine_70263544(v12, v13, 0LL);
      }
      LODWORD(v4) = value->max_length;
      if ( (__int64)++v7 >= (int)v4 )
        return;
    }
LABEL_14:
    sub_1BD36B4(this, value);
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

  if ( (byte_4B3A57F & 1) == 0 )
  {
    sub_1BD3458(&RetryConfirmItem___TypeInfo, items);
    byte_4B3A57F = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_29;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL) )
  {
    reqSingleParent = (UnityEngine_GameObject_o *)sub_1BD3500(RetryConfirmItem___TypeInfo, 1LL);
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
    reqSingleParent = (UnityEngine_GameObject_o *)sub_1BD3500(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItem = this->fields.singleItemWithUseItemButton;
LABEL_11:
      v13 = reqSingleParent;
      if ( singleItem )
      {
        reqSingleParent = (UnityEngine_GameObject_o *)sub_1BD3594(singleItem, reqSingleParent->klass->_1.element_class);
        if ( !reqSingleParent )
        {
          v17 = sub_1BD36D8(0LL);
          sub_1BD3580(v17, 0LL);
        }
      }
      if ( !LODWORD(v13[1].klass) )
        sub_1BD36BC(reqSingleParent, items);
      v13[1].monitor = singleItem;
      sub_1BD33FC((PartyOrganizationUtility_o *)&v13[1].monitor, (int64_t)singleItem, v6, v7, v8, v9, v10, v11);
      itemsa = (RetryConfirmItem_array *)v13;
      p_itemsa = &itemsa;
      goto LABEL_15;
    }
LABEL_29:
    sub_1BD36B4(reqSingleParent, items);
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
  if ( (byte_4B3A579 & 1) == 0 )
  {
    this = (BattleRetryConfirmComponent_o *)sub_1BD3458(&StringLiteral_1/*""*/, costPoint);
    byte_4B3A579 = 1;
  }
  if ( !items )
    sub_1BD36B4(this, costPoint);
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
        sub_1BD36BC(v8, v9);
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

  if ( (byte_4B3A577 & 1) == 0 )
  {
    sub_1BD3458(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_4B3A577 = 1;
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
    sub_1BD36B4(reqSingleParent, costPoint);
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
      sub_1BD36BC(reqSingleParent, costPoint);
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

  if ( (byte_4B3A576 & 1) == 0 )
  {
    sub_1BD3458(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_4B3A576 = 1;
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
    sub_1BD36B4(reqSingleParent, costPoint);
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

  if ( (byte_4B3A578 & 1) == 0 )
  {
    sub_1BD3458(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_4B3A578 = 1;
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
    sub_1BD36B4(reqSingleParent, costPoint);
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
      sub_1BD36BC(reqSingleParent, costPoint);
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

  if ( (byte_4B3A57E & 1) == 0 )
  {
    sub_1BD3458(&BattleRetryConfirmComponent_TypeInfo, method);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v3);
    sub_1BD3458(&PartyOrganizationUtility_TypeInfo, v4);
    sub_1BD3458(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v5);
    byte_4B3A57E = 1;
  }
  friendshipUpItemUseButton = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemUseButton, 0LL, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
    sub_1BD36B4(Instance, v8);
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
    sub_1BD36B4(this, value);
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
  __int64 v43; // x29
  DataManager_o *Instance; // x0
  __int64 v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  Il2CppObject *MasterData_object; // x19
  QuestEntity_o *v60; // x28
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v62; // x19
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_Text_StringBuilder_o *v69; // x23
  Il2CppObject *v70; // x26
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  QuestEntity_o *v77; // x27
  char *v78; // x22
  int32_t actMax; // w28
  BalanceConfig_c *v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  Il2CppObject *v87; // x28
  Il2CppObject *v88; // x29
  il2cpp_array_size_t v89; // w26
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v91; // x8
  DataManager_o *v92; // x20
  ItemEntity_o *v93; // x24
  int32_t qp; // w25
  struct System_Int32_array *nums; // x8
  System_String_o *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  struct System_Int32_array *v106; // x8
  System_String_o *v107; // x20
  System_Text_StringBuilder_o *v108; // x27
  Il2CppObject *v109; // x0
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  System_String_o *v116; // x0
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  int32_t MaxNum; // w20
  bool v124; // w23
  System_String_o *v125; // x20
  __int64 v126; // x2
  __int64 v127; // x3
  __int64 v128; // x4
  Il2CppObject *v129; // x19
  __int64 v130; // x2
  __int64 v131; // x3
  __int64 v132; // x4
  Il2CppObject *v133; // x0
  struct PartyListViewItem_o *v134; // x0
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  System_String_o *v141; // x19
  __int64 v142; // x2
  __int64 v143; // x3
  __int64 v144; // x4
  Il2CppObject *v145; // x0
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  __int64 v152; // x8
  _QWORD *v153; // x10
  __int64 m_CancellationTokenSource_low; // x9
  __int128 v155; // q0
  __int128 v156; // q1
  __int64 v157; // x8
  const MethodInfo_362AA14 *v158; // x2
  System_String_o *v159; // x19
  Il2CppObject *v160; // x0
  System_String_o *v161; // x0
  System_String_o *v162; // x19
  System_String_o *v163; // x0
  System_String_o *v164; // x19
  CommonUI_o *v165; // x20
  BattleRetryConfirmComponent___c_c *v166; // x8
  System_Action_o *_9__37_1; // x22
  System_String_o *v168; // x21
  Il2CppObject *v169; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  Il2CppObject *v189; // x28
  Il2CppObject *v190; // x29
  il2cpp_array_size_t v191; // w22
  struct System_Int32_array *v192; // x8
  struct System_Int32_array *v193; // x8
  DataManager_o *v194; // x20
  ItemEntity_o *v195; // x24
  int32_t m_CancellationTokenSource_high; // w25
  struct System_Int32_array *v197; // x8
  System_String_o *v198; // x0
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  __int64 v205; // x2
  __int64 v206; // x3
  __int64 v207; // x4
  struct System_Int32_array *v208; // x8
  System_String_o *v209; // x20
  System_Text_StringBuilder_o *v210; // x26
  Il2CppObject *v211; // x0
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  System_String_o *v218; // x0
  int64_t v219; // x2
  int32_t v220; // w3
  System_String_o *v221; // x4
  BattleSetupInfo_o *v222; // x5
  FollowerInfo_o *v223; // x6
  PartyListViewItem_o *v224; // x7
  int32_t v225; // w20
  bool v226; // w23
  System_String_o *v227; // x20
  __int64 v228; // x2
  __int64 v229; // x3
  __int64 v230; // x4
  Il2CppObject *v231; // x19
  __int64 v232; // x2
  __int64 v233; // x3
  __int64 v234; // x4
  Il2CppObject *v235; // x0
  struct FollowerInfo_o *v236; // x0
  int64_t v237; // x2
  int32_t v238; // w3
  System_String_o *v239; // x4
  BattleSetupInfo_o *v240; // x5
  FollowerInfo_o *v241; // x6
  PartyListViewItem_o *v242; // x7
  System_String_o *v243; // x19
  __int64 v244; // x2
  __int64 v245; // x3
  __int64 v246; // x4
  Il2CppObject *v247; // x0
  int64_t v248; // x2
  int32_t v249; // w3
  System_String_o *v250; // x4
  BattleSetupInfo_o *v251; // x5
  FollowerInfo_o *v252; // x6
  PartyListViewItem_o *v253; // x7
  __int64 v254; // x8
  _QWORD *v255; // x10
  __int64 v256; // x9
  __int128 v257; // q0
  __int128 v258; // q1
  __int64 v259; // x8
  const MethodInfo_362AA14 *v260; // x2
  System_String_o *v261; // x19
  Il2CppObject *v262; // x0
  System_String_o *v263; // x0
  System_String_o *v264; // x19
  System_String_o *v265; // x0
  System_String_o *v266; // x19
  CommonUI_o *v267; // x20
  BattleRetryConfirmComponent___c_c *v268; // x8
  System_String_o *v269; // x21
  System_Action_o *_9__37_2; // x22
  Il2CppObject *v271; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v272; // x0
  int64_t v273; // x2
  int32_t v274; // w3
  System_String_o *v275; // x4
  BattleSetupInfo_o *v276; // x5
  FollowerInfo_o *v277; // x6
  PartyListViewItem_o *v278; // x7
  MapControl_QuestInfo_o *v280; // x19
  int32_t questId; // w20
  __int64 v282; // x1
  bool IsQuestClear_38374588; // w20
  TerminalPramsManager_c *v284; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t CampaignCostCalcValue; // w20
  int32_t v287; // w8
  int32_t ActConsumeCost; // w0
  int32_t v289; // w21
  int32_t v290; // w19
  System_String_o *CostValueColor; // x20
  __int64 v292; // x2
  __int64 v293; // x3
  __int64 v294; // x4
  Il2CppObject *v295; // x0
  Il2CppObject *v296; // x20
  System_String_o *v297; // x0
  System_String_o *v298; // x19
  __int64 v299; // x2
  __int64 v300; // x3
  __int64 v301; // x4
  Il2CppObject *v302; // x0
  Il2CppObject *v303; // x19
  System_String_o *v304; // x0
  int64_t v305; // x2
  int32_t v306; // w3
  System_String_o *v307; // x4
  BattleSetupInfo_o *v308; // x5
  FollowerInfo_o *v309; // x6
  PartyListViewItem_o *v310; // x7
  System_String_o *v311; // x0
  int64_t v312; // x2
  int32_t v313; // w3
  System_String_o *v314; // x4
  BattleSetupInfo_o *v315; // x5
  FollowerInfo_o *v316; // x6
  PartyListViewItem_o *v317; // x7
  System_String_o *v318; // x0
  int64_t v319; // x2
  int32_t v320; // w3
  System_String_o *v321; // x4
  BattleSetupInfo_o *v322; // x5
  FollowerInfo_o *v323; // x6
  PartyListViewItem_o *v324; // x7
  System_String_o *v325; // x20
  __int64 v326; // x2
  __int64 v327; // x3
  __int64 v328; // x4
  Il2CppObject *v329; // x0
  int64_t v330; // x2
  int32_t v331; // w3
  System_String_o *v332; // x4
  BattleSetupInfo_o *v333; // x5
  FollowerInfo_o *v334; // x6
  PartyListViewItem_o *v335; // x7
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v336; // x0
  const MethodInfo *v337; // x3
  const MethodInfo *v338; // x1
  const MethodInfo *v339; // x1
  System_Action_o *v340; // x19
  BattleRetryConfirmComponent_o *v341; // x0
  const MethodInfo *v342; // x2
  System_Collections_IEnumerator_o *v343; // x0
  int32_t v344; // [xsp+3Ch] [xbp-204h]
  Il2CppObject *v345; // [xsp+40h] [xbp-200h]
  Il2CppObject *v346; // [xsp+40h] [xbp-200h]
  __int64 v347; // [xsp+48h] [xbp-1F8h]
  __int64 v348; // [xsp+48h] [xbp-1F8h]
  BattleRetryConfirmComponent_o *v349; // [xsp+50h] [xbp-1F0h]
  BattleRetryConfirmComponent_o *v350; // [xsp+50h] [xbp-1F0h]
  QuestEntity_o *v351; // [xsp+58h] [xbp-1E8h]
  UserGameEntity_o **p_userGameEntity; // [xsp+78h] [xbp-1C8h]
  QuestConsumeItemEntity_o *v353; // [xsp+80h] [xbp-1C0h]
  QuestConsumeItemEntity_o *v354; // [xsp+80h] [xbp-1C0h]
  void **v355; // [xsp+88h] [xbp-1B8h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v356; // [xsp+90h] [xbp-1B0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v357; // [xsp+C0h] [xbp-180h]
  int32_t fixedVal; // [xsp+ECh] [xbp-154h] BYREF
  PartyOrganizationUtility_o v359; // [xsp+F0h] [xbp-150h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v360; // [xsp+180h] [xbp-C0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v361; // [xsp+1B0h] [xbp-90h] BYREF

  if ( (byte_4B3A572 & 1) == 0 )
  {
    sub_1BD3458(&System_Action_TypeInfo, method);
    sub_1BD3458(&CondType_TypeInfo, v3);
    sub_1BD3458(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1BD3458(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_1BD3458(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1BD3458(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_1BD3458(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_1BD3458(&int_TypeInfo, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__, v12);
    sub_1BD3458(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo, v13);
    sub_1BD3458(&LocalizationManager_TypeInfo, v14);
    sub_1BD3458(&NetworkManager_TypeInfo, v15);
    sub_1BD3458(&MapControl_QuestInfo_TypeInfo, v16);
    sub_1BD3458(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BD3458(&System_Text_StringBuilder_TypeInfo, v19);
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v20);
    sub_1BD3458(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, v21);
    sub_1BD3458(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, v22);
    sub_1BD3458(&Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__, v23);
    sub_1BD3458(&BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo, v24);
    sub_1BD3458(&BattleRetryConfirmComponent___c_TypeInfo, v25);
    sub_1BD3458(&StringLiteral_43/*"\n"*/, v26);
    sub_1BD3458(&StringLiteral_3000/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, v27);
    sub_1BD3458(&StringLiteral_3895/*"CONSUME_TYPE_AP"*/, v28);
    sub_1BD3458(&StringLiteral_11036/*"QUEST_ITEM_COST_OVER"*/, v29);
    sub_1BD3458(&StringLiteral_2998/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, v30);
    sub_1BD3458(&StringLiteral_2999/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, v31);
    sub_1BD3458(&StringLiteral_2146/*"AP_OVER_MAX_COLOR"*/, v32);
    sub_1BD3458(&StringLiteral_3896/*"CONSUME_TYPE_RP"*/, v33);
    sub_1BD3458(&StringLiteral_3004/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, v34);
    sub_1BD3458(&StringLiteral_3003/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, v35);
    sub_1BD3458(&StringLiteral_44/*"\n\n"*/, v36);
    sub_1BD3458(&StringLiteral_3001/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v37);
    sub_1BD3458(&StringLiteral_2995/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, v38);
    sub_1BD3458(&StringLiteral_1/*""*/, v39);
    sub_1BD3458(&StringLiteral_3002/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, v40);
    sub_1BD3458(&StringLiteral_2996/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, v41);
    sub_1BD3458(&StringLiteral_2997/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, v42);
    byte_4B3A572 = 1;
  }
  *(_DWORD *)(&v359.fields._IsNormalFlowQuest_k__BackingField + 3) = 0;
  memset(&v359.fields._IsWaveBattleRestart_k__BackingField, 0, 40);
  memset(&v359.fields._SelectedPartyPosition_k__BackingField, 0, 40);
  memset(&v359, 0, 40);
  fixedVal = 0;
  v43 = sub_1BD36A4(BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo);
  BattleRetryConfirmComponent___c__DisplayClass37_0___ctor(
    (BattleRetryConfirmComponent___c__DisplayClass37_0_o *)v43,
    0LL);
  if ( !v43 )
    goto LABEL_178;
  *(_QWORD *)(v43 + 16) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v43 + 16), (int64_t)this, v46, v47, v48, v49, v50, v51);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
    (int64_t)SelfUserGame,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_178;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B33D4D )
  {
    sub_1BD3458(&TerminalPramsManager_TypeInfo, v45);
    byte_4B33D4D = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  p_userGameEntity = &this->fields.userGameEntity;
  if ( !MasterData_object )
    goto LABEL_178;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                (const MethodInfo_31D1EF0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_178;
  v60 = (QuestEntity_o *)Instance;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0, 0LL);
  *(_DWORD *)(&v359.fields._IsNormalFlowQuest_k__BackingField + 3) = 0;
  memset(&v359.fields._IsWaveBattleRestart_k__BackingField, 0, 40);
  v62 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_1BD36A4(System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v62,
    (const MethodInfo_362A0F0 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  *(_QWORD *)(v43 + 24) = v62;
  v355 = (void **)(v43 + 24);
  sub_1BD33FC((PartyOrganizationUtility_o *)(v43 + 24), (int64_t)v62, v63, v64, v65, v66, v67, v68);
  v69 = (System_Text_StringBuilder_o *)sub_1BD36A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v69, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v70 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3895/*"CONSUME_TYPE_AP"*/, 0LL);
  v351 = v60;
  switch ( QuestEntity__GetConsumeType(v60, 0LL) )
  {
    case 1:
      v77 = v60;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3895/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_178;
      v70 = (Il2CppObject *)Instance;
      Instance = (DataManager_o *)UserGameEntity__getAct(*p_userGameEntity, 0LL);
      *(_DWORD *)(&v359.fields._IsNormalFlowQuest_k__BackingField + 3) = (_DWORD)Instance;
      v78 = &byte_4B33000;
      if ( !*p_userGameEntity )
        goto LABEL_178;
      actMax = (*p_userGameEntity)->fields.actMax;
      break;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3896/*"CONSUME_TYPE_RP"*/, 0LL);
      v77 = v60;
      v78 = &byte_4B33000;
      if ( !*p_userGameEntity )
        goto LABEL_178;
      v70 = (Il2CppObject *)Instance;
      Instance = (DataManager_o *)UserGameEntity__getRp(*p_userGameEntity, 0LL);
      *(_DWORD *)(&v359.fields._IsNormalFlowQuest_k__BackingField + 3) = (_DWORD)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_178;
      if ( !byte_4B33FF2 )
      {
        sub_1BD3458(&BalanceConfig_TypeInfo, v45);
        byte_4B33FF2 = 1;
      }
      v80 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v80 = BalanceConfig_TypeInfo;
      }
      actMax = v80->static_fields->UerGameRpMax;
      break;
    case 3:
      v347 = v43;
      v349 = this;
      *(_QWORD *)&v359.fields._IsWaveBattleRestart_k__BackingField = StringLiteral_1/*""*/;
      v345 = (Il2CppObject *)StringLiteral_1/*""*/;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v359.fields._IsWaveBattleRestart_k__BackingField,
        (int64_t)StringLiteral_1/*""*/,
        v71,
        v72,
        v73,
        v74,
        v75,
        v76);
      v359.fields._WaveBattleStartTime_k__BackingField = (int64_t)StringLiteral_1/*""*/;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v359.fields._WaveBattleStartTime_k__BackingField,
        (int64_t)StringLiteral_1/*""*/,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
      if ( !ItemConsumeEntity )
        goto LABEL_76;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_178;
      v87 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_178;
      v88 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_76;
      v89 = 0;
      v353 = ItemConsumeEntity;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B31D77 )
        {
          sub_1BD3458(&NetworkManager_TypeInfo, v45);
          byte_4B31D77 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_178;
        if ( v89 >= itemIds->max_length )
          goto LABEL_179;
        if ( !v88 )
          goto LABEL_178;
        Instance = (DataManager_o *)UserItemMaster__GetEntity(
                                      (UserItemMaster_o *)v88,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      itemIds->m_Items[v89 + 1],
                                      0LL);
        v91 = ItemConsumeEntity->fields.itemIds;
        if ( !v91 )
          goto LABEL_178;
        if ( v89 >= v91->max_length )
          goto LABEL_179;
        if ( !v87 )
          goto LABEL_178;
        v92 = Instance;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v87,
                                      v91->m_Items[v89 + 1],
                                      (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_178;
        v93 = (ItemEntity_o *)Instance;
        if ( LODWORD(Instance->fields.lookup) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_178;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v92
               && (Instance = (DataManager_o *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL),
                   ((unsigned __int8)Instance & 1) != 0) )
        {
          qp = HIDWORD(v92->fields.m_CancellationTokenSource);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_178;
        if ( v89 >= nums->max_length )
          goto LABEL_179;
        if ( nums->m_Items[v89 + 1] > qp )
        {
          Instance = (DataManager_o *)System_String__Concat_62525248(
                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                        v93->fields.name,
                                        0LL);
          if ( !v69 )
            goto LABEL_178;
          System_Text_StringBuilder__Append_61687144(v69, (System_String_o *)Instance, 0LL);
        }
        memset(&v359.fields._SelectedPartyPosition_k__BackingField, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v96 = LocalizationManager__Get((System_String_o *)StringLiteral_2999/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        *(_QWORD *)&v359.fields._SelectedPartyPosition_k__BackingField = System_String__Format(
                                                                           v96,
                                                                           (Il2CppObject *)v93->fields.name,
                                                                           0LL);
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&v359.fields._SelectedPartyPosition_k__BackingField,
          *(int64_t *)&v359.fields._SelectedPartyPosition_k__BackingField,
          v97,
          v98,
          v99,
          v100,
          v101,
          v102);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3000/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v106 = ItemConsumeEntity->fields.nums;
        if ( !v106 )
          goto LABEL_178;
        if ( v89 >= v106->max_length )
          goto LABEL_179;
        v107 = (System_String_o *)Instance;
        v108 = v69;
        LODWORD(v361.fields.useName) = v106->m_Items[v89 + 1];
        v109 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v361, v103, v104, v105);
        *(_QWORD *)&v359.fields._SelectedPartyMemberPosition_k__BackingField = System_String__Format(v107, v109, 0LL);
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&v359.fields._SelectedPartyMemberPosition_k__BackingField,
          *(int64_t *)&v359.fields._SelectedPartyMemberPosition_k__BackingField,
          v110,
          v111,
          v112,
          v113,
          v114,
          v115);
        v116 = LocalizationManager__Get((System_String_o *)StringLiteral_3002/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v359.fields._BasePartyItem_k__BackingField = (struct PartyListViewItem_o *)System_String__Format(
                                                                                     v116,
                                                                                     (Il2CppObject *)v93->fields.name,
                                                                                     0LL);
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&v359.fields._BasePartyItem_k__BackingField,
          (int64_t)v359.fields._BasePartyItem_k__BackingField,
          v117,
          v118,
          v119,
          v120,
          v121,
          v122);
        MaxNum = ItemEntity__GetMaxNum(v93, 0LL);
        v124 = MaxNum > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( MaxNum < 1 )
        {
          v141 = LocalizationManager__Get((System_String_o *)StringLiteral_3003/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v361.fields.useName) = qp;
          v145 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v361, v142, v143, v144);
          v134 = (struct PartyListViewItem_o *)System_String__Format(v141, v145, 0LL);
        }
        else
        {
          v125 = LocalizationManager__Get((System_String_o *)StringLiteral_3004/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v361.fields.useName) = qp;
          v129 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v361, v126, v127, v128);
          LODWORD(v360.fields.useName) = ItemEntity__GetMaxNum(v93, 0LL);
          v133 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v360, v130, v131, v132);
          v134 = (struct PartyListViewItem_o *)System_String__Format_62539620(v125, v129, v133, 0LL);
        }
        v359.fields._PartyItem_k__BackingField = v134;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&v359.fields._PartyItem_k__BackingField,
          (int64_t)v134,
          v135,
          v136,
          v137,
          v138,
          v139,
          v140);
        v359.fields._IsForceDisableSupportSelectBackBtn_k__BackingField = v124;
        Instance = (DataManager_o *)*v355;
        v357 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v359.fields._SelectedPartyPosition_k__BackingField;
        if ( !Instance )
          goto LABEL_178;
        v360 = v357;
        v152 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v69 = v108;
        v153 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        ItemConsumeEntity = v353;
        if ( !v152 )
          goto LABEL_178;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v152 + 24) )
        {
          v158 = *(const MethodInfo_362AA14 **)(*(_QWORD *)(v153[4] + 192LL) + 112LL);
          v361 = v360;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
            &v361,
            v158);
        }
        else
        {
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          v155 = *(_OWORD *)&v360.fields.useName;
          v156 = *(_OWORD *)&v360.fields.possessionName;
          v157 = v152 + 40 * m_CancellationTokenSource_low;
          *(_QWORD *)(v157 + 64) = *(_QWORD *)&v360.fields.isIndividualLimit;
          *(_OWORD *)(v157 + 32) = v155;
          *(_OWORD *)(v157 + 48) = v156;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v157 + 32), 0LL, v146, v147, v148, v149, v150, v151);
        }
        Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(v353, ++v89, 0LL);
      }
      while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_76:
      if ( !v69 )
        goto LABEL_178;
      v43 = v347;
      this = v349;
      v77 = v351;
      v78 = &byte_4B33000;
      if ( System_Text_StringBuilder__get_Length(v69, 0LL) >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v159 = LocalizationManager__Get((System_String_o *)StringLiteral_11036/*"QUEST_ITEM_COST_OVER"*/, 0LL);
        v160 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v69->klass->vtable._3_ToString.method)(
                                 v69,
                                 v69->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        v161 = System_String__Format(v159, v160, 0LL);
        v162 = System_String__Concat_62525248(v161, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
        v163 = LocalizationManager__Get((System_String_o *)StringLiteral_3001/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
        v164 = System_String__Concat_62525248(v162, v163, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v165 = (CommonUI_o *)Instance;
        v166 = BattleRetryConfirmComponent___c_TypeInfo;
        if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
          v166 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        _9__37_1 = v166->static_fields->__9__37_1;
        v168 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__37_1 )
        {
          if ( !v166->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v166);
            v166 = BattleRetryConfirmComponent___c_TypeInfo;
          }
          v169 = (Il2CppObject *)v166->static_fields->__9;
          _9__37_1 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
          System_Action___ctor(_9__37_1, v169, Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, 0LL);
          static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
          static_fields->__9__37_1 = _9__37_1;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&static_fields->__9__37_1,
            (int64_t)_9__37_1,
            v171,
            v172,
            v173,
            v174,
            v175,
            v176);
        }
        if ( v165 )
        {
          CommonUI__OpenNotificationDialog(v165, v168, v164, _9__37_1, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
          return 0;
        }
        goto LABEL_178;
      }
      v70 = v345;
      actMax = 0;
      break;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3895/*"CONSUME_TYPE_AP"*/, 0LL);
      v346 = (Il2CppObject *)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_178;
      v348 = v43;
      v350 = this;
      Instance = (DataManager_o *)UserGameEntity__getAct(*p_userGameEntity, 0LL);
      *(_DWORD *)(&v359.fields._IsNormalFlowQuest_k__BackingField + 3) = (_DWORD)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_178;
      v344 = (*p_userGameEntity)->fields.actMax;
      *(_QWORD *)&v359.fields._IsWaveBattleRestart_k__BackingField = StringLiteral_1/*""*/;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v359.fields._IsWaveBattleRestart_k__BackingField,
        (int64_t)StringLiteral_1/*""*/,
        v177,
        v178,
        v179,
        v180,
        v181,
        v182);
      v359.fields._WaveBattleStartTime_k__BackingField = (int64_t)StringLiteral_1/*""*/;
      sub_1BD33FC(
        (PartyOrganizationUtility_o *)&v359.fields._WaveBattleStartTime_k__BackingField,
        (int64_t)StringLiteral_1/*""*/,
        v183,
        v184,
        v185,
        v186,
        v187,
        v188);
      if ( !ItemConsumeEntity )
        goto LABEL_137;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_178;
      v189 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_178;
      v190 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_137;
      v191 = 0;
      v354 = ItemConsumeEntity;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B31D77 )
        {
          sub_1BD3458(&NetworkManager_TypeInfo, v45);
          byte_4B31D77 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        v192 = ItemConsumeEntity->fields.itemIds;
        if ( !v192 )
          goto LABEL_178;
        if ( v191 >= v192->max_length )
          goto LABEL_179;
        if ( !v190 )
          goto LABEL_178;
        Instance = (DataManager_o *)UserItemMaster__GetEntity(
                                      (UserItemMaster_o *)v190,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      v192->m_Items[v191 + 1],
                                      0LL);
        v193 = ItemConsumeEntity->fields.itemIds;
        if ( !v193 )
          goto LABEL_178;
        if ( v191 >= v193->max_length )
          goto LABEL_179;
        if ( !v189 )
          goto LABEL_178;
        v194 = Instance;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v189,
                                      v193->m_Items[v191 + 1],
                                      (const MethodInfo_31D1EF0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_178;
        v195 = (ItemEntity_o *)Instance;
        if ( LODWORD(Instance->fields.lookup) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_178;
          m_CancellationTokenSource_high = (*p_userGameEntity)->fields.qp;
        }
        else if ( v194
               && (Instance = (DataManager_o *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL),
                   ((unsigned __int8)Instance & 1) != 0) )
        {
          m_CancellationTokenSource_high = HIDWORD(v194->fields.m_CancellationTokenSource);
        }
        else
        {
          m_CancellationTokenSource_high = 0;
        }
        v197 = ItemConsumeEntity->fields.nums;
        if ( !v197 )
          goto LABEL_178;
        if ( v191 >= v197->max_length )
          goto LABEL_179;
        if ( v197->m_Items[v191 + 1] > m_CancellationTokenSource_high )
        {
          Instance = (DataManager_o *)System_String__Concat_62525248(
                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                        v195->fields.name,
                                        0LL);
          if ( !v69 )
            goto LABEL_178;
          System_Text_StringBuilder__Append_61687144(v69, (System_String_o *)Instance, 0LL);
        }
        memset(&v359, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v198 = LocalizationManager__Get((System_String_o *)StringLiteral_2999/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v359.klass = (PartyOrganizationUtility_c *)System_String__Format(v198, (Il2CppObject *)v195->fields.name, 0LL);
        sub_1BD33FC(&v359, (int64_t)v359.klass, v199, v200, v201, v202, v203, v204);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3000/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v208 = ItemConsumeEntity->fields.nums;
        if ( !v208 )
          goto LABEL_178;
        if ( v191 >= v208->max_length )
LABEL_179:
          sub_1BD36BC(Instance, v45);
        v209 = (System_String_o *)Instance;
        v210 = v69;
        LODWORD(v361.fields.useName) = v208->m_Items[v191 + 1];
        v211 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v361, v205, v206, v207);
        v359.monitor = System_String__Format(v209, v211, 0LL);
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&v359.monitor,
          (int64_t)v359.monitor,
          v212,
          v213,
          v214,
          v215,
          v216,
          v217);
        v218 = LocalizationManager__Get((System_String_o *)StringLiteral_3002/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v359.fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)System_String__Format(v218, (Il2CppObject *)v195->fields.name, 0LL);
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&v359.fields,
          (int64_t)v359.fields.restrictionDialogHistoryList,
          v219,
          v220,
          v221,
          v222,
          v223,
          v224);
        v225 = ItemEntity__GetMaxNum(v195, 0LL);
        v226 = v225 > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v225 < 1 )
        {
          v243 = LocalizationManager__Get((System_String_o *)StringLiteral_3003/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v361.fields.useName) = m_CancellationTokenSource_high;
          v247 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v361, v244, v245, v246);
          v236 = (struct FollowerInfo_o *)System_String__Format(v243, v247, 0LL);
        }
        else
        {
          v227 = LocalizationManager__Get((System_String_o *)StringLiteral_3004/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v361.fields.useName) = m_CancellationTokenSource_high;
          v231 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v361, v228, v229, v230);
          LODWORD(v360.fields.useName) = ItemEntity__GetMaxNum(v195, 0LL);
          v235 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v360, v232, v233, v234);
          v236 = (struct FollowerInfo_o *)System_String__Format_62539620(v227, v231, v235, 0LL);
        }
        v359.fields._normalFollowerInfo = v236;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&v359.fields._normalFollowerInfo,
          (int64_t)v236,
          v237,
          v238,
          v239,
          v240,
          v241,
          v242);
        LOBYTE(v359.fields._SelectedNormalFollowerClassId_k__BackingField) = v226;
        Instance = (DataManager_o *)*v355;
        *(_OWORD *)&v357.fields.useName = *(_OWORD *)&v359.klass;
        *(_OWORD *)&v357.fields.possessionName = *(_OWORD *)&v359.fields.restrictionDialogHistoryList;
        *(_QWORD *)&v357.fields.isIndividualLimit = *(_QWORD *)&v359.fields._SelectedNormalFollowerClassId_k__BackingField;
        if ( !Instance )
          goto LABEL_178;
        v360 = v357;
        v254 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        ItemConsumeEntity = v354;
        v255 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v254 )
          goto LABEL_178;
        v256 = SLODWORD(Instance->fields.m_CancellationTokenSource);
        v69 = v210;
        if ( (unsigned int)v256 >= *(_DWORD *)(v254 + 24) )
        {
          v260 = *(const MethodInfo_362AA14 **)(*(_QWORD *)(v255[4] + 192LL) + 112LL);
          v361 = v360;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
            &v361,
            v260);
        }
        else
        {
          LODWORD(Instance->fields.m_CancellationTokenSource) = v256 + 1;
          v257 = *(_OWORD *)&v360.fields.useName;
          v258 = *(_OWORD *)&v360.fields.possessionName;
          v259 = v254 + 40 * v256;
          *(_QWORD *)(v259 + 64) = *(_QWORD *)&v360.fields.isIndividualLimit;
          *(_OWORD *)(v259 + 32) = v257;
          *(_OWORD *)(v259 + 48) = v258;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v259 + 32), 0LL, v248, v249, v250, v251, v252, v253);
        }
        Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(v354, ++v191, 0LL);
      }
      while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_137:
      if ( !v69 )
        goto LABEL_178;
      v43 = v348;
      this = v350;
      v77 = v351;
      v78 = &byte_4B33000;
      if ( System_Text_StringBuilder__get_Length(v69, 0LL) >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v261 = LocalizationManager__Get((System_String_o *)StringLiteral_11036/*"QUEST_ITEM_COST_OVER"*/, 0LL);
        v262 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v69->klass->vtable._3_ToString.method)(
                                 v69,
                                 v69->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        v263 = System_String__Format(v261, v262, 0LL);
        v264 = System_String__Concat_62525248(v263, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
        v265 = LocalizationManager__Get((System_String_o *)StringLiteral_3001/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
        v266 = System_String__Concat_62525248(v264, v265, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v267 = (CommonUI_o *)Instance;
        v268 = BattleRetryConfirmComponent___c_TypeInfo;
        if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
          v268 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v269 = (System_String_o *)StringLiteral_1/*""*/;
        _9__37_2 = v268->static_fields->__9__37_2;
        if ( !_9__37_2 )
        {
          if ( !v268->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v268);
            v268 = BattleRetryConfirmComponent___c_TypeInfo;
          }
          v271 = (Il2CppObject *)v268->static_fields->__9;
          _9__37_2 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
          System_Action___ctor(_9__37_2, v271, Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, 0LL);
          v272 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
          v272->__9__37_2 = _9__37_2;
          sub_1BD33FC(
            (PartyOrganizationUtility_o *)&v272->__9__37_2,
            (int64_t)_9__37_2,
            v273,
            v274,
            v275,
            v276,
            v277,
            v278);
        }
        if ( v267 )
        {
          CommonUI__OpenNotificationDialog(v267, v269, v266, _9__37_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
          return 0;
        }
LABEL_178:
        sub_1BD36B4(Instance, v45);
      }
      v70 = v346;
      actMax = v344;
      break;
    default:
      v77 = v60;
      actMax = 0;
      v78 = &byte_4B33000;
      break;
  }
  if ( QuestEntity__GetConsumeType(v77, 0LL) == 1
    || QuestEntity__GetConsumeType(v77, 0LL) == 2
    || QuestEntity__GetConsumeType(v77, 0LL) == 4 )
  {
    v280 = (MapControl_QuestInfo_o *)sub_1BD36A4(MapControl_QuestInfo_TypeInfo);
    MapControl_QuestInfo___ctor(v280, 0LL);
    if ( !v280 )
      goto LABEL_178;
    MapControl_QuestInfo__SetTerminalParamsValue(v280, 0LL);
    questId = v280->fields.questId;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    fixedVal = -1;
    IsQuestClear_38374588 = CondType__IsQuestClear_38374588(questId, -1, 0, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !v78[3405] )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v282);
      v78[3405] = 1;
    }
    v284 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v284 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v284->static_fields->_QuestId_k__BackingField;
    if ( !byte_4B33D58 )
    {
      sub_1BD3458(&TerminalPramsManager_TypeInfo, v282);
      v284 = TerminalPramsManager_TypeInfo;
      byte_4B33D58 = 1;
    }
    if ( !v284->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v284);
      v284 = TerminalPramsManager_TypeInfo;
    }
    CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                              v77,
                              QuestId_k__BackingField,
                              v284->static_fields->_PhaseCnt_k__BackingField,
                              !IsQuestClear_38374588,
                              &fixedVal,
                              0LL);
    Instance = (DataManager_o *)MapControl_QuestInfo__GetMine(v280, 0LL);
    if ( !Instance )
      goto LABEL_178;
    QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
    v287 = fixedVal;
    v280->fields.costCalcVal = CampaignCostCalcValue;
    v280->fields._fixedCostVal_k__BackingField = v287;
    ActConsumeCost = MapControl_QuestInfo__GetActConsumeCost(v280, 0LL);
    v289 = *(_DWORD *)(&v359.fields._IsNormalFlowQuest_k__BackingField + 3);
    v290 = ActConsumeCost;
    CostValueColor = QuestEntity__GetCostValueColor(
                       CampaignCostCalcValue,
                       (ActConsumeCost > actMax) | (unsigned __int8)(ActConsumeCost > *(_DWORD *)(&v359.fields._IsNormalFlowQuest_k__BackingField
                                                                                                + 3)),
                       0LL);
    LODWORD(v361.fields.useName) = v290;
    v295 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v361, v292, v293, v294);
    v296 = (Il2CppObject *)System_String__Format(CostValueColor, v295, 0LL);
    v297 = System_Int32__ToString((int32_t)(&v359.fields._IsNormalFlowQuest_k__BackingField + 3), 0LL);
    if ( actMax < v289 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v298 = LocalizationManager__Get((System_String_o *)StringLiteral_2146/*"AP_OVER_MAX_COLOR"*/, 0LL);
      LODWORD(v361.fields.useName) = *(_DWORD *)(&v359.fields._IsNormalFlowQuest_k__BackingField + 3);
      v302 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v361, v299, v300, v301);
      v297 = System_String__Format(v298, v302, 0LL);
    }
    v303 = (Il2CppObject *)v297;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v304 = LocalizationManager__Get((System_String_o *)StringLiteral_2997/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0LL);
    *(_QWORD *)&v359.fields._IsWaveBattleRestart_k__BackingField = System_String__Format(v304, v70, 0LL);
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&v359.fields._IsWaveBattleRestart_k__BackingField,
      *(int64_t *)&v359.fields._IsWaveBattleRestart_k__BackingField,
      v305,
      v306,
      v307,
      v308,
      v309,
      v310);
    v311 = LocalizationManager__Get((System_String_o *)StringLiteral_2998/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0LL);
    v359.fields._WaveBattleStartTime_k__BackingField = (int64_t)System_String__Format(v311, v296, 0LL);
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&v359.fields._WaveBattleStartTime_k__BackingField,
      v359.fields._WaveBattleStartTime_k__BackingField,
      v312,
      v313,
      v314,
      v315,
      v316,
      v317);
    v318 = LocalizationManager__Get((System_String_o *)StringLiteral_2995/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0LL);
    *(_QWORD *)&v359.fields._WaveBattleRestartWave_k__BackingField = System_String__Format(v318, v70, 0LL);
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&v359.fields._WaveBattleRestartWave_k__BackingField,
      *(int64_t *)&v359.fields._WaveBattleRestartWave_k__BackingField,
      v319,
      v320,
      v321,
      v322,
      v323,
      v324);
    v325 = LocalizationManager__Get((System_String_o *)StringLiteral_2996/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0LL);
    LODWORD(v361.fields.useName) = actMax;
    v329 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v361, v326, v327, v328);
    v359.fields.temporaryPartyInfo = (struct PartyOrganizationUtility_TemporaryPartyInfo_o *)System_String__Format_62539620(
                                                                                               v325,
                                                                                               v303,
                                                                                               v329,
                                                                                               0LL);
    sub_1BD33FC(
      (PartyOrganizationUtility_o *)&v359.fields.temporaryPartyInfo,
      (int64_t)v359.fields.temporaryPartyInfo,
      v330,
      v331,
      v332,
      v333,
      v334,
      v335);
  }
  v361 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v359.fields._IsWaveBattleRestart_k__BackingField;
  Instance = (DataManager_o *)*v355;
  if ( !*v355 )
    goto LABEL_178;
  v336 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
           (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
           (const MethodInfo_362CA24 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
  v356 = v361;
  BattleRetryConfirmComponent__SetCostValueText(this, &v356, v336, v337);
  BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v338);
  BattleRetryConfirmComponent__SetFriendshipUpItemUseButton(this, v339);
  v340 = (System_Action_o *)sub_1BD36A4(System_Action_TypeInfo);
  System_Action___ctor(
    v340,
    (Il2CppObject *)v43,
    Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__,
    0LL);
  v343 = BattleRetryConfirmComponent__WaitOneFrame(v341, v340, v342);
  UnityEngine_MonoBehaviour__StartCoroutine_70263544((UnityEngine_MonoBehaviour_o *)this, v343, 0LL);
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

  if ( (byte_4B3A575 & 1) == 0 )
  {
    sub_1BD3458(&BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo, action);
    byte_4B3A575 = 1;
  }
  v4 = sub_1BD36A4(BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo);
  BattleRetryConfirmComponent__WaitOneFrame_d__42___ctor(
    (BattleRetryConfirmComponent__WaitOneFrame_d__42_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_1BD36B4(v5, v6);
  *(_QWORD *)(v4 + 32) = action;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v4 + 32), (int64_t)action, v7, v8, v9, v10, v11, v12);
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
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__42_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B3A582 & 1) == 0 )
  {
    sub_1BD3458(&BattleRetryConfirmComponent___c_TypeInfo, v1);
    byte_4B3A582 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(BattleRetryConfirmComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleRetryConfirmComponent___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v2;
  sub_1BD33FC(
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


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__37_1(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B3A583 & 1) == 0 )
  {
    sub_1BD3458(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4B3A583 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2F1AE5C *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__37_2(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B3A584 & 1) == 0 )
  {
    sub_1BD3458(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1BD3458(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4B3A584 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2F1AE5C *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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

  if ( (byte_4B3A585 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__,
      method);
    byte_4B3A585 = 1;
  }
  rciItems = this->fields.rciItems;
  if ( !rciItems
    || (_4__this = this->fields.__4__this,
        rciItems = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(rciItems, (const MethodInfo_362CA24 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__),
        !_4__this) )
  {
    sub_1BD36B4(rciItems, method);
  }
  BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
    _4__this,
    (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)rciItems,
    0LL);
}