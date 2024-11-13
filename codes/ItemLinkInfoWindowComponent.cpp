void __fastcall ItemLinkInfoWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B18B37 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemLinkInfoWindowComponent_TypeInfo, v1, v2);
    byte_4B18B37 = 1;
  }
  LODWORD(ItemLinkInfoWindowComponent_TypeInfo->static_fields->STONE_DETAIL_VIEW_BG_POSITION_Y) = (struct ItemLinkInfoWindowComponent_StaticFields)1092616192;
}


void __fastcall ItemLinkInfoWindowComponent___ctor(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18B36 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B18B36 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
    sub_1BCA784(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  char v10; // w22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x8
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18B2E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__Dispose__,
      viewList,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__GetEnumerator__, v8, v9);
    byte_4B18B2E = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !*viewList )
    sub_1BCAA3C(0LL, viewList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    (System_Collections_Generic_List_object__o *)*viewList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__GetEnumerator__);
  v10 = 0;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__MoveNext__);
    if ( !v11 )
      break;
    current = v14.fields._current;
    if ( (v10 & 1) != 0 )
    {
      if ( !v14.fields._current )
        sub_1BCAA3C(v11, v12);
      v10 = 1;
    }
    else
    {
      if ( !v14.fields._current )
        sub_1BCAA3C(v11, v12);
      if ( LODWORD(v14.fields._current[11].klass) == 4 )
      {
        v10 = 1;
        BYTE2(v14.fields._current[9].monitor) = 1;
      }
      else
      {
        v10 = 0;
      }
    }
    if ( ((__int64)current[11].klass & 0xFFFFFFFE) == 2 )
      BYTE2(current[9].monitor) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__Dispose__);
}


void __fastcall ItemLinkInfoWindowComponent__Close(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemLinkInfoWindowComponent__Close_43881168(this, 0LL, v2);
}


