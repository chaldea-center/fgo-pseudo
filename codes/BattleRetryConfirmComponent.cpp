void BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  BaseDialog_c *v3; // x0
  int v4; // w8

  if ( (byte_5974521 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_5974521 = 1;
  }
  v3 = BaseDialog_TypeInfo;
  v4 = *(&BaseDialog_TypeInfo->_2.cctor_finished + 1);
  *(_QWORD *)&this->fields.CONFIRM_BUTTON_POSITION_ON_THREE_X = 0xC366000043660000LL;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(v3, method);
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

  if ( (byte_597451D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleRetryConfirmComponent__BaseDialogOpen_b__41_0__);
    byte_597451D = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_597451F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_597451F = 1;
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
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v12,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v12.fields._current )
          sub_2213CDC(0, v8);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v12.fields._current, 1, 0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v12,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
      if ( currentQuestUseItemButtons )
        BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 1, v10);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_21:
    sub_2213CDC(battleResultComponent, *(_QWORD *)&result);
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
    sub_2213CDC(cancelLabel, method);
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
      sub_2213CDC(0, method);
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
  __int128 v14; // q1
  __int64 v15; // x9
  System_Collections_Generic_IEnumerable_TSource__o *appended; // x0
  __int64 max_length_low; // x8
  bool v18; // zf
  __int64 v19; // x8
  __int64 v20; // x9
  __int64 v21; // x1
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v23; // x2
  BattleRetryConfirmContents_o *v24; // x20
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v26; // [xsp+0h] [xbp-70h] BYREF

  if ( (byte_5974519 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Append_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_BattleRetryConfirmContents___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974519 = 1;
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
    v14 = *(_OWORD *)&costPoint->fields.possessionName;
    v15 = *(_QWORD *)&costPoint->fields.isIndividualLimit;
    *(_OWORD *)&v26.fields.useName = *(_OWORD *)&costPoint->fields.useName;
    *(_OWORD *)&v26.fields.possessionName = v14;
    *(_QWORD *)&v26.fields.isIndividualLimit = v15;
    appended = System_Linq_Enumerable__Append_BattleRetryConfirmComponent_RetryConfirmItemStr_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)items,
                 &v26,
                 (const MethodInfo_3868620 *)Method_System_Linq_Enumerable_Append_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    window = System_Linq_Enumerable__ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr_(
               appended,
               (const MethodInfo_389BEE8 *)Method_System_Linq_Enumerable_ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    items = window;
  }
  this->fields.isNotCentering = 0;
  if ( !items )
    goto LABEL_23;
  max_length_low = LODWORD(items->max_length);
  if ( max_length_low != 1 || (v13 & 1) == 0 )
  {
    if ( max_length_low == 1 )
    {
      v18 = !isDispUseItemUI;
      v19 = 208;
      v20 = 176;
    }
    else
    {
      v18 = !isDispUseItemUI;
      if ( max_length_low == 2 )
      {
        v19 = 216;
        v20 = 184;
      }
      else
      {
        v19 = 224;
        v20 = 192;
      }
    }
    if ( !v18 )
      v19 = v20;
    v10 = *(Il2CppObject **)((char *)&this->klass + v19);
  }
  else
  {
    this->fields.isNotCentering = !isDispUseItemUI;
  }
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)this->fields.window;
  if ( !window )
    goto LABEL_23;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)window, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)UnityEngine_Object__Instantiate_object__59717116(
                                                                      v10,
                                                                      transform,
                                                                      (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_BattleRetryConfirmContents___);
  if ( !window )
LABEL_23:
    sub_2213CDC(window, v12);
  v24 = (BattleRetryConfirmContents_o *)window;
  BattleRetryConfirmContents__SetCostValues((BattleRetryConfirmContents_o *)window, items, v23);
  return v24;
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
  __int64 v9; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v11; // x21
  System_Action_object__object__o *v12; // x22
  const MethodInfo *v13; // x3

  v4 = this;
  if ( (byte_597451A & 1) == 0 )
  {
    sub_2213A60(&System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__TypeInfo);
    sub_2213A60(&Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_BattleRetryConfirmQuestUseItemButtons___);
    this = (BattleRetryConfirmComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597451A = 1;
  }
  if ( !itemInfos )
    goto LABEL_17;
  this = (BattleRetryConfirmComponent_o *)itemInfos->max_length;
  if ( !this )
    return 0;
  questUseItemButtonsPrefabs = v4->fields.questUseItemButtonsPrefabs;
  if ( !questUseItemButtonsPrefabs )
    goto LABEL_17;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, itemInfos);
    this = (BattleRetryConfirmComponent_o *)itemInfos->max_length;
  }
  this = (BattleRetryConfirmComponent_o *)System_Math__Min_77153596(
                                            (int32_t)this,
                                            questUseItemButtonsPrefabs->max_length,
                                            0);
  v6 = v4->fields.questUseItemButtonsPrefabs;
  if ( !v6 )
    goto LABEL_17;
  v7 = (_DWORD)this - 1;
  if ( (unsigned int)((_DWORD)this - 1) >= LODWORD(v6->max_length) )
    sub_2213CE4(this);
  this = (BattleRetryConfirmComponent_o *)v4->fields.window;
  if ( !this )
    goto LABEL_17;
  v8 = (Il2CppObject *)v6->m_Items[v7];
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__Instantiate_object__59717116(
          v8,
          transform,
          (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_BattleRetryConfirmQuestUseItemButtons___);
  v12 = (System_Action_object__object__o *)sub_2213CCC(System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__TypeInfo);
  System_Action_object__object____ctor(
    v12,
    (Il2CppObject *)v4,
    (intptr_t)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__,
    0);
  if ( !v11 )
LABEL_17:
    sub_2213CDC(this, itemInfos);
  BattleRetryConfirmQuestUseItemButtons__Setup(
    (BattleRetryConfirmQuestUseItemButtons_o *)v11,
    itemInfos,
    (System_Action_QuestUseItemInfo__FriendshipUpItemUseItem__o *)v12,
    v13);
  return (BattleRetryConfirmQuestUseItemButtons_o *)v11;
}


void BattleRetryConfirmComponent__Init(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v18; // x20
  unsigned __int64 v19; // x21
  intptr_t m_CachedPtr; // x8
  _QWORD *v21; // x9
  __int64 klass_low; // x10
  intptr_t v23; // x8
  __int64 v24; // x1
  __int64 v25; // x1
  UnityEngine_Object_o *mainText; // x20
  __int64 v27; // x1
  UILabel_o *v28; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *confirmLabel; // x20
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_597451C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIButton__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIButton___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIButton__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_UIButton__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_2966/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/);
    sub_2213A60(&StringLiteral_2968/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/);
    sub_2213A60(&StringLiteral_2967/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/);
    byte_597451C = 1;
  }
  root = this->fields.root;
  memset(&v32, 0, sizeof(v32));
  if ( !root )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(root, 0, 0);
  root = (UnityEngine_GameObject_o *)this->fields.buttons;
  if ( !root || !LODWORD(root[1].klass) )
  {
    v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIButton__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v4,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v4;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.buttons, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    if ( !root )
      goto LABEL_36;
    klass = root[1].klass;
    v18 = root;
    if ( (int)klass >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)klass )
          sub_2213CE4(root);
        root = (UnityEngine_GameObject_o *)this->fields.buttons;
        if ( !root )
          break;
        m_CachedPtr = root->fields.m_CachedPtr;
        method = (const MethodInfo *)*((_QWORD *)&v18[1].monitor + v19);
        v21 = Method_System_Collections_Generic_List_UIButton__Add__;
        ++HIDWORD(root[1].klass);
        if ( !m_CachedPtr )
          break;
        klass_low = SLODWORD(root[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)root,
            (Il2CppObject *)method,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = m_CachedPtr + 8 * klass_low;
          LODWORD(root[1].klass) = klass_low + 1;
          *(_QWORD *)(v23 + 32) = method;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 32), (int32_t)method, v11, v12, v13, v14, v15, v16);
        }
        LODWORD(klass) = v18[1].klass;
        if ( (__int64)++v19 >= (int)klass )
          goto LABEL_16;
      }
