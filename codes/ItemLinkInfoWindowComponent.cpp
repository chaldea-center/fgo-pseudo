void __fastcall ItemLinkInfoWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C24A09 & 1) == 0 )
  {
    sub_1C3B764(&ItemLinkInfoWindowComponent_TypeInfo, v1);
    byte_4C24A09 = 1;
  }
  LODWORD(ItemLinkInfoWindowComponent_TypeInfo->static_fields->STONE_DETAIL_VIEW_BG_POSITION_Y) = (struct ItemLinkInfoWindowComponent_StaticFields)1092616192;
}


void __fastcall ItemLinkInfoWindowComponent___ctor(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C24A08 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C24A08 = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct ItemLinkInfoWindowComponent_CallbackFunc_o *v9; // x20
  struct ItemLinkInfoWindowComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C3B708(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      result,
      *(_QWORD *)&v9->fields.extra_arg);
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

  if ( (byte_4C24A00 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__Dispose__, viewList);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__MoveNext__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__get_Current__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__GetEnumerator__, v6);
    byte_4C24A00 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !*viewList )
    sub_1C3B9C0(0LL, viewList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)*viewList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__GetEnumerator__);
  v7 = 0;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v11.fields._current;
    if ( (v7 & 1) != 0 )
    {
      if ( !v11.fields._current )
        sub_1C3B9C0(v8, v9);
      v7 = 1;
    }
    else
    {
      if ( !v11.fields._current )
        sub_1C3B9C0(v8, v9);
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
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__Dispose__);
}


void __fastcall ItemLinkInfoWindowComponent__Close(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemLinkInfoWindowComponent__Close_44703860(this, 0LL, v2);
}


void __fastcall ItemLinkInfoWindowComponent__Close_44703860(
        ItemLinkInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *listViewManager; // x21
  const MethodInfo *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  ItemLinkInfoListViewManager_o *v15; // x0
  System_Action_o *v16; // x20

  if ( (byte_4C24A06 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_ItemLinkInfoWindowComponent_EndClose__, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    byte_4C24A06 = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
    {
      v15 = this->fields.listViewManager;
      if ( !v15 )
        sub_1C3B9C0(0LL, v8);
      ItemLinkInfoListViewManager__DeleteCallback(v15, v8);
    }
    this->fields.state = 3;
    this->fields.closeCallbackFunc = callback;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
      (int64_t)callback,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    v16 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall ItemLinkInfoWindowComponent__CoCreateItemTransitionList(
        ItemLinkInfoWindowComponent_o *this,
        System_Int32_array *itemIdList,
        System_Int32_array *needNumList,
        const MethodInfo *method)
{
  __int64 v7; // x22
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4C249F6 & 1) == 0 )
  {
    sub_1C3B764(&ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_TypeInfo, itemIdList);
    byte_4C249F6 = 1;
  }
  v7 = sub_1C3B9B0(ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 48) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 32) = itemIdList;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)itemIdList, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 40) = needNumList;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)needNumList, v20, v21, v22, v23, v24, v25);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_String_o *v15; // x19
  struct System_String_o *transitionParam; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int32_t v44; // [xsp+8h] [xbp-28h] BYREF
  int32_t v45; // [xsp+Ch] [xbp-24h] BYREF

  v44 = slot;
  v45 = eventId;
  if ( (byte_4C249FA & 1) == 0 )
  {
    sub_1C3B764(&string___TypeInfo, itemDropEfficiencyEnt);
    sub_1C3B764(&StringLiteral_1102/*"/[delegate]"*/, v6);
    byte_4C249FA = 1;
  }
  v7 = (System_String_o *)sub_1C3B80C(string___TypeInfo, 5LL);
  if ( !itemDropEfficiencyEnt || (v15 = v7) == 0LL )
    sub_1C3B9C0(v7, v8);
  if ( !LODWORD(v7[1].klass) )
    goto LABEL_11;
  transitionParam = itemDropEfficiencyEnt->fields.transitionParam;
  v7[1].monitor = transitionParam;
  sub_1C3B708((PartyOrganizationUtility_o *)&v7[1].monitor, (int64_t)transitionParam, v9, v10, v11, v12, v13, v14);
  if ( LODWORD(v15[1].klass) <= 1 )
    goto LABEL_11;
  v23 = StringLiteral_1102/*"/[delegate]"*/;
  v15[1].fields = (System_String_Fields)StringLiteral_1102/*"/[delegate]"*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&v15[1].fields, v23, v17, v18, v19, v20, v21, v22);
  v7 = System_Int32__ToString((int32_t)&v45, 0LL);
  if ( LODWORD(v15[1].klass) <= 2
    || (v15[2].klass = (System_String_c *)v7,
        sub_1C3B708((PartyOrganizationUtility_o *)&v15[2], (int64_t)v7, v24, v25, v26, v27, v28, v29),
        LODWORD(v15[1].klass) <= 3)
    || (v36 = StringLiteral_1102/*"/[delegate]"*/,
        v15[2].monitor = (void *)StringLiteral_1102/*"/[delegate]"*/,
        sub_1C3B708((PartyOrganizationUtility_o *)&v15[2].monitor, v36, v30, v31, v32, v33, v34, v35),
        v7 = System_Int32__ToString((int32_t)&v44, 0LL),
        LODWORD(v15[1].klass) <= 4) )
  {
LABEL_11:
    sub_1C3B9C8(v7, v8);
  }
  v15[2].fields = (System_String_Fields)v7;
  sub_1C3B708((PartyOrganizationUtility_o *)&v15[2].fields, (int64_t)v7, v37, v38, v39, v40, v41, v42);
  return System_String__Concat_63382140((System_String_array *)v15, 0LL);
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

  v8 = this;
  if ( (byte_4C249F9 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoDetailObject___, itemEnt);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v9);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C249F9 = 1;
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
  v14 = UnityEngine_Object__Instantiate_object__50818788(
          v12,
          transform,
          (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  v15 = 0LL;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v14 )
    {
      this = (ItemLinkInfoWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)v14,
                                                (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoDetailObject___);
      if ( this )
      {
        v15 = (ItemLinkInfoDetailObject_o *)this;
        ItemLinkInfoDetailObject__Setup((ItemLinkInfoDetailObject_o *)this, itemEnt, isDispStoneDetail, 0LL);
        return v15;
      }
    }
LABEL_13:
    sub_1C3B9C0(this, itemEnt);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  ItemLinkInfoListViewItem_o *v33; // x25
  __int64 *v34; // x24
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x1
  __int64 v54; // x22
  __int64 v55; // x22
  int v56; // w8
  __int64 *v57; // x19
  System_Action_o *v58; // x0
  __int64 v59; // x2
  int64_t v60; // x19
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7

  if ( (byte_4C249F8 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1C3B764(&ItemLinkInfoListViewItem_TypeInfo, v13);
    sub_1C3B764(&Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__0__, v14);
    sub_1C3B764(&Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__1__, v15);
    sub_1C3B764(&ItemLinkInfoWindowComponent___c__DisplayClass24_0_TypeInfo, v16);
    byte_4C249F8 = 1;
  }
  v17 = sub_1C3B9B0(ItemLinkInfoWindowComponent___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_15;
  *(_QWORD *)(v17 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = itemDropEfficiencyEnt;
  v26 = v17 + 24;
  sub_1C3B708((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)itemDropEfficiencyEnt, v27, v28, v29, v30, v31, v32);
  v33 = (ItemLinkInfoListViewItem_o *)sub_1C3B9B0(ItemLinkInfoListViewItem_TypeInfo);
  ItemLinkInfoListViewItem___ctor(v33, index, 0LL);
  *(_QWORD *)(v17 + 32) = v33;
  v34 = (__int64 *)(v17 + 32);
  sub_1C3B708((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)v33, v35, v36, v37, v38, v39, v40);
  IsNotDisplayQuestInfo = *(_QWORD *)(v17 + 32);
  if ( !IsNotDisplayQuestInfo )
    goto LABEL_15;
  *(_QWORD *)(IsNotDisplayQuestInfo + 136) = itemEnt;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)(IsNotDisplayQuestInfo + 136),
    (int64_t)itemEnt,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( !*(_QWORD *)v26 )
    goto LABEL_15;
  IsNotDisplayQuestInfo = *v34;
  if ( !*v34 )
    goto LABEL_15;
  v53 = *(_QWORD *)(*(_QWORD *)v26 + 40LL);
  *(_QWORD *)(IsNotDisplayQuestInfo + 112) = v53;
  sub_1C3B708((PartyOrganizationUtility_o *)(IsNotDisplayQuestInfo + 112), v53, v47, v48, v49, v50, v51, v52);
  IsNotDisplayQuestInfo = *(_QWORD *)v26;
  if ( !*(_QWORD *)v26
    || (v54 = *v34,
        IsNotDisplayQuestInfo = ItemDropEfficiencyEntity__IsNotDisplayQuestInfo(
                                  (ItemDropEfficiencyEntity_o *)IsNotDisplayQuestInfo,
                                  0LL),
        !v54)
    || (*(_BYTE *)(v54 + 152) = IsNotDisplayQuestInfo & 1, !*(_QWORD *)v26)
    || (v55 = *v34) == 0 )
  {
LABEL_15:
    sub_1C3B9C0(IsNotDisplayQuestInfo, v19);
  }
  v56 = *(_DWORD *)(*(_QWORD *)v26 + 20LL);
  *(_BYTE *)(v55 + 155) = isItemGetInfoList;
  *(_DWORD *)(v55 + 176) = v56;
  *(_DWORD *)(v55 + 144) = needNum;
  if ( isItemGetInfoList )
    v57 = (__int64 *)&Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__0__;
  else
    v57 = (__int64 *)&Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__1__;
  v58 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  v59 = *v57;
  v60 = (int64_t)v58;
  System_Action___ctor(v58, (Il2CppObject *)v17, v59, 0LL);
  *(_QWORD *)(v55 + 168) = v60;
  sub_1C3B708((PartyOrganizationUtility_o *)(v55 + 168), v60, v61, v62, v63, v64, v65, v66);
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
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *Master_object; // x26
  System_Collections_Generic_List_object__o *v33; // x19
  int32_t v34; // w28
  PartyOrganizationUtility_o *v35; // x29
  _BOOL8 v36; // x0
  __int64 v37; // x1
  ItemDropEfficiencyEntity_o *current; // x21
  ItemLinkInfoWindowComponent_o *TransitionParams; // x0
  const MethodInfo *v40; // x2
  Il2CppObject *MultiEventRewardViewItem; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x6
  __int64 v44; // x8
  int v45; // w25
  int v46; // w27
  EventEntity_o *v47; // x22
  System_Collections_ICollection_o *EnableEventEntitiyList; // x23
  System_Func_object__bool__o *klass; // x24
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  const MethodInfo *v56; // x6
  Il2CppObject *v57; // x24
  ItemLinkInfoListViewItem_o *ItemLinkInfoListViewItem; // x23
  _BOOL8 IsEventShopOpen; // x0
  __int64 v60; // x1
  const MethodInfo *v61; // x4
  System_String_o *TitleText; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int32_t id; // w2
  ItemLinkInfoWindowComponent_o *v70; // x0
  const MethodInfo *v71; // x4
  System_String_o *EventRewardTransitionParam; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  ItemLinkInfoWindowComponent_o *v79; // x0
  const MethodInfo *v80; // x4
  System_String_o *ClosedMessage; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x0
  __int64 v89; // x1
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  struct System_Object_array *items; // x8
  _QWORD *v97; // x9
  __int64 size; // x10
  Il2CppClass **v99; // x0
  ItemLinkInfoListViewItem_o *v100; // x22
  const MethodInfo *v101; // x2
  _BOOL8 IsBoardActive; // x0
  __int64 v103; // x1
  const MethodInfo *v104; // x4
  System_String_o *v105; // x0
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  ItemLinkInfoWindowComponent_o *v112; // x0
  const MethodInfo *v113; // x2
  ItemLinkInfoWindowComponent_o *TargetId; // x0
  const MethodInfo *v115; // x2
  int64_t transitionParam; // x1
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  ItemLinkInfoWindowComponent_o *v123; // x0
  const MethodInfo *v124; // x4
  System_String_o *v125; // x0
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  __int64 v132; // x0
  __int64 v133; // x1
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  struct System_Object_array *v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  Il2CppClass **v143; // x0
  Il2CppObject *object; // [xsp+0h] [xbp-C0h]
  ClosedMessageMaster_o *closedMessageMst; // [xsp+8h] [xbp-B8h]
  ItemEntity_o **v147; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v151; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v152; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C249F7 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Find_ShopEntity___, itemDropEfficiencyList);
    sub_1C3B764(&Method_DataManager_GetMaster_ClosedMessageMaster___, v10);
    sub_1C3B764(&Method_DataManager_GetMaster_ShopMaster___, v11);
    sub_1C3B764(&DataManager_TypeInfo, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__Dispose__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__MoveNext__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__get_Current__, v15);
    sub_1C3B764(&System_Func_ShopEntity__bool__TypeInfo, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__GetEnumerator__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__, v19);
    sub_1C3B764(&System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo, v20);
    sub_1C3B764(
      &Method_ItemLinkInfoWindowComponent___c__DisplayClass23_0__CreateItemLinkInfoListViewItemList_b__0__,
      v21);
    sub_1C3B764(&ItemLinkInfoWindowComponent___c__DisplayClass23_0_TypeInfo, v22);
    byte_4C249F7 = 1;
  }
  memset(&v152, 0, sizeof(v152));
  v23 = sub_1C3B9B0(ItemLinkInfoWindowComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_46;
  *(_QWORD *)(v23 + 16) = itemEnt;
  v147 = (ItemEntity_o **)(v23 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)itemEnt, v26, v27, v28, v29, v30, v31);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ShopMaster___);
  closedMessageMst = (ClosedMessageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  v33 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v33,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__);
  if ( !itemDropEfficiencyList )
