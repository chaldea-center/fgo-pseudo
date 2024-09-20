void __fastcall BattleRetryConfirmComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A5E397 & 1) == 0 )
  {
    sub_1B885B0(&BattleRetryConfirmComponent_TypeInfo);
    byte_4A5E397 = 1;
  }
  *BattleRetryConfirmComponent_TypeInfo->static_fields = (struct BattleRetryConfirmComponent_StaticFields)xmmword_BB4F80;
}


void __fastcall BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.CONFIRM_BUTTON_POSITION_ON_THREE.fields.x = xmmword_BB4900;
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
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5E392 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E392 = 1;
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
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v10,
        (System_Collections_Generic_List_object__o *)battleResultComponent,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v10,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v10.fields._current )
          sub_1B8880C(0LL, v8);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10.fields._current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v10,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_20:
    sub_1B8880C(battleResultComponent, *(_QWORD *)&result);
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
    sub_1B8880C(cancelLabel, method);
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
    sub_1B8880C(reqSingleParent, method);
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
      sub_1B88814(reqSingleParent, method);
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
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v11; // x21
  unsigned __int64 v12; // x22
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 klass_low; // x10
  __int64 v16; // x8
  __int64 v17; // x1
  UILabel_o *mainText; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *confirmLabel; // x20
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5E390 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIButton__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIButton___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIButton__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_UIButton__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2966/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/);
    sub_1B885B0(&StringLiteral_2968/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_2967/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/);
    byte_4A5E390 = 1;
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
    v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIButton__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.buttons, (int32_t)v5, v6, v7);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    if ( !root )
      goto LABEL_32;
    klass = root[1].klass;
    v11 = root;
    if ( (int)klass >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)klass )
          sub_1B88814(root, method);
        root = (UnityEngine_GameObject_o *)*p_buttons;
        if ( !*p_buttons )
          break;
        method = (const MethodInfo *)*((_QWORD *)&v11[1].monitor + v12);
        v13 = *(_QWORD *)&root->fields.m_CachedPtr;
        v14 = Method_System_Collections_Generic_List_UIButton__Add__;
        ++HIDWORD(root[1].klass);
        if ( !v13 )
          break;
        klass_low = SLODWORD(root[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v13 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)root,
            (Il2CppObject *)method,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = v13 + 8 * klass_low;
          LODWORD(root[1].klass) = klass_low + 1;
          *(_QWORD *)(v16 + 32) = method;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)method, v8, v9);
        }
        LODWORD(klass) = v11[1].klass;
        if ( (__int64)++v12 >= (int)klass )
          goto LABEL_18;
      }
LABEL_32:
      sub_1B8880C(root, method);
    }
LABEL_18:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_32;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)root,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  for ( i = v21;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0LL) )
  {
    if ( !i.fields._current )
      sub_1B8880C(0LL, v17);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  if ( !this->fields.isInitialized )
  {
    mainText = this->fields.mainText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2968/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    if ( !mainText )
      goto LABEL_32;
    UILabel__set_text(mainText, (System_String_o *)root, 0LL);
    cancelLabel = this->fields.cancelLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2966/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_32;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0LL);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2967/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0LL);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v6; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w21
  BoostFunctionUtility_CallbackFunc_o *v9; // x23
  System_Collections_Generic_List_object__o *buttons; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5E391 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__);
    sub_1B885B0(&Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
    sub_1B885B0(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5E391 = 1;
  }
  v3 = Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__;
  memset(&v13, 0, sizeof(v13));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4A57DCB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4A57DCB = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v6->static_fields->_PhaseCnt_k__BackingField;
  v9 = (BoostFunctionUtility_CallbackFunc_o *)sub_1B887FC(BoostFunctionUtility_CallbackFunc_TypeInfo);
  BoostFunctionUtility_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__,
    0LL);
  if ( !Instance
    || (CommonUI__OpenBoostSupportRequestMenu(
          (CommonUI_o *)Instance,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          v9,
          1,
          0LL),
        (buttons = (System_Collections_Generic_List_object__o *)this->fields.buttons) == 0LL) )
  {
    sub_1B8880C(buttons, v11);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    buttons,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1B8880C(0LL, v12);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5E389 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleRetryConfirmComponent_OnClickCancel__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    byte_4A5E389 = 1;
  }
  v3 = Method_BattleRetryConfirmComponent_OnClickCancel__;
  memset(&v8, 0, sizeof(v8));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_BattleRetryConfirmComponent_OnClickCancel__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_1B8880C(battleResultComponent, v5);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)battleResultComponent,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B8880C(0LL, v7);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
}


void __fastcall BattleRetryConfirmComponent__OnClickConfirm(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5E38A & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleRetryConfirmComponent_OnClickConfirm__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    byte_4A5E38A = 1;
  }
  v3 = Method_BattleRetryConfirmComponent_OnClickConfirm__;
  memset(&v8, 0, sizeof(v8));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickConfirm__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_BattleRetryConfirmComponent_OnClickConfirm__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_1B8880C(battleResultComponent, v5);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)battleResultComponent,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B8880C(0LL, v7);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
}


void __fastcall BattleRetryConfirmComponent__OnClickFriendshipUpItemUseButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_c *v3; // x0
  int32_t Int; // w0
  _QWORD *v5; // x8
  int32_t v6; // w20
  System_Reflection_MethodBase_o *v7; // x0
  PartyOrganizationUtility_c *v8; // x0
  __int64 v9; // x1
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v11; // w1
  PartyOrganizationUtility_c *v12; // x0

  if ( (byte_4A5E396 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleRetryConfirmComponent_OnClickFriendshipUpItemUseButton__);
    sub_1B885B0(&PartyOrganizationUtility_TypeInfo);
    byte_4A5E396 = 1;
  }
  v3 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v3 = PartyOrganizationUtility_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  v5 = Method_BattleRetryConfirmComponent_OnClickFriendshipUpItemUseButton__;
  v6 = Int;
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickFriendshipUpItemUseButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_BattleRetryConfirmComponent_OnClickFriendshipUpItemUseButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  if ( !v6 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
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
    sub_1B8880C(friendshipUpItemUseButton, v9);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0LL);
  v8 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v8 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v8->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
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
    sub_1B8880C(bgObj, opendFunc);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObj, 0LL);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
}