LABEL_36:
      sub_2213CDC(root, method);
    }
LABEL_16:
    root = (UnityEngine_GameObject_o *)this->fields.buttons;
    if ( !root )
      goto LABEL_36;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)root,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  v32 = v31;
  v31.fields._list = 0;
  *(_QWORD *)&v31.fields._index = &v32;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v32.fields._current )
      sub_2213CDC(0, v24);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v32.fields._current, 1, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  if ( !this->fields.isInitialized )
  {
    mainText = (UnityEngine_Object_o *)this->fields.mainText;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    if ( UnityEngine_Object__op_Inequality(mainText, 0, 0) )
    {
      v28 = this->fields.mainText;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
      root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2968/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0);
      if ( !v28 )
        goto LABEL_36;
      UILabel__set_text(v28, (System_String_o *)root, 0);
    }
    cancelLabel = this->fields.cancelLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v27);
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2966/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0);
    if ( !cancelLabel )
      goto LABEL_36;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2967/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0);
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
  char v4; // w8
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  Il2CppObject *Instance; // x21
  TerminalPramsManager_c *v8; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BoostFunctionUtility_CallbackFunc_o *v11; // x23
  System_Collections_Generic_List_object__o *buttons; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_597451E & 1) == 0 )
  {
    sub_2213A60(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__);
    sub_2213A60(&Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
    sub_2213A60(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_597451E = 1;
  }
  v3 = Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__;
  v4 = *((_BYTE *)Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__ + 83);
  memset(&v17, 0, sizeof(v17));
  if ( (v4 & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    v8 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v8->static_fields->_QuestId_k__BackingField;
  if ( !byte_596A92D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
    byte_596A92D = 1;
  }
  if ( !*(&v8->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v8, v6);
    v8 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v8->static_fields->_PhaseCnt_k__BackingField;
  v11 = (BoostFunctionUtility_CallbackFunc_o *)sub_2213CCC(BoostFunctionUtility_CallbackFunc_TypeInfo);
  BoostFunctionUtility_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__,
    0);
  if ( !Instance
    || (CommonUI__OpenBoostSupportRequestMenu(
          (CommonUI_o *)Instance,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          v11,
          1,
          0),
        (buttons = (System_Collections_Generic_List_object__o *)this->fields.buttons) == 0) )
  {
    sub_2213CDC(buttons, v13);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    buttons,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v17.fields._current )
      sub_2213CDC(0, v14);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v17.fields._current, 0, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
  if ( currentQuestUseItemButtons )
    BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, v15);
}


void BattleRetryConfirmComponent__OnClickCancel(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5974516 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleRetryConfirmComponent_OnClickCancel__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    byte_5974516 = 1;
  }
  state = this->fields.state;
  memset(&v11, 0, sizeof(v11));
  if ( !state )
  {
    v4 = Method_BattleRetryConfirmComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_BattleRetryConfirmComponent_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent
      || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0),
          (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0) )
    {
      sub_2213CDC(battleResultComponent, v6);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v11.fields._current )
        sub_2213CDC(0, v8);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
    if ( currentQuestUseItemButtons )
      BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, v9);
  }
}


void BattleRetryConfirmComponent__OnClickConfirm(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  BattleResultComponent_o *battleResultComponent; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5974517 & 1) == 0 )
  {
    sub_2213A60(&Method_BattleRetryConfirmComponent_OnClickConfirm__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    byte_5974517 = 1;
  }
  state = this->fields.state;
  memset(&v11, 0, sizeof(v11));
  if ( !state )
  {
    v4 = Method_BattleRetryConfirmComponent_OnClickConfirm__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickConfirm__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_BattleRetryConfirmComponent_OnClickConfirm__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent
      || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0),
          (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0) )
    {
      sub_2213CDC(battleResultComponent, v6);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v11.fields._current )
        sub_2213CDC(0, v8);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11.fields._current, 0, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
    if ( currentQuestUseItemButtons )
      BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, v9);
  }
}


void BattleRetryConfirmComponent__OnClickQuestUseItemButton(
        BattleRetryConfirmComponent_o *this,
        QuestUseItemInfo_o *info,
        FriendshipUpItemUseItem_o *item,
        const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *v6; // x21
  bool UseFlag; // w8
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  QuestUseItemInfo_o *v10; // x0
  bool v11; // w1
  System_Reflection_MethodBase_o *v12; // x0
  __int64 v13; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v15; // x0
  BattleRetryConfirmComponent_o *v16; // x19
  BattleRetryConfirmComponent___c_c *v17; // x8
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__33_0; // x22
  System_String_o *v20; // x21
  Il2CppObject *v21; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  v6 = this;
  if ( (byte_5974518 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__);
    sub_2213A60(&BattleRetryConfirmComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_10654/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/);
    this = (BattleRetryConfirmComponent_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974518 = 1;
  }
  if ( !v6->fields.state )
  {
    if ( !info )
      goto LABEL_27;
    UseFlag = QuestUseItemInfo__GetUseFlag(info, 0);
    v8 = Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__;
    if ( UseFlag )
    {
      if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_2213A78(Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
      v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0, 0);
      if ( !item )
        goto LABEL_27;
      FriendshipUpItemUseItem__ChangeButtonState(item, 0, 0);
      v10 = info;
      v11 = 0;
      goto LABEL_15;
    }
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_2213A78(Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    v12 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
    this = (BattleRetryConfirmComponent_o *)QuestUseItemInfo__IsEventPeriod(info, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !item )
        goto LABEL_27;
      FriendshipUpItemUseItem__ChangeButtonState(item, 1, 0);
      v10 = info;
      v11 = 1;
LABEL_15:
      QuestUseItemInfo__SetUseFlag(v10, v11, 0);
      this = (BattleRetryConfirmComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        PartyOrganizationUtility__SaveQuestUseItemUseState((PartyOrganizationUtility_o *)this, 0);
        return;
      }
LABEL_27:
      sub_2213CDC(this, info);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_10654/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0);
    this = (BattleRetryConfirmComponent_o *)System_String__Format(
                                              v15,
                                              (Il2CppObject *)info->fields._Name_k__BackingField,
                                              0);
    v16 = this;
    v17 = BattleRetryConfirmComponent___c_TypeInfo;
    if ( !*(&BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo, info);
      v17 = BattleRetryConfirmComponent___c_TypeInfo;
    }
    static_fields = v17->static_fields;
    _9__33_0 = static_fields->__9__33_0;
    v20 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__33_0 )
    {
      if ( !*(&v17->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v17, info);
        static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__33_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__33_0,
        v21,
        (intptr_t)Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__,
        0);
      v22 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
      v22->__9__33_0 = _9__33_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v22->__9__33_0, (int32_t)_9__33_0, v23, v24, v25, v26, v27, v28);
    }
    if ( !Instance )
      goto LABEL_27;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      v20,
      (System_String_o *)v16,
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
    sub_2213CDC(bgObj, opendFunc);
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
  __int64 v10; // x1
  BattleSetupInfo_o *v11; // x22
  __int64 v12; // x1
  UnityEngine_Object_o *boostSupportRequestLabel; // x20
  UILabel_o *v14; // x20
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v16; // x0
  UnityEngine_Object_o *v17; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5974520 & 1) == 0 )
  {
    sub_2213A60(&BattleSetupInfo_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_11625/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/);
    sub_2213A60(&StringLiteral_2965/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/);
    byte_5974520 = 1;
  }
  entity = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_596A743 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A743 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_596A92E = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v3->static_fields->_QuestId_k__BackingField;
  if ( !byte_596A92D )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_596A92D = 1;
  }
  if ( !*(&v3->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v3, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v3->static_fields->_PhaseCnt_k__BackingField;
  v7 = (BattleSetupInfo_o *)sub_2213CCC(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_53;
  v11 = BattleSetupInfo__ConvertBattleSetupInfo(
          v7,
          WarId_k__BackingField,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          0,
          0,
          0,
          0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v11 || !Master_object )
    goto LABEL_53;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          v11->fields.eventId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_53;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_object )
      goto LABEL_53;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_object,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11625/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0) == 1 )
    {
      boostSupportRequestLabel = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
      if ( UnityEngine_Object__op_Inequality(boostSupportRequestLabel, 0, 0) )
      {
        v14 = this->fields.boostSupportRequestLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_2965/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/,
                                                                        0);
        if ( !v14 )
          goto LABEL_53;
        UILabel__set_text(v14, (System_String_o *)Master_object, 0);
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
              v16 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0);
              TransformHelper__SetLocalPositionX(v16, this->fields.CONFIRM_BUTTON_POSITION_ON_THREE_X, 0);
              return;
            }
          }
        }
      }
