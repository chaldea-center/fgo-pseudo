void ItemLinkInfoWindowComponent___cctor(const MethodInfo *method)
{
  if ( (byte_593B848 & 1) == 0 )
  {
    sub_21FFC50(&ItemLinkInfoWindowComponent_TypeInfo);
    byte_593B848 = 1;
  }
  LODWORD(ItemLinkInfoWindowComponent_TypeInfo->static_fields->STONE_DETAIL_VIEW_BG_POSITION_Y) = (struct ItemLinkInfoWindowComponent_StaticFields)1092616192;
}


void ItemLinkInfoWindowComponent___ctor(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_593B847 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593B847 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ItemLinkInfoWindowComponent__Callback(ItemLinkInfoWindowComponent_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ItemLinkInfoWindowComponent_CallbackFunc_o *v9; // x20
  struct ItemLinkInfoWindowComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void ItemLinkInfoWindowComponent__CheckRecommendBoard(
        ItemLinkInfoWindowComponent_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewItem__o **viewList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v4; // x0
  char v5; // w21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int v8; // w9
  __int64 v9; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v10; // [xsp+10h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_593B83F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__GetEnumerator__);
    byte_593B83F = 1;
  }
  v4 = *viewList;
  memset(&v11, 0, sizeof(v11));
  if ( !v4 )
    sub_21FFECC(0, viewList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)v4,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__GetEnumerator__);
  v5 = 0;
  v9 = 0;
  v10 = &v11;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__MoveNext__);
    if ( !v6 )
      break;
    if ( (v5 & 1) != 0 )
    {
      if ( !v11.fields._current )
        sub_21FFECC(v6, v7);
      v8 = *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&qword_B8);
    }
    else
    {
      if ( !v11.fields._current )
        sub_21FFECC(v6, v7);
      v8 = *(_DWORD *)((char *)&v11.fields._current->klass + (unsigned __int64)&qword_B8);
      if ( v8 == 4 )
      {
        v5 = 1;
        goto LABEL_14;
      }
    }
    if ( (v8 & 0xFFFFFFFE) == 2 )
LABEL_14:
      *((_BYTE *)&v11.fields._current->klass + (unsigned __int64)&qword_A0 + 2) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__Dispose__);
}


void ItemLinkInfoWindowComponent__Close(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemLinkInfoWindowComponent__Close_53772600(this, 0, v2);
}


void ItemLinkInfoWindowComponent__Close_53772600(
        ItemLinkInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *listViewManager; // x21
  const MethodInfo *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  ItemLinkInfoListViewManager_o *v13; // x0
  System_Action_o *v14; // x20

  if ( (byte_593B845 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ItemLinkInfoWindowComponent_EndClose__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B845 = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, callback);
    if ( UnityEngine_Object__op_Inequality(listViewManager, 0, 0) )
    {
      v13 = this->fields.listViewManager;
      if ( !v13 )
        sub_21FFECC(0, v6);
      ItemLinkInfoListViewManager__DeleteCallback(v13, v6);
    }
    this->fields.state = 3;
    this->fields.closeCallbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
      (int32_t)callback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v14, 0);
  }
}


