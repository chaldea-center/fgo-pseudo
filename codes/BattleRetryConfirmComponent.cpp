void __fastcall BattleRetryConfirmComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1959C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRetryConfirmComponent_TypeInfo, v1, v2);
    byte_4B1959C = 1;
  }
  *BattleRetryConfirmComponent_TypeInfo->static_fields = (struct BattleRetryConfirmComponent_StaticFields)xmmword_BD3140;
}


void __fastcall BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.CONFIRM_BUTTON_POSITION_ON_THREE.fields.x = xmmword_BD2AC0;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B19597 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__,
      *(_QWORD *)&result,
      *(_QWORD *)&boostId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    byte_4B19597 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  switch ( result )
  {
    case 2:
      battleResultComponent = this->fields.battleResultComponent;
      if ( !battleResultComponent )
        goto LABEL_20;
      v17 = boostId;
LABEL_17:
      BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, v17, 0LL);
      break;
    case 1:
      battleResultComponent = this->fields.battleResultComponent;
      if ( !battleResultComponent )
        goto LABEL_20;
      v17 = 0;
      goto LABEL_17;
    case 0:
      battleResultComponent = (BattleResultComponent_o *)this->fields.buttons;
      if ( !battleResultComponent )
        goto LABEL_20;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v18,
        (System_Collections_Generic_List_object__o *)battleResultComponent,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v18,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v18.fields._current )
          sub_1BCAA3C(0LL, v16);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v18.fields._current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v18,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_20:
    sub_1BCAA3C(battleResultComponent, *(_QWORD *)&result);
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
    sub_1BCAA3C(cancelLabel, method);
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
    sub_1BCAA3C(reqSingleParent, method);
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
      sub_1BCAA44(reqSingleParent, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_GameObject_o *root; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  struct System_Collections_Generic_List_UIButton__o **p_buttons; // x20
  System_Collections_Generic_List_object__o *v33; // x21
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v47; // x21
  unsigned __int64 v48; // x22
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 klass_low; // x10
  __int64 v52; // x8
  __int64 v53; // x1
  __int64 v54; // x1
  UILabel_o *mainText; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *confirmLabel; // x20
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B19595 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIButton__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIButton___ctor__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIButton__get_Count__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_UIButton__TypeInfo, v18, v19);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_2987/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_2989/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_2988/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, v26, v27);
    byte_4B19595 = 1;
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
    v33 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_UIButton__TypeInfo,
                                                         v29,
                                                         v30,
                                                         v31);
    System_Collections_Generic_List_object____ctor(
      v33,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v33;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.buttons, (int64_t)v33, v34, v35, v36, v37, v38, v39);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    if ( !root )
      goto LABEL_32;
    klass = root[1].klass;
    v47 = root;
    if ( (int)klass >= 1 )
    {
      v48 = 0LL;
      while ( 1 )
      {
        if ( v48 >= (unsigned int)klass )
          sub_1BCAA44(root, method);
        root = (UnityEngine_GameObject_o *)*p_buttons;
        if ( !*p_buttons )
          break;
        method = (const MethodInfo *)*((_QWORD *)&v47[1].monitor + v48);
        v49 = *(_QWORD *)&root->fields.m_CachedPtr;
        v50 = Method_System_Collections_Generic_List_UIButton__Add__;
        ++HIDWORD(root[1].klass);
        if ( !v49 )
          break;
        klass_low = SLODWORD(root[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v49 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)root,
            (Il2CppObject *)method,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
        }
        else
        {
          v52 = v49 + 8 * klass_low;
          LODWORD(root[1].klass) = klass_low + 1;
          *(_QWORD *)(v52 + 32) = method;
          sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 32), (int64_t)method, v40, v41, v42, v43, v44, v45);
        }
        LODWORD(klass) = v47[1].klass;
        if ( (__int64)++v48 >= (int)klass )
          goto LABEL_18;
      }
LABEL_32:
      sub_1BCAA3C(root, method);
    }
LABEL_18:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_32;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    (System_Collections_Generic_List_object__o *)root,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  for ( i = v58;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0LL) )
  {
    if ( !i.fields._current )
      sub_1BCAA3C(0LL, v53);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  if ( !this->fields.isInitialized )
  {
    mainText = this->fields.mainText;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v54);
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2989/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
    if ( !mainText )
      goto LABEL_32;
    UILabel__set_text(mainText, (System_String_o *)root, 0LL);
    cancelLabel = this->fields.cancelLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2987/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_32;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0LL);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2988/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *Instance; // x20
  TerminalPramsManager_c *v26; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w21
  BoostFunctionUtility_CallbackFunc_o *v29; // x23
  System_Collections_Generic_List_object__o *buttons; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B19596 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__, method, v2);
    sub_1BCA7E0(&Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__, v4, v5);
    sub_1BCA7E0(&BoostFunctionUtility_CallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v18, v19);
    byte_4B19596 = 1;
  }
  v20 = Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__;
  memset(&v33, 0, sizeof(v33));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1BCA7F8(Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
  v21 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 8, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
    byte_4B12DC3 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
    v26 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v26->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v22, v23);
    v26 = TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !v26->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v26, v22);
    v26 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v26->static_fields->_PhaseCnt_k__BackingField;
  v29 = (BoostFunctionUtility_CallbackFunc_o *)sub_1BCAA2C(BoostFunctionUtility_CallbackFunc_TypeInfo, v22, v23, v24);
  BoostFunctionUtility_CallbackFunc___ctor(
    v29,
    (Il2CppObject *)this,
    Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__,
    0LL);
  if ( !Instance
    || (CommonUI__OpenBoostSupportRequestMenu(
          (CommonUI_o *)Instance,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          v29,
          1,
          0LL),
        (buttons = (System_Collections_Generic_List_object__o *)this->fields.buttons) == 0LL) )
  {
    sub_1BCAA3C(buttons, v31);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    buttons,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v33.fields._current )
      sub_1BCAA3C(0LL, v32);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v33.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
}


void __fastcall BattleRetryConfirmComponent__OnClickCancel(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1958E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleRetryConfirmComponent_OnClickCancel__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v10, v11);
    byte_4B1958E = 1;
  }
  v12 = Method_BattleRetryConfirmComponent_OnClickCancel__;
  memset(&v17, 0, sizeof(v17));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_BattleRetryConfirmComponent_OnClickCancel__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 1, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_1BCAA3C(battleResultComponent, v14);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)battleResultComponent,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v17.fields._current )
      sub_1BCAA3C(0LL, v16);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v17.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
}


void __fastcall BattleRetryConfirmComponent__OnClickConfirm(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1958F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleRetryConfirmComponent_OnClickConfirm__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v10, v11);
    byte_4B1958F = 1;
  }
  v12 = Method_BattleRetryConfirmComponent_OnClickConfirm__;
  memset(&v17, 0, sizeof(v17));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickConfirm__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1BCA7F8(Method_BattleRetryConfirmComponent_OnClickConfirm__);
  v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0LL);
  battleResultComponent = this->fields.battleResultComponent;
  if ( !battleResultComponent
    || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0LL),
        (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
  {
    sub_1BCAA3C(battleResultComponent, v14);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)battleResultComponent,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v17.fields._current )
      sub_1BCAA3C(0LL, v16);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v17.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
}


