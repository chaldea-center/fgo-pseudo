void __fastcall ItemLinkInfoWindowComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A5D212 & 1) == 0 )
  {
    sub_1B885B0(&ItemLinkInfoWindowComponent_TypeInfo);
    byte_4A5D212 = 1;
  }
  LODWORD(ItemLinkInfoWindowComponent_TypeInfo->static_fields->STONE_DETAIL_VIEW_BG_POSITION_Y) = (struct ItemLinkInfoWindowComponent_StaticFields)1092616192;
}


void __fastcall ItemLinkInfoWindowComponent___ctor(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A5D211 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5D211 = 1;
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
    sub_1B88554(p_callbackFunc, 0, (int32_t)method, v3);
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
  char v4; // w22
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x8
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5D209 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__GetEnumerator__);
    byte_4A5D209 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( !*viewList )
    sub_1B8880C(0LL, viewList);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)*viewList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__GetEnumerator__);
  v4 = 0;
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__MoveNext__);
    if ( !v5 )
      break;
    current = v8.fields._current;
    if ( (v4 & 1) != 0 )
    {
      if ( !v8.fields._current )
        sub_1B8880C(v5, v6);
      v4 = 1;
    }
    else
    {
      if ( !v8.fields._current )
        sub_1B8880C(v5, v6);
      if ( LODWORD(v8.fields._current[11].klass) == 4 )
      {
        v4 = 1;
        BYTE2(v8.fields._current[9].monitor) = 1;
      }
      else
      {
        v4 = 0;
      }
    }
    if ( ((__int64)current[11].klass & 0xFFFFFFFE) == 2 )
      BYTE2(current[9].monitor) = 1;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ItemLinkInfoListViewItem__Dispose__);
}


void __fastcall ItemLinkInfoWindowComponent__Close(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemLinkInfoWindowComponent__Close_42214432(this, 0LL, v2);
}


void __fastcall ItemLinkInfoWindowComponent__Close_42214432(
        ItemLinkInfoWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *listViewManager; // x21
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  ItemLinkInfoListViewManager_o *v9; // x0
  System_Action_o *v10; // x20

  if ( (byte_4A5D20F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ItemLinkInfoWindowComponent_EndClose__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D20F = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = (UnityEngine_Object_o *)this->fields.listViewManager;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(listViewManager, 0LL, 0LL) )
    {
      v9 = this->fields.listViewManager;
      if ( !v9 )
        sub_1B8880C(0LL, v6);
      ItemLinkInfoListViewManager__DeleteCallback(v9, v6);
    }
    this->fields.state = 3;
    this->fields.closeCallbackFunc = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v7, v8);
    v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndClose__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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

  if ( (byte_4A5D204 & 1) == 0 )
  {
    sub_1B885B0(&ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_TypeInfo);
    byte_4A5D204 = 1;
  }
  v7 = sub_1B887FC(ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_TypeInfo);
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22___ctor(
    (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 48) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = itemIdList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)itemIdList, v12, v13);
  *(_QWORD *)(v7 + 40) = needNumList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)needNumList, v14, v15);
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
  __int64 v9; // x8
  Il2CppObject *v10; // x22
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v12; // x21
  ItemLinkInfoDetailObject_o *v13; // x22
  const MethodInfo *v14; // x3

  v8 = this;
  if ( (byte_4A5D205 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoDetailObject___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D205 = 1;
  }
  v9 = 120LL;
  if ( isDispStoneDetail )
    v9 = 144LL;
  if ( !parentObject )
    goto LABEL_13;
  v10 = *(Il2CppObject **)((char *)&v8->klass + v9);
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object__49297800(
          v10,
          transform,
          (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0LL, 0LL);
  v13 = 0LL;
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( v12 )
    {
      this = (ItemLinkInfoWindowComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                (UnityEngine_GameObject_o *)v12,
                                                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoDetailObject___);
      if ( this )
      {
        v13 = (ItemLinkInfoDetailObject_o *)this;
        ItemLinkInfoDetailObject__Setup((ItemLinkInfoDetailObject_o *)this, itemEnt, isDispStoneDetail, v14);
        return v13;
      }
    }
LABEL_13:
    sub_1B8880C(this, itemEnt);
  }
  return v13;
}