void __fastcall ItemLinkInfoWindowComponent__Close_43881168(
        ItemLinkInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *listViewManager; // x21
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  ItemLinkInfoListViewManager_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x20

  if ( (byte_4B18B34 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_ItemLinkInfoWindowComponent_EndClose__, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B18B34 = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, callback);
    if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
    {
      v17 = this->fields.listViewManager;
      if ( !v17 )
        sub_1BCAA3C(0LL, v10);
      ItemLinkInfoListViewManager__DeleteCallback(v17, 0LL);
    }
    this->fields.state = 3;
    this->fields.closeCallbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
      (int64_t)callback,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v21, 0LL);
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

  if ( (byte_4B18B24 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_TypeInfo, itemIdList, needNumList);
    byte_4B18B24 = 1;
  }
  v7 = sub_1BCAA2C(
         ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_TypeInfo,
         itemIdList,
         needNumList,
         method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 48) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 32) = itemIdList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)itemIdList, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 40) = needNumList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)needNumList, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ItemLinkInfoWindowComponent__CreateEventRewardTransitionParam(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt,
        int32_t eventId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_String_o *v16; // x19
  struct System_String_o *transitionParam; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int32_t v45; // [xsp+8h] [xbp-28h] BYREF
  int32_t v46; // [xsp+Ch] [xbp-24h] BYREF

  v45 = slot;
  v46 = eventId;
  if ( (byte_4B18B28 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, itemDropEfficiencyEnt, *(_QWORD *)&eventId);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v6, v7);
    byte_4B18B28 = 1;
  }
  v8 = (System_String_o *)sub_1BCA888(string___TypeInfo, 5LL);
  if ( !itemDropEfficiencyEnt || (v16 = v8) == 0LL )
    sub_1BCAA3C(v8, v9);
  if ( !LODWORD(v8[1].klass) )
    goto LABEL_11;
  transitionParam = itemDropEfficiencyEnt->fields.transitionParam;
  v8[1].monitor = transitionParam;
  sub_1BCA784((PartyOrganizationUtility_o *)&v8[1].monitor, (int64_t)transitionParam, v10, v11, v12, v13, v14, v15);
  if ( LODWORD(v16[1].klass) <= 1 )
    goto LABEL_11;
  v24 = StringLiteral_1120/*"/"*/;
  v16[1].fields = (System_String_Fields)StringLiteral_1120/*"/"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v16[1].fields, v24, v18, v19, v20, v21, v22, v23);
  v8 = System_Int32__ToString((int32_t)&v46, 0LL);
  if ( LODWORD(v16[1].klass) <= 2
    || (v16[2].klass = (System_String_c *)v8,
        sub_1BCA784((PartyOrganizationUtility_o *)&v16[2], (int64_t)v8, v25, v26, v27, v28, v29, v30),
        LODWORD(v16[1].klass) <= 3)
    || (v37 = StringLiteral_1120/*"/"*/,
        v16[2].monitor = (void *)StringLiteral_1120/*"/"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)&v16[2].monitor, v37, v31, v32, v33, v34, v35, v36),
        v8 = System_Int32__ToString((int32_t)&v45, 0LL),
        LODWORD(v16[1].klass) <= 4) )
  {
LABEL_11:
    sub_1BCAA44(v8, v9);
  }
  v16[2].fields = (System_String_Fields)v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&v16[2].fields, (int64_t)v8, v38, v39, v40, v41, v42, v43);
  return System_String__Concat_62414748((System_String_array *)v16, 0LL);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x8
  Il2CppObject *v14; // x22
  __int64 v15; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v17; // x21
  ItemLinkInfoDetailObject_o *v18; // x22

  v8 = this;
  if ( (byte_4B18B27 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoDetailObject___, itemEnt, parentObject);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v9, v10);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B18B27 = 1;
  }
  v13 = 120LL;
  if ( isDispStoneDetail )
    v13 = 144LL;
  if ( !parentObject )
    goto LABEL_13;
  v14 = *(Il2CppObject **)((char *)&v8->klass + v13);
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  v17 = UnityEngine_Object__Instantiate_object__49903816(
          v14,
          transform,
          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v17, 0LL, 0LL);
  v18 = 0LL;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v17 )
    {
      this = (ItemLinkInfoWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)v17,
                                                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoDetailObject___);
      if ( this )
      {
        v18 = (ItemLinkInfoDetailObject_o *)this;
        ItemLinkInfoDetailObject__Setup((ItemLinkInfoDetailObject_o *)this, itemEnt, isDispStoneDetail, 0LL);
        return v18;
      }
    }
LABEL_13:
    sub_1BCAA3C(this, itemEnt);
  }
  return v18;
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x21
  __int64 IsNotDisplayQuestInfo; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x23
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  ItemLinkInfoListViewItem_o *v40; // x25
  __int64 *v41; // x24
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  __int64 v61; // x22
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x22
  int v65; // w8
  __int64 *v66; // x19
  System_Action_o *v67; // x0
  __int64 v68; // x2
  int64_t v69; // x19
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7

  if ( (byte_4B18B26 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&index, itemEnt);
    sub_1BCA7E0(&ItemLinkInfoListViewItem_TypeInfo, v13, v14);
    sub_1BCA7E0(
      &Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__0__,
      v15,
      v16);
    sub_1BCA7E0(
      &Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__1__,
      v17,
      v18);
    sub_1BCA7E0(&ItemLinkInfoWindowComponent___c__DisplayClass24_0_TypeInfo, v19, v20);
    byte_4B18B26 = 1;
  }
  v21 = sub_1BCAA2C(
          ItemLinkInfoWindowComponent___c__DisplayClass24_0_TypeInfo,
          *(_QWORD *)&index,
          itemEnt,
          itemDropEfficiencyEnt);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_15;
  *(_QWORD *)(v21 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = itemDropEfficiencyEnt;
  v30 = v21 + 24;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 24), (int64_t)itemDropEfficiencyEnt, v31, v32, v33, v34, v35, v36);
  v40 = (ItemLinkInfoListViewItem_o *)sub_1BCAA2C(ItemLinkInfoListViewItem_TypeInfo, v37, v38, v39);
  ItemLinkInfoListViewItem___ctor(v40, index, 0LL);
  *(_QWORD *)(v21 + 32) = v40;
  v41 = (__int64 *)(v21 + 32);
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)v40, v42, v43, v44, v45, v46, v47);
  IsNotDisplayQuestInfo = *(_QWORD *)(v21 + 32);
  if ( !IsNotDisplayQuestInfo )
    goto LABEL_15;
  *(_QWORD *)(IsNotDisplayQuestInfo + 136) = itemEnt;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)(IsNotDisplayQuestInfo + 136),
    (int64_t)itemEnt,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  if ( !*(_QWORD *)v30 )
    goto LABEL_15;
  IsNotDisplayQuestInfo = *v41;
  if ( !*v41 )
    goto LABEL_15;
  v60 = *(_QWORD *)(*(_QWORD *)v30 + 40LL);
  *(_QWORD *)(IsNotDisplayQuestInfo + 112) = v60;
  sub_1BCA784((PartyOrganizationUtility_o *)(IsNotDisplayQuestInfo + 112), v60, v54, v55, v56, v57, v58, v59);
  IsNotDisplayQuestInfo = *(_QWORD *)v30;
  if ( !*(_QWORD *)v30
    || (v61 = *v41,
        IsNotDisplayQuestInfo = ItemDropEfficiencyEntity__IsNotDisplayQuestInfo(
                                  (ItemDropEfficiencyEntity_o *)IsNotDisplayQuestInfo,
                                  0LL),
        !v61)
    || (*(_BYTE *)(v61 + 152) = IsNotDisplayQuestInfo & 1, !*(_QWORD *)v30)
    || (v64 = *v41) == 0 )
  {
LABEL_15:
    sub_1BCAA3C(IsNotDisplayQuestInfo, v23);
  }
  v65 = *(_DWORD *)(*(_QWORD *)v30 + 20LL);
  *(_BYTE *)(v64 + 155) = isItemGetInfoList;
  *(_DWORD *)(v64 + 176) = v65;
  *(_DWORD *)(v64 + 144) = needNum;
  if ( isItemGetInfoList )
    v66 = (__int64 *)&Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__0__;
  else
    v66 = (__int64 *)&Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__1__;
  v67 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v23, v62, v63);
  v68 = *v66;
  v69 = (int64_t)v67;
  System_Action___ctor(v67, (Il2CppObject *)v21, v68, 0LL);
  *(_QWORD *)(v64 + 168) = v69;
  sub_1BCA784((PartyOrganizationUtility_o *)(v64 + 168), v69, v70, v71, v72, v73, v74, v75);
  return *(ItemLinkInfoListViewItem_o **)(v21 + 32);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x27
  __int64 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  Il2CppObject *Master_object; // x26
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Collections_Generic_List_object__o *v50; // x19
  int32_t v51; // w28
  PartyOrganizationUtility_o *v52; // x29
  _BOOL8 v53; // x0
  __int64 v54; // x1
  ItemDropEfficiencyEntity_o *current; // x21
  ItemLinkInfoWindowComponent_o *TransitionParams; // x0
  const MethodInfo *v57; // x2
  Il2CppObject *MultiEventRewardViewItem; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x6
  __int64 v61; // x8
  int v62; // w25
  int v63; // w27
  EventEntity_o *v64; // x22
  System_Collections_ICollection_o *EnableEventEntitiyList; // x23
  __int64 v66; // x2
  __int64 v67; // x3
  System_Func_object__bool__o *klass; // x24
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  const MethodInfo *v75; // x6
  Il2CppObject *v76; // x24
  ItemLinkInfoListViewItem_o *ItemLinkInfoListViewItem; // x23
  _BOOL8 IsEventShopOpen; // x0
  __int64 v79; // x1
  const MethodInfo *v80; // x4
  System_String_o *TitleText; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int32_t id; // w2
  ItemLinkInfoWindowComponent_o *v89; // x0
  const MethodInfo *v90; // x4
  System_String_o *EventRewardTransitionParam; // x0
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  ItemLinkInfoWindowComponent_o *v98; // x0
  const MethodInfo *v99; // x4
  System_String_o *ClosedMessage; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  __int64 v107; // x0
  __int64 v108; // x1
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  struct System_Object_array *items; // x8
  _QWORD *v116; // x9
  __int64 size; // x10
  Il2CppClass **v118; // x0
  ItemLinkInfoListViewItem_o *v119; // x22
  const MethodInfo *v120; // x2
  _BOOL8 IsBoardActive; // x0
  __int64 v122; // x1
  const MethodInfo *v123; // x4
  System_String_o *v124; // x0
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  ItemLinkInfoWindowComponent_o *v131; // x0
  const MethodInfo *v132; // x2
  ItemLinkInfoWindowComponent_o *TargetId; // x0
  const MethodInfo *v134; // x2
  int64_t transitionParam; // x1
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  ItemLinkInfoWindowComponent_o *v142; // x0
  const MethodInfo *v143; // x4
  System_String_o *v144; // x0
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  __int64 v151; // x0
  __int64 v152; // x1
  int64_t v153; // x2
  int32_t v154; // w3
  System_String_o *v155; // x4
  BattleSetupInfo_o *v156; // x5
  FollowerInfo_o *v157; // x6
  PartyListViewItem_o *v158; // x7
  struct System_Object_array *v159; // x8
  _QWORD *v160; // x9
  __int64 v161; // x10
  Il2CppClass **v162; // x0
  Il2CppObject *object; // [xsp+0h] [xbp-C0h]
  ClosedMessageMaster_o *closedMessageMst; // [xsp+8h] [xbp-B8h]
  ItemEntity_o **v166; // [xsp+10h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v170; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v171; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B18B25 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_ShopEntity___, itemDropEfficiencyList, isItemGetInfoList);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClosedMessageMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, v12, v13);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__Dispose__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__MoveNext__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__get_Current__, v20, v21);
    sub_1BCA7E0(&System_Func_ShopEntity__bool__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__GetEnumerator__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__, v28, v29);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo, v30, v31);
    sub_1BCA7E0(
      &Method_ItemLinkInfoWindowComponent___c__DisplayClass23_0__CreateItemLinkInfoListViewItemList_b__0__,
      v32,
      v33);
    sub_1BCA7E0(&ItemLinkInfoWindowComponent___c__DisplayClass23_0_TypeInfo, v34, v35);
    byte_4B18B25 = 1;
  }
  memset(&v171, 0, sizeof(v171));
  v36 = sub_1BCAA2C(
          ItemLinkInfoWindowComponent___c__DisplayClass23_0_TypeInfo,
          itemDropEfficiencyList,
          isItemGetInfoList,
          *(_QWORD *)&needNum);
  System_Object___ctor((Il2CppObject *)v36, 0LL);
  if ( !v36 )
    goto LABEL_46;
  *(_QWORD *)(v36 + 16) = itemEnt;
  v166 = (ItemEntity_o **)(v36 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 16), (int64_t)itemEnt, v39, v40, v41, v42, v43, v44);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v45);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
  closedMessageMst = (ClosedMessageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  v50 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo,
                                                       v47,
                                                       v48,
                                                       v49);
  System_Collections_Generic_List_object____ctor(
    v50,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__);
  if ( !itemDropEfficiencyList )
LABEL_46:
    sub_1BCAA3C(v37, v38);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v170,
    (System_Collections_Generic_List_object__o *)itemDropEfficiencyList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__GetEnumerator__);
  v51 = 0;
  object = (Il2CppObject *)v36;
  v52 = (PartyOrganizationUtility_o *)(v36 + 24);
  v171 = v170;
  while ( 1 )
  {
    v53 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v171,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__MoveNext__);
    if ( !v53 )
      break;
    current = (ItemDropEfficiencyEntity_o *)v171.fields._current;
    if ( !v171.fields._current )
      sub_1BCAA3C(v53, v54);
    TransitionParams = (ItemLinkInfoWindowComponent_o *)ItemDropEfficiencyEntity__GetTransitionParams(
                                                          (ItemDropEfficiencyEntity_o *)v171.fields._current,
                                                          0LL);
    MultiEventRewardViewItem = (Il2CppObject *)ItemLinkInfoWindowComponent__IsCreateMultiEventRewardViewItem(
                                                 TransitionParams,
                                                 (System_String_array *)TransitionParams,
                                                 v57);
    if ( ((unsigned __int8)MultiEventRewardViewItem & 1) != 0 )
    {
      if ( !eventEntList )
        sub_1BCAA3C(MultiEventRewardViewItem, v59);
      v61 = *(_QWORD *)&eventEntList->max_length;
      if ( (int)v61 >= 1 )
      {
        v62 = 0;
        v63 = 0;
        do
        {
          if ( v62 >= (unsigned int)v61 )
            sub_1BCAA44(MultiEventRewardViewItem, v59);
          v64 = eventEntList->m_Items[v62];
          if ( !v64 )
            sub_1BCAA3C(MultiEventRewardViewItem, v59);
          if ( !Master_object )
            sub_1BCAA3C(MultiEventRewardViewItem, v59);
          EnableEventEntitiyList = (System_Collections_ICollection_o *)ShopMaster__GetEnableEventEntitiyList(
                                                                         (ShopMaster_o *)Master_object,
                                                                         v64->fields.id,
                                                                         0LL);
          MultiEventRewardViewItem = (Il2CppObject *)BasicHelper__IsNullOrEmpty(EnableEventEntitiyList, 0LL);
          if ( ((unsigned __int8)MultiEventRewardViewItem & 1) == 0 )
          {
            klass = (System_Func_object__bool__o *)v52->klass;
            if ( !v52->klass )
            {
              klass = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_ShopEntity__bool__TypeInfo, v59, v66, v67);
              System_Func_object__bool____ctor(
                klass,
                object,
                Method_ItemLinkInfoWindowComponent___c__DisplayClass23_0__CreateItemLinkInfoListViewItemList_b__0__,
                0LL);
              v52->klass = (PartyOrganizationUtility_c *)klass;
              sub_1BCA784(v52, (int64_t)klass, v69, v70, v71, v72, v73, v74);
            }
            MultiEventRewardViewItem = BasicHelper__Find_object_(
                                         (System_Object_array *)EnableEventEntitiyList,
                                         (System_Func_T__bool__o *)klass,
                                         (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_ShopEntity___);
            v76 = MultiEventRewardViewItem;
            if ( MultiEventRewardViewItem )
            {
              ItemLinkInfoListViewItem = ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItem(
                                           this,
                                           v51,
                                           *v166,
                                           current,
                                           isItemGetInfoList,
                                           needNum,
                                           v75);
              IsEventShopOpen = ShopMaster__IsEventShopOpen((ShopMaster_o *)Master_object, v64->fields.id, 0LL);
              if ( !ItemLinkInfoListViewItem )
                sub_1BCAA3C(IsEventShopOpen, v79);
              ItemLinkInfoListViewItem->fields._IsLocked_k__BackingField = !IsEventShopOpen;
              TitleText = ItemLinkInfoWindowComponent__GetTitleText(
                            (ItemLinkInfoWindowComponent_o *)IsEventShopOpen,
                            current,
                            ItemLinkInfoListViewItem,
                            v64,
                            v80);
              ItemLinkInfoListViewItem->fields._Name_k__BackingField = TitleText;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&ItemLinkInfoListViewItem->fields._Name_k__BackingField,
                (int64_t)TitleText,
                v82,
                v83,
                v84,
                v85,
                v86,
                v87);
              id = v64->fields.id;
              ItemLinkInfoListViewItem->fields._TargetId_k__BackingField = id;
              ItemLinkInfoListViewItem->fields._TargetValueType_k__BackingField = 4;
              ItemLinkInfoListViewItem->fields._ItemDropEfficiencyPriority_k__BackingField = current->fields.priority
                                                                                           + v63;
              EventRewardTransitionParam = ItemLinkInfoWindowComponent__CreateEventRewardTransitionParam(
                                             v89,
                                             current,
                                             id,
                                             (int32_t)v76[2].monitor,
                                             v90);
              ItemLinkInfoListViewItem->fields._TransitionParam_k__BackingField = EventRewardTransitionParam;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&ItemLinkInfoListViewItem->fields._TransitionParam_k__BackingField,
                (int64_t)EventRewardTransitionParam,
                v92,
                v93,
                v94,
                v95,
                v96,
                v97);
              ClosedMessage = ItemLinkInfoWindowComponent__GetClosedMessage(
                                v98,
                                closedMessageMst,
                                current,
                                ItemLinkInfoListViewItem->fields._TargetId_k__BackingField,
                                v99);
              ItemLinkInfoListViewItem->fields._ClosedMessage_k__BackingField = ClosedMessage;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&ItemLinkInfoListViewItem->fields._ClosedMessage_k__BackingField,
                (int64_t)ClosedMessage,
                v101,
                v102,
                v103,
                v104,
                v105,
                v106);
              if ( !v50 )
                sub_1BCAA3C(v107, v108);
              items = v50->fields._items;
              v116 = Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__;
              ++v50->fields._version;
              if ( !items )
                sub_1BCAA3C(v107, v108);
              size = v50->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v50,
                  (Il2CppObject *)ItemLinkInfoListViewItem,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
              }
              else
              {
                v118 = &items->obj.klass + size;
                v50->fields._size = size + 1;
                v118[4] = (Il2CppClass *)ItemLinkInfoListViewItem;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)(v118 + 4),
                  (int64_t)ItemLinkInfoListViewItem,
                  v109,
                  v110,
                  v111,
                  v112,
                  v113,
                  v114);
              }
              ++v63;
              ++v51;
            }
          }
          LODWORD(v61) = eventEntList->max_length;
          ++v62;
        }
        while ( v62 < (int)v61 );
      }
    }
    else
    {
      v119 = ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItem(
               this,
               v51,
               *v166,
               current,
               isItemGetInfoList,
               needNum,
               v60);
      IsBoardActive = ItemLinkInfoWindowComponent__IsBoardActive((ItemLinkInfoWindowComponent_o *)v119, current, v120);
      if ( !v119 )
        sub_1BCAA3C(IsBoardActive, v122);
      v119->fields._IsLocked_k__BackingField = !IsBoardActive;
      v124 = ItemLinkInfoWindowComponent__GetTitleText(
               (ItemLinkInfoWindowComponent_o *)IsBoardActive,
               current,
               v119,
               0LL,
               v123);
      v119->fields._Name_k__BackingField = v124;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v119->fields._Name_k__BackingField,
        (int64_t)v124,
        v125,
        v126,
        v127,
        v128,
        v129,
        v130);
      TargetId = (ItemLinkInfoWindowComponent_o *)ItemLinkInfoWindowComponent__GetTargetId(v131, current, v132);
      v119->fields._TargetId_k__BackingField = (int)TargetId;
      v119->fields._TargetValueType_k__BackingField = ItemLinkInfoWindowComponent__GetTargetValueType(
                                                        TargetId,
                                                        current,
                                                        v134);
      v119->fields._ItemDropEfficiencyPriority_k__BackingField = current->fields.priority;
      transitionParam = (int64_t)current->fields.transitionParam;
      v119->fields._TransitionParam_k__BackingField = (struct System_String_o *)transitionParam;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v119->fields._TransitionParam_k__BackingField,
        transitionParam,
        v136,
        v137,
        v138,
        v139,
        v140,
        v141);
      v144 = ItemLinkInfoWindowComponent__GetClosedMessage(v142, closedMessageMst, current, 0, v143);
      v119->fields._ClosedMessage_k__BackingField = v144;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v119->fields._ClosedMessage_k__BackingField,
        (int64_t)v144,
        v145,
        v146,
        v147,
        v148,
        v149,
        v150);
      if ( !v50 )
        sub_1BCAA3C(v151, v152);
      v159 = v50->fields._items;
      v160 = Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__;
      ++v50->fields._version;
      if ( !v159 )
        sub_1BCAA3C(v151, v152);
      v161 = v50->fields._size;
      if ( (unsigned int)v161 >= v159->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v50,
          (Il2CppObject *)v119,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
      }
      else
      {
        v162 = &v159->obj.klass + v161;
        v50->fields._size = v161 + 1;
        v162[4] = (Il2CppClass *)v119;
        sub_1BCA784((PartyOrganizationUtility_o *)(v162 + 4), (int64_t)v119, v153, v154, v155, v156, v157, v158);
      }
      ++v51;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v171,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ItemDropEfficiencyEntity__Dispose__);
  return (System_Collections_Generic_List_ItemLinkInfoListViewItem__o *)v50;
}


ItemLinkInfoTextObject_o *__fastcall ItemLinkInfoWindowComponent__CreateListDescriptionObject(
        ItemLinkInfoWindowComponent_o *this,
        UnityEngine_GameObject_o *parentObject,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *listDescriptionObject; // x20
  __int64 v10; // x1
  UnityEngine_Transform_o *transform; // x19
  Il2CppObject *v12; // x19

  v4 = this;
  if ( (byte_4B18B2C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoTextObject___, parentObject, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v5, v6);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B18B2C = 1;
  }
  if ( !parentObject )
    goto LABEL_10;
  listDescriptionObject = (Il2CppObject *)v4->fields.listDescriptionObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v12 = UnityEngine_Object__Instantiate_object__49903816(
          listDescriptionObject,
          transform,
          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !v12 )
LABEL_10:
    sub_1BCAA3C(this, parentObject);
  return (ItemLinkInfoTextObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)v12,
                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoTextObject___);
}


ItemLinkInfoSubHeaderObject_o *__fastcall ItemLinkInfoWindowComponent__CreateSubHeaderObject(
        ItemLinkInfoWindowComponent_o *this,
        UnityEngine_GameObject_o *parentObject,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *subHeaderObject; // x20
  __int64 v10; // x1
  UnityEngine_Transform_o *transform; // x19
  Il2CppObject *v12; // x19

  v4 = this;
  if ( (byte_4B18B2B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoSubHeaderObject___, parentObject, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v5, v6);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B18B2B = 1;
  }
  if ( !parentObject )
    goto LABEL_10;
  subHeaderObject = (Il2CppObject *)v4->fields.subHeaderObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v12 = UnityEngine_Object__Instantiate_object__49903816(
          subHeaderObject,
          transform,
          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !v12 )
LABEL_10:
    sub_1BCAA3C(this, parentObject);
  return (ItemLinkInfoSubHeaderObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)v12,
                                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoSubHeaderObject___);
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
    sub_1BCA784(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t TargetValueType_k__BackingField; // w8
  int32_t TargetId_k__BackingField; // w20
  TerminalPramsManager_c *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t ItemId; // w19
  TerminalPramsManager_c *v27; // x0
  System_Action_o *transitionAction; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B18B33 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ItemLinkInfoWindowComponent_ExecSceneTransition__, itemDropEfficiencyEnt, viewItem);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v11, v12);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
    byte_4B18B33 = 1;
  }
  transitionAction = 0LL;
  if ( this->fields.state == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v17 = Method_ItemLinkInfoWindowComponent_ExecSceneTransition__;
    if ( (*((_BYTE *)Method_ItemLinkInfoWindowComponent_ExecSceneTransition__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1BCA7F8(Method_ItemLinkInfoWindowComponent_ExecSceneTransition__);
    v18 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, viewItem->fields._IsLocked_k__BackingField, 0LL);
    TargetValueType_k__BackingField = viewItem->fields._TargetValueType_k__BackingField;
    if ( (unsigned int)(TargetValueType_k__BackingField - 6) <= 3 )
    {
      TargetId_k__BackingField = viewItem->fields._TargetId_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
      if ( !byte_4B12759 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v20);
        byte_4B12759 = 1;
      }
      v23 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
        v23 = TerminalPramsManager_TypeInfo;
      }
      v23->static_fields->_ShopFocusItemId_k__BackingField = TargetId_k__BackingField;
      TargetValueType_k__BackingField = viewItem->fields._TargetValueType_k__BackingField;
    }
    if ( TargetValueType_k__BackingField == 4 )
    {
      ItemId = ItemLinkInfoListViewItem__get_ItemId(viewItem, 0LL);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
      if ( !byte_4B12759 )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v24, v25);
        byte_4B12759 = 1;
      }
      v27 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
        v27 = TerminalPramsManager_TypeInfo;
      }
      v27->static_fields->_ShopFocusItemId_k__BackingField = ItemId;
    }
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
LABEL_29:
      sub_1BCAA3C(Instance, v16);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_String_array *TransitionParams; // x20
  System_String_o **m_Items; // x8
  System_String_o *v25; // x20
  Il2CppObject *v26; // [xsp+0h] [xbp-40h] BYREF
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B18B2A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, closedMessageMst, itemDropEfficiencyEnt);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&Method_System_Enum_TryParse_SceneList_Type___, v14, v15);
    sub_1BCA7E0(&System_Enum_TypeInfo, v16, v17);
    sub_1BCA7E0(&string_TypeInfo, v18, v19);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v20, v21);
    byte_4B18B2A = 1;
  }
  entity = 0LL;
  result = 0;
  v26 = 0LL;
  if ( !itemDropEfficiencyEnt || !closedMessageMst )
    goto LABEL_26;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)closedMessageMst,
          &entity,
          itemDropEfficiencyEnt->fields.closedMessageId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__) )
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
      sub_1BCAA44(this, closedMessageMst);
    m_Items = TransitionParams->m_Items;
  }
  v25 = *m_Items;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, closedMessageMst);
  this = (ItemLinkInfoWindowComponent_o *)System_Enum__TryParse_Int32Enum__49389516(
                                            v25,
                                            1,
                                            &result,
                                            (const MethodInfo_2F19FCC *)Method_System_Enum_TryParse_SceneList_Type___);
  if ( ((unsigned __int8)this & 1) != 0 && result == 72 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, closedMessageMst);
    this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
    if ( !this )
      goto LABEL_26;
    this = (ItemLinkInfoWindowComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              &v26,
                                              eventId,
                                              (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( entity && v26 )
        return System_String__Format((System_String_o *)entity[1].monitor, (Il2CppObject *)v26[2].monitor, 0LL);
LABEL_26:
      sub_1BCAA3C(this, closedMessageMst);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  ItemLinkInfoWindowComponent_o *v22; // x20
  System_String_o *basePanel; // x21
  int m_CancellationTokenSource; // w8
  bool v25; // w0
  int32_t v26; // w8
  int32_t v28[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B18B30 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Enum_TryParse_SceneList_Type___, ent, method);
    sub_1BCA7E0(&System_Enum_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v6, v7);
    sub_1BCA7E0(&StringLiteral_9035/*"MasterMission"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_8973/*"ManaPrism"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_8484/*"LeafExchange"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_6637/*"FRIEND_POINT"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_15737/*"War"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_10944/*"PurePrismExchange"*/, v18, v19);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BCA7E0(&StringLiteral_11287/*"RarePrism"*/, v20, v21);
    byte_4B18B30 = 1;
  }
  *(_QWORD *)result = 0LL;
  *(_QWORD *)v28 = 0LL;
  if ( !ent
    || (this = (ItemLinkInfoWindowComponent_o *)ent->fields.transitionParam) == 0LL
    || (this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0LL)) == 0LL )
  {
LABEL_45:
    sub_1BCAA3C(this, ent);
  }
  v22 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_46;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, ent);
  if ( !System_Enum__TryParse_Int32Enum__49389516(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_2F19FCC *)Method_System_Enum_TryParse_SceneList_Type___) )
    goto LABEL_37;
  if ( result[1] <= 22 )
  {
    if ( result[1] == 20 )
    {
      if ( SLODWORD(v22->fields.m_CancellationTokenSource) >= 2 )
      {
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62406340(
                                                  (System_String_o *)v22->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_6637/*"FRIEND_POINT"*/,
                                                  1,
                                                  0LL);
        if ( !(_DWORD)this )
          return (int)this;
        if ( LODWORD(v22->fields.m_CancellationTokenSource) > 1 )
        {
          v25 = System_Int32__TryParse((System_String_o *)v22->fields.basePanelList, v28, 0LL);
          v26 = v28[0];
          goto LABEL_42;
        }
LABEL_46:
        sub_1BCAA44(this, ent);
      }
    }
    else
    {
      if ( result[1] != 22 || SLODWORD(v22->fields.m_CancellationTokenSource) < 2 )
        goto LABEL_37;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62406340(
                                                (System_String_o *)v22->fields.basePanelList,
                                                (System_String_o *)StringLiteral_8973/*"ManaPrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_30;
      if ( LODWORD(v22->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_46;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62406340(
                                                (System_String_o *)v22->fields.basePanelList,
                                                (System_String_o *)StringLiteral_10944/*"PurePrismExchange"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_30;
      if ( LODWORD(v22->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_46;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62406340(
                                                (System_String_o *)v22->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11287/*"RarePrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_30;
      if ( LODWORD(v22->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_46;
      if ( !System_String__Compare_62406340(
              (System_String_o *)v22->fields.basePanelList,
              (System_String_o *)StringLiteral_8484/*"LeafExchange"*/,
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
    if ( SLODWORD(v22->fields.m_CancellationTokenSource) >= 2 )
    {
      v25 = System_Int32__TryParse((System_String_o *)v22->fields.basePanelList, result, 0LL);
      v26 = result[0];
      goto LABEL_42;
    }
    goto LABEL_37;
  }
  if ( result[1] != 34 )
    goto LABEL_37;
  m_CancellationTokenSource = (int)v22->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 3 )
  {
    this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62406340(
                                              (System_String_o *)v22->fields.basePanelList,
                                              (System_String_o *)StringLiteral_9035/*"MasterMission"*/,
                                              1,
                                              0LL);
    if ( !(_DWORD)this )
      return (int)this;
    if ( LODWORD(v22->fields.m_CancellationTokenSource) > 2 )
    {
      v25 = System_Int32__TryParse((System_String_o *)v22->fields.baseWindow, &v28[1], 0LL);
      v26 = v28[1];
LABEL_42:
      if ( v25 )
        LODWORD(this) = v26;
      else
        LODWORD(this) = 0;
      return (int)this;
    }
    goto LABEL_46;
  }
  if ( m_CancellationTokenSource != 2
    || System_String__Compare_62406340(
         (System_String_o *)v22->fields.basePanelList,
         (System_String_o *)StringLiteral_15737/*"War"*/,
         1,
         0LL)
    || !ItemDropEfficiencyEntity__IsMainScenario(ent, 0LL) )
  {
    goto LABEL_37;
  }
  this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  ItemLinkInfoWindowComponent_o *v24; // x19
  System_String_o *basePanel; // x21
  int m_CancellationTokenSource; // w8
  int32_t v27; // w20
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B18B31 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Enum_TryParse_SceneList_Type___, ent, method);
    sub_1BCA7E0(&System_Enum_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v6, v7);
    sub_1BCA7E0(&StringLiteral_13060/*"Spot"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_9035/*"MasterMission"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_8973/*"ManaPrism"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_8484/*"LeafExchange"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_15737/*"War"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_10944/*"PurePrismExchange"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_11287/*"RarePrism"*/, v20, v21);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BCA7E0(&StringLiteral_11058/*"Quest"*/, v22, v23);
    byte_4B18B31 = 1;
  }
  *(_QWORD *)result = 0LL;
  v29 = 0;
  if ( !ent )
    goto LABEL_50;
  this = (ItemLinkInfoWindowComponent_o *)ent->fields.transitionParam;
  if ( !this )
    goto LABEL_50;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0LL);
  if ( !this )
    goto LABEL_50;
  v24 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_51;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, ent);
  if ( !System_Enum__TryParse_Int32Enum__49389516(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_2F19FCC *)Method_System_Enum_TryParse_SceneList_Type___) )
    return 0;
  switch ( result[1] )
  {
    case 22:
      if ( SLODWORD(v24->fields.m_CancellationTokenSource) < 2 )
        return 0;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62406340(
                                                (System_String_o *)v24->fields.basePanelList,
                                                (System_String_o *)StringLiteral_8973/*"ManaPrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 6;
      if ( LODWORD(v24->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62406340(
                                                (System_String_o *)v24->fields.basePanelList,
                                                (System_String_o *)StringLiteral_10944/*"PurePrismExchange"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 7;
      if ( LODWORD(v24->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62406340(
                                                (System_String_o *)v24->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11287/*"RarePrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 8;
      if ( LODWORD(v24->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      if ( System_String__Compare_62406340(
             (System_String_o *)v24->fields.basePanelList,
             (System_String_o *)StringLiteral_8484/*"LeafExchange"*/,
             1,
             0LL) )
      {
        return 0;
      }
      return 9;
    case 72:
      if ( SLODWORD(v24->fields.m_CancellationTokenSource) < 2 )
        return 0;
      if ( System_Int32__TryParse((System_String_o *)v24->fields.basePanelList, &v29, 0LL) )
        return 4;
      else
        return 0;
    case 34:
      m_CancellationTokenSource = (int)v24->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource < 3 )
      {
        if ( m_CancellationTokenSource != 2
          || System_String__Compare_62406340(
               (System_String_o *)v24->fields.basePanelList,
               (System_String_o *)StringLiteral_15737/*"War"*/,
               1,
               0LL)
          || !ItemDropEfficiencyEntity__IsMainScenario(ent, 0LL) )
        {
          return 0;
        }
        this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( this )
        {
          if ( !QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0LL) )
            return 0;
          return 3;
        }
