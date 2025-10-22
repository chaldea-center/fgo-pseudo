void ItemLinkInfoWindowComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C59611 & 1) == 0 )
  {
    sub_1C3E564(&ItemLinkInfoWindowComponent_TypeInfo);
    byte_4C59611 = 1;
  }
  LODWORD(ItemLinkInfoWindowComponent_TypeInfo->static_fields->STONE_DETAIL_VIEW_BG_POSITION_Y) = (struct ItemLinkInfoWindowComponent_StaticFields)1092616192;
}


void ItemLinkInfoWindowComponent___ctor(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C59610 & 1) == 0 )
  {
    sub_1C3E564(&BaseDialog_TypeInfo);
    byte_4C59610 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ItemLinkInfoWindowComponent__Callback(ItemLinkInfoWindowComponent_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ItemLinkInfoWindowComponent_CallbackFunc_o *v5; // x20
  struct ItemLinkInfoWindowComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C3E508(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void ItemLinkInfoWindowComponent__CheckRecommendBoard(
        ItemLinkInfoWindowComponent_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewItem__o **viewList,
        const MethodInfo *method)
{
  char v4; // w22
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x8
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C59608 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__GetEnumerator__);
    byte_4C59608 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !*viewList )
    sub_1C3E7C0(0, viewList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)*viewList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__GetEnumerator__);
  v4 = 0;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__MoveNext__);
    if ( !v5 )
      break;
    current = v8.fields._current;
    if ( (v4 & 1) != 0 )
    {
      if ( !v8.fields._current )
        sub_1C3E7C0(v5, v6);
      v4 = 1;
    }
    else
    {
      if ( !v8.fields._current )
        sub_1C3E7C0(v5, v6);
      if ( *(_DWORD *)((char *)&v8.fields._current->klass + (unsigned __int64)&qword_B8) == 4 )
      {
        v4 = 1;
        *((_BYTE *)&v8.fields._current->klass + (unsigned __int64)&qword_A0 + 2) = 1;
      }
      else
      {
        v4 = 0;
      }
    }
    if ( (*(_DWORD *)((_BYTE *)&qword_B8 + (_QWORD)current) & 0xFFFFFFFE) == 2 )
      *((_BYTE *)&qword_A0 + (_QWORD)current + 2) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__Dispose__);
}


void ItemLinkInfoWindowComponent__Close(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemLinkInfoWindowComponent__Close_45932796(this, 0, v2);
}


void ItemLinkInfoWindowComponent__Close_45932796(
        ItemLinkInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *listViewManager; // x21
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  ItemLinkInfoListViewManager_o *v9; // x0
  System_Action_o *v10; // x20

  if ( (byte_4C5960E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ItemLinkInfoWindowComponent_EndClose__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5960E = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(listViewManager, 0, 0) )
    {
      v9 = this->fields.listViewManager;
      if ( !v9 )
        sub_1C3E7C0(0, v6);
      ItemLinkInfoListViewManager__DeleteCallback(v9, v6);
    }
    this->fields.state = 3;
    this->fields.closeCallbackFunc = callback;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v7, v8);
    v10 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndClose__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v10, 0);
  }
}


System_Collections_IEnumerator_o *ItemLinkInfoWindowComponent__CoCreateItemTransitionList(
        ItemLinkInfoWindowComponent_o *this,
        System_Int32_array *itemIdList,
        System_Int32_array *needNumList,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C595FE & 1) == 0 )
  {
    sub_1C3E564(&ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_TypeInfo);
    byte_4C595FE = 1;
  }
  v7 = sub_1C3E7B0(ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 48) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 48), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 32) = itemIdList;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)itemIdList, v10, v11);
  *(_QWORD *)(v7 + 40) = needNumList;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 40), (int32_t)needNumList, v12, v13);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_o *v10; // x19
  struct System_String_o *transitionParam; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v23; // [xsp+8h] [xbp-28h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v23 = slot;
  v24 = eventId;
  if ( (byte_4C59602 & 1) == 0 )
  {
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_1048/*"/"*/);
    byte_4C59602 = 1;
  }
  v6 = (System_String_o *)sub_1C3E60C(string___TypeInfo, 5);
  if ( !itemDropEfficiencyEnt || (v10 = v6) == 0 )
    sub_1C3E7C0(v6, v7);
  if ( !LODWORD(v6[1].klass) )
    goto LABEL_11;
  transitionParam = itemDropEfficiencyEnt->fields.transitionParam;
  v6[1].monitor = transitionParam;
  sub_1C3E508((CGThumbnailListItem_o *)&v6[1].monitor, (int32_t)transitionParam, v8, v9);
  if ( LODWORD(v10[1].klass) <= 1 )
    goto LABEL_11;
  v14 = StringLiteral_1048/*"/"*/;
  v10[1].fields = (System_String_Fields)StringLiteral_1048/*"/"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&v10[1].fields, v14, v12, v13);
  v6 = System_Int32__ToString((int32_t)&v24, 0);
  if ( LODWORD(v10[1].klass) <= 2
    || (v10[2].klass = (System_String_c *)v6,
        sub_1C3E508((CGThumbnailListItem_o *)&v10[2], (int32_t)v6, v15, v16),
        LODWORD(v10[1].klass) <= 3)
    || (v19 = StringLiteral_1048/*"/"*/,
        v10[2].monitor = (void *)StringLiteral_1048/*"/"*/,
        sub_1C3E508((CGThumbnailListItem_o *)&v10[2].monitor, v19, v17, v18),
        v6 = System_Int32__ToString((int32_t)&v23, 0),
        LODWORD(v10[1].klass) <= 4) )
  {
LABEL_11:
    sub_1C3E7C8(v6, v7);
  }
  v10[2].fields = (System_String_Fields)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&v10[2].fields, (int32_t)v6, v20, v21);
  return System_String__Concat_63676984((System_String_array *)v10, 0);
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
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v12; // x21
  ItemLinkInfoDetailObject_o *v13; // x22
  const MethodInfo *v14; // x3

  v8 = this;
  if ( (byte_4C59601 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoDetailObject___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59601 = 1;
  }
  v9 = 128;
  if ( isDispStoneDetail )
    v9 = 152;
  if ( !parentObject )
    goto LABEL_13;
  v10 = *(Il2CppObject **)((char *)&v8->klass + v9);
  transform = UnityEngine_GameObject__get_transform(parentObject, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object__51929056(
          v10,
          transform,
          (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0, 0);
  v13 = 0;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v12 )
    {
      this = (ItemLinkInfoWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)v12,
                                                (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoDetailObject___);
      if ( this )
      {
        v13 = (ItemLinkInfoDetailObject_o *)this;
        ItemLinkInfoDetailObject__Setup((ItemLinkInfoDetailObject_o *)this, itemEnt, isDispStoneDetail, v14);
        return v13;
      }
    }
LABEL_13:
    sub_1C3E7C0(this, itemEnt);
  }
  return v13;
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  ItemLinkInfoListViewItem_o *v21; // x25
  const MethodInfo *v22; // x2
  __int64 *v23; // x24
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x1
  __int64 v31; // x22
  __int64 v32; // x22
  int v33; // w8
  intptr_t *v34; // x19
  System_Action_o *v35; // x0
  intptr_t v36; // x2
  System_Action_o *v37; // x19
  int32_t v38; // w2
  const MethodInfo *v39; // x3

  if ( (byte_4C59600 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&ItemLinkInfoListViewItem_TypeInfo);
    sub_1C3E564(&Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__0__);
    sub_1C3E564(&Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__1__);
    sub_1C3E564(&ItemLinkInfoWindowComponent___c__DisplayClass24_0_TypeInfo);
    byte_4C59600 = 1;
  }
  v13 = sub_1C3E7B0(ItemLinkInfoWindowComponent___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_15;
  *(_QWORD *)(v13 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 24) = itemDropEfficiencyEnt;
  v18 = v13 + 24;
  sub_1C3E508((CGThumbnailListItem_o *)(v13 + 24), (int32_t)itemDropEfficiencyEnt, v19, v20);
  v21 = (ItemLinkInfoListViewItem_o *)sub_1C3E7B0(ItemLinkInfoListViewItem_TypeInfo);
  ItemLinkInfoListViewItem___ctor(v21, index, v22);
  *(_QWORD *)(v13 + 32) = v21;
  v23 = (__int64 *)(v13 + 32);
  sub_1C3E508((CGThumbnailListItem_o *)(v13 + 32), (int32_t)v21, v24, v25);
  IsNotDisplayQuestInfo = *(_QWORD *)(v13 + 32);
  if ( !IsNotDisplayQuestInfo )
    goto LABEL_15;
  *(_QWORD *)(IsNotDisplayQuestInfo + 144) = itemEnt;
  sub_1C3E508((CGThumbnailListItem_o *)(IsNotDisplayQuestInfo + 144), (int32_t)itemEnt, v26, v27);
  if ( !*(_QWORD *)v18 )
    goto LABEL_15;
  IsNotDisplayQuestInfo = *v23;
  if ( !*v23 )
    goto LABEL_15;
  v30 = *(_QWORD *)(*(_QWORD *)v18 + 40LL);
  *(_QWORD *)(IsNotDisplayQuestInfo + 120) = v30;
  sub_1C3E508((CGThumbnailListItem_o *)(IsNotDisplayQuestInfo + 120), v30, v28, v29);
  IsNotDisplayQuestInfo = *(_QWORD *)v18;
  if ( !*(_QWORD *)v18
    || (v31 = *v23,
        IsNotDisplayQuestInfo = ItemDropEfficiencyEntity__IsNotDisplayQuestInfo(
                                  (ItemDropEfficiencyEntity_o *)IsNotDisplayQuestInfo,
                                  0),
        !v31)
    || (*(_BYTE *)(v31 + 160) = IsNotDisplayQuestInfo & 1, !*(_QWORD *)v18)
    || (v32 = *v23) == 0 )
  {
LABEL_15:
    sub_1C3E7C0(IsNotDisplayQuestInfo, v15);
  }
  v33 = *(_DWORD *)(*(_QWORD *)v18 + 20LL);
  *(_BYTE *)(v32 + 163) = isItemGetInfoList;
  *(_DWORD *)(v32 + 184) = v33;
  *(_DWORD *)(v32 + 152) = needNum;
  if ( isItemGetInfoList )
    v34 = (intptr_t *)&Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__0__;
  else
    v34 = (intptr_t *)&Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__1__;
  v35 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  v36 = *v34;
  v37 = v35;
  System_Action___ctor(v35, (Il2CppObject *)v13, v36, 0);
  *(_QWORD *)(v32 + 176) = v37;
  sub_1C3E508((CGThumbnailListItem_o *)(v32 + 176), (int32_t)v37, v38, v39);
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
  __int64 v10; // x27
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *Master_object; // x26
  System_Collections_Generic_List_object__o *v16; // x19
  int32_t v17; // w28
  CGThumbnailListItem_o *v18; // x29
  _BOOL8 v19; // x0
  __int64 v20; // x1
  ItemDropEfficiencyEntity_o *current; // x21
  ItemLinkInfoWindowComponent_o *TransitionParams; // x0
  const MethodInfo *v23; // x2
  Il2CppObject *MultiEventRewardViewItem; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x6
  il2cpp_array_size_t max_length; // x8
  int v28; // w25
  int v29; // w27
  EventEntity_o *v30; // x22
  System_Collections_ICollection_o *EnableEventEntitiyList; // x23
  System_Func_object__bool__o *klass; // x24
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x6
  Il2CppObject *v36; // x24
  ItemLinkInfoListViewItem_o *ItemLinkInfoListViewItem; // x23
  _BOOL8 IsEventShopOpen; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x4
  System_String_o *TitleText; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t id; // w2
  ItemLinkInfoWindowComponent_o *v45; // x0
  const MethodInfo *v46; // x4
  System_String_o *EventRewardTransitionParam; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  ItemLinkInfoWindowComponent_o *v50; // x0
  const MethodInfo *v51; // x4
  System_String_o *ClosedMessage; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  __int64 v55; // x0
  __int64 v56; // x1
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  ItemLinkInfoListViewItem_o *v63; // x22
  const MethodInfo *v64; // x2
  _BOOL8 IsBoardActive; // x0
  __int64 v66; // x1
  const MethodInfo *v67; // x4
  System_String_o *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  ItemLinkInfoWindowComponent_o *v71; // x0
  const MethodInfo *v72; // x2
  ItemLinkInfoWindowComponent_o *TargetId; // x0
  const MethodInfo *v74; // x2
  struct System_String_o *transitionParam; // x1
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  ItemLinkInfoWindowComponent_o *v78; // x0
  const MethodInfo *v79; // x4
  System_String_o *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  __int64 v83; // x0
  __int64 v84; // x1
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  Il2CppObject *object; // [xsp+0h] [xbp-C0h]
  ClosedMessageMaster_o *closedMessageMst; // [xsp+8h] [xbp-B8h]
  ItemEntity_o **v94; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v99; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C595FF & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Find_ShopEntity___);
    sub_1C3E564(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__get_Current__);
    sub_1C3E564(&System_Func_ShopEntity__bool__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo);
    sub_1C3E564(&Method_ItemLinkInfoWindowComponent___c__DisplayClass23_0__CreateItemLinkInfoListViewItemList_b__0__);
    sub_1C3E564(&ItemLinkInfoWindowComponent___c__DisplayClass23_0_TypeInfo);
    byte_4C595FF = 1;
  }
  memset(&v99, 0, sizeof(v99));
  v10 = sub_1C3E7B0(ItemLinkInfoWindowComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    goto LABEL_46;
  *(_QWORD *)(v10 + 16) = itemEnt;
  v94 = (ItemEntity_o **)(v10 + 16);
  sub_1C3E508((CGThumbnailListItem_o *)(v10 + 16), (int32_t)itemEnt, v13, v14);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ShopMaster___);
  closedMessageMst = (ClosedMessageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__);
  if ( !itemDropEfficiencyList )
