void __fastcall BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B1FC7C & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B1FC7C = 1;
  }
  *(_QWORD *)&this->fields.CONFIRM_BUTTON_POSITION_ON_THREE_X = 0xC366000043660000LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall BattleRetryConfirmComponent__Awake(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  ;
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

  if ( (byte_4B1FC78 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_BattleRetryConfirmComponent__BaseDialogOpen_b__41_0__, v3);
    byte_4B1FC78 = 1;
  }
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleRetryConfirmComponent__BaseDialogOpen_b__41_0__, 0LL);
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
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1FC7A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, *(_QWORD *)&result);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4B1FC7A = 1;
  }
  memset(&v15, 0, sizeof(v15));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        (System_Collections_Generic_List_object__o *)battleResultComponent,
        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v15,
                (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v15.fields._current )
          sub_1BCB254(0LL, v12);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v15.fields._current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v15,
        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
      if ( currentQuestUseItemButtons )
        BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 1, 0LL);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_21:
    sub_1BCB254(battleResultComponent, *(_QWORD *)&result);
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
    sub_1BCB254(cancelLabel, method);
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

  if ( !this->fields.isNotCentering )
  {
    currentContents = this->fields.currentContents;
    if ( !currentContents )
      sub_1BCB254(0LL, method);
    BattleRetryConfirmContents__CostPointLabelCentering(currentContents, 0LL);
  }
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
  __int64 v13; // x8
  Il2CppObject *v14; // x22
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *window; // x0
  __int64 v16; // x1
  char v17; // w24
  System_Collections_Generic_IEnumerable_TSource__o *appended; // x0
  il2cpp_array_size_t max_length; // w8
  bool v20; // zf
  __int64 v21; // x8
  __int64 v22; // x9
  UnityEngine_Transform_o *transform; // x20
  BattleRetryConfirmContents_o *v24; // x20
  __int128 v26; // [xsp+10h] [xbp-90h]
  __int64 v27; // [xsp+20h] [xbp-80h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v28; // [xsp+30h] [xbp-70h] BYREF

  if ( (byte_4B1FC74 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Append_BattleRetryConfirmComponent_RetryConfirmItemStr___, costPoint);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr___, v9);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_BattleRetryConfirmContents___, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v12);
    byte_4B1FC74 = 1;
  }
  v13 = 200LL;
  if ( isDispUseItemUI )
    v13 = 168LL;
  v14 = *(Il2CppObject **)((char *)&this->klass + v13);
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)System_String__op_Inequality(
                                                                      costPoint->fields.useName,
                                                                      (System_String_o *)StringLiteral_1/*""*/,
                                                                      0LL);
  v17 = (char)window;
  if ( ((unsigned __int8)window & 1) != 0 )
  {
    v27 = *(_QWORD *)&costPoint->fields.isIndividualLimit;
    v26 = *(_OWORD *)&costPoint->fields.possessionName;
    *(_OWORD *)&v28.fields.useName = *(_OWORD *)&costPoint->fields.useName;
    *(_OWORD *)&v28.fields.possessionName = v26;
    *(_QWORD *)&v28.fields.isIndividualLimit = v27;
    appended = System_Linq_Enumerable__Append_BattleRetryConfirmComponent_RetryConfirmItemStr_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)items,
                 &v28,
                 (const MethodInfo_3028D88 *)Method_System_Linq_Enumerable_Append_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    window = System_Linq_Enumerable__ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr_(
               appended,
               (const MethodInfo_30575F8 *)Method_System_Linq_Enumerable_ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    items = window;
  }
  this->fields.isNotCentering = 0;
  if ( !items )
    goto LABEL_23;
  max_length = items->max_length;
  if ( max_length != 1 || (v17 & 1) == 0 )
  {
    if ( max_length == 1 )
    {
      v20 = !isDispUseItemUI;
      v21 = 208LL;
      v22 = 176LL;
    }
    else
    {
      v20 = !isDispUseItemUI;
      if ( max_length == 2 )
      {
        v21 = 216LL;
        v22 = 184LL;
      }
      else
      {
        v21 = 224LL;
        v22 = 192LL;
      }
    }
    if ( !v20 )
      v21 = v22;
    v14 = *(Il2CppObject **)((char *)&this->klass + v21);
  }
  else
  {
    this->fields.isNotCentering = !isDispUseItemUI;
  }
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)this->fields.window;
  if ( !window )
    goto LABEL_23;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)window, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)UnityEngine_Object__Instantiate_object__51002592(
                                                                      v14,
                                                                      transform,
                                                                      (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_BattleRetryConfirmContents___);
  if ( !window )
LABEL_23:
    sub_1BCB254(window, v16);
  v24 = (BattleRetryConfirmContents_o *)window;
  BattleRetryConfirmContents__SetCostValues((BattleRetryConfirmContents_o *)window, items, 0LL);
  return v24;
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

  v4 = this;
  if ( (byte_4B1FC75 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__TypeInfo, itemInfos);
    sub_1BCAFF8(&Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__, v5);
    sub_1BCAFF8(&System_Math_TypeInfo, v6);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_BattleRetryConfirmQuestUseItemButtons___, v7);
    this = (BattleRetryConfirmComponent_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B1FC75 = 1;
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
  this = (BattleRetryConfirmComponent_o *)System_Math__Min_63972788(
                                            (int32_t)this,
                                            questUseItemButtonsPrefabs->max_length,
                                            0LL);
  v11 = v4->fields.questUseItemButtonsPrefabs;
  if ( !v11 )
    goto LABEL_17;
  v12 = (_DWORD)this - 1;
  if ( (int)this - 1 >= v11->max_length )
    sub_1BCB25C(this, itemInfos, v10);
  this = (BattleRetryConfirmComponent_o *)v4->fields.window;
  if ( !this )
    goto LABEL_17;
  v13 = (Il2CppObject *)v11->m_Items[v12];
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__Instantiate_object__51002592(
          v13,
          transform,
          (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_BattleRetryConfirmQuestUseItemButtons___);
  v16 = (System_Action_object__object__o *)sub_1BCB244(System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__TypeInfo);
  System_Action_object__object____ctor(
    v16,
    (Il2CppObject *)v4,
    (intptr_t)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__,
    0LL);
  if ( !v15 )
LABEL_17:
    sub_1BCB254(this, itemInfos);
  BattleRetryConfirmQuestUseItemButtons__Setup(
    (BattleRetryConfirmQuestUseItemButtons_o *)v15,
    itemInfos,
    (System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__o *)v16,
    0LL);
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

  if ( (byte_4B1FC77 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIButton__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIButton___ctor__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIButton__get_Count__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_UIButton__TypeInfo, v10);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v11);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v12);
    sub_1BCAFF8(&StringLiteral_2834/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, v13);
    sub_1BCAFF8(&StringLiteral_2836/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, v14);
    sub_1BCAFF8(&StringLiteral_2835/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, v15);
    byte_4B1FC77 = 1;
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
    v18 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UIButton__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v18,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v18;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.buttons, (int32_t)v18, v19, v20);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_3011F98 *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
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
          sub_1BCB25C(root, method, v21);
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
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = v26 + 8 * klass_low;
          LODWORD(root[1].klass) = klass_low + 1;
          *(_QWORD *)(v29 + 32) = method;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v29 + 32), (int32_t)method, v21, v22);
        }
        LODWORD(klass) = v24[1].klass;
        if ( (__int64)++v25 >= (int)klass )
          goto LABEL_16;
      }
