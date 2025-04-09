void __fastcall BattleRetryConfirmComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49BE3F2 & 1) == 0 )
  {
    sub_1B4CF90(&BattleRetryConfirmComponent_TypeInfo, v1);
    byte_49BE3F2 = 1;
  }
  *BattleRetryConfirmComponent_TypeInfo->static_fields = (struct BattleRetryConfirmComponent_StaticFields)xmmword_BAA8F0;
}


void __fastcall BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  if ( (byte_49BE3F1 & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    byte_49BE3F1 = 1;
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

  if ( (byte_49BE3E9 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_BattleRetryConfirmComponent__BaseDialogOpen_b__64_0__, v3);
    byte_49BE3E9 = 1;
  }
  v4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleRetryConfirmComponent__BaseDialogOpen_b__64_0__, 0LL);
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

  if ( (byte_49BE3EB & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, *(_QWORD *)&result);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_49BE3EB = 1;
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
        (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v16,
                (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v16.fields._current )
          sub_1B4D1EC(0LL, v12);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v16.fields._current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v16,
        (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
      if ( currentQuestUseItemButtons )
        BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 1, v14);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_21:
    sub_1B4D1EC(battleResultComponent, *(_QWORD *)&result);
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
    sub_1B4D1EC(cancelLabel, method);
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
  UnityEngine_Object_o *currentContents; // x20
  const MethodInfo *v4; // x1
  BattleRetryConfirmContents_o *reqSingleParent; // x0
  struct RetryConfirmItem_array *doubleItems; // x8
  __int64 v7; // x20
  int max_length; // w9

  if ( (byte_49BE3ED & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BE3ED = 1;
  }
  currentContents = (UnityEngine_Object_o *)this->fields.currentContents;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentContents, 0LL, 0LL) )
  {
    reqSingleParent = this->fields.currentContents;
    if ( reqSingleParent )
    {
      BattleRetryConfirmContents__CostPointLabelCentering(reqSingleParent, v4);
      return;
    }
LABEL_21:
    sub_1B4D1EC(reqSingleParent, v4);
  }
  reqSingleParent = (BattleRetryConfirmContents_o *)this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_21;
  reqSingleParent = (BattleRetryConfirmContents_o *)UnityEngine_GameObject__get_gameObject(
                                                      (UnityEngine_GameObject_o *)reqSingleParent,
                                                      0LL);
  if ( !reqSingleParent )
    goto LABEL_21;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)reqSingleParent, 0LL) )
  {
    reqSingleParent = (BattleRetryConfirmContents_o *)this->fields.singleAp;
    if ( !reqSingleParent )
      goto LABEL_21;
    RetryConfirmItem__CenteringAmountLabel((RetryConfirmItem_o *)reqSingleParent, v4);
    reqSingleParent = (BattleRetryConfirmContents_o *)this->fields.singleItem;
    if ( !reqSingleParent )
      goto LABEL_21;
    RetryConfirmItem__CenteringAmountLabel((RetryConfirmItem_o *)reqSingleParent, v4);
  }
  else
  {
    reqSingleParent = (BattleRetryConfirmContents_o *)this->fields.doubleAp;
    if ( !reqSingleParent )
      goto LABEL_21;
    RetryConfirmItem__CenteringAmountLabel((RetryConfirmItem_o *)reqSingleParent, v4);
    doubleItems = this->fields.doubleItems;
    if ( !doubleItems )
      goto LABEL_21;
    v7 = 0LL;
    while ( 1 )
    {
      max_length = doubleItems->max_length;
      if ( (int)v7 >= max_length )
        break;
      if ( (unsigned int)v7 >= max_length )
        sub_1B4D1F4(reqSingleParent, v4);
      reqSingleParent = (BattleRetryConfirmContents_o *)doubleItems->m_Items[v7];
      if ( reqSingleParent )
      {
        RetryConfirmItem__CenteringAmountLabel((RetryConfirmItem_o *)reqSingleParent, v4);
        doubleItems = this->fields.doubleItems;
        ++v7;
        if ( doubleItems )
          continue;
      }
      goto LABEL_21;
    }
  }
}


BattleRetryConfirmContents_o *__fastcall BattleRetryConfirmComponent__CreateContents(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_o *costPoint,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *items,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *pointOnlyContents; // x21
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *window; // x0
  __int64 v13; // x1
  unsigned __int8 v14; // w23
  System_Collections_Generic_IEnumerable_TSource__o *appended; // x0
  il2cpp_array_size_t max_length; // w8
  struct BattleRetryConfirmContents_o **p_singleContentsPrefab; // x8
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v19; // x2
  BattleRetryConfirmContents_o *v20; // x20
  __int128 v22; // [xsp+10h] [xbp-80h]
  __int64 v23; // [xsp+20h] [xbp-70h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v24; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_49BE3E1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Append_BattleRetryConfirmComponent_RetryConfirmItemStr___, costPoint);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr___, v7);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_BattleRetryConfirmContents___, v8);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_1/*""*/, v10);
    byte_49BE3E1 = 1;
  }
  pointOnlyContents = (Il2CppObject *)this->fields.pointOnlyContents;
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)System_String__op_Inequality(
                                                                      costPoint->fields.useName,
                                                                      (System_String_o *)StringLiteral_1/*""*/,
                                                                      0LL);
  v14 = (unsigned __int8)window;
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
                 (const MethodInfo_2F11C1C *)Method_System_Linq_Enumerable_Append_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    window = System_Linq_Enumerable__ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr_(
               appended,
               (const MethodInfo_2F3C690 *)Method_System_Linq_Enumerable_ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    items = window;
  }
  if ( !items )
    goto LABEL_18;
  max_length = items->max_length;
  if ( (v14 & (max_length == 1)) == 0 )
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
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)UnityEngine_Object__Instantiate_object__49839864(
                                                                      pointOnlyContents,
                                                                      transform,
                                                                      (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_BattleRetryConfirmContents___);
  if ( !window )
LABEL_18:
    sub_1B4D1EC(window, v13);
  v20 = (BattleRetryConfirmContents_o *)window;
  BattleRetryConfirmContents__SetCostValues((BattleRetryConfirmContents_o *)window, items, v19);
  return v20;
}


BattleRetryConfirmQuestUseItemButtons_o *__fastcall BattleRetryConfirmComponent__CreateQuestUseItemButtons(
        BattleRetryConfirmComponent_o *this,
        FriendshipUpItemInfo_array *itemInfos,
        const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleRetryConfirmQuestUseItemButtons_array *questUseItemButtonsPrefabs; // x21
  struct BattleRetryConfirmQuestUseItemButtons_array *v10; // x8
  int v11; // w9
  Il2CppObject *v12; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v14; // x21
  System_Action_object__object__o *v15; // x22
  const MethodInfo *v16; // x3

  v4 = this;
  if ( (byte_49BE3E2 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_FriendshipUpItemInfo__FriendshipUpItemUseItem__TypeInfo, itemInfos);
    sub_1B4CF90(&Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__, v5);
    sub_1B4CF90(&System_Math_TypeInfo, v6);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_BattleRetryConfirmQuestUseItemButtons___, v7);
    this = (BattleRetryConfirmComponent_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v8);
    byte_49BE3E2 = 1;
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
  this = (BattleRetryConfirmComponent_o *)System_Math__Min_62622116(
                                            (int32_t)this,
                                            questUseItemButtonsPrefabs->max_length,
                                            0LL);
  v10 = v4->fields.questUseItemButtonsPrefabs;
  if ( !v10 )
    goto LABEL_17;
  v11 = (_DWORD)this - 1;
  if ( (int)this - 1 >= v10->max_length )
    sub_1B4D1F4(this, itemInfos);
  this = (BattleRetryConfirmComponent_o *)v4->fields.window;
  if ( !this )
    goto LABEL_17;
  v12 = (Il2CppObject *)v10->m_Items[v11];
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__Instantiate_object__49839864(
          v12,
          transform,
          (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_BattleRetryConfirmQuestUseItemButtons___);
  v15 = (System_Action_object__object__o *)sub_1B4D1DC(System_Action_FriendshipUpItemInfo__FriendshipUpItemUseItem__TypeInfo);
  System_Action_object__object____ctor(
    v15,
    (Il2CppObject *)v4,
    (intptr_t)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__,
    0LL);
  if ( !v14 )
LABEL_17:
    sub_1B4D1EC(this, itemInfos);
  BattleRetryConfirmQuestUseItemButtons__Setup(
    (BattleRetryConfirmQuestUseItemButtons_o *)v14,
    itemInfos,
    (System_Action_FriendshipUpItemInfo__FriendshipUpItemUseItem__o *)v15,
    v16);
  return (BattleRetryConfirmQuestUseItemButtons_o *)v14;
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
  UnityEngine_Object_o *reqSingleParent; // x20
  UnityEngine_Object_o *reqDoubleParent; // x20
  struct System_Collections_Generic_List_UIButton__o **p_buttons; // x20
  System_Collections_Generic_List_object__o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v26; // x21
  unsigned __int64 v27; // x23
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 klass_low; // x10
  __int64 v31; // x8
  __int64 v32; // x1
  UnityEngine_Object_o *mainText; // x20
  UILabel_o *v34; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *confirmLabel; // x20
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49BE3E8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIButton__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIButton___ctor__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIButton__get_Count__, v9);
    sub_1B4CF90(&System_Collections_Generic_List_UIButton__TypeInfo, v10);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v11);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v12);
    sub_1B4CF90(&StringLiteral_2854/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, v13);
    sub_1B4CF90(&StringLiteral_2856/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, v14);
    sub_1B4CF90(&StringLiteral_2855/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, v15);
    byte_49BE3E8 = 1;
  }
  memset(&i, 0, sizeof(i));
  root = this->fields.root;
  if ( !root )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive(root, 0, 0LL);
  reqSingleParent = (UnityEngine_Object_o *)this->fields.reqSingleParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(reqSingleParent, 0LL, 0LL) )
  {
    root = this->fields.reqSingleParent;
    if ( !root )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive(root, 0, 0LL);
  }
  reqDoubleParent = (UnityEngine_Object_o *)this->fields.reqDoubleParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(reqDoubleParent, 0LL, 0LL) )
  {
    root = this->fields.reqDoubleParent;
    if ( !root )
      goto LABEL_46;
    UnityEngine_GameObject__SetActive(root, 0, 0LL);
  }
  root = (UnityEngine_GameObject_o *)this->fields.buttons;
  if ( !root || !LODWORD(root[1].klass) )
  {
    p_buttons = &this->fields.buttons;
    v20 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UIButton__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v20,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v20;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.buttons, (int32_t)v20, v21, v22);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_2EF9018 *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    if ( !root )
      goto LABEL_46;
    klass = root[1].klass;
    v26 = root;
    if ( (int)klass >= 1 )
    {
      v27 = 0LL;
      while ( 1 )
      {
        if ( v27 >= (unsigned int)klass )
          sub_1B4D1F4(root, method);
        root = (UnityEngine_GameObject_o *)*p_buttons;
        if ( !*p_buttons )
          break;
        method = (const MethodInfo *)*((_QWORD *)&v26[1].monitor + v27);
        v28 = *(_QWORD *)&root->fields.m_CachedPtr;
        v29 = Method_System_Collections_Generic_List_UIButton__Add__;
        ++HIDWORD(root[1].klass);
        if ( !v28 )
          break;
        klass_low = SLODWORD(root[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v28 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)root,
            (Il2CppObject *)method,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = v28 + 8 * klass_low;
          LODWORD(root[1].klass) = klass_low + 1;
          *(_QWORD *)(v31 + 32) = method;
          sub_1B4CF34((CGThumbnailListItem_o *)(v31 + 32), (int32_t)method, v23, v24);
        }
        LODWORD(klass) = v26[1].klass;
        if ( (__int64)++v27 >= (int)klass )
          goto LABEL_26;
      }
LABEL_46:
      sub_1B4D1EC(root, method);
    }