LABEL_46:
    sub_1C3B9C0(v24, v25);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v151,
    (System_Collections_Generic_List_object__o *)itemDropEfficiencyList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__GetEnumerator__);
  v34 = 0;
  object = (Il2CppObject *)v23;
  v35 = (PartyOrganizationUtility_o *)(v23 + 24);
  v152 = v151;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v152,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__MoveNext__);
    if ( !v36 )
      break;
    current = (ItemDropEfficiencyEntity_o *)v152.fields._current;
    if ( !v152.fields._current )
      sub_1C3B9C0(v36, v37);
    TransitionParams = (ItemLinkInfoWindowComponent_o *)ItemDropEfficiencyEntity__GetTransitionParams(
                                                          (ItemDropEfficiencyEntity_o *)v152.fields._current,
                                                          0LL);
    MultiEventRewardViewItem = (Il2CppObject *)ItemLinkInfoWindowComponent__IsCreateMultiEventRewardViewItem(
                                                 TransitionParams,
                                                 (System_String_array *)TransitionParams,
                                                 v40);
    if ( ((unsigned __int8)MultiEventRewardViewItem & 1) != 0 )
    {
      if ( !eventEntList )
        sub_1C3B9C0(MultiEventRewardViewItem, v42);
      v44 = *(_QWORD *)&eventEntList->max_length;
      if ( (int)v44 >= 1 )
      {
        v45 = 0;
        v46 = 0;
        do
        {
          if ( v45 >= (unsigned int)v44 )
            sub_1C3B9C8(MultiEventRewardViewItem, v42);
          v47 = eventEntList->m_Items[v45];
          if ( !v47 )
            sub_1C3B9C0(MultiEventRewardViewItem, v42);
          if ( !Master_object )
            sub_1C3B9C0(MultiEventRewardViewItem, v42);
          EnableEventEntitiyList = (System_Collections_ICollection_o *)ShopMaster__GetEnableEventEntitiyList(
                                                                         (ShopMaster_o *)Master_object,
                                                                         v47->fields.id,
                                                                         0LL);
          MultiEventRewardViewItem = (Il2CppObject *)BasicHelper__IsNullOrEmpty(EnableEventEntitiyList, 0LL);
          if ( ((unsigned __int8)MultiEventRewardViewItem & 1) == 0 )
          {
            klass = (System_Func_object__bool__o *)v35->klass;
            if ( !v35->klass )
            {
              klass = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_ShopEntity__bool__TypeInfo);
              System_Func_object__bool____ctor(
                klass,
                object,
                Method_ItemLinkInfoWindowComponent___c__DisplayClass23_0__CreateItemLinkInfoListViewItemList_b__0__,
                0LL);
              v35->klass = (PartyOrganizationUtility_c *)klass;
              sub_1C3B708(v35, (int64_t)klass, v50, v51, v52, v53, v54, v55);
            }
            MultiEventRewardViewItem = BasicHelper__Find_object_(
                                         (System_Object_array *)EnableEventEntitiyList,
                                         (System_Func_T__bool__o *)klass,
                                         (const MethodInfo_2FDB740 *)Method_BasicHelper_Find_ShopEntity___);
            v57 = MultiEventRewardViewItem;
            if ( MultiEventRewardViewItem )
            {
              ItemLinkInfoListViewItem = ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItem(
                                           this,
                                           v34,
                                           *v147,
                                           current,
                                           isItemGetInfoList,
                                           needNum,
                                           v56);
              IsEventShopOpen = ShopMaster__IsEventShopOpen((ShopMaster_o *)Master_object, v47->fields.id, 0LL);
              if ( !ItemLinkInfoListViewItem )
                sub_1C3B9C0(IsEventShopOpen, v60);
              ItemLinkInfoListViewItem->fields._IsLocked_k__BackingField = !IsEventShopOpen;
              TitleText = ItemLinkInfoWindowComponent__GetTitleText(
                            (ItemLinkInfoWindowComponent_o *)IsEventShopOpen,
                            current,
                            ItemLinkInfoListViewItem,
                            v47,
                            v61);
              ItemLinkInfoListViewItem->fields._Name_k__BackingField = TitleText;
              sub_1C3B708(
                (PartyOrganizationUtility_o *)&ItemLinkInfoListViewItem->fields._Name_k__BackingField,
                (int64_t)TitleText,
                v63,
                v64,
                v65,
                v66,
                v67,
                v68);
              id = v47->fields.id;
              ItemLinkInfoListViewItem->fields._TargetId_k__BackingField = id;
              ItemLinkInfoListViewItem->fields._TargetValueType_k__BackingField = 4;
              ItemLinkInfoListViewItem->fields._ItemDropEfficiencyPriority_k__BackingField = current->fields.priority
                                                                                           + v46;
              EventRewardTransitionParam = ItemLinkInfoWindowComponent__CreateEventRewardTransitionParam(
                                             v70,
                                             current,
                                             id,
                                             (int32_t)v57[2].monitor,
                                             v71);
              ItemLinkInfoListViewItem->fields._TransitionParam_k__BackingField = EventRewardTransitionParam;
              sub_1C3B708(
                (PartyOrganizationUtility_o *)&ItemLinkInfoListViewItem->fields._TransitionParam_k__BackingField,
                (int64_t)EventRewardTransitionParam,
                v73,
                v74,
                v75,
                v76,
                v77,
                v78);
              ClosedMessage = ItemLinkInfoWindowComponent__GetClosedMessage(
                                v79,
                                closedMessageMst,
                                current,
                                ItemLinkInfoListViewItem->fields._TargetId_k__BackingField,
                                v80);
              ItemLinkInfoListViewItem->fields._ClosedMessage_k__BackingField = ClosedMessage;
              sub_1C3B708(
                (PartyOrganizationUtility_o *)&ItemLinkInfoListViewItem->fields._ClosedMessage_k__BackingField,
                (int64_t)ClosedMessage,
                v82,
                v83,
                v84,
                v85,
                v86,
                v87);
              if ( !v33 )
                sub_1C3B9C0(v88, v89);
              items = v33->fields._items;
              v97 = Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__;
              ++v33->fields._version;
              if ( !items )
                sub_1C3B9C0(v88, v89);
              size = v33->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v33,
                  (Il2CppObject *)ItemLinkInfoListViewItem,
                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
              }
              else
              {
                v99 = &items->obj.klass + size;
                v33->fields._size = size + 1;
                v99[4] = (Il2CppClass *)ItemLinkInfoListViewItem;
                sub_1C3B708(
                  (PartyOrganizationUtility_o *)(v99 + 4),
                  (int64_t)ItemLinkInfoListViewItem,
                  v90,
                  v91,
                  v92,
                  v93,
                  v94,
                  v95);
              }
              ++v46;
              ++v34;
            }
          }
          LODWORD(v44) = eventEntList->max_length;
          ++v45;
        }
        while ( v45 < (int)v44 );
      }
    }
    else
    {
      v100 = ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItem(
               this,
               v34,
               *v147,
               current,
               isItemGetInfoList,
               needNum,
               v43);
      IsBoardActive = ItemLinkInfoWindowComponent__IsBoardActive((ItemLinkInfoWindowComponent_o *)v100, current, v101);
      if ( !v100 )
        sub_1C3B9C0(IsBoardActive, v103);
      v100->fields._IsLocked_k__BackingField = !IsBoardActive;
      v105 = ItemLinkInfoWindowComponent__GetTitleText(
               (ItemLinkInfoWindowComponent_o *)IsBoardActive,
               current,
               v100,
               0LL,
               v104);
      v100->fields._Name_k__BackingField = v105;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v100->fields._Name_k__BackingField,
        (int64_t)v105,
        v106,
        v107,
        v108,
        v109,
        v110,
        v111);
      TargetId = (ItemLinkInfoWindowComponent_o *)ItemLinkInfoWindowComponent__GetTargetId(v112, current, v113);
      v100->fields._TargetId_k__BackingField = (int)TargetId;
      v100->fields._TargetValueType_k__BackingField = ItemLinkInfoWindowComponent__GetTargetValueType(
                                                        TargetId,
                                                        current,
                                                        v115);
      v100->fields._ItemDropEfficiencyPriority_k__BackingField = current->fields.priority;
      transitionParam = (int64_t)current->fields.transitionParam;
      v100->fields._TransitionParam_k__BackingField = (struct System_String_o *)transitionParam;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v100->fields._TransitionParam_k__BackingField,
        transitionParam,
        v117,
        v118,
        v119,
        v120,
        v121,
        v122);
      v125 = ItemLinkInfoWindowComponent__GetClosedMessage(v123, closedMessageMst, current, 0, v124);
      v100->fields._ClosedMessage_k__BackingField = v125;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v100->fields._ClosedMessage_k__BackingField,
        (int64_t)v125,
        v126,
        v127,
        v128,
        v129,
        v130,
        v131);
      if ( !v33 )
        sub_1C3B9C0(v132, v133);
      v140 = v33->fields._items;
      v141 = Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__;
      ++v33->fields._version;
      if ( !v140 )
        sub_1C3B9C0(v132, v133);
      v142 = v33->fields._size;
      if ( (unsigned int)v142 >= v140->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v33,
          (Il2CppObject *)v100,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
      }
      else
      {
        v143 = &v140->obj.klass + v142;
        v33->fields._size = v142 + 1;
        v143[4] = (Il2CppClass *)v100;
        sub_1C3B708((PartyOrganizationUtility_o *)(v143 + 4), (int64_t)v100, v134, v135, v136, v137, v138, v139);
      }
      ++v34;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v152,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__Dispose__);
  return (System_Collections_Generic_List_ItemLinkInfoListViewItem__o *)v33;
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
  if ( (byte_4C249FE & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoTextObject___, parentObject);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v5);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    byte_4C249FE = 1;
  }
  if ( !parentObject )
    goto LABEL_10;
  listDescriptionObject = (Il2CppObject *)v4->fields.listDescriptionObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object__50818788(
         listDescriptionObject,
         transform,
         (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !v9 )
LABEL_10:
    sub_1C3B9C0(this, parentObject);
  return (ItemLinkInfoTextObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)v9,
                                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoTextObject___);
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
  if ( (byte_4C249FD & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoSubHeaderObject___, parentObject);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v5);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    byte_4C249FD = 1;
  }
  if ( !parentObject )
    goto LABEL_10;
  subHeaderObject = (Il2CppObject *)v4->fields.subHeaderObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object__50818788(
         subHeaderObject,
         transform,
         (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !v9 )
LABEL_10:
    sub_1C3B9C0(this, parentObject);
  return (ItemLinkInfoSubHeaderObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)v9,
                                            (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoSubHeaderObject___);
}


