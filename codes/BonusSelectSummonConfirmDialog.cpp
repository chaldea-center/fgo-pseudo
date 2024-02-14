void __fastcall BonusSelectSummonConfirmDialog___ctor(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4214BE5 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4214BE5 = 1;
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

  BonusSelectSummonConfirmDialog__Close_25087324(this, 0LL, v2);
}


void __fastcall BonusSelectSummonConfirmDialog__Close_25087324(
        BonusSelectSummonConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  CommonUI_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x20

  if ( (byte_4214BD9 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&AtlasManager_TypeInfo, v10);
    sub_B0D8A4(&Method_BonusSelectSummonConfirmDialog__Close_b__24_0__, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4214BD9 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__SetFadeMaskCollider(Instance, 1, 0LL);
  v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_BonusSelectSummonConfirmDialog__Close_b__24_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v16, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__CreateList(
        BonusSelectSummonConfirmDialog_o *this,
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
  GachaBonusSelectMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  GachaBonusSelectEntity_array *v14; // x23
  signed int max_length; // w8
  unsigned int v16; // w24
  GachaBonusSelectEntity_o *v17; // x21
  int32_t slot; // w22
  BonusSelectSummonPartyOrganizationListViewItem_o *v19; // x20
  const MethodInfo *v20; // x4
  struct UnityEngine_GameObject_o *prefab; // x21
  UnityEngine_Transform_o *transform; // x22
  BonusSelectSummonPartyOrganizationListViewObject_o *Component_srcLineSprite; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *v26; // x22
  const MethodInfo *v27; // x3
  __int64 v28; // x0
  GachaBonusSelectEntity_array *entityArray; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4214BDB & 1) == 0 )
  {
    sub_B0D8A4(&Method_BonusSelectSummonConfirmDialog_OnClick__, method);
    sub_B0D8A4(&BonusSelectSummonPartyOrganizationListViewItem_TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_GachaBonusSelectMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo, v10);
    byte_4214BDB = 1;
  }
  entityArray = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GachaBonusSelectMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  Master_WarQuestSelectionMaster = (GachaBonusSelectMaster_o *)GachaBonusSelectMaster__TryGetEntityArray(
                                                                 Master_WarQuestSelectionMaster,
                                                                 &entityArray,
                                                                 this->fields.gachaId,
                                                                 0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    v14 = entityArray;
    if ( !entityArray )
      goto LABEL_22;
    max_length = entityArray->max_length;
    if ( max_length >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= max_length )
        {
          v28 = sub_B0D9A8(Master_WarQuestSelectionMaster);
          sub_B0D948(v28, 0LL);
        }
        v17 = v14->m_Items[v16];
        if ( !v17 )
          break;
        slot = v17->fields.slot;
        v19 = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B0D974(
                                                                    BonusSelectSummonPartyOrganizationListViewItem_TypeInfo,
                                                                    v12,
                                                                    v13);
        BonusSelectSummonPartyOrganizationListViewItem___ctor(v19, slot, 0LL, v17, v20);
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
                                                                       (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
        if ( !Master_WarQuestSelectionMaster )
          break;
        Component_srcLineSprite = (BonusSelectSummonPartyOrganizationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                          (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___);
        v26 = (BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *)sub_B0D974(
                                                                          BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo,
                                                                          v24,
                                                                          v25);
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent___ctor(
          v26,
          (Il2CppObject *)this,
          (intptr_t)Method_BonusSelectSummonConfirmDialog_OnClick__,
          0LL);
        if ( !Component_srcLineSprite )
          break;
        BonusSelectSummonPartyOrganizationListViewObject__Init(Component_srcLineSprite, v19, v26, v27);
        Master_WarQuestSelectionMaster = (GachaBonusSelectMaster_o *)this->fields.itemList;
        if ( !Master_WarQuestSelectionMaster )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__);
        max_length = v14->max_length;
        if ( (int)++v16 >= max_length )
          return;
      }
LABEL_22:
      sub_B0D97C(Master_WarQuestSelectionMaster);
    }
  }
}