LABEL_53:
      sub_2213CDC(Master_object, v9);
    }
  }
  else
  {
LABEL_44:
    v17 = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
    if ( UnityEngine_Object__op_Inequality(v17, 0, 0) )
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  DataManager_o *Instance; // x0
  System_String_o *v12; // x1
  Il2CppObject *MasterData_object; // x21
  QuestEntity_o *v14; // x20
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x26
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v16; // x21
  __int64 v17; // x1
  Il2CppObject *v18; // x29
  int32_t ConsumeType; // w0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct UserGameEntity_o *v27; // x8
  BalanceConfig_c *v28; // x0
  int *p_actMax; // x8
  UserGameEntity_o *v30; // x8
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct UserGameEntity_o *v37; // x8
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  Il2CppObject *v44; // x27
  Il2CppObject *v45; // x28
  unsigned int v46; // w29
  struct System_Int32_array *v47; // x8
  struct System_Int32_array *v48; // x8
  DataManager_o *v49; // x20
  ItemEntity_o *v50; // x22
  struct UserGameEntity_o *v51; // x8
  int64_t m_CancellationTokenSource_high; // x24
  struct System_Int32_array *v53; // x8
  System_String_o *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  struct System_Int32_array *v61; // x8
  System_String_o *v62; // x20
  Il2CppObject *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  System_String_o *v70; // x0
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  __int64 v77; // x1
  int32_t v78; // w8
  bool v79; // w25
  int v80; // w9
  System_String_o *v81; // x20
  Il2CppObject *v82; // x24
  Il2CppObject *v83; // x0
  System_String_o *v84; // x1
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  System_String_o *v91; // x20
  Il2CppObject *v92; // x0
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  struct BattleRetryConfirmComponent_RetryConfirmItemStr_array *v99; // x8
  _QWORD *v100; // x9
  int32_t v101; // w10
  __int128 v102; // q0
  char *v103; // x8
  const MethodInfo_44FC500 *v104; // x2
  __int64 v105; // x1
  System_String_o *v106; // x19
  Il2CppObject *v107; // x0
  System_String_o *v108; // x0
  System_String_o *v109; // x19
  System_String_o *v110; // x0
  System_String_o *v111; // x19
  CommonUI_o *v112; // x20
  BattleRetryConfirmComponent___c_c *v113; // x8
  struct BattleRetryConfirmComponent___c_StaticFields *v114; // x9
  System_Action_o *_9__30_1; // x22
  System_String_o *v116; // x21
  Il2CppObject *v117; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v118; // x0
  System_String_o *v119; // x2
  System_String_o *v120; // x3
  int32_t v121; // w4
  int32_t v122; // w5
  bool v123; // w6
  bool v124; // w7
  struct UserGameEntity_o *v125; // x8
  System_String_o *v126; // x2
  System_String_o *v127; // x3
  int32_t v128; // w4
  int32_t v129; // w5
  bool v130; // w6
  bool v131; // w7
  Il2CppObject *v132; // x27
  Il2CppObject *v133; // x28
  unsigned int v134; // w29
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v136; // x8
  DataManager_o *v137; // x20
  ItemEntity_o *v138; // x22
  struct UserGameEntity_o *userGameEntity; // x8
  int64_t qp; // x24
  struct System_Int32_array *nums; // x8
  System_String_o *v142; // x0
  System_String_o *v143; // x2
  System_String_o *v144; // x3
  int32_t v145; // w4
  int32_t v146; // w5
  bool v147; // w6
  bool v148; // w7
  struct System_Int32_array *v149; // x8
  System_String_o *v150; // x20
  Il2CppObject *v151; // x0
  System_String_o *v152; // x2
  System_String_o *v153; // x3
  int32_t v154; // w4
  int32_t v155; // w5
  bool v156; // w6
  bool v157; // w7
  System_String_o *v158; // x0
  System_String_o *v159; // x2
  System_String_o *v160; // x3
  int32_t v161; // w4
  int32_t v162; // w5
  bool v163; // w6
  bool v164; // w7
  __int64 v165; // x1
  int32_t MaxNum; // w8
  bool v167; // w25
  int v168; // w9
  System_String_o *v169; // x20
  Il2CppObject *v170; // x24
  Il2CppObject *v171; // x0
  struct System_String_o *v172; // x1
  System_String_o *v173; // x2
  System_String_o *v174; // x3
  int32_t v175; // w4
  int32_t v176; // w5
  bool v177; // w6
  bool v178; // w7
  System_String_o *v179; // x20
  Il2CppObject *v180; // x0
  System_String_o *v181; // x2
  System_String_o *v182; // x3
  int32_t v183; // w4
  int32_t v184; // w5
  bool v185; // w6
  bool v186; // w7
  struct BattleRetryConfirmComponent_RetryConfirmItemStr_array *items; // x8
  _QWORD *v188; // x9
  int32_t size; // w10
  __int128 v190; // q0
  char *v191; // x8
  const MethodInfo_44FC500 *v192; // x2
  __int64 v193; // x1
  System_String_o *v194; // x19
  Il2CppObject *v195; // x0
  System_String_o *v196; // x0
  System_String_o *v197; // x19
  System_String_o *v198; // x0
  System_String_o *v199; // x19
  CommonUI_o *v200; // x20
  BattleRetryConfirmComponent___c_c *v201; // x8
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__30_0; // x22
  System_String_o *v204; // x21
  Il2CppObject *v205; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v206; // x0
  System_String_o *v207; // x2
  System_String_o *v208; // x3
  int32_t v209; // w4
  int32_t v210; // w5
  bool v211; // w6
  bool v212; // w7
  const MethodInfo_47A2F30 *v214; // x8
  QuestUseItemInfo_array *CachedAvailableQuestUseItems; // x20
  const MethodInfo *v216; // x2
  struct BattleRetryConfirmQuestUseItemButtons_o *QuestUseItemButtons; // x0
  System_String_o *v218; // x2
  System_String_o *v219; // x3
  int32_t v220; // w4
  int32_t v221; // w5
  bool v222; // w6
  bool v223; // w7
  const MethodInfo *v224; // x1
  MapControl_QuestInfo_o *v225; // x22
  __int64 v226; // x1
  int32_t questId; // w20
  __int64 v228; // x1
  bool IsQuestClear_47284152; // w23
  TerminalPramsManager_c *v230; // x0
  int32_t QuestId_k__BackingField; // w20
  int32_t CampaignCostCalcValue; // w20
  int32_t v233; // w8
  int32_t ActConsumeCost; // w0
  int32_t v235; // w22
  bool v237; // w1
  System_String_o *CostValueColor; // x20
  Il2CppObject *v239; // x0
  System_String_o *v240; // x0
  Il2CppObject *v241; // x22
  System_String_o *v242; // x20
  Il2CppObject *v243; // x0
  Il2CppObject *v244; // x23
  System_String_o *v245; // x0
  System_String_o *v246; // x2
  System_String_o *v247; // x3
  int32_t v248; // w4
  int32_t v249; // w5
  bool v250; // w6
  bool v251; // w7
  System_String_o *v252; // x0
  System_String_o *v253; // x0
  System_String_o *v254; // x2
  System_String_o *v255; // x3
  int32_t v256; // w4
  int32_t v257; // w5
  bool v258; // w6
  bool v259; // w7
  int32_t v260; // w1
  __int64 v261; // x1
  System_String_o *v262; // x0
  System_String_o *v263; // x2
  System_String_o *v264; // x3
  int32_t v265; // w4
  int32_t v266; // w5
  bool v267; // w6
  bool v268; // w7
  System_String_o *v269; // x20
  Il2CppObject *v270; // x0
  System_String_o *v271; // x2
  System_String_o *v272; // x3
  int32_t v273; // w4
  int32_t v274; // w5
  bool v275; // w6
  bool v276; // w7
  char v277; // w22
  int32_t v278; // w24
  UnityEngine_Object_o *mainText; // x20
  __int64 v280; // x1
  UILabel_o *v281; // x20
  UnityEngine_Component_o *v282; // x0
  int32_t v283; // w1
  System_String_o *v284; // x0
  System_String_o *v285; // x2
  System_String_o *v286; // x3
  int32_t v287; // w4
  int32_t v288; // w5
  bool v289; // w6
  bool v290; // w7
  System_String_o *v291; // x0
  System_String_o *v292; // x0
  UnityEngine_Object_o *buttonRoot; // x20
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v294; // x0
  const MethodInfo *v295; // x4
  BattleRetryConfirmContents_o *v296; // x0
  System_String_o *v297; // x2
  System_String_o *v298; // x3
  int32_t v299; // w4
  int32_t v300; // w5
  bool v301; // w6
  bool v302; // w7
  System_Action_o *v303; // x20
  BattleRetryConfirmComponent_o *v304; // x0
  const MethodInfo *v305; // x2
  System_Collections_IEnumerator_o *v306; // x0
  struct BattleRetryConfirmContents_o *v307; // x1
  System_String_o *v308; // x2
  System_String_o *v309; // x3
  int32_t v310; // w4
  int32_t v311; // w5
  bool v312; // w6
  bool v313; // w7
  Il2CppObject *v314; // [xsp+48h] [xbp-1A8h]
  __int64 v315; // [xsp+50h] [xbp-1A0h]
  __int64 v316; // [xsp+50h] [xbp-1A0h]
  QuestEntity_o *v317; // [xsp+58h] [xbp-198h]
  int actMax; // [xsp+64h] [xbp-18Ch]
  System_Text_StringBuilder_o *v319; // [xsp+68h] [xbp-188h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v320; // [xsp+70h] [xbp-180h] BYREF
  int32_t fixedVal; // [xsp+9Ch] [xbp-154h] BYREF
  __int128 v322; // [xsp+A0h] [xbp-150h] BYREF
  MissionNaviTransitionBoardItem_o v323; // [xsp+B0h] [xbp-140h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v324; // [xsp+160h] [xbp-90h] BYREF

  if ( (byte_5974515 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&MapControl_QuestInfo_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_BattleRetryConfirmComponent___c__SetValues_b__30_0__);
    sub_2213A60(&Method_BattleRetryConfirmComponent___c__SetValues_b__30_1__);
    sub_2213A60(&Method_BattleRetryConfirmComponent___c__DisplayClass30_0__SetValues_b__2__);
    sub_2213A60(&BattleRetryConfirmComponent___c__DisplayClass30_0_TypeInfo);
    sub_2213A60(&BattleRetryConfirmComponent___c_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_2978/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/);
    sub_2213A60(&StringLiteral_3942/*"CONSUME_TYPE_AP"*/);
    sub_2213A60(&StringLiteral_11356/*"QUEST_ITEM_COST_OVER"*/);
    sub_2213A60(&StringLiteral_2976/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/);
    sub_2213A60(&StringLiteral_2975/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_NONE_SPACE"*/);
    sub_2213A60(&StringLiteral_2977/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/);
    sub_2213A60(&StringLiteral_2123/*"AP_OVER_MAX_COLOR"*/);
    sub_2213A60(&StringLiteral_3943/*"CONSUME_TYPE_RP"*/);
    sub_2213A60(&StringLiteral_2982/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/);
    sub_2213A60(&StringLiteral_2981/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/);
    sub_2213A60(&StringLiteral_2969/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/);
    sub_2213A60(&StringLiteral_44/*"\n\n"*/);
    sub_2213A60(&StringLiteral_2979/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/);
    sub_2213A60(&StringLiteral_2971/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_2972/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_NONE_SPACE"*/);
    sub_2213A60(&StringLiteral_2980/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/);
    sub_2213A60(&StringLiteral_2973/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/);
    sub_2213A60(&StringLiteral_2974/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/);
    byte_5974515 = 1;
  }
  HIDWORD(v323.fields._IconName_k__BackingField) = 0;
  v322 = 0u;
  memset(&v323, 0, 24);
  memset(&v323.fields.sortValue0, 0, 40);
  memset(&v323.fields.sortValue2B, 0, 40);
  fixedVal = 0;
  v3 = sub_2213CCC(BattleRetryConfirmComponent___c__DisplayClass30_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.userGameEntity = SelfUserGame;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userGameEntity,
    (int32_t)SelfUserGame,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_224;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
  if ( !byte_596A92E )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596A92E = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_224;
  Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !Instance )
    goto LABEL_224;
  v14 = (QuestEntity_o *)Instance;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0, 0);
  HIDWORD(v323.fields._IconName_k__BackingField) = 0;
  memset(&v323.fields.sortValue2B, 0, 40);
  v16 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_2213CCC(System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v16,
    (const MethodInfo_44FBBD8 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  v319 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v319, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  v18 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3942/*"CONSUME_TYPE_AP"*/, 0);
  v317 = v14;
  ConsumeType = QuestEntity__GetConsumeType(v14, 0);
  actMax = 0;
  if ( ConsumeType > 2 )
  {
    if ( ConsumeType == 3 )
    {
      v316 = v3;
      v323.fields.sortValue2B = (int64_t)StringLiteral_1/*""*/;
      v314 = (Il2CppObject *)StringLiteral_1/*""*/;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v323.fields.sortValue2B,
        (int32_t)StringLiteral_1/*""*/,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v323.fields.sortValueLast = (int64_t)StringLiteral_1/*""*/;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v323.fields.sortValueLast,
        (int32_t)StringLiteral_1/*""*/,
        v126,
        v127,
        v128,
        v129,
        v130,
        v131);
      if ( ItemConsumeEntity )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_224;
        v132 = DataManager__GetMasterData_object_(
                 Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_224;
        v133 = DataManager__GetMasterData_object_(
                 Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0) )
        {
          v134 = 0;
          do
          {
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
            if ( !byte_5969EF2 )
            {
              sub_2213A60(&NetworkManager_TypeInfo);
              byte_5969EF2 = 1;
            }
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
              Instance = (DataManager_o *)NetworkManager_TypeInfo;
            }
            itemIds = ItemConsumeEntity->fields.itemIds;
            if ( !itemIds )
              goto LABEL_224;
            if ( v134 >= LODWORD(itemIds->max_length) )
              goto LABEL_225;
            if ( !v133 )
              goto LABEL_224;
            Instance = (DataManager_o *)UserItemMaster__GetEntity(
                                          (UserItemMaster_o *)v133,
                                          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                          itemIds->m_Items[v134],
                                          0);
            v136 = ItemConsumeEntity->fields.itemIds;
            if ( !v136 )
              goto LABEL_224;
            if ( v134 >= LODWORD(v136->max_length) )
              goto LABEL_225;
            if ( !v132 )
              goto LABEL_224;
            v137 = Instance;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)v132,
                                          v136->m_Items[v134],
                                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_224;
            v138 = (ItemEntity_o *)Instance;
            if ( LODWORD(Instance->fields.lookup) == 1 )
            {
              userGameEntity = this->fields.userGameEntity;
              if ( !userGameEntity )
                goto LABEL_224;
              qp = userGameEntity->fields.qp;
            }
            else if ( v137 )
            {
              Instance = (DataManager_o *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0);
              qp = 0;
              if ( ((unsigned __int8)Instance & 1) != 0 )
                qp = SHIDWORD(v137->fields.m_CancellationTokenSource);
            }
            else
            {
              qp = 0;
            }
            nums = ItemConsumeEntity->fields.nums;
            if ( !nums )
              goto LABEL_224;
            if ( v134 >= LODWORD(nums->max_length) )
              goto LABEL_225;
            if ( qp < nums->m_Items[v134] )
            {
              v12 = System_String__Concat_75651716((System_String_o *)StringLiteral_43/*"\n"*/, v138->fields.name, 0);
              Instance = (DataManager_o *)v319;
              if ( !v319 )
                goto LABEL_224;
              System_Text_StringBuilder__Append_75735064(v319, v12, 0);
            }
            memset(&v323.fields.sortValue0, 0, 40);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
            v142 = LocalizationManager__Get((System_String_o *)StringLiteral_2977/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0);
            v323.fields.sortValue0 = (int64_t)System_String__Format(v142, (Il2CppObject *)v138->fields.name, 0);
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v323.fields.sortValue0,
              v323.fields.sortValue0,
              v143,
              v144,
              v145,
              v146,
              v147,
              v148);
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2978/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0);
            v149 = ItemConsumeEntity->fields.nums;
            if ( !v149 )
              goto LABEL_224;
            if ( v134 >= LODWORD(v149->max_length) )
LABEL_225:
              sub_2213CE4(Instance);
            v150 = (System_String_o *)Instance;
            LODWORD(v324.fields.useName) = v149->m_Items[v134];
            v151 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v324);
            v323.fields.sortValue0B = (int64_t)System_String__Format(v150, v151, 0);
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v323.fields.sortValue0B,
              v323.fields.sortValue0B,
              v152,
              v153,
              v154,
              v155,
              v156,
              v157);
            v158 = LocalizationManager__Get((System_String_o *)StringLiteral_2980/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0);
            v323.fields.sortValue1 = (int64_t)System_String__Format(v158, (Il2CppObject *)v138->fields.name, 0);
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v323.fields.sortValue1,
              v323.fields.sortValue1,
              v159,
              v160,
              v161,
              v162,
              v163,
              v164);
            MaxNum = ItemEntity__GetMaxNum(v138, 0);
            v167 = MaxNum > 0;
            v168 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
            if ( MaxNum < 1 )
            {
              if ( !v168 )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v165);
              v179 = LocalizationManager__Get((System_String_o *)StringLiteral_2981/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0);
              v324.fields.useName = (struct System_String_o *)qp;
              v180 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v324);
              v172 = System_String__Format(v179, v180, 0);
            }
            else
            {
              if ( !v168 )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v165);
              v169 = LocalizationManager__Get((System_String_o *)StringLiteral_2982/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0);
              v324.fields.useName = (struct System_String_o *)qp;
              v170 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v324);
              LODWORD(v323.fields._Name_k__BackingField) = ItemEntity__GetMaxNum(v138, 0);
              v171 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v323.fields._Name_k__BackingField);
              v172 = System_String__Format_75697880(v169, v170, v171, 0);
            }
            v323.fields.sortStr1 = v172;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v323.fields.sortStr1,
              (int32_t)v172,
              v173,
              v174,
              v175,
              v176,
              v177,
              v178);
            LOBYTE(v323.fields.sortValue1B) = v167;
            if ( !v16 )
              goto LABEL_224;
            *(_OWORD *)&v323.fields._Name_k__BackingField = *(_OWORD *)&v323.fields.sortValue0;
            *(_OWORD *)&v323.fields._ClosedMessage_k__BackingField = *(_OWORD *)&v323.fields.sortValue1;
            *(_QWORD *)&v323.fields._BoardType_k__BackingField = v323.fields.sortValue1B;
            items = v16->fields._items;
            v188 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
            ++v16->fields._version;
            if ( !items )
              goto LABEL_224;
            size = v16->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              v192 = *(const MethodInfo_44FC500 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL);
              v324 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v323.fields._Name_k__BackingField;
              System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
                v16,
                &v324,
                v192);
            }
            else
            {
              v190 = *(_OWORD *)&v323.fields._Name_k__BackingField;
              v191 = (char *)items + 40 * size;
              v16->fields._size = size + 1;
              *((_OWORD *)v191 + 2) = v190;
              *((_OWORD *)v191 + 3) = *(_OWORD *)&v323.fields._ClosedMessage_k__BackingField;
              *((_QWORD *)v191 + 8) = *(_QWORD *)&v323.fields._BoardType_k__BackingField;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v191 + 32), 0, v181, v182, v183, v184, v185, v186);
            }
          }
          while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v134, 0) );
        }
      }
      Instance = (DataManager_o *)v319;
      if ( !v319 )
        goto LABEL_224;
      v3 = v316;
      if ( System_Text_StringBuilder__get_Length(v319, 0) >= 1 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v193);
        v194 = LocalizationManager__Get((System_String_o *)StringLiteral_11356/*"QUEST_ITEM_COST_OVER"*/, 0);
        v195 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v319->klass->vtable._3_ToString.methodPtr)(
                                 v319,
                                 v319->klass->vtable._3_ToString.method);
        v196 = System_String__Format(v194, v195, 0);
        v197 = System_String__Concat_75651716(v196, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
        v198 = LocalizationManager__Get((System_String_o *)StringLiteral_2979/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0);
        v199 = System_String__Concat_75651716(v197, v198, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v200 = (CommonUI_o *)Instance;
        v201 = BattleRetryConfirmComponent___c_TypeInfo;
        if ( !*(&BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo, v12);
          v201 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        static_fields = v201->static_fields;
        _9__30_0 = static_fields->__9__30_0;
        v204 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__30_0 )
        {
          if ( !*(&v201->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v201, v12);
            static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
          }
          v205 = (Il2CppObject *)static_fields->__9;
          _9__30_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(_9__30_0, v205, Method_BattleRetryConfirmComponent___c__SetValues_b__30_0__, 0);
          v206 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
          v206->__9__30_0 = _9__30_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v206->__9__30_0,
            (int32_t)_9__30_0,
            v207,
            v208,
            v209,
            v210,
            v211,
            v212);
        }
        if ( !v200 )
          goto LABEL_224;
        CommonUI__OpenNotificationDialog(v200, v204, v199, _9__30_0, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
        return 0;
      }
      actMax = 0;
    }
    else
    {
      if ( ConsumeType != 4 )
        goto LABEL_159;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
      Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3942/*"CONSUME_TYPE_AP"*/, 0);
      v30 = this->fields.userGameEntity;
      if ( !v30 )
        goto LABEL_224;
      v314 = (Il2CppObject *)Instance;
      v315 = v3;
      Instance = (DataManager_o *)UserGameEntity__getAct(v30, 0);
      v37 = this->fields.userGameEntity;
      HIDWORD(v323.fields._IconName_k__BackingField) = (_DWORD)Instance;
      if ( !v37 )
        goto LABEL_224;
      actMax = v37->fields.actMax;
      v323.fields.sortValue2B = (int64_t)StringLiteral_1/*""*/;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v323.fields.sortValue2B,
        (int32_t)StringLiteral_1/*""*/,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      v323.fields.sortValueLast = (int64_t)StringLiteral_1/*""*/;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v323.fields.sortValueLast,
        (int32_t)StringLiteral_1/*""*/,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      if ( ItemConsumeEntity )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_224;
        v44 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_224;
        v45 = DataManager__GetMasterData_object_(
                Instance,
                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0) )
        {
          v46 = 0;
          do
          {
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
            if ( !byte_5969EF2 )
            {
              sub_2213A60(&NetworkManager_TypeInfo);
              byte_5969EF2 = 1;
            }
            Instance = (DataManager_o *)NetworkManager_TypeInfo;
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12);
              Instance = (DataManager_o *)NetworkManager_TypeInfo;
            }
            v47 = ItemConsumeEntity->fields.itemIds;
            if ( !v47 )
              goto LABEL_224;
            if ( v46 >= LODWORD(v47->max_length) )
              goto LABEL_225;
            if ( !v45 )
              goto LABEL_224;
            Instance = (DataManager_o *)UserItemMaster__GetEntity(
                                          (UserItemMaster_o *)v45,
                                          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                          v47->m_Items[v46],
                                          0);
            v48 = ItemConsumeEntity->fields.itemIds;
            if ( !v48 )
              goto LABEL_224;
            if ( v46 >= LODWORD(v48->max_length) )
              goto LABEL_225;
            if ( !v44 )
              goto LABEL_224;
            v49 = Instance;
            Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)v44,
                                          v48->m_Items[v46],
                                          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( !Instance )
              goto LABEL_224;
            v50 = (ItemEntity_o *)Instance;
            if ( LODWORD(Instance->fields.lookup) == 1 )
            {
              v51 = this->fields.userGameEntity;
              if ( !v51 )
                goto LABEL_224;
              m_CancellationTokenSource_high = v51->fields.qp;
            }
            else if ( v49 )
            {
              Instance = (DataManager_o *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0);
              m_CancellationTokenSource_high = 0;
              if ( ((unsigned __int8)Instance & 1) != 0 )
                m_CancellationTokenSource_high = SHIDWORD(v49->fields.m_CancellationTokenSource);
            }
            else
            {
              m_CancellationTokenSource_high = 0;
            }
            v53 = ItemConsumeEntity->fields.nums;
            if ( !v53 )
              goto LABEL_224;
            if ( v46 >= LODWORD(v53->max_length) )
              goto LABEL_225;
            if ( m_CancellationTokenSource_high < v53->m_Items[v46] )
            {
              v12 = System_String__Concat_75651716((System_String_o *)StringLiteral_43/*"\n"*/, v50->fields.name, 0);
              Instance = (DataManager_o *)v319;
              if ( !v319 )
                goto LABEL_224;
              System_Text_StringBuilder__Append_75735064(v319, v12, 0);
            }
            v322 = 0u;
            memset(&v323, 0, 24);
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
            v54 = LocalizationManager__Get((System_String_o *)StringLiteral_2977/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0);
            *(_QWORD *)&v322 = System_String__Format(v54, (Il2CppObject *)v50->fields.name, 0);
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v322, v322, v55, v56, v57, v58, v59, v60);
            Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2978/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0);
            v61 = ItemConsumeEntity->fields.nums;
            if ( !v61 )
              goto LABEL_224;
            if ( v46 >= LODWORD(v61->max_length) )
              goto LABEL_225;
            v62 = (System_String_o *)Instance;
            LODWORD(v324.fields.useName) = v61->m_Items[v46];
            v63 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v324);
            *((_QWORD *)&v322 + 1) = System_String__Format(v62, v63, 0);
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)((char *)&v322 + 8),
              SDWORD2(v322),
              v64,
              v65,
              v66,
              v67,
              v68,
              v69);
            v70 = LocalizationManager__Get((System_String_o *)StringLiteral_2980/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0);
            v323.klass = (MissionNaviTransitionBoardItem_c *)System_String__Format(
                                                               v70,
                                                               (Il2CppObject *)v50->fields.name,
                                                               0);
            sub_2213A04(&v323, (int32_t)v323.klass, v71, v72, v73, v74, v75, v76);
            v78 = ItemEntity__GetMaxNum(v50, 0);
            v79 = v78 > 0;
            v80 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
            if ( v78 < 1 )
            {
              if ( !v80 )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
              v91 = LocalizationManager__Get((System_String_o *)StringLiteral_2981/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0);
              v324.fields.useName = (struct System_String_o *)m_CancellationTokenSource_high;
              v92 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v324);
              v84 = System_String__Format(v91, v92, 0);
            }
            else
            {
              if ( !v80 )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
              v81 = LocalizationManager__Get((System_String_o *)StringLiteral_2982/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0);
              v324.fields.useName = (struct System_String_o *)m_CancellationTokenSource_high;
              v82 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v324);
              LODWORD(v323.fields._Name_k__BackingField) = ItemEntity__GetMaxNum(v50, 0);
              v83 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v323.fields._Name_k__BackingField);
              v84 = System_String__Format_75697880(v81, v82, v83, 0);
            }
            v323.monitor = v84;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)&v323.monitor, (int32_t)v84, v85, v86, v87, v88, v89, v90);
            LOBYTE(v323.fields.selectNum) = v79;
            if ( !v16 )
              goto LABEL_224;
            *(_OWORD *)&v323.fields._Name_k__BackingField = v322;
            *(_OWORD *)&v323.fields._ClosedMessage_k__BackingField = *(_OWORD *)&v323.klass;
            *(_QWORD *)&v323.fields._BoardType_k__BackingField = *(_QWORD *)&v323.fields.selectNum;
            v99 = v16->fields._items;
            v100 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
            ++v16->fields._version;
            if ( !v99 )
              goto LABEL_224;
            v101 = v16->fields._size;
            if ( (unsigned int)v101 >= LODWORD(v99->max_length) )
            {
              v104 = *(const MethodInfo_44FC500 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL);
              v324 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v323.fields._Name_k__BackingField;
              System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
                v16,
                &v324,
                v104);
            }
            else
            {
              v102 = *(_OWORD *)&v323.fields._Name_k__BackingField;
              v103 = (char *)v99 + 40 * v101;
              v16->fields._size = v101 + 1;
              *((_OWORD *)v103 + 2) = v102;
              *((_OWORD *)v103 + 3) = *(_OWORD *)&v323.fields._ClosedMessage_k__BackingField;
              *((_QWORD *)v103 + 8) = *(_QWORD *)&v323.fields._BoardType_k__BackingField;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v103 + 32), 0, v93, v94, v95, v96, v97, v98);
            }
          }
          while ( QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v46, 0) );
        }
      }
      Instance = (DataManager_o *)v319;
      if ( !v319 )
        goto LABEL_224;
      v3 = v315;
      if ( System_Text_StringBuilder__get_Length(v319, 0) >= 1 )
      {
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v105);
        v106 = LocalizationManager__Get((System_String_o *)StringLiteral_11356/*"QUEST_ITEM_COST_OVER"*/, 0);
        v107 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v319->klass->vtable._3_ToString.methodPtr)(
                                 v319,
                                 v319->klass->vtable._3_ToString.method);
        v108 = System_String__Format(v106, v107, 0);
        v109 = System_String__Concat_75651716(v108, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
        v110 = LocalizationManager__Get((System_String_o *)StringLiteral_2979/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0);
        v111 = System_String__Concat_75651716(v109, v110, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v112 = (CommonUI_o *)Instance;
        v113 = BattleRetryConfirmComponent___c_TypeInfo;
        if ( !*(&BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo, v12);
          v113 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v114 = v113->static_fields;
        _9__30_1 = v114->__9__30_1;
        v116 = (System_String_o *)StringLiteral_1/*""*/;
        if ( !_9__30_1 )
        {
          if ( !*(&v113->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v113, v12);
            v114 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
          }
          v117 = (Il2CppObject *)v114->__9;
          _9__30_1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(_9__30_1, v117, Method_BattleRetryConfirmComponent___c__SetValues_b__30_1__, 0);
          v118 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
          v118->__9__30_1 = _9__30_1;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v118->__9__30_1,
            (int32_t)_9__30_1,
            v119,
            v120,
            v121,
            v122,
            v123,
            v124);
        }
        if ( !v112 )
          goto LABEL_224;
        CommonUI__OpenNotificationDialog(v112, v116, v111, _9__30_1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
        return 0;
      }
    }
    v18 = v314;
    goto LABEL_159;
  }
  if ( ConsumeType == 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3942/*"CONSUME_TYPE_AP"*/, 0);
    if ( !this->fields.userGameEntity )
      goto LABEL_224;
    v18 = (Il2CppObject *)Instance;
    Instance = (DataManager_o *)UserGameEntity__getAct(this->fields.userGameEntity, 0);
    v125 = this->fields.userGameEntity;
    HIDWORD(v323.fields._IconName_k__BackingField) = (_DWORD)Instance;
    if ( !v125 )
      goto LABEL_224;
    p_actMax = &v125->fields.actMax;
    goto LABEL_96;
  }
  if ( ConsumeType == 2 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3943/*"CONSUME_TYPE_RP"*/, 0);
    if ( !this->fields.userGameEntity )
      goto LABEL_224;
    v18 = (Il2CppObject *)Instance;
    Instance = (DataManager_o *)UserGameEntity__getRp(this->fields.userGameEntity, 0);
    v27 = this->fields.userGameEntity;
    HIDWORD(v323.fields._IconName_k__BackingField) = (_DWORD)Instance;
    if ( !v27 )
      goto LABEL_224;
    if ( !byte_596D268 )
    {
      sub_2213A60(&BalanceConfig_TypeInfo);
      byte_596D268 = 1;
    }
    v28 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v12);
      v28 = BalanceConfig_TypeInfo;
    }
    p_actMax = &v28->static_fields->UerGameRpMax;