void __fastcall ItemLinkInfoWindowComponent__EndClose(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ItemLinkInfoWindowComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1C3B708(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
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
  int32_t TargetId_k__BackingField; // w20
  TerminalPramsManager_c *v19; // x0
  __int64 v20; // x1
  int32_t ItemId; // w19
  TerminalPramsManager_c *v22; // x0
  System_Action_o *transitionAction; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C24A05 & 1) == 0 )
  {
    sub_1C3B764(&Method_ItemLinkInfoWindowComponent_ExecSceneTransition__, itemDropEfficiencyEnt);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C3B764(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v11);
    byte_4C24A05 = 1;
  }
  transitionAction = 0LL;
  if ( this->fields.state == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !viewItem || !itemDropEfficiencyEnt || !Instance )
      goto LABEL_29;
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
      v14 = (_QWORD *)sub_1C3B77C(Method_ItemLinkInfoWindowComponent_ExecSceneTransition__);
    v15 = (System_Reflection_MethodBase_o *)sub_1C3B748(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, viewItem->fields._IsLocked_k__BackingField, 0, 0LL);
    TargetValueType_k__BackingField = viewItem->fields._TargetValueType_k__BackingField;
    if ( (unsigned int)(TargetValueType_k__BackingField - 6) <= 3 )
    {
      TargetId_k__BackingField = viewItem->fields._TargetId_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1E408 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v16);
        byte_4C1E408 = 1;
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
      ItemId = ItemLinkInfoListViewItem__get_ItemId(viewItem, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C1E408 )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v20);
        byte_4C1E408 = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      v22->static_fields->_ShopFocusItemId_k__BackingField = ItemId;
    }
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
LABEL_29:
      sub_1C3B9C0(Instance, v13);
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
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
  System_String_o **m_Items; // x8
  System_String_o *v18; // x20
  Il2CppObject *v19; // [xsp+0h] [xbp-40h] BYREF
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C249FC & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, closedMessageMst);
    sub_1C3B764(&DataManager_TypeInfo, v8);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v9);
    sub_1C3B764(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v10);
    sub_1C3B764(&Method_System_Enum_TryParse_SceneList_Type___, v11);
    sub_1C3B764(&System_Enum_TypeInfo, v12);
    sub_1C3B764(&string_TypeInfo, v13);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3B764(&StringLiteral_1/*""*/, v14);
    byte_4C249FC = 1;
  }
  entity = 0LL;
  result = 0;
  v19 = 0LL;
  if ( !itemDropEfficiencyEnt || !closedMessageMst )
    goto LABEL_26;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)closedMessageMst,
          &entity,
          itemDropEfficiencyEnt->fields.closedMessageId,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__) )
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
      sub_1C3B9C8(this, closedMessageMst);
    m_Items = TransitionParams->m_Items;
  }
  v18 = *m_Items;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)System_Enum__TryParse_Int32Enum__50294316(
                                            v18,
                                            1,
                                            &result,
                                            (const MethodInfo_2FF6E2C *)Method_System_Enum_TryParse_SceneList_Type___);
  if ( ((unsigned __int8)this & 1) != 0 && result == 72 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !this )
      goto LABEL_26;
    this = (ItemLinkInfoWindowComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              &v19,
                                              eventId,
                                              (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( entity && v19 )
        return System_String__Format((System_String_o *)entity[1].monitor, (Il2CppObject *)v19[2].monitor, 0LL);
LABEL_26:
      sub_1C3B9C0(this, closedMessageMst);
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
  ItemLinkInfoWindowComponent_o *v13; // x20
  System_String_o *basePanel; // x21
  int m_CancellationTokenSource; // w8
  bool v16; // w0
  int32_t v17; // w8
  int32_t v19[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C24A02 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Enum_TryParse_SceneList_Type___, ent);
    sub_1C3B764(&System_Enum_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_1C3B764(&StringLiteral_9092/*"NOT_SELECT_LET_GO"*/, v6);
    sub_1C3B764(&StringLiteral_9030/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/, v7);
    sub_1C3B764(&StringLiteral_8530/*"MOTION_CHANGE"*/, v8);
    sub_1C3B764(&StringLiteral_6680/*"FontAsset.UpdateGlyphAdjustmentRecords"*/, v9);
    sub_1C3B764(&StringLiteral_15879/*"_Flags"*/, v10);
    sub_1C3B764(&StringLiteral_11033/*"RenderChain.Process"*/, v11);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3B764(&StringLiteral_11382/*"SERVANT_SELL_DECIDE"*/, v12);
    byte_4C24A02 = 1;
  }
  *(_QWORD *)result = 0LL;
  *(_QWORD *)v19 = 0LL;
  if ( !ent
    || (this = (ItemLinkInfoWindowComponent_o *)ent->fields.transitionParam) == 0LL
    || (this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0LL)) == 0LL )
  {
LABEL_45:
    sub_1C3B9C0(this, ent);
  }
  v13 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_46;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__50294316(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_2FF6E2C *)Method_System_Enum_TryParse_SceneList_Type___) )
    goto LABEL_37;
  if ( result[1] <= 22 )
  {
    if ( result[1] == 20 )
    {
      if ( SLODWORD(v13->fields.m_CancellationTokenSource) >= 2 )
      {
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63373732(
                                                  (System_String_o *)v13->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_6680/*"FontAsset.UpdateGlyphAdjustmentRecords"*/,
                                                  1,
                                                  0LL);
        if ( !(_DWORD)this )
          return (int)this;
        if ( LODWORD(v13->fields.m_CancellationTokenSource) > 1 )
        {
          v16 = System_Int32__TryParse((System_String_o *)v13->fields.basePanelList, v19, 0LL);
          v17 = v19[0];
          goto LABEL_42;
        }
LABEL_46:
        sub_1C3B9C8(this, ent);
      }
    }
    else
    {
      if ( result[1] != 22 || SLODWORD(v13->fields.m_CancellationTokenSource) < 2 )
        goto LABEL_37;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63373732(
                                                (System_String_o *)v13->fields.basePanelList,
                                                (System_String_o *)StringLiteral_9030/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_30;
      if ( LODWORD(v13->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_46;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63373732(
                                                (System_String_o *)v13->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11033/*"RenderChain.Process"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_30;
      if ( LODWORD(v13->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_46;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63373732(
                                                (System_String_o *)v13->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11382/*"SERVANT_SELL_DECIDE"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_30;
      if ( LODWORD(v13->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_46;
      if ( !System_String__Compare_63373732(
              (System_String_o *)v13->fields.basePanelList,
              (System_String_o *)StringLiteral_8530/*"MOTION_CHANGE"*/,
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
    if ( SLODWORD(v13->fields.m_CancellationTokenSource) >= 2 )
    {
      v16 = System_Int32__TryParse((System_String_o *)v13->fields.basePanelList, result, 0LL);
      v17 = result[0];
      goto LABEL_42;
    }
    goto LABEL_37;
  }
  if ( result[1] != 34 )
    goto LABEL_37;
  m_CancellationTokenSource = (int)v13->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 3 )
  {
    this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63373732(
                                              (System_String_o *)v13->fields.basePanelList,
                                              (System_String_o *)StringLiteral_9092/*"NOT_SELECT_LET_GO"*/,
                                              1,
                                              0LL);
    if ( !(_DWORD)this )
      return (int)this;
    if ( LODWORD(v13->fields.m_CancellationTokenSource) > 2 )
    {
      v16 = System_Int32__TryParse((System_String_o *)v13->fields.baseWindow, &v19[1], 0LL);
      v17 = v19[1];
LABEL_42:
      if ( v16 )
        LODWORD(this) = v17;
      else
        LODWORD(this) = 0;
      return (int)this;
    }
    goto LABEL_46;
  }
  if ( m_CancellationTokenSource != 2
    || System_String__Compare_63373732(
         (System_String_o *)v13->fields.basePanelList,
         (System_String_o *)StringLiteral_15879/*"_Flags"*/,
         1,
         0LL)
    || !ItemDropEfficiencyEntity__IsMainScenario(ent, 0LL) )
  {
    goto LABEL_37;
  }
  this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  ItemLinkInfoWindowComponent_o *v14; // x19
  System_String_o *basePanel; // x21
  int m_CancellationTokenSource; // w8
  int32_t v17; // w20
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C24A03 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Enum_TryParse_SceneList_Type___, ent);
    sub_1C3B764(&System_Enum_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_1C3B764(&StringLiteral_13190/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, v6);
    sub_1C3B764(&StringLiteral_9092/*"NOT_SELECT_LET_GO"*/, v7);
    sub_1C3B764(&StringLiteral_9030/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/, v8);
    sub_1C3B764(&StringLiteral_8530/*"MOTION_CHANGE"*/, v9);
    sub_1C3B764(&StringLiteral_15879/*"_Flags"*/, v10);
    sub_1C3B764(&StringLiteral_11033/*"RenderChain.Process"*/, v11);
    sub_1C3B764(&StringLiteral_11382/*"SERVANT_SELL_DECIDE"*/, v12);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3B764(&StringLiteral_11149/*"Runtime cursors other than the default cursor need to be defined using a texture."*/, v13);
    byte_4C24A03 = 1;
  }
  *(_QWORD *)result = 0LL;
  v19 = 0;
  if ( !ent )
    goto LABEL_50;
  this = (ItemLinkInfoWindowComponent_o *)ent->fields.transitionParam;
  if ( !this )
    goto LABEL_50;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0LL);
  if ( !this )
    goto LABEL_50;
  v14 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_51;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__50294316(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_2FF6E2C *)Method_System_Enum_TryParse_SceneList_Type___) )
    return 0;
  switch ( result[1] )
  {
    case 22:
      if ( SLODWORD(v14->fields.m_CancellationTokenSource) < 2 )
        return 0;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63373732(
                                                (System_String_o *)v14->fields.basePanelList,
                                                (System_String_o *)StringLiteral_9030/*"NETWORK_ERROR_SERVER_BUSY_MESSAGE"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 6;
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63373732(
                                                (System_String_o *)v14->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11033/*"RenderChain.Process"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 7;
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63373732(
                                                (System_String_o *)v14->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11382/*"SERVANT_SELL_DECIDE"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 8;
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      if ( System_String__Compare_63373732(
             (System_String_o *)v14->fields.basePanelList,
             (System_String_o *)StringLiteral_8530/*"MOTION_CHANGE"*/,
             1,
             0LL) )
      {
        return 0;
      }
      return 9;
    case 72:
      if ( SLODWORD(v14->fields.m_CancellationTokenSource) < 2 )
        return 0;
      if ( System_Int32__TryParse((System_String_o *)v14->fields.basePanelList, &v19, 0LL) )
        return 4;
      else
        return 0;
    case 34:
      m_CancellationTokenSource = (int)v14->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource < 3 )
      {
        if ( m_CancellationTokenSource != 2
          || System_String__Compare_63373732(
               (System_String_o *)v14->fields.basePanelList,
               (System_String_o *)StringLiteral_15879/*"_Flags"*/,
               1,
               0LL)
          || !ItemDropEfficiencyEntity__IsMainScenario(ent, 0LL) )
        {
          return 0;
        }
        this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( this )
        {
          if ( !QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0LL) )
            return 0;
          return 3;
        }
