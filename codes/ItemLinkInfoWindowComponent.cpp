void __fastcall ItemLinkInfoWindowComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A00D63 & 1) == 0 )
  {
    sub_1B64A00(&ItemLinkInfoWindowComponent_TypeInfo, v1);
    byte_4A00D63 = 1;
  }
  LODWORD(ItemLinkInfoWindowComponent_TypeInfo->static_fields->STONE_DETAIL_VIEW_BG_POSITION_Y) = (struct ItemLinkInfoWindowComponent_StaticFields)1092616192;
}


void __fastcall ItemLinkInfoWindowComponent___ctor(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A00D62 & 1) == 0 )
  {
    sub_1B64A00(&BaseDialog_TypeInfo, method);
    byte_4A00D62 = 1;
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
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct ItemLinkInfoWindowComponent_CallbackFunc_o *v5; // x20
  struct ItemLinkInfoWindowComponent_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B649A4(p_callbackFunc, 0, (int32_t)method, v3);
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

  if ( (byte_4A00D5A & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__Dispose__, viewList);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__MoveNext__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__get_Current__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__GetEnumerator__, v6);
    byte_4A00D5A = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !*viewList )
    sub_1B64C5C(0LL, viewList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)*viewList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__GetEnumerator__);
  v7 = 0;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__MoveNext__);
    if ( !v8 )
      break;
    current = v11.fields._current;
    if ( (v7 & 1) != 0 )
    {
      if ( !v11.fields._current )
        sub_1B64C5C(v8, v9);
      v7 = 1;
    }
    else
    {
      if ( !v11.fields._current )
        sub_1B64C5C(v8, v9);
      if ( LODWORD(v11.fields._current[11].klass) == 4 )
      {
        v7 = 1;
        BYTE1(v11.fields._current[9].monitor) = 1;
      }
      else
      {
        v7 = 0;
      }
    }
    if ( ((__int64)current[11].klass & 0xFFFFFFFE) == 2 )
      BYTE1(current[9].monitor) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__Dispose__);
}


void __fastcall ItemLinkInfoWindowComponent__Close(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemLinkInfoWindowComponent__Close_42046388(this, 0LL, v2);
}


void __fastcall ItemLinkInfoWindowComponent__Close_42046388(
        ItemLinkInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *listViewManager; // x21
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  ItemLinkInfoListViewManager_o *v11; // x0
  System_Action_o *v12; // x20

  if ( (byte_4A00D60 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, callback);
    sub_1B64A00(&Method_ItemLinkInfoWindowComponent_EndClose__, v5);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    byte_4A00D60 = 1;
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
        sub_1B64C5C(0LL, v8);
      ItemLinkInfoListViewManager__DeleteCallback(v11, v8);
    }
    this->fields.state = 3;
    this->fields.closeCallbackFunc = callback;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v9, v10);
    v12 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
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
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A00D55 & 1) == 0 )
  {
    sub_1B64A00(&ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_TypeInfo, itemIdList);
    byte_4A00D55 = 1;
  }
  v7 = sub_1B64C4C(ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_TypeInfo);
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22___ctor(
    (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1B64C5C(v8, v9);
  *(_QWORD *)(v7 + 48) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = itemIdList;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)itemIdList, v12, v13);
  *(_QWORD *)(v7 + 40) = needNumList;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)needNumList, v14, v15);
  return (System_Collections_IEnumerator_o *)v7;
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
  if ( (byte_4A00D56 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoDetailObject___, itemEnt);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject____75801880, v9);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, v10);
    byte_4A00D56 = 1;
  }
  v11 = 120LL;
  if ( isDispStoneDetail )
    v11 = 144LL;
  if ( !parentObject )
    goto LABEL_13;
  v12 = *(Il2CppObject **)((char *)&v8->klass + v11);
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__Instantiate_object__49014464(
          v12,
          transform,
          (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  v15 = 0LL;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v14 )
    {
      this = (ItemLinkInfoWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)v14,
                                                (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoDetailObject___);
      if ( this )
      {
        v15 = (ItemLinkInfoDetailObject_o *)this;
        ItemLinkInfoDetailObject__Setup((ItemLinkInfoDetailObject_o *)this, itemEnt, isDispStoneDetail, v16);
        return v15;
      }
    }
LABEL_13:
    sub_1B64C5C(this, itemEnt);
  }
  return v15;
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
  if ( (byte_4A00D58 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoTextObject___, parentObject);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject____75801880, v5);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    byte_4A00D58 = 1;
  }
  if ( !parentObject )
    goto LABEL_10;
  listDescriptionObject = (Il2CppObject *)v4->fields.listDescriptionObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object__49014464(
         listDescriptionObject,
         transform,
         (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !v9 )
LABEL_10:
    sub_1B64C5C(this, parentObject);
  return (ItemLinkInfoTextObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)v9,
                                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoTextObject___);
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
  if ( (byte_4A00D57 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoSubHeaderObject___, parentObject);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject____75801880, v5);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    byte_4A00D57 = 1;
  }
  if ( !parentObject )
    goto LABEL_10;
  subHeaderObject = (Il2CppObject *)v4->fields.subHeaderObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object__49014464(
         subHeaderObject,
         transform,
         (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !v9 )
LABEL_10:
    sub_1B64C5C(this, parentObject);
  return (ItemLinkInfoSubHeaderObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)v9,
                                            (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoSubHeaderObject___);
}