ItemLinkInfoTextObject_o *__fastcall ItemLinkInfoWindowComponent__CreateListDescriptionObject(
        ItemLinkInfoWindowComponent_o *this,
        UnityEngine_GameObject_o *parentObject,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x20
  Il2CppObject *listDescriptionObject; // x20
  UnityEngine_Transform_o *transform; // x19
  Il2CppObject *v7; // x19

  v4 = this;
  if ( (byte_4A5D207 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoTextObject___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D207 = 1;
  }
  if ( !parentObject )
    goto LABEL_10;
  listDescriptionObject = (Il2CppObject *)v4->fields.listDescriptionObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object__49297800(
         listDescriptionObject,
         transform,
         (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v7, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !v7 )
LABEL_10:
    sub_1B8880C(this, parentObject);
  return (ItemLinkInfoTextObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                       (UnityEngine_GameObject_o *)v7,
                                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoTextObject___);
}


ItemLinkInfoSubHeaderObject_o *__fastcall ItemLinkInfoWindowComponent__CreateSubHeaderObject(
        ItemLinkInfoWindowComponent_o *this,
        UnityEngine_GameObject_o *parentObject,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x20
  Il2CppObject *subHeaderObject; // x20
  UnityEngine_Transform_o *transform; // x19
  Il2CppObject *v7; // x19

  v4 = this;
  if ( (byte_4A5D206 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoSubHeaderObject___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D206 = 1;
  }
  if ( !parentObject )
    goto LABEL_10;
  subHeaderObject = (Il2CppObject *)v4->fields.subHeaderObject;
  transform = UnityEngine_GameObject__get_transform(parentObject, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object__49297800(
         subHeaderObject,
         transform,
         (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
  this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v7, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !v7 )
LABEL_10:
    sub_1B8880C(this, parentObject);
  return (ItemLinkInfoSubHeaderObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                            (UnityEngine_GameObject_o *)v7,
                                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ItemLinkInfoSubHeaderObject___);
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
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
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
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  _QWORD *v11; // x0
  int32_t TargetId_k__BackingField; // w19
  TerminalPramsManager_c *v13; // x0
  System_Action_o *transitionAction; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5D20E & 1) == 0 )
  {
    sub_1B885B0(&Method_ItemLinkInfoWindowComponent_ExecSceneTransition__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5D20E = 1;
  }
  transitionAction = 0LL;
  if ( this->fields.state == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v11 = Method_ItemLinkInfoWindowComponent_ExecSceneTransition__;
    if ( (*((_BYTE *)Method_ItemLinkInfoWindowComponent_ExecSceneTransition__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B885C8(Method_ItemLinkInfoWindowComponent_ExecSceneTransition__);
    Instance = (Il2CppObject *)sub_1B88594(v11, v11[4]);
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
      if ( !byte_4A577EA )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A577EA = 1;
      }
      v13 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v13 = TerminalPramsManager_TypeInfo;
      }
      v13->static_fields->_ShopFocusItemId_k__BackingField = TargetId_k__BackingField;
    }
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
LABEL_21:
      sub_1B8880C(Instance, v10);
    PartyOrganizationUtility__ClearTemporaryPartyInfo((PartyOrganizationUtility_o *)Instance, 0LL);
    ActionExtensions__Call(transitionAction, 0LL);
  }
}


int32_t __fastcall ItemLinkInfoWindowComponent__GetTargetId(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *ent,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent_o *v4; // x20
  System_String_o *basePanel; // x21
  int m_CancellationTokenSource; // w8
  bool v7; // w0
  int32_t v8; // w8
  int32_t v10[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5D20B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Enum_TryParse_SceneList_Type___);
    sub_1B885B0(&System_Enum_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&StringLiteral_8906/*"MasterMission"*/);
    sub_1B885B0(&StringLiteral_8843/*"ManaPrism"*/);
    sub_1B885B0(&StringLiteral_8359/*"LeafExchange"*/);
    sub_1B885B0(&StringLiteral_6518/*"FRIEND_POINT"*/);
    sub_1B885B0(&StringLiteral_15570/*"War"*/);
    sub_1B885B0(&StringLiteral_10808/*"PurePrismExchange"*/);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B885B0(&StringLiteral_11150/*"RarePrism"*/);
    byte_4A5D20B = 1;
  }
  *(_QWORD *)result = 0LL;
  *(_QWORD *)v10 = 0LL;
  if ( !ent
    || (this = (ItemLinkInfoWindowComponent_o *)ent->fields.transitionParam) == 0LL
    || (this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0LL)) == 0LL )
  {
LABEL_45:
    sub_1B8880C(this, ent);
  }
  v4 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_46;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__48794212(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_2E88A64 *)Method_System_Enum_TryParse_SceneList_Type___) )
    goto LABEL_37;
  if ( result[1] <= 22 )
  {
    if ( result[1] == 20 )
    {
      if ( SLODWORD(v4->fields.m_CancellationTokenSource) >= 2 )
      {
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61712152(
                                                  (System_String_o *)v4->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_6518/*"FRIEND_POINT"*/,
                                                  1,
                                                  0LL);
        if ( !(_DWORD)this )
          return (int)this;
        if ( LODWORD(v4->fields.m_CancellationTokenSource) > 1 )
        {
          v7 = System_Int32__TryParse((System_String_o *)v4->fields.basePanelList, v10, 0LL);
          v8 = v10[0];
          goto LABEL_42;
        }
LABEL_46:
        sub_1B88814(this, ent);
      }
    }
    else
    {
      if ( result[1] != 22 || SLODWORD(v4->fields.m_CancellationTokenSource) < 2 )
        goto LABEL_37;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61712152(
                                                (System_String_o *)v4->fields.basePanelList,
                                                (System_String_o *)StringLiteral_8843/*"ManaPrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_30;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_46;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61712152(
                                                (System_String_o *)v4->fields.basePanelList,
                                                (System_String_o *)StringLiteral_10808/*"PurePrismExchange"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_30;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_46;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61712152(
                                                (System_String_o *)v4->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11150/*"RarePrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        goto LABEL_30;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_46;
      if ( !System_String__Compare_61712152(
              (System_String_o *)v4->fields.basePanelList,
              (System_String_o *)StringLiteral_8359/*"LeafExchange"*/,
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
    if ( SLODWORD(v4->fields.m_CancellationTokenSource) >= 2 )
    {
      v7 = System_Int32__TryParse((System_String_o *)v4->fields.basePanelList, result, 0LL);
      v8 = result[0];
      goto LABEL_42;
    }
    goto LABEL_37;
  }
  if ( result[1] != 34 )
    goto LABEL_37;
  m_CancellationTokenSource = (int)v4->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 3 )
  {
    this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61712152(
                                              (System_String_o *)v4->fields.basePanelList,
                                              (System_String_o *)StringLiteral_8906/*"MasterMission"*/,
                                              1,
                                              0LL);
    if ( !(_DWORD)this )
      return (int)this;
    if ( LODWORD(v4->fields.m_CancellationTokenSource) > 2 )
    {
      v7 = System_Int32__TryParse((System_String_o *)v4->fields.baseWindow, &v10[1], 0LL);
      v8 = v10[1];
LABEL_42:
      if ( v7 )
        LODWORD(this) = v8;
      else
        LODWORD(this) = 0;
      return (int)this;
    }
    goto LABEL_46;
  }
  if ( m_CancellationTokenSource != 2
    || System_String__Compare_61712152(
         (System_String_o *)v4->fields.basePanelList,
         (System_String_o *)StringLiteral_15570/*"War"*/,
         1,
         0LL)
    || !ItemDropEfficiencyEntity__IsMainScenario(ent, 0LL) )
  {
    goto LABEL_37;
  }
  this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
  ItemLinkInfoWindowComponent_o *v4; // x19
  System_String_o *basePanel; // x21
  int m_CancellationTokenSource; // w8
  int32_t v7; // w20
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5D20C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Enum_TryParse_SceneList_Type___);
    sub_1B885B0(&System_Enum_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&StringLiteral_12900/*"Spot"*/);
    sub_1B885B0(&StringLiteral_8906/*"MasterMission"*/);
    sub_1B885B0(&StringLiteral_8843/*"ManaPrism"*/);
    sub_1B885B0(&StringLiteral_8359/*"LeafExchange"*/);
    sub_1B885B0(&StringLiteral_15570/*"War"*/);
    sub_1B885B0(&StringLiteral_10808/*"PurePrismExchange"*/);
    sub_1B885B0(&StringLiteral_11150/*"RarePrism"*/);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B885B0(&StringLiteral_10922/*"Quest"*/);
    byte_4A5D20C = 1;
  }
  *(_QWORD *)result = 0LL;
  v9 = 0;
  if ( !ent )
    goto LABEL_50;
  this = (ItemLinkInfoWindowComponent_o *)ent->fields.transitionParam;
  if ( !this )
    goto LABEL_50;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0LL);
  if ( !this )
    goto LABEL_50;
  v4 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_51;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__48794212(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_2E88A64 *)Method_System_Enum_TryParse_SceneList_Type___) )
    return 0;
  switch ( result[1] )
  {
    case 22:
      if ( SLODWORD(v4->fields.m_CancellationTokenSource) < 2 )
        return 0;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61712152(
                                                (System_String_o *)v4->fields.basePanelList,
                                                (System_String_o *)StringLiteral_8843/*"ManaPrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 6;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61712152(
                                                (System_String_o *)v4->fields.basePanelList,
                                                (System_String_o *)StringLiteral_10808/*"PurePrismExchange"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 7;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61712152(
                                                (System_String_o *)v4->fields.basePanelList,
                                                (System_String_o *)StringLiteral_11150/*"RarePrism"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 8;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
        goto LABEL_51;
      if ( System_String__Compare_61712152(
             (System_String_o *)v4->fields.basePanelList,
             (System_String_o *)StringLiteral_8359/*"LeafExchange"*/,
             1,
             0LL) )
      {
        return 0;
      }
      return 9;
    case 72:
      if ( SLODWORD(v4->fields.m_CancellationTokenSource) < 2 )
        return 0;
      if ( System_Int32__TryParse((System_String_o *)v4->fields.basePanelList, &v9, 0LL) )
        return 4;
      else
        return 0;
    case 34:
      m_CancellationTokenSource = (int)v4->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource < 3 )
      {
        if ( m_CancellationTokenSource != 2
          || System_String__Compare_61712152(
               (System_String_o *)v4->fields.basePanelList,
               (System_String_o *)StringLiteral_15570/*"War"*/,
               1,
               0LL)
          || !ItemDropEfficiencyEntity__IsMainScenario(ent, 0LL) )
        {
          return 0;
        }
        this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( this )
        {
          if ( !QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0LL) )
            return 0;
          return 3;
        }
