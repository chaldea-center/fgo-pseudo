void __fastcall BattleRetryConfirmComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4BDF9E8 & 1) == 0 )
  {
    sub_1C21E38(&BattleRetryConfirmComponent_TypeInfo);
    byte_4BDF9E8 = 1;
  }
  *BattleRetryConfirmComponent_TypeInfo->static_fields = (struct BattleRetryConfirmComponent_StaticFields)xmmword_BFEAB0;
}


void __fastcall BattleRetryConfirmComponent___ctor(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BDF9E7 & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BDF9E7 = 1;
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
  System_Action_o *v3; // x20

  if ( (byte_4BDF9DF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleRetryConfirmComponent__BaseDialogOpen_b__64_0__);
    byte_4BDF9DF = 1;
  }
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_BattleRetryConfirmComponent__BaseDialogOpen_b__64_0__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v3, 0, 0LL);
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
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDF9E1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDF9E1 = 1;
  }
  memset(&v11, 0, sizeof(v11));
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
      BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, v9, 0LL);
      break;
    case 0:
      battleResultComponent = (BattleResultComponent_o *)this->fields.buttons;
      if ( !battleResultComponent )
        goto LABEL_21;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v11,
        (System_Collections_Generic_List_object__o *)battleResultComponent,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v11,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
      {
        if ( !v11.fields._current )
          sub_1C22094(0LL, v8);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v11.fields._current, 1, 0LL);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v11,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
      currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
      if ( currentQuestUseItemButtons )
        BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 1, 0LL);
      break;
  }
  battleResultComponent = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResultComponent )
LABEL_21:
    sub_1C22094(battleResultComponent, *(_QWORD *)&result);
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
    sub_1C22094(cancelLabel, method);
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
  __int64 v4; // x1
  BattleRetryConfirmContents_o *reqSingleParent; // x0
  struct RetryConfirmItem_array *doubleItems; // x8
  __int64 v7; // x20
  int max_length; // w9

  if ( (byte_4BDF9E3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF9E3 = 1;
  }
  currentContents = (UnityEngine_Object_o *)this->fields.currentContents;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(currentContents, 0LL, 0LL) )
  {
    reqSingleParent = this->fields.currentContents;
    if ( reqSingleParent )
    {
      BattleRetryConfirmContents__CostPointLabelCentering(reqSingleParent, 0LL);
      return;
    }
LABEL_21:
    sub_1C22094(reqSingleParent, v4);
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
    RetryConfirmItem__CenteringAmountLabel((RetryConfirmItem_o *)reqSingleParent, 0LL);
    reqSingleParent = (BattleRetryConfirmContents_o *)this->fields.singleItem;
    if ( !reqSingleParent )
      goto LABEL_21;
    RetryConfirmItem__CenteringAmountLabel((RetryConfirmItem_o *)reqSingleParent, 0LL);
  }
  else
  {
    reqSingleParent = (BattleRetryConfirmContents_o *)this->fields.doubleAp;
    if ( !reqSingleParent )
      goto LABEL_21;
    RetryConfirmItem__CenteringAmountLabel((RetryConfirmItem_o *)reqSingleParent, 0LL);
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
        sub_1C2209C(reqSingleParent, v4);
      reqSingleParent = (BattleRetryConfirmContents_o *)doubleItems->m_Items[v7];
      if ( reqSingleParent )
      {
        RetryConfirmItem__CenteringAmountLabel((RetryConfirmItem_o *)reqSingleParent, 0LL);
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
  Il2CppObject *pointOnlyContents; // x21
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *window; // x0
  __int64 v9; // x1
  unsigned __int8 v10; // w23
  System_Collections_Generic_IEnumerable_TSource__o *appended; // x0
  il2cpp_array_size_t max_length; // w8
  struct BattleRetryConfirmContents_o **p_singleContentsPrefab; // x8
  UnityEngine_Transform_o *transform; // x20
  BattleRetryConfirmContents_o *v15; // x20
  __int128 v17; // [xsp+10h] [xbp-80h]
  __int64 v18; // [xsp+20h] [xbp-70h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v19; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4BDF9D7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Append_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_BattleRetryConfirmContents___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF9D7 = 1;
  }
  pointOnlyContents = (Il2CppObject *)this->fields.pointOnlyContents;
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)System_String__op_Inequality(
                                                                      costPoint->fields.useName,
                                                                      (System_String_o *)StringLiteral_1/*""*/,
                                                                      0LL);
  v10 = (unsigned __int8)window;
  if ( ((unsigned __int8)window & 1) != 0 )
  {
    v18 = *(_QWORD *)&costPoint->fields.isIndividualLimit;
    v17 = *(_OWORD *)&costPoint->fields.possessionName;
    *(_OWORD *)&v19.fields.useName = *(_OWORD *)&costPoint->fields.useName;
    *(_OWORD *)&v19.fields.possessionName = v17;
    *(_QWORD *)&v19.fields.isIndividualLimit = v18;
    appended = System_Linq_Enumerable__Append_BattleRetryConfirmComponent_RetryConfirmItemStr_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)items,
                 &v19,
                 (const MethodInfo_2FBDA10 *)Method_System_Linq_Enumerable_Append_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    window = System_Linq_Enumerable__ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr_(
               appended,
               (const MethodInfo_2FE9A90 *)Method_System_Linq_Enumerable_ToArray_BattleRetryConfirmComponent_RetryConfirmItemStr___);
    items = window;
  }
  if ( !items )
    goto LABEL_18;
  max_length = items->max_length;
  if ( (v10 & (max_length == 1)) == 0 )
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
  window = (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)UnityEngine_Object__Instantiate_object__50551272(
                                                                      pointOnlyContents,
                                                                      transform,
                                                                      (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_BattleRetryConfirmContents___);
  if ( !window )
LABEL_18:
    sub_1C22094(window, v9);
  v15 = (BattleRetryConfirmContents_o *)window;
  BattleRetryConfirmContents__SetCostValues((BattleRetryConfirmContents_o *)window, items, 0LL);
  return v15;
}


BattleRetryConfirmQuestUseItemButtons_o *__fastcall BattleRetryConfirmComponent__CreateQuestUseItemButtons(
        BattleRetryConfirmComponent_o *this,
        FriendshipUpItemInfo_array *itemInfos,
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

  v4 = this;
  if ( (byte_4BDF9D8 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_FriendshipUpItemInfo__FriendshipUpItemUseItem__TypeInfo);
    sub_1C21E38(&Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_BattleRetryConfirmQuestUseItemButtons___);
    this = (BattleRetryConfirmComponent_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF9D8 = 1;
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
  this = (BattleRetryConfirmComponent_o *)System_Math__Min_63934948(
                                            (int32_t)this,
                                            questUseItemButtonsPrefabs->max_length,
                                            0LL);
  v6 = v4->fields.questUseItemButtonsPrefabs;
  if ( !v6 )
    goto LABEL_17;
  v7 = (_DWORD)this - 1;
  if ( (int)this - 1 >= v6->max_length )
    sub_1C2209C(this, itemInfos);
  this = (BattleRetryConfirmComponent_o *)v4->fields.window;
  if ( !this )
    goto LABEL_17;
  v8 = (Il2CppObject *)v6->m_Items[v7];
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__Instantiate_object__50551272(
          v8,
          transform,
          (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_BattleRetryConfirmQuestUseItemButtons___);
  v11 = (System_Action_object__object__o *)sub_1C22084(System_Action_FriendshipUpItemInfo__FriendshipUpItemUseItem__TypeInfo);
  System_Action_object__object____ctor(
    v11,
    (Il2CppObject *)v4,
    (intptr_t)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__,
    0LL);
  if ( !v10 )
LABEL_17:
    sub_1C22094(this, itemInfos);
  BattleRetryConfirmQuestUseItemButtons__Setup(
    (BattleRetryConfirmQuestUseItemButtons_o *)v10,
    itemInfos,
    (System_Action_FriendshipUpItemInfo__FriendshipUpItemUseItem__o *)v11,
    0LL);
  return (BattleRetryConfirmQuestUseItemButtons_o *)v10;
}


void __fastcall BattleRetryConfirmComponent__Init(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *root; // x0
  UnityEngine_Object_o *reqSingleParent; // x20
  UnityEngine_Object_o *reqDoubleParent; // x20
  struct System_Collections_Generic_List_UIButton__o **p_buttons; // x20
  System_Collections_Generic_List_object__o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v21; // x21
  unsigned __int64 v22; // x23
  __int64 v23; // x8
  _QWORD *v24; // x9
  __int64 klass_low; // x10
  __int64 v26; // x8
  __int64 v27; // x1
  UnityEngine_Object_o *mainText; // x20
  UILabel_o *v29; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *confirmLabel; // x20
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BDF9DE & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIButton__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIButton___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIButton__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_UIButton__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_3006/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/);
    sub_1C21E38(&StringLiteral_3008/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/);
    sub_1C21E38(&StringLiteral_3007/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/);
    byte_4BDF9DE = 1;
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
    v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UIButton__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UIButton___ctor__);
    this->fields.buttons = (struct System_Collections_Generic_List_UIButton__o *)v7;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.buttons, (int64_t)v7, v8, v9, v10, v11, v12, v13);
    root = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                         (UnityEngine_Component_o *)this,
                                         1,
                                         (const MethodInfo_2FA7394 *)Method_UnityEngine_Component_GetComponentsInChildren_UIButton___);
    if ( !root )
      goto LABEL_46;
    klass = root[1].klass;
    v21 = root;
    if ( (int)klass >= 1 )
    {
      v22 = 0LL;
      while ( 1 )
      {
        if ( v22 >= (unsigned int)klass )
          sub_1C2209C(root, method);
        root = (UnityEngine_GameObject_o *)*p_buttons;
        if ( !*p_buttons )
          break;
        method = (const MethodInfo *)*((_QWORD *)&v21[1].monitor + v22);
        v23 = *(_QWORD *)&root->fields.m_CachedPtr;
        v24 = Method_System_Collections_Generic_List_UIButton__Add__;
        ++HIDWORD(root[1].klass);
        if ( !v23 )
          break;
        klass_low = SLODWORD(root[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v23 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)root,
            (Il2CppObject *)method,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = v23 + 8 * klass_low;
          LODWORD(root[1].klass) = klass_low + 1;
          *(_QWORD *)(v26 + 32) = method;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 32), (int64_t)method, v14, v15, v16, v17, v18, v19);
        }
        LODWORD(klass) = v21[1].klass;
        if ( (__int64)++v22 >= (int)klass )
          goto LABEL_26;
      }