void __fastcall ItemLinkInfoWindowComponent__EndClose(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ItemLinkInfoWindowComponent__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B649A4(p_closeCallbackFunc, 0, v3, v4);
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
  __int64 v15; // x1
  int32_t TargetId_k__BackingField; // w19
  TerminalPramsManager_c *v17; // x0
  System_Action_o *transitionAction; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A00D5F & 1) == 0 )
  {
    sub_1B64A00(&Method_ItemLinkInfoWindowComponent_ExecSceneTransition__, itemDropEfficiencyEnt);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B64A00(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v10);
    sub_1B64A00(&TerminalPramsManager_TypeInfo, v11);
    byte_4A00D5F = 1;
  }
  transitionAction = 0LL;
  if ( this->fields.state == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !itemDropEfficiencyEnt || !Instance )
      goto LABEL_21;
    if ( !CommonUI__TryGetSceneTransitionAction(
            (CommonUI_o *)Instance,
            &transitionAction,
            itemDropEfficiencyEnt->fields.transitionParam,
            itemDropEfficiencyEnt->fields.script,
            closeAction,
            0LL) )
      return;
    v14 = Method_ItemLinkInfoWindowComponent_ExecSceneTransition__;
    if ( (*((_BYTE *)Method_ItemLinkInfoWindowComponent_ExecSceneTransition__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1B64A18(Method_ItemLinkInfoWindowComponent_ExecSceneTransition__);
    Instance = (Il2CppObject *)sub_1B649E4(v14, v14[4]);
    if ( !viewItem )
      goto LABEL_21;
    OverwriteAssetSoundName__PlaySystemSe(
      (System_Reflection_MethodBase_o *)Instance,
      viewItem->fields._IsLocked_k__BackingField,
      0LL);
    if ( (unsigned int)(viewItem->fields._TargetValueType_k__BackingField - 6) <= 3 )
    {
      TargetId_k__BackingField = viewItem->fields._TargetId_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49FB22C )
      {
        sub_1B64A00(&TerminalPramsManager_TypeInfo, v15);
        byte_49FB22C = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
      }
      v17->static_fields->_ShopFocusItemId_k__BackingField = TargetId_k__BackingField;
    }
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
LABEL_21:
      sub_1B64C5C(Instance, v13);
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    ActionExtensions__Call(transitionAction, 0LL);
  }
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
  __int64 v13; // x1
  ItemLinkInfoWindowComponent_o *v14; // x20
  System_String_o *basePanel; // x21
  int m_CancellationTokenSource; // w8
  bool v17; // w0
  int32_t v18; // w8
  int32_t v20[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A00D5C & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Enum_TryParse_SceneList_Type___, ent);
    sub_1B64A00(&System_Enum_TypeInfo, v4);
    sub_1B64A00(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_1B64A00(&StringLiteral_8867/*"MasterMission"*/, v6);
    sub_1B64A00(&StringLiteral_8804/*"ManaPrism"*/, v7);
    sub_1B64A00(&StringLiteral_8322/*"LeafExchange"*/, v8);
    sub_1B64A00(&StringLiteral_6491/*"FRIEND_POINT"*/, v9);
    sub_1B64A00(&StringLiteral_15505/*"War"*/, v10);
    sub_1B64A00(&StringLiteral_21176/*"mainScenario"*/, v11);
    sub_1B64A00(&StringLiteral_10758/*"PurePrismExchange"*/, v12);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B64A00(&StringLiteral_11101/*"RarePrism"*/, v13);
    byte_4A00D5C = 1;
  }
  *(_QWORD *)result = 0LL;
  *(_QWORD *)v20 = 0LL;
  if ( !ent
    || (this = (ItemLinkInfoWindowComponent_o *)ent->fields.transitionParam) == 0LL
    || (this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0LL)) == 0LL )
  {
LABEL_45:
    sub_1B64C5C(this, ent);
  }
  v14 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_46;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__48516668(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_2E44E3C *)Method_System_Enum_TryParse_SceneList_Type___) )
    goto LABEL_37;
  if ( result[1] <= 22 )
  {
    if ( result[1] == 20 )
    {
      if ( SLODWORD(v14->fields.m_CancellationTokenSource) >= 2 )
      {
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61390256(
                                                  (System_String_o *)v14->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_6491/*"FRIEND_POINT"*/,
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
        sub_1B64C64(this, ent);
      }
    }
    else
    {
      if ( result[1] != 22 || SLODWORD(v14->fields.m_CancellationTokenSource) < 2 )
        goto LABEL_37;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61390256(
                                                (System_String_o *)v14->fields.basePanelList,
                                                (System_String_o *)StringLiteral_8804/*"ManaPrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_30;
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_46;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61390256(
                                                (System_String_o *)v14->fields.basePanelList,
                                                (System_String_o *)StringLiteral_10758/*"PurePrismExchange"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_30;
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_46;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61390256(
                                                (System_String_o *)v14->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11101/*"RarePrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_30;
      if ( LODWORD(v14->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_46;
      if ( !System_String__Compare_61390256(
              (System_String_o *)v14->fields.basePanelList,
              (System_String_o *)StringLiteral_8322/*"LeafExchange"*/,
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
    this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61390256(
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
    || System_String__Compare_61390256(
         (System_String_o *)v14->fields.basePanelList,
         (System_String_o *)StringLiteral_15505/*"War"*/,
         1,
         0LL)
    || EntityScriptUtil__GetIntValue(ent->fields.script, (System_String_o *)StringLiteral_21176/*"mainScenario"*/, 0, 0LL) < 1 )
  {
    goto LABEL_37;
  }
  this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  __int64 v14; // x1
  ItemLinkInfoWindowComponent_o *v15; // x19
  System_String_o *basePanel; // x21
  int m_CancellationTokenSource; // w8
  int32_t v18; // w20
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A00D5D & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Enum_TryParse_SceneList_Type___, ent);
    sub_1B64A00(&System_Enum_TypeInfo, v4);
    sub_1B64A00(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    sub_1B64A00(&StringLiteral_12841/*"Spot"*/, v6);
    sub_1B64A00(&StringLiteral_8867/*"MasterMission"*/, v7);
    sub_1B64A00(&StringLiteral_8804/*"ManaPrism"*/, v8);
    sub_1B64A00(&StringLiteral_8322/*"LeafExchange"*/, v9);
    sub_1B64A00(&StringLiteral_15505/*"War"*/, v10);
    sub_1B64A00(&StringLiteral_21176/*"mainScenario"*/, v11);
    sub_1B64A00(&StringLiteral_10758/*"PurePrismExchange"*/, v12);
    sub_1B64A00(&StringLiteral_11101/*"RarePrism"*/, v13);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B64A00(&StringLiteral_10872/*"Quest"*/, v14);
    byte_4A00D5D = 1;
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
  if ( !System_Enum__TryParse_Int32Enum__48516668(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_2E44E3C *)Method_System_Enum_TryParse_SceneList_Type___) )
    return 0;
  switch ( result[1] )
  {
    case 22:
      if ( SLODWORD(v15->fields.m_CancellationTokenSource) < 2 )
        return 0;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61390256(
                                                (System_String_o *)v15->fields.basePanelList,
                                                (System_String_o *)StringLiteral_8804/*"ManaPrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 6;
      if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61390256(
                                                (System_String_o *)v15->fields.basePanelList,
                                                (System_String_o *)StringLiteral_10758/*"PurePrismExchange"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 7;
      if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61390256(
                                                (System_String_o *)v15->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11101/*"RarePrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 8;
      if ( LODWORD(v15->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      if ( System_String__Compare_61390256(
             (System_String_o *)v15->fields.basePanelList,
             (System_String_o *)StringLiteral_8322/*"LeafExchange"*/,
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
          || System_String__Compare_61390256(
               (System_String_o *)v15->fields.basePanelList,
               (System_String_o *)StringLiteral_15505/*"War"*/,
               1,
               0LL)
          || EntityScriptUtil__GetIntValue(ent->fields.script, (System_String_o *)StringLiteral_21176/*"mainScenario"*/, 0, 0LL) < 1 )
        {
          return 0;
        }
        this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( this )
        {
          if ( !QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0LL) )
            return 0;
          return 3;
        }
LABEL_50:
        sub_1B64C5C(this, ent);
      }
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61390256(
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
        sub_1B64C64(this, ent);
      v18 = 1;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61390256(
                                                (System_String_o *)v15->fields.basePanelList,
                                                (System_String_o *)StringLiteral_10872/*"Quest"*/,
                                                1,
                                                0LL);
      if ( (_DWORD)this )
      {
        if ( LODWORD(v15->fields.m_CancellationTokenSource) > 1 )
        {
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61390256(
                                                    (System_String_o *)v15->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_12841/*"Spot"*/,
                                                    1,
                                                    0LL);
          if ( !(_DWORD)this )
            return 2;
          if ( LODWORD(v15->fields.m_CancellationTokenSource) > 1 )
          {
            if ( !System_String__Compare_61390256(
                    (System_String_o *)v15->fields.basePanelList,
                    (System_String_o *)StringLiteral_15505/*"War"*/,
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
        ItemDropEfficiencyEntity_o *entity,
        ItemLinkInfoListViewItem_o *viewItem,
        const MethodInfo *method)
{
  __int64 v6; // x1
  int32_t targetType; // w8

  if ( (byte_4A00D5B & 1) == 0 )
  {
    sub_1B64A00(&LocalizationManager_TypeInfo, entity);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B64A00(&StringLiteral_7396/*"ITEM_LINK_INFO_LIST_HIDDEN_TITLE"*/, v6);
    byte_4A00D5B = 1;
  }
  if ( !entity )
    goto LABEL_12;
  targetType = entity->fields.targetType;
  if ( targetType != 4 && targetType != 2 )
    return entity->fields.title;
  if ( !viewItem )
LABEL_12:
    sub_1B64C5C(this, entity);
  if ( !viewItem->fields._IsLocked_k__BackingField )
    return entity->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_7396/*"ITEM_LINK_INFO_LIST_HIDDEN_TITLE"*/, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__Init(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleItemNameLabel; // x0

  if ( (byte_4A00D51 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_1/*""*/, method);
    byte_4A00D51 = 1;
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
    sub_1B64C5C(titleItemNameLabel, method);
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
  __int64 v25; // x1
  ItemLinkInfoWindowComponent_o *v26; // x20
  System_String_o *basePanel; // x21
  BalanceConfig_c *v28; // x0
  int32_t ClassBoardReleaseQuestId; // w19
  bool v31; // w21
  ItemLinkInfoWindowComponent___c__DisplayClass31_0_o *v32; // x19
  System_Object_array *ListValidData; // x20
  System_Func_object__bool__o *v34; // x21
  int m_CancellationTokenSource; // w8
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_SpotInfo_o *SpotInfo; // x0
  bool v38; // w0
  Il2CppObject *v39; // [xsp+0h] [xbp-40h] BYREF
  int32_t key; // [xsp+Ch] [xbp-34h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A00D5E & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, entity);
    sub_1B64A00(&Method_BasicHelper_Any_GachaEntity___, v4);
    sub_1B64A00(&CoinRoomUtility_TypeInfo, v5);
    sub_1B64A00(&CondType_TypeInfo, v6);
    sub_1B64A00(&Method_DataManager_GetMaster_EventMaster___, v7);
    sub_1B64A00(&Method_DataManager_GetMaster_GachaMaster___, v8);
    sub_1B64A00(&Method_DataManager_GetMaster_ShopMaster___, v9);
    sub_1B64A00(&DataManager_TypeInfo, v10);
    sub_1B64A00(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v11);
    sub_1B64A00(&Method_System_Enum_TryParse_SceneList_Type___, v12);
    sub_1B64A00(&System_Enum_TypeInfo, v13);
    sub_1B64A00(&System_Func_GachaEntity__bool__TypeInfo, v14);
    sub_1B64A00(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v15);
    sub_1B64A00(&Method_SingletonTemplate_QuestTree__get_Instance__, v16);
    sub_1B64A00(&Method_ItemLinkInfoWindowComponent___c__DisplayClass31_0__IsBoardActive_b__0__, v17);
    sub_1B64A00(&ItemLinkInfoWindowComponent___c__DisplayClass31_0_TypeInfo, v18);
    sub_1B64A00(&StringLiteral_12841/*"Spot"*/, v19);
    sub_1B64A00(&StringLiteral_8867/*"MasterMission"*/, v20);
    sub_1B64A00(&StringLiteral_6491/*"FRIEND_POINT"*/, v21);
    sub_1B64A00(&StringLiteral_15505/*"War"*/, v22);
    sub_1B64A00(&StringLiteral_21176/*"mainScenario"*/, v23);
    sub_1B64A00(&StringLiteral_4535/*"CoinRoom"*/, v24);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B64A00(&StringLiteral_10872/*"Quest"*/, v25);
    byte_4A00D5E = 1;
  }
  *(_QWORD *)result = 0LL;
  key = 0;
  v39 = 0LL;
  if ( !entity )
    goto LABEL_70;
  this = (ItemLinkInfoWindowComponent_o *)entity->fields.transitionParam;
  if ( !this )
    goto LABEL_70;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0LL);
  if ( !this )
    goto LABEL_70;
  v26 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_71;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__48516668(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_2E44E3C *)Method_System_Enum_TryParse_SceneList_Type___) )
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
               (System_String_o *)StringLiteral_6491/*"FRIEND_POINT"*/,
               0LL)
          || SLODWORD(v26->fields.m_CancellationTokenSource) < 2 )
        {
          return 1;
        }
        v32 = (ItemLinkInfoWindowComponent___c__DisplayClass31_0_o *)sub_1B64C4C(ItemLinkInfoWindowComponent___c__DisplayClass31_0_TypeInfo);
        ItemLinkInfoWindowComponent___c__DisplayClass31_0___ctor(v32, 0LL);
        if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 1 )
          break;
        if ( !v32 )
          goto LABEL_70;
        System_Int32__TryParse((System_String_o *)v26->fields.basePanelList, &v32->fields.gachaId, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !this )
          goto LABEL_70;
        ListValidData = (System_Object_array *)GachaMaster__getListValidData((GachaMaster_o *)this, 0LL);
        v34 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_GachaEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v34,
          (Il2CppObject *)v32,
          Method_ItemLinkInfoWindowComponent___c__DisplayClass31_0__IsBoardActive_b__0__,
          0LL);
        return BasicHelper__Any_object__48394768(
                 ListValidData,
                 (System_Func_T__bool__o *)v34,
                 (const MethodInfo_2E27210 *)Method_BasicHelper_Any_GachaEntity___);
      case 0x16:
        if ( SLODWORD(v26->fields.m_CancellationTokenSource) < 2 )
          return 1;
        v31 = 1;
        if ( System_String__Compare_61390256(
               (System_String_o *)v26->fields.basePanelList,
               (System_String_o *)StringLiteral_4535/*"CoinRoom"*/,
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
            if ( System_String__Compare_61390256(
                   (System_String_o *)v26->fields.basePanelList,
                   (System_String_o *)StringLiteral_15505/*"War"*/,
                   1,
                   0LL) )
            {
              return v31;
            }
            if ( EntityScriptUtil__GetIntValue(entity->fields.script, (System_String_o *)StringLiteral_21176/*"mainScenario"*/, 0, 0LL) >= 1 )
            {
              this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( !this )
                goto LABEL_70;
              LatestProgressWarInfo = QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0LL);
              if ( LatestProgressWarInfo )
                return MapControl_WarInfo__GetStatus(LatestProgressWarInfo, 0LL) != 3;
            }
          }
          return 1;
        }
        v31 = 1;
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61390256(
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
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61390256(
                                                  (System_String_o *)v26->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_10872/*"Quest"*/,
                                                  1,
                                                  0LL);
        if ( !(_DWORD)this )
        {
          this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( this )
            return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)this, result[0], 0LL);
          goto LABEL_70;
        }
        if ( LODWORD(v26->fields.m_CancellationTokenSource) > 1 )
        {
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61390256(
                                                    (System_String_o *)v26->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_12841/*"Spot"*/,
                                                    1,
                                                    0LL);
          if ( !(_DWORD)this )
          {
            this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( this )
            {
              SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)this, result[0], 0LL);
              if ( SpotInfo )
                return SpotInfo->fields.dispType == 1;
              return 0;
            }
            goto LABEL_70;
          }
          if ( LODWORD(v26->fields.m_CancellationTokenSource) > 1 )
          {
            v31 = 1;
            if ( System_String__Compare_61390256(
                   (System_String_o *)v26->fields.basePanelList,
                   (System_String_o *)StringLiteral_15505/*"War"*/,
                   1,
                   0LL) )
            {
              return v31;
            }
            this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EED50 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( this )
              return QuestTree__IsActiveWar((QuestTree_o *)this, result[0], 0LL);
LABEL_70:
            sub_1B64C5C(this, entity);
          }
        }
        return v38;
      default:
        return v31;
    }
