void __fastcall ItemLinkInfoWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B04A3F & 1) == 0 )
  {
    sub_1BC3008(&ItemLinkInfoWindowComponent_TypeInfo, v1);
    byte_4B04A3F = 1;
  }
  LODWORD(ItemLinkInfoWindowComponent_TypeInfo->static_fields->STONE_DETAIL_VIEW_BG_POSITION_Y) = (struct ItemLinkInfoWindowComponent_StaticFields)1092616192;
}


void __fastcall ItemLinkInfoWindowComponent___ctor(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B04A3E & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4B04A3E = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__Callback(
        ItemLinkInfoWindowComponent_o *this,
        bool result,
        const MethodInfo *method)
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
    p_callbackFunc->klass = 0LL;
    sub_1BC2FAC(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall ItemLinkInfoWindowComponent__CheckRecommendBoard(
        ItemLinkInfoWindowComponent_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewItem__o **viewList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  char v7; // w22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x8
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B04A36 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__Dispose__, viewList);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__MoveNext__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__get_Current__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__GetEnumerator__, v6);
    byte_4B04A36 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !*viewList )
    sub_1BC3264(0LL, viewList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)*viewList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__GetEnumerator__);
  v7 = 0;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v11.fields._current;
    if ( (v7 & 1) != 0 )
    {
      if ( !v11.fields._current )
        sub_1BC3264(v8, v9);
      v7 = 1;
    }
    else
    {
      if ( !v11.fields._current )
        sub_1BC3264(v8, v9);
      if ( LODWORD(v11.fields._current[11].klass) == 4 )
      {
        v7 = 1;
        BYTE2(v11.fields._current[9].monitor) = 1;
      }
      else
      {
        v7 = 0;
      }
    }
    if ( ((__int64)current[11].klass & 0xFFFFFFFE) == 2 )
      BYTE2(current[9].monitor) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__Dispose__);
}


void __fastcall ItemLinkInfoWindowComponent__Close(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemLinkInfoWindowComponent__Close_45042816(this, 0LL, v2);
}