void __fastcall BattleRetryConfirmComponent__OnClickFriendshipUpItemUseButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_c *v6; // x0
  int32_t Int; // w0
  _QWORD *v8; // x8
  int32_t v9; // w20
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  PartyOrganizationUtility_c *v12; // x0
  __int64 v13; // x1
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v15; // w1
  __int64 v16; // x1
  PartyOrganizationUtility_c *v17; // x0

  if ( (byte_4B1959B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleRetryConfirmComponent_OnClickFriendshipUpItemUseButton__, method, v2);
    sub_1BCA7E0(&PartyOrganizationUtility_TypeInfo, v4, v5);
    byte_4B1959B = 1;
  }
  v6 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, method);
    v6 = PartyOrganizationUtility_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v6->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  v8 = Method_BattleRetryConfirmComponent_OnClickFriendshipUpItemUseButton__;
  v9 = Int;
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickFriendshipUpItemUseButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_BattleRetryConfirmComponent_OnClickFriendshipUpItemUseButton__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  if ( !v9 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    v17 = PartyOrganizationUtility_TypeInfo;
    if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, v16);
      v17 = PartyOrganizationUtility_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v17->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 1, 0LL);
    friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
    if ( friendshipUpItemUseButton )
    {
      v15 = 1;
      goto LABEL_16;
    }
LABEL_17:
    sub_1BCAA3C(friendshipUpItemUseButton, v13);
  }
  OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
  v12 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, v11);
    v12 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v12->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
  if ( !friendshipUpItemUseButton )
    goto LABEL_17;
  v15 = 0;
LABEL_16:
  FriendshipUpItemUseItem__ChangeButtonState(friendshipUpItemUseButton, v15, 0LL);
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
    sub_1BCAA3C(bgObj, opendFunc);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObj, 0LL);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
}


void __fastcall BattleRetryConfirmComponent__SetBoostSupportRequestButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  TerminalPramsManager_c *v23; // x0
  int32_t WarId_k__BackingField; // w22
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v27; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  BattleSetupInfo_o *v31; // x22
  __int64 v32; // x1
  UnityEngine_Object_o *boostSupportRequestLabel; // x20
  UILabel_o *v34; // x20
  UnityEngine_Object_o *v35; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B19598 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSetupInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v15, v16);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_11248/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_2986/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/, v21, v22);
    byte_4B19598 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12DC6 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v23 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v23->static_fields->_WarId_k__BackingField;
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v23 = TerminalPramsManager_TypeInfo;
    byte_4B12DC3 = 1;
  }
  if ( !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23, method);
    v23 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v23->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    v23 = TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23, method);
    v23 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v23->static_fields->_PhaseCnt_k__BackingField;
  v27 = (BattleSetupInfo_o *)sub_1BCAA2C(BattleSetupInfo_TypeInfo, method, v2, v3);
  BattleSetupInfo___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_55;
  v31 = BattleSetupInfo__ConvertBattleSetupInfo(
          v27,
          WarId_k__BackingField,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          0,
          0,
          0,
          0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v31 || !Master_object )
    goto LABEL_55;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          v31->fields.eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_46;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_55;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_object )
      goto LABEL_55;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_object,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0LL)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11248/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0LL) == 1 )
    {
      boostSupportRequestLabel = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
      if ( UnityEngine_Object__op_Inequality(boostSupportRequestLabel, 0LL, 0LL) )
      {
        v34 = this->fields.boostSupportRequestLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_2986/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/,
                                                                        0LL);
        if ( !v34 )
          goto LABEL_55;
        UILabel__set_text(v34, (System_String_o *)Master_object, 0LL);
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
      sub_1BCAA3C(Master_object, v29);
    }
  }
  else
  {
LABEL_46:
    v35 = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
    if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
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
        sub_1BCAA44(this, value);
      if ( *i )
      {
        if ( v7 >= max_length )
          goto LABEL_13;
        v11 = &v9->obj.klass + v7;
        v12 = (UnityEngine_MonoBehaviour_o *)v11[4];
        if ( !v12 )
          break;
        v13 = RetryConfirmItem__SetCondensedScalePossessionAmount((RetryConfirmItem_o *)v11[4], 0LL);
        this = (BattleRetryConfirmComponent_o *)UnityEngine_MonoBehaviour__StartCoroutine_70139516(v12, v13, 0LL);
      }
      LODWORD(v4) = value->max_length;
      if ( (__int64)++v7 >= (int)v4 )
        return;
    }