LABEL_36:
      sub_1BCB254(root, method);
    }
LABEL_16:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_36;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)root,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  for ( i = v35;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0LL) )
  {
    if ( !i.fields._current )
      sub_1BCB254(0LL, v30);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
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
      root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2836/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      if ( !v32 )
        goto LABEL_36;
      UILabel__set_text(v32, (System_String_o *)root, 0LL);
    }
    cancelLabel = this->fields.cancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2834/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_36;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0LL);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2835/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0LL);
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
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1FC79 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__, method);
    sub_1BCAFF8(&Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__, v3);
    sub_1BCAFF8(&BoostFunctionUtility_CallbackFunc_TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v10);
    byte_4B1FC79 = 1;
  }
  v11 = Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__;
  memset(&v23, 0, sizeof(v23));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1BCB010(Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
  v12 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 8, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B1684E )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v13);
    byte_4B1684E = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v15->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B1684D )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v13);
    v15 = TerminalPramsManager_TypeInfo;
    byte_4B1684D = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v15->static_fields->_PhaseCnt_k__BackingField;
  v18 = (BoostFunctionUtility_CallbackFunc_o *)sub_1BCB244(BoostFunctionUtility_CallbackFunc_TypeInfo);
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
    sub_1BCB254(buttons, v20);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    buttons,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v23.fields._current )
      sub_1BCB254(0LL, v21);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v23.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
  if ( currentQuestUseItemButtons )
    BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, 0LL);
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
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1FC71 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleRetryConfirmComponent_OnClickCancel__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_4B1FC71 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !this->fields.state )
  {
    v7 = Method_BattleRetryConfirmComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCB010(Method_BattleRetryConfirmComponent_OnClickCancel__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent
      || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0LL),
          (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
    {
      sub_1BCB254(battleResultComponent, v9);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v13.fields._current )
        sub_1BCB254(0LL, v11);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
    if ( currentQuestUseItemButtons )
      BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, 0LL);
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
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1FC72 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleRetryConfirmComponent_OnClickConfirm__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_4B1FC72 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( !this->fields.state )
  {
    v7 = Method_BattleRetryConfirmComponent_OnClickConfirm__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickConfirm__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1BCB010(Method_BattleRetryConfirmComponent_OnClickConfirm__);
    v8 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0LL);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent
      || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0LL),
          (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
    {
      sub_1BCB254(battleResultComponent, v9);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v13.fields._current )
        sub_1BCB254(0LL, v11);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
    if ( currentQuestUseItemButtons )
      BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, 0LL);
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
  System_Action_o *_9__33_0; // x22
  System_String_o *v25; // x21
  Il2CppObject *v26; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  v6 = this;
  if ( (byte_4B1FC73 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, info);
    sub_1BCAFF8(&Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__, v7);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BCAFF8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_1BCAFF8(&Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__, v11);
    sub_1BCAFF8(&BattleRetryConfirmComponent___c_TypeInfo, v12);
    sub_1BCAFF8(&StringLiteral_10167/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v13);
    this = (BattleRetryConfirmComponent_o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v14);
    byte_4B1FC73 = 1;
  }
  if ( !v6->fields.state )
  {
    if ( !info )
      goto LABEL_25;
    UseFlag = QuestUseItemInfo__GetUseFlag(info, 0LL);
    v16 = Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1BCB010(Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    v17 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v16, v16[4]);
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
      this = (BattleRetryConfirmComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        PartyOrganizationUtility__SaveQuestUseItemUseState((PartyOrganizationUtility_o *)this, 0LL);
        return;
      }
LABEL_25:
      sub_1BCB254(this, info);
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10167/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
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
    _9__33_0 = v23->static_fields->__9__33_0;
    v25 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__33_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v23->static_fields->__9;
      _9__33_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        _9__33_0,
        v26,
        (intptr_t)Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__,
        0LL);
      static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
      static_fields->__9__33_0 = _9__33_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__33_0, (int32_t)_9__33_0, v28, v29);
    }
    if ( !Instance )
      goto LABEL_25;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      v25,
      (System_String_o *)v22,
      _9__33_0,
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
    sub_1BCB254(bgObj, opendFunc);
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

  if ( (byte_4B1FC7B & 1) == 0 )
  {
    sub_1BCAFF8(&BattleSetupInfo_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventDetailMaster___, v3);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v8);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_11042/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, v10);
    sub_1BCAFF8(&StringLiteral_2833/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/, v11);
    byte_4B1FC7B = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B169E0 )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
    byte_4B169E0 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v12->static_fields->_WarId_k__BackingField;
  if ( !byte_4B1684E )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4B1684E = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v12->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B1684D )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, method);
    v12 = TerminalPramsManager_TypeInfo;
    byte_4B1684D = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v12->static_fields->_PhaseCnt_k__BackingField;
  v16 = (BattleSetupInfo_o *)sub_1BCB244(BattleSetupInfo_TypeInfo);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v19 || !Master_object )
    goto LABEL_53;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          v19->fields.eventId,
          (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_53;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_object )
      goto LABEL_53;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_object,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0LL)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11042/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0LL) == 1 )
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
                                                                        (System_String_o *)StringLiteral_2833/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/,
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
      sub_1BCB254(Master_object, v18);
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
  __int64 v50; // x28
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  DataManager_o *Instance; // x0
  __int64 v55; // x1
  Il2CppObject *MasterData_object; // x20
  QuestEntity_o *v57; // x22
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v59; // x21
  System_Text_StringBuilder_o *v60; // x26
  Il2CppObject *v61; // x29
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  QuestEntity_o *v64; // x27
  int32_t actMax; // w8
  BalanceConfig_c *v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  Il2CppObject *v69; // x28
  Il2CppObject *v70; // x29
  __int64 v71; // x2
  il2cpp_array_size_t v72; // w23
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v74; // x8
  DataManager_o *v75; // x24
  ItemEntity_o *v76; // x20
  int64_t qp; // x25
  struct System_Int32_array *nums; // x8
  System_String_o *v79; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  __int64 v82; // x3
  __int64 v83; // x4
  struct System_Int32_array *v84; // x8
  System_String_o *v85; // x24
  Il2CppObject *v86; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  System_String_o *v89; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  int32_t MaxNum; // w24
  bool v93; // w19
  System_String_o *v94; // x24
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  Il2CppObject *v98; // x25
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  Il2CppObject *v102; // x0
  System_String_o *v103; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  System_String_o *v106; // x20
  __int64 v107; // x2
  __int64 v108; // x3
  __int64 v109; // x4
  Il2CppObject *v110; // x0
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  struct BattleRetryConfirmComponent_RetryConfirmItemStr_array *items; // x8
  _QWORD *v114; // x10
  __int64 size; // x9
  __int128 v116; // q0
  __int128 v117; // q1
  char *v118; // x8
  const MethodInfo_3723D74 *v119; // x2
  System_String_o *v120; // x19
  Il2CppObject *v121; // x0
  System_String_o *v122; // x0
  System_String_o *v123; // x19
  System_String_o *v124; // x0
  System_String_o *v125; // x19
  CommonUI_o *v126; // x20
  BattleRetryConfirmComponent___c_c *v127; // x8
  System_String_o *v128; // x21
  System_Action_o *_9__30_0; // x22
  Il2CppObject *v130; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  Il2CppObject *v138; // x28
  Il2CppObject *v139; // x29
  il2cpp_array_size_t v140; // w23
  struct System_Int32_array *v141; // x8
  struct System_Int32_array *v142; // x8
  DataManager_o *v143; // x24
  ItemEntity_o *v144; // x20
  int64_t m_CancellationTokenSource_high; // x25
  struct System_Int32_array *v146; // x8
  System_String_o *v147; // x0
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  __int64 v150; // x3
  __int64 v151; // x4
  struct System_Int32_array *v152; // x8
  System_String_o *v153; // x24
  Il2CppObject *v154; // x0
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  System_String_o *v157; // x0
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  int32_t v160; // w24
  bool v161; // w19
  System_String_o *v162; // x24
  __int64 v163; // x2
  __int64 v164; // x3
  __int64 v165; // x4
  Il2CppObject *v166; // x25
  __int64 v167; // x2
  __int64 v168; // x3
  __int64 v169; // x4
  Il2CppObject *v170; // x0
  System_String_o *v171; // x0
  int32_t v172; // w2
  const MethodInfo *v173; // x3
  System_String_o *v174; // x20
  __int64 v175; // x2
  __int64 v176; // x3
  __int64 v177; // x4
  Il2CppObject *v178; // x0
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  struct BattleRetryConfirmComponent_RetryConfirmItemStr_array *v181; // x8
  _QWORD *v182; // x10
  __int64 v183; // x9
  __int128 v184; // q0
  __int128 v185; // q1
  char *v186; // x8
  const MethodInfo_3723D74 *v187; // x2
  System_String_o *v188; // x19
  Il2CppObject *v189; // x0
  System_String_o *v190; // x0
  System_String_o *v191; // x19
  System_String_o *v192; // x0
  System_String_o *v193; // x19
  CommonUI_o *v194; // x20
  BattleRetryConfirmComponent___c_c *v195; // x8
  System_Action_o *_9__30_1; // x22
  System_String_o *v197; // x21
  Il2CppObject *v198; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v199; // x0
  int32_t v200; // w2
  const MethodInfo *v201; // x3
  QuestUseItemInfo_array *CachedAvailableQuestUseItems; // x20
  const MethodInfo *v204; // x2
  struct BattleRetryConfirmQuestUseItemButtons_o *QuestUseItemButtons; // x0
  int32_t v206; // w2
  const MethodInfo *v207; // x3
  const MethodInfo *v208; // x1
  MapControl_QuestInfo_o *v209; // x20
  int32_t questId; // w22
  __int64 v211; // x1
  bool IsQuestClear_39516796; // w22
  TerminalPramsManager_c *v213; // x0
  int32_t QuestId_k__BackingField; // w23
  int32_t CampaignCostCalcValue; // w22
  int32_t v216; // w8
  int32_t ActConsumeCost; // w20
  System_String_o *CostValueColor; // x22
  __int64 v219; // x2
  __int64 v220; // x3
  __int64 v221; // x4
  Il2CppObject *v222; // x0
  System_String_o *v223; // x0
  int v224; // w19
  Il2CppObject *v225; // x20
  System_String_o *v226; // x22
  __int64 v227; // x2
  __int64 v228; // x3
  __int64 v229; // x4
  Il2CppObject *v230; // x0
  Il2CppObject *v231; // x22
  System_String_o *v232; // x0
  int32_t v233; // w2
  const MethodInfo *v234; // x3
  System_String_o *v235; // x0
  System_String_o *v236; // x1
  int32_t v237; // w2
  const MethodInfo *v238; // x3
  System_String_o *v239; // x0
  int32_t v240; // w2
  const MethodInfo *v241; // x3
  System_String_o *v242; // x20
  __int64 v243; // x2
  __int64 v244; // x3
  __int64 v245; // x4
  Il2CppObject *v246; // x0
  int32_t v247; // w2
  const MethodInfo *v248; // x3
  char v249; // w20
  int32_t v250; // w23
  UnityEngine_Object_o *mainText; // x22
  UILabel_o *v252; // x22
  UnityEngine_Component_o *v253; // x0
  int32_t v254; // w1
  System_String_o *v255; // x0
  int32_t v256; // w2
  const MethodInfo *v257; // x3
  System_String_o *v258; // x0
  UnityEngine_Object_o *buttonRoot; // x20
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v260; // x0
  const MethodInfo *v261; // x4
  BattleRetryConfirmContents_o *v262; // x0
  int32_t v263; // w2
  const MethodInfo *v264; // x3
  System_Action_o *v265; // x20
  BattleRetryConfirmComponent_o *v266; // x0
  const MethodInfo *v267; // x2
  System_Collections_IEnumerator_o *v268; // x0
  struct BattleRetryConfirmContents_o *v269; // x1
  int32_t v270; // w2
  const MethodInfo *v271; // x3
  Il2CppObject *v272; // [xsp+48h] [xbp-1F8h]
  Il2CppObject *v273; // [xsp+48h] [xbp-1F8h]
  __int64 v274; // [xsp+50h] [xbp-1F0h]
  __int64 v275; // [xsp+50h] [xbp-1F0h]
  BattleRetryConfirmComponent_o *v276; // [xsp+58h] [xbp-1E8h]
  BattleRetryConfirmComponent_o *v277; // [xsp+58h] [xbp-1E8h]
  int v278; // [xsp+64h] [xbp-1DCh]
  UserGameEntity_o **p_userGameEntity; // [xsp+88h] [xbp-1B8h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v280; // [xsp+90h] [xbp-1B0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v281; // [xsp+C0h] [xbp-180h]
  int32_t fixedVal; // [xsp+ECh] [xbp-154h] BYREF
  CGThumbnailListItem_o v283; // [xsp+F0h] [xbp-150h] BYREF
  int v284; // [xsp+17Ch] [xbp-C4h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v285; // [xsp+180h] [xbp-C0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v286; // [xsp+1B0h] [xbp-90h] BYREF

  if ( (byte_4B1FC70 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&CondType_TypeInfo, v3);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1BCAFF8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_1BCAFF8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&int_TypeInfo, v9);
    sub_1BCAFF8(&long_TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__, v13);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__get_Count__,
      v14);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo, v15);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v16);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v17);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v18);
    sub_1BCAFF8(&MapControl_QuestInfo_TypeInfo, v19);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1BCAFF8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v22);
    sub_1BCAFF8(&System_Text_StringBuilder_TypeInfo, v23);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v24);
    sub_1BCAFF8(&Method_BattleRetryConfirmComponent___c__SetValues_b__30_0__, v25);
    sub_1BCAFF8(&Method_BattleRetryConfirmComponent___c__SetValues_b__30_1__, v26);
    sub_1BCAFF8(&Method_BattleRetryConfirmComponent___c__DisplayClass30_0__SetValues_b__2__, v27);
    sub_1BCAFF8(&BattleRetryConfirmComponent___c__DisplayClass30_0_TypeInfo, v28);
    sub_1BCAFF8(&BattleRetryConfirmComponent___c_TypeInfo, v29);
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, v30);
    sub_1BCAFF8(&StringLiteral_2846/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, v31);
    sub_1BCAFF8(&StringLiteral_3761/*"CONSUME_TYPE_AP"*/, v32);
    sub_1BCAFF8(&StringLiteral_10801/*"QUEST_ITEM_COST_OVER"*/, v33);
    sub_1BCAFF8(&StringLiteral_2844/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, v34);
    sub_1BCAFF8(&StringLiteral_2843/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_NONE_SPACE"*/, v35);
    sub_1BCAFF8(&StringLiteral_2845/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, v36);
    sub_1BCAFF8(&StringLiteral_2017/*"AP_OVER_MAX_COLOR"*/, v37);
    sub_1BCAFF8(&StringLiteral_3762/*"CONSUME_TYPE_RP"*/, v38);
    sub_1BCAFF8(&StringLiteral_2850/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, v39);
    sub_1BCAFF8(&StringLiteral_2849/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, v40);
    sub_1BCAFF8(&StringLiteral_2837/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/, v41);
    sub_1BCAFF8(&StringLiteral_44/*"\n\n"*/, v42);
    sub_1BCAFF8(&StringLiteral_2847/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v43);
    sub_1BCAFF8(&StringLiteral_2839/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, v44);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v45);
    sub_1BCAFF8(&StringLiteral_2840/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_NONE_SPACE"*/, v46);
    sub_1BCAFF8(&StringLiteral_2848/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, v47);
    sub_1BCAFF8(&StringLiteral_2841/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, v48);
    sub_1BCAFF8(&StringLiteral_2842/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, v49);
    byte_4B1FC70 = 1;
  }
  v284 = 0;
  memset(&v283.fields.basePosition.fields.y, 0, 40);
  memset(&v283.fields.sortValue1, 0, 40);
  memset(&v283, 0, 40);
  fixedVal = 0;
  v50 = sub_1BCB244(BattleRetryConfirmComponent___c__DisplayClass30_0_TypeInfo);
  BattleRetryConfirmComponent___c__DisplayClass30_0___ctor(
    (BattleRetryConfirmComponent___c__DisplayClass30_0_o *)v50,
    0LL);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v52, v53);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_210;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4B1684E )
  {
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v55);
    byte_4B1684E = 1;
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
                                (const MethodInfo_32C7E00 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_210;
  v57 = (QuestEntity_o *)Instance;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0, 0LL);
  v284 = 0;
  memset(&v283.fields.basePosition.fields.y, 0, 40);
  v59 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_1BCB244(System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v59,
    (const MethodInfo_3723450 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  v60 = (System_Text_StringBuilder_o *)sub_1BCB244(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v60, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v61 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3761/*"CONSUME_TYPE_AP"*/, 0LL);
  switch ( QuestEntity__GetConsumeType(v57, 0LL) )
  {
    case 1:
      v64 = v57;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3761/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v61 = (Il2CppObject *)Instance;
      Instance = (DataManager_o *)UserGameEntity__getAct(*p_userGameEntity, 0LL);
      v284 = (int)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      actMax = (*p_userGameEntity)->fields.actMax;
      goto LABEL_30;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3762/*"CONSUME_TYPE_RP"*/, 0LL);
      v64 = v57;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v61 = (Il2CppObject *)Instance;
      Instance = (DataManager_o *)UserGameEntity__getRp(*p_userGameEntity, 0LL);
      v284 = (int)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      if ( !byte_4B1918C )
      {
        sub_1BCAFF8(&BalanceConfig_TypeInfo, v55);
        byte_4B1918C = 1;
      }
      v66 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v66 = BalanceConfig_TypeInfo;
      }
      actMax = v66->static_fields->UerGameRpMax;
LABEL_30:
      v278 = actMax;
      goto LABEL_151;
    case 3:
      v274 = v50;
      v276 = this;
      *(_QWORD *)&v283.fields.basePosition.fields.y = StringLiteral_1/*""*/;
      v272 = (Il2CppObject *)StringLiteral_1/*""*/;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v283.fields.basePosition.fields.y, (int32_t)StringLiteral_1/*""*/, v62, v63);
      v283.fields.viewObject = (struct ListViewObject_o *)StringLiteral_1/*""*/;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v283.fields.viewObject, (int32_t)StringLiteral_1/*""*/, v67, v68);
      if ( !ItemConsumeEntity )
        goto LABEL_76;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v69 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v70 = DataManager__GetMasterData_object_(
              Instance,
              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_76;
      v72 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, v55);
          byte_4B165D1 = 1;
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
        if ( v72 >= itemIds->max_length )
          goto LABEL_211;
        if ( !v70 )
          goto LABEL_210;
        Instance = (DataManager_o *)UserItemMaster__GetEntity(
                                      (UserItemMaster_o *)v70,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      itemIds->m_Items[v72 + 1],
                                      0LL);
        v74 = ItemConsumeEntity->fields.itemIds;
        if ( !v74 )
          goto LABEL_210;
        if ( v72 >= v74->max_length )
          goto LABEL_211;
        if ( !v69 )
          goto LABEL_210;
        v75 = Instance;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v69,
                                      v74->m_Items[v72 + 1],
                                      (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_210;
        v76 = (ItemEntity_o *)Instance;
        if ( LODWORD(Instance->fields.lookup) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_210;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v75 )
        {
          Instance = (DataManager_o *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL);
          qp = 0LL;
          if ( ((unsigned __int8)Instance & 1) != 0 )
            qp = SHIDWORD(v75->fields.m_CancellationTokenSource);
        }
        else
        {
          qp = 0LL;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_210;
        if ( v72 >= nums->max_length )
          goto LABEL_211;
        if ( qp < nums->m_Items[v72 + 1] )
        {
          Instance = (DataManager_o *)System_String__Concat_62450424(
                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                        v76->fields.name,
                                        0LL);
          if ( !v60 )
            goto LABEL_210;
          System_Text_StringBuilder__Append_62534368(v60, (System_String_o *)Instance, 0LL);
        }
        memset(&v283.fields.sortValue1, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v79 = LocalizationManager__Get((System_String_o *)StringLiteral_2845/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v283.fields.sortValue1 = (int64_t)System_String__Format(v79, (Il2CppObject *)v76->fields.name, 0LL);
        sub_1BCAF9C((CGThumbnailListItem_o *)&v283.fields.sortValue1, v283.fields.sortValue1, v80, v81);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2846/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v84 = ItemConsumeEntity->fields.nums;
        if ( !v84 )
          goto LABEL_210;
        if ( v72 >= v84->max_length )
          goto LABEL_211;
        v85 = (System_String_o *)Instance;
        LODWORD(v286.fields.useName) = v84->m_Items[v72 + 1];
        v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v286, v71, v82, v83);
        v283.fields.sortStr1 = System_String__Format(v85, v86, 0LL);
        sub_1BCAF9C((CGThumbnailListItem_o *)&v283.fields.sortStr1, (int32_t)v283.fields.sortStr1, v87, v88);
        v89 = LocalizationManager__Get((System_String_o *)StringLiteral_2848/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v283.fields.sortValue1B = (int64_t)System_String__Format(v89, (Il2CppObject *)v76->fields.name, 0LL);
        sub_1BCAF9C((CGThumbnailListItem_o *)&v283.fields.sortValue1B, v283.fields.sortValue1B, v90, v91);
        MaxNum = ItemEntity__GetMaxNum(v76, 0LL);
        v93 = MaxNum > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( MaxNum < 1 )
        {
          v106 = LocalizationManager__Get((System_String_o *)StringLiteral_2849/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          v286.fields.useName = (struct System_String_o *)qp;
          v110 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v286, v107, v108, v109);
          v103 = System_String__Format(v106, v110, 0LL);
        }
        else
        {
          v94 = LocalizationManager__Get((System_String_o *)StringLiteral_2850/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          v286.fields.useName = (struct System_String_o *)qp;
          v98 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v286, v95, v96, v97);
          LODWORD(v285.fields.useName) = ItemEntity__GetMaxNum(v76, 0LL);
          v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v285, v99, v100, v101);
          v103 = System_String__Format_62491716(v94, v98, v102, 0LL);
        }
        v283.fields.sortValue2 = (int64_t)v103;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v283.fields.sortValue2, (int32_t)v103, v104, v105);
        LOBYTE(v283.fields.sortValue2B) = v93;
        v281 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v283.fields.sortValue1;
        if ( !v59 )
          goto LABEL_210;
        v285 = v281;
        items = v59->fields._items;
        v114 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++v59->fields._version;
        if ( !items )
          goto LABEL_210;
        size = v59->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v119 = *(const MethodInfo_3723D74 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL);
          v286 = v285;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            v59,
            &v286,
            v119);
        }
        else
        {
          v59->fields._size = size + 1;
          v116 = *(_OWORD *)&v285.fields.useName;
          v117 = *(_OWORD *)&v285.fields.possessionName;
          v118 = (char *)items + 40 * size;
          *((_QWORD *)v118 + 8) = *(_QWORD *)&v285.fields.isIndividualLimit;
          *((_OWORD *)v118 + 2) = v116;
          *((_OWORD *)v118 + 3) = v117;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v118 + 32), 0, v111, v112);
        }
        Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v72, 0LL);
      }
      while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_76:
      if ( !v60 )
        goto LABEL_210;
      v50 = v274;
      this = v276;
      v64 = v57;
      if ( System_Text_StringBuilder__get_Length(v60, 0LL) < 1 )
      {
        v61 = v272;
        v278 = 0;
LABEL_151:
        Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          LOBYTE(Instance->fields.nowLoadCount) = 0;
          Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( Instance )
          {
            PartyOrganizationUtility__CacheQuestUseItems((PartyOrganizationUtility_o *)Instance, 0LL);
            Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
            if ( Instance )
            {
              CachedAvailableQuestUseItems = PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
                                               (PartyOrganizationUtility_o *)Instance,
                                               0LL);
              QuestUseItemButtons = BattleRetryConfirmComponent__CreateQuestUseItemButtons(
                                      this,
                                      CachedAvailableQuestUseItems,
                                      v204);
              this->fields.currentQuestUseItemButtons = QuestUseItemButtons;
              sub_1BCAF9C(
                (CGThumbnailListItem_o *)&this->fields.currentQuestUseItemButtons,
                (int32_t)QuestUseItemButtons,
                v206,
                v207);
              if ( CachedAvailableQuestUseItems )
              {
                if ( v50 )
                {
                  *(_BYTE *)(v50 + 16) = CachedAvailableQuestUseItems->max_length != 0;
                  if ( QuestEntity__GetConsumeType(v64, 0LL) == 1
                    || QuestEntity__GetConsumeType(v64, 0LL) == 2
                    || QuestEntity__GetConsumeType(v64, 0LL) == 4 )
                  {
                    v209 = (MapControl_QuestInfo_o *)sub_1BCB244(MapControl_QuestInfo_TypeInfo);
                    MapControl_QuestInfo___ctor(v209, 0LL);
                    if ( !v209 )
                      goto LABEL_210;
                    MapControl_QuestInfo__SetTerminalParamsValue(v209, 0LL);
                    questId = v209->fields.questId;
                    if ( !CondType_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                    fixedVal = -1;
                    IsQuestClear_39516796 = CondType__IsQuestClear_39516796(questId, -1, 0, 0LL);
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    if ( !byte_4B1684E )
                    {
                      sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v211);
                      byte_4B1684E = 1;
                    }
                    v213 = TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      v213 = TerminalPramsManager_TypeInfo;
                    }
                    QuestId_k__BackingField = v213->static_fields->_QuestId_k__BackingField;
                    if ( !byte_4B1684D )
                    {
                      sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v211);
                      v213 = TerminalPramsManager_TypeInfo;
                      byte_4B1684D = 1;
                    }
                    if ( !v213->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v213);
                      v213 = TerminalPramsManager_TypeInfo;
                    }
                    CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                                              v64,
                                              QuestId_k__BackingField,
                                              v213->static_fields->_PhaseCnt_k__BackingField,
                                              !IsQuestClear_39516796,
                                              &fixedVal,
                                              0LL);
                    Instance = (DataManager_o *)MapControl_QuestInfo__GetMine(v209, 0LL);
                    if ( !Instance )
                      goto LABEL_210;
                    QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
                    v216 = fixedVal;
                    v209->fields.costCalcVal = CampaignCostCalcValue;
                    v209->fields._fixedCostVal_k__BackingField = v216;
                    ActConsumeCost = MapControl_QuestInfo__GetActConsumeCost(v209, 0LL);
                    CostValueColor = QuestEntity__GetCostValueColor(
                                       CampaignCostCalcValue,
                                       (ActConsumeCost > v278) | (unsigned __int8)(ActConsumeCost > v284),
                                       0LL);
                    LODWORD(v286.fields.useName) = ActConsumeCost;
                    v222 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v286, v219, v220, v221);
                    v223 = System_String__Format(CostValueColor, v222, 0LL);
                    v224 = v284;
                    v225 = (Il2CppObject *)v223;
                    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v284, 0LL);
                    if ( v278 < v224 )
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v226 = LocalizationManager__Get((System_String_o *)StringLiteral_2017/*"AP_OVER_MAX_COLOR"*/, 0LL);
                      LODWORD(v286.fields.useName) = v284;
                      v230 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v286, v227, v228, v229);
                      Instance = (DataManager_o *)System_String__Format(v226, v230, 0LL);
                    }
                    v231 = (Il2CppObject *)Instance;
                    if ( *(_BYTE *)(v50 + 16) )
                      goto LABEL_214;
                    if ( !v59 )
                      goto LABEL_210;
                    if ( v59->fields._size )
                    {
LABEL_214:
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v232 = LocalizationManager__Get((System_String_o *)StringLiteral_2842/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0LL);
                      *(_QWORD *)&v283.fields.basePosition.fields.y = System_String__Format(v232, v61, 0LL);
                      sub_1BCAF9C(
                        (CGThumbnailListItem_o *)&v283.fields.basePosition.fields.y,
                        SLODWORD(v283.fields.basePosition.fields.y),
                        v233,
                        v234);
                      v235 = LocalizationManager__Get((System_String_o *)StringLiteral_2839/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0LL);
                      v236 = System_String__Format(v235, v61, 0LL);
                    }
                    else
                    {
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                      v255 = LocalizationManager__Get((System_String_o *)StringLiteral_2843/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_NONE_SPACE"*/, 0LL);
                      *(_QWORD *)&v283.fields.basePosition.fields.y = System_String__Format(v255, v61, 0LL);
                      sub_1BCAF9C(
                        (CGThumbnailListItem_o *)&v283.fields.basePosition.fields.y,
                        SLODWORD(v283.fields.basePosition.fields.y),
                        v256,
                        v257);
                      v258 = LocalizationManager__Get((System_String_o *)StringLiteral_2840/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_NONE_SPACE"*/, 0LL);
                      v236 = System_String__Format(v258, v61, 0LL);
                    }
                    *(_QWORD *)&v283.fields._Id_k__BackingField = v236;
                    sub_1BCAF9C((CGThumbnailListItem_o *)&v283.fields._Id_k__BackingField, (int32_t)v236, v237, v238);
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    v239 = LocalizationManager__Get((System_String_o *)StringLiteral_2844/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0LL);
                    v283.fields.viewObject = (struct ListViewObject_o *)System_String__Format(v239, v225, 0LL);
                    sub_1BCAF9C(
                      (CGThumbnailListItem_o *)&v283.fields.viewObject,
                      (int32_t)v283.fields.viewObject,
                      v240,
                      v241);
                    v242 = LocalizationManager__Get((System_String_o *)StringLiteral_2841/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0LL);
                    LODWORD(v286.fields.useName) = v278;
                    v246 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v286, v243, v244, v245);
                    *(_QWORD *)&v283.fields._Type_k__BackingField = System_String__Format_62491716(
                                                                      v242,
                                                                      v231,
                                                                      v246,
                                                                      0LL);
                    sub_1BCAF9C(
                      (CGThumbnailListItem_o *)&v283.fields._Type_k__BackingField,
                      v283.fields._Type_k__BackingField,
                      v247,
                      v248);
                  }
                  BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v208);
                  Instance = (DataManager_o *)System_String__IsNullOrEmpty(
                                                *(System_String_o **)&v283.fields.basePosition.fields.y,
                                                0LL);
                  if ( !v59 )
                    goto LABEL_210;
                  v249 = (char)Instance;
                  v250 = v59->fields._size;
                  mainText = (UnityEngine_Object_o *)this->fields.mainText;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(mainText, 0LL, 0LL) )
                  {
                    v252 = this->fields.mainText;
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2837/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/, 0LL);
                    if ( !v252 )
                      goto LABEL_210;
                    UILabel__set_text(v252, (System_String_o *)Instance, 0LL);
                    if ( !*(_BYTE *)(v50 + 16) )
                    {
                      v253 = (UnityEngine_Component_o *)this->fields.mainText;
                      if ( v250 + ((v249 & 1) == 0) == 3 )
                      {
                        ComponentHelper__SetLocalPositionY(v253, 179.0, 0LL);
                        Instance = (DataManager_o *)this->fields.mainText;
                        if ( !Instance )
                          goto LABEL_210;
                        v254 = 22;
                      }
                      else
                      {
                        ComponentHelper__SetLocalPositionY(v253, 178.0, 0LL);
                        Instance = (DataManager_o *)this->fields.mainText;
                        if ( !Instance )
                          goto LABEL_210;
                        v254 = 24;
                      }
                      UILabel__set_fontSize((UILabel_o *)Instance, v254, 0LL);
                    }
                  }
                  buttonRoot = (UnityEngine_Object_o *)this->fields.buttonRoot;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( UnityEngine_Object__op_Inequality(buttonRoot, 0LL, 0LL) && !*(_BYTE *)(v50 + 16) )
                    GameObjectExtensions__SetLocalPositionY(this->fields.buttonRoot, -164.0, 0LL);
                  v280 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v283.fields.basePosition.fields.y;
                  v260 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                           v59,
                           (const MethodInfo_3725D84 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
                  v262 = BattleRetryConfirmComponent__CreateContents(this, &v280, v260, *(_BYTE *)(v50 + 16), v261);
                  *(_QWORD *)(v50 + 24) = v262;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v50 + 24), (int32_t)v262, v263, v264);
                  Instance = *(DataManager_o **)(v50 + 24);
                  if ( Instance )
                  {
                    BattleRetryConfirmContents__Initialized((BattleRetryConfirmContents_o *)Instance, 0LL);
                    v265 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
                    System_Action___ctor(
                      v265,
                      (Il2CppObject *)v50,
                      Method_BattleRetryConfirmComponent___c__DisplayClass30_0__SetValues_b__2__,
                      0LL);
                    v268 = BattleRetryConfirmComponent__WaitOneFrame(v266, v265, v267);
                    UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v268, 0LL);
                    v269 = *(struct BattleRetryConfirmContents_o **)(v50 + 24);
                    this->fields.currentContents = v269;
                    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.currentContents, (int32_t)v269, v270, v271);
                    return 1;
                  }
                }
              }
            }
          }
        }