LABEL_50:
        sub_1BCAA3C(this, ent);
      }
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62406340(
                                                (System_String_o *)v24->fields.basePanelList,
                                                (System_String_o *)StringLiteral_9035/*"MasterMission"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 5;
      if ( LODWORD(v24->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_Int32__TryParse(
                                                (System_String_o *)v24->fields.baseWindow,
                                                result,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        return 0;
      if ( LODWORD(v24->fields.m_CancellationTokenSource) <= 1 )
LABEL_51:
        sub_1BCAA44(this, ent);
      v27 = 1;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62406340(
                                                (System_String_o *)v24->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11058/*"Quest"*/,
                                                1,
                                                0LL);
      if ( (_DWORD)this )
      {
        if ( LODWORD(v24->fields.m_CancellationTokenSource) > 1 )
        {
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62406340(
                                                    (System_String_o *)v24->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_13060/*"Spot"*/,
                                                    1,
                                                    0LL);
          if ( !(_DWORD)this )
            return 2;
          if ( LODWORD(v24->fields.m_CancellationTokenSource) > 1 )
          {
            if ( !System_String__Compare_62406340(
                    (System_String_o *)v24->fields.basePanelList,
                    (System_String_o *)StringLiteral_15737/*"War"*/,
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
  return v27;
}


System_String_o *__fastcall ItemLinkInfoWindowComponent__GetTitleText(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt,
        ItemLinkInfoListViewItem_o *viewItem,
        EventEntity_o *eventEnt,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t targetType; // w8
  struct System_String_StaticFields *p_shortName; // x8

  if ( (byte_4B18B2F & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, itemDropEfficiencyEnt, viewItem);
    sub_1BCA7E0(&string_TypeInfo, v8, v9);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BCA7E0(&StringLiteral_7550/*"ITEM_LINK_INFO_LIST_HIDDEN_TITLE"*/, v10, v11);
    byte_4B18B2F = 1;
  }
  if ( !itemDropEfficiencyEnt )
LABEL_18:
    sub_1BCAA3C(this, itemDropEfficiencyEnt);
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
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, itemDropEfficiencyEnt);
  return LocalizationManager__Get((System_String_o *)StringLiteral_7550/*"ITEM_LINK_INFO_LIST_HIDDEN_TITLE"*/, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__Init(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *titleItemNameLabel; // x0

  if ( (byte_4B18B20 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B18B20 = 1;
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
    sub_1BCAA3C(titleItemNameLabel, method);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  ItemLinkInfoWindowComponent_o *v46; // x20
  System_String_o *basePanel; // x21
  __int64 v48; // x1
  BalanceConfig_c *v49; // x0
  int32_t ClassBoardReleaseQuestId; // w19
  bool v52; // w21
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x19
  __int64 v59; // x1
  System_Object_array *ListValidData; // x20
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Func_object__bool__o *v64; // x21
  __int64 v65; // x1
  int m_CancellationTokenSource; // w8
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_WarInfo_o *v68; // x19
  MapControl_SpotInfo_o *SpotInfo; // x0
  bool v70; // w0
  Il2CppObject *v71; // [xsp+0h] [xbp-40h] BYREF
  int32_t key; // [xsp+Ch] [xbp-34h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B18B32 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, entity, method);
    sub_1BCA7E0(&Method_BasicHelper_Any_GachaEntity___, v4, v5);
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, v6, v7);
    sub_1BCA7E0(&CondType_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ShopMaster___, v14, v15);
    sub_1BCA7E0(&DataManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v18, v19);
    sub_1BCA7E0(&Method_System_Enum_TryParse_SceneList_Type___, v20, v21);
    sub_1BCA7E0(&System_Enum_TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Func_GachaEntity__bool__TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v26, v27);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v28, v29);
    sub_1BCA7E0(&Method_ItemLinkInfoWindowComponent___c__DisplayClass36_0__IsBoardActive_b__0__, v30, v31);
    sub_1BCA7E0(&ItemLinkInfoWindowComponent___c__DisplayClass36_0_TypeInfo, v32, v33);
    sub_1BCA7E0(&StringLiteral_13060/*"Spot"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_9035/*"MasterMission"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_6637/*"FRIEND_POINT"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_15737/*"War"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_4625/*"CoinRoom"*/, v42, v43);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BCA7E0(&StringLiteral_11058/*"Quest"*/, v44, v45);
    byte_4B18B32 = 1;
  }
  *(_QWORD *)result = 0LL;
  key = 0;
  v71 = 0LL;
  if ( !entity )
    goto LABEL_71;
  this = (ItemLinkInfoWindowComponent_o *)entity->fields.transitionParam;
  if ( !this )
    goto LABEL_71;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0LL);
  if ( !this )
    goto LABEL_71;
  v46 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_72;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, entity);
  if ( !System_Enum__TryParse_Int32Enum__49389516(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_2F19FCC *)Method_System_Enum_TryParse_SceneList_Type___) )
    return 0;
  if ( result[1] <= 34 )
  {
    v52 = 0;
    switch ( result[1] )
    {
      case 0x14:
        if ( SLODWORD(v46->fields.m_CancellationTokenSource) < 2
          || System_String__op_Equality(
               (System_String_o *)v46->fields.basePanelList,
               (System_String_o *)StringLiteral_6637/*"FRIEND_POINT"*/,
               0LL)
          || SLODWORD(v46->fields.m_CancellationTokenSource) < 2 )
        {
          return 1;
        }
        v58 = sub_1BCAA2C(ItemLinkInfoWindowComponent___c__DisplayClass36_0_TypeInfo, v55, v56, v57);
        System_Object___ctor((Il2CppObject *)v58, 0LL);
        if ( LODWORD(v46->fields.m_CancellationTokenSource) <= 1 )
          break;
        if ( !v58 )
          goto LABEL_71;
        System_Int32__TryParse((System_String_o *)v46->fields.basePanelList, (int32_t *)(v58 + 16), 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v59);
        this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !this )
          goto LABEL_71;
        ListValidData = (System_Object_array *)GachaMaster__getListValidData((GachaMaster_o *)this, 0LL);
        v64 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GachaEntity__bool__TypeInfo, v61, v62, v63);
        System_Func_object__bool____ctor(
          v64,
          (Il2CppObject *)v58,
          Method_ItemLinkInfoWindowComponent___c__DisplayClass36_0__IsBoardActive_b__0__,
          0LL);
        return BasicHelper__Any_object__49274176(
                 ListValidData,
                 (System_Func_T__bool__o *)v64,
                 (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_GachaEntity___);
      case 0x16:
        if ( SLODWORD(v46->fields.m_CancellationTokenSource) < 2 )
          return 1;
        v52 = 1;
        if ( System_String__Compare_62406340(
               (System_String_o *)v46->fields.basePanelList,
               (System_String_o *)StringLiteral_4625/*"CoinRoom"*/,
               1,
               0LL) )
        {
          return v52;
        }
        if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v65);
        return CoinRoomUtility__IsTargetQuestClear(0LL);
      case 0x17:
      case 0x1E:
      case 0x20:
        return 1;
      case 0x22:
        m_CancellationTokenSource = (int)v46->fields.m_CancellationTokenSource;
        if ( m_CancellationTokenSource < 3 )
        {
          if ( m_CancellationTokenSource == 2 )
          {
            v52 = 1;
            if ( System_String__Compare_62406340(
                   (System_String_o *)v46->fields.basePanelList,
                   (System_String_o *)StringLiteral_15737/*"War"*/,
                   1,
                   0LL) )
            {
              return v52;
            }
            if ( ItemDropEfficiencyEntity__IsMainScenario(entity, 0LL) )
            {
              this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( !this )
                goto LABEL_71;
              LatestProgressWarInfo = QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0LL);
              if ( LatestProgressWarInfo )
              {
                v68 = LatestProgressWarInfo;
                if ( MapControl_WarInfo__GetStatus(LatestProgressWarInfo, 0LL) != 3 )
                  return MapControl_WarInfo__GetStatus(v68, 0LL) != 4;
                return 0;
              }
            }
          }
          return 1;
        }
        v52 = 1;
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62406340(
                                                  (System_String_o *)v46->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_9035/*"MasterMission"*/,
                                                  1,
                                                  0LL);
        if ( !(_DWORD)this )
          return v52;
        if ( LODWORD(v46->fields.m_CancellationTokenSource) <= 2 )
          break;
        this = (ItemLinkInfoWindowComponent_o *)System_Int32__TryParse(
                                                  (System_String_o *)v46->fields.baseWindow,
                                                  result,
                                                  0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 1;
        if ( LODWORD(v46->fields.m_CancellationTokenSource) <= 1 )
          break;
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62406340(
                                                  (System_String_o *)v46->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_11058/*"Quest"*/,
                                                  1,
                                                  0LL);
        if ( !(_DWORD)this )
        {
          this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( this )
            return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)this, result[0], 0LL);
          goto LABEL_71;
        }
        if ( LODWORD(v46->fields.m_CancellationTokenSource) > 1 )
        {
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_62406340(
                                                    (System_String_o *)v46->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_13060/*"Spot"*/,
                                                    1,
                                                    0LL);
          if ( !(_DWORD)this )
          {
            this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( this )
            {
              SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)this, result[0], 0LL);
              if ( SpotInfo )
                return SpotInfo->fields.dispType == 1;
              return 0;
            }
            goto LABEL_71;
          }
          if ( LODWORD(v46->fields.m_CancellationTokenSource) > 1 )
          {
            v52 = 1;
            if ( System_String__Compare_62406340(
                   (System_String_o *)v46->fields.basePanelList,
                   (System_String_o *)StringLiteral_15737/*"War"*/,
                   1,
                   0LL) )
            {
              return v52;
            }
            this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( this )
              return QuestTree__IsActiveWar((QuestTree_o *)this, result[0], 0LL);
LABEL_71:
            sub_1BCAA3C(this, entity);
          }
        }
        return v70;
      default:
        return v52;
    }