LABEL_46:
      sub_1C22094(root, method);
    }
LABEL_26:
    root = (UnityEngine_GameObject_o *)*p_buttons;
    if ( !*p_buttons )
      goto LABEL_46;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)root,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  for ( i = v32;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0LL) )
  {
    if ( !i.fields._current )
      sub_1C22094(0LL, v27);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  if ( !this->fields.isInitialized )
  {
    mainText = (UnityEngine_Object_o *)this->fields.mainText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mainText, 0LL, 0LL) )
    {
      v29 = this->fields.mainText;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3008/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE"*/, 0LL);
      if ( !v29 )
        goto LABEL_46;
      UILabel__set_text(v29, (System_String_o *)root, 0LL);
    }
    cancelLabel = this->fields.cancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3006/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_46;
    UILabel__set_text(cancelLabel, (System_String_o *)root, 0LL);
    confirmLabel = this->fields.confirmLabel;
    root = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3007/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_DECIDE"*/, 0LL);
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
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x0
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BDF9E0 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleRetryConfirmComponent_BoostSupportRequestDialogCallback__);
    sub_1C21E38(&Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
    sub_1C21E38(&BoostFunctionUtility_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDF9E0 = 1;
  }
  v3 = Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__;
  memset(&v15, 0, sizeof(v15));
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_BattleRetryConfirmComponent_OnClickBoostSupportRequest__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v6->static_fields->_PhaseCnt_k__BackingField;
  v9 = (BoostFunctionUtility_CallbackFunc_o *)sub_1C22084(BoostFunctionUtility_CallbackFunc_TypeInfo);
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
    sub_1C22094(buttons, v11);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    buttons,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
  {
    if ( !v15.fields._current )
      sub_1C22094(0LL, v12);
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v15.fields._current, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
  friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
  if ( friendshipUpItemSwitchComponent )
    FriendshipUpItemSwitchComponent__EnableUseButton(friendshipUpItemSwitchComponent, 0, 0LL);
  currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
  if ( currentQuestUseItemButtons )
    BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, 0LL);
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
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x0
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDF9D4 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleRetryConfirmComponent_OnClickCancel__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    byte_4BDF9D4 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.state )
  {
    v3 = Method_BattleRetryConfirmComponent_OnClickCancel__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_BattleRetryConfirmComponent_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent
      || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 0, 0, 0LL),
          (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
    {
      sub_1C22094(battleResultComponent, v5);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1C22094(0LL, v7);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
    if ( friendshipUpItemSwitchComponent )
      FriendshipUpItemSwitchComponent__EnableUseButton(friendshipUpItemSwitchComponent, 0, 0LL);
    currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
    if ( currentQuestUseItemButtons )
      BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, 0LL);
  }
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
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x0
  BattleRetryConfirmQuestUseItemButtons_o *currentQuestUseItemButtons; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDF9D5 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleRetryConfirmComponent_OnClickConfirm__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UIButton__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    byte_4BDF9D5 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !this->fields.state )
  {
    v3 = Method_BattleRetryConfirmComponent_OnClickConfirm__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickConfirm__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_BattleRetryConfirmComponent_OnClickConfirm__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0LL);
    battleResultComponent = this->fields.battleResultComponent;
    if ( !battleResultComponent
      || (BattleResultComponent__EndRetryConfirmDialog(battleResultComponent, 1, 0, 0LL),
          (battleResultComponent = (BattleResultComponent_o *)this->fields.buttons) == 0LL) )
    {
      sub_1C22094(battleResultComponent, v5);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)battleResultComponent,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UIButton__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UIButton__MoveNext__) )
    {
      if ( !v10.fields._current )
        sub_1C22094(0LL, v7);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v10.fields._current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UIButton__Dispose__);
    friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
    if ( friendshipUpItemSwitchComponent )
      FriendshipUpItemSwitchComponent__EnableUseButton(friendshipUpItemSwitchComponent, 0, 0LL);
    currentQuestUseItemButtons = this->fields.currentQuestUseItemButtons;
    if ( currentQuestUseItemButtons )
      BattleRetryConfirmQuestUseItemButtons__SetButtonEnabled(currentQuestUseItemButtons, 0, 0LL);
  }
}


void __fastcall BattleRetryConfirmComponent__OnClickFriendshipUpItemUseButton(
        BattleRetryConfirmComponent_o *this,
        const MethodInfo *method)
{
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BDF9E6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleRetryConfirmComponent__OnClickFriendshipUpItemUseButton_b__71_0__);
    byte_4BDF9E6 = 1;
  }
  if ( !this->fields.state )
  {
    friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
    v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_BattleRetryConfirmComponent__OnClickFriendshipUpItemUseButton_b__71_0__,
      0LL);
    if ( !friendshipUpItemSwitchComponent )
      sub_1C22094(v5, v6);
    FriendshipUpItemSwitchComponent__ChangeButtonState(friendshipUpItemSwitchComponent, v4, 0LL);
  }
}


void __fastcall BattleRetryConfirmComponent__OnClickQuestUseItemButton(
        BattleRetryConfirmComponent_o *this,
        FriendshipUpItemInfo_o *info,
        FriendshipUpItemUseItem_o *item,
        const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *v6; // x21
  bool UseFlag; // w21
  _QWORD *v8; // x8
  System_Reflection_MethodBase_o *v9; // x0
  FriendshipUpItemInfo_o *v10; // x0
  bool v11; // w1
  Il2CppObject *Instance; // x20
  System_String_o *v13; // x0
  BattleRetryConfirmComponent_o *v14; // x19
  BattleRetryConfirmComponent___c_c *v15; // x8
  System_Action_o *_9__50_0; // x22
  System_String_o *v17; // x21
  Il2CppObject *v18; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  v6 = this;
  if ( (byte_4BDF9D6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__50_0__);
    sub_1C21E38(&BattleRetryConfirmComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_10465/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/);
    this = (BattleRetryConfirmComponent_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF9D6 = 1;
  }
  if ( !v6->fields.state )
  {
    if ( !info )
      goto LABEL_25;
    UseFlag = FriendshipUpItemInfo__GetUseFlag(info, 0LL);
    v8 = Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__;
    if ( (*((_BYTE *)Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C21E50(Method_BattleRetryConfirmComponent_OnClickQuestUseItemButton__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v8, v8[4]);
    if ( UseFlag )
    {
      OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0, 0LL);
      if ( !item )
        goto LABEL_25;
      FriendshipUpItemUseItem__ChangeButtonState(item, 0, 0LL);
      v10 = info;
      v11 = 0;
LABEL_13:
      FriendshipUpItemInfo__SetUseFlag(v10, v11, 0LL);
      this = (BattleRetryConfirmComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( this )
      {
        PartyOrganizationUtility__SaveQuestUseItemUseState((PartyOrganizationUtility_o *)this, 0LL);
        return;
      }
LABEL_25:
      sub_1C22094(this, info);
    }
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
    this = (BattleRetryConfirmComponent_o *)FriendshipUpItemInfo__IsEventPeriod(info, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !item )
        goto LABEL_25;
      FriendshipUpItemUseItem__ChangeButtonState(item, 1, 0LL);
      v11 = 1;
      v10 = info;
      goto LABEL_13;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_10465/*"PARTY_ORGANIZATION_FRIENDSHIP_UP_ITEM_EXPIRED"*/, 0LL);
    this = (BattleRetryConfirmComponent_o *)System_String__Format(
                                              v13,
                                              (Il2CppObject *)info->fields._Name_k__BackingField,
                                              0LL);
    v14 = this;
    v15 = BattleRetryConfirmComponent___c_TypeInfo;
    if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
      v15 = BattleRetryConfirmComponent___c_TypeInfo;
    }
    _9__50_0 = v15->static_fields->__9__50_0;
    v17 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__50_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v15->static_fields->__9;
      _9__50_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        _9__50_0,
        v18,
        (intptr_t)Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__50_0__,
        0LL);
      static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
      static_fields->__9__50_0 = _9__50_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__50_0,
        (int64_t)_9__50_0,
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
    sub_1C22094(bgObj, opendFunc);
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
  UnityEngine_Transform_o *parent; // x0
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Object_o *v15; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDF9E2 & 1) == 0 )
  {
    sub_1C21E38(&BattleSetupInfo_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_11326/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/);
    sub_1C21E38(&StringLiteral_3005/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/);
    byte_4BDF9E2 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v3->static_fields->_WarId_k__BackingField;
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4BD7264 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v3->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
  }
  if ( !v3->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v3);
    v3 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v3->static_fields->_PhaseCnt_k__BackingField;
  v7 = (BattleSetupInfo_o *)sub_1C22084(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v7, 0LL);
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
          0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventDetailMaster___);
  if ( !v10 || !Master_object )
    goto LABEL_53;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          v10->fields.eventId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_53;
  if ( EventDetailEntity__IsEventPanel((EventDetailEntity_o *)entity, 0LL) )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_BoostFunctionUtility__get_Instance__);
    if ( !Master_object )
      goto LABEL_53;
    if ( BoostFunctionUtility__IsDisplayBoostSupportRequest(
           (BoostFunctionUtility_o *)Master_object,
           QuestId_k__BackingField,
           PhaseCnt_k__BackingField,
           0LL)
      && ConstantMaster__getValue((System_String_o *)StringLiteral_11326/*"RETRIEVABLE_QUEST_CONFIRM_BOOST"*/, 0LL) == 1 )
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
                                                                        (System_String_o *)StringLiteral_3005/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_BOOST_SUPPORT_REQUEST"*/,
                                                                        0LL);
        if ( !v12 )
          goto LABEL_53;
        UILabel__set_text(v12, (System_String_o *)Master_object, 0LL);
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
              v14 = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)Master_object, 0LL);
              TransformHelper__SetLocalPositionX(v14, this->fields.CONFIRM_BUTTON_POSITION_ON_THREE_X, 0LL);
              return;
            }
          }
        }
      }