System_Collections_IEnumerator_o *ItemLinkInfoWindowComponent__CoCreateItemTransitionList(
        ItemLinkInfoWindowComponent_o *this,
        System_Int32_array *itemIdList,
        System_Int32_array *needNumList,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_593B831 & 1) == 0 )
  {
    sub_21FFC50(&ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_TypeInfo);
    byte_593B831 = 1;
  }
  v7 = sub_21FFEBC(ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 48) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 32) = itemIdList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)itemIdList, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 40) = needNumList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)needNumList, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *ItemLinkInfoWindowComponent__CreateEventRewardTransitionParam(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x19
  struct System_String_o *transitionParam; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v43; // [xsp+8h] [xbp-28h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-24h] BYREF

  v44 = eventId;
  v43 = slot;
  if ( (byte_593B839 & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_593B839 = 1;
  }
  v6 = (System_String_o *)sub_21FFD10(string___TypeInfo, 5);
  if ( !itemDropEfficiencyEnt || (v14 = v6) == 0 )
    sub_21FFECC(v6, v7);
  if ( !LODWORD(v6[1].klass) )
    goto LABEL_11;
  transitionParam = itemDropEfficiencyEnt->fields.transitionParam;
  v6[1].monitor = transitionParam;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6[1].monitor, (int32_t)transitionParam, v8, v9, v10, v11, v12, v13);
  if ( ((__int64)v14[1].klass & 0xFFFFFFFE) == 0 )
    goto LABEL_11;
  v22 = StringLiteral_1123/*"/"*/;
  v14[1].fields = (System_String_Fields)StringLiteral_1123/*"/"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14[1].fields, v22, v16, v17, v18, v19, v20, v21);
  v6 = System_Int32__ToString((int32_t)&v44, 0);
  if ( LODWORD(v14[1].klass) <= 2
    || (v14[2].klass = (System_String_c *)v6,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14[2], (int32_t)v6, v23, v24, v25, v26, v27, v28),
        ((__int64)v14[1].klass & 0xFFFFFFFC) == 0)
    || (v35 = StringLiteral_1123/*"/"*/,
        v14[2].monitor = (void *)StringLiteral_1123/*"/"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14[2].monitor, v35, v29, v30, v31, v32, v33, v34),
        v6 = System_Int32__ToString((int32_t)&v43, 0),
        LODWORD(v14[1].klass) <= 4) )
  {
LABEL_11:
    sub_21FFED4(v6);
  }
  v14[2].fields = (System_String_Fields)v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14[2].fields, (int32_t)v6, v36, v37, v38, v39, v40, v41);
  return System_String__Concat_75483816((System_String_array *)v14, 0);
}


ItemLinkInfoDetailObject_o *ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
        ItemLinkInfoWindowComponent_o *this,
        ItemEntity_o *itemEnt,
        UnityEngine_GameObject_o *parentObject,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v8; // x22
  __int64 v9; // x8
  Il2CppObject *v10; // x22
  __int64 v11; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v13; // x21
  ItemLinkInfoDetailObject_o *v14; // x22

  v8 = this;
  if ( (byte_593B838 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoDetailObject___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    this = (ItemLinkInfoWindowComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B838 = 1;
  }
  v9 = 128;
  if ( isDispStoneDetail )
    v9 = 152;
  if ( !parentObject )
    goto LABEL_13;
  v10 = *(Il2CppObject **)((char *)&v8->klass + v9);
  transform = UnityEngine_GameObject__get_transform(parentObject, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v13 = UnityEngine_Object__Instantiate_object__59506996(
          v10,
          transform,
          (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0, 0);
  v14 = 0;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v13 )
    {
      this = (ItemLinkInfoWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)v13,
                                                (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoDetailObject___);
      if ( this )
      {
        v14 = (ItemLinkInfoDetailObject_o *)this;
        ItemLinkInfoDetailObject__Setup((ItemLinkInfoDetailObject_o *)this, itemEnt, isDispStoneDetail, 0);
        return v14;
      }
    }
LABEL_13:
    sub_21FFECC(this, itemEnt);
  }
  return v14;
}


ItemLinkInfoListViewItem_o *ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItem(
        ItemLinkInfoWindowComponent_o *this,
        int32_t index,
        ItemEntity_o *itemEnt,
        ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt,
        bool isItemGetInfoList,
        int32_t needNum,
        const MethodInfo *method)
{
  __int64 v13; // x21
  __int64 IsNotDisplayQuestInfo; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x23
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  ItemLinkInfoListViewItem_o *v29; // x25
  __int64 *v30; // x24
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x1
  __int64 v50; // x22
  __int64 v51; // x8
  __int64 v52; // x22
  int v53; // w8
  System_Action_c *v54; // x0
  intptr_t *v55; // x19
  System_Action_o *v56; // x0
  intptr_t v57; // x2
  System_Action_o *v58; // x19
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7

  if ( (byte_593B837 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ItemLinkInfoListViewItem_TypeInfo);
    sub_21FFC50(&Method_ItemLinkInfoWindowComponent___c__DisplayClass29_0__CreateItemLinkInfoListViewItem_b__0__);
    sub_21FFC50(&Method_ItemLinkInfoWindowComponent___c__DisplayClass29_0__CreateItemLinkInfoListViewItem_b__1__);
    sub_21FFC50(&ItemLinkInfoWindowComponent___c__DisplayClass29_0_TypeInfo);
    byte_593B837 = 1;
  }
  v13 = sub_21FFEBC(ItemLinkInfoWindowComponent___c__DisplayClass29_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_15;
  *(_QWORD *)(v13 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 16), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = itemDropEfficiencyEnt;
  v22 = v13 + 24;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v13 + 24),
    (int32_t)itemDropEfficiencyEnt,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (ItemLinkInfoListViewItem_o *)sub_21FFEBC(ItemLinkInfoListViewItem_TypeInfo);
  ItemLinkInfoListViewItem___ctor(v29, index, 0);
  *(_QWORD *)(v13 + 32) = v29;
  v30 = (__int64 *)(v13 + 32);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)v29, v31, v32, v33, v34, v35, v36);
  IsNotDisplayQuestInfo = *(_QWORD *)(v13 + 32);
  if ( !IsNotDisplayQuestInfo )
    goto LABEL_15;
  *(_QWORD *)(IsNotDisplayQuestInfo + 144) = itemEnt;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(IsNotDisplayQuestInfo + 144),
    (int32_t)itemEnt,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( !*(_QWORD *)v22 )
    goto LABEL_15;
  IsNotDisplayQuestInfo = *v30;
  if ( !*v30 )
    goto LABEL_15;
  v49 = *(_QWORD *)(*(_QWORD *)v22 + 40LL);
  *(_QWORD *)(IsNotDisplayQuestInfo + 120) = v49;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(IsNotDisplayQuestInfo + 120), v49, v43, v44, v45, v46, v47, v48);
  IsNotDisplayQuestInfo = *(_QWORD *)v22;
  if ( !*(_QWORD *)v22
    || (v50 = *v30,
        IsNotDisplayQuestInfo = ItemDropEfficiencyEntity__IsNotDisplayQuestInfo(
                                  (ItemDropEfficiencyEntity_o *)IsNotDisplayQuestInfo,
                                  0),
        !v50)
    || (v51 = *(_QWORD *)v22, *(_BYTE *)(v50 + 160) = IsNotDisplayQuestInfo & 1, !v51)
    || (v52 = *v30) == 0 )
  {
LABEL_15:
    sub_21FFECC(IsNotDisplayQuestInfo, v15);
  }
  v53 = *(_DWORD *)(v51 + 20);
  *(_DWORD *)(v52 + 152) = needNum;
  v54 = System_Action_TypeInfo;
  *(_DWORD *)(v52 + 184) = v53;
  *(_BYTE *)(v52 + 163) = isItemGetInfoList;
  if ( isItemGetInfoList )
    v55 = (intptr_t *)&Method_ItemLinkInfoWindowComponent___c__DisplayClass29_0__CreateItemLinkInfoListViewItem_b__0__;
  else
    v55 = (intptr_t *)&Method_ItemLinkInfoWindowComponent___c__DisplayClass29_0__CreateItemLinkInfoListViewItem_b__1__;
  v56 = (System_Action_o *)sub_21FFEBC(v54);
  v57 = *v55;
  v58 = v56;
  System_Action___ctor(v56, (Il2CppObject *)v13, v57, 0);
  *(_QWORD *)(v52 + 176) = v58;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v52 + 176), (int32_t)v58, v59, v60, v61, v62, v63, v64);
  return *(ItemLinkInfoListViewItem_o **)(v13 + 32);
}


System_Collections_Generic_List_ItemLinkInfoListViewItem__o *ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItemList(
        ItemLinkInfoWindowComponent_o *this,
        System_Collections_Generic_List_ItemDropEfficiencyEntity__o *itemDropEfficiencyList,
        bool isItemGetInfoList,
        int32_t needNum,
        ItemEntity_o *itemEnt,
        EventEntity_array *eventEntList,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  Il2CppObject *Master_object; // x26
  System_Collections_Generic_List_object__o *v22; // x19
  _BOOL8 v23; // x0
  __int64 v24; // x1
  ItemDropEfficiencyEntity_o *current; // x29
  ItemLinkInfoWindowComponent_o *TransitionParams; // x0
  const MethodInfo *v27; // x2
  Il2CppObject *MultiEventRewardViewItem; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  int max_length; // w8
  const MethodInfo *v32; // x6
  ItemLinkInfoListViewItem_o *v33; // x21
  const MethodInfo *v34; // x2
  _BOOL8 IsBoardActive; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x4
  System_String_o *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  const MethodInfo *v45; // x2
  const MethodInfo *v46; // x2
  int32_t TargetValueType; // w0
  struct System_String_o *transitionParam; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  ItemLinkInfoWindowComponent_o *v55; // x0
  const MethodInfo *v56; // x4
  System_String_o *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  __int64 v64; // x0
  __int64 v65; // x1
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  int v76; // w25
  int v77; // w28
  EventEntity_o *v78; // x21
  System_Collections_ICollection_o *EnableEventEntitiyList; // x22
  System_Func_object__bool__o *v80; // x27
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  const MethodInfo *v87; // x6
  Il2CppObject *v88; // x27
  ItemLinkInfoListViewItem_o *ItemLinkInfoListViewItem; // x22
  _BOOL8 IsEventShopOpen; // x0
  __int64 v91; // x1
  const MethodInfo *v92; // x4
  System_String_o *TitleText; // x0
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  int32_t id; // w2
  ItemLinkInfoWindowComponent_o *v101; // x0
  const MethodInfo *v102; // x4
  System_String_o *EventRewardTransitionParam; // x0
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  ItemLinkInfoWindowComponent_o *v110; // x0
  const MethodInfo *v111; // x4
  System_String_o *ClosedMessage; // x0
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  __int64 v119; // x0
  __int64 v120; // x1
  System_String_o *v121; // x2
  System_String_o *v122; // x3
  int32_t v123; // w4
  int32_t v124; // w5
  bool v125; // w6
  bool v126; // w7
  struct System_Object_array *items; // x8
  _QWORD *v128; // x9
  __int64 size; // x10
  Il2CppClass **v130; // x0
  ClosedMessageMaster_o *closedMessageMst; // [xsp+8h] [xbp-B8h]
  ItemEntity_o **v133; // [xsp+10h] [xbp-B0h]
  int32_t index; // [xsp+24h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_object__o v137; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v138; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_593B832 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Find_ShopEntity___);
    sub_21FFC50(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ShopMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__get_Current__);
    sub_21FFC50(&System_Func_ShopEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo);
    sub_21FFC50(&Method_ItemLinkInfoWindowComponent___c__DisplayClass23_0__CreateItemLinkInfoListViewItemList_b__0__);
    sub_21FFC50(&ItemLinkInfoWindowComponent___c__DisplayClass23_0_TypeInfo);
    byte_593B832 = 1;
  }
  memset(&v138, 0, sizeof(v138));
  v11 = sub_21FFEBC(ItemLinkInfoWindowComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_46;
  *(_QWORD *)(v11 + 16) = itemEnt;
  v133 = (ItemEntity_o **)(v11 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)itemEnt, v14, v15, v16, v17, v18, v19);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ShopMaster___);
  closedMessageMst = (ClosedMessageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  v22 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__);
  if ( !itemDropEfficiencyList )
LABEL_46:
    sub_21FFECC(v12, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v137,
    (System_Collections_Generic_List_object__o *)itemDropEfficiencyList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__GetEnumerator__);
  index = 0;
  v138 = v137;
  v137.fields._list = 0;
  *(_QWORD *)&v137.fields._index = &v138;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v138,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__MoveNext__);
    if ( !v23 )
      break;
    current = (ItemDropEfficiencyEntity_o *)v138.fields._current;
    if ( !v138.fields._current )
      sub_21FFECC(v23, v24);
    TransitionParams = (ItemLinkInfoWindowComponent_o *)ItemDropEfficiencyEntity__GetTransitionParams(
                                                          (ItemDropEfficiencyEntity_o *)v138.fields._current,
                                                          0);
    MultiEventRewardViewItem = (Il2CppObject *)ItemLinkInfoWindowComponent__IsCreateMultiEventRewardViewItem(
                                                 TransitionParams,
                                                 (System_String_array *)TransitionParams,
                                                 v27);
    if ( ((unsigned __int8)MultiEventRewardViewItem & 1) != 0 )
    {
      if ( !eventEntList )
        sub_21FFECC(MultiEventRewardViewItem, v29);
      max_length = eventEntList->max_length;
      if ( max_length >= 1 )
      {
        v76 = 0;
        v77 = 0;
        do
        {
          if ( v76 >= (unsigned int)max_length )
            sub_21FFED4(MultiEventRewardViewItem);
          v78 = eventEntList->m_Items[v76];
          if ( !v78 )
            sub_21FFECC(MultiEventRewardViewItem, v29);
          if ( !Master_object )
            sub_21FFECC(MultiEventRewardViewItem, v29);
          EnableEventEntitiyList = (System_Collections_ICollection_o *)ShopMaster__GetEnableEventEntitiyList(
                                                                         (ShopMaster_o *)Master_object,
                                                                         v78->fields.id,
                                                                         0);
          MultiEventRewardViewItem = (Il2CppObject *)BasicHelper__IsNullOrEmpty(EnableEventEntitiyList, 0);
          if ( ((unsigned __int8)MultiEventRewardViewItem & 1) == 0 )
          {
            v80 = *(System_Func_object__bool__o **)(v11 + 24);
            if ( !v80 )
            {
              v80 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ShopEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v80,
                (Il2CppObject *)v11,
                Method_ItemLinkInfoWindowComponent___c__DisplayClass23_0__CreateItemLinkInfoListViewItemList_b__0__,
                0);
              *(_QWORD *)(v11 + 24) = v80;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)v80, v81, v82, v83, v84, v85, v86);
            }
            MultiEventRewardViewItem = BasicHelper__Find_object_(
                                         (System_Object_array *)EnableEventEntitiyList,
                                         (System_Func_T__bool__o *)v80,
                                         (const MethodInfo_37DD66C *)Method_BasicHelper_Find_ShopEntity___);
            v88 = MultiEventRewardViewItem;
            if ( MultiEventRewardViewItem )
            {
              ItemLinkInfoListViewItem = ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItem(
                                           this,
                                           index,
                                           *v133,
                                           current,
                                           isItemGetInfoList,
                                           needNum,
                                           v87);
              IsEventShopOpen = ShopMaster__IsEventShopOpen((ShopMaster_o *)Master_object, v78->fields.id, 0);
              if ( !ItemLinkInfoListViewItem )
                sub_21FFECC(IsEventShopOpen, v91);
              ItemLinkInfoListViewItem->fields._IsLocked_k__BackingField = !IsEventShopOpen;
              TitleText = ItemLinkInfoWindowComponent__GetTitleText(
                            (ItemLinkInfoWindowComponent_o *)IsEventShopOpen,
                            current,
                            ItemLinkInfoListViewItem,
                            v78,
                            v92);
              ItemLinkInfoListViewItem->fields._Name_k__BackingField = TitleText;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&ItemLinkInfoListViewItem->fields._Name_k__BackingField,
                (int32_t)TitleText,
                v94,
                v95,
                v96,
                v97,
                v98,
                v99);
              id = v78->fields.id;
              ItemLinkInfoListViewItem->fields._TargetId_k__BackingField = id;
              ItemLinkInfoListViewItem->fields._TargetValueType_k__BackingField = 4;
              ItemLinkInfoListViewItem->fields._ItemDropEfficiencyPriority_k__BackingField = current->fields.priority
                                                                                           + v77;
              EventRewardTransitionParam = ItemLinkInfoWindowComponent__CreateEventRewardTransitionParam(
                                             v101,
                                             current,
                                             id,
                                             (int32_t)v88[2].monitor,
                                             v102);
              ItemLinkInfoListViewItem->fields._TransitionParam_k__BackingField = EventRewardTransitionParam;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&ItemLinkInfoListViewItem->fields._TransitionParam_k__BackingField,
                (int32_t)EventRewardTransitionParam,
                v104,
                v105,
                v106,
                v107,
                v108,
                v109);
              ClosedMessage = ItemLinkInfoWindowComponent__GetClosedMessage(
                                v110,
                                closedMessageMst,
                                current,
                                ItemLinkInfoListViewItem->fields._TargetId_k__BackingField,
                                v111);
              ItemLinkInfoListViewItem->fields._ClosedMessage_k__BackingField = ClosedMessage;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)&ItemLinkInfoListViewItem->fields._ClosedMessage_k__BackingField,
                (int32_t)ClosedMessage,
                v113,
                v114,
                v115,
                v116,
                v117,
                v118);
              if ( !v22
                || (items = v22->fields._items,
                    v128 = Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__,
                    ++v22->fields._version,
                    !items) )
              {
                sub_21FFECC(v119, v120);
              }
              size = v22->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v22,
                  (Il2CppObject *)ItemLinkInfoListViewItem,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
              }
              else
              {
                v130 = &items->obj.klass + size;
                v22->fields._size = size + 1;
                v130[4] = (Il2CppClass *)ItemLinkInfoListViewItem;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)(v130 + 4),
                  (int32_t)ItemLinkInfoListViewItem,
                  v121,
                  v122,
                  v123,
                  v124,
                  v125,
                  v126);
              }
              ++v77;
              ++index;
            }
          }
          max_length = eventEntList->max_length;
          ++v76;
        }
        while ( v76 < max_length );
      }
    }
    else if ( ItemLinkInfoWindowComponent__ShouldCreateViewExRoomItem(this, current, v30) )
    {
      v33 = ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItem(
              this,
              index,
              *v133,
              current,
              isItemGetInfoList,
              needNum,
              v32);
      IsBoardActive = ItemLinkInfoWindowComponent__IsBoardActive(this, current, v34);
      if ( !v33 )
        sub_21FFECC(IsBoardActive, v36);
      v33->fields._IsLocked_k__BackingField = !IsBoardActive;
      v38 = ItemLinkInfoWindowComponent__GetTitleText(
              (ItemLinkInfoWindowComponent_o *)IsBoardActive,
              current,
              v33,
              0,
              v37);
      v33->fields._Name_k__BackingField = v38;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v33->fields._Name_k__BackingField,
        (int32_t)v38,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      v33->fields._TargetId_k__BackingField = ItemLinkInfoWindowComponent__GetTargetId(this, current, v45);
      TargetValueType = ItemLinkInfoWindowComponent__GetTargetValueType(this, current, v46);
      transitionParam = current->fields.transitionParam;
      v33->fields._TransitionParam_k__BackingField = transitionParam;
      v33->fields._TargetValueType_k__BackingField = TargetValueType;
      v33->fields._ItemDropEfficiencyPriority_k__BackingField = current->fields.priority;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v33->fields._TransitionParam_k__BackingField,
        (int32_t)transitionParam,
        v49,
        v50,
        v51,
        v52,
        v53,
        v54);
      v57 = ItemLinkInfoWindowComponent__GetClosedMessage(v55, closedMessageMst, current, 0, v56);
      v33->fields._ClosedMessage_k__BackingField = v57;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v33->fields._ClosedMessage_k__BackingField,
        (int32_t)v57,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
      if ( !v22
        || (v72 = v22->fields._items,
            v73 = Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__,
            ++v22->fields._version,
            !v72) )
      {
        sub_21FFECC(v64, v65);
      }
      v74 = v22->fields._size;
      if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)v33,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = &v72->obj.klass + v74;
        v22->fields._size = v74 + 1;
        v75[4] = (Il2CppClass *)v33;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v75 + 4), (int32_t)v33, v66, v67, v68, v69, v70, v71);
      }
      ++index;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v138,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__Dispose__);
  return (System_Collections_Generic_List_ItemLinkInfoListViewItem__o *)v22;
}


ItemLinkInfoTextObject_o *ItemLinkInfoWindowComponent__CreateListDescriptionObject(
        ItemLinkInfoWindowComponent_o *this,
        UnityEngine_GameObject_o *parentObject,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x20
  Il2CppObject *listDescriptionObject; // x20
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x19
  Il2CppObject *v8; // x19

  v4 = this;
  if ( (byte_593B83D & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoTextObject___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    this = (ItemLinkInfoWindowComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B83D = 1;
  }
  if ( !parentObject )
    goto LABEL_10;
  listDescriptionObject = (Il2CppObject *)v4->fields.listDescriptionObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__Instantiate_object__59506996(
         listDescriptionObject,
         transform,
         (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v8, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !v8 )
LABEL_10:
    sub_21FFECC(this, parentObject);
  return (ItemLinkInfoTextObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)v8,
                                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoTextObject___);
}


ItemLinkInfoSubHeaderObject_o *ItemLinkInfoWindowComponent__CreateSubHeaderObject(
        ItemLinkInfoWindowComponent_o *this,
        UnityEngine_GameObject_o *parentObject,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x20
  Il2CppObject *subHeaderObject; // x20
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x19
  Il2CppObject *v8; // x19

  v4 = this;
  if ( (byte_593B83C & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoSubHeaderObject___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    this = (ItemLinkInfoWindowComponent_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B83C = 1;
  }
  if ( !parentObject )
    goto LABEL_10;
  subHeaderObject = (Il2CppObject *)v4->fields.subHeaderObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__Instantiate_object__59506996(
         subHeaderObject,
         transform,
         (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v8, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !v8 )
LABEL_10:
    sub_21FFECC(this, parentObject);
  return (ItemLinkInfoSubHeaderObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)v8,
                                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoSubHeaderObject___);
}


void ItemLinkInfoWindowComponent__EndClose(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ItemLinkInfoWindowComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void ItemLinkInfoWindowComponent__EndOpen(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void ItemLinkInfoWindowComponent__ExecSceneTransition(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt,
        ItemLinkInfoListViewItem_o *viewItem,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  int32_t state; // w8
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v11; // x1
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  __int64 v14; // x1
  int32_t TargetValueType_k__BackingField; // w8
  int32_t TargetId_k__BackingField; // w20
  TerminalPramsManager_c *v17; // x0
  __int64 v18; // x1
  int32_t ItemId; // w19
  TerminalPramsManager_c *v20; // x0
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  __int64 v23; // x20
  Il2CppObject *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w1
  __int64 v38; // x1
  System_String_o *IfExists; // x19
  int32_t v40; // [xsp+44h] [xbp-3Ch] BYREF
  System_Action_o *transitionAction; // [xsp+48h] [xbp-38h] BYREF

  if ( (byte_593B844 & 1) == 0 )
  {
    sub_21FFC50(&Method_ItemLinkInfoWindowComponent_ExecSceneTransition__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_7833/*"ITEM_LINK_INFO_LIST_LOGIN_BONUS_{0}"*/);
    sub_21FFC50(&StringLiteral_7832/*"ITEM_LINK_INFO_LIST_LOGIN_BONUS"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B844 = 1;
  }
  state = this->fields.state;
  transitionAction = 0;
  if ( state == 2 )
  {
    Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !viewItem || !itemDropEfficiencyEnt || !Instance )
      goto LABEL_40;
    if ( CommonUI__TryGetSceneTransitionAction(
           (CommonUI_o *)Instance,
           &transitionAction,
           viewItem->fields._TransitionParam_k__BackingField,
           itemDropEfficiencyEnt->fields.script,
           closeAction,
           0,
           viewItem->fields._TargetId_k__BackingField,
           0) )
    {
      v12 = Method_ItemLinkInfoWindowComponent_ExecSceneTransition__;
      if ( (*((_BYTE *)Method_ItemLinkInfoWindowComponent_ExecSceneTransition__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_21FFC68(Method_ItemLinkInfoWindowComponent_ExecSceneTransition__);
      v13 = (System_Reflection_MethodBase_o *)sub_21FFC34(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, viewItem->fields._IsLocked_k__BackingField, 0, 0);
      TargetValueType_k__BackingField = viewItem->fields._TargetValueType_k__BackingField;
      if ( (unsigned int)(TargetValueType_k__BackingField - 6) <= 3 )
      {
        TargetId_k__BackingField = viewItem->fields._TargetId_k__BackingField;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
        if ( !byte_593472C )
        {
          sub_21FFC50(&TerminalPramsManager_TypeInfo);
          byte_593472C = 1;
        }
        v17 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
          v17 = TerminalPramsManager_TypeInfo;
        }
        TargetValueType_k__BackingField = viewItem->fields._TargetValueType_k__BackingField;
        v17->static_fields->_ShopFocusItemId_k__BackingField = TargetId_k__BackingField;
      }
      if ( TargetValueType_k__BackingField == 4 )
      {
        ItemId = ItemLinkInfoListViewItem__get_ItemId(viewItem, 0);
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
        if ( !byte_593472C )
        {
          sub_21FFC50(&TerminalPramsManager_TypeInfo);
          byte_593472C = 1;
        }
        v20 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v18);
          v20 = TerminalPramsManager_TypeInfo;
        }
        v20->static_fields->_ShopFocusItemId_k__BackingField = ItemId;
      }
      Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        PartyOrganizationUtility__ClearTemporaryPartyInfo(Instance, 0);
        Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          PartyOrganizationUtility__ClearFollowerInfo(Instance, 0);
          ActionExtensions__Call(transitionAction, 0);
          return;
        }
      }
LABEL_40:
      sub_21FFECC(Instance, v11);
    }
    if ( ItemDropEfficiencyEntity__IsLoginBonus(itemDropEfficiencyEnt, 0) )
    {
      v21 = Method_ItemLinkInfoWindowComponent_ExecSceneTransition__;
      if ( (*((_BYTE *)Method_ItemLinkInfoWindowComponent_ExecSceneTransition__ + 83) & 2) != 0 )
        v21 = (_QWORD *)sub_21FFC68(Method_ItemLinkInfoWindowComponent_ExecSceneTransition__);
      v22 = (System_Reflection_MethodBase_o *)sub_21FFC34(v21, v21[4]);
      OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0);
      v23 = sub_21FFD10(string___TypeInfo, 2);
      v40 = ItemLinkInfoListViewItem__get_ItemId(viewItem, 0);
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v40);
      Instance = (PartyOrganizationUtility_o *)System_String__Format((System_String_o *)StringLiteral_7833/*"ITEM_LINK_INFO_LIST_LOGIN_BONUS_{0}"*/, v24, 0);
      if ( !v23 )
        goto LABEL_40;
      if ( !*(_DWORD *)(v23 + 24)
        || (*(_QWORD *)(v23 + 32) = Instance,
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 32), (int32_t)Instance, v25, v26, v27, v28, v29, v30),
            (*(_DWORD *)(v23 + 24) & 0xFFFFFFFE) == 0) )
      {
        sub_21FFED4(Instance);
      }
      v37 = StringLiteral_7832/*"ITEM_LINK_INFO_LIST_LOGIN_BONUS"*/;
      *(_QWORD *)(v23 + 40) = StringLiteral_7832/*"ITEM_LINK_INFO_LIST_LOGIN_BONUS"*/;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 40), v37, v31, v32, v33, v34, v35, v36);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
      IfExists = LocalizationManager__GetIfExists((System_String_array *)v23, 0);
      Instance = (PartyOrganizationUtility_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_40;
      CommonUI__OpenNotificationDialog(
        (CommonUI_o *)Instance,
        (System_String_o *)StringLiteral_1/*""*/,
        IfExists,
        0,
        -1,
        0,
        0,
        0,
        1,
        29,
        0,
        0,
        0,
        0.0,
        0,
        0);
    }
  }
}