LABEL_26:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_46;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)root,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  for ( i = v37;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0LL) )
  {
    if ( !i.fields._current )
      sub_1B4D1EC(0LL, v32);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  if ( !this->fields.isInitialized )
  {
    mainText = (UnityEngine_Object_o *)this->fields.mainText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mainText, 0LL, 0LL) )
    {
      v34 = this->fields.mainText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2856/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      if ( !v34 )
        goto LABEL_46;
      UILabel__set_text(v34, (System_String_o *)root, 0LL);
    }
    cancelLabel = this->fields.cancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2854/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_46;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0LL);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2855/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0LL);
    if ( !confirmLabel )
      goto LABEL_46;
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
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x0
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49BE3EA & 1) == 0 )
  {
    sub_1B4CF90(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__, method);
    sub_1B4CF90(&Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__, v3);
    sub_1B4CF90(&BoostFunctionUtility_CallbackFunc_TypeInfo, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v10);
    byte_49BE3EA = 1;
  }
  v11 = Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__;
  memset(&v25, 0, sizeof(v25));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1B4CFA8(Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
  v12 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 8, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B5A14 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v13);
    byte_49B5A14 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v15->static_fields->_QuestId_k__BackingField;
  if ( !byte_49B5A13 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v13);
    v15 = TerminalPramsManager_TypeInfo;
    byte_49B5A13 = 1;
  }
  if ( !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v15->static_fields->_PhaseCnt_k__BackingField;
  v18 = (BoostFunctionUtility_CallbackFunc_o *)sub_1B4D1DC(BoostFunctionUtility_CallbackFunc_TypeInfo);
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
    sub_1B4D1EC(buttons, v20);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    buttons,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v25.fields._current )
      sub_1B4D1EC(0LL, v21);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v25.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
  if ( friendshipUpItemSwitchComponent )
    FriendshipUpItemSwitchComponent__EnableUseButton(friendshipUpItemSwitchComponent, 0, 0LL);
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
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x0
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49BE3DE & 1) == 0 )
  {
    sub_1B4CF90(&Method_BattleRetryConfirmComponent_OnClickCancel__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_49BE3DE = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !this->fields.state )
  {
    v7 = Method_BattleRetryConfirmComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B4CFA8(Method_BattleRetryConfirmComponent_OnClickCancel__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 1, 0, 0LL);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent
      || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0LL),
          (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
    {
      sub_1B4D1EC(battleResultComponent, v9);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v15.fields._current )
        sub_1B4D1EC(0LL, v11);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v15.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
    if ( friendshipUpItemSwitchComponent )
      FriendshipUpItemSwitchComponent__EnableUseButton(friendshipUpItemSwitchComponent, 0, 0LL);
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
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x0
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49BE3DF & 1) == 0 )
  {
    sub_1B4CF90(&Method_BattleRetryConfirmComponent_OnClickConfirm__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__, v6);
    byte_49BE3DF = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !this->fields.state )
  {
    v7 = Method_BattleRetryConfirmComponent_OnClickConfirm__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickConfirm__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1B4CFA8(Method_BattleRetryConfirmComponent_OnClickConfirm__);
    v8 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 8, 0, 0LL);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent
      || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0LL),
          (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
    {
      sub_1B4D1EC(battleResultComponent, v9);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v15.fields._current )
        sub_1B4D1EC(0LL, v11);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v15.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
    if ( friendshipUpItemSwitchComponent )
      FriendshipUpItemSwitchComponent__EnableUseButton(friendshipUpItemSwitchComponent, 0, 0LL);
    currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
    if ( currentQuestUseItemButtons )
      BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, v12);
  }
}


void __fastcall BattleRetryConfirmComponent__OnClickFriendshipUpItemUseButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_49BE3F0 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_BattleRetryConfirmComponent__OnClickFriendshipUpItemUseButton_b__71_0__, v3);
    byte_49BE3F0 = 1;
  }
  if ( !this->fields.state )
  {
    friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
    v5 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattleRetryConfirmComponent__OnClickFriendshipUpItemUseButton_b__71_0__,
      0LL);
    if ( !friendshipUpItemSwitchComponent )
      sub_1B4D1EC(v6, v7);
    FriendshipUpItemSwitchComponent__ChangeButtonState(friendshipUpItemSwitchComponent, v5, 0LL);
  }
}


void __fastcall BattleRetryConfirmComponent__OnClickQuestUseItemButton(
        BattleRetryConfirmComponent_o *this,
        FriendshipUpItemInfo_o *info,
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
  FriendshipUpItemInfo_o *v18; // x0
  bool v19; // w1
  Il2CppObject *Instance; // x20
  System_String_o *v21; // x0
  BattleRetryConfirmComponent_o *v22; // x19
  BattleRetryConfirmComponent___c_c *v23; // x8
  System_Action_o *_9__50_0; // x22
  System_String_o *v25; // x21
  Il2CppObject *v26; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  v6 = this;
  if ( (byte_49BE3E0 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, info);
    sub_1B4CF90(&Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__, v7);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_1B4CF90(&Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__50_0__, v11);
    sub_1B4CF90(&BattleRetryConfirmComponent___c_TypeInfo, v12);
    sub_1B4CF90(&StringLiteral_10038/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, v13);
    this = (BattleRetryConfirmComponent_o *)sub_1B4CF90(&StringLiteral_1/*""*/, v14);
    byte_49BE3E0 = 1;
  }
  if ( !v6->fields.state )
  {
    if ( !info )
      goto LABEL_25;
    UseFlag = FriendshipUpItemInfo__GetUseFlag(info, 0LL);
    v16 = Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1B4CFA8(Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    v17 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v16, v16[4]);
    if ( UseFlag )
    {
      OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0, 0LL);
      if ( !item )
        goto LABEL_25;
      FriendshipUpItemUseItem__ChangeButtonState(item, 0, 0LL);
      v18 = info;
      v19 = 0;
LABEL_13:
      FriendshipUpItemInfo__SetUseFlag(v18, v19, 0LL);
      this = (BattleRetryConfirmComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        PartyOrganizationUtility__SaveQuestUseItemUseState((PartyOrganizationUtility_o *)this, 0LL);
        return;
      }
LABEL_25:
      sub_1B4D1EC(this, info);
    }
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
    this = (BattleRetryConfirmComponent_o *)FriendshipUpItemInfo__IsEventPeriod(info, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !item )
        goto LABEL_25;
      FriendshipUpItemUseItem__ChangeButtonState(item, 1, 0LL);
      v19 = 1;
      v18 = info;
      goto LABEL_13;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_10038/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
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
    _9__50_0 = v23->static_fields->__9__50_0;
    v25 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__50_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      v26 = (Il2CppObject *)v23->static_fields->__9;
      _9__50_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__50_0,
        v26,
        (intptr_t)Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__50_0__,
        0LL);
      static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
      static_fields->__9__50_0 = _9__50_0;
      sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__50_0, (int32_t)_9__50_0, v28, v29);
    }
    if ( !Instance )
      goto LABEL_25;
    CommonUI__OpenNotificationDialog(
      (CommonUI_o *)Instance,
      v25,
      (System_String_o *)v22,
      _9__50_0,
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
    sub_1B4D1EC(bgObj, opendFunc);
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

  if ( (byte_49BE3EC & 1) == 0 )
  {
    sub_1B4CF90(&BattleSetupInfo_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventDetailMaster___, v3);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__, v8);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_10901/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, v10);
    sub_1B4CF90(&StringLiteral_2853/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/, v11);
    byte_49BE3EC = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B7982 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    byte_49B7982 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v12->static_fields->_WarId_k__BackingField;
  if ( !byte_49B5A14 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    v12 = TerminalPramsManager_TypeInfo;
    byte_49B5A14 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v12->static_fields->_QuestId_k__BackingField;
  if ( !byte_49B5A13 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, method);
    v12 = TerminalPramsManager_TypeInfo;
    byte_49B5A13 = 1;
  }
  if ( !v12->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v12);
    v12 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v12->static_fields->_PhaseCnt_k__BackingField;
  v16 = (BattleSetupInfo_o *)sub_1B4D1DC(BattleSetupInfo_TypeInfo);
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
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v19 || !Master_object )
    goto LABEL_53;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          v19->fields.eventId,
          (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_53;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_object )
      goto LABEL_53;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_object,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0LL)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_10901/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0LL) == 1 )
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
                                                                        (System_String_o *)StringLiteral_2853/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/,
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
      sub_1B4D1EC(Master_object, v18);
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
        sub_1B4D1F4(this, value);
      if ( *i )
      {
        if ( v7 >= max_length )
          goto LABEL_13;
        v11 = &v9->obj.klass + v7;
        v12 = (UnityEngine_MonoBehaviour_o *)v11[4];
        if ( !v12 )
          break;
        v13 = RetryConfirmItem__SetCondensedScalePossessionAmount(
                (RetryConfirmItem_o *)v11[4],
                (const MethodInfo *)value);
        this = (BattleRetryConfirmComponent_o *)UnityEngine_MonoBehaviour__StartCoroutine_68789728(v12, v13, 0LL);
      }
      LODWORD(v4) = value->max_length;
      if ( (__int64)++v7 >= (int)v4 )
        return;
    }