LABEL_50:
        sub_1B8880C(this, ent);
      }
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61712152(
                                                (System_String_o *)v4->fields.basePanelList,
                                                (System_String_o *)StringLiteral_8906/*"MasterMission"*/,
                                                1,
                                                0LL);
      if ( !(_DWORD)this )
        return 5;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_51;
      this = (ItemLinkInfoWindowComponent_o *)System_Int32__TryParse(
                                                (System_String_o *)v4->fields.baseWindow,
                                                result,
                                                0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        return 0;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
LABEL_51:
        sub_1B88814(this, ent);
      v7 = 1;
      this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61712152(
                                                (System_String_o *)v4->fields.basePanelList,
                                                (System_String_o *)StringLiteral_10922/*"Quest"*/,
                                                1,
                                                0LL);
      if ( (_DWORD)this )
      {
        if ( LODWORD(v4->fields.m_CancellationTokenSource) > 1 )
        {
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61712152(
                                                    (System_String_o *)v4->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_12900/*"Spot"*/,
                                                    1,
                                                    0LL);
          if ( !(_DWORD)this )
            return 2;
          if ( LODWORD(v4->fields.m_CancellationTokenSource) > 1 )
          {
            if ( !System_String__Compare_61712152(
                    (System_String_o *)v4->fields.basePanelList,
                    (System_String_o *)StringLiteral_15570/*"War"*/,
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
  return v7;
}


System_String_o *__fastcall ItemLinkInfoWindowComponent__GetTitleText(
        ItemLinkInfoWindowComponent_o *this,
        ItemDropEfficiencyEntity_o *entity,
        ItemLinkInfoListViewItem_o *viewItem,
        const MethodInfo *method)
{
  if ( (byte_4A5D20A & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B885B0(&StringLiteral_7425/*"ITEM_LINK_INFO_LIST_HIDDEN_TITLE"*/);
    byte_4A5D20A = 1;
  }
  if ( !entity )
    goto LABEL_11;
  if ( (unsigned int)(entity->fields.targetType - 1) > 3 )
    return entity->fields.title;
  if ( !viewItem )
LABEL_11:
    sub_1B8880C(this, entity);
  if ( !viewItem->fields._IsLocked_k__BackingField )
    return entity->fields.title;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_7425/*"ITEM_LINK_INFO_LIST_HIDDEN_TITLE"*/, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__Init(ItemLinkInfoWindowComponent_o *this, const MethodInfo *method)
{
  UILabel_o *titleItemNameLabel; // x0

  if ( (byte_4A5D200 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D200 = 1;
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
    sub_1B8880C(titleItemNameLabel, method);
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
  ItemLinkInfoWindowComponent_o *v4; // x20
  System_String_o *basePanel; // x21
  BalanceConfig_c *v6; // x0
  int32_t ClassBoardReleaseQuestId; // w19
  bool v9; // w21
  ItemLinkInfoWindowComponent___c__DisplayClass31_0_o *v10; // x19
  System_Object_array *ListValidData; // x20
  System_Func_object__bool__o *v12; // x21
  int m_CancellationTokenSource; // w8
  MapControl_WarInfo_o *LatestProgressWarInfo; // x0
  MapControl_SpotInfo_o *SpotInfo; // x0
  bool v16; // w0
  Il2CppObject *v17; // [xsp+0h] [xbp-40h] BYREF
  int32_t key; // [xsp+Ch] [xbp-34h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5D20D & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_Any_GachaEntity___);
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Enum_TryParse_SceneList_Type___);
    sub_1B885B0(&System_Enum_TypeInfo);
    sub_1B885B0(&System_Func_GachaEntity__bool__TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&Method_ItemLinkInfoWindowComponent___c__DisplayClass31_0__IsBoardActive_b__0__);
    sub_1B885B0(&ItemLinkInfoWindowComponent___c__DisplayClass31_0_TypeInfo);
    sub_1B885B0(&StringLiteral_12900/*"Spot"*/);
    sub_1B885B0(&StringLiteral_8906/*"MasterMission"*/);
    sub_1B885B0(&StringLiteral_6518/*"FRIEND_POINT"*/);
    sub_1B885B0(&StringLiteral_15570/*"War"*/);
    sub_1B885B0(&StringLiteral_4557/*"CoinRoom"*/);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B885B0(&StringLiteral_10922/*"Quest"*/);
    byte_4A5D20D = 1;
  }
  *(_QWORD *)result = 0LL;
  key = 0;
  v17 = 0LL;
  if ( !entity )
    goto LABEL_70;
  this = (ItemLinkInfoWindowComponent_o *)entity->fields.transitionParam;
  if ( !this )
    goto LABEL_70;
  this = (ItemLinkInfoWindowComponent_o *)System_String__Split((System_String_o *)this, 0x2Fu, 0, 0LL);
  if ( !this )
    goto LABEL_70;
  v4 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_71;
  basePanel = (System_String_o *)this->fields.basePanel;
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( !System_Enum__TryParse_Int32Enum__48794212(
          basePanel,
          1,
          &result[1],
          (const MethodInfo_2E88A64 *)Method_System_Enum_TryParse_SceneList_Type___) )
    return 0;
  if ( result[1] <= 34 )
  {
    v9 = 0;
    switch ( result[1] )
    {
      case 0x14:
        if ( SLODWORD(v4->fields.m_CancellationTokenSource) < 2
          || System_String__op_Equality(
               (System_String_o *)v4->fields.basePanelList,
               (System_String_o *)StringLiteral_6518/*"FRIEND_POINT"*/,
               0LL)
          || SLODWORD(v4->fields.m_CancellationTokenSource) < 2 )
        {
          return 1;
        }
        v10 = (ItemLinkInfoWindowComponent___c__DisplayClass31_0_o *)sub_1B887FC(ItemLinkInfoWindowComponent___c__DisplayClass31_0_TypeInfo);
        ItemLinkInfoWindowComponent___c__DisplayClass31_0___ctor(v10, 0LL);
        if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
          break;
        if ( !v10 )
          goto LABEL_70;
        System_Int32__TryParse((System_String_o *)v4->fields.basePanelList, &v10->fields.gachaId, 0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !this )
          goto LABEL_70;
        ListValidData = (System_Object_array *)GachaMaster__getListValidData((GachaMaster_o *)this, 0LL);
        v12 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GachaEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v12,
          (Il2CppObject *)v10,
          Method_ItemLinkInfoWindowComponent___c__DisplayClass31_0__IsBoardActive_b__0__,
          0LL);
        return BasicHelper__Any_object__48672124(
                 ListValidData,
                 (System_Func_T__bool__o *)v12,
                 (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_GachaEntity___);
      case 0x16:
        if ( SLODWORD(v4->fields.m_CancellationTokenSource) < 2 )
          return 1;
        v9 = 1;
        if ( System_String__Compare_61712152(
               (System_String_o *)v4->fields.basePanelList,
               (System_String_o *)StringLiteral_4557/*"CoinRoom"*/,
               1,
               0LL) )
        {
          return v9;
        }
        if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        return CoinRoomUtility__IsTargetQuestClear(0LL);
      case 0x17:
      case 0x1E:
      case 0x20:
        return 1;
      case 0x22:
        m_CancellationTokenSource = (int)v4->fields.m_CancellationTokenSource;
        if ( m_CancellationTokenSource < 3 )
        {
          if ( m_CancellationTokenSource == 2 )
          {
            v9 = 1;
            if ( System_String__Compare_61712152(
                   (System_String_o *)v4->fields.basePanelList,
                   (System_String_o *)StringLiteral_15570/*"War"*/,
                   1,
                   0LL) )
            {
              return v9;
            }
            if ( ItemDropEfficiencyEntity__IsMainScenario(entity, 0LL) )
            {
              this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( !this )
                goto LABEL_70;
              LatestProgressWarInfo = QuestTree__GetLatestProgressWarInfo((QuestTree_o *)this, 0LL);
              if ( LatestProgressWarInfo )
                return MapControl_WarInfo__GetStatus(LatestProgressWarInfo, 0LL) != 3;
            }
          }
          return 1;
        }
        v9 = 1;
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61712152(
                                                  (System_String_o *)v4->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_8906/*"MasterMission"*/,
                                                  1,
                                                  0LL);
        if ( !(_DWORD)this )
          return v9;
        if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 2 )
          break;
        this = (ItemLinkInfoWindowComponent_o *)System_Int32__TryParse(
                                                  (System_String_o *)v4->fields.baseWindow,
                                                  result,
                                                  0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          return 1;
        if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
          break;
        this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61712152(
                                                  (System_String_o *)v4->fields.basePanelList,
                                                  (System_String_o *)StringLiteral_10922/*"Quest"*/,
                                                  1,
                                                  0LL);
        if ( !(_DWORD)this )
        {
          this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          if ( this )
            return clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)this, result[0], 0LL);
          goto LABEL_70;
        }
        if ( LODWORD(v4->fields.m_CancellationTokenSource) > 1 )
        {
          this = (ItemLinkInfoWindowComponent_o *)System_String__Compare_61712152(
                                                    (System_String_o *)v4->fields.basePanelList,
                                                    (System_String_o *)StringLiteral_12900/*"Spot"*/,
                                                    1,
                                                    0LL);
          if ( !(_DWORD)this )
          {
            this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( this )
            {
              SpotInfo = QuestTree__GetSpotInfo((QuestTree_o *)this, result[0], 0LL);
              if ( SpotInfo )
                return SpotInfo->fields.dispType == 1;
              return 0;
            }
            goto LABEL_70;
          }
          if ( LODWORD(v4->fields.m_CancellationTokenSource) > 1 )
          {
            v9 = 1;
            if ( System_String__Compare_61712152(
                   (System_String_o *)v4->fields.basePanelList,
                   (System_String_o *)StringLiteral_15570/*"War"*/,
                   1,
                   0LL) )
            {
              return v9;
            }
            this = (ItemLinkInfoWindowComponent_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( this )
              return QuestTree__IsActiveWar((QuestTree_o *)this, result[0], 0LL);
LABEL_70:
            sub_1B8880C(this, entity);
          }
        }
        return v16;
      default:
        return v9;
    }
LABEL_71:
    sub_1B88814(this, entity);
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
      return CondType__IsQuestClear_37596684(ClassBoardReleaseQuestId, -1, 0, 0LL);
    }
    return 0;
  }
  if ( SLODWORD(v4->fields.m_CancellationTokenSource) < 2
    || !System_Int32__TryParse((System_String_o *)v4->fields.basePanelList, &key, 0LL) )
  {
    return 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !this )
    goto LABEL_70;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &v17,
          key,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ShopMaster___);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
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
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  const MethodInfo *v30; // x2
  System_Action_o *v31; // x20

  if ( (byte_4A5D201 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
    sub_1B885B0(&Method_ItemLinkInfoWindowComponent_EndOpen__);
    sub_1B885B0(&ItemLinkInfoWindowComponent_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D201 = 1;
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
    v14 = ItemLinkInfoWindowComponent_TypeInfo;
    if ( !ItemLinkInfoWindowComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent_TypeInfo);
      v14 = ItemLinkInfoWindowComponent_TypeInfo;
    }
    GameObjectExtensions__SetLocalPositionY(listViewBg, v14->static_fields->STONE_DETAIL_VIEW_BG_POSITION_Y, 0LL);
  }
  this->fields.callbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12);
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
  v17 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  v18 = sub_1B887FC(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_25;
  *(_DWORD *)(v18 + 16) = id;
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
    goto LABEL_25;
  v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  ItemLinkInfoDetailObject = ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
                               this,
                               itemEnt,
                               v19,
                               isDispStoneDetail,
                               v20);
  *(_QWORD *)(v18 + 24) = ItemLinkInfoDetailObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)ItemLinkInfoDetailObject, v22, v23);
  if ( !v17 )
    goto LABEL_25;
  items = v17->fields._items;
  v27 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++v17->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v17->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v17,
      (Il2CppObject *)v18,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v17->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), v18, v24, v25);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  if ( !gameObject )
LABEL_25:
    sub_1B8880C(gameObject, v10);
  ItemLinkInfoListViewManager__CreateList(
    (ItemLinkInfoListViewManager_o *)gameObject,
    (System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v17,
    v30);
  v31 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__OpenItemTransitionList(
        ItemLinkInfoWindowComponent_o *this,
        System_Int32_array *itemIdList,
        System_Int32_array *needNumList,
        ItemLinkInfoWindowComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x3
  System_Collections_IEnumerator_o *ItemTransitionList; // x0
  System_Action_o *v15; // x20

  if ( (byte_4A5D203 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ItemLinkInfoWindowComponent_EndOpen__);
    byte_4A5D203 = 1;
  }
  this->fields.state = 1;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (gameObject = this->fields.listViewBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        this->fields.callbackFunc = callback,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, v11, v12),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.titleItemNameLabel) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
    sub_1B8880C(gameObject, v10);
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ItemTransitionList = ItemLinkInfoWindowComponent__CoCreateItemTransitionList(this, itemIdList, needNumList, v13);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, ItemTransitionList, 0LL);
  v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0LL);
}