System_String_o *ItemLinkInfoWindowComponent__GetClosedMessage(
        ItemLinkInfoWindowComponent_o *this,
        ClosedMessageMaster_o *closedMessageMst,
        ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_array *TransitionParams; // x20
  System_String_o **m_Items; // x8
  System_String_o *v11; // x20
  Il2CppObject *v12; // [xsp+0h] [xbp-40h] BYREF
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_593B83B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Enum_TryParse_SceneList_Type___);
    this = (ItemLinkInfoWindowComponent_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B83B = 1;
  }
  entity = 0;
  result = 0;
  v12 = 0;
  if ( !itemDropEfficiencyEnt || !closedMessageMst )
    goto LABEL_26;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)closedMessageMst,
          &entity,
          itemDropEfficiencyEnt->fields.closedMessageId,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__) )
    return **(System_String_o ***)(qword_594C0B8 + 184);
  TransitionParams = ItemDropEfficiencyEntity__GetTransitionParams(itemDropEfficiencyEnt, 0);
  this = (ItemLinkInfoWindowComponent_o *)BasicHelper__IsNullOrEmpty(
                                            (System_Collections_ICollection_o *)TransitionParams,
                                            0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    m_Items = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    if ( !TransitionParams )
      goto LABEL_26;
    if ( !LODWORD(TransitionParams->max_length) )
      sub_21FFED4(this);
    m_Items = TransitionParams->m_Items;
  }
  v11 = *m_Items;
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, closedMessageMst);
  this = (ItemLinkInfoWindowComponent_o *)System_Enum__TryParse_Int32Enum__58909048(
                                            v11,
                                            1,
                                            &result,
                                            (const MethodInfo_382E178 *)Method_System_Enum_TryParse_SceneList_Type___);
  if ( ((unsigned __int8)this & 1) != 0 && result == 72 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, closedMessageMst);
    this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !this )
      goto LABEL_26;
    this = (ItemLinkInfoWindowComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              &v12,
                                              eventId,
                                              (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( entity && v12 )
        return System_String__Format((System_String_o *)entity[1].monitor, (Il2CppObject *)v12[2].monitor, 0);
LABEL_26:
      sub_21FFECC(this, closedMessageMst);
    }
  }
  if ( !entity )
    goto LABEL_26;
  return (System_String_o *)entity[1].monitor;
}


int32_t ItemLinkInfoWindowComponent__GetExRoomTargetId(
        ItemLinkInfoWindowComponent_o *this,
        System_String_array *transitionParams,
        int32_t targetIdIndex,
        const MethodInfo *method)
{
  int32_t max_length; // w8
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0;
  if ( !transitionParams )
    sub_21FFECC(this, 0);
  max_length = transitionParams->max_length;
  if ( max_length <= targetIdIndex )
    return 0;
  if ( max_length <= (unsigned int)targetIdIndex )
    sub_21FFED4(this);
  System_Int32__TryParse(transitionParams->m_Items[targetIdIndex], &result, 0);
  return result;
}


int32_t ItemLinkInfoWindowComponent__GetTargetId(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *ent,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x21
  const MethodInfo *v5; // x4
  ItemLinkInfoWindowComponent_o *v6; // x20
  System_String_o *basePanel; // x22
  __int64 v8; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int v10; // w9
  bool v11; // w0
  int32_t v12; // w8
  int32_t v14; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v15[2]; // [xsp+10h] [xbp-40h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-38h] BYREF
  int32_t targetId[2]; // [xsp+28h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_593B841 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Enum_TryParse_SceneList_Type___);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&StringLiteral_9304/*"MasterMission"*/);
    sub_21FFC50(&StringLiteral_9241/*"ManaPrism"*/);
    sub_21FFC50(&StringLiteral_8727/*"LeafExchange"*/);
    sub_21FFC50(&StringLiteral_6823/*"FRIEND_POINT"*/);
    sub_21FFC50(&StringLiteral_16152/*"War"*/);
    sub_21FFC50(&StringLiteral_11258/*"PurePrismExchange"*/);
    sub_21FFC50(&StringLiteral_11653/*"RarePrism"*/);
    this = (ItemLinkInfoWindowComponent_o *)sub_21FFC50(&StringLiteral_7423/*"Grand"*/);
    byte_593B841 = 1;
  }
  *(_QWORD *)targetId = 0;
  *(_QWORD *)v15 = 0;
  *(_QWORD *)result = 0;
  v14 = 0;
  if ( !ent )
    goto LABEL_59;
  this = (ItemLinkInfoWindowComponent_o *)ent->fields.transitionParam;
  if ( !this )
    goto LABEL_59;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0);
  if ( !this )
    goto LABEL_59;
  v6 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_60;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( ItemLinkInfoWindowComponent__TryGetExRoomTransitionParam(
         v4,
         (System_String_array *)this,
         &targetId[1],
         targetId,
         v5) )
  {
    if ( targetId[1] != 3 )
    {
      LODWORD(this) = targetId[0];
      return (int)this;
    }
    goto LABEL_9;
  }
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, v8);
  this = (ItemLinkInfoWindowComponent_o *)System_Enum__TryParse_Int32Enum__58909048(
                                            basePanel,
                                            1,
                                            &result[1],
                                            (const MethodInfo_382E178 *)Method_System_Enum_TryParse_SceneList_Type___);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_46;
  if ( result[1] <= 22 )
  {
    if ( result[1] != 20 )
    {
      if ( result[1] != 22 || SLODWORD(v6->fields.m_CancellationTokenSource) < 2 )
        goto LABEL_46;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                                (System_String_o *)v6->fields.basePanelList,
                                                (System_String_o *)StringLiteral_9241/*"ManaPrism"*/,
                                                1,
                                                0);
      if ( (_DWORD)this )
      {
        if ( ((__int64)v6->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
          goto LABEL_60;
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                                  (System_String_o *)v6->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_11258/*"PurePrismExchange"*/,
                                                  1,
                                                  0);
        if ( (_DWORD)this )
        {
          if ( ((__int64)v6->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
            goto LABEL_60;
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                                    (System_String_o *)v6->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_11653/*"RarePrism"*/,
                                                    1,
                                                    0);
          if ( (_DWORD)this )
          {
            if ( ((__int64)v6->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
              goto LABEL_60;
            if ( System_String__Compare_75470196(
                   (System_String_o *)v6->fields.basePanelList,
                   (System_String_o *)StringLiteral_8727/*"LeafExchange"*/,
                   1,
                   0) )
            {
              goto LABEL_46;
            }
          }
        }
      }
LABEL_9:
      LODWORD(this) = ent->fields.itemId;
      return (int)this;
    }
    if ( SLODWORD(v6->fields.m_CancellationTokenSource) < 2 )
      goto LABEL_46;
    this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                              (System_String_o *)v6->fields.basePanelList,
                                              (System_String_o *)StringLiteral_6823/*"FRIEND_POINT"*/,
                                              1,
                                              0);
    if ( !(_DWORD)this )
      return (int)this;
    if ( ((__int64)v6->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
LABEL_60:
      sub_21FFED4(this);
    v11 = System_Int32__TryParse((System_String_o *)v6->fields.basePanelList, &v14, 0);
    v12 = v14;
  }
  else if ( result[1] == 72 )
  {
    if ( SLODWORD(v6->fields.m_CancellationTokenSource) < 2 )
      goto LABEL_46;
    v11 = System_Int32__TryParse((System_String_o *)v6->fields.basePanelList, result, 0);
    v12 = result[0];
  }
  else
  {
    if ( result[1] != 34 )
      goto LABEL_46;
    m_CancellationTokenSource = v6->fields.m_CancellationTokenSource;
    if ( (int)m_CancellationTokenSource < 2 )
    {
      v10 = (int)v6->fields.m_CancellationTokenSource;
      goto LABEL_39;
    }
    this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                              (System_String_o *)v6->fields.basePanelList,
                                              (System_String_o *)StringLiteral_7423/*"Grand"*/,
                                              1,
                                              0);
    m_CancellationTokenSource = v6->fields.m_CancellationTokenSource;
    if ( !(_DWORD)this )
    {
      if ( (int)m_CancellationTokenSource >= 3 )
      {
        System_Int32__TryParse((System_String_o *)v6->fields.baseWindow, &v15[1], 0);
        LODWORD(this) = v15[1];
        return (int)this;
      }
      this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( this )
      {
        this = (ItemLinkInfoWindowComponent_o *)QuestTree__GetLatestGrandWarInfo((QuestTree_o *)this, 0);
        if ( this )
          goto LABEL_51;
      }
      goto LABEL_59;
    }
    if ( (int)m_CancellationTokenSource < 3 )
    {
      v10 = (int)v6->fields.m_CancellationTokenSource;
LABEL_39:
      if ( v10 != 2 )
        goto LABEL_46;
      if ( (unsigned int)m_CancellationTokenSource > 1 )
      {
        if ( !System_String__Compare_75470196(
                (System_String_o *)v6->fields.basePanelList,
                (System_String_o *)StringLiteral_16152/*"War"*/,
                1,
                0)
          && ItemDropEfficiencyEntity__IsMainScenario(ent, 0) )
        {
          this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( this )
          {
            this = (ItemLinkInfoWindowComponent_o *)QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0);
            if ( !this )
              return (int)this;
LABEL_51:
            LODWORD(this) = HIDWORD(this->fields.m_CachedPtr);
            return (int)this;
          }
LABEL_59:
          sub_21FFECC(this, ent);
        }
LABEL_46:
        LODWORD(this) = 0;
        return (int)this;
      }
      goto LABEL_60;
    }
    this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                              (System_String_o *)v6->fields.basePanelList,
                                              (System_String_o *)StringLiteral_9304/*"MasterMission"*/,
                                              1,
                                              0);
    if ( !(_DWORD)this )
      return (int)this;
    if ( LODWORD(v6->fields.m_CancellationTokenSource) <= 2 )
      goto LABEL_60;
    v11 = System_Int32__TryParse((System_String_o *)v6->fields.baseWindow, v15, 0);
    v12 = v15[0];
  }
  if ( v11 )
    LODWORD(this) = v12;
  else
    LODWORD(this) = 0;
  return (int)this;
}


