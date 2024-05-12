void __fastcall BonusSelectSummonConfirmDialog___ctor(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_438AE21 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438AE21 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__CheckAssert(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BonusSelectSummonConfirmDialog__Close(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BonusSelectSummonConfirmDialog__Close_24821208(this, 0LL, v2);
}


void __fastcall BonusSelectSummonConfirmDialog__Close_24821208(
        BonusSelectSummonConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  System_Action_o *v12; // x20

  if ( (byte_438AE15 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_BonusSelectSummonConfirmDialog__Close_b__24_0__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438AE15 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v11);
  CommonUI__SetFadeMaskCollider(Instance, 1, 0LL);
  v12 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_BonusSelectSummonConfirmDialog__Close_b__24_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__CreateList(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  GachaBonusSelectMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  GachaBonusSelectEntity_array *v5; // x23
  signed int max_length; // w8
  unsigned int v7; // w24
  GachaBonusSelectEntity_o *v8; // x21
  int32_t slot; // w22
  BonusSelectSummonPartyOrganizationListViewItem_o *v10; // x20
  const MethodInfo *v11; // x4
  struct UnityEngine_GameObject_o *prefab; // x21
  UnityEngine_Transform_o *transform; // x22
  BonusSelectSummonPartyOrganizationListViewObject_o *Component_srcLineSprite; // x21
  BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *v15; // x22
  const MethodInfo *v16; // x3
  __int64 v17; // x0
  GachaBonusSelectEntity_array *entityArray; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438AE17 & 1) == 0 )
  {
    sub_B775C4(&Method_BonusSelectSummonConfirmDialog_OnClick__);
    sub_B775C4(&BonusSelectSummonPartyOrganizationListViewItem_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_GachaBonusSelectMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo);
    byte_438AE17 = 1;
  }
  entityArray = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GachaBonusSelectMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  Master_WarQuestSelectionMaster = (GachaBonusSelectMaster_o *)GachaBonusSelectMaster__TryGetEntityArray(
                                                                 Master_WarQuestSelectionMaster,
                                                                 &entityArray,
                                                                 this->fields.gachaId,
                                                                 0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    v5 = entityArray;
    if ( !entityArray )
      goto LABEL_22;
    max_length = entityArray->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= max_length )
        {
          v17 = sub_B776C8(Master_WarQuestSelectionMaster);
          sub_B77668(v17, 0LL);
        }
        v8 = v5->m_Items[v7];
        if ( !v8 )
          break;
        slot = v8->fields.slot;
        v10 = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B77694(BonusSelectSummonPartyOrganizationListViewItem_TypeInfo);
        BonusSelectSummonPartyOrganizationListViewItem___ctor(v10, slot, 0LL, v8, v11);
        Master_WarQuestSelectionMaster = (GachaBonusSelectMaster_o *)this->fields.rootObj;
        if ( !Master_WarQuestSelectionMaster )
          break;
        prefab = this->fields.prefab;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (GachaBonusSelectMaster_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                                       (UILabel_o *)prefab,
                                                                       transform,
                                                                       (const MethodInfo_1DF9A3C *)Method_UnityEngine_Object_Instantiate_GameObject____69541584);
        if ( !Master_WarQuestSelectionMaster )
          break;
        Component_srcLineSprite = (BonusSelectSummonPartyOrganizationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                          (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___);
        v15 = (BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *)sub_B77694(BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo);
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent___ctor(
          v15,
          (Il2CppObject *)this,
          (intptr_t)Method_BonusSelectSummonConfirmDialog_OnClick__,
          0LL);
        if ( !Component_srcLineSprite )
          break;
        BonusSelectSummonPartyOrganizationListViewObject__Init(Component_srcLineSprite, v10, v15, v16);
        Master_WarQuestSelectionMaster = (GachaBonusSelectMaster_o *)this->fields.itemList;
        if ( !Master_WarQuestSelectionMaster )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__);
        max_length = v5->max_length;
        if ( (int)++v7 >= max_length )
          return;
      }
LABEL_22:
      sub_B7769C(Master_WarQuestSelectionMaster, v4);
    }
  }
}