void __fastcall BattleRetryConfirmComponent__SetBoostSupportRequestButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t WarId_k__BackingField; // w22
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v7; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v9; // x1
  BattleSetupInfo_o *v10; // x22
  UnityEngine_Object_o *boostSupportRequestLabel; // x20
  UILabel_o *v12; // x20
  UnityEngine_Object_o *v13; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5E393 & 1) == 0 )
  {
    sub_1B885B0(&BattleSetupInfo_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_11111/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/);
    sub_1B885B0(&StringLiteral_2965/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/);
    byte_4A5E393 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A57DC0 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v3->static_fields->_QuestId_k__BackingField;
  if ( !byte_4A57DCB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4A57DCB = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v3->static_fields->_PhaseCnt_k__BackingField;
  v7 = (BattleSetupInfo_o *)sub_1B887FC(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_55;
  v10 = BattleSetupInfo__ConvertBattleSetupInfo(
          v7,
          WarId_k__BackingField,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          0,
          0,
          0,
          0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v10 || !Master_object )
    goto LABEL_55;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          v10->fields.eventId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_46;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_55;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_object )
      goto LABEL_55;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_object,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0LL)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11111/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0LL) == 1 )
    {
      boostSupportRequestLabel = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(boostSupportRequestLabel, 0LL, 0LL) )
      {
        v12 = this->fields.boostSupportRequestLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_2965/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/,
                                                                        0LL);
        if ( !v12 )
          goto LABEL_55;
        UILabel__set_text(v12, (System_String_o *)Master_object, 0LL);
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
      sub_1B8880C(Master_object, v9);
    }
  }
  else
  {
LABEL_46:
    v13 = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v13, 0LL, 0LL) )
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
        sub_1B88814(this, value);
      if ( *i )
      {
        if ( v7 >= max_length )
          goto LABEL_13;
        v11 = &v9->obj.klass + v7;
        v12 = (UnityEngine_MonoBehaviour_o *)v11[4];
        if ( !v12 )
          break;
        v13 = RetryConfirmItem__SetCondensedScalePossessionAmount((RetryConfirmItem_o *)v11[4], 0LL);
        this = (BattleRetryConfirmComponent_o *)UnityEngine_MonoBehaviour__StartCoroutine_69444652(v12, v13, 0LL);
      }
      LODWORD(v4) = value->max_length;
      if ( (__int64)++v7 >= (int)v4 )
        return;
    }
LABEL_14:
    sub_1B8880C(this, value);
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

  if ( (byte_4A5E395 & 1) == 0 )
  {
    sub_1B885B0(&RetryConfirmItem___TypeInfo);
    byte_4A5E395 = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_29;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL) )
  {
    reqSingleParent = (UnityEngine_GameObject_o *)sub_1B88658(RetryConfirmItem___TypeInfo, 1LL);
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
    reqSingleParent = (UnityEngine_GameObject_o *)sub_1B88658(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItem = this->fields.singleItemWithUseItemButton;
LABEL_11:
      v9 = reqSingleParent;
      if ( singleItem )
      {
        reqSingleParent = (UnityEngine_GameObject_o *)sub_1B886EC(singleItem, reqSingleParent->klass->_1.element_class);
        if ( !reqSingleParent )
        {
          v13 = sub_1B88830(0LL);
          sub_1B886D8(v13, 0LL);
        }
      }
      if ( !LODWORD(v9[1].klass) )
        sub_1B88814(reqSingleParent, items);
      v9[1].monitor = singleItem;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v9[1].monitor, (int32_t)singleItem, v6, v7);
      itemsa = (RetryConfirmItem_array *)v9;
      p_itemsa = &itemsa;
      goto LABEL_15;
    }