LABEL_46:
    sub_1C3E7C0(v11, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v98,
    (System_Collections_Generic_List_object__o *)itemDropEfficiencyList,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__GetEnumerator__);
  v17 = 0;
  object = (Il2CppObject *)v10;
  v18 = (CGThumbnailListItem_o *)(v10 + 24);
  v99 = v98;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v99,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__MoveNext__);
    if ( !v19 )
      break;
    current = (ItemDropEfficiencyEntity_o *)v99.fields._current;
    if ( !v99.fields._current )
      sub_1C3E7C0(v19, v20);
    TransitionParams = (ItemLinkInfoWindowComponent_o *)ItemDropEfficiencyEntity__GetTransitionParams(
                                                          (ItemDropEfficiencyEntity_o *)v99.fields._current,
                                                          0);
    MultiEventRewardViewItem = (Il2CppObject *)ItemLinkInfoWindowComponent__IsCreateMultiEventRewardViewItem(
                                                 TransitionParams,
                                                 (System_String_array *)TransitionParams,
                                                 v23);
    if ( ((unsigned __int8)MultiEventRewardViewItem & 1) != 0 )
    {
      if ( !eventEntList )
        sub_1C3E7C0(MultiEventRewardViewItem, v25);
      max_length = eventEntList->max_length;
      if ( (int)max_length >= 1 )
      {
        v28 = 0;
        v29 = 0;
        do
        {
          if ( v28 >= (unsigned int)max_length )
            sub_1C3E7C8(MultiEventRewardViewItem, v25);
          v30 = eventEntList->m_Items[v28];
          if ( !v30 )
            sub_1C3E7C0(MultiEventRewardViewItem, v25);
          if ( !Master_object )
            sub_1C3E7C0(MultiEventRewardViewItem, v25);
          EnableEventEntitiyList = (System_Collections_ICollection_o *)ShopMaster__GetEnableEventEntitiyList(
                                                                         (ShopMaster_o *)Master_object,
                                                                         v30->fields.id,
                                                                         0);
          MultiEventRewardViewItem = (Il2CppObject *)BasicHelper__IsNullOrEmpty(EnableEventEntitiyList, 0);
          if ( ((unsigned __int8)MultiEventRewardViewItem & 1) == 0 )
          {
            klass = (System_Func_object__bool__o *)v18->klass;
            if ( !v18->klass )
            {
              klass = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_ShopEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                klass,
                object,
                Method_ItemLinkInfoWindowComponent___c__DisplayClass23_0__CreateItemLinkInfoListViewItemList_b__0__,
                0);
              v18->klass = (CGThumbnailListItem_c *)klass;
              sub_1C3E508(v18, (int32_t)klass, v33, v34);
            }
            MultiEventRewardViewItem = BasicHelper__Find_object_(
                                         (System_Object_array *)EnableEventEntitiyList,
                                         (System_Func_T__bool__o *)klass,
                                         (const MethodInfo_30E39DC *)Method_BasicHelper_Find_ShopEntity___);
            v36 = MultiEventRewardViewItem;
            if ( MultiEventRewardViewItem )
            {
              ItemLinkInfoListViewItem = ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItem(
                                           this,
                                           v17,
                                           *v94,
                                           current,
                                           isItemGetInfoList,
                                           needNum,
                                           v35);
              IsEventShopOpen = ShopMaster__IsEventShopOpen((ShopMaster_o *)Master_object, v30->fields.id, 0);
              if ( !ItemLinkInfoListViewItem )
                sub_1C3E7C0(IsEventShopOpen, v39);
              ItemLinkInfoListViewItem->fields._IsLocked_k__BackingField = !IsEventShopOpen;
              TitleText = ItemLinkInfoWindowComponent__GetTitleText(
                            (ItemLinkInfoWindowComponent_o *)IsEventShopOpen,
                            current,
                            ItemLinkInfoListViewItem,
                            v30,
                            v40);
              ItemLinkInfoListViewItem->fields._Name_k__BackingField = TitleText;
              sub_1C3E508(
                (CGThumbnailListItem_o *)&ItemLinkInfoListViewItem->fields._Name_k__BackingField,
                (int32_t)TitleText,
                v42,
                v43);
              id = v30->fields.id;
              ItemLinkInfoListViewItem->fields._TargetId_k__BackingField = id;
              ItemLinkInfoListViewItem->fields._TargetValueType_k__BackingField = 4;
              ItemLinkInfoListViewItem->fields._ItemDropEfficiencyPriority_k__BackingField = current->fields.priority
                                                                                           + v29;
              EventRewardTransitionParam = ItemLinkInfoWindowComponent__CreateEventRewardTransitionParam(
                                             v45,
                                             current,
                                             id,
                                             (int32_t)v36[2].monitor,
                                             v46);
              ItemLinkInfoListViewItem->fields._TransitionParam_k__BackingField = EventRewardTransitionParam;
              sub_1C3E508(
                (CGThumbnailListItem_o *)&ItemLinkInfoListViewItem->fields._TransitionParam_k__BackingField,
                (int32_t)EventRewardTransitionParam,
                v48,
                v49);
              ClosedMessage = ItemLinkInfoWindowComponent__GetClosedMessage(
                                v50,
                                closedMessageMst,
                                current,
                                ItemLinkInfoListViewItem->fields._TargetId_k__BackingField,
                                v51);
              ItemLinkInfoListViewItem->fields._ClosedMessage_k__BackingField = ClosedMessage;
              sub_1C3E508(
                (CGThumbnailListItem_o *)&ItemLinkInfoListViewItem->fields._ClosedMessage_k__BackingField,
                (int32_t)ClosedMessage,
                v53,
                v54);
              if ( !v16 )
                sub_1C3E7C0(v55, v56);
              items = v16->fields._items;
              v60 = Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__;
              ++v16->fields._version;
              if ( !items )
                sub_1C3E7C0(v55, v56);
              size = v16->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v16,
                  (Il2CppObject *)ItemLinkInfoListViewItem,
                  *(const MethodInfo_37B5460 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
              }
              else
              {
                v62 = &items->obj.klass + size;
                v16->fields._size = size + 1;
                v62[4] = (Il2CppClass *)ItemLinkInfoListViewItem;
                sub_1C3E508((CGThumbnailListItem_o *)(v62 + 4), (int32_t)ItemLinkInfoListViewItem, v57, v58);
              }
              ++v29;
              ++v17;
            }
          }
          LODWORD(max_length) = eventEntList->max_length;
          ++v28;
        }
        while ( v28 < (int)max_length );
      }
    }
    else
    {
      v63 = ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItem(
              this,
              v17,
              *v94,
              current,
              isItemGetInfoList,
              needNum,
              v26);
      IsBoardActive = ItemLinkInfoWindowComponent__IsBoardActive((ItemLinkInfoWindowComponent_o *)v63, current, v64);
      if ( !v63 )
        sub_1C3E7C0(IsBoardActive, v66);
      v63->fields._IsLocked_k__BackingField = !IsBoardActive;
      v68 = ItemLinkInfoWindowComponent__GetTitleText(
              (ItemLinkInfoWindowComponent_o *)IsBoardActive,
              current,
              v63,
              0,
              v67);
      v63->fields._Name_k__BackingField = v68;
      sub_1C3E508((CGThumbnailListItem_o *)&v63->fields._Name_k__BackingField, (int32_t)v68, v69, v70);
      TargetId = (ItemLinkInfoWindowComponent_o *)ItemLinkInfoWindowComponent__GetTargetId(v71, current, v72);
      v63->fields._TargetId_k__BackingField = (int)TargetId;
      v63->fields._TargetValueType_k__BackingField = ItemLinkInfoWindowComponent__GetTargetValueType(
                                                       TargetId,
                                                       current,
                                                       v74);
      v63->fields._ItemDropEfficiencyPriority_k__BackingField = current->fields.priority;
      transitionParam = current->fields.transitionParam;
      v63->fields._TransitionParam_k__BackingField = transitionParam;
      sub_1C3E508(
        (CGThumbnailListItem_o *)&v63->fields._TransitionParam_k__BackingField,
        (int32_t)transitionParam,
        v76,
        v77);
      v80 = ItemLinkInfoWindowComponent__GetClosedMessage(v78, closedMessageMst, current, 0, v79);
      v63->fields._ClosedMessage_k__BackingField = v80;
      sub_1C3E508((CGThumbnailListItem_o *)&v63->fields._ClosedMessage_k__BackingField, (int32_t)v80, v81, v82);
      if ( !v16 )
        sub_1C3E7C0(v83, v84);
      v87 = v16->fields._items;
      v88 = Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__;
      ++v16->fields._version;
      if ( !v87 )
        sub_1C3E7C0(v83, v84);
      v89 = v16->fields._size;
      if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v16,
          (Il2CppObject *)v63,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
      }
      else
      {
        v90 = &v87->obj.klass + v89;
        v16->fields._size = v89 + 1;
        v90[4] = (Il2CppClass *)v63;
        sub_1C3E508((CGThumbnailListItem_o *)(v90 + 4), (int32_t)v63, v85, v86);
      }
      ++v17;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v99,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__Dispose__);
  return (System_Collections_Generic_List_ItemLinkInfoListViewItem__o *)v16;
}