void __fastcall ItemLinkInfoWindowComponent__OpenUserItemInfo(
        ItemLinkInfoWindowComponent_o *this,
        UserItemData_o *itemData,
        ItemLinkInfoWindowComponent_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UserItemData_o *v5; // x20
  ItemLinkInfoWindowComponent_o *v6; // x19
  int32_t itemId; // w24
  System_Collections_Generic_List_object__o *EnabledListByItemId; // x20
  const MethodInfo *v9; // x4
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o **v12; // x8
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v14; // x21
  __int64 v15; // x22
  const MethodInfo *v16; // x4
  struct ItemLinkInfoListViewManager_o *listViewManager; // x8
  ItemLinkInfoDetailObject_o *ItemLinkInfoDetailObject; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_List_object__o *v21; // x24
  int32_t v22; // w24
  __int64 v23; // x25
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *Item; // x0
  ItemLinkInfoWindowComponent_o **v27; // x27
  int32_t v28; // w2
  int32_t v29; // w3
  ItemLinkInfoListViewItem_o *v30; // x28
  const MethodInfo *v31; // x2
  ItemLinkInfoWindowComponent_o **v32; // x26
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  struct UnityEngine_GameObject_o *basePanelList; // x1
  ItemLinkInfoWindowComponent_o *v41; // x28
  const MethodInfo *v42; // x2
  ItemLinkInfoWindowComponent_o *v43; // x28
  const MethodInfo *v44; // x3
  ItemLinkInfoWindowComponent_o *v45; // x28
  int32_t v46; // w2
  int32_t v47; // w3
  const MethodInfo *v48; // x2
  ItemLinkInfoWindowComponent_o *v49; // x28
  ItemLinkInfoWindowComponent_o *TargetId; // x0
  ItemLinkInfoWindowComponent_o *v51; // x28
  const MethodInfo *v52; // x2
  ItemLinkInfoWindowComponent_o *v53; // x8
  ItemLinkInfoWindowComponent_o *v54; // x27
  int m_CancellationTokenSource; // w9
  int32_t v56; // w2
  int32_t v57; // w3
  struct System_String_StaticFields *p_monitor; // x8
  struct System_String_o *Empty; // x1
  ServantStatusBattleListViewItem_o *v60; // x27
  System_Action_o *v61; // x28
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w2
  int32_t v65; // w3
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 m_CancellationTokenSource_low; // x10
  Il2CppClass **v69; // x8
  System_Collections_Generic_List_object__o *v70; // x20
  const MethodInfo *v71; // x2
  int32_t v72; // w3
  struct ItemLinkInfoListViewManager_o *v73; // x8
  ItemLinkInfoSubHeaderObject_o *SubHeaderObject; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  ItemLinkInfoWindowComponent_o *v77; // x0
  const MethodInfo *v78; // x2
  ItemLinkInfoWindowComponent_o *v79; // x0
  const MethodInfo *v80; // x2
  int32_t v81; // w2
  int32_t v82; // w3
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 size; // x10
  Il2CppClass **v86; // x0
  const MethodInfo *v87; // x2
  System_Action_o *v88; // x20
  Il2CppObject *v89; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_object__o *v90; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  v5 = itemData;
  v6 = this;
  if ( (byte_4A5D202 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_ItemDropEfficiencyEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1B885B0(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
    sub_1B885B0(&ItemLinkInfoListViewItem_TypeInfo);
    sub_1B885B0(&Method_ItemLinkInfoWindowComponent_EndOpen__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&Method_ItemLinkInfoWindowComponent___c__DisplayClass20_0__OpenUserItemInfo_b__0__);
    sub_1B885B0(&ItemLinkInfoWindowComponent___c__DisplayClass20_0_TypeInfo);
    this = (ItemLinkInfoWindowComponent_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D202 = 1;
  }
  v90 = 0LL;
  entity = 0LL;
  v89 = 0LL;
  if ( !v5 )
    goto LABEL_62;
  itemId = v5->fields.itemId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !this )
    goto LABEL_62;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    itemId,
    (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
  this = (ItemLinkInfoWindowComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
  if ( !this )
    goto LABEL_62;
  EnabledListByItemId = (System_Collections_Generic_List_object__o *)ItemDropEfficiencyMaster__GetEnabledListByItemId(
                                                                       (ItemDropEfficiencyMaster_o *)this,
                                                                       itemId,
                                                                       0LL);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)EnabledListByItemId,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_ItemDropEfficiencyEntity___) )
  {
    v6->fields.state = 1;
    this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
    if ( !this )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (ItemLinkInfoWindowComponent_o *)v6->fields.listViewBg;
    if ( !this )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (ItemLinkInfoWindowComponent_o *)v6->fields.lineObject;
    if ( !this )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v6->fields.callbackFunc = callback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.callbackFunc, (int32_t)callback, v10, v11);
    this = (ItemLinkInfoWindowComponent_o *)v6->fields.titleItemNameLabel;
    if ( !this )
      goto LABEL_62;
    v12 = (System_String_o **)(entity ? &entity[1].monitor : &StringLiteral_1/*""*/);
    UILabel__set_text((UILabel_o *)this, *v12, 0LL);
    this = (ItemLinkInfoWindowComponent_o *)v6->fields.titleWindowNameLabel;
    if ( !this )
      goto LABEL_62;
    this = (ItemLinkInfoWindowComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
    v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
    v15 = sub_1B887FC(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
    System_Object___ctor((Il2CppObject *)v15, 0LL);
    if ( !v15 )
      goto LABEL_62;
    *(_DWORD *)(v15 + 16) = itemId;
    listViewManager = v6->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_62;
    ItemLinkInfoDetailObject = ItemLinkInfoWindowComponent__CreateItemLinkInfoDetailObject(
                                 v6,
                                 (ItemEntity_o *)entity,
                                 listViewManager->fields.listParent,
                                 0,
                                 v16);
    *(_QWORD *)(v15 + 24) = ItemLinkInfoDetailObject;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 24), (int32_t)ItemLinkInfoDetailObject, v19, v20);
    v21 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v21,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__);
    v90 = v21;
    if ( !EnabledListByItemId )
      goto LABEL_62;
    if ( EnabledListByItemId->fields._size >= 1 )
    {
      v22 = 0;
      do
      {
        v23 = sub_1B887FC(ItemLinkInfoWindowComponent___c__DisplayClass20_0_TypeInfo);
        ItemLinkInfoWindowComponent___c__DisplayClass20_0___ctor(
          (ItemLinkInfoWindowComponent___c__DisplayClass20_0_o *)v23,
          0LL);
        if ( !v23 )
          goto LABEL_62;
        *(_QWORD *)(v23 + 32) = v6;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)v6, v24, v25);
        Item = System_Collections_Generic_List_object___get_Item(
                 EnabledListByItemId,
                 v22,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Item__);
        *(_QWORD *)(v23 + 16) = Item;
        v27 = (ItemLinkInfoWindowComponent_o **)(v23 + 16);
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 16), (int32_t)Item, v28, v29);
        v30 = (ItemLinkInfoListViewItem_o *)sub_1B887FC(ItemLinkInfoListViewItem_TypeInfo);
        ItemLinkInfoListViewItem___ctor(v30, v22, v31);
        *(_QWORD *)(v23 + 24) = v30;
        v32 = (ItemLinkInfoWindowComponent_o **)(v23 + 24);
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 24), (int32_t)v30, v33, v34);
        this = *(ItemLinkInfoWindowComponent_o **)(v23 + 24);
        if ( !this )
          goto LABEL_62;
        v37 = (int)entity;
        this->fields.listDescriptionObject = (struct UnityEngine_GameObject_o *)entity;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.listDescriptionObject, v37, v35, v36);
        if ( !*v27 )
          goto LABEL_62;
        this = *v32;
        if ( !*v32 )
          goto LABEL_62;
        basePanelList = (struct UnityEngine_GameObject_o *)(*v27)->fields.basePanelList;
        this->fields.lineObject = basePanelList;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.lineObject, (int32_t)basePanelList, v38, v39);
        this = *v27;
        if ( !*v27 )
          goto LABEL_62;
        v41 = *v32;
        this = (ItemLinkInfoWindowComponent_o *)ItemDropEfficiencyEntity__IsNotDisplayQuestInfo(
                                                  (ItemDropEfficiencyEntity_o *)this,
                                                  0LL);
        if ( !v41 )
          goto LABEL_62;
        LOBYTE(v41->fields.closeBtnObject) = (unsigned __int8)this & 1;
        v43 = *v32;
        this = (ItemLinkInfoWindowComponent_o *)ItemLinkInfoWindowComponent__IsBoardActive(
                                                  this,
                                                  (ItemDropEfficiencyEntity_o *)*v27,
                                                  v42);
        if ( !v43 )
          goto LABEL_62;
        BYTE1(v43->fields.closeBtnObject) = ((unsigned __int8)this & 1) == 0;
        v45 = *v32;
        this = (ItemLinkInfoWindowComponent_o *)ItemLinkInfoWindowComponent__GetTitleText(
                                                  this,
                                                  (ItemDropEfficiencyEntity_o *)*v27,
                                                  (ItemLinkInfoListViewItem_o *)*v32,
                                                  v44);
        if ( !v45 )
          goto LABEL_62;
        v45->fields.itemDetailInfo = (struct UnityEngine_GameObject_o *)this;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v45->fields.itemDetailInfo, (int32_t)this, v46, v47);
        itemData = (UserItemData_o *)*v27;
        if ( !*v27 )
          goto LABEL_62;
        v49 = *v32;
        if ( !*v32 )
          goto LABEL_62;
        LODWORD(v49->fields.callbackFunc) = itemData->fields.dispPriority;
        TargetId = (ItemLinkInfoWindowComponent_o *)ItemLinkInfoWindowComponent__GetTargetId(
                                                      this,
                                                      (ItemDropEfficiencyEntity_o *)itemData,
                                                      v48);
        LODWORD(v49->fields.subHeaderObject) = (_DWORD)TargetId;
        v51 = *v32;
        this = (ItemLinkInfoWindowComponent_o *)ItemLinkInfoWindowComponent__GetTargetValueType(
                                                  TargetId,
                                                  (ItemDropEfficiencyEntity_o *)*v27,
                                                  v52);
        if ( !v51 )
          goto LABEL_62;
        HIDWORD(v51->fields.subHeaderObject) = (_DWORD)this;
        v53 = *v27;
        if ( !*v27 )
          goto LABEL_62;
        v54 = *v32;
        if ( !*v32 )
          goto LABEL_62;
        m_CancellationTokenSource = (int)v53->fields.m_CancellationTokenSource;
        BYTE3(v54->fields.closeBtnObject) = 0;
        HIDWORD(v54->fields.stoneDetailInfo) = m_CancellationTokenSource;
        if ( !Master_object )
          goto LABEL_62;
        this = (ItemLinkInfoWindowComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                  &v89,
                                                  HIDWORD(v53->fields.maskSprite),
                                                  (const MethodInfo_311D988 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !v89 )
            goto LABEL_62;
          p_monitor = (struct System_String_StaticFields *)&v89[1].monitor;
        }
        else
        {
          p_monitor = string_TypeInfo->static_fields;
        }
        Empty = p_monitor->Empty;
        v54->fields.listViewManager = (struct ItemLinkInfoListViewManager_o *)p_monitor->Empty;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v54->fields.listViewManager, (int32_t)Empty, v56, v57);
        v60 = *(ServantStatusBattleListViewItem_o **)(v23 + 24);
        v61 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(
          v61,
          (Il2CppObject *)v23,
          Method_ItemLinkInfoWindowComponent___c__DisplayClass20_0__OpenUserItemInfo_b__0__,
          0LL);
        if ( !v60 )
          goto LABEL_62;
        v60[1].klass = (ServantStatusBattleListViewItem_c *)v61;
        sub_1B88554(v60 + 1, (int32_t)v61, v62, v63);
        this = (ItemLinkInfoWindowComponent_o *)v90;
        if ( !v90 )
          goto LABEL_62;
        itemData = (UserItemData_o *)*v32;
        items = v90->fields._items;
        v67 = Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__;
        ++v90->fields._version;
        if ( !items )
          goto LABEL_62;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)itemData,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
        }
        else
        {
          v69 = &items->obj.klass + m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          v69[4] = (Il2CppClass *)itemData;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v69 + 4), (int32_t)itemData, v64, v65);
        }
      }
      while ( ++v22 < EnabledListByItemId->fields._size );
    }
    v70 = v90;
    this = (ItemLinkInfoWindowComponent_o *)System_Linq_Enumerable__Any_object_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)v90,
                                              (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v73 = v6->fields.listViewManager;
      if ( !v73 )
        goto LABEL_62;
      SubHeaderObject = ItemLinkInfoWindowComponent__CreateSubHeaderObject(v6, v73->fields.listParent, v71);
      *(_QWORD *)(v15 + 32) = SubHeaderObject;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)SubHeaderObject, v75, v76);
      ItemLinkInfoWindowComponent__SortViewItemList(
        v77,
        (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v90,
        v78);
      ItemLinkInfoWindowComponent__CheckRecommendBoard(
        v79,
        (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v90,
        v80);
      v70 = v90;
    }
    *(_QWORD *)(v15 + 48) = v70;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 48), (int32_t)v70, (int32_t)v71, v72);
    if ( !v14 )
      goto LABEL_62;
    v83 = v14->fields._items;
    v84 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
    ++v14->fields._version;
    if ( !v83 )
      goto LABEL_62;
    size = v14->fields._size;
    if ( (unsigned int)size >= v83->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v14,
        (Il2CppObject *)v15,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    }
    else
    {
      v86 = &v83->obj.klass + size;
      v14->fields._size = size + 1;
      v86[4] = (Il2CppClass *)v15;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v86 + 4), v15, v81, v82);
    }
    this = (ItemLinkInfoWindowComponent_o *)v6->fields.listViewManager;
    if ( !this )