LABEL_14:
    sub_1BCAA3C(this, value);
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

  if ( (byte_4B1959A & 1) == 0 )
  {
    sub_1BCA7E0(&RetryConfirmItem___TypeInfo, items, method);
    byte_4B1959A = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_29;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL) )
  {
    reqSingleParent = (UnityEngine_GameObject_o *)sub_1BCA888(RetryConfirmItem___TypeInfo, 1LL);
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
    reqSingleParent = (UnityEngine_GameObject_o *)sub_1BCA888(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItem = this->fields.singleItemWithUseItemButton;
LABEL_11:
      v13 = reqSingleParent;
      if ( singleItem )
      {
        reqSingleParent = (UnityEngine_GameObject_o *)sub_1BCA91C(singleItem, reqSingleParent->klass->_1.element_class);
        if ( !reqSingleParent )
        {
          v17 = sub_1BCAA60(0LL);
          sub_1BCA908(v17, 0LL);
        }
      }
      if ( !LODWORD(v13[1].klass) )
        sub_1BCAA44(reqSingleParent, items);
      v13[1].monitor = singleItem;
      sub_1BCA784((PartyOrganizationUtility_o *)&v13[1].monitor, (int64_t)singleItem, v6, v7, v8, v9, v10, v11);
      itemsa = (RetryConfirmItem_array *)v13;
      p_itemsa = &itemsa;
      goto LABEL_15;
    }
LABEL_29:
    sub_1BCAA3C(reqSingleParent, items);
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
  if ( (byte_4B19594 & 1) == 0 )
  {
    this = (BattleRetryConfirmComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, costPoint, items);
    byte_4B19594 = 1;
  }
  if ( !items )
    sub_1BCAA3C(this, costPoint);
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
        sub_1BCAA44(v8, v9);
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

  if ( (byte_4B19592 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRetryConfirmComponent_TypeInfo, costPoint, items);
    byte_4B19592 = 1;
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
    j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo, costPoint);
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
    sub_1BCAA3C(reqSingleParent, costPoint);
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
      sub_1BCAA44(reqSingleParent, costPoint);
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

  if ( (byte_4B19591 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRetryConfirmComponent_TypeInfo, costPoint, item);
    byte_4B19591 = 1;
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
    j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo, costPoint);
  if ( !mainText )
LABEL_13:
    sub_1BCAA3C(reqSingleParent, costPoint);
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

  if ( (byte_4B19593 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRetryConfirmComponent_TypeInfo, costPoint, items);
    byte_4B19593 = 1;
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
    j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo, costPoint);
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
    sub_1BCAA3C(reqSingleParent, costPoint);
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
      sub_1BCAA44(reqSingleParent, costPoint);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *friendshipUpItemUseButton; // x20
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v12; // x1
  char v13; // w20
  __int64 v14; // x1
  PartyOrganizationUtility_c *v15; // x0
  UnityEngine_GameObject_o *v16; // x20
  UnityEngine_GameObject_o *v17; // x20
  UILabel_o *mainText; // x19
  struct BattleRetryConfirmComponent_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_GameObject_o *v21; // x20
  char v22; // w20
  BattleRetryConfirmComponent_c *v23; // x8
  UnityEngine_GameObject_o *v24; // x20
  UnityEngine_GameObject_o *v25; // x20
  char v26; // w20
  __int64 v27; // x9

  if ( (byte_4B19599 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRetryConfirmComponent_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&PartyOrganizationUtility_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v8, v9);
    byte_4B19599 = 1;
  }
  friendshipUpItemUseButton = (UnityEngine_Object_o *)this->fields.friendshipUpItemUseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemUseButton, 0LL, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL);
      if ( this->fields.friendshipUpItemUseButton )
      {
        v13 = (char)Instance;
        Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                   0LL);
        if ( Instance )
        {
          if ( (v13 & 1) != 0 )
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
            v15 = PartyOrganizationUtility_TypeInfo;
            if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, v14);
              v15 = PartyOrganizationUtility_TypeInfo;
            }
            UnityEngine_PlayerPrefs__SetInt(v15->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
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
                        Instance = (PartyOrganizationUtility_o *)this->fields.reqSingleParentWithUseItemButton;
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
                                mainText = this->fields.mainText;
                                Instance = (PartyOrganizationUtility_o *)BattleRetryConfirmComponent_TypeInfo;
                                if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo, v12);
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
                              UnityEngine_GameObject__SetActive(v20, ((unsigned __int8)Instance & 1) == 0, 0LL);
                              Instance = (PartyOrganizationUtility_o *)this->fields.reqDoubleParentWithUseItemButton;
                              if ( Instance )
                              {
                                Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                           0LL);
                                if ( this->fields.friendshipUpItemUseButton )
                                {
                                  v21 = (UnityEngine_GameObject_o *)Instance;
                                  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                             0LL);
                                  if ( Instance )
                                  {
                                    Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                               (UnityEngine_GameObject_o *)Instance,
                                                                               0LL);
                                    if ( v21 )
                                    {
                                      UnityEngine_GameObject__SetActive(v21, (unsigned __int8)Instance & 1, 0LL);
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
                                          v22 = (char)Instance;
                                          v23 = BattleRetryConfirmComponent_TypeInfo;
                                          if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo, v12);
                                            v23 = BattleRetryConfirmComponent_TypeInfo;
                                          }
                                          if ( mainText )
                                          {
                                            static_fields = v23->static_fields;
                                            if ( (v22 & 1) != 0 )
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
                          v24 = (UnityEngine_GameObject_o *)Instance;
                          Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                     0LL);
                          if ( Instance )
                          {
                            Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                       (UnityEngine_GameObject_o *)Instance,
                                                                       0LL);
                            if ( v24 )
                            {
                              UnityEngine_GameObject__SetActive(v24, ((unsigned __int8)Instance & 1) == 0, 0LL);
                              Instance = (PartyOrganizationUtility_o *)this->fields.reqTripleParentWithUseItemButton;
                              if ( Instance )
                              {
                                Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                           0LL);
                                if ( this->fields.friendshipUpItemUseButton )
                                {
                                  v25 = (UnityEngine_GameObject_o *)Instance;
                                  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                                                             0LL);
                                  if ( Instance )
                                  {
                                    Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                               (UnityEngine_GameObject_o *)Instance,
                                                                               0LL);
                                    if ( v25 )
                                    {
                                      UnityEngine_GameObject__SetActive(v25, (unsigned __int8)Instance & 1, 0LL);
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
                                          v26 = (char)Instance;
                                          if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo, v12);
                                          if ( mainText )
                                          {
                                            v27 = 4LL;
                                            if ( (v26 & 1) != 0 )
                                              v27 = 12LL;
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)((char *)BattleRetryConfirmComponent_TypeInfo->static_fields + v27);
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
    sub_1BCAA3C(Instance, v12);
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
    sub_1BCAA3C(this, value);
  }
  UILabel__set_text((UILabel_o *)this, value->fields.possessionAmount, 0LL);
}