int32_t ItemLinkInfoWindowComponent__GetTargetValueType(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *ent,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x21
  const MethodInfo *v5; // x4
  ItemLinkInfoWindowComponent_o *v6; // x19
  System_String_o *basePanel; // x22
  __int64 v8; // x1
  int32_t v9; // w20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int32_t v12; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t targetId[2]; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_593B842 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Enum_TryParse_SceneList_Type___);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&StringLiteral_13519/*"Spot"*/);
    sub_21FFC50(&StringLiteral_9304/*"MasterMission"*/);
    sub_21FFC50(&StringLiteral_9241/*"ManaPrism"*/);
    sub_21FFC50(&StringLiteral_8727/*"LeafExchange"*/);
    sub_21FFC50(&StringLiteral_16152/*"War"*/);
    sub_21FFC50(&StringLiteral_11258/*"PurePrismExchange"*/);
    sub_21FFC50(&StringLiteral_11653/*"RarePrism"*/);
    this = (ItemLinkInfoWindowComponent_o *)sub_21FFC50(&StringLiteral_11379/*"Quest"*/);
    byte_593B842 = 1;
  }
  *(_QWORD *)targetId = 0;
  *(_QWORD *)result = 0;
  v12 = 0;
  if ( !ent )
    goto LABEL_54;
  this = (ItemLinkInfoWindowComponent_o *)ent->fields.transitionParam;
  if ( !this )
    goto LABEL_54;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0);
  if ( !this )
    goto LABEL_54;
  v6 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