LABEL_50:
        sub_1C3B9C0(this, ent);
      }
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63373732(
                                                (System_String_o *)v14->fields.basePanelList,
                                                (System_String_o *)StringLiteral_9092/*"NOT_SELECT_LET_GO"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 5;
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_Int32__TryParse(
                                                (System_String_o *)v14->fields.baseWindow,
                                                result,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        return 0;
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
LABEL_51:
        sub_1C3B9C8(this, ent);
      v17 = 1;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63373732(
                                                (System_String_o *)v14->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11149/*"Runtime cursors other than the default cursor need to be defined using a texture."*/,
                                                1,
                                                0LL);
      if ( (_DWORD)this )
      {
        if ( LODWORD(v14->fields.m_CancellationTokenSource) > 1 )
        {
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63373732(
                                                    (System_String_o *)v14->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_13190/*"TREASURE_BOX_PAY_EVENT_ITEM"*/,
                                                    1,
                                                    0LL);
          if ( !(_DWORD)this )
            return 2;
          if ( LODWORD(v14->fields.m_CancellationTokenSource) > 1 )
          {
            if ( !System_String__Compare_63373732(
                    (System_String_o *)v14->fields.basePanelList,
                    (System_String_o *)StringLiteral_15879/*"_Flags"*/,
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
  return v17;
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

  if ( (byte_4C24A01 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, itemDropEfficiencyEnt);
    sub_1C3B764(&string_TypeInfo, v8);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3B764(&StringLiteral_7595/*"Invalid Vector3 index!"*/, v9);
    byte_4C24A01 = 1;
  }
  if ( !itemDropEfficiencyEnt )
LABEL_18:
    sub_1C3B9C0(this, itemDropEfficiencyEnt);
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
  return LocalizationManager__Get((System_String_o *)StringLiteral_7595/*"Invalid Vector3 index!"*/, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__Init(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleItemNameLabel; // x0

  if ( (byte_4C249F2 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C249F2 = 1;
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
    sub_1C3B9C0(titleItemNameLabel, method);
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
  ItemLinkInfoWindowComponent_o *v25; // x20
  System_String_o *basePanel; // x21
  BalanceConfig_c *v27; // x0
  int32_t ClassBoardReleaseQuestId; // w19
  bool v30; // w21
  __int64 v31; // x19
  System_Object_array *ListValidData; // x20
  System_Func_object__bool__o *v33; // x21
  int m_CancellationTokenSource; // w8
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_WarInfo_o *v36; // x19
  MapControl_SpotInfo_o *SpotInfo; // x0
  bool v38; // w0
  Il2CppObject *v39; // [xsp+0h] [xbp-40h] BYREF
  int32_t key; // [xsp+Ch] [xbp-34h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C24A04 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, entity);
    sub_1C3B764(&Method_BasicHelper_Any_GachaEntity___, v4);
    sub_1C3B764(&CoinRoomUtility_TypeInfo, v5);
    sub_1C3B764(&CondType_TypeInfo, v6);
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_GachaMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMaster_ShopMaster___, v9);
    sub_1C3B764(&DataManager_TypeInfo, v10);
    sub_1C3B764(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v11);
    sub_1C3B764(&Method_System_Enum_TryParse_SceneList_Type___, v12);
    sub_1C3B764(&System_Enum_TypeInfo, v13);
    sub_1C3B764(&System_Func_GachaEntity__bool__TypeInfo, v14);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v15);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v16);
    sub_1C3B764(&Method_ItemLinkInfoWindowComponent___c__DisplayClass36_0__IsBoardActive_b__0__, v17);
    sub_1C3B764(&ItemLinkInfoWindowComponent___c__DisplayClass36_0_TypeInfo, v18);
    sub_1C3B764(&StringLiteral_13190/*"TREASURE_BOX_PAY_EVENT_ITEM"*/, v19);
    sub_1C3B764(&StringLiteral_9092/*"NOT_SELECT_LET_GO"*/, v20);
    sub_1C3B764(&StringLiteral_6680/*"FontAsset.UpdateGlyphAdjustmentRecords"*/, v21);
    sub_1C3B764(&StringLiteral_15879/*"_Flags"*/, v22);
    sub_1C3B764(&StringLiteral_4639/*"Control cannot leave a finally block."*/, v23);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3B764(&StringLiteral_11149/*"Runtime cursors other than the default cursor need to be defined using a texture."*/, v24);
    byte_4C24A04 = 1;
  }
  *(_QWORD *)result = 0LL;
  key = 0;
  v39 = 0LL;
  if ( !entity )
    goto LABEL_71;
  this = (ItemLinkInfoWindowComponent_o *)entity->fields.transitionParam;
  if ( !this )
    goto LABEL_71;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0LL);
  if ( !this )
    goto LABEL_71;
  v25 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_72;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__50294316(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_2FF6E2C *)Method_System_Enum_TryParse_SceneList_Type___) )
    return 0;
  if ( result[1] <= 34 )
  {
    v30 = 0;
    switch ( result[1] )
    {
      case 0x14:
        if ( SLODWORD(v25->fields.m_CancellationTokenSource) < 2
          || System_String__op_Equality(
               (System_String_o *)v25->fields.basePanelList,
               (System_String_o *)StringLiteral_6680/*"FontAsset.UpdateGlyphAdjustmentRecords"*/,
               0LL)
          || SLODWORD(v25->fields.m_CancellationTokenSource) < 2 )
        {
          return 1;
        }
        v31 = sub_1C3B9B0(ItemLinkInfoWindowComponent___c__DisplayClass36_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v31, 0LL);
        if ( LODWORD(v25->fields.m_CancellationTokenSource) <= 1 )
          break;
        if ( !v31 )
          goto LABEL_71;
        System_Int32__TryParse((System_String_o *)v25->fields.basePanelList, (int32_t *)(v31 + 16), 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !this )
          goto LABEL_71;
        ListValidData = (System_Object_array *)GachaMaster__getListValidData((GachaMaster_o *)this, 0LL);
        v33 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_GachaEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v33,
          (Il2CppObject *)v31,
          Method_ItemLinkInfoWindowComponent___c__DisplayClass36_0__IsBoardActive_b__0__,
          0LL);
        return BasicHelper__Any_object__50179104(
                 ListValidData,
                 (System_Func_T__bool__o *)v33,
                 (const MethodInfo_2FDAC20 *)Method_BasicHelper_Any_GachaEntity___);
      case 0x16:
        if ( SLODWORD(v25->fields.m_CancellationTokenSource) < 2 )
          return 1;
        v30 = 1;
        if ( System_String__Compare_63373732(
               (System_String_o *)v25->fields.basePanelList,
               (System_String_o *)StringLiteral_4639/*"Control cannot leave a finally block."*/,
               1,
               0LL) )
        {
          return v30;
        }
        if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        return CoinRoomUtility__IsTargetQuestClear(0LL);
      case 0x17:
      case 0x1E:
      case 0x20:
        return 1;
      case 0x22:
        m_CancellationTokenSource = (int)v25->fields.m_CancellationTokenSource;
        if ( m_CancellationTokenSource < 3 )
        {
          if ( m_CancellationTokenSource == 2 )
          {
            v30 = 1;
            if ( System_String__Compare_63373732(
                   (System_String_o *)v25->fields.basePanelList,
                   (System_String_o *)StringLiteral_15879/*"_Flags"*/,
                   1,
                   0LL) )
            {
              return v30;
            }
            if ( ItemDropEfficiencyEntity__IsMainScenario(entity, 0LL) )
            {
              this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( !this )
                goto LABEL_71;
              LatestProgressWarInfo = QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0LL);
              if ( LatestProgressWarInfo )
              {
                v36 = LatestProgressWarInfo;
                if ( MapControl_WarInfo__GetStatus(LatestProgressWarInfo, 0LL) != 3 )
                  return MapControl_WarInfo__GetStatus(v36, 0LL) != 4;
                return 0;
              }
            }
          }
          return 1;
        }
        v30 = 1;
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63373732(
                                                  (System_String_o *)v25->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_9092/*"NOT_SELECT_LET_GO"*/,
                                                  1,
                                                  0LL);
        if ( !(_DWORD)this )
          return v30;
        if ( LODWORD(v25->fields.m_CancellationTokenSource) <= 2 )
          break;
        this = (ItemLinkInfoWindowComponent_o *)System_Int32__TryParse(
                                                  (System_String_o *)v25->fields.baseWindow,
                                                  result,
                                                  0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 1;
        if ( LODWORD(v25->fields.m_CancellationTokenSource) <= 1 )
          break;
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63373732(
                                                  (System_String_o *)v25->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_11149/*"Runtime cursors other than the default cursor need to be defined using a texture."*/,
                                                  1,
                                                  0LL);
        if ( !(_DWORD)this )
        {
          this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( this )
            return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)this, result[0], 0LL);
          goto LABEL_71;
        }
        if ( LODWORD(v25->fields.m_CancellationTokenSource) > 1 )
        {
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_63373732(
                                                    (System_String_o *)v25->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_13190/*"TREASURE_BOX_PAY_EVENT_ITEM"*/,
                                                    1,
                                                    0LL);
          if ( !(_DWORD)this )
          {
            this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( this )
            {
              SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)this, result[0], 0LL);
              if ( SpotInfo )
                return SpotInfo->fields.dispType == 1;
              return 0;
            }
            goto LABEL_71;
          }
          if ( LODWORD(v25->fields.m_CancellationTokenSource) > 1 )
          {
            v30 = 1;
            if ( System_String__Compare_63373732(
                   (System_String_o *)v25->fields.basePanelList,
                   (System_String_o *)StringLiteral_15879/*"_Flags"*/,
                   1,
                   0LL) )
            {
              return v30;
            }
            this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( this )
              return QuestTree__IsActiveWar((QuestTree_o *)this, result[0], 0LL);
LABEL_71:
            sub_1C3B9C0(this, entity);
          }
        }
        return v38;
      default:
        return v30;
    }
