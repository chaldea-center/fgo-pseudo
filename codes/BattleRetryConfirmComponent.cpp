void BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D30346 & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D30346 = 1;
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

  if ( (byte_4D30342 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleRetryConfirmComponent__BaseDialogOpen_b__41_0__);
    byte_4D30342 = 1;
  }
  v3 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
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

  if ( (byte_4D30344 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D30344 = 1;
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
        (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v12,
                (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v12.fields._current )
          sub_1C942F0(0, v8);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12.fields._current, 1, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v12,
        (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
      if ( currentQuestUseItemButtons )
        BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 1, v10);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_21:
    sub_1C942F0(battleResultComponent, *(_QWORD *)&result);
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
    sub_1C942F0(cancelLabel, method);
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
      sub_1C942F0(0, method);
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

  if ( (byte_4D3033E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Append_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_BattleRetryConfirmContents___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D3033E = 1;
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
                 (const MethodInfo_31AA710 *)Method_System_Linq_Enumerable_Append_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    window = System_Linq_Enumerable__ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr_(
               appended,
               (const MethodInfo_31DCBE0 *)Method_System_Linq_Enumerable_ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr___);
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
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)UnityEngine_Object__Instantiate_object__52598436(
                                                                      v10,
                                                                      transform,
                                                                      (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_BattleRetryConfirmContents___);
  if ( !window )
LABEL_23:
    sub_1C942F0(window, v12);
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
  if ( (byte_4D3033F & 1) == 0 )
  {
    sub_1C94098(&System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__TypeInfo);
    sub_1C94098(&Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    sub_1C94098(&System_Math_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_BattleRetryConfirmQuestUseItemButtons___);
    this = (BattleRetryConfirmComponent_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D3033F = 1;
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
  this = (BattleRetryConfirmComponent_o *)System_Math__Min_65939892(
                                            (int32_t)this,
                                            questUseItemButtonsPrefabs->max_length,
                                            0);
  v6 = v4->fields.questUseItemButtonsPrefabs;
  if ( !v6 )
    goto LABEL_17;
  v7 = (_DWORD)this - 1;
  if ( (unsigned int)((_DWORD)this - 1) >= LODWORD(v6->max_length) )
    sub_1C942F8(this);
  this = (BattleRetryConfirmComponent_o *)v4->fields.window;
  if ( !this )
    goto LABEL_17;
  v8 = (Il2CppObject *)v6->m_Items[v7];
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__Instantiate_object__52598436(
          v8,
          transform,
          (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_BattleRetryConfirmQuestUseItemButtons___);
  v11 = (System_Action_object__object__o *)sub_1C942E4(System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__TypeInfo);
  System_Action_object__object____ctor(
    v11,
    (Il2CppObject *)v4,
    (intptr_t)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__,
    0);
  if ( !v10 )
LABEL_17:
    sub_1C942F0(this, itemInfos);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v19; // x21
  unsigned __int64 v20; // x22
  intptr_t m_CachedPtr; // x8
  _QWORD *v22; // x9
  __int64 klass_low; // x10
  intptr_t v24; // x8
  __int64 v25; // x1
  UnityEngine_Object_o *mainText; // x20
  UILabel_o *v27; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *confirmLabel; // x20
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D30341 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIButton__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIButton___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIButton__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_UIButton__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_2847/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/);
    sub_1C94098(&StringLiteral_2849/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C94098(&StringLiteral_2848/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/);
    byte_4D30341 = 1;
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
    v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_UIButton__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v5,
      (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v5;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.buttons, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_3193628 *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    if ( !root )
      goto LABEL_36;
    klass = root[1].klass;
    v19 = root;
    if ( (int)klass >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)klass )
          sub_1C942F8(root);
        root = (UnityEngine_GameObject_o *)*p_buttons;
        if ( !*p_buttons )
          break;
        method = (const MethodInfo *)*((_QWORD *)&v19[1].monitor + v20);
        m_CachedPtr = root->fields.m_CachedPtr;
        v22 = Method_System_Collections_Generic_List_UIButton__Add__;
        ++HIDWORD(root[1].klass);
        if ( !m_CachedPtr )
          break;
        klass_low = SLODWORD(root[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)root,
            (Il2CppObject *)method,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = m_CachedPtr + 8 * klass_low;
          LODWORD(root[1].klass) = klass_low + 1;
          *(_QWORD *)(v24 + 32) = method;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v24 + 32), (int32_t)method, v12, v13, v14, v15, v16, v17);
        }
        LODWORD(klass) = v19[1].klass;
        if ( (__int64)++v20 >= (int)klass )
          goto LABEL_16;
      }
LABEL_36:
      sub_1C942F0(root, method);
    }
LABEL_16:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_36;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)root,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  for ( i = v30;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0) )
  {
    if ( !i.fields._current )
      sub_1C942F0(0, v25);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  if ( !this->fields.isInitialized )
  {
    mainText = (UnityEngine_Object_o *)this->fields.mainText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mainText, 0, 0) )
    {
      v27 = this->fields.mainText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2849/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0);
      if ( !v27 )
        goto LABEL_36;
      UILabel__set_text(v27, (System_String_o *)root, 0);
    }
    cancelLabel = this->fields.cancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2847/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0);
    if ( !cancelLabel )
      goto LABEL_36;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2848/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0);
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

  if ( (byte_4D30343 & 1) == 0 )
  {
    sub_1C94098(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__);
    sub_1C94098(&Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
    sub_1C94098(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D30343 = 1;
  }
  v3 = Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__;
  memset(&v15, 0, sizeof(v15));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BD = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4D265BC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4D265BC = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v6->static_fields->_PhaseCnt_k__BackingField;
  v9 = (BoostFunctionUtility_CallbackFunc_o *)sub_1C942E4(BoostFunctionUtility_CallbackFunc_TypeInfo);
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
    sub_1C942F0(buttons, v11);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    buttons,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v15.fields._current )
      sub_1C942F0(0, v12);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v15.fields._current, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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

  if ( (byte_4D3033B & 1) == 0 )
  {
    sub_1C94098(&Method_BattleRetryConfirmComponent_OnClickCancel__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    byte_4D3033B = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.state )
  {
    v3 = Method_BattleRetryConfirmComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_BattleRetryConfirmComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent
      || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0),
          (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0) )
    {
      sub_1C942F0(battleResultComponent, v5);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1C942F0(0, v7);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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

  if ( (byte_4D3033C & 1) == 0 )
  {
    sub_1C94098(&Method_BattleRetryConfirmComponent_OnClickConfirm__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    byte_4D3033C = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.state )
  {
    v3 = Method_BattleRetryConfirmComponent_OnClickConfirm__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickConfirm__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C940B0(Method_BattleRetryConfirmComponent_OnClickConfirm__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent
      || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0),
          (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0) )
    {
      sub_1C942F0(battleResultComponent, v5);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1C942F0(0, v7);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  v6 = this;
  if ( (byte_4D3033D & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C94098(&Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__);
    sub_1C94098(&BattleRetryConfirmComponent___c_TypeInfo);
    sub_1C94098(&StringLiteral_10273/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/);
    this = (BattleRetryConfirmComponent_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D3033D = 1;
  }
  if ( !v6->fields.state )
  {
    if ( !info )
      goto LABEL_25;
    UseFlag = QuestUseItemInfo__GetUseFlag(info, 0);
    v8 = Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C940B0(Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C9407C(v8, v8[4]);
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
      this = (BattleRetryConfirmComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        PartyOrganizationUtility__SaveQuestUseItemUseState((PartyOrganizationUtility_o *)this, 0);
        return;
      }
LABEL_25:
      sub_1C942F0(this, info);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10273/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0);
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
      _9__33_0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(
        _9__33_0,
        v18,
        (intptr_t)Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__,
        0);
      static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
      static_fields->__9__33_0 = _9__33_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__33_0,
        (int32_t)_9__33_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
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
    sub_1C942F0(bgObj, opendFunc);
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

  if ( (byte_4D30345 & 1) == 0 )
  {
    sub_1C94098(&BattleSetupInfo_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_11184/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/);
    sub_1C94098(&StringLiteral_2846/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/);
    byte_4D30345 = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D26A98 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D26A98 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4D265BD = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v3->static_fields->_QuestId_k__BackingField;
  if ( !byte_4D265BC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4D265BC = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v3->static_fields->_PhaseCnt_k__BackingField;
  v7 = (BattleSetupInfo_o *)sub_1C942E4(BattleSetupInfo_TypeInfo);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v10 || !Master_object )
    goto LABEL_53;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          v10->fields.eventId,
          (const MethodInfo_345B50C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_53;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_object )
      goto LABEL_53;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_object,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11184/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0) == 1 )
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
                                                                        (System_String_o *)StringLiteral_2846/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/,
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
      sub_1C942F0(Master_object, v9);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  DataManager_o *Instance; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *MasterData_object; // x20
  QuestEntity_o *v14; // x22
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v16; // x21
  System_Text_StringBuilder_o *v17; // x26
  Il2CppObject *v18; // x29
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  QuestEntity_o *v25; // x27
  int32_t actMax; // w8
  BalanceConfig_c *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  Il2CppObject *v34; // x28
  Il2CppObject *v35; // x29
  unsigned int v36; // w23
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v38; // x8
  DataManager_o *v39; // x24
  ItemEntity_o *v40; // x20
  int64_t qp; // x25
  struct System_Int32_array *nums; // x8
  System_String_o *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct System_Int32_array *v50; // x8
  System_String_o *v51; // x24
  Il2CppObject *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  System_String_o *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  int32_t MaxNum; // w24
  bool v67; // w19
  System_String_o *v68; // x24
  Il2CppObject *v69; // x25
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  System_String_o *v78; // x20
  Il2CppObject *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  struct BattleRetryConfirmComponent_RetryConfirmItemStr_array *items; // x8
  _QWORD *v87; // x10
  __int64 size; // x9
  __int128 v89; // q0
  __int128 v90; // q1
  char *v91; // x8
  const MethodInfo_3903D10 *v92; // x2
  System_String_o *v93; // x19
  Il2CppObject *v94; // x0
  System_String_o *v95; // x0
  System_String_o *v96; // x19
  System_String_o *v97; // x0
  System_String_o *v98; // x19
  CommonUI_o *v99; // x20
  BattleRetryConfirmComponent___c_c *v100; // x8
  System_String_o *v101; // x21
  System_Action_o *_9__30_0; // x22
  Il2CppObject *v103; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  int32_t v117; // w2
  int32_t v118; // w3
  System_String_o *v119; // x4
  int32_t v120; // w5
  int64_t v121; // x6
  System_String_o *v122; // x7
  Il2CppObject *v123; // x28
  Il2CppObject *v124; // x29
  unsigned int v125; // w23
  struct System_Int32_array *v126; // x8
  struct System_Int32_array *v127; // x8
  DataManager_o *v128; // x24
  ItemEntity_o *v129; // x20
  int64_t m_CancellationTokenSource_high; // x25
  struct System_Int32_array *v131; // x8
  System_String_o *v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  struct System_Int32_array *v139; // x8
  System_String_o *v140; // x24
  Il2CppObject *v141; // x0
  int32_t v142; // w2
  int32_t v143; // w3
  System_String_o *v144; // x4
  int32_t v145; // w5
  int64_t v146; // x6
  System_String_o *v147; // x7
  System_String_o *v148; // x0
  int32_t v149; // w2
  int32_t v150; // w3
  System_String_o *v151; // x4
  int32_t v152; // w5
  int64_t v153; // x6
  System_String_o *v154; // x7
  int32_t v155; // w24
  bool v156; // w19
  System_String_o *v157; // x24
  Il2CppObject *v158; // x25
  Il2CppObject *v159; // x0
  System_String_o *v160; // x0
  int32_t v161; // w2
  int32_t v162; // w3
  System_String_o *v163; // x4
  int32_t v164; // w5
  int64_t v165; // x6
  System_String_o *v166; // x7
  System_String_o *v167; // x20
  Il2CppObject *v168; // x0
  int32_t v169; // w2
  int32_t v170; // w3
  System_String_o *v171; // x4
  int32_t v172; // w5
  int64_t v173; // x6
  System_String_o *v174; // x7
  struct BattleRetryConfirmComponent_RetryConfirmItemStr_array *v175; // x8
  _QWORD *v176; // x10
  __int64 v177; // x9
  __int128 v178; // q0
  __int128 v179; // q1
  char *v180; // x8
  const MethodInfo_3903D10 *v181; // x2
  System_String_o *v182; // x19
  Il2CppObject *v183; // x0
  System_String_o *v184; // x0
  System_String_o *v185; // x19
  System_String_o *v186; // x0
  System_String_o *v187; // x19
  CommonUI_o *v188; // x20
  BattleRetryConfirmComponent___c_c *v189; // x8
  System_Action_o *_9__30_1; // x22
  System_String_o *v191; // x21
  Il2CppObject *v192; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v193; // x0
  int32_t v194; // w2
  int32_t v195; // w3
  System_String_o *v196; // x4
  int32_t v197; // w5
  int64_t v198; // x6
  System_String_o *v199; // x7
  QuestUseItemInfo_array *CachedAvailableQuestUseItems; // x20
  const MethodInfo *v202; // x2
  struct BattleRetryConfirmQuestUseItemButtons_o *QuestUseItemButtons; // x0
  int32_t v204; // w2
  int32_t v205; // w3
  System_String_o *v206; // x4
  int32_t v207; // w5
  int64_t v208; // x6
  System_String_o *v209; // x7
  const MethodInfo *v210; // x1
  MapControl_QuestInfo_o *v211; // x20
  int32_t questId; // w22
  bool IsQuestClear_41072884; // w22
  TerminalPramsManager_c *v214; // x0
  int32_t QuestId_k__BackingField; // w23
  int32_t CampaignCostCalcValue; // w22
  int32_t v217; // w8
  int32_t ActConsumeCost; // w20
  System_String_o *CostValueColor; // x22
  Il2CppObject *v220; // x0
  System_String_o *v221; // x0
  int32_t sortValue0B_high; // w19
  Il2CppObject *v223; // x20
  System_String_o *v224; // x22
  Il2CppObject *v225; // x0
  Il2CppObject *v226; // x22
  System_String_o *v227; // x0
  int32_t v228; // w2
  int32_t v229; // w3
  System_String_o *v230; // x4
  int32_t v231; // w5
  int64_t v232; // x6
  System_String_o *v233; // x7
  System_String_o *v234; // x0
  System_String_o *v235; // x1
  int32_t v236; // w2
  int32_t v237; // w3
  System_String_o *v238; // x4
  int32_t v239; // w5
  int64_t v240; // x6
  System_String_o *v241; // x7
  System_String_o *v242; // x0
  int32_t v243; // w2
  int32_t v244; // w3
  System_String_o *v245; // x4
  int32_t v246; // w5
  int64_t v247; // x6
  System_String_o *v248; // x7
  System_String_o *v249; // x20
  Il2CppObject *v250; // x0
  int32_t v251; // w2
  int32_t v252; // w3
  System_String_o *v253; // x4
  int32_t v254; // w5
  int64_t v255; // x6
  System_String_o *v256; // x7
  char v257; // w20
  int32_t v258; // w23
  UnityEngine_Object_o *mainText; // x22
  UILabel_o *v260; // x22
  UnityEngine_Component_o *v261; // x0
  int32_t v262; // w1
  System_String_o *v263; // x0
  int32_t v264; // w2
  int32_t v265; // w3
  System_String_o *v266; // x4
  int32_t v267; // w5
  int64_t v268; // x6
  System_String_o *v269; // x7
  System_String_o *v270; // x0
  UnityEngine_Object_o *buttonRoot; // x20
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v272; // x0
  const MethodInfo *v273; // x4
  BattleRetryConfirmContents_o *v274; // x0
  int32_t v275; // w2
  int32_t v276; // w3
  System_String_o *v277; // x4
  int32_t v278; // w5
  int64_t v279; // x6
  System_String_o *v280; // x7
  System_Action_o *v281; // x20
  BattleRetryConfirmComponent_o *v282; // x0
  const MethodInfo *v283; // x2
  System_Collections_IEnumerator_o *v284; // x0
  struct BattleRetryConfirmContents_o *v285; // x1
  int32_t v286; // w2
  int32_t v287; // w3
  System_String_o *v288; // x4
  int32_t v289; // w5
  int64_t v290; // x6
  System_String_o *v291; // x7
  __int64 v292; // [xsp+48h] [xbp-1F8h]
  Il2CppObject *v293; // [xsp+48h] [xbp-1F8h]
  __int64 v294; // [xsp+50h] [xbp-1F0h]
  __int64 v295; // [xsp+50h] [xbp-1F0h]
  BattleRetryConfirmComponent_o *v296; // [xsp+58h] [xbp-1E8h]
  BattleRetryConfirmComponent_o *v297; // [xsp+58h] [xbp-1E8h]
  int32_t v298; // [xsp+64h] [xbp-1DCh]
  UserGameEntity_o **p_userGameEntity; // [xsp+88h] [xbp-1B8h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v300; // [xsp+90h] [xbp-1B0h] BYREF
  __int128 v301; // [xsp+C0h] [xbp-180h]
  __int128 v302; // [xsp+D0h] [xbp-170h]
  int64_t v303; // [xsp+E0h] [xbp-160h]
  int32_t fixedVal; // [xsp+ECh] [xbp-154h] BYREF
  _OWORD v305[3]; // [xsp+F0h] [xbp-150h] BYREF
  _OWORD v306[3]; // [xsp+120h] [xbp-120h] BYREF
  GrandQuestFolderBoardItem_o value; // [xsp+150h] [xbp-F0h] BYREF

  if ( (byte_4D3033A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C94098(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__get_Count__);
    sub_1C94098(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&MapControl_QuestInfo_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C94098(&System_Text_StringBuilder_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&Method_BattleRetryConfirmComponent___c__SetValues_b__30_0__);
    sub_1C94098(&Method_BattleRetryConfirmComponent___c__SetValues_b__30_1__);
    sub_1C94098(&Method_BattleRetryConfirmComponent___c__DisplayClass30_0__SetValues_b__2__);
    sub_1C94098(&BattleRetryConfirmComponent___c__DisplayClass30_0_TypeInfo);
    sub_1C94098(&BattleRetryConfirmComponent___c_TypeInfo);
    sub_1C94098(&StringLiteral_43/*"\n"*/);
    sub_1C94098(&StringLiteral_2859/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/);
    sub_1C94098(&StringLiteral_3803/*"CONSUME_TYPE_AP"*/);
    sub_1C94098(&StringLiteral_10922/*"QUEST_ITEM_COST_OVER"*/);
    sub_1C94098(&StringLiteral_2857/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/);
    sub_1C94098(&StringLiteral_2856/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_NONE_SPACE"*/);
    sub_1C94098(&StringLiteral_2858/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/);
    sub_1C94098(&StringLiteral_2024/*"AP_OVER_MAX_COLOR"*/);
    sub_1C94098(&StringLiteral_3804/*"CONSUME_TYPE_RP"*/);
    sub_1C94098(&StringLiteral_2863/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/);
    sub_1C94098(&StringLiteral_2862/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/);
    sub_1C94098(&StringLiteral_2850/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/);
    sub_1C94098(&StringLiteral_44/*"\n\n"*/);
    sub_1C94098(&StringLiteral_2860/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/);
    sub_1C94098(&StringLiteral_2852/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_2853/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_NONE_SPACE"*/);
    sub_1C94098(&StringLiteral_2861/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/);
    sub_1C94098(&StringLiteral_2854/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/);
    sub_1C94098(&StringLiteral_2855/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/);
    byte_4D3033A = 1;
  }
  HIDWORD(value.fields.sortValue0B) = 0;
  memset(&value, 0, 40);
  memset(v306, 0, 40);
  memset(v305, 0, 40);
  fixedVal = 0;
  v3 = sub_1C942E4(BattleRetryConfirmComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userGameEntity,
    (int32_t)SelfUserGame,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_210;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BD = 1;
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
                                (const MethodInfo_345B4C0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_210;
  v14 = (QuestEntity_o *)Instance;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0, 0);
  HIDWORD(value.fields.sortValue0B) = 0;
  memset(&value, 0, 40);
  v16 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_1C942E4(System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v16,
    (const MethodInfo_39033EC *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  v17 = (System_Text_StringBuilder_o *)sub_1C942E4(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v17, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"CONSUME_TYPE_AP"*/, 0);
  switch ( QuestEntity__GetConsumeType(v14, 0) )
  {
    case 1:
      v25 = v14;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"CONSUME_TYPE_AP"*/, 0);
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v18 = (Il2CppObject *)Instance;
      Instance = (DataManager_o *)UserGameEntity__getAct(*p_userGameEntity, 0);
      HIDWORD(value.fields.sortValue0B) = (_DWORD)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      actMax = (*p_userGameEntity)->fields.actMax;
      goto LABEL_30;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3804/*"CONSUME_TYPE_RP"*/, 0);
      v25 = v14;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v18 = (Il2CppObject *)Instance;
      Instance = (DataManager_o *)UserGameEntity__getRp(*p_userGameEntity, 0);
      HIDWORD(value.fields.sortValue0B) = (_DWORD)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      if ( !byte_4D29390 )
      {
        sub_1C94098(&BalanceConfig_TypeInfo);
        byte_4D29390 = 1;
      }
      v27 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v27 = BalanceConfig_TypeInfo;
      }
      actMax = v27->static_fields->UerGameRpMax;
LABEL_30:
      v298 = actMax;
      goto LABEL_151;
    case 3:
      v294 = v3;
      v296 = this;
      value.klass = (GrandQuestFolderBoardItem_c *)StringLiteral_1/*""*/;
      v292 = StringLiteral_1/*""*/;
      sub_1C9403C(&value, StringLiteral_1/*""*/, v19, v20, v21, v22, v23, v24);
      value.monitor = (void *)StringLiteral_1/*""*/;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&value.monitor, StringLiteral_1/*""*/, v28, v29, v30, v31, v32, v33);
      if ( !ItemConsumeEntity )
        goto LABEL_76;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v34 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v35 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_76;
      v36 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2633A )
        {
          sub_1C94098(&NetworkManager_TypeInfo);
          byte_4D2633A = 1;
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
        if ( v36 >= LODWORD(itemIds->max_length) )
          goto LABEL_211;
        if ( !v35 )
          goto LABEL_210;
        Instance = (DataManager_o *)UserItemMaster__GetEntity(
                                      (UserItemMaster_o *)v35,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      itemIds->m_Items[v36],
                                      0);
        v38 = ItemConsumeEntity->fields.itemIds;
        if ( !v38 )
          goto LABEL_210;
        if ( v36 >= LODWORD(v38->max_length) )
          goto LABEL_211;
        if ( !v34 )
          goto LABEL_210;
        v39 = Instance;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v34,
                                      v38->m_Items[v36],
                                      (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_210;
        v40 = (ItemEntity_o *)Instance;
        if ( LODWORD(Instance->fields.lookup) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_210;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v39 )
        {
          Instance = (DataManager_o *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0);
          qp = 0;
          if ( ((unsigned __int8)Instance & 1) != 0 )
            qp = SHIDWORD(v39->fields.m_CancellationTokenSource);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_210;
        if ( v36 >= LODWORD(nums->max_length) )
          goto LABEL_211;
        if ( qp < nums->m_Items[v36] )
        {
          Instance = (DataManager_o *)System_String__Concat_64417744(
                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                        v40->fields.name,
                                        0);
          if ( !v17 )
            goto LABEL_210;
          System_Text_StringBuilder__Append_64501704(v17, (System_String_o *)Instance, 0);
        }
        memset(v306, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v43 = LocalizationManager__Get((System_String_o *)StringLiteral_2858/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0);
        *(_QWORD *)&v306[0] = System_String__Format(v43, (Il2CppObject *)v40->fields.name, 0);
        sub_1C9403C((GrandQuestFolderBoardItem_o *)v306, v306[0], v44, v45, v46, v47, v48, v49);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2859/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0);
        v50 = ItemConsumeEntity->fields.nums;
        if ( !v50 )
          goto LABEL_210;
        if ( v36 >= LODWORD(v50->max_length) )
          goto LABEL_211;
        v51 = (System_String_o *)Instance;
        *(_DWORD *)&value.fields.isTermination = v50->m_Items[v36];
        v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &value.fields.isTermination);
        *((_QWORD *)&v306[0] + 1) = System_String__Format(v51, v52, 0);
        sub_1C9403C((GrandQuestFolderBoardItem_o *)((char *)v306 + 8), SDWORD2(v306[0]), v53, v54, v55, v56, v57, v58);
        v59 = LocalizationManager__Get((System_String_o *)StringLiteral_2861/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0);
        *(_QWORD *)&v306[1] = System_String__Format(v59, (Il2CppObject *)v40->fields.name, 0);
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v306[1], v306[1], v60, v61, v62, v63, v64, v65);
        MaxNum = ItemEntity__GetMaxNum(v40, 0);
        v67 = MaxNum > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( MaxNum < 1 )
        {
          v78 = LocalizationManager__Get((System_String_o *)StringLiteral_2862/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0);
          *(_QWORD *)&value.fields.isTermination = qp;
          v79 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &value.fields.isTermination);
          v71 = System_String__Format(v78, v79, 0);
        }
        else
        {
          v68 = LocalizationManager__Get((System_String_o *)StringLiteral_2863/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0);
          *(_QWORD *)&value.fields.isTermination = qp;
          v69 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &value.fields.isTermination);
          LODWORD(value.fields.sortValue1) = ItemEntity__GetMaxNum(v40, 0);
          v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &value.fields.sortValue1);
          v71 = System_String__Format_64459052(v68, v69, v70, 0);
        }
        *((_QWORD *)&v306[1] + 1) = v71;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)((char *)&v306[1] + 8), (int32_t)v71, v72, v73, v74, v75, v76, v77);
        LOBYTE(v306[2]) = v67;
        v301 = v306[0];
        v302 = v306[1];
        v303 = *(_QWORD *)&v306[2];
        if ( !v16 )
          goto LABEL_210;
        *(_OWORD *)&value.fields.sortValue1 = v301;
        *(_OWORD *)&value.fields.sortValue1B = v302;
        value.fields.sortValue2B = v303;
        items = v16->fields._items;
        v87 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_210;
        size = v16->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v92 = *(const MethodInfo_3903D10 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL);
          *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&value.fields.isTermination = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&value.fields.sortValue1;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            v16,
            (BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&value.fields.isTermination,
            v92);
        }
        else
        {
          v16->fields._size = size + 1;
          v89 = *(_OWORD *)&value.fields.sortValue1;
          v90 = *(_OWORD *)&value.fields.sortValue1B;
          v91 = (char *)items + 40 * size;
          *((_QWORD *)v91 + 8) = value.fields.sortValue2B;
          *((_OWORD *)v91 + 2) = v89;
          *((_OWORD *)v91 + 3) = v90;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v91 + 32), 0, v80, v81, v82, v83, v84, v85);
        }
        Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v36, 0);
      }
      while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_76:
      if ( !v17 )
        goto LABEL_210;
      v3 = v294;
      this = v296;
      v25 = v14;
      if ( System_Text_StringBuilder__get_Length(v17, 0) < 1 )
      {
        v18 = (Il2CppObject *)v292;
        v298 = 0;
LABEL_151:
        Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          LOBYTE(Instance->fields.writeMasterDataThread) = 0;
          Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( Instance )
          {
            PartyOrganizationUtility__CacheQuestUseItems((PartyOrganizationUtility_o *)Instance, 0);
            Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( Instance )
            {
              CachedAvailableQuestUseItems = PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
                                               (PartyOrganizationUtility_o *)Instance,
                                               0);
              QuestUseItemButtons = BattleRetryConfirmComponent__CreateQuestUseItemButtons(
                                      this,
                                      CachedAvailableQuestUseItems,
                                      v202);
              this->fields.currentQuestUseItemButtons = QuestUseItemButtons;
              sub_1C9403C(
                (GrandQuestFolderBoardItem_o *)&this->fields.currentQuestUseItemButtons,
                (int32_t)QuestUseItemButtons,
                v204,
                v205,
                v206,
                v207,
                v208,
                v209);
              if ( CachedAvailableQuestUseItems )
              {
                if ( v3 )
                {
                  *(_BYTE *)(v3 + 16) = LODWORD(CachedAvailableQuestUseItems->max_length) != 0;
                  if ( QuestEntity__GetConsumeType(v25, 0) == 1
                    || QuestEntity__GetConsumeType(v25, 0) == 2
                    || QuestEntity__GetConsumeType(v25, 0) == 4 )
                  {
                    v211 = (MapControl_QuestInfo_o *)sub_1C942E4(MapControl_QuestInfo_TypeInfo);
                    MapControl_QuestInfo___ctor(v211, 0);
                    if ( !v211 )
                      goto LABEL_210;
                    MapControl_QuestInfo__SetTerminalParamsValue(v211, 0);
                    questId = v211->fields.questId;
                    if ( !CondType_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    fixedVal = -1;
                    IsQuestClear_41072884 = CondType__IsQuestClear_41072884(questId, -1, 0, 0);
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    if ( !byte_4D265BD )
                    {
                      sub_1C94098(&TerminalPramsManager_TypeInfo);
                      byte_4D265BD = 1;
                    }
                    v214 = TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      v214 = TerminalPramsManager_TypeInfo;
                    }
                    QuestId_k__BackingField = v214->static_fields->_QuestId_k__BackingField;
                    if ( !byte_4D265BC )
                    {
                      sub_1C94098(&TerminalPramsManager_TypeInfo);
                      v214 = TerminalPramsManager_TypeInfo;
                      byte_4D265BC = 1;
                    }
                    if ( !v214->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v214);
                      v214 = TerminalPramsManager_TypeInfo;
                    }
                    CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                                              v25,
                                              QuestId_k__BackingField,
                                              v214->static_fields->_PhaseCnt_k__BackingField,
                                              !IsQuestClear_41072884,
                                              &fixedVal,
                                              0);
                    Instance = (DataManager_o *)MapControl_QuestInfo__GetMine(v211, 0);
                    if ( !Instance )
                      goto LABEL_210;
                    QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0);
                    v217 = fixedVal;
                    v211->fields.costCalcVal = CampaignCostCalcValue;
                    v211->fields._fixedCostVal_k__BackingField = v217;
                    ActConsumeCost = MapControl_QuestInfo__GetActConsumeCost(v211, 0);
                    CostValueColor = QuestEntity__GetCostValueColor(
                                       CampaignCostCalcValue,
                                       (ActConsumeCost > v298)
                                     | (unsigned __int8)(ActConsumeCost > SHIDWORD(value.fields.sortValue0B)),
                                       0);
                    *(_DWORD *)&value.fields.isTermination = ActConsumeCost;
                    v220 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &value.fields.isTermination);
                    v221 = System_String__Format(CostValueColor, v220, 0);
                    sortValue0B_high = HIDWORD(value.fields.sortValue0B);
                    v223 = (Il2CppObject *)v221;
                    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&value.fields.sortValue0B + 4, 0);
                    if ( v298 < sortValue0B_high )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v224 = LocalizationManager__Get((System_String_o *)StringLiteral_2024/*"AP_OVER_MAX_COLOR"*/, 0);
                      *(_DWORD *)&value.fields.isTermination = HIDWORD(value.fields.sortValue0B);
                      v225 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &value.fields.isTermination);
                      Instance = (DataManager_o *)System_String__Format(v224, v225, 0);
                    }
                    v226 = (Il2CppObject *)Instance;
                    if ( *(_BYTE *)(v3 + 16) )
                      goto LABEL_214;
                    if ( !v16 )
                      goto LABEL_210;
                    if ( v16->fields._size )
                    {
LABEL_214:
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v227 = LocalizationManager__Get((System_String_o *)StringLiteral_2855/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0);
                      value.klass = (GrandQuestFolderBoardItem_c *)System_String__Format(v227, v18, 0);
                      sub_1C9403C(&value, (int32_t)value.klass, v228, v229, v230, v231, v232, v233);
                      v234 = LocalizationManager__Get((System_String_o *)StringLiteral_2852/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0);
                      v235 = System_String__Format(v234, v18, 0);
                    }
                    else
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v263 = LocalizationManager__Get((System_String_o *)StringLiteral_2856/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_NONE_SPACE"*/, 0);
                      value.klass = (GrandQuestFolderBoardItem_c *)System_String__Format(v263, v18, 0);
                      sub_1C9403C(&value, (int32_t)value.klass, v264, v265, v266, v267, v268, v269);
                      v270 = LocalizationManager__Get((System_String_o *)StringLiteral_2853/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_NONE_SPACE"*/, 0);
                      v235 = System_String__Format(v270, v18, 0);
                    }
                    *(_QWORD *)&value.fields.selectNum = v235;
                    sub_1C9403C(
                      (GrandQuestFolderBoardItem_o *)&value.fields,
                      (int32_t)v235,
                      v236,
                      v237,
                      v238,
                      v239,
                      v240,
                      v241);
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v242 = LocalizationManager__Get((System_String_o *)StringLiteral_2857/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0);
                    value.monitor = System_String__Format(v242, v223, 0);
                    sub_1C9403C(
                      (GrandQuestFolderBoardItem_o *)&value.monitor,
                      (int32_t)value.monitor,
                      v243,
                      v244,
                      v245,
                      v246,
                      v247,
                      v248);
                    v249 = LocalizationManager__Get((System_String_o *)StringLiteral_2854/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0);
                    *(_DWORD *)&value.fields.isTermination = v298;
                    v250 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &value.fields.isTermination);
                    *(_QWORD *)&value.fields.sortIndex = System_String__Format_64459052(v249, v226, v250, 0);
                    sub_1C9403C(
                      (GrandQuestFolderBoardItem_o *)&value.fields.sortIndex,
                      value.fields.sortIndex,
                      v251,
                      v252,
                      v253,
                      v254,
                      v255,
                      v256);
                  }
                  BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v210);
                  Instance = (DataManager_o *)System_String__IsNullOrEmpty((System_String_o *)value.klass, 0);
                  if ( !v16 )
                    goto LABEL_210;
                  v257 = (char)Instance;
                  v258 = v16->fields._size;
                  mainText = (UnityEngine_Object_o *)this->fields.mainText;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(mainText, 0, 0) )
                  {
                    v260 = this->fields.mainText;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2850/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/, 0);
                    if ( !v260 )
                      goto LABEL_210;
                    UILabel__set_text(v260, (System_String_o *)Instance, 0);
                    if ( !*(_BYTE *)(v3 + 16) )
                    {
                      v261 = (UnityEngine_Component_o *)this->fields.mainText;
                      if ( v258 + ((v257 & 1) == 0) == 3 )
                      {
                        ComponentHelper__SetLocalPositionY(v261, 179.0, 0);
                        Instance = (DataManager_o *)this->fields.mainText;
                        if ( !Instance )
                          goto LABEL_210;
                        v262 = 22;
                      }
                      else
                      {
                        ComponentHelper__SetLocalPositionY(v261, 178.0, 0);
                        Instance = (DataManager_o *)this->fields.mainText;
                        if ( !Instance )
                          goto LABEL_210;
                        v262 = 24;
                      }
                      UILabel__set_fontSize((UILabel_o *)Instance, v262, 0);
                    }
                  }
                  buttonRoot = (UnityEngine_Object_o *)this->fields.buttonRoot;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(buttonRoot, 0, 0) && !*(_BYTE *)(v3 + 16) )
                    GameObjectExtensions__SetLocalPositionY(this->fields.buttonRoot, -164.0, 0);
                  v300 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&value.klass;
                  v272 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                           v16,
                           (const MethodInfo_3905D20 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
                  v274 = BattleRetryConfirmComponent__CreateContents(this, &v300, v272, *(_BYTE *)(v3 + 16), v273);
                  *(_QWORD *)(v3 + 24) = v274;
                  sub_1C9403C(
                    (GrandQuestFolderBoardItem_o *)(v3 + 24),
                    (int32_t)v274,
                    v275,
                    v276,
                    v277,
                    v278,
                    v279,
                    v280);
                  Instance = *(DataManager_o **)(v3 + 24);
                  if ( Instance )
                  {
                    BattleRetryConfirmContents__Initialized((BattleRetryConfirmContents_o *)Instance, v12);
                    v281 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
                    System_Action___ctor(
                      v281,
                      (Il2CppObject *)v3,
                      Method_BattleRetryConfirmComponent___c__DisplayClass30_0__SetValues_b__2__,
                      0);
                    v284 = BattleRetryConfirmComponent__WaitOneFrame(v282, v281, v283);
                    UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, v284, 0);
                    v285 = *(struct BattleRetryConfirmContents_o **)(v3 + 24);
                    this->fields.currentContents = v285;
                    sub_1C9403C(
                      (GrandQuestFolderBoardItem_o *)&this->fields.currentContents,
                      (int32_t)v285,
                      v286,
                      v287,
                      v288,
                      v289,
                      v290,
                      v291);
                    return 1;
                  }
                }
              }
            }
          }
        }