bool __fastcall BattleRetryConfirmComponent__SetValues(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x24
  int64_t Instance; // x0
  __int64 v87; // x1
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  __int64 v101; // x2
  Il2CppObject *MasterData_object; // x19
  QuestEntity_o *v103; // x29
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x3
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v108; // x19
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  __int64 v115; // x1
  __int64 v116; // x2
  __int64 v117; // x3
  System_Text_StringBuilder_o *v118; // x26
  __int64 v119; // x1
  System_String_o *v120; // x19
  __int64 v121; // x1
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  QuestEntity_o *v128; // x25
  Il2CppObject *v129; // x26
  int32_t actMax; // w27
  __int64 v131; // x2
  BalanceConfig_c *v132; // x0
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  Il2CppObject *v139; // x28
  Il2CppObject *v140; // x29
  il2cpp_array_size_t v141; // w22
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v143; // x8
  int64_t v144; // x24
  ItemEntity_o *v145; // x25
  int32_t qp; // w20
  struct System_Int32_array *nums; // x8
  System_String_o *v148; // x0
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
  struct System_Int32_array *v155; // x8
  System_String_o *v156; // x24
  Il2CppObject *v157; // x0
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  System_String_o *v164; // x0
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  __int64 v171; // x1
  int32_t MaxNum; // w24
  bool v173; // w19
  System_String_o *v174; // x24
  Il2CppObject *v175; // x23
  Il2CppObject *v176; // x0
  struct PartyListViewItem_o *v177; // x0
  int64_t v178; // x2
  int32_t v179; // w3
  System_String_o *v180; // x4
  BattleSetupInfo_o *v181; // x5
  FollowerInfo_o *v182; // x6
  PartyListViewItem_o *v183; // x7
  System_String_o *v184; // x23
  Il2CppObject *v185; // x0
  int64_t v186; // x2
  int32_t v187; // w3
  System_String_o *v188; // x4
  BattleSetupInfo_o *v189; // x5
  FollowerInfo_o *v190; // x6
  PartyListViewItem_o *v191; // x7
  __int64 v192; // x8
  _QWORD *v193; // x10
  __int64 v194; // x9
  __int128 v195; // q0
  __int128 v196; // q1
  __int64 v197; // x8
  const MethodInfo_360B8E0 *v198; // x2
  __int64 v199; // x1
  System_String_o *v200; // x19
  Il2CppObject *v201; // x0
  System_String_o *v202; // x0
  System_String_o *v203; // x19
  System_String_o *v204; // x0
  System_String_o *v205; // x19
  __int64 v206; // x2
  __int64 v207; // x3
  CommonUI_o *v208; // x20
  BattleRetryConfirmComponent___c_c *v209; // x8
  System_Action_o *_9__37_1; // x22
  System_String_o *v211; // x21
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  int64_t v218; // x2
  int32_t v219; // w3
  System_String_o *v220; // x4
  BattleSetupInfo_o *v221; // x5
  FollowerInfo_o *v222; // x6
  PartyListViewItem_o *v223; // x7
  Il2CppObject *v224; // x28
  Il2CppObject *v225; // x29
  il2cpp_array_size_t v226; // w22
  struct System_Int32_array *v227; // x8
  struct System_Int32_array *v228; // x8
  int64_t v229; // x24
  ItemEntity_o *v230; // x25
  int32_t v231; // w20
  struct System_Int32_array *v232; // x8
  System_String_o *v233; // x0
  int64_t v234; // x2
  int32_t v235; // w3
  System_String_o *v236; // x4
  BattleSetupInfo_o *v237; // x5
  FollowerInfo_o *v238; // x6
  PartyListViewItem_o *v239; // x7
  struct System_Int32_array *v240; // x8
  System_String_o *v241; // x24
  Il2CppObject *v242; // x0
  int64_t v243; // x2
  int32_t v244; // w3
  System_String_o *v245; // x4
  BattleSetupInfo_o *v246; // x5
  FollowerInfo_o *v247; // x6
  PartyListViewItem_o *v248; // x7
  System_String_o *v249; // x0
  int64_t v250; // x2
  int32_t v251; // w3
  System_String_o *v252; // x4
  BattleSetupInfo_o *v253; // x5
  FollowerInfo_o *v254; // x6
  PartyListViewItem_o *v255; // x7
  __int64 v256; // x1
  int32_t v257; // w24
  bool v258; // w19
  System_String_o *v259; // x24
  Il2CppObject *v260; // x23
  Il2CppObject *v261; // x0
  struct FollowerInfo_o *v262; // x0
  int64_t v263; // x2
  int32_t v264; // w3
  System_String_o *v265; // x4
  BattleSetupInfo_o *v266; // x5
  FollowerInfo_o *v267; // x6
  PartyListViewItem_o *v268; // x7
  System_String_o *v269; // x23
  Il2CppObject *v270; // x0
  int64_t v271; // x2
  int32_t v272; // w3
  System_String_o *v273; // x4
  BattleSetupInfo_o *v274; // x5
  FollowerInfo_o *v275; // x6
  PartyListViewItem_o *v276; // x7
  __int64 v277; // x8
  _QWORD *v278; // x10
  __int64 v279; // x9
  __int128 v280; // q0
  __int128 v281; // q1
  __int64 v282; // x8
  const MethodInfo_360B8E0 *v283; // x2
  __int64 v284; // x1
  System_String_o *v285; // x19
  Il2CppObject *v286; // x0
  System_String_o *v287; // x0
  System_String_o *v288; // x19
  System_String_o *v289; // x0
  System_String_o *v290; // x19
  __int64 v291; // x2
  __int64 v292; // x3
  CommonUI_o *v293; // x20
  BattleRetryConfirmComponent___c_c *v294; // x8
  System_String_o *v295; // x21
  System_Action_o *_9__37_2; // x22
  __int64 v297; // x2
  __int64 v298; // x3
  MapControl_QuestInfo_o *v299; // x19
  __int64 v300; // x1
  int32_t questId; // w20
  __int64 v302; // x1
  __int64 v303; // x2
  bool IsQuestClear_38310172; // w20
  TerminalPramsManager_c *v305; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t CampaignCostCalcValue; // w20
  int32_t v308; // w8
  int32_t ActConsumeCost; // w0
  int32_t v310; // w22
  int32_t v311; // w19
  System_String_o *CostValueColor; // x20
  Il2CppObject *v313; // x0
  Il2CppObject *v314; // x20
  System_String_o *v315; // x0
  __int64 v316; // x1
  System_String_o *v317; // x19
  Il2CppObject *v318; // x0
  Il2CppObject *v319; // x19
  System_String_o *v320; // x0
  int64_t v321; // x2
  int32_t v322; // w3
  System_String_o *v323; // x4
  BattleSetupInfo_o *v324; // x5
  FollowerInfo_o *v325; // x6
  PartyListViewItem_o *v326; // x7
  System_String_o *v327; // x0
  int64_t v328; // x2
  int32_t v329; // w3
  System_String_o *v330; // x4
  BattleSetupInfo_o *v331; // x5
  FollowerInfo_o *v332; // x6
  PartyListViewItem_o *v333; // x7
  System_String_o *v334; // x0
  int64_t v335; // x2
  int32_t v336; // w3
  System_String_o *v337; // x4
  BattleSetupInfo_o *v338; // x5
  FollowerInfo_o *v339; // x6
  PartyListViewItem_o *v340; // x7
  System_String_o *v341; // x20
  Il2CppObject *v342; // x0
  int64_t v343; // x2
  int32_t v344; // w3
  System_String_o *v345; // x4
  BattleSetupInfo_o *v346; // x5
  FollowerInfo_o *v347; // x6
  PartyListViewItem_o *v348; // x7
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v349; // x0
  const MethodInfo *v350; // x3
  const MethodInfo *v351; // x1
  const MethodInfo *v352; // x1
  __int64 v353; // x1
  __int64 v354; // x2
  __int64 v355; // x3
  System_Action_o *v356; // x19
  BattleRetryConfirmComponent_o *v357; // x0
  const MethodInfo *v358; // x2
  System_Collections_IEnumerator_o *v359; // x0
  Il2CppObject *v361; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int64_t v363; // x2
  int32_t v364; // w3
  System_String_o *v365; // x4
  BattleSetupInfo_o *v366; // x5
  FollowerInfo_o *v367; // x6
  PartyListViewItem_o *v368; // x7
  Il2CppObject *v369; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v370; // x0
  int64_t v371; // x2
  int32_t v372; // w3
  System_String_o *v373; // x4
  BattleSetupInfo_o *v374; // x5
  FollowerInfo_o *v375; // x6
  PartyListViewItem_o *v376; // x7
  int32_t v377; // [xsp+44h] [xbp-1FCh]
  Il2CppObject *v378; // [xsp+48h] [xbp-1F8h]
  Il2CppObject *v379; // [xsp+48h] [xbp-1F8h]
  BattleRetryConfirmComponent_o *v380; // [xsp+50h] [xbp-1F0h]
  BattleRetryConfirmComponent_o *v381; // [xsp+50h] [xbp-1F0h]
  Il2CppObject *object; // [xsp+58h] [xbp-1E8h]
  QuestEntity_o *v383; // [xsp+60h] [xbp-1E0h]
  UserGameEntity_o **p_userGameEntity; // [xsp+80h] [xbp-1C0h]
  int64_t *v385; // [xsp+88h] [xbp-1B8h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v386; // [xsp+90h] [xbp-1B0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v387; // [xsp+C0h] [xbp-180h]
  int32_t fixedVal; // [xsp+ECh] [xbp-154h] BYREF
  PartyOrganizationUtility_o v389; // [xsp+F0h] [xbp-150h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v390; // [xsp+180h] [xbp-C0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v391; // [xsp+1B0h] [xbp-90h] BYREF

  if ( (byte_4B1958D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&CondType_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__,
      v19,
      v20);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__,
      v21,
      v22);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__,
      v23,
      v24);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo, v25, v26);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v27, v28);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&MapControl_QuestInfo_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v35, v36);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v37, v38);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, v41, v42);
    sub_1BCA7E0(&Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, v43, v44);
    sub_1BCA7E0(&Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__, v45, v46);
    sub_1BCA7E0(&BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo, v47, v48);
    sub_1BCA7E0(&BattleRetryConfirmComponent___c_TypeInfo, v49, v50);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_2995/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_3888/*"CONSUME_TYPE_AP"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_11019/*"QUEST_ITEM_COST_OVER"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_2993/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_2994/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_2142/*"AP_OVER_MAX_COLOR"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_3889/*"CONSUME_TYPE_RP"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_2999/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_2998/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_44/*"\n\n"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_2996/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_2990/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_2997/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_2991/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_2992/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, v83, v84);
    byte_4B1958D = 1;
  }
  *(_DWORD *)(&v389.fields._IsNormalFlowQuest_k__BackingField + 3) = 0;
  memset(&v389.fields._IsWaveBattleRestart_k__BackingField, 0, 40);
  memset(&v389.fields._SelectedPartyPosition_k__BackingField, 0, 40);
  memset(&v389, 0, 40);
  fixedVal = 0;
  v85 = sub_1BCAA2C(BattleRetryConfirmComponent___c__DisplayClass37_0_TypeInfo, method, v2, v3);
  BattleRetryConfirmComponent___c__DisplayClass37_0___ctor(
    (BattleRetryConfirmComponent___c__DisplayClass37_0_o *)v85,
    0LL);
  if ( !v85 )
    goto LABEL_172;
  *(_QWORD *)(v85 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v85 + 16), (int64_t)this, v88, v89, v90, v91, v92, v93);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
    (int64_t)SelfUserGame,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_172;
  p_userGameEntity = &this->fields.userGameEntity;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v87);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v87, v101);
    byte_4B12DC3 = 1;
  }
  Instance = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v87);
    Instance = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_172;
  Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        *(_DWORD *)(*(_QWORD *)(Instance + 184) + 20LL),
                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_172;
  v103 = (QuestEntity_o *)Instance;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0, 0LL);
  *(_DWORD *)(&v389.fields._IsNormalFlowQuest_k__BackingField + 3) = 0;
  memset(&v389.fields._IsWaveBattleRestart_k__BackingField, 0, 40);
  v108 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_1BCAA2C(
                                                                                                 System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo,
                                                                                                 v105,
                                                                                                 v106,
                                                                                                 v107);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v108,
    (const MethodInfo_360AFBC *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  object = (Il2CppObject *)v85;
  *(_QWORD *)(v85 + 24) = v108;
  v385 = (int64_t *)(v85 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v85 + 24), (int64_t)v108, v109, v110, v111, v112, v113, v114);
  v118 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v115, v116, v117);
  System_Text_StringBuilder___ctor(v118, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v119);
  v120 = LocalizationManager__Get((System_String_o *)StringLiteral_3888/*"CONSUME_TYPE_AP"*/, 0LL);
  v383 = v103;
  switch ( QuestEntity__GetConsumeType(v103, 0LL) )
  {
    case 1:
      v128 = v103;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v121);
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3888/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_172;
      v129 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      *(_DWORD *)(&v389.fields._IsNormalFlowQuest_k__BackingField + 3) = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      actMax = (*p_userGameEntity)->fields.actMax;
      goto LABEL_137;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v121);
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3889/*"CONSUME_TYPE_RP"*/, 0LL);
      v128 = v103;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      v129 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getRp(*p_userGameEntity, 0LL);
      *(_DWORD *)(&v389.fields._IsNormalFlowQuest_k__BackingField + 3) = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      if ( !byte_4B1306C )
      {
        sub_1BCA7E0(&BalanceConfig_TypeInfo, v87, v131);
        byte_4B1306C = 1;
      }
      v132 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v87);
        v132 = BalanceConfig_TypeInfo;
      }
      actMax = v132->static_fields->UerGameRpMax;
      goto LABEL_137;
    case 3:
      v380 = this;
      *(_QWORD *)&v389.fields._IsWaveBattleRestart_k__BackingField = StringLiteral_1/*""*/;
      v378 = (Il2CppObject *)StringLiteral_1/*""*/;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v389.fields._IsWaveBattleRestart_k__BackingField,
        (int64_t)StringLiteral_1/*""*/,
        v122,
        v123,
        v124,
        v125,
        v126,
        v127);
      v389.fields._WaveBattleStartTime_k__BackingField = (int64_t)StringLiteral_1/*""*/;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v389.fields._WaveBattleStartTime_k__BackingField,
        (int64_t)StringLiteral_1/*""*/,
        v133,
        v134,
        v135,
        v136,
        v137,
        v138);
      if ( !ItemConsumeEntity )
        goto LABEL_72;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      v139 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      v140 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_72;
      v141 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v87);
        Instance = NetworkManager__get_UserId(0LL);
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_172;
        if ( v141 >= itemIds->max_length )
          goto LABEL_173;
        if ( !v140 )
          goto LABEL_172;
        Instance = (int64_t)UserItemMaster__GetEntity(
                              (UserItemMaster_o *)v140,
                              Instance,
                              itemIds->m_Items[v141 + 1],
                              0LL);
        v143 = ItemConsumeEntity->fields.itemIds;
        if ( !v143 )
          goto LABEL_172;
        if ( v141 >= v143->max_length )
          goto LABEL_173;
        if ( !v139 )
          goto LABEL_172;
        v144 = Instance;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v139,
                              v143->m_Items[v141 + 1],
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_172;
        v145 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_172;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v144 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          qp = *(_DWORD *)(v144 + 28);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_172;
        if ( v141 >= nums->max_length )
          goto LABEL_173;
        if ( nums->m_Items[v141 + 1] > qp )
        {
          Instance = (int64_t)System_String__Concat_62401220(
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                v145->fields.name,
                                0LL);
          if ( !v118 )
            goto LABEL_172;
          System_Text_StringBuilder__Append_61563116(v118, (System_String_o *)Instance, 0LL);
        }
        memset(&v389.fields._SelectedPartyPosition_k__BackingField, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v87);
        v148 = LocalizationManager__Get((System_String_o *)StringLiteral_2994/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        *(_QWORD *)&v389.fields._SelectedPartyPosition_k__BackingField = System_String__Format(
                                                                           v148,
                                                                           (Il2CppObject *)v145->fields.name,
                                                                           0LL);
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v389.fields._SelectedPartyPosition_k__BackingField,
          *(int64_t *)&v389.fields._SelectedPartyPosition_k__BackingField,
          v149,
          v150,
          v151,
          v152,
          v153,
          v154);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2995/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v155 = ItemConsumeEntity->fields.nums;
        if ( !v155 )
          goto LABEL_172;
        if ( v141 >= v155->max_length )
          goto LABEL_173;
        v156 = (System_String_o *)Instance;
        LODWORD(v391.fields.useName) = v155->m_Items[v141 + 1];
        v157 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v391);
        *(_QWORD *)&v389.fields._SelectedPartyMemberPosition_k__BackingField = System_String__Format(v156, v157, 0LL);
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v389.fields._SelectedPartyMemberPosition_k__BackingField,
          *(int64_t *)&v389.fields._SelectedPartyMemberPosition_k__BackingField,
          v158,
          v159,
          v160,
          v161,
          v162,
          v163);
        v164 = LocalizationManager__Get((System_String_o *)StringLiteral_2997/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v389.fields._BasePartyItem_k__BackingField = (struct PartyListViewItem_o *)System_String__Format(
                                                                                     v164,
                                                                                     (Il2CppObject *)v145->fields.name,
                                                                                     0LL);
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v389.fields._BasePartyItem_k__BackingField,
          (int64_t)v389.fields._BasePartyItem_k__BackingField,
          v165,
          v166,
          v167,
          v168,
          v169,
          v170);
        MaxNum = ItemEntity__GetMaxNum(v145, 0LL);
        v173 = MaxNum > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v171);
        if ( MaxNum < 1 )
        {
          v184 = LocalizationManager__Get((System_String_o *)StringLiteral_2998/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v391.fields.useName) = qp;
          v185 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v391);
          v177 = (struct PartyListViewItem_o *)System_String__Format(v184, v185, 0LL);
        }
        else
        {
          v174 = LocalizationManager__Get((System_String_o *)StringLiteral_2999/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v391.fields.useName) = qp;
          v175 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v391);
          LODWORD(v390.fields.useName) = ItemEntity__GetMaxNum(v145, 0LL);
          v176 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v390);
          v177 = (struct PartyListViewItem_o *)System_String__Format_62415592(v174, v175, v176, 0LL);
        }
        v389.fields._PartyItem_k__BackingField = v177;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v389.fields._PartyItem_k__BackingField,
          (int64_t)v177,
          v178,
          v179,
          v180,
          v181,
          v182,
          v183);
        v389.fields._IsForceDisableSupportSelectBackBtn_k__BackingField = v173;
        Instance = *v385;
        v387 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v389.fields._SelectedPartyPosition_k__BackingField;
        if ( !Instance )
          goto LABEL_172;
        v390 = v387;
        v192 = *(_QWORD *)(Instance + 16);
        v193 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v192 )
          goto LABEL_172;
        v194 = *(int *)(Instance + 24);
        if ( (unsigned int)v194 >= *(_DWORD *)(v192 + 24) )
        {
          v198 = *(const MethodInfo_360B8E0 **)(*(_QWORD *)(v193[4] + 192LL) + 112LL);
          v391 = v390;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
            &v391,
            v198);
        }
        else
        {
          *(_DWORD *)(Instance + 24) = v194 + 1;
          v195 = *(_OWORD *)&v390.fields.useName;
          v196 = *(_OWORD *)&v390.fields.possessionName;
          v197 = v192 + 40 * v194;
          *(_QWORD *)(v197 + 64) = *(_QWORD *)&v390.fields.isIndividualLimit;
          *(_OWORD *)(v197 + 32) = v195;
          *(_OWORD *)(v197 + 48) = v196;
          sub_1BCA784((PartyOrganizationUtility_o *)(v197 + 32), 0LL, v186, v187, v188, v189, v190, v191);
        }
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v141, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_72:
      if ( !v118 )
        goto LABEL_172;
      this = v380;
      v128 = v383;
      if ( System_Text_StringBuilder__get_Length(v118, 0LL) < 1 )
      {
        v129 = v378;
        actMax = 0;
LABEL_137:
        if ( QuestEntity__GetConsumeType(v128, 0LL) == 1
          || QuestEntity__GetConsumeType(v128, 0LL) == 2
          || QuestEntity__GetConsumeType(v128, 0LL) == 4 )
        {
          v299 = (MapControl_QuestInfo_o *)sub_1BCAA2C(MapControl_QuestInfo_TypeInfo, v87, v297, v298);
          MapControl_QuestInfo___ctor(v299, 0LL);
          if ( !v299 )
            goto LABEL_172;
          MapControl_QuestInfo__SetTerminalParamsValue(v299, 0LL);
          questId = v299->fields.questId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v300);
          fixedVal = -1;
          IsQuestClear_38310172 = CondType__IsQuestClear_38310172(questId, -1, 0, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v302);
          if ( !byte_4B12DC3 )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v302, v303);
            byte_4B12DC3 = 1;
          }
          v305 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v302);
            v305 = TerminalPramsManager_TypeInfo;
          }
          QuestId_k__BackingField = v305->static_fields->_QuestId_k__BackingField;
          if ( !byte_4B12DCE )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v302, v303);
            v305 = TerminalPramsManager_TypeInfo;
            byte_4B12DCE = 1;
          }
          if ( !v305->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v305, v302);
            v305 = TerminalPramsManager_TypeInfo;
          }
          CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                                    v128,
                                    QuestId_k__BackingField,
                                    v305->static_fields->_PhaseCnt_k__BackingField,
                                    !IsQuestClear_38310172,
                                    &fixedVal,
                                    0LL);
          Instance = (int64_t)MapControl_QuestInfo__GetMine(v299, 0LL);
          if ( !Instance )
            goto LABEL_172;
          QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
          v308 = fixedVal;
          v299->fields.costCalcVal = CampaignCostCalcValue;
          v299->fields._fixedCostVal_k__BackingField = v308;
          ActConsumeCost = MapControl_QuestInfo__GetActConsumeCost(v299, 0LL);
          v310 = *(_DWORD *)(&v389.fields._IsNormalFlowQuest_k__BackingField + 3);
          v311 = ActConsumeCost;
          CostValueColor = QuestEntity__GetCostValueColor(
                             CampaignCostCalcValue,
                             (ActConsumeCost > actMax) | (unsigned __int8)(ActConsumeCost > *(_DWORD *)(&v389.fields._IsNormalFlowQuest_k__BackingField + 3)),
                             0LL);
          LODWORD(v391.fields.useName) = v311;
          v313 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v391);
          v314 = (Il2CppObject *)System_String__Format(CostValueColor, v313, 0LL);
          v315 = System_Int32__ToString((int32_t)(&v389.fields._IsNormalFlowQuest_k__BackingField + 3), 0LL);
          if ( actMax < v310 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v316);
            v317 = LocalizationManager__Get((System_String_o *)StringLiteral_2142/*"AP_OVER_MAX_COLOR"*/, 0LL);
            LODWORD(v391.fields.useName) = *(_DWORD *)(&v389.fields._IsNormalFlowQuest_k__BackingField + 3);
            v318 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v391);
            v315 = System_String__Format(v317, v318, 0LL);
          }
          v319 = (Il2CppObject *)v315;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v316);
          v320 = LocalizationManager__Get((System_String_o *)StringLiteral_2992/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0LL);
          *(_QWORD *)&v389.fields._IsWaveBattleRestart_k__BackingField = System_String__Format(v320, v129, 0LL);
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v389.fields._IsWaveBattleRestart_k__BackingField,
            *(int64_t *)&v389.fields._IsWaveBattleRestart_k__BackingField,
            v321,
            v322,
            v323,
            v324,
            v325,
            v326);
          v327 = LocalizationManager__Get((System_String_o *)StringLiteral_2993/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0LL);
          v389.fields._WaveBattleStartTime_k__BackingField = (int64_t)System_String__Format(v327, v314, 0LL);
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v389.fields._WaveBattleStartTime_k__BackingField,
            v389.fields._WaveBattleStartTime_k__BackingField,
            v328,
            v329,
            v330,
            v331,
            v332,
            v333);
          v334 = LocalizationManager__Get((System_String_o *)StringLiteral_2990/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0LL);
          *(_QWORD *)&v389.fields._WaveBattleRestartWave_k__BackingField = System_String__Format(v334, v129, 0LL);
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v389.fields._WaveBattleRestartWave_k__BackingField,
            *(int64_t *)&v389.fields._WaveBattleRestartWave_k__BackingField,
            v335,
            v336,
            v337,
            v338,
            v339,
            v340);
          v341 = LocalizationManager__Get((System_String_o *)StringLiteral_2991/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0LL);
          LODWORD(v391.fields.useName) = actMax;
          v342 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v391);
          v389.fields.temporaryPartyInfo = (struct PartyOrganizationUtility_TemporaryPartyInfo_o *)System_String__Format_62415592(
                                                                                                     v341,
                                                                                                     v319,
                                                                                                     v342,
                                                                                                     0LL);
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v389.fields.temporaryPartyInfo,
            (int64_t)v389.fields.temporaryPartyInfo,
            v343,
            v344,
            v345,
            v346,
            v347,
            v348);
        }
        v391 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v389.fields._IsWaveBattleRestart_k__BackingField;
        Instance = *v385;
        if ( *v385 )
        {
          v349 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                   (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
                   (const MethodInfo_360D8F0 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
          v386 = v391;
          BattleRetryConfirmComponent__SetCostValueText(this, &v386, v349, v350);
          BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v351);
          BattleRetryConfirmComponent__SetFriendshipUpItemUseButton(this, v352);
          v356 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v353, v354, v355);
          System_Action___ctor(
            v356,
            object,
            Method_BattleRetryConfirmComponent___c__DisplayClass37_0__SetValues_b__0__,
            0LL);
          v359 = BattleRetryConfirmComponent__WaitOneFrame(v357, v356, v358);
          UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v359, 0LL);
          return 1;
        }