void __fastcall BonusSelectSummonConfirmDialog__EndClose(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v14; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438AE16 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438AE16 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B7769C(0LL, v3);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B7769C(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v16.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v14 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B77560(p_closeCallbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
    System_Action__Invoke(v14, 0LL);
  }
}


void __fastcall BonusSelectSummonConfirmDialog__EndOpen(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonConfirmDialog__EndShowServantStatusDialog(
        BonusSelectSummonConfirmDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn; // x0
  const MethodInfo *v5; // x1

  if ( (byte_438AE19 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438AE19 = 1;
  }
  enableBtn = this->fields.enableBtn;
  if ( !enableBtn
    || (BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(enableBtn, 1, 0LL),
        BonusSelectSummonConfirmDialog__SetBackBtn(this, v5),
        (enableBtn = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B7769C(enableBtn, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)enableBtn, 0LL, 0LL);
}


SelectBonusData_o *__fastcall BonusSelectSummonConfirmDialog__GetSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  __int64 v4; // x1
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  __int64 v6; // x26
  __int64 v7; // x27
  _BOOL8 v8; // x0
  __int64 v9; // x1
  _QWORD *monitor; // x8
  __int64 v11; // x9
  int32_t v12; // w21
  int32_t v13; // w22
  __int64 v14; // x8
  int32_t v15; // w24
  int32_t v16; // w23
  SelectBonus_o *v17; // x25
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x21
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  BonusSelectSummonConfirmDialog_o *v29; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_438AE1D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectBonus__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectBonus__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectBonus___ctor__);
    sub_B775C4(&System_Collections_Generic_List_SelectBonus__TypeInfo);
    sub_B775C4(&SelectBonusData_TypeInfo);
    sub_B775C4(&SelectBonus_TypeInfo);
    byte_438AE1D = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SelectBonus__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SelectBonus___ctor__);
  itemList = this->fields.itemList;
  v29 = this;
  if ( !itemList )
    goto LABEL_30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  v31 = v30;
  v6 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v31,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    if ( !v8 )
      break;
    if ( !v31.fields.current )
      sub_B7769C(v8, v9);
    monitor = v31.fields.current[7].monitor;
    if ( !monitor )
      sub_B7769C(v8, v9);
    v11 = monitor[16];
    if ( v11 )
      v7 = monitor[16];
    if ( v11 )
    {
      if ( !v7 )
        sub_B7769C(v8, v9);
      v12 = *(_DWORD *)(v7 + 20);
      v13 = *(_DWORD *)(v11 + 24);
    }
    else
    {
      v12 = -1;
      v13 = -1;
    }
    v14 = monitor[17];
    if ( v14 )
      v6 = v14;
    if ( v14 )
    {
      if ( !v6 )
        sub_B7769C(v8, v9);
      v15 = *(_DWORD *)(v6 + 20);
      v16 = *(_DWORD *)(v14 + 24);
    }
    else
    {
      v16 = -1;
      v15 = -1;
    }
    v17 = (SelectBonus_o *)sub_B77694(SelectBonus_TypeInfo);
    SelectBonus___ctor(v17, v12, v13, v15, v16, 0LL);
    if ( !v3 )
      sub_B7769C(v18, v19);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v3,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SelectBonus__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  v20 = sub_B77694(SelectBonusData_TypeInfo);
  SelectBonusData___ctor((SelectBonusData_o *)v20, 0LL);
  if ( !v20 || (*(_DWORD *)(v20 + 16) = v29->fields.gachaId, !v3) )
LABEL_30:
    sub_B7769C(itemList, v4);
  v21 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                 (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_SelectBonus__ToArray__);
  *(_QWORD *)(v20 + 24) = v21;
  sub_B77560((BattleServantConfConponent_o *)(v20 + 24), v21, v22, v23, v24, v25, v26, v27);
  return (SelectBonusData_o *)v20;
}


void __fastcall BonusSelectSummonConfirmDialog__Init(
        BonusSelectSummonConfirmDialog_o *this,
        BonusSelectSummonAssetManager_o *assetManager,
        const MethodInfo *method)
{
  UnityEngine_Object_o *prefab; // x22
  UnityEngine_GameObject_o *titleLabel; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UnityEngine_GameObject_o *OrganizationListViewItemPrefab_k__BackingField; // x1
  struct BonusSelectSummonPartyServantSelectMenu_o **p_servantSelectMenu; // x21
  UnityEngine_Object_o *servantSelectMenu; // x22
  struct UnityEngine_GameObject_o *ServantSelectMenuPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x22
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_438AE13 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___);
    sub_B775C4(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438AE13 = 1;
  }
  prefab = (UnityEngine_Object_o *)this->fields.prefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  titleLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(prefab, 0LL, 0LL);
  if ( ((unsigned __int8)titleLabel & 1) != 0 )
  {
    if ( !assetManager )
      goto LABEL_28;
    OrganizationListViewItemPrefab_k__BackingField = assetManager->fields._OrganizationListViewItemPrefab_k__BackingField;
    this->fields.prefab = OrganizationListViewItemPrefab_k__BackingField;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.prefab,
      (System_Int32_array **)OrganizationListViewItemPrefab_k__BackingField,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  p_servantSelectMenu = &this->fields.servantSelectMenu;
  servantSelectMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  titleLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(servantSelectMenu, 0LL, 0LL);
  if ( ((unsigned __int8)titleLabel & 1) != 0 )
  {
    if ( !assetManager )
      goto LABEL_28;
    ServantSelectMenuPrefab_k__BackingField = assetManager->fields._ServantSelectMenuPrefab_k__BackingField;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    titleLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                               (UILabel_o *)ServantSelectMenuPrefab_k__BackingField,
                                               transform,
                                               (const MethodInfo_1DF9A3C *)Method_UnityEngine_Object_Instantiate_GameObject____69541584);
    if ( !titleLabel )
LABEL_28:
      sub_B7769C(titleLabel, v7);
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       titleLabel,
                                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___);
    *p_servantSelectMenu = (struct BonusSelectSummonPartyServantSelectMenu_o *)Component_srcLineSprite;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.servantSelectMenu,
      Component_srcLineSprite,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  titleLabel = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_28;
  BonusSelectSummonPartyServantSelectMenu__Init((BonusSelectSummonPartyServantSelectMenu_o *)titleLabel, v7);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)v26;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.messageLabel;
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.messageBg;
  if ( !titleLabel )
    goto LABEL_28;
  UISprite__set_spriteName((UISprite_o *)titleLabel, 0LL, 0LL);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.buttonDecideLabel;
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.buttonCancelLabel;
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = (UnityEngine_GameObject_o *)this->fields.buttonDecide;
  this->fields.isButtonEnable = 0;
  if ( !titleLabel )
    goto LABEL_28;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))titleLabel->klass[1]._1.namespaze)(
    titleLabel,
    0LL,
    titleLabel->klass[1]._1.byval_arg.data);
  titleLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !titleLabel )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(titleLabel, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__Modify(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  const MethodInfo *v4; // x1
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *v6; // x21
  BonusSelectSummonConfirmDialog___c_c *v7; // x0
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__29_0; // x22
  Il2CppObject *v10; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_438AE1A & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__);
    sub_B775C4(&Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__);
    sub_B775C4(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    sub_B775C4(&Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__);
    sub_B775C4(&BonusSelectSummonConfirmDialog___c_TypeInfo);
    byte_438AE1A = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B7769C(0LL, v4);
    BonusSelectSummonPartyOrganizationListViewObject__Modfy(
      (BonusSelectSummonPartyOrganizationListViewObject_o *)v19.fields.current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  buttonDecide = this->fields.buttonDecide;
  v6 = (System_Collections_Generic_List_T__o *)this->fields.itemList;
  v7 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  if ( (BYTE3(BonusSelectSummonConfirmDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo);
    v7 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__29_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__29_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__29_0,
      v10,
      Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__);
    v11 = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    v11->__9__29_0 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__29_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v11->__9__29_0,
      (System_Int32_array **)_9__29_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(v6, (System_Func_T__bool__o *)_9__29_0, (const MethodInfo_1C66144 *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
LABEL_19:
    sub_B7769C(itemList, method);
  ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
    buttonDecide,
    ((unsigned __int8)itemList & 1) == 0,
    buttonDecide->klass->vtable._6_OnInit.methodPtr);
  BonusSelectSummonConfirmDialog__SaveSelectBonusData(this, v18);
}


void __fastcall BonusSelectSummonConfirmDialog__OnClick(
        BonusSelectSummonConfirmDialog_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *memberItem,
        bool isLongTap,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_o *v6; // x19
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  struct ServantEntity_o *servantEntity; // x8
  CommonUI_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w22
  ServantLeaderInfo_o *v14; // x21
  ServantStatusDialog_EndDelegate_o *v15; // x22
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  System_Collections_Generic_List_int__o *v18; // x21
  _BOOL8 v19; // x0
  __int64 v20; // x1
  _QWORD *monitor; // x8
  __int64 v22; // x8
  __int64 v23; // x22
  __int64 v24; // x23
  __int64 v25; // x0
  BonusSelectSummonPartyServantSelectMenu_o *servantSelectMenu; // x22
  System_Int32_array *v27; // x21
  System_Action_o *v28; // x23
  const MethodInfo *v29; // x4
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  v6 = this;
  if ( (byte_438AE18 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__);
    sub_B775C4(&Method_BonusSelectSummonConfirmDialog_OnClick__);
    sub_B775C4(&Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&ServantLeaderInfo_TypeInfo);
    this = (BonusSelectSummonConfirmDialog_o *)sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438AE18 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( isLongTap )
  {
    if ( !memberItem )
      goto LABEL_40;
    if ( memberItem->fields.servantEntity )
    {
      this = (BonusSelectSummonConfirmDialog_o *)v6->fields.enableBtn;
      if ( this )
      {
        BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(
          (BonusSelectSummonConfirmDialog_ClickDelegate_o *)this,
          0,
          0LL);
        v7 = Method_BonusSelectSummonConfirmDialog_OnClick__;
        if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClick__ + 75) & 2) != 0 )
          v7 = (_QWORD *)sub_B775CC(Method_BonusSelectSummonConfirmDialog_OnClick__);
        v8 = (System_Reflection_MethodBase_o *)sub_B775A8(v7, v7[3]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
        this = (BonusSelectSummonConfirmDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantEntity = memberItem->fields.servantEntity;
        if ( servantEntity )
        {
          v10 = (CommonUI_o *)this;
          v12 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
          v11 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v32.fields.currentCryptoKey = v12;
          *(_QWORD *)&v32.fields.fakeValue = v11;
          v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v32, 0LL);
          v14 = (ServantLeaderInfo_o *)sub_B77694(ServantLeaderInfo_TypeInfo);
          ServantLeaderInfo___ctor_29357584(v14, v13, 0, 1, 0LL);
          v15 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v15,
            (Il2CppObject *)v6,
            Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__,
            0LL);
          if ( v10 )
          {
            CommonUI__OpenServantStatusDialog_18068936(v10, 7, v14, v15, 0LL);
            return;
          }
        }
      }
LABEL_40:
      sub_B7769C(this, memberItem);
    }
  }
  else
  {
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.enableBtn;
    if ( !this )
      goto LABEL_40;
    BonusSelectSummonConfirmDialog_ClickDelegate__Invoke((BonusSelectSummonConfirmDialog_ClickDelegate_o *)this, 0, 0LL);
    v16 = Method_BonusSelectSummonConfirmDialog_OnClick__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClick__ + 75) & 2) != 0 )
      v16 = (_QWORD *)sub_B775CC(Method_BonusSelectSummonConfirmDialog_OnClick__);
    v17 = (System_Reflection_MethodBase_o *)sub_B775A8(v16, v16[3]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
    v18 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.itemList;
    if ( !this )
      goto LABEL_40;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v30,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    v31 = v30;
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v31,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
      if ( !v19 )
        break;
      if ( !v31.fields.current )
        sub_B7769C(v19, v20);
      monitor = v31.fields.current[7].monitor;
      if ( !monitor )
        sub_B7769C(v19, v20);
      v22 = monitor[15];
      if ( v22 )
      {
        v24 = *(_QWORD *)(v22 + 16);
        v23 = *(_QWORD *)(v22 + 24);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v33.fields.currentCryptoKey = v24;
        *(_QWORD *)&v33.fields.fakeValue = v23;
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v33, 0LL);
        if ( !v18 )
          sub_B7769C(v25, (unsigned int)v25);
        System_Collections_Generic_List_int___Add(
          v18,
          v25,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v31,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.baseWindow;
    if ( !this )
      goto LABEL_40;
    this = (BonusSelectSummonConfirmDialog_o *)UnityEngine_GameObject__get_gameObject(
                                                 (UnityEngine_GameObject_o *)this,
                                                 0LL);
    if ( !this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.maskSprite;
    if ( !this )
      goto LABEL_40;
    this = (BonusSelectSummonConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL);
    if ( !this )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    if ( !v18 )
      goto LABEL_40;
    servantSelectMenu = v6->fields.servantSelectMenu;
    v27 = System_Collections_Generic_List_int___ToArray(
            v18,
            (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
    v28 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v28, (Il2CppObject *)v6, Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__, 0LL);
    if ( !servantSelectMenu )
      goto LABEL_40;
    BonusSelectSummonPartyServantSelectMenu__Open(servantSelectMenu, memberItem, v27, v28, v29);
  }
}


void __fastcall BonusSelectSummonConfirmDialog__OnClickCancel(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  BonusSelectSummonConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_438AE1F & 1) == 0 )
  {
    sub_B775C4(&Method_BonusSelectSummonConfirmDialog_OnClickCancel__);
    byte_438AE1F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_BonusSelectSummonConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_BonusSelectSummonConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(clickFunc, 0, 0LL);
    BonusSelectSummonConfirmDialog__Close_24821208(this, 0LL, v5);
  }
}


void __fastcall BonusSelectSummonConfirmDialog__OnClickDecide(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  _BOOL4 isButtonEnable; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2
  BonusSelectSummonConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_438AE1E & 1) == 0 )
  {
    sub_B775C4(&Method_BonusSelectSummonConfirmDialog_OnClickDecide__);
    byte_438AE1E = 1;
  }
  isButtonEnable = this->fields.isButtonEnable;
  v4 = Method_BonusSelectSummonConfirmDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B775CC(Method_BonusSelectSummonConfirmDialog_OnClickDecide__);
  v5 = (System_Reflection_MethodBase_o *)sub_B775A8(v4, v4[3]);
  if ( isButtonEnable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
    BonusSelectSummonConfirmDialog__Close_24821208(this, 0LL, v6);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0LL);
  }
}


