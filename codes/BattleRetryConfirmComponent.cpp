void BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CB9C5E & 1) == 0 )
  {
    sub_1C6BA08(&BaseDialog_TypeInfo);
    byte_4CB9C5E = 1;
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

  if ( (byte_4CB9C5A & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BattleRetryConfirmComponent__BaseDialogOpen_b__41_0__);
    byte_4CB9C5A = 1;
  }
  v3 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_BattleRetryConfirmComponent__BaseDialogOpen_b__41_0__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v3, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleRetryConfirmComponent__BoostSupportRequestDialogCallback(
        BattleRetryConfirmComponent_o *this,
        int32_t result,
        int32_t boostId,
        const MethodInfo *method)
{
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x2
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB9C5C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB9C5C = 1;
  }
  memset(&v12, 0, sizeof(v12));
  switch ( result )
  {
    case 2:
      battleResultComponent = this->fields.battleResultComponent;
      if ( !battleResultComponent )
        goto LABEL_21;
      v9 = boostId;
      goto LABEL_15;
    case 1:
      battleResultComponent = this->fields.battleResultComponent;
      if ( !battleResultComponent )
        goto LABEL_21;
      v9 = 0;
LABEL_15:
      BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, v9, 0);
      break;
    case 0:
      battleResultComponent = (BattleResultComponent_o *)this->fields.buttons;
      if ( !battleResultComponent )
        goto LABEL_21;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v12,
        (System_Collections_Generic_List_object__o *)battleResultComponent,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v12,
                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v12.fields._current )
          sub_1C6BC60(0, v8);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12.fields._current, 1, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v12,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
      if ( currentQuestUseItemButtons )
        BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 1, v10);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_21:
    sub_1C6BC60(battleResultComponent, *(_QWORD *)&result);
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
    sub_1C6BC60(cancelLabel, method);
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
      sub_1C6BC60(0, method);
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
  __int64 v12; // x1
  char v13; // w24
  System_Collections_Generic_IEnumerable_TSource__o *appended; // x0
  int max_length; // w8
  bool v16; // zf
  __int64 v17; // x8
  __int64 v18; // x9
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v20; // x2
  BattleRetryConfirmContents_o *v21; // x20
  __int128 v23; // [xsp+10h] [xbp-90h]
  __int64 v24; // [xsp+20h] [xbp-80h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v25; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4CB9C56 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Append_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_BattleRetryConfirmContents___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB9C56 = 1;
  }
  v9 = 200;
  if ( isDispUseItemUI )
    v9 = 168;
  v10 = *(Il2CppObject **)((char *)&this->klass + v9);
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)System_String__op_Inequality(
                                                                      costPoint->fields.useName,
                                                                      (System_String_o *)StringLiteral_1/*""*/,
                                                                      0);
  v13 = (char)window;
  if ( ((unsigned __int8)window & 1) != 0 )
  {
    v24 = *(_QWORD *)&costPoint->fields.isIndividualLimit;
    v23 = *(_OWORD *)&costPoint->fields.possessionName;
    *(_OWORD *)&v25.fields.useName = *(_OWORD *)&costPoint->fields.useName;
    *(_OWORD *)&v25.fields.possessionName = v23;
    *(_QWORD *)&v25.fields.isIndividualLimit = v24;
    appended = System_Linq_Enumerable__Append_BattleRetryConfirmComponent_RetryConfirmItemStr_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)items,
                 &v25,
                 (const MethodInfo_31496AC *)Method_System_Linq_Enumerable_Append_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    window = System_Linq_Enumerable__ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr_(
               appended,
               (const MethodInfo_317B57C *)Method_System_Linq_Enumerable_ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    items = window;
  }
  this->fields.isNotCentering = 0;
  if ( !items )
    goto LABEL_23;
  max_length = items->max_length;
  if ( max_length != 1 || (v13 & 1) == 0 )
  {
    if ( max_length == 1 )
    {
      v16 = !isDispUseItemUI;
      v17 = 208;
      v18 = 176;
    }
    else
    {
      v16 = !isDispUseItemUI;
      if ( max_length == 2 )
      {
        v17 = 216;
        v18 = 184;
      }
      else
      {
        v17 = 224;
        v18 = 192;
      }
    }
    if ( !v16 )
      v17 = v18;
    v10 = *(Il2CppObject **)((char *)&this->klass + v17);
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
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)UnityEngine_Object__Instantiate_object__52199488(
                                                                      v10,
                                                                      transform,
                                                                      (const MethodInfo_31C8040 *)Method_UnityEngine_Object_Instantiate_BattleRetryConfirmContents___);
  if ( !window )