LABEL_71:
    sub_1B64C64(this, entity);
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
      return CondType__IsQuestClear_37290712(ClassBoardReleaseQuestId, -1, 0, 0LL);
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
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_70;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &v39,
          key,
          (const MethodInfo_30D67EC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ShopMaster___);
  if ( !this )
    goto LABEL_70;
  return ShopMaster__IsEventShopOpen((ShopMaster_o *)this, key, 0LL);
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
  int32_t v19; // w3
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
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  const MethodInfo *v37; // x2
  System_Action_o *v38; // x20

  if ( (byte_4A00D52 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, itemEnt);
    sub_1B64A00(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v9);
    sub_1B64A00(&Method_ItemLinkInfoWindowComponent_EndOpen__, v10);
    sub_1B64A00(&ItemLinkInfoWindowComponent_TypeInfo, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__, v13);
    sub_1B64A00(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo, v14);
    sub_1B64A00(&StringLiteral_1/*""*/, v15);
    byte_4A00D52 = 1;
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v18, v19);
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
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  v25 = sub_1B64C4C(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v25 + 24), (int32_t)ItemLinkInfoDetailObject, v29, v30);
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
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v24->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v25;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v36 + 4), v25, v31, v32);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
LABEL_25:
    sub_1B64C5C(gameObject, v17);
  ItemLinkInfoListViewManager__CreateList(
    (ItemLinkInfoListViewManager_o *)gameObject,
    (System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v24,
    v37);
  v38 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
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
  int32_t v13; // w3
  const MethodInfo *v14; // x3
  System_Collections_IEnumerator_o *ItemTransitionList; // x0
  System_Action_o *v16; // x20

  if ( (byte_4A00D54 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, itemIdList);
    sub_1B64A00(&Method_ItemLinkInfoWindowComponent_EndOpen__, v9);
    byte_4A00D54 = 1;
  }
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.listViewBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        this->fields.callbackFunc = callback,
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v12, v13),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.titleItemNameLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
    sub_1B64C5C(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ItemTransitionList = ItemLinkInfoWindowComponent__CoCreateItemTransitionList(this, itemIdList, needNumList, v14);
  UnityEngine_MonoBehaviour__StartCoroutine_69122748((UnityEngine_MonoBehaviour_o *)this, ItemTransitionList, 0LL);
  v16 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__OpenUserItemInfo(
        ItemLinkInfoWindowComponent_o *this,
        UserItemData_o *itemData,
        ItemLinkInfoWindowComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UserItemData_o *v5; // x20
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  int32_t itemId; // w24
  System_Collections_Generic_List_object__o *EnabledListByItemId; // x20
  const MethodInfo *v32; // x4
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o **v35; // x8
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v37; // x21
  __int64 v38; // x22
  const MethodInfo *v39; // x4
  struct ItemLinkInfoListViewManager_o *listViewManager; // x8
  ItemLinkInfoDetailObject_o *ItemLinkInfoDetailObject; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Generic_List_object__o *v44; // x24
  int32_t v45; // w24
  __int64 v46; // x25
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *Item; // x0
  ItemDropEfficiencyEntity_o **v50; // x27
  int32_t v51; // w2
  int32_t v52; // w3
  ItemLinkInfoListViewItem_o *v53; // x28
  const MethodInfo *v54; // x2
  ItemLinkInfoWindowComponent_o **v55; // x26
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w1
  int32_t v61; // w2
  int32_t v62; // w3
  struct UnityEngine_GameObject_o *iconName; // x1
  ItemLinkInfoWindowComponent_o *v64; // x28
  ItemLinkInfoWindowComponent_o *v65; // x0
  const MethodInfo *v66; // x2
  const MethodInfo *v67; // x3
  ItemLinkInfoWindowComponent_o *v68; // x28
  int32_t v69; // w2
  int32_t v70; // w3
  const MethodInfo *v71; // x2
  ItemLinkInfoWindowComponent_o *v72; // x28
  ItemLinkInfoWindowComponent_o *TargetId; // x0
  ItemLinkInfoWindowComponent_o *v74; // x28
  const MethodInfo *v75; // x2
  ItemLinkInfoWindowComponent_o *v76; // x28
  ItemDropEfficiencyEntity_o *v77; // x8
  int32_t v78; // w2
  int32_t v79; // w3
  struct System_String_StaticFields *p_monitor; // x8
  struct System_String_o *Empty; // x1
  ServantStatusBattleListViewItem_o *v82; // x27
  System_Action_o *v83; // x28
  int32_t v84; // w2
  int32_t v85; // w3
  int32_t v86; // w2
  int32_t v87; // w3
  struct System_Object_array *items; // x8
  _QWORD *v89; // x9
  __int64 m_CancellationTokenSource_low; // x10
  Il2CppClass **v91; // x8
  System_Collections_Generic_List_object__o *v92; // x20
  const MethodInfo *v93; // x2
  int32_t v94; // w3
  struct ItemLinkInfoListViewManager_o *v95; // x8
  ItemLinkInfoSubHeaderObject_o *SubHeaderObject; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  ItemLinkInfoWindowComponent_o *v99; // x0
  const MethodInfo *v100; // x2
  ItemLinkInfoWindowComponent_o *v101; // x0
  const MethodInfo *v102; // x2
  int32_t v103; // w2
  int32_t v104; // w3
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 size; // x10
  Il2CppClass **v108; // x0
  const MethodInfo *v109; // x2
  System_Action_o *v110; // x20
  Il2CppObject *v111; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_object__o *v112; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  v5 = itemData;
  v6 = this;
  if ( (byte_4A00D53 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, itemData);
    sub_1B64A00(&Method_DataManager_GetMaster_ClosedMessageMaster___, v7);
    sub_1B64A00(&Method_DataManager_GetMaster_ItemDropEfficiencyMaster___, v8);
    sub_1B64A00(&Method_DataManager_GetMaster_ItemMaster___, v9);
    sub_1B64A00(&DataManager_TypeInfo, v10);
    sub_1B64A00(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v11);
    sub_1B64A00(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v12);
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_ItemDropEfficiencyEntity___, v13);
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, v14);
    sub_1B64A00(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v15);
    sub_1B64A00(&ItemLinkInfoListViewItem_TypeInfo, v16);
    sub_1B64A00(&Method_ItemLinkInfoWindowComponent_EndOpen__, v17);
    sub_1B64A00(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__, v18);
    sub_1B64A00(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__, v19);
    sub_1B64A00(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__, v20);
    sub_1B64A00(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__, v21);
    sub_1B64A00(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Count__, v22);
    sub_1B64A00(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Item__, v23);
    sub_1B64A00(&System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo, v24);
    sub_1B64A00(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo, v25);
    sub_1B64A00(&string_TypeInfo, v26);
    sub_1B64A00(&Method_ItemLinkInfoWindowComponent___c__DisplayClass20_0__OpenUserItemInfo_b__0__, v27);
    sub_1B64A00(&ItemLinkInfoWindowComponent___c__DisplayClass20_0_TypeInfo, v28);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B64A00(&StringLiteral_1/*""*/, v29);
    byte_4A00D53 = 1;
  }
  v112 = 0LL;
  entity = 0LL;
  v111 = 0LL;
  if ( !v5 )
    goto LABEL_60;
  itemId = v5->fields.itemId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
    goto LABEL_60;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    itemId,
    (const MethodInfo_30D67EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
  if ( !this )
    goto LABEL_60;
  EnabledListByItemId = (System_Collections_Generic_List_object__o *)ItemDropEfficiencyMaster__GetEnabledListByItemId(
                                                                       (ItemDropEfficiencyMaster_o *)this,
                                                                       itemId,
                                                                       0LL);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)EnabledListByItemId,
         (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_ItemDropEfficiencyEntity___) )
  {
    v6->fields.state = 1;
    this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    if ( !this )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (ItemLinkInfoWindowComponent_o *)v6->fields.listViewBg;
    if ( !this )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (ItemLinkInfoWindowComponent_o *)v6->fields.lineObject;
    if ( !this )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v6->fields.callbackFunc = callback;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v6->fields.callbackFunc, (int32_t)callback, v33, v34);
    this = (ItemLinkInfoWindowComponent_o *)v6->fields.titleItemNameLabel;
    if ( !this )
      goto LABEL_60;
    v35 = (System_String_o **)(entity ? &entity[1].monitor : &StringLiteral_1/*""*/);
    UILabel__set_text((UILabel_o *)this, *v35, 0LL);
    this = (ItemLinkInfoWindowComponent_o *)v6->fields.titleWindowNameLabel;
    if ( !this )
      goto LABEL_60;
    this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_60;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ClosedMessageMaster___);
    v37 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v37,
      (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
    v38 = sub_1B64C4C(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
    System_Object___ctor((Il2CppObject *)v38, 0LL);
    if ( !v38 )
      goto LABEL_60;
    *(_DWORD *)(v38 + 16) = itemId;
    listViewManager = v6->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_60;
    ItemLinkInfoDetailObject = ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
                                 v6,
                                 (ItemEntity_o *)entity,
                                 listViewManager->fields.listParent,
                                 0,
                                 v39);
    *(_QWORD *)(v38 + 24) = ItemLinkInfoDetailObject;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v38 + 24), (int32_t)ItemLinkInfoDetailObject, v42, v43);
    v44 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v44,
      (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__);
    v112 = v44;
    if ( !EnabledListByItemId )
      goto LABEL_60;
    if ( EnabledListByItemId->fields._size >= 1 )
    {
      v45 = 0;
      do
      {
        v46 = sub_1B64C4C(ItemLinkInfoWindowComponent___c__DisplayClass20_0_TypeInfo);
        ItemLinkInfoWindowComponent___c__DisplayClass20_0___ctor(
          (ItemLinkInfoWindowComponent___c__DisplayClass20_0_o *)v46,
          0LL);
        if ( !v46 )
          goto LABEL_60;
        *(_QWORD *)(v46 + 32) = v6;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v46 + 32), (int32_t)v6, v47, v48);
        Item = System_Collections_Generic_List_object___get_Item(
                 EnabledListByItemId,
                 v45,
                 (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Item__);
        *(_QWORD *)(v46 + 16) = Item;
        v50 = (ItemDropEfficiencyEntity_o **)(v46 + 16);
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v46 + 16), (int32_t)Item, v51, v52);
        v53 = (ItemLinkInfoListViewItem_o *)sub_1B64C4C(ItemLinkInfoListViewItem_TypeInfo);
        ItemLinkInfoListViewItem___ctor(v53, v45, v54);
        *(_QWORD *)(v46 + 24) = v53;
        v55 = (ItemLinkInfoWindowComponent_o **)(v46 + 24);
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v46 + 24), (int32_t)v53, v56, v57);
        this = *(ItemLinkInfoWindowComponent_o **)(v46 + 24);
        if ( !this )
          goto LABEL_60;
        v60 = (int)entity;
        this->fields.listDescriptionObject = (struct UnityEngine_GameObject_o *)entity;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.listDescriptionObject, v60, v58, v59);
        if ( !*v50 )
          goto LABEL_60;
        this = *v55;
        if ( !*v55 )
          goto LABEL_60;
        iconName = (struct UnityEngine_GameObject_o *)(*v50)->fields.iconName;
        this->fields.lineObject = iconName;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.lineObject, (int32_t)iconName, v61, v62);
        v64 = *v55;
        this = (ItemLinkInfoWindowComponent_o *)ItemLinkInfoWindowComponent__IsBoardActive(v65, *v50, v66);
        if ( !v64 )
          goto LABEL_60;
        LOBYTE(v64->fields.closeBtnObject) = ((unsigned __int8)this & 1) == 0;
        v68 = *v55;
        this = (ItemLinkInfoWindowComponent_o *)ItemLinkInfoWindowComponent__GetTitleText(
                                                  this,
                                                  *v50,
                                                  (ItemLinkInfoListViewItem_o *)*v55,
                                                  v67);
        if ( !v68 )
          goto LABEL_60;
        v68->fields.itemDetailInfo = (struct UnityEngine_GameObject_o *)this;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v68->fields.itemDetailInfo, (int32_t)this, v69, v70);
        itemData = (UserItemData_o *)*v50;
        if ( !*v50 )
          goto LABEL_60;
        v72 = *v55;
        if ( !*v55 )
          goto LABEL_60;
        LODWORD(v72->fields.callbackFunc) = itemData->fields.dispPriority;
        TargetId = (ItemLinkInfoWindowComponent_o *)ItemLinkInfoWindowComponent__GetTargetId(
                                                      this,
                                                      (ItemDropEfficiencyEntity_o *)itemData,
                                                      v71);
        LODWORD(v72->fields.subHeaderObject) = (_DWORD)TargetId;
        v74 = *v55;
        this = (ItemLinkInfoWindowComponent_o *)ItemLinkInfoWindowComponent__GetTargetValueType(TargetId, *v50, v75);
        if ( !v74 )
          goto LABEL_60;
        HIDWORD(v74->fields.subHeaderObject) = (_DWORD)this;
        v76 = *v55;
        if ( !*v55 )
          goto LABEL_60;
        BYTE2(v76->fields.closeBtnObject) = 0;
        v77 = *v50;
        if ( !*v50 )
          goto LABEL_60;
        HIDWORD(v76->fields.stoneDetailInfo) = v77->fields.priority;
        if ( !Master_object )
          goto LABEL_60;
        this = (ItemLinkInfoWindowComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                  &v111,
                                                  v77->fields.closedMessageId,
                                                  (const MethodInfo_30D67EC *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v111 )
            goto LABEL_60;
          p_monitor = (struct System_String_StaticFields *)&v111[1].monitor;
        }
        else
        {
          p_monitor = string_TypeInfo->static_fields;
        }
        Empty = p_monitor->Empty;
        v76->fields.listViewManager = (struct ItemLinkInfoListViewManager_o *)p_monitor->Empty;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v76->fields.listViewManager, (int32_t)Empty, v78, v79);
        v82 = *(ServantStatusBattleListViewItem_o **)(v46 + 24);
        v83 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
        System_Action___ctor(
          v83,
          (Il2CppObject *)v46,
          Method_ItemLinkInfoWindowComponent___c__DisplayClass20_0__OpenUserItemInfo_b__0__,
          0LL);
        if ( !v82 )
          goto LABEL_60;
        v82[1].klass = (ServantStatusBattleListViewItem_c *)v83;
        sub_1B649A4(v82 + 1, (int32_t)v83, v84, v85);
        this = (ItemLinkInfoWindowComponent_o *)v112;
        if ( !v112 )
          goto LABEL_60;
        itemData = (UserItemData_o *)*v55;
        items = v112->fields._items;
        v89 = Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__;
        ++v112->fields._version;
        if ( !items )
          goto LABEL_60;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)itemData,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
        }
        else
        {
          v91 = &items->obj.klass + m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          v91[4] = (Il2CppClass *)itemData;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v91 + 4), (int32_t)itemData, v86, v87);
        }
      }
      while ( ++v45 < EnabledListByItemId->fields._size );
    }
    v92 = v112;
    this = (ItemLinkInfoWindowComponent_o *)System_Linq_Enumerable__Any_object_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)v112,
                                              (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v95 = v6->fields.listViewManager;
      if ( !v95 )
        goto LABEL_60;
      SubHeaderObject = ItemLinkInfoWindowComponent__CreateSubHeaderObject(v6, v95->fields.listParent, v93);
      *(_QWORD *)(v38 + 32) = SubHeaderObject;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v38 + 32), (int32_t)SubHeaderObject, v97, v98);
      ItemLinkInfoWindowComponent__SortViewItemList(
        v99,
        (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v112,
        v100);
      ItemLinkInfoWindowComponent__CheckRecommendBoard(
        v101,
        (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v112,
        v102);
      v92 = v112;
    }
    *(_QWORD *)(v38 + 48) = v92;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v38 + 48), (int32_t)v92, (int32_t)v93, v94);
    if ( !v37 )
      goto LABEL_60;
    v105 = v37->fields._items;
    v106 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
    ++v37->fields._version;
    if ( !v105 )
      goto LABEL_60;
    size = v37->fields._size;
    if ( (unsigned int)size >= v105->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v37,
        (Il2CppObject *)v38,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
    }
    else
    {
      v108 = &v105->obj.klass + size;
      v37->fields._size = size + 1;
      v108[4] = (Il2CppClass *)v38;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v108 + 4), v38, v103, v104);
    }
    this = (ItemLinkInfoWindowComponent_o *)v6->fields.listViewManager;
    if ( !this )