LABEL_55:
    sub_21FFED4(this);
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( ItemLinkInfoWindowComponent__TryGetExRoomTransitionParam(
         v4,
         (System_String_array *)this,
         &targetId[1],
         targetId,
         v5)
    && targetId[0] >= 1 )
  {
    return targetId[1] == 2;
  }
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, v8);
  this = (ItemLinkInfoWindowComponent_o *)System_Enum__TryParse_Int32Enum__58909048(
                                            basePanel,
                                            1,
                                            &result[1],
                                            (const MethodInfo_382E178 *)Method_System_Enum_TryParse_SceneList_Type___);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( result[1] == 22 )
  {
    if ( SLODWORD(v6->fields.m_CancellationTokenSource) >= 2 )
    {
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                                (System_String_o *)v6->fields.basePanelList,
                                                (System_String_o *)StringLiteral_9241/*"ManaPrism"*/,
                                                1,
                                                0);
      if ( !(_DWORD)this )
        return 6;
      if ( ((__int64)v6->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        goto LABEL_55;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                                (System_String_o *)v6->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11258/*"PurePrismExchange"*/,
                                                1,
                                                0);
      if ( !(_DWORD)this )
        return 7;
      if ( ((__int64)v6->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        goto LABEL_55;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                                (System_String_o *)v6->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11653/*"RarePrism"*/,
                                                1,
                                                0);
      if ( !(_DWORD)this )
        return 8;
      if ( ((__int64)v6->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        goto LABEL_55;
      if ( !System_String__Compare_75470196(
              (System_String_o *)v6->fields.basePanelList,
              (System_String_o *)StringLiteral_8727/*"LeafExchange"*/,
              1,
              0) )
        return 9;
    }
    return 0;
  }
  if ( result[1] != 72 )
  {
    if ( result[1] == 34 )
    {
      m_CancellationTokenSource = v6->fields.m_CancellationTokenSource;
      if ( (int)m_CancellationTokenSource >= 3 )
      {
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                                  (System_String_o *)v6->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_9304/*"MasterMission"*/,
                                                  1,
                                                  0);
        if ( !(_DWORD)this )
          return 5;
        if ( LODWORD(v6->fields.m_CancellationTokenSource) <= 2 )
          goto LABEL_55;
        this = (ItemLinkInfoWindowComponent_o *)System_Int32__TryParse(
                                                  (System_String_o *)v6->fields.baseWindow,
                                                  result,
                                                  0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( ((__int64)v6->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
            goto LABEL_55;
          v9 = 1;
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                                    (System_String_o *)v6->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_11379/*"Quest"*/,
                                                    1,
                                                    0);
          if ( !(_DWORD)this )
            return v9;
          if ( ((__int64)v6->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
            goto LABEL_55;
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                                    (System_String_o *)v6->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_13519/*"Spot"*/,
                                                    1,
                                                    0);
          if ( !(_DWORD)this )
            return 2;
          if ( ((__int64)v6->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
            goto LABEL_55;
          if ( !System_String__Compare_75470196(
                  (System_String_o *)v6->fields.basePanelList,
                  (System_String_o *)StringLiteral_16152/*"War"*/,
                  1,
                  0) )
            return 3;
        }
      }
      else if ( (unsigned int)v6->fields.m_CancellationTokenSource == 2 )
      {
        if ( (unsigned int)m_CancellationTokenSource > 1 )
        {
          if ( System_String__Compare_75470196(
                 (System_String_o *)v6->fields.basePanelList,
                 (System_String_o *)StringLiteral_16152/*"War"*/,
                 1,
                 0)
            || !ItemDropEfficiencyEntity__IsMainScenario(ent, 0) )
          {
            return 0;
          }
          this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( this )
          {
            if ( !QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0) )
              return 0;
            return 3;
          }
LABEL_54:
          sub_21FFECC(this, ent);
        }
        goto LABEL_55;
      }
    }
    return 0;
  }
  if ( SLODWORD(v6->fields.m_CancellationTokenSource) < 2 )
    return 0;
  if ( System_Int32__TryParse((System_String_o *)v6->fields.basePanelList, &v12, 0) )
    return 4;
  else
    return 0;
}


System_String_o *ItemLinkInfoWindowComponent__GetTitleText(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt,
        ItemLinkInfoListViewItem_o *viewItem,
        EventEntity_o *eventEnt,
        const MethodInfo *method)
{
  int32_t targetType; // w8
  Il2CppObject **p_shortName; // x8

  if ( (byte_593B840 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    this = (ItemLinkInfoWindowComponent_o *)sub_21FFC50(&StringLiteral_7831/*"ITEM_LINK_INFO_LIST_HIDDEN_TITLE"*/);
    byte_593B840 = 1;
  }
  if ( !itemDropEfficiencyEnt )
LABEL_18:
    sub_21FFECC(this, itemDropEfficiencyEnt);
  targetType = itemDropEfficiencyEnt->fields.targetType;
  if ( targetType == 1 )
  {
    if ( eventEnt )
    {
      p_shortName = (Il2CppObject **)&eventEnt->fields.shortName;
      if ( !viewItem )
        goto LABEL_18;
    }
    else
    {
      p_shortName = *(Il2CppObject ***)(qword_594C0B8 + 184);
      if ( !viewItem )
        goto LABEL_18;
    }
    if ( !viewItem->fields._IsLocked_k__BackingField )
      return System_String__Format(itemDropEfficiencyEnt->fields.title, *p_shortName, 0);
  }
  else
  {
    if ( (unsigned int)(targetType - 5) < 0xFFFFFFFD )
      return itemDropEfficiencyEnt->fields.title;
    if ( !viewItem )
      goto LABEL_18;
    if ( !viewItem->fields._IsLocked_k__BackingField )
      return itemDropEfficiencyEnt->fields.title;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemDropEfficiencyEnt);
  return LocalizationManager__Get((System_String_o *)StringLiteral_7831/*"ITEM_LINK_INFO_LIST_HIDDEN_TITLE"*/, 0);
}


bool ItemLinkInfoWindowComponent__HasExRoomShopItem(
        ItemLinkInfoWindowComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_Collections_ICollection_o *TargetShopEntities; // x19
  System_Func_object__bool__o *v9; // x21

  if ( (byte_593B836 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_ShopEntity___);
    sub_21FFC50(&System_Func_ShopEntity__bool__TypeInfo);
    sub_21FFC50(&Method_ItemLinkInfoWindowComponent___c__DisplayClass28_0__HasExRoomShopItem_b__0__);
    sub_21FFC50(&ItemLinkInfoWindowComponent___c__DisplayClass28_0_TypeInfo);
    byte_593B836 = 1;
  }
  v4 = sub_21FFEBC(ItemLinkInfoWindowComponent___c__DisplayClass28_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    sub_21FFECC(v5, v6);
  *(_DWORD *)(v4 + 16) = itemId;
  if ( itemId < 1 )
    return 1;
  TargetShopEntities = (System_Collections_ICollection_o *)ExRoomShopComponent__GetTargetShopEntities(0);
  if ( BasicHelper__IsNullOrEmpty(TargetShopEntities, 0) )
    return 0;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ShopEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v4,
    Method_ItemLinkInfoWindowComponent___c__DisplayClass28_0__HasExRoomShopItem_b__0__,
    0);
  return BasicHelper__Any_object_(
           (System_Collections_Generic_List_T__o *)TargetShopEntities,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_ShopEntity___);
}


void ItemLinkInfoWindowComponent__Init(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleItemNameLabel; // x0

  if ( (byte_593B82D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B82D = 1;
  }
  titleItemNameLabel = this->fields.titleItemNameLabel;
  if ( !titleItemNameLabel )
    goto LABEL_9;
  UILabel__set_text(titleItemNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleItemNameLabel = this->fields.titleWindowNameLabel;
  if ( !titleItemNameLabel
    || (UILabel__set_text(titleItemNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleItemNameLabel = (UILabel_o *)this->fields.itemDetailInfo) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleItemNameLabel, 1, 0),
        (titleItemNameLabel = (UILabel_o *)this->fields.stoneDetailInfo) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleItemNameLabel, 1, 0),
        (titleItemNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_9:
    sub_21FFECC(titleItemNameLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleItemNameLabel, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


bool ItemLinkInfoWindowComponent__IsBoardActive(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *entity,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x21
  System_String_array *v5; // x20
  const MethodInfo *v6; // x4
  int32_t v7; // w20
  bool v8; // w21
  System_String_o *v9; // x21
  __int64 v10; // x1
  BalanceConfig_c *v11; // x0
  int32_t ClassBoardReleaseQuestId; // w19
  il2cpp_array_size_t max_length; // x8
  int32_t v16; // w0
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_WarInfo_o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x19
  __int64 v22; // x1
  System_Object_array *ListValidData; // x20
  System_Func_object__bool__o *v24; // x21
  __int64 v25; // x1
  int32_t v26; // w1
  MapControl_SpotInfo_o *SpotInfo; // x0
  Il2CppObject *v28; // [xsp+0h] [xbp-40h] BYREF
  int32_t key[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t result[2]; // [xsp+10h] [xbp-30h] BYREF
  int32_t targetId[2]; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_593B843 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_Any_GachaEntity___);
    sub_21FFC50(&CoinRoomUtility_TypeInfo);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_GachaMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ShopMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Enum_TryParse_SceneList_Type___);
    sub_21FFC50(&System_Func_GachaEntity__bool__TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_21FFC50(&Method_ItemLinkInfoWindowComponent___c__DisplayClass41_0__IsBoardActive_b__0__);
    sub_21FFC50(&ItemLinkInfoWindowComponent___c__DisplayClass41_0_TypeInfo);
    sub_21FFC50(&StringLiteral_13519/*"Spot"*/);
    sub_21FFC50(&StringLiteral_9304/*"MasterMission"*/);
    sub_21FFC50(&StringLiteral_6823/*"FRIEND_POINT"*/);
    sub_21FFC50(&StringLiteral_16152/*"War"*/);
    sub_21FFC50(&StringLiteral_4693/*"CoinRoom"*/);
    sub_21FFC50(&StringLiteral_7423/*"Grand"*/);
    this = (ItemLinkInfoWindowComponent_o *)sub_21FFC50(&StringLiteral_11379/*"Quest"*/);
    byte_593B843 = 1;
  }
  *(_QWORD *)result = 0;
  *(_QWORD *)targetId = 0;
  v28 = 0;
  *(_QWORD *)key = 0;
  if ( !entity )
    goto LABEL_95;
  this = (ItemLinkInfoWindowComponent_o *)entity->fields.transitionParam;
  if ( !this )
    goto LABEL_95;
  v5 = System_String__Split((System_String_o *)this, 0x2Fu, 0, 0);
  this = (ItemLinkInfoWindowComponent_o *)ItemLinkInfoWindowComponent__TryGetExRoomTransitionParam(
                                            v4,
                                            v5,
                                            &targetId[1],
                                            targetId,
                                            v6);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( targetId[1] != 2 )
      return 1;
    v7 = targetId[0];
    if ( targetId[0] < 1 || entity->fields.targetType == 21 )
      return 1;
    this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    if ( this )
      return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)this, v7, 0, 0);
LABEL_95:
    sub_21FFECC(this, entity);
  }
  if ( !v5 )
    goto LABEL_95;
  if ( !LODWORD(v5->max_length) )
    goto LABEL_96;
  v9 = v5->m_Items[0];
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, entity);
  if ( !System_Enum__TryParse_Int32Enum__58909048(
          v9,
          1,
          &result[1],
          (const MethodInfo_382E178 *)Method_System_Enum_TryParse_SceneList_Type___) )
    return 0;
  if ( result[1] > 34 )
  {
    if ( result[1] != 72 )
    {
      if ( result[1] == 91 )
      {
        v11 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
          v11 = BalanceConfig_TypeInfo;
        }
        ClassBoardReleaseQuestId = v11->static_fields->ClassBoardReleaseQuestId;
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
        return CondType__IsQuestClear_47254560(ClassBoardReleaseQuestId, -1, 0, 0);
      }
      return ItemDropEfficiencyEntity__IsLoginBonus(entity, 0);
    }
    if ( SLODWORD(v5->max_length) >= 2 && System_Int32__TryParse(v5->m_Items[1], key, 0) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
      this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
      if ( !this )
        goto LABEL_95;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             &v28,
             key[0],
             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
        this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ShopMaster___);
        if ( !this )
          goto LABEL_95;
        return ShopMaster__IsEventShopOpen((ShopMaster_o *)this, key[0], 0);
      }
    }
    return 0;
  }
  v8 = 1;
  if ( result[1] <= 29 )
  {
    if ( result[1] != 20 )
    {
      if ( result[1] == 22 )
      {
        if ( SLODWORD(v5->max_length) < 2
          || System_String__Compare_75470196(v5->m_Items[1], (System_String_o *)StringLiteral_4693/*"CoinRoom"*/, 1, 0) )
        {
          return v8;
        }
        if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v25);
        return CoinRoomUtility__IsTargetQuestClear(0);
      }
      if ( result[1] == 23 )
        return v8;
      return ItemDropEfficiencyEntity__IsLoginBonus(entity, 0);
    }
    if ( SLODWORD(v5->max_length) < 2 )
      return v8;
    if ( System_String__op_Equality(v5->m_Items[1], (System_String_o *)StringLiteral_6823/*"FRIEND_POINT"*/, 0)
      || SLODWORD(v5->max_length) < 2 )
    {
      return 1;
    }
    v21 = sub_21FFEBC(ItemLinkInfoWindowComponent___c__DisplayClass41_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v21, 0);
    if ( (v5->max_length & 0xFFFFFFFE) != 0 )
    {
      if ( !v21 )
        goto LABEL_95;
      System_Int32__TryParse(v5->m_Items[1], (int32_t *)(v21 + 16), 0);
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
      this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaMaster___);
      if ( !this )
        goto LABEL_95;
      ListValidData = (System_Object_array *)GachaMaster__getListValidData((GachaMaster_o *)this, 0);
      v24 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_GachaEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v24,
        (Il2CppObject *)v21,
        Method_ItemLinkInfoWindowComponent___c__DisplayClass41_0__IsBoardActive_b__0__,
        0);
      return BasicHelper__Any_object__58575580(
               ListValidData,
               (System_Func_T__bool__o *)v24,
               (const MethodInfo_37DCADC *)Method_BasicHelper_Any_GachaEntity___);
    }
LABEL_96:
    sub_21FFED4(this);
  }
  if ( result[1] == 30 || result[1] == 32 )
    return v8;
  if ( result[1] != 34 )
    return ItemDropEfficiencyEntity__IsLoginBonus(entity, 0);
  max_length = v5->max_length;
  if ( (int)max_length >= 2 )
  {
    v16 = System_String__Compare_75470196(v5->m_Items[1], (System_String_o *)StringLiteral_7423/*"Grand"*/, 1, 0);
    max_length = v5->max_length;
    if ( !v16 )
    {
      result[0] = 0;
      if ( (int)max_length >= 3 )
      {
        System_Int32__TryParse(v5->m_Items[2], result, 0);
      }
      else
      {
        this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !this )
          goto LABEL_95;
        this = (ItemLinkInfoWindowComponent_o *)QuestTree__GetLatestGrandWarInfo((QuestTree_o *)this, 0);
        if ( !this )
          goto LABEL_95;
        result[0] = HIDWORD(this->fields.m_CachedPtr);
      }
      this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !this )
        goto LABEL_95;
      v26 = result[0];
      return QuestTree__IsActiveWar((QuestTree_o *)this, v26, 0);
    }
  }
  if ( (int)max_length <= 2 )
  {
    if ( (_DWORD)max_length != 2 )
      return 1;
    v8 = 1;
    if ( System_String__Compare_75470196(v5->m_Items[1], (System_String_o *)StringLiteral_16152/*"War"*/, 1, 0) )
      return v8;
    if ( !ItemDropEfficiencyEntity__IsMainScenario(entity, 0) )
      return 1;
    this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_95;
    LatestProgressWarInfo = QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0);
    if ( LatestProgressWarInfo )
    {
      v18 = LatestProgressWarInfo;
      if ( MapControl_WarInfo__GetStatus(LatestProgressWarInfo, 0) != 3 )
        return MapControl_WarInfo__GetStatus(v18, 0) != 4;
      return 0;
    }
    return 1;
  }
  v8 = 1;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                            v5->m_Items[1],
                                            (System_String_o *)StringLiteral_9304/*"MasterMission"*/,
                                            1,
                                            0);
  if ( !(_DWORD)this )
    return v8;
  if ( LODWORD(v5->max_length) <= 2 )
    goto LABEL_96;
  this = (ItemLinkInfoWindowComponent_o *)System_Int32__TryParse(v5->m_Items[2], &key[1], 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( (v5->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_96;
    this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                              v5->m_Items[1],
                                              (System_String_o *)StringLiteral_11379/*"Quest"*/,
                                              1,
                                              0);
    if ( !(_DWORD)this )
    {
      this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !this )
        goto LABEL_95;
      return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)this, key[1], 0, 0);
    }
    if ( (v5->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_96;
    this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                              v5->m_Items[1],
                                              (System_String_o *)StringLiteral_13519/*"Spot"*/,
                                              1,
                                              0);
    if ( !(_DWORD)this )
    {
      this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !this )
        goto LABEL_95;
      SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)this, key[1], 0);
      if ( SpotInfo )
        return SpotInfo->fields.dispType == 1;
      return 0;
    }
    if ( (v5->max_length & 0xFFFFFFFE) == 0 )
      goto LABEL_96;
    v8 = 1;
    if ( System_String__Compare_75470196(v5->m_Items[1], (System_String_o *)StringLiteral_16152/*"War"*/, 1, 0) )
      return v8;
    this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !this )
      goto LABEL_95;
    v26 = key[1];
    return QuestTree__IsActiveWar((QuestTree_o *)this, v26, 0);
  }
  return 1;
}


bool ItemLinkInfoWindowComponent__IsCreateMultiEventRewardViewItem(
        ItemLinkInfoWindowComponent_o *this,
        System_String_array *transitionParams,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  int max_length; // w9
  System_String_o **m_Items; // x8
  System_String_o *v8; // x19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_593B83A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Enum_TryParse_SceneList_Type___);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B83A = 1;
  }
  result = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)transitionParams, 0);
  if ( IsNullOrEmpty )
  {
    if ( transitionParams )
    {
      max_length = transitionParams->max_length;
      m_Items = (System_String_o **)&StringLiteral_1/*""*/;
      goto LABEL_9;
    }
LABEL_15:
    sub_21FFECC(IsNullOrEmpty, v5);
  }
  if ( !transitionParams )
    goto LABEL_15;
  max_length = transitionParams->max_length;
  if ( !max_length )
    sub_21FFED4(IsNullOrEmpty);
  m_Items = transitionParams->m_Items;
LABEL_9:
  if ( max_length != 1 )
    return 0;
  v8 = *m_Items;
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, v5);
  return System_Enum__TryParse_Int32Enum__58909048(
           v8,
           1,
           &result,
           (const MethodInfo_382E178 *)Method_System_Enum_TryParse_SceneList_Type___)
      && result == 72;
}


void ItemLinkInfoWindowComponent__OnClickCancel(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
    ItemLinkInfoWindowComponent__Callback(this, 0, v2);
}


void ItemLinkInfoWindowComponent__Open(
        ItemLinkInfoWindowComponent_o *this,
        ItemEntity_o *itemEnt,
        ItemLinkInfoWindowComponent_CallbackFunc_o *callback,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_GameObject_o *listViewBg; // x23
  ItemLinkInfoWindowComponent_c *v19; // x0
  int32_t id; // w24
  System_String_o **p_name; // x8
  System_Collections_Generic_List_object__o *v22; // x22
  __int64 v23; // x23
  UnityEngine_GameObject_o *v24; // x0
  const MethodInfo *v25; // x4
  ItemLinkInfoDetailObject_o *ItemLinkInfoDetailObject; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  const MethodInfo *v43; // x3
  System_Action_o *v44; // x20

  if ( (byte_593B82E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
    sub_21FFC50(&Method_ItemLinkInfoWindowComponent_EndOpen__);
    sub_21FFC50(&ItemLinkInfoWindowComponent_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B82E = 1;
  }
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = this->fields.listViewBg;
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, isDispStoneDetail, 0);
  gameObject = this->fields.lineObject;
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, !isDispStoneDetail, 0);
  if ( isDispStoneDetail )
  {
    listViewBg = this->fields.listViewBg;
    v19 = ItemLinkInfoWindowComponent_TypeInfo;
    if ( !*(&ItemLinkInfoWindowComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent_TypeInfo, v11);
      v19 = ItemLinkInfoWindowComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(listViewBg, v19->static_fields->STONE_DETAIL_VIEW_BG_POSITION_Y, 0);
  }
  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( itemEnt )
  {
    id = itemEnt->fields.id;
    p_name = &itemEnt->fields.name;
  }
  else
  {
    id = 0;
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleItemNameLabel;
  if ( !gameObject )
    goto LABEL_25;
  UILabel__set_text((UILabel_o *)gameObject, *p_name, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleWindowNameLabel;
  if ( !gameObject )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  v22 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  v23 = sub_21FFEBC(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0);
  if ( !v23 )
    goto LABEL_25;
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  *(_DWORD *)(v23 + 16) = id;
  if ( !gameObject )
    goto LABEL_25;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  ItemLinkInfoDetailObject = ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
                               this,
                               itemEnt,
                               v24,
                               isDispStoneDetail,
                               v25);
  *(_QWORD *)(v23 + 24) = ItemLinkInfoDetailObject;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v23 + 24),
    (int32_t)ItemLinkInfoDetailObject,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( !v22 )
    goto LABEL_25;
  items = v22->fields._items;
  v40 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v22->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)v23,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v42[4] = (Il2CppClass *)v23;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v42 + 4), v23, v33, v34, v35, v36, v37, v38);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