LABEL_23:
    sub_1C6BC60(window, v12);
  v21 = (BattleRetryConfirmContents_o *)window;
  BattleRetryConfirmContents__SetCostValues((BattleRetryConfirmContents_o *)window, items, v20);
  return v21;
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
  if ( (byte_4CB9C57 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__TypeInfo);
    sub_1C6BA08(&Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    sub_1C6BA08(&System_Math_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_BattleRetryConfirmQuestUseItemButtons___);
    this = (BattleRetryConfirmComponent_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9C57 = 1;
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
  this = (BattleRetryConfirmComponent_o *)System_Math__Min_65488940(
                                            (int32_t)this,
                                            questUseItemButtonsPrefabs->max_length,
                                            0);
  v6 = v4->fields.questUseItemButtonsPrefabs;
  if ( !v6 )
    goto LABEL_17;
  v7 = (_DWORD)this - 1;
  if ( (unsigned int)((_DWORD)this - 1) >= LODWORD(v6->max_length) )
    sub_1C6BC68(this);
  this = (BattleRetryConfirmComponent_o *)v4->fields.window;
  if ( !this )
    goto LABEL_17;
  v8 = (Il2CppObject *)v6->m_Items[v7];
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__Instantiate_object__52199488(
          v8,
          transform,
          (const MethodInfo_31C8040 *)Method_UnityEngine_Object_Instantiate_BattleRetryConfirmQuestUseItemButtons___);
  v11 = (System_Action_object__object__o *)sub_1C6BC54(System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__TypeInfo);
  System_Action_object__object____ctor(
    v11,
    (Il2CppObject *)v4,
    (intptr_t)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__,
    0);
  if ( !v10 )
LABEL_17:
    sub_1C6BC60(this, itemInfos);
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
  intptr_t m_CachedPtr; // x8
  _QWORD *v14; // x9
  __int64 klass_low; // x10
  intptr_t v16; // x8
  __int64 v17; // x1
  UnityEngine_Object_o *mainText; // x20
  UILabel_o *v19; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *confirmLabel; // x20
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB9C59 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIButton__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIButton___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIButton__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_UIButton__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_2843/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/);
    sub_1C6BA08(&StringLiteral_2845/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C6BA08(&StringLiteral_2844/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/);
    byte_4CB9C59 = 1;
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
    v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_UIButton__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v5;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.buttons, (int32_t)v5, v6, v7);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_313285C *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
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
          sub_1C6BC68(root);
        root = (UnityEngine_GameObject_o *)*p_buttons;
        if ( !*p_buttons )
          break;
        method = (const MethodInfo *)*((_QWORD *)&v11[1].monitor + v12);
        m_CachedPtr = root->fields.m_CachedPtr;
        v14 = Method_System_Collections_Generic_List_UIButton__Add__;
        ++HIDWORD(root[1].klass);
        if ( !m_CachedPtr )
          break;
        klass_low = SLODWORD(root[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)root,
            (Il2CppObject *)method,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = m_CachedPtr + 8 * klass_low;
          LODWORD(root[1].klass) = klass_low + 1;
          *(_QWORD *)(v16 + 32) = method;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v16 + 32), (int32_t)method, v8, v9);
        }
        LODWORD(klass) = v11[1].klass;
        if ( (__int64)++v12 >= (int)klass )
          goto LABEL_16;
      }
LABEL_36:
      sub_1C6BC60(root, method);
    }
LABEL_16:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_36;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)root,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  for ( i = v22;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0) )
  {
    if ( !i.fields._current )
      sub_1C6BC60(0, v17);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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
      root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2845/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0);
      if ( !v19 )
        goto LABEL_36;
      UILabel__set_text(v19, (System_String_o *)root, 0);
    }
    cancelLabel = this->fields.cancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2843/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0);
    if ( !cancelLabel )
      goto LABEL_36;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2844/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0);
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
  __int64 v11; // x1
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CB9C5B & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__);
    sub_1C6BA08(&Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
    sub_1C6BA08(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB9C5B = 1;
  }
  v3 = Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__;
  memset(&v15, 0, sizeof(v15));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB02AF )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB02AF = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4CB02AE )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4CB02AE = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v6->static_fields->_PhaseCnt_k__BackingField;
  v9 = (BoostFunctionUtility_CallbackFunc_o *)sub_1C6BC54(BoostFunctionUtility_CallbackFunc_TypeInfo);
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
    sub_1C6BC60(buttons, v11);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    buttons,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v15.fields._current )
      sub_1C6BC60(0, v12);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v15.fields._current, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
  if ( currentQuestUseItemButtons )
    BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, v13);
}


void BattleRetryConfirmComponent__OnClickCancel(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB9C53 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleRetryConfirmComponent_OnClickCancel__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    byte_4CB9C53 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.state )
  {
    v3 = Method_BattleRetryConfirmComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_BattleRetryConfirmComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent
      || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0),
          (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0) )
    {
      sub_1C6BC60(battleResultComponent, v5);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1C6BC60(0, v7);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
    if ( currentQuestUseItemButtons )
      BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, v8);
  }
}


void BattleRetryConfirmComponent__OnClickConfirm(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB9C54 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BattleRetryConfirmComponent_OnClickConfirm__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    byte_4CB9C54 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.state )
  {
    v3 = Method_BattleRetryConfirmComponent_OnClickConfirm__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickConfirm__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_BattleRetryConfirmComponent_OnClickConfirm__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent
      || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0),
          (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0) )
    {
      sub_1C6BC60(battleResultComponent, v5);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1C6BC60(0, v7);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
    if ( currentQuestUseItemButtons )
      BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, v8);
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
  if ( (byte_4CB9C55 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C6BA08(&Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__);
    sub_1C6BA08(&BattleRetryConfirmComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_10242/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/);
    this = (BattleRetryConfirmComponent_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB9C55 = 1;
  }
  if ( !v6->fields.state )
  {
    if ( !info )
      goto LABEL_25;
    UseFlag = QuestUseItemInfo__GetUseFlag(info, 0);
    v8 = Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C6BA20(Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v8, v8[4]);
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
      this = (BattleRetryConfirmComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        PartyOrganizationUtility__SaveQuestUseItemUseState((PartyOrganizationUtility_o *)this, 0);
        return;
      }
LABEL_25:
      sub_1C6BC60(this, info);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10242/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0);
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
      _9__33_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(
        _9__33_0,
        v18,
        (intptr_t)Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__,
        0);
      static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
      static_fields->__9__33_0 = _9__33_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__33_0, (int32_t)_9__33_0, v20, v21);
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
    sub_1C6BC60(bgObj, opendFunc);
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
  __int64 v9; // x1
  BattleSetupInfo_o *v10; // x22
  UnityEngine_Object_o *boostSupportRequestLabel; // x20
  UILabel_o *v12; // x20
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Object_o *v15; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB9C5D & 1) == 0 )
  {
    sub_1C6BA08(&BattleSetupInfo_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_11137/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/);
    sub_1C6BA08(&StringLiteral_2842/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/);
    byte_4CB9C5D = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB065F )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB065F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !byte_4CB02AF )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4CB02AF = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v3->static_fields->_QuestId_k__BackingField;
  if ( !byte_4CB02AE )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4CB02AE = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v3->static_fields->_PhaseCnt_k__BackingField;
  v7 = (BattleSetupInfo_o *)sub_1C6BC54(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_53;
  v10 = BattleSetupInfo__ConvertBattleSetupInfo(
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v10 || !Master_object )
    goto LABEL_53;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          v10->fields.eventId,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_53;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_object )
      goto LABEL_53;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_object,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11137/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0) == 1 )
    {
      boostSupportRequestLabel = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(boostSupportRequestLabel, 0, 0) )
      {
        v12 = this->fields.boostSupportRequestLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_2842/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/,
                                                                        0);
        if ( !v12 )
          goto LABEL_53;
        UILabel__set_text(v12, (System_String_o *)Master_object, 0);
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
              v14 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0);
              TransformHelper__SetLocalPositionX(v14, this->fields.CONFIRM_BUTTON_POSITION_ON_THREE_X, 0);
              return;
            }
          }
        }
      }