void __fastcall ItemLinkInfoWindowComponent__Close_45042816(
        ItemLinkInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *listViewManager; // x21
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  ItemLinkInfoListViewManager_o *v11; // x0
  System_Action_o *v12; // x20

  if ( (byte_4B04A3C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_ItemLinkInfoWindowComponent_EndClose__, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    byte_4B04A3C = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
    {
      v11 = this->fields.listViewManager;
      if ( !v11 )
        sub_1BC3264(0LL, v8);
      ItemLinkInfoListViewManager__DeleteCallback(v11, v8);
    }
    this->fields.state = 3;
    this->fields.closeCallbackFunc = callback;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v9, v10);
    v12 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ItemLinkInfoWindowComponent__CoCreateItemTransitionList(
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

  if ( (byte_4B04A2C & 1) == 0 )
  {
    sub_1BC3008(&ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_TypeInfo, itemIdList);
    byte_4B04A2C = 1;
  }
  v7 = sub_1BC3254(ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 48) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 32) = itemIdList;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)itemIdList, v10, v11);
  *(_QWORD *)(v7 + 40) = needNumList;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)needNumList, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *__fastcall ItemLinkInfoWindowComponent__CreateEventRewardTransitionParam(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_String_o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  System_String_o *v11; // x19
  struct System_String_o *transitionParam; // x1
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  int32_t v20; // [xsp+8h] [xbp-28h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-24h] BYREF

  v20 = slot;
  v21 = eventId;
  if ( (byte_4B04A30 & 1) == 0 )
  {
    sub_1BC3008(&string___TypeInfo, itemDropEfficiencyEnt);
    sub_1BC3008(&StringLiteral_1039/*"/"*/, v6);
    byte_4B04A30 = 1;
  }
  v7 = (System_String_o *)sub_1BC30B0(string___TypeInfo, 5LL);
  if ( !itemDropEfficiencyEnt || (v11 = v7) == 0LL )
    sub_1BC3264(v7, v8);
  if ( !LODWORD(v7[1].klass) )
    goto LABEL_11;
  transitionParam = itemDropEfficiencyEnt->fields.transitionParam;
  v7[1].monitor = transitionParam;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v7[1].monitor, (int32_t)transitionParam, v9, v10);
  if ( LODWORD(v11[1].klass) <= 1 )
    goto LABEL_11;
  v14 = StringLiteral_1039/*"/"*/;
  v11[1].fields = (System_String_Fields)StringLiteral_1039/*"/"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v11[1].fields, v14, v9, v13);
  v7 = System_Int32__ToString((int32_t)&v21, 0LL);
  if ( LODWORD(v11[1].klass) <= 2
    || (v11[2].klass = (System_String_c *)v7,
        sub_1BC2FAC((CGThumbnailListItem_o *)&v11[2], (int32_t)v7, v9, v15),
        LODWORD(v11[1].klass) <= 3)
    || (v17 = StringLiteral_1039/*"/"*/,
        v11[2].monitor = (void *)StringLiteral_1039/*"/"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)&v11[2].monitor, v17, v9, v16),
        v7 = System_Int32__ToString((int32_t)&v20, 0LL),
        LODWORD(v11[1].klass) <= 4) )
  {
LABEL_11:
    sub_1BC326C(v7, v8, v9);
  }
  v11[2].fields = (System_String_Fields)v7;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v11[2].fields, (int32_t)v7, v9, v18);
  return System_String__Concat_62389164((System_String_array *)v11, 0LL);
}


ItemLinkInfoDetailObject_o *__fastcall ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
        ItemLinkInfoWindowComponent_o *this,
        ItemEntity_o *itemEnt,
        UnityEngine_GameObject_o *parentObject,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x8
  Il2CppObject *v12; // x22
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v14; // x21
  ItemLinkInfoDetailObject_o *v15; // x22
  const MethodInfo *v16; // x3

  v8 = this;
  if ( (byte_4B04A2F & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoDetailObject___, itemEnt);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v9);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4B04A2F = 1;
  }
  v11 = 128LL;
  if ( isDispStoneDetail )
    v11 = 152LL;
  if ( !parentObject )
    goto LABEL_13;
  v12 = *(Il2CppObject **)((char *)&v8->klass + v11);
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__Instantiate_object__50900816(
          v12,
          transform,
          (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  v15 = 0LL;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v14 )
    {
      this = (ItemLinkInfoWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)v14,
                                                (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoDetailObject___);
      if ( this )
      {
        v15 = (ItemLinkInfoDetailObject_o *)this;
        ItemLinkInfoDetailObject__Setup((ItemLinkInfoDetailObject_o *)this, itemEnt, isDispStoneDetail, v16);
        return v15;
      }
    }
LABEL_13:
    sub_1BC3264(this, itemEnt);
  }
  return v15;
}


// local variable allocation has failed, the output may be wrong!
ItemLinkInfoListViewItem_o *__fastcall ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItem(
        ItemLinkInfoWindowComponent_o *this,
        int32_t index,
        ItemEntity_o *itemEnt,
        ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt,
        bool isItemGetInfoList,
        int32_t needNum,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x21
  __int64 IsNotDisplayQuestInfo; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  ItemLinkInfoListViewItem_o *v25; // x25
  const MethodInfo *v26; // x2
  __int64 *v27; // x24
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x1
  __int64 v35; // x22
  __int64 v36; // x22
  int v37; // w8
  __int64 *v38; // x19
  System_Action_o *v39; // x0
  __int64 v40; // x2
  System_Action_o *v41; // x19
  int32_t v42; // w2
  const MethodInfo *v43; // x3

  if ( (byte_4B04A2E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&ItemLinkInfoListViewItem_TypeInfo, v13);
    sub_1BC3008(&Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__0__, v14);
    sub_1BC3008(&Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__1__, v15);
    sub_1BC3008(&ItemLinkInfoWindowComponent___c__DisplayClass24_0_TypeInfo, v16);
    byte_4B04A2E = 1;
  }
  v17 = sub_1BC3254(ItemLinkInfoWindowComponent___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_15;
  *(_QWORD *)(v17 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 16), (int32_t)this, v20, v21);
  *(_QWORD *)(v17 + 24) = itemDropEfficiencyEnt;
  v22 = v17 + 24;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 24), (int32_t)itemDropEfficiencyEnt, v23, v24);
  v25 = (ItemLinkInfoListViewItem_o *)sub_1BC3254(ItemLinkInfoListViewItem_TypeInfo);
  ItemLinkInfoListViewItem___ctor(v25, index, v26);
  *(_QWORD *)(v17 + 32) = v25;
  v27 = (__int64 *)(v17 + 32);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v25, v28, v29);
  IsNotDisplayQuestInfo = *(_QWORD *)(v17 + 32);
  if ( !IsNotDisplayQuestInfo )
    goto LABEL_15;
  *(_QWORD *)(IsNotDisplayQuestInfo + 136) = itemEnt;
  sub_1BC2FAC((CGThumbnailListItem_o *)(IsNotDisplayQuestInfo + 136), (int32_t)itemEnt, v30, v31);
  if ( !*(_QWORD *)v22 )
    goto LABEL_15;
  IsNotDisplayQuestInfo = *v27;
  if ( !*v27 )
    goto LABEL_15;
  v34 = *(_QWORD *)(*(_QWORD *)v22 + 40LL);
  *(_QWORD *)(IsNotDisplayQuestInfo + 112) = v34;
  sub_1BC2FAC((CGThumbnailListItem_o *)(IsNotDisplayQuestInfo + 112), v34, v32, v33);
  IsNotDisplayQuestInfo = *(_QWORD *)v22;
  if ( !*(_QWORD *)v22
    || (v35 = *v27,
        IsNotDisplayQuestInfo = ItemDropEfficiencyEntity__IsNotDisplayQuestInfo(
                                  (ItemDropEfficiencyEntity_o *)IsNotDisplayQuestInfo,
                                  0LL),
        !v35)
    || (*(_BYTE *)(v35 + 152) = IsNotDisplayQuestInfo & 1, !*(_QWORD *)v22)
    || (v36 = *v27) == 0 )
  {
LABEL_15:
    sub_1BC3264(IsNotDisplayQuestInfo, v19);
  }
  v37 = *(_DWORD *)(*(_QWORD *)v22 + 20LL);
  *(_BYTE *)(v36 + 155) = isItemGetInfoList;
  *(_DWORD *)(v36 + 176) = v37;
  *(_DWORD *)(v36 + 144) = needNum;
  if ( isItemGetInfoList )
    v38 = (__int64 *)&Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__0__;
  else
    v38 = (__int64 *)&Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__1__;
  v39 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  v40 = *v38;
  v41 = v39;
  System_Action___ctor(v39, (Il2CppObject *)v17, v40, 0LL);
  *(_QWORD *)(v36 + 168) = v41;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v36 + 168), (int32_t)v41, v42, v43);
  return *(ItemLinkInfoListViewItem_o **)(v17 + 32);
}


System_Collections_Generic_List_ItemLinkInfoListViewItem__o *__fastcall ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItemList(
        ItemLinkInfoWindowComponent_o *this,
        System_Collections_Generic_List_ItemDropEfficiencyEntity__o *itemDropEfficiencyList,
        bool isItemGetInfoList,
        int32_t needNum,
        ItemEntity_o *itemEnt,
        EventEntity_array *eventEntList,
        const MethodInfo *method)
{
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
  __int64 v23; // x27
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *Master_object; // x26
  System_Collections_Generic_List_object__o *v29; // x19
  int32_t v30; // w28
  CGThumbnailListItem_o *v31; // x29
  _BOOL8 v32; // x0
  __int64 v33; // x1
  ItemDropEfficiencyEntity_o *current; // x21
  ItemLinkInfoWindowComponent_o *TransitionParams; // x0
  const MethodInfo *v36; // x2
  Il2CppObject *MultiEventRewardViewItem; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  const MethodInfo *v40; // x6
  __int64 v41; // x8
  int v42; // w25
  int v43; // w27
  EventEntity_o *v44; // x22
  System_Collections_ICollection_o *EnableEventEntitiyList; // x23
  System_Func_object__bool__o *klass; // x24
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x6
  Il2CppObject *v50; // x24
  ItemLinkInfoListViewItem_o *ItemLinkInfoListViewItem; // x23
  _BOOL8 IsEventShopOpen; // x0
  __int64 v53; // x1
  const MethodInfo *v54; // x4
  System_String_o *TitleText; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t id; // w2
  ItemLinkInfoWindowComponent_o *v59; // x0
  const MethodInfo *v60; // x4
  System_String_o *EventRewardTransitionParam; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  ItemLinkInfoWindowComponent_o *v64; // x0
  const MethodInfo *v65; // x4
  System_String_o *ClosedMessage; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  __int64 v69; // x0
  __int64 v70; // x1
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  ItemLinkInfoListViewItem_o *v77; // x22
  const MethodInfo *v78; // x2
  _BOOL8 IsBoardActive; // x0
  __int64 v80; // x1
  const MethodInfo *v81; // x4
  System_String_o *v82; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  ItemLinkInfoWindowComponent_o *v85; // x0
  const MethodInfo *v86; // x2
  ItemLinkInfoWindowComponent_o *TargetId; // x0
  const MethodInfo *v88; // x2
  struct System_String_o *transitionParam; // x1
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  ItemLinkInfoWindowComponent_o *v92; // x0
  const MethodInfo *v93; // x4
  System_String_o *v94; // x0
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  __int64 v97; // x0
  __int64 v98; // x1
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  Il2CppClass **v104; // x0
  Il2CppObject *object; // [xsp+0h] [xbp-C0h]
  ClosedMessageMaster_o *closedMessageMst; // [xsp+8h] [xbp-B8h]
  ItemEntity_o **v108; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v112; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v113; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B04A2D & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Find_ShopEntity___, itemDropEfficiencyList);
    sub_1BC3008(&Method_DataManager_GetMaster_ClosedMessageMaster___, v10);
    sub_1BC3008(&Method_DataManager_GetMaster_ShopMaster___, v11);
    sub_1BC3008(&DataManager_TypeInfo, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__Dispose__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__MoveNext__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__get_Current__, v15);
    sub_1BC3008(&System_Func_ShopEntity__bool__TypeInfo, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__GetEnumerator__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__, v19);
    sub_1BC3008(&System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo, v20);
    sub_1BC3008(
      &Method_ItemLinkInfoWindowComponent___c__DisplayClass23_0__CreateItemLinkInfoListViewItemList_b__0__,
      v21);
    sub_1BC3008(&ItemLinkInfoWindowComponent___c__DisplayClass23_0_TypeInfo, v22);
    byte_4B04A2D = 1;
  }
  memset(&v113, 0, sizeof(v113));
  v23 = sub_1BC3254(ItemLinkInfoWindowComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_46;
  *(_QWORD *)(v23 + 16) = itemEnt;
  v108 = (ItemEntity_o **)(v23 + 16);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v23 + 16), (int32_t)itemEnt, v26, v27);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ShopMaster___);
  closedMessageMst = (ClosedMessageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  v29 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__);
  if ( !itemDropEfficiencyList )
LABEL_46:
    sub_1BC3264(v24, v25);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v112,
    (System_Collections_Generic_List_object__o *)itemDropEfficiencyList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__GetEnumerator__);
  v30 = 0;
  object = (Il2CppObject *)v23;
  v31 = (CGThumbnailListItem_o *)(v23 + 24);
  v113 = v112;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v113,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__MoveNext__);
    if ( !v32 )
      break;
    current = (ItemDropEfficiencyEntity_o *)v113.fields._current;
    if ( !v113.fields._current )
      sub_1BC3264(v32, v33);
    TransitionParams = (ItemLinkInfoWindowComponent_o *)ItemDropEfficiencyEntity__GetTransitionParams(
                                                          (ItemDropEfficiencyEntity_o *)v113.fields._current,
                                                          0LL);
    MultiEventRewardViewItem = (Il2CppObject *)ItemLinkInfoWindowComponent__IsCreateMultiEventRewardViewItem(
                                                 TransitionParams,
                                                 (System_String_array *)TransitionParams,
                                                 v36);
    if ( ((unsigned __int8)MultiEventRewardViewItem & 1) != 0 )
    {
      if ( !eventEntList )
        sub_1BC3264(MultiEventRewardViewItem, v38);
      v41 = *(_QWORD *)&eventEntList->max_length;
      if ( (int)v41 >= 1 )
      {
        v42 = 0;
        v43 = 0;
        do
        {
          if ( v42 >= (unsigned int)v41 )
            sub_1BC326C(MultiEventRewardViewItem, v38, v39);
          v44 = eventEntList->m_Items[v42];
          if ( !v44 )
            sub_1BC3264(MultiEventRewardViewItem, v38);
          if ( !Master_object )
            sub_1BC3264(MultiEventRewardViewItem, v38);
          EnableEventEntitiyList = (System_Collections_ICollection_o *)ShopMaster__GetEnableEventEntitiyList(
                                                                         (ShopMaster_o *)Master_object,
                                                                         v44->fields.id,
                                                                         0LL);
          MultiEventRewardViewItem = (Il2CppObject *)BasicHelper__IsNullOrEmpty(EnableEventEntitiyList, 0LL);
          if ( ((unsigned __int8)MultiEventRewardViewItem & 1) == 0 )
          {
            klass = (System_Func_object__bool__o *)v31->klass;
            if ( !v31->klass )
            {
              klass = (System_Func_object__bool__o *)sub_1BC3254(System_Func_ShopEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                klass,
                object,
                Method_ItemLinkInfoWindowComponent___c__DisplayClass23_0__CreateItemLinkInfoListViewItemList_b__0__,
                0LL);
              v31->klass = (CGThumbnailListItem_c *)klass;
              sub_1BC2FAC(v31, (int32_t)klass, v47, v48);
            }
            MultiEventRewardViewItem = BasicHelper__Find_object_(
                                         (System_Object_array *)EnableEventEntitiyList,
                                         (System_Func_T__bool__o *)klass,
                                         (const MethodInfo_2FEBEA8 *)Method_BasicHelper_Find_ShopEntity___);
            v50 = MultiEventRewardViewItem;
            if ( MultiEventRewardViewItem )
            {
              ItemLinkInfoListViewItem = ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItem(
                                           this,
                                           v30,
                                           *v108,
                                           current,
                                           isItemGetInfoList,
                                           needNum,
                                           v49);
              IsEventShopOpen = ShopMaster__IsEventShopOpen((ShopMaster_o *)Master_object, v44->fields.id, 0LL);
              if ( !ItemLinkInfoListViewItem )
                sub_1BC3264(IsEventShopOpen, v53);
              ItemLinkInfoListViewItem->fields._IsLocked_k__BackingField = !IsEventShopOpen;
              TitleText = ItemLinkInfoWindowComponent__GetTitleText(
                            (ItemLinkInfoWindowComponent_o *)IsEventShopOpen,
                            current,
                            ItemLinkInfoListViewItem,
                            v44,
                            v54);
              ItemLinkInfoListViewItem->fields._Name_k__BackingField = TitleText;
              sub_1BC2FAC(
                (CGThumbnailListItem_o *)&ItemLinkInfoListViewItem->fields._Name_k__BackingField,
                (int32_t)TitleText,
                v56,
                v57);
              id = v44->fields.id;
              ItemLinkInfoListViewItem->fields._TargetId_k__BackingField = id;
              ItemLinkInfoListViewItem->fields._TargetValueType_k__BackingField = 4;
              ItemLinkInfoListViewItem->fields._ItemDropEfficiencyPriority_k__BackingField = current->fields.priority
                                                                                           + v43;
              EventRewardTransitionParam = ItemLinkInfoWindowComponent__CreateEventRewardTransitionParam(
                                             v59,
                                             current,
                                             id,
                                             (int32_t)v50[2].monitor,
                                             v60);
              ItemLinkInfoListViewItem->fields._TransitionParam_k__BackingField = EventRewardTransitionParam;
              sub_1BC2FAC(
                (CGThumbnailListItem_o *)&ItemLinkInfoListViewItem->fields._TransitionParam_k__BackingField,
                (int32_t)EventRewardTransitionParam,
                v62,
                v63);
              ClosedMessage = ItemLinkInfoWindowComponent__GetClosedMessage(
                                v64,
                                closedMessageMst,
                                current,
                                ItemLinkInfoListViewItem->fields._TargetId_k__BackingField,
                                v65);
              ItemLinkInfoListViewItem->fields._ClosedMessage_k__BackingField = ClosedMessage;
              sub_1BC2FAC(
                (CGThumbnailListItem_o *)&ItemLinkInfoListViewItem->fields._ClosedMessage_k__BackingField,
                (int32_t)ClosedMessage,
                v67,
                v68);
              if ( !v29 )
                sub_1BC3264(v69, v70);
              items = v29->fields._items;
              v74 = Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__;
              ++v29->fields._version;
              if ( !items )
                sub_1BC3264(v69, v70);
              size = v29->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v29,
                  (Il2CppObject *)ItemLinkInfoListViewItem,
                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
              }
              else
              {
                v76 = &items->obj.klass + size;
                v29->fields._size = size + 1;
                v76[4] = (Il2CppClass *)ItemLinkInfoListViewItem;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v76 + 4), (int32_t)ItemLinkInfoListViewItem, v71, v72);
              }
              ++v43;
              ++v30;
            }
          }
          LODWORD(v41) = eventEntList->max_length;
          ++v42;
        }
        while ( v42 < (int)v41 );
      }
    }
    else
    {
      v77 = ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItem(
              this,
              v30,
              *v108,
              current,
              isItemGetInfoList,
              needNum,
              v40);
      IsBoardActive = ItemLinkInfoWindowComponent__IsBoardActive((ItemLinkInfoWindowComponent_o *)v77, current, v78);
      if ( !v77 )
        sub_1BC3264(IsBoardActive, v80);
      v77->fields._IsLocked_k__BackingField = !IsBoardActive;
      v82 = ItemLinkInfoWindowComponent__GetTitleText(
              (ItemLinkInfoWindowComponent_o *)IsBoardActive,
              current,
              v77,
              0LL,
              v81);
      v77->fields._Name_k__BackingField = v82;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v77->fields._Name_k__BackingField, (int32_t)v82, v83, v84);
      TargetId = (ItemLinkInfoWindowComponent_o *)ItemLinkInfoWindowComponent__GetTargetId(v85, current, v86);
      v77->fields._TargetId_k__BackingField = (int)TargetId;
      v77->fields._TargetValueType_k__BackingField = ItemLinkInfoWindowComponent__GetTargetValueType(
                                                       TargetId,
                                                       current,
                                                       v88);
      v77->fields._ItemDropEfficiencyPriority_k__BackingField = current->fields.priority;
      transitionParam = current->fields.transitionParam;
      v77->fields._TransitionParam_k__BackingField = transitionParam;
      sub_1BC2FAC(
        (CGThumbnailListItem_o *)&v77->fields._TransitionParam_k__BackingField,
        (int32_t)transitionParam,
        v90,
        v91);
      v94 = ItemLinkInfoWindowComponent__GetClosedMessage(v92, closedMessageMst, current, 0, v93);
      v77->fields._ClosedMessage_k__BackingField = v94;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v77->fields._ClosedMessage_k__BackingField, (int32_t)v94, v95, v96);
      if ( !v29 )
        sub_1BC3264(v97, v98);
      v101 = v29->fields._items;
      v102 = Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__;
      ++v29->fields._version;
      if ( !v101 )
        sub_1BC3264(v97, v98);
      v103 = v29->fields._size;
      if ( (unsigned int)v103 >= v101->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v29,
          (Il2CppObject *)v77,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
      }
      else
      {
        v104 = &v101->obj.klass + v103;
        v29->fields._size = v103 + 1;
        v104[4] = (Il2CppClass *)v77;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v104 + 4), (int32_t)v77, v99, v100);
      }
      ++v30;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v113,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__Dispose__);
  return (System_Collections_Generic_List_ItemLinkInfoListViewItem__o *)v29;
}


ItemLinkInfoTextObject_o *__fastcall ItemLinkInfoWindowComponent__CreateListDescriptionObject(
        ItemLinkInfoWindowComponent_o *this,
        UnityEngine_GameObject_o *parentObject,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *listDescriptionObject; // x20
  UnityEngine_Transform_o *transform; // x19
  Il2CppObject *v9; // x19

  v4 = this;
  if ( (byte_4B04A34 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoTextObject___, parentObject);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v5);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    byte_4B04A34 = 1;
  }
  if ( !parentObject )
    goto LABEL_10;
  listDescriptionObject = (Il2CppObject *)v4->fields.listDescriptionObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object__50900816(
         listDescriptionObject,
         transform,
         (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !v9 )
LABEL_10:
    sub_1BC3264(this, parentObject);
  return (ItemLinkInfoTextObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)v9,
                                       (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoTextObject___);
}


ItemLinkInfoSubHeaderObject_o *__fastcall ItemLinkInfoWindowComponent__CreateSubHeaderObject(
        ItemLinkInfoWindowComponent_o *this,
        UnityEngine_GameObject_o *parentObject,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *subHeaderObject; // x20
  UnityEngine_Transform_o *transform; // x19
  Il2CppObject *v9; // x19

  v4 = this;
  if ( (byte_4B04A33 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoSubHeaderObject___, parentObject);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject____76895672, v5);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    byte_4B04A33 = 1;
  }
  if ( !parentObject )
    goto LABEL_10;
  subHeaderObject = (Il2CppObject *)v4->fields.subHeaderObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object__50900816(
         subHeaderObject,
         transform,
         (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GameObject____76895672);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !v9 )
LABEL_10:
    sub_1BC3264(this, parentObject);
  return (ItemLinkInfoSubHeaderObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)v9,
                                            (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoSubHeaderObject___);
}


void __fastcall ItemLinkInfoWindowComponent__EndClose(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
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
    p_closeCallbackFunc->klass = 0LL;
    sub_1BC2FAC(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall ItemLinkInfoWindowComponent__EndOpen(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall ItemLinkInfoWindowComponent__ExecSceneTransition(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt,
        ItemLinkInfoListViewItem_o *viewItem,
        System_Action_o *closeAction,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  __int64 v16; // x1
  int32_t TargetValueType_k__BackingField; // w8
  int32_t TargetId_k__BackingField; // w21
  TerminalPramsManager_c *v19; // x0
  struct ItemEntity_o *ItemEnt_k__BackingField; // x8
  int32_t id; // w19
  TerminalPramsManager_c *v22; // x0
  System_Action_o *transitionAction; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B04A3B & 1) == 0 )
  {
    sub_1BC3008(&Method_ItemLinkInfoWindowComponent_ExecSceneTransition__, itemDropEfficiencyEnt);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v11);
    byte_4B04A3B = 1;
  }
  transitionAction = 0LL;
  if ( this->fields.state == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !viewItem || !itemDropEfficiencyEnt || !Instance )
      goto LABEL_33;
    if ( !CommonUI__TryGetSceneTransitionAction(
            (CommonUI_o *)Instance,
            &transitionAction,
            viewItem->fields._TransitionParam_k__BackingField,
            itemDropEfficiencyEnt->fields.script,
            closeAction,
            0LL) )
      return;
    v14 = Method_ItemLinkInfoWindowComponent_ExecSceneTransition__;
    if ( (*((_BYTE *)Method_ItemLinkInfoWindowComponent_ExecSceneTransition__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1BC3020(Method_ItemLinkInfoWindowComponent_ExecSceneTransition__);
    v15 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, viewItem->fields._IsLocked_k__BackingField, 0, 0LL);
    TargetValueType_k__BackingField = viewItem->fields._TargetValueType_k__BackingField;
    if ( (unsigned int)(TargetValueType_k__BackingField - 6) <= 3 )
    {
      TargetId_k__BackingField = viewItem->fields._TargetId_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4AFE2E9 )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v16);
        byte_4AFE2E9 = 1;
      }
      v19 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v19 = TerminalPramsManager_TypeInfo;
      }
      v19->static_fields->_ShopFocusItemId_k__BackingField = TargetId_k__BackingField;
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
      if ( !byte_4AFE2E9 )
      {
        sub_1BC3008(&TerminalPramsManager_TypeInfo, v16);
        byte_4AFE2E9 = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      v22->static_fields->_ShopFocusItemId_k__BackingField = id;
    }
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance
      || (PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL),
          (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0LL) )
    {
LABEL_33:
      sub_1BC3264(Instance, v13);
    }
    PartyOrganizationUtility__ClearFollowerInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    ActionExtensions__Call(transitionAction, 0LL);
  }
}


System_String_o *__fastcall ItemLinkInfoWindowComponent__GetClosedMessage(
        ItemLinkInfoWindowComponent_o *this,
        ClosedMessageMaster_o *closedMessageMst,
        ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_array *TransitionParams; // x20
  __int64 v16; // x2
  System_String_o **m_Items; // x8
  System_String_o *v19; // x20
  Il2CppObject *v20; // [xsp+0h] [xbp-40h] BYREF
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B04A32 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventMaster___, closedMessageMst);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9);
    sub_1BC3008(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v10);
    sub_1BC3008(&Method_System_Enum_TryParse_SceneList_Type___, v11);
    sub_1BC3008(&System_Enum_TypeInfo, v12);
    sub_1BC3008(&string_TypeInfo, v13);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BC3008(&StringLiteral_1/*""*/, v14);
    byte_4B04A32 = 1;
  }
  entity = 0LL;
  result = 0;
  v20 = 0LL;
  if ( !itemDropEfficiencyEnt || !closedMessageMst )
    goto LABEL_26;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)closedMessageMst,
          &entity,
          itemDropEfficiencyEnt->fields.closedMessageId,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__) )
    return string_TypeInfo->static_fields->Empty;
  TransitionParams = ItemDropEfficiencyEntity__GetTransitionParams(itemDropEfficiencyEnt, 0LL);
  this = (ItemLinkInfoWindowComponent_o *)BasicHelper__IsNullOrEmpty(
                                            (System_Collections_ICollection_o *)TransitionParams,
                                            0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    m_Items = (System_String_o **)&StringLiteral_1/*""*/;
  }
  else
  {
    if ( !TransitionParams )
      goto LABEL_26;
    if ( !TransitionParams->max_length )
      sub_1BC326C(this, closedMessageMst, v16);
    m_Items = TransitionParams->m_Items;
  }
  v19 = *m_Items;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)System_Enum__TryParse_Int32Enum__50367116(
                                            v19,
                                            1,
                                            &result,
                                            (const MethodInfo_3008A8C *)Method_System_Enum_TryParse_SceneList_Type___);
  if ( ((unsigned __int8)this & 1) != 0 && result == 72 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !this )
      goto LABEL_26;
    this = (ItemLinkInfoWindowComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              &v20,
                                              eventId,
                                              (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( entity && v20 )
        return System_String__Format((System_String_o *)entity[1].monitor, (Il2CppObject *)v20[2].monitor, 0LL);
LABEL_26:
      sub_1BC3264(this, closedMessageMst);
    }
  }
  if ( !entity )
    goto LABEL_26;
  return (System_String_o *)entity[1].monitor;
}