ItemLinkInfoTextObject_o *ItemLinkInfoWindowComponent__CreateListDescriptionObject(
        ItemLinkInfoWindowComponent_o *this,
        UnityEngine_GameObject_o *parentObject,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x20
  Il2CppObject *listDescriptionObject; // x20
  UnityEngine_Transform_o *transform; // x19
  Il2CppObject *v7; // x19

  v4 = this;
  if ( (byte_4C59606 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoTextObject___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59606 = 1;
  }
  if ( !parentObject )
    goto LABEL_10;
  listDescriptionObject = (Il2CppObject *)v4->fields.listDescriptionObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object__51929056(
         listDescriptionObject,
         transform,
         (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v7, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !v7 )
LABEL_10:
    sub_1C3E7C0(this, parentObject);
  return (ItemLinkInfoTextObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)v7,
                                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoTextObject___);
}


ItemLinkInfoSubHeaderObject_o *ItemLinkInfoWindowComponent__CreateSubHeaderObject(
        ItemLinkInfoWindowComponent_o *this,
        UnityEngine_GameObject_o *parentObject,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x20
  Il2CppObject *subHeaderObject; // x20
  UnityEngine_Transform_o *transform; // x19
  Il2CppObject *v7; // x19

  v4 = this;
  if ( (byte_4C59605 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoSubHeaderObject___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C59605 = 1;
  }
  if ( !parentObject )
    goto LABEL_10;
  subHeaderObject = (Il2CppObject *)v4->fields.subHeaderObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object__51929056(
         subHeaderObject,
         transform,
         (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v7, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0;
  if ( !v7 )
LABEL_10:
    sub_1C3E7C0(this, parentObject);
  return (ItemLinkInfoSubHeaderObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)v7,
                                            (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoSubHeaderObject___);
}


void ItemLinkInfoWindowComponent__EndClose(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ItemLinkInfoWindowComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C3E508(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  int32_t TargetValueType_k__BackingField; // w8
  int32_t TargetId_k__BackingField; // w21
  TerminalPramsManager_c *v15; // x0
  struct ItemEntity_o *ItemEnt_k__BackingField; // x8
  int32_t id; // w19
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  TerminalPramsManager_c *v20; // x0
  System_Action_o *transitionAction; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C5960D & 1) == 0 )
  {
    sub_1C3E564(&Method_ItemLinkInfoWindowComponent_ExecSceneTransition__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C5960D = 1;
  }
  transitionAction = 0;
  if ( this->fields.state == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !viewItem || !itemDropEfficiencyEnt || !Instance )
      goto LABEL_37;
    if ( CommonUI__TryGetSceneTransitionAction(
           (CommonUI_o *)Instance,
           &transitionAction,
           viewItem->fields._TransitionParam_k__BackingField,
           itemDropEfficiencyEnt->fields.script,
           closeAction,
           0) )
    {
      v11 = Method_ItemLinkInfoWindowComponent_ExecSceneTransition__;
      if ( (*((_BYTE *)Method_ItemLinkInfoWindowComponent_ExecSceneTransition__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C3E57C(Method_ItemLinkInfoWindowComponent_ExecSceneTransition__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C3E548(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, viewItem->fields._IsLocked_k__BackingField, 0, 0);
      TargetValueType_k__BackingField = viewItem->fields._TargetValueType_k__BackingField;
      if ( (unsigned int)(TargetValueType_k__BackingField - 6) <= 3 )
      {
        TargetId_k__BackingField = viewItem->fields._TargetId_k__BackingField;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C52FD1 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C52FD1 = 1;
        }
        v15 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v15 = TerminalPramsManager_TypeInfo;
        }
        v15->static_fields->_ShopFocusItemId_k__BackingField = TargetId_k__BackingField;
        TargetValueType_k__BackingField = viewItem->fields._TargetValueType_k__BackingField;
      }
      if ( TargetValueType_k__BackingField == 4 )
      {
        ItemEnt_k__BackingField = viewItem->fields._ItemEnt_k__BackingField;
        if ( ItemEnt_k__BackingField )
          id = ItemEnt_k__BackingField->fields.id;
        else
          id = 0;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C52FD1 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C52FD1 = 1;
        }
        v20 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v20 = TerminalPramsManager_TypeInfo;
        }
        v20->static_fields->_ShopFocusItemId_k__BackingField = id;
      }
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( Instance )
      {
        PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0);
        Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( Instance )
        {
          PartyOrganizationUtility__ClearFollowerInfo((PartyOrganizationUtility_o *)Instance, 0);
          ActionExtensions__Call(transitionAction, 0);
          return;
        }
      }
LABEL_37:
      sub_1C3E7C0(Instance, v10);
    }
    if ( ItemDropEfficiencyEntity__IsLoginBonus(itemDropEfficiencyEnt, 0) )
    {
      v18 = Method_ItemLinkInfoWindowComponent_ExecSceneTransition__;
      if ( (*((_BYTE *)Method_ItemLinkInfoWindowComponent_ExecSceneTransition__ + 83) & 2) != 0 )
        v18 = (_QWORD *)sub_1C3E57C(Method_ItemLinkInfoWindowComponent_ExecSceneTransition__);
      v19 = (System_Reflection_MethodBase_o *)sub_1C3E548(v18, v18[4]);
      OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0, 0);
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

  if ( (byte_4C59604 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Enum_TryParse_SceneList_Type___);
    sub_1C3E564(&System_Enum_TypeInfo);
    sub_1C3E564(&string_TypeInfo);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C59604 = 1;
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
          (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__) )
    return string_TypeInfo->static_fields->Empty;
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
      sub_1C3E7C8(this, closedMessageMst);
    m_Items = TransitionParams->m_Items;
  }
  v11 = *m_Items;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)System_Enum__TryParse_Int32Enum__51381912(
                                            v11,
                                            1,
                                            &result,
                                            (const MethodInfo_3100698 *)Method_System_Enum_TryParse_SceneList_Type___);
  if ( ((unsigned __int8)this & 1) != 0 && result == 72 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !this )
      goto LABEL_26;
    this = (ItemLinkInfoWindowComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              &v12,
                                              eventId,
                                              (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( entity && v12 )
        return System_String__Format((System_String_o *)entity[1].monitor, (Il2CppObject *)v12[2].monitor, 0);
LABEL_26:
      sub_1C3E7C0(this, closedMessageMst);
    }
  }
  if ( !entity )
    goto LABEL_26;
  return (System_String_o *)entity[1].monitor;
}


int32_t ItemLinkInfoWindowComponent__GetTargetId(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *ent,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x20
  System_String_o *basePanel; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int32_t v7; // w0
  bool v8; // w0
  int32_t v9; // w8
  int32_t v11; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v12[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C5960A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Enum_TryParse_SceneList_Type___);
    sub_1C3E564(&System_Enum_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C3E564(&StringLiteral_8949/*"MasterMission"*/);
    sub_1C3E564(&StringLiteral_8886/*"ManaPrism"*/);
    sub_1C3E564(&StringLiteral_8385/*"LeafExchange"*/);
    sub_1C3E564(&StringLiteral_6550/*"FRIEND_POINT"*/);
    sub_1C3E564(&StringLiteral_15581/*"War"*/);
    sub_1C3E564(&StringLiteral_10808/*"PurePrismExchange"*/);
    sub_1C3E564(&StringLiteral_11187/*"RarePrism"*/);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3E564(&StringLiteral_7138/*"Grand"*/);
    byte_4C5960A = 1;
  }
  *(_QWORD *)result = 0;
  *(_QWORD *)v12 = 0;
  v11 = 0;
  if ( !ent )
    goto LABEL_52;
  this = (ItemLinkInfoWindowComponent_o *)ent->fields.transitionParam;
  if ( !this )
    goto LABEL_52;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0);
  if ( !this )
    goto LABEL_52;
  v4 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_53;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__51381912(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_3100698 *)Method_System_Enum_TryParse_SceneList_Type___) )
    goto LABEL_39;
  if ( result[1] <= 22 )
  {
    if ( result[1] != 20 )
    {
      if ( result[1] != 22 || SLODWORD(v4->fields.m_CancellationTokenSource) < 2 )
        goto LABEL_39;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63668636(
                                                (System_String_o *)v4->fields.basePanelList,
                                                (System_String_o *)StringLiteral_8886/*"ManaPrism"*/,
                                                1,
                                                0);
      if ( (_DWORD)this )
      {
        if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
          goto LABEL_53;
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63668636(
                                                  (System_String_o *)v4->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_10808/*"PurePrismExchange"*/,
                                                  1,
                                                  0);
        if ( (_DWORD)this )
        {
          if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
            goto LABEL_53;
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63668636(
                                                    (System_String_o *)v4->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_11187/*"RarePrism"*/,
                                                    1,
                                                    0);
          if ( (_DWORD)this )
          {
            if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
              goto LABEL_53;
            if ( System_String__Compare_63668636(
                   (System_String_o *)v4->fields.basePanelList,
                   (System_String_o *)StringLiteral_8385/*"LeafExchange"*/,
                   1,
                   0) )
            {
              goto LABEL_39;
            }
          }
        }
      }
      LODWORD(this) = ent->fields.itemId;
      return (int)this;
    }
    if ( SLODWORD(v4->fields.m_CancellationTokenSource) < 2 )
      goto LABEL_39;
    this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63668636(
                                              (System_String_o *)v4->fields.basePanelList,
                                              (System_String_o *)StringLiteral_6550/*"FRIEND_POINT"*/,
                                              1,
                                              0);
    if ( !(_DWORD)this )
      return (int)this;
    if ( LODWORD(v4->fields.m_CancellationTokenSource) > 1 )
    {
      v8 = System_Int32__TryParse((System_String_o *)v4->fields.basePanelList, &v11, 0);
      v9 = v11;
      goto LABEL_44;
    }
LABEL_53:
    sub_1C3E7C8(this, ent);
  }
  if ( result[1] == 72 )
  {
    if ( SLODWORD(v4->fields.m_CancellationTokenSource) < 2 )
      goto LABEL_39;
    v8 = System_Int32__TryParse((System_String_o *)v4->fields.basePanelList, result, 0);
    v9 = result[0];
    goto LABEL_44;
  }
  if ( result[1] != 34 )
    goto LABEL_39;
  m_CancellationTokenSource = v4->fields.m_CancellationTokenSource;
  if ( (int)m_CancellationTokenSource >= 2 )
  {
    v7 = System_String__Compare_63668636(
           (System_String_o *)v4->fields.basePanelList,
           (System_String_o *)StringLiteral_7138/*"Grand"*/,
           1,
           0);
    m_CancellationTokenSource = v4->fields.m_CancellationTokenSource;
    if ( !v7 )
    {
      if ( (int)m_CancellationTokenSource >= 3 )
      {
        System_Int32__TryParse((System_String_o *)v4->fields.baseWindow, &v12[1], 0);
        LODWORD(this) = v12[1];
        return (int)this;
      }
      this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( this )
      {
        this = (ItemLinkInfoWindowComponent_o *)QuestTree__GetLatestGrandWarInfo((QuestTree_o *)this, 0);
        if ( this )
          goto LABEL_50;
      }
      goto LABEL_52;
    }
  }
  if ( (int)m_CancellationTokenSource <= 2 )
  {
    if ( (_DWORD)m_CancellationTokenSource == 2
      && !System_String__Compare_63668636(
            (System_String_o *)v4->fields.basePanelList,
            (System_String_o *)StringLiteral_15581/*"War"*/,
            1,
            0)
      && ItemDropEfficiencyEntity__IsMainScenario(ent, 0) )
    {
      this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( this )
      {
        this = (ItemLinkInfoWindowComponent_o *)QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0);
        if ( !this )
          return (int)this;
LABEL_50:
        LODWORD(this) = HIDWORD(this->fields.m_CachedPtr);
        return (int)this;
      }
LABEL_52:
      sub_1C3E7C0(this, ent);
    }