LABEL_25:
    sub_21FFECC(gameObject, v10);
  ItemLinkInfoListViewManager__CreateList(
    (ItemLinkInfoListViewManager_o *)gameObject,
    (System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v22,
    isDispStoneDetail,
    v43);
  v44 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v44, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v44, 0, 0, 0);
}


void ItemLinkInfoWindowComponent__OpenItemTransitionList(
        ItemLinkInfoWindowComponent_o *this,
        System_Int32_array *itemIdList,
        System_Int32_array *needNumList,
        ItemLinkInfoWindowComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x3
  System_Collections_IEnumerator_o *ItemTransitionList; // x0
  System_Action_o *v19; // x20

  if ( (byte_593B830 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ItemLinkInfoWindowComponent_EndOpen__);
    byte_593B830 = 1;
  }
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0), (gameObject = this->fields.listViewBg) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        this->fields.callbackFunc = callback,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
          (int32_t)callback,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.titleItemNameLabel) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
    sub_21FFECC(gameObject, v10);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  ItemTransitionList = ItemLinkInfoWindowComponent__CoCreateItemTransitionList(this, itemIdList, needNumList, v17);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, ItemTransitionList, 0);
  v19 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0, 0);
}


void ItemLinkInfoWindowComponent__OpenUserItemInfo(
        ItemLinkInfoWindowComponent_o *this,
        UserItemData_o *itemData,
        ItemLinkInfoWindowComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v6; // x19
  int32_t itemId; // w21
  System_Collections_Generic_List_ItemDropEfficiencyEntity__o *EnabledListByItemId; // x22
  const MethodInfo *v9; // x4
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o **v16; // x8
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x24
  ItemLinkInfoWindowComponent___c_c *v20; // x0
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x8
  System_Func_object__long__o *_9__20_0; // x23
  Il2CppObject *v23; // x25
  struct ItemLinkInfoWindowComponent___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  __int64 v32; // x23
  const MethodInfo *v33; // x6
  Il2CppObject *v34; // x4
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *ItemLinkInfoListViewItemList; // x22
  const MethodInfo *v36; // x2
  struct ItemLinkInfoListViewManager_o *listViewManager; // x8
  ItemLinkInfoSubHeaderObject_o *SubHeaderObject; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  ItemLinkInfoWindowComponent_o *v45; // x0
  const MethodInfo *v46; // x2
  ItemLinkInfoWindowComponent_o *v47; // x0
  const MethodInfo *v48; // x2
  Il2CppObject *v49; // x21
  const MethodInfo *v50; // x4
  bool v51; // w8
  UnityEngine_GameObject_o *maskSprite; // x2
  ItemLinkInfoDetailObject_o *ItemLinkInfoDetailObject; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  int32_t v60; // w1
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  const MethodInfo *v77; // x3
  System_Action_o *v78; // x20
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewList; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_593B82F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_ItemDropEfficiencyEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_EventEntity__long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_EventEntity___);
    sub_21FFC50(&System_Func_EventEntity__long__TypeInfo);
    sub_21FFC50(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
    sub_21FFC50(&Method_ItemLinkInfoWindowComponent_EndOpen__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
    sub_21FFC50(&Method_ItemLinkInfoWindowComponent___c__OpenUserItemInfo_b__20_0__);
    sub_21FFC50(&ItemLinkInfoWindowComponent___c_TypeInfo);
    this = (ItemLinkInfoWindowComponent_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B82F = 1;
  }
  entity = 0;
  viewList = 0;
  if ( !itemData )
    goto LABEL_48;
  itemId = itemData->fields.itemId;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, itemData);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
    goto LABEL_48;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    itemId,
    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
  if ( !this )
    goto LABEL_48;
  EnabledListByItemId = ItemDropEfficiencyMaster__GetEnabledListByItemId((ItemDropEfficiencyMaster_o *)this, itemId, 0);
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EnabledListByItemId,
          (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_ItemDropEfficiencyEntity___) )
  {
    ItemLinkInfoWindowComponent__Open(v6, (ItemEntity_o *)entity, callback, 0, v9);
    return;
  }
  v6->fields.state = 1;
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  if ( !this )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.listViewBg;
  if ( !this )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.lineObject;
  if ( !this )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v6->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.callbackFunc,
    (int32_t)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.titleItemNameLabel;
  if ( !this )
    goto LABEL_48;
  v16 = entity ? (System_String_o **)&entity[1].monitor : (System_String_o **)&StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)this, *v16, 0);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.titleWindowNameLabel;
  if ( !this )
    goto LABEL_48;
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v17 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v18);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_48;
  this = (ItemLinkInfoWindowComponent_o *)EventMaster__GetEnableEntityList((EventMaster_o *)this, 0, 1, 0, 0);
  if ( !this )
    goto LABEL_48;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)this;
  if ( this->fields.m_CancellationTokenSource )
  {
    v20 = ItemLinkInfoWindowComponent___c_TypeInfo;
    if ( !*(&ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo, itemData);
      v20 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    static_fields = v20->static_fields;
    _9__20_0 = (System_Func_object__long__o *)static_fields->__9__20_0;
    if ( !_9__20_0 )
    {
      if ( !*(&v20->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v20, itemData);
        static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)static_fields->__9;
      _9__20_0 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_EventEntity__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__20_0,
        v23,
        Method_ItemLinkInfoWindowComponent___c__OpenUserItemInfo_b__20_0__,
        0);
      v24 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
      v24->__9__20_0 = (struct System_Func_EventEntity__long__o *)_9__20_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v24->__9__20_0, (int32_t)_9__20_0, v25, v26, v27, v28, v29, v30);
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__long_(
                                                                 v19,
                                                                 (System_Func_TSource__TKey__o *)_9__20_0,
                                                                 (const MethodInfo_3855748 *)Method_System_Linq_Enumerable_OrderBy_EventEntity__long___);
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v31,
                                                                 (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_EventEntity___);
  }
  v32 = sub_21FFEBC(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0);
  if ( !v32 )
    goto LABEL_48;
  v34 = entity;
  *(_DWORD *)(v32 + 16) = itemId;
  ItemLinkInfoListViewItemList = ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItemList(
                                   v6,
                                   EnabledListByItemId,
                                   0,
                                   0,
                                   (ItemEntity_o *)v34,
                                   (EventEntity_array *)v19,
                                   v33);
  viewList = ItemLinkInfoListViewItemList;
  this = (ItemLinkInfoWindowComponent_o *)System_Linq_Enumerable__Any_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)ItemLinkInfoListViewItemList,
                                            (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    listViewManager = v6->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_48;
    SubHeaderObject = ItemLinkInfoWindowComponent__CreateSubHeaderObject(v6, listViewManager->fields.listParent, v36);
    *(_QWORD *)(v32 + 32) = SubHeaderObject;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 32), (int32_t)SubHeaderObject, v39, v40, v41, v42, v43, v44);
    ItemLinkInfoWindowComponent__SortViewItemList(v45, &viewList, v46);
    ItemLinkInfoWindowComponent__CheckRecommendBoard(v47, &viewList, v48);
    ItemLinkInfoListViewItemList = viewList;
  }
  v49 = entity;
  v51 = System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)ItemLinkInfoListViewItemList,
          (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.listViewManager;
  if ( v51 )
  {
    if ( !this )
      goto LABEL_48;
    maskSprite = (UnityEngine_GameObject_o *)this->fields.maskSprite;
  }
  else
  {
    if ( !this )
      goto LABEL_48;
    maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  }
  ItemLinkInfoDetailObject = ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
                               v6,
                               (ItemEntity_o *)v49,
                               maskSprite,
                               0,
                               v50);
  *(_QWORD *)(v32 + 24) = ItemLinkInfoDetailObject;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v32 + 24),
    (int32_t)ItemLinkInfoDetailObject,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  v60 = (int)viewList;
  *(_QWORD *)(v32 + 48) = viewList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 48), v60, v61, v62, v63, v64, v65, v66);
  if ( !v17 )
    goto LABEL_48;
  items = v17->fields._items;
  v74 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_48;
  size = v17->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v32,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
  }
  else
  {
    v76 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v76[4] = (Il2CppClass *)v32;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v76 + 4), v32, v67, v68, v69, v70, v71, v72);
  }
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.listViewManager;
  if ( !this )
LABEL_48:
    sub_21FFECC(this, itemData);
  ItemLinkInfoListViewManager__CreateList(
    (ItemLinkInfoListViewManager_o *)this,
    (System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v17,
    0,
    v77);
  v78 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v78, (Il2CppObject *)v6, Method_ItemLinkInfoWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)v6, v78, 0, 0, 0);
}


bool ItemLinkInfoWindowComponent__ShouldCreateViewExRoomItem(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *entity,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x20
  System_String_array *TransitionParams; // x0
  const MethodInfo *v6; // x4
  _BOOL8 IsFeatureOpen; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v11; // w20
  int32_t targetId[2]; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_593B833 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    this = (ItemLinkInfoWindowComponent_o *)sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_593B833 = 1;
  }
  *(_QWORD *)targetId = 0;
  if ( !entity )
    goto LABEL_21;
  TransitionParams = ItemDropEfficiencyEntity__GetTransitionParams(entity, 0);
  if ( ItemLinkInfoWindowComponent__TryGetExRoomTransitionParam(v4, TransitionParams, &targetId[1], targetId, v6) )
  {
    IsFeatureOpen = ExRoomRootComponent__IsFeatureOpen(1, 0);
    if ( !IsFeatureOpen )
      return 0;
    if ( targetId[1] == 3 )
      return ItemLinkInfoWindowComponent__HasExRoomShopItem(
               (ItemLinkInfoWindowComponent_o *)IsFeatureOpen,
               entity->fields.itemId,
               v9);
    if ( targetId[1] != 2 )
      return targetId[1] == 1;
    v11 = targetId[0];
    if ( targetId[0] >= 1 )
    {
      if ( entity->fields.targetType == 21 )
      {
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8);
        this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMissionMaster___);
        if ( this )
          return EventMissionMaster__IsEventPeriod((EventMissionMaster_o *)this, v11, 0);
      }
      else
      {
        this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
        if ( this )
          return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)this, v11, 0, 0);
      }
LABEL_21:
      sub_21FFECC(this, entity);
    }
  }
  return 1;
}