LABEL_53:
      sub_1C6BC60(Master_object, v9);
    }
  }
  else
  {
LABEL_44:
    v15 = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0, 0) )
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
  const MethodInfo *v8; // x1
  Il2CppObject *MasterData_object; // x20
  QuestEntity_o *v10; // x22
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v12; // x21
  System_Text_StringBuilder_o *v13; // x26
  Il2CppObject *v14; // x29
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  QuestEntity_o *v17; // x27
  int32_t actMax; // w8
  BalanceConfig_c *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x28
  Il2CppObject *v23; // x29
  unsigned int v24; // w23
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v26; // x8
  DataManager_o *v27; // x24
  ItemEntity_o *v28; // x20
  int64_t qp; // x25
  struct System_Int32_array *nums; // x8
  System_String_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Int32_array *v34; // x8
  System_String_o *v35; // x24
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_String_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t MaxNum; // w24
  bool v43; // w19
  System_String_o *v44; // x24
  Il2CppObject *v45; // x25
  Il2CppObject *v46; // x0
  System_String_o *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_String_o *v50; // x20
  Il2CppObject *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct BattleRetryConfirmComponent_RetryConfirmItemStr_array *items; // x8
  _QWORD *v55; // x10
  __int64 size; // x9
  __int128 v57; // q0
  __int128 v58; // q1
  char *v59; // x8
  const MethodInfo_3899674 *v60; // x2
  System_String_o *v61; // x19
  Il2CppObject *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x19
  System_String_o *v65; // x0
  System_String_o *v66; // x19
  CommonUI_o *v67; // x20
  BattleRetryConfirmComponent___c_c *v68; // x8
  System_String_o *v69; // x21
  System_Action_o *_9__30_0; // x22
  Il2CppObject *v71; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  Il2CppObject *v79; // x28
  Il2CppObject *v80; // x29
  unsigned int v81; // w23
  struct System_Int32_array *v82; // x8
  struct System_Int32_array *v83; // x8
  DataManager_o *v84; // x24
  ItemEntity_o *v85; // x20
  int64_t m_CancellationTokenSource_high; // x25
  struct System_Int32_array *v87; // x8
  System_String_o *v88; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  struct System_Int32_array *v91; // x8
  System_String_o *v92; // x24
  Il2CppObject *v93; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  System_String_o *v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  int32_t v99; // w24
  bool v100; // w19
  System_String_o *v101; // x24
  Il2CppObject *v102; // x25
  Il2CppObject *v103; // x0
  System_String_o *v104; // x0
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  System_String_o *v107; // x20
  Il2CppObject *v108; // x0
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  struct BattleRetryConfirmComponent_RetryConfirmItemStr_array *v111; // x8
  _QWORD *v112; // x10
  __int64 v113; // x9
  __int128 v114; // q0
  __int128 v115; // q1
  char *v116; // x8
  const MethodInfo_3899674 *v117; // x2
  System_String_o *v118; // x19
  Il2CppObject *v119; // x0
  System_String_o *v120; // x0
  System_String_o *v121; // x19
  System_String_o *v122; // x0
  System_String_o *v123; // x19
  CommonUI_o *v124; // x20
  BattleRetryConfirmComponent___c_c *v125; // x8
  System_Action_o *_9__30_1; // x22
  System_String_o *v127; // x21
  Il2CppObject *v128; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v129; // x0
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  QuestUseItemInfo_array *CachedAvailableQuestUseItems; // x20
  const MethodInfo *v134; // x2
  struct BattleRetryConfirmQuestUseItemButtons_o *QuestUseItemButtons; // x0
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  const MethodInfo *v138; // x1
  MapControl_QuestInfo_o *v139; // x20
  int32_t questId; // w22
  bool IsQuestClear_40554260; // w22
  TerminalPramsManager_c *v142; // x0
  int32_t QuestId_k__BackingField; // w23
  int32_t CampaignCostCalcValue; // w22
  int32_t v145; // w8
  int32_t ActConsumeCost; // w20
  System_String_o *CostValueColor; // x22
  Il2CppObject *v148; // x0
  System_String_o *v149; // x0
  int32_t ThumbnailSpritePath_k__BackingField_high; // w19
  Il2CppObject *v151; // x20
  System_String_o *v152; // x22
  Il2CppObject *v153; // x0
  Il2CppObject *v154; // x22
  System_String_o *v155; // x0
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  System_String_o *v158; // x0
  struct ListViewObject_o *v159; // x1
  int32_t v160; // w2
  const MethodInfo *v161; // x3
  System_String_o *v162; // x0
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  System_String_o *v165; // x20
  Il2CppObject *v166; // x0
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  char v169; // w20
  int32_t v170; // w23
  UnityEngine_Object_o *mainText; // x22
  UILabel_o *v172; // x22
  UnityEngine_Component_o *v173; // x0
  int32_t v174; // w1
  System_String_o *v175; // x0
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  System_String_o *v178; // x0
  UnityEngine_Object_o *buttonRoot; // x20
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v180; // x0
  const MethodInfo *v181; // x4
  BattleRetryConfirmContents_o *v182; // x0
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  System_Action_o *v185; // x20
  BattleRetryConfirmComponent_o *v186; // x0
  const MethodInfo *v187; // x2
  System_Collections_IEnumerator_o *v188; // x0
  struct BattleRetryConfirmContents_o *v189; // x1
  int32_t v190; // w2
  const MethodInfo *v191; // x3
  __int64 v192; // [xsp+48h] [xbp-1F8h]
  Il2CppObject *v193; // [xsp+48h] [xbp-1F8h]
  __int64 v194; // [xsp+50h] [xbp-1F0h]
  __int64 v195; // [xsp+50h] [xbp-1F0h]
  BattleRetryConfirmComponent_o *v196; // [xsp+58h] [xbp-1E8h]
  BattleRetryConfirmComponent_o *v197; // [xsp+58h] [xbp-1E8h]
  int32_t v198; // [xsp+64h] [xbp-1DCh]
  UserGameEntity_o **p_userGameEntity; // [xsp+88h] [xbp-1B8h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v200; // [xsp+90h] [xbp-1B0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v201; // [xsp+C0h] [xbp-180h]
  int32_t fixedVal; // [xsp+ECh] [xbp-154h] BYREF
  CGThumbnailListItem_o v203; // [xsp+F0h] [xbp-150h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v204; // [xsp+180h] [xbp-C0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v205; // [xsp+1B0h] [xbp-90h] BYREF

  if ( (byte_4CB9C52 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&CondType_TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&MapControl_QuestInfo_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    sub_1C6BA08(&Method_BattleRetryConfirmComponent___c__SetValues_b__30_0__);
    sub_1C6BA08(&Method_BattleRetryConfirmComponent___c__SetValues_b__30_1__);
    sub_1C6BA08(&Method_BattleRetryConfirmComponent___c__DisplayClass30_0__SetValues_b__2__);
    sub_1C6BA08(&BattleRetryConfirmComponent___c__DisplayClass30_0_TypeInfo);
    sub_1C6BA08(&BattleRetryConfirmComponent___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_2855/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/);
    sub_1C6BA08(&StringLiteral_3790/*"CONSUME_TYPE_AP"*/);
    sub_1C6BA08(&StringLiteral_10881/*"QUEST_ITEM_COST_OVER"*/);
    sub_1C6BA08(&StringLiteral_2853/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/);
    sub_1C6BA08(&StringLiteral_2852/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_NONE_SPACE"*/);
    sub_1C6BA08(&StringLiteral_2854/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/);
    sub_1C6BA08(&StringLiteral_2020/*"AP_OVER_MAX_COLOR"*/);
    sub_1C6BA08(&StringLiteral_3791/*"CONSUME_TYPE_RP"*/);
    sub_1C6BA08(&StringLiteral_2859/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/);
    sub_1C6BA08(&StringLiteral_2858/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/);
    sub_1C6BA08(&StringLiteral_2846/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/);
    sub_1C6BA08(&StringLiteral_44/*"\n\n"*/);
    sub_1C6BA08(&StringLiteral_2856/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/);
    sub_1C6BA08(&StringLiteral_2848/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_2849/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_NONE_SPACE"*/);
    sub_1C6BA08(&StringLiteral_2857/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/);
    sub_1C6BA08(&StringLiteral_2850/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/);
    sub_1C6BA08(&StringLiteral_2851/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/);
    byte_4CB9C52 = 1;
  }
  HIDWORD(v203.fields._ThumbnailSpritePath_k__BackingField) = 0;
  memset(&v203.fields.isTermination, 0, 40);
  memset(&v203.fields.sortValue1, 0, 40);
  memset(&v203, 0, 40);
  fixedVal = 0;
  v3 = sub_1C6BC54(BattleRetryConfirmComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v5, v6);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_210;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CB02AF )
  {
    sub_1C6BA08(&TerminalPramsManager_TypeInfo);
    byte_4CB02AF = 1;
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
                                (const MethodInfo_33F90DC *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_210;
  v10 = (QuestEntity_o *)Instance;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0, 0);
  HIDWORD(v203.fields._ThumbnailSpritePath_k__BackingField) = 0;
  memset(&v203.fields.isTermination, 0, 40);
  v12 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_1C6BC54(System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v12,
    (const MethodInfo_3898D50 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  v13 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v13, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"CONSUME_TYPE_AP"*/, 0);
  switch ( QuestEntity__GetConsumeType(v10, 0) )
  {
    case 1:
      v17 = v10;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"CONSUME_TYPE_AP"*/, 0);
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v14 = (Il2CppObject *)Instance;
      Instance = (DataManager_o *)UserGameEntity__getAct(*p_userGameEntity, 0);
      HIDWORD(v203.fields._ThumbnailSpritePath_k__BackingField) = (_DWORD)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      actMax = (*p_userGameEntity)->fields.actMax;
      goto LABEL_30;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3791/*"CONSUME_TYPE_RP"*/, 0);
      v17 = v10;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v14 = (Il2CppObject *)Instance;
      Instance = (DataManager_o *)UserGameEntity__getRp(*p_userGameEntity, 0);
      HIDWORD(v203.fields._ThumbnailSpritePath_k__BackingField) = (_DWORD)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      if ( !byte_4CB2EE2 )
      {
        sub_1C6BA08(&BalanceConfig_TypeInfo);
        byte_4CB2EE2 = 1;
      }
      v19 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v19 = BalanceConfig_TypeInfo;
      }
      actMax = v19->static_fields->UerGameRpMax;
LABEL_30:
      v198 = actMax;
      goto LABEL_151;
    case 3:
      v194 = v3;
      v196 = this;
      *(_QWORD *)&v203.fields.isTermination = StringLiteral_1/*""*/;
      v192 = StringLiteral_1/*""*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v203.fields.isTermination, StringLiteral_1/*""*/, v15, v16);
      *(_QWORD *)&v203.fields.basePosition.fields.y = StringLiteral_1/*""*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v203.fields.basePosition.fields.y, StringLiteral_1/*""*/, v20, v21);
      if ( !ItemConsumeEntity )
        goto LABEL_76;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v22 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v23 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_76;
      v24 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CB002A )
        {
          sub_1C6BA08(&NetworkManager_TypeInfo);
          byte_4CB002A = 1;
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
        if ( v24 >= LODWORD(itemIds->max_length) )
          goto LABEL_211;
        if ( !v23 )
          goto LABEL_210;
        Instance = (DataManager_o *)UserItemMaster__GetEntity(
                                      (UserItemMaster_o *)v23,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      itemIds->m_Items[v24],
                                      0);
        v26 = ItemConsumeEntity->fields.itemIds;
        if ( !v26 )
          goto LABEL_210;
        if ( v24 >= LODWORD(v26->max_length) )
          goto LABEL_211;
        if ( !v22 )
          goto LABEL_210;
        v27 = Instance;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v22,
                                      v26->m_Items[v24],
                                      (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_210;
        v28 = (ItemEntity_o *)Instance;
        if ( LODWORD(Instance->fields.lookup) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_210;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v27 )
        {
          Instance = (DataManager_o *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0);
          qp = 0;
          if ( ((unsigned __int8)Instance & 1) != 0 )
            qp = SHIDWORD(v27->fields.m_CancellationTokenSource);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_210;
        if ( v24 >= LODWORD(nums->max_length) )
          goto LABEL_211;
        if ( qp < nums->m_Items[v24] )
        {
          Instance = (DataManager_o *)System_String__Concat_63966792(
                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                        v28->fields.name,
                                        0);
          if ( !v13 )
            goto LABEL_210;
          System_Text_StringBuilder__Append_64050752(v13, (System_String_o *)Instance, 0);
        }
        memset(&v203.fields.sortValue1, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_2854/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0);
        v203.fields.sortValue1 = (int64_t)System_String__Format(v31, (Il2CppObject *)v28->fields.name, 0);
        sub_1C6B9AC((CGThumbnailListItem_o *)&v203.fields.sortValue1, v203.fields.sortValue1, v32, v33);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2855/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0);
        v34 = ItemConsumeEntity->fields.nums;
        if ( !v34 )
          goto LABEL_210;
        if ( v24 >= LODWORD(v34->max_length) )
          goto LABEL_211;
        v35 = (System_String_o *)Instance;
        LODWORD(v205.fields.useName) = v34->m_Items[v24];
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v205);
        v203.fields.sortStr1 = System_String__Format(v35, v36, 0);
        sub_1C6B9AC((CGThumbnailListItem_o *)&v203.fields.sortStr1, (int32_t)v203.fields.sortStr1, v37, v38);
        v39 = LocalizationManager__Get((System_String_o *)StringLiteral_2857/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0);
        v203.fields.sortValue1B = (int64_t)System_String__Format(v39, (Il2CppObject *)v28->fields.name, 0);
        sub_1C6B9AC((CGThumbnailListItem_o *)&v203.fields.sortValue1B, v203.fields.sortValue1B, v40, v41);
        MaxNum = ItemEntity__GetMaxNum(v28, 0);
        v43 = MaxNum > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( MaxNum < 1 )
        {
          v50 = LocalizationManager__Get((System_String_o *)StringLiteral_2858/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0);
          v205.fields.useName = (struct System_String_o *)qp;
          v51 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v205);
          v47 = System_String__Format(v50, v51, 0);
        }
        else
        {
          v44 = LocalizationManager__Get((System_String_o *)StringLiteral_2859/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0);
          v205.fields.useName = (struct System_String_o *)qp;
          v45 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v205);
          LODWORD(v204.fields.useName) = ItemEntity__GetMaxNum(v28, 0);
          v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v204);
          v47 = System_String__Format_64008100(v44, v45, v46, 0);
        }
        v203.fields.sortValue2 = (int64_t)v47;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v203.fields.sortValue2, (int32_t)v47, v48, v49);
        LOBYTE(v203.fields.sortValue2B) = v43;
        v201 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v203.fields.sortValue1;
        if ( !v12 )
          goto LABEL_210;
        v204 = v201;
        items = v12->fields._items;
        v55 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_210;
        size = v12->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v60 = *(const MethodInfo_3899674 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL);
          v205 = v204;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            v12,
            &v205,
            v60);
        }
        else
        {
          v12->fields._size = size + 1;
          v57 = *(_OWORD *)&v204.fields.useName;
          v58 = *(_OWORD *)&v204.fields.possessionName;
          v59 = (char *)items + 40 * size;
          *((_QWORD *)v59 + 8) = *(_QWORD *)&v204.fields.isIndividualLimit;
          *((_OWORD *)v59 + 2) = v57;
          *((_OWORD *)v59 + 3) = v58;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v59 + 32), 0, v52, v53);
        }
        Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v24, 0);
      }
      while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_76:
      if ( !v13 )
        goto LABEL_210;
      v3 = v194;
      this = v196;
      v17 = v10;
      if ( System_Text_StringBuilder__get_Length(v13, 0) < 1 )
      {
        v14 = (Il2CppObject *)v192;
        v198 = 0;
LABEL_151:
        Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          LOBYTE(Instance->fields.nowLoadCount) = 0;
          Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( Instance )
          {
            PartyOrganizationUtility__CacheQuestUseItems((PartyOrganizationUtility_o *)Instance, 0);
            Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3A4F8A4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( Instance )
            {
              CachedAvailableQuestUseItems = PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
                                               (PartyOrganizationUtility_o *)Instance,
                                               0);
              QuestUseItemButtons = BattleRetryConfirmComponent__CreateQuestUseItemButtons(
                                      this,
                                      CachedAvailableQuestUseItems,
                                      v134);
              this->fields.currentQuestUseItemButtons = QuestUseItemButtons;
              sub_1C6B9AC(
                (CGThumbnailListItem_o *)&this->fields.currentQuestUseItemButtons,
                (int32_t)QuestUseItemButtons,
                v136,
                v137);
              if ( CachedAvailableQuestUseItems )
              {
                if ( v3 )
                {
                  *(_BYTE *)(v3 + 16) = LODWORD(CachedAvailableQuestUseItems->max_length) != 0;
                  if ( QuestEntity__GetConsumeType(v17, 0) == 1
                    || QuestEntity__GetConsumeType(v17, 0) == 2
                    || QuestEntity__GetConsumeType(v17, 0) == 4 )
                  {
                    v139 = (MapControl_QuestInfo_o *)sub_1C6BC54(MapControl_QuestInfo_TypeInfo);
                    MapControl_QuestInfo___ctor(v139, 0);
                    if ( !v139 )
                      goto LABEL_210;
                    MapControl_QuestInfo__SetTerminalParamsValue(v139, 0);
                    questId = v139->fields.questId;
                    if ( !CondType_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    fixedVal = -1;
                    IsQuestClear_40554260 = CondType__IsQuestClear_40554260(questId, -1, 0, 0);
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    if ( !byte_4CB02AF )
                    {
                      sub_1C6BA08(&TerminalPramsManager_TypeInfo);
                      byte_4CB02AF = 1;
                    }
                    v142 = TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      v142 = TerminalPramsManager_TypeInfo;
                    }
                    QuestId_k__BackingField = v142->static_fields->_QuestId_k__BackingField;
                    if ( !byte_4CB02AE )
                    {
                      sub_1C6BA08(&TerminalPramsManager_TypeInfo);
                      v142 = TerminalPramsManager_TypeInfo;
                      byte_4CB02AE = 1;
                    }
                    if ( !v142->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v142);
                      v142 = TerminalPramsManager_TypeInfo;
                    }
                    CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                                              v17,
                                              QuestId_k__BackingField,
                                              v142->static_fields->_PhaseCnt_k__BackingField,
                                              !IsQuestClear_40554260,
                                              &fixedVal,
                                              0);
                    Instance = (DataManager_o *)MapControl_QuestInfo__GetMine(v139, 0);
                    if ( !Instance )
                      goto LABEL_210;
                    QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0);
                    v145 = fixedVal;
                    v139->fields.costCalcVal = CampaignCostCalcValue;
                    v139->fields._fixedCostVal_k__BackingField = v145;
                    ActConsumeCost = MapControl_QuestInfo__GetActConsumeCost(v139, 0);
                    CostValueColor = QuestEntity__GetCostValueColor(
                                       CampaignCostCalcValue,
                                       (ActConsumeCost > v198)
                                     | (unsigned __int8)(ActConsumeCost > SHIDWORD(v203.fields._ThumbnailSpritePath_k__BackingField)),
                                       0);
                    LODWORD(v205.fields.useName) = ActConsumeCost;
                    v148 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v205);
                    v149 = System_String__Format(CostValueColor, v148, 0);
                    ThumbnailSpritePath_k__BackingField_high = HIDWORD(v203.fields._ThumbnailSpritePath_k__BackingField);
                    v151 = (Il2CppObject *)v149;
                    Instance = (DataManager_o *)System_Int32__ToString(
                                                  (int32_t)&v203.fields._ThumbnailSpritePath_k__BackingField + 4,
                                                  0);
                    if ( v198 < ThumbnailSpritePath_k__BackingField_high )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v152 = LocalizationManager__Get((System_String_o *)StringLiteral_2020/*"AP_OVER_MAX_COLOR"*/, 0);
                      LODWORD(v205.fields.useName) = HIDWORD(v203.fields._ThumbnailSpritePath_k__BackingField);
                      v153 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v205);
                      Instance = (DataManager_o *)System_String__Format(v152, v153, 0);
                    }
                    v154 = (Il2CppObject *)Instance;
                    if ( *(_BYTE *)(v3 + 16) )
                      goto LABEL_214;
                    if ( !v12 )
                      goto LABEL_210;
                    if ( v12->fields._size )
                    {
LABEL_214:
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v155 = LocalizationManager__Get((System_String_o *)StringLiteral_2851/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0);
                      *(_QWORD *)&v203.fields.isTermination = System_String__Format(v155, v14, 0);
                      sub_1C6B9AC(
                        (CGThumbnailListItem_o *)&v203.fields.isTermination,
                        *(int32_t *)&v203.fields.isTermination,
                        v156,
                        v157);
                      v158 = LocalizationManager__Get((System_String_o *)StringLiteral_2848/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0);
                      v159 = (struct ListViewObject_o *)System_String__Format(v158, v14, 0);
                    }
                    else
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v175 = LocalizationManager__Get((System_String_o *)StringLiteral_2852/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_NONE_SPACE"*/, 0);
                      *(_QWORD *)&v203.fields.isTermination = System_String__Format(v175, v14, 0);
                      sub_1C6B9AC(
                        (CGThumbnailListItem_o *)&v203.fields.isTermination,
                        *(int32_t *)&v203.fields.isTermination,
                        v176,
                        v177);
                      v178 = LocalizationManager__Get((System_String_o *)StringLiteral_2849/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_NONE_SPACE"*/, 0);
                      v159 = (struct ListViewObject_o *)System_String__Format(v178, v14, 0);
                    }
                    v203.fields.viewObject = v159;
                    sub_1C6B9AC((CGThumbnailListItem_o *)&v203.fields.viewObject, (int32_t)v159, v160, v161);
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v162 = LocalizationManager__Get((System_String_o *)StringLiteral_2853/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0);
                    *(_QWORD *)&v203.fields.basePosition.fields.y = System_String__Format(v162, v151, 0);
                    sub_1C6B9AC(
                      (CGThumbnailListItem_o *)&v203.fields.basePosition.fields.y,
                      SLODWORD(v203.fields.basePosition.fields.y),
                      v163,
                      v164);
                    v165 = LocalizationManager__Get((System_String_o *)StringLiteral_2850/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0);
                    LODWORD(v205.fields.useName) = v198;
                    v166 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v205);
                    *(_QWORD *)&v203.fields._Id_k__BackingField = System_String__Format_64008100(v165, v154, v166, 0);
                    sub_1C6B9AC(
                      (CGThumbnailListItem_o *)&v203.fields._Id_k__BackingField,
                      v203.fields._Id_k__BackingField,
                      v167,
                      v168);
                  }
                  BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v138);
                  Instance = (DataManager_o *)System_String__IsNullOrEmpty(
                                                *(System_String_o **)&v203.fields.isTermination,
                                                0);
                  if ( !v12 )
                    goto LABEL_210;
                  v169 = (char)Instance;
                  v170 = v12->fields._size;
                  mainText = (UnityEngine_Object_o *)this->fields.mainText;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(mainText, 0, 0) )
                  {
                    v172 = this->fields.mainText;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2846/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/, 0);
                    if ( !v172 )
                      goto LABEL_210;
                    UILabel__set_text(v172, (System_String_o *)Instance, 0);
                    if ( !*(_BYTE *)(v3 + 16) )
                    {
                      v173 = (UnityEngine_Component_o *)this->fields.mainText;
                      if ( v170 + ((v169 & 1) == 0) == 3 )
                      {
                        ComponentHelper__SetLocalPositionY(v173, 179.0, 0);
                        Instance = (DataManager_o *)this->fields.mainText;
                        if ( !Instance )
                          goto LABEL_210;
                        v174 = 22;
                      }
                      else
                      {
                        ComponentHelper__SetLocalPositionY(v173, 178.0, 0);
                        Instance = (DataManager_o *)this->fields.mainText;
                        if ( !Instance )
                          goto LABEL_210;
                        v174 = 24;
                      }
                      UILabel__set_fontSize((UILabel_o *)Instance, v174, 0);
                    }
                  }
                  buttonRoot = (UnityEngine_Object_o *)this->fields.buttonRoot;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(buttonRoot, 0, 0) && !*(_BYTE *)(v3 + 16) )
                    GameObjectExtensions__SetLocalPositionY(this->fields.buttonRoot, -164.0, 0);
                  v200 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v203.fields.isTermination;
                  v180 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                           v12,
                           (const MethodInfo_389B684 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
                  v182 = BattleRetryConfirmComponent__CreateContents(this, &v200, v180, *(_BYTE *)(v3 + 16), v181);
                  *(_QWORD *)(v3 + 24) = v182;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)v182, v183, v184);
                  Instance = *(DataManager_o **)(v3 + 24);
                  if ( Instance )
                  {
                    BattleRetryConfirmContents__Initialized((BattleRetryConfirmContents_o *)Instance, v8);
                    v185 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                    System_Action___ctor(
                      v185,
                      (Il2CppObject *)v3,
                      Method_BattleRetryConfirmComponent___c__DisplayClass30_0__SetValues_b__2__,
                      0);
                    v188 = BattleRetryConfirmComponent__WaitOneFrame(v186, v185, v187);
                    UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v188, 0);
                    v189 = *(struct BattleRetryConfirmContents_o **)(v3 + 24);
                    this->fields.currentContents = v189;
                    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.currentContents, (int32_t)v189, v190, v191);
                    return 1;
                  }
                }
              }
            }
          }
        }