int32_t __fastcall ItemLinkInfoWindowComponent__GetTargetId(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  ItemLinkInfoWindowComponent_o *v14; // x20
  System_String_o *basePanel; // x21
  int m_CancellationTokenSource; // w8
  bool v17; // w0
  int32_t v18; // w8
  int32_t v20[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B04A38 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Enum_TryParse_SceneList_Type___, ent);
    sub_1BC3008(&System_Enum_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_1BC3008(&StringLiteral_8867/*"MasterMission"*/, v6);
    sub_1BC3008(&StringLiteral_8804/*"ManaPrism"*/, v7);
    sub_1BC3008(&StringLiteral_8305/*"LeafExchange"*/, v8);
    sub_1BC3008(&StringLiteral_6496/*"FRIEND_POINT"*/, v9);
    sub_1BC3008(&StringLiteral_15425/*"War"*/, v10);
    sub_1BC3008(&StringLiteral_10713/*"PurePrismExchange"*/, v11);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BC3008(&StringLiteral_11070/*"RarePrism"*/, v12);
    byte_4B04A38 = 1;
  }
  *(_QWORD *)result = 0LL;
  *(_QWORD *)v20 = 0LL;
  if ( !ent
    || (this = (ItemLinkInfoWindowComponent_o *)ent->fields.transitionParam) == 0LL
    || (this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0LL)) == 0LL )
  {
LABEL_45:
    sub_1BC3264(this, ent);
  }
  v14 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_46;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__50367116(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_3008A8C *)Method_System_Enum_TryParse_SceneList_Type___) )
    goto LABEL_37;
  if ( result[1] <= 22 )
  {
    if ( result[1] == 20 )
    {
      if ( SLODWORD(v14->fields.m_CancellationTokenSource) >= 2 )
      {
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62380816(
                                                  (System_String_o *)v14->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_6496/*"FRIEND_POINT"*/,
                                                  1,
                                                  0LL);
        if ( !(_DWORD)this )
          return (int)this;
        if ( LODWORD(v14->fields.m_CancellationTokenSource) > 1 )
        {
          v17 = System_Int32__TryParse((System_String_o *)v14->fields.basePanelList, v20, 0LL);
          v18 = v20[0];
          goto LABEL_42;
        }
LABEL_46:
        sub_1BC326C(this, ent, v13);
      }
    }
    else
    {
      if ( result[1] != 22 || SLODWORD(v14->fields.m_CancellationTokenSource) < 2 )
        goto LABEL_37;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62380816(
                                                (System_String_o *)v14->fields.basePanelList,
                                                (System_String_o *)StringLiteral_8804/*"ManaPrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_30;
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_46;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62380816(
                                                (System_String_o *)v14->fields.basePanelList,
                                                (System_String_o *)StringLiteral_10713/*"PurePrismExchange"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_30;
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_46;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62380816(
                                                (System_String_o *)v14->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11070/*"RarePrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_30;
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_46;
      if ( !System_String__Compare_62380816(
              (System_String_o *)v14->fields.basePanelList,
              (System_String_o *)StringLiteral_8305/*"LeafExchange"*/,
              1,
              0LL) )
      {
LABEL_30:
        LODWORD(this) = ent->fields.itemId;
        return (int)this;
      }
    }