LABEL_72:
    sub_1C3B9C8(this, entity);
  }
  if ( result[1] != 72 )
  {
    if ( result[1] == 91 )
    {
      v27 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v27 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v27->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      return CondType__IsQuestClear_39011304(ClassBoardReleaseQuestId, -1, 0, 0LL);
    }
    return 0;
  }
  if ( SLODWORD(v25->fields.m_CancellationTokenSource) < 2
    || !System_Int32__TryParse((System_String_o *)v25->fields.basePanelList, &key, 0LL) )
  {
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_71;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &v39,
          key,
          (const MethodInfo_329AE94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ShopMaster___);
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
  System_String_o **m_Items; // x8
  System_String_o *v9; // x19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C249FB & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Enum_TryParse_SceneList_Type___, transitionParams);
    sub_1C3B764(&System_Enum_TypeInfo, v4);
    sub_1C3B764(&StringLiteral_1/*""*/, v5);
    byte_4C249FB = 1;
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
    sub_1C3B9C0(IsNullOrEmpty, v7);
  }
  if ( !transitionParams )
    goto LABEL_15;
  if ( !transitionParams->max_length )
    sub_1C3B9C8(IsNullOrEmpty, v7);
  m_Items = transitionParams->m_Items;
  if ( transitionParams->max_length != 1 )
    return 0;
