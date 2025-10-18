void BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C46896 & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C46896 = 1;
  }
  *(_QWORD *)&this->fields.CONFIRM_BUTTON_POSITION_ON_THREE_X = 0xC366000043660000LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void BattleRetryConfirmComponent__Awake(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  ;
}


void BattleRetryConfirmComponent__BaseDialogClose(
        BattleRetryConfirmComponent_o *this,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  BaseDialog__Close((BaseDialog_o *)this, callBack, 0);
}


void BattleRetryConfirmComponent__BaseDialogOpen(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C46892 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_BattleRetryConfirmComponent__BaseDialogOpen_b__41_0__);
    byte_4C46892 = 1;
  }
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_BattleRetryConfirmComponent__BaseDialogOpen_b__41_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v3, 0, 0, 0);
}


void BattleRetryConfirmComponent__BoostSupportRequestDialogCallback(
        BattleRetryConfirmComponent_o *this,
        int32_t result,
        int32_t boostId,
        const MethodInfo *method)
{
  BattleResultComponent_o *battleResultComponent; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x2
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C46894 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C46894 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  switch ( result )
  {
    case 2:
      battleResultComponent = this->fields.battleResultComponent;
      if ( !battleResultComponent )
        goto LABEL_21;
      v8 = boostId;
      goto LABEL_15;
    case 1:
      battleResultComponent = this->fields.battleResultComponent;
      if ( !battleResultComponent )
        goto LABEL_21;
      v8 = 0;
LABEL_15:
      BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, v8, 0);
      break;
    case 0:
      battleResultComponent = (BattleResultComponent_o *)this->fields.buttons;
      if ( !battleResultComponent )
        goto LABEL_21;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v11,
        (System_Collections_Generic_List_object__o *)battleResultComponent,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v11,
                (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v11.fields._current )
          sub_1C372B4(0);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11.fields._current, 1, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v11,
        (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
      if ( currentQuestUseItemButtons )
        BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 1, v9);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_21:
    sub_1C372B4(battleResultComponent);
  CommonUI__CloseBoostSupportRequestMenu((CommonUI_o *)battleResultComponent, 0, 0);
}


void BattleRetryConfirmComponent__Close(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *cancelLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  cancelLabel = (UnityEngine_Component_o *)this->fields.cancelLabel;
  if ( !cancelLabel
    || (cancelLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(cancelLabel, 0)) == 0
    || (cancelLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                   (UnityEngine_Transform_o *)cancelLabel,
                                                   0)) == 0
    || (gameObject = UnityEngine_Component__get_gameObject(cancelLabel, 0),
        AndroidBackKeyManager__RemoveBackBtn(gameObject, 0),
        (cancelLabel = (UnityEngine_Component_o *)this->fields.bgObj) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)cancelLabel, 0, 0),
        (cancelLabel = (UnityEngine_Component_o *)this->fields.window) == 0) )
  {
    sub_1C372B4(cancelLabel);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, void *))cancelLabel->klass[1]._1.fields)(
    cancelLabel,
    0,
    cancelLabel->klass[1]._1.events);
}


void BattleRetryConfirmComponent__CostPointLabelCentering(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  BattleRetryConfirmContents_o *currentContents; // x0

  if ( !this->fields.isNotCentering )
  {
    currentContents = this->fields.currentContents;
    if ( !currentContents )
      sub_1C372B4(0);
    BattleRetryConfirmContents__CostPointLabelCentering(currentContents, method);
  }
}


BattleRetryConfirmContents_o *BattleRetryConfirmComponent__CreateContents(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_o *costPoint,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *items,
        bool isDispUseItemUI,
        const MethodInfo *method)
{
  __int64 v9; // x8
  Il2CppObject *v10; // x22
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *window; // x0
  char v12; // w24
  System_Collections_Generic_IEnumerable_TSource__o *appended; // x0
  int max_length; // w8
  bool v15; // zf
  __int64 v16; // x8
  __int64 v17; // x9
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v19; // x2
  BattleRetryConfirmContents_o *v20; // x20
  __int128 v22; // [xsp+10h] [xbp-90h]
  __int64 v23; // [xsp+20h] [xbp-80h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v24; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4C4688E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Append_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_BattleRetryConfirmContents___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4688E = 1;
  }
  v9 = 200;
  if ( isDispUseItemUI )
    v9 = 168;
  v10 = *(Il2CppObject **)((char *)&this->klass + v9);
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)System_String__op_Inequality(
                                                                      costPoint->fields.useName,
                                                                      (System_String_o *)StringLiteral_1/*""*/,
                                                                      0);
  v12 = (char)window;
  if ( ((unsigned __int8)window & 1) != 0 )
  {
    v23 = *(_QWORD *)&costPoint->fields.isIndividualLimit;
    v22 = *(_OWORD *)&costPoint->fields.possessionName;
    *(_OWORD *)&v24.fields.useName = *(_OWORD *)&costPoint->fields.useName;
    *(_OWORD *)&v24.fields.possessionName = v22;
    *(_QWORD *)&v24.fields.isIndividualLimit = v23;
    appended = System_Linq_Enumerable__Append_BattleRetryConfirmComponent_RetryConfirmItemStr_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)items,
                 &v24,
                 (const MethodInfo_30F5F3C *)Method_System_Linq_Enumerable_Append_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    window = System_Linq_Enumerable__ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr_(
               appended,
               (const MethodInfo_3127628 *)Method_System_Linq_Enumerable_ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    items = window;
  }
  this->fields.isNotCentering = 0;
  if ( !items )
    goto LABEL_23;
  max_length = items->max_length;
  if ( max_length != 1 || (v12 & 1) == 0 )
  {
    if ( max_length == 1 )
    {
      v15 = !isDispUseItemUI;
      v16 = 208;
      v17 = 176;
    }
    else
    {
      v15 = !isDispUseItemUI;
      if ( max_length == 2 )
      {
        v16 = 216;
        v17 = 184;
      }
      else
      {
        v16 = 224;
        v17 = 192;
      }
    }
    if ( !v15 )
      v16 = v17;
    v10 = *(Il2CppObject **)((char *)&this->klass + v16);
  }
  else
  {
    this->fields.isNotCentering = !isDispUseItemUI;
  }
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)this->fields.window;
  if ( !window )
    goto LABEL_23;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)window, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)UnityEngine_Object__Instantiate_object__51855596(
                                                                      v10,
                                                                      transform,
                                                                      (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_BattleRetryConfirmContents___);
  if ( !window )
LABEL_23:
    sub_1C372B4(window);
  v20 = (BattleRetryConfirmContents_o *)window;
  BattleRetryConfirmContents__SetCostValues((BattleRetryConfirmContents_o *)window, items, v19);
  return v20;
}