LABEL_29:
    sub_1B8880C(reqSingleParent, items);
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
  if ( (byte_4A5E38F & 1) == 0 )
  {
    this = (BattleRetryConfirmComponent_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E38F = 1;
  }
  if ( !items )
    sub_1B8880C(this, costPoint);
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
        sub_1B88814(v8, v9);
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

  if ( (byte_4A5E38D & 1) == 0 )
  {
    sub_1B885B0(&BattleRetryConfirmComponent_TypeInfo);
    byte_4A5E38D = 1;
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
    sub_1B8880C(reqSingleParent, costPoint);
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
      sub_1B88814(reqSingleParent, costPoint);
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

  if ( (byte_4A5E38C & 1) == 0 )
  {
    sub_1B885B0(&BattleRetryConfirmComponent_TypeInfo);
    byte_4A5E38C = 1;
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
    sub_1B8880C(reqSingleParent, costPoint);
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

  if ( (byte_4A5E38E & 1) == 0 )
  {
    sub_1B885B0(&BattleRetryConfirmComponent_TypeInfo);
    byte_4A5E38E = 1;
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
    sub_1B8880C(reqSingleParent, costPoint);
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
      sub_1B88814(reqSingleParent, costPoint);
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
  UnityEngine_Object_o *friendshipUpItemUseButton; // x20
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v5; // x1
  char v6; // w20
  PartyOrganizationUtility_c *v7; // x0
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x20
  UILabel_o *mainText; // x19
  struct BattleRetryConfirmComponent_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_GameObject_o *v13; // x20
  char v14; // w20
  BattleRetryConfirmComponent_c *v15; // x8
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_GameObject_o *v17; // x20
  char v18; // w20
  __int64 v19; // x9

  if ( (byte_4A5E394 & 1) == 0 )
  {
    sub_1B885B0(&BattleRetryConfirmComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&PartyOrganizationUtility_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4A5E394 = 1;
  }
  friendshipUpItemUseButton = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemUseButton, 0LL, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL);
      if ( this->fields.friendshipUpItemUseButton )
      {
        v6 = (char)Instance;
        Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                   0LL);
        if ( Instance )
        {
          if ( (v6 & 1) != 0 )
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
            v7 = PartyOrganizationUtility_TypeInfo;
            if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
              v7 = PartyOrganizationUtility_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v7->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
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
                    v8 = (UnityEngine_GameObject_o *)Instance;
                    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                               0LL);
                    if ( Instance )
                    {
                      Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                 (UnityEngine_GameObject_o *)Instance,
                                                                 0LL);
                      if ( v8 )
                      {
                        UnityEngine_GameObject__SetActive(v8, ((unsigned __int8)Instance & 1) == 0, 0LL);
                        Instance = (PartyOrganizationUtility_o *)this->fields.reqSingleParentWithUseItemButton;
                        if ( Instance )
                        {
                          Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                     (UnityEngine_GameObject_o *)Instance,
                                                                     0LL);
                          if ( this->fields.friendshipUpItemUseButton )
                          {
                            v9 = (UnityEngine_GameObject_o *)Instance;
                            Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                       0LL);
                            if ( Instance )
                            {
                              Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                         (UnityEngine_GameObject_o *)Instance,
                                                                         0LL);
                              if ( v9 )
                              {
                                UnityEngine_GameObject__SetActive(v9, (unsigned __int8)Instance & 1, 0LL);
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
                              UnityEngine_GameObject__SetActive(v12, ((unsigned __int8)Instance & 1) == 0, 0LL);
                              Instance = (PartyOrganizationUtility_o *)this->fields.reqDoubleParentWithUseItemButton;
                              if ( Instance )
                              {
                                Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                           0LL);
                                if ( this->fields.friendshipUpItemUseButton )
                                {
                                  v13 = (UnityEngine_GameObject_o *)Instance;
                                  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                             0LL);
                                  if ( Instance )
                                  {
                                    Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                               (UnityEngine_GameObject_o *)Instance,
                                                                               0LL);
                                    if ( v13 )
                                    {
                                      UnityEngine_GameObject__SetActive(v13, (unsigned __int8)Instance & 1, 0LL);
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
                                          v14 = (char)Instance;
                                          v15 = BattleRetryConfirmComponent_TypeInfo;
                                          if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                            v15 = BattleRetryConfirmComponent_TypeInfo;
                                          }
                                          if ( mainText )
                                          {
                                            static_fields = v15->static_fields;
                                            if ( (v14 & 1) != 0 )
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
                              UnityEngine_GameObject__SetActive(v16, ((unsigned __int8)Instance & 1) == 0, 0LL);
                              Instance = (PartyOrganizationUtility_o *)this->fields.reqTripleParentWithUseItemButton;
                              if ( Instance )
                              {
                                Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                           0LL);
                                if ( this->fields.friendshipUpItemUseButton )
                                {
                                  v17 = (UnityEngine_GameObject_o *)Instance;
                                  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                             0LL);
                                  if ( Instance )
                                  {
                                    Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                               (UnityEngine_GameObject_o *)Instance,
                                                                               0LL);
                                    if ( v17 )
                                    {
                                      UnityEngine_GameObject__SetActive(v17, (unsigned __int8)Instance & 1, 0LL);
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
                                          v18 = (char)Instance;
                                          if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                          if ( mainText )
                                          {
                                            v19 = 4LL;
                                            if ( (v18 & 1) != 0 )
                                              v19 = 12LL;
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)((char *)BattleRetryConfirmComponent_TypeInfo->static_fields + v19);
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
    sub_1B8880C(Instance, v5);
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
    sub_1B8880C(this, value);
  }
  UILabel__set_text((UILabel_o *)this, value->fields.possessionAmount, 0LL);
}


bool __fastcall BattleRetryConfirmComponent__SetValues(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x24
  int64_t Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *MasterData_object; // x19
  QuestEntity_o *v12; // x29
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v14; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  System_Text_StringBuilder_o *v17; // x26
  System_String_o *v18; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  QuestEntity_o *v21; // x25
  Il2CppObject *v22; // x26
  int32_t actMax; // w27
  BalanceConfig_c *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x28
  Il2CppObject *v28; // x29
  il2cpp_array_size_t v29; // w22
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v31; // x8
  int64_t v32; // x24
  ItemEntity_o *v33; // x25
  int32_t qp; // w20
  struct System_Int32_array *nums; // x8
  System_String_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct System_Int32_array *v42; // x8
  System_String_o *v43; // x24
  Il2CppObject *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t MaxNum; // w24
  bool v51; // w19
  System_String_o *v52; // x24
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  Il2CppObject *v56; // x23
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  Il2CppObject *v60; // x0
  struct System_String_o *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x23
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  Il2CppObject *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  __int64 v71; // x8
  _QWORD *v72; // x10
  __int64 v73; // x9
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o dispLimitCount; // q0
  __int128 v75; // q1
  __int64 v76; // x8
  const MethodInfo_35674B8 *v77; // x2
  System_String_o *v78; // x19
  Il2CppObject *v79; // x0
  System_String_o *v80; // x0
  System_String_o *v81; // x19
  System_String_o *v82; // x0
  System_String_o *v83; // x19
  CommonUI_o *v84; // x20
  BattleRetryConfirmComponent___c_c *v85; // x8
  System_Action_o *_9__37_1; // x22
  System_String_o *v87; // x21
  int32_t v88; // w2
  int32_t v89; // w3
  int32_t v90; // w2
  int32_t v91; // w3
  Il2CppObject *v92; // x28
  Il2CppObject *v93; // x29
  il2cpp_array_size_t v94; // w22
  struct System_Int32_array *v95; // x8
  struct System_Int32_array *v96; // x8
  int64_t v97; // x24
  ItemEntity_o *v98; // x25
  int32_t v99; // w20
  struct System_Int32_array *v100; // x8
  System_String_o *v101; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  struct System_Int32_array *v107; // x8
  System_String_o *v108; // x24
  Il2CppObject *v109; // x0
  int32_t v110; // w2
  int32_t v111; // w3
  System_String_o *v112; // x0
  int32_t v113; // w2
  int32_t v114; // w3
  int32_t v115; // w24
  bool v116; // w19
  System_String_o *v117; // x24
  __int64 v118; // x2
  __int64 v119; // x3
  __int64 v120; // x4
  Il2CppObject *v121; // x23
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  Il2CppObject *v125; // x0
  System_String_o *v126; // x0
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x23
  __int64 v130; // x2
  __int64 v131; // x3
  __int64 v132; // x4
  Il2CppObject *v133; // x0
  int32_t v134; // w2
  int32_t v135; // w3
  __int64 v136; // x8
  _QWORD *v137; // x10
  __int64 v138; // x9
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v139; // q0
  __int128 v140; // q1
  __int64 v141; // x8
  const MethodInfo_35674B8 *v142; // x2
  System_String_o *v143; // x19
  Il2CppObject *v144; // x0
  System_String_o *v145; // x0
  System_String_o *v146; // x19
  System_String_o *v147; // x0
  System_String_o *v148; // x19
  CommonUI_o *v149; // x20
  BattleRetryConfirmComponent___c_c *v150; // x8
  System_String_o *v151; // x21
  System_Action_o *_9__37_2; // x22
  MapControl_QuestInfo_o *v153; // x19
  int32_t questId; // w20
  bool IsQuestClear_37596684; // w20
  TerminalPramsManager_c *v156; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t CampaignCostCalcValue; // w20
  int32_t v159; // w8
  int32_t ActConsumeCost; // w0
  int32_t v161; // w22
  int32_t v162; // w19
  System_String_o *CostValueColor; // x20
  __int64 v164; // x2
  __int64 v165; // x3
  __int64 v166; // x4
  Il2CppObject *v167; // x0
  Il2CppObject *v168; // x20
  System_String_o *v169; // x0
  System_String_o *v170; // x19
  __int64 v171; // x2
  __int64 v172; // x3
  __int64 v173; // x4
  Il2CppObject *v174; // x0
  Il2CppObject *v175; // x19
  System_String_o *v176; // x0
  int32_t v177; // w2
  int32_t v178; // w3
  System_String_o *v179; // x0
  int32_t v180; // w2
  int32_t v181; // w3
  System_String_o *v182; // x0
  int32_t v183; // w2
  int32_t v184; // w3
  System_String_o *v185; // x20
  __int64 v186; // x2
  __int64 v187; // x3
  __int64 v188; // x4
  Il2CppObject *v189; // x0
  int32_t v190; // w2
  int32_t v191; // w3
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v192; // x0
  const MethodInfo *v193; // x3
  const MethodInfo *v194; // x1
  const MethodInfo *v195; // x1
  System_Action_o *v196; // x19
  BattleRetryConfirmComponent_o *v197; // x0
  const MethodInfo *v198; // x2
  System_Collections_IEnumerator_o *v199; // x0
  Il2CppObject *v201; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int32_t v203; // w2
  int32_t v204; // w3
  Il2CppObject *v205; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v206; // x0
  int32_t v207; // w2
  int32_t v208; // w3
  int32_t v209; // [xsp+44h] [xbp-1FCh]
  Il2CppObject *v210; // [xsp+48h] [xbp-1F8h]
  Il2CppObject *v211; // [xsp+48h] [xbp-1F8h]
  BattleRetryConfirmComponent_o *v212; // [xsp+50h] [xbp-1F0h]
  BattleRetryConfirmComponent_o *v213; // [xsp+50h] [xbp-1F0h]
  Il2CppObject *object; // [xsp+58h] [xbp-1E8h]
  QuestEntity_o *v215; // [xsp+60h] [xbp-1E0h]
  UserGameEntity_o **p_userGameEntity; // [xsp+80h] [xbp-1C0h]
  int64_t *v217; // [xsp+88h] [xbp-1B8h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v218; // [xsp+90h] [xbp-1B0h] BYREF
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v219; // [xsp+C0h] [xbp-180h]
  __int128 v220; // [xsp+D0h] [xbp-170h]
  int64_t sortValue1B; // [xsp+E0h] [xbp-160h]
  int32_t fixedVal; // [xsp+ECh] [xbp-154h] BYREF
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v223; // [xsp+F0h] [xbp-150h] BYREF
  ServantStatusBattleListViewItem_o v224; // [xsp+100h] [xbp-140h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v225; // [xsp+1B0h] [xbp-90h] BYREF

  if ( (byte_4A5E388 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&MapControl_QuestInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__);
    sub_1B885B0(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__);
    sub_1B885B0(&Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__);
    sub_1B885B0(&BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo);
    sub_1B885B0(&BattleRetryConfirmComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_2974/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/);
    sub_1B885B0(&StringLiteral_3855/*"CONSUME_TYPE_AP"*/);
    sub_1B885B0(&StringLiteral_10883/*"QUEST_ITEM_COST_OVER"*/);
    sub_1B885B0(&StringLiteral_2972/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/);
    sub_1B885B0(&StringLiteral_2973/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/);
    sub_1B885B0(&StringLiteral_2122/*"AP_OVER_MAX_COLOR"*/);
    sub_1B885B0(&StringLiteral_3856/*"CONSUME_TYPE_RP"*/);
    sub_1B885B0(&StringLiteral_2978/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/);
    sub_1B885B0(&StringLiteral_2977/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/);
    sub_1B885B0(&StringLiteral_44/*"\n\n"*/);
    sub_1B885B0(&StringLiteral_2975/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/);
    sub_1B885B0(&StringLiteral_2969/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_2976/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/);
    sub_1B885B0(&StringLiteral_2970/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/);
    sub_1B885B0(&StringLiteral_2971/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/);
    byte_4A5E388 = 1;
  }
  *(_DWORD *)&v224.fields.svtId.fields.inited = 0;
  memset(&v224.fields.sortValue2B, 0, 40);
  memset(&v224.fields.sortValue0, 0, 40);
  v223 = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0;
  memset(&v224, 0, 24);
  fixedVal = 0;
  v3 = sub_1B887FC(BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_172;
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v9, v10);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_172;
  p_userGameEntity = &this->fields.userGameEntity;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
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
                        *(_DWORD *)(*(_QWORD *)(Instance + 184) + 20LL),
                        (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_172;
  v12 = (QuestEntity_o *)Instance;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0, 0LL);
  *(_DWORD *)&v224.fields.svtId.fields.inited = 0;
  memset(&v224.fields.sortValue2B, 0, 40);
  v14 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_1B887FC(System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v14,
    (const MethodInfo_3566B94 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  object = (Il2CppObject *)v3;
  *(_QWORD *)(v3 + 24) = v14;
  v217 = (int64_t *)(v3 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)v14, v15, v16);
  v17 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v17, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3855/*"CONSUME_TYPE_AP"*/, 0LL);
  v215 = v12;
  switch ( QuestEntity__GetConsumeType(v12, 0LL) )
  {
    case 1:
      v21 = v12;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3855/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_172;
      v22 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      *(_DWORD *)&v224.fields.svtId.fields.inited = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      actMax = (*p_userGameEntity)->fields.actMax;
      goto LABEL_137;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3856/*"CONSUME_TYPE_RP"*/, 0LL);
      v21 = v12;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      v22 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getRp(*p_userGameEntity, 0LL);
      *(_DWORD *)&v224.fields.svtId.fields.inited = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      if ( !byte_4A580D1 )
      {
        sub_1B885B0(&BalanceConfig_TypeInfo);
        byte_4A580D1 = 1;
      }
      v24 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v24 = BalanceConfig_TypeInfo;
      }
      actMax = v24->static_fields->UerGameRpMax;
      goto LABEL_137;
    case 3:
      v212 = this;
      v224.fields.sortValue2B = (int64_t)StringLiteral_1/*""*/;
      v210 = (Il2CppObject *)StringLiteral_1/*""*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v224.fields.sortValue2B, (int32_t)StringLiteral_1/*""*/, v19, v20);
      *(_QWORD *)&v224.fields.isTermination = StringLiteral_1/*""*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v224.fields.isTermination, (int32_t)StringLiteral_1/*""*/, v25, v26);
      if ( !ItemConsumeEntity )
        goto LABEL_72;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      v27 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      v28 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_72;
      v29 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_172;
        if ( v29 >= itemIds->max_length )
          goto LABEL_173;
        if ( !v28 )
          goto LABEL_172;
        Instance = (int64_t)UserItemMaster__GetEntity((UserItemMaster_o *)v28, Instance, itemIds->m_Items[v29 + 1], 0LL);
        v31 = ItemConsumeEntity->fields.itemIds;
        if ( !v31 )
          goto LABEL_172;
        if ( v29 >= v31->max_length )
          goto LABEL_173;
        if ( !v27 )
          goto LABEL_172;
        v32 = Instance;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v27,
                              v31->m_Items[v29 + 1],
                              (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_172;
        v33 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_172;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v32 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          qp = *(_DWORD *)(v32 + 28);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_172;
        if ( v29 >= nums->max_length )
          goto LABEL_173;
        if ( nums->m_Items[v29 + 1] > qp )
        {
          Instance = (int64_t)System_String__Concat_61707032((System_String_o *)StringLiteral_43/*"\n"*/, v33->fields.name, 0LL);
          if ( !v17 )
            goto LABEL_172;
          System_Text_StringBuilder__Append_60868928(v17, (System_String_o *)Instance, 0LL);
        }
        memset(&v224.fields.sortValue0, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2973/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v224.fields.sortValue0 = (int64_t)System_String__Format(v36, (Il2CppObject *)v33->fields.name, 0LL);
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v224.fields.sortValue0, v224.fields.sortValue0, v37, v38);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2974/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v42 = ItemConsumeEntity->fields.nums;
        if ( !v42 )
          goto LABEL_172;
        if ( v29 >= v42->max_length )
          goto LABEL_173;
        v43 = (System_String_o *)Instance;
        LODWORD(v225.fields.useName) = v42->m_Items[v29 + 1];
        v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v225, v39, v40, v41);
        v224.fields.sortValue0B = (int64_t)System_String__Format(v43, v44, 0LL);
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v224.fields.sortValue0B, v224.fields.sortValue0B, v45, v46);
        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_2976/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v224.fields.sortValue1 = (int64_t)System_String__Format(v47, (Il2CppObject *)v33->fields.name, 0LL);
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v224.fields.sortValue1, v224.fields.sortValue1, v48, v49);
        MaxNum = ItemEntity__GetMaxNum(v33, 0LL);
        v51 = MaxNum > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( MaxNum < 1 )
        {
          v64 = LocalizationManager__Get((System_String_o *)StringLiteral_2977/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v225.fields.useName) = qp;
          v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v225, v65, v66, v67);
          v61 = System_String__Format(v64, v68, 0LL);
        }
        else
        {
          v52 = LocalizationManager__Get((System_String_o *)StringLiteral_2978/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v225.fields.useName) = qp;
          v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v225, v53, v54, v55);
          v224.fields.dispLimitCount.fields.currentCryptoKey = ItemEntity__GetMaxNum(v33, 0LL);
          v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v224.fields.dispLimitCount, v57, v58, v59);
          v61 = System_String__Format_61721404(v52, v56, v60, 0LL);
        }
        v224.fields.sortStr1 = v61;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v224.fields.sortStr1, (int32_t)v61, v62, v63);
        LOBYTE(v224.fields.sortValue1B) = v51;
        Instance = *v217;
        v219 = *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v224.fields.sortValue0;
        v220 = *(_OWORD *)&v224.fields.sortValue1;
        sortValue1B = v224.fields.sortValue1B;
        if ( !Instance )
          goto LABEL_172;
        v224.fields.dispLimitCount = v219;
        *(_OWORD *)&v224.fields.isEnabled = v220;
        *(_QWORD *)&v224.fields.isMine = sortValue1B;
        v71 = *(_QWORD *)(Instance + 16);
        v72 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v71 )
          goto LABEL_172;
        v73 = *(int *)(Instance + 24);
        if ( (unsigned int)v73 >= *(_DWORD *)(v71 + 24) )
        {
          v77 = *(const MethodInfo_35674B8 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL);
          *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v225.fields.useName = v224.fields.dispLimitCount;
          *(_OWORD *)&v225.fields.possessionName = *(_OWORD *)&v224.fields.isEnabled;
          *(_QWORD *)&v225.fields.isIndividualLimit = *(_QWORD *)&v224.fields.isMine;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
            &v225,
            v77);
        }
        else
        {
          *(_DWORD *)(Instance + 24) = v73 + 1;
          dispLimitCount = v224.fields.dispLimitCount;
          v75 = *(_OWORD *)&v224.fields.isEnabled;
          v76 = v71 + 40 * v73;
          *(_QWORD *)(v76 + 64) = *(_QWORD *)&v224.fields.isMine;
          *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v76 + 32) = dispLimitCount;
          *(_OWORD *)(v76 + 48) = v75;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v76 + 32), 0, v69, v70);
        }
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v29, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_72:
      if ( !v17 )
        goto LABEL_172;
      this = v212;
      v21 = v215;
      if ( System_Text_StringBuilder__get_Length(v17, 0LL) < 1 )
      {
        v22 = v210;
        actMax = 0;
LABEL_137:
        if ( QuestEntity__GetConsumeType(v21, 0LL) == 1
          || QuestEntity__GetConsumeType(v21, 0LL) == 2
          || QuestEntity__GetConsumeType(v21, 0LL) == 4 )
        {
          v153 = (MapControl_QuestInfo_o *)sub_1B887FC(MapControl_QuestInfo_TypeInfo);
          MapControl_QuestInfo___ctor(v153, 0LL);
          if ( !v153 )
            goto LABEL_172;
          MapControl_QuestInfo__SetTerminalParamsValue(v153, 0LL);
          questId = v153->fields.questId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          fixedVal = -1;
          IsQuestClear_37596684 = CondType__IsQuestClear_37596684(questId, -1, 0, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A57DC0 )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A57DC0 = 1;
          }
          v156 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v156 = TerminalPramsManager_TypeInfo;
          }
          QuestId_k__BackingField = v156->static_fields->_QuestId_k__BackingField;
          if ( !byte_4A57DCB )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            v156 = TerminalPramsManager_TypeInfo;
            byte_4A57DCB = 1;
          }
          if ( !v156->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v156);
            v156 = TerminalPramsManager_TypeInfo;
          }
          CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                                    v21,
                                    QuestId_k__BackingField,
                                    v156->static_fields->_PhaseCnt_k__BackingField,
                                    !IsQuestClear_37596684,
                                    &fixedVal,
                                    0LL);
          Instance = (int64_t)MapControl_QuestInfo__GetMine(v153, 0LL);
          if ( !Instance )
            goto LABEL_172;
          QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
          v159 = fixedVal;
          v153->fields.costCalcVal = CampaignCostCalcValue;
          v153->fields._fixedCostVal_k__BackingField = v159;
          ActConsumeCost = MapControl_QuestInfo__GetActConsumeCost(v153, 0LL);
          v161 = *(_DWORD *)&v224.fields.svtId.fields.inited;
          v162 = ActConsumeCost;
          CostValueColor = QuestEntity__GetCostValueColor(
                             CampaignCostCalcValue,
                             (ActConsumeCost > actMax) | (unsigned __int8)(ActConsumeCost > *(_DWORD *)&v224.fields.svtId.fields.inited),
                             0LL);
          LODWORD(v225.fields.useName) = v162;
          v167 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v225, v164, v165, v166);
          v168 = (Il2CppObject *)System_String__Format(CostValueColor, v167, 0LL);
          v169 = System_Int32__ToString((int32_t)&v224.fields.svtId.fields.inited, 0LL);
          if ( actMax < v161 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v170 = LocalizationManager__Get((System_String_o *)StringLiteral_2122/*"AP_OVER_MAX_COLOR"*/, 0LL);
            LODWORD(v225.fields.useName) = *(_DWORD *)&v224.fields.svtId.fields.inited;
            v174 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v225, v171, v172, v173);
            v169 = System_String__Format(v170, v174, 0LL);
          }
          v175 = (Il2CppObject *)v169;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v176 = LocalizationManager__Get((System_String_o *)StringLiteral_2971/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0LL);
          v224.fields.sortValue2B = (int64_t)System_String__Format(v176, v22, 0LL);
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&v224.fields.sortValue2B,
            v224.fields.sortValue2B,
            v177,
            v178);
          v179 = LocalizationManager__Get((System_String_o *)StringLiteral_2972/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0LL);
          *(_QWORD *)&v224.fields.isTermination = System_String__Format(v179, v168, 0LL);
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&v224.fields.isTermination,
            *(int32_t *)&v224.fields.isTermination,
            v180,
            v181);
          v182 = LocalizationManager__Get((System_String_o *)StringLiteral_2969/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0LL);
          *(_QWORD *)&v224.fields.basePosition.fields.y = System_String__Format(v182, v22, 0LL);
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&v224.fields.basePosition.fields.y,
            SLODWORD(v224.fields.basePosition.fields.y),
            v183,
            v184);
          v185 = LocalizationManager__Get((System_String_o *)StringLiteral_2970/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0LL);
          LODWORD(v225.fields.useName) = actMax;
          v189 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v225, v186, v187, v188);
          v224.fields.viewObject = (struct ListViewObject_o *)System_String__Format_61721404(v185, v175, v189, 0LL);
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&v224.fields.viewObject,
            (int32_t)v224.fields.viewObject,
            v190,
            v191);
        }
        v225 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v224.fields.sortValue2B;
        Instance = *v217;
        if ( *v217 )
        {
          v192 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                   (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
                   (const MethodInfo_35694C8 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
          v218 = v225;
          BattleRetryConfirmComponent__SetCostValueText(this, &v218, v192, v193);
          BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v194);
          BattleRetryConfirmComponent__SetFriendshipUpItemUseButton(this, v195);
          v196 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v196,
            object,
            Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__,
            0LL);
          v199 = BattleRetryConfirmComponent__WaitOneFrame(v197, v196, v198);
          UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v199, 0LL);
          return 1;
        }