void ItemLinkInfoWindowComponent__SortViewItemList(
        ItemLinkInfoWindowComponent_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewItem__o **viewList,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent___c_c *v4; // x0
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v5; // x20
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__36_0; // x21
  Il2CppObject *v8; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v16; // x0
  __int64 v17; // x1
  ItemLinkInfoWindowComponent___c_c *v18; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x20
  struct ItemLinkInfoWindowComponent___c_StaticFields *v20; // x9
  System_Func_object__int__o *_9__36_1; // x21
  Il2CppObject *v22; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v30; // x0
  __int64 v31; // x1
  ItemLinkInfoWindowComponent___c_c *v32; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v33; // x20
  struct ItemLinkInfoWindowComponent___c_StaticFields *v34; // x9
  System_Func_object__int__o *_9__36_2; // x21
  Il2CppObject *v36; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7

  if ( (byte_593B83E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_ItemLinkInfoListViewItem__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ThenByDescending_ItemLinkInfoListViewItem__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ThenBy_ItemLinkInfoListViewItem__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_ItemLinkInfoListViewItem___);
    sub_21FFC50(&System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    sub_21FFC50(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__36_0__);
    sub_21FFC50(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__36_1__);
    sub_21FFC50(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__36_2__);
    sub_21FFC50(&ItemLinkInfoWindowComponent___c_TypeInfo);
    byte_593B83E = 1;
  }
  v4 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v5 = *viewList;
  if ( !*(&ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo, viewList);
    v4 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__36_0 = (System_Func_object__int__o *)static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, viewList);
      static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(_9__36_0, v8, Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__36_0__, 0);
    v9 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v9->__9__36_0 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__36_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__36_0, (int32_t)_9__36_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (System_Func_TSource__TKey__o *)_9__36_0,
          (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_ItemLinkInfoListViewItem__int___);
  v18 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v19 = v16;
  if ( !*(&ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo, v17);
    v18 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  v20 = v18->static_fields;
  _9__36_1 = (System_Func_object__int__o *)v20->__9__36_1;
  if ( !_9__36_1 )
  {
    if ( !*(&v18->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v18, v17);
      v20 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)v20->__9;
    _9__36_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__36_1,
      v22,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__36_1__,
      0);
    v23 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v23->__9__36_1 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__36_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->__9__36_1, (int32_t)_9__36_1, v24, v25, v26, v27, v28, v29);
  }
  v30 = System_Linq_Enumerable__ThenBy_object__int_(
          v19,
          (System_Func_TSource__TKey__o *)_9__36_1,
          (const MethodInfo_3867630 *)Method_System_Linq_Enumerable_ThenBy_ItemLinkInfoListViewItem__int___);
  v32 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v33 = v30;
  if ( !*(&ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo, v31);
    v32 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  v34 = v32->static_fields;
  _9__36_2 = (System_Func_object__int__o *)v34->__9__36_2;
  if ( !_9__36_2 )
  {
    if ( !*(&v32->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v32, v31);
      v34 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)v34->__9;
    _9__36_2 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__36_2,
      v36,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__36_2__,
      0);
    v37 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v37->__9__36_2 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__36_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v37->__9__36_2, (int32_t)_9__36_2, v38, v39, v40, v41, v42, v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                               v33,
                                                               (System_Func_TSource__TKey__o *)_9__36_2,
                                                               (const MethodInfo_3867EF4 *)Method_System_Linq_Enumerable_ThenByDescending_ItemLinkInfoListViewItem__int___);
  v45 = (System_Collections_Generic_List_ItemLinkInfoListViewItem__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v44,
                                                                         (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_ItemLinkInfoListViewItem___);
  *viewList = v45;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)viewList, (int32_t)v45, v46, v47, v48, v49, v50, v51);
}


bool ItemLinkInfoWindowComponent__TryGetExRoomTransitionParam(
        ItemLinkInfoWindowComponent_o *this,
        System_String_array *transitionParams,
        int32_t *exRoomType,
        int32_t *targetId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  bool IsNullOrEmpty; // w8
  __int64 v10; // x0
  int32_t v11; // w23
  ItemLinkInfoWindowComponent_o *v12; // x0
  const MethodInfo *v13; // x4
  int32_t v14; // w22
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x3
  int32_t v17; // w8

  if ( (byte_593B834 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_6536/*"ExRoom"*/);
    sub_21FFC50(&StringLiteral_14219/*"Terminal"*/);
    byte_593B834 = 1;
  }
  *exRoomType = 0;
  *targetId = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)transitionParams, 0);
  v10 = 0;
  if ( !IsNullOrEmpty )
  {
    if ( !transitionParams )
      sub_21FFECC(0, v8);
    if ( LODWORD(transitionParams->max_length) )
    {
      v11 = 1;
      v12 = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                               transitionParams->m_Items[0],
                                               (System_String_o *)StringLiteral_6536/*"ExRoom"*/,
                                               1,
                                               0);
      if ( !(_DWORD)v12 )
      {
        v14 = 2;
        goto LABEL_13;
      }
      if ( SLODWORD(transitionParams->max_length) < 2 )
        goto LABEL_11;
      v10 = System_String__Compare_75470196(transitionParams->m_Items[0], (System_String_o *)StringLiteral_14219/*"Terminal"*/, 1, 0);
      if ( (_DWORD)v10 )
        goto LABEL_11;
      if ( (transitionParams->max_length & 0xFFFFFFFE) != 0 )
      {
        v12 = (ItemLinkInfoWindowComponent_o *)System_String__Compare_75470196(
                                                 transitionParams->m_Items[1],
                                                 (System_String_o *)StringLiteral_6536/*"ExRoom"*/,
                                                 1,
                                                 0);
        if ( (_DWORD)v12 )
        {
LABEL_11:
          LOBYTE(v10) = 0;
          return v10;
        }
        v14 = 3;
        v11 = 2;
LABEL_13:
        v15 = ItemLinkInfoWindowComponent__TryGetExRoomType(v12, transitionParams, v11, exRoomType, v13);
        v17 = ItemLinkInfoWindowComponent__GetExRoomTargetId(
                (ItemLinkInfoWindowComponent_o *)v15,
                transitionParams,
                v14,
                v16);
        LOBYTE(v10) = 1;
        *targetId = v17;
        return v10;
      }
    }
    sub_21FFED4(v10);
  }
  return v10;
}


bool ItemLinkInfoWindowComponent__TryGetExRoomType(
        ItemLinkInfoWindowComponent_o *this,
        System_String_array *transitionParams,
        int32_t roomIndex,
        int32_t *exRoomType,
        const MethodInfo *method)
{
  int32_t max_length; // w8
  int32_t v9; // w22
  System_String_o *v10; // x20
  char v11; // w21
  int32_t v12; // w0

  if ( (byte_593B835 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_15116/*"Top"*/);
    sub_21FFC50(&StringLiteral_9482/*"Mission"*/);
    sub_21FFC50(&StringLiteral_11379/*"Quest"*/);
    this = (ItemLinkInfoWindowComponent_o *)sub_21FFC50(&StringLiteral_13361/*"Shop"*/);
    byte_593B835 = 1;
  }
  *exRoomType = 1;
  if ( !transitionParams )
    sub_21FFECC(this, transitionParams);
  max_length = transitionParams->max_length;
  if ( max_length <= roomIndex )
    return 1;
  if ( max_length <= (unsigned int)roomIndex )
    sub_21FFED4(this);
  v9 = 1;
  v10 = transitionParams->m_Items[roomIndex];
  if ( System_String__Compare_75470196(v10, (System_String_o *)StringLiteral_15116/*"Top"*/, 1, 0) )
  {
    v11 = 1;
    if ( System_String__Compare_75470196(v10, (System_String_o *)StringLiteral_11379/*"Quest"*/, 1, 0)
      && (v11 = 1, System_String__Compare_75470196(v10, (System_String_o *)StringLiteral_9482/*"Mission"*/, 1, 0)) )
    {
      v12 = System_String__Compare_75470196(v10, (System_String_o *)StringLiteral_13361/*"Shop"*/, 1, 0);
      v11 = v12 == 0;
      if ( v12 )
        v9 = 0;
      else
        v9 = 3;
    }
    else
    {
      v9 = 2;
    }
  }
  else
  {
    v11 = 1;
  }
  *exRoomType = v9;
  return v11;
}


void ItemLinkInfoWindowComponent__add_callbackFunc(
        ItemLinkInfoWindowComponent_o *this,
        ItemLinkInfoWindowComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ItemLinkInfoWindowComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ItemLinkInfoWindowComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  ItemLinkInfoWindowComponent_o *v12; // x0
  ItemLinkInfoWindowComponent_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_593B82B & 1) == 0 )
  {
    sub_21FFC50(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    byte_593B82B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ItemLinkInfoWindowComponent_CallbackFunc_c *)v8->klass != ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_223767C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v8, ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, v9);
  ItemLinkInfoWindowComponent__remove_callbackFunc(v12, v13, v14);
}


System_String_o *ItemLinkInfoWindowComponent__get_closeBtnPath(
        ItemLinkInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_593B846 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_7965/*"InfoWindow/CloseBtn"*/);
    byte_593B846 = 1;
  }
  return (System_String_o *)StringLiteral_7965/*"InfoWindow/CloseBtn"*/;
}


void ItemLinkInfoWindowComponent__remove_callbackFunc(
        ItemLinkInfoWindowComponent_o *this,
        ItemLinkInfoWindowComponent_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ItemLinkInfoWindowComponent_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ItemLinkInfoWindowComponent_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  ItemLinkInfoWindowComponent_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_593B82C & 1) == 0 )
  {
    sub_21FFC50(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    byte_593B82C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ItemLinkInfoWindowComponent_CallbackFunc_c *)v8->klass != ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_223767C(p_callbackFunc, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v8, ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, v9);
  ItemLinkInfoWindowComponent__Init(v12, v13);
}


void ItemLinkInfoWindowComponent_CallbackFunc___ctor(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFF0BC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFF074;
}


System_IAsyncResult_o *ItemLinkInfoWindowComponent_CallbackFunc__BeginInvoke(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void ItemLinkInfoWindowComponent_CallbackFunc__EndInvoke(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void ItemLinkInfoWindowComponent_CallbackFunc__Invoke(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22___ctor(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22__MoveNext(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v3; // x19
  int32_t _1__state; // w8
  struct ItemLinkInfoWindowComponent_o *_4__this; // x20
  Il2CppObject *Master_object; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  Il2CppObject *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  EventEntity_array *EnableEntityList; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_TSource__o *eventEntList_5__4; // x22
  ItemLinkInfoWindowComponent___c_c *v28; // x0
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x8
  System_Func_object__long__o *_9__22_0; // x23
  Il2CppObject *v31; // x24
  struct ItemLinkInfoWindowComponent___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Object_array *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Collections_Generic_List_object__o *v47; // x21
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int v54; // w8
  int32_t v55; // w22
  struct System_Int32_array *itemIdList; // x9
  int max_length; // w10
  bool result; // w0
  struct System_Int32_array *needNumList; // x8
  __int64 i_5__6; // x9
  int v61; // w10
  int32_t v62; // w23
  __int64 v63; // x21
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  const MethodInfo *v70; // x6
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *ItemLinkInfoListViewItemList; // x22
  MethodInfo *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  struct ItemLinkInfoListViewManager_o *listViewManager; // x8
  ItemLinkInfoTextObject_o *ListDescriptionObject; // x0
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  ItemLinkInfoWindowComponent_o *v86; // x0
  const MethodInfo *v87; // x2
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  __int64 v94; // x8
  _QWORD *v95; // x9
  __int64 _2__current_low; // x10
  __int64 v97; // x8
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewList; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_593B850 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_EventEntity__long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_EventEntity___);
    sub_21FFC50(&System_Func_EventEntity__long__TypeInfo);
    sub_21FFC50(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
    sub_21FFC50(&Method_ItemLinkInfoWindowComponent___c__CoCreateItemTransitionList_b__22_0__);
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)sub_21FFC50(&ItemLinkInfoWindowComponent___c_TypeInfo);
    byte_593B850 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  entity = 0;
  viewList = 0;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    goto LABEL_22;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemMaster___);
  v3->fields._itemMst_5__2 = (struct ItemMaster_o *)Master_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v3->fields._itemMst_5__2,
    (int32_t)Master_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v13 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
  v3->fields._itemDropEfficiencyMst_5__3 = (struct ItemDropEfficiencyMaster_o *)v13;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v3->fields._itemDropEfficiencyMst_5__3,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_51;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)this, 0, 1, 0, 0);
  v3->fields._eventEntList_5__4 = EnableEntityList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v3->fields._eventEntList_5__4,
    (int32_t)EnableEntityList,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  eventEntList_5__4 = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields._eventEntList_5__4;
  if ( !eventEntList_5__4 )
    goto LABEL_51;
  if ( eventEntList_5__4[1].monitor )
  {
    v28 = ItemLinkInfoWindowComponent___c_TypeInfo;
    if ( !*(&ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo, method);
      v28 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__22_0 = (System_Func_object__long__o *)static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( !*(&v28->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v28, method);
        static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__22_0 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_EventEntity__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__22_0,
        v31,
        Method_ItemLinkInfoWindowComponent___c__CoCreateItemTransitionList_b__22_0__,
        0);
      v32 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
      v32->__9__22_0 = (struct System_Func_EventEntity__long__o *)_9__22_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v32->__9__22_0, (int32_t)_9__22_0, v33, v34, v35, v36, v37, v38);
    }
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__long_(
                                                                 eventEntList_5__4,
                                                                 (System_Func_TSource__TKey__o *)_9__22_0,
                                                                 (const MethodInfo_3855748 *)Method_System_Linq_Enumerable_OrderBy_EventEntity__long___);
    v40 = System_Linq_Enumerable__ToArray_object_(
            v39,
            (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_EventEntity___);
    v3->fields._eventEntList_5__4 = (struct EventEntity_array *)v40;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v3->fields._eventEntList_5__4,
      (int32_t)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  v3->fields._groupList_5__5 = (struct System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v47;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v3->fields._groupList_5__5,
    (int32_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = 0;
  for ( v3->fields._i_5__6 = 0; ; v3->fields._i_5__6 = v54 )
  {
    itemIdList = v3->fields.itemIdList;
    if ( !itemIdList )
      goto LABEL_51;
    max_length = itemIdList->max_length;
    if ( v54 >= max_length )
    {
      if ( !_4__this )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)_4__this->fields.listViewManager;
      if ( !this )
        goto LABEL_51;
      ItemLinkInfoListViewManager__CreateList((ItemLinkInfoListViewManager_o *)this, v3->fields._groupList_5__5, 0, v2);
      return 0;
    }
    if ( v54 >= (unsigned int)max_length )
      goto LABEL_52;
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v3->fields._itemMst_5__2;
    if ( !this )
      goto LABEL_51;
    v55 = itemIdList->m_Items[v54];
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                &entity,
                                                                                v55,
                                                                                (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_22:
    v54 = v3->fields._i_5__6 + 1;
  }
  needNumList = v3->fields.needNumList;
  if ( !needNumList )
    goto LABEL_51;
  i_5__6 = v3->fields._i_5__6;
  v61 = needNumList->max_length;
  if ( (int)i_5__6 >= v61 )
  {
    v62 = 0;
  }
  else
  {
    if ( (unsigned int)i_5__6 >= v61 )
LABEL_52:
      sub_21FFED4(this);
    v62 = needNumList->m_Items[i_5__6];
  }
  v63 = sub_21FFEBC(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
  System_Object___ctor((Il2CppObject *)v63, 0);
  if ( !v63 )
    goto LABEL_51;
  *(_QWORD *)(v63 + 24) = 0;
  *(_DWORD *)(v63 + 16) = v55;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v63 + 24), 0, v64, v65, v66, v67, v68, v69);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v3->fields._itemDropEfficiencyMst_5__3;
  if ( !this )
    goto LABEL_51;
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)ItemDropEfficiencyMaster__GetEnabledListByItemId(
                                                                              (ItemDropEfficiencyMaster_o *)this,
                                                                              v55,
                                                                              0);
  if ( !_4__this )
    goto LABEL_51;
  ItemLinkInfoListViewItemList = ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItemList(
                                   _4__this,
                                   (System_Collections_Generic_List_ItemDropEfficiencyEntity__o *)this,
                                   1,
                                   v62,
                                   (ItemEntity_o *)entity,
                                   v3->fields._eventEntList_5__4,
                                   v70);
  viewList = ItemLinkInfoListViewItemList;
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)System_Linq_Enumerable__Any_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)ItemLinkInfoListViewItemList,
                                                                              (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v3->fields._i_5__6 )
    {
      listViewManager = _4__this->fields.listViewManager;
      if ( listViewManager )
      {
        ListDescriptionObject = ItemLinkInfoWindowComponent__CreateListDescriptionObject(
                                  _4__this,
                                  listViewManager->fields.listParent,
                                  v72);
        *(_QWORD *)(v63 + 40) = ListDescriptionObject;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v63 + 40),
          (int32_t)ListDescriptionObject,
          v80,
          v81,
          v82,
          v83,
          v84,
          v85);
        goto LABEL_41;
      }