void __fastcall BonusSelectSummonConfirmDialog__EndClose(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v16; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4214BDA & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_4214BDA = 1;
  }
  memset(&v18, 0, sizeof(v18));
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v18.fields.current )
      sub_B0D97C(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v18.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v16 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B0D840(p_closeCallbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
    System_Action__Invoke(v16, 0LL);
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

  if ( (byte_4214BDD & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4214BDD = 1;
  }
  enableBtn = this->fields.enableBtn;
  if ( !enableBtn
    || (BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(enableBtn, 1, 0LL),
        BonusSelectSummonConfirmDialog__SetBackBtn(this, v5),
        (enableBtn = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(enableBtn);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)enableBtn, 0LL, 0LL);
}


SelectBonusData_o *__fastcall BonusSelectSummonConfirmDialog__GetSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x20
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  __int64 v15; // x26
  __int64 v16; // x27
  _BOOL8 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  _QWORD *monitor; // x8
  __int64 v21; // x9
  int32_t v22; // w21
  int32_t v23; // w22
  __int64 v24; // x8
  int32_t v25; // w24
  int32_t v26; // w23
  SelectBonus_o *v27; // x25
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x21
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  BonusSelectSummonConfirmDialog_o *v40; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4214BE1 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SelectBonus__Add__, v6);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SelectBonus__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SelectBonus___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_SelectBonus__TypeInfo, v10);
    sub_B0D8A4(&SelectBonusData_TypeInfo, v11);
    sub_B0D8A4(&SelectBonus_TypeInfo, v12);
    byte_4214BE1 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SelectBonus__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SelectBonus___ctor__);
  itemList = this->fields.itemList;
  v40 = this;
  if ( !itemList )
    goto LABEL_30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  v42 = v41;
  v15 = 0LL;
  v16 = 0LL;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    if ( !v17 )
      break;
    if ( !v42.fields.current )
      sub_B0D97C(v17);
    monitor = v42.fields.current[7].monitor;
    if ( !monitor )
      sub_B0D97C(v17);
    v21 = monitor[16];
    if ( v21 )
      v16 = monitor[16];
    if ( v21 )
    {
      if ( !v16 )
        sub_B0D97C(v17);
      v22 = *(_DWORD *)(v16 + 20);
      v23 = *(_DWORD *)(v21 + 24);
    }
    else
    {
      v22 = -1;
      v23 = -1;
    }
    v24 = monitor[17];
    if ( v24 )
      v15 = v24;
    if ( v24 )
    {
      if ( !v15 )
        sub_B0D97C(v17);
      v25 = *(_DWORD *)(v15 + 20);
      v26 = *(_DWORD *)(v24 + 24);
    }
    else
    {
      v26 = -1;
      v25 = -1;
    }
    v27 = (SelectBonus_o *)sub_B0D974(SelectBonus_TypeInfo, v18, v19);
    SelectBonus___ctor(v27, v22, v23, v25, v26, 0LL);
    if ( !v13 )
      sub_B0D97C(v28);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v13,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SelectBonus__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  v31 = sub_B0D974(SelectBonusData_TypeInfo, v29, v30);
  SelectBonusData___ctor((SelectBonusData_o *)v31, 0LL);
  if ( !v31 || (*(_DWORD *)(v31 + 16) = v40->fields.gachaId, !v13) )
LABEL_30:
    sub_B0D97C(itemList);
  v32 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_SelectBonus__ToArray__);
  *(_QWORD *)(v31 + 24) = v32;
  sub_B0D840((BattleServantConfConponent_o *)(v31 + 24), v32, v33, v34, v35, v36, v37, v38);
  return (SelectBonusData_o *)v31;
}