LABEL_172:
        sub_1B8880C(Instance, v5);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v78 = LocalizationManager__Get((System_String_o *)StringLiteral_10883/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v79 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v17->klass->vtable._3_ToString.method)(
                              v17,
                              v17->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v80 = System_String__Format(v78, v79, 0LL);
      v81 = System_String__Concat_61707032(v80, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v82 = LocalizationManager__Get((System_String_o *)StringLiteral_2975/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v83 = System_String__Concat_61707032(v81, v82, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v84 = (CommonUI_o *)Instance;
      v85 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v85 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      _9__37_1 = v85->static_fields->__9__37_1;
      v87 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__37_1 )
      {
        if ( !v85->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v85);
          v85 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v201 = (Il2CppObject *)v85->static_fields->__9;
        _9__37_1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(_9__37_1, v201, Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, 0LL);
        static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        static_fields->__9__37_1 = _9__37_1;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__37_1, (int32_t)_9__37_1, v203, v204);
      }
      if ( !v84 )
        goto LABEL_172;
      CommonUI__OpenNotificationDialog(v84, v87, v83, _9__37_1, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
      return 0;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3855/*"CONSUME_TYPE_AP"*/, 0LL);
      v211 = (Il2CppObject *)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      v213 = this;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      *(_DWORD *)&v224.fields.svtId.fields.inited = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      v209 = (*p_userGameEntity)->fields.actMax;
      v224.fields.sortValue2B = (int64_t)StringLiteral_1/*""*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v224.fields.sortValue2B, (int32_t)StringLiteral_1/*""*/, v88, v89);
      *(_QWORD *)&v224.fields.isTermination = StringLiteral_1/*""*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v224.fields.isTermination, (int32_t)StringLiteral_1/*""*/, v90, v91);
      if ( !ItemConsumeEntity )
        goto LABEL_126;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      v92 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      v93 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_126;
      v94 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        v95 = ItemConsumeEntity->fields.itemIds;
        if ( !v95 )
          goto LABEL_172;
        if ( v94 >= v95->max_length )
          goto LABEL_173;
        if ( !v93 )
          goto LABEL_172;
        Instance = (int64_t)UserItemMaster__GetEntity((UserItemMaster_o *)v93, Instance, v95->m_Items[v94 + 1], 0LL);
        v96 = ItemConsumeEntity->fields.itemIds;
        if ( !v96 )
          goto LABEL_172;
        if ( v94 >= v96->max_length )
          goto LABEL_173;
        if ( !v92 )
          goto LABEL_172;
        v97 = Instance;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v92,
                              v96->m_Items[v94 + 1],
                              (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_172;
        v98 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_172;
          v99 = (*p_userGameEntity)->fields.qp;
        }
        else if ( v97 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          v99 = *(_DWORD *)(v97 + 28);
        }
        else
        {
          v99 = 0;
        }
        v100 = ItemConsumeEntity->fields.nums;
        if ( !v100 )
          goto LABEL_172;
        if ( v94 >= v100->max_length )
          goto LABEL_173;
        if ( v100->m_Items[v94 + 1] > v99 )
        {
          Instance = (int64_t)System_String__Concat_61707032((System_String_o *)StringLiteral_43/*"\n"*/, v98->fields.name, 0LL);
          if ( !v17 )
            goto LABEL_172;
          System_Text_StringBuilder__Append_60868928(v17, (System_String_o *)Instance, 0LL);
        }
        v223 = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0;
        memset(&v224, 0, 24);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v101 = LocalizationManager__Get((System_String_o *)StringLiteral_2973/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        *(_QWORD *)&v223.fields.currentCryptoKey = System_String__Format(v101, (Il2CppObject *)v98->fields.name, 0LL);
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v223, v223.fields.currentCryptoKey, v102, v103);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2974/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v107 = ItemConsumeEntity->fields.nums;
        if ( !v107 )
          goto LABEL_172;
        if ( v94 >= v107->max_length )