LABEL_53:
      sub_1C22094(Master_object, v9);
    }
  }
  else
  {
LABEL_44:
    v15 = (UnityEngine_Object_o *)this->fields.boostSupportRequestLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
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
        sub_1C2209C(this, value);
      if ( *i )
      {
        if ( v7 >= max_length )
          goto LABEL_13;
        v11 = &v9->obj.klass + v7;
        v12 = (UnityEngine_MonoBehaviour_o *)v11[4];
        if ( !v12 )
          break;
        v13 = RetryConfirmItem__SetCondensedScalePossessionAmount((RetryConfirmItem_o *)v11[4], 0LL);
        this = (BattleRetryConfirmComponent_o *)UnityEngine_MonoBehaviour__StartCoroutine_70854884(v12, v13, 0LL);
      }
      LODWORD(v4) = value->max_length;
      if ( (__int64)++v7 >= (int)v4 )
        return;
    }
LABEL_14:
    sub_1C22094(this, value);
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

  if ( (byte_4BDF9E5 & 1) == 0 )
  {
    sub_1C21E38(&RetryConfirmItem___TypeInfo);
    byte_4BDF9E5 = 1;
  }
  reqSingleParent = this->fields.reqSingleParent;
  if ( !reqSingleParent )
    goto LABEL_29;
  if ( UnityEngine_GameObject__get_activeSelf(reqSingleParent, 0LL) )
  {
    reqSingleParent = (UnityEngine_GameObject_o *)sub_1C21EE0(RetryConfirmItem___TypeInfo, 1LL);
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
    reqSingleParent = (UnityEngine_GameObject_o *)sub_1C21EE0(RetryConfirmItem___TypeInfo, 1LL);
    if ( reqSingleParent )
    {
      singleItem = this->fields.singleItemWithUseItemButton;
LABEL_11:
      v13 = reqSingleParent;
      if ( singleItem )
      {
        reqSingleParent = (UnityEngine_GameObject_o *)sub_1C21F74(singleItem, reqSingleParent->klass->_1.element_class);
        if ( !reqSingleParent )
        {
          v17 = sub_1C220B8(0LL);
          sub_1C21F60(v17, 0LL);
        }
      }
      if ( !LODWORD(v13[1].klass) )
        sub_1C2209C(reqSingleParent, items);
      v13[1].monitor = singleItem;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v13[1].monitor, (int64_t)singleItem, v6, v7, v8, v9, v10, v11);
      itemsa = (RetryConfirmItem_array *)v13;
      p_itemsa = &itemsa;
      goto LABEL_15;
    }