void __fastcall BonusSelectSummonConfirmDialog__Init(
        BonusSelectSummonConfirmDialog_o *this,
        BonusSelectSummonAssetManager_o *assetManager,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *prefab; // x22
  UnityEngine_GameObject_o *titleLabel; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UnityEngine_GameObject_o *OrganizationListViewItemPrefab_k__BackingField; // x1
  struct BonusSelectSummonPartyServantSelectMenu_o **p_servantSelectMenu; // x21
  UnityEngine_Object_o *servantSelectMenu; // x22
  const MethodInfo *v21; // x1
  struct UnityEngine_GameObject_o *ServantSelectMenuPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x22
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_4214BD7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___, assetManager);
    sub_B0D8A4(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo, v6);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    byte_4214BD7 = 1;
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
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.prefab,
      (System_Int32_array **)OrganizationListViewItemPrefab_k__BackingField,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
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
                                               (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
    if ( !titleLabel )
LABEL_28:
      sub_B0D97C(titleLabel);
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       titleLabel,
                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___);
    *p_servantSelectMenu = (struct BonusSelectSummonPartyServantSelectMenu_o *)Component_srcLineSprite;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.servantSelectMenu,
      Component_srcLineSprite,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  titleLabel = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_28;
  BonusSelectSummonPartyServantSelectMenu__Init((BonusSelectSummonPartyServantSelectMenu_o *)titleLabel, v21);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)v33;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  const MethodInfo *v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *v16; // x21
  BonusSelectSummonConfirmDialog___c_c *v17; // x0
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__29_0; // x22
  Il2CppObject *v20; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4214BDE & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___, method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v5);
    sub_B0D8A4(&Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo, v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v8);
    sub_B0D8A4(&Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__, v9);
    sub_B0D8A4(&BonusSelectSummonConfirmDialog___c_TypeInfo, v10);
    byte_4214BDE = 1;
  }
  memset(&v29, 0, sizeof(v29));
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v29,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v29.fields.current )
      sub_B0D97C(0LL);
    BonusSelectSummonPartyOrganizationListViewObject__Modfy(
      (BonusSelectSummonPartyOrganizationListViewObject_o *)v29.fields.current,
      v12);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  buttonDecide = this->fields.buttonDecide;
  v16 = (System_Collections_Generic_List_T__o *)this->fields.itemList;
  v17 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  if ( (BYTE3(BonusSelectSummonConfirmDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo);
    v17 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__29_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__29_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo,
                                                                                    v13,
                                                                                    v14);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__29_0,
      v20,
      Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__);
    v21 = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    v21->__9__29_0 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__29_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__29_0,
      (System_Int32_array **)_9__29_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(v16, (System_Func_T__bool__o *)_9__29_0, (const MethodInfo_1707138 *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
LABEL_19:
    sub_B0D97C(itemList);
  ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
    buttonDecide,
    ((unsigned __int8)itemList & 1) == 0,
    buttonDecide->klass->vtable._6_OnInit.methodPtr);
  BonusSelectSummonConfirmDialog__SaveSelectBonusData(this, v28);
}


void __fastcall BonusSelectSummonConfirmDialog__OnClick(
        BonusSelectSummonConfirmDialog_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *memberItem,
        bool isLongTap,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_o *v6; // x19
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
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  struct ServantEntity_o *servantEntity; // x8
  CommonUI_o *v25; // x20
  __int64 v26; // x21
  __int64 v27; // x22
  int32_t v28; // w22
  __int64 v29; // x1
  __int64 v30; // x2
  ServantLeaderInfo_o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  ServantStatusDialog_EndDelegate_o *v34; // x22
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_int__o *v39; // x21
  _BOOL8 v40; // x0
  _QWORD *monitor; // x8
  __int64 v42; // x8
  __int64 v43; // x22
  __int64 v44; // x23
  __int64 v45; // x0
  BonusSelectSummonPartyServantSelectMenu_o *servantSelectMenu; // x22
  System_Int32_array *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  System_Action_o *v50; // x23
  const MethodInfo *v51; // x4
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v53; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16

  v6 = this;
  if ( (byte_4214BDC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, memberItem);
    sub_B0D8A4(&Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__, v7);
    sub_B0D8A4(&Method_BonusSelectSummonConfirmDialog_OnClick__, v8);
    sub_B0D8A4(&Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__, v9);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      v11);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B0D8A4(&ServantLeaderInfo_TypeInfo, v20);
    this = (BonusSelectSummonConfirmDialog_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    byte_4214BDC = 1;
  }
  memset(&v53, 0, sizeof(v53));
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
        v22 = Method_BonusSelectSummonConfirmDialog_OnClick__;
        if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClick__ + 75) & 2) != 0 )
          v22 = (_QWORD *)sub_B0D8AC(Method_BonusSelectSummonConfirmDialog_OnClick__);
        v23 = (System_Reflection_MethodBase_o *)sub_B0D888(v22, v22[3]);
        OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
        this = (BonusSelectSummonConfirmDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantEntity = memberItem->fields.servantEntity;
        if ( servantEntity )
        {
          v25 = (CommonUI_o *)this;
          v27 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
          v26 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v54.fields.currentCryptoKey = v27;
          *(_QWORD *)&v54.fields.fakeValue = v26;
          v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v54, 0LL);
          v31 = (ServantLeaderInfo_o *)sub_B0D974(ServantLeaderInfo_TypeInfo, v29, v30);
          ServantLeaderInfo___ctor_28142536(v31, v28, 0, 1, 0LL);
          v34 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v32, v33);
          ServantStatusDialog_EndDelegate___ctor(
            v34,
            (Il2CppObject *)v6,
            Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__,
            0LL);
          if ( v25 )
          {
            CommonUI__OpenServantStatusDialog_17029768(v25, 7, v31, v34, 0LL);
            return;
          }
        }
      }