LABEL_39:
    LODWORD(this) = 0;
    return (int)this;
  }
  this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63668636(
                                            (System_String_o *)v4->fields.basePanelList,
                                            (System_String_o *)StringLiteral_8949/*"MasterMission"*/,
                                            1,
                                            0);
  if ( !(_DWORD)this )
    return (int)this;
  if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 2 )
    goto LABEL_53;
  v8 = System_Int32__TryParse((System_String_o *)v4->fields.baseWindow, v12, 0);
  v9 = v12[0];
LABEL_44:
  if ( v8 )
    LODWORD(this) = v9;
  else
    LODWORD(this) = 0;
  return (int)this;
}


int32_t ItemLinkInfoWindowComponent__GetTargetValueType(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *ent,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x19
  System_String_o *basePanel; // x21
  int m_CancellationTokenSource; // w8
  int32_t v7; // w20
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C5960B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Enum_TryParse_SceneList_Type___);
    sub_1C3E564(&System_Enum_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C3E564(&StringLiteral_13006/*"Spot"*/);
    sub_1C3E564(&StringLiteral_8949/*"MasterMission"*/);
    sub_1C3E564(&StringLiteral_8886/*"ManaPrism"*/);
    sub_1C3E564(&StringLiteral_8385/*"LeafExchange"*/);
    sub_1C3E564(&StringLiteral_15581/*"War"*/);
    sub_1C3E564(&StringLiteral_10808/*"PurePrismExchange"*/);
    sub_1C3E564(&StringLiteral_11187/*"RarePrism"*/);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3E564(&StringLiteral_10928/*"Quest"*/);
    byte_4C5960B = 1;
  }
  *(_QWORD *)result = 0;
  v9 = 0;
  if ( !ent )
    goto LABEL_50;
  this = (ItemLinkInfoWindowComponent_o *)ent->fields.transitionParam;
  if ( !this )
    goto LABEL_50;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0);
  if ( !this )
    goto LABEL_50;
  v4 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_51;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__51381912(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_3100698 *)Method_System_Enum_TryParse_SceneList_Type___) )
    return 0;
  switch ( result[1] )
  {
    case 22:
      if ( SLODWORD(v4->fields.m_CancellationTokenSource) < 2 )
        return 0;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63668636(
                                                (System_String_o *)v4->fields.basePanelList,
                                                (System_String_o *)StringLiteral_8886/*"ManaPrism"*/,
                                                1,
                                                0);
      if ( !(_DWORD)this )
        return 6;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63668636(
                                                (System_String_o *)v4->fields.basePanelList,
                                                (System_String_o *)StringLiteral_10808/*"PurePrismExchange"*/,
                                                1,
                                                0);
      if ( !(_DWORD)this )
        return 7;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63668636(
                                                (System_String_o *)v4->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11187/*"RarePrism"*/,
                                                1,
                                                0);
      if ( !(_DWORD)this )
        return 8;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      if ( System_String__Compare_63668636(
             (System_String_o *)v4->fields.basePanelList,
             (System_String_o *)StringLiteral_8385/*"LeafExchange"*/,
             1,
             0) )
      {
        return 0;
      }
      return 9;
    case 72:
      if ( SLODWORD(v4->fields.m_CancellationTokenSource) < 2 )
        return 0;
      if ( System_Int32__TryParse((System_String_o *)v4->fields.basePanelList, &v9, 0) )
        return 4;
      else
        return 0;
    case 34:
      m_CancellationTokenSource = (int)v4->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource < 3 )
      {
        if ( m_CancellationTokenSource != 2
          || System_String__Compare_63668636(
               (System_String_o *)v4->fields.basePanelList,
               (System_String_o *)StringLiteral_15581/*"War"*/,
               1,
               0)
          || !ItemDropEfficiencyEntity__IsMainScenario(ent, 0) )
        {
          return 0;
        }
        this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( this )
        {
          if ( !QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0) )
            return 0;
          return 3;
        }
LABEL_50:
        sub_1C3E7C0(this, ent);
      }
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63668636(
                                                (System_String_o *)v4->fields.basePanelList,
                                                (System_String_o *)StringLiteral_8949/*"MasterMission"*/,
                                                1,
                                                0);
      if ( !(_DWORD)this )
        return 5;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_Int32__TryParse(
                                                (System_String_o *)v4->fields.baseWindow,
                                                result,
                                                0);
      if ( ((unsigned __int8)this & 1) == 0 )
        return 0;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
LABEL_51:
        sub_1C3E7C8(this, ent);
      v7 = 1;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63668636(
                                                (System_String_o *)v4->fields.basePanelList,
                                                (System_String_o *)StringLiteral_10928/*"Quest"*/,
                                                1,
                                                0);
      if ( (_DWORD)this )
      {
        if ( LODWORD(v4->fields.m_CancellationTokenSource) > 1 )
        {
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63668636(
                                                    (System_String_o *)v4->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_13006/*"Spot"*/,
                                                    1,
                                                    0);
          if ( !(_DWORD)this )
            return 2;
          if ( LODWORD(v4->fields.m_CancellationTokenSource) > 1 )
          {
            if ( !System_String__Compare_63668636(
                    (System_String_o *)v4->fields.basePanelList,
                    (System_String_o *)StringLiteral_15581/*"War"*/,
                    1,
                    0) )
              return 3;
            return 0;
          }
        }
        goto LABEL_51;
      }
      break;
    default:
      return 0;
  }
  return v7;
}


System_String_o *ItemLinkInfoWindowComponent__GetTitleText(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt,
        ItemLinkInfoListViewItem_o *viewItem,
        EventEntity_o *eventEnt,
        const MethodInfo *method)
{
  int32_t targetType; // w8
  struct System_String_StaticFields *p_shortName; // x8

  if ( (byte_4C59609 & 1) == 0 )
  {
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&string_TypeInfo);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3E564(&StringLiteral_7519/*"ITEM_LINK_INFO_LIST_HIDDEN_TITLE"*/);
    byte_4C59609 = 1;
  }
  if ( !itemDropEfficiencyEnt )