LABEL_9:
  v9 = *m_Items;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  return System_Enum__TryParse_Int32Enum__50294316(
           v9,
           1,
           &result,
           (const MethodInfo_2FF6E2C *)Method_System_Enum_TryParse_SceneList_Type___)
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_GameObject_o *listViewBg; // x23
  ItemLinkInfoWindowComponent_c *v25; // x0
  int32_t id; // w24
  System_String_o **p_name; // x8
  System_Collections_Generic_List_object__o *v28; // x22
  int64_t v29; // x23
  UnityEngine_GameObject_o *v30; // x0
  const MethodInfo *v31; // x4
  ItemLinkInfoDetailObject_o *ItemLinkInfoDetailObject; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  const MethodInfo *v49; // x3
  System_Action_o *v50; // x20

  if ( (byte_4C249F3 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, itemEnt);
    sub_1C3B764(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v9);
    sub_1C3B764(&Method_ItemLinkInfoWindowComponent_EndOpen__, v10);
    sub_1C3B764(&ItemLinkInfoWindowComponent_TypeInfo, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__, v13);
    sub_1C3B764(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo, v14);
    sub_1C3B764(&StringLiteral_1/*""*/, v15);
    byte_4C249F3 = 1;
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
    v25 = ItemLinkInfoWindowComponent_TypeInfo;
    if ( !ItemLinkInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent_TypeInfo);
      v25 = ItemLinkInfoWindowComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(listViewBg, v25->static_fields->STONE_DETAIL_VIEW_BG_POSITION_Y, 0LL);
  }
  this->fields.callbackFunc = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v18, v19, v20, v21, v22, v23);
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
  v28 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  v29 = sub_1C3B9B0(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_25;
  *(_DWORD *)(v29 + 16) = id;
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
    goto LABEL_25;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  ItemLinkInfoDetailObject = ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
                               this,
                               itemEnt,
                               v30,
                               isDispStoneDetail,
                               v31);
  *(_QWORD *)(v29 + 24) = ItemLinkInfoDetailObject;
  sub_1C3B708((PartyOrganizationUtility_o *)(v29 + 24), (int64_t)ItemLinkInfoDetailObject, v33, v34, v35, v36, v37, v38);
  if ( !v28 )
    goto LABEL_25;
  items = v28->fields._items;
  v46 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++v28->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v28->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v28,
      (Il2CppObject *)v29,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &items->obj.klass + size;
    v28->fields._size = size + 1;
    v48[4] = (Il2CppClass *)v29;
    sub_1C3B708((PartyOrganizationUtility_o *)(v48 + 4), v29, v39, v40, v41, v42, v43, v44);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
LABEL_25:
    sub_1C3B9C0(gameObject, v17);
  ItemLinkInfoListViewManager__CreateList(
    (ItemLinkInfoListViewManager_o *)gameObject,
    (System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v28,
    isDispStoneDetail,
    v49);
  v50 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v50, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v50, 0, 0LL);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x3
  System_Collections_IEnumerator_o *ItemTransitionList; // x0
  System_Action_o *v20; // x20

  if ( (byte_4C249F5 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, itemIdList);
    sub_1C3B764(&Method_ItemLinkInfoWindowComponent_EndOpen__, v9);
    byte_4C249F5 = 1;
  }
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.listViewBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        this->fields.callbackFunc = callback,
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
          (int64_t)callback,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.titleItemNameLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
    sub_1C3B9C0(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ItemTransitionList = ItemLinkInfoWindowComponent__CoCreateItemTransitionList(this, itemIdList, needNumList, v18);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, ItemTransitionList, 0LL);
  v20 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0LL);
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_String_o **v34; // x8
  System_Collections_Generic_List_object__o *v35; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x24
  ItemLinkInfoWindowComponent___c_c *v37; // x0
  System_Func_T__TResult__o *_9__20_0; // x23
  Il2CppObject *v39; // x25
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  int64_t v48; // x23
  const MethodInfo *v49; // x6
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *ItemLinkInfoListViewItemList; // x22
  const MethodInfo *v51; // x2
  struct ItemLinkInfoListViewManager_o *listViewManager; // x8
  ItemLinkInfoSubHeaderObject_o *SubHeaderObject; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  ItemLinkInfoWindowComponent_o *v60; // x0
  const MethodInfo *v61; // x2
  ItemLinkInfoWindowComponent_o *v62; // x0
  const MethodInfo *v63; // x2
  Il2CppObject *v64; // x21
  const MethodInfo *v65; // x4
  struct ItemLinkInfoListViewManager_o *v66; // x8
  UnityEngine_GameObject_o *v67; // x2
  ItemLinkInfoDetailObject_o *ItemLinkInfoDetailObject; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v75; // x1
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct System_Object_array *items; // x8
  _QWORD *v89; // x9
  __int64 size; // x10
  Il2CppClass **v91; // x0
  const MethodInfo *v92; // x3
  System_Action_o *v93; // x20
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewList; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_4C249F4 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, itemData);
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMaster_ItemDropEfficiencyMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMaster_ItemMaster___, v9);
    sub_1C3B764(&DataManager_TypeInfo, v10);
    sub_1C3B764(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11);
    sub_1C3B764(&Method_System_Linq_Enumerable_Any_ItemDropEfficiencyEntity___, v12);
    sub_1C3B764(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, v13);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderBy_EventEntity__long___, v14);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_EventEntity___, v15);
    sub_1C3B764(&System_Func_EventEntity__long__TypeInfo, v16);
    sub_1C3B764(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v17);
    sub_1C3B764(&Method_ItemLinkInfoWindowComponent_EndOpen__, v18);
    sub_1C3B764(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__, v19);
    sub_1C3B764(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__, v20);
    sub_1C3B764(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo, v21);
    sub_1C3B764(&Method_ItemLinkInfoWindowComponent___c__OpenUserItemInfo_b__20_0__, v22);
    sub_1C3B764(&ItemLinkInfoWindowComponent___c_TypeInfo, v23);
    this = (ItemLinkInfoWindowComponent_o *)sub_1C3B764(&StringLiteral_1/*""*/, v24);
    byte_4C249F4 = 1;
  }
  entity = 0LL;
  viewList = 0LL;
  if ( !itemData )
    goto LABEL_47;
  itemId = itemData->fields.itemId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
    goto LABEL_47;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    itemId,
    (const MethodInfo_329AE94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
  if ( !this )
    goto LABEL_47;
  EnabledListByItemId = ItemDropEfficiencyMaster__GetEnabledListByItemId(
                          (ItemDropEfficiencyMaster_o *)this,
                          itemId,
                          0LL);
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EnabledListByItemId,
          (const MethodInfo_2FFBC00 *)Method_System_Linq_Enumerable_Any_ItemDropEfficiencyEntity___) )
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
  sub_1C3B708((PartyOrganizationUtility_o *)&v6->fields.callbackFunc, (int64_t)callback, v28, v29, v30, v31, v32, v33);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.titleItemNameLabel;
  if ( !this )
    goto LABEL_47;
  v34 = (System_String_o **)(entity ? &entity[1].monitor : &StringLiteral_1/*""*/);
  UILabel__set_text((UILabel_o *)this, *v34, 0LL);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.titleWindowNameLabel;
  if ( !this )
    goto LABEL_47;
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v35 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_47;
  this = (ItemLinkInfoWindowComponent_o *)EventMaster__GetEnableEntityList((EventMaster_o *)this, 0, 1, 0, 0LL);
  if ( !this )
    goto LABEL_47;
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)this;
  if ( this->fields.m_CancellationTokenSource )
  {
    v37 = ItemLinkInfoWindowComponent___c_TypeInfo;
    if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
      v37 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    _9__20_0 = (System_Func_T__TResult__o *)v37->static_fields->__9__20_0;
    if ( !_9__20_0 )
    {
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v37 = ItemLinkInfoWindowComponent___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v37->static_fields->__9;
      _9__20_0 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_EventEntity__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__20_0,
        v39,
        Method_ItemLinkInfoWindowComponent___c__OpenUserItemInfo_b__20_0__,
        0LL);
      static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
      static_fields->__9__20_0 = (struct System_Func_EventEntity__long__o *)_9__20_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__20_0,
        (int64_t)_9__20_0,
        v41,
        v42,
        v43,
        v44,
        v45,
        v46);
    }
    v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__long_(
                                                                 v36,
                                                                 (System_Func_TSource__TKey__o *)_9__20_0,
                                                                 (const MethodInfo_301A250 *)Method_System_Linq_Enumerable_OrderBy_EventEntity__long___);
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v47,
                                                                 (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_EventEntity___);
  }
  v48 = sub_1C3B9B0(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
  System_Object___ctor((Il2CppObject *)v48, 0LL);
  if ( !v48 )
    goto LABEL_47;
  *(_DWORD *)(v48 + 16) = itemId;
  ItemLinkInfoListViewItemList = ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItemList(
                                   v6,
                                   EnabledListByItemId,
                                   0,
                                   0,
                                   (ItemEntity_o *)entity,
                                   (EventEntity_array *)v36,
                                   v49);
  viewList = ItemLinkInfoListViewItemList;
  this = (ItemLinkInfoWindowComponent_o *)System_Linq_Enumerable__Any_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)ItemLinkInfoListViewItemList,
                                            (const MethodInfo_2FFBC00 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    listViewManager = v6->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_47;
    SubHeaderObject = ItemLinkInfoWindowComponent__CreateSubHeaderObject(v6, listViewManager->fields.listParent, v51);
    *(_QWORD *)(v48 + 32) = SubHeaderObject;
    sub_1C3B708((PartyOrganizationUtility_o *)(v48 + 32), (int64_t)SubHeaderObject, v54, v55, v56, v57, v58, v59);
    ItemLinkInfoWindowComponent__SortViewItemList(v60, &viewList, v61);
    ItemLinkInfoWindowComponent__CheckRecommendBoard(v62, &viewList, v63);
    ItemLinkInfoListViewItemList = viewList;
  }
  v64 = entity;
  this = (ItemLinkInfoWindowComponent_o *)System_Linq_Enumerable__Any_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)ItemLinkInfoListViewItemList,
                                            (const MethodInfo_2FFBC00 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
  v66 = v6->fields.listViewManager;
  if ( !v66 )
    goto LABEL_47;
  v67 = ((unsigned __int8)this & 1) != 0
      ? v66->fields.listParent
      : UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6->fields.listViewManager, 0LL);
  ItemLinkInfoDetailObject = ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
                               v6,
                               (ItemEntity_o *)v64,
                               v67,
                               0,
                               v65);
  *(_QWORD *)(v48 + 24) = ItemLinkInfoDetailObject;
  sub_1C3B708((PartyOrganizationUtility_o *)(v48 + 24), (int64_t)ItemLinkInfoDetailObject, v69, v70, v71, v72, v73, v74);
  v75 = viewList;
  *(_QWORD *)(v48 + 48) = viewList;
  sub_1C3B708((PartyOrganizationUtility_o *)(v48 + 48), (int64_t)v75, v76, v77, v78, v79, v80, v81);
  if ( !v35 )
    goto LABEL_47;
  items = v35->fields._items;
  v89 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++v35->fields._version;
  if ( !items )
    goto LABEL_47;
  size = v35->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v35,
      (Il2CppObject *)v48,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
  }
  else
  {
    v91 = &items->obj.klass + size;
    v35->fields._size = size + 1;
    v91[4] = (Il2CppClass *)v48;
    sub_1C3B708((PartyOrganizationUtility_o *)(v91 + 4), v48, v82, v83, v84, v85, v86, v87);
  }
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.listViewManager;
  if ( !this )