LABEL_60:
      sub_1B64C5C(this, itemData);
    ItemLinkInfoListViewManager__CreateList(
      (ItemLinkInfoListViewManager_o *)this,
      (System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v37,
      v109);
    v110 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(v110, (Il2CppObject *)v6, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)v6, v110, 0, 0LL);
  }
  else
  {
    ItemLinkInfoWindowComponent__Open(v6, (ItemEntity_o *)entity, callback, 0, v32);
  }
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
  System_Func_object__int__o *_9__26_0; // x21
  Il2CppObject *v15; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x0
  ItemLinkInfoWindowComponent___c_c *v20; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x20
  System_Func_object__int__o *_9__26_1; // x21
  Il2CppObject *v23; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x0
  ItemLinkInfoWindowComponent___c_c *v28; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x20
  System_Func_object__int__o *_9__26_2; // x21
  Il2CppObject *v31; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3

  if ( (byte_4A00D59 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_OrderByDescending_ItemLinkInfoListViewItem__int___, viewList);
    sub_1B64A00(&Method_System_Linq_Enumerable_ThenByDescending_ItemLinkInfoListViewItem__int___, v4);
    sub_1B64A00(&Method_System_Linq_Enumerable_ThenBy_ItemLinkInfoListViewItem__int___, v5);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToList_ItemLinkInfoListViewItem___, v6);
    sub_1B64A00(&System_Func_ItemLinkInfoListViewItem__int__TypeInfo, v7);
    sub_1B64A00(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__26_0__, v8);
    sub_1B64A00(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__26_1__, v9);
    sub_1B64A00(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__26_2__, v10);
    sub_1B64A00(&ItemLinkInfoWindowComponent___c_TypeInfo, v11);
    byte_4A00D59 = 1;
  }
  v12 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v13 = *viewList;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v12 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__26_0 = (System_Func_object__int__o *)v12->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__26_0 = (System_Func_object__int__o *)sub_1B64C4C(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__26_0,
      v15,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__26_0__,
      0LL);
    static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__26_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__26_0, (int32_t)_9__26_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (System_Func_TSource__TKey__o *)_9__26_0,
          (const MethodInfo_2E65E78 *)Method_System_Linq_Enumerable_OrderByDescending_ItemLinkInfoListViewItem__int___);
  v20 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v21 = v19;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v20 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__26_1 = (System_Func_object__int__o *)v20->static_fields->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__26_1 = (System_Func_object__int__o *)sub_1B64C4C(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__26_1,
      v23,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__26_1__,
      0LL);
    v24 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v24->__9__26_1 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__26_1;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v24->__9__26_1, (int32_t)_9__26_1, v25, v26);
  }
  v27 = System_Linq_Enumerable__ThenBy_object__int_(
          v21,
          (System_Func_TSource__TKey__o *)_9__26_1,
          (const MethodInfo_2E732E4 *)Method_System_Linq_Enumerable_ThenBy_ItemLinkInfoListViewItem__int___);
  v28 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v29 = v27;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v28 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__26_2 = (System_Func_object__int__o *)v28->static_fields->__9__26_2;
  if ( !_9__26_2 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__26_2 = (System_Func_object__int__o *)sub_1B64C4C(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__26_2,
      v31,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__26_2__,
      0LL);
    v32 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v32->__9__26_2 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__26_2;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v32->__9__26_2, (int32_t)_9__26_2, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                               v29,
                                                               (System_Func_TSource__TKey__o *)_9__26_2,
                                                               (const MethodInfo_2E736E0 *)Method_System_Linq_Enumerable_ThenByDescending_ItemLinkInfoListViewItem__int___);
  v36 = (System_Collections_Generic_List_ItemLinkInfoListViewItem__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v35,
                                                                         (const MethodInfo_2E77910 *)Method_System_Linq_Enumerable_ToList_ItemLinkInfoListViewItem___);
  *viewList = v36;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)viewList, (int32_t)v36, v37, v38);
}


