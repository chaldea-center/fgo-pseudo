void __fastcall BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B48162 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B48162 = 1;
  }
  *(_QWORD *)&this->fields.CONFIRM_BUTTON_POSITION_ON_THREE_X = 0xC366000043660000LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall BattleRetryConfirmComponent__BaseDialogClose(
        BattleRetryConfirmComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, callBack, 0LL);
}


void __fastcall BattleRetryConfirmComponent__BaseDialogOpen(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B4815E & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_BattleRetryConfirmComponent__BaseDialogOpen_b__54_0__, v3);
    byte_4B4815E = 1;
  }
  v4 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleRetryConfirmComponent__BaseDialogOpen_b__54_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v4, 0, 0LL);
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
  const MethodInfo *v14; // x2
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B48160 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, *(_QWORD *)&result);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4B48160 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  switch ( result )
  {
    case 2:
      battleResultComponent = this->fields.battleResultComponent;
      if ( !battleResultComponent )
        goto LABEL_21;
      v13 = boostId;
      goto LABEL_15;
    case 1:
      battleResultComponent = this->fields.battleResultComponent;
      if ( !battleResultComponent )
        goto LABEL_21;
      v13 = 0;
LABEL_15:
      BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, v13, 0LL);
      break;
    case 0:
      battleResultComponent = (BattleResultComponent_o *)this->fields.buttons;
      if ( !battleResultComponent )
        goto LABEL_21;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v16,
        (System_Collections_Generic_List_object__o *)battleResultComponent,
        (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v16,
                (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v16.fields._current )
          sub_1BDBAD4(0LL, v12);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v16.fields._current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
      if ( currentQuestUseItemButtons )
        BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 1, v14);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_21:
    sub_1BDBAD4(battleResultComponent, *(_QWORD *)&result);
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
    sub_1BDBAD4(cancelLabel, method);
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
  BattleRetryConfirmContents_o *currentContents; // x0

  currentContents = this->fields.currentContents;
  if ( !currentContents )
    sub_1BDBAD4(0LL, method);
  BattleRetryConfirmContents__CostPointLabelCentering(currentContents, method);
}


BattleRetryConfirmContents_o *__fastcall BattleRetryConfirmComponent__CreateContents(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_o *costPoint,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *items,
        bool isDispUseItemUI,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *pointOnlyContents; // x22
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *window; // x0
  __int64 v15; // x1
  char v16; // w24
  System_Collections_Generic_IEnumerable_TSource__o *appended; // x0
  il2cpp_array_size_t max_length; // w8
  bool v19; // w23
  struct BattleRetryConfirmContents_o **p_singleContentsPrefab; // x8
  UnityEngine_Transform_o *transform; // x21
  const MethodInfo *v22; // x4
  BattleRetryConfirmContents_o *v23; // x21
  __int128 v25; // [xsp+10h] [xbp-90h]
  __int64 v26; // [xsp+20h] [xbp-80h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v27; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4B4815A & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_Append_BattleRetryConfirmComponent_RetryConfirmItemStr___, costPoint);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr___, v9);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_BattleRetryConfirmContents___, v10);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v11);
    sub_1BDB878(&StringLiteral_1/*""*/, v12);
    byte_4B4815A = 1;
  }
  pointOnlyContents = (Il2CppObject *)this->fields.pointOnlyContents;
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)System_String__op_Inequality(
                                                                      costPoint->fields.useName,
                                                                      (System_String_o *)StringLiteral_1/*""*/,
                                                                      0LL);
  v16 = (char)window;
  if ( ((unsigned __int8)window & 1) != 0 )
  {
    v26 = *(_QWORD *)&costPoint->fields.isIndividualLimit;
    v25 = *(_OWORD *)&costPoint->fields.possessionName;
    *(_OWORD *)&v27.fields.useName = *(_OWORD *)&costPoint->fields.useName;
    *(_OWORD *)&v27.fields.possessionName = v25;
    *(_QWORD *)&v27.fields.isIndividualLimit = v26;
    appended = System_Linq_Enumerable__Append_BattleRetryConfirmComponent_RetryConfirmItemStr_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)items,
                 &v27,
                 (const MethodInfo_3041D5C *)Method_System_Linq_Enumerable_Append_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    window = System_Linq_Enumerable__ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr_(
               appended,
               (const MethodInfo_3070ADC *)Method_System_Linq_Enumerable_ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    items = window;
  }
  if ( !items )
    goto LABEL_18;
  max_length = items->max_length;
  v19 = v16 & (max_length == 1);
  if ( !v19 )
  {
    if ( max_length == 1 )
    {
      p_singleContentsPrefab = &this->fields.singleContentsPrefab;
    }
    else if ( max_length == 2 )
    {
      p_singleContentsPrefab = &this->fields.doubleContentsPrefab;
    }
    else
    {
      p_singleContentsPrefab = &this->fields.tripleContentsPrefab;
    }
    pointOnlyContents = (Il2CppObject *)*p_singleContentsPrefab;
  }
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)this->fields.window;
  if ( !window )
    goto LABEL_18;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)window, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)UnityEngine_Object__Instantiate_object__51108816(
                                                                      pointOnlyContents,
                                                                      transform,
                                                                      (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_BattleRetryConfirmContents___);
  if ( !window )
LABEL_18:
    sub_1BDBAD4(window, v15);
  v23 = (BattleRetryConfirmContents_o *)window;
  BattleRetryConfirmContents__SetCostValues((BattleRetryConfirmContents_o *)window, items, isDispUseItemUI, v19, v22);
  return v23;
}


BattleRetryConfirmQuestUseItemButtons_o *__fastcall BattleRetryConfirmComponent__CreateQuestUseItemButtons(
        BattleRetryConfirmComponent_o *this,
        QuestUseItemInfo_array *itemInfos,
        const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleRetryConfirmQuestUseItemButtons_array *questUseItemButtonsPrefabs; // x21
  __int64 v10; // x2
  struct BattleRetryConfirmQuestUseItemButtons_array *v11; // x8
  int v12; // w9
  Il2CppObject *v13; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v15; // x21
  System_Action_object__object__o *v16; // x22
  const MethodInfo *v17; // x3

  v4 = this;
  if ( (byte_4B4815B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__TypeInfo, itemInfos);
    sub_1BDB878(&Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__, v5);
    sub_1BDB878(&System_Math_TypeInfo, v6);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_BattleRetryConfirmQuestUseItemButtons___, v7);
    this = (BattleRetryConfirmComponent_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    byte_4B4815B = 1;
  }
  if ( !itemInfos )
    goto LABEL_17;
  this = *(BattleRetryConfirmComponent_o **)&itemInfos->max_length;
  if ( !this )
    return 0LL;
  questUseItemButtonsPrefabs = v4->fields.questUseItemButtonsPrefabs;
  if ( !questUseItemButtonsPrefabs )
    goto LABEL_17;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this = *(BattleRetryConfirmComponent_o **)&itemInfos->max_length;
  }
  this = (BattleRetryConfirmComponent_o *)System_Math__Min_64100908(
                                            (int32_t)this,
                                            questUseItemButtonsPrefabs->max_length,
                                            0LL);
  v11 = v4->fields.questUseItemButtonsPrefabs;
  if ( !v11 )
    goto LABEL_17;
  v12 = (_DWORD)this - 1;
  if ( (int)this - 1 >= v11->max_length )
    sub_1BDBADC(this, itemInfos, v10);
  this = (BattleRetryConfirmComponent_o *)v4->fields.window;
  if ( !this )
    goto LABEL_17;
  v13 = (Il2CppObject *)v11->m_Items[v12];
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__Instantiate_object__51108816(
          v13,
          transform,
          (const MethodInfo_30BDBD0 *)Method_UnityEngine_Object_Instantiate_BattleRetryConfirmQuestUseItemButtons___);
  v16 = (System_Action_object__object__o *)sub_1BDBAC4(System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__TypeInfo);
  System_Action_object__object____ctor(
    v16,
    (Il2CppObject *)v4,
    (intptr_t)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__,
    0LL);
  if ( !v15 )