LABEL_72:
    sub_1BCAA44(this, entity);
  }
  if ( result[1] != 72 )
  {
    if ( result[1] == 91 )
    {
      v49 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v48);
        v49 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v49->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v48);
      return CondType__IsQuestClear_38310172(ClassBoardReleaseQuestId, -1, 0, 0LL);
    }
    return 0;
  }
  if ( SLODWORD(v46->fields.m_CancellationTokenSource) < 2
    || !System_Int32__TryParse((System_String_o *)v46->fields.basePanelList, &key, 0LL) )
  {
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v53);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_71;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &v71,
          key,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v54);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ShopMaster___);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v9; // x1
  System_String_o **m_Items; // x8
  System_String_o *v11; // x19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B18B29 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Enum_TryParse_SceneList_Type___, transitionParams, method);
    sub_1BCA7E0(&System_Enum_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B18B29 = 1;
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
    sub_1BCAA3C(IsNullOrEmpty, v9);
  }
  if ( !transitionParams )
    goto LABEL_15;
  if ( !transitionParams->max_length )
    sub_1BCAA44(IsNullOrEmpty, v9);
  m_Items = transitionParams->m_Items;
  if ( transitionParams->max_length != 1 )
    return 0;
LABEL_9:
  v11 = *m_Items;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v9);
  return System_Enum__TryParse_Int32Enum__49389516(
           v11,
           1,
           &result,
           (const MethodInfo_2F19FCC *)Method_System_Enum_TryParse_SceneList_Type___)
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  UnityEngine_GameObject_o *listViewBg; // x23
  ItemLinkInfoWindowComponent_c *v33; // x0
  int32_t id; // w24
  System_String_o **p_name; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x22
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  int64_t v43; // x23
  UnityEngine_GameObject_o *v44; // x0
  const MethodInfo *v45; // x4
  ItemLinkInfoDetailObject_o *ItemLinkInfoDetailObject; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  System_Action_o *v66; // x20

  if ( (byte_4B18B21 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, itemEnt, callback);
    sub_1BCA7E0(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ItemLinkInfoWindowComponent_EndOpen__, v11, v12);
    sub_1BCA7E0(&ItemLinkInfoWindowComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__, v15, v16);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__,
      v17,
      v18);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    byte_4B18B21 = 1;
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
    v33 = ItemLinkInfoWindowComponent_TypeInfo;
    if ( !ItemLinkInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent_TypeInfo, v25);
      v33 = ItemLinkInfoWindowComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(listViewBg, v33->static_fields->STONE_DETAIL_VIEW_BG_POSITION_Y, 0LL);
  }
  this->fields.callbackFunc = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc, (int64_t)callback, v26, v27, v28, v29, v30, v31);
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
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  v43 = sub_1BCAA2C(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v40, v41, v42);
  ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor((ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v43, 0LL);
  if ( !v43 )
    goto LABEL_25;
  *(_DWORD *)(v43 + 16) = id;
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
    goto LABEL_25;
  v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  ItemLinkInfoDetailObject = ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
                               this,
                               itemEnt,
                               v44,
                               isDispStoneDetail,
                               v45);
  *(_QWORD *)(v43 + 24) = ItemLinkInfoDetailObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 24), (int64_t)ItemLinkInfoDetailObject, v47, v48, v49, v50, v51, v52);
  if ( !v39 )
    goto LABEL_25;
  items = v39->fields._items;
  v60 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++v39->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v39->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v39,
      (Il2CppObject *)v43,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = &items->obj.klass + size;
    v39->fields._size = size + 1;
    v62[4] = (Il2CppClass *)v43;
    sub_1BCA784((PartyOrganizationUtility_o *)(v62 + 4), v43, v53, v54, v55, v56, v57, v58);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