LABEL_172:
        sub_1BCAA3C(Instance, v87);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v199);
      v200 = LocalizationManager__Get((System_String_o *)StringLiteral_11019/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v201 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v118->klass->vtable._3_ToString.method)(
                               v118,
                               v118->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v202 = System_String__Format(v200, v201, 0LL);
      v203 = System_String__Concat_62401220(v202, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v204 = LocalizationManager__Get((System_String_o *)StringLiteral_2996/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v205 = System_String__Concat_62401220(v203, v204, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v208 = (CommonUI_o *)Instance;
      v209 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo, v87);
        v209 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      _9__37_1 = v209->static_fields->__9__37_1;
      v211 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__37_1 )
      {
        if ( !v209->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v209, v87);
          v209 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v361 = (Il2CppObject *)v209->static_fields->__9;
        _9__37_1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v87, v206, v207);
        System_Action___ctor(_9__37_1, v361, Method_BattleRetryConfirmComponent___c__SetValues_b__37_1__, 0LL);
        static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        static_fields->__9__37_1 = _9__37_1;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__37_1,
          (int64_t)_9__37_1,
          v363,
          v364,
          v365,
          v366,
          v367,
          v368);
      }
      if ( !v208 )
        goto LABEL_172;
      CommonUI__OpenNotificationDialog(v208, v211, v205, _9__37_1, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
      return 0;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v121);
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3888/*"CONSUME_TYPE_AP"*/, 0LL);
      v379 = (Il2CppObject *)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      v381 = this;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      *(_DWORD *)(&v389.fields._IsNormalFlowQuest_k__BackingField + 3) = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_172;
      v377 = (*p_userGameEntity)->fields.actMax;
      *(_QWORD *)&v389.fields._IsWaveBattleRestart_k__BackingField = StringLiteral_1/*""*/;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v389.fields._IsWaveBattleRestart_k__BackingField,
        (int64_t)StringLiteral_1/*""*/,
        v212,
        v213,
        v214,
        v215,
        v216,
        v217);
      v389.fields._WaveBattleStartTime_k__BackingField = (int64_t)StringLiteral_1/*""*/;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v389.fields._WaveBattleStartTime_k__BackingField,
        (int64_t)StringLiteral_1/*""*/,
        v218,
        v219,
        v220,
        v221,
        v222,
        v223);
      if ( !ItemConsumeEntity )
        goto LABEL_126;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      v224 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_172;
      v225 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_126;
      v226 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v87);
        Instance = NetworkManager__get_UserId(0LL);
        v227 = ItemConsumeEntity->fields.itemIds;
        if ( !v227 )
          goto LABEL_172;
        if ( v226 >= v227->max_length )
          goto LABEL_173;
        if ( !v225 )
          goto LABEL_172;
        Instance = (int64_t)UserItemMaster__GetEntity((UserItemMaster_o *)v225, Instance, v227->m_Items[v226 + 1], 0LL);
        v228 = ItemConsumeEntity->fields.itemIds;
        if ( !v228 )
          goto LABEL_172;
        if ( v226 >= v228->max_length )
          goto LABEL_173;
        if ( !v224 )
          goto LABEL_172;
        v229 = Instance;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v224,
                              v228->m_Items[v226 + 1],
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_172;
        v230 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_172;
          v231 = (*p_userGameEntity)->fields.qp;
        }
        else if ( v229 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          v231 = *(_DWORD *)(v229 + 28);
        }
        else
        {
          v231 = 0;
        }
        v232 = ItemConsumeEntity->fields.nums;
        if ( !v232 )
          goto LABEL_172;
        if ( v226 >= v232->max_length )
          goto LABEL_173;
        if ( v232->m_Items[v226 + 1] > v231 )
        {
          Instance = (int64_t)System_String__Concat_62401220(
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                v230->fields.name,
                                0LL);
          if ( !v118 )
            goto LABEL_172;
          System_Text_StringBuilder__Append_61563116(v118, (System_String_o *)Instance, 0LL);
        }
        memset(&v389, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v87);
        v233 = LocalizationManager__Get((System_String_o *)StringLiteral_2994/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v389.klass = (PartyOrganizationUtility_c *)System_String__Format(v233, (Il2CppObject *)v230->fields.name, 0LL);
        sub_1BCA784(&v389, (int64_t)v389.klass, v234, v235, v236, v237, v238, v239);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_2995/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v240 = ItemConsumeEntity->fields.nums;
        if ( !v240 )
          goto LABEL_172;
        if ( v226 >= v240->max_length )
LABEL_173:
          sub_1BCAA44(Instance, v87);
        v241 = (System_String_o *)Instance;
        LODWORD(v391.fields.useName) = v240->m_Items[v226 + 1];
        v242 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v391);
        v389.monitor = System_String__Format(v241, v242, 0LL);
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v389.monitor,
          (int64_t)v389.monitor,
          v243,
          v244,
          v245,
          v246,
          v247,
          v248);
        v249 = LocalizationManager__Get((System_String_o *)StringLiteral_2997/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v389.fields.restrictionDialogHistoryList = (struct System_Collections_Generic_List_string__o *)System_String__Format(v249, (Il2CppObject *)v230->fields.name, 0LL);
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v389.fields,
          (int64_t)v389.fields.restrictionDialogHistoryList,
          v250,
          v251,
          v252,
          v253,
          v254,
          v255);
        v257 = ItemEntity__GetMaxNum(v230, 0LL);
        v258 = v257 > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v256);
        if ( v257 < 1 )
        {
          v269 = LocalizationManager__Get((System_String_o *)StringLiteral_2998/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v391.fields.useName) = v231;
          v270 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v391);
          v262 = (struct FollowerInfo_o *)System_String__Format(v269, v270, 0LL);
        }
        else
        {
          v259 = LocalizationManager__Get((System_String_o *)StringLiteral_2999/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v391.fields.useName) = v231;
          v260 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v391);
          LODWORD(v390.fields.useName) = ItemEntity__GetMaxNum(v230, 0LL);
          v261 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v390);
          v262 = (struct FollowerInfo_o *)System_String__Format_62415592(v259, v260, v261, 0LL);
        }
        v389.fields._normalFollowerInfo = v262;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v389.fields._normalFollowerInfo,
          (int64_t)v262,
          v263,
          v264,
          v265,
          v266,
          v267,
          v268);
        LOBYTE(v389.fields._SelectedNormalFollowerClassId_k__BackingField) = v258;
        Instance = *v385;
        *(_OWORD *)&v387.fields.useName = *(_OWORD *)&v389.klass;
        *(_OWORD *)&v387.fields.possessionName = *(_OWORD *)&v389.fields.restrictionDialogHistoryList;
        *(_QWORD *)&v387.fields.isIndividualLimit = *(_QWORD *)&v389.fields._SelectedNormalFollowerClassId_k__BackingField;
        if ( !Instance )
          goto LABEL_172;
        v390 = v387;
        v277 = *(_QWORD *)(Instance + 16);
        v278 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v277 )
          goto LABEL_172;
        v279 = *(int *)(Instance + 24);
        if ( (unsigned int)v279 >= *(_DWORD *)(v277 + 24) )
        {
          v283 = *(const MethodInfo_360B8E0 **)(*(_QWORD *)(v278[4] + 192LL) + 112LL);
          v391 = v390;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
            &v391,
            v283);
        }
        else
        {
          *(_DWORD *)(Instance + 24) = v279 + 1;
          v280 = *(_OWORD *)&v390.fields.useName;
          v281 = *(_OWORD *)&v390.fields.possessionName;
          v282 = v277 + 40 * v279;
          *(_QWORD *)(v282 + 64) = *(_QWORD *)&v390.fields.isIndividualLimit;
          *(_OWORD *)(v282 + 32) = v280;
          *(_OWORD *)(v282 + 48) = v281;
          sub_1BCA784((PartyOrganizationUtility_o *)(v282 + 32), 0LL, v271, v272, v273, v274, v275, v276);
        }
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v226, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_126:
      if ( !v118 )
        goto LABEL_172;
      this = v381;
      v128 = v383;
      if ( System_Text_StringBuilder__get_Length(v118, 0LL) >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v284);
        v285 = LocalizationManager__Get((System_String_o *)StringLiteral_11019/*"QUEST_ITEM_COST_OVER"*/, 0LL);
        v286 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v118->klass->vtable._3_ToString.method)(
                                 v118,
                                 v118->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
        v287 = System_String__Format(v285, v286, 0LL);
        v288 = System_String__Concat_62401220(v287, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
        v289 = LocalizationManager__Get((System_String_o *)StringLiteral_2996/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
        v290 = System_String__Concat_62401220(v288, v289, 0LL);
        Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v293 = (CommonUI_o *)Instance;
        v294 = BattleRetryConfirmComponent___c_TypeInfo;
        if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo, v87);
          v294 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v295 = (System_String_o *)StringLiteral_1/*""*/;
        _9__37_2 = v294->static_fields->__9__37_2;
        if ( !_9__37_2 )
        {
          if ( !v294->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v294, v87);
            v294 = BattleRetryConfirmComponent___c_TypeInfo;
          }
          v369 = (Il2CppObject *)v294->static_fields->__9;
          _9__37_2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v87, v291, v292);
          System_Action___ctor(_9__37_2, v369, Method_BattleRetryConfirmComponent___c__SetValues_b__37_2__, 0LL);
          v370 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
          v370->__9__37_2 = _9__37_2;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v370->__9__37_2,
            (int64_t)_9__37_2,
            v371,
            v372,
            v373,
            v374,
            v375,
            v376);
        }
        if ( v293 )
        {
          CommonUI__OpenNotificationDialog(v293, v295, v290, _9__37_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
          return 0;
        }
        goto LABEL_172;
      }
      v129 = v379;
      actMax = v377;
      goto LABEL_137;
    default:
      v128 = v103;
      actMax = 0;
      v129 = (Il2CppObject *)v120;
      goto LABEL_137;
  }
}