LABEL_18:
    sub_1C3E7C0(this, itemDropEfficiencyEnt);
  targetType = itemDropEfficiencyEnt->fields.targetType;
  if ( targetType == 1 )
  {
    if ( eventEnt )
    {
      p_shortName = (struct System_String_StaticFields *)&eventEnt->fields.shortName;
      if ( !viewItem )
        goto LABEL_18;
    }
    else
    {
      p_shortName = string_TypeInfo->static_fields;
      if ( !viewItem )
        goto LABEL_18;
    }
    if ( !viewItem->fields._IsLocked_k__BackingField )
      return System_String__Format(itemDropEfficiencyEnt->fields.title, (Il2CppObject *)p_shortName->Empty, 0);
  }
  else
  {
    if ( (unsigned int)(targetType - 2) > 2 )
      return itemDropEfficiencyEnt->fields.title;
    if ( !viewItem )
      goto LABEL_18;
    if ( !viewItem->fields._IsLocked_k__BackingField )
      return itemDropEfficiencyEnt->fields.title;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_7519/*"ITEM_LINK_INFO_LIST_HIDDEN_TITLE"*/, 0);
}


void ItemLinkInfoWindowComponent__Init(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleItemNameLabel; // x0

  if ( (byte_4C595FA & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C595FA = 1;
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
    sub_1C3E7C0(titleItemNameLabel, method);
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
  ItemLinkInfoWindowComponent_o *v4; // x20
  System_String_o *basePanel; // x21
  BalanceConfig_c *v6; // x0
  int32_t ClassBoardReleaseQuestId; // w19
  bool v9; // w21
  __int64 v10; // x19
  System_Object_array *ListValidData; // x20
  System_Func_object__bool__o *v12; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_WarInfo_o *v15; // x19
  int32_t v16; // w1
  MapControl_SpotInfo_o *SpotInfo; // x0
  bool v18; // w0
  Il2CppObject *v19; // [xsp+0h] [xbp-40h] BYREF
  int32_t key[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C5960C & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&Method_BasicHelper_Any_GachaEntity___);
    sub_1C3E564(&CoinRoomUtility_TypeInfo);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Enum_TryParse_SceneList_Type___);
    sub_1C3E564(&System_Enum_TypeInfo);
    sub_1C3E564(&System_Func_GachaEntity__bool__TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C3E564(&Method_ItemLinkInfoWindowComponent___c__DisplayClass36_0__IsBoardActive_b__0__);
    sub_1C3E564(&ItemLinkInfoWindowComponent___c__DisplayClass36_0_TypeInfo);
    sub_1C3E564(&StringLiteral_13006/*"Spot"*/);
    sub_1C3E564(&StringLiteral_8949/*"MasterMission"*/);
    sub_1C3E564(&StringLiteral_6550/*"FRIEND_POINT"*/);
    sub_1C3E564(&StringLiteral_15581/*"War"*/);
    sub_1C3E564(&StringLiteral_4528/*"CoinRoom"*/);
    sub_1C3E564(&StringLiteral_7138/*"Grand"*/);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3E564(&StringLiteral_10928/*"Quest"*/);
    byte_4C5960C = 1;
  }
  *(_QWORD *)result = 0;
  v19 = 0;
  *(_QWORD *)key = 0;
  if ( !entity )
    goto LABEL_83;
  this = (ItemLinkInfoWindowComponent_o *)entity->fields.transitionParam;
  if ( !this )
    goto LABEL_83;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0);
  if ( !this )
    goto LABEL_83;
  v4 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_84;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__51381912(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_3100698 *)Method_System_Enum_TryParse_SceneList_Type___) )
    return 0;
  if ( result[1] <= 34 )
  {
    v9 = 1;
    switch ( result[1] )
    {
      case 0x14:
        if ( SLODWORD(v4->fields.m_CancellationTokenSource) < 2
          || System_String__op_Equality(
               (System_String_o *)v4->fields.basePanelList,
               (System_String_o *)StringLiteral_6550/*"FRIEND_POINT"*/,
               0)
          || SLODWORD(v4->fields.m_CancellationTokenSource) < 2 )
        {
          return 1;
        }
        v10 = sub_1C3E7B0(ItemLinkInfoWindowComponent___c__DisplayClass36_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v10, 0);
        if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
          break;
        if ( !v10 )
          goto LABEL_83;
        System_Int32__TryParse((System_String_o *)v4->fields.basePanelList, (int32_t *)(v10 + 16), 0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !this )
          goto LABEL_83;
        ListValidData = (System_Object_array *)GachaMaster__getListValidData((GachaMaster_o *)this, 0);
        v12 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GachaEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v12,
          (Il2CppObject *)v10,
          Method_ItemLinkInfoWindowComponent___c__DisplayClass36_0__IsBoardActive_b__0__,
          0);
        return BasicHelper__Any_object__51261116(
                 ListValidData,
                 (System_Func_T__bool__o *)v12,
                 (const MethodInfo_30E2EBC *)Method_BasicHelper_Any_GachaEntity___);
      case 0x16:
        if ( SLODWORD(v4->fields.m_CancellationTokenSource) < 2 )
          return 1;
        v9 = 1;
        if ( System_String__Compare_63668636(
               (System_String_o *)v4->fields.basePanelList,
               (System_String_o *)StringLiteral_4528/*"CoinRoom"*/,
               1,
               0) )
        {
          return v9;
        }
        if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        return CoinRoomUtility__IsTargetQuestClear(0);
      case 0x17:
      case 0x1E:
      case 0x20:
        return v9;
      case 0x22:
        m_CancellationTokenSource = v4->fields.m_CancellationTokenSource;
        if ( (int)m_CancellationTokenSource < 2 )
          goto LABEL_48;
        if ( !System_String__Compare_63668636(
                (System_String_o *)v4->fields.basePanelList,
                (System_String_o *)StringLiteral_7138/*"Grand"*/,
                1,
                0) )
        {
          result[0] = 0;
          if ( SLODWORD(v4->fields.m_CancellationTokenSource) >= 3 )
          {
            System_Int32__TryParse((System_String_o *)v4->fields.baseWindow, result, 0);
          }
          else
          {
            this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !this )
              goto LABEL_83;
            this = (ItemLinkInfoWindowComponent_o *)QuestTree__GetLatestGrandWarInfo((QuestTree_o *)this, 0);
            if ( !this )
              goto LABEL_83;
            result[0] = HIDWORD(this->fields.m_CachedPtr);
          }
          this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !this )
            goto LABEL_83;
          v16 = result[0];
          return QuestTree__IsActiveWar((QuestTree_o *)this, v16, 0);
        }
        m_CancellationTokenSource = v4->fields.m_CancellationTokenSource;
LABEL_48:
        if ( (int)m_CancellationTokenSource <= 2 )
        {
          if ( (_DWORD)m_CancellationTokenSource == 2 )
          {
            v9 = 1;
            if ( System_String__Compare_63668636(
                   (System_String_o *)v4->fields.basePanelList,
                   (System_String_o *)StringLiteral_15581/*"War"*/,
                   1,
                   0) )
            {
              return v9;
            }
            if ( ItemDropEfficiencyEntity__IsMainScenario(entity, 0) )
            {
              this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( !this )
                goto LABEL_83;
              LatestProgressWarInfo = QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0);
              if ( LatestProgressWarInfo )
              {
                v15 = LatestProgressWarInfo;
                if ( MapControl_WarInfo__GetStatus(LatestProgressWarInfo, 0) != 3 )
                  return MapControl_WarInfo__GetStatus(v15, 0) != 4;
                return 0;
              }
            }
          }
          return 1;
        }
        v9 = 1;
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63668636(
                                                  (System_String_o *)v4->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_8949/*"MasterMission"*/,
                                                  1,
                                                  0);
        if ( !(_DWORD)this )
          return v9;
        if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 2 )
          break;
        this = (ItemLinkInfoWindowComponent_o *)System_Int32__TryParse(
                                                  (System_String_o *)v4->fields.baseWindow,
                                                  &key[1],
                                                  0);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 1;
        if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
          break;
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63668636(
                                                  (System_String_o *)v4->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_10928/*"Quest"*/,
                                                  1,
                                                  0);
        if ( !(_DWORD)this )
        {
          this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( this )
            return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)this, key[1], 0, 0);
          goto LABEL_83;
        }
        if ( LODWORD(v4->fields.m_CancellationTokenSource) > 1 )
        {
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63668636(
                                                    (System_String_o *)v4->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_13006/*"Spot"*/,
                                                    1,
                                                    0);
          if ( !(_DWORD)this )
          {
            this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !this )
              goto LABEL_83;
            SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)this, key[1], 0);
            if ( SpotInfo )
              return SpotInfo->fields.dispType == 1;
            return 0;
          }
          if ( LODWORD(v4->fields.m_CancellationTokenSource) > 1 )
          {
            v9 = 1;
            if ( System_String__Compare_63668636(
                   (System_String_o *)v4->fields.basePanelList,
                   (System_String_o *)StringLiteral_15581/*"War"*/,
                   1,
                   0) )
            {
              return v9;
            }
            this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( this )
            {
              v16 = key[1];
              return QuestTree__IsActiveWar((QuestTree_o *)this, v16, 0);
            }
LABEL_83:
            sub_1C3E7C0(this, entity);
          }
        }
        return v18;
      default:
        return ItemDropEfficiencyEntity__IsLoginBonus(entity, 0);
    }
LABEL_84:
    sub_1C3E7C8(this, entity);
  }
  if ( result[1] != 72 )
  {
    if ( result[1] == 91 )
    {
      v6 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v6 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v6->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestClear_40371188(ClassBoardReleaseQuestId, -1, 0, 0);
    }
    else
    {
      return ItemDropEfficiencyEntity__IsLoginBonus(entity, 0);
    }
  }
  if ( SLODWORD(v4->fields.m_CancellationTokenSource) < 2
    || !System_Int32__TryParse((System_String_o *)v4->fields.basePanelList, key, 0) )
  {
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_83;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &v19,
          key[0],
          (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !this )
    goto LABEL_83;
  return ShopMaster__IsEventShopOpen((ShopMaster_o *)this, key[0], 0);
}