LABEL_37:
    LODWORD(this) = 0;
    return (int)this;
  }
  if ( result[1] == 72 )
  {
    if ( SLODWORD(v14->fields.m_CancellationTokenSource) >= 2 )
    {
      v17 = System_Int32__TryParse((System_String_o *)v14->fields.basePanelList, result, 0LL);
      v18 = result[0];
      goto LABEL_42;
    }
    goto LABEL_37;
  }
  if ( result[1] != 34 )
    goto LABEL_37;
  m_CancellationTokenSource = (int)v14->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 3 )
  {
    this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62380816(
                                              (System_String_o *)v14->fields.basePanelList,
                                              (System_String_o *)StringLiteral_8867/*"MasterMission"*/,
                                              1,
                                              0LL);
    if ( !(_DWORD)this )
      return (int)this;
    if ( LODWORD(v14->fields.m_CancellationTokenSource) > 2 )
    {
      v17 = System_Int32__TryParse((System_String_o *)v14->fields.baseWindow, &v20[1], 0LL);
      v18 = v20[1];
LABEL_42:
      if ( v17 )
        LODWORD(this) = v18;
      else
        LODWORD(this) = 0;
      return (int)this;
    }
    goto LABEL_46;
  }
  if ( m_CancellationTokenSource != 2
    || System_String__Compare_62380816(
         (System_String_o *)v14->fields.basePanelList,
         (System_String_o *)StringLiteral_15425/*"War"*/,
         1,
         0LL)
    || !ItemDropEfficiencyEntity__IsMainScenario(ent, 0LL) )
  {
    goto LABEL_37;
  }
  this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !this )
    goto LABEL_45;
  this = (ItemLinkInfoWindowComponent_o *)QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0LL);
  if ( this )
    LODWORD(this) = *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1);
  return (int)this;
}


int32_t __fastcall ItemLinkInfoWindowComponent__GetTargetValueType(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *ent,
        const MethodInfo *method)
{
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
  __int64 v14; // x2
  ItemLinkInfoWindowComponent_o *v15; // x19
  System_String_o *basePanel; // x21
  int m_CancellationTokenSource; // w8
  int32_t v18; // w20
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B04A39 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Enum_TryParse_SceneList_Type___, ent);
    sub_1BC3008(&System_Enum_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_1BC3008(&StringLiteral_12873/*"Spot"*/, v6);
    sub_1BC3008(&StringLiteral_8867/*"MasterMission"*/, v7);
    sub_1BC3008(&StringLiteral_8804/*"ManaPrism"*/, v8);
    sub_1BC3008(&StringLiteral_8305/*"LeafExchange"*/, v9);
    sub_1BC3008(&StringLiteral_15425/*"War"*/, v10);
    sub_1BC3008(&StringLiteral_10713/*"PurePrismExchange"*/, v11);
    sub_1BC3008(&StringLiteral_11070/*"RarePrism"*/, v12);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BC3008(&StringLiteral_10833/*"Quest"*/, v13);
    byte_4B04A39 = 1;
  }
  *(_QWORD *)result = 0LL;
  v20 = 0;
  if ( !ent )
    goto LABEL_50;
  this = (ItemLinkInfoWindowComponent_o *)ent->fields.transitionParam;
  if ( !this )
    goto LABEL_50;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0LL);
  if ( !this )
    goto LABEL_50;
  v15 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_51;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__50367116(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_3008A8C *)Method_System_Enum_TryParse_SceneList_Type___) )
    return 0;
  switch ( result[1] )
  {
    case 22:
      if ( SLODWORD(v15->fields.m_CancellationTokenSource) < 2 )
        return 0;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62380816(
                                                (System_String_o *)v15->fields.basePanelList,
                                                (System_String_o *)StringLiteral_8804/*"ManaPrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 6;
      if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62380816(
                                                (System_String_o *)v15->fields.basePanelList,
                                                (System_String_o *)StringLiteral_10713/*"PurePrismExchange"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 7;
      if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62380816(
                                                (System_String_o *)v15->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11070/*"RarePrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 8;
      if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      if ( System_String__Compare_62380816(
             (System_String_o *)v15->fields.basePanelList,
             (System_String_o *)StringLiteral_8305/*"LeafExchange"*/,
             1,
             0LL) )
      {
        return 0;
      }
      return 9;
    case 72:
      if ( SLODWORD(v15->fields.m_CancellationTokenSource) < 2 )
        return 0;
      if ( System_Int32__TryParse((System_String_o *)v15->fields.basePanelList, &v20, 0LL) )
        return 4;
      else
        return 0;
    case 34:
      m_CancellationTokenSource = (int)v15->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource < 3 )
      {
        if ( m_CancellationTokenSource != 2
          || System_String__Compare_62380816(
               (System_String_o *)v15->fields.basePanelList,
               (System_String_o *)StringLiteral_15425/*"War"*/,
               1,
               0LL)
          || !ItemDropEfficiencyEntity__IsMainScenario(ent, 0LL) )
        {
          return 0;
        }
        this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( this )
        {
          if ( !QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0LL) )
            return 0;
          return 3;
        }