LABEL_47:
    sub_1C3B9C0(this, itemData);
  ItemLinkInfoListViewManager__CreateList(
    (ItemLinkInfoListViewManager_o *)this,
    (System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v35,
    0,
    v92);
  v93 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v93, (Il2CppObject *)v6, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)v6, v93, 0, 0LL);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v23; // x0
  ItemLinkInfoWindowComponent___c_c *v24; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v25; // x20
  System_Func_object__int__o *_9__31_1; // x21
  Il2CppObject *v27; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x0
  ItemLinkInfoWindowComponent___c_c *v36; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v37; // x20
  System_Func_object__int__o *_9__31_2; // x21
  Il2CppObject *v39; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7

  if ( (byte_4C249FF & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderByDescending_ItemLinkInfoListViewItem__int___, viewList);
    sub_1C3B764(&Method_System_Linq_Enumerable_ThenByDescending_ItemLinkInfoListViewItem__int___, v4);
    sub_1C3B764(&Method_System_Linq_Enumerable_ThenBy_ItemLinkInfoListViewItem__int___, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_ItemLinkInfoListViewItem___, v6);
    sub_1C3B764(&System_Func_ItemLinkInfoListViewItem__int__TypeInfo, v7);
    sub_1C3B764(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_0__, v8);
    sub_1C3B764(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_1__, v9);
    sub_1C3B764(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_2__, v10);
    sub_1C3B764(&ItemLinkInfoWindowComponent___c_TypeInfo, v11);
    byte_4C249FF = 1;
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
    _9__31_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__31_0,
      v15,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_0__,
      0LL);
    static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__31_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__31_0,
      (int64_t)_9__31_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (System_Func_TSource__TKey__o *)_9__31_0,
          (const MethodInfo_301A780 *)Method_System_Linq_Enumerable_OrderByDescending_ItemLinkInfoListViewItem__int___);
  v24 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v25 = v23;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v24 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__31_1 = (System_Func_object__int__o *)v24->static_fields->__9__31_1;
  if ( !_9__31_1 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__31_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__31_1,
      v27,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_1__,
      0LL);
    v28 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v28->__9__31_1 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__31_1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v28->__9__31_1, (int64_t)_9__31_1, v29, v30, v31, v32, v33, v34);
  }
  v35 = System_Linq_Enumerable__ThenBy_object__int_(
          v25,
          (System_Func_TSource__TKey__o *)_9__31_1,
          (const MethodInfo_302A15C *)Method_System_Linq_Enumerable_ThenBy_ItemLinkInfoListViewItem__int___);
  v36 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v37 = v35;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v36 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__31_2 = (System_Func_object__int__o *)v36->static_fields->__9__31_2;
  if ( !_9__31_2 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__31_2 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__31_2,
      v39,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_2__,
      0LL);
    v40 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v40->__9__31_2 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__31_2;
    sub_1C3B708((PartyOrganizationUtility_o *)&v40->__9__31_2, (int64_t)_9__31_2, v41, v42, v43, v44, v45, v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                               v37,
                                                               (System_Func_TSource__TKey__o *)_9__31_2,
                                                               (const MethodInfo_302A558 *)Method_System_Linq_Enumerable_ThenByDescending_ItemLinkInfoListViewItem__int___);
  v48 = (System_Collections_Generic_List_ItemLinkInfoListViewItem__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v47,
                                                                         (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_ItemLinkInfoListViewItem___);
  *viewList = v48;
  sub_1C3B708((PartyOrganizationUtility_o *)viewList, (int64_t)v48, v49, v50, v51, v52, v53, v54);
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

  if ( (byte_4C249F0 & 1) == 0 )
  {
    sub_1C3B764(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, value);
    byte_4C249F0 = 1;
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
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3BC80(v8);
  ItemLinkInfoWindowComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ItemLinkInfoWindowComponent__get_closeBtnPath(
        ItemLinkInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C24A07 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_7759/*"IsArmenian"*/, method);
    byte_4C24A07 = 1;
  }
  return (System_String_o *)StringLiteral_7759/*"IsArmenian"*/;
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

  if ( (byte_4C249F1 & 1) == 0 )
  {
    sub_1C3B764(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, value);
    byte_4C249F1 = 1;
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
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3BC80(v8);
  ItemLinkInfoWindowComponent__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ItemLinkInfoWindowComponent_CallbackFunc___ctor(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A7F084;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A7F03C;
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
  if ( (byte_4C24A0A & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, result);
    byte_4C24A0A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall ItemLinkInfoWindowComponent_CallbackFunc__EndInvoke(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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
  const MethodInfo *v2; // x3
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v3; // x19
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
  int32_t _1__state; // w8
  struct ItemLinkInfoWindowComponent_o *_4__this; // x20
  Il2CppObject *Master_object; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  EventEntity_array *EnableEntityList; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *eventEntList_5__4; // x22
  ItemLinkInfoWindowComponent___c_c *v43; // x0
  System_Func_T__TResult__o *_9__22_0; // x23
  Il2CppObject *v45; // x24
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Object_array *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  System_Collections_Generic_List_object__o *v61; // x21
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int v68; // w8
  int32_t v69; // w22
  struct System_Int32_array *itemIdList; // x9
  int max_length; // w10
  bool result; // w0
  struct System_Int32_array *needNumList; // x8
  __int64 i_5__6; // x9
  int v75; // w10
  int32_t v76; // w23
  int64_t v77; // x21
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  const MethodInfo *v84; // x6
  System_Collections_Generic_List_object__o *ItemLinkInfoListViewItemList; // x22
  const MethodInfo *v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  struct ItemLinkInfoListViewManager_o *listViewManager; // x8
  ItemLinkInfoTextObject_o *ListDescriptionObject; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  ItemLinkInfoWindowComponent_o *v100; // x0
  const MethodInfo *v101; // x2
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  __int64 v108; // x8
  _QWORD *v109; // x9
  __int64 _2__current_low; // x10
  __int64 v111; // x8
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  System_Collections_Generic_List_object__o *v119; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4C24A10 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMaster_EventMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMaster_ItemDropEfficiencyMaster___, v4);
    sub_1C3B764(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1C3B764(&DataManager_TypeInfo, v6);
    sub_1C3B764(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1C3B764(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, v8);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderBy_EventEntity__long___, v9);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_EventEntity___, v10);
    sub_1C3B764(&System_Func_EventEntity__long__TypeInfo, v11);
    sub_1C3B764(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v15);
    sub_1C3B764(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo, v16);
    sub_1C3B764(&Method_ItemLinkInfoWindowComponent___c__CoCreateItemTransitionList_b__22_0__, v17);
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)sub_1C3B764(
                                                                                &ItemLinkInfoWindowComponent___c_TypeInfo,
                                                                                v18);
    byte_4C24A10 = 1;
  }
  v119 = 0LL;
  entity = 0LL;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ItemMaster___);
  v3->fields._itemMst_5__2 = (struct ItemMaster_o *)Master_object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v3->fields._itemMst_5__2,
    (int64_t)Master_object,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
  v3->fields._itemDropEfficiencyMst_5__3 = (struct ItemDropEfficiencyMaster_o *)v28;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v3->fields._itemDropEfficiencyMst_5__3,
    (int64_t)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_51;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)this, 0, 1, 0, 0LL);
  v3->fields._eventEntList_5__4 = EnableEntityList;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v3->fields._eventEntList_5__4,
    (int64_t)EnableEntityList,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  eventEntList_5__4 = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields._eventEntList_5__4;
  if ( !eventEntList_5__4 )
    goto LABEL_51;
  if ( eventEntList_5__4[1].monitor )
  {
    v43 = ItemLinkInfoWindowComponent___c_TypeInfo;
    if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
      v43 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    _9__22_0 = (System_Func_T__TResult__o *)v43->static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        v43 = ItemLinkInfoWindowComponent___c_TypeInfo;
      }
      v45 = (Il2CppObject *)v43->static_fields->__9;
      _9__22_0 = (System_Func_T__TResult__o *)sub_1C3B9B0(System_Func_EventEntity__long__TypeInfo);
      System_Func_object__long____ctor(
        _9__22_0,
        v45,
        Method_ItemLinkInfoWindowComponent___c__CoCreateItemTransitionList_b__22_0__,
        0LL);
      static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = (struct System_Func_EventEntity__long__o *)_9__22_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
        (int64_t)_9__22_0,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
    }
    v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__long_(
                                                                 eventEntList_5__4,
                                                                 (System_Func_TSource__TKey__o *)_9__22_0,
                                                                 (const MethodInfo_301A250 *)Method_System_Linq_Enumerable_OrderBy_EventEntity__long___);
    v54 = System_Linq_Enumerable__ToArray_object_(
            v53,
            (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_EventEntity___);
    v3->fields._eventEntList_5__4 = (struct EventEntity_array *)v54;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&v3->fields._eventEntList_5__4,
      (int64_t)v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  v61 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v61,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  v3->fields._groupList_5__5 = (struct System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v61;
  sub_1C3B708((PartyOrganizationUtility_o *)&v3->fields._groupList_5__5, (int64_t)v61, v62, v63, v64, v65, v66, v67);
  v68 = 0;
  for ( v3->fields._i_5__6 = 0; ; v3->fields._i_5__6 = v68 )
  {
    itemIdList = v3->fields.itemIdList;
    if ( !itemIdList )
      goto LABEL_51;
    max_length = itemIdList->max_length;
    if ( v68 >= max_length )
    {
      if ( !_4__this )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)_4__this->fields.listViewManager;
      if ( !this )
        goto LABEL_51;
      ItemLinkInfoListViewManager__CreateList((ItemLinkInfoListViewManager_o *)this, v3->fields._groupList_5__5, 0, v2);
      return 0;
    }
    if ( v68 >= (unsigned int)max_length )
      goto LABEL_52;
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v3->fields._itemMst_5__2;
    if ( !this )
      goto LABEL_51;
    v69 = itemIdList->m_Items[v68 + 1];
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                &entity,
                                                                                v69,
                                                                                (const MethodInfo_329AE94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_22:
    v68 = v3->fields._i_5__6 + 1;
  }
  needNumList = v3->fields.needNumList;
  if ( !needNumList )
    goto LABEL_51;
  i_5__6 = v3->fields._i_5__6;
  v75 = needNumList->max_length;
  if ( (int)i_5__6 >= v75 )
  {
    v76 = 0;
  }
  else
  {
    if ( (unsigned int)i_5__6 >= v75 )
LABEL_52:
      sub_1C3B9C8(this, method);
    v76 = needNumList->m_Items[i_5__6 + 1];
  }
  v77 = sub_1C3B9B0(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
  System_Object___ctor((Il2CppObject *)v77, 0LL);
  if ( !v77 )
    goto LABEL_51;
  *(_QWORD *)(v77 + 24) = 0LL;
  *(_DWORD *)(v77 + 16) = v69;
  sub_1C3B708((PartyOrganizationUtility_o *)(v77 + 24), 0LL, v78, v79, v80, v81, v82, v83);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v3->fields._itemDropEfficiencyMst_5__3;
  if ( !this )
    goto LABEL_51;
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)ItemDropEfficiencyMaster__GetEnabledListByItemId(
                                                                              (ItemDropEfficiencyMaster_o *)this,
                                                                              v69,
                                                                              0LL);
  if ( !_4__this )
    goto LABEL_51;
  ItemLinkInfoListViewItemList = (System_Collections_Generic_List_object__o *)ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItemList(
                                                                                _4__this,
                                                                                (System_Collections_Generic_List_ItemDropEfficiencyEntity__o *)this,
                                                                                1,
                                                                                v76,
                                                                                (ItemEntity_o *)entity,
                                                                                v3->fields._eventEntList_5__4,
                                                                                v84);
  v119 = ItemLinkInfoListViewItemList;
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)System_Linq_Enumerable__Any_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)ItemLinkInfoListViewItemList,
                                                                              (const MethodInfo_2FFBC00 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
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
                                  v86);
        *(_QWORD *)(v77 + 40) = ListDescriptionObject;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)(v77 + 40),
          (int64_t)ListDescriptionObject,
          v94,
          v95,
          v96,
          v97,
          v98,
          v99);
        goto LABEL_41;
      }