LABEL_62:
      sub_1B8880C(this, itemData);
    ItemLinkInfoListViewManager__CreateList(
      (ItemLinkInfoListViewManager_o *)this,
      (System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v14,
      v87);
    v88 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v88, (Il2CppObject *)v6, Method_ItemLinkInfoWindowComponent_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)v6, v88, 0, 0LL);
  }
  else
  {
    ItemLinkInfoWindowComponent__Open(v6, (ItemEntity_o *)entity, callback, 0, v9);
  }
}


void __fastcall ItemLinkInfoWindowComponent__SortViewItemList(
        ItemLinkInfoWindowComponent_o *this,
        System_Collections_Generic_List_ItemLinkInfoListViewItem__o **viewList,
        const MethodInfo *method)
{
  ItemLinkInfoWindowComponent___c_c *v4; // x0
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v5; // x20
  System_Func_object__int__o *_9__26_0; // x21
  Il2CppObject *v7; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v11; // x0
  ItemLinkInfoWindowComponent___c_c *v12; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v13; // x20
  System_Func_object__int__o *_9__26_1; // x21
  Il2CppObject *v15; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x0
  ItemLinkInfoWindowComponent___c_c *v20; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x20
  System_Func_object__int__o *_9__26_2; // x21
  Il2CppObject *v23; // x22
  struct ItemLinkInfoWindowComponent___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_List_ItemLinkInfoListViewItem__o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_4A5D208 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_ItemLinkInfoListViewItem__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenByDescending_ItemLinkInfoListViewItem__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenBy_ItemLinkInfoListViewItem__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_ItemLinkInfoListViewItem___);
    sub_1B885B0(&System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    sub_1B885B0(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__26_0__);
    sub_1B885B0(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__26_1__);
    sub_1B885B0(&Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__26_2__);
    sub_1B885B0(&ItemLinkInfoWindowComponent___c_TypeInfo);
    byte_4A5D208 = 1;
  }
  v4 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v5 = *viewList;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v4 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__26_0 = (System_Func_object__int__o *)v4->static_fields->__9__26_0;
  if ( !_9__26_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__26_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__26_0,
      v7,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__26_0__,
      0LL);
    static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__26_0 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__26_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__26_0, (int32_t)_9__26_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v5,
          (System_Func_TSource__TKey__o *)_9__26_0,
          (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_ItemLinkInfoListViewItem__int___);
  v12 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v13 = v11;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v12 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__26_1 = (System_Func_object__int__o *)v12->static_fields->__9__26_1;
  if ( !_9__26_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__26_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__26_1,
      v15,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__26_1__,
      0LL);
    v16 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v16->__9__26_1 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__26_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->__9__26_1, (int32_t)_9__26_1, v17, v18);
  }
  v19 = System_Linq_Enumerable__ThenBy_object__int_(
          v13,
          (System_Func_TSource__TKey__o *)_9__26_1,
          (const MethodInfo_2EB7B78 *)Method_System_Linq_Enumerable_ThenBy_ItemLinkInfoListViewItem__int___);
  v20 = ItemLinkInfoWindowComponent___c_TypeInfo;
  v21 = v19;
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v20 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__26_2 = (System_Func_object__int__o *)v20->static_fields->__9__26_2;
  if ( !_9__26_2 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__26_2 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ItemLinkInfoListViewItem__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__26_2,
      v23,
      Method_ItemLinkInfoWindowComponent___c__SortViewItemList_b__26_2__,
      0LL);
    v24 = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    v24->__9__26_2 = (struct System_Func_ItemLinkInfoListViewItem__int__o *)_9__26_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v24->__9__26_2, (int32_t)_9__26_2, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                               v21,
                                                               (System_Func_TSource__TKey__o *)_9__26_2,
                                                               (const MethodInfo_2EB7F74 *)Method_System_Linq_Enumerable_ThenByDescending_ItemLinkInfoListViewItem__int___);
  v28 = (System_Collections_Generic_List_ItemLinkInfoListViewItem__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v27,
                                                                         (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_ItemLinkInfoListViewItem___);
  *viewList = v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)viewList, (int32_t)v28, v29, v30);
}