BattleRetryConfirmQuestUseItemButtons_o *BattleRetryConfirmComponent__CreateQuestUseItemButtons(
        BattleRetryConfirmComponent_o *this,
        QuestUseItemInfo_array *itemInfos,
        const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *v4; // x20
  struct BattleRetryConfirmQuestUseItemButtons_array *questUseItemButtonsPrefabs; // x21
  struct BattleRetryConfirmQuestUseItemButtons_array *v6; // x8
  int v7; // w9
  Il2CppObject *v8; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v10; // x21
  System_Action_object__object__o *v11; // x22
  const MethodInfo *v12; // x3

  v4 = this;
  if ( (byte_4C4688F & 1) == 0 )
  {
    sub_1C37058(&System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__TypeInfo);
    sub_1C37058(&Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    sub_1C37058(&System_Math_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_BattleRetryConfirmQuestUseItemButtons___);
    this = (BattleRetryConfirmComponent_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4688F = 1;
  }
  if ( !itemInfos )
    goto LABEL_17;
  this = (BattleRetryConfirmComponent_o *)itemInfos->max_length;
  if ( !this )
    return 0;
  questUseItemButtonsPrefabs = v4->fields.questUseItemButtonsPrefabs;
  if ( !questUseItemButtonsPrefabs )
    goto LABEL_17;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this = (BattleRetryConfirmComponent_o *)itemInfos->max_length;
  }
  this = (BattleRetryConfirmComponent_o *)System_Math__Min_65085416(
                                            (int32_t)this,
                                            questUseItemButtonsPrefabs->max_length,
                                            0);
  v6 = v4->fields.questUseItemButtonsPrefabs;
  if ( !v6 )
    goto LABEL_17;
  v7 = (_DWORD)this - 1;
  if ( (unsigned int)((_DWORD)this - 1) >= LODWORD(v6->max_length) )
    sub_1C372BC(this);
  this = (BattleRetryConfirmComponent_o *)v4->fields.window;
  if ( !this )
    goto LABEL_17;
  v8 = (Il2CppObject *)v6->m_Items[v7];
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__Instantiate_object__51855596(
          v8,
          transform,
          (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_BattleRetryConfirmQuestUseItemButtons___);
  v11 = (System_Action_object__object__o *)sub_1C372A4(System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__TypeInfo);
  System_Action_object__object____ctor(
    v11,
    (Il2CppObject *)v4,
    (intptr_t)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__,
    0);
  if ( !v10 )
LABEL_17:
    sub_1C372B4(this);
  BattleRetryConfirmQuestUseItemButtons__Setup(
    (BattleRetryConfirmQuestUseItemButtons_o *)v10,
    itemInfos,
    (System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__o *)v11,
    v12);
  return (BattleRetryConfirmQuestUseItemButtons_o *)v10;
}


void BattleRetryConfirmComponent__Init(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  struct System_Collections_Generic_List_UIButton__o **p_buttons; // x20
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v11; // x21
  unsigned __int64 v12; // x22
  Il2CppObject *v13; // x1
  intptr_t m_CachedPtr; // x8
  _QWORD *v15; // x9
  __int64 klass_low; // x10
  intptr_t v17; // x8
  UnityEngine_Object_o *mainText; // x20
  UILabel_o *v19; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *confirmLabel; // x20
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C46891 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIButton__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIButton___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIButton__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_UIButton__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_2851/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/);
    sub_1C37058(&StringLiteral_2853/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C37058(&StringLiteral_2852/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/);
    byte_4C46891 = 1;
  }
  memset(&i, 0, sizeof(i));
  root = this->fields.root;
  if ( !root )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(root, 0, 0);
  root = (UnityEngine_GameObject_o *)this->fields.buttons;
  if ( !root || !LODWORD(root[1].klass) )
  {
    p_buttons = &this->fields.buttons;
    v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UIButton__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v5;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.buttons, (int32_t)v5, v6, v7);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    if ( !root )
      goto LABEL_36;
    klass = root[1].klass;
    v11 = root;
    if ( (int)klass >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)klass )
          sub_1C372BC(root);
        root = (UnityEngine_GameObject_o *)*p_buttons;
        if ( !*p_buttons )
          break;
        v13 = (Il2CppObject *)*((_QWORD *)&v11[1].monitor + v12);
        m_CachedPtr = root->fields.m_CachedPtr;
        v15 = Method_System_Collections_Generic_List_UIButton__Add__;
        ++HIDWORD(root[1].klass);
        if ( !m_CachedPtr )
          break;
        klass_low = SLODWORD(root[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)root,
            v13,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = m_CachedPtr + 8 * klass_low;
          LODWORD(root[1].klass) = klass_low + 1;
          *(_QWORD *)(v17 + 32) = v13;
          sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v13, v8, v9);
        }
        LODWORD(klass) = v11[1].klass;
        if ( (__int64)++v12 >= (int)klass )
          goto LABEL_16;
      }
LABEL_36:
      sub_1C372B4(root);
    }
LABEL_16:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_36;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)root,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  for ( i = v22;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0) )
  {
    if ( !i.fields._current )
      sub_1C372B4(0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  if ( !this->fields.isInitialized )
  {
    mainText = (UnityEngine_Object_o *)this->fields.mainText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mainText, 0, 0) )
    {
      v19 = this->fields.mainText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2853/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0);
      if ( !v19 )
        goto LABEL_36;
      UILabel__set_text(v19, (System_String_o *)root, 0);
    }
    cancelLabel = this->fields.cancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2851/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0);
    if ( !cancelLabel )
      goto LABEL_36;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2852/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0);
    if ( !confirmLabel )
      goto LABEL_36;
    UILabel__set_text(confirmLabel, (System_String_o *)root, 0);
    this->fields.isInitialized = 1;
  }
}


void BattleRetryConfirmComponent__OnClickBoostSupportRequest(
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
  const MethodInfo *v11; // x2
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C46893 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__);
    sub_1C37058(&Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
    sub_1C37058(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C46893 = 1;
  }
  v3 = Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__;
  memset(&v13, 0, sizeof(v13));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C3CFE6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4C3CFE6 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v6->static_fields->_PhaseCnt_k__BackingField;
  v9 = (BoostFunctionUtility_CallbackFunc_o *)sub_1C372A4(BoostFunctionUtility_CallbackFunc_TypeInfo);
  BoostFunctionUtility_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__,
    0);
  if ( !Instance
    || (CommonUI__OpenBoostSupportRequestMenu(
          (CommonUI_o *)Instance,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          v9,
          1,
          0),
        (buttons = (System_Collections_Generic_List_object__o *)this->fields.buttons) == 0) )
  {
    sub_1C372B4(buttons);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    buttons,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1C372B4(0);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13.fields._current, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
  if ( currentQuestUseItemButtons )
    BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, v11);
}


void BattleRetryConfirmComponent__OnClickCancel(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BattleResultComponent_o *battleResultComponent; // x0
  const MethodInfo *v6; // x2
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C4688B & 1) == 0 )
  {
    sub_1C37058(&Method_BattleRetryConfirmComponent_OnClickCancel__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    byte_4C4688B = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.state )
  {
    v3 = Method_BattleRetryConfirmComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_BattleRetryConfirmComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent
      || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0),
          (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0) )
    {
      sub_1C372B4(battleResultComponent);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_1C372B4(0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
    if ( currentQuestUseItemButtons )
      BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, v6);
  }
}


void BattleRetryConfirmComponent__OnClickConfirm(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BattleResultComponent_o *battleResultComponent; // x0
  const MethodInfo *v6; // x2
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C4688C & 1) == 0 )
  {
    sub_1C37058(&Method_BattleRetryConfirmComponent_OnClickConfirm__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    byte_4C4688C = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !this->fields.state )
  {
    v3 = Method_BattleRetryConfirmComponent_OnClickConfirm__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickConfirm__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_BattleRetryConfirmComponent_OnClickConfirm__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent
      || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0),
          (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0) )
    {
      sub_1C372B4(battleResultComponent);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v8,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v8.fields._current )
        sub_1C372B4(0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v8.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
    if ( currentQuestUseItemButtons )
      BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, v6);
  }
}