LABEL_50:
        sub_1BC3264(this, ent);
      }
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62380816(
                                                (System_String_o *)v15->fields.basePanelList,
                                                (System_String_o *)StringLiteral_8867/*"MasterMission"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 5;
      if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_Int32__TryParse(
                                                (System_String_o *)v15->fields.baseWindow,
                                                result,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        return 0;
      if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 1 )
LABEL_51:
        sub_1BC326C(this, ent, v14);
      v18 = 1;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62380816(
                                                (System_String_o *)v15->fields.basePanelList,
                                                (System_String_o *)StringLiteral_10833/*"Quest"*/,
                                                1,
                                                0LL);
      if ( (_DWORD)this )
      {
        if ( LODWORD(v15->fields.m_CancellationTokenSource) > 1 )
        {
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62380816(
                                                    (System_String_o *)v15->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_12873/*"Spot"*/,
                                                    1,
                                                    0LL);
          if ( !(_DWORD)this )
            return 2;
          if ( LODWORD(v15->fields.m_CancellationTokenSource) > 1 )
          {
            if ( !System_String__Compare_62380816(
                    (System_String_o *)v15->fields.basePanelList,
                    (System_String_o *)StringLiteral_15425/*"War"*/,
                    1,
                    0LL) )
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
  return v18;
}


System_String_o *__fastcall ItemLinkInfoWindowComponent__GetTitleText(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt,
        ItemLinkInfoListViewItem_o *viewItem,
        EventEntity_o *eventEnt,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t targetType; // w8
  struct System_String_StaticFields *p_shortName; // x8

  if ( (byte_4B04A37 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, itemDropEfficiencyEnt);
    sub_1BC3008(&string_TypeInfo, v8);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BC3008(&StringLiteral_7441/*"ITEM_LINK_INFO_LIST_HIDDEN_TITLE"*/, v9);
    byte_4B04A37 = 1;
  }
  if ( !itemDropEfficiencyEnt )
LABEL_18:
    sub_1BC3264(this, itemDropEfficiencyEnt);
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
      return System_String__Format(itemDropEfficiencyEnt->fields.title, (Il2CppObject *)p_shortName->Empty, 0LL);
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
  return LocalizationManager__Get((System_String_o *)StringLiteral_7441/*"ITEM_LINK_INFO_LIST_HIDDEN_TITLE"*/, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__Init(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleItemNameLabel; // x0

  if ( (byte_4B04A28 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4B04A28 = 1;
  }
  titleItemNameLabel = this->fields.titleItemNameLabel;
  if ( !titleItemNameLabel )
    goto LABEL_9;
  UILabel__set_text(titleItemNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleItemNameLabel = this->fields.titleWindowNameLabel;
  if ( !titleItemNameLabel
    || (UILabel__set_text(titleItemNameLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleItemNameLabel = (UILabel_o *)this->fields.itemDetailInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleItemNameLabel, 1, 0LL),
        (titleItemNameLabel = (UILabel_o *)this->fields.stoneDetailInfo) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleItemNameLabel, 1, 0LL),
        (titleItemNameLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1BC3264(titleItemNameLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleItemNameLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


bool __fastcall ItemLinkInfoWindowComponent__IsBoardActive(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *entity,
        const MethodInfo *method)
{
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
  __int64 v25; // x2
  ItemLinkInfoWindowComponent_o *v26; // x20
  System_String_o *basePanel; // x21
  BalanceConfig_c *v28; // x0
  int32_t ClassBoardReleaseQuestId; // w19
  bool v31; // w21
  __int64 v32; // x19
  System_Object_array *ListValidData; // x20
  System_Func_object__bool__o *v34; // x21
  int m_CancellationTokenSource; // w8
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_WarInfo_o *v37; // x19
  MapControl_SpotInfo_o *SpotInfo; // x0
  bool v39; // w0
  Il2CppObject *v40; // [xsp+0h] [xbp-40h] BYREF
  int32_t key; // [xsp+Ch] [xbp-34h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B04A3A & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, entity);
    sub_1BC3008(&Method_BasicHelper_Any_GachaEntity___, v4);
    sub_1BC3008(&CoinRoomUtility_TypeInfo, v5);
    sub_1BC3008(&CondType_TypeInfo, v6);
    sub_1BC3008(&Method_DataManager_GetMaster_EventMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_GachaMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMaster_ShopMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v11);
    sub_1BC3008(&Method_System_Enum_TryParse_SceneList_Type___, v12);
    sub_1BC3008(&System_Enum_TypeInfo, v13);
    sub_1BC3008(&System_Func_GachaEntity__bool__TypeInfo, v14);
    sub_1BC3008(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v15);
    sub_1BC3008(&Method_SingletonTemplate_QuestTree__get_Instance__, v16);
    sub_1BC3008(&Method_ItemLinkInfoWindowComponent___c__DisplayClass36_0__IsBoardActive_b__0__, v17);
    sub_1BC3008(&ItemLinkInfoWindowComponent___c__DisplayClass36_0_TypeInfo, v18);
    sub_1BC3008(&StringLiteral_12873/*"Spot"*/, v19);
    sub_1BC3008(&StringLiteral_8867/*"MasterMission"*/, v20);
    sub_1BC3008(&StringLiteral_6496/*"FRIEND_POINT"*/, v21);
    sub_1BC3008(&StringLiteral_15425/*"War"*/, v22);
    sub_1BC3008(&StringLiteral_4488/*"CoinRoom"*/, v23);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BC3008(&StringLiteral_10833/*"Quest"*/, v24);
    byte_4B04A3A = 1;
  }
  *(_QWORD *)result = 0LL;
  key = 0;
  v40 = 0LL;
  if ( !entity )
    goto LABEL_71;
  this = (ItemLinkInfoWindowComponent_o *)entity->fields.transitionParam;
  if ( !this )
    goto LABEL_71;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0LL);
  if ( !this )
    goto LABEL_71;
  v26 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_72;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__50367116(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_3008A8C *)Method_System_Enum_TryParse_SceneList_Type___) )
    return 0;
  if ( result[1] <= 34 )
  {
    v31 = 0;
    switch ( result[1] )
    {
      case 0x14:
        if ( SLODWORD(v26->fields.m_CancellationTokenSource) < 2
          || System_String__op_Equality(
               (System_String_o *)v26->fields.basePanelList,
               (System_String_o *)StringLiteral_6496/*"FRIEND_POINT"*/,
               0LL)
          || SLODWORD(v26->fields.m_CancellationTokenSource) < 2 )
        {
          return 1;
        }
        v32 = sub_1BC3254(ItemLinkInfoWindowComponent___c__DisplayClass36_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v32, 0LL);
        if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 1 )
          break;
        if ( !v32 )
          goto LABEL_71;
        System_Int32__TryParse((System_String_o *)v26->fields.basePanelList, (int32_t *)(v32 + 16), 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !this )
          goto LABEL_71;
        ListValidData = (System_Object_array *)GachaMaster__getListValidData((GachaMaster_o *)this, 0LL);
        v34 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_GachaEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v34,
          (Il2CppObject *)v32,
          Method_ItemLinkInfoWindowComponent___c__DisplayClass36_0__IsBoardActive_b__0__,
          0LL);
        return BasicHelper__Any_object__50246536(
                 ListValidData,
                 (System_Func_T__bool__o *)v34,
                 (const MethodInfo_2FEB388 *)Method_BasicHelper_Any_GachaEntity___);
      case 0x16:
        if ( SLODWORD(v26->fields.m_CancellationTokenSource) < 2 )
          return 1;
        v31 = 1;
        if ( System_String__Compare_62380816(
               (System_String_o *)v26->fields.basePanelList,
               (System_String_o *)StringLiteral_4488/*"CoinRoom"*/,
               1,
               0LL) )
        {
          return v31;
        }
        if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        return CoinRoomUtility__IsTargetQuestClear(0LL);
      case 0x17:
      case 0x1E:
      case 0x20:
        return 1;
      case 0x22:
        m_CancellationTokenSource = (int)v26->fields.m_CancellationTokenSource;
        if ( m_CancellationTokenSource < 3 )
        {
          if ( m_CancellationTokenSource == 2 )
          {
            v31 = 1;
            if ( System_String__Compare_62380816(
                   (System_String_o *)v26->fields.basePanelList,
                   (System_String_o *)StringLiteral_15425/*"War"*/,
                   1,
                   0LL) )
            {
              return v31;
            }
            if ( ItemDropEfficiencyEntity__IsMainScenario(entity, 0LL) )
            {
              this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( !this )
                goto LABEL_71;
              LatestProgressWarInfo = QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0LL);
              if ( LatestProgressWarInfo )
              {
                v37 = LatestProgressWarInfo;
                if ( MapControl_WarInfo__GetStatus(LatestProgressWarInfo, 0LL) != 3 )
                  return MapControl_WarInfo__GetStatus(v37, 0LL) != 4;
                return 0;
              }
            }
          }
          return 1;
        }
        v31 = 1;
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62380816(
                                                  (System_String_o *)v26->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_8867/*"MasterMission"*/,
                                                  1,
                                                  0LL);
        if ( !(_DWORD)this )
          return v31;
        if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 2 )
          break;
        this = (ItemLinkInfoWindowComponent_o *)System_Int32__TryParse(
                                                  (System_String_o *)v26->fields.baseWindow,
                                                  result,
                                                  0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 1;
        if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 1 )
          break;
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62380816(
                                                  (System_String_o *)v26->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_10833/*"Quest"*/,
                                                  1,
                                                  0LL);
        if ( !(_DWORD)this )
        {
          this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( this )
            return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)this, result[0], 0LL);
          goto LABEL_71;
        }
        if ( LODWORD(v26->fields.m_CancellationTokenSource) > 1 )
        {
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62380816(
                                                    (System_String_o *)v26->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_12873/*"Spot"*/,
                                                    1,
                                                    0LL);
          if ( !(_DWORD)this )
          {
            this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( this )
            {
              SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)this, result[0], 0LL);
              if ( SpotInfo )
                return SpotInfo->fields.dispType == 1;
              return 0;
            }
            goto LABEL_71;
          }
          if ( LODWORD(v26->fields.m_CancellationTokenSource) > 1 )
          {
            v31 = 1;
            if ( System_String__Compare_62380816(
                   (System_String_o *)v26->fields.basePanelList,
                   (System_String_o *)StringLiteral_15425/*"War"*/,
                   1,
                   0LL) )
            {
              return v31;
            }
            this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( this )
              return QuestTree__IsActiveWar((QuestTree_o *)this, result[0], 0LL);
LABEL_71:
            sub_1BC3264(this, entity);
          }
        }
        return v39;
      default:
        return v31;
    }
LABEL_72:
    sub_1BC326C(this, entity, v25);
  }
  if ( result[1] != 72 )
  {
    if ( result[1] == 91 )
    {
      v28 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v28 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v28->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestClear_39366056(ClassBoardReleaseQuestId, -1, 0, 0LL);
    }
    return 0;
  }
  if ( SLODWORD(v26->fields.m_CancellationTokenSource) < 2
    || !System_Int32__TryParse((System_String_o *)v26->fields.basePanelList, &key, 0LL) )
  {
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_71;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &v40,
          key,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !this )
    goto LABEL_71;
  return ShopMaster__IsEventShopOpen((ShopMaster_o *)this, key, 0LL);
}


bool __fastcall ItemLinkInfoWindowComponent__IsCreateMultiEventRewardViewItem(
        ItemLinkInfoWindowComponent_o *this,
        System_String_array *transitionParams,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o **m_Items; // x8
  System_String_o *v10; // x19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B04A31 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Enum_TryParse_SceneList_Type___, transitionParams);
    sub_1BC3008(&System_Enum_TypeInfo, v4);
    sub_1BC3008(&StringLiteral_1/*""*/, v5);
    byte_4B04A31 = 1;
  }
  result = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)transitionParams, 0LL);
  if ( IsNullOrEmpty )
  {
    if ( transitionParams )
    {
      m_Items = (System_String_o **)&StringLiteral_1/*""*/;
      goto LABEL_9;
    }
LABEL_15:
    sub_1BC3264(IsNullOrEmpty, v7);
  }
  if ( !transitionParams )
    goto LABEL_15;
  if ( !transitionParams->max_length )
    sub_1BC326C(IsNullOrEmpty, v7, v8);
  m_Items = transitionParams->m_Items;
  if ( transitionParams->max_length != 1 )
    return 0;
LABEL_9:
  v10 = *m_Items;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  return System_Enum__TryParse_Int32Enum__50367116(
           v10,
           1,
           &result,
           (const MethodInfo_3008A8C *)Method_System_Enum_TryParse_SceneList_Type___)
      && result == 72;
}


void __fastcall ItemLinkInfoWindowComponent__OnClickCancel(
        ItemLinkInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
    ItemLinkInfoWindowComponent__Callback(this, 0, v2);
}