LABEL_14:
    sub_1B4D1EC(this, value);
  }
}


void __fastcall BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
        BattleRetryConfirmComponent_o *this,
        BattleRetryConfirmComponent_RetryConfirmItemStr_array *items,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *reqSingleParent; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct RetryConfirmItem_o *singleItem; // x20
  UnityEngine_GameObject_o *v9; // x21
  _BOOL8 activeSelf; // x0
  const MethodInfo *v11; // x3
  RetryConfirmItem_array **p_itemsa; // x2
  __int64 v13; // x0
  RetryConfirmItem_array *itemsa; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BE3EF & 1) == 0 )
  {
    sub_1B4CF90(&RetryConfirmItem___TypeInfo, items);
    byte_49BE3EF = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_29;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL) )
  {
    reqSingleParent = (UnityEngine_GameObject_o *)sub_1B4D038(RetryConfirmItem___TypeInfo, 1LL);
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
    reqSingleParent = (UnityEngine_GameObject_o *)sub_1B4D038(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItem = this->fields.singleItemWithUseItemButton;
LABEL_11:
      v9 = reqSingleParent;
      if ( singleItem )
      {
        reqSingleParent = (UnityEngine_GameObject_o *)sub_1B4D0CC(singleItem, reqSingleParent->klass->_1.element_class);
        if ( !reqSingleParent )
        {
          v13 = sub_1B4D210(0LL);
          sub_1B4D0B8(v13, 0LL);
        }
      }
      if ( !LODWORD(v9[1].klass) )
        sub_1B4D1F4(reqSingleParent, items);
      v9[1].monitor = singleItem;
      sub_1B4CF34((CGThumbnailListItem_o *)&v9[1].monitor, (int32_t)singleItem, v6, v7);
      itemsa = (RetryConfirmItem_array *)v9;
      p_itemsa = &itemsa;
      goto LABEL_15;
    }
LABEL_29:
    sub_1B4D1EC(reqSingleParent, items);
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
  if ( (byte_49BE3E7 & 1) == 0 )
  {
    this = (BattleRetryConfirmComponent_o *)sub_1B4CF90(&StringLiteral_1/*""*/, costPoint);
    byte_49BE3E7 = 1;
  }
  if ( !items )
    sub_1B4D1EC(this, costPoint);
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
        sub_1B4D1F4(v8, v9);
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

  if ( (byte_49BE3E5 & 1) == 0 )
  {
    sub_1B4CF90(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_49BE3E5 = 1;
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
    sub_1B4D1EC(reqSingleParent, costPoint);
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
      sub_1B4D1F4(reqSingleParent, costPoint);
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

  if ( (byte_49BE3E4 & 1) == 0 )
  {
    sub_1B4CF90(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_49BE3E4 = 1;
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
    sub_1B4D1EC(reqSingleParent, costPoint);
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

  if ( (byte_49BE3E6 & 1) == 0 )
  {
    sub_1B4CF90(&BattleRetryConfirmComponent_TypeInfo, costPoint);
    byte_49BE3E6 = 1;
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
    sub_1B4D1EC(reqSingleParent, costPoint);
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
      sub_1B4D1F4(reqSingleParent, costPoint);
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
  UnityEngine_Object_o *friendshipUpItemSwitchComponent; // x20
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v7; // x1
  char v8; // w20
  UnityEngine_GameObject_o *v9; // x20
  UnityEngine_GameObject_o *v10; // x20
  UILabel_o *mainText; // x19
  struct BattleRetryConfirmComponent_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o *v14; // x20
  char v15; // w20
  BattleRetryConfirmComponent_c *v16; // x8
  UnityEngine_GameObject_o *v17; // x20
  UnityEngine_GameObject_o *v18; // x20
  char v19; // w20
  __int64 v20; // x9

  if ( (byte_49BE3EE & 1) == 0 )
  {
    sub_1B4CF90(&BattleRetryConfirmComponent_TypeInfo, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v4);
    byte_49BE3EE = 1;
  }
  friendshipUpItemSwitchComponent = (UnityEngine_Object_o *)this->fields.friendshipUpItemSwitchComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemSwitchComponent, 0LL, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL);
      if ( this->fields.friendshipUpItemSwitchComponent )
      {
        v8 = (char)Instance;
        Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                   0LL);
        if ( Instance )
        {
          if ( (v8 & 1) != 0 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
            Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
            if ( !Instance )
              goto LABEL_64;
            FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, 0LL);
          }
          else
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
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
                  if ( this->fields.friendshipUpItemSwitchComponent )
                  {
                    v9 = (UnityEngine_GameObject_o *)Instance;
                    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                               0LL);
                    if ( Instance )
                    {
                      Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                 (UnityEngine_GameObject_o *)Instance,
                                                                 0LL);
                      if ( v9 )
                      {
                        UnityEngine_GameObject__SetActive(v9, ((unsigned __int8)Instance & 1) == 0, 0LL);
                        Instance = (PartyOrganizationUtility_o *)this->fields.reqSingleParentWithUseItemButton;
                        if ( Instance )
                        {
                          Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                     (UnityEngine_GameObject_o *)Instance,
                                                                     0LL);
                          if ( this->fields.friendshipUpItemSwitchComponent )
                          {
                            v10 = (UnityEngine_GameObject_o *)Instance;
                            Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                                       0LL);
                            if ( Instance )
                            {
                              Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                         (UnityEngine_GameObject_o *)Instance,
                                                                         0LL);
                              if ( v10 )
                              {
                                UnityEngine_GameObject__SetActive(v10, (unsigned __int8)Instance & 1, 0LL);
                                mainText = this->fields.mainText;
                                Instance = (PartyOrganizationUtility_o *)BattleRetryConfirmComponent_TypeInfo;
                                if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                if ( mainText )
                                {
                                  static_fields = BattleRetryConfirmComponent_TypeInfo->static_fields;
LABEL_63:
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
                        if ( this->fields.friendshipUpItemSwitchComponent )
                        {
                          v13 = (UnityEngine_GameObject_o *)Instance;
                          Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                                     0LL);
                          if ( Instance )
                          {
                            Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                       (UnityEngine_GameObject_o *)Instance,
                                                                       0LL);
                            if ( v13 )
                            {
                              UnityEngine_GameObject__SetActive(v13, ((unsigned __int8)Instance & 1) == 0, 0LL);
                              Instance = (PartyOrganizationUtility_o *)this->fields.reqDoubleParentWithUseItemButton;
                              if ( Instance )
                              {
                                Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                           0LL);
                                if ( this->fields.friendshipUpItemSwitchComponent )
                                {
                                  v14 = (UnityEngine_GameObject_o *)Instance;
                                  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                                             0LL);
                                  if ( Instance )
                                  {
                                    Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                               (UnityEngine_GameObject_o *)Instance,
                                                                               0LL);
                                    if ( v14 )
                                    {
                                      UnityEngine_GameObject__SetActive(v14, (unsigned __int8)Instance & 1, 0LL);
                                      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
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
                                          v15 = (char)Instance;
                                          v16 = BattleRetryConfirmComponent_TypeInfo;
                                          if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                            v16 = BattleRetryConfirmComponent_TypeInfo;
                                          }
                                          if ( mainText )
                                          {
                                            static_fields = v16->static_fields;
                                            if ( (v15 & 1) != 0 )
                                              static_fields = (struct BattleRetryConfirmComponent_StaticFields *)((char *)static_fields + 8);
                                            goto LABEL_63;
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
                        if ( this->fields.friendshipUpItemSwitchComponent )
                        {
                          v17 = (UnityEngine_GameObject_o *)Instance;
                          Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                                     0LL);
                          if ( Instance )
                          {
                            Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                       (UnityEngine_GameObject_o *)Instance,
                                                                       0LL);
                            if ( v17 )
                            {
                              UnityEngine_GameObject__SetActive(v17, ((unsigned __int8)Instance & 1) == 0, 0LL);
                              Instance = (PartyOrganizationUtility_o *)this->fields.reqTripleParentWithUseItemButton;
                              if ( Instance )
                              {
                                Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                           0LL);
                                if ( this->fields.friendshipUpItemSwitchComponent )
                                {
                                  v18 = (UnityEngine_GameObject_o *)Instance;
                                  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                                             0LL);
                                  if ( Instance )
                                  {
                                    Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                               (UnityEngine_GameObject_o *)Instance,
                                                                               0LL);
                                    if ( v18 )
                                    {
                                      UnityEngine_GameObject__SetActive(v18, (unsigned __int8)Instance & 1, 0LL);
                                      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
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
                                          v19 = (char)Instance;
                                          if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                          if ( mainText )
                                          {
                                            v20 = 4LL;
                                            if ( (v19 & 1) != 0 )
                                              v20 = 12LL;
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)((char *)BattleRetryConfirmComponent_TypeInfo->static_fields + v20);
                                            goto LABEL_63;
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
LABEL_64:
    sub_1B4D1EC(Instance, v7);
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
    sub_1B4D1EC(this, value);
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
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x29
  void *Instance; // x0
  const MethodInfo *v52; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *MasterData_object; // x20
  QuestEntity_o *v59; // x19
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v61; // x20
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  System_Text_StringBuilder_o *v64; // x26
  System_String_o *v65; // x20
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  QuestEntity_o *v68; // x25
  BattleRetryConfirmComponent_o *v69; // x19
  __int64 *v70; // x23
  Il2CppObject *v71; // x26
  int actMax; // w27
  BalanceConfig_c *v73; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  Il2CppObject *v76; // x28
  Il2CppObject *v77; // x29
  il2cpp_array_size_t v78; // w22
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v80; // x8
  _DWORD *v81; // x25
  ItemEntity_o *v82; // x20
  int32_t qp; // w24
  struct System_Int32_array *nums; // x8
  System_String_o *v85; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  struct System_Int32_array *v91; // x8
  System_String_o *v92; // x25
  Il2CppObject *v93; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  System_String_o *v96; // x0
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  int32_t MaxNum; // w25
  bool v100; // w21
  System_String_o *v101; // x25
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  Il2CppObject *v105; // x24
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  Il2CppObject *v109; // x0
  System_String_o *v110; // x0
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  System_String_o *v113; // x20
  __int64 v114; // x2
  __int64 v115; // x3
  __int64 v116; // x4
  Il2CppObject *v117; // x0
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  __int64 v120; // x8
  _QWORD *v121; // x10
  __int64 v122; // x9
  __int128 v123; // q0
  __int128 v124; // q1
  __int64 v125; // x8
  const MethodInfo_35E74CC *v126; // x2
  System_String_o *v127; // x19
  Il2CppObject *v128; // x0
  System_String_o *v129; // x0
  System_String_o *v130; // x19
  System_String_o *v131; // x0
  System_String_o *v132; // x19
  CommonUI_o *v133; // x20
  BattleRetryConfirmComponent___c_c *v134; // x8
  System_Action_o *_9__47_1; // x22
  System_String_o *v136; // x21
  Il2CppObject *v137; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  Il2CppObject *v145; // x28
  Il2CppObject *v146; // x29
  il2cpp_array_size_t v147; // w22
  struct System_Int32_array *v148; // x8
  struct System_Int32_array *v149; // x8
  _DWORD *v150; // x25
  ItemEntity_o *v151; // x20
  int32_t v152; // w24
  struct System_Int32_array *v153; // x8
  System_String_o *v154; // x0
  int32_t v155; // w2
  const MethodInfo *v156; // x3
  __int64 v157; // x2
  __int64 v158; // x3
  __int64 v159; // x4
  struct System_Int32_array *v160; // x8
  System_String_o *v161; // x25
  Il2CppObject *v162; // x0
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  System_String_o *v165; // x0
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  int32_t v168; // w25
  bool v169; // w21
  System_String_o *v170; // x25
  __int64 v171; // x2
  __int64 v172; // x3
  __int64 v173; // x4
  Il2CppObject *v174; // x24
  __int64 v175; // x2
  __int64 v176; // x3
  __int64 v177; // x4
  Il2CppObject *v178; // x0
  System_String_o *v179; // x0
  int32_t v180; // w2
  const MethodInfo *v181; // x3
  System_String_o *v182; // x20
  __int64 v183; // x2
  __int64 v184; // x3
  __int64 v185; // x4
  Il2CppObject *v186; // x0
  int32_t v187; // w2
  const MethodInfo *v188; // x3
  __int64 v189; // x8
  _QWORD *v190; // x10
  __int64 v191; // x9
  __int128 v192; // q0
  __int128 v193; // q1
  __int64 v194; // x8
  const MethodInfo_35E74CC *v195; // x2
  System_String_o *v196; // x19
  Il2CppObject *v197; // x0
  System_String_o *v198; // x0
  System_String_o *v199; // x19
  System_String_o *v200; // x0
  System_String_o *v201; // x19
  CommonUI_o *v202; // x20
  BattleRetryConfirmComponent___c_c *v203; // x8
  System_Action_o *_9__47_2; // x22
  System_String_o *v205; // x21
  Il2CppObject *v206; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v207; // x0
  int32_t v208; // w2
  const MethodInfo *v209; // x3
  MapControl_QuestInfo_o *v211; // x20
  int32_t questId; // w22
  __int64 v213; // x1
  bool IsQuestClear_38126524; // w22
  TerminalPramsManager_c *v215; // x0
  int32_t QuestId_k__BackingField; // w23
  int32_t CampaignCostCalcValue; // w22
  int32_t v218; // w8
  int32_t ActConsumeCost; // w20
  System_String_o *CostValueColor; // x22
  __int64 v221; // x2
  __int64 v222; // x3
  __int64 v223; // x4
  Il2CppObject *v224; // x0
  System_String_o *v225; // x0
  int v226; // w20
  Il2CppObject *v227; // x22
  System_String_o *v228; // x0
  System_String_o *v229; // x20
  __int64 v230; // x2
  __int64 v231; // x3
  __int64 v232; // x4
  Il2CppObject *v233; // x0
  Il2CppObject *v234; // x20
  System_String_o *v235; // x0
  int32_t v236; // w2
  const MethodInfo *v237; // x3
  System_String_o *v238; // x0
  int32_t v239; // w2
  const MethodInfo *v240; // x3
  System_String_o *v241; // x0
  int32_t v242; // w2
  const MethodInfo *v243; // x3
  System_String_o *v244; // x22
  __int64 v245; // x2
  __int64 v246; // x3
  __int64 v247; // x4
  Il2CppObject *v248; // x0
  int32_t v249; // w2
  const MethodInfo *v250; // x3
  UnityEngine_Object_o *singleContentsPrefab; // x20
  UnityEngine_Object_o *doubleContentsPrefab; // x20
  UnityEngine_Object_o *tripleContentsPrefab; // x20
  __int64 v254; // x20
  UnityEngine_Object_o *mainText; // x22
  UILabel_o *v256; // x22
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v257; // x0
  const MethodInfo *v258; // x3
  int32_t v259; // w2
  const MethodInfo *v260; // x3
  const MethodInfo *v261; // x1
  FriendshipUpItemInfo_array *AvailableQuestUseItems; // x0
  const MethodInfo *v263; // x2
  BattleRetryConfirmQuestUseItemButtons_o *QuestUseItemButtons; // x0
  int32_t v265; // w2
  const MethodInfo *v266; // x3
  System_Action_o *v267; // x21
  BattleRetryConfirmComponent_o *v268; // x0
  const MethodInfo *v269; // x2
  System_Collections_IEnumerator_o *v270; // x0
  struct BattleRetryConfirmContents_o *v271; // x1
  int32_t v272; // w2
  const MethodInfo *v273; // x3
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v274; // x0
  const MethodInfo *v275; // x3
  const MethodInfo *v276; // x1
  UnityEngine_Object_o *friendshipUpItemSwitchComponent; // x21
  Il2CppObject *Component_object; // x0
  int32_t v279; // w2
  const MethodInfo *v280; // x3
  int32_t v281; // w2
  const MethodInfo *v282; // x3
  struct FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x1
  const MethodInfo *v284; // x1
  System_Action_o *v285; // x20
  BattleRetryConfirmComponent_o *v286; // x0
  const MethodInfo *v287; // x2
  System_Collections_IEnumerator_o *v288; // x0
  int32_t v289; // [xsp+44h] [xbp-22Ch]
  Il2CppObject *v290; // [xsp+48h] [xbp-228h]
  __int64 v291; // [xsp+50h] [xbp-220h]
  __int64 v292; // [xsp+50h] [xbp-220h]
  BattleRetryConfirmComponent_o *v293; // [xsp+58h] [xbp-218h]
  QuestEntity_o *v294; // [xsp+60h] [xbp-210h]
  UserGameEntity_o **p_userGameEntity; // [xsp+80h] [xbp-1F0h]
  void **v296; // [xsp+88h] [xbp-1E8h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v297; // [xsp+90h] [xbp-1E0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v298; // [xsp+C0h] [xbp-1B0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v299; // [xsp+F0h] [xbp-180h]
  int32_t fixedVal; // [xsp+11Ch] [xbp-154h] BYREF
  CGThumbnailListItem_o v301; // [xsp+120h] [xbp-150h] BYREF
  int v302; // [xsp+1ACh] [xbp-C4h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v303; // [xsp+1B0h] [xbp-C0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v304; // [xsp+1E0h] [xbp-90h] BYREF

  if ( (byte_49BE3DD & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&CondType_TypeInfo, v3);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1B4CF90(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserItemMaster___, v6);
    sub_1B4CF90(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v7);
    sub_1B4CF90(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8);
    sub_1B4CF90(&Method_UnityEngine_GameObject_AddComponent_FriendshipUpItemSwitchComponent___, v9);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSwitchComponent___, v10);
    sub_1B4CF90(&int_TypeInfo, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__, v14);
    sub_1B4CF90(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo, v15);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v16);
    sub_1B4CF90(&NetworkManager_TypeInfo, v17);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v18);
    sub_1B4CF90(&MapControl_QuestInfo_TypeInfo, v19);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v22);
    sub_1B4CF90(&System_Text_StringBuilder_TypeInfo, v23);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v24);
    sub_1B4CF90(&Method_BattleRetryConfirmComponent___c__SetValues_b__47_1__, v25);
    sub_1B4CF90(&Method_BattleRetryConfirmComponent___c__SetValues_b__47_2__, v26);
    sub_1B4CF90(&Method_BattleRetryConfirmComponent___c__DisplayClass47_0__SetValues_b__0__, v27);
    sub_1B4CF90(&BattleRetryConfirmComponent___c__DisplayClass47_0_TypeInfo, v28);
    sub_1B4CF90(&Method_BattleRetryConfirmComponent___c__DisplayClass47_1__SetValues_b__3__, v29);
    sub_1B4CF90(&BattleRetryConfirmComponent___c__DisplayClass47_1_TypeInfo, v30);
    sub_1B4CF90(&BattleRetryConfirmComponent___c_TypeInfo, v31);
    sub_1B4CF90(&StringLiteral_43/*"\n"*/, v32);
    sub_1B4CF90(&StringLiteral_2864/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, v33);
    sub_1B4CF90(&StringLiteral_3760/*"CONSUME_TYPE_AP"*/, v34);
    sub_1B4CF90(&StringLiteral_10666/*"QUEST_ITEM_COST_OVER"*/, v35);
    sub_1B4CF90(&StringLiteral_2862/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, v36);
    sub_1B4CF90(&StringLiteral_2863/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, v37);
    sub_1B4CF90(&StringLiteral_2038/*"AP_OVER_MAX_COLOR"*/, v38);
    sub_1B4CF90(&StringLiteral_3761/*"CONSUME_TYPE_RP"*/, v39);
    sub_1B4CF90(&StringLiteral_2868/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, v40);
    sub_1B4CF90(&StringLiteral_2867/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, v41);
    sub_1B4CF90(&StringLiteral_2857/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/, v42);
    sub_1B4CF90(&StringLiteral_44/*"\n\n"*/, v43);
    sub_1B4CF90(&StringLiteral_2865/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, v44);
    sub_1B4CF90(&StringLiteral_2859/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, v45);
    sub_1B4CF90(&StringLiteral_1/*""*/, v46);
    sub_1B4CF90(&StringLiteral_2866/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, v47);
    sub_1B4CF90(&StringLiteral_2860/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, v48);
    sub_1B4CF90(&StringLiteral_2861/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, v49);
    byte_49BE3DD = 1;
  }
  v302 = 0;
  memset(&v301.fields.basePosition.fields.y, 0, 40);
  memset(&v301.fields.sortValue1, 0, 40);
  memset(&v301, 0, 40);
  fixedVal = 0;
  v50 = sub_1B4D1DC(BattleRetryConfirmComponent___c__DisplayClass47_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v50, 0LL);
  if ( !v50 )
    goto LABEL_213;
  *(_QWORD *)(v50 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v50 + 16), (int32_t)this, v53, v54);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_userGameEntity = &this->fields.userGameEntity;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.userGameEntity, (int32_t)SelfUserGame, v56, v57);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_213;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B5A14 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v52);
    byte_49B5A14 = 1;
  }
  Instance = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object
    || (v293 = this,
        (Instance = DataMasterBase_object__object__int___GetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                      *(_DWORD *)(*((_QWORD *)Instance + 23) + 20LL),
                      (const MethodInfo_319D99C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__)) == 0LL) )
  {
LABEL_213:
    sub_1B4D1EC(Instance, v52);
  }
  v59 = (QuestEntity_o *)Instance;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0, 0LL);
  v302 = 0;
  memset(&v301.fields.basePosition.fields.y, 0, 40);
  v61 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_1B4D1DC(System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v61,
    (const MethodInfo_35E6BA8 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  *(_QWORD *)(v50 + 24) = v61;
  v296 = (void **)(v50 + 24);
  sub_1B4CF34((CGThumbnailListItem_o *)(v50 + 24), (int32_t)v61, v62, v63);
  v64 = (System_Text_StringBuilder_o *)sub_1B4D1DC(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v64, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v65 = LocalizationManager__Get((System_String_o *)StringLiteral_3760/*"CONSUME_TYPE_AP"*/, 0LL);
  v294 = v59;
  switch ( QuestEntity__GetConsumeType(v59, 0LL) )
  {
    case 1:
      v68 = v59;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3760/*"CONSUME_TYPE_AP"*/, 0LL);
      v69 = v293;
      v70 = &qword_49B5000;
      if ( !*p_userGameEntity )
        goto LABEL_213;
      v71 = (Il2CppObject *)Instance;
      Instance = (void *)UserGameEntity__getAct(*p_userGameEntity, 0LL);
      v302 = (int)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_213;
      actMax = (*p_userGameEntity)->fields.actMax;
      goto LABEL_152;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3761/*"CONSUME_TYPE_RP"*/, 0LL);
      v69 = v293;
      v68 = v294;
      v70 = &qword_49B5000;
      if ( !*p_userGameEntity )
        goto LABEL_213;
      v71 = (Il2CppObject *)Instance;
      Instance = (void *)UserGameEntity__getRp(*p_userGameEntity, 0LL);
      v302 = (int)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_213;
      if ( !byte_49B7C20 )
      {
        sub_1B4CF90(&BalanceConfig_TypeInfo, v52);
        byte_49B7C20 = 1;
      }
      v73 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v73 = BalanceConfig_TypeInfo;
      }
      actMax = v73->static_fields->UerGameRpMax;
      goto LABEL_152;
    case 3:
      v291 = v50;
      *(_QWORD *)&v301.fields.basePosition.fields.y = StringLiteral_1/*""*/;
      v290 = (Il2CppObject *)StringLiteral_1/*""*/;
      sub_1B4CF34((CGThumbnailListItem_o *)&v301.fields.basePosition.fields.y, (int32_t)StringLiteral_1/*""*/, v66, v67);
      v301.fields.viewObject = (struct ListViewObject_o *)StringLiteral_1/*""*/;
      sub_1B4CF34((CGThumbnailListItem_o *)&v301.fields.viewObject, (int32_t)StringLiteral_1/*""*/, v74, v75);
      if ( !ItemConsumeEntity )
        goto LABEL_76;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_213;
      v76 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_213;
      v77 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = (void *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_76;
      v78 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_49B57A5 )
        {
          sub_1B4CF90(&NetworkManager_TypeInfo, v52);
          byte_49B57A5 = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager_TypeInfo;
        }
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_213;
        if ( v78 >= itemIds->max_length )
          goto LABEL_214;
        if ( !v77 )
          goto LABEL_213;
        Instance = UserItemMaster__GetEntity(
                     (UserItemMaster_o *)v77,
                     *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                     itemIds->m_Items[v78 + 1],
                     0LL);
        v80 = ItemConsumeEntity->fields.itemIds;
        if ( !v80 )
          goto LABEL_213;
        if ( v78 >= v80->max_length )
          goto LABEL_214;
        if ( !v76 )
          goto LABEL_213;
        v81 = Instance;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)v76,
                     v80->m_Items[v78 + 1],
                     (const MethodInfo_319D99C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_213;
        v82 = (ItemEntity_o *)Instance;
        if ( *((_DWORD *)Instance + 12) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_213;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v81
               && (Instance = (void *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL),
                   ((unsigned __int8)Instance & 1) != 0) )
        {
          qp = v81[7];
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_213;
        if ( v78 >= nums->max_length )
          goto LABEL_214;
        if ( nums->m_Items[v78 + 1] > qp )
        {
          Instance = System_String__Concat_61093468((System_String_o *)StringLiteral_43/*"\n"*/, v82->fields.name, 0LL);
          if ( !v64 )
            goto LABEL_213;
          System_Text_StringBuilder__Append_61178652(v64, (System_String_o *)Instance, 0LL);
        }
        memset(&v301.fields.sortValue1, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v85 = LocalizationManager__Get((System_String_o *)StringLiteral_2863/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v301.fields.sortValue1 = (int64_t)System_String__Format(v85, (Il2CppObject *)v82->fields.name, 0LL);
        sub_1B4CF34((CGThumbnailListItem_o *)&v301.fields.sortValue1, v301.fields.sortValue1, v86, v87);
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2864/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v91 = ItemConsumeEntity->fields.nums;
        if ( !v91 )
          goto LABEL_213;
        if ( v78 >= v91->max_length )
          goto LABEL_214;
        v92 = (System_String_o *)Instance;
        LODWORD(v304.fields.useName) = v91->m_Items[v78 + 1];
        v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v304, v88, v89, v90);
        v301.fields.sortStr1 = System_String__Format(v92, v93, 0LL);
        sub_1B4CF34((CGThumbnailListItem_o *)&v301.fields.sortStr1, (int32_t)v301.fields.sortStr1, v94, v95);
        v96 = LocalizationManager__Get((System_String_o *)StringLiteral_2866/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v301.fields.sortValue1B = (int64_t)System_String__Format(v96, (Il2CppObject *)v82->fields.name, 0LL);
        sub_1B4CF34((CGThumbnailListItem_o *)&v301.fields.sortValue1B, v301.fields.sortValue1B, v97, v98);
        MaxNum = ItemEntity__GetMaxNum(v82, 0LL);
        v100 = MaxNum > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( MaxNum < 1 )
        {
          v113 = LocalizationManager__Get((System_String_o *)StringLiteral_2867/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v304.fields.useName) = qp;
          v117 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v304, v114, v115, v116);
          v110 = System_String__Format(v113, v117, 0LL);
        }
        else
        {
          v101 = LocalizationManager__Get((System_String_o *)StringLiteral_2868/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v304.fields.useName) = qp;
          v105 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v304, v102, v103, v104);
          LODWORD(v303.fields.useName) = ItemEntity__GetMaxNum(v82, 0LL);
          v109 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v303, v106, v107, v108);
          v110 = System_String__Format_61134760(v101, v105, v109, 0LL);
        }
        v301.fields.sortValue2 = (int64_t)v110;
        sub_1B4CF34((CGThumbnailListItem_o *)&v301.fields.sortValue2, (int32_t)v110, v111, v112);
        LOBYTE(v301.fields.sortValue2B) = v100;
        Instance = *v296;
        v299 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v301.fields.sortValue1;
        if ( !Instance )
          goto LABEL_213;
        v303 = v299;
        v120 = *((_QWORD *)Instance + 2);
        v121 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++*((_DWORD *)Instance + 7);
        if ( !v120 )
          goto LABEL_213;
        v122 = *((int *)Instance + 6);
        if ( (unsigned int)v122 >= *(_DWORD *)(v120 + 24) )
        {
          v126 = *(const MethodInfo_35E74CC **)(*(_QWORD *)(v121[4] + 192LL) + 112LL);
          v304 = v303;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
            &v304,
            v126);
        }
        else
        {
          *((_DWORD *)Instance + 6) = v122 + 1;
          v123 = *(_OWORD *)&v303.fields.useName;
          v124 = *(_OWORD *)&v303.fields.possessionName;
          v125 = v120 + 40 * v122;
          *(_QWORD *)(v125 + 64) = *(_QWORD *)&v303.fields.isIndividualLimit;
          *(_OWORD *)(v125 + 32) = v123;
          *(_OWORD *)(v125 + 48) = v124;
          sub_1B4CF34((CGThumbnailListItem_o *)(v125 + 32), 0, v118, v119);
        }
        Instance = (void *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v78, 0LL);
      }
      while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_76:
      if ( !v64 )
        goto LABEL_213;
      v50 = v291;
      v68 = v59;
      v70 = &qword_49B5000;
      if ( System_Text_StringBuilder__get_Length(v64, 0LL) < 1 )
      {
        actMax = 0;
LABEL_151:
        v69 = v293;
        v71 = v290;
LABEL_152:
        if ( QuestEntity__GetConsumeType(v68, 0LL) == 1
          || QuestEntity__GetConsumeType(v68, 0LL) == 2
          || QuestEntity__GetConsumeType(v68, 0LL) == 4 )
        {
          v211 = (MapControl_QuestInfo_o *)sub_1B4D1DC(MapControl_QuestInfo_TypeInfo);
          MapControl_QuestInfo___ctor(v211, 0LL);
          if ( !v211 )
            goto LABEL_213;
          MapControl_QuestInfo__SetTerminalParamsValue(v211, 0LL);
          questId = v211->fields.questId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          fixedVal = -1;
          IsQuestClear_38126524 = CondType__IsQuestClear_38126524(questId, -1, 0, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !*((_BYTE *)v70 + 2580) )
          {
            sub_1B4CF90(&TerminalPramsManager_TypeInfo, v213);
            *((_BYTE *)v70 + 2580) = 1;
          }
          v215 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v215 = TerminalPramsManager_TypeInfo;
          }
          QuestId_k__BackingField = v215->static_fields->_QuestId_k__BackingField;
          if ( !byte_49B5A13 )
          {
            sub_1B4CF90(&TerminalPramsManager_TypeInfo, v213);
            v215 = TerminalPramsManager_TypeInfo;
            byte_49B5A13 = 1;
          }
          if ( !v215->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v215);
            v215 = TerminalPramsManager_TypeInfo;
          }
          CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                                    v68,
                                    QuestId_k__BackingField,
                                    v215->static_fields->_PhaseCnt_k__BackingField,
                                    !IsQuestClear_38126524,
                                    &fixedVal,
                                    0LL);
          Instance = MapControl_QuestInfo__GetMine(v211, 0LL);
          if ( !Instance )
            goto LABEL_213;
          QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
          v218 = fixedVal;
          v211->fields.costCalcVal = CampaignCostCalcValue;
          v211->fields._fixedCostVal_k__BackingField = v218;
          ActConsumeCost = MapControl_QuestInfo__GetActConsumeCost(v211, 0LL);
          CostValueColor = QuestEntity__GetCostValueColor(
                             CampaignCostCalcValue,
                             (ActConsumeCost > actMax) | (unsigned __int8)(ActConsumeCost > v302),
                             0LL);
          LODWORD(v304.fields.useName) = ActConsumeCost;
          v224 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v304, v221, v222, v223);
          v225 = System_String__Format(CostValueColor, v224, 0LL);
          v226 = v302;
          v227 = (Il2CppObject *)v225;
          v228 = System_Int32__ToString((int32_t)&v302, 0LL);
          if ( actMax < v226 )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v229 = LocalizationManager__Get((System_String_o *)StringLiteral_2038/*"AP_OVER_MAX_COLOR"*/, 0LL);
            LODWORD(v304.fields.useName) = v302;
            v233 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v304, v230, v231, v232);
            v228 = System_String__Format(v229, v233, 0LL);
          }
          v234 = (Il2CppObject *)v228;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v235 = LocalizationManager__Get((System_String_o *)StringLiteral_2861/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0LL);
          *(_QWORD *)&v301.fields.basePosition.fields.y = System_String__Format(v235, v71, 0LL);
          sub_1B4CF34(
            (CGThumbnailListItem_o *)&v301.fields.basePosition.fields.y,
            SLODWORD(v301.fields.basePosition.fields.y),
            v236,
            v237);
          v238 = LocalizationManager__Get((System_String_o *)StringLiteral_2862/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0LL);
          v301.fields.viewObject = (struct ListViewObject_o *)System_String__Format(v238, v227, 0LL);
          sub_1B4CF34((CGThumbnailListItem_o *)&v301.fields.viewObject, (int32_t)v301.fields.viewObject, v239, v240);
          v241 = LocalizationManager__Get((System_String_o *)StringLiteral_2859/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0LL);
          *(_QWORD *)&v301.fields._Id_k__BackingField = System_String__Format(v241, v71, 0LL);
          sub_1B4CF34(
            (CGThumbnailListItem_o *)&v301.fields._Id_k__BackingField,
            v301.fields._Id_k__BackingField,
            v242,
            v243);
          v244 = LocalizationManager__Get((System_String_o *)StringLiteral_2860/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0LL);
          LODWORD(v304.fields.useName) = actMax;
          v248 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v304, v245, v246, v247);
          *(_QWORD *)&v301.fields._Type_k__BackingField = System_String__Format_61134760(v244, v234, v248, 0LL);
          sub_1B4CF34(
            (CGThumbnailListItem_o *)&v301.fields._Type_k__BackingField,
            v301.fields._Type_k__BackingField,
            v249,
            v250);
        }
        singleContentsPrefab = (UnityEngine_Object_o *)v69->fields.singleContentsPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(singleContentsPrefab, 0LL, 0LL) )
          goto LABEL_199;
        doubleContentsPrefab = (UnityEngine_Object_o *)v69->fields.doubleContentsPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(doubleContentsPrefab, 0LL, 0LL) )
          goto LABEL_199;
        tripleContentsPrefab = (UnityEngine_Object_o *)v69->fields.tripleContentsPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(tripleContentsPrefab, 0LL, 0LL) )
        {
          v254 = sub_1B4D1DC(BattleRetryConfirmComponent___c__DisplayClass47_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v254, 0LL);
          mainText = (UnityEngine_Object_o *)v69->fields.mainText;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(mainText, 0LL, 0LL) )
          {
            v256 = v69->fields.mainText;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2857/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/, 0LL);
            if ( !v256 )
              goto LABEL_213;
            UILabel__set_text(v256, (System_String_o *)Instance, 0LL);
          }
          v304 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v301.fields.basePosition.fields.y;
          Instance = *v296;
          if ( !*v296 )
            goto LABEL_213;
          v257 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                   (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
                   (const MethodInfo_35E94DC *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
          v298 = v304;
          Instance = BattleRetryConfirmComponent__CreateContents(v69, &v298, v257, v258);
          if ( !v254 )
            goto LABEL_213;
          *(_QWORD *)(v254 + 16) = Instance;
          sub_1B4CF34((CGThumbnailListItem_o *)(v254 + 16), (int32_t)Instance, v259, v260);
          Instance = *(void **)(v254 + 16);
          if ( !Instance )
            goto LABEL_213;
          BattleRetryConfirmContents__Initialized((BattleRetryConfirmContents_o *)Instance, v52);
          BattleRetryConfirmComponent__SetBoostSupportRequestButton(v69, v261);
          Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_213;
          *((_BYTE *)Instance + 96) = 0;
          Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_213;
          PartyOrganizationUtility__SetFriendshipUpItemInfoCache((PartyOrganizationUtility_o *)Instance, 0LL);
          Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_213;
          AvailableQuestUseItems = PartyOrganizationUtility__GetAvailableQuestUseItems(
                                     (PartyOrganizationUtility_o *)Instance,
                                     0LL);
          QuestUseItemButtons = BattleRetryConfirmComponent__CreateQuestUseItemButtons(
                                  v69,
                                  AvailableQuestUseItems,
                                  v263);
          v69->fields.currentQuestUseItemButtons = QuestUseItemButtons;
          sub_1B4CF34(
            (CGThumbnailListItem_o *)&v69->fields.currentQuestUseItemButtons,
            (int32_t)QuestUseItemButtons,
            v265,
            v266);
          v267 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            v267,
            (Il2CppObject *)v254,
            Method_BattleRetryConfirmComponent___c__DisplayClass47_1__SetValues_b__3__,
            0LL);
          v270 = BattleRetryConfirmComponent__WaitOneFrame(v268, v267, v269);
          UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)v69, v270, 0LL);
          v271 = *(struct BattleRetryConfirmContents_o **)(v254 + 16);
          v69->fields.currentContents = v271;
          sub_1B4CF34((CGThumbnailListItem_o *)&v69->fields.currentContents, (int32_t)v271, v272, v273);
        }
        else
        {
LABEL_199:
          v304 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v301.fields.basePosition.fields.y;
          Instance = *v296;
          if ( !*v296 )
            goto LABEL_213;
          v274 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                   (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
                   (const MethodInfo_35E94DC *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
          v297 = v304;
          BattleRetryConfirmComponent__SetCostValueText(v69, &v297, v274, v275);
          BattleRetryConfirmComponent__SetBoostSupportRequestButton(v69, v276);
          friendshipUpItemSwitchComponent = (UnityEngine_Object_o *)v69->fields.friendshipUpItemSwitchComponent;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(friendshipUpItemSwitchComponent, 0LL, 0LL) )
          {
            Instance = v69->fields.friendshipUpItemUseButton;
            if ( !Instance )
              goto LABEL_213;
            Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( !Instance )
              goto LABEL_213;
            UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)Instance,
              (const MethodInfo_2F5335C *)Method_UnityEngine_GameObject_AddComponent_FriendshipUpItemSwitchComponent___);
            Instance = v69->fields.friendshipUpItemUseButton;
            if ( !Instance )
              goto LABEL_213;
            Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( !Instance )
              goto LABEL_213;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Instance,
                                 (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSwitchComponent___);
            v69->fields.friendshipUpItemSwitchComponent = (struct FriendshipUpItemSwitchComponent_o *)Component_object;
            sub_1B4CF34(
              (CGThumbnailListItem_o *)&v69->fields.friendshipUpItemSwitchComponent,
              (int32_t)Component_object,
              v279,
              v280);
            Instance = v69->fields.friendshipUpItemSwitchComponent;
            if ( !Instance )
              goto LABEL_213;
            friendshipUpItemUseButton = v69->fields.friendshipUpItemUseButton;
            *((_QWORD *)Instance + 4) = friendshipUpItemUseButton;
            sub_1B4CF34(
              (CGThumbnailListItem_o *)((char *)Instance + 32),
              (int32_t)friendshipUpItemUseButton,
              v281,
              v282);
          }
          Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_213;
          *((_BYTE *)Instance + 96) = 0;
          Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_213;
          PartyOrganizationUtility__SetFriendshipUpItemInfoCache((PartyOrganizationUtility_o *)Instance, 0LL);
          BattleRetryConfirmComponent__SetFriendshipUpItemUseButton(v69, v284);
          v285 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            v285,
            (Il2CppObject *)v50,
            Method_BattleRetryConfirmComponent___c__DisplayClass47_0__SetValues_b__0__,
            0LL);
          v288 = BattleRetryConfirmComponent__WaitOneFrame(v286, v285, v287);
          UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)v69, v288, 0LL);
        }
        return 1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v127 = LocalizationManager__Get((System_String_o *)StringLiteral_10666/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v128 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v64->klass->vtable._3_ToString.method)(
                               v64,
                               v64->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v129 = System_String__Format(v127, v128, 0LL);
      v130 = System_String__Concat_61093468(v129, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v131 = LocalizationManager__Get((System_String_o *)StringLiteral_2865/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v132 = System_String__Concat_61093468(v130, v131, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v133 = (CommonUI_o *)Instance;
      v134 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v134 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      _9__47_1 = v134->static_fields->__9__47_1;
      v136 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__47_1 )
      {
        if ( !v134->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v134);
          v134 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v137 = (Il2CppObject *)v134->static_fields->__9;
        _9__47_1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
        System_Action___ctor(_9__47_1, v137, Method_BattleRetryConfirmComponent___c__SetValues_b__47_1__, 0LL);
        static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        static_fields->__9__47_1 = _9__47_1;
        sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__47_1, (int32_t)_9__47_1, v139, v140);
      }
      if ( !v133 )
        goto LABEL_213;
      CommonUI__OpenNotificationDialog(v133, v136, v132, _9__47_1, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
      return 0;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = LocalizationManager__Get((System_String_o *)StringLiteral_3760/*"CONSUME_TYPE_AP"*/, 0LL);
      v290 = (Il2CppObject *)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_213;
      v292 = v50;
      Instance = (void *)UserGameEntity__getAct(*p_userGameEntity, 0LL);
      v302 = (int)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_213;
      v289 = (*p_userGameEntity)->fields.actMax;
      *(_QWORD *)&v301.fields.basePosition.fields.y = StringLiteral_1/*""*/;
      sub_1B4CF34((CGThumbnailListItem_o *)&v301.fields.basePosition.fields.y, (int32_t)StringLiteral_1/*""*/, v141, v142);
      v301.fields.viewObject = (struct ListViewObject_o *)StringLiteral_1/*""*/;
      sub_1B4CF34((CGThumbnailListItem_o *)&v301.fields.viewObject, (int32_t)StringLiteral_1/*""*/, v143, v144);
      if ( !ItemConsumeEntity )
        goto LABEL_137;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_213;
      v145 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_213;
      v146 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = (void *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_137;
      v147 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_49B57A5 )
        {
          sub_1B4CF90(&NetworkManager_TypeInfo, v52);
          byte_49B57A5 = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager_TypeInfo;
        }
        v148 = ItemConsumeEntity->fields.itemIds;
        if ( !v148 )
          goto LABEL_213;
        if ( v147 >= v148->max_length )
          goto LABEL_214;
        if ( !v146 )
          goto LABEL_213;
        Instance = UserItemMaster__GetEntity(
                     (UserItemMaster_o *)v146,
                     *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                     v148->m_Items[v147 + 1],
                     0LL);
        v149 = ItemConsumeEntity->fields.itemIds;
        if ( !v149 )
          goto LABEL_213;
        if ( v147 >= v149->max_length )
          goto LABEL_214;
        if ( !v145 )
          goto LABEL_213;
        v150 = Instance;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)v145,
                     v149->m_Items[v147 + 1],
                     (const MethodInfo_319D99C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_213;
        v151 = (ItemEntity_o *)Instance;
        if ( *((_DWORD *)Instance + 12) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_213;
          v152 = (*p_userGameEntity)->fields.qp;
        }
        else if ( v150
               && (Instance = (void *)ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL),
                   ((unsigned __int8)Instance & 1) != 0) )
        {
          v152 = v150[7];
        }
        else
        {
          v152 = 0;
        }
        v153 = ItemConsumeEntity->fields.nums;
        if ( !v153 )
          goto LABEL_213;
        if ( v147 >= v153->max_length )
          goto LABEL_214;
        if ( v153->m_Items[v147 + 1] > v152 )
        {
          Instance = System_String__Concat_61093468((System_String_o *)StringLiteral_43/*"\n"*/, v151->fields.name, 0LL);
          if ( !v64 )
            goto LABEL_213;
          System_Text_StringBuilder__Append_61178652(v64, (System_String_o *)Instance, 0LL);
        }
        memset(&v301, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v154 = LocalizationManager__Get((System_String_o *)StringLiteral_2863/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        v301.klass = (CGThumbnailListItem_c *)System_String__Format(v154, (Il2CppObject *)v151->fields.name, 0LL);
        sub_1B4CF34(&v301, (int32_t)v301.klass, v155, v156);
        Instance = LocalizationManager__Get((System_String_o *)StringLiteral_2864/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v160 = ItemConsumeEntity->fields.nums;
        if ( !v160 )
          goto LABEL_213;
        if ( v147 >= v160->max_length )
LABEL_214:
          sub_1B4D1F4(Instance, v52);
        v161 = (System_String_o *)Instance;
        LODWORD(v304.fields.useName) = v160->m_Items[v147 + 1];
        v162 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v304, v157, v158, v159);
        v301.monitor = System_String__Format(v161, v162, 0LL);
        sub_1B4CF34((CGThumbnailListItem_o *)&v301.monitor, (int32_t)v301.monitor, v163, v164);
        v165 = LocalizationManager__Get((System_String_o *)StringLiteral_2866/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        *(_QWORD *)&v301.fields.selectNum = System_String__Format(v165, (Il2CppObject *)v151->fields.name, 0LL);
        sub_1B4CF34((CGThumbnailListItem_o *)&v301.fields, v301.fields.selectNum, v166, v167);
        v168 = ItemEntity__GetMaxNum(v151, 0LL);
        v169 = v168 > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v168 < 1 )
        {
          v182 = LocalizationManager__Get((System_String_o *)StringLiteral_2867/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v304.fields.useName) = v152;
          v186 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v304, v183, v184, v185);
          v179 = System_String__Format(v182, v186, 0LL);
        }
        else
        {
          v170 = LocalizationManager__Get((System_String_o *)StringLiteral_2868/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v304.fields.useName) = v152;
          v174 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v304, v171, v172, v173);
          LODWORD(v303.fields.useName) = ItemEntity__GetMaxNum(v151, 0LL);
          v178 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v303, v175, v176, v177);
          v179 = System_String__Format_61134760(v170, v174, v178, 0LL);
        }
        *(_QWORD *)&v301.fields.sortIndex = v179;
        sub_1B4CF34((CGThumbnailListItem_o *)&v301.fields.sortIndex, (int32_t)v179, v180, v181);
        LOBYTE(v301.fields.sortValue0) = v169;
        Instance = *v296;
        *(_OWORD *)&v299.fields.useName = *(_OWORD *)&v301.klass;
        *(_OWORD *)&v299.fields.possessionName = *(_OWORD *)&v301.fields.selectNum;
        *(_QWORD *)&v299.fields.isIndividualLimit = v301.fields.sortValue0;
        if ( !Instance )
          goto LABEL_213;
        v303 = v299;
        v189 = *((_QWORD *)Instance + 2);
        v190 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++*((_DWORD *)Instance + 7);
        if ( !v189 )
          goto LABEL_213;
        v191 = *((int *)Instance + 6);
        if ( (unsigned int)v191 >= *(_DWORD *)(v189 + 24) )
        {
          v195 = *(const MethodInfo_35E74CC **)(*(_QWORD *)(v190[4] + 192LL) + 112LL);
          v304 = v303;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
            &v304,
            v195);
        }
        else
        {
          *((_DWORD *)Instance + 6) = v191 + 1;
          v192 = *(_OWORD *)&v303.fields.useName;
          v193 = *(_OWORD *)&v303.fields.possessionName;
          v194 = v189 + 40 * v191;
          *(_QWORD *)(v194 + 64) = *(_QWORD *)&v303.fields.isIndividualLimit;
          *(_OWORD *)(v194 + 32) = v192;
          *(_OWORD *)(v194 + 48) = v193;
          sub_1B4CF34((CGThumbnailListItem_o *)(v194 + 32), 0, v187, v188);
        }
        Instance = (void *)QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v147, 0LL);
      }
      while ( ((unsigned __int8)Instance & 1) != 0 );