LABEL_173:
          sub_1B88814(Instance, v5);
        v108 = (System_String_o *)Instance;
        LODWORD(v225.fields.useName) = v107->m_Items[v94 + 1];
        v109 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v225, v104, v105, v106);
        *(_QWORD *)&v223.fields.fakeValue = System_String__Format(v108, v109, 0LL);
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v223.fields.fakeValue, v223.fields.fakeValue, v110, v111);
        v112 = LocalizationManager__Get((System_String_o *)StringLiteral_2976/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v224.klass = (ServantStatusBattleListViewItem_c *)System_String__Format(
                                                            v112,
                                                            (Il2CppObject *)v98->fields.name,
                                                            0LL);
        sub_1B88554(&v224, (int32_t)v224.klass, v113, v114);
        v115 = ItemEntity__GetMaxNum(v98, 0LL);
        v116 = v115 > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v115 < 1 )
        {
          v129 = LocalizationManager__Get((System_String_o *)StringLiteral_2977/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v225.fields.useName) = v99;
          v133 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v225, v130, v131, v132);
          v126 = System_String__Format(v129, v133, 0LL);
        }
        else
        {
          v117 = LocalizationManager__Get((System_String_o *)StringLiteral_2978/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v225.fields.useName) = v99;
          v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v225, v118, v119, v120);
          v224.fields.dispLimitCount.fields.currentCryptoKey = ItemEntity__GetMaxNum(v98, 0LL);
          v125 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v224.fields.dispLimitCount, v122, v123, v124);
          v126 = System_String__Format_61721404(v117, v121, v125, 0LL);
        }
        v224.monitor = v126;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v224.monitor, (int32_t)v126, v127, v128);
        LOBYTE(v224.fields.selectNum) = v116;
        Instance = *v217;
        v219 = v223;
        v220 = *(_OWORD *)&v224.klass;
        sortValue1B = *(_QWORD *)&v224.fields.selectNum;
        if ( !Instance )
          goto LABEL_172;
        v224.fields.dispLimitCount = v219;
        *(_OWORD *)&v224.fields.isEnabled = v220;
        *(_QWORD *)&v224.fields.isMine = sortValue1B;
        v136 = *(_QWORD *)(Instance + 16);
        v137 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v136 )
          goto LABEL_172;
        v138 = *(int *)(Instance + 24);
        if ( (unsigned int)v138 >= *(_DWORD *)(v136 + 24) )
        {
          v142 = *(const MethodInfo_35674B8 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL);
          *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&v225.fields.useName = v224.fields.dispLimitCount;
          *(_OWORD *)&v225.fields.possessionName = *(_OWORD *)&v224.fields.isEnabled;
          *(_QWORD *)&v225.fields.isIndividualLimit = *(_QWORD *)&v224.fields.isMine;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
            &v225,
            v142);
        }
        else
        {
          *(_DWORD *)(Instance + 24) = v138 + 1;
          v139 = v224.fields.dispLimitCount;
          v140 = *(_OWORD *)&v224.fields.isEnabled;
          v141 = v136 + 40 * v138;
          *(_QWORD *)(v141 + 64) = *(_QWORD *)&v224.fields.isMine;
          *(struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v141 + 32) = v139;
          *(_OWORD *)(v141 + 48) = v140;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v141 + 32), 0, v134, v135);
        }
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v94, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_126:
      if ( !v17 )
        goto LABEL_172;
      this = v213;
      v21 = v215;
      if ( System_Text_StringBuilder__get_Length(v17, 0LL) >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v143 = LocalizationManager__Get((System_String_o *)StringLiteral_10883/*"QUEST_ITEM_COST_OVER"*/, 0LL);
        v144 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v17->klass->vtable._3_ToString.method)(
                                 v17,
                                 v17->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        v145 = System_String__Format(v143, v144, 0LL);
        v146 = System_String__Concat_61707032(v145, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
        v147 = LocalizationManager__Get((System_String_o *)StringLiteral_2975/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
        v148 = System_String__Concat_61707032(v146, v147, 0LL);
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v149 = (CommonUI_o *)Instance;
        v150 = BattleRetryConfirmComponent___c_TypeInfo;
        if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
          v150 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v151 = (System_String_o *)StringLiteral_1/*""*/;
        _9__37_2 = v150->static_fields->__9__37_2;
        if ( !_9__37_2 )
        {
          if ( !v150->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v150);
            v150 = BattleRetryConfirmComponent___c_TypeInfo;
          }
          v205 = (Il2CppObject *)v150->static_fields->__9;
          _9__37_2 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(_9__37_2, v205, Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, 0LL);
          v206 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
          v206->__9__37_2 = _9__37_2;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v206->__9__37_2, (int32_t)_9__37_2, v207, v208);
        }
        if ( v149 )
        {
          CommonUI__OpenNotificationDialog(v149, v151, v148, _9__37_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
          return 0;
        }
        goto LABEL_172;
      }
      v22 = v211;
      actMax = v209;
      goto LABEL_137;
    default:
      v21 = v12;
      actMax = 0;
      v22 = (Il2CppObject *)v18;
      goto LABEL_137;
  }
}