System_Collections_IEnumerator_o *__fastcall BattleRetryConfirmComponent__WaitOneFrame(
        BattleRetryConfirmComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B19590 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo, action, method);
    byte_4B19590 = 1;
  }
  v5 = sub_1BCAA2C(BattleRetryConfirmComponent__WaitOneFrame_d__42_TypeInfo, action, method, v3);
  BattleRetryConfirmComponent__WaitOneFrame_d__42___ctor(
    (BattleRetryConfirmComponent__WaitOneFrame_d__42_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = action;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)action, v8, v9, v10, v11, v12, v13);
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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__42_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1959D & 1) == 0 )
  {
    sub_1BCA7E0(&BattleRetryConfirmComponent___c_TypeInfo, v1, v2);
    byte_4B1959D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleRetryConfirmComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleRetryConfirmComponent___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleRetryConfirmComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B1959E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3, v4);
    byte_4B1959E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2EFC554 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__37_2(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B1959F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3, v4);
    byte_4B1959F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2EFC554 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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
  __int64 v2; // x2
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *rciItems; // x0
  BattleRetryConfirmComponent_o *_4__this; // x19

  if ( (byte_4B195A0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__,
      method,
      v2);
    byte_4B195A0 = 1;
  }
  rciItems = this->fields.rciItems;
  if ( !rciItems
    || (_4__this = this->fields.__4__this,
        rciItems = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(rciItems, (const MethodInfo_360D8F0 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__),
        !_4__this) )
  {
    sub_1BCAA3C(rciItems, method);
  }
  BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
    _4__this,
    (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)rciItems,
    0LL);
}