bool ItemLinkInfoWindowComponent__IsCreateMultiEventRewardViewItem(
        ItemLinkInfoWindowComponent_o *this,
        System_String_array *transitionParams,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  System_String_o **m_Items; // x8
  System_String_o *v7; // x19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C59603 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Enum_TryParse_SceneList_Type___);
    sub_1C3E564(&System_Enum_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C59603 = 1;
  }
  result = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)transitionParams, 0);
  if ( IsNullOrEmpty )
  {
    if ( transitionParams )
    {
      m_Items = (System_String_o **)&StringLiteral_1/*""*/;
      goto LABEL_9;
    }
LABEL_15:
    sub_1C3E7C0(IsNullOrEmpty, v5);
  }
  if ( !transitionParams )
    goto LABEL_15;
  if ( !LODWORD(transitionParams->max_length) )
    sub_1C3E7C8(IsNullOrEmpty, v5);
  m_Items = transitionParams->m_Items;
LABEL_9:
  if ( LODWORD(transitionParams->max_length) != 1 )
    return 0;
  v7 = *m_Items;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  return System_Enum__TryParse_Int32Enum__51381912(
           v7,
           1,
           &result,
           (const MethodInfo_3100698 *)Method_System_Enum_TryParse_SceneList_Type___)
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_GameObject_o *listViewBg; // x23
  ItemLinkInfoWindowComponent_c *v14; // x0
  int32_t id; // w24
  System_String_o **p_name; // x8
  System_Collections_Generic_List_object__o *v17; // x22
  __int64 v18; // x23
  UnityEngine_GameObject_o *v19; // x0
  const MethodInfo *v20; // x4
  ItemLinkInfoDetailObject_o *ItemLinkInfoDetailObject; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  const MethodInfo *v30; // x3
  System_Action_o *v31; // x20

  if ( (byte_4C595FB & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
    sub_1C3E564(&Method_ItemLinkInfoWindowComponent_EndOpen__);
    sub_1C3E564(&ItemLinkInfoWindowComponent_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C595FB = 1;
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
    v14 = ItemLinkInfoWindowComponent_TypeInfo;
    if ( !ItemLinkInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent_TypeInfo);
      v14 = ItemLinkInfoWindowComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(listViewBg, v14->static_fields->STONE_DETAIL_VIEW_BG_POSITION_Y, 0);
  }
  this->fields.callbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
  if ( itemEnt )
  {
    id = itemEnt->fields.id;
    p_name = &itemEnt->fields.name;
  }
  else
  {
    p_name = (System_String_o **)&StringLiteral_1/*""*/;
    id = 0;
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
  v17 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  v18 = sub_1C3E7B0(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0);
  if ( !v18 )
    goto LABEL_25;
  *(_DWORD *)(v18 + 16) = id;
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
    goto LABEL_25;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  ItemLinkInfoDetailObject = ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
                               this,
                               itemEnt,
                               v19,
                               isDispStoneDetail,
                               v20);
  *(_QWORD *)(v18 + 24) = ItemLinkInfoDetailObject;
  sub_1C3E508((CGThumbnailListItem_o *)(v18 + 24), (int32_t)ItemLinkInfoDetailObject, v22, v23);
  if ( !v17 )
    goto LABEL_25;
  items = v17->fields._items;
  v27 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v17->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v18,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v18;
    sub_1C3E508((CGThumbnailListItem_o *)(v29 + 4), v18, v24, v25);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
LABEL_25:
    sub_1C3E7C0(gameObject, v10);
  ItemLinkInfoListViewManager__CreateList(
    (ItemLinkInfoListViewManager_o *)gameObject,
    (System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v17,
    isDispStoneDetail,
    v30);
  v31 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0, 0);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  System_Collections_IEnumerator_o *ItemTransitionList; // x0
  System_Action_o *v15; // x20

  if ( (byte_4C595FD & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ItemLinkInfoWindowComponent_EndOpen__);
    byte_4C595FD = 1;
  }
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0), (gameObject = this->fields.listViewBg) == 0)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        this->fields.callbackFunc = callback,
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.titleItemNameLabel) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
    sub_1C3E7C0(gameObject, v10);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  ItemTransitionList = ItemLinkInfoWindowComponent__CoCreateItemTransitionList(this, itemIdList, needNumList, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, ItemTransitionList, 0);
  v15 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0, 0);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o **v12; // x8
  System_Collections_Generic_List_object__o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x24
  ItemLinkInfoWindowComponent___c_c *v15; // x0
  System_Func_object__long__o *_9__20_0; // x23
  Il2CppObject *v17; // x25
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  __int64 v22; // x23
  const MethodInfo *v23; // x6
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *ItemLinkInfoListViewItemList; // x22
  const MethodInfo *v25; // x2
  struct ItemLinkInfoListViewManager_o *listViewManager; // x8
  ItemLinkInfoSubHeaderObject_o *SubHeaderObject; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  ItemLinkInfoWindowComponent_o *v30; // x0
  const MethodInfo *v31; // x2
  ItemLinkInfoWindowComponent_o *v32; // x0
  const MethodInfo *v33; // x2
  Il2CppObject *v34; // x21
  const MethodInfo *v35; // x4
  struct ItemLinkInfoListViewManager_o *v36; // x8
  UnityEngine_GameObject_o *v37; // x2
  ItemLinkInfoDetailObject_o *ItemLinkInfoDetailObject; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  const MethodInfo *v50; // x3
  System_Action_o *v51; // x20
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewList; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_4C595FC & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_ItemDropEfficiencyEntity___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_EventEntity__long___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_EventEntity___);
    sub_1C3E564(&System_Func_EventEntity__long__TypeInfo);
    sub_1C3E564(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
    sub_1C3E564(&Method_ItemLinkInfoWindowComponent_EndOpen__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
    sub_1C3E564(&Method_ItemLinkInfoWindowComponent___c__OpenUserItemInfo_b__20_0__);
    sub_1C3E564(&ItemLinkInfoWindowComponent___c_TypeInfo);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C595FC = 1;
  }
  entity = 0;
  viewList = 0;
  if ( !itemData )
    goto LABEL_47;
  itemId = itemData->fields.itemId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
    goto LABEL_47;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    itemId,
    (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
  if ( !this )
    goto LABEL_47;
  EnabledListByItemId = ItemDropEfficiencyMaster__GetEnabledListByItemId((ItemDropEfficiencyMaster_o *)this, itemId, 0);
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EnabledListByItemId,
          (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_ItemDropEfficiencyEntity___) )
  {
    ItemLinkInfoWindowComponent__Open(v6, (ItemEntity_o *)entity, callback, 0, v9);
    return;
  }
  v6->fields.state = 1;
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  if ( !this )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.listViewBg;
  if ( !this )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.lineObject;
  if ( !this )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v6->fields.callbackFunc = callback;
  sub_1C3E508((CGThumbnailListItem_o *)&v6->fields.callbackFunc, (int32_t)callback, v10, v11);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.titleItemNameLabel;
  if ( !this )
    goto LABEL_47;
  v12 = entity ? (System_String_o **)&entity[1].monitor : (System_String_o **)&StringLiteral_1/*""*/;
  UILabel__set_text((UILabel_o *)this, *v12, 0);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.titleWindowNameLabel;
  if ( !this )
    goto LABEL_47;
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_47;
  this = (ItemLinkInfoWindowComponent_o *)EventMaster__GetEnableEntityList((EventMaster_o *)this, 0, 1, 0, 0);
  if ( !this )
    goto LABEL_47;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)this;
  if ( this->fields.m_CancellationTokenSource )
  {
    v15 = ItemLinkInfoWindowComponent___c_TypeInfo;
    if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
      v15 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    _9__20_0 = (System_Func_object__long__o *)v15->static_fields->__9__20_0;
    if ( !_9__20_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = ItemLinkInfoWindowComponent___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__20_0 = (System_Func_object__long__o *)sub_1C3E7B0(System_Func_EventEntity__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__20_0,
        v17,
        Method_ItemLinkInfoWindowComponent___c__OpenUserItemInfo_b__20_0__,
        0);
      static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
      static_fields->__9__20_0 = (struct System_Func_EventEntity__long__o *)_9__20_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v19, v20);
    }
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__long_(
                                                                 v14,
                                                                 (System_Func_TSource__TKey__o *)_9__20_0,
                                                                 (const MethodInfo_312930C *)Method_System_Linq_Enumerable_OrderBy_EventEntity__long___);
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v21,
                                                                 (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_EventEntity___);
  }
  v22 = sub_1C3E7B0(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0);
  if ( !v22 )
    goto LABEL_47;
  *(_DWORD *)(v22 + 16) = itemId;
  ItemLinkInfoListViewItemList = ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItemList(
                                   v6,
                                   EnabledListByItemId,
                                   0,
                                   0,
                                   (ItemEntity_o *)entity,
                                   (EventEntity_array *)v14,
                                   v23);
  viewList = ItemLinkInfoListViewItemList;
  this = (ItemLinkInfoWindowComponent_o *)System_Linq_Enumerable__Any_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)ItemLinkInfoListViewItemList,
                                            (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    listViewManager = v6->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_47;
    SubHeaderObject = ItemLinkInfoWindowComponent__CreateSubHeaderObject(v6, listViewManager->fields.listParent, v25);
    *(_QWORD *)(v22 + 32) = SubHeaderObject;
    sub_1C3E508((CGThumbnailListItem_o *)(v22 + 32), (int32_t)SubHeaderObject, v28, v29);
    ItemLinkInfoWindowComponent__SortViewItemList(v30, &viewList, v31);
    ItemLinkInfoWindowComponent__CheckRecommendBoard(v32, &viewList, v33);
    ItemLinkInfoListViewItemList = viewList;
  }
  v34 = entity;
  this = (ItemLinkInfoWindowComponent_o *)System_Linq_Enumerable__Any_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)ItemLinkInfoListViewItemList,
                                            (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
  v36 = v6->fields.listViewManager;
  if ( !v36 )
    goto LABEL_47;
  v37 = ((unsigned __int8)this & 1) != 0
      ? v36->fields.listParent
      : UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6->fields.listViewManager, 0);
  ItemLinkInfoDetailObject = ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
                               v6,
                               (ItemEntity_o *)v34,
                               v37,
                               0,
                               v35);
  *(_QWORD *)(v22 + 24) = ItemLinkInfoDetailObject;
  sub_1C3E508((CGThumbnailListItem_o *)(v22 + 24), (int32_t)ItemLinkInfoDetailObject, v39, v40);
  v41 = (int)viewList;
  *(_QWORD *)(v22 + 48) = viewList;
  sub_1C3E508((CGThumbnailListItem_o *)(v22 + 48), v41, v42, v43);
  if ( !v13 )
    goto LABEL_47;
  items = v13->fields._items;
  v47 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++v13->fields._version;
  if ( !items )
    goto LABEL_47;
  size = v13->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)v22,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v49[4] = (Il2CppClass *)v22;
    sub_1C3E508((CGThumbnailListItem_o *)(v49 + 4), v22, v44, v45);
  }
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.listViewManager;
  if ( !this )