void __fastcall ItemLinkInfoWindowComponent__Open(
        ItemLinkInfoWindowComponent_o *this,
        ItemEntity_o *itemEnt,
        ItemLinkInfoWindowComponent_CallbackFunc_o *callback,
        bool isDispStoneDetail,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *listViewBg; // x23
  ItemLinkInfoWindowComponent_c *v21; // x0
  int32_t id; // w24
  System_String_o **p_name; // x8
  System_Collections_Generic_List_object__o *v24; // x22
  __int64 v25; // x23
  UnityEngine_GameObject_o *v26; // x0
  const MethodInfo *v27; // x4
  ItemLinkInfoDetailObject_o *ItemLinkInfoDetailObject; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  const MethodInfo *v37; // x3
  System_Action_o *v38; // x20

  if ( (byte_4B04A29 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, itemEnt);
    sub_1BC3008(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v9);
    sub_1BC3008(&Method_ItemLinkInfoWindowComponent_EndOpen__, v10);
    sub_1BC3008(&ItemLinkInfoWindowComponent_TypeInfo, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__, v13);
    sub_1BC3008(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo, v14);
    sub_1BC3008(&StringLiteral_1/*""*/, v15);
    byte_4B04A29 = 1;
  }
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = this->fields.listViewBg;
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, isDispStoneDetail, 0LL);
  gameObject = this->fields.lineObject;
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, !isDispStoneDetail, 0LL);
  if ( isDispStoneDetail )
  {
    listViewBg = this->fields.listViewBg;
    v21 = ItemLinkInfoWindowComponent_TypeInfo;
    if ( !ItemLinkInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent_TypeInfo);
      v21 = ItemLinkInfoWindowComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(listViewBg, v21->static_fields->STONE_DETAIL_VIEW_BG_POSITION_Y, 0LL);
  }
  this->fields.callbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v18, v19);
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
  UILabel__set_text((UILabel_o *)gameObject, *p_name, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleWindowNameLabel;
  if ( !gameObject )
    goto LABEL_25;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v24 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  v25 = sub_1BC3254(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0LL);
  if ( !v25 )
    goto LABEL_25;
  *(_DWORD *)(v25 + 16) = id;
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
    goto LABEL_25;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  ItemLinkInfoDetailObject = ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
                               this,
                               itemEnt,
                               v26,
                               isDispStoneDetail,
                               v27);
  *(_QWORD *)(v25 + 24) = ItemLinkInfoDetailObject;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v25 + 24), (int32_t)ItemLinkInfoDetailObject, v29, v30);
  if ( !v24 )
    goto LABEL_25;
  items = v24->fields._items;
  v34 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++v24->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v24->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v24,
      (Il2CppObject *)v25,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v24->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v25;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v36 + 4), v25, v31, v32);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
LABEL_25:
    sub_1BC3264(gameObject, v17);
  ItemLinkInfoListViewManager__CreateList(
    (ItemLinkInfoListViewManager_o *)gameObject,
    (System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v24,
    isDispStoneDetail,
    v37);
  v38 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__OpenItemTransitionList(
        ItemLinkInfoWindowComponent_o *this,
        System_Int32_array *itemIdList,
        System_Int32_array *needNumList,
        ItemLinkInfoWindowComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  System_Collections_IEnumerator_o *ItemTransitionList; // x0
  System_Action_o *v16; // x20

  if ( (byte_4B04A2B & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, itemIdList);
    sub_1BC3008(&Method_ItemLinkInfoWindowComponent_EndOpen__, v9);
    byte_4B04A2B = 1;
  }
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.listViewBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        this->fields.callbackFunc = callback,
        sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v12, v13),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.titleItemNameLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
    sub_1BC3264(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ItemTransitionList = ItemLinkInfoWindowComponent__CoCreateItemTransitionList(this, itemIdList, needNumList, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, ItemTransitionList, 0LL);
  v16 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__OpenUserItemInfo(
        ItemLinkInfoWindowComponent_o *this,
        UserItemData_o *itemData,
        ItemLinkInfoWindowComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v6; // x19
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
  int32_t itemId; // w21
  System_Collections_Generic_List_ItemDropEfficiencyEntity__o *EnabledListByItemId; // x22
  const MethodInfo *v27; // x4
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_String_o **v30; // x8
  System_Collections_Generic_List_object__o *v31; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x24
  ItemLinkInfoWindowComponent___c_c *v33; // x0
  System_Func_T__TResult__o *_9__20_0; // x23
  Il2CppObject *v35; // x25
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  __int64 v40; // x23
  const MethodInfo *v41; // x6
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *ItemLinkInfoListViewItemList; // x22
  const MethodInfo *v43; // x2
  struct ItemLinkInfoListViewManager_o *listViewManager; // x8
  ItemLinkInfoSubHeaderObject_o *SubHeaderObject; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  ItemLinkInfoWindowComponent_o *v48; // x0
  const MethodInfo *v49; // x2
  ItemLinkInfoWindowComponent_o *v50; // x0
  const MethodInfo *v51; // x2
  Il2CppObject *v52; // x21
  const MethodInfo *v53; // x4
  struct ItemLinkInfoListViewManager_o *v54; // x8
  UnityEngine_GameObject_o *v55; // x2
  ItemLinkInfoDetailObject_o *ItemLinkInfoDetailObject; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  const MethodInfo *v68; // x3
  System_Action_o *v69; // x20
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewList; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_4B04A2A & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, itemData);
    sub_1BC3008(&Method_DataManager_GetMaster_EventMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_ItemDropEfficiencyMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMaster_ItemMaster___, v9);
    sub_1BC3008(&DataManager_TypeInfo, v10);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_ItemDropEfficiencyEntity___, v12);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, v13);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderBy_EventEntity__long___, v14);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_EventEntity___, v15);
    sub_1BC3008(&System_Func_EventEntity__long__TypeInfo, v16);
    sub_1BC3008(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v17);
    sub_1BC3008(&Method_ItemLinkInfoWindowComponent_EndOpen__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__, v20);
    sub_1BC3008(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo, v21);
    sub_1BC3008(&Method_ItemLinkInfoWindowComponent___c__OpenUserItemInfo_b__20_0__, v22);
    sub_1BC3008(&ItemLinkInfoWindowComponent___c_TypeInfo, v23);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BC3008(&StringLiteral_1/*""*/, v24);
    byte_4B04A2A = 1;
  }
  entity = 0LL;
  viewList = 0LL;
  if ( !itemData )
    goto LABEL_47;
  itemId = itemData->fields.itemId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
    goto LABEL_47;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    itemId,
    (const MethodInfo_32AF0BC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
  if ( !this )
    goto LABEL_47;
  EnabledListByItemId = ItemDropEfficiencyMaster__GetEnabledListByItemId(
                          (ItemDropEfficiencyMaster_o *)this,
                          itemId,
                          0LL);
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EnabledListByItemId,
          (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_ItemDropEfficiencyEntity___) )
  {
    ItemLinkInfoWindowComponent__Open(v6, (ItemEntity_o *)entity, callback, 0, v27);
    return;
  }
  v6->fields.state = 1;
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  if ( !this )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.listViewBg;
  if ( !this )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.lineObject;
  if ( !this )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v6->fields.callbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v6->fields.callbackFunc, (int32_t)callback, v28, v29);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.titleItemNameLabel;
  if ( !this )
    goto LABEL_47;
  v30 = (System_String_o **)(entity ? &entity[1].monitor : &StringLiteral_1/*""*/);
  UILabel__set_text((UILabel_o *)this, *v30, 0LL);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.titleWindowNameLabel;
  if ( !this )
    goto LABEL_47;
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_47;
  this = (ItemLinkInfoWindowComponent_o *)EventMaster__GetEnableEntityList((EventMaster_o *)this, 0, 1, 0, 0LL);
  if ( !this )
    goto LABEL_47;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)this;
  if ( this->fields.m_CancellationTokenSource )
  {
    v33 = ItemLinkInfoWindowComponent___c_TypeInfo;
    if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
      v33 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    _9__20_0 = (System_Func_T__TResult__o *)v33->static_fields->__9__20_0;
    if ( !_9__20_0 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = ItemLinkInfoWindowComponent___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v33->static_fields->__9;
      _9__20_0 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_EventEntity__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__20_0,
        v35,
        Method_ItemLinkInfoWindowComponent___c__OpenUserItemInfo_b__20_0__,
        0LL);
      static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
      static_fields->__9__20_0 = (struct System_Func_EventEntity__long__o *)_9__20_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v37, v38);
    }
    v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__long_(
                                                                 v32,
                                                                 (System_Func_TSource__TKey__o *)_9__20_0,
                                                                 (const MethodInfo_302D574 *)Method_System_Linq_Enumerable_OrderBy_EventEntity__long___);
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v39,
                                                                 (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_EventEntity___);
  }
  v40 = sub_1BC3254(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
  System_Object___ctor((Il2CppObject *)v40, 0LL);
  if ( !v40 )
    goto LABEL_47;
  *(_DWORD *)(v40 + 16) = itemId;
  ItemLinkInfoListViewItemList = ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItemList(
                                   v6,
                                   EnabledListByItemId,
                                   0,
                                   0,
                                   (ItemEntity_o *)entity,
                                   (EventEntity_array *)v32,
                                   v41);
  viewList = ItemLinkInfoListViewItemList;
  this = (ItemLinkInfoWindowComponent_o *)System_Linq_Enumerable__Any_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)ItemLinkInfoListViewItemList,
                                            (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    listViewManager = v6->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_47;
    SubHeaderObject = ItemLinkInfoWindowComponent__CreateSubHeaderObject(v6, listViewManager->fields.listParent, v43);
    *(_QWORD *)(v40 + 32) = SubHeaderObject;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v40 + 32), (int32_t)SubHeaderObject, v46, v47);
    ItemLinkInfoWindowComponent__SortViewItemList(v48, &viewList, v49);
    ItemLinkInfoWindowComponent__CheckRecommendBoard(v50, &viewList, v51);
    ItemLinkInfoListViewItemList = viewList;
  }
  v52 = entity;
  this = (ItemLinkInfoWindowComponent_o *)System_Linq_Enumerable__Any_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)ItemLinkInfoListViewItemList,
                                            (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
  v54 = v6->fields.listViewManager;
  if ( !v54 )
    goto LABEL_47;
  v55 = ((unsigned __int8)this & 1) != 0
      ? v54->fields.listParent
      : UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6->fields.listViewManager, 0LL);
  ItemLinkInfoDetailObject = ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
                               v6,
                               (ItemEntity_o *)v52,
                               v55,
                               0,
                               v53);
  *(_QWORD *)(v40 + 24) = ItemLinkInfoDetailObject;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v40 + 24), (int32_t)ItemLinkInfoDetailObject, v57, v58);
  v59 = (int)viewList;
  *(_QWORD *)(v40 + 48) = viewList;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v40 + 48), v59, v60, v61);
  if ( !v31 )
    goto LABEL_47;
  items = v31->fields._items;
  v65 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++v31->fields._version;
  if ( !items )
    goto LABEL_47;
  size = v31->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v31,
      (Il2CppObject *)v40,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
  }
  else
  {
    v67 = &items->obj.klass + size;
    v31->fields._size = size + 1;
    v67[4] = (Il2CppClass *)v40;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v67 + 4), v40, v62, v63);
  }
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.listViewManager;
  if ( !this )