LABEL_17:
    sub_1BDBAD4(this, itemInfos);
  BattleRetryConfirmQuestUseItemButtons__Setup(
    (BattleRetryConfirmQuestUseItemButtons_o *)v15,
    itemInfos,
    (System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__o *)v16,
    v17);
  return (BattleRetryConfirmQuestUseItemButtons_o *)v15;
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
  __int64 v15; // x1
  UnityEngine_GameObject_o *root; // x0
  struct System_Collections_Generic_List_UIButton__o **p_buttons; // x20
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v24; // x21
  unsigned __int64 v25; // x22
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 klass_low; // x10
  __int64 v29; // x8
  __int64 v30; // x1
  UnityEngine_Object_o *mainText; // x20
  UILabel_o *v32; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *confirmLabel; // x20
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B4815D & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIButton__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIButton___ctor__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIButton__get_Count__, v9);
    sub_1BDB878(&System_Collections_Generic_List_UIButton__TypeInfo, v10);
    sub_1BDB878(&LocalizationManager_TypeInfo, v11);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_2877/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, v13);
    sub_1BDB878(&StringLiteral_2879/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, v14);
    sub_1BDB878(&StringLiteral_2878/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, v15);
    byte_4B4815D = 1;
  }
  memset(&i, 0, sizeof(i));
  root = this->fields.root;
  if ( !root )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  root = (UnityEngine_GameObject_o *)this->fields.buttons;
  if ( !root || !LODWORD(root[1].klass) )
  {
    p_buttons = &this->fields.buttons;
    v18 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_UIButton__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v18;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.buttons, (int32_t)v18, v19, v20);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_302AE50 *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    if ( !root )
      goto LABEL_36;
    klass = root[1].klass;
    v24 = root;
    if ( (int)klass >= 1 )
    {
      v25 = 0LL;
      while ( 1 )
      {
        if ( v25 >= (unsigned int)klass )
          sub_1BDBADC(root, method, v21);
        root = (UnityEngine_GameObject_o *)*p_buttons;
        if ( !*p_buttons )
          break;
        method = (const MethodInfo *)*((_QWORD *)&v24[1].monitor + v25);
        v26 = *(_QWORD *)&root->fields.m_CachedPtr;
        v27 = Method_System_Collections_Generic_List_UIButton__Add__;
        ++HIDWORD(root[1].klass);
        if ( !v26 )
          break;
        klass_low = SLODWORD(root[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v26 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)root,
            (Il2CppObject *)method,
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = v26 + 8 * klass_low;
          LODWORD(root[1].klass) = klass_low + 1;
          *(_QWORD *)(v29 + 32) = method;
          sub_1BDB81C((CGThumbnailListItem_o *)(v29 + 32), (int32_t)method, v21, v22);
        }
        LODWORD(klass) = v24[1].klass;
        if ( (__int64)++v25 >= (int)klass )
          goto LABEL_16;
      }
LABEL_36:
      sub_1BDBAD4(root, method);
    }
LABEL_16:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_36;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)root,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  for ( i = v35;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0LL) )
  {
    if ( !i.fields._current )
      sub_1BDBAD4(0LL, v30);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  if ( !this->fields.isInitialized )
  {
    mainText = (UnityEngine_Object_o *)this->fields.mainText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mainText, 0LL, 0LL) )
    {
      v32 = this->fields.mainText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2879/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      if ( !v32 )
        goto LABEL_36;
      UILabel__set_text(v32, (System_String_o *)root, 0LL);
    }
    cancelLabel = this->fields.cancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2877/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_36;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0LL);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2878/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    if ( !confirmLabel )
      goto LABEL_36;
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
  const MethodInfo *v22; // x2
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B4815F & 1) == 0 )
  {
    sub_1BDB878(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__, method);
    sub_1BDB878(&Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__, v3);
    sub_1BDB878(&BoostFunctionUtility_CallbackFunc_TypeInfo, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v10);
    byte_4B4815F = 1;
  }
  v11 = Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__;
  memset(&v24, 0, sizeof(v24));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BDB890(Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 8, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v13);
    byte_4B3EFD0 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v15->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B3EFCF )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v13);
    v15 = TerminalPramsManager_TypeInfo;
    byte_4B3EFCF = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v15->static_fields->_PhaseCnt_k__BackingField;
  v18 = (BoostFunctionUtility_CallbackFunc_o *)sub_1BDBAC4(BoostFunctionUtility_CallbackFunc_TypeInfo);
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
    sub_1BDBAD4(buttons, v20);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    buttons,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v24.fields._current )
      sub_1BDBAD4(0LL, v21);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v24.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
  if ( currentQuestUseItemButtons )
    BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, v22);
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
  const MethodInfo *v12; // x2
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B48157 & 1) == 0 )
  {
    sub_1BDB878(&Method_BattleRetryConfirmComponent_OnClickCancel__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_4B48157 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !this->fields.state )
  {
    v7 = Method_BattleRetryConfirmComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BDB890(Method_BattleRetryConfirmComponent_OnClickCancel__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent
      || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0LL),
          (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
    {
      sub_1BDBAD4(battleResultComponent, v9);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v14.fields._current )
        sub_1BDBAD4(0LL, v11);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v14.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
    if ( currentQuestUseItemButtons )
      BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, v12);
  }
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
  const MethodInfo *v12; // x2
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B48158 & 1) == 0 )
  {
    sub_1BDB878(&Method_BattleRetryConfirmComponent_OnClickConfirm__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_4B48158 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !this->fields.state )
  {
    v7 = Method_BattleRetryConfirmComponent_OnClickConfirm__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickConfirm__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BDB890(Method_BattleRetryConfirmComponent_OnClickConfirm__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0LL);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent
      || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0LL),
          (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
    {
      sub_1BDBAD4(battleResultComponent, v9);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v14.fields._current )
        sub_1BDBAD4(0LL, v11);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v14.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
    if ( currentQuestUseItemButtons )
      BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, v12);
  }
}


void __fastcall BattleRetryConfirmComponent__OnClickQuestUseItemButton(
        BattleRetryConfirmComponent_o *this,
        QuestUseItemInfo_o *info,
        FriendshipUpItemUseItem_o *item,
        const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  bool UseFlag; // w21
  _QWORD *v16; // x8
  System_Reflection_MethodBase_o *v17; // x0
  QuestUseItemInfo_o *v18; // x0
  bool v19; // w1
  Il2CppObject *Instance; // x20
  System_String_o *v21; // x0
  BattleRetryConfirmComponent_o *v22; // x19
  BattleRetryConfirmComponent___c_c *v23; // x8
  System_Action_o *_9__46_0; // x22
  System_String_o *v25; // x21
  Il2CppObject *v26; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  v6 = this;
  if ( (byte_4B48159 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, info);
    sub_1BDB878(&Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__, v7);
    sub_1BDB878(&LocalizationManager_TypeInfo, v8);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_1BDB878(&Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__46_0__, v11);
    sub_1BDB878(&BattleRetryConfirmComponent___c_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_10243/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v13);
    this = (BattleRetryConfirmComponent_o *)sub_1BDB878(&StringLiteral_1/*""*/, v14);
    byte_4B48159 = 1;
  }
  if ( !v6->fields.state )
  {
    if ( !info )
      goto LABEL_25;
    UseFlag = QuestUseItemInfo__GetUseFlag(info, 0LL);
    v16 = Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1BDB890(Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    v17 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v16, v16[4]);
    if ( UseFlag )
    {
      OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0, 0LL);
      if ( !item )
        goto LABEL_25;
      FriendshipUpItemUseItem__ChangeButtonState(item, 0, 0LL);
      v18 = info;
      v19 = 0;
LABEL_13:
      QuestUseItemInfo__SetUseFlag(v18, v19, 0LL);
      this = (BattleRetryConfirmComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        PartyOrganizationUtility__SaveQuestUseItemUseState((PartyOrganizationUtility_o *)this, 0LL);
        return;
      }
LABEL_25:
      sub_1BDBAD4(this, info);
    }
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
    this = (BattleRetryConfirmComponent_o *)QuestUseItemInfo__IsEventPeriod(info, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !item )
        goto LABEL_25;
      FriendshipUpItemUseItem__ChangeButtonState(item, 1, 0LL);
      v19 = 1;
      v18 = info;
      goto LABEL_13;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10243/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
    this = (BattleRetryConfirmComponent_o *)System_String__Format(
                                              v21,
                                              (Il2CppObject *)info->fields._Name_k__BackingField,
                                              0LL);
    v22 = this;
    v23 = BattleRetryConfirmComponent___c_TypeInfo;
    if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
      v23 = BattleRetryConfirmComponent___c_TypeInfo;
    }
    _9__46_0 = v23->static_fields->__9__46_0;
    v25 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__46_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v23->static_fields->__9;
      _9__46_0 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__46_0,
        v26,
        (intptr_t)Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__46_0__,
        0LL);
      static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
      static_fields->__9__46_0 = _9__46_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__46_0, (int32_t)_9__46_0, v28, v29);
    }
    if ( !Instance )
      goto LABEL_25;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      v25,
      (System_String_o *)v22,
      _9__46_0,
      -1,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0LL,
      0.0,
      0,
      0LL);
  }
}