LABEL_96:
    actMax = *p_actMax;
  }
LABEL_159:
  Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_224;
  v214 = (const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__;
  LOBYTE(Instance->fields.writeMasterDataThread) = 0;
  Instance = (DataManager_o *)SingletonTemplate_object___get_Instance(v214);
  if ( !Instance )
    goto LABEL_224;
  PartyOrganizationUtility__CacheQuestUseItems((PartyOrganizationUtility_o *)Instance, 0);
  Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_224;
  CachedAvailableQuestUseItems = PartyOrganizationUtility__GetCachedAvailableQuestUseItems(
                                   (PartyOrganizationUtility_o *)Instance,
                                   0);
  QuestUseItemButtons = BattleRetryConfirmComponent__CreateQuestUseItemButtons(this, CachedAvailableQuestUseItems, v216);
  this->fields.currentQuestUseItemButtons = QuestUseItemButtons;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentQuestUseItemButtons,
    (int32_t)QuestUseItemButtons,
    v218,
    v219,
    v220,
    v221,
    v222,
    v223);
  if ( !CachedAvailableQuestUseItems || !v3 )
    goto LABEL_224;
  *(_BYTE *)(v3 + 16) = LODWORD(CachedAvailableQuestUseItems->max_length) != 0;
  if ( QuestEntity__GetConsumeType(v317, 0) == 1
    || QuestEntity__GetConsumeType(v317, 0) == 2
    || QuestEntity__GetConsumeType(v317, 0) == 4 )
  {
    v225 = (MapControl_QuestInfo_o *)sub_2213CCC(MapControl_QuestInfo_TypeInfo);
    MapControl_QuestInfo___ctor(v225, 0);
    if ( !v225 )
      goto LABEL_224;
    MapControl_QuestInfo__SetTerminalParamsValue(v225, 0);
    questId = v225->fields.questId;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v226);
    IsQuestClear_47284152 = CondType__IsQuestClear_47284152(questId, -1, 0, 0);
    fixedVal = -1;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v228);
    if ( !byte_596A92E )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596A92E = 1;
    }
    v230 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v228);
      v230 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v230->static_fields->_QuestId_k__BackingField;
    if ( !byte_596A92D )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      v230 = TerminalPramsManager_TypeInfo;
      byte_596A92D = 1;
    }
    if ( !*(&v230->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v230, v228);
      v230 = TerminalPramsManager_TypeInfo;
    }
    CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                              v317,
                              QuestId_k__BackingField,
                              v230->static_fields->_PhaseCnt_k__BackingField,
                              !IsQuestClear_47284152,
                              &fixedVal,
                              0);
    Instance = (DataManager_o *)MapControl_QuestInfo__GetMine(v225, 0);
    if ( !Instance )
      goto LABEL_224;
    QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0);
    v233 = fixedVal;
    v225->fields.costCalcVal = CampaignCostCalcValue;
    v225->fields._fixedCostVal_k__BackingField = v233;
    ActConsumeCost = MapControl_QuestInfo__GetActConsumeCost(v225, 0);
    v235 = ActConsumeCost;
    v237 = ActConsumeCost > actMax || ActConsumeCost > SHIDWORD(v323.fields._IconName_k__BackingField);
    CostValueColor = QuestEntity__GetCostValueColor(CampaignCostCalcValue, v237, 0);
    LODWORD(v324.fields.useName) = v235;
    v239 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v324);
    v240 = System_String__Format(CostValueColor, v239, 0);
    LODWORD(CostValueColor) = HIDWORD(v323.fields._IconName_k__BackingField);
    v241 = (Il2CppObject *)v240;
    Instance = (DataManager_o *)System_Int32__ToString((int32_t)&v323.fields._IconName_k__BackingField + 4, 0);
    if ( actMax < (int)CostValueColor )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
      v242 = LocalizationManager__Get((System_String_o *)StringLiteral_2123/*"AP_OVER_MAX_COLOR"*/, 0);
      LODWORD(v324.fields.useName) = HIDWORD(v323.fields._IconName_k__BackingField);
      v243 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v324);
      Instance = (DataManager_o *)System_String__Format(v242, v243, 0);
    }
    v244 = (Il2CppObject *)Instance;
    if ( *(_BYTE *)(v3 + 16) )
      goto LABEL_228;
    if ( !v16 )
      goto LABEL_224;
    if ( v16->fields._size )
    {
LABEL_228:
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
      v245 = LocalizationManager__Get((System_String_o *)StringLiteral_2974/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0);
      v323.fields.sortValue2B = (int64_t)System_String__Format(v245, v18, 0);
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v323.fields.sortValue2B,
        v323.fields.sortValue2B,
        v246,
        v247,
        v248,
        v249,
        v250,
        v251);
      v252 = LocalizationManager__Get((System_String_o *)StringLiteral_2971/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0);
      v253 = System_String__Format(v252, v18, 0);
      v260 = (int)v253;
      *(_QWORD *)&v323.fields.isTermination = v253;
    }
    else
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
      v284 = LocalizationManager__Get((System_String_o *)StringLiteral_2975/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_NONE_SPACE"*/, 0);
      v323.fields.sortValue2B = (int64_t)System_String__Format(v284, v18, 0);
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v323.fields.sortValue2B,
        v323.fields.sortValue2B,
        v285,
        v286,
        v287,
        v288,
        v289,
        v290);
      v291 = LocalizationManager__Get((System_String_o *)StringLiteral_2972/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_NONE_SPACE"*/, 0);
      v292 = System_String__Format(v291, v18, 0);
      v260 = (int)v292;
      *(_QWORD *)&v323.fields.isTermination = v292;
    }
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v323.fields.isTermination,
      v260,
      v254,
      v255,
      v256,
      v257,
      v258,
      v259);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v261);
    v262 = LocalizationManager__Get((System_String_o *)StringLiteral_2976/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0);
    v323.fields.sortValueLast = (int64_t)System_String__Format(v262, v241, 0);
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v323.fields.sortValueLast,
      v323.fields.sortValueLast,
      v263,
      v264,
      v265,
      v266,
      v267,
      v268);
    v269 = LocalizationManager__Get((System_String_o *)StringLiteral_2973/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0);
    LODWORD(v324.fields.useName) = actMax;
    v270 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v324);
    *(_QWORD *)&v323.fields.basePosition.fields.y = System_String__Format_75697880(v269, v244, v270, 0);
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v323.fields.basePosition.fields.y,
      SLODWORD(v323.fields.basePosition.fields.y),
      v271,
      v272,
      v273,
      v274,
      v275,
      v276);
  }
  BattleRetryConfirmComponent__SetBoostSupportRequestButton(this, v224);
  Instance = (DataManager_o *)System_String__IsNullOrEmpty((System_String_o *)v323.fields.sortValue2B, 0);
  if ( !v16 )
    goto LABEL_224;
  v277 = (char)Instance;
  v278 = v16->fields._size;
  mainText = (UnityEngine_Object_o *)this->fields.mainText;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( !UnityEngine_Object__op_Inequality(mainText, 0, 0) )
    goto LABEL_217;
  v281 = this->fields.mainText;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v280);
  Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2969/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/, 0);
  if ( !v281 )