void BattleRetryConfirmComponent__OnClickQuestUseItemButton(
        BattleRetryConfirmComponent_o *this,
        QuestUseItemInfo_o *info,
        FriendshipUpItemUseItem_o *item,
        const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *v6; // x21
  bool UseFlag; // w21
  _QWORD *v8; // x8
  System_Reflection_MethodBase_o *v9; // x0
  QuestUseItemInfo_o *v10; // x0
  bool v11; // w1
  Il2CppObject *Instance; // x20
  System_String_o *v13; // x0
  BattleRetryConfirmComponent_o *v14; // x19
  BattleRetryConfirmComponent___c_c *v15; // x8
  System_Action_o *_9__33_0; // x22
  System_String_o *v17; // x21
  Il2CppObject *v18; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  v6 = this;
  if ( (byte_4C4688D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C37058(&Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__);
    sub_1C37058(&BattleRetryConfirmComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_10244/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/);
    this = (BattleRetryConfirmComponent_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4688D = 1;
  }
  if ( !v6->fields.state )
  {
    if ( !info )
      goto LABEL_25;
    UseFlag = QuestUseItemInfo__GetUseFlag(info, 0);
    v8 = Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C37070(Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C3703C(v8, v8[4]);
    if ( UseFlag )
    {
      OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0, 0);
      if ( !item )
        goto LABEL_25;
      FriendshipUpItemUseItem__ChangeButtonState(item, 0, 0);
      v10 = info;
      v11 = 0;
LABEL_13:
      QuestUseItemInfo__SetUseFlag(v10, v11, 0);
      this = (BattleRetryConfirmComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        PartyOrganizationUtility__SaveQuestUseItemUseState((PartyOrganizationUtility_o *)this, 0);
        return;
      }
LABEL_25:
      sub_1C372B4(this);
    }
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    this = (BattleRetryConfirmComponent_o *)QuestUseItemInfo__IsEventPeriod(info, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !item )
        goto LABEL_25;
      FriendshipUpItemUseItem__ChangeButtonState(item, 1, 0);
      v11 = 1;
      v10 = info;
      goto LABEL_13;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10244/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0);
    this = (BattleRetryConfirmComponent_o *)System_String__Format(
                                              v13,
                                              (Il2CppObject *)info->fields._Name_k__BackingField,
                                              0);
    v14 = this;
    v15 = BattleRetryConfirmComponent___c_TypeInfo;
    if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
      v15 = BattleRetryConfirmComponent___c_TypeInfo;
    }
    _9__33_0 = v15->static_fields->__9__33_0;
    v17 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__33_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v15->static_fields->__9;
      _9__33_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__33_0,
        v18,
        (intptr_t)Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__,
        0);
      static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
      static_fields->__9__33_0 = _9__33_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__33_0, (int32_t)_9__33_0, v20, v21);
    }
    if ( !Instance )
      goto LABEL_25;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      v17,
      (System_String_o *)v14,
      _9__33_0,
      -1,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0.0,
      0,
      0);
  }
}


void BattleRetryConfirmComponent__Open(
        BattleRetryConfirmComponent_o *this,
        BattleWindowComponent_EndCall_o *opendFunc,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgObj; // x0
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  bgObj = this->fields.bgObj;
  if ( !bgObj
    || (UnityEngine_GameObject__SetActive(bgObj, 1, 0), (bgObj = (UnityEngine_GameObject_o *)this->fields.window) == 0)
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, BattleWindowComponent_EndCall_o *, void *))bgObj->klass[1]._1.generic_class)(
          bgObj,
          opendFunc,
          bgObj->klass[1]._1.typeMetadataHandle),
        BattleRetryConfirmComponent__CostPointLabelCentering(this, v6),
        (bgObj = (UnityEngine_GameObject_o *)this->fields.cancelLabel) == 0)
    || (bgObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)bgObj, 0)) == 0
    || (bgObj = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)bgObj, 0)) == 0 )
  {
    sub_1C372B4(bgObj);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgObj, 0);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0);
}


void BattleRetryConfirmComponent__SetBoostSupportRequestButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  int32_t WarId_k__BackingField; // w22
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v7; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  BattleSetupInfo_o *v9; // x22
  UnityEngine_Object_o *boostSupportRequestLabel; // x20
  UILabel_o *v11; // x20
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v13; // x0
  UnityEngine_Object_o *v14; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C46895 & 1) == 0 )
  {
    sub_1C37058(&BattleSetupInfo_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_11139/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/);
    sub_1C37058(&StringLiteral_2850/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/);
    byte_4C46895 = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D397 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D397 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3CFE7 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v3->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C3CFE6 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4C3CFE6 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v3->static_fields->_PhaseCnt_k__BackingField;
  v7 = (BattleSetupInfo_o *)sub_1C372A4(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_53;
  v9 = BattleSetupInfo__ConvertBattleSetupInfo(
         v7,
         WarId_k__BackingField,
         QuestId_k__BackingField,
         PhaseCnt_k__BackingField,
         0,
         0,
         0,
         0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v9 || !Master_object )
    goto LABEL_53;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          v9->fields.eventId,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_53;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_object )
      goto LABEL_53;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_object,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11139/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0) == 1 )
    {
      boostSupportRequestLabel = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(boostSupportRequestLabel, 0, 0) )
      {
        v11 = this->fields.boostSupportRequestLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_2850/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/,
                                                                        0);
        if ( !v11 )
          goto LABEL_53;
        UILabel__set_text(v11, (System_String_o *)Master_object, 0);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.boostSupportRequestLabel;
        if ( !Master_object )
          goto LABEL_53;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                        (UnityEngine_Component_o *)Master_object,
                                                                        0);
        if ( !Master_object )
          goto LABEL_53;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Transform__get_parent(
                                                                        (UnityEngine_Transform_o *)Master_object,
                                                                        0);
        if ( !Master_object )
          goto LABEL_53;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)Master_object,
                                                                        0);
        if ( !Master_object )
          goto LABEL_53;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      }
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.cancelLabel;
      if ( Master_object )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                        (UnityEngine_Component_o *)Master_object,
                                                                        0);
        if ( Master_object )
        {
          parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0);
          TransformHelper__SetLocalPositionX(parent, this->fields.CANCEL_BUTTON_POSITION_ON_THREE_X, 0);
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.confirmLabel;
          if ( Master_object )
          {
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                            (UnityEngine_Component_o *)Master_object,
                                                                            0);
            if ( Master_object )
            {
              v13 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0);
              TransformHelper__SetLocalPositionX(v13, this->fields.CONFIRM_BUTTON_POSITION_ON_THREE_X, 0);
              return;
            }
          }
        }
      }
LABEL_53:
      sub_1C372B4(Master_object);
    }
  }
  else
  {
LABEL_44:
    v14 = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v14, 0, 0) )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.boostSupportRequestLabel;
      if ( !Master_object )
        goto LABEL_53;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                      (UnityEngine_Component_o *)Master_object,
                                                                      0);
      if ( !Master_object )
        goto LABEL_53;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Transform__get_parent(
                                                                      (UnityEngine_Transform_o *)Master_object,
                                                                      0);
      if ( !Master_object )
        goto LABEL_53;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)Master_object,
                                                                      0);
      if ( !Master_object )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    }
  }
}