LABEL_47:
    sub_1BC3264(this, itemData);
  ItemLinkInfoListViewManager__CreateList(
    (ItemLinkInfoListViewManager_o *)this,
    (System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v31,
    0,
    v68);
  v69 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v69, (Il2CppObject *)v6, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)v6, v69, 0, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__SortViewItemList(
        ItemLinkInfoWindowComponent_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewItem__o **viewList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ItemLinkInfoWindowComponent___c_c *v12; // x0
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v13; // x20
  System_Func_object__int__o *_9__31_0; // x21
  Il2CppObject *v15; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x0
  ItemLinkInfoWindowComponent___c_c *v20; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x20
  System_Func_object__int__o *_9__31_1; // x21
  Il2CppObject *v23; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x0
  ItemLinkInfoWindowComponent___c_c *v28; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x20
  System_Func_object__int__o *_9__31_2; // x21
  Il2CppObject *v31; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3

  if ( (byte_4B04A35 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderByDescending_ItemLinkInfoListViewItem__int___, viewList);
    sub_1BC3008(&Method_System_Linq_Enumerable_ThenByDescending_ItemLinkInfoListViewItem__int___, v4);
    sub_1BC3008(&Method_System_Linq_Enumerable_ThenBy_ItemLinkInfoListViewItem__int___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_ItemLinkInfoListViewItem___, v6);
    sub_1BC3008(&System_Func_ItemLinkInfoListViewItem__int__TypeInfo, v7);
    sub_1BC3008(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_0__, v8);
    sub_1BC3008(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_1__, v9);
    sub_1BC3008(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_2__, v10);
    sub_1BC3008(&ItemLinkInfoWindowComponent___c_TypeInfo, v11);
    byte_4B04A35 = 1;
  }
  v12 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v13 = *viewList;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v12 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__31_0 = (System_Func_object__int__o *)v12->static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__31_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__31_0,
      v15,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_0__,
      0LL);
    static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__31_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__31_0, (int32_t)_9__31_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (System_Func_TSource__TKey__o *)_9__31_0,
          (const MethodInfo_302DA1C *)Method_System_Linq_Enumerable_OrderByDescending_ItemLinkInfoListViewItem__int___);
  v20 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v21 = v19;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v20 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__31_1 = (System_Func_object__int__o *)v20->static_fields->__9__31_1;
  if ( !_9__31_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__31_1 = (System_Func_object__int__o *)sub_1BC3254(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__31_1,
      v23,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_1__,
      0LL);
    v24 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v24->__9__31_1 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__31_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v24->__9__31_1, (int32_t)_9__31_1, v25, v26);
  }
  v27 = System_Linq_Enumerable__ThenBy_object__int_(
          v21,
          (System_Func_TSource__TKey__o *)_9__31_1,
          (const MethodInfo_303D9E0 *)Method_System_Linq_Enumerable_ThenBy_ItemLinkInfoListViewItem__int___);
  v28 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v29 = v27;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v28 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__31_2 = (System_Func_object__int__o *)v28->static_fields->__9__31_2;
  if ( !_9__31_2 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__31_2 = (System_Func_object__int__o *)sub_1BC3254(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__31_2,
      v31,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_2__,
      0LL);
    v32 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v32->__9__31_2 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__31_2;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v32->__9__31_2, (int32_t)_9__31_2, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                               v29,
                                                               (System_Func_TSource__TKey__o *)_9__31_2,
                                                               (const MethodInfo_303DDDC *)Method_System_Linq_Enumerable_ThenByDescending_ItemLinkInfoListViewItem__int___);
  v36 = (System_Collections_Generic_List_ItemLinkInfoListViewItem__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v35,
                                                                         (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_ItemLinkInfoListViewItem___);
  *viewList = v36;
  sub_1BC2FAC((CGThumbnailListItem_o *)viewList, (int32_t)v36, v37, v38);
}


void __fastcall ItemLinkInfoWindowComponent__add_callbackFunc(
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

  if ( (byte_4B04A26 & 1) == 0 )
  {
    sub_1BC3008(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, value);
    byte_4B04A26 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ItemLinkInfoWindowComponent_CallbackFunc_c *)v8->klass != ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
  ItemLinkInfoWindowComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ItemLinkInfoWindowComponent__get_closeBtnPath(
        ItemLinkInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B04A3D & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_7569/*"InfoWindow/CloseBtn"*/, method);
    byte_4B04A3D = 1;
  }
  return (System_String_o *)StringLiteral_7569/*"InfoWindow/CloseBtn"*/;
}


void __fastcall ItemLinkInfoWindowComponent__remove_callbackFunc(
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

  if ( (byte_4B04A27 & 1) == 0 )
  {
    sub_1BC3008(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, value);
    byte_4B04A27 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ItemLinkInfoWindowComponent_CallbackFunc_c *)v8->klass != ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
  ItemLinkInfoWindowComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemLinkInfoWindowComponent_CallbackFunc___ctor(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0FF64;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)&loc_1A0FF1C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall ItemLinkInfoWindowComponent_CallbackFunc__BeginInvoke(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4B04A40 & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, result);
    byte_4B04A40 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall ItemLinkInfoWindowComponent_CallbackFunc__EndInvoke(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall ItemLinkInfoWindowComponent_CallbackFunc__Invoke(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22___ctor(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22__MoveNext(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v4; // x19
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
  int32_t _1__state; // w8
  struct ItemLinkInfoWindowComponent_o *_4__this; // x20
  Il2CppObject *Master_object; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  EventEntity_array *EnableEntityList; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_IEnumerable_TSource__o *eventEntList_5__4; // x22
  ItemLinkInfoWindowComponent___c_c *v32; // x0
  System_Func_T__TResult__o *_9__22_0; // x23
  Il2CppObject *v34; // x24
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Object_array *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_List_object__o *v42; // x21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int v45; // w8
  int32_t v46; // w22
  struct System_Int32_array *itemIdList; // x9
  int max_length; // w10
  bool result; // w0
  struct System_Int32_array *needNumList; // x8
  __int64 i_5__6; // x9
  int v52; // w10
  int32_t v53; // w23
  __int64 v54; // x21
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x6
  System_Collections_Generic_List_object__o *ItemLinkInfoListViewItemList; // x22
  const MethodInfo *v59; // x2
  const MethodInfo *v60; // x3
  struct ItemLinkInfoListViewManager_o *listViewManager; // x8
  ItemLinkInfoTextObject_o *ListDescriptionObject; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  ItemLinkInfoWindowComponent_o *v65; // x0
  const MethodInfo *v66; // x2
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  __int64 v69; // x8
  _QWORD *v70; // x9
  __int64 _2__current_low; // x10
  __int64 v72; // x8
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  System_Collections_Generic_List_object__o *v76; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4B04A46 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMaster_ItemDropEfficiencyMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMaster_ItemMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, v9);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderBy_EventEntity__long___, v10);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_EventEntity___, v11);
    sub_1BC3008(&System_Func_EventEntity__long__TypeInfo, v12);
    sub_1BC3008(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v16);
    sub_1BC3008(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo, v17);
    sub_1BC3008(&Method_ItemLinkInfoWindowComponent___c__CoCreateItemTransitionList_b__22_0__, v18);
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)sub_1BC3008(
                                                                                &ItemLinkInfoWindowComponent___c_TypeInfo,
                                                                                v19);
    byte_4B04A46 = 1;
  }
  v76 = 0LL;
  entity = 0LL;
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    goto LABEL_22;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ItemMaster___);
  v4->fields._itemMst_5__2 = (struct ItemMaster_o *)Master_object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._itemMst_5__2, (int32_t)Master_object, v23, v24);
  v25 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
  v4->fields._itemDropEfficiencyMst_5__3 = (struct ItemDropEfficiencyMaster_o *)v25;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._itemDropEfficiencyMst_5__3, (int32_t)v25, v26, v27);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_51;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)this, 0, 1, 0, 0LL);
  v4->fields._eventEntList_5__4 = EnableEntityList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._eventEntList_5__4, (int32_t)EnableEntityList, v29, v30);
  eventEntList_5__4 = (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields._eventEntList_5__4;
  if ( !eventEntList_5__4 )
    goto LABEL_51;
  if ( eventEntList_5__4[1].monitor )
  {
    v32 = ItemLinkInfoWindowComponent___c_TypeInfo;
    if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
      v32 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    _9__22_0 = (System_Func_T__TResult__o *)v32->static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = ItemLinkInfoWindowComponent___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v32->static_fields->__9;
      _9__22_0 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_EventEntity__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__22_0,
        v34,
        Method_ItemLinkInfoWindowComponent___c__CoCreateItemTransitionList_b__22_0__,
        0LL);
      static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = (struct System_Func_EventEntity__long__o *)_9__22_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__22_0, (int32_t)_9__22_0, v36, v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__long_(
                                                                 eventEntList_5__4,
                                                                 (System_Func_TSource__TKey__o *)_9__22_0,
                                                                 (const MethodInfo_302D574 *)Method_System_Linq_Enumerable_OrderBy_EventEntity__long___);
    v39 = System_Linq_Enumerable__ToArray_object_(
            v38,
            (const MethodInfo_303E54C *)Method_System_Linq_Enumerable_ToArray_EventEntity___);
    v4->fields._eventEntList_5__4 = (struct EventEntity_array *)v39;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._eventEntList_5__4, (int32_t)v39, v40, v41);
  }
  v42 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  v4->fields._groupList_5__5 = (struct System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v42;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._groupList_5__5, (int32_t)v42, v43, v44);
  v45 = 0;
  for ( v4->fields._i_5__6 = 0; ; v4->fields._i_5__6 = v45 )
  {
    itemIdList = v4->fields.itemIdList;
    if ( !itemIdList )
      goto LABEL_51;
    max_length = itemIdList->max_length;
    if ( v45 >= max_length )
    {
      if ( !_4__this )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)_4__this->fields.listViewManager;
      if ( !this )
        goto LABEL_51;
      ItemLinkInfoListViewManager__CreateList((ItemLinkInfoListViewManager_o *)this, v4->fields._groupList_5__5, 0, v3);
      return 0;
    }
    if ( v45 >= (unsigned int)max_length )
      goto LABEL_52;
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v4->fields._itemMst_5__2;
    if ( !this )
      goto LABEL_51;
    v46 = itemIdList->m_Items[v45 + 1];
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                &entity,
                                                                                v46,
                                                                                (const MethodInfo_32AF0BC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_22:
    v45 = v4->fields._i_5__6 + 1;
  }
  needNumList = v4->fields.needNumList;
  if ( !needNumList )
    goto LABEL_51;
  i_5__6 = v4->fields._i_5__6;
  v52 = needNumList->max_length;
  if ( (int)i_5__6 >= v52 )
  {
    v53 = 0;
  }
  else
  {
    if ( (unsigned int)i_5__6 >= v52 )
LABEL_52:
      sub_1BC326C(this, method, v2);
    v53 = needNumList->m_Items[i_5__6 + 1];
  }
  v54 = sub_1BC3254(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
  System_Object___ctor((Il2CppObject *)v54, 0LL);
  if ( !v54 )
    goto LABEL_51;
  *(_QWORD *)(v54 + 24) = 0LL;
  *(_DWORD *)(v54 + 16) = v46;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v54 + 24), 0, v55, v56);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v4->fields._itemDropEfficiencyMst_5__3;
  if ( !this )
    goto LABEL_51;
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)ItemDropEfficiencyMaster__GetEnabledListByItemId(
                                                                              (ItemDropEfficiencyMaster_o *)this,
                                                                              v46,
                                                                              0LL);
  if ( !_4__this )
    goto LABEL_51;
  ItemLinkInfoListViewItemList = (System_Collections_Generic_List_object__o *)ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItemList(
                                                                                _4__this,
                                                                                (System_Collections_Generic_List_ItemDropEfficiencyEntity__o *)this,
                                                                                1,
                                                                                v53,
                                                                                (ItemEntity_o *)entity,
                                                                                v4->fields._eventEntList_5__4,
                                                                                v57);
  v76 = ItemLinkInfoListViewItemList;
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)System_Linq_Enumerable__Any_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)ItemLinkInfoListViewItemList,
                                                                              (const MethodInfo_300D9DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v4->fields._i_5__6 )
    {
      listViewManager = _4__this->fields.listViewManager;
      if ( listViewManager )
      {
        ListDescriptionObject = ItemLinkInfoWindowComponent__CreateListDescriptionObject(
                                  _4__this,
                                  listViewManager->fields.listParent,
                                  v59);
        *(_QWORD *)(v54 + 40) = ListDescriptionObject;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v54 + 40), (int32_t)ListDescriptionObject, v63, v64);
        goto LABEL_41;
      }