LABEL_51:
      sub_1C3B9C0(this, method);
    }
LABEL_41:
    ItemLinkInfoWindowComponent__SortViewItemList(
      (ItemLinkInfoWindowComponent_o *)this,
      (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v119,
      v86);
    ItemLinkInfoWindowComponent__CheckRecommendBoard(
      v100,
      (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v119,
      v101);
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v119;
    if ( !v119 )
      goto LABEL_51;
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)System_Collections_Generic_List_object___get_Item(
                                                                                v119,
                                                                                0,
                                                                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !this )
      goto LABEL_51;
    BYTE4(this[1].fields._groupList_5__5) = 1;
    ItemLinkInfoListViewItemList = v119;
  }
  *(_QWORD *)(v77 + 48) = ItemLinkInfoListViewItemList;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)(v77 + 48),
    (int64_t)ItemLinkInfoListViewItemList,
    (int64_t)v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v3->fields._groupList_5__5;
  if ( !this )
    goto LABEL_51;
  v108 = *(_QWORD *)&this->fields.__1__state;
  v109 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v108 )
    goto LABEL_51;
  _2__current_low = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)_2__current_low >= *(_DWORD *)(v108 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v77,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
  }
  else
  {
    v111 = v108 + 8 * _2__current_low;
    LODWORD(this->fields.__2__current) = _2__current_low + 1;
    *(_QWORD *)(v111 + 32) = v77;
    sub_1C3B708((PartyOrganizationUtility_o *)(v111 + 32), v77, v102, v103, v104, v105, v106, v107);
  }
  v3->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1C3B708(p__2__current, 0LL, v112, v113, v114, v115, v116, v117);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C24A0B & 1) == 0 )
  {
    sub_1C3B764(&ItemLinkInfoWindowComponent___c_TypeInfo, v1);
    byte_4C24A0B = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(ItemLinkInfoWindowComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ItemLinkInfoWindowComponent___c_TypeInfo->static_fields->__9 = (struct ItemLinkInfoWindowComponent___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)ItemLinkInfoWindowComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
  return e->fields.startedAt;
}


void __fastcall ItemLinkInfoWindowComponent___c___CreateItemLinkInfoListViewItem_b__24_2(
        ItemLinkInfoWindowComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C24A0C & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C24A0C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL, 0LL);
}


int64_t __fastcall ItemLinkInfoWindowComponent___c___OpenUserItemInfo_b__20_0(
        ItemLinkInfoWindowComponent___c_o *this,
        EventEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C3B9C0(this, 0LL);
  return e->fields.startedAt;
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__31_0(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C3B9C0(this, 0LL);
  return !n->fields._IsLocked_k__BackingField;
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__31_1(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C3B9C0(this, 0LL);
  return ItemTransitionType__GetSortPriority(n->fields._Type_k__BackingField, 0LL);
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__31_2(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C3B9C0(this, 0LL);
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
  if ( (byte_4C24A0D & 1) == 0 )
  {
    this = (ItemLinkInfoWindowComponent___c__DisplayClass23_0_o *)sub_1C3B764(
                                                                    &Method_System_Linq_Enumerable_Contains_int___,
                                                                    ent);
    byte_4C24A0D = 1;
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
               (const MethodInfo_300875C *)Method_System_Linq_Enumerable_Contains_int___);
LABEL_8:
    sub_1C3B9C0(this, ent);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4C24A0E & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_ItemLinkInfoWindowComponent___c__CreateItemLinkInfoListViewItem_b__24_2__, v4);
    sub_1C3B764(&ItemLinkInfoWindowComponent___c_TypeInfo, v5);
    byte_4C24A0E = 1;
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
    _9__24_2 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__24_2,
      v11,
      Method_ItemLinkInfoWindowComponent___c__CreateItemLinkInfoListViewItem_b__24_2__,
      0LL);
    static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__24_2 = _9__24_2;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__24_2,
      (int64_t)_9__24_2,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !_4__this )
    sub_1C3B9C0(v6, method);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v3 = this;
  if ( (byte_4C24A0F & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    this = (ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *)sub_1C3B764(
                                                                    &Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__3__,
                                                                    v4);
    byte_4C24A0F = 1;
  }
  _9__3 = v3->fields.__9__3;
  _4__this = v3->fields.__4__this;
  itemDropEfficiencyEnt = v3->fields.itemDropEfficiencyEnt;
  viewItem = v3->fields.viewItem;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v3,
      Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__3__,
      0LL);
    v3->fields.__9__3 = _9__3;
    sub_1C3B708((PartyOrganizationUtility_o *)&v3->fields.__9__3, (int64_t)_9__3, v9, v10, v11, v12, v13, v14);
  }
  if ( !_4__this )
    sub_1C3B9C0(this, method);
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
    sub_1C3B9C0(0LL, method);
  ItemLinkInfoWindowComponent__Close_44703860(_4__this, 0LL, v2);
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
    sub_1C3B9C0(this, 0LL);
  return n->fields.id == this->fields.gachaId;
}