void __fastcall BattleRetryConfirmComponent__Open(
        BattleRetryConfirmComponent_o *this,
        BattleWindowComponent_EndCall_o *opendFunc,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgObj; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  bgObj = this->fields.bgObj;
  if ( !bgObj )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(bgObj, 1, 0LL);
  bgObj = (UnityEngine_GameObject_o *)this->fields.window;
  if ( !bgObj
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, BattleWindowComponent_EndCall_o *, void *))bgObj->klass[1]._1.typeMetadataHandle)(
          bgObj,
          opendFunc,
          bgObj->klass[1]._1.interopData),
        (bgObj = (UnityEngine_GameObject_o *)this->fields.currentContents) == 0LL)
    || (BattleRetryConfirmContents__CostPointLabelCentering(
          (BattleRetryConfirmContents_o *)bgObj,
          (const MethodInfo *)opendFunc),
        (bgObj = (UnityEngine_GameObject_o *)this->fields.cancelLabel) == 0LL)
    || (bgObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)bgObj, 0LL)) == 0LL
    || (bgObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)bgObj, 0LL)) == 0LL )
  {
LABEL_8:
    sub_1BDBAD4(bgObj, opendFunc);
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
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v23; // x0
  UnityEngine_Object_o *v24; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B48161 & 1) == 0 )
  {
    sub_1BDB878(&BattleSetupInfo_TypeInfo, method);
    sub_1BDB878(&Method_DataManager_GetMaster_EventDetailMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1BDB878(&LocalizationManager_TypeInfo, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v8);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_11120/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, v10);
    sub_1BDB878(&StringLiteral_2876/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/, v11);
    byte_4B48161 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3F84F )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    byte_4B3F84F = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v12->static_fields->_WarId_k__BackingField;
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4B3EFD0 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v12->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B3EFCF )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, method);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4B3EFCF = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v12->static_fields->_PhaseCnt_k__BackingField;
  v16 = (BattleSetupInfo_o *)sub_1BDBAC4(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_53;
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v19 || !Master_object )
    goto LABEL_53;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          v19->fields.eventId,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_53;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_object )
      goto LABEL_53;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_object,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0LL)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11120/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0LL) == 1 )
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
                                                                        (System_String_o *)StringLiteral_2876/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/,
                                                                        0LL);
        if ( !v21 )
          goto LABEL_53;
        UILabel__set_text(v21, (System_String_o *)Master_object, 0LL);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.boostSupportRequestLabel;
        if ( !Master_object )
          goto LABEL_53;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                        (UnityEngine_Component_o *)Master_object,
                                                                        0LL);
        if ( !Master_object )
          goto LABEL_53;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Transform__get_parent(
                                                                        (UnityEngine_Transform_o *)Master_object,
                                                                        0LL);
        if ( !Master_object )
          goto LABEL_53;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)Master_object,
                                                                        0LL);
        if ( !Master_object )
          goto LABEL_53;
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
          parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0LL);
          TransformHelper__SetLocalPositionX(parent, this->fields.CANCEL_BUTTON_POSITION_ON_THREE_X, 0LL);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.confirmLabel;
          if ( Master_object )
          {
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                            (UnityEngine_Component_o *)Master_object,
                                                                            0LL);
            if ( Master_object )
            {
              v23 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0LL);
              TransformHelper__SetLocalPositionX(v23, this->fields.CONFIRM_BUTTON_POSITION_ON_THREE_X, 0LL);
              return;
            }
          }
        }
      }