void __fastcall ItemLinkInfoWindowComponent___OpenUserItemInfo_b__20_1(
        ItemLinkInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ItemLinkInfoWindowComponent__Close_42214432(this, 0LL, v2);
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

  if ( (byte_4A5D1FE & 1) == 0 )
  {
    sub_1B885B0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    byte_4A5D1FE = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  ItemLinkInfoWindowComponent__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ItemLinkInfoWindowComponent__get_closeBtnPath(
        ItemLinkInfoWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5D210 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_7589/*"InfoWindow/CloseBtn"*/);
    byte_4A5D210 = 1;
  }
  return (System_String_o *)StringLiteral_7589/*"InfoWindow/CloseBtn"*/;
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

  if ( (byte_4A5D1FF & 1) == 0 )
  {
    sub_1B885B0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    byte_4A5D1FF = 1;
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
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D17D8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D1790;
}


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
  if ( (byte_4A5DB9A & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A5DB9A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall ItemLinkInfoWindowComponent_CallbackFunc__EndInvoke(
        ItemLinkInfoWindowComponent_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  int32_t _1__state; // w8
  struct ItemLinkInfoWindowComponent_o *_4__this; // x20
  Il2CppObject *Master_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  int v17; // w8
  int32_t v18; // w22
  struct System_Int32_array *itemIdList; // x9
  int max_length; // w10
  bool result; // w0
  struct System_Int32_array *needNumList; // x8
  __int64 i_5__6; // x9
  int v24; // w10
  int32_t v25; // w28
  __int64 v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_List_object__o *v29; // x23
  System_Collections_Generic_List_object__o *v30; // x22
  int32_t v31; // w23
  __int64 v32; // x24
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *Item; // x0
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o **v36; // x26
  int32_t v37; // w2
  int32_t v38; // w3
  ItemLinkInfoListViewItem_o *v39; // x27
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o **v40; // x25
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w1
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Int32_array *v48; // x1
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v49; // x27
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v50; // x27
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v51; // x27
  int32_t v52; // w2
  int32_t v53; // w3
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v54; // x27
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v55; // x27
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v56; // x8
  ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *v57; // x26
  int _2__current; // w9
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_String_StaticFields *p_monitor; // x8
  struct System_String_o *Empty; // x1
  ServantStatusBattleListViewItem_o *v63; // x26
  System_Action_o *v64; // x27
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w2
  int32_t v68; // w3
  struct System_Object_array *items; // x8
  _QWORD *v70; // x9
  __int64 _2__current_low; // x10
  Il2CppClass **v72; // x8
  System_Collections_Generic_List_object__o *v73; // x22
  int32_t v74; // w2
  int32_t v75; // w3
  struct ItemLinkInfoListViewManager_o *listViewManager; // x8
  ItemLinkInfoTextObject_o *ListDescriptionObject; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  int32_t v80; // w2
  int32_t v81; // w3
  __int64 v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  __int64 v85; // x8
  int32_t v86; // w2
  int32_t v87; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  Il2CppObject *v89; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_object__o *v90; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4A5DB9F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClosedMessageMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
    sub_1B885B0(&ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
    sub_1B885B0(&ItemLinkInfoListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&Method_ItemLinkInfoWindowComponent___c__DisplayClass22_0__CoCreateItemTransitionList_b__0__);
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)sub_1B885B0(&ItemLinkInfoWindowComponent___c__DisplayClass22_0_TypeInfo);
    byte_4A5DB9F = 1;
  }
  v90 = 0LL;
  entity = 0LL;
  v89 = 0LL;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
  v2->fields._itemMst_5__2 = (struct ItemMaster_o *)Master_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._itemMst_5__2, (int32_t)Master_object, v6, v7);
  v8 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClosedMessageMaster___);
  v2->fields._closedMessageMst_5__3 = (struct ClosedMessageMaster_o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._closedMessageMst_5__3, (int32_t)v8, v9, v10);
  v11 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemDropEfficiencyMaster___);
  v2->fields._itemDropEfficiencyMst_5__4 = (struct ItemDropEfficiencyMaster_o *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._itemDropEfficiencyMst_5__4, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor__);
  v2->fields._groupList_5__5 = (struct System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__o *)v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._groupList_5__5, (int32_t)v14, v15, v16);
  v17 = 0;
  for ( v2->fields._i_5__6 = 0; ; v2->fields._i_5__6 = v17 )
  {
    itemIdList = v2->fields.itemIdList;
    if ( !itemIdList )
      goto LABEL_71;
    max_length = itemIdList->max_length;
    if ( v17 >= max_length )
    {
      if ( !_4__this )
        goto LABEL_71;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)_4__this->fields.listViewManager;
      if ( !this )
        goto LABEL_71;
      ItemLinkInfoListViewManager__CreateList((ItemLinkInfoListViewManager_o *)this, v2->fields._groupList_5__5, 0LL);
      return 0;
    }
    if ( v17 >= (unsigned int)max_length )
      goto LABEL_72;
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v2->fields._itemMst_5__2;
    if ( !this )
      goto LABEL_71;
    v18 = itemIdList->m_Items[v17 + 1];
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                &entity,
                                                                                v18,
                                                                                (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_12:
    v17 = v2->fields._i_5__6 + 1;
  }
  needNumList = v2->fields.needNumList;
  if ( !needNumList )
    goto LABEL_71;
  i_5__6 = v2->fields._i_5__6;
  v24 = needNumList->max_length;
  if ( (int)i_5__6 >= v24 )
  {
    v25 = 0;
  }
  else
  {
    if ( (unsigned int)i_5__6 >= v24 )
LABEL_72:
      sub_1B88814(this, method);
    v25 = needNumList->m_Items[i_5__6 + 1];
  }
  v26 = sub_1B887FC(ItemLinkInfoListViewManager_ItemLinkInfoGroup_TypeInfo);
  ItemLinkInfoListViewManager_ItemLinkInfoGroup___ctor((ItemLinkInfoListViewManager_ItemLinkInfoGroup_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_71;
  *(_QWORD *)(v26 + 24) = 0LL;
  *(_DWORD *)(v26 + 16) = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 24), 0, v27, v28);
  v29 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ItemLinkInfoListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem___ctor__);
  v90 = v29;
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v2->fields._itemDropEfficiencyMst_5__4;
  if ( !this
    || (this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)ItemDropEfficiencyMaster__GetEnabledListByItemId(
                                                                                    (ItemDropEfficiencyMaster_o *)this,
                                                                                    v18,
                                                                                    0LL)) == 0LL )
  {
LABEL_71:
    sub_1B8880C(this, method);
  }
  v30 = (System_Collections_Generic_List_object__o *)this;
  if ( SLODWORD(this->fields.__2__current) >= 1 )
  {
    v31 = 0;
    do
    {
      v32 = sub_1B887FC(ItemLinkInfoWindowComponent___c__DisplayClass22_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v32, 0LL);
      if ( !v32 )
        goto LABEL_71;
      *(_QWORD *)(v32 + 32) = _4__this;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 32), (int32_t)_4__this, v33, v34);
      Item = System_Collections_Generic_List_object___get_Item(
               v30,
               v31,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ItemDropEfficiencyEntity__get_Item__);
      *(_QWORD *)(v32 + 16) = Item;
      v36 = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o **)(v32 + 16);
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 16), (int32_t)Item, v37, v38);
      v39 = (ItemLinkInfoListViewItem_o *)sub_1B887FC(ItemLinkInfoListViewItem_TypeInfo);
      ItemLinkInfoListViewItem___ctor(v39, v31, 0LL);
      *(_QWORD *)(v32 + 24) = v39;
      v40 = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o **)(v32 + 24);
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 24), (int32_t)v39, v41, v42);
      this = *(ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o **)(v32 + 24);
      if ( !this )
        goto LABEL_71;
      v45 = (int)entity;
      this[1].fields.needNumList = (struct System_Int32_array *)entity;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this[1].fields.needNumList, v45, v43, v44);
      this = *v40;
      if ( !*v40 )
        goto LABEL_71;
      LODWORD(this[1].fields.__4__this) = v25;
      if ( !*v36 )
        goto LABEL_71;
      v48 = (*v36)->fields.needNumList;
      *(_QWORD *)&this[1].fields.__1__state = v48;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this[1].fields, (int32_t)v48, v46, v47);
      this = *v36;
      if ( !*v36 )
        goto LABEL_71;
      v49 = *v40;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)ItemDropEfficiencyEntity__IsNotDisplayQuestInfo(
                                                                                  (ItemDropEfficiencyEntity_o *)this,
                                                                                  0LL);
      if ( !v49 )
        goto LABEL_71;
      LOBYTE(v49[1].fields._itemMst_5__2) = (unsigned __int8)this & 1;
      if ( !_4__this )
        goto LABEL_71;
      v50 = *v40;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)ItemLinkInfoWindowComponent__IsBoardActive(
                                                                                  _4__this,
                                                                                  (ItemDropEfficiencyEntity_o *)*v36,
                                                                                  0LL);
      if ( !v50 )
        goto LABEL_71;
      BYTE1(v50[1].fields._itemMst_5__2) = ((unsigned __int8)this & 1) == 0;
      v51 = *v40;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)ItemLinkInfoWindowComponent__GetTitleText(
                                                                                  _4__this,
                                                                                  (ItemDropEfficiencyEntity_o *)*v36,
                                                                                  (ItemLinkInfoListViewItem_o *)*v40,
                                                                                  0LL);
      if ( !v51 )
        goto LABEL_71;
      v51[1].fields.__2__current = (Il2CppObject *)this;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v51[1].fields.__2__current, (int32_t)this, v52, v53);
      method = (const MethodInfo *)*v36;
      if ( !*v36 )
        goto LABEL_71;
      v54 = *v40;
      if ( !*v40 )
        goto LABEL_71;
      LODWORD(v54[1].fields._groupList_5__5) = HIDWORD(method->invoker_method);
      LODWORD(v54[1].fields.itemIdList) = ItemLinkInfoWindowComponent__GetTargetId(
                                            _4__this,
                                            (ItemDropEfficiencyEntity_o *)method,
                                            0LL);
      v55 = *v40;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)ItemLinkInfoWindowComponent__GetTargetValueType(
                                                                                  _4__this,
                                                                                  (ItemDropEfficiencyEntity_o *)*v36,
                                                                                  0LL);
      if ( !v55 )
        goto LABEL_71;
      HIDWORD(v55[1].fields.itemIdList) = (_DWORD)this;
      v56 = *v36;
      if ( !*v36 )
        goto LABEL_71;
      v57 = *v40;
      if ( !*v40 )
        goto LABEL_71;
      _2__current = (int)v56->fields.__2__current;
      BYTE3(v57[1].fields._itemMst_5__2) = 1;
      HIDWORD(v57[1].fields.__4__this) = _2__current;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v2->fields._closedMessageMst_5__3;
      if ( !this )
        goto LABEL_71;
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                                  &v89,
                                                                                  HIDWORD(v56->fields._itemMst_5__2),
                                                                                  (const MethodInfo_311D988 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v89 )
          goto LABEL_71;
        p_monitor = (struct System_String_StaticFields *)&v89[1].monitor;
      }
      else
      {
        p_monitor = string_TypeInfo->static_fields;
      }
      Empty = p_monitor->Empty;
      v57[1].fields._closedMessageMst_5__3 = (struct ClosedMessageMaster_o *)p_monitor->Empty;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v57[1].fields._closedMessageMst_5__3, (int32_t)Empty, v59, v60);
      v63 = *(ServantStatusBattleListViewItem_o **)(v32 + 24);
      v64 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v64,
        (Il2CppObject *)v32,
        Method_ItemLinkInfoWindowComponent___c__DisplayClass22_0__CoCreateItemTransitionList_b__0__,
        0LL);
      if ( !v63 )
        goto LABEL_71;
      v63[1].klass = (ServantStatusBattleListViewItem_c *)v64;
      sub_1B88554(v63 + 1, (int32_t)v64, v65, v66);
      this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v90;
      if ( !v90 )
        goto LABEL_71;
      method = (const MethodInfo *)*v40;
      items = v90->fields._items;
      v70 = Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__Add__;
      ++v90->fields._version;
      if ( !items )
        goto LABEL_71;
      _2__current_low = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)_2__current_low >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)method,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v72 = &items->obj.klass + _2__current_low;
        LODWORD(this->fields.__2__current) = _2__current_low + 1;
        v72[4] = (Il2CppClass *)method;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v72 + 4), (int32_t)method, v67, v68);
      }
    }
    while ( ++v31 < v30->fields._size );
  }
  v73 = v90;
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)System_Linq_Enumerable__Any_object_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v90,
                                                                              (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_ItemLinkInfoListViewItem___);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v2->fields._i_5__6 )
    {
      if ( !_4__this )
        goto LABEL_71;
    }
    else
    {
      if ( !_4__this )
        goto LABEL_71;
      listViewManager = _4__this->fields.listViewManager;
      if ( !listViewManager )
        goto LABEL_71;
      ListDescriptionObject = ItemLinkInfoWindowComponent__CreateListDescriptionObject(
                                _4__this,
                                listViewManager->fields.listParent,
                                0LL);
      *(_QWORD *)(v26 + 40) = ListDescriptionObject;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 40), (int32_t)ListDescriptionObject, v78, v79);
    }
    ItemLinkInfoWindowComponent__SortViewItemList(
      _4__this,
      (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v90,
      0LL);
    ItemLinkInfoWindowComponent__CheckRecommendBoard(
      _4__this,
      (System_Collections_Generic_List_ItemLinkInfoListViewItem__o **)&v90,
      0LL);
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v90;
    if ( !v90 )
      goto LABEL_71;
    this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)System_Collections_Generic_List_object___get_Item(
                                                                                v90,
                                                                                0,
                                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ItemLinkInfoListViewItem__get_Item__);
    if ( !this )
      goto LABEL_71;
    BYTE4(this[1].fields._groupList_5__5) = 1;
    v73 = v90;
  }
  *(_QWORD *)(v26 + 48) = v73;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 48), (int32_t)v73, v74, v75);
  this = (ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_o *)v2->fields._groupList_5__5;
  if ( !this )
    goto LABEL_71;
  v82 = *(_QWORD *)&this->fields.__1__state;
  v83 = Method_System_Collections_Generic_List_ItemLinkInfoListViewManager_ItemLinkInfoGroup__Add__;
  ++HIDWORD(this->fields.__2__current);
  if ( !v82 )
    goto LABEL_71;
  v84 = SLODWORD(this->fields.__2__current);
  if ( (unsigned int)v84 >= *(_DWORD *)(v82 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v26,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
  }
  else
  {
    v85 = v82 + 8 * v84;
    LODWORD(this->fields.__2__current) = v84 + 1;
    *(_QWORD *)(v85 + 32) = v26;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v85 + 32), v26, v80, v81);
  }
  v2->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B88554(p__2__current, 0, v86, v87);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_ItemLinkInfoWindowComponent__CoCreateItemTransitionList_d__22_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5DB9B & 1) == 0 )
  {
    sub_1B885B0(&ItemLinkInfoWindowComponent___c_TypeInfo);
    byte_4A5DB9B = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ItemLinkInfoWindowComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ItemLinkInfoWindowComponent___c_TypeInfo->static_fields->__9 = (struct ItemLinkInfoWindowComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ItemLinkInfoWindowComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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

  if ( (byte_4A5DB9C & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5DB9C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v3);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, 0LL, 0LL);
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__26_0(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B8880C(this, 0LL);
  return !n->fields._IsLocked_k__BackingField;
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__26_1(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B8880C(this, 0LL);
  return ItemTransitionType__GetSortPriority(n->fields._Type_k__BackingField, 0LL);
}


int32_t __fastcall ItemLinkInfoWindowComponent___c___SortViewItemList_b__26_2(
        ItemLinkInfoWindowComponent___c_o *this,
        ItemLinkInfoListViewItem_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B8880C(this, 0LL);
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
  ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt; // x20
  Il2CppObject *v4; // x19
  ItemLinkInfoListViewItem_o *viewItem; // x21
  struct ItemLinkInfoListViewItem_o **p_viewItem; // t2
  System_Action_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A5DB9D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ItemLinkInfoWindowComponent__OpenUserItemInfo_b__20_1__);
    byte_4A5DB9D = 1;
  }
  itemDropEfficiencyEnt = this->fields.itemDropEfficiencyEnt;
  p_viewItem = &this->fields.viewItem;
  viewItem = this->fields.viewItem;
  v4 = (Il2CppObject *)p_viewItem[1];
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, v4, Method_ItemLinkInfoWindowComponent__OpenUserItemInfo_b__20_1__, 0LL);
  if ( !v4 )
    sub_1B8880C(v8, v9);
  ItemLinkInfoWindowComponent__ExecSceneTransition(
    (ItemLinkInfoWindowComponent_o *)v4,
    itemDropEfficiencyEnt,
    viewItem,
    v7,
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
  ItemLinkInfoWindowComponent___c_c *v3; // x0
  ItemDropEfficiencyEntity_o *itemDropEfficiencyEnt; // x21
  ItemLinkInfoWindowComponent_o *v5; // x19
  ItemLinkInfoListViewItem_o *viewItem; // x20
  struct ItemLinkInfoListViewItem_o **p_viewItem; // t2
  System_Action_o *_9__22_1; // x22
  Il2CppObject *v9; // x23
  struct ItemLinkInfoWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5DB9E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ItemLinkInfoWindowComponent___c__CoCreateItemTransitionList_b__22_1__);
    sub_1B885B0(&ItemLinkInfoWindowComponent___c_TypeInfo);
    byte_4A5DB9E = 1;
  }
  v3 = ItemLinkInfoWindowComponent___c_TypeInfo;
  itemDropEfficiencyEnt = this->fields.itemDropEfficiencyEnt;
  p_viewItem = &this->fields.viewItem;
  viewItem = this->fields.viewItem;
  v5 = (ItemLinkInfoWindowComponent_o *)p_viewItem[1];
  if ( !ItemLinkInfoWindowComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemLinkInfoWindowComponent___c_TypeInfo);
    v3 = ItemLinkInfoWindowComponent___c_TypeInfo;
  }
  _9__22_1 = v3->static_fields->__9__22_1;
  if ( !_9__22_1 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ItemLinkInfoWindowComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v3->static_fields->__9;
    _9__22_1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__22_1,
      v9,
      Method_ItemLinkInfoWindowComponent___c__CoCreateItemTransitionList_b__22_1__,
      0LL);
    static_fields = ItemLinkInfoWindowComponent___c_TypeInfo->static_fields;
    static_fields->__9__22_1 = _9__22_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__22_1, (int32_t)_9__22_1, v11, v12);
  }
  if ( !v5 )
    sub_1B8880C(v3, method);
  ItemLinkInfoWindowComponent__ExecSceneTransition(v5, itemDropEfficiencyEnt, viewItem, _9__22_1, 0LL);
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
    sub_1B8880C(this, 0LL);
  return n->fields.id == this->fields.gachaId;
}