LABEL_51:
      sub_21FFECC(this, method);
    }
LABEL_41:
    ItemLinkInfoWindowComponent__SortViewItemList((ItemLinkInfoWindowComponent_o *)this, &viewList, v72);
    ItemLinkInfoWindowComponent__CheckRecommendBoard(v86, &viewList, v87);
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)viewList;
    if ( !viewList )
      goto LABEL_51;
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)viewList,
                                                                                0,
                                                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !this )
      goto LABEL_51;
    ItemLinkInfoListViewItemList = viewList;
    *((_BYTE *)&this[1].fields._i_5__6 + 4) = 1;
  }
  *(_QWORD *)(v63 + 48) = ItemLinkInfoListViewItemList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v63 + 48),
    (int32_t)ItemLinkInfoListViewItemList,
    (System_String_o *)v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v3->fields._groupList_5__5;
  if ( !this )
    goto LABEL_51;
  v94 = *(_QWORD *)&this->fields.__1__state;
  v95 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v94 )
    goto LABEL_51;
  _2__current_low = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)_2__current_low >= *(_DWORD *)(v94 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v63,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
  }
  else
  {
    v97 = v94 + 8 * _2__current_low;
    LODWORD(this->fields.__2__current) = _2__current_low + 1;
    *(_QWORD *)(v97 + 32) = v63;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v97 + 32), v63, v88, v89, v90, v91, v92, v93);
  }
  v3->fields.__2__current = 0;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
  sub_21FFBF4(p__2__current, 0, v98, v99, v100, v101, v102, v103);
  result = 1;
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
  return result;
}


Il2CppObject *ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22__System_Collections_IEnumerator_Reset(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22__System_Collections_IEnumerator_get_Current(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22__System_IDisposable_Dispose(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *this,
        const MethodInfo *method)
{
  ;
}


void ItemLinkInfoWindowComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B849 & 1) == 0 )
  {
    sub_21FFC50(&ItemLinkInfoWindowComponent___c_TypeInfo);
    byte_593B849 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ItemLinkInfoWindowComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ItemLinkInfoWindowComponent___c_TypeInfo->static_fields->__9 = (struct ItemLinkInfoWindowComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ItemLinkInfoWindowComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ItemLinkInfoWindowComponent___c___ctor(ItemLinkInfoWindowComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t ItemLinkInfoWindowComponent___c___CoCreateItemTransitionList_b__22_0(
        ItemLinkInfoWindowComponent___c_o *this,
        EventEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
  return e->fields.startedAt;
}


void ItemLinkInfoWindowComponent___c___CreateItemLinkInfoListViewItem_b__29_2(
        ItemLinkInfoWindowComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_593B84A & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593B84A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_21FFECC(Instance, v3);
  }
  CommonUI__ItemLinkInfoTransChainAction((CommonUI_o *)Instance, 0);
}


int64_t ItemLinkInfoWindowComponent___c___OpenUserItemInfo_b__20_0(
        ItemLinkInfoWindowComponent___c_o *this,
        EventEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
  return e->fields.startedAt;
}


int32_t ItemLinkInfoWindowComponent___c___SortViewItemList_b__36_0(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_21FFECC(this, 0);
  return !n->fields._IsLocked_k__BackingField;
}


int32_t ItemLinkInfoWindowComponent___c___SortViewItemList_b__36_1(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_21FFECC(this, 0);
  return ItemTransitionType__GetSortPriority(n->fields._Type_k__BackingField, 0);
}


int32_t ItemLinkInfoWindowComponent___c___SortViewItemList_b__36_2(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_21FFECC(this, 0);
  return n->fields._ItemDropEfficiencyPriority_k__BackingField;
}


void ItemLinkInfoWindowComponent___c__DisplayClass23_0___ctor(
        ItemLinkInfoWindowComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ItemLinkInfoWindowComponent___c__DisplayClass23_0___CreateItemLinkInfoListViewItemList_b__0(
        ItemLinkInfoWindowComponent___c__DisplayClass23_0_o *this,
        ShopEntity_o *ent,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent___c__DisplayClass23_0_o *v4; // x20
  struct ItemEntity_o *itemEnt; // x8

  v4 = this;
  if ( (byte_593B84B & 1) == 0 )
  {
    this = (ItemLinkInfoWindowComponent___c__DisplayClass23_0_o *)sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    byte_593B84B = 1;
  }
  if ( !ent )
    goto LABEL_8;
  if ( ent->fields.purchaseType == 1 )
  {
    itemEnt = v4->fields.itemEnt;
    if ( itemEnt )
      return System_Linq_Enumerable__Contains_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)ent->fields.targetIds,
               itemEnt->fields.id,
               (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
LABEL_8:
    sub_21FFECC(this, ent);
  }
  return 0;
}


void ItemLinkInfoWindowComponent___c__DisplayClass28_0___ctor(
        ItemLinkInfoWindowComponent___c__DisplayClass28_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ItemLinkInfoWindowComponent___c__DisplayClass28_0___HasExRoomShopItem_b__0(
        ItemLinkInfoWindowComponent___c__DisplayClass28_0_o *this,
        ShopEntity_o *shopEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *targetIds; // x0

  if ( (byte_593B84C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    byte_593B84C = 1;
  }
  return shopEntity
      && (targetIds = (System_Collections_Generic_IEnumerable_TSource__o *)shopEntity->fields.targetIds) != 0
      && System_Linq_Enumerable__Contains_int_(
           targetIds,
           this->fields.itemId,
           (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
}


void ItemLinkInfoWindowComponent___c__DisplayClass29_0___ctor(
        ItemLinkInfoWindowComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ItemLinkInfoWindowComponent___c__DisplayClass29_0___CreateItemLinkInfoListViewItem_b__0(
        ItemLinkInfoWindowComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  ItemLinkInfoWindowComponent___c_c *v4; // x0
  ItemLinkInfoWindowComponent_o *_4__this; // x19
  ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt; // x20
  ItemLinkInfoListViewItem_o *viewItem; // x21
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__29_2; // x22
  Il2CppObject *v10; // x23
  struct ItemLinkInfoWindowComponent___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593B84D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ItemLinkInfoWindowComponent___c__CreateItemLinkInfoListViewItem_b__29_2__);
    sub_21FFC50(&ItemLinkInfoWindowComponent___c_TypeInfo);
    byte_593B84D = 1;
  }
  v4 = ItemLinkInfoWindowComponent___c_TypeInfo;
  _4__this = this->fields.__4__this;
  itemDropEfficiencyEnt = this->fields.itemDropEfficiencyEnt;
  viewItem = this->fields.viewItem;
  if ( !*(&ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo, method);
    v4 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__29_2 = static_fields->__9__29_2;
  if ( !_9__29_2 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method);
      static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__29_2 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__29_2,
      v10,
      Method_ItemLinkInfoWindowComponent___c__CreateItemLinkInfoListViewItem_b__29_2__,
      0);
    v11 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v11->__9__29_2 = _9__29_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__29_2, (int32_t)_9__29_2, v12, v13, v14, v15, v16, v17);
  }
  if ( !_4__this )
    sub_21FFECC(v4, method);
  ItemLinkInfoWindowComponent__ExecSceneTransition(_4__this, itemDropEfficiencyEnt, viewItem, _9__29_2, v2);
}


void ItemLinkInfoWindowComponent___c__DisplayClass29_0___CreateItemLinkInfoListViewItem_b__1(
        ItemLinkInfoWindowComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  ItemLinkInfoWindowComponent___c__DisplayClass29_0_o *v3; // x19
  System_Action_o *_9__3; // x23
  ItemLinkInfoListViewItem_o *viewItem; // x22
  ItemLinkInfoWindowComponent_o *_4__this; // x20
  ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v3 = this;
  if ( (byte_593B84E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (ItemLinkInfoWindowComponent___c__DisplayClass29_0_o *)sub_21FFC50(&Method_ItemLinkInfoWindowComponent___c__DisplayClass29_0__CreateItemLinkInfoListViewItem_b__3__);
    byte_593B84E = 1;
  }
  _9__3 = v3->fields.__9__3;
  viewItem = v3->fields.viewItem;
  _4__this = v3->fields.__4__this;
  itemDropEfficiencyEnt = v3->fields.itemDropEfficiencyEnt;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_ItemLinkInfoWindowComponent___c__DisplayClass29_0__CreateItemLinkInfoListViewItem_b__3__,
      0);
    v3->fields.__9__3 = _9__3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v3->fields.__9__3, (int32_t)_9__3, v8, v9, v10, v11, v12, v13);
  }
  if ( !_4__this )
    sub_21FFECC(this, method);
  ItemLinkInfoWindowComponent__ExecSceneTransition(_4__this, itemDropEfficiencyEnt, viewItem, _9__3, v2);
}


void ItemLinkInfoWindowComponent___c__DisplayClass29_0___CreateItemLinkInfoListViewItem_b__3(
        ItemLinkInfoWindowComponent___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ItemLinkInfoWindowComponent_o *_4__this; // x0

  if ( (byte_593B84F & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593B84F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ItemLinkInfoWindowComponent__Close_53772600(_4__this, 0, v2),
        (_4__this = (ItemLinkInfoWindowComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_21FFECC(_4__this, method);
  }
  CommonUI__ItemLinkInfoTransChainAction((CommonUI_o *)_4__this, 0);
}


void ItemLinkInfoWindowComponent___c__DisplayClass41_0___ctor(
        ItemLinkInfoWindowComponent___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ItemLinkInfoWindowComponent___c__DisplayClass41_0___IsBoardActive_b__0(
        ItemLinkInfoWindowComponent___c__DisplayClass41_0_o *this,
        GachaEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_21FFECC(this, 0);
  return n->fields.id == this->fields.gachaId;
}