LABEL_40:
      sub_B0D97C(this);
    }
  }
  else
  {
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.enableBtn;
    if ( !this )
      goto LABEL_40;
    BonusSelectSummonConfirmDialog_ClickDelegate__Invoke((BonusSelectSummonConfirmDialog_ClickDelegate_o *)this, 0, 0LL);
    v35 = Method_BonusSelectSummonConfirmDialog_OnClick__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClick__ + 75) & 2) != 0 )
      v35 = (_QWORD *)sub_B0D8AC(Method_BonusSelectSummonConfirmDialog_OnClick__);
    v36 = (System_Reflection_MethodBase_o *)sub_B0D888(v35, v35[3]);
    OverwriteAssetSoundName__PlaySystemSe(v36, 0, 0LL);
    v39 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v37, v38);
    System_Collections_Generic_List_int____ctor(
      v39,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.itemList;
    if ( !this )
      goto LABEL_40;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v52,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    v53 = v52;
    while ( 1 )
    {
      v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v53,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
      if ( !v40 )
        break;
      if ( !v53.fields.current )
        sub_B0D97C(v40);
      monitor = v53.fields.current[7].monitor;
      if ( !monitor )
        sub_B0D97C(v40);
      v42 = monitor[15];
      if ( v42 )
      {
        v44 = *(_QWORD *)(v42 + 16);
        v43 = *(_QWORD *)(v42 + 24);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v55.fields.currentCryptoKey = v44;
        *(_QWORD *)&v55.fields.fakeValue = v43;
        v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v55, 0LL);
        if ( !v39 )
          sub_B0D97C(v45);
        System_Collections_Generic_List_int___Add(
          v39,
          v45,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v53,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
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
    if ( !v39 )
      goto LABEL_40;
    servantSelectMenu = v6->fields.servantSelectMenu;
    v47 = System_Collections_Generic_List_int___ToArray(
            v39,
            (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    v50 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v48, v49);
    System_Action___ctor(v50, (Il2CppObject *)v6, Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__, 0LL);
    if ( !servantSelectMenu )
      goto LABEL_40;
    BonusSelectSummonPartyServantSelectMenu__Open(servantSelectMenu, memberItem, v47, v50, v51);
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

  if ( (byte_4214BE3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BonusSelectSummonConfirmDialog_OnClickCancel__, method);
    byte_4214BE3 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_BonusSelectSummonConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B0D8AC(Method_BonusSelectSummonConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(clickFunc, 0, 0LL);
    BonusSelectSummonConfirmDialog__Close_25087324(this, 0LL, v5);
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

  if ( (byte_4214BE2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BonusSelectSummonConfirmDialog_OnClickDecide__, method);
    byte_4214BE2 = 1;
  }
  isButtonEnable = this->fields.isButtonEnable;
  v4 = Method_BonusSelectSummonConfirmDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B0D8AC(Method_BonusSelectSummonConfirmDialog_OnClickDecide__);
  v5 = (System_Reflection_MethodBase_o *)sub_B0D888(v4, v4[3]);
  if ( isButtonEnable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
    BonusSelectSummonConfirmDialog__Close_25087324(this, 0LL, v6);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonConfirmDialog__Open(
        BonusSelectSummonConfirmDialog_o *this,
        int32_t gachaId,
        BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn,
        BonusSelectSummonConfirmDialog_ClickDelegate_o *func,
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *tryGetBonusSelectData,
        System_Action_o *endOpenCallback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x20
  System_String_o *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  UILabel_o *buttonDecideLabel; // x21
  UILabel_o *buttonCancelLabel; // x21
  __int64 v57; // x1
  __int64 v58; // x2
  System_Action_o *v59; // x19

  if ( (byte_4214BD8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&gachaId);
    sub_B0D8A4(&AtlasManager_TypeInfo, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__, v15);
    sub_B0D8A4(&BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_12457/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, v17);
    sub_B0D8A4(&StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, v18);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v19);
    sub_B0D8A4(&StringLiteral_12459/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/, v20);
    byte_4214BD8 = 1;
  }
  v21 = sub_B0D974(BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo, *(_QWORD *)&gachaId, enableBtn);
  BonusSelectSummonConfirmDialog___c__DisplayClass21_0___ctor(
    (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_15;
  *(_QWORD *)(v21 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v21 + 24) = endOpenCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v21 + 24),
    (System_Int32_array **)endOpenCallback,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.clickFunc = func;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.enableBtn = enableBtn;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.enableBtn,
    (System_Int32_array **)enableBtn,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this->fields.tryGetBonusSelectData = tryGetBonusSelectData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.tryGetBonusSelectData,
    (System_Int32_array **)tryGetBonusSelectData,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.gachaId = gachaId;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12459/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, v22, 0LL);
  messageLabel = this->fields.messageLabel;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12457/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, v22, 0LL),
        buttonDecideLabel = this->fields.buttonDecideLabel,
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3275/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
        !buttonDecideLabel)
    || (UILabel__set_text(buttonDecideLabel, v22, 0LL),
        buttonCancelLabel = this->fields.buttonCancelLabel,
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !buttonCancelLabel) )
  {
LABEL_15:
    sub_B0D97C(v22);
  }
  UILabel__set_text(buttonCancelLabel, v22, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v59 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v57, v58);
  System_Action___ctor(
    v59,
    (Il2CppObject *)v21,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v59, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SaveSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v20; // x21
  const MethodInfo *v21; // x1
  SelectBonusData_o *SelectBonusData; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v29; // x19
  SummonControl_c *v30; // x0
  Il2CppObject *String_34963268; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v38; // x22
  int size; // w8
  int32_t v40; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v41; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v42; // x2
  WarBoardUiData_SaveData_array *v43; // x19
  System_String_o *Empty; // x19
  SummonControl_c *v45; // x0

  if ( (byte_4214BE0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_SelectBonusData___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_SelectBonusData___, v4);
    sub_B0D8A4(&Method_System_Func_SelectBonusData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_SelectBonusData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_SelectBonusData___, v7);
    sub_B0D8A4(&JsonManager_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SelectBonusData__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SelectBonusData___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SelectBonusData__get_Item__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SelectBonusData__set_Item__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_SelectBonusData__TypeInfo, v15);
    sub_B0D8A4(&string_TypeInfo, v16);
    sub_B0D8A4(&SummonControl_TypeInfo, v17);
    sub_B0D8A4(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__, v18);
    sub_B0D8A4(&BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo, v19);
    byte_4214BE0 = 1;
  }
  v20 = sub_B0D974(BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo, method, v2);
  BonusSelectSummonConfirmDialog___c__DisplayClass31_0___ctor(
    (BonusSelectSummonConfirmDialog___c__DisplayClass31_0_o *)v20,
    0LL);
  SelectBonusData = BonusSelectSummonConfirmDialog__GetSelectBonusData(this, v21);
  if ( !v20 )
    goto LABEL_36;
  *(_QWORD *)(v20 + 16) = SelectBonusData;
  v29 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v20 + 16);
  sub_B0D840(
    (BattleServantConfConponent_o *)(v20 + 16),
    (System_Int32_array **)SelectBonusData,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v30 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v30 = SummonControl_TypeInfo;
  }
  String_34963268 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34963268(
                                      v30->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SelectBonusData__TypeInfo,
                                                                                                  v32,
                                                                                                  v33);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_34963268, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                 String_34963268,
                                                                 (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                                    v37,
                                                                                                    (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_SelectBonusData___);
  }
  v38 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_SelectBonusData__bool__TypeInfo,
                                                                             v35,
                                                                             v36);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v38,
    (Il2CppObject *)v20,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_SelectBonusData__bool___ctor__);
  SelectBonusData = (SelectBonusData_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                           (System_Collections_Generic_List_T__o *)v34,
                                           (System_Func_T__bool__o *)v38,
                                           (const MethodInfo_1707138 *)Method_BasicHelper_Any_SelectBonusData___);
  if ( ((unsigned __int8)SelectBonusData & 1) != 0 )
  {
    if ( !v34 )
      goto LABEL_36;
    size = v34->fields._size;
    if ( size >= 1 )
    {
      v40 = 0;
      while ( 1 )
      {
        if ( size <= (unsigned int)v40 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v41 = v34->fields._items->m_Items[v40];
        if ( !v41 )
          break;
        v42 = *v29;
        if ( !*v29 )
          break;
        if ( v41->fields.missionTargetId == v42->fields.missionTargetId )
          System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v34,
            v40,
            (WarBoardManager_TaskList_o *)v42,
            (const MethodInfo_2FC5440 *)Method_System_Collections_Generic_List_SelectBonusData__set_Item__);
        size = v34->fields._size;
        if ( ++v40 >= size )
          goto LABEL_26;
      }
LABEL_36:
      sub_B0D97C(SelectBonusData);
    }
  }
  else
  {
    if ( !v34 )
      goto LABEL_36;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v34,
      *v29,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SelectBonusData__Add__);
  }
LABEL_26:
  if ( v34->fields._size <= 0 )
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  else
  {
    v43 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v34,
            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Empty = JsonManager__toJson(&v43->obj, 0, 0, 0LL);
  }
  v45 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v45 = SummonControl_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v45->static_fields->BONUS_SELECTSUMMON_SAVEKEY, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SetBackBtn(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_4214BE4 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_15524/*"Window/CancelButton"*/, v3);
    byte_4214BE4 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_20833784(transform, (System_String_o *)StringLiteral_15524/*"Window/CancelButton"*/, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SetLoadSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *tryGetBonusSelectData; // x0
  const MethodInfo *v7; // x1
  struct SelectBonus_array *selectBonusDatas; // x20
  __int64 v9; // x8
  int v10; // w25
  unsigned __int64 v11; // x21
  SelectBonus_o *v12; // x28
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x4
  BonusSelectSummonPartyOrganizationListViewItem_o *monitor; // x8
  struct GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x9
  int32_t slot; // w2
  int v18; // w8
  __int64 v19; // x0
  _BYTE v20[28]; // [xsp+0h] [xbp-90h] BYREF
  int v21; // [xsp+1Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-70h] BYREF
  SelectBonusData_o *data; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_4214BDF & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v5);
    byte_4214BDF = 1;
  }
  data = 0LL;
  memset(&v22, 0, sizeof(v22));
  v21 = 0;
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
      v9 = *(_QWORD *)&selectBonusDatas->max_length;
      if ( (int)v9 >= 1 )
      {
        v10 = 0;
        v11 = 0LL;
        while ( 1 )
        {
          if ( v11 >= (unsigned int)v9 )
          {
            v19 = sub_B0D9A8(tryGetBonusSelectData);
            sub_B0D948(v19, 0LL);
          }
          tryGetBonusSelectData = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)this->fields.itemList;
          if ( !tryGetBonusSelectData )
            break;
          v12 = selectBonusDatas->m_Items[v11];
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v20,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)tryGetBonusSelectData,
            (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
          v22 = *(System_Collections_Generic_List_Enumerator_T__o *)v20;
          while ( 1 )
          {
            v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v22,
                    (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
            if ( !v13 )
              break;
            if ( !v22.fields.current )
              sub_B0D97C(v13);
            monitor = (BonusSelectSummonPartyOrganizationListViewItem_o *)v22.fields.current[7].monitor;
            if ( !monitor )
              sub_B0D97C(v13);
            gachaBonusSelectEntity = monitor->fields.gachaBonusSelectEntity;
            if ( gachaBonusSelectEntity )
            {
              if ( !v12 )
                sub_B0D97C(v13);
              slot = gachaBonusSelectEntity->fields.slot;
              if ( slot == v12->fields.slot )
              {
                if ( !data )
                  sub_B0D97C(v13);
                BonusSelectSummonPartyOrganizationListViewItem__Modify_25093516(
                  monitor,
                  data->fields.gachaId,
                  slot,
                  v12->fields.giftId,
                  v14);
              }
            }
          }
          *(_DWORD *)&v20[4 * v10 + 24] = 168;
          v10 = ++v21;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v22,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
          if ( v10 )
          {
            v18 = v10 - 1;
            if ( *(_DWORD *)&v20[4 * v10 + 20] == 168 )
            {
              --v10;
              v21 = v18;
            }
          }
          LODWORD(v9) = selectBonusDatas->max_length;
          if ( (__int64)++v11 >= (int)v9 )
            goto LABEL_29;
        }
LABEL_31:
        sub_B0D97C(tryGetBonusSelectData);
      }