LABEL_224:
    sub_2213CDC(Instance, v12);
  UILabel__set_text(v281, (System_String_o *)Instance, 0);
  if ( !*(_BYTE *)(v3 + 16) )
  {
    v282 = (UnityEngine_Component_o *)this->fields.mainText;
    if ( v278 + ((v277 & 1) == 0) == 3 )
    {
      ComponentHelper__SetLocalPositionY(v282, 179.0, 0);
      Instance = (DataManager_o *)this->fields.mainText;
      if ( !Instance )
        goto LABEL_224;
      v283 = 22;
    }
    else
    {
      ComponentHelper__SetLocalPositionY(v282, 178.0, 0);
      Instance = (DataManager_o *)this->fields.mainText;
      if ( !Instance )
        goto LABEL_224;
      v283 = 24;
    }
    UILabel__set_fontSize((UILabel_o *)Instance, v283, 0);
  }
LABEL_217:
  buttonRoot = (UnityEngine_Object_o *)this->fields.buttonRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v280);
  if ( UnityEngine_Object__op_Inequality(buttonRoot, 0, 0) && !*(_BYTE *)(v3 + 16) )
    GameObjectExtensions__SetLocalPositionY(this->fields.buttonRoot, -164.0, 0);
  v320 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v323.fields.sortValue2B;
  v294 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
           v16,
           (const MethodInfo_44FE384 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
  v296 = BattleRetryConfirmComponent__CreateContents(this, &v320, v294, *(_BYTE *)(v3 + 16), v295);
  *(_QWORD *)(v3 + 24) = v296;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), (int32_t)v296, v297, v298, v299, v300, v301, v302);
  Instance = *(DataManager_o **)(v3 + 24);
  if ( !Instance )
    goto LABEL_224;
  BattleRetryConfirmContents__Initialized((BattleRetryConfirmContents_o *)Instance, (const MethodInfo *)v12);
  v303 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v303,
    (Il2CppObject *)v3,
    Method_BattleRetryConfirmComponent___c__DisplayClass30_0__SetValues_b__2__,
    0);
  v306 = BattleRetryConfirmComponent__WaitOneFrame(v304, v303, v305);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v306, 0);
  v307 = *(struct BattleRetryConfirmContents_o **)(v3 + 24);
  this->fields.currentContents = v307;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentContents,
    (int32_t)v307,
    v308,
    v309,
    v310,
    v311,
    v312,
    v313);
  return 1;
}