bool BattleRetryConfirmComponent__SetValues(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x28
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  QuestEntity_o *v9; // x22
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v11; // x21
  System_Text_StringBuilder_o *v12; // x26
  Il2CppObject *v13; // x29
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  QuestEntity_o *v16; // x27
  int32_t actMax; // w8
  BalanceConfig_c *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x28
  Il2CppObject *v22; // x29
  unsigned int v23; // w23
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v25; // x8
  DataManager_o *v26; // x24
  ItemEntity_o *v27; // x20
  int64_t qp; // x25
  struct System_Int32_array *nums; // x8
  System_String_o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  struct System_Int32_array *v39; // x8
  System_String_o *v40; // x24
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_String_o *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t MaxNum; // w24
  bool v48; // w19
  System_String_o *v49; // x24
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  __int64 v53; // x5
  __int64 v54; // x6
  __int64 v55; // x7
  Il2CppObject *v56; // x25
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  __int64 v60; // x5
  __int64 v61; // x6
  __int64 v62; // x7
  Il2CppObject *v63; // x0
  System_String_o *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_String_o *v67; // x20
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  __int64 v71; // x5
  __int64 v72; // x6
  __int64 v73; // x7
  Il2CppObject *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  struct BattleRetryConfirmComponent_RetryConfirmItemStr_array *items; // x8
  _QWORD *v78; // x10
  __int64 size; // x9
  __int128 v80; // q0
  __int128 v81; // q1
  char *v82; // x8
  const MethodInfo_383BD24 *v83; // x2
  System_String_o *v84; // x19
  Il2CppObject *v85; // x0
  System_String_o *v86; // x0
  System_String_o *v87; // x19
  System_String_o *v88; // x0
  System_String_o *v89; // x19
  CommonUI_o *v90; // x20
  BattleRetryConfirmComponent___c_c *v91; // x8
  System_String_o *v92; // x21
  System_Action_o *_9__30_0; // x22
  Il2CppObject *v94; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  Il2CppObject *v102; // x28
  Il2CppObject *v103; // x29
  unsigned int v104; // w23
  struct System_Int32_array *v105; // x8
  struct System_Int32_array *v106; // x8
  DataManager_o *v107; // x24
  ItemEntity_o *v108; // x20
  int64_t m_CancellationTokenSource_high; // x25
  struct System_Int32_array *v110; // x8
  System_String_o *v111; // x0
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  __int64 v117; // x5
  __int64 v118; // x6
  __int64 v119; // x7
  struct System_Int32_array *v120; // x8
  System_String_o *v121; // x24
  Il2CppObject *v122; // x0
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  System_String_o *v125; // x0
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  int32_t v128; // w24
  bool v129; // w19
  System_String_o *v130; // x24
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  __int64 v134; // x5
  __int64 v135; // x6
  __int64 v136; // x7
  Il2CppObject *v137; // x25
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  __int64 v141; // x5
  __int64 v142; // x6
  __int64 v143; // x7
  Il2CppObject *v144; // x0
  System_String_o *v145; // x0
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  System_String_o *v148; // x20
  __int64 v149; // x2
  __int64 v150; // x3
  __int64 v151; // x4
  __int64 v152; // x5
  __int64 v153; // x6
  __int64 v154; // x7
  Il2CppObject *v155; // x0
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  struct BattleRetryConfirmComponent_RetryConfirmItemStr_array *v158; // x8
  _QWORD *v159; // x10
  __int64 v160; // x9
  __int128 v161; // q0
  __int128 v162; // q1
  char *v163; // x8
  const MethodInfo_383BD24 *v164; // x2
  System_String_o *v165; // x19
  Il2CppObject *v166; // x0
  System_String_o *v167; // x0
  System_String_o *v168; // x19
  System_String_o *v169; // x0
  System_String_o *v170; // x19
  CommonUI_o *v171; // x20
  BattleRetryConfirmComponent___c_c *v172; // x8
  System_Action_o *_9__30_1; // x22
  System_String_o *v174; // x21
  Il2CppObject *v175; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v176; // x0
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  QuestUseItemInfo_array *CachedAvailableQuestUseItems; // x20
  const MethodInfo *v181; // x2
  struct BattleRetryConfirmQuestUseItemButtons_o *QuestUseItemButtons; // x0
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  const MethodInfo *v185; // x1
  MapControl_QuestInfo_o *v186; // x20
  int32_t questId; // w22
  bool IsQuestClear_40324848; // w22
  TerminalPramsManager_c *v189; // x0
  int32_t QuestId_k__BackingField; // w23
  int32_t CampaignCostCalcValue; // w22
  int32_t v192; // w8
  int32_t ActConsumeCost; // w20
  System_String_o *CostValueColor; // x22
  __int64 v195; // x2
  __int64 v196; // x3
  __int64 v197; // x4
  __int64 v198; // x5
  __int64 v199; // x6
  __int64 v200; // x7
  Il2CppObject *v201; // x0
  System_String_o *v202; // x0
  int32_t ThumbnailSpritePath_k__BackingField_high; // w19
  Il2CppObject *v204; // x20
  System_String_o *v205; // x22
  __int64 v206; // x2
  __int64 v207; // x3
  __int64 v208; // x4
  __int64 v209; // x5
  __int64 v210; // x6
  __int64 v211; // x7
  Il2CppObject *v212; // x0
  Il2CppObject *v213; // x22
  System_String_o *v214; // x0
  int32_t v215; // w2
  const MethodInfo *v216; // x3
  System_String_o *v217; // x0
  struct ListViewObject_o *v218; // x1
  int32_t v219; // w2
  const MethodInfo *v220; // x3
  System_String_o *v221; // x0
  int32_t v222; // w2
  const MethodInfo *v223; // x3
  System_String_o *v224; // x20
  __int64 v225; // x2
  __int64 v226; // x3
  __int64 v227; // x4
  __int64 v228; // x5
  __int64 v229; // x6
  __int64 v230; // x7
  Il2CppObject *v231; // x0
  int32_t v232; // w2
  const MethodInfo *v233; // x3
  char v234; // w20
  int32_t v235; // w23
  UnityEngine_Object_o *mainText; // x22
  UILabel_o *v237; // x22
  UnityEngine_Component_o *v238; // x0
  int32_t v239; // w1
  System_String_o *v240; // x0
  int32_t v241; // w2
  const MethodInfo *v242; // x3
  System_String_o *v243; // x0
  UnityEngine_Object_o *buttonRoot; // x20
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v245; // x0
  const MethodInfo *v246; // x4
  BattleRetryConfirmContents_o *v247; // x0
  int32_t v248; // w2
  const MethodInfo *v249; // x3
  const MethodInfo *v250; // x1
  System_Action_o *v251; // x20
  BattleRetryConfirmComponent_o *v252; // x0
  const MethodInfo *v253; // x2
  System_Collections_IEnumerator_o *v254; // x0
  struct BattleRetryConfirmContents_o *v255; // x1
  int32_t v256; // w2
  const MethodInfo *v257; // x3
  __int64 v258; // [xsp+48h] [xbp-1F8h]
  Il2CppObject *v259; // [xsp+48h] [xbp-1F8h]
  __int64 v260; // [xsp+50h] [xbp-1F0h]
  __int64 v261; // [xsp+50h] [xbp-1F0h]
  BattleRetryConfirmComponent_o *v262; // [xsp+58h] [xbp-1E8h]
  BattleRetryConfirmComponent_o *v263; // [xsp+58h] [xbp-1E8h]
  int32_t v264; // [xsp+64h] [xbp-1DCh]
  UserGameEntity_o **p_userGameEntity; // [xsp+88h] [xbp-1B8h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v266; // [xsp+90h] [xbp-1B0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v267; // [xsp+C0h] [xbp-180h]
  int32_t fixedVal; // [xsp+ECh] [xbp-154h] BYREF
  CGThumbnailListItem_o v269; // [xsp+F0h] [xbp-150h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v270; // [xsp+180h] [xbp-C0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v271; // [xsp+1B0h] [xbp-90h] BYREF

  if ( (byte_4C4688A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&MapControl_QuestInfo_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_BattleRetryConfirmComponent___c__SetValues_b__30_0__);
    sub_1C37058(&Method_BattleRetryConfirmComponent___c__SetValues_b__30_1__);
    sub_1C37058(&Method_BattleRetryConfirmComponent___c__DisplayClass30_0__SetValues_b__2__);
    sub_1C37058(&BattleRetryConfirmComponent___c__DisplayClass30_0_TypeInfo);
    sub_1C37058(&BattleRetryConfirmComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_2863/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/);
    sub_1C37058(&StringLiteral_3798/*"CONSUME_TYPE_AP"*/);
    sub_1C37058(&StringLiteral_10883/*"QUEST_ITEM_COST_OVER"*/);
    sub_1C37058(&StringLiteral_2861/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/);
    sub_1C37058(&StringLiteral_2860/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_NONE_SPACE"*/);
    sub_1C37058(&StringLiteral_2862/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/);
    sub_1C37058(&StringLiteral_2027/*"AP_OVER_MAX_COLOR"*/);
    sub_1C37058(&StringLiteral_3799/*"CONSUME_TYPE_RP"*/);
    sub_1C37058(&StringLiteral_2867/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/);
    sub_1C37058(&StringLiteral_2866/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/);
    sub_1C37058(&StringLiteral_2854/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/);
    sub_1C37058(&StringLiteral_44/*"\n\n"*/);
    sub_1C37058(&StringLiteral_2864/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/);
    sub_1C37058(&StringLiteral_2856/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_2857/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_NONE_SPACE"*/);
    sub_1C37058(&StringLiteral_2865/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/);
    sub_1C37058(&StringLiteral_2858/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/);
    sub_1C37058(&StringLiteral_2859/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/);
    byte_4C4688A = 1;
  }
  HIDWORD(v269.fields._ThumbnailSpritePath_k__BackingField) = 0;
  memset(&v269.fields.isTermination, 0, 40);
  memset(&v269.fields.sortValue1, 0, 40);
  memset(&v269, 0, 40);
  fixedVal = 0;
  v3 = sub_1C372A4(BattleRetryConfirmComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v5, v6);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_210;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3CFE7 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3CFE7 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  p_userGameEntity = &this->fields.userGameEntity;
  if ( !MasterData_object )
    goto LABEL_210;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                (const MethodInfo_33A10A0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_210;
  v9 = (QuestEntity_o *)Instance;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0, 0);
  HIDWORD(v269.fields._ThumbnailSpritePath_k__BackingField) = 0;
  memset(&v269.fields.isTermination, 0, 40);
  v11 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_1C372A4(System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v11,
    (const MethodInfo_383B400 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  v12 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v12, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"CONSUME_TYPE_AP"*/, 0);
  switch ( QuestEntity__GetConsumeType(v9, 0) )
  {
    case 1:
      v16 = v9;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"CONSUME_TYPE_AP"*/, 0);
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v13 = (Il2CppObject *)Instance;
      Instance = (DataManager_o *)UserGameEntity__getAct(*p_userGameEntity, 0);
      HIDWORD(v269.fields._ThumbnailSpritePath_k__BackingField) = (_DWORD)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      actMax = (*p_userGameEntity)->fields.actMax;
      goto LABEL_30;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3799/*"CONSUME_TYPE_RP"*/, 0);
      v16 = v9;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v13 = (Il2CppObject *)Instance;
      Instance = (DataManager_o *)UserGameEntity__getRp(*p_userGameEntity, 0);
      HIDWORD(v269.fields._ThumbnailSpritePath_k__BackingField) = (_DWORD)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      if ( !byte_4C3FBF5 )
      {
        sub_1C37058(&BalanceConfig_TypeInfo);
        byte_4C3FBF5 = 1;
      }
      v18 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v18 = BalanceConfig_TypeInfo;
      }
      actMax = v18->static_fields->UerGameRpMax;
LABEL_30:
      v264 = actMax;
      goto LABEL_151;
    case 3:
      v260 = v3;
      v262 = this;
      *(_QWORD *)&v269.fields.isTermination = StringLiteral_1/*""*/;
      v258 = StringLiteral_1/*""*/;
      sub_1C36FFC((CGThumbnailListItem_o *)&v269.fields.isTermination, StringLiteral_1/*""*/, v14, v15);
      *(_QWORD *)&v269.fields.basePosition.fields.y = StringLiteral_1/*""*/;
      sub_1C36FFC((CGThumbnailListItem_o *)&v269.fields.basePosition.fields.y, StringLiteral_1/*""*/, v19, v20);
      if ( !ItemConsumeEntity )
        goto LABEL_76;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v21 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v22 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_76;
      v23 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C3CD62 )
        {
          sub_1C37058(&NetworkManager_TypeInfo);
          byte_4C3CD62 = 1;
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
        if ( v23 >= LODWORD(itemIds->max_length) )
          goto LABEL_211;
        if ( !v22 )
          goto LABEL_210;
        Instance = (DataManager_o *)UserItemMaster__GetEntity(
                                      (UserItemMaster_o *)v22,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      itemIds->m_Items[v23],
                                      0);
        v25 = ItemConsumeEntity->fields.itemIds;
        if ( !v25 )
          goto LABEL_210;
        if ( v23 >= LODWORD(v25->max_length) )
          goto LABEL_211;
        if ( !v21 )
          goto LABEL_210;
        v26 = Instance;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v21,
                                      v25->m_Items[v23],
                                      (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_210;
        v27 = (ItemEntity_o *)Instance;
        if ( LODWORD(Instance->fields.lookup) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_210;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v26 )
        {
          Instance = (DataManager_o *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0);
          qp = 0;
          if ( ((unsigned __int8)Instance & 1) != 0 )
            qp = SHIDWORD(v26->fields.m_CancellationTokenSource);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_210;
        if ( v23 >= LODWORD(nums->max_length) )
          goto LABEL_211;
        if ( qp < nums->m_Items[v23] )
        {
          Instance = (DataManager_o *)System_String__Concat_63561656(
                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                        v27->fields.name,
                                        0);
          if ( !v12 )
            goto LABEL_210;
          System_Text_StringBuilder__Append_63646720(v12, (System_String_o *)Instance, 0);
        }
        memset(&v269.fields.sortValue1, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v30 = LocalizationManager__Get((System_String_o *)StringLiteral_2862/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0);
        v269.fields.sortValue1 = (int64_t)System_String__Format(v30, (Il2CppObject *)v27->fields.name, 0);
        sub_1C36FFC((CGThumbnailListItem_o *)&v269.fields.sortValue1, v269.fields.sortValue1, v31, v32);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2863/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0);
        v39 = ItemConsumeEntity->fields.nums;
        if ( !v39 )
          goto LABEL_210;
        if ( v23 >= LODWORD(v39->max_length) )
          goto LABEL_211;
        v40 = (System_String_o *)Instance;
        LODWORD(v271.fields.useName) = v39->m_Items[v23];
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v271, v33, v34, v35, v36, v37, v38);
        v269.fields.sortStr1 = System_String__Format(v40, v41, 0);
        sub_1C36FFC((CGThumbnailListItem_o *)&v269.fields.sortStr1, (int32_t)v269.fields.sortStr1, v42, v43);
        v44 = LocalizationManager__Get((System_String_o *)StringLiteral_2865/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0);
        v269.fields.sortValue1B = (int64_t)System_String__Format(v44, (Il2CppObject *)v27->fields.name, 0);
        sub_1C36FFC((CGThumbnailListItem_o *)&v269.fields.sortValue1B, v269.fields.sortValue1B, v45, v46);
        MaxNum = ItemEntity__GetMaxNum(v27, 0);
        v48 = MaxNum > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( MaxNum < 1 )
        {
          v67 = LocalizationManager__Get((System_String_o *)StringLiteral_2866/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0);
          v271.fields.useName = (struct System_String_o *)qp;
          v74 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v271, v68, v69, v70, v71, v72, v73);
          v64 = System_String__Format(v67, v74, 0);
        }
        else
        {
          v49 = LocalizationManager__Get((System_String_o *)StringLiteral_2867/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0);
          v271.fields.useName = (struct System_String_o *)qp;
          v56 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v271, v50, v51, v52, v53, v54, v55);
          LODWORD(v270.fields.useName) = ItemEntity__GetMaxNum(v27, 0);
          v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v270, v57, v58, v59, v60, v61, v62);
          v64 = System_String__Format_63602948(v49, v56, v63, 0);
        }
        v269.fields.sortValue2 = (int64_t)v64;
        sub_1C36FFC((CGThumbnailListItem_o *)&v269.fields.sortValue2, (int32_t)v64, v65, v66);
        LOBYTE(v269.fields.sortValue2B) = v48;
        v267 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v269.fields.sortValue1;
        if ( !v11 )
          goto LABEL_210;
        v270 = v267;
        items = v11->fields._items;
        v78 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_210;
        size = v11->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v83 = *(const MethodInfo_383BD24 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL);
          v271 = v270;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            v11,
            &v271,
            v83);
        }
        else
        {
          v11->fields._size = size + 1;
          v80 = *(_OWORD *)&v270.fields.useName;
          v81 = *(_OWORD *)&v270.fields.possessionName;
          v82 = (char *)items + 40 * size;
          *((_QWORD *)v82 + 8) = *(_QWORD *)&v270.fields.isIndividualLimit;
          *((_OWORD *)v82 + 2) = v80;
          *((_OWORD *)v82 + 3) = v81;
          sub_1C36FFC((CGThumbnailListItem_o *)(v82 + 32), 0, v75, v76);
        }
        Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v23, 0);
      }
      while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_76:
      if ( !v12 )
        goto LABEL_210;
      v3 = v260;
      this = v262;
      v16 = v9;
      if ( System_Text_StringBuilder__get_Length(v12, 0) < 1 )
      {
        v13 = (Il2CppObject *)v258;
        v264 = 0;
LABEL_151:
        Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          LOBYTE(Instance->fields.nowLoadCount) = 0;
          Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( Instance )
          {
            PartyOrganizationUtility__CacheQuestUseItems((PartyOrganizationUtility_o *)Instance, 0);
            Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( Instance )
            {
              CachedAvailableQuestUseItems = PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
                                               (PartyOrganizationUtility_o *)Instance,
                                               0);
              QuestUseItemButtons = BattleRetryConfirmComponent__CreateQuestUseItemButtons(
                                      this,
                                      CachedAvailableQuestUseItems,
                                      v181);
              this->fields.currentQuestUseItemButtons = QuestUseItemButtons;
              sub_1C36FFC(
                (CGThumbnailListItem_o *)&this->fields.currentQuestUseItemButtons,
                (int32_t)QuestUseItemButtons,
                v183,
                v184);
              if ( CachedAvailableQuestUseItems )
              {
                if ( v3 )
                {
                  *(_BYTE *)(v3 + 16) = LODWORD(CachedAvailableQuestUseItems->max_length) != 0;
                  if ( QuestEntity__GetConsumeType(v16, 0) == 1
                    || QuestEntity__GetConsumeType(v16, 0) == 2
                    || QuestEntity__GetConsumeType(v16, 0) == 4 )
                  {
                    v186 = (MapControl_QuestInfo_o *)sub_1C372A4(MapControl_QuestInfo_TypeInfo);
                    MapControl_QuestInfo___ctor(v186, 0);
                    if ( !v186 )
                      goto LABEL_210;
                    MapControl_QuestInfo__SetTerminalParamsValue(v186, 0);
                    questId = v186->fields.questId;
                    if ( !CondType_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    fixedVal = -1;
                    IsQuestClear_40324848 = CondType__IsQuestClear_40324848(questId, -1, 0, 0);
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    if ( !byte_4C3CFE7 )
                    {
                      sub_1C37058(&TerminalPramsManager_TypeInfo);
                      byte_4C3CFE7 = 1;
                    }
                    v189 = TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      v189 = TerminalPramsManager_TypeInfo;
                    }
                    QuestId_k__BackingField = v189->static_fields->_QuestId_k__BackingField;
                    if ( !byte_4C3CFE6 )
                    {
                      sub_1C37058(&TerminalPramsManager_TypeInfo);
                      v189 = TerminalPramsManager_TypeInfo;
                      byte_4C3CFE6 = 1;
                    }
                    if ( !v189->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v189);
                      v189 = TerminalPramsManager_TypeInfo;
                    }
                    CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                                              v16,
                                              QuestId_k__BackingField,
                                              v189->static_fields->_PhaseCnt_k__BackingField,
                                              !IsQuestClear_40324848,
                                              &fixedVal,
                                              0);
                    Instance = (DataManager_o *)MapControl_QuestInfo__GetMine(v186, 0);
                    if ( !Instance )
                      goto LABEL_210;
                    QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0);
                    v192 = fixedVal;
                    v186->fields.costCalcVal = CampaignCostCalcValue;
                    v186->fields._fixedCostVal_k__BackingField = v192;
                    ActConsumeCost = MapControl_QuestInfo__GetActConsumeCost(v186, 0);
                    CostValueColor = QuestEntity__GetCostValueColor(
                                       CampaignCostCalcValue,
                                       (ActConsumeCost > v264)
                                     | (unsigned __int8)(ActConsumeCost > SHIDWORD(v269.fields._ThumbnailSpritePath_k__BackingField)),
                                       0);
                    LODWORD(v271.fields.useName) = ActConsumeCost;
                    v201 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v271, v195, v196, v197, v198, v199, v200);
                    v202 = System_String__Format(CostValueColor, v201, 0);
                    ThumbnailSpritePath_k__BackingField_high = HIDWORD(v269.fields._ThumbnailSpritePath_k__BackingField);
                    v204 = (Il2CppObject *)v202;
                    Instance = (DataManager_o *)System_Int32__ToString(
                                                  (int32_t)&v269.fields._ThumbnailSpritePath_k__BackingField + 4,
                                                  0);
                    if ( v264 < ThumbnailSpritePath_k__BackingField_high )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v205 = LocalizationManager__Get((System_String_o *)StringLiteral_2027/*"AP_OVER_MAX_COLOR"*/, 0);
                      LODWORD(v271.fields.useName) = HIDWORD(v269.fields._ThumbnailSpritePath_k__BackingField);
                      v212 = (Il2CppObject *)j_il2cpp_value_box_0(
                                               int_TypeInfo,
                                               &v271,
                                               v206,
                                               v207,
                                               v208,
                                               v209,
                                               v210,
                                               v211);
                      Instance = (DataManager_o *)System_String__Format(v205, v212, 0);
                    }
                    v213 = (Il2CppObject *)Instance;
                    if ( *(_BYTE *)(v3 + 16) )
                      goto LABEL_214;
                    if ( !v11 )
                      goto LABEL_210;
                    if ( v11->fields._size )
                    {
LABEL_214:
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v214 = LocalizationManager__Get((System_String_o *)StringLiteral_2859/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0);
                      *(_QWORD *)&v269.fields.isTermination = System_String__Format(v214, v13, 0);
                      sub_1C36FFC(
                        (CGThumbnailListItem_o *)&v269.fields.isTermination,
                        *(int32_t *)&v269.fields.isTermination,
                        v215,
                        v216);
                      v217 = LocalizationManager__Get((System_String_o *)StringLiteral_2856/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0);
                      v218 = (struct ListViewObject_o *)System_String__Format(v217, v13, 0);
                    }
                    else
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v240 = LocalizationManager__Get((System_String_o *)StringLiteral_2860/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_NONE_SPACE"*/, 0);
                      *(_QWORD *)&v269.fields.isTermination = System_String__Format(v240, v13, 0);
                      sub_1C36FFC(
                        (CGThumbnailListItem_o *)&v269.fields.isTermination,
                        *(int32_t *)&v269.fields.isTermination,
                        v241,
                        v242);
                      v243 = LocalizationManager__Get((System_String_o *)StringLiteral_2857/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_NONE_SPACE"*/, 0);
                      v218 = (struct ListViewObject_o *)System_String__Format(v243, v13, 0);
                    }
                    v269.fields.viewObject = v218;
                    sub_1C36FFC((CGThumbnailListItem_o *)&v269.fields.viewObject, (int32_t)v218, v219, v220);
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v221 = LocalizationManager__Get((System_String_o *)StringLiteral_2861/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0);
                    *(_QWORD *)&v269.fields.basePosition.fields.y = System_String__Format(v221, v204, 0);
                    sub_1C36FFC(
                      (CGThumbnailListItem_o *)&v269.fields.basePosition.fields.y,
                      SLODWORD(v269.fields.basePosition.fields.y),
                      v222,
                      v223);
                    v224 = LocalizationManager__Get((System_String_o *)StringLiteral_2858/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0);
                    LODWORD(v271.fields.useName) = v264;
                    v231 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v271, v225, v226, v227, v228, v229, v230);
                    *(_QWORD *)&v269.fields._Id_k__BackingField = System_String__Format_63602948(v224, v213, v231, 0);
                    sub_1C36FFC(
                      (CGThumbnailListItem_o *)&v269.fields._Id_k__BackingField,
                      v269.fields._Id_k__BackingField,
                      v232,
                      v233);
                  }
                  BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v185);
                  Instance = (DataManager_o *)System_String__IsNullOrEmpty(
                                                *(System_String_o **)&v269.fields.isTermination,
                                                0);
                  if ( !v11 )
                    goto LABEL_210;
                  v234 = (char)Instance;
                  v235 = v11->fields._size;
                  mainText = (UnityEngine_Object_o *)this->fields.mainText;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(mainText, 0, 0) )
                  {
                    v237 = this->fields.mainText;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2854/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/, 0);
                    if ( !v237 )
                      goto LABEL_210;
                    UILabel__set_text(v237, (System_String_o *)Instance, 0);
                    if ( !*(_BYTE *)(v3 + 16) )
                    {
                      v238 = (UnityEngine_Component_o *)this->fields.mainText;
                      if ( v235 + ((v234 & 1) == 0) == 3 )
                      {
                        ComponentHelper__SetLocalPositionY(v238, 179.0, 0);
                        Instance = (DataManager_o *)this->fields.mainText;
                        if ( !Instance )
                          goto LABEL_210;
                        v239 = 22;
                      }
                      else
                      {
                        ComponentHelper__SetLocalPositionY(v238, 178.0, 0);
                        Instance = (DataManager_o *)this->fields.mainText;
                        if ( !Instance )
                          goto LABEL_210;
                        v239 = 24;
                      }
                      UILabel__set_fontSize((UILabel_o *)Instance, v239, 0);
                    }
                  }
                  buttonRoot = (UnityEngine_Object_o *)this->fields.buttonRoot;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(buttonRoot, 0, 0) && !*(_BYTE *)(v3 + 16) )
                    GameObjectExtensions__SetLocalPositionY(this->fields.buttonRoot, -164.0, 0);
                  v266 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v269.fields.isTermination;
                  v245 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                           v11,
                           (const MethodInfo_383DD34 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
                  v247 = BattleRetryConfirmComponent__CreateContents(this, &v266, v245, *(_BYTE *)(v3 + 16), v246);
                  *(_QWORD *)(v3 + 24) = v247;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v247, v248, v249);
                  Instance = *(DataManager_o **)(v3 + 24);
                  if ( Instance )
                  {
                    BattleRetryConfirmContents__Initialized((BattleRetryConfirmContents_o *)Instance, v250);
                    v251 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                    System_Action___ctor(
                      v251,
                      (Il2CppObject *)v3,
                      Method_BattleRetryConfirmComponent___c__DisplayClass30_0__SetValues_b__2__,
                      0);
                    v254 = BattleRetryConfirmComponent__WaitOneFrame(v252, v251, v253);
                    UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v254, 0);
                    v255 = *(struct BattleRetryConfirmContents_o **)(v3 + 24);
                    this->fields.currentContents = v255;
                    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.currentContents, (int32_t)v255, v256, v257);
                    return 1;
                  }
                }
              }
            }
          }
        }