LABEL_47:
    sub_1C3E7C0(this, itemData);
  ItemLinkInfoListViewManager__CreateList(
    (ItemLinkInfoListViewManager_o *)this,
    (System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v13,
    0,
    v50);
  v51 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v51, (Il2CppObject *)v6, Method_ItemLinkInfoWindowComponent_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)v6, v51, 0, 0, 0);
}


void ItemLinkInfoWindowComponent__SortViewItemList(
        ItemLinkInfoWindowComponent_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewItem__o **viewList,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent___c_c *v4; // x0
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v5; // x20
  System_Func_object__int__o *_9__31_0; // x21
  Il2CppObject *v7; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v11; // x0
  ItemLinkInfoWindowComponent___c_c *v12; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v13; // x20
  System_Func_object__int__o *_9__31_1; // x21
  Il2CppObject *v15; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x0
  ItemLinkInfoWindowComponent___c_c *v20; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x20
  System_Func_object__int__o *_9__31_2; // x21
  Il2CppObject *v23; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4C59607 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderByDescending_ItemLinkInfoListViewItem__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ThenByDescending_ItemLinkInfoListViewItem__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ThenBy_ItemLinkInfoListViewItem__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_ItemLinkInfoListViewItem___);
    sub_1C3E564(&System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    sub_1C3E564(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_0__);
    sub_1C3E564(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_1__);
    sub_1C3E564(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_2__);
    sub_1C3E564(&ItemLinkInfoWindowComponent___c_TypeInfo);
    byte_4C59607 = 1;
  }
  v4 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v5 = *viewList;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v4 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__31_0 = (System_Func_object__int__o *)v4->static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__31_0 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(_9__31_0, v7, Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_0__, 0);
    static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__31_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (System_Func_TSource__TKey__o *)_9__31_0,
          (const MethodInfo_3129820 *)Method_System_Linq_Enumerable_OrderByDescending_ItemLinkInfoListViewItem__int___);
  v12 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v13 = v11;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v12 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__31_1 = (System_Func_object__int__o *)v12->static_fields->__9__31_1;
  if ( !_9__31_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__31_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__31_1,
      v15,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_1__,
      0);
    v16 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v16->__9__31_1 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__31_1;
    sub_1C3E508((CGThumbnailListItem_o *)&v16->__9__31_1, (int32_t)_9__31_1, v17, v18);
  }
  v19 = System_Linq_Enumerable__ThenBy_object__int_(
          v13,
          (System_Func_TSource__TKey__o *)_9__31_1,
          (const MethodInfo_313834C *)Method_System_Linq_Enumerable_ThenBy_ItemLinkInfoListViewItem__int___);
  v20 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v21 = v19;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v20 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__31_2 = (System_Func_object__int__o *)v20->static_fields->__9__31_2;
  if ( !_9__31_2 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__31_2 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__31_2,
      v23,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_2__,
      0);
    v24 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v24->__9__31_2 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__31_2;
    sub_1C3E508((CGThumbnailListItem_o *)&v24->__9__31_2, (int32_t)_9__31_2, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                               v21,
                                                               (System_Func_TSource__TKey__o *)_9__31_2,
                                                               (const MethodInfo_3138A78 *)Method_System_Linq_Enumerable_ThenByDescending_ItemLinkInfoListViewItem__int___);
  v28 = (System_Collections_Generic_List_ItemLinkInfoListViewItem__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v27,
                                                                         (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_ItemLinkInfoListViewItem___);
  *viewList = v28;
  sub_1C3E508((CGThumbnailListItem_o *)viewList, (int32_t)v28, v29, v30);
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
  __int64 v9; // x0
  bool v10; // zf
  ItemLinkInfoWindowComponent_o *v11; // x0
  ItemLinkInfoWindowComponent_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C595F8 & 1) == 0 )
  {
    sub_1C3E564(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    byte_4C595F8 = 1;
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
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3EA80(v8);
  ItemLinkInfoWindowComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *ItemLinkInfoWindowComponent__get_closeBtnPath(
        ItemLinkInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C5960F & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_7647/*"InfoWindow/CloseBtn"*/);
    byte_4C5960F = 1;
  }
  return (System_String_o *)StringLiteral_7647/*"InfoWindow/CloseBtn"*/;
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
  __int64 v9; // x0
  bool v10; // zf
  ItemLinkInfoWindowComponent_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C595F9 & 1) == 0 )
  {
    sub_1C3E564(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    byte_4C595F9 = 1;
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
    v9 = sub_1C787BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3EA80(v8);
  ItemLinkInfoWindowComponent__Init(v11, v12);
}


void ItemLinkInfoWindowComponent_CallbackFunc___ctor(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A85068;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A85020;
}


System_IAsyncResult_o *ItemLinkInfoWindowComponent_CallbackFunc__BeginInvoke(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = result;
  if ( (byte_4C59612 & 1) == 0 )
  {
    sub_1C3E564(&bool_TypeInfo);
    byte_4C59612 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v12, callback, object);
}


void ItemLinkInfoWindowComponent_CallbackFunc__EndInvoke(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  EventEntity_array *EnableEntityList; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *eventEntList_5__4; // x22
  ItemLinkInfoWindowComponent___c_c *v16; // x0
  System_Func_object__long__o *_9__22_0; // x23
  Il2CppObject *v18; // x24
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Object_array *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int v29; // w8
  int32_t v30; // w22
  struct System_Int32_array *itemIdList; // x9
  int max_length; // w10
  bool result; // w0
  struct System_Int32_array *needNumList; // x8
  __int64 i_5__6; // x9
  int v36; // w10
  int32_t v37; // w23
  __int64 v38; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x6
  System_Collections_Generic_List_object__o *ItemLinkInfoListViewItemList; // x22
  const MethodInfo *v43; // x2
  const MethodInfo *v44; // x3
  struct ItemLinkInfoListViewManager_o *listViewManager; // x8
  ItemLinkInfoTextObject_o *ListDescriptionObject; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  ItemLinkInfoWindowComponent_o *v49; // x0
  const MethodInfo *v50; // x2
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x8
  _QWORD *v54; // x9
  __int64 _2__current_low; // x10
  __int64 v56; // x8
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  System_Collections_Generic_List_object__o *v60; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4C59619 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_EventEntity__long___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_EventEntity___);
    sub_1C3E564(&System_Func_EventEntity__long__TypeInfo);
    sub_1C3E564(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    sub_1C3E564(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
    sub_1C3E564(&Method_ItemLinkInfoWindowComponent___c__CoCreateItemTransitionList_b__22_0__);
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)sub_1C3E564(&ItemLinkInfoWindowComponent___c_TypeInfo);
    byte_4C59619 = 1;
  }
  v60 = 0;
  entity = 0;
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    goto LABEL_22;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ItemMaster___);
  v3->fields._itemMst_5__2 = (struct ItemMaster_o *)Master_object;
  sub_1C3E508((CGThumbnailListItem_o *)&v3->fields._itemMst_5__2, (int32_t)Master_object, v7, v8);
  v9 = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
  v3->fields._itemDropEfficiencyMst_5__3 = (struct ItemDropEfficiencyMaster_o *)v9;
  sub_1C3E508((CGThumbnailListItem_o *)&v3->fields._itemDropEfficiencyMst_5__3, (int32_t)v9, v10, v11);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_51;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)this, 0, 1, 0, 0);
  v3->fields._eventEntList_5__4 = EnableEntityList;
  sub_1C3E508((CGThumbnailListItem_o *)&v3->fields._eventEntList_5__4, (int32_t)EnableEntityList, v13, v14);
  eventEntList_5__4 = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields._eventEntList_5__4;
  if ( !eventEntList_5__4 )
    goto LABEL_51;
  if ( eventEntList_5__4[1].monitor )
  {
    v16 = ItemLinkInfoWindowComponent___c_TypeInfo;
    if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
      v16 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    _9__22_0 = (System_Func_object__long__o *)v16->static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = ItemLinkInfoWindowComponent___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__22_0 = (System_Func_object__long__o *)sub_1C3E7B0(System_Func_EventEntity__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__22_0,
        v18,
        Method_ItemLinkInfoWindowComponent___c__CoCreateItemTransitionList_b__22_0__,
        0);
      static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = (struct System_Func_EventEntity__long__o *)_9__22_0;
      sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v20, v21);
    }
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__long_(
                                                                 eventEntList_5__4,
                                                                 (System_Func_TSource__TKey__o *)_9__22_0,
                                                                 (const MethodInfo_312930C *)Method_System_Linq_Enumerable_OrderBy_EventEntity__long___);
    v23 = System_Linq_Enumerable__ToArray_object_(
            v22,
            (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_EventEntity___);
    v3->fields._eventEntList_5__4 = (struct EventEntity_array *)v23;
    sub_1C3E508((CGThumbnailListItem_o *)&v3->fields._eventEntList_5__4, (int32_t)v23, v24, v25);
  }
  v26 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  v3->fields._groupList_5__5 = (struct System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v26;
  sub_1C3E508((CGThumbnailListItem_o *)&v3->fields._groupList_5__5, (int32_t)v26, v27, v28);
  v29 = 0;
  for ( v3->fields._i_5__6 = 0; ; v3->fields._i_5__6 = v29 )
  {
    itemIdList = v3->fields.itemIdList;
    if ( !itemIdList )
      goto LABEL_51;
    max_length = itemIdList->max_length;
    if ( v29 >= max_length )
    {
      if ( !_4__this )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)_4__this->fields.listViewManager;
      if ( !this )
        goto LABEL_51;
      ItemLinkInfoListViewManager__CreateList((ItemLinkInfoListViewManager_o *)this, v3->fields._groupList_5__5, 0, v2);
      return 0;
    }
    if ( v29 >= (unsigned int)max_length )
      goto LABEL_52;
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v3->fields._itemMst_5__2;
    if ( !this )
      goto LABEL_51;
    v30 = itemIdList->m_Items[v29];
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                &entity,
                                                                                v30,
                                                                                (const MethodInfo_33B2FA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_22:
    v29 = v3->fields._i_5__6 + 1;
  }
  needNumList = v3->fields.needNumList;
  if ( !needNumList )
    goto LABEL_51;
  i_5__6 = v3->fields._i_5__6;
  v36 = needNumList->max_length;
  if ( (int)i_5__6 >= v36 )
  {
    v37 = 0;
  }
  else
  {
    if ( (unsigned int)i_5__6 >= v36 )
LABEL_52:
      sub_1C3E7C8(this, method);
    v37 = needNumList->m_Items[i_5__6];
  }
  v38 = sub_1C3E7B0(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0);
  if ( !v38 )
    goto LABEL_51;
  *(_QWORD *)(v38 + 24) = 0;
  *(_DWORD *)(v38 + 16) = v30;
  sub_1C3E508((CGThumbnailListItem_o *)(v38 + 24), 0, v39, v40);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v3->fields._itemDropEfficiencyMst_5__3;
  if ( !this )
    goto LABEL_51;
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)ItemDropEfficiencyMaster__GetEnabledListByItemId(
                                                                              (ItemDropEfficiencyMaster_o *)this,
                                                                              v30,
                                                                              0);
  if ( !_4__this )
    goto LABEL_51;
  ItemLinkInfoListViewItemList = (System_Collections_Generic_List_object__o *)ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItemList(
                                                                                _4__this,
                                                                                (System_Collections_Generic_List_ItemDropEfficiencyEntity__o *)this,
                                                                                1,
                                                                                v37,
                                                                                (ItemEntity_o *)entity,
                                                                                v3->fields._eventEntList_5__4,
                                                                                v41);
  v60 = ItemLinkInfoListViewItemList;
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)System_Linq_Enumerable__Any_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)ItemLinkInfoListViewItemList,
                                                                              (const MethodInfo_31055E8 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
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
                                  v43);
        *(_QWORD *)(v38 + 40) = ListDescriptionObject;
        sub_1C3E508((CGThumbnailListItem_o *)(v38 + 40), (int32_t)ListDescriptionObject, v47, v48);
        goto LABEL_41;
      }