LABEL_29:
      BonusSelectSummonConfirmDialog__Modify(this, v7);
    }
  }
}


void __fastcall BonusSelectSummonConfirmDialog___Close_b__24_0(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4214BE6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4214BE6 = 1;
  }
  BonusSelectSummonConfirmDialog__EndClose(this, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__SetFadeMaskCollider(Instance, 0, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___OnClick_b__27_0(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn; // x0
  const MethodInfo *v4; // x1

  BonusSelectSummonConfirmDialog__Modify(this, method);
  enableBtn = this->fields.enableBtn;
  if ( !enableBtn
    || (BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(enableBtn, 1, 0LL),
        BonusSelectSummonConfirmDialog__SetBackBtn(this, v4),
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
    sub_B0D97C(enableBtn);
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4211DCB & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isDecide);
    byte_4211DCB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_ClickDelegate__EndInvoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  BonusSelectSummonConfirmDialog_ClickDelegate_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (BonusSelectSummonConfirmDialog_ClickDelegate_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isDecide, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isDecide,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isDecide, v21);
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
  sub_B0D840(p_method, object);
}


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
  if ( (byte_4211DCC & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, memberItem);
    byte_4211DCC = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)memberItem;
  v11[1] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__EndInvoke(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
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
        sub_B0D960(*(_QWORD *)&v29->fields.extra_arg, memberItem, isLongTap, method);
      v33 = sub_B0D8D4(v30);
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
            v42 = sub_B0D8CC(v30);
            v43 = sub_B0DCD0(v30);
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
                  v25 = sub_AA67A0(memberItem, v45, v46);
                }
                v17 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&memberItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))sub_B0D954(v17, v30);
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
                  v16 = sub_AA67A0(memberItem, class_0, v11);
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
          v35 = sub_B0D8CC(v30);
          v36 = sub_B0DCD0(v30);
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
                v27 = sub_AA67A0(v31, v38, v39);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))sub_B0D954(v24, v30);
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
                v23 = sub_AA67A0(v31, v19, v18);
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
  sub_B0D840(p_method, object);
}


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
  if ( (byte_4211DCD & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, data);
    byte_4211DCD = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)*data;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