void __fastcall BonusSelectSummonConfirmDialog__Open(
        BonusSelectSummonConfirmDialog_o *this,
        int32_t gachaId,
        BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn,
        BonusSelectSummonConfirmDialog_ClickDelegate_o *func,
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *tryGetBonusSelectData,
        System_Action_o *endOpenCallback,
        const MethodInfo *method)
{
  __int64 v13; // x20
  System_String_o *v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  UILabel_o *buttonDecideLabel; // x21
  UILabel_o *buttonCancelLabel; // x21
  System_Action_o *v50; // x19

  if ( (byte_438AE14 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__);
    sub_B775C4(&BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo);
    sub_B775C4(&StringLiteral_12652/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/);
    sub_B775C4(&StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_12654/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/);
    byte_438AE14 = 1;
  }
  v13 = sub_B77694(BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo);
  BonusSelectSummonConfirmDialog___c__DisplayClass21_0___ctor(
    (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_15;
  *(_QWORD *)(v13 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = endOpenCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)(v13 + 24),
    (System_Int32_array **)endOpenCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.clickFunc = func;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.enableBtn = enableBtn;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.enableBtn,
    (System_Int32_array **)enableBtn,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.tryGetBonusSelectData = tryGetBonusSelectData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.tryGetBonusSelectData,
    (System_Int32_array **)tryGetBonusSelectData,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.gachaId = gachaId;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12654/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, v14, 0LL);
  messageLabel = this->fields.messageLabel;
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12652/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, v14, 0LL),
        buttonDecideLabel = this->fields.buttonDecideLabel,
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3388/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
        !buttonDecideLabel)
    || (UILabel__set_text(buttonDecideLabel, v14, 0LL),
        buttonCancelLabel = this->fields.buttonCancelLabel,
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !buttonCancelLabel) )
  {
LABEL_15:
    sub_B7769C(v14, v15);
  }
  UILabel__set_text(buttonCancelLabel, v14, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v50 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v13,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v50, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SaveSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  const MethodInfo *v4; // x1
  SelectBonusData_o *SelectBonusData; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v13; // x19
  SummonControl_c *v14; // x0
  Il2CppObject *String_36337972; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x22
  int size; // w8
  int32_t v20; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x2
  WarBoardUiData_SaveData_array *v23; // x19
  System_String_o *Empty; // x19
  SummonControl_c *v25; // x0

  if ( (byte_438AE1C & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_SelectBonusData___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_SelectBonusData___);
    sub_B775C4(&Method_System_Func_SelectBonusData__bool___ctor__);
    sub_B775C4(&System_Func_SelectBonusData__bool__TypeInfo);
    sub_B775C4(&Method_JsonManager_DeserializeArray_SelectBonusData___);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectBonusData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectBonusData__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_SelectBonusData__set_Item__);
    sub_B775C4(&System_Collections_Generic_List_SelectBonusData__TypeInfo);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&SummonControl_TypeInfo);
    sub_B775C4(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__);
    sub_B775C4(&BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo);
    byte_438AE1C = 1;
  }
  v3 = sub_B77694(BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo);
  BonusSelectSummonConfirmDialog___c__DisplayClass31_0___ctor(
    (BonusSelectSummonConfirmDialog___c__DisplayClass31_0_o *)v3,
    0LL);
  SelectBonusData = BonusSelectSummonConfirmDialog__GetSelectBonusData(this, v4);
  if ( !v3 )
    goto LABEL_36;
  *(_QWORD *)(v3 + 16) = SelectBonusData;
  v13 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v3 + 16);
  sub_B77560(
    (BattleServantConfConponent_o *)(v3 + 16),
    (System_Int32_array **)SelectBonusData,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v14 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v14 = SummonControl_TypeInfo;
  }
  String_36337972 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_36337972(
                                      v14->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_SelectBonusData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_36337972, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                 String_36337972,
                                                                 (const MethodInfo_1DF16CC *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                                    v17,
                                                                                                    (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_SelectBonusData___);
  }
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_SelectBonusData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v3,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_SelectBonusData__bool___ctor__);
  SelectBonusData = (SelectBonusData_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                           (System_Collections_Generic_List_T__o *)v16,
                                           (System_Func_T__bool__o *)v18,
                                           (const MethodInfo_1C66144 *)Method_BasicHelper_Any_SelectBonusData___);
  if ( ((unsigned __int8)SelectBonusData & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_36;
    size = v16->fields._size;
    if ( size >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        if ( size <= (unsigned int)v20 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v21 = v16->fields._items->m_Items[v20];
        if ( !v21 )
          break;
        v22 = *v13;
        if ( !*v13 )
          break;
        if ( v21->fields.missionTargetId == v22->fields.missionTargetId )
          System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v16,
            v20,
            (WarBoardManager_TaskList_o *)v22,
            (const MethodInfo_3052FF0 *)Method_System_Collections_Generic_List_SelectBonusData__set_Item__);
        size = v16->fields._size;
        if ( ++v20 >= size )
          goto LABEL_26;
      }
LABEL_36:
      sub_B7769C(SelectBonusData, v6);
    }
  }
  else
  {
    if ( !v16 )
      goto LABEL_36;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v16,
      *v13,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SelectBonusData__Add__);
  }