LABEL_25:
    sub_1BCAA3C(gameObject, v24);
  ItemLinkInfoListViewManager__CreateList(
    (ItemLinkInfoListViewManager_o *)gameObject,
    (System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v39,
    isDispStoneDetail,
    0LL);
  v66 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v63, v64, v65);
  System_Action___ctor(v66, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v66, 0, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__OpenItemTransitionList(
        ItemLinkInfoWindowComponent_o *this,
        System_Int32_array *itemIdList,
        System_Int32_array *needNumList,
        ItemLinkInfoWindowComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x3
  System_Collections_IEnumerator_o *ItemTransitionList; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x20

  if ( (byte_4B18B23 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, itemIdList, needNumList);
    sub_1BCA7E0(&Method_ItemLinkInfoWindowComponent_EndOpen__, v9, v10);
    byte_4B18B23 = 1;
  }
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.listViewBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        this->fields.callbackFunc = callback,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
          (int64_t)callback,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.titleItemNameLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
    sub_1BCAA3C(gameObject, v12);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ItemTransitionList = ItemLinkInfoWindowComponent__CoCreateItemTransitionList(this, itemIdList, needNumList, v19);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, ItemTransitionList, 0LL);
  v24 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v24, 0, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__OpenUserItemInfo(
        ItemLinkInfoWindowComponent_o *this,
        UserItemData_o *itemData,
        ItemLinkInfoWindowComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  int32_t itemId; // w21
  System_Collections_Generic_List_ItemDropEfficiencyEntity__o *EnabledListByItemId; // x22
  const MethodInfo *v45; // x4
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_String_o **v52; // x8
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Collections_Generic_List_object__o *v56; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x24
  ItemLinkInfoWindowComponent___c_c *v61; // x0
  System_Func_T__TResult__o *_9__20_0; // x23
  Il2CppObject *v63; // x25
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  int64_t v72; // x23
  const MethodInfo *v73; // x6
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *ItemLinkInfoListViewItemList; // x22
  const MethodInfo *v75; // x2
  struct ItemLinkInfoListViewManager_o *listViewManager; // x8
  ItemLinkInfoSubHeaderObject_o *SubHeaderObject; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  ItemLinkInfoWindowComponent_o *v84; // x0
  const MethodInfo *v85; // x2
  ItemLinkInfoWindowComponent_o *v86; // x0
  const MethodInfo *v87; // x2
  Il2CppObject *v88; // x21
  const MethodInfo *v89; // x4
  struct ItemLinkInfoListViewManager_o *v90; // x8
  UnityEngine_GameObject_o *v91; // x2
  ItemLinkInfoDetailObject_o *ItemLinkInfoDetailObject; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v99; // x1
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  struct System_Object_array *items; // x8
  _QWORD *v113; // x9
  __int64 size; // x10
  Il2CppClass **v115; // x0
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x3
  System_Action_o *v119; // x20
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *viewList; // [xsp+8h] [xbp-58h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  v6 = this;
  if ( (byte_4B18B22 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, itemData, callback);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemDropEfficiencyMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_ItemDropEfficiencyEntity___, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_EventEntity__long___, v21, v22);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_EventEntity___, v23, v24);
    sub_1BCA7E0(&System_Func_EventEntity__long__TypeInfo, v25, v26);
    sub_1BCA7E0(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_ItemLinkInfoWindowComponent_EndOpen__, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__, v31, v32);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__,
      v33,
      v34);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_ItemLinkInfoWindowComponent___c__OpenUserItemInfo_b__20_0__, v37, v38);
    sub_1BCA7E0(&ItemLinkInfoWindowComponent___c_TypeInfo, v39, v40);
    this = (ItemLinkInfoWindowComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v41, v42);
    byte_4B18B22 = 1;
  }
  entity = 0LL;
  viewList = 0LL;
  if ( !itemData )
    goto LABEL_47;
  itemId = itemData->fields.itemId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, itemData);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
    goto LABEL_47;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    itemId,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
  if ( !this )
    goto LABEL_47;
  EnabledListByItemId = ItemDropEfficiencyMaster__GetEnabledListByItemId(
                          (ItemDropEfficiencyMaster_o *)this,
                          itemId,
                          0LL);
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EnabledListByItemId,
          (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_ItemDropEfficiencyEntity___) )
  {
    ItemLinkInfoWindowComponent__Open(v6, (ItemEntity_o *)entity, callback, 0, v45);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields.callbackFunc, (int64_t)callback, v46, v47, v48, v49, v50, v51);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.titleItemNameLabel;
  if ( !this )
    goto LABEL_47;
  v52 = (System_String_o **)(entity ? &entity[1].monitor : &StringLiteral_1/*""*/);
  UILabel__set_text((UILabel_o *)this, *v52, 0LL);
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.titleWindowNameLabel;
  if ( !this )
    goto LABEL_47;
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_47;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v56 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo,
                                                       v53,
                                                       v54,
                                                       v55);
  System_Collections_Generic_List_object____ctor(
    v56,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v57);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_47;
  this = (ItemLinkInfoWindowComponent_o *)EventMaster__GetEnableEntityList((EventMaster_o *)this, 0, 1, 0LL);
  if ( !this )
    goto LABEL_47;
  v60 = (System_Collections_Generic_IEnumerable_TSource__o *)this;
  if ( this->fields.m_CancellationTokenSource )
  {
    v61 = ItemLinkInfoWindowComponent___c_TypeInfo;
    if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo, itemData);
      v61 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    _9__20_0 = (System_Func_T__TResult__o *)v61->static_fields->__9__20_0;
    if ( !_9__20_0 )
    {
      if ( !v61->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v61, itemData);
        v61 = ItemLinkInfoWindowComponent___c_TypeInfo;
      }
      v63 = (Il2CppObject *)v61->static_fields->__9;
      _9__20_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_EventEntity__long__TypeInfo, itemData, v58, v59);
      System_Func_object__long____ctor(
        _9__20_0,
        v63,
        Method_ItemLinkInfoWindowComponent___c__OpenUserItemInfo_b__20_0__,
        0LL);
      static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
      static_fields->__9__20_0 = (struct System_Func_EventEntity__long__o *)_9__20_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__20_0,
        (int64_t)_9__20_0,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70);
    }
    v71 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__long_(
                                                                 v60,
                                                                 (System_Func_TSource__TKey__o *)_9__20_0,
                                                                 (const MethodInfo_2F3B400 *)Method_System_Linq_Enumerable_OrderBy_EventEntity__long___);
    v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                 v71,
                                                                 (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_EventEntity___);
  }
  v72 = sub_1BCAA2C(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, itemData, v58, v59);
  ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor((ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v72, 0LL);
  if ( !v72 )
    goto LABEL_47;
  *(_DWORD *)(v72 + 16) = itemId;
  ItemLinkInfoListViewItemList = ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItemList(
                                   v6,
                                   EnabledListByItemId,
                                   0,
                                   0,
                                   (ItemEntity_o *)entity,
                                   (EventEntity_array *)v60,
                                   v73);
  viewList = ItemLinkInfoListViewItemList;
  this = (ItemLinkInfoWindowComponent_o *)System_Linq_Enumerable__Any_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)ItemLinkInfoListViewItemList,
                                            (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    listViewManager = v6->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_47;
    SubHeaderObject = ItemLinkInfoWindowComponent__CreateSubHeaderObject(v6, listViewManager->fields.listParent, v75);
    *(_QWORD *)(v72 + 32) = SubHeaderObject;
    sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 32), (int64_t)SubHeaderObject, v78, v79, v80, v81, v82, v83);
    ItemLinkInfoWindowComponent__SortViewItemList(v84, &viewList, v85);
    ItemLinkInfoWindowComponent__CheckRecommendBoard(v86, &viewList, v87);
    ItemLinkInfoListViewItemList = viewList;
  }
  v88 = entity;
  this = (ItemLinkInfoWindowComponent_o *)System_Linq_Enumerable__Any_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)ItemLinkInfoListViewItemList,
                                            (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
  v90 = v6->fields.listViewManager;
  if ( !v90 )
    goto LABEL_47;
  v91 = ((unsigned __int8)this & 1) != 0
      ? v90->fields.listParent
      : UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6->fields.listViewManager, 0LL);
  ItemLinkInfoDetailObject = ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
                               v6,
                               (ItemEntity_o *)v88,
                               v91,
                               0,
                               v89);
  *(_QWORD *)(v72 + 24) = ItemLinkInfoDetailObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 24), (int64_t)ItemLinkInfoDetailObject, v93, v94, v95, v96, v97, v98);
  v99 = viewList;
  *(_QWORD *)(v72 + 48) = viewList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v72 + 48), (int64_t)v99, v100, v101, v102, v103, v104, v105);
  if ( !v56 )
    goto LABEL_47;
  items = v56->fields._items;
  v113 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++v56->fields._version;
  if ( !items )
    goto LABEL_47;
  size = v56->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v56,
      (Il2CppObject *)v72,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
  }
  else
  {
    v115 = &items->obj.klass + size;
    v56->fields._size = size + 1;
    v115[4] = (Il2CppClass *)v72;
    sub_1BCA784((PartyOrganizationUtility_o *)(v115 + 4), v72, v106, v107, v108, v109, v110, v111);
  }
  this = (ItemLinkInfoWindowComponent_o *)v6->fields.listViewManager;
  if ( !this )