LABEL_210:
        sub_1C372B4(Instance);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v84 = LocalizationManager__Get((System_String_o *)StringLiteral_10883/*"QUEST_ITEM_COST_OVER"*/, 0);
      v85 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
                              v12,
                              v12->klass->vtable._3_ToString.method);
      v86 = System_String__Format(v84, v85, 0);
      v87 = System_String__Concat_63561656(v86, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
      v88 = LocalizationManager__Get((System_String_o *)StringLiteral_2864/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0);
      v89 = System_String__Concat_63561656(v87, v88, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v90 = (CommonUI_o *)Instance;
      v91 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v91 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      v92 = (System_String_o *)StringLiteral_1/*""*/;
      _9__30_0 = v91->static_fields->__9__30_0;
      if ( !_9__30_0 )
      {
        if ( !v91->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v91);
          v91 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v94 = (Il2CppObject *)v91->static_fields->__9;
        _9__30_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(_9__30_0, v94, Method_BattleRetryConfirmComponent___c__SetValues_b__30_0__, 0);
        static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        static_fields->__9__30_0 = _9__30_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v96, v97);
      }
      if ( !v90 )
        goto LABEL_210;
      CommonUI__OpenNotificationDialog(v90, v92, v89, _9__30_0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
      return 0;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"CONSUME_TYPE_AP"*/, 0);
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v259 = (Il2CppObject *)Instance;
      v261 = v3;
      v263 = this;
      Instance = (DataManager_o *)UserGameEntity__getAct(*p_userGameEntity, 0);
      HIDWORD(v269.fields._ThumbnailSpritePath_k__BackingField) = (_DWORD)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v264 = (*p_userGameEntity)->fields.actMax;
      *(_QWORD *)&v269.fields.isTermination = StringLiteral_1/*""*/;
      sub_1C36FFC((CGThumbnailListItem_o *)&v269.fields.isTermination, StringLiteral_1/*""*/, v98, v99);
      *(_QWORD *)&v269.fields.basePosition.fields.y = StringLiteral_1/*""*/;
      sub_1C36FFC((CGThumbnailListItem_o *)&v269.fields.basePosition.fields.y, StringLiteral_1/*""*/, v100, v101);
      if ( !ItemConsumeEntity )
        goto LABEL_137;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v102 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v103 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_137;
      v104 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C3CD62 )
        {
          sub_1C37058(&NetworkManager_TypeInfo);
          byte_4C3CD62 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        v105 = ItemConsumeEntity->fields.itemIds;
        if ( !v105 )
          goto LABEL_210;
        if ( v104 >= LODWORD(v105->max_length) )
          goto LABEL_211;
        if ( !v103 )
          goto LABEL_210;
        Instance = (DataManager_o *)UserItemMaster__GetEntity(
                                      (UserItemMaster_o *)v103,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      v105->m_Items[v104],
                                      0);
        v106 = ItemConsumeEntity->fields.itemIds;
        if ( !v106 )
          goto LABEL_210;
        if ( v104 >= LODWORD(v106->max_length) )
          goto LABEL_211;
        if ( !v102 )
          goto LABEL_210;
        v107 = Instance;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v102,
                                      v106->m_Items[v104],
                                      (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_210;
        v108 = (ItemEntity_o *)Instance;
        if ( LODWORD(Instance->fields.lookup) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_210;
          m_CancellationTokenSource_high = (*p_userGameEntity)->fields.qp;
        }
        else if ( v107 )
        {
          Instance = (DataManager_o *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0);
          m_CancellationTokenSource_high = 0;
          if ( ((unsigned __int8)Instance & 1) != 0 )
            m_CancellationTokenSource_high = SHIDWORD(v107->fields.m_CancellationTokenSource);
        }
        else
        {
          m_CancellationTokenSource_high = 0;
        }
        v110 = ItemConsumeEntity->fields.nums;
        if ( !v110 )
          goto LABEL_210;
        if ( v104 >= LODWORD(v110->max_length) )
          goto LABEL_211;
        if ( m_CancellationTokenSource_high < v110->m_Items[v104] )
        {
          Instance = (DataManager_o *)System_String__Concat_63561656(
                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                        v108->fields.name,
                                        0);
          if ( !v12 )
            goto LABEL_210;
          System_Text_StringBuilder__Append_63646720(v12, (System_String_o *)Instance, 0);
        }
        memset(&v269, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v111 = LocalizationManager__Get((System_String_o *)StringLiteral_2862/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0);
        v269.klass = (CGThumbnailListItem_c *)System_String__Format(v111, (Il2CppObject *)v108->fields.name, 0);
        sub_1C36FFC(&v269, (int32_t)v269.klass, v112, v113);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2863/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0);
        v120 = ItemConsumeEntity->fields.nums;
        if ( !v120 )
          goto LABEL_210;
        if ( v104 >= LODWORD(v120->max_length) )
LABEL_211:
          sub_1C372BC(Instance);
        v121 = (System_String_o *)Instance;
        LODWORD(v271.fields.useName) = v120->m_Items[v104];
        v122 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v271, v114, v115, v116, v117, v118, v119);
        v269.monitor = System_String__Format(v121, v122, 0);
        sub_1C36FFC((CGThumbnailListItem_o *)&v269.monitor, (int32_t)v269.monitor, v123, v124);
        v125 = LocalizationManager__Get((System_String_o *)StringLiteral_2865/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0);
        *(_QWORD *)&v269.fields.selectNum = System_String__Format(v125, (Il2CppObject *)v108->fields.name, 0);
        sub_1C36FFC((CGThumbnailListItem_o *)&v269.fields, v269.fields.selectNum, v126, v127);
        v128 = ItemEntity__GetMaxNum(v108, 0);
        v129 = v128 > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v128 < 1 )
        {
          v148 = LocalizationManager__Get((System_String_o *)StringLiteral_2866/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0);
          v271.fields.useName = (struct System_String_o *)m_CancellationTokenSource_high;
          v155 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v271, v149, v150, v151, v152, v153, v154);
          v145 = System_String__Format(v148, v155, 0);
        }
        else
        {
          v130 = LocalizationManager__Get((System_String_o *)StringLiteral_2867/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0);
          v271.fields.useName = (struct System_String_o *)m_CancellationTokenSource_high;
          v137 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v271, v131, v132, v133, v134, v135, v136);
          LODWORD(v270.fields.useName) = ItemEntity__GetMaxNum(v108, 0);
          v144 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v270, v138, v139, v140, v141, v142, v143);
          v145 = System_String__Format_63602948(v130, v137, v144, 0);
        }
        *(_QWORD *)&v269.fields.sortIndex = v145;
        sub_1C36FFC((CGThumbnailListItem_o *)&v269.fields.sortIndex, (int32_t)v145, v146, v147);
        LOBYTE(v269.fields.sortValue0) = v129;
        *(_OWORD *)&v267.fields.useName = *(_OWORD *)&v269.klass;
        *(_OWORD *)&v267.fields.possessionName = *(_OWORD *)&v269.fields.selectNum;
        *(_QWORD *)&v267.fields.isIndividualLimit = v269.fields.sortValue0;
        if ( !v11 )
          goto LABEL_210;
        v270 = v267;
        v158 = v11->fields._items;
        v159 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++v11->fields._version;
        if ( !v158 )
          goto LABEL_210;
        v160 = v11->fields._size;
        if ( (unsigned int)v160 >= LODWORD(v158->max_length) )
        {
          v164 = *(const MethodInfo_383BD24 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL);
          v271 = v270;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            v11,
            &v271,
            v164);
        }
        else
        {
          v11->fields._size = v160 + 1;
          v161 = *(_OWORD *)&v270.fields.useName;
          v162 = *(_OWORD *)&v270.fields.possessionName;
          v163 = (char *)v158 + 40 * v160;
          *((_QWORD *)v163 + 8) = *(_QWORD *)&v270.fields.isIndividualLimit;
          *((_OWORD *)v163 + 2) = v161;
          *((_OWORD *)v163 + 3) = v162;
          sub_1C36FFC((CGThumbnailListItem_o *)(v163 + 32), 0, v156, v157);
        }
        Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v104, 0);
      }
      while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_137:
      if ( !v12 )
        goto LABEL_210;
      v3 = v261;
      this = v263;
      v13 = v259;
      v16 = v9;
      if ( System_Text_StringBuilder__get_Length(v12, 0) < 1 )
        goto LABEL_151;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v165 = LocalizationManager__Get((System_String_o *)StringLiteral_10883/*"QUEST_ITEM_COST_OVER"*/, 0);
      v166 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v12->klass->vtable._3_ToString.methodPtr)(
                               v12,
                               v12->klass->vtable._3_ToString.method);
      v167 = System_String__Format(v165, v166, 0);
      v168 = System_String__Concat_63561656(v167, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
      v169 = LocalizationManager__Get((System_String_o *)StringLiteral_2864/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0);
      v170 = System_String__Concat_63561656(v168, v169, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v171 = (CommonUI_o *)Instance;
      v172 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v172 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      _9__30_1 = v172->static_fields->__9__30_1;
      v174 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__30_1 )
      {
        if ( !v172->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v172);
          v172 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v175 = (Il2CppObject *)v172->static_fields->__9;
        _9__30_1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(_9__30_1, v175, Method_BattleRetryConfirmComponent___c__SetValues_b__30_1__, 0);
        v176 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v176->__9__30_1 = _9__30_1;
        sub_1C36FFC((CGThumbnailListItem_o *)&v176->__9__30_1, (int32_t)_9__30_1, v177, v178);
      }
      if ( !v171 )
        goto LABEL_210;
      CommonUI__OpenNotificationDialog(v171, v174, v170, _9__30_1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
      return 0;
    default:
      v264 = 0;
      v16 = v9;
      goto LABEL_151;
  }
}