LABEL_210:
        sub_1BCB254(Instance, v55);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v120 = LocalizationManager__Get((System_String_o *)StringLiteral_10801/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v121 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v60->klass->vtable._3_ToString.method)(
                               v60,
                               v60->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v122 = System_String__Format(v120, v121, 0LL);
      v123 = System_String__Concat_62450424(v122, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v124 = LocalizationManager__Get((System_String_o *)StringLiteral_2847/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v125 = System_String__Concat_62450424(v123, v124, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v126 = (CommonUI_o *)Instance;
      v127 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v127 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      v128 = (System_String_o *)StringLiteral_1/*""*/;
      _9__30_0 = v127->static_fields->__9__30_0;
      if ( !_9__30_0 )
      {
        if ( !v127->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v127);
          v127 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v130 = (Il2CppObject *)v127->static_fields->__9;
        _9__30_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(_9__30_0, v130, Method_BattleRetryConfirmComponent___c__SetValues_b__30_0__, 0LL);
        static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        static_fields->__9__30_0 = _9__30_0;
        sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v132, v133);
      }
      if ( !v126 )
        goto LABEL_210;
      CommonUI__OpenNotificationDialog(v126, v128, v125, _9__30_0, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0, 0LL);
      return 0;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3761/*"CONSUME_TYPE_AP"*/, 0LL);
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v273 = (Il2CppObject *)Instance;
      v275 = v50;
      v277 = this;
      Instance = (DataManager_o *)UserGameEntity__getAct(*p_userGameEntity, 0LL);
      v284 = (int)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_210;
      v278 = (*p_userGameEntity)->fields.actMax;
      *(_QWORD *)&v283.fields.basePosition.fields.y = StringLiteral_1/*""*/;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v283.fields.basePosition.fields.y, (int32_t)StringLiteral_1/*""*/, v134, v135);
      v283.fields.viewObject = (struct ListViewObject_o *)StringLiteral_1/*""*/;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v283.fields.viewObject, (int32_t)StringLiteral_1/*""*/, v136, v137);
      if ( !ItemConsumeEntity )
        goto LABEL_137;
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v138 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_210;
      v139 = DataManager__GetMasterData_object_(
               Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_137;
      v140 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B165D1 )
        {
          sub_1BCAFF8(&NetworkManager_TypeInfo, v55);
          byte_4B165D1 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        v141 = ItemConsumeEntity->fields.itemIds;
        if ( !v141 )
          goto LABEL_210;
        if ( v140 >= v141->max_length )
          goto LABEL_211;
        if ( !v139 )
          goto LABEL_210;
        Instance = (DataManager_o *)UserItemMaster__GetEntity(
                                      (UserItemMaster_o *)v139,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      v141->m_Items[v140 + 1],
                                      0LL);
        v142 = ItemConsumeEntity->fields.itemIds;
        if ( !v142 )
          goto LABEL_210;
        if ( v140 >= v142->max_length )
          goto LABEL_211;
        if ( !v138 )
          goto LABEL_210;
        v143 = Instance;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)v138,
                                      v142->m_Items[v140 + 1],
                                      (const MethodInfo_32C7E00 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_210;
        v144 = (ItemEntity_o *)Instance;
        if ( LODWORD(Instance->fields.lookup) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_210;
          m_CancellationTokenSource_high = (*p_userGameEntity)->fields.qp;
        }
        else if ( v143 )
        {
          Instance = (DataManager_o *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL);
          m_CancellationTokenSource_high = 0LL;
          if ( ((unsigned __int8)Instance & 1) != 0 )
            m_CancellationTokenSource_high = SHIDWORD(v143->fields.m_CancellationTokenSource);
        }
        else
        {
          m_CancellationTokenSource_high = 0LL;
        }
        v146 = ItemConsumeEntity->fields.nums;
        if ( !v146 )
          goto LABEL_210;
        if ( v140 >= v146->max_length )
          goto LABEL_211;
        if ( m_CancellationTokenSource_high < v146->m_Items[v140 + 1] )
        {
          Instance = (DataManager_o *)System_String__Concat_62450424(
                                        (System_String_o *)StringLiteral_43/*"\n"*/,
                                        v144->fields.name,
                                        0LL);
          if ( !v60 )
            goto LABEL_210;
          System_Text_StringBuilder__Append_62534368(v60, (System_String_o *)Instance, 0LL);
        }
        memset(&v283, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v147 = LocalizationManager__Get((System_String_o *)StringLiteral_2845/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v283.klass = (CGThumbnailListItem_c *)System_String__Format(v147, (Il2CppObject *)v144->fields.name, 0LL);
        sub_1BCAF9C(&v283, (int32_t)v283.klass, v148, v149);
        Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2846/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v152 = ItemConsumeEntity->fields.nums;
        if ( !v152 )
          goto LABEL_210;
        if ( v140 >= v152->max_length )
LABEL_211:
          sub_1BCB25C(Instance, v55, v71);
        v153 = (System_String_o *)Instance;
        LODWORD(v286.fields.useName) = v152->m_Items[v140 + 1];
        v154 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v286, v71, v150, v151);
        v283.monitor = System_String__Format(v153, v154, 0LL);
        sub_1BCAF9C((CGThumbnailListItem_o *)&v283.monitor, (int32_t)v283.monitor, v155, v156);
        v157 = LocalizationManager__Get((System_String_o *)StringLiteral_2848/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        *(_QWORD *)&v283.fields.selectNum = System_String__Format(v157, (Il2CppObject *)v144->fields.name, 0LL);
        sub_1BCAF9C((CGThumbnailListItem_o *)&v283.fields, v283.fields.selectNum, v158, v159);
        v160 = ItemEntity__GetMaxNum(v144, 0LL);
        v161 = v160 > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v160 < 1 )
        {
          v174 = LocalizationManager__Get((System_String_o *)StringLiteral_2849/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          v286.fields.useName = (struct System_String_o *)m_CancellationTokenSource_high;
          v178 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v286, v175, v176, v177);
          v171 = System_String__Format(v174, v178, 0LL);
        }
        else
        {
          v162 = LocalizationManager__Get((System_String_o *)StringLiteral_2850/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          v286.fields.useName = (struct System_String_o *)m_CancellationTokenSource_high;
          v166 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v286, v163, v164, v165);
          LODWORD(v285.fields.useName) = ItemEntity__GetMaxNum(v144, 0LL);
          v170 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v285, v167, v168, v169);
          v171 = System_String__Format_62491716(v162, v166, v170, 0LL);
        }
        *(_QWORD *)&v283.fields.sortIndex = v171;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v283.fields.sortIndex, (int32_t)v171, v172, v173);
        LOBYTE(v283.fields.sortValue0) = v161;
        *(_OWORD *)&v281.fields.useName = *(_OWORD *)&v283.klass;
        *(_OWORD *)&v281.fields.possessionName = *(_OWORD *)&v283.fields.selectNum;
        *(_QWORD *)&v281.fields.isIndividualLimit = v283.fields.sortValue0;
        if ( !v59 )
          goto LABEL_210;
        v285 = v281;
        v181 = v59->fields._items;
        v182 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++v59->fields._version;
        if ( !v181 )
          goto LABEL_210;
        v183 = v59->fields._size;
        if ( (unsigned int)v183 >= v181->max_length )
        {
          v187 = *(const MethodInfo_3723D74 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL);
          v286 = v285;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            v59,
            &v286,
            v187);
        }
        else
        {
          v59->fields._size = v183 + 1;
          v184 = *(_OWORD *)&v285.fields.useName;
          v185 = *(_OWORD *)&v285.fields.possessionName;
          v186 = (char *)v181 + 40 * v183;
          *((_QWORD *)v186 + 8) = *(_QWORD *)&v285.fields.isIndividualLimit;
          *((_OWORD *)v186 + 2) = v184;
          *((_OWORD *)v186 + 3) = v185;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v186 + 32), 0, v179, v180);
        }
        Instance = (DataManager_o *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v140, 0LL);
      }
      while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_137:
      if ( !v60 )
        goto LABEL_210;
      v50 = v275;
      this = v277;
      v61 = v273;
      v64 = v57;
      if ( System_Text_StringBuilder__get_Length(v60, 0LL) < 1 )
        goto LABEL_151;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v188 = LocalizationManager__Get((System_String_o *)StringLiteral_10801/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v189 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v60->klass->vtable._3_ToString.method)(
                               v60,
                               v60->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v190 = System_String__Format(v188, v189, 0LL);
      v191 = System_String__Concat_62450424(v190, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v192 = LocalizationManager__Get((System_String_o *)StringLiteral_2847/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v193 = System_String__Concat_62450424(v191, v192, 0LL);
      Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v194 = (CommonUI_o *)Instance;
      v195 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v195 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      _9__30_1 = v195->static_fields->__9__30_1;
      v197 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__30_1 )
      {
        if ( !v195->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v195);
          v195 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v198 = (Il2CppObject *)v195->static_fields->__9;
        _9__30_1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
        System_Action___ctor(_9__30_1, v198, Method_BattleRetryConfirmComponent___c__SetValues_b__30_1__, 0LL);
        v199 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v199->__9__30_1 = _9__30_1;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v199->__9__30_1, (int32_t)_9__30_1, v200, v201);
      }
      if ( !v194 )
        goto LABEL_210;
      CommonUI__OpenNotificationDialog(v194, v197, v193, _9__30_1, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0, 0LL);
      return 0;
    default:
      v278 = 0;
      v64 = v57;
      goto LABEL_151;
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
  const MethodInfo *v8; // x3

  if ( (byte_4B1FC76 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleRetryConfirmComponent__WaitOneFrame_d__36_TypeInfo, action);
    byte_4B1FC76 = 1;
  }
  v4 = sub_1BCB244(BattleRetryConfirmComponent__WaitOneFrame_d__36_TypeInfo);
  BattleRetryConfirmComponent__WaitOneFrame_d__36___ctor(
    (BattleRetryConfirmComponent__WaitOneFrame_d__36_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_1BCB254(v5, v6);
  *(_QWORD *)(v4 + 32) = action;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v4 + 32), (int32_t)action, v7, v8);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattleRetryConfirmComponent___BaseDialogOpen_b__41_0(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


void __fastcall BattleRetryConfirmComponent__WaitOneFrame_d__36___ctor(
        BattleRetryConfirmComponent__WaitOneFrame_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRetryConfirmComponent__WaitOneFrame_d__36__MoveNext(
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
    ActionExtensions__Call(action, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleRetryConfirmComponent__WaitOneFrame_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRetryConfirmComponent__WaitOneFrame_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRetryConfirmComponent__WaitOneFrame_d__36__System_Collections_IEnumerator_Reset(
        BattleRetryConfirmComponent__WaitOneFrame_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__36_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall BattleRetryConfirmComponent__WaitOneFrame_d__36__System_Collections_IEnumerator_get_Current(
        BattleRetryConfirmComponent__WaitOneFrame_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRetryConfirmComponent__WaitOneFrame_d__36__System_IDisposable_Dispose(
        BattleRetryConfirmComponent__WaitOneFrame_d__36_o *this,
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

  if ( (byte_4B1FC7D & 1) == 0 )
  {
    sub_1BCAFF8(&BattleRetryConfirmComponent___c_TypeInfo, v1);
    byte_4B1FC7D = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(BattleRetryConfirmComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleRetryConfirmComponent___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)BattleRetryConfirmComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleRetryConfirmComponent___c___ctor(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmComponent___c___OnClickQuestUseItemButton_b__33_0(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B1FC80 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BCAFF8(&Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__, v2);
    byte_4B1FC80 = 1;
  }
  v3 = Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__;
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BCB010(Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v6);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__30_0(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1FC7E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4B1FC7E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_30026EC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__30_1(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1FC7F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_4B1FC7F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_30026EC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c__DisplayClass30_0___ctor(
        BattleRetryConfirmComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmComponent___c__DisplayClass30_0___SetValues_b__2(
        BattleRetryConfirmComponent___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.contents )
    sub_1BCB254(this, method);
  BattleRetryConfirmContents__SetCondensedScalePossessionAmount(this->fields.contents, this->fields.isDispUseItemUI, v2);
}