LABEL_47:
    sub_1BCAA3C(this, itemData);
  ItemLinkInfoListViewManager__CreateList(
    (ItemLinkInfoListViewManager_o *)this,
    (System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v56,
    0,
    0LL);
  v119 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v116, v117, v118);
  System_Action___ctor(v119, (Il2CppObject *)v6, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)v6, v119, 0, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__SortViewItemList(
        ItemLinkInfoWindowComponent_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewItem__o **viewList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  ItemLinkInfoWindowComponent___c_c *v21; // x0
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v22; // x20
  System_Func_object__int__o *_9__31_0; // x21
  Il2CppObject *v24; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  ItemLinkInfoWindowComponent___c_c *v36; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v37; // x20
  System_Func_object__int__o *_9__31_1; // x21
  Il2CppObject *v39; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v40; // x0
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  ItemLinkInfoWindowComponent___c_c *v51; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v52; // x20
  System_Func_object__int__o *_9__31_2; // x21
  Il2CppObject *v54; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7

  if ( (byte_4B18B2D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_ItemLinkInfoListViewItem__int___, viewList, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenByDescending_ItemLinkInfoListViewItem__int___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenBy_ItemLinkInfoListViewItem__int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_ItemLinkInfoListViewItem___, v9, v10);
    sub_1BCA7E0(&System_Func_ItemLinkInfoListViewItem__int__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_0__, v13, v14);
    sub_1BCA7E0(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_1__, v15, v16);
    sub_1BCA7E0(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_2__, v17, v18);
    sub_1BCA7E0(&ItemLinkInfoWindowComponent___c_TypeInfo, v19, v20);
    byte_4B18B2D = 1;
  }
  v21 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v22 = *viewList;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo, viewList);
    v21 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__31_0 = (System_Func_object__int__o *)v21->static_fields->__9__31_0;
  if ( !_9__31_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21, viewList);
      v21 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__31_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_ItemLinkInfoListViewItem__int__TypeInfo,
                                               viewList,
                                               method,
                                               v3);
    System_Func_object__int____ctor(
      _9__31_0,
      v24,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_0__,
      0LL);
    static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__31_0 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__31_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__31_0,
      (int64_t)_9__31_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
          (System_Func_TSource__TKey__o *)_9__31_0,
          (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_ItemLinkInfoListViewItem__int___);
  v36 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v37 = v32;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo, v33);
    v36 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__31_1 = (System_Func_object__int__o *)v36->static_fields->__9__31_1;
  if ( !_9__31_1 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36, v33);
      v36 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__31_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_ItemLinkInfoListViewItem__int__TypeInfo,
                                               v33,
                                               v34,
                                               v35);
    System_Func_object__int____ctor(
      _9__31_1,
      v39,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_1__,
      0LL);
    v40 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v40->__9__31_1 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__31_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v40->__9__31_1, (int64_t)_9__31_1, v41, v42, v43, v44, v45, v46);
  }
  v47 = System_Linq_Enumerable__ThenBy_object__int_(
          v37,
          (System_Func_TSource__TKey__o *)_9__31_1,
          (const MethodInfo_2F4AE9C *)Method_System_Linq_Enumerable_ThenBy_ItemLinkInfoListViewItem__int___);
  v51 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v52 = v47;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo, v48);
    v51 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__31_2 = (System_Func_object__int__o *)v51->static_fields->__9__31_2;
  if ( !_9__31_2 )
  {
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51, v48);
      v51 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v54 = (Il2CppObject *)v51->static_fields->__9;
    _9__31_2 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_ItemLinkInfoListViewItem__int__TypeInfo,
                                               v48,
                                               v49,
                                               v50);
    System_Func_object__int____ctor(
      _9__31_2,
      v54,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__31_2__,
      0LL);
    v55 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v55->__9__31_2 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__31_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v55->__9__31_2, (int64_t)_9__31_2, v56, v57, v58, v59, v60, v61);
  }
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                               v52,
                                                               (System_Func_TSource__TKey__o *)_9__31_2,
                                                               (const MethodInfo_2F4B298 *)Method_System_Linq_Enumerable_ThenByDescending_ItemLinkInfoListViewItem__int___);
  v63 = (System_Collections_Generic_List_ItemLinkInfoListViewItem__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v62,
                                                                         (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_ItemLinkInfoListViewItem___);
  *viewList = v63;
  sub_1BCA784((PartyOrganizationUtility_o *)viewList, (int64_t)v63, v64, v65, v66, v67, v68, v69);
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

  if ( (byte_4B18B1E & 1) == 0 )
  {
    sub_1BCA7E0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B18B1E = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  ItemLinkInfoWindowComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ItemLinkInfoWindowComponent__get_closeBtnPath(
        ItemLinkInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B18B35 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_7714/*"InfoWindow/CloseBtn"*/, method, v2);
    byte_4B18B35 = 1;
  }
  return (System_String_o *)StringLiteral_7714/*"InfoWindow/CloseBtn"*/;
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

  if ( (byte_4B18B1F & 1) == 0 )
  {
    sub_1BCA7E0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, value, method);
    byte_4B18B1F = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0F73C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0F6F4;
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
  if ( (byte_4B18B38 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B18B38 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall ItemLinkInfoWindowComponent_CallbackFunc__EndInvoke(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  int32_t _1__state; // w8
  struct ItemLinkInfoWindowComponent_o *_4__this; // x20
  Il2CppObject *Master_object; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  Il2CppObject *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  EventEntity_array *EnableEntityList; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x2
  __int64 v58; // x3
  System_Collections_Generic_IEnumerable_TSource__o *eventEntList_5__4; // x22
  ItemLinkInfoWindowComponent___c_c *v60; // x0
  System_Func_T__TResult__o *_9__22_0; // x23
  Il2CppObject *v62; // x24
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  System_Object_array *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  System_Collections_Generic_List_object__o *v78; // x21
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int v85; // w8
  int32_t v86; // w22
  __int64 v87; // x2
  __int64 v88; // x3
  struct System_Int32_array *itemIdList; // x9
  int max_length; // w10
  bool result; // w0
  struct System_Int32_array *needNumList; // x8
  __int64 i_5__6; // x9
  int v94; // w10
  int32_t v95; // w23
  int64_t v96; // x21
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  const MethodInfo *v103; // x6
  System_Collections_Generic_List_object__o *ItemLinkInfoListViewItemList; // x22
  const MethodInfo *v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  struct ItemLinkInfoListViewManager_o *listViewManager; // x8
  ItemLinkInfoTextObject_o *ListDescriptionObject; // x0
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  ItemLinkInfoWindowComponent_o *v119; // x0
  const MethodInfo *v120; // x2
  int64_t v121; // x2
  int32_t v122; // w3
  System_String_o *v123; // x4
  BattleSetupInfo_o *v124; // x5
  FollowerInfo_o *v125; // x6
  PartyListViewItem_o *v126; // x7
  __int64 v127; // x8
  _QWORD *v128; // x9
  __int64 _2__current_low; // x10
  __int64 v130; // x8
  int64_t v131; // x2
  int32_t v132; // w3
  System_String_o *v133; // x4
  BattleSetupInfo_o *v134; // x5
  FollowerInfo_o *v135; // x6
  PartyListViewItem_o *v136; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  System_Collections_Generic_List_object__o *v138; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v3 = this;
  if ( (byte_4B18B3E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemDropEfficiencyMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_EventEntity__long___, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_EventEntity___, v16, v17);
    sub_1BCA7E0(&System_Func_EventEntity__long__TypeInfo, v18, v19);
    sub_1BCA7E0(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__, v22, v23);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__,
      v24,
      v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_ItemLinkInfoWindowComponent___c__CoCreateItemTransitionList_b__22_0__, v30, v31);
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)sub_1BCA7E0(
                                                                                &ItemLinkInfoWindowComponent___c_TypeInfo,
                                                                                v32,
                                                                                v33);
    byte_4B18B3E = 1;
  }
  v138 = 0LL;
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  v3->fields._itemMst_5__2 = (struct ItemMaster_o *)Master_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields._itemMst_5__2,
    (int64_t)Master_object,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v43 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
  v3->fields._itemDropEfficiencyMst_5__3 = (struct ItemDropEfficiencyMaster_o *)v43;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields._itemDropEfficiencyMst_5__3,
    (int64_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_51;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)this, 0, 1, 0LL);
  v3->fields._eventEntList_5__4 = EnableEntityList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields._eventEntList_5__4,
    (int64_t)EnableEntityList,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  eventEntList_5__4 = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields._eventEntList_5__4;
  if ( !eventEntList_5__4 )
    goto LABEL_51;
  if ( eventEntList_5__4[1].monitor )
  {
    v60 = ItemLinkInfoWindowComponent___c_TypeInfo;
    if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo, method);
      v60 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    _9__22_0 = (System_Func_T__TResult__o *)v60->static_fields->__9__22_0;
    if ( !_9__22_0 )
    {
      if ( !v60->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v60, method);
        v60 = ItemLinkInfoWindowComponent___c_TypeInfo;
      }
      v62 = (Il2CppObject *)v60->static_fields->__9;
      _9__22_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_EventEntity__long__TypeInfo, method, v57, v58);
      System_Func_object__long____ctor(
        _9__22_0,
        v62,
        Method_ItemLinkInfoWindowComponent___c__CoCreateItemTransitionList_b__22_0__,
        0LL);
      static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
      static_fields->__9__22_0 = (struct System_Func_EventEntity__long__o *)_9__22_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__22_0,
        (int64_t)_9__22_0,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
    }
    v70 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__long_(
                                                                 eventEntList_5__4,
                                                                 (System_Func_TSource__TKey__o *)_9__22_0,
                                                                 (const MethodInfo_2F3B400 *)Method_System_Linq_Enumerable_OrderBy_EventEntity__long___);
    v71 = System_Linq_Enumerable__ToArray_object_(
            v70,
            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_EventEntity___);
    v3->fields._eventEntList_5__4 = (struct EventEntity_array *)v71;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v3->fields._eventEntList_5__4,
      (int64_t)v71,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
  }
  v78 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo,
                                                       method,
                                                       v57,
                                                       v58);
  System_Collections_Generic_List_object____ctor(
    v78,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  v3->fields._groupList_5__5 = (struct System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v78;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields._groupList_5__5, (int64_t)v78, v79, v80, v81, v82, v83, v84);
  v85 = 0;
  for ( v3->fields._i_5__6 = 0; ; v3->fields._i_5__6 = v85 )
  {
    itemIdList = v3->fields.itemIdList;
    if ( !itemIdList )
      goto LABEL_51;
    max_length = itemIdList->max_length;
    if ( v85 >= max_length )
    {
      if ( !_4__this )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)_4__this->fields.listViewManager;
      if ( !this )
        goto LABEL_51;
      ItemLinkInfoListViewManager__CreateList((ItemLinkInfoListViewManager_o *)this, v3->fields._groupList_5__5, 0, 0LL);
      return 0;
    }
    if ( v85 >= (unsigned int)max_length )
      goto LABEL_52;
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v3->fields._itemMst_5__2;
    if ( !this )
      goto LABEL_51;
    v86 = itemIdList->m_Items[v85 + 1];
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                &entity,
                                                                                v86,
                                                                                (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_22:
    v85 = v3->fields._i_5__6 + 1;
  }
  needNumList = v3->fields.needNumList;
  if ( !needNumList )
    goto LABEL_51;
  i_5__6 = v3->fields._i_5__6;
  v94 = needNumList->max_length;
  if ( (int)i_5__6 >= v94 )
  {
    v95 = 0;
  }
  else
  {
    if ( (unsigned int)i_5__6 >= v94 )
LABEL_52:
      sub_1BCAA44(this, method);
    v95 = needNumList->m_Items[i_5__6 + 1];
  }
  v96 = sub_1BCAA2C(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, method, v87, v88);
  ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor((ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v96, 0LL);
  if ( !v96 )
    goto LABEL_51;
  *(_QWORD *)(v96 + 24) = 0LL;
  *(_DWORD *)(v96 + 16) = v86;
  sub_1BCA784((PartyOrganizationUtility_o *)(v96 + 24), 0LL, v97, v98, v99, v100, v101, v102);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v3->fields._itemDropEfficiencyMst_5__3;
  if ( !this )
    goto LABEL_51;
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)ItemDropEfficiencyMaster__GetEnabledListByItemId(
                                                                              (ItemDropEfficiencyMaster_o *)this,
                                                                              v86,
                                                                              0LL);
  if ( !_4__this )
    goto LABEL_51;
  ItemLinkInfoListViewItemList = (System_Collections_Generic_List_object__o *)ItemLinkInfoWindowComponent__CreateItemLinkInfoListViewItemList(
                                                                                _4__this,
                                                                                (System_Collections_Generic_List_ItemDropEfficiencyEntity__o *)this,
                                                                                1,
                                                                                v95,
                                                                                (ItemEntity_o *)entity,
                                                                                v3->fields._eventEntList_5__4,
                                                                                v103);
  v138 = ItemLinkInfoListViewItemList;
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)System_Linq_Enumerable__Any_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)ItemLinkInfoListViewItemList,
                                                                              (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
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
                                  v105);
        *(_QWORD *)(v96 + 40) = ListDescriptionObject;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)(v96 + 40),
          (int64_t)ListDescriptionObject,
          v113,
          v114,
          v115,
          v116,
          v117,
          v118);
        goto LABEL_41;
      }