LABEL_26:
  if ( v16->fields._size <= 0 )
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  else
  {
    v23 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
            (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Empty = JsonManager__toJson(&v23->obj, 0, 0, 0LL);
  }
  v25 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v25 = SummonControl_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v25->static_fields->BONUS_SELECTSUMMON_SAVEKEY, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SetBackBtn(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_438AE20 & 1) == 0 )
  {
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&StringLiteral_15768/*"Window/CancelButton"*/);
    byte_438AE20 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_23834620(transform, (System_String_o *)StringLiteral_15768/*"Window/CancelButton"*/, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SetLoadSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *tryGetBonusSelectData; // x0
  struct SelectBonus_array *selectBonusDatas; // x20
  __int64 v5; // x8
  int v6; // w25
  unsigned __int64 v7; // x21
  SelectBonus_o *v8; // x28
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  BonusSelectSummonPartyOrganizationListViewItem_o *monitor; // x8
  struct GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x9
  int32_t slot; // w2
  int v15; // w8
  __int64 v16; // x0
  _BYTE v17[28]; // [xsp+0h] [xbp-90h] BYREF
  int v18; // [xsp+1Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-70h] BYREF
  SelectBonusData_o *data; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_438AE1B & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    byte_438AE1B = 1;
  }
  data = 0LL;
  memset(&v19, 0, sizeof(v19));
  v18 = 0;
  tryGetBonusSelectData = this->fields.tryGetBonusSelectData;
  if ( !tryGetBonusSelectData )
    goto LABEL_31;
  tryGetBonusSelectData = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)BonusSelectSummonConfirmDialog_TryGetBonusSelectData__Invoke(
                                                                                      tryGetBonusSelectData,
                                                                                      &data,
                                                                                      this->fields.gachaId,
                                                                                      0LL);
  if ( ((unsigned __int8)tryGetBonusSelectData & 1) != 0 )
  {
    if ( !data )
      goto LABEL_31;
    selectBonusDatas = data->fields.selectBonusDatas;
    if ( selectBonusDatas )
    {
      v5 = *(_QWORD *)&selectBonusDatas->max_length;
      if ( (int)v5 >= 1 )
      {
        v6 = 0;
        v7 = 0LL;
        while ( 1 )
        {
          if ( v7 >= (unsigned int)v5 )
          {
            v16 = sub_B776C8(tryGetBonusSelectData);
            sub_B77668(v16, 0LL);
          }
          tryGetBonusSelectData = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)this->fields.itemList;
          if ( !tryGetBonusSelectData )
            break;
          v8 = selectBonusDatas->m_Items[v7];
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v17,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)tryGetBonusSelectData,
            (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
          v19 = *(System_Collections_Generic_List_Enumerator_T__o *)v17;
          while ( 1 )
          {
            v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v19,
                   (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
            if ( !v9 )
              break;
            if ( !v19.fields.current )
              sub_B7769C(v9, v10);
            monitor = (BonusSelectSummonPartyOrganizationListViewItem_o *)v19.fields.current[7].monitor;
            if ( !monitor )
              sub_B7769C(v9, v10);
            gachaBonusSelectEntity = monitor->fields.gachaBonusSelectEntity;
            if ( gachaBonusSelectEntity )
            {
              if ( !v8 )
                sub_B7769C(v9, v10);
              slot = gachaBonusSelectEntity->fields.slot;
              if ( slot == v8->fields.slot )
              {
                if ( !data )
                  sub_B7769C(v9, v10);
                BonusSelectSummonPartyOrganizationListViewItem__Modify_24827400(
                  monitor,
                  data->fields.gachaId,
                  slot,
                  v8->fields.giftId,
                  v11);
              }
            }
          }
          *(_DWORD *)&v17[4 * v6 + 24] = 168;
          v6 = ++v18;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v19,
            (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
          if ( v6 )
          {
            v15 = v6 - 1;
            if ( *(_DWORD *)&v17[4 * v6 + 20] == 168 )
            {
              --v6;
              v18 = v15;
            }
          }
          LODWORD(v5) = selectBonusDatas->max_length;
          if ( (__int64)++v7 >= (int)v5 )
            goto LABEL_29;
        }
LABEL_31:
        sub_B7769C(tryGetBonusSelectData, method);
      }
LABEL_29:
      BonusSelectSummonConfirmDialog__Modify(this, method);
    }
  }
}