LABEL_137:
      if ( !v64 )
        goto LABEL_213;
      v50 = v292;
      v68 = v59;
      actMax = v289;
      v70 = &qword_49B5000;
      if ( System_Text_StringBuilder__get_Length(v64, 0LL) < 1 )
        goto LABEL_151;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v196 = LocalizationManager__Get((System_String_o *)StringLiteral_10666/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v197 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v64->klass->vtable._3_ToString.method)(
                               v64,
                               v64->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v198 = System_String__Format(v196, v197, 0LL);
      v199 = System_String__Concat_61093468(v198, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v200 = LocalizationManager__Get((System_String_o *)StringLiteral_2865/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v201 = System_String__Concat_61093468(v199, v200, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v202 = (CommonUI_o *)Instance;
      v203 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v203 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      _9__47_2 = v203->static_fields->__9__47_2;
      v205 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__47_2 )
      {
        if ( !v203->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v203);
          v203 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v206 = (Il2CppObject *)v203->static_fields->__9;
        _9__47_2 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
        System_Action___ctor(_9__47_2, v206, Method_BattleRetryConfirmComponent___c__SetValues_b__47_2__, 0LL);
        v207 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v207->__9__47_2 = _9__47_2;
        sub_1B4CF34((CGThumbnailListItem_o *)&v207->__9__47_2, (int32_t)_9__47_2, v208, v209);
      }
      if ( !v202 )
        goto LABEL_213;
      CommonUI__OpenNotificationDialog(v202, v205, v201, _9__47_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
      return 0;
    default:
      v69 = v293;
      v68 = v294;
      actMax = 0;
      v71 = (Il2CppObject *)v65;
      v70 = &qword_49B5000;
      goto LABEL_152;
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

  if ( (byte_49BE3E3 & 1) == 0 )
  {
    sub_1B4CF90(&BattleRetryConfirmComponent__WaitOneFrame_d__55_TypeInfo, action);
    byte_49BE3E3 = 1;
  }
  v4 = sub_1B4D1DC(BattleRetryConfirmComponent__WaitOneFrame_d__55_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = action;
  sub_1B4CF34((CGThumbnailListItem_o *)(v4 + 32), (int32_t)action, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattleRetryConfirmComponent___BaseDialogOpen_b__64_0(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  this->fields.state = 0;
}


void __fastcall BattleRetryConfirmComponent___OnClickFriendshipUpItemUseButton_b__71_0(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  BattleResultComponent_o *battleResultComponent; // x0

  battleResultComponent = this->fields.battleResultComponent;
  this->fields.state = 1;
  if ( !battleResultComponent )
    sub_1B4D1EC(0LL, method);
  BattleResultComponent__OpenFriendshipUpItemSelectDialog(battleResultComponent, 0LL);
}


void __fastcall BattleRetryConfirmComponent__WaitOneFrame_d__55___ctor(
        BattleRetryConfirmComponent__WaitOneFrame_d__55_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRetryConfirmComponent__WaitOneFrame_d__55__MoveNext(
        BattleRetryConfirmComponent__WaitOneFrame_d__55_o *this,
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
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleRetryConfirmComponent__WaitOneFrame_d__55__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRetryConfirmComponent__WaitOneFrame_d__55_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRetryConfirmComponent__WaitOneFrame_d__55__System_Collections_IEnumerator_Reset(
        BattleRetryConfirmComponent__WaitOneFrame_d__55_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__55_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
}


Il2CppObject *__fastcall BattleRetryConfirmComponent__WaitOneFrame_d__55__System_Collections_IEnumerator_get_Current(
        BattleRetryConfirmComponent__WaitOneFrame_d__55_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRetryConfirmComponent__WaitOneFrame_d__55__System_IDisposable_Dispose(
        BattleRetryConfirmComponent__WaitOneFrame_d__55_o *this,
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

  if ( (byte_49BE3F3 & 1) == 0 )
  {
    sub_1B4CF90(&BattleRetryConfirmComponent___c_TypeInfo, v1);
    byte_49BE3F3 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(BattleRetryConfirmComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleRetryConfirmComponent___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)BattleRetryConfirmComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleRetryConfirmComponent___c___ctor(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmComponent___c___OnClickQuestUseItemButton_b__50_0(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_49BE3F6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B4CF90(&Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__50_0__, v2);
    byte_49BE3F6 = 1;
  }
  v3 = Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__50_0__;
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__50_0__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B4CFA8(Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__50_0__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v6);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__47_1(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49BE3F4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_49BE3F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2EEAD00 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__47_2(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49BE3F5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v2);
    byte_49BE3F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2EEAD00 *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c__DisplayClass47_0___ctor(
        BattleRetryConfirmComponent___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmComponent___c__DisplayClass47_0___SetValues_b__0(
        BattleRetryConfirmComponent___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *rciItems; // x0
  BattleRetryConfirmComponent_o *_4__this; // x19
  const MethodInfo *v5; // x2

  if ( (byte_49BE3F7 & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__,
      method);
    byte_49BE3F7 = 1;
  }
  rciItems = this->fields.rciItems;
  if ( !rciItems
    || (_4__this = this->fields.__4__this,
        rciItems = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(rciItems, (const MethodInfo_35E94DC *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__),
        !_4__this) )
  {
    sub_1B4D1EC(rciItems, method);
  }
  BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
    _4__this,
    (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)rciItems,
    v5);
}


void __fastcall BattleRetryConfirmComponent___c__DisplayClass47_1___ctor(
        BattleRetryConfirmComponent___c__DisplayClass47_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRetryConfirmComponent___c__DisplayClass47_1___SetValues_b__3(
        BattleRetryConfirmComponent___c__DisplayClass47_1_o *this,
        const MethodInfo *method)
{
  BattleRetryConfirmContents_o *contents; // x0

  contents = this->fields.contents;
  if ( !contents )
    sub_1B4D1EC(0LL, method);
  BattleRetryConfirmContents__SetCondensedScalePossessionAmount(contents, method);
}