bool __fastcall BonusSelectSummonConfirmDialog_TryGetBonusSelectData__EndInvoke(
        BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *this,
        SelectBonusData_o **data,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v4; // x0
  SelectBonusData_o **v6; // [xsp+8h] [xbp-8h] BYREF

  v6 = data;
  v4 = sub_B0D84C(result, &v6, result);
  if ( !v4 )
    sub_B0D97C(0LL);
  return *(_BYTE *)j_il2cpp_object_unbox_0(v4);
}


// local variable allocation has failed, the output may be wrong!
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
        sub_B0D960(*(_QWORD *)&v21->fields.extra_arg, data, *(_QWORD *)&gachaId, method);
      if ( (sub_B0D8D4(v23) & 1) != 0 )
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
          v25 = sub_B0D8CC(v23);
          v26 = sub_B0DCD0(v23);
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
                v19 = sub_AA67A0(v22, v28, v29);
              }
              v17 = *(_QWORD *)(v19 + 8);
            }
            else
            {
              v17 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
            }
            v20 = (__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))sub_B0D954(v17, v23);
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
                v16 = sub_AA67A0(v22, class_0, v11);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4211DC9 & 1) == 0 )
  {
    sub_B0D8A4(&BonusSelectSummonConfirmDialog___c_TypeInfo, v1);
    byte_4211DC9 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BonusSelectSummonConfirmDialog___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BonusSelectSummonConfirmDialog___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return listViewItem->fields.servantEntity == 0LL;
}