System_Collections_IEnumerator_o *BattleRetryConfirmComponent__WaitOneFrame(
        BattleRetryConfirmComponent_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_597451B & 1) == 0 )
  {
    sub_2213A60(&BattleRetryConfirmComponent__WaitOneFrame_d__36_TypeInfo);
    byte_597451B = 1;
  }
  v4 = sub_2213CCC(BattleRetryConfirmComponent__WaitOneFrame_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = action;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 32), (int32_t)action, v5, v6, v7, v8, v9, v10);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w20
  System_Action_o *action; // x0
  Il2CppObject **p__2__current; // x19

  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      action = this->fields.action;
      this->fields.__1__state = -1;
      ActionExtensions__Call(action, 0);
    }
  }
  else
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    this->fields.__1__state = -1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__36_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5974522 & 1) == 0 )
  {
    sub_2213A60(&BattleRetryConfirmComponent___c_TypeInfo);
    byte_5974522 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleRetryConfirmComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleRetryConfirmComponent___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleRetryConfirmComponent___c_TypeInfo->static_fields,
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

  if ( (byte_5974525 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__);
    byte_5974525 = 1;
  }
  v2 = Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__;
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_2213A78(Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__33_0__);
  v3 = (System_Reflection_MethodBase_o *)sub_2213A44(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void BattleRetryConfirmComponent___c___SetValues_b__30_0(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5974523 & 1) == 0 )
  {
    sub_2213A60(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5974523 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_380E3DC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void BattleRetryConfirmComponent___c___SetValues_b__30_1(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_5974524 & 1) == 0 )
  {
    sub_2213A60(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5974524 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_380E3DC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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
    sub_2213CDC(this, method);
  BattleRetryConfirmContents__SetCondensedScalePossessionAmount(this->fields.contents, this->fields.isDispUseItemUI, v2);
}