LABEL_210:
        sub_1C942F0(Instance, v12);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v93 = LocalizationManager__Get((System_String_o *)StringLiteral_10922/*"QUEST_ITEM_COST_OVER"*/, 0);
      v94 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v17->klass->vtable._3_ToString.methodPtr)(
                              v17,
                              v17->klass->vtable._3_ToString.method);
      v95 = System_String__Format(v93, v94, 0);
      v96 = System_String__Concat_64417744(v95, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
      v97 = LocalizationManager__Get((System_String_o *)StringLiteral_2860/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0);
      v98 = System_String__Concat_64417744(v96, v97, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v99 = (CommonUI_o *)Instance;
      v100 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v100 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      v101 = (System_String_o *)StringLiteral_1/*""*/;
      _9__30_0 = v100->static_fields->__9__30_0;
      if ( !_9__30_0 )
      {
        if ( !v100->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v100);
          v100 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v103 = (Il2CppObject *)v100->static_fields->__9;
        _9__30_0 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
        System_Action___ctor(_9__30_0, v103, Method_BattleRetryConfirmComponent___c__SetValues_b__30_0__, 0);
        static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        static_fields->__9__30_0 = _9__30_0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__30_0,
          (int32_t)_9__30_0,
          v105,
          v106,
          v107,
          v108,
          v109,
          v110);
      }
      if ( !v99 )
        goto LABEL_210;
      CommonUI__OpenNotificationDialog(v99, v101, v98, _9__30_0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
      return 0;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"CONSUME_TYPE_AP"*/, 0);
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v293 = (Il2CppObject *)Instance;
      v295 = v3;
      v297 = this;
      Instance = (DataManager_o *)UserGameEntity__getAct(*p_userGameEntity, 0);
      HIDWORD(value.fields.sortValue0B) = (_DWORD)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v298 = (*p_userGameEntity)->fields.actMax;
      value.klass = (GrandQuestFolderBoardItem_c *)StringLiteral_1/*""*/;
      sub_1C9403C(&value, StringLiteral_1/*""*/, v111, v112, v113, v114, v115, v116);
      value.monitor = (void *)StringLiteral_1/*""*/;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&value.monitor, StringLiteral_1/*""*/, v117, v118, v119, v120, v121, v122);
      if ( !ItemConsumeEntity )
        goto LABEL_137;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v123 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v124 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_137;
      v125 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2633A )
        {
          sub_1C94098(&NetworkManager_TypeInfo);
          byte_4D2633A = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        v126 = ItemConsumeEntity->fields.itemIds;
        if ( !v126 )
          goto LABEL_210;
        if ( v125 >= LODWORD(v126->max_length) )
          goto LABEL_211;
        if ( !v124 )
          goto LABEL_210;
        Instance = (DataManager_o *)UserItemMaster__GetEntity(
                                      (UserItemMaster_o *)v124,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      v126->m_Items[v125],
                                      0);
        v127 = ItemConsumeEntity->fields.itemIds;
        if ( !v127 )
          goto LABEL_210;
        if ( v125 >= LODWORD(v127->max_length) )
          goto LABEL_211;
        if ( !v123 )
          goto LABEL_210;
        v128 = Instance;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v123,
                                      v127->m_Items[v125],
                                      (const MethodInfo_345B4C0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_210;
        v129 = (ItemEntity_o *)Instance;
        if ( LODWORD(Instance->fields.lookup) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_210;
          m_CancellationTokenSource_high = (*p_userGameEntity)->fields.qp;
        }
        else if ( v128 )
        {
          Instance = (DataManager_o *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0);
          m_CancellationTokenSource_high = 0;
          if ( ((unsigned __int8)Instance & 1) != 0 )
            m_CancellationTokenSource_high = SHIDWORD(v128->fields.m_CancellationTokenSource);
        }
        else
        {
          m_CancellationTokenSource_high = 0;
        }
        v131 = ItemConsumeEntity->fields.nums;
        if ( !v131 )
          goto LABEL_210;
        if ( v125 >= LODWORD(v131->max_length) )
          goto LABEL_211;
        if ( m_CancellationTokenSource_high < v131->m_Items[v125] )
        {
          Instance = (DataManager_o *)System_String__Concat_64417744(
                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                        v129->fields.name,
                                        0);
          if ( !v17 )
            goto LABEL_210;
          System_Text_StringBuilder__Append_64501704(v17, (System_String_o *)Instance, 0);
        }
        memset(v305, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v132 = LocalizationManager__Get((System_String_o *)StringLiteral_2858/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0);
        *(_QWORD *)&v305[0] = System_String__Format(v132, (Il2CppObject *)v129->fields.name, 0);
        sub_1C9403C((GrandQuestFolderBoardItem_o *)v305, v305[0], v133, v134, v135, v136, v137, v138);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2859/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0);
        v139 = ItemConsumeEntity->fields.nums;
        if ( !v139 )
          goto LABEL_210;
        if ( v125 >= LODWORD(v139->max_length) )
LABEL_211:
          sub_1C942F8(Instance);
        v140 = (System_String_o *)Instance;
        *(_DWORD *)&value.fields.isTermination = v139->m_Items[v125];
        v141 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &value.fields.isTermination);
        *((_QWORD *)&v305[0] + 1) = System_String__Format(v140, v141, 0);
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)((char *)v305 + 8),
          SDWORD2(v305[0]),
          v142,
          v143,
          v144,
          v145,
          v146,
          v147);
        v148 = LocalizationManager__Get((System_String_o *)StringLiteral_2861/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0);
        *(_QWORD *)&v305[1] = System_String__Format(v148, (Il2CppObject *)v129->fields.name, 0);
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v305[1], v305[1], v149, v150, v151, v152, v153, v154);
        v155 = ItemEntity__GetMaxNum(v129, 0);
        v156 = v155 > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v155 < 1 )
        {
          v167 = LocalizationManager__Get((System_String_o *)StringLiteral_2862/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0);
          *(_QWORD *)&value.fields.isTermination = m_CancellationTokenSource_high;
          v168 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &value.fields.isTermination);
          v160 = System_String__Format(v167, v168, 0);
        }
        else
        {
          v157 = LocalizationManager__Get((System_String_o *)StringLiteral_2863/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0);
          *(_QWORD *)&value.fields.isTermination = m_CancellationTokenSource_high;
          v158 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &value.fields.isTermination);
          LODWORD(value.fields.sortValue1) = ItemEntity__GetMaxNum(v129, 0);
          v159 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &value.fields.sortValue1);
          v160 = System_String__Format_64459052(v157, v158, v159, 0);
        }
        *((_QWORD *)&v305[1] + 1) = v160;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)((char *)&v305[1] + 8),
          (int32_t)v160,
          v161,
          v162,
          v163,
          v164,
          v165,
          v166);
        LOBYTE(v305[2]) = v156;
        v301 = v305[0];
        v302 = v305[1];
        v303 = *(_QWORD *)&v305[2];
        if ( !v16 )
          goto LABEL_210;
        *(_OWORD *)&value.fields.sortValue1 = v301;
        *(_OWORD *)&value.fields.sortValue1B = v302;
        value.fields.sortValue2B = v303;
        v175 = v16->fields._items;
        v176 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++v16->fields._version;
        if ( !v175 )
          goto LABEL_210;
        v177 = v16->fields._size;
        if ( (unsigned int)v177 >= LODWORD(v175->max_length) )
        {
          v181 = *(const MethodInfo_3903D10 **)(*(_QWORD *)(v176[4] + 192LL) + 112LL);
          *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&value.fields.isTermination = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&value.fields.sortValue1;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            v16,
            (BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&value.fields.isTermination,
            v181);
        }
        else
        {
          v16->fields._size = v177 + 1;
          v178 = *(_OWORD *)&value.fields.sortValue1;
          v179 = *(_OWORD *)&value.fields.sortValue1B;
          v180 = (char *)v175 + 40 * v177;
          *((_QWORD *)v180 + 8) = value.fields.sortValue2B;
          *((_OWORD *)v180 + 2) = v178;
          *((_OWORD *)v180 + 3) = v179;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v180 + 32), 0, v169, v170, v171, v172, v173, v174);
        }
        Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v125, 0);
      }
      while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_137:
      if ( !v17 )
        goto LABEL_210;
      v3 = v295;
      this = v297;
      v18 = v293;
      v25 = v14;
      if ( System_Text_StringBuilder__get_Length(v17, 0) < 1 )
        goto LABEL_151;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v182 = LocalizationManager__Get((System_String_o *)StringLiteral_10922/*"QUEST_ITEM_COST_OVER"*/, 0);
      v183 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v17->klass->vtable._3_ToString.methodPtr)(
                               v17,
                               v17->klass->vtable._3_ToString.method);
      v184 = System_String__Format(v182, v183, 0);
      v185 = System_String__Concat_64417744(v184, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
      v186 = LocalizationManager__Get((System_String_o *)StringLiteral_2860/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0);
      v187 = System_String__Concat_64417744(v185, v186, 0);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v188 = (CommonUI_o *)Instance;
      v189 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v189 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      _9__30_1 = v189->static_fields->__9__30_1;
      v191 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__30_1 )
      {
        if ( !v189->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v189);
          v189 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v192 = (Il2CppObject *)v189->static_fields->__9;
        _9__30_1 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
        System_Action___ctor(_9__30_1, v192, Method_BattleRetryConfirmComponent___c__SetValues_b__30_1__, 0);
        v193 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v193->__9__30_1 = _9__30_1;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v193->__9__30_1,
          (int32_t)_9__30_1,
          v194,
          v195,
          v196,
          v197,
          v198,
          v199);
      }
      if ( !v188 )
        goto LABEL_210;
      CommonUI__OpenNotificationDialog(v188, v191, v187, _9__30_1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
      return 0;
    default:
      v298 = 0;
      v25 = v14;
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D30340 & 1) == 0 )
  {
    sub_1C94098(&BattleRetryConfirmComponent__WaitOneFrame_d__36_TypeInfo);
    byte_4D30340 = 1;
  }
  v4 = sub_1C942E4(BattleRetryConfirmComponent__WaitOneFrame_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = action;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v4 + 32), (int32_t)action, v5, v6, v7, v8, v9, v10);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__36_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30347 & 1) == 0 )
  {
    sub_1C94098(&BattleRetryConfirmComponent___c_TypeInfo);
    byte_4D30347 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BattleRetryConfirmComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleRetryConfirmComponent___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BattleRetryConfirmComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4D3034A & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__);
    byte_4D3034A = 1;
  }
  v2 = Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__;
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C940B0(Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C9407C(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void BattleRetryConfirmComponent___c___SetValues_b__30_0(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D30348 & 1) == 0 )
  {
    sub_1C94098(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C94098(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D30348 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_3183AA8 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void BattleRetryConfirmComponent___c___SetValues_b__30_1(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4D30349 & 1) == 0 )
  {
    sub_1C94098(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C94098(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D30349 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_3183AA8 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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
    sub_1C942F0(this, method);
  BattleRetryConfirmContents__SetCondensedScalePossessionAmount(this->fields.contents, this->fields.isDispUseItemUI, v2);
}