void __fastcall BonusSelectSummonConfirmDialog___Close_b__24_0(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438AE22 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438AE22 = 1;
  }
  BonusSelectSummonConfirmDialog__EndClose(this, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
  CommonUI__SetFadeMaskCollider(Instance, 0, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___OnClick_b__27_0(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn; // x0
  const MethodInfo *v5; // x1

  BonusSelectSummonConfirmDialog__Modify(this, method);
  enableBtn = this->fields.enableBtn;
  if ( !enableBtn
    || (BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(enableBtn, 1, 0LL),
        BonusSelectSummonConfirmDialog__SetBackBtn(this, v5),
        (enableBtn = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)this->fields.baseWindow) == 0LL)
    || (enableBtn = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)UnityEngine_GameObject__get_gameObject(
                                                                        (UnityEngine_GameObject_o *)enableBtn,
                                                                        0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)enableBtn, 1, 0LL),
        (enableBtn = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)this->fields.maskSprite) == 0LL)
    || (enableBtn = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)enableBtn,
                                                                        0LL)) == 0LL )
  {
    sub_B7769C(enableBtn, v3);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)enableBtn, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall BonusSelectSummonConfirmDialog_ClickDelegate__BeginInvoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  if ( (byte_438852E & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438852E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_ClickDelegate__EndInvoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  BonusSelectSummonConfirmDialog_ClickDelegate_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (BonusSelectSummonConfirmDialog_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isDecide);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isDecide, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, isDecide, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isDecide, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isDecide,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isDecide, v20);
    goto LABEL_37;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent___ctor(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__BeginInvoke(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *memberItem,
        bool isLongTap,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  char v12[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v12[0] = isLongTap;
  if ( (byte_438852F & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438852F = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)memberItem;
  v11[1] = j_il2cpp_value_box_0(bool_TypeInfo, v12, isLongTap);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__EndInvoke(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


void __fastcall BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__Invoke(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *memberItem,
        bool isLongTap,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o **v9; // x26
  __int64 i; // x27
  unsigned int v11; // w23
  __int64 class_0; // x0
  BonusSelectSummonPartyOrganizationListViewItem_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w24
  __int64 v19; // x0
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD); // x0
  BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *v29; // x8
  __int64 v30; // x22
  __int64 *v31; // x23
  void (__fastcall *v32)(BonusSelectSummonPartyOrganizationListViewItem_o *, bool, __int64); // x24
  char v33; // w0
  int v34; // w8
  char v35; // w24
  char v36; // w0
  __int64 v37; // x8
  __int64 v38; // x1
  __int64 v39; // x2
  unsigned __int64 v40; // x10
  _DWORD *v41; // x11
  char v42; // w23
  char v43; // w0
  BonusSelectSummonPartyOrganizationListViewItem_c *klass; // x8
  __int64 v45; // x1
  __int64 v46; // x2
  unsigned __int64 v47; // x10
  int32_t *p_offset; // x11
  BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *v49; // [xsp+8h] [xbp-48h] BYREF

  v49 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v49;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v8; ++i )
    {
      v29 = v9[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(BonusSelectSummonPartyOrganizationListViewItem_o *, bool, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v29->fields.extra_arg, memberItem);
      v33 = sub_B775F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 2 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 2 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v42 = sub_B775EC(v30);
            v43 = sub_B779F0(v30);
            if ( (v42 & 1) != 0 )
            {
              if ( (v43 & 1) != 0 )
              {
                klass = memberItem->klass;
                v45 = *(_QWORD *)(v30 + 24);
                v46 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&memberItem->klass->_2.bitflags1 )
                {
                  v47 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v45 )
                  {
                    ++v47;
                    p_offset += 4;
                    if ( v47 >= *(unsigned __int16 *)&memberItem->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v46);
                }
                else
                {
LABEL_57:
                  v25 = sub_B0F4C0(memberItem, v45, v46);
                }
                v17 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&memberItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))sub_B77674(v17, v30);
              (*v26)(memberItem, isLongTap, v26);
            }
            else
            {
              v11 = *(unsigned __int16 *)(v30 + 72);
              if ( (v43 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
                v13 = memberItem->klass;
                if ( *(_WORD *)&memberItem->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&memberItem->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v11));
                }
                else
                {
LABEL_11:
                  v16 = sub_B0F4C0(memberItem, class_0, v11);
                }
                (*(void (__fastcall **)(BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))v16)(
                  memberItem,
                  isLongTap,
                  *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))&memberItem->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  memberItem,
                  isLongTap,
                  *((_QWORD *)&memberItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(memberItem, isLongTap, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B775EC(v30);
          v36 = sub_B779F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v37 = *v31;
              v38 = *(_QWORD *)(v30 + 24);
              v39 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v40 = 0LL;
                v41 = (_DWORD *)(*(_QWORD *)(v37 + 176) + 8LL);
                while ( *((_QWORD *)v41 - 1) != v38 )
                {
                  ++v40;
                  v41 += 4;
                  if ( v40 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v37 + 16LL * (*v41 + (int)v39) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_B0F4C0(v31, v38, v39);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))sub_B77674(v24, v30);
            (*v28)(v31, memberItem, isLongTap, v28);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v19 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v18) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_B0F4C0(v31, v19, v18);
              }
              (*(void (__fastcall **)(__int64 *, BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))v23)(
                v31,
                memberItem,
                isLongTap,
                *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 312))(
                v31,
                memberItem,
                isLongTap,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, BonusSelectSummonPartyOrganizationListViewItem_o *, bool, __int64))v32)(
        v31,
        memberItem,
        isLongTap,
        v30);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonConfirmDialog_TryGetBonusSelectData___ctor(
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall BonusSelectSummonConfirmDialog_TryGetBonusSelectData__BeginInvoke(
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        int32_t gachaId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v12 = gachaId;
  if ( (byte_4388530 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    byte_4388530 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)*data;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12, *(_QWORD *)&gachaId);
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


bool __fastcall BonusSelectSummonConfirmDialog_TryGetBonusSelectData__EndInvoke(
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  SelectBonusData_o **v7; // [xsp+8h] [xbp-8h] BYREF

  v7 = data;
  v4 = sub_B7756C(result, &v7, result);
  if ( !v4 )
    sub_B7769C(0LL, v5);
  return *(_BYTE *)j_il2cpp_object_unbox_0(v4);
}


bool __fastcall BonusSelectSummonConfirmDialog_TryGetBonusSelectData__Invoke(
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o **v9; // x26
  __int64 v10; // x27
  unsigned int v11; // w24
  __int64 class_0; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  char v18; // w0
  __int64 v19; // x0
  __int64 (__fastcall **v20)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD); // x0
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  __int64 (__fastcall *v24)(SelectBonusData_o **, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v33;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v21 = v9[v10];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(__int64 (__fastcall **)(SelectBonusData_o **, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v21->fields.extra_arg, data);
      if ( (sub_B775F4(v23) & 1) != 0 )
      {
        if ( *(_BYTE *)(v23 + 74) == 2 )
          goto LABEL_37;
      }
      else
      {
        if ( !v22 )
        {
LABEL_37:
          v18 = v24(data, (unsigned int)gachaId, v23);
          goto LABEL_38;
        }
        if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
        {
          v25 = sub_B775EC(v23);
          v26 = sub_B779F0(v23);
          if ( (v25 & 1) != 0 )
          {
            if ( (v26 & 1) != 0 )
            {
              v27 = *v22;
              v28 = *(_QWORD *)(v23 + 24);
              v29 = *(unsigned __int16 *)(v23 + 72);
              if ( *(_WORD *)(*v22 + 298) )
              {
                v30 = 0LL;
                v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
                while ( *((_QWORD *)v31 - 1) != v28 )
                {
                  ++v30;
                  v31 += 4;
                  if ( v30 >= *(unsigned __int16 *)(*v22 + 298) )
                    goto LABEL_35;
                }
                v19 = v27 + 16LL * (*v31 + (int)v29) + 312;
              }
              else
              {
LABEL_35:
                v19 = sub_B0F4C0(v22, v28, v29);
              }
              v17 = *(_QWORD *)(v19 + 8);
            }
            else
            {
              v17 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
            }
            v20 = (__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))sub_B77674(v17, v23);
            v18 = (*v20)(v22, data, (unsigned int)gachaId, v20);
          }
          else
          {
            v11 = *(unsigned __int16 *)(v23 + 72);
            if ( (v26 & 1) != 0 )
            {
              class_0 = j_il2cpp_method_get_class_0(v23);
              v13 = *v22;
              if ( *(_WORD *)(*v22 + 298) )
              {
                v14 = 0LL;
                v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
                while ( *((_QWORD *)v15 - 1) != class_0 )
                {
                  ++v14;
                  v15 += 4;
                  if ( v14 >= *(unsigned __int16 *)(*v22 + 298) )
                    goto LABEL_11;
                }
                v16 = v13 + 16LL * (int)(*v15 + v11) + 312;
              }
              else
              {
LABEL_11:
                v16 = sub_B0F4C0(v22, class_0, v11);
              }
              v18 = (*(__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))v16)(
                      v22,
                      data,
                      (unsigned int)gachaId,
                      *(_QWORD *)(v16 + 8));
            }
            else
            {
              v18 = (*(__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))(*v22
                                                                                               + 16LL
                                                                                               * *(unsigned __int16 *)(v23 + 72)
                                                                                               + 312))(
                      v22,
                      data,
                      (unsigned int)gachaId,
                      *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
            }
          }
          goto LABEL_38;
        }
      }
      v18 = ((__int64 (__fastcall *)(__int64 *, SelectBonusData_o **, _QWORD, __int64))v24)(
              v22,
              data,
              (unsigned int)gachaId,
              v23);
LABEL_38:
      if ( ++v10 == v8 )
        return v18 & 1;
    }
  }
  v18 = 0;
  return v18 & 1;
}


void __fastcall BonusSelectSummonConfirmDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x0

  if ( (byte_438852C & 1) == 0 )
  {
    sub_B775C4(&BonusSelectSummonConfirmDialog___c_TypeInfo);
    byte_438852C = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BonusSelectSummonConfirmDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BonusSelectSummonConfirmDialog___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall BonusSelectSummonConfirmDialog___c___ctor(
        BonusSelectSummonConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BonusSelectSummonConfirmDialog___c___Modify_b__29_0(
        BonusSelectSummonConfirmDialog___c_o *this,
        BonusSelectSummonPartyOrganizationListViewObject_o *itemObj,
        const MethodInfo *method)
{
  struct BonusSelectSummonPartyOrganizationListViewItem_o *listViewItem; // x8

  if ( !itemObj || (listViewItem = itemObj->fields.listViewItem) == 0LL )
    sub_B7769C(this, itemObj);
  return listViewItem->fields.servantEntity == 0LL;
}


bool __fastcall BonusSelectSummonConfirmDialog___c___Open_b__21_1(
        BonusSelectSummonConfirmDialog___c_o *this,
        BonusSelectSummonPartyOrganizationListViewObject_o *itemObj,
        const MethodInfo *method)
{
  struct BonusSelectSummonPartyOrganizationListViewItem_o *listViewItem; // x8

  if ( !itemObj || (listViewItem = itemObj->fields.listViewItem) == 0LL )
    sub_B7769C(this, itemObj);
  return listViewItem->fields.servantEntity == 0LL;
}


void __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass21_0___ctor(
        BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass21_0___Open_b__0(
        BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *v2; // x19
  struct BonusSelectSummonConfirmDialog_o *_4__this; // x8
  UISprite_o *messageBg; // x20
  struct BonusSelectSummonConfirmDialog_o *v5; // x8
  struct BonusSelectSummonConfirmDialog_o *v6; // x8
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *itemList; // x21
  BonusSelectSummonConfirmDialog___c_c *v9; // x0
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__21_1; // x22
  Il2CppObject *v12; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *v13; // x0
  System_Action_o *_9__2; // x21
  BaseDialog_o *v15; // x20

  v2 = this;
  if ( (byte_438852D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
    sub_B775C4(&Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__);
    sub_B775C4(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    sub_B775C4(&Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__);
    sub_B775C4(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__);
    sub_B775C4(&BonusSelectSummonConfirmDialog___c_TypeInfo);
    this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)sub_B775C4(&StringLiteral_17035/*"bg_white"*/);
    byte_438852D = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  messageBg = _4__this->fields.messageBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(messageBg, (System_String_o *)StringLiteral_17035/*"bg_white"*/, 0LL);
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  BonusSelectSummonConfirmDialog__CreateList((BonusSelectSummonConfirmDialog_o *)this, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5 )
    goto LABEL_25;
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v5->fields.rootObj;
  if ( !this )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  BonusSelectSummonConfirmDialog__SetLoadSelectBonusData((BonusSelectSummonConfirmDialog_o *)this, 0LL);
  v6 = v2->fields.__4__this;
  if ( !v6 )
    goto LABEL_25;
  buttonDecide = v6->fields.buttonDecide;
  itemList = (System_Collections_Generic_List_T__o *)v6->fields.itemList;
  v9 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  if ( (BYTE3(BonusSelectSummonConfirmDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo);
    v9 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__21_1,
      v12,
      Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__,
      (const MethodInfo_29E92C4 *)Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__);
    v13 = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    v13->__9__21_1 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__21_1;
    sub_B77560(&v13->__9__21_1);
  }
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                                     itemList,
                                                                     (System_Func_T__bool__o *)_9__21_1,
                                                                     (const MethodInfo_1C66144 *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
    goto LABEL_25;
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
                                                                     buttonDecide,
                                                                     ((unsigned __int8)this & 1) == 0,
                                                                     buttonDecide->klass->vtable._6_OnInit.methodPtr);
  _9__2 = v2->fields.__9__2;
  v15 = (BaseDialog_o *)v2->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_B77560(&v2->fields.__9__2);
  }
  if ( !v15 )
LABEL_25:
    sub_B7769C(this, method);
  BaseDialog__Open(v15, _9__2, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass21_0___Open_b__2(
        BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, method);
  BonusSelectSummonConfirmDialog__EndOpen(_4__this, 0LL);
  ActionExtensions__Call(this->fields.endOpenCallback, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass31_0___ctor(
        BonusSelectSummonConfirmDialog___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass31_0___SaveSelectBonusData_b__0(
        BonusSelectSummonConfirmDialog___c__DisplayClass31_0_o *this,
        SelectBonusData_o *x,
        const MethodInfo *method)
{
  struct SelectBonusData_o *data; // x8

  if ( !x || (data = this->fields.data) == 0LL )
    sub_B7769C(this, x);
  return x->fields.gachaId == data->fields.gachaId;
}