System_Collections_IEnumerator_o *BattleRetryConfirmComponent__WaitOneFrame(
        BattleRetryConfirmComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C46890 & 1) == 0 )
  {
    sub_1C37058(&BattleRetryConfirmComponent__WaitOneFrame_d__36_TypeInfo);
    byte_4C46890 = 1;
  }
  v4 = sub_1C372A4(BattleRetryConfirmComponent__WaitOneFrame_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = action;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 32), (int32_t)action, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void BattleRetryConfirmComponent___BaseDialogOpen_b__41_0(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


void BattleRetryConfirmComponent__WaitOneFrame_d__36___ctor(
        BattleRetryConfirmComponent__WaitOneFrame_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleRetryConfirmComponent__WaitOneFrame_d__36__MoveNext(
        BattleRetryConfirmComponent__WaitOneFrame_d__36_o *this,
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
    ActionExtensions__Call(action, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *BattleRetryConfirmComponent__WaitOneFrame_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRetryConfirmComponent__WaitOneFrame_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleRetryConfirmComponent__WaitOneFrame_d__36__System_Collections_IEnumerator_Reset(
        BattleRetryConfirmComponent__WaitOneFrame_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__36_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattleRetryConfirmComponent__WaitOneFrame_d__36__System_Collections_IEnumerator_get_Current(
        BattleRetryConfirmComponent__WaitOneFrame_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleRetryConfirmComponent__WaitOneFrame_d__36__System_IDisposable_Dispose(
        BattleRetryConfirmComponent__WaitOneFrame_d__36_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleRetryConfirmComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C46897 & 1) == 0 )
  {
    sub_1C37058(&BattleRetryConfirmComponent___c_TypeInfo);
    byte_4C46897 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleRetryConfirmComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleRetryConfirmComponent___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleRetryConfirmComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleRetryConfirmComponent___c___ctor(BattleRetryConfirmComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRetryConfirmComponent___c___OnClickQuestUseItemButton_b__33_0(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C4689A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__);
    byte_4C4689A = 1;
  }
  v2 = Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__;
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C37070(Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C3703C(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void BattleRetryConfirmComponent___c___SetValues_b__30_0(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C46898 & 1) == 0 )
  {
    sub_1C37058(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C46898 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_30CF6E4 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void BattleRetryConfirmComponent___c___SetValues_b__30_1(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C46899 & 1) == 0 )
  {
    sub_1C37058(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C46899 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_30CF6E4 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void BattleRetryConfirmComponent___c__DisplayClass30_0___ctor(
        BattleRetryConfirmComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRetryConfirmComponent___c__DisplayClass30_0___SetValues_b__2(
        BattleRetryConfirmComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.contents )
    sub_1C372B4(this);
  BattleRetryConfirmContents__SetCondensedScalePossessionAmount(this->fields.contents, this->fields.isDispUseItemUI, v2);
}