LABEL_51:
      sub_1BC3264(this, method);
    }
LABEL_41:
    ItemLinkInfoWindowComponent__SortViewItemList(
      (ItemLinkInfoWindowComponent_o *)this,
      (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v76,
      v59);
    ItemLinkInfoWindowComponent__CheckRecommendBoard(
      v65,
      (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v76,
      v66);
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v76;
    if ( !v76 )
      goto LABEL_51;
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)System_Collections_Generic_List_object___get_Item(
                                                                                v76,
                                                                                0,
                                                                                (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !this )
      goto LABEL_51;
    BYTE4(this[1].fields._groupList_5__5) = 1;
    ItemLinkInfoListViewItemList = v76;
  }
  *(_QWORD *)(v54 + 48) = ItemLinkInfoListViewItemList;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v54 + 48), (int32_t)ItemLinkInfoListViewItemList, (int32_t)v59, v60);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v4->fields._groupList_5__5;
  if ( !this )
    goto LABEL_51;
  v69 = *(_QWORD *)&this->fields.__1__state;
  v70 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v69 )
    goto LABEL_51;
  _2__current_low = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)_2__current_low >= *(_DWORD *)(v69 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v54,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v72 = v69 + 8 * _2__current_low;
    LODWORD(this->fields.__2__current) = _2__current_low + 1;
    *(_QWORD *)(v72 + 32) = v54;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v72 + 32), v54, v67, v68);
  }
  v4->fields.__2__current = 0LL;
  p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1BC2FAC(p__2__current, 0, v73, v74);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *__fastcall ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22__System_Collections_IEnumerator_Reset(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22__System_Collections_IEnumerator_get_Current(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22__System_IDisposable_Dispose(
        ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ItemLinkInfoWindowComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B04A41 & 1) == 0 )
  {
    sub_1BC3008(&ItemLinkInfoWindowComponent___c_TypeInfo, v1);
    byte_4B04A41 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ItemLinkInfoWindowComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ItemLinkInfoWindowComponent___c_TypeInfo->static_fields->__9 = (struct ItemLinkInfoWindowComponent___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)ItemLinkInfoWindowComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ItemLinkInfoWindowComponent___c___ctor(
        ItemLinkInfoWindowComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall ItemLinkInfoWindowComponent___c___CoCreateItemTransitionList_b__22_0(
        ItemLinkInfoWindowComponent___c_o *this,
        EventEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BC3264(this, 0LL);
  return e->fields.startedAt;
}


void __fastcall ItemLinkInfoWindowComponent___c___CreateItemLinkInfoListViewItem_b__24_2(
        ItemLinkInfoWindowComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4B04A42 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B04A42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v3);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL, 0LL);
}


int64_t __fastcall ItemLinkInfoWindowComponent___c___OpenUserItemInfo_b__20_0(
        ItemLinkInfoWindowComponent___c_o *this,
        EventEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BC3264(this, 0LL);
  return e->fields.startedAt;
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__31_0(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BC3264(this, 0LL);
  return !n->fields._IsLocked_k__BackingField;
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__31_1(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BC3264(this, 0LL);
  return ItemTransitionType__GetSortPriority(n->fields._Type_k__BackingField, 0LL);
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__31_2(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BC3264(this, 0LL);
  return n->fields._ItemDropEfficiencyPriority_k__BackingField;
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass23_0___ctor(
        ItemLinkInfoWindowComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ItemLinkInfoWindowComponent___c__DisplayClass23_0___CreateItemLinkInfoListViewItemList_b__0(
        ItemLinkInfoWindowComponent___c__DisplayClass23_0_o *this,
        ShopEntity_o *ent,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent___c__DisplayClass23_0_o *v4; // x20
  struct ItemEntity_o *itemEnt; // x8

  v4 = this;
  if ( (byte_4B04A43 & 1) == 0 )
  {
    this = (ItemLinkInfoWindowComponent___c__DisplayClass23_0_o *)sub_1BC3008(
                                                                    &Method_System_Linq_Enumerable_Contains_int___,
                                                                    ent);
    byte_4B04A43 = 1;
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
               (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
LABEL_8:
    sub_1BC3264(this, ent);
  }
  return 0;
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass24_0___ctor(
        ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass24_0___CreateItemLinkInfoListViewItem_b__0(
        ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  __int64 v4; // x1
  __int64 v5; // x1
  ItemLinkInfoWindowComponent___c_c *v6; // x0
  ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt; // x19
  ItemLinkInfoWindowComponent_o *_4__this; // x20
  ItemLinkInfoListViewItem_o *viewItem; // x21
  System_Action_o *_9__24_2; // x22
  Il2CppObject *v11; // x23
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B04A44 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_ItemLinkInfoWindowComponent___c__CreateItemLinkInfoListViewItem_b__24_2__, v4);
    sub_1BC3008(&ItemLinkInfoWindowComponent___c_TypeInfo, v5);
    byte_4B04A44 = 1;
  }
  v6 = ItemLinkInfoWindowComponent___c_TypeInfo;
  _4__this = this->fields.__4__this;
  itemDropEfficiencyEnt = this->fields.itemDropEfficiencyEnt;
  viewItem = this->fields.viewItem;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v6 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__24_2 = v6->static_fields->__9__24_2;
  if ( !_9__24_2 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v6->static_fields->__9;
    _9__24_2 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      _9__24_2,
      v11,
      Method_ItemLinkInfoWindowComponent___c__CreateItemLinkInfoListViewItem_b__24_2__,
      0LL);
    static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__24_2 = _9__24_2;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__24_2, (int32_t)_9__24_2, v13, v14);
  }
  if ( !_4__this )
    sub_1BC3264(v6, method);
  ItemLinkInfoWindowComponent__ExecSceneTransition(_4__this, itemDropEfficiencyEnt, viewItem, _9__24_2, v2);
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass24_0___CreateItemLinkInfoListViewItem_b__1(
        ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *v3; // x19
  __int64 v4; // x1
  System_Action_o *_9__3; // x23
  ItemLinkInfoWindowComponent_o *_4__this; // x20
  ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt; // x21
  ItemLinkInfoListViewItem_o *viewItem; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v3 = this;
  if ( (byte_4B04A45 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    this = (ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *)sub_1BC3008(
                                                                    &Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__3__,
                                                                    v4);
    byte_4B04A45 = 1;
  }
  _9__3 = v3->fields.__9__3;
  _4__this = v3->fields.__4__this;
  itemDropEfficiencyEnt = v3->fields.itemDropEfficiencyEnt;
  viewItem = v3->fields.viewItem;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__3__,
      0LL);
    v3->fields.__9__3 = _9__3;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v3->fields.__9__3, (int32_t)_9__3, v9, v10);
  }
  if ( !_4__this )
    sub_1BC3264(this, method);
  ItemLinkInfoWindowComponent__ExecSceneTransition(_4__this, itemDropEfficiencyEnt, viewItem, _9__3, v2);
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass24_0___CreateItemLinkInfoListViewItem_b__3(
        ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ItemLinkInfoWindowComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BC3264(0LL, method);
  ItemLinkInfoWindowComponent__Close_45042816(_4__this, 0LL, v2);
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass36_0___ctor(
        ItemLinkInfoWindowComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ItemLinkInfoWindowComponent___c__DisplayClass36_0___IsBoardActive_b__0(
        ItemLinkInfoWindowComponent___c__DisplayClass36_0_o *this,
        GachaEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BC3264(this, 0LL);
  return n->fields.id == this->fields.gachaId;
}