LABEL_210:
        sub_1C6BC60(Instance, v8);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_10881/*"QUEST_ITEM_COST_OVER"*/, 0);
      v62 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v13->klass->vtable._3_ToString.methodPtr)(
                              v13,
                              v13->klass->vtable._3_ToString.method);
      v63 = System_String__Format(v61, v62, 0);
      v64 = System_String__Concat_63966792(v63, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
      v65 = LocalizationManager__Get((System_String_o *)StringLiteral_2856/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0);
      v66 = System_String__Concat_63966792(v64, v65, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v67 = (CommonUI_o *)Instance;
      v68 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v68 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      v69 = (System_String_o *)StringLiteral_1/*""*/;
      _9__30_0 = v68->static_fields->__9__30_0;
      if ( !_9__30_0 )
      {
        if ( !v68->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v68);
          v68 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v71 = (Il2CppObject *)v68->static_fields->__9;
        _9__30_0 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(_9__30_0, v71, Method_BattleRetryConfirmComponent___c__SetValues_b__30_0__, 0);
        static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        static_fields->__9__30_0 = _9__30_0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v73, v74);
      }
      if ( !v67 )
        goto LABEL_210;
      CommonUI__OpenNotificationDialog(v67, v69, v66, _9__30_0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
      return 0;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3790/*"CONSUME_TYPE_AP"*/, 0);
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v193 = (Il2CppObject *)Instance;
      v195 = v3;
      v197 = this;
      Instance = (DataManager_o *)UserGameEntity__getAct(*p_userGameEntity, 0);
      HIDWORD(v203.fields._ThumbnailSpritePath_k__BackingField) = (_DWORD)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v198 = (*p_userGameEntity)->fields.actMax;
      *(_QWORD *)&v203.fields.isTermination = StringLiteral_1/*""*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v203.fields.isTermination, StringLiteral_1/*""*/, v75, v76);
      *(_QWORD *)&v203.fields.basePosition.fields.y = StringLiteral_1/*""*/;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v203.fields.basePosition.fields.y, StringLiteral_1/*""*/, v77, v78);
      if ( !ItemConsumeEntity )
        goto LABEL_137;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v79 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v80 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_137;
      v81 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4CB002A )
        {
          sub_1C6BA08(&NetworkManager_TypeInfo);
          byte_4CB002A = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        v82 = ItemConsumeEntity->fields.itemIds;
        if ( !v82 )
          goto LABEL_210;
        if ( v81 >= LODWORD(v82->max_length) )
          goto LABEL_211;
        if ( !v80 )
          goto LABEL_210;
        Instance = (DataManager_o *)UserItemMaster__GetEntity(
                                      (UserItemMaster_o *)v80,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      v82->m_Items[v81],
                                      0);
        v83 = ItemConsumeEntity->fields.itemIds;
        if ( !v83 )
          goto LABEL_210;
        if ( v81 >= LODWORD(v83->max_length) )
          goto LABEL_211;
        if ( !v79 )
          goto LABEL_210;
        v84 = Instance;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v79,
                                      v83->m_Items[v81],
                                      (const MethodInfo_33F90DC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_210;
        v85 = (ItemEntity_o *)Instance;
        if ( LODWORD(Instance->fields.lookup) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_210;
          m_CancellationTokenSource_high = (*p_userGameEntity)->fields.qp;
        }
        else if ( v84 )
        {
          Instance = (DataManager_o *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0);
          m_CancellationTokenSource_high = 0;
          if ( ((unsigned __int8)Instance & 1) != 0 )
            m_CancellationTokenSource_high = SHIDWORD(v84->fields.m_CancellationTokenSource);
        }
        else
        {
          m_CancellationTokenSource_high = 0;
        }
        v87 = ItemConsumeEntity->fields.nums;
        if ( !v87 )
          goto LABEL_210;
        if ( v81 >= LODWORD(v87->max_length) )
          goto LABEL_211;
        if ( m_CancellationTokenSource_high < v87->m_Items[v81] )
        {
          Instance = (DataManager_o *)System_String__Concat_63966792(
                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                        v85->fields.name,
                                        0);
          if ( !v13 )
            goto LABEL_210;
          System_Text_StringBuilder__Append_64050752(v13, (System_String_o *)Instance, 0);
        }
        memset(&v203, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v88 = LocalizationManager__Get((System_String_o *)StringLiteral_2854/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0);
        v203.klass = (CGThumbnailListItem_c *)System_String__Format(v88, (Il2CppObject *)v85->fields.name, 0);
        sub_1C6B9AC(&v203, (int32_t)v203.klass, v89, v90);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2855/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0);
        v91 = ItemConsumeEntity->fields.nums;
        if ( !v91 )
          goto LABEL_210;
        if ( v81 >= LODWORD(v91->max_length) )
LABEL_211:
          sub_1C6BC68(Instance);
        v92 = (System_String_o *)Instance;
        LODWORD(v205.fields.useName) = v91->m_Items[v81];
        v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v205);
        v203.monitor = System_String__Format(v92, v93, 0);
        sub_1C6B9AC((CGThumbnailListItem_o *)&v203.monitor, (int32_t)v203.monitor, v94, v95);
        v96 = LocalizationManager__Get((System_String_o *)StringLiteral_2857/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0);
        *(_QWORD *)&v203.fields.selectNum = System_String__Format(v96, (Il2CppObject *)v85->fields.name, 0);
        sub_1C6B9AC((CGThumbnailListItem_o *)&v203.fields, v203.fields.selectNum, v97, v98);
        v99 = ItemEntity__GetMaxNum(v85, 0);
        v100 = v99 > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v99 < 1 )
        {
          v107 = LocalizationManager__Get((System_String_o *)StringLiteral_2858/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0);
          v205.fields.useName = (struct System_String_o *)m_CancellationTokenSource_high;
          v108 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v205);
          v104 = System_String__Format(v107, v108, 0);
        }
        else
        {
          v101 = LocalizationManager__Get((System_String_o *)StringLiteral_2859/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0);
          v205.fields.useName = (struct System_String_o *)m_CancellationTokenSource_high;
          v102 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v205);
          LODWORD(v204.fields.useName) = ItemEntity__GetMaxNum(v85, 0);
          v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v204);
          v104 = System_String__Format_64008100(v101, v102, v103, 0);
        }
        *(_QWORD *)&v203.fields.sortIndex = v104;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v203.fields.sortIndex, (int32_t)v104, v105, v106);
        LOBYTE(v203.fields.sortValue0) = v100;
        *(_OWORD *)&v201.fields.useName = *(_OWORD *)&v203.klass;
        *(_OWORD *)&v201.fields.possessionName = *(_OWORD *)&v203.fields.selectNum;
        *(_QWORD *)&v201.fields.isIndividualLimit = v203.fields.sortValue0;
        if ( !v12 )
          goto LABEL_210;
        v204 = v201;
        v111 = v12->fields._items;
        v112 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++v12->fields._version;
        if ( !v111 )
          goto LABEL_210;
        v113 = v12->fields._size;
        if ( (unsigned int)v113 >= LODWORD(v111->max_length) )
        {
          v117 = *(const MethodInfo_3899674 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL);
          v205 = v204;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            v12,
            &v205,
            v117);
        }
        else
        {
          v12->fields._size = v113 + 1;
          v114 = *(_OWORD *)&v204.fields.useName;
          v115 = *(_OWORD *)&v204.fields.possessionName;
          v116 = (char *)v111 + 40 * v113;
          *((_QWORD *)v116 + 8) = *(_QWORD *)&v204.fields.isIndividualLimit;
          *((_OWORD *)v116 + 2) = v114;
          *((_OWORD *)v116 + 3) = v115;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v116 + 32), 0, v109, v110);
        }
        Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v81, 0);
      }
      while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_137:
      if ( !v13 )
        goto LABEL_210;
      v3 = v195;
      this = v197;
      v14 = v193;
      v17 = v10;
      if ( System_Text_StringBuilder__get_Length(v13, 0) < 1 )
        goto LABEL_151;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v118 = LocalizationManager__Get((System_String_o *)StringLiteral_10881/*"QUEST_ITEM_COST_OVER"*/, 0);
      v119 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v13->klass->vtable._3_ToString.methodPtr)(
                               v13,
                               v13->klass->vtable._3_ToString.method);
      v120 = System_String__Format(v118, v119, 0);
      v121 = System_String__Concat_63966792(v120, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
      v122 = LocalizationManager__Get((System_String_o *)StringLiteral_2856/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0);
      v123 = System_String__Concat_63966792(v121, v122, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v124 = (CommonUI_o *)Instance;
      v125 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v125 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      _9__30_1 = v125->static_fields->__9__30_1;
      v127 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__30_1 )
      {
        if ( !v125->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v125);
          v125 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v128 = (Il2CppObject *)v125->static_fields->__9;
        _9__30_1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(_9__30_1, v128, Method_BattleRetryConfirmComponent___c__SetValues_b__30_1__, 0);
        v129 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v129->__9__30_1 = _9__30_1;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v129->__9__30_1, (int32_t)_9__30_1, v130, v131);
      }
      if ( !v124 )
        goto LABEL_210;
      CommonUI__OpenNotificationDialog(v124, v127, v123, _9__30_1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
      return 0;
    default:
      v198 = 0;
      v17 = v10;
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

  if ( (byte_4CB9C58 & 1) == 0 )
  {
    sub_1C6BA08(&BattleRetryConfirmComponent__WaitOneFrame_d__36_TypeInfo);
    byte_4CB9C58 = 1;
  }
  v4 = sub_1C6BC54(BattleRetryConfirmComponent__WaitOneFrame_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = action;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 32), (int32_t)action, v5, v6);
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
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__36_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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

  if ( (byte_4CB9C5F & 1) == 0 )
  {
    sub_1C6BA08(&BattleRetryConfirmComponent___c_TypeInfo);
    byte_4CB9C5F = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BattleRetryConfirmComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleRetryConfirmComponent___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BattleRetryConfirmComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  __int64 v5; // x1

  if ( (byte_4CB9C62 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__);
    byte_4CB9C62 = 1;
  }
  v2 = Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__;
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C6BA20(Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void BattleRetryConfirmComponent___c___SetValues_b__30_0(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CB9C60 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CB9C60 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_3122B1C *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void BattleRetryConfirmComponent___c___SetValues_b__30_1(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4CB9C61 & 1) == 0 )
  {
    sub_1C6BA08(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CB9C61 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_3122B1C *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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
    sub_1C6BC60(this, method);
  BattleRetryConfirmContents__SetCondensedScalePossessionAmount(this->fields.contents, this->fields.isDispUseItemUI, v2);
}