LABEL_53:
      sub_1BDBAD4(Master_object, v18);
    }
  }
  else
  {
LABEL_44:
    v24 = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.boostSupportRequestLabel;
      if ( !Master_object )
        goto LABEL_53;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)Master_object,
                                                                      0LL);
      if ( !Master_object )
        goto LABEL_53;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Transform__get_parent(
                                                                      (UnityEngine_Transform_o *)Master_object,
                                                                      0LL);
      if ( !Master_object )
        goto LABEL_53;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)Master_object,
                                                                      0LL);
      if ( !Master_object )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    }
  }
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
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v54; // x1
  Il2CppObject *MasterData_object; // x20
  QuestEntity_o *v56; // x21
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x26
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v58; // x20
  System_Text_StringBuilder_o *v59; // x25
  Il2CppObject *v60; // x29
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  QuestEntity_o *v63; // x26
  int32_t actMax; // w8
  BalanceConfig_c *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  Il2CppObject *v68; // x27
  Il2CppObject *v69; // x28
  __int64 v70; // x2
  il2cpp_array_size_t v71; // w29
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v73; // x8
  DataManager_o *v74; // x23
  ItemEntity_o *v75; // x21
  int64_t qp; // x24
  struct System_Int32_array *nums; // x8
  System_String_o *v78; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  __int64 v81; // x3
  __int64 v82; // x4
  struct System_Int32_array *v83; // x8
  System_String_o *v84; // x23
  Il2CppObject *v85; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  System_String_o *v88; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  int32_t MaxNum; // w23
  bool v92; // w19
  System_String_o *v93; // x23
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  Il2CppObject *v97; // x24
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  Il2CppObject *v101; // x0
  System_String_o *v102; // x0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  System_String_o *v105; // x21
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  Il2CppObject *v109; // x0
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  struct BattleRetryConfirmComponent_RetryConfirmItemStr_array *items; // x8
  _QWORD *v113; // x10
  __int64 size; // x9
  __int128 v115; // q0
  __int128 v116; // q1
  char *v117; // x8
  const MethodInfo_373FF68 *v118; // x2
  System_String_o *v119; // x19
  Il2CppObject *v120; // x0
  System_String_o *v121; // x0
  System_String_o *v122; // x19
  System_String_o *v123; // x0
  System_String_o *v124; // x19
  CommonUI_o *v125; // x20
  BattleRetryConfirmComponent___c_c *v126; // x8
  System_Action_o *_9__43_0; // x22
  System_String_o *v128; // x21
  Il2CppObject *v129; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  Il2CppObject *v137; // x27
  Il2CppObject *v138; // x28
  il2cpp_array_size_t v139; // w29
  struct System_Int32_array *v140; // x8
  struct System_Int32_array *v141; // x8
  DataManager_o *v142; // x23
  ItemEntity_o *v143; // x21
  int64_t m_CancellationTokenSource_high; // x24
  struct System_Int32_array *v145; // x8
  System_String_o *v146; // x0
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  __int64 v149; // x3
  __int64 v150; // x4
  struct System_Int32_array *v151; // x8
  System_String_o *v152; // x23
  Il2CppObject *v153; // x0
  int32_t v154; // w2
  const MethodInfo *v155; // x3
  System_String_o *v156; // x0
  int32_t v157; // w2
  const MethodInfo *v158; // x3
  int32_t v159; // w23
  bool v160; // w19
  System_String_o *v161; // x23
  __int64 v162; // x2
  __int64 v163; // x3
  __int64 v164; // x4
  Il2CppObject *v165; // x24
  __int64 v166; // x2
  __int64 v167; // x3
  __int64 v168; // x4
  Il2CppObject *v169; // x0
  System_String_o *v170; // x0
  int32_t v171; // w2
  const MethodInfo *v172; // x3
  System_String_o *v173; // x21
  __int64 v174; // x2
  __int64 v175; // x3
  __int64 v176; // x4
  Il2CppObject *v177; // x0
  int32_t v178; // w2
  const MethodInfo *v179; // x3
  struct BattleRetryConfirmComponent_RetryConfirmItemStr_array *v180; // x8
  _QWORD *v181; // x10
  __int64 v182; // x9
  __int128 v183; // q0
  __int128 v184; // q1
  char *v185; // x8
  const MethodInfo_373FF68 *v186; // x2
  System_String_o *v187; // x19
  Il2CppObject *v188; // x0
  System_String_o *v189; // x0
  System_String_o *v190; // x19
  System_String_o *v191; // x0
  System_String_o *v192; // x19
  CommonUI_o *v193; // x20
  BattleRetryConfirmComponent___c_c *v194; // x8
  System_String_o *v195; // x21
  System_Action_o *_9__43_1; // x22
  Il2CppObject *v197; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v198; // x0
  int32_t v199; // w2
  const MethodInfo *v200; // x3
  QuestUseItemInfo_array *CachedAvailableQuestUseItems; // x21
  const MethodInfo *v203; // x2
  struct BattleRetryConfirmQuestUseItemButtons_o *QuestUseItemButtons; // x0
  int32_t v205; // w2
  const MethodInfo *v206; // x3
  il2cpp_array_size_t max_length; // w24
  MapControl_QuestInfo_o *v208; // x21
  int32_t questId; // w22
  __int64 v210; // x1
  bool IsQuestClear_39349364; // w22
  TerminalPramsManager_c *v212; // x0
  int32_t QuestId_k__BackingField; // w23
  int32_t CampaignCostCalcValue; // w22
  int32_t v215; // w8
  int32_t ActConsumeCost; // w21
  System_String_o *CostValueColor; // x22
  __int64 v218; // x2
  __int64 v219; // x3
  __int64 v220; // x4
  Il2CppObject *v221; // x0
  System_String_o *v222; // x0
  int v223; // w19
  Il2CppObject *v224; // x21
  System_String_o *v225; // x22
  __int64 v226; // x2
  __int64 v227; // x3
  __int64 v228; // x4
  Il2CppObject *v229; // x0
  Il2CppObject *v230; // x22
  System_String_o *v231; // x0
  int32_t v232; // w2
  const MethodInfo *v233; // x3
  System_String_o *v234; // x0
  System_String_o *v235; // x1
  int32_t v236; // w2
  const MethodInfo *v237; // x3
  System_String_o *v238; // x0
  int32_t v239; // w2
  const MethodInfo *v240; // x3
  System_String_o *v241; // x21
  __int64 v242; // x2
  __int64 v243; // x3
  __int64 v244; // x4
  Il2CppObject *v245; // x0
  int32_t v246; // w2
  const MethodInfo *v247; // x3
  __int64 v248; // x21
  const MethodInfo *v249; // x1
  char v250; // w22
  int32_t v251; // w25
  UnityEngine_Object_o *mainText; // x23
  UILabel_o *v253; // x23
  UnityEngine_Component_o *v254; // x0
  int32_t v255; // w1
  System_String_o *v256; // x0
  int32_t v257; // w2
  const MethodInfo *v258; // x3
  System_String_o *v259; // x0
  UnityEngine_Object_o *buttonRoot; // x22
  bool v261; // w0
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v262; // x0
  const MethodInfo *v263; // x4
  int32_t v264; // w2
  const MethodInfo *v265; // x3
  System_Action_o *v266; // x20
  BattleRetryConfirmComponent_o *v267; // x0
  const MethodInfo *v268; // x2
  System_Collections_IEnumerator_o *v269; // x0
  struct BattleRetryConfirmContents_o *v270; // x1
  int32_t v271; // w2
  const MethodInfo *v272; // x3
  Il2CppObject *v273; // [xsp+40h] [xbp-1F0h]
  Il2CppObject *v274; // [xsp+40h] [xbp-1F0h]
  BattleRetryConfirmComponent_o *v275; // [xsp+48h] [xbp-1E8h]
  BattleRetryConfirmComponent_o *v276; // [xsp+48h] [xbp-1E8h]
  int v277; // [xsp+54h] [xbp-1DCh]
  QuestEntity_o *v278; // [xsp+58h] [xbp-1D8h]
  UserGameEntity_o **p_userGameEntity; // [xsp+78h] [xbp-1B8h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v280; // [xsp+80h] [xbp-1B0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v281; // [xsp+B0h] [xbp-180h]
  int32_t fixedVal; // [xsp+DCh] [xbp-154h] BYREF
  CGThumbnailListItem_o v283; // [xsp+E0h] [xbp-150h] BYREF
  int v284; // [xsp+16Ch] [xbp-C4h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v285; // [xsp+170h] [xbp-C0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v286; // [xsp+1A0h] [xbp-90h] BYREF

  if ( (byte_4B48156 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&CondType_TypeInfo, v3);
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_1BDB878(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_1BDB878(&int_TypeInfo, v9);
    sub_1BDB878(&long_TypeInfo, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__, v13);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__get_Count__,
      v14);
    sub_1BDB878(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo, v15);
    sub_1BDB878(&LocalizationManager_TypeInfo, v16);
    sub_1BDB878(&NetworkManager_TypeInfo, v17);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v18);
    sub_1BDB878(&MapControl_QuestInfo_TypeInfo, v19);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1BDB878(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v22);
    sub_1BDB878(&System_Text_StringBuilder_TypeInfo, v23);
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v24);
    sub_1BDB878(&Method_BattleRetryConfirmComponent___c__SetValues_b__43_0__, v25);
    sub_1BDB878(&Method_BattleRetryConfirmComponent___c__SetValues_b__43_1__, v26);
    sub_1BDB878(&Method_BattleRetryConfirmComponent___c__DisplayClass43_0__SetValues_b__2__, v27);
    sub_1BDB878(&BattleRetryConfirmComponent___c__DisplayClass43_0_TypeInfo, v28);
    sub_1BDB878(&BattleRetryConfirmComponent___c_TypeInfo, v29);
    sub_1BDB878(&StringLiteral_43/*"\n"*/, v30);
    sub_1BDB878(&StringLiteral_2889/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, v31);
    sub_1BDB878(&StringLiteral_3828/*"CONSUME_TYPE_AP"*/, v32);
    sub_1BDB878(&StringLiteral_10879/*"QUEST_ITEM_COST_OVER"*/, v33);
    sub_1BDB878(&StringLiteral_2887/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, v34);
    sub_1BDB878(&StringLiteral_2886/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_NONE_SPACE"*/, v35);
    sub_1BDB878(&StringLiteral_2888/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, v36);
    sub_1BDB878(&StringLiteral_2052/*"AP_OVER_MAX_COLOR"*/, v37);
    sub_1BDB878(&StringLiteral_3829/*"CONSUME_TYPE_RP"*/, v38);
    sub_1BDB878(&StringLiteral_2893/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, v39);
    sub_1BDB878(&StringLiteral_2892/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, v40);
    sub_1BDB878(&StringLiteral_2880/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/, v41);
    sub_1BDB878(&StringLiteral_44/*"\n\n"*/, v42);
    sub_1BDB878(&StringLiteral_2890/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v43);
    sub_1BDB878(&StringLiteral_2882/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, v44);
    sub_1BDB878(&StringLiteral_1/*""*/, v45);
    sub_1BDB878(&StringLiteral_2883/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_NONE_SPACE"*/, v46);
    sub_1BDB878(&StringLiteral_2891/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, v47);
    sub_1BDB878(&StringLiteral_2884/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, v48);
    sub_1BDB878(&StringLiteral_2885/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, v49);
    byte_4B48156 = 1;
  }
  v284 = 0;
  memset(&v283.fields.basePosition.fields.y, 0, 40);
  memset(&v283.fields.sortValue1, 0, 40);
  memset(&v283, 0, 40);
  fixedVal = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_userGameEntity = &this->fields.userGameEntity;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v51, v52);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_210;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B3EFD0 )
  {
    sub_1BDB878(&TerminalPramsManager_TypeInfo, v54);
    byte_4B3EFD0 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_210;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                (const MethodInfo_32E1E3C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_210;
  v56 = (QuestEntity_o *)Instance;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0, 0LL);
  v284 = 0;
  memset(&v283.fields.basePosition.fields.y, 0, 40);
  v58 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_1BDBAC4(System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v58,
    (const MethodInfo_373F644 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  v59 = (System_Text_StringBuilder_o *)sub_1BDBAC4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v59, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v60 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"CONSUME_TYPE_AP"*/, 0LL);
  v278 = v56;
  switch ( QuestEntity__GetConsumeType(v56, 0LL) )
  {
    case 1:
      v63 = v56;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v60 = (Il2CppObject *)Instance;
      Instance = (DataManager_o *)UserGameEntity__getAct(*p_userGameEntity, 0LL);
      v284 = (int)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      actMax = (*p_userGameEntity)->fields.actMax;
      goto LABEL_30;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"CONSUME_TYPE_RP"*/, 0LL);
      v63 = v56;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v60 = (Il2CppObject *)Instance;
      Instance = (DataManager_o *)UserGameEntity__getRp(*p_userGameEntity, 0LL);
      v284 = (int)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      if ( !byte_4B41728 )
      {
        sub_1BDB878(&BalanceConfig_TypeInfo, v54);
        byte_4B41728 = 1;
      }
      v65 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v65 = BalanceConfig_TypeInfo;
      }
      actMax = v65->static_fields->UerGameRpMax;
LABEL_30:
      v277 = actMax;
      goto LABEL_151;
    case 3:
      v275 = this;
      *(_QWORD *)&v283.fields.basePosition.fields.y = StringLiteral_1/*""*/;
      v273 = (Il2CppObject *)StringLiteral_1/*""*/;
      sub_1BDB81C((CGThumbnailListItem_o *)&v283.fields.basePosition.fields.y, (int32_t)StringLiteral_1/*""*/, v61, v62);
      v283.fields.viewObject = (struct ListViewObject_o *)StringLiteral_1/*""*/;
      sub_1BDB81C((CGThumbnailListItem_o *)&v283.fields.viewObject, (int32_t)StringLiteral_1/*""*/, v66, v67);
      if ( !ItemConsumeEntity )
        goto LABEL_76;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v68 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v69 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_76;
      v71 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B3ED56 )
        {
          sub_1BDB878(&NetworkManager_TypeInfo, v54);
          byte_4B3ED56 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_210;
        if ( v71 >= itemIds->max_length )
          goto LABEL_211;
        if ( !v69 )
          goto LABEL_210;
        Instance = (DataManager_o *)UserItemMaster__GetEntity(
                                      (UserItemMaster_o *)v69,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      itemIds->m_Items[v71 + 1],
                                      0LL);
        v73 = ItemConsumeEntity->fields.itemIds;
        if ( !v73 )
          goto LABEL_210;
        if ( v71 >= v73->max_length )
          goto LABEL_211;
        if ( !v68 )
          goto LABEL_210;
        v74 = Instance;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v68,
                                      v73->m_Items[v71 + 1],
                                      (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_210;
        v75 = (ItemEntity_o *)Instance;
        if ( LODWORD(Instance->fields.lookup) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_210;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v74 )
        {
          Instance = (DataManager_o *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL);
          qp = 0LL;
          if ( ((unsigned __int8)Instance & 1) != 0 )
            qp = SHIDWORD(v74->fields.m_CancellationTokenSource);
        }
        else
        {
          qp = 0LL;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_210;
        if ( v71 >= nums->max_length )
          goto LABEL_211;
        if ( qp < nums->m_Items[v71 + 1] )
        {
          Instance = (DataManager_o *)System_String__Concat_62572260(
                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                        v75->fields.name,
                                        0LL);
          if ( !v59 )
            goto LABEL_210;
          System_Text_StringBuilder__Append_62657444(v59, (System_String_o *)Instance, 0LL);
        }
        memset(&v283.fields.sortValue1, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v78 = LocalizationManager__Get((System_String_o *)StringLiteral_2888/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v283.fields.sortValue1 = (int64_t)System_String__Format(v78, (Il2CppObject *)v75->fields.name, 0LL);
        sub_1BDB81C((CGThumbnailListItem_o *)&v283.fields.sortValue1, v283.fields.sortValue1, v79, v80);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2889/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v83 = ItemConsumeEntity->fields.nums;
        if ( !v83 )
          goto LABEL_210;
        if ( v71 >= v83->max_length )
          goto LABEL_211;
        v84 = (System_String_o *)Instance;
        LODWORD(v286.fields.useName) = v83->m_Items[v71 + 1];
        v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v286, v70, v81, v82);
        v283.fields.sortStr1 = System_String__Format(v84, v85, 0LL);
        sub_1BDB81C((CGThumbnailListItem_o *)&v283.fields.sortStr1, (int32_t)v283.fields.sortStr1, v86, v87);
        v88 = LocalizationManager__Get((System_String_o *)StringLiteral_2891/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v283.fields.sortValue1B = (int64_t)System_String__Format(v88, (Il2CppObject *)v75->fields.name, 0LL);
        sub_1BDB81C((CGThumbnailListItem_o *)&v283.fields.sortValue1B, v283.fields.sortValue1B, v89, v90);
        MaxNum = ItemEntity__GetMaxNum(v75, 0LL);
        v92 = MaxNum > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( MaxNum < 1 )
        {
          v105 = LocalizationManager__Get((System_String_o *)StringLiteral_2892/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          v286.fields.useName = (struct System_String_o *)qp;
          v109 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v286, v106, v107, v108);
          v102 = System_String__Format(v105, v109, 0LL);
        }
        else
        {
          v93 = LocalizationManager__Get((System_String_o *)StringLiteral_2893/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          v286.fields.useName = (struct System_String_o *)qp;
          v97 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v286, v94, v95, v96);
          LODWORD(v285.fields.useName) = ItemEntity__GetMaxNum(v75, 0LL);
          v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v285, v98, v99, v100);
          v102 = System_String__Format_62613552(v93, v97, v101, 0LL);
        }
        v283.fields.sortValue2 = (int64_t)v102;
        sub_1BDB81C((CGThumbnailListItem_o *)&v283.fields.sortValue2, (int32_t)v102, v103, v104);
        LOBYTE(v283.fields.sortValue2B) = v92;
        v281 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v283.fields.sortValue1;
        if ( !v58 )
          goto LABEL_210;
        v285 = v281;
        items = v58->fields._items;
        v113 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++v58->fields._version;
        if ( !items )
          goto LABEL_210;
        size = v58->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v118 = *(const MethodInfo_373FF68 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL);
          v286 = v285;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            v58,
            &v286,
            v118);
        }
        else
        {
          v58->fields._size = size + 1;
          v115 = *(_OWORD *)&v285.fields.useName;
          v116 = *(_OWORD *)&v285.fields.possessionName;
          v117 = (char *)items + 40 * size;
          *((_QWORD *)v117 + 8) = *(_QWORD *)&v285.fields.isIndividualLimit;
          *((_OWORD *)v117 + 2) = v115;
          *((_OWORD *)v117 + 3) = v116;
          sub_1BDB81C((CGThumbnailListItem_o *)(v117 + 32), 0, v110, v111);
        }
        Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v71, 0LL);
      }
      while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_76:
      if ( !v59 )
        goto LABEL_210;
      this = v275;
      v63 = v278;
      if ( System_Text_StringBuilder__get_Length(v59, 0LL) < 1 )
      {
        v60 = v273;
        v277 = 0;
LABEL_151:
        Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          LOBYTE(Instance->fields.nowLoadCount) = 0;
          Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( Instance )
          {
            PartyOrganizationUtility__CacheQuestUseItems((PartyOrganizationUtility_o *)Instance, 0LL);
            Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( Instance )
            {
              CachedAvailableQuestUseItems = PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
                                               (PartyOrganizationUtility_o *)Instance,
                                               0LL);
              QuestUseItemButtons = BattleRetryConfirmComponent__CreateQuestUseItemButtons(
                                      this,
                                      CachedAvailableQuestUseItems,
                                      v203);
              this->fields.currentQuestUseItemButtons = QuestUseItemButtons;
              sub_1BDB81C(
                (CGThumbnailListItem_o *)&this->fields.currentQuestUseItemButtons,
                (int32_t)QuestUseItemButtons,
                v205,
                v206);
              if ( CachedAvailableQuestUseItems )
              {
                max_length = CachedAvailableQuestUseItems->max_length;
                if ( QuestEntity__GetConsumeType(v63, 0LL) == 1
                  || QuestEntity__GetConsumeType(v63, 0LL) == 2
                  || QuestEntity__GetConsumeType(v63, 0LL) == 4 )
                {
                  v208 = (MapControl_QuestInfo_o *)sub_1BDBAC4(MapControl_QuestInfo_TypeInfo);
                  MapControl_QuestInfo___ctor(v208, 0LL);
                  if ( !v208 )
                    goto LABEL_210;
                  MapControl_QuestInfo__SetTerminalParamsValue(v208, 0LL);
                  questId = v208->fields.questId;
                  if ( !CondType_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                  fixedVal = -1;
                  IsQuestClear_39349364 = CondType__IsQuestClear_39349364(questId, -1, 0, 0LL);
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_4B3EFD0 )
                  {
                    sub_1BDB878(&TerminalPramsManager_TypeInfo, v210);
                    byte_4B3EFD0 = 1;
                  }
                  v212 = TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    v212 = TerminalPramsManager_TypeInfo;
                  }
                  QuestId_k__BackingField = v212->static_fields->_QuestId_k__BackingField;
                  if ( !byte_4B3EFCF )
                  {
                    sub_1BDB878(&TerminalPramsManager_TypeInfo, v210);
                    v212 = TerminalPramsManager_TypeInfo;
                    byte_4B3EFCF = 1;
                  }
                  if ( !v212->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v212);
                    v212 = TerminalPramsManager_TypeInfo;
                  }
                  CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                                            v63,
                                            QuestId_k__BackingField,
                                            v212->static_fields->_PhaseCnt_k__BackingField,
                                            !IsQuestClear_39349364,
                                            &fixedVal,
                                            0LL);
                  Instance = (DataManager_o *)MapControl_QuestInfo__GetMine(v208, 0LL);
                  if ( !Instance )
                    goto LABEL_210;
                  QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
                  v215 = fixedVal;
                  v208->fields.costCalcVal = CampaignCostCalcValue;
                  v208->fields._fixedCostVal_k__BackingField = v215;
                  ActConsumeCost = MapControl_QuestInfo__GetActConsumeCost(v208, 0LL);
                  CostValueColor = QuestEntity__GetCostValueColor(
                                     CampaignCostCalcValue,
                                     (ActConsumeCost > v277) | (unsigned __int8)(ActConsumeCost > v284),
                                     0LL);
                  LODWORD(v286.fields.useName) = ActConsumeCost;
                  v221 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v286, v218, v219, v220);
                  v222 = System_String__Format(CostValueColor, v221, 0LL);
                  v223 = v284;
                  v224 = (Il2CppObject *)v222;
                  Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v284, 0LL);
                  if ( v277 < v223 )
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v225 = LocalizationManager__Get((System_String_o *)StringLiteral_2052/*"AP_OVER_MAX_COLOR"*/, 0LL);
                    LODWORD(v286.fields.useName) = v284;
                    v229 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v286, v226, v227, v228);
                    Instance = (DataManager_o *)System_String__Format(v225, v229, 0LL);
                  }
                  v230 = (Il2CppObject *)Instance;
                  if ( max_length )
                    goto LABEL_214;
                  if ( !v58 )
                    goto LABEL_210;
                  if ( v58->fields._size )
                  {
LABEL_214:
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v231 = LocalizationManager__Get((System_String_o *)StringLiteral_2885/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0LL);
                    *(_QWORD *)&v283.fields.basePosition.fields.y = System_String__Format(v231, v60, 0LL);
                    sub_1BDB81C(
                      (CGThumbnailListItem_o *)&v283.fields.basePosition.fields.y,
                      SLODWORD(v283.fields.basePosition.fields.y),
                      v232,
                      v233);
                    v234 = LocalizationManager__Get((System_String_o *)StringLiteral_2882/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0LL);
                    v235 = System_String__Format(v234, v60, 0LL);
                  }
                  else
                  {
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v256 = LocalizationManager__Get((System_String_o *)StringLiteral_2886/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_NONE_SPACE"*/, 0LL);
                    *(_QWORD *)&v283.fields.basePosition.fields.y = System_String__Format(v256, v60, 0LL);
                    sub_1BDB81C(
                      (CGThumbnailListItem_o *)&v283.fields.basePosition.fields.y,
                      SLODWORD(v283.fields.basePosition.fields.y),
                      v257,
                      v258);
                    v259 = LocalizationManager__Get((System_String_o *)StringLiteral_2883/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_NONE_SPACE"*/, 0LL);
                    v235 = System_String__Format(v259, v60, 0LL);
                  }
                  *(_QWORD *)&v283.fields._Id_k__BackingField = v235;
                  sub_1BDB81C((CGThumbnailListItem_o *)&v283.fields._Id_k__BackingField, (int32_t)v235, v236, v237);
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v238 = LocalizationManager__Get((System_String_o *)StringLiteral_2887/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0LL);
                  v283.fields.viewObject = (struct ListViewObject_o *)System_String__Format(v238, v224, 0LL);
                  sub_1BDB81C(
                    (CGThumbnailListItem_o *)&v283.fields.viewObject,
                    (int32_t)v283.fields.viewObject,
                    v239,
                    v240);
                  v241 = LocalizationManager__Get((System_String_o *)StringLiteral_2884/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0LL);
                  LODWORD(v286.fields.useName) = v277;
                  v245 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v286, v242, v243, v244);
                  *(_QWORD *)&v283.fields._Type_k__BackingField = System_String__Format_62613552(v241, v230, v245, 0LL);
                  sub_1BDB81C(
                    (CGThumbnailListItem_o *)&v283.fields._Type_k__BackingField,
                    v283.fields._Type_k__BackingField,
                    v246,
                    v247);
                }
                v248 = sub_1BDBAC4(BattleRetryConfirmComponent___c__DisplayClass43_0_TypeInfo);
                System_Object___ctor((Il2CppObject *)v248, 0LL);
                BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v249);
                Instance = (DataManager_o *)System_String__IsNullOrEmpty(
                                              *(System_String_o **)&v283.fields.basePosition.fields.y,
                                              0LL);
                if ( !v58 )
                  goto LABEL_210;
                v250 = (char)Instance;
                v251 = v58->fields._size;
                mainText = (UnityEngine_Object_o *)this->fields.mainText;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(mainText, 0LL, 0LL) )
                {
                  v253 = this->fields.mainText;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2880/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/, 0LL);
                  if ( !v253 )
                    goto LABEL_210;
                  UILabel__set_text(v253, (System_String_o *)Instance, 0LL);
                  if ( !max_length )
                  {
                    v254 = (UnityEngine_Component_o *)this->fields.mainText;
                    if ( v251 + ((v250 & 1) == 0) == 3 )
                    {
                      ComponentHelper__SetLocalPositionY(v254, 179.0, 0LL);
                      Instance = (DataManager_o *)this->fields.mainText;
                      if ( !Instance )
                        goto LABEL_210;
                      v255 = 22;
                    }
                    else
                    {
                      ComponentHelper__SetLocalPositionY(v254, 178.0, 0LL);
                      Instance = (DataManager_o *)this->fields.mainText;
                      if ( !Instance )
                        goto LABEL_210;
                      v255 = 24;
                    }
                    UILabel__set_fontSize((UILabel_o *)Instance, v255, 0LL);
                  }
                }
                buttonRoot = (UnityEngine_Object_o *)this->fields.buttonRoot;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v261 = UnityEngine_Object__op_Inequality(buttonRoot, 0LL, 0LL);
                if ( !max_length && v261 )
                  GameObjectExtensions__SetLocalPositionY(this->fields.buttonRoot, -164.0, 0LL);
                v280 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v283.fields.basePosition.fields.y;
                v262 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                         v58,
                         (const MethodInfo_3741F78 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
                Instance = (DataManager_o *)BattleRetryConfirmComponent__CreateContents(
                                              this,
                                              &v280,
                                              v262,
                                              max_length != 0,
                                              v263);
                if ( v248 )
                {
                  *(_QWORD *)(v248 + 16) = Instance;
                  sub_1BDB81C((CGThumbnailListItem_o *)(v248 + 16), (int32_t)Instance, v264, v265);
                  Instance = *(DataManager_o **)(v248 + 16);
                  if ( Instance )
                  {
                    BattleRetryConfirmContents__Initialized((BattleRetryConfirmContents_o *)Instance, v54);
                    v266 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
                    System_Action___ctor(
                      v266,
                      (Il2CppObject *)v248,
                      Method_BattleRetryConfirmComponent___c__DisplayClass43_0__SetValues_b__2__,
                      0LL);
                    v269 = BattleRetryConfirmComponent__WaitOneFrame(v267, v266, v268);
                    UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v269, 0LL);
                    v270 = *(struct BattleRetryConfirmContents_o **)(v248 + 16);
                    this->fields.currentContents = v270;
                    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.currentContents, (int32_t)v270, v271, v272);
                    return 1;
                  }
                }
              }
            }
          }
        }