LABEL_51:
      sub_1BCAA3C(this, method);
    }
LABEL_41:
    ItemLinkInfoWindowComponent__SortViewItemList(
      (ItemLinkInfoWindowComponent_o *)this,
      (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v138,
      v105);
    ItemLinkInfoWindowComponent__CheckRecommendBoard(
      v119,
      (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v138,
      v120);
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v138;
    if ( !v138 )
      goto LABEL_51;
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)System_Collections_Generic_List_object___get_Item(
                                                                                v138,
                                                                                0,
                                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !this )
      goto LABEL_51;
    BYTE4(this[1].fields._groupList_5__5) = 1;
    ItemLinkInfoListViewItemList = v138;
  }
  *(_QWORD *)(v96 + 48) = ItemLinkInfoListViewItemList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)(v96 + 48),
    (int64_t)ItemLinkInfoListViewItemList,
    (int64_t)v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v3->fields._groupList_5__5;
  if ( !this )
    goto LABEL_51;
  v127 = *(_QWORD *)&this->fields.__1__state;
  v128 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v127 )
    goto LABEL_51;
  _2__current_low = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)_2__current_low >= *(_DWORD *)(v127 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v96,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
  }
  else
  {
    v130 = v127 + 8 * _2__current_low;
    LODWORD(this->fields.__2__current) = _2__current_low + 1;
    *(_QWORD *)(v130 + 32) = v96;
    sub_1BCA784((PartyOrganizationUtility_o *)(v130 + 32), v96, v121, v122, v123, v124, v125, v126);
  }
  v3->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(p__2__current, 0LL, v131, v132, v133, v134, v135, v136);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18B39 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemLinkInfoWindowComponent___c_TypeInfo, v1, v2);
    byte_4B18B39 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ItemLinkInfoWindowComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ItemLinkInfoWindowComponent___c_TypeInfo->static_fields->__9 = (struct ItemLinkInfoWindowComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ItemLinkInfoWindowComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return e->fields.startedAt;
}