LABEL_29:
    sub_1C22094(reqSingleParent, items);
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
  if ( (byte_4BDF9DD & 1) == 0 )
  {
    this = (BattleRetryConfirmComponent_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF9DD = 1;
  }
  if ( !items )
    sub_1C22094(this, costPoint);
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
        sub_1C2209C(v8, v9);
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

  if ( (byte_4BDF9DB & 1) == 0 )
  {
    sub_1C21E38(&BattleRetryConfirmComponent_TypeInfo);
    byte_4BDF9DB = 1;
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
    sub_1C22094(reqSingleParent, costPoint);
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
      sub_1C2209C(reqSingleParent, costPoint);
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

  if ( (byte_4BDF9DA & 1) == 0 )
  {
    sub_1C21E38(&BattleRetryConfirmComponent_TypeInfo);
    byte_4BDF9DA = 1;
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
    sub_1C22094(reqSingleParent, costPoint);
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

  if ( (byte_4BDF9DC & 1) == 0 )
  {
    sub_1C21E38(&BattleRetryConfirmComponent_TypeInfo);
    byte_4BDF9DC = 1;
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
    sub_1C22094(reqSingleParent, costPoint);
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
      sub_1C2209C(reqSingleParent, costPoint);
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
  UnityEngine_Object_o *friendshipUpItemSwitchComponent; // x20
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v5; // x1
  char v6; // w20
  UnityEngine_GameObject_o *v7; // x20
  UnityEngine_GameObject_o *v8; // x20
  UILabel_o *mainText; // x19
  struct BattleRetryConfirmComponent_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_GameObject_o *v12; // x20
  char v13; // w20
  BattleRetryConfirmComponent_c *v14; // x8
  UnityEngine_GameObject_o *v15; // x20
  UnityEngine_GameObject_o *v16; // x20
  char v17; // w20
  __int64 v18; // x9

  if ( (byte_4BDF9E4 & 1) == 0 )
  {
    sub_1C21E38(&BattleRetryConfirmComponent_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BDF9E4 = 1;
  }
  friendshipUpItemSwitchComponent = (UnityEngine_Object_o *)this->fields.friendshipUpItemSwitchComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(friendshipUpItemSwitchComponent, 0LL, 0LL) )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( Instance )
    {
      Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL);
      if ( this->fields.friendshipUpItemSwitchComponent )
      {
        v6 = (char)Instance;
        Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                   0LL);
        if ( Instance )
        {
          if ( (v6 & 1) != 0 )
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
                    v7 = (UnityEngine_GameObject_o *)Instance;
                    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                               0LL);
                    if ( Instance )
                    {
                      Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                 (UnityEngine_GameObject_o *)Instance,
                                                                 0LL);
                      if ( v7 )
                      {
                        UnityEngine_GameObject__SetActive(v7, ((unsigned __int8)Instance & 1) == 0, 0LL);
                        Instance = (PartyOrganizationUtility_o *)this->fields.reqSingleParentWithUseItemButton;
                        if ( Instance )
                        {
                          Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                     (UnityEngine_GameObject_o *)Instance,
                                                                     0LL);
                          if ( this->fields.friendshipUpItemSwitchComponent )
                          {
                            v8 = (UnityEngine_GameObject_o *)Instance;
                            Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                                       0LL);
                            if ( Instance )
                            {
                              Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                         (UnityEngine_GameObject_o *)Instance,
                                                                         0LL);
                              if ( v8 )
                              {
                                UnityEngine_GameObject__SetActive(v8, (unsigned __int8)Instance & 1, 0LL);
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
                          v11 = (UnityEngine_GameObject_o *)Instance;
                          Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                                     0LL);
                          if ( Instance )
                          {
                            Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                       (UnityEngine_GameObject_o *)Instance,
                                                                       0LL);
                            if ( v11 )
                            {
                              UnityEngine_GameObject__SetActive(v11, ((unsigned __int8)Instance & 1) == 0, 0LL);
                              Instance = (PartyOrganizationUtility_o *)this->fields.reqDoubleParentWithUseItemButton;
                              if ( Instance )
                              {
                                Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                           0LL);
                                if ( this->fields.friendshipUpItemSwitchComponent )
                                {
                                  v12 = (UnityEngine_GameObject_o *)Instance;
                                  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                                             0LL);
                                  if ( Instance )
                                  {
                                    Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                               (UnityEngine_GameObject_o *)Instance,
                                                                               0LL);
                                    if ( v12 )
                                    {
                                      UnityEngine_GameObject__SetActive(v12, (unsigned __int8)Instance & 1, 0LL);
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
                                          v13 = (char)Instance;
                                          v14 = BattleRetryConfirmComponent_TypeInfo;
                                          if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                          {
                                            j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                            v14 = BattleRetryConfirmComponent_TypeInfo;
                                          }
                                          if ( mainText )
                                          {
                                            static_fields = v14->static_fields;
                                            if ( (v13 & 1) != 0 )
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
                          v15 = (UnityEngine_GameObject_o *)Instance;
                          Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                     (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                                     0LL);
                          if ( Instance )
                          {
                            Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                       (UnityEngine_GameObject_o *)Instance,
                                                                       0LL);
                            if ( v15 )
                            {
                              UnityEngine_GameObject__SetActive(v15, ((unsigned __int8)Instance & 1) == 0, 0LL);
                              Instance = (PartyOrganizationUtility_o *)this->fields.reqTripleParentWithUseItemButton;
                              if ( Instance )
                              {
                                Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_gameObject(
                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                           0LL);
                                if ( this->fields.friendshipUpItemSwitchComponent )
                                {
                                  v16 = (UnityEngine_GameObject_o *)Instance;
                                  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                                                             0LL);
                                  if ( Instance )
                                  {
                                    Instance = (PartyOrganizationUtility_o *)UnityEngine_GameObject__get_activeSelf(
                                                                               (UnityEngine_GameObject_o *)Instance,
                                                                               0LL);
                                    if ( v16 )
                                    {
                                      UnityEngine_GameObject__SetActive(v16, (unsigned __int8)Instance & 1, 0LL);
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
                                          v17 = (char)Instance;
                                          if ( !BattleRetryConfirmComponent_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent_TypeInfo);
                                          if ( mainText )
                                          {
                                            v18 = 4LL;
                                            if ( (v17 & 1) != 0 )
                                              v18 = 12LL;
                                            static_fields = (struct BattleRetryConfirmComponent_StaticFields *)((char *)BattleRetryConfirmComponent_TypeInfo->static_fields + v18);
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
    sub_1C22094(Instance, v5);
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
    sub_1C22094(this, value);
  }
  UILabel__set_text((UILabel_o *)this, value->fields.possessionAmount, 0LL);
}


bool __fastcall BattleRetryConfirmComponent__SetValues(BattleRetryConfirmComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x29
  int64_t Instance; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *MasterData_object; // x20
  QuestEntity_o *v20; // x19
  QuestConsumeItemEntity_o *ItemConsumeEntity; // x27
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *v22; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Text_StringBuilder_o *v29; // x26
  System_String_o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  QuestEntity_o *v37; // x25
  BattleRetryConfirmComponent_o *v38; // x19
  __int64 *v39; // x23
  Il2CppObject *v40; // x26
  int32_t actMax; // w27
  BalanceConfig_c *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  Il2CppObject *v49; // x28
  Il2CppObject *v50; // x29
  il2cpp_array_size_t v51; // w22
  struct System_Int32_array *itemIds; // x8
  struct System_Int32_array *v53; // x8
  int64_t v54; // x25
  ItemEntity_o *v55; // x20
  int32_t qp; // w24
  struct System_Int32_array *nums; // x8
  System_String_o *v58; // x0
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  struct System_Int32_array *v68; // x8
  System_String_o *v69; // x25
  Il2CppObject *v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_String_o *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int32_t MaxNum; // w25
  bool v85; // w21
  System_String_o *v86; // x25
  __int64 v87; // x2
  __int64 v88; // x3
  __int64 v89; // x4
  Il2CppObject *v90; // x24
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  Il2CppObject *v94; // x0
  System_String_o *v95; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  System_String_o *v102; // x20
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  Il2CppObject *v106; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  __int64 v113; // x8
  _QWORD *v114; // x10
  __int64 v115; // x9
  __int128 v116; // q0
  __int128 v117; // q1
  __int64 v118; // x8
  const MethodInfo_36B8D38 *v119; // x2
  System_String_o *v120; // x19
  Il2CppObject *v121; // x0
  System_String_o *v122; // x0
  System_String_o *v123; // x19
  System_String_o *v124; // x0
  System_String_o *v125; // x19
  CommonUI_o *v126; // x20
  BattleRetryConfirmComponent___c_c *v127; // x8
  System_Action_o *_9__47_1; // x22
  System_String_o *v129; // x21
  Il2CppObject *v130; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *static_fields; // x0
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  int64_t v138; // x2
  int32_t v139; // w3
  System_String_o *v140; // x4
  BattleSetupInfo_o *v141; // x5
  FollowerInfo_o *v142; // x6
  PartyListViewItem_o *v143; // x7
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  Il2CppObject *v150; // x28
  Il2CppObject *v151; // x29
  il2cpp_array_size_t v152; // w22
  struct System_Int32_array *v153; // x8
  struct System_Int32_array *v154; // x8
  int64_t v155; // x25
  ItemEntity_o *v156; // x20
  int32_t v157; // w24
  struct System_Int32_array *v158; // x8
  System_String_o *v159; // x0
  int64_t v160; // x2
  int32_t v161; // w3
  System_String_o *v162; // x4
  BattleSetupInfo_o *v163; // x5
  FollowerInfo_o *v164; // x6
  PartyListViewItem_o *v165; // x7
  __int64 v166; // x2
  __int64 v167; // x3
  __int64 v168; // x4
  struct System_Int32_array *v169; // x8
  System_String_o *v170; // x25
  Il2CppObject *v171; // x0
  int64_t v172; // x2
  int32_t v173; // w3
  System_String_o *v174; // x4
  BattleSetupInfo_o *v175; // x5
  FollowerInfo_o *v176; // x6
  PartyListViewItem_o *v177; // x7
  System_String_o *v178; // x0
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  int32_t v185; // w25
  bool v186; // w21
  System_String_o *v187; // x25
  __int64 v188; // x2
  __int64 v189; // x3
  __int64 v190; // x4
  Il2CppObject *v191; // x24
  __int64 v192; // x2
  __int64 v193; // x3
  __int64 v194; // x4
  Il2CppObject *v195; // x0
  System_String_o *v196; // x0
  int64_t v197; // x2
  int32_t v198; // w3
  System_String_o *v199; // x4
  BattleSetupInfo_o *v200; // x5
  FollowerInfo_o *v201; // x6
  PartyListViewItem_o *v202; // x7
  System_String_o *v203; // x20
  __int64 v204; // x2
  __int64 v205; // x3
  __int64 v206; // x4
  Il2CppObject *v207; // x0
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  __int64 v214; // x8
  _QWORD *v215; // x10
  __int64 v216; // x9
  __int128 v217; // q0
  __int128 v218; // q1
  __int64 v219; // x8
  const MethodInfo_36B8D38 *v220; // x2
  System_String_o *v221; // x19
  Il2CppObject *v222; // x0
  System_String_o *v223; // x0
  System_String_o *v224; // x19
  System_String_o *v225; // x0
  System_String_o *v226; // x19
  CommonUI_o *v227; // x20
  BattleRetryConfirmComponent___c_c *v228; // x8
  System_Action_o *_9__47_2; // x22
  System_String_o *v230; // x21
  Il2CppObject *v231; // x23
  struct BattleRetryConfirmComponent___c_StaticFields *v232; // x0
  int64_t v233; // x2
  int32_t v234; // w3
  System_String_o *v235; // x4
  BattleSetupInfo_o *v236; // x5
  FollowerInfo_o *v237; // x6
  PartyListViewItem_o *v238; // x7
  MapControl_QuestInfo_o *v240; // x20
  int32_t questId; // w22
  bool IsQuestClear_38834244; // w22
  TerminalPramsManager_c *v243; // x0
  int32_t QuestId_k__BackingField; // w23
  int32_t CampaignCostCalcValue; // w22
  int32_t v246; // w8
  int32_t ActConsumeCost; // w20
  System_String_o *CostValueColor; // x22
  __int64 v249; // x2
  __int64 v250; // x3
  __int64 v251; // x4
  Il2CppObject *v252; // x0
  System_String_o *v253; // x0
  int32_t CachedWarId_k__BackingField; // w20
  Il2CppObject *v255; // x22
  System_String_o *v256; // x0
  System_String_o *v257; // x20
  __int64 v258; // x2
  __int64 v259; // x3
  __int64 v260; // x4
  Il2CppObject *v261; // x0
  Il2CppObject *v262; // x20
  System_String_o *v263; // x0
  int64_t v264; // x2
  int32_t v265; // w3
  System_String_o *v266; // x4
  BattleSetupInfo_o *v267; // x5
  FollowerInfo_o *v268; // x6
  PartyListViewItem_o *v269; // x7
  System_String_o *v270; // x0
  int64_t v271; // x2
  int32_t v272; // w3
  System_String_o *v273; // x4
  BattleSetupInfo_o *v274; // x5
  FollowerInfo_o *v275; // x6
  PartyListViewItem_o *v276; // x7
  System_String_o *v277; // x0
  int64_t v278; // x2
  int32_t v279; // w3
  System_String_o *v280; // x4
  BattleSetupInfo_o *v281; // x5
  FollowerInfo_o *v282; // x6
  PartyListViewItem_o *v283; // x7
  System_String_o *v284; // x22
  __int64 v285; // x2
  __int64 v286; // x3
  __int64 v287; // x4
  Il2CppObject *v288; // x0
  int64_t v289; // x2
  int32_t v290; // w3
  System_String_o *v291; // x4
  BattleSetupInfo_o *v292; // x5
  FollowerInfo_o *v293; // x6
  PartyListViewItem_o *v294; // x7
  UnityEngine_Object_o *singleContentsPrefab; // x20
  UnityEngine_Object_o *doubleContentsPrefab; // x20
  UnityEngine_Object_o *tripleContentsPrefab; // x20
  __int64 v298; // x20
  UnityEngine_Object_o *mainText; // x22
  UILabel_o *v300; // x22
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v301; // x0
  const MethodInfo *v302; // x3
  int64_t v303; // x2
  int32_t v304; // w3
  System_String_o *v305; // x4
  BattleSetupInfo_o *v306; // x5
  FollowerInfo_o *v307; // x6
  PartyListViewItem_o *v308; // x7
  const MethodInfo *v309; // x1
  FriendshipUpItemInfo_array *AvailableQuestUseItems; // x0
  const MethodInfo *v311; // x2
  BattleRetryConfirmQuestUseItemButtons_o *QuestUseItemButtons; // x0
  int64_t v313; // x2
  int32_t v314; // w3
  System_String_o *v315; // x4
  BattleSetupInfo_o *v316; // x5
  FollowerInfo_o *v317; // x6
  PartyListViewItem_o *v318; // x7
  System_Action_o *v319; // x21
  BattleRetryConfirmComponent_o *v320; // x0
  const MethodInfo *v321; // x2
  System_Collections_IEnumerator_o *v322; // x0
  int64_t v323; // x1
  int64_t v324; // x2
  int32_t v325; // w3
  System_String_o *v326; // x4
  BattleSetupInfo_o *v327; // x5
  FollowerInfo_o *v328; // x6
  PartyListViewItem_o *v329; // x7
  BattleRetryConfirmComponent_RetryConfirmItemStr_array *v330; // x0
  const MethodInfo *v331; // x3
  const MethodInfo *v332; // x1
  UnityEngine_Object_o *friendshipUpItemSwitchComponent; // x21
  Il2CppObject *Component_object; // x0
  int64_t v335; // x2
  int32_t v336; // w3
  System_String_o *v337; // x4
  BattleSetupInfo_o *v338; // x5
  FollowerInfo_o *v339; // x6
  PartyListViewItem_o *v340; // x7
  int64_t v341; // x2
  int32_t v342; // w3
  System_String_o *v343; // x4
  BattleSetupInfo_o *v344; // x5
  FollowerInfo_o *v345; // x6
  PartyListViewItem_o *v346; // x7
  int64_t friendshipUpItemUseButton; // x1
  const MethodInfo *v348; // x1
  System_Action_o *v349; // x20
  BattleRetryConfirmComponent_o *v350; // x0
  const MethodInfo *v351; // x2
  System_Collections_IEnumerator_o *v352; // x0
  int32_t v353; // [xsp+44h] [xbp-22Ch]
  Il2CppObject *v354; // [xsp+48h] [xbp-228h]
  __int64 v355; // [xsp+50h] [xbp-220h]
  __int64 v356; // [xsp+50h] [xbp-220h]
  BattleRetryConfirmComponent_o *v357; // [xsp+58h] [xbp-218h]
  QuestEntity_o *v358; // [xsp+60h] [xbp-210h]
  UserGameEntity_o **p_userGameEntity; // [xsp+80h] [xbp-1F0h]
  int64_t *v360; // [xsp+88h] [xbp-1E8h]
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v361; // [xsp+90h] [xbp-1E0h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v362; // [xsp+C0h] [xbp-1B0h] BYREF
  __int128 v363; // [xsp+F0h] [xbp-180h]
  __int128 v364; // [xsp+100h] [xbp-170h]
  void *BasePartyItem_k__BackingField; // [xsp+110h] [xbp-160h]
  int32_t fixedVal; // [xsp+11Ch] [xbp-154h] BYREF
  __int128 v367; // [xsp+120h] [xbp-150h] BYREF
  PartyOrganizationUtility_o v368; // [xsp+130h] [xbp-140h] BYREF
  BattleRetryConfirmComponent_RetryConfirmItemStr_o v369; // [xsp+1E0h] [xbp-90h] BYREF

  if ( (byte_4BDF9D3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C21E38(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_FriendshipUpItemSwitchComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSwitchComponent___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&MapControl_QuestInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_BattleRetryConfirmComponent___c__SetValues_b__47_1__);
    sub_1C21E38(&Method_BattleRetryConfirmComponent___c__SetValues_b__47_2__);
    sub_1C21E38(&Method_BattleRetryConfirmComponent___c__DisplayClass47_0__SetValues_b__0__);
    sub_1C21E38(&BattleRetryConfirmComponent___c__DisplayClass47_0_TypeInfo);
    sub_1C21E38(&Method_BattleRetryConfirmComponent___c__DisplayClass47_1__SetValues_b__3__);
    sub_1C21E38(&BattleRetryConfirmComponent___c__DisplayClass47_1_TypeInfo);
    sub_1C21E38(&BattleRetryConfirmComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_43/*"\n"*/);
    sub_1C21E38(&StringLiteral_3016/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/);
    sub_1C21E38(&StringLiteral_3913/*"CONSUME_TYPE_AP"*/);
    sub_1C21E38(&StringLiteral_11094/*"QUEST_ITEM_COST_OVER"*/);
    sub_1C21E38(&StringLiteral_3014/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/);
    sub_1C21E38(&StringLiteral_3015/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/);
    sub_1C21E38(&StringLiteral_2160/*"AP_OVER_MAX_COLOR"*/);
    sub_1C21E38(&StringLiteral_3914/*"CONSUME_TYPE_RP"*/);
    sub_1C21E38(&StringLiteral_3020/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/);
    sub_1C21E38(&StringLiteral_3019/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/);
    sub_1C21E38(&StringLiteral_3009/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/);
    sub_1C21E38(&StringLiteral_44/*"\n\n"*/);
    sub_1C21E38(&StringLiteral_3017/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/);
    sub_1C21E38(&StringLiteral_3011/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_3018/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/);
    sub_1C21E38(&StringLiteral_3012/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/);
    sub_1C21E38(&StringLiteral_3013/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/);
    byte_4BDF9D3 = 1;
  }
  v368.fields._CachedWarId_k__BackingField = 0;
  memset(&v368.fields._IsForceDisableSupportSelectBackBtn_k__BackingField, 0, 40);
  memset(&v368.fields._SelectedNormalFollowerClassId_k__BackingField, 0, 40);
  v367 = 0u;
  memset(&v368, 0, 24);
  fixedVal = 0;
  v3 = sub_1C22084(BattleRetryConfirmComponent___c__DisplayClass47_0_TypeInfo);
  BattleRetryConfirmComponent___c__DisplayClass47_0___ctor(
    (BattleRetryConfirmComponent___c__DisplayClass47_0_o *)v3,
    0LL);
  if ( !v3 )
    goto LABEL_213;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)this, v6, v7, v8, v9, v10, v11);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.userGameEntity = SelfUserGame;
  p_userGameEntity = &this->fields.userGameEntity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.userGameEntity,
    (int64_t)SelfUserGame,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_213;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  Instance = (int64_t)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (int64_t)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object
    || (v357 = this,
        (Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                               *(_DWORD *)(*(_QWORD *)(Instance + 184) + 20LL),
                               (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__)) == 0) )
  {
LABEL_213:
    sub_1C22094(Instance, v5);
  }
  v20 = (QuestEntity_o *)Instance;
  ItemConsumeEntity = QuestEntity__getItemConsumeEntity((QuestEntity_o *)Instance, 0, 0LL);
  v368.fields._CachedWarId_k__BackingField = 0;
  memset(&v368.fields._IsForceDisableSupportSelectBackBtn_k__BackingField, 0, 40);
  v22 = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)sub_1C22084(System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__TypeInfo);
  System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr____ctor(
    v22,
    (const MethodInfo_36B8414 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ctor__);
  *(_QWORD *)(v3 + 24) = v22;
  v360 = (int64_t *)(v3 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(v29, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3913/*"CONSUME_TYPE_AP"*/, 0LL);
  v358 = v20;
  switch ( QuestEntity__GetConsumeType(v20, 0LL) )
  {
    case 1:
      v37 = v20;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3913/*"CONSUME_TYPE_AP"*/, 0LL);
      v38 = v357;
      v39 = &qword_4BD7000;
      if ( !*p_userGameEntity )
        goto LABEL_213;
      v40 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      v368.fields._CachedWarId_k__BackingField = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_213;
      actMax = (*p_userGameEntity)->fields.actMax;
      goto LABEL_152;
    case 2:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3914/*"CONSUME_TYPE_RP"*/, 0LL);
      v38 = v357;
      v37 = v358;
      v39 = &qword_4BD7000;
      if ( !*p_userGameEntity )
        goto LABEL_213;
      v40 = (Il2CppObject *)Instance;
      Instance = UserGameEntity__getRp(*p_userGameEntity, 0LL);
      v368.fields._CachedWarId_k__BackingField = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_213;
      if ( !byte_4BD9335 )
      {
        sub_1C21E38(&BalanceConfig_TypeInfo);
        byte_4BD9335 = 1;
      }
      v42 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v42 = BalanceConfig_TypeInfo;
      }
      actMax = v42->static_fields->UerGameRpMax;
      goto LABEL_152;
    case 3:
      v355 = v3;
      *(_QWORD *)&v368.fields._IsForceDisableSupportSelectBackBtn_k__BackingField = StringLiteral_1/*""*/;
      v354 = (Il2CppObject *)StringLiteral_1/*""*/;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v368.fields._IsForceDisableSupportSelectBackBtn_k__BackingField,
        (int64_t)StringLiteral_1/*""*/,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      v368.fields._PartyItemSmc_k__BackingField = (struct PartyListViewItem_o *)StringLiteral_1/*""*/;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v368.fields._PartyItemSmc_k__BackingField,
        (int64_t)StringLiteral_1/*""*/,
        v43,
        v44,
        v45,
        v46,
        v47,
        v48);
      if ( !ItemConsumeEntity )
        goto LABEL_76;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_213;
      v49 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_213;
      v50 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_76;
      v51 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          byte_4BD6FF5 = 1;
        }
        Instance = (int64_t)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (int64_t)NetworkManager_TypeInfo;
        }
        itemIds = ItemConsumeEntity->fields.itemIds;
        if ( !itemIds )
          goto LABEL_213;
        if ( v51 >= itemIds->max_length )
          goto LABEL_214;
        if ( !v50 )
          goto LABEL_213;
        Instance = (int64_t)UserItemMaster__GetEntity(
                              (UserItemMaster_o *)v50,
                              *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                              itemIds->m_Items[v51 + 1],
                              0LL);
        v53 = ItemConsumeEntity->fields.itemIds;
        if ( !v53 )
          goto LABEL_213;
        if ( v51 >= v53->max_length )
          goto LABEL_214;
        if ( !v49 )
          goto LABEL_213;
        v54 = Instance;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v49,
                              v53->m_Items[v51 + 1],
                              (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_213;
        v55 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_213;
          qp = (*p_userGameEntity)->fields.qp;
        }
        else if ( v54 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          qp = *(_DWORD *)(v54 + 28);
        }
        else
        {
          qp = 0;
        }
        nums = ItemConsumeEntity->fields.nums;
        if ( !nums )
          goto LABEL_213;
        if ( v51 >= nums->max_length )
          goto LABEL_214;
        if ( nums->m_Items[v51 + 1] > qp )
        {
          Instance = (int64_t)System_String__Concat_63115476((System_String_o *)StringLiteral_43/*"\n"*/, v55->fields.name, 0LL);
          if ( !v29 )
            goto LABEL_213;
          System_Text_StringBuilder__Append_62276628(v29, (System_String_o *)Instance, 0LL);
        }
        memset(&v368.fields._SelectedNormalFollowerClassId_k__BackingField, 0, 40);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v58 = LocalizationManager__Get((System_String_o *)StringLiteral_3015/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        *(_QWORD *)&v368.fields._SelectedNormalFollowerClassId_k__BackingField = System_String__Format(
                                                                                   v58,
                                                                                   (Il2CppObject *)v55->fields.name,
                                                                                   0LL);
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v368.fields._SelectedNormalFollowerClassId_k__BackingField,
          *(int64_t *)&v368.fields._SelectedNormalFollowerClassId_k__BackingField,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3016/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v68 = ItemConsumeEntity->fields.nums;
        if ( !v68 )
          goto LABEL_213;
        if ( v51 >= v68->max_length )
          goto LABEL_214;
        v69 = (System_String_o *)Instance;
        LODWORD(v369.fields.useName) = v68->m_Items[v51 + 1];
        v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v369, v65, v66, v67);
        v368.fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)System_String__Format(v69, v70, 0LL);
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v368.fields._npcFollowerInfos,
          (int64_t)v368.fields._npcFollowerInfos,
          v71,
          v72,
          v73,
          v74,
          v75,
          v76);
        v77 = LocalizationManager__Get((System_String_o *)StringLiteral_3018/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        *(_QWORD *)&v368.fields._SelectedPartyPosition_k__BackingField = System_String__Format(
                                                                           v77,
                                                                           (Il2CppObject *)v55->fields.name,
                                                                           0LL);
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v368.fields._SelectedPartyPosition_k__BackingField,
          *(int64_t *)&v368.fields._SelectedPartyPosition_k__BackingField,
          v78,
          v79,
          v80,
          v81,
          v82,
          v83);
        MaxNum = ItemEntity__GetMaxNum(v55, 0LL);
        v85 = MaxNum > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( MaxNum < 1 )
        {
          v102 = LocalizationManager__Get((System_String_o *)StringLiteral_3019/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v369.fields.useName) = qp;
          v106 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v369, v103, v104, v105);
          v95 = System_String__Format(v102, v106, 0LL);
        }
        else
        {
          v86 = LocalizationManager__Get((System_String_o *)StringLiteral_3020/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v369.fields.useName) = qp;
          v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v369, v87, v88, v89);
          LODWORD(v368.fields.CachedFriendshipUpItemInfo) = ItemEntity__GetMaxNum(v55, 0LL);
          v94 = (Il2CppObject *)j_il2cpp_value_box_0(
                                  int_TypeInfo,
                                  &v368.fields.CachedFriendshipUpItemInfo,
                                  v91,
                                  v92,
                                  v93);
          v95 = System_String__Format_63129848(v86, v90, v94, 0LL);
        }
        *(_QWORD *)&v368.fields._SelectedPartyMemberPosition_k__BackingField = v95;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v368.fields._SelectedPartyMemberPosition_k__BackingField,
          (int64_t)v95,
          v96,
          v97,
          v98,
          v99,
          v100,
          v101);
        LOBYTE(v368.fields._BasePartyItem_k__BackingField) = v85;
        Instance = *v360;
        v363 = *(_OWORD *)&v368.fields._SelectedNormalFollowerClassId_k__BackingField;
        v364 = *(_OWORD *)&v368.fields._SelectedPartyPosition_k__BackingField;
        BasePartyItem_k__BackingField = v368.fields._BasePartyItem_k__BackingField;
        if ( !Instance )
          goto LABEL_213;
        *(_OWORD *)&v368.fields.CachedFriendshipUpItemInfo = v363;
        *(_OWORD *)&v368.fields.temporaryPartyInfo = v364;
        *(_QWORD *)&v368.fields._IsQuestStartMenuMode_k__BackingField = BasePartyItem_k__BackingField;
        v113 = *(_QWORD *)(Instance + 16);
        v114 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v113 )
          goto LABEL_213;
        v115 = *(int *)(Instance + 24);
        if ( (unsigned int)v115 >= *(_DWORD *)(v113 + 24) )
        {
          v119 = *(const MethodInfo_36B8D38 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL);
          v369 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v368.fields.CachedFriendshipUpItemInfo;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
            &v369,
            v119);
        }
        else
        {
          *(_DWORD *)(Instance + 24) = v115 + 1;
          v116 = *(_OWORD *)&v368.fields.CachedFriendshipUpItemInfo;
          v117 = *(_OWORD *)&v368.fields.temporaryPartyInfo;
          v118 = v113 + 40 * v115;
          *(_QWORD *)(v118 + 64) = *(_QWORD *)&v368.fields._IsQuestStartMenuMode_k__BackingField;
          *(_OWORD *)(v118 + 32) = v116;
          *(_OWORD *)(v118 + 48) = v117;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v118 + 32), 0LL, v107, v108, v109, v110, v111, v112);
        }
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v51, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_76:
      if ( !v29 )
        goto LABEL_213;
      v3 = v355;
      v37 = v20;
      v39 = &qword_4BD7000;
      if ( System_Text_StringBuilder__get_Length(v29, 0LL) < 1 )
      {
        actMax = 0;
LABEL_151:
        v38 = v357;
        v40 = v354;
LABEL_152:
        if ( QuestEntity__GetConsumeType(v37, 0LL) == 1
          || QuestEntity__GetConsumeType(v37, 0LL) == 2
          || QuestEntity__GetConsumeType(v37, 0LL) == 4 )
        {
          v240 = (MapControl_QuestInfo_o *)sub_1C22084(MapControl_QuestInfo_TypeInfo);
          MapControl_QuestInfo___ctor(v240, 0LL);
          if ( !v240 )
            goto LABEL_213;
          MapControl_QuestInfo__SetTerminalParamsValue(v240, 0LL);
          questId = v240->fields.questId;
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          fixedVal = -1;
          IsQuestClear_38834244 = CondType__IsQuestClear_38834244(questId, -1, 0, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !*((_BYTE *)v39 + 612) )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            *((_BYTE *)v39 + 612) = 1;
          }
          v243 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v243 = TerminalPramsManager_TypeInfo;
          }
          QuestId_k__BackingField = v243->static_fields->_QuestId_k__BackingField;
          if ( !byte_4BD7263 )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            v243 = TerminalPramsManager_TypeInfo;
            byte_4BD7263 = 1;
          }
          if ( !v243->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v243);
            v243 = TerminalPramsManager_TypeInfo;
          }
          CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                                    v37,
                                    QuestId_k__BackingField,
                                    v243->static_fields->_PhaseCnt_k__BackingField,
                                    !IsQuestClear_38834244,
                                    &fixedVal,
                                    0LL);
          Instance = (int64_t)MapControl_QuestInfo__GetMine(v240, 0LL);
          if ( !Instance )
            goto LABEL_213;
          QuestEntity__GetPhaseDetailedEntity((QuestEntity_o *)Instance, 0LL);
          v246 = fixedVal;
          v240->fields.costCalcVal = CampaignCostCalcValue;
          v240->fields._fixedCostVal_k__BackingField = v246;
          ActConsumeCost = MapControl_QuestInfo__GetActConsumeCost(v240, 0LL);
          CostValueColor = QuestEntity__GetCostValueColor(
                             CampaignCostCalcValue,
                             (ActConsumeCost > actMax) | (unsigned __int8)(ActConsumeCost > v368.fields._CachedWarId_k__BackingField),
                             0LL);
          LODWORD(v369.fields.useName) = ActConsumeCost;
          v252 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v369, v249, v250, v251);
          v253 = System_String__Format(CostValueColor, v252, 0LL);
          CachedWarId_k__BackingField = v368.fields._CachedWarId_k__BackingField;
          v255 = (Il2CppObject *)v253;
          v256 = System_Int32__ToString((int32_t)&v368.fields._CachedWarId_k__BackingField, 0LL);
          if ( actMax < CachedWarId_k__BackingField )
          {
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v257 = LocalizationManager__Get((System_String_o *)StringLiteral_2160/*"AP_OVER_MAX_COLOR"*/, 0LL);
            LODWORD(v369.fields.useName) = v368.fields._CachedWarId_k__BackingField;
            v261 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v369, v258, v259, v260);
            v256 = System_String__Format(v257, v261, 0LL);
          }
          v262 = (Il2CppObject *)v256;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v263 = LocalizationManager__Get((System_String_o *)StringLiteral_3013/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT"*/, 0LL);
          *(_QWORD *)&v368.fields._IsForceDisableSupportSelectBackBtn_k__BackingField = System_String__Format(
                                                                                          v263,
                                                                                          v40,
                                                                                          0LL);
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v368.fields._IsForceDisableSupportSelectBackBtn_k__BackingField,
            *(int64_t *)&v368.fields._IsForceDisableSupportSelectBackBtn_k__BackingField,
            v264,
            v265,
            v266,
            v267,
            v268,
            v269);
          v270 = LocalizationManager__Get((System_String_o *)StringLiteral_3014/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ACT_POINT_VALUE"*/, 0LL);
          v368.fields._PartyItemSmc_k__BackingField = (struct PartyListViewItem_o *)System_String__Format(
                                                                                      v270,
                                                                                      v255,
                                                                                      0LL);
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v368.fields._PartyItemSmc_k__BackingField,
            (int64_t)v368.fields._PartyItemSmc_k__BackingField,
            v271,
            v272,
            v273,
            v274,
            v275,
            v276);
          v277 = LocalizationManager__Get((System_String_o *)StringLiteral_3011/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT"*/, 0LL);
          *(_QWORD *)&v368.fields._IsWaveBattleRestart_k__BackingField = System_String__Format(v277, v40, 0LL);
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v368.fields._IsWaveBattleRestart_k__BackingField,
            *(int64_t *)&v368.fields._IsWaveBattleRestart_k__BackingField,
            v278,
            v279,
            v280,
            v281,
            v282,
            v283);
          v284 = LocalizationManager__Get((System_String_o *)StringLiteral_3012/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_NOW_ACT_POINT_VALUE"*/, 0LL);
          LODWORD(v369.fields.useName) = actMax;
          v288 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v369, v285, v286, v287);
          v368.fields._WaveBattleStartTime_k__BackingField = (int64_t)System_String__Format_63129848(
                                                                        v284,
                                                                        v262,
                                                                        v288,
                                                                        0LL);
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v368.fields._WaveBattleStartTime_k__BackingField,
            v368.fields._WaveBattleStartTime_k__BackingField,
            v289,
            v290,
            v291,
            v292,
            v293,
            v294);
        }
        singleContentsPrefab = (UnityEngine_Object_o *)v38->fields.singleContentsPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(singleContentsPrefab, 0LL, 0LL) )
          goto LABEL_199;
        doubleContentsPrefab = (UnityEngine_Object_o *)v38->fields.doubleContentsPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(doubleContentsPrefab, 0LL, 0LL) )
          goto LABEL_199;
        tripleContentsPrefab = (UnityEngine_Object_o *)v38->fields.tripleContentsPrefab;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(tripleContentsPrefab, 0LL, 0LL) )
        {
          v298 = sub_1C22084(BattleRetryConfirmComponent___c__DisplayClass47_1_TypeInfo);
          BattleRetryConfirmComponent___c__DisplayClass47_1___ctor(
            (BattleRetryConfirmComponent___c__DisplayClass47_1_o *)v298,
            0LL);
          mainText = (UnityEngine_Object_o *)v38->fields.mainText;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(mainText, 0LL, 0LL) )
          {
            v300 = v38->fields.mainText;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3009/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_MESSAGE_MAIN"*/, 0LL);
            if ( !v300 )
              goto LABEL_213;
            UILabel__set_text(v300, (System_String_o *)Instance, 0LL);
          }
          v369 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v368.fields._IsForceDisableSupportSelectBackBtn_k__BackingField;
          Instance = *v360;
          if ( !*v360 )
            goto LABEL_213;
          v301 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                   (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
                   (const MethodInfo_36BAD48 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
          v362 = v369;
          Instance = (int64_t)BattleRetryConfirmComponent__CreateContents(v38, &v362, v301, v302);
          if ( !v298 )
            goto LABEL_213;
          *(_QWORD *)(v298 + 16) = Instance;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v298 + 16), Instance, v303, v304, v305, v306, v307, v308);
          Instance = *(_QWORD *)(v298 + 16);
          if ( !Instance )
            goto LABEL_213;
          BattleRetryConfirmContents__Initialized((BattleRetryConfirmContents_o *)Instance, 0LL);
          BattleRetryConfirmComponent__SetBoostSupportRequestButton(v38, v309);
          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_213;
          *(_BYTE *)(Instance + 96) = 0;
          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_213;
          PartyOrganizationUtility__SetFriendshipUpItemInfoCache((PartyOrganizationUtility_o *)Instance, 0LL);
          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_213;
          AvailableQuestUseItems = PartyOrganizationUtility__GetAvailableQuestUseItems(
                                     (PartyOrganizationUtility_o *)Instance,
                                     0LL);
          QuestUseItemButtons = BattleRetryConfirmComponent__CreateQuestUseItemButtons(
                                  v38,
                                  AvailableQuestUseItems,
                                  v311);
          v38->fields.currentQuestUseItemButtons = QuestUseItemButtons;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v38->fields.currentQuestUseItemButtons,
            (int64_t)QuestUseItemButtons,
            v313,
            v314,
            v315,
            v316,
            v317,
            v318);
          v319 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v319,
            (Il2CppObject *)v298,
            Method_BattleRetryConfirmComponent___c__DisplayClass47_1__SetValues_b__3__,
            0LL);
          v322 = BattleRetryConfirmComponent__WaitOneFrame(v320, v319, v321);
          UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)v38, v322, 0LL);
          v323 = *(_QWORD *)(v298 + 16);
          v38->fields.currentContents = (struct BattleRetryConfirmContents_o *)v323;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v38->fields.currentContents,
            v323,
            v324,
            v325,
            v326,
            v327,
            v328,
            v329);
        }
        else
        {
LABEL_199:
          v369 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v368.fields._IsForceDisableSupportSelectBackBtn_k__BackingField;
          Instance = *v360;
          if ( !*v360 )
            goto LABEL_213;
          v330 = System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(
                   (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
                   (const MethodInfo_36BAD48 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
          v361 = v369;
          BattleRetryConfirmComponent__SetCostValueText(v38, &v361, v330, v331);
          BattleRetryConfirmComponent__SetBoostSupportRequestButton(v38, v332);
          friendshipUpItemSwitchComponent = (UnityEngine_Object_o *)v38->fields.friendshipUpItemSwitchComponent;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(friendshipUpItemSwitchComponent, 0LL, 0LL) )
          {
            Instance = (int64_t)v38->fields.friendshipUpItemUseButton;
            if ( !Instance )
              goto LABEL_213;
            Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( !Instance )
              goto LABEL_213;
            UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)Instance,
              (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_FriendshipUpItemSwitchComponent___);
            Instance = (int64_t)v38->fields.friendshipUpItemUseButton;
            if ( !Instance )
              goto LABEL_213;
            Instance = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            if ( !Instance )
              goto LABEL_213;
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Instance,
                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSwitchComponent___);
            v38->fields.friendshipUpItemSwitchComponent = (struct FriendshipUpItemSwitchComponent_o *)Component_object;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v38->fields.friendshipUpItemSwitchComponent,
              (int64_t)Component_object,
              v335,
              v336,
              v337,
              v338,
              v339,
              v340);
            Instance = (int64_t)v38->fields.friendshipUpItemSwitchComponent;
            if ( !Instance )
              goto LABEL_213;
            friendshipUpItemUseButton = (int64_t)v38->fields.friendshipUpItemUseButton;
            *(_QWORD *)(Instance + 32) = friendshipUpItemUseButton;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)(Instance + 32),
              friendshipUpItemUseButton,
              v341,
              v342,
              v343,
              v344,
              v345,
              v346);
          }
          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_213;
          *(_BYTE *)(Instance + 96) = 0;
          Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !Instance )
            goto LABEL_213;
          PartyOrganizationUtility__SetFriendshipUpItemInfoCache((PartyOrganizationUtility_o *)Instance, 0LL);
          BattleRetryConfirmComponent__SetFriendshipUpItemUseButton(v38, v348);
          v349 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v349,
            (Il2CppObject *)v3,
            Method_BattleRetryConfirmComponent___c__DisplayClass47_0__SetValues_b__0__,
            0LL);
          v352 = BattleRetryConfirmComponent__WaitOneFrame(v350, v349, v351);
          UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)v38, v352, 0LL);
        }
        return 1;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v120 = LocalizationManager__Get((System_String_o *)StringLiteral_11094/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v121 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v29->klass->vtable._3_ToString.method)(
                               v29,
                               v29->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v122 = System_String__Format(v120, v121, 0LL);
      v123 = System_String__Concat_63115476(v122, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v124 = LocalizationManager__Get((System_String_o *)StringLiteral_3017/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v125 = System_String__Concat_63115476(v123, v124, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v126 = (CommonUI_o *)Instance;
      v127 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v127 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      _9__47_1 = v127->static_fields->__9__47_1;
      v129 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__47_1 )
      {
        if ( !v127->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v127);
          v127 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v130 = (Il2CppObject *)v127->static_fields->__9;
        _9__47_1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(_9__47_1, v130, Method_BattleRetryConfirmComponent___c__SetValues_b__47_1__, 0LL);
        static_fields = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        static_fields->__9__47_1 = _9__47_1;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&static_fields->__9__47_1,
          (int64_t)_9__47_1,
          v132,
          v133,
          v134,
          v135,
          v136,
          v137);
      }
      if ( !v126 )
        goto LABEL_213;
      CommonUI__OpenNotificationDialog(v126, v129, v125, _9__47_1, -1, 0, 0, 0, 0, 0, 1, 0, 0LL, 0.0, 0LL);
      return 0;
    case 4:
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3913/*"CONSUME_TYPE_AP"*/, 0LL);
      v354 = (Il2CppObject *)Instance;
      if ( !*p_userGameEntity )
        goto LABEL_213;
      v356 = v3;
      Instance = UserGameEntity__getAct(*p_userGameEntity, 0LL);
      v368.fields._CachedWarId_k__BackingField = Instance;
      if ( !*p_userGameEntity )
        goto LABEL_213;
      v353 = (*p_userGameEntity)->fields.actMax;
      *(_QWORD *)&v368.fields._IsForceDisableSupportSelectBackBtn_k__BackingField = StringLiteral_1/*""*/;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v368.fields._IsForceDisableSupportSelectBackBtn_k__BackingField,
        (int64_t)StringLiteral_1/*""*/,
        v138,
        v139,
        v140,
        v141,
        v142,
        v143);
      v368.fields._PartyItemSmc_k__BackingField = (struct PartyListViewItem_o *)StringLiteral_1/*""*/;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v368.fields._PartyItemSmc_k__BackingField,
        (int64_t)StringLiteral_1/*""*/,
        v144,
        v145,
        v146,
        v147,
        v148,
        v149);
      if ( !ItemConsumeEntity )
        goto LABEL_137;
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_213;
      v150 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_213;
      v151 = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserItemMaster___);
      Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, 0, 0LL);
      if ( (Instance & 1) == 0 )
        goto LABEL_137;
      v152 = 0;
      do
      {
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4BD6FF5 )
        {
          sub_1C21E38(&NetworkManager_TypeInfo);
          byte_4BD6FF5 = 1;
        }
        Instance = (int64_t)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (int64_t)NetworkManager_TypeInfo;
        }
        v153 = ItemConsumeEntity->fields.itemIds;
        if ( !v153 )
          goto LABEL_213;
        if ( v152 >= v153->max_length )
          goto LABEL_214;
        if ( !v151 )
          goto LABEL_213;
        Instance = (int64_t)UserItemMaster__GetEntity(
                              (UserItemMaster_o *)v151,
                              *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                              v153->m_Items[v152 + 1],
                              0LL);
        v154 = ItemConsumeEntity->fields.itemIds;
        if ( !v154 )
          goto LABEL_213;
        if ( v152 >= v154->max_length )
          goto LABEL_214;
        if ( !v150 )
          goto LABEL_213;
        v155 = Instance;
        Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)v150,
                              v154->m_Items[v152 + 1],
                              (const MethodInfo_325BDC8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_213;
        v156 = (ItemEntity_o *)Instance;
        if ( *(_DWORD *)(Instance + 48) == 1 )
        {
          if ( !*p_userGameEntity )
            goto LABEL_213;
          v157 = (*p_userGameEntity)->fields.qp;
        }
        else if ( v155 && (Instance = ItemEntity__IsEnable((ItemEntity_o *)Instance, 0LL), (Instance & 1) != 0) )
        {
          v157 = *(_DWORD *)(v155 + 28);
        }
        else
        {
          v157 = 0;
        }
        v158 = ItemConsumeEntity->fields.nums;
        if ( !v158 )
          goto LABEL_213;
        if ( v152 >= v158->max_length )
          goto LABEL_214;
        if ( v158->m_Items[v152 + 1] > v157 )
        {
          Instance = (int64_t)System_String__Concat_63115476(
                                (System_String_o *)StringLiteral_43/*"\n"*/,
                                v156->fields.name,
                                0LL);
          if ( !v29 )
            goto LABEL_213;
          System_Text_StringBuilder__Append_62276628(v29, (System_String_o *)Instance, 0LL);
        }
        v367 = 0u;
        memset(&v368, 0, 24);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v159 = LocalizationManager__Get((System_String_o *)StringLiteral_3015/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM"*/, 0LL);
        *(_QWORD *)&v367 = System_String__Format(v159, (Il2CppObject *)v156->fields.name, 0LL);
        sub_1C21DDC((PartyOrganizationUtility_o *)&v367, v367, v160, v161, v162, v163, v164, v165);
        Instance = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3016/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_REQUIRE_ITEM_VALUE"*/, 0LL);
        v169 = ItemConsumeEntity->fields.nums;
        if ( !v169 )
          goto LABEL_213;
        if ( v152 >= v169->max_length )
LABEL_214:
          sub_1C2209C(Instance, v5);
        v170 = (System_String_o *)Instance;
        LODWORD(v369.fields.useName) = v169->m_Items[v152 + 1];
        v171 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v369, v166, v167, v168);
        *((_QWORD *)&v367 + 1) = System_String__Format(v170, v171, 0LL);
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)((char *)&v367 + 8),
          *((int64_t *)&v367 + 1),
          v172,
          v173,
          v174,
          v175,
          v176,
          v177);
        v178 = LocalizationManager__Get((System_String_o *)StringLiteral_3018/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM"*/, 0LL);
        v368.klass = (PartyOrganizationUtility_c *)System_String__Format(v178, (Il2CppObject *)v156->fields.name, 0LL);
        sub_1C21DDC(&v368, (int64_t)v368.klass, v179, v180, v181, v182, v183, v184);
        v185 = ItemEntity__GetMaxNum(v156, 0LL);
        v186 = v185 > 0;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v185 < 1 )
        {
          v203 = LocalizationManager__Get((System_String_o *)StringLiteral_3019/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE"*/, 0LL);
          LODWORD(v369.fields.useName) = v157;
          v207 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v369, v204, v205, v206);
          v196 = System_String__Format(v203, v207, 0LL);
        }
        else
        {
          v187 = LocalizationManager__Get((System_String_o *)StringLiteral_3020/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_TAKE_ITEM_VALUE_MAX"*/, 0LL);
          LODWORD(v369.fields.useName) = v157;
          v191 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v369, v188, v189, v190);
          LODWORD(v368.fields.CachedFriendshipUpItemInfo) = ItemEntity__GetMaxNum(v156, 0LL);
          v195 = (Il2CppObject *)j_il2cpp_value_box_0(
                                   int_TypeInfo,
                                   &v368.fields.CachedFriendshipUpItemInfo,
                                   v192,
                                   v193,
                                   v194);
          v196 = System_String__Format_63129848(v187, v191, v195, 0LL);
        }
        v368.monitor = v196;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v368.monitor, (int64_t)v196, v197, v198, v199, v200, v201, v202);
        LOBYTE(v368.fields.restrictionDialogHistoryList) = v186;
        Instance = *v360;
        v363 = v367;
        v364 = *(_OWORD *)&v368.klass;
        BasePartyItem_k__BackingField = v368.fields.restrictionDialogHistoryList;
        if ( !Instance )
          goto LABEL_213;
        *(_OWORD *)&v368.fields.CachedFriendshipUpItemInfo = v363;
        *(_OWORD *)&v368.fields.temporaryPartyInfo = v364;
        *(_QWORD *)&v368.fields._IsQuestStartMenuMode_k__BackingField = BasePartyItem_k__BackingField;
        v214 = *(_QWORD *)(Instance + 16);
        v215 = Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v214 )
          goto LABEL_213;
        v216 = *(int *)(Instance + 24);
        if ( (unsigned int)v216 >= *(_DWORD *)(v214 + 24) )
        {
          v220 = *(const MethodInfo_36B8D38 **)(*(_QWORD *)(v215[4] + 192LL) + 112LL);
          v369 = *(BattleRetryConfirmComponent_RetryConfirmItemStr_o *)&v368.fields.CachedFriendshipUpItemInfo;
          System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___AddWithResize(
            (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)Instance,
            &v369,
            v220);
        }
        else
        {
          *(_DWORD *)(Instance + 24) = v216 + 1;
          v217 = *(_OWORD *)&v368.fields.CachedFriendshipUpItemInfo;
          v218 = *(_OWORD *)&v368.fields.temporaryPartyInfo;
          v219 = v214 + 40 * v216;
          *(_QWORD *)(v219 + 64) = *(_QWORD *)&v368.fields._IsQuestStartMenuMode_k__BackingField;
          *(_OWORD *)(v219 + 32) = v217;
          *(_OWORD *)(v219 + 48) = v218;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v219 + 32), 0LL, v208, v209, v210, v211, v212, v213);
        }
        Instance = QuestConsumeItemEntity__IsAvailableAt(ItemConsumeEntity, ++v152, 0LL);
      }
      while ( (Instance & 1) != 0 );