LABEL_210:
        sub_1BDBAD4(Instance, v54);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v119 = LocalizationManager__Get((System_String_o *)StringLiteral_10879/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v120 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v59->klass->vtable._3_ToString.method)(
                               v59,
                               v59->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v121 = System_String__Format(v119, v120, 0LL);
      v122 = System_String__Concat_62572260(v121, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v123 = LocalizationManager__Get((System_String_o *)StringLiteral_2890/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v124 = System_String__Concat_62572260(v122, v123, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v125 = (CommonUI_o *)Instance;
      v126 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v126 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      _9__43_0 = v126->static_fields->__9__43_0;
      v128 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__43_0 )
      {
        if ( !v126->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v126);
          v126 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v129 = (Il2CppObject *)v126->static_fields->__9;
        _9__43_0 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(_9__43_0, v129, Method_BattleRetryConfirmComponent___c__SetValues_b__43_0__, 0LL);
        static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        static_fields->__9__43_0 = _9__43_0;
        sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v131, v132);
      }
      if ( !v125 )
        goto LABEL_210;
      CommonUI__OpenNotificationDialog(v125, v128, v124, _9__43_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0, 0LL);
      return 0;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3828/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v274 = (Il2CppObject *)Instance;
      v276 = this;
      Instance = (DataManager_o *)UserGameEntity__getAct(*p_userGameEntity, 0LL);
      v284 = (int)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v277 = (*p_userGameEntity)->fields.actMax;
      *(_QWORD *)&v283.fields.basePosition.fields.y = StringLiteral_1/*""*/;
      sub_1BDB81C((CGThumbnailListItem_o *)&v283.fields.basePosition.fields.y, (int32_t)StringLiteral_1/*""*/, v133, v134);
      v283.fields.viewObject = (struct ListViewObject_o *)StringLiteral_1/*""*/;
      sub_1BDB81C((CGThumbnailListItem_o *)&v283.fields.viewObject, (int32_t)StringLiteral_1/*""*/, v135, v136);
      if ( !ItemConsumeEntity )
        goto LABEL_137;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v137 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v138 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_137;
      v139 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B3ED56 )
        {
          sub_1BDB878(&NetworkManager_TypeInfo, v54);
          byte_4B3ED56 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        v140 = ItemConsumeEntity->fields.itemIds;
        if ( !v140 )
          goto LABEL_210;
        if ( v139 >= v140->max_length )
          goto LABEL_211;
        if ( !v138 )
          goto LABEL_210;
        Instance = (DataManager_o *)UserItemMaster__GetEntity(
                                      (UserItemMaster_o *)v138,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      v140->m_Items[v139 + 1],
                                      0LL);
        v141 = ItemConsumeEntity->fields.itemIds;
        if ( !v141 )
          goto LABEL_210;
        if ( v139 >= v141->max_length )
          goto LABEL_211;
        if ( !v137 )
          goto LABEL_210;
        v142 = Instance;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v137,
                                      v141->m_Items[v139 + 1],
                                      (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_210;
        v143 = (ItemEntity_o *)Instance;
        if ( LODWORD(Instance->fields.lookup) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_210;
          m_CancellationTokenSource_high = (*p_userGameEntity)->fields.qp;
        }
        else if ( v142 )
        {
          Instance = (DataManager_o *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL);
          m_CancellationTokenSource_high = 0LL;
          if ( ((unsigned __int8)Instance & 1) != 0 )
            m_CancellationTokenSource_high = SHIDWORD(v142->fields.m_CancellationTokenSource);
        }
        else
        {
          m_CancellationTokenSource_high = 0LL;
        }
        v145 = ItemConsumeEntity->fields.nums;
        if ( !v145 )
          goto LABEL_210;
        if ( v139 >= v145->max_length )
          goto LABEL_211;
        if ( m_CancellationTokenSource_high < v145->m_Items[v139 + 1] )
        {
          Instance = (DataManager_o *)System_String__Concat_62572260(
                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                        v143->fields.name,
                                        0LL);
          if ( !v59 )
            goto LABEL_210;
          System_Text_StringBuilder__Append_62657444(v59, (System_String_o *)Instance, 0LL);
        }
        memset(&v283, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v146 = LocalizationManager__Get((System_String_o *)StringLiteral_2888/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v283.klass = (CGThumbnailListItem_c *)System_String__Format(v146, (Il2CppObject *)v143->fields.name, 0LL);
        sub_1BDB81C(&v283, (int32_t)v283.klass, v147, v148);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2889/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v151 = ItemConsumeEntity->fields.nums;
        if ( !v151 )
          goto LABEL_210;
        if ( v139 >= v151->max_length )
LABEL_211:
          sub_1BDBADC(Instance, v54, v70);
        v152 = (System_String_o *)Instance;
        LODWORD(v286.fields.useName) = v151->m_Items[v139 + 1];
        v153 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v286, v70, v149, v150);
        v283.monitor = System_String__Format(v152, v153, 0LL);
        sub_1BDB81C((CGThumbnailListItem_o *)&v283.monitor, (int32_t)v283.monitor, v154, v155);
        v156 = LocalizationManager__Get((System_String_o *)StringLiteral_2891/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        *(_QWORD *)&v283.fields.selectNum = System_String__Format(v156, (Il2CppObject *)v143->fields.name, 0LL);
        sub_1BDB81C((CGThumbnailListItem_o *)&v283.fields, v283.fields.selectNum, v157, v158);
        v159 = ItemEntity__GetMaxNum(v143, 0LL);
        v160 = v159 > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v159 < 1 )
        {
          v173 = LocalizationManager__Get((System_String_o *)StringLiteral_2892/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          v286.fields.useName = (struct System_String_o *)m_CancellationTokenSource_high;
          v177 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v286, v174, v175, v176);
          v170 = System_String__Format(v173, v177, 0LL);
        }
        else
        {
          v161 = LocalizationManager__Get((System_String_o *)StringLiteral_2893/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          v286.fields.useName = (struct System_String_o *)m_CancellationTokenSource_high;
          v165 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v286, v162, v163, v164);
          LODWORD(v285.fields.useName) = ItemEntity__GetMaxNum(v143, 0LL);
          v169 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v285, v166, v167, v168);
          v170 = System_String__Format_62613552(v161, v165, v169, 0LL);
        }
        *(_QWORD *)&v283.fields.sortIndex = v170;
        sub_1BDB81C((CGThumbnailListItem_o *)&v283.fields.sortIndex, (int32_t)v170, v171, v172);
        LOBYTE(v283.fields.sortValue0) = v160;
        *(_OWORD *)&v281.fields.useName = *(_OWORD *)&v283.klass;
        *(_OWORD *)&v281.fields.possessionName = *(_OWORD *)&v283.fields.selectNum;
        *(_QWORD *)&v281.fields.isIndividualLimit = v283.fields.sortValue0;
        if ( !v58 )
          goto LABEL_210;
        v285 = v281;
        v180 = v58->fields._items;
        v181 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++v58->fields._version;
        if ( !v180 )
          goto LABEL_210;
        v182 = v58->fields._size;
        if ( (unsigned int)v182 >= v180->max_length )
        {
          v186 = *(const MethodInfo_373FF68 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL);
          v286 = v285;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            v58,
            &v286,
            v186);
        }
        else
        {
          v58->fields._size = v182 + 1;
          v183 = *(_OWORD *)&v285.fields.useName;
          v184 = *(_OWORD *)&v285.fields.possessionName;
          v185 = (char *)v180 + 40 * v182;
          *((_QWORD *)v185 + 8) = *(_QWORD *)&v285.fields.isIndividualLimit;
          *((_OWORD *)v185 + 2) = v183;
          *((_OWORD *)v185 + 3) = v184;
          sub_1BDB81C((CGThumbnailListItem_o *)(v185 + 32), 0, v178, v179);
        }
        Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v139, 0LL);
      }
      while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_137:
      if ( !v59 )
        goto LABEL_210;
      v60 = v274;
      this = v276;
      v63 = v278;
      if ( System_Text_StringBuilder__get_Length(v59, 0LL) < 1 )
        goto LABEL_151;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v187 = LocalizationManager__Get((System_String_o *)StringLiteral_10879/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v188 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v59->klass->vtable._3_ToString.method)(
                               v59,
                               v59->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v189 = System_String__Format(v187, v188, 0LL);
      v190 = System_String__Concat_62572260(v189, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v191 = LocalizationManager__Get((System_String_o *)StringLiteral_2890/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v192 = System_String__Concat_62572260(v190, v191, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v193 = (CommonUI_o *)Instance;
      v194 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v194 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      v195 = (System_String_o *)StringLiteral_1/*""*/;
      _9__43_1 = v194->static_fields->__9__43_1;
      if ( !_9__43_1 )
      {
        if ( !v194->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v194);
          v194 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v197 = (Il2CppObject *)v194->static_fields->__9;
        _9__43_1 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(_9__43_1, v197, Method_BattleRetryConfirmComponent___c__SetValues_b__43_1__, 0LL);
        v198 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v198->__9__43_1 = _9__43_1;
        sub_1BDB81C((CGThumbnailListItem_o *)&v198->__9__43_1, (int32_t)_9__43_1, v199, v200);
      }
      if ( !v193 )
        goto LABEL_210;
      CommonUI__OpenNotificationDialog(v193, v195, v192, _9__43_1, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0, 0LL);
      return 0;
    default:
      v277 = 0;
      v63 = v56;
      goto LABEL_151;
  }
}


System_Collections_IEnumerator_o *__fastcall BattleRetryConfirmComponent__WaitOneFrame(
        BattleRetryConfirmComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B4815C & 1) == 0 )
  {
    sub_1BDB878(&BattleRetryConfirmComponent__WaitOneFrame_d__49_TypeInfo, action);
    byte_4B4815C = 1;
  }
  v4 = sub_1BDBAC4(BattleRetryConfirmComponent__WaitOneFrame_d__49_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = action;
  sub_1BDB81C((CGThumbnailListItem_o *)(v4 + 32), (int32_t)action, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattleRetryConfirmComponent___BaseDialogOpen_b__54_0(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


void __fastcall BattleRetryConfirmComponent__WaitOneFrame_d__49___ctor(
        BattleRetryConfirmComponent__WaitOneFrame_d__49_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRetryConfirmComponent__WaitOneFrame_d__49__MoveNext(
        BattleRetryConfirmComponent__WaitOneFrame_d__49_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
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
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleRetryConfirmComponent__WaitOneFrame_d__49__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRetryConfirmComponent__WaitOneFrame_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRetryConfirmComponent__WaitOneFrame_d__49__System_Collections_IEnumerator_Reset(
        BattleRetryConfirmComponent__WaitOneFrame_d__49_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__49_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall BattleRetryConfirmComponent__WaitOneFrame_d__49__System_Collections_IEnumerator_get_Current(
        BattleRetryConfirmComponent__WaitOneFrame_d__49_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRetryConfirmComponent__WaitOneFrame_d__49__System_IDisposable_Dispose(
        BattleRetryConfirmComponent__WaitOneFrame_d__49_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleRetryConfirmComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B48163 & 1) == 0 )
  {
    sub_1BDB878(&BattleRetryConfirmComponent___c_TypeInfo, v1);
    byte_4B48163 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(BattleRetryConfirmComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleRetryConfirmComponent___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)BattleRetryConfirmComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleRetryConfirmComponent___c___ctor(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmComponent___c___OnClickQuestUseItemButton_b__46_0(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B48166 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BDB878(&Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__46_0__, v2);
    byte_4B48166 = 1;
  }
  v3 = Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__46_0__;
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__46_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BDB890(Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__46_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v6);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__43_0(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B48164 & 1) == 0 )
  {
    sub_1BDB878(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4B48164 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_301B5CC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__43_1(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B48165 & 1) == 0 )
  {
    sub_1BDB878(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1BDB878(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4B48165 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_301B5CC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c__DisplayClass43_0___ctor(
        BattleRetryConfirmComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmComponent___c__DisplayClass43_0___SetValues_b__2(
        BattleRetryConfirmComponent___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  BattleRetryConfirmContents_o *contents; // x0

  contents = this->fields.contents;
  if ( !contents )
    sub_1BDBAD4(0LL, method);
  BattleRetryConfirmContents__SetCondensedScalePossessionAmount(contents, method);
}