void __fastcall ItemLinkInfoWindowComponent___c___CreateItemLinkInfoListViewItem_b__24_2(
        ItemLinkInfoWindowComponent___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B18B3A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B18B3A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL, 0LL);
}


int64_t __fastcall ItemLinkInfoWindowComponent___c___OpenUserItemInfo_b__20_0(
        ItemLinkInfoWindowComponent___c_o *this,
        EventEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCAA3C(this, 0LL);
  return e->fields.startedAt;
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__31_0(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return !n->fields._IsLocked_k__BackingField;
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__31_1(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return ItemTransitionType__GetSortPriority(n->fields._Type_k__BackingField, 0LL);
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__31_2(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
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
  if ( (byte_4B18B3B & 1) == 0 )
  {
    this = (ItemLinkInfoWindowComponent___c__DisplayClass23_0_o *)sub_1BCA7E0(
                                                                    &Method_System_Linq_Enumerable_Contains_int___,
                                                                    ent,
                                                                    method);
    byte_4B18B3B = 1;
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
               (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
LABEL_8:
    sub_1BCAA3C(this, ent);
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
  __int64 v2; // x2
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  ItemLinkInfoWindowComponent___c_c *v10; // x0
  ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt; // x19
  ItemLinkInfoWindowComponent_o *_4__this; // x20
  ItemLinkInfoListViewItem_o *viewItem; // x21
  System_Action_o *_9__24_2; // x22
  Il2CppObject *v15; // x23
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4B18B3C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ItemLinkInfoWindowComponent___c__CreateItemLinkInfoListViewItem_b__24_2__, v6, v7);
    sub_1BCA7E0(&ItemLinkInfoWindowComponent___c_TypeInfo, v8, v9);
    byte_4B18B3C = 1;
  }
  v10 = ItemLinkInfoWindowComponent___c_TypeInfo;
  _4__this = this->fields.__4__this;
  itemDropEfficiencyEnt = this->fields.itemDropEfficiencyEnt;
  viewItem = this->fields.viewItem;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo, method);
    v10 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__24_2 = v10->static_fields->__9__24_2;
  if ( !_9__24_2 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10, method);
      v10 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v10->static_fields->__9;
    _9__24_2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__24_2,
      v15,
      Method_ItemLinkInfoWindowComponent___c__CreateItemLinkInfoListViewItem_b__24_2__,
      0LL);
    static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__24_2 = _9__24_2;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__24_2,
      (int64_t)_9__24_2,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !_4__this )
    sub_1BCAA3C(v10, method);
  ItemLinkInfoWindowComponent__ExecSceneTransition(_4__this, itemDropEfficiencyEnt, viewItem, _9__24_2, v4);
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass24_0___CreateItemLinkInfoListViewItem_b__1(
        ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  const MethodInfo *v4; // x4
  ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *_9__3; // x23
  ItemLinkInfoWindowComponent_o *_4__this; // x20
  ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt; // x21
  ItemLinkInfoListViewItem_o *viewItem; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v5 = this;
  if ( (byte_4B18B3D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *)sub_1BCA7E0(
                                                                    &Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__3__,
                                                                    v6,
                                                                    v7);
    byte_4B18B3D = 1;
  }
  _9__3 = v5->fields.__9__3;
  _4__this = v5->fields.__4__this;
  itemDropEfficiencyEnt = v5->fields.itemDropEfficiencyEnt;
  viewItem = v5->fields.viewItem;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)v5,
      Method_ItemLinkInfoWindowComponent___c__DisplayClass24_0__CreateItemLinkInfoListViewItem_b__3__,
      0LL);
    v5->fields.__9__3 = _9__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v5->fields.__9__3, (int64_t)_9__3, v12, v13, v14, v15, v16, v17);
  }
  if ( !_4__this )
    sub_1BCAA3C(this, method);
  ItemLinkInfoWindowComponent__ExecSceneTransition(_4__this, itemDropEfficiencyEnt, viewItem, _9__3, v4);
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass24_0___CreateItemLinkInfoListViewItem_b__3(
        ItemLinkInfoWindowComponent___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  ItemLinkInfoWindowComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  ItemLinkInfoWindowComponent__Close_43881168(_4__this, 0LL, v2);
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
    sub_1BCAA3C(this, 0LL);
  return n->fields.id == this->fields.gachaId;
}