LABEL_51:
      sub_1C3E7C0(this, method);
    }
LABEL_41:
    ItemLinkInfoWindowComponent__SortViewItemList(
      (ItemLinkInfoWindowComponent_o *)this,
      (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v60,
      v43);
    ItemLinkInfoWindowComponent__CheckRecommendBoard(
      v49,
      (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v60,
      v50);
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v60;
    if ( !v60 )
      goto LABEL_51;
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)System_Collections_Generic_List_object___get_Item(
                                                                                v60,
                                                                                0,
                                                                                (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !this )
      goto LABEL_51;
    *((_BYTE *)&this[1].fields._i_5__6 + 4) = 1;
    ItemLinkInfoListViewItemList = v60;
  }
  *(_QWORD *)(v38 + 48) = ItemLinkInfoListViewItemList;
  sub_1C3E508((CGThumbnailListItem_o *)(v38 + 48), (int32_t)ItemLinkInfoListViewItemList, (int32_t)v43, v44);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v3->fields._groupList_5__5;
  if ( !this )
    goto LABEL_51;
  v53 = *(_QWORD *)&this->fields.__1__state;
  v54 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v53 )
    goto LABEL_51;
  _2__current_low = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)_2__current_low >= *(_DWORD *)(v53 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v38,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  }
  else
  {
    v56 = v53 + 8 * _2__current_low;
    LODWORD(this->fields.__2__current) = _2__current_low + 1;
    *(_QWORD *)(v56 + 32) = v38;
    sub_1C3E508((CGThumbnailListItem_o *)(v56 + 32), v38, v51, v52);
  }
  v3->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
  sub_1C3E508(p__2__current, 0, v57, v58);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C59613 & 1) == 0 )
  {
    sub_1C3E564(&ItemLinkInfoWindowComponent___c_TypeInfo);
    byte_4C59613 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(ItemLinkInfoWindowComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ItemLinkInfoWindowComponent___c_TypeInfo->static_fields->__9 = (struct ItemLinkInfoWindowComponent___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)ItemLinkInfoWindowComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, 0);
  return e->fields.startedAt;
}


void ItemLinkInfoWindowComponent___c___CreateItemLinkInfoListViewItem_b__24_2(
        ItemLinkInfoWindowComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C59614 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C59614 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C3E7C0(Instance, v3);
  }
  CommonUI__ItemLinkInfoTransChainAction((CommonUI_o *)Instance, 0);
}


int64_t ItemLinkInfoWindowComponent___c___OpenUserItemInfo_b__20_0(
        ItemLinkInfoWindowComponent___c_o *this,
        EventEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C3E7C0(this, 0);
  return e->fields.startedAt;
}


int32_t ItemLinkInfoWindowComponent___c___SortViewItemList_b__31_0(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C3E7C0(this, 0);
  return !n->fields._IsLocked_k__BackingField;
}


int32_t ItemLinkInfoWindowComponent___c___SortViewItemList_b__31_1(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C3E7C0(this, 0);
  return ItemTransitionType__GetSortPriority(n->fields._Type_k__BackingField, 0);
}


int32_t ItemLinkInfoWindowComponent___c___SortViewItemList_b__31_2(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C3E7C0(this, 0);
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
  if ( (byte_4C59615 & 1) == 0 )
  {
    this = (ItemLinkInfoWindowComponent___c__DisplayClass23_0_o *)sub_1C3E564(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C59615 = 1;
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
               (const MethodInfo_3116AFC *)Method_System_Linq_Enumerable_Contains_int___);
LABEL_8:
    sub_1C3E7C0(this, ent);
  }
  return 0;
}


void ItemLinkInfoWindowComponent___c__DisplayClass24_0___ctor(
        ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ItemLinkInfoWindowComponent___c__DisplayClass24_0___CreateItemLinkInfoListViewItem_b__0(
        ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  ItemLinkInfoWindowComponent___c_c *v4; // x0
  ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt; // x19
  ItemLinkInfoWindowComponent_o *_4__this; // x20
  ItemLinkInfoListViewItem_o *viewItem; // x21
  System_Action_o *_9__24_2; // x22
  Il2CppObject *v9; // x23
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C59616 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_ItemLinkInfoWindowComponent___c__CreateItemLinkInfoListViewItem_b__24_2__);
    sub_1C3E564(&ItemLinkInfoWindowComponent___c_TypeInfo);
    byte_4C59616 = 1;
  }
  v4 = ItemLinkInfoWindowComponent___c_TypeInfo;
  _4__this = this->fields.__4__this;
  itemDropEfficiencyEnt = this->fields.itemDropEfficiencyEnt;
  viewItem = this->fields.viewItem;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v4 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__24_2 = v4->static_fields->__9__24_2;
  if ( !_9__24_2 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v4->static_fields->__9;
    _9__24_2 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__24_2,
      v9,
      Method_ItemLinkInfoWindowComponent___c__CreateItemLinkInfoListViewItem_b__24_2__,
      0);
    static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__24_2 = _9__24_2;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__24_2, (int32_t)_9__24_2, v11, v12);
  }
  if ( !_4__this )
    sub_1C3E7C0(v4, method);
  ItemLinkInfoWindowComponent__ExecSceneTransition(_4__this, itemDropEfficiencyEnt, viewItem, _9__24_2, v2);
}


void ItemLinkInfoWindowComponent___c__DisplayClass24_0___CreateItemLinkInfoListViewItem_b__1(
        ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *v3; // x19
  System_Action_o *_9__3; // x23
  ItemLinkInfoWindowComponent_o *_4__this; // x20
  ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt; // x21
  ItemLinkInfoListViewItem_o *viewItem; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v3 = this;
  if ( (byte_4C59617 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    this = (ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *)sub_1C3E564(&Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__3__);
    byte_4C59617 = 1;
  }
  _9__3 = v3->fields.__9__3;
  _4__this = v3->fields.__4__this;
  itemDropEfficiencyEnt = v3->fields.itemDropEfficiencyEnt;
  viewItem = v3->fields.viewItem;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__3__,
      0);
    v3->fields.__9__3 = _9__3;
    sub_1C3E508((CGThumbnailListItem_o *)&v3->fields.__9__3, (int32_t)_9__3, v8, v9);
  }
  if ( !_4__this )
    sub_1C3E7C0(this, method);
  ItemLinkInfoWindowComponent__ExecSceneTransition(_4__this, itemDropEfficiencyEnt, viewItem, _9__3, v2);
}


void ItemLinkInfoWindowComponent___c__DisplayClass24_0___CreateItemLinkInfoListViewItem_b__3(
        ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ItemLinkInfoWindowComponent_o *_4__this; // x0

  if ( (byte_4C59618 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C59618 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (ItemLinkInfoWindowComponent__Close_45932796(_4__this, 0, v2),
        (_4__this = (ItemLinkInfoWindowComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C3E7C0(_4__this, method);
  }
  CommonUI__ItemLinkInfoTransChainAction((CommonUI_o *)_4__this, 0);
}


void ItemLinkInfoWindowComponent___c__DisplayClass36_0___ctor(
        ItemLinkInfoWindowComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ItemLinkInfoWindowComponent___c__DisplayClass36_0___IsBoardActive_b__0(
        ItemLinkInfoWindowComponent___c__DisplayClass36_0_o *this,
        GachaEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C3E7C0(this, 0);
  return n->fields.id == this->fields.gachaId;
}