void __fastcall ItemLinkInfoWindowComponent___OpenUserItemInfo_b__20_1(
        ItemLinkInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemLinkInfoWindowComponent__Close_42046388(this, 0LL, v2);
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

  if ( (byte_4A00D4F & 1) == 0 )
  {
    sub_1B64A00(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, value);
    byte_4A00D4F = 1;
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
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64F1C(v8);
  ItemLinkInfoWindowComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ItemLinkInfoWindowComponent__get_closeBtnPath(
        ItemLinkInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A00D61 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_7557/*"InfoWindow/CloseBtn"*/, method);
    byte_4A00D61 = 1;
  }
  return (System_String_o *)StringLiteral_7557/*"InfoWindow/CloseBtn"*/;
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

  if ( (byte_4A00D50 & 1) == 0 )
  {
    sub_1B64A00(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, value);
    byte_4A00D50 = 1;
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
    v9 = sub_1B9FEF0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64F1C(v8);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AF91C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AF8D4;
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
  if ( (byte_4A01550 & 1) == 0 )
  {
    sub_1B64A00(&bool_TypeInfo, result);
    byte_4A01550 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B649B4(this, v9, callback, object);
}


void __fastcall ItemLinkInfoWindowComponent_CallbackFunc__EndInvoke(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
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
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v2; // x19
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
  int32_t _1__state; // w8
  struct ItemLinkInfoWindowComponent_o *_4__this; // x20
  Il2CppObject *Master_object; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_List_object__o *v35; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  int v38; // w8
  int32_t v39; // w22
  struct System_Int32_array *itemIdList; // x9
  int max_length; // w10
  bool result; // w0
  struct System_Int32_array *needNumList; // x8
  __int64 i_5__6; // x9
  int v45; // w10
  int32_t v46; // w28
  __int64 v47; // x21
  int32_t v48; // w2
  int32_t v49; // w3
  System_Collections_Generic_List_object__o *v50; // x23
  System_Collections_Generic_List_object__o *v51; // x22
  int32_t v52; // w23
  __int64 v53; // x24
  int32_t v54; // w2
  int32_t v55; // w3
  Il2CppObject *Item; // x0
  ItemDropEfficiencyEntity_o **v57; // x26
  int32_t v58; // w2
  int32_t v59; // w3
  ItemLinkInfoListViewItem_o *v60; // x27
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o **v61; // x25
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w1
  int32_t v67; // w2
  int32_t v68; // w3
  struct System_String_o *iconName; // x1
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v70; // x27
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v71; // x27
  int32_t v72; // w2
  int32_t v73; // w3
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v74; // x27
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v75; // x27
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v76; // x27
  ItemDropEfficiencyEntity_o *v77; // x8
  int32_t v78; // w2
  int32_t v79; // w3
  struct System_String_StaticFields *p_monitor; // x8
  struct System_String_o *Empty; // x1
  ServantStatusBattleListViewItem_o *v82; // x26
  System_Action_o *v83; // x27
  int32_t v84; // w2
  int32_t v85; // w3
  int32_t v86; // w2
  int32_t v87; // w3
  struct System_Object_array *items; // x8
  _QWORD *v89; // x9
  __int64 _2__current_low; // x10
  Il2CppClass **v91; // x8
  System_Collections_Generic_List_object__o *v92; // x22
  int32_t v93; // w2
  int32_t v94; // w3
  struct ItemLinkInfoListViewManager_o *listViewManager; // x8
  ItemLinkInfoTextObject_o *ListDescriptionObject; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  int32_t v99; // w2
  int32_t v100; // w3
  __int64 v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  __int64 v104; // x8
  int32_t v105; // w2
  int32_t v106; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  Il2CppObject *v108; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_object__o *v109; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4A01555 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_DataManager_GetMaster_ClosedMessageMaster___, v3);
    sub_1B64A00(&Method_DataManager_GetMaster_ItemDropEfficiencyMaster___, v4);
    sub_1B64A00(&Method_DataManager_GetMaster_ItemMaster___, v5);
    sub_1B64A00(&DataManager_TypeInfo, v6);
    sub_1B64A00(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v7);
    sub_1B64A00(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v8);
    sub_1B64A00(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___, v9);
    sub_1B64A00(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo, v10);
    sub_1B64A00(&ItemLinkInfoListViewItem_TypeInfo, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__, v13);
    sub_1B64A00(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Count__, v16);
    sub_1B64A00(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__, v17);
    sub_1B64A00(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Item__, v18);
    sub_1B64A00(&System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo, v19);
    sub_1B64A00(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo, v20);
    sub_1B64A00(&string_TypeInfo, v21);
    sub_1B64A00(&Method_ItemLinkInfoWindowComponent___c__DisplayClass22_0__CoCreateItemTransitionList_b__0__, v22);
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)sub_1B64A00(
                                                                                &ItemLinkInfoWindowComponent___c__DisplayClass22_0_TypeInfo,
                                                                                v23);
    byte_4A01555 = 1;
  }
  v109 = 0LL;
  entity = 0LL;
  v108 = 0LL;
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_12;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ItemMaster___);
  v2->fields._itemMst_5__2 = (struct ItemMaster_o *)Master_object;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields._itemMst_5__2, (int32_t)Master_object, v27, v28);
  v29 = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  v2->fields._closedMessageMst_5__3 = (struct ClosedMessageMaster_o *)v29;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields._closedMessageMst_5__3, (int32_t)v29, v30, v31);
  v32 = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
  v2->fields._itemDropEfficiencyMst_5__4 = (struct ItemDropEfficiencyMaster_o *)v32;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields._itemDropEfficiencyMst_5__4, (int32_t)v32, v33, v34);
  v35 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  v2->fields._groupList_5__5 = (struct System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v35;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v2->fields._groupList_5__5, (int32_t)v35, v36, v37);
  v38 = 0;
  for ( v2->fields._i_5__6 = 0; ; v2->fields._i_5__6 = v38 )
  {
    itemIdList = v2->fields.itemIdList;
    if ( !itemIdList )
      goto LABEL_69;
    max_length = itemIdList->max_length;
    if ( v38 >= max_length )
    {
      if ( !_4__this )
        goto LABEL_69;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)_4__this->fields.listViewManager;
      if ( !this )
        goto LABEL_69;
      ItemLinkInfoListViewManager__CreateList((ItemLinkInfoListViewManager_o *)this, v2->fields._groupList_5__5, 0LL);
      return 0;
    }
    if ( v38 >= (unsigned int)max_length )
      goto LABEL_70;
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v2->fields._itemMst_5__2;
    if ( !this )
      goto LABEL_69;
    v39 = itemIdList->m_Items[v38 + 1];
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                &entity,
                                                                                v39,
                                                                                (const MethodInfo_30D67EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_12:
    v38 = v2->fields._i_5__6 + 1;
  }
  needNumList = v2->fields.needNumList;
  if ( !needNumList )
    goto LABEL_69;
  i_5__6 = v2->fields._i_5__6;
  v45 = needNumList->max_length;
  if ( (int)i_5__6 >= v45 )
  {
    v46 = 0;
  }
  else
  {
    if ( (unsigned int)i_5__6 >= v45 )
LABEL_70:
      sub_1B64C64(this, method);
    v46 = needNumList->m_Items[i_5__6 + 1];
  }
  v47 = sub_1B64C4C(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
  ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor((ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v47, 0LL);
  if ( !v47 )
    goto LABEL_69;
  *(_QWORD *)(v47 + 24) = 0LL;
  *(_DWORD *)(v47 + 16) = v39;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v47 + 24), 0, v48, v49);
  v50 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v50,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__);
  v109 = v50;
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v2->fields._itemDropEfficiencyMst_5__4;
  if ( !this
    || (this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)ItemDropEfficiencyMaster__GetEnabledListByItemId(
                                                                                    (ItemDropEfficiencyMaster_o *)this,
                                                                                    v39,
                                                                                    0LL)) == 0LL )
  {
LABEL_69:
    sub_1B64C5C(this, method);
  }
  v51 = (System_Collections_Generic_List_object__o *)this;
  if ( SLODWORD(this->fields.__2__current) >= 1 )
  {
    v52 = 0;
    do
    {
      v53 = sub_1B64C4C(ItemLinkInfoWindowComponent___c__DisplayClass22_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v53, 0LL);
      if ( !v53 )
        goto LABEL_69;
      *(_QWORD *)(v53 + 32) = _4__this;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v53 + 32), (int32_t)_4__this, v54, v55);
      Item = System_Collections_Generic_List_object___get_Item(
               v51,
               v52,
               (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Item__);
      *(_QWORD *)(v53 + 16) = Item;
      v57 = (ItemDropEfficiencyEntity_o **)(v53 + 16);
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v53 + 16), (int32_t)Item, v58, v59);
      v60 = (ItemLinkInfoListViewItem_o *)sub_1B64C4C(ItemLinkInfoListViewItem_TypeInfo);
      ItemLinkInfoListViewItem___ctor(v60, v52, 0LL);
      *(_QWORD *)(v53 + 24) = v60;
      v61 = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o **)(v53 + 24);
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v53 + 24), (int32_t)v60, v62, v63);
      this = *(ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o **)(v53 + 24);
      if ( !this )
        goto LABEL_69;
      v66 = (int)entity;
      this[1].fields.needNumList = (struct System_Int32_array *)entity;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this[1].fields.needNumList, v66, v64, v65);
      this = *v61;
      if ( !*v61 )
        goto LABEL_69;
      LODWORD(this[1].fields.__4__this) = v46;
      if ( !*v57 )
        goto LABEL_69;
      iconName = (*v57)->fields.iconName;
      *(_QWORD *)&this[1].fields.__1__state = iconName;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this[1].fields, (int32_t)iconName, v67, v68);
      if ( !_4__this )
        goto LABEL_69;
      v70 = *v61;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)ItemLinkInfoWindowComponent__IsBoardActive(
                                                                                  _4__this,
                                                                                  *v57,
                                                                                  0LL);
      if ( !v70 )
        goto LABEL_69;
      LOBYTE(v70[1].fields._itemMst_5__2) = ((unsigned __int8)this & 1) == 0;
      v71 = *v61;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)ItemLinkInfoWindowComponent__GetTitleText(
                                                                                  _4__this,
                                                                                  *v57,
                                                                                  (ItemLinkInfoListViewItem_o *)*v61,
                                                                                  0LL);
      if ( !v71 )
        goto LABEL_69;
      v71[1].fields.__2__current = (Il2CppObject *)this;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v71[1].fields.__2__current, (int32_t)this, v72, v73);
      method = (const MethodInfo *)*v57;
      if ( !*v57 )
        goto LABEL_69;
      v74 = *v61;
      if ( !*v61 )
        goto LABEL_69;
      LODWORD(v74[1].fields._groupList_5__5) = HIDWORD(method->invoker_method);
      LODWORD(v74[1].fields.itemIdList) = ItemLinkInfoWindowComponent__GetTargetId(
                                            _4__this,
                                            (ItemDropEfficiencyEntity_o *)method,
                                            0LL);
      v75 = *v61;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)ItemLinkInfoWindowComponent__GetTargetValueType(
                                                                                  _4__this,
                                                                                  *v57,
                                                                                  0LL);
      if ( !v75 )
        goto LABEL_69;
      HIDWORD(v75[1].fields.itemIdList) = (_DWORD)this;
      v76 = *v61;
      if ( !*v61 )
        goto LABEL_69;
      BYTE2(v76[1].fields._itemMst_5__2) = 1;
      v77 = *v57;
      if ( !*v57 )
        goto LABEL_69;
      HIDWORD(v76[1].fields.__4__this) = v77->fields.priority;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v2->fields._closedMessageMst_5__3;
      if ( !this )
        goto LABEL_69;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                  &v108,
                                                                                  v77->fields.closedMessageId,
                                                                                  (const MethodInfo_30D67EC *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v108 )
          goto LABEL_69;
        p_monitor = (struct System_String_StaticFields *)&v108[1].monitor;
      }
      else
      {
        p_monitor = string_TypeInfo->static_fields;
      }
      Empty = p_monitor->Empty;
      v76[1].fields._closedMessageMst_5__3 = (struct ClosedMessageMaster_o *)p_monitor->Empty;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v76[1].fields._closedMessageMst_5__3, (int32_t)Empty, v78, v79);
      v82 = *(ServantStatusBattleListViewItem_o **)(v53 + 24);
      v83 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
      System_Action___ctor(
        v83,
        (Il2CppObject *)v53,
        Method_ItemLinkInfoWindowComponent___c__DisplayClass22_0__CoCreateItemTransitionList_b__0__,
        0LL);
      if ( !v82 )
        goto LABEL_69;
      v82[1].klass = (ServantStatusBattleListViewItem_c *)v83;
      sub_1B649A4(v82 + 1, (int32_t)v83, v84, v85);
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v109;
      if ( !v109 )
        goto LABEL_69;
      method = (const MethodInfo *)*v61;
      items = v109->fields._items;
      v89 = Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__;
      ++v109->fields._version;
      if ( !items )
        goto LABEL_69;
      _2__current_low = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)_2__current_low >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)method,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
      }
      else
      {
        v91 = &items->obj.klass + _2__current_low;
        LODWORD(this->fields.__2__current) = _2__current_low + 1;
        v91[4] = (Il2CppClass *)method;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v91 + 4), (int32_t)method, v86, v87);
      }
    }
    while ( ++v52 < v51->fields._size );
  }
  v92 = v109;
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)System_Linq_Enumerable__Any_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v109,
                                                                              (const MethodInfo_2E49388 *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v2->fields._i_5__6 )
    {
      if ( !_4__this )
        goto LABEL_69;
    }
    else
    {
      if ( !_4__this )
        goto LABEL_69;
      listViewManager = _4__this->fields.listViewManager;
      if ( !listViewManager )
        goto LABEL_69;
      ListDescriptionObject = ItemLinkInfoWindowComponent__CreateListDescriptionObject(
                                _4__this,
                                listViewManager->fields.listParent,
                                0LL);
      *(_QWORD *)(v47 + 40) = ListDescriptionObject;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v47 + 40), (int32_t)ListDescriptionObject, v97, v98);
    }
    ItemLinkInfoWindowComponent__SortViewItemList(
      _4__this,
      (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v109,
      0LL);
    ItemLinkInfoWindowComponent__CheckRecommendBoard(
      _4__this,
      (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v109,
      0LL);
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v109;
    if ( !v109 )
      goto LABEL_69;
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)System_Collections_Generic_List_object___get_Item(
                                                                                v109,
                                                                                0,
                                                                                (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !this )
      goto LABEL_69;
    BYTE4(this[1].fields._groupList_5__5) = 1;
    v92 = v109;
  }
  *(_QWORD *)(v47 + 48) = v92;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v47 + 48), (int32_t)v92, v93, v94);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v2->fields._groupList_5__5;
  if ( !this )
    goto LABEL_69;
  v101 = *(_QWORD *)&this->fields.__1__state;
  v102 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v101 )
    goto LABEL_69;
  v103 = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)v103 >= *(_DWORD *)(v101 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v47,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
  }
  else
  {
    v104 = v101 + 8 * v103;
    LODWORD(this->fields.__2__current) = v103 + 1;
    *(_QWORD *)(v104 + 32) = v47;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v104 + 32), v47, v99, v100);
  }
  v2->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B649A4(p__2__current, 0, v105, v106);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
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
  int32_t v4; // w3

  if ( (byte_4A01551 & 1) == 0 )
  {
    sub_1B64A00(&ItemLinkInfoWindowComponent___c_TypeInfo, v1);
    byte_4A01551 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(ItemLinkInfoWindowComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ItemLinkInfoWindowComponent___c_TypeInfo->static_fields->__9 = (struct ItemLinkInfoWindowComponent___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)ItemLinkInfoWindowComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall ItemLinkInfoWindowComponent___c___ctor(
        ItemLinkInfoWindowComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent___c___CoCreateItemTransitionList_b__22_1(
        ItemLinkInfoWindowComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A01552 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A01552 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v3);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL, 0LL);
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__26_0(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64C5C(this, 0LL);
  return !n->fields._IsLocked_k__BackingField;
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__26_1(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64C5C(this, 0LL);
  return ItemTransitionType__GetSortPriority(n->fields._Type_k__BackingField, 0LL);
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__26_2(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64C5C(this, 0LL);
  return n->fields._ItemDropEfficiencyPriority_k__BackingField;
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass20_0___ctor(
        ItemLinkInfoWindowComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass20_0___OpenUserItemInfo_b__0(
        ItemLinkInfoWindowComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt; // x20
  Il2CppObject *v5; // x19
  ItemLinkInfoListViewItem_o *viewItem; // x21
  struct ItemLinkInfoListViewItem_o **p_viewItem; // t2
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A01553 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_ItemLinkInfoWindowComponent__OpenUserItemInfo_b__20_1__, v3);
    byte_4A01553 = 1;
  }
  itemDropEfficiencyEnt = this->fields.itemDropEfficiencyEnt;
  p_viewItem = &this->fields.viewItem;
  viewItem = this->fields.viewItem;
  v5 = (Il2CppObject *)p_viewItem[1];
  v8 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v8, v5, Method_ItemLinkInfoWindowComponent__OpenUserItemInfo_b__20_1__, 0LL);
  if ( !v5 )
    sub_1B64C5C(v9, v10);
  ItemLinkInfoWindowComponent__ExecSceneTransition(
    (ItemLinkInfoWindowComponent_o *)v5,
    itemDropEfficiencyEnt,
    viewItem,
    v8,
    0LL);
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass22_0___ctor(
        ItemLinkInfoWindowComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass22_0___CoCreateItemTransitionList_b__0(
        ItemLinkInfoWindowComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ItemLinkInfoWindowComponent___c_c *v5; // x0
  ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt; // x21
  ItemLinkInfoWindowComponent_o *v7; // x19
  ItemLinkInfoListViewItem_o *viewItem; // x20
  struct ItemLinkInfoListViewItem_o **p_viewItem; // t2
  System_Action_o *_9__22_1; // x22
  Il2CppObject *v11; // x23
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A01554 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_ItemLinkInfoWindowComponent___c__CoCreateItemTransitionList_b__22_1__, v3);
    sub_1B64A00(&ItemLinkInfoWindowComponent___c_TypeInfo, v4);
    byte_4A01554 = 1;
  }
  v5 = ItemLinkInfoWindowComponent___c_TypeInfo;
  itemDropEfficiencyEnt = this->fields.itemDropEfficiencyEnt;
  p_viewItem = &this->fields.viewItem;
  viewItem = this->fields.viewItem;
  v7 = (ItemLinkInfoWindowComponent_o *)p_viewItem[1];
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v5 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__22_1 = v5->static_fields->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v5->static_fields->__9;
    _9__22_1 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__22_1,
      v11,
      Method_ItemLinkInfoWindowComponent___c__CoCreateItemTransitionList_b__22_1__,
      0LL);
    static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__22_1 = _9__22_1;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_1, (int32_t)_9__22_1, v13, v14);
  }
  if ( !v7 )
    sub_1B64C5C(v5, method);
  ItemLinkInfoWindowComponent__ExecSceneTransition(v7, itemDropEfficiencyEnt, viewItem, _9__22_1, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent___c__DisplayClass31_0___ctor(
        ItemLinkInfoWindowComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ItemLinkInfoWindowComponent___c__DisplayClass31_0___IsBoardActive_b__0(
        ItemLinkInfoWindowComponent___c__DisplayClass31_0_o *this,
        GachaEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B64C5C(this, 0LL);
  return n->fields.id == this->fields.gachaId;
}