bool __fastcall BonusSelectSummonConfirmDialog___c___Open_b__21_1(
        BonusSelectSummonConfirmDialog___c_o *this,
        BonusSelectSummonPartyOrganizationListViewObject_o *itemObj,
        const MethodInfo *method)
{
  struct BonusSelectSummonPartyOrganizationListViewItem_o *listViewItem; // x8

  if ( !itemObj || (listViewItem = itemObj->fields.listViewItem) == 0LL )
    sub_B0D97C(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BonusSelectSummonConfirmDialog_o *_4__this; // x8
  UISprite_o *messageBg; // x20
  struct BonusSelectSummonConfirmDialog_o *v13; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  struct BonusSelectSummonConfirmDialog_o *v16; // x8
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *itemList; // x21
  BonusSelectSummonConfirmDialog___c_c *v19; // x0
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__21_1; // x22
  Il2CppObject *v22; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_o *_9__2; // x21
  BaseDialog_o *v27; // x20

  v2 = this;
  if ( (byte_4211DCA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AtlasManager_TypeInfo, v3);
    sub_B0D8A4(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___, v4);
    sub_B0D8A4(&Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__, v7);
    sub_B0D8A4(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__, v8);
    sub_B0D8A4(&BonusSelectSummonConfirmDialog___c_TypeInfo, v9);
    this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)sub_B0D8A4(&StringLiteral_16752/*"bg_white"*/, v10);
    byte_4211DCA = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  messageBg = _4__this->fields.messageBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(messageBg, (System_String_o *)StringLiteral_16752/*"bg_white"*/, 0LL);
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  BonusSelectSummonConfirmDialog__CreateList((BonusSelectSummonConfirmDialog_o *)this, 0LL);
  v13 = v2->fields.__4__this;
  if ( !v13 )
    goto LABEL_25;
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v13->fields.rootObj;
  if ( !this )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v2->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  BonusSelectSummonConfirmDialog__SetLoadSelectBonusData((BonusSelectSummonConfirmDialog_o *)this, 0LL);
  v16 = v2->fields.__4__this;
  if ( !v16 )
    goto LABEL_25;
  buttonDecide = v16->fields.buttonDecide;
  itemList = (System_Collections_Generic_List_T__o *)v16->fields.itemList;
  v19 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  if ( (BYTE3(BonusSelectSummonConfirmDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo);
    v19 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo,
                                                                                    v14,
                                                                                    v15);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__21_1,
      v22,
      Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__,
      (const MethodInfo_26189B8 *)Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__);
    v23 = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    v23->__9__21_1 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__21_1;
    sub_B0D840(&v23->__9__21_1, _9__21_1);
  }
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                                     itemList,
                                                                     (System_Func_T__bool__o *)_9__21_1,
                                                                     (const MethodInfo_1707138 *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
    goto LABEL_25;
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
                                                                     buttonDecide,
                                                                     ((unsigned __int8)this & 1) == 0,
                                                                     buttonDecide->klass->vtable._6_OnInit.methodPtr);
  _9__2 = v2->fields.__9__2;
  v27 = (BaseDialog_o *)v2->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_B0D840(&v2->fields.__9__2, _9__2);
  }
  if ( !v27 )
LABEL_25:
    sub_B0D97C(this);
  BaseDialog__Open(v27, _9__2, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass21_0___Open_b__2(
        BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
  return x->fields.gachaId == data->fields.gachaId;
}