LABEL_137:
      if ( !v29 )
        goto LABEL_213;
      v3 = v356;
      v37 = v20;
      actMax = v353;
      v39 = &qword_4BD7000;
      if ( System_Text_StringBuilder__get_Length(v29, 0LL) < 1 )
        goto LABEL_151;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v221 = LocalizationManager__Get((System_String_o *)StringLiteral_11094/*"QUEST_ITEM_COST_OVER"*/, 0LL);
      v222 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v29->klass->vtable._3_ToString.method)(
                               v29,
                               v29->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
      v223 = System_String__Format(v221, v222, 0LL);
      v224 = System_String__Concat_63115476(v223, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0LL);
      v225 = LocalizationManager__Get((System_String_o *)StringLiteral_3017/*"BATTLE_RETRYABLE_CONFIRM_DIALOG_RETURN_QUEST_SCENE"*/, 0LL);
      v226 = System_String__Concat_63115476(v224, v225, 0LL);
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v227 = (CommonUI_o *)Instance;
      v228 = BattleRetryConfirmComponent___c_TypeInfo;
      if ( !BattleRetryConfirmComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleRetryConfirmComponent___c_TypeInfo);
        v228 = BattleRetryConfirmComponent___c_TypeInfo;
      }
      _9__47_2 = v228->static_fields->__9__47_2;
      v230 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !_9__47_2 )
      {
        if ( !v228->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v228);
          v228 = BattleRetryConfirmComponent___c_TypeInfo;
        }
        v231 = (Il2CppObject *)v228->static_fields->__9;
        _9__47_2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(_9__47_2, v231, Method_BattleRetryConfirmComponent___c__SetValues_b__47_2__, 0LL);
        v232 = BattleRetryConfirmComponent___c_TypeInfo->static_fields;
        v232->__9__47_2 = _9__47_2;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v232->__9__47_2,
          (int64_t)_9__47_2,
          v233,
          v234,
          v235,
          v236,
          v237,
          v238);
      }
      if ( !v227 )
        goto LABEL_213;
      CommonUI__OpenNotificationDialog(v227, v230, v226, _9__47_2, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0.0, 0LL);
      return 0;
    default:
      v38 = v357;
      v37 = v358;
      actMax = 0;
      v40 = (Il2CppObject *)v30;
      v39 = &qword_4BD7000;
      goto LABEL_152;
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDF9D9 & 1) == 0 )
  {
    sub_1C21E38(&BattleRetryConfirmComponent__WaitOneFrame_d__55_TypeInfo);
    byte_4BDF9D9 = 1;
  }
  v4 = sub_1C22084(BattleRetryConfirmComponent__WaitOneFrame_d__55_TypeInfo);
  BattleRetryConfirmComponent__WaitOneFrame_d__55___ctor(
    (BattleRetryConfirmComponent__WaitOneFrame_d__55_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_1C22094(v5, v6);
  *(_QWORD *)(v4 + 32) = action;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 32), (int64_t)action, v7, v8, v9, v10, v11, v12);
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
    sub_1C22094(0LL, method);
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
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleRetryConfirmComponent__WaitOneFrame_d__55_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF9E9 & 1) == 0 )
  {
    sub_1C21E38(&BattleRetryConfirmComponent___c_TypeInfo);
    byte_4BDF9E9 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleRetryConfirmComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleRetryConfirmComponent___c_TypeInfo->static_fields->__9 = (struct BattleRetryConfirmComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleRetryConfirmComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  _QWORD *v2; // x0
  System_Reflection_MethodBase_o *v3; // x0
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BDF9EC & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__50_0__);
    byte_4BDF9EC = 1;
  }
  v2 = Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__50_0__;
  if ( (*((_BYTE *)Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__50_0__ + 83) & 2) != 0 )
    v2 = (_QWORD *)sub_1C21E50(Method_BattleRetryConfirmComponent___c__OnClickQuestUseItemButton_b__50_0__);
  v3 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v2, v2[4]);
  OverwriteAssetSoundName__PlaySystemSe(v3, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__47_1(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDF9EA & 1) == 0 )
  {
    sub_1C21E38(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDF9EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2F995DC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
}


void __fastcall BattleRetryConfirmComponent___c___SetValues_b__47_2(
        BattleRetryConfirmComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BDF9EB & 1) == 0 )
  {
    sub_1C21E38(&Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BDF9EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  AvalonSceneManager__DestroyAnySceneIfNeeded_object_(
    (AvalonSceneManager_o *)Instance,
    10,
    0,
    (const MethodInfo_2F995DC *)Method_AvalonSceneManager_DestroyAnySceneIfNeeded_BattleRootComponent___);
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

  if ( (byte_4BDF9ED & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__);
    byte_4BDF9ED = 1;
  }
  rciItems = this->fields.rciItems;
  if ( !rciItems
    || (_4__this = this->fields.__4__this,
        rciItems = (System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__o *)System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr___ToArray(rciItems, (const MethodInfo_36BAD48 *)Method_System_Collections_Generic_List_BattleRetryConfirmComponent_RetryConfirmItemStr__ToArray__),
        !_4__this) )
  {
    sub_1C22094(rciItems, method);
  }
  BattleRetryConfirmComponent__SetCondensedScaleRetryConfirmItem(
    _4__this,
    (BattleRetryConfirmComponent_RetryConfirmItemStr_array *)rciItems,
    0LL);
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
    sub_1C22094(0LL, method);
  BattleRetryConfirmContents__SetCondensedScalePossessionAmount(contents, method);
}