System_Collections_IEnumerator_o *__fastcall BattleRetryConfirmComponent__WaitOneFrame(
        BattleRetryConfirmComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5E38B & 1) == 0 )
  {
    sub_1B885B0(&BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo);
    byte_4A5E38B = 1;
  }
  v4 = sub_1B887FC(BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo);
  BattleRetryConfirmComponent__WaitOneFrame_d__42___ctor(
    (BattleRetryConfirmComponent__WaitOneFrame_d__42_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_1B8880C(v5, v6);
  *(_QWORD *)(v4 + 32) = action;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)action, v7, v8);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, 0, v2, v3);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E398 & 1) == 0 )
  {
    sub_1B885B0(&BattleRetryConfirmComponent___c_TypeInfo);
    byte_4A5E398 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleRetryConfirmComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleRetryConfirmComponent___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BattleRetryConfirmComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5E399 & 1) == 0 )
  {
    sub_1B885B0(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5E399 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2E69590 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__37_2(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A5E39A & 1) == 0 )
  {
    sub_1B885B0(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5E39A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2E69590 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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

  if ( (byte_4A5E39B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
    byte_4A5E39B = 1;
  }
  rciItems = this->fields.rciItems;
  if ( !rciItems
    || (_4__this = this->fields.__4__this,
        rciItems = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(rciItems, (const MethodInfo_35694C8 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__),
        !_4__this) )
  {
    sub_1B8880C(rciItems, method);
  }
  BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
    _4__this,
    (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)rciItems,
    v5);
}