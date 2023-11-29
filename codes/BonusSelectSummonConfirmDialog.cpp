void __fastcall BonusSelectSummonConfirmDialog___ctor(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FB0F6 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FB0F6 = 1;
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

  BonusSelectSummonConfirmDialog__Close_27173764(this, 0LL, v2);
}


void __fastcall BonusSelectSummonConfirmDialog__Close_27173764(
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x20

  if ( (byte_40FB0EA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&AtlasManager_TypeInfo, v10);
    sub_B16FFC(&Method_BonusSelectSummonConfirmDialog__Close_b__24_0__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_40FB0EA = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetFadeMaskCollider(Instance, 1, 0LL);
  v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_BonusSelectSummonConfirmDialog__Close_b__24_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v18, 0LL);
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
  _BOOL8 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  GachaBonusSelectEntity_array *v17; // x23
  signed int max_length; // w8
  unsigned int v19; // w24
  GachaBonusSelectEntity_o *v20; // x21
  int32_t slot; // w22
  BonusSelectSummonPartyOrganizationListViewItem_o *v22; // x20
  const MethodInfo *v23; // x4
  UnityEngine_Component_o *rootObj; // x0
  struct UnityEngine_GameObject_o *prefab; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v27; // x0
  BonusSelectSummonPartyOrganizationListViewObject_o *Component_srcLineSprite; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *v33; // x22
  const MethodInfo *v34; // x3
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  GachaBonusSelectEntity_array *entityArray; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FB0EC & 1) == 0 )
  {
    sub_B16FFC(&Method_BonusSelectSummonConfirmDialog_OnClick__, method);
    sub_B16FFC(&BonusSelectSummonPartyOrganizationListViewItem_TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_GachaBonusSelectMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__, v7);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo, v10);
    byte_40FB0EC = 1;
  }
  entityArray = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GachaBonusSelectMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  v12 = GachaBonusSelectMaster__TryGetEntityArray(
          Master_WarQuestSelectionMaster,
          &entityArray,
          this->fields.gachaId,
          0LL);
  if ( v12 )
  {
    v17 = entityArray;
    if ( !entityArray )
      goto LABEL_22;
    max_length = entityArray->max_length;
    if ( max_length >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        if ( v19 >= max_length )
        {
          sub_B17100(v12, v13, v14);
          sub_B170A0();
        }
        v20 = v17->m_Items[v19];
        if ( !v20 )
          break;
        slot = v20->fields.slot;
        v22 = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B170CC(
                                                                    BonusSelectSummonPartyOrganizationListViewItem_TypeInfo,
                                                                    v13,
                                                                    v14,
                                                                    v15,
                                                                    v16);
        BonusSelectSummonPartyOrganizationListViewItem___ctor(v22, slot, 0LL, v20, v23);
        rootObj = (UnityEngine_Component_o *)this->fields.rootObj;
        if ( !rootObj )
          break;
        prefab = this->fields.prefab;
        transform = UnityEngine_Component__get_transform(rootObj, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v27 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                            (UILabel_o *)prefab,
                                            transform,
                                            (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
        if ( !v27 )
          break;
        Component_srcLineSprite = (BonusSelectSummonPartyOrganizationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                          v27,
                                                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___);
        v33 = (BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *)sub_B170CC(
                                                                          BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo,
                                                                          v29,
                                                                          v30,
                                                                          v31,
                                                                          v32);
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent___ctor(
          v33,
          (Il2CppObject *)this,
          (intptr_t)Method_BonusSelectSummonConfirmDialog_OnClick__,
          0LL);
        if ( !Component_srcLineSprite )
          break;
        BonusSelectSummonPartyOrganizationListViewObject__Init(Component_srcLineSprite, v22, v33, v34);
        itemList = this->fields.itemList;
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__);
        max_length = v17->max_length;
        if ( (int)++v19 >= max_length )
          return;
      }
LABEL_22:
      sub_B170D4();
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

  if ( (byte_40FB0EB & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FB0EB = 1;
  }
  memset(&v18, 0, sizeof(v18));
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v18.fields.current )
      sub_B170D4();
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v18.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v16 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
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
  CommonUI_o *Instance; // x0

  if ( (byte_40FB0EE & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FB0EE = 1;
  }
  enableBtn = this->fields.enableBtn;
  if ( !enableBtn
    || (BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(enableBtn, 1, 0LL),
        BonusSelectSummonConfirmDialog__SetBackBtn(this, v5),
        (Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


SelectBonusData_o *__fastcall BonusSelectSummonConfirmDialog__GetSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  __int64 v17; // x26
  __int64 v18; // x27
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  _QWORD *monitor; // x8
  __int64 v24; // x9
  int32_t v25; // w21
  int32_t v26; // w22
  __int64 v27; // x8
  int32_t v28; // w24
  int32_t v29; // w23
  SelectBonus_o *v30; // x25
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x21
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  BonusSelectSummonConfirmDialog_o *v44; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FB0F2 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SelectBonus__Add__, v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SelectBonus__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SelectBonus___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_SelectBonus__TypeInfo, v12);
    sub_B16FFC(&SelectBonusData_TypeInfo, v13);
    sub_B16FFC(&SelectBonus_TypeInfo, v14);
    byte_40FB0F2 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SelectBonus__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SelectBonus___ctor__);
  itemList = this->fields.itemList;
  v44 = this;
  if ( !itemList )
    goto LABEL_30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  v46 = v45;
  v17 = 0LL;
  v18 = 0LL;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v46,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v46.fields.current )
      sub_B170D4();
    monitor = v46.fields.current[7].monitor;
    if ( !monitor )
      sub_B170D4();
    v24 = monitor[16];
    if ( v24 )
      v18 = monitor[16];
    if ( v24 )
    {
      if ( !v18 )
        sub_B170D4();
      v25 = *(_DWORD *)(v18 + 20);
      v26 = *(_DWORD *)(v24 + 24);
    }
    else
    {
      v25 = -1;
      v26 = -1;
    }
    v27 = monitor[17];
    if ( v27 )
      v17 = v27;
    if ( v27 )
    {
      if ( !v17 )
        sub_B170D4();
      v28 = *(_DWORD *)(v17 + 20);
      v29 = *(_DWORD *)(v27 + 24);
    }
    else
    {
      v29 = -1;
      v28 = -1;
    }
    v30 = (SelectBonus_o *)sub_B170CC(SelectBonus_TypeInfo, v19, v20, v21, v22);
    SelectBonus___ctor(v30, v25, v26, v28, v29, 0LL);
    if ( !v15 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v15,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SelectBonus__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v46,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  v35 = sub_B170CC(SelectBonusData_TypeInfo, v31, v32, v33, v34);
  SelectBonusData___ctor((SelectBonusData_o *)v35, 0LL);
  if ( !v35 || (*(_DWORD *)(v35 + 16) = v44->fields.gachaId, !v15) )
LABEL_30:
    sub_B170D4();
  v36 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_SelectBonus__ToArray__);
  *(_QWORD *)(v35 + 24) = v36;
  sub_B16F98((BattleServantConfConponent_o *)(v35 + 24), v36, v37, v38, v39, v40, v41, v42);
  return (SelectBonusData_o *)v35;
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct UnityEngine_GameObject_o *OrganizationListViewItemPrefab_k__BackingField; // x1
  BonusSelectSummonPartyServantSelectMenu_o **p_servantSelectMenu; // x21
  UnityEngine_Object_o *servantSelectMenu; // x22
  const MethodInfo *v20; // x1
  struct UnityEngine_GameObject_o *ServantSelectMenuPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v23; // x0
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UISprite_o *messageBg; // x0
  UILabel_o *buttonDecideLabel; // x0
  UILabel_o *buttonCancelLabel; // x0
  struct UICommonButton_o *buttonDecide; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FB0E8 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___, assetManager);
    sub_B16FFC(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo, v6);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    byte_40FB0E8 = 1;
  }
  prefab = (UnityEngine_Object_o *)this->fields.prefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(prefab, 0LL, 0LL) )
  {
    if ( !assetManager )
      goto LABEL_28;
    OrganizationListViewItemPrefab_k__BackingField = assetManager->fields._OrganizationListViewItemPrefab_k__BackingField;
    this->fields.prefab = OrganizationListViewItemPrefab_k__BackingField;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.prefab,
      (System_Int32_array **)OrganizationListViewItemPrefab_k__BackingField,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  p_servantSelectMenu = &this->fields.servantSelectMenu;
  servantSelectMenu = (UnityEngine_Object_o *)this->fields.servantSelectMenu;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(servantSelectMenu, 0LL, 0LL) )
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
    v23 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)ServantSelectMenuPrefab_k__BackingField,
                                        transform,
                                        (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
    if ( !v23 )
LABEL_28:
      sub_B170D4();
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v23,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___);
    *p_servantSelectMenu = (BonusSelectSummonPartyServantSelectMenu_o *)Component_srcLineSprite;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.servantSelectMenu,
      Component_srcLineSprite,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  if ( !*p_servantSelectMenu )
    goto LABEL_28;
  BonusSelectSummonPartyServantSelectMenu__Init(*p_servantSelectMenu, v20);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo,
                                                                                                  v31,
                                                                                                  v32,
                                                                                                  v33,
                                                                                                  v34);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)v35;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_28;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel )
    goto LABEL_28;
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1, 0LL);
  messageBg = this->fields.messageBg;
  if ( !messageBg )
    goto LABEL_28;
  UISprite__set_spriteName(messageBg, 0LL, 0LL);
  buttonDecideLabel = this->fields.buttonDecideLabel;
  if ( !buttonDecideLabel )
    goto LABEL_28;
  UILabel__set_text(buttonDecideLabel, (System_String_o *)StringLiteral_1, 0LL);
  buttonCancelLabel = this->fields.buttonCancelLabel;
  if ( !buttonCancelLabel )
    goto LABEL_28;
  UILabel__set_text(buttonCancelLabel, (System_String_o *)StringLiteral_1, 0LL);
  buttonDecide = this->fields.buttonDecide;
  this->fields.isButtonEnable = 0;
  if ( !buttonDecide )
    goto LABEL_28;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
    buttonDecide,
    0LL,
    buttonDecide->klass->vtable._6_OnInit.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_28;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
  __int64 v15; // x3
  __int64 v16; // x4
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *v18; // x21
  BonusSelectSummonConfirmDialog___c_c *v19; // x0
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__29_0; // x22
  Il2CppObject *v22; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  bool v30; // w0
  const MethodInfo *v31; // x1
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FB0EF & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___, method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v5);
    sub_B16FFC(&Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__, v6);
    sub_B16FFC(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo, v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v8);
    sub_B16FFC(&Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__, v9);
    sub_B16FFC(&BonusSelectSummonConfirmDialog___c_TypeInfo, v10);
    byte_40FB0EF = 1;
  }
  memset(&v32, 0, sizeof(v32));
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v32,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v32.fields.current )
      sub_B170D4();
    BonusSelectSummonPartyOrganizationListViewObject__Modfy(
      (BonusSelectSummonPartyOrganizationListViewObject_o *)v32.fields.current,
      v12);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v32,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  buttonDecide = this->fields.buttonDecide;
  v18 = (System_Collections_Generic_List_T__o *)this->fields.itemList;
  v19 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  if ( (BYTE3(BonusSelectSummonConfirmDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo);
    v19 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__29_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__29_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo,
                                                                                    v13,
                                                                                    v14,
                                                                                    v15,
                                                                                    v16);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__29_0,
      v22,
      Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__);
    v23 = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    v23->__9__29_0 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__29_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v23->__9__29_0,
      (System_Int32_array **)_9__29_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          v18,
          (System_Func_T__bool__o *)_9__29_0,
          (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
LABEL_19:
    sub_B170D4();
  ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
    buttonDecide,
    !v30,
    buttonDecide->klass->vtable._6_OnInit.methodPtr);
  BonusSelectSummonConfirmDialog__SaveSelectBonusData(this, v31);
}


void __fastcall BonusSelectSummonConfirmDialog__OnClick(
        BonusSelectSummonConfirmDialog_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *memberItem,
        bool isLongTap,
        const MethodInfo *method)
{
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
  BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn; // x0
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  WebViewManager_o *Instance; // x0
  struct ServantEntity_o *servantEntity; // x8
  CommonUI_o *v27; // x20
  __int64 v28; // x21
  __int64 v29; // x22
  int32_t v30; // w22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  ServantLeaderInfo_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  ServantStatusDialog_EndDelegate_o *v40; // x22
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v41; // x0
  _QWORD *v42; // x0
  System_Reflection_MethodBase_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Collections_Generic_List_int__o *v48; // x21
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  _QWORD *monitor; // x8
  __int64 v51; // x8
  __int64 v52; // x22
  __int64 v53; // x23
  int32_t v54; // w1
  UnityEngine_GameObject_o *baseWindow; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *v58; // x0
  BonusSelectSummonPartyServantSelectMenu_o *servantSelectMenu; // x22
  System_Int32_array *v60; // x21
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_Action_o *v65; // x23
  const MethodInfo *v66; // x4
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16

  if ( (byte_40FB0ED & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, memberItem);
    sub_B16FFC(&Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__, v7);
    sub_B16FFC(&Method_BonusSelectSummonConfirmDialog_OnClick__, v8);
    sub_B16FFC(&Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__, v9);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B16FFC(&ServantLeaderInfo_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    byte_40FB0ED = 1;
  }
  memset(&v68, 0, sizeof(v68));
  if ( isLongTap )
  {
    if ( !memberItem )
      goto LABEL_40;
    if ( memberItem->fields.servantEntity )
    {
      enableBtn = this->fields.enableBtn;
      if ( enableBtn )
      {
        BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(enableBtn, 0, 0LL);
        v23 = Method_BonusSelectSummonConfirmDialog_OnClick__;
        if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClick__ + 75) & 2) != 0 )
          v23 = (_QWORD *)sub_B17004(Method_BonusSelectSummonConfirmDialog_OnClick__);
        v24 = (System_Reflection_MethodBase_o *)sub_B16FE0(v23, v23[3]);
        OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0LL);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantEntity = memberItem->fields.servantEntity;
        if ( servantEntity )
        {
          v27 = (CommonUI_o *)Instance;
          v29 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
          v28 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v69.fields.currentCryptoKey = v29;
          *(_QWORD *)&v69.fields.fakeValue = v28;
          v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v69, 0LL);
          v35 = (ServantLeaderInfo_o *)sub_B170CC(ServantLeaderInfo_TypeInfo, v31, v32, v33, v34);
          ServantLeaderInfo___ctor_29610580(v35, v30, 0, 1, 0LL);
          v40 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38,
                                                       v39);
          ServantStatusDialog_EndDelegate___ctor(
            v40,
            (Il2CppObject *)this,
            Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__,
            0LL);
          if ( v27 )
          {
            CommonUI__OpenServantStatusDialog_18250312(v27, 7, v35, v40, 0LL);
            return;
          }
        }
      }
LABEL_40:
      sub_B170D4();
    }
  }
  else
  {
    v41 = this->fields.enableBtn;
    if ( !v41 )
      goto LABEL_40;
    BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(v41, 0, 0LL);
    v42 = Method_BonusSelectSummonConfirmDialog_OnClick__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClick__ + 75) & 2) != 0 )
      v42 = (_QWORD *)sub_B17004(Method_BonusSelectSummonConfirmDialog_OnClick__);
    v43 = (System_Reflection_MethodBase_o *)sub_B16FE0(v42, v42[3]);
    OverwriteAssetSoundName__PlaySystemSe(v43, 0, 0LL);
    v48 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v44,
                                                      v45,
                                                      v46,
                                                      v47);
    System_Collections_Generic_List_int____ctor(
      v48,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_40;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v67,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    v68 = v67;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v68,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
    {
      if ( !v68.fields.current )
        sub_B170D4();
      monitor = v68.fields.current[7].monitor;
      if ( !monitor )
        sub_B170D4();
      v51 = monitor[15];
      if ( v51 )
      {
        v53 = *(_QWORD *)(v51 + 16);
        v52 = *(_QWORD *)(v51 + 24);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v70.fields.currentCryptoKey = v53;
        *(_QWORD *)&v70.fields.fakeValue = v52;
        v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v70, 0LL);
        if ( !v48 )
          sub_B170D4();
        System_Collections_Generic_List_int___Add(
          v48,
          v54,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v68,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    baseWindow = this->fields.baseWindow;
    if ( !baseWindow )
      goto LABEL_40;
    gameObject = UnityEngine_GameObject__get_gameObject(baseWindow, 0LL);
    if ( !gameObject )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_40;
    v58 = UnityEngine_Component__get_gameObject(maskSprite, 0LL);
    if ( !v58 )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive(v58, 0, 0LL);
    if ( !v48 )
      goto LABEL_40;
    servantSelectMenu = this->fields.servantSelectMenu;
    v60 = System_Collections_Generic_List_int___ToArray(
            v48,
            (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
    v65 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v61, v62, v63, v64);
    System_Action___ctor(v65, (Il2CppObject *)this, Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__, 0LL);
    if ( !servantSelectMenu )
      goto LABEL_40;
    BonusSelectSummonPartyServantSelectMenu__Open(servantSelectMenu, memberItem, v60, v65, v66);
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

  if ( (byte_40FB0F4 & 1) == 0 )
  {
    sub_B16FFC(&Method_BonusSelectSummonConfirmDialog_OnClickCancel__, method);
    byte_40FB0F4 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_BonusSelectSummonConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_BonusSelectSummonConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(clickFunc, 0, 0LL);
    BonusSelectSummonConfirmDialog__Close_27173764(this, 0LL, v5);
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

  if ( (byte_40FB0F3 & 1) == 0 )
  {
    sub_B16FFC(&Method_BonusSelectSummonConfirmDialog_OnClickDecide__, method);
    byte_40FB0F3 = 1;
  }
  isButtonEnable = this->fields.isButtonEnable;
  v4 = Method_BonusSelectSummonConfirmDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B17004(Method_BonusSelectSummonConfirmDialog_OnClickDecide__);
  v5 = (System_Reflection_MethodBase_o *)sub_B16FE0(v4, v4[3]);
  if ( isButtonEnable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
    BonusSelectSummonConfirmDialog__Close_27173764(this, 0LL, v6);
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
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v53; // x0
  UILabel_o *messageLabel; // x21
  System_String_o *v55; // x0
  UILabel_o *buttonDecideLabel; // x21
  System_String_o *v57; // x0
  UILabel_o *buttonCancelLabel; // x21
  System_String_o *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  System_Action_o *v64; // x19

  if ( (byte_40FB0E9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&gachaId);
    sub_B16FFC(&AtlasManager_TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__, v15);
    sub_B16FFC(&BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_12364, v17);
    sub_B16FFC(&StringLiteral_3253, v18);
    sub_B16FFC(&StringLiteral_3251, v19);
    sub_B16FFC(&StringLiteral_12366, v20);
    byte_40FB0E9 = 1;
  }
  v21 = sub_B170CC(
          BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo,
          *(_QWORD *)&gachaId,
          enableBtn,
          func,
          tryGetBonusSelectData);
  BonusSelectSummonConfirmDialog___c__DisplayClass21_0___ctor(
    (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_15;
  *(_QWORD *)(v21 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v21 + 24) = endOpenCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v21 + 24),
    (System_Int32_array **)endOpenCallback,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.clickFunc = func;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.enableBtn = enableBtn;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.enableBtn,
    (System_Int32_array **)enableBtn,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.tryGetBonusSelectData = tryGetBonusSelectData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.tryGetBonusSelectData,
    (System_Int32_array **)tryGetBonusSelectData,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.gachaId = gachaId;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_12366, 0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, v53, 0LL);
  messageLabel = this->fields.messageLabel;
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_12364, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, v55, 0LL),
        buttonDecideLabel = this->fields.buttonDecideLabel,
        v57 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL),
        !buttonDecideLabel)
    || (UILabel__set_text(buttonDecideLabel, v57, 0LL),
        buttonCancelLabel = this->fields.buttonCancelLabel,
        v59 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL),
        !buttonCancelLabel) )
  {
LABEL_15:
    sub_B170D4();
  }
  UILabel__set_text(buttonCancelLabel, v59, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v64 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v60, v61, v62, v63);
  System_Action___ctor(
    v64,
    (Il2CppObject *)v21,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v64, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SaveSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v22; // x21
  const MethodInfo *v23; // x1
  System_Int32_array **SelectBonusData; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v31; // x19
  SummonControl_c *v32; // x0
  Il2CppObject *String_34837456; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v44; // x22
  int size; // w8
  int32_t v46; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v48; // x2
  WarBoardUiData_SaveData_array *v49; // x19
  System_String_o *Empty; // x19
  SummonControl_c *v51; // x0

  if ( (byte_40FB0F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_SelectBonusData___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_SelectBonusData___, v6);
    sub_B16FFC(&Method_System_Func_SelectBonusData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_SelectBonusData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_SelectBonusData___, v9);
    sub_B16FFC(&JsonManager_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_SelectBonusData__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_SelectBonusData___ctor__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_SelectBonusData__get_Item__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_SelectBonusData__set_Item__, v16);
    sub_B16FFC(&System_Collections_Generic_List_SelectBonusData__TypeInfo, v17);
    sub_B16FFC(&string_TypeInfo, v18);
    sub_B16FFC(&SummonControl_TypeInfo, v19);
    sub_B16FFC(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__, v20);
    sub_B16FFC(&BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo, v21);
    byte_40FB0F1 = 1;
  }
  v22 = sub_B170CC(BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo, method, v2, v3, v4);
  BonusSelectSummonConfirmDialog___c__DisplayClass31_0___ctor(
    (BonusSelectSummonConfirmDialog___c__DisplayClass31_0_o *)v22,
    0LL);
  SelectBonusData = (System_Int32_array **)BonusSelectSummonConfirmDialog__GetSelectBonusData(this, v23);
  if ( !v22 )
    goto LABEL_36;
  *(_QWORD *)(v22 + 16) = SelectBonusData;
  v31 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v22 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 16), SelectBonusData, v25, v26, v27, v28, v29, v30);
  v32 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v32 = SummonControl_TypeInfo;
  }
  String_34837456 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_34837456(
                                      v32->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_SelectBonusData__TypeInfo,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_34837456, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                 String_34837456,
                                                                 (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                                    v43,
                                                                                                    (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_SelectBonusData___);
  }
  v44 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_SelectBonusData__bool__TypeInfo,
                                                                             v39,
                                                                             v40,
                                                                             v41,
                                                                             v42);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v44,
    (Il2CppObject *)v22,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_SelectBonusData__bool___ctor__);
  if ( BasicHelper__Any_WarBoardData_SquareRangeSearch_(
         (System_Collections_Generic_List_T__o *)v38,
         (System_Func_T__bool__o *)v44,
         (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_SelectBonusData___) )
  {
    if ( !v38 )
      goto LABEL_36;
    size = v38->fields._size;
    if ( size >= 1 )
    {
      v46 = 0;
      while ( 1 )
      {
        if ( size <= (unsigned int)v46 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v47 = v38->fields._items->m_Items[v46];
        if ( !v47 )
          break;
        v48 = *v31;
        if ( !*v31 )
          break;
        if ( v47->fields.missionTargetId == v48->fields.missionTargetId )
          System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v38,
            v46,
            (WarBoardManager_TaskList_o *)v48,
            (const MethodInfo_2F25A30 *)Method_System_Collections_Generic_List_SelectBonusData__set_Item__);
        size = v38->fields._size;
        if ( ++v46 >= size )
          goto LABEL_26;
      }
LABEL_36:
      sub_B170D4();
    }
  }
  else
  {
    if ( !v38 )
      goto LABEL_36;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v38,
      *v31,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SelectBonusData__Add__);
  }
LABEL_26:
  if ( v38->fields._size <= 0 )
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  else
  {
    v49 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v38,
            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Empty = JsonManager__toJson(&v49->obj, 0, 0, 0LL);
  }
  v51 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v51 = SummonControl_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v51->static_fields->BONUS_SELECTSUMMON_SAVEKEY, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SetBackBtn(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_40FB0F5 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_15414, v3);
    byte_40FB0F5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21111220(transform, (System_String_o *)StringLiteral_15414, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SetLoadSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *tryGetBonusSelectData; // x0
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  struct SelectBonus_array *selectBonusDatas; // x20
  __int64 v11; // x8
  int v12; // w25
  unsigned __int64 v13; // x21
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  SelectBonus_o *v15; // x28
  const MethodInfo *v16; // x4
  BonusSelectSummonPartyOrganizationListViewItem_o *monitor; // x8
  struct GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x9
  int32_t slot; // w2
  int v20; // w8
  _BYTE v21[28]; // [xsp+0h] [xbp-90h] BYREF
  int v22; // [xsp+1Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-70h] BYREF
  SelectBonusData_o *data; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_40FB0F0 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v5);
    byte_40FB0F0 = 1;
  }
  data = 0LL;
  memset(&v23, 0, sizeof(v23));
  v22 = 0;
  tryGetBonusSelectData = this->fields.tryGetBonusSelectData;
  if ( !tryGetBonusSelectData )
    goto LABEL_31;
  v7 = BonusSelectSummonConfirmDialog_TryGetBonusSelectData__Invoke(
         tryGetBonusSelectData,
         &data,
         this->fields.gachaId,
         0LL);
  if ( v7 )
  {
    if ( !data )
      goto LABEL_31;
    selectBonusDatas = data->fields.selectBonusDatas;
    if ( selectBonusDatas )
    {
      v11 = *(_QWORD *)&selectBonusDatas->max_length;
      if ( (int)v11 >= 1 )
      {
        v12 = 0;
        v13 = 0LL;
        while ( 1 )
        {
          if ( v13 >= (unsigned int)v11 )
          {
            sub_B17100(v7, v8, v9);
            sub_B170A0();
          }
          itemList = this->fields.itemList;
          if ( !itemList )
            break;
          v15 = selectBonusDatas->m_Items[v13];
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v21,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
            (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
          v23 = *(System_Collections_Generic_List_Enumerator_T__o *)v21;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v23,
                    (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
          {
            if ( !v23.fields.current )
              sub_B170D4();
            monitor = (BonusSelectSummonPartyOrganizationListViewItem_o *)v23.fields.current[7].monitor;
            if ( !monitor )
              sub_B170D4();
            gachaBonusSelectEntity = monitor->fields.gachaBonusSelectEntity;
            if ( gachaBonusSelectEntity )
            {
              if ( !v15 )
                sub_B170D4();
              slot = gachaBonusSelectEntity->fields.slot;
              if ( slot == v15->fields.slot )
              {
                if ( !data )
                  sub_B170D4();
                BonusSelectSummonPartyOrganizationListViewItem__Modify_27179956(
                  monitor,
                  data->fields.gachaId,
                  slot,
                  v15->fields.giftId,
                  v16);
              }
            }
          }
          *(_DWORD *)&v21[4 * v12 + 24] = 168;
          v12 = ++v22;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v23,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
          if ( v12 )
          {
            v20 = v12 - 1;
            if ( *(_DWORD *)&v21[4 * v12 + 20] == 168 )
            {
              --v12;
              v22 = v20;
            }
          }
          LODWORD(v11) = selectBonusDatas->max_length;
          if ( (__int64)++v13 >= (int)v11 )
            goto LABEL_29;
        }
LABEL_31:
        sub_B170D4();
      }
LABEL_29:
      BonusSelectSummonConfirmDialog__Modify(this, v8);
    }
  }
}


void __fastcall BonusSelectSummonConfirmDialog___Close_b__24_0(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FB0F7 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40FB0F7 = 1;
  }
  BonusSelectSummonConfirmDialog__EndClose(this, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__SetFadeMaskCollider(Instance, 0, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___OnClick_b__27_0(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn; // x0
  const MethodInfo *v4; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *maskSprite; // x0
  UnityEngine_GameObject_o *v8; // x0

  BonusSelectSummonConfirmDialog__Modify(this, method);
  enableBtn = this->fields.enableBtn;
  if ( !enableBtn
    || (BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(enableBtn, 1, 0LL),
        BonusSelectSummonConfirmDialog__SetBackBtn(this, v4),
        (baseWindow = this->fields.baseWindow) == 0LL)
    || (gameObject = UnityEngine_GameObject__get_gameObject(baseWindow, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite) == 0LL)
    || (v8 = UnityEngine_Component__get_gameObject(maskSprite, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v8, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BonusSelectSummonConfirmDialog_ClickDelegate___ctor(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7094 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isDecide);
    byte_40F7094 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_ClickDelegate__EndInvoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isDecide, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
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
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
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
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
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
            v14 = sub_AAFEF8(v19, class_0, v9);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7095 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, memberItem);
    byte_40F7095 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)memberItem;
  v11[1] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__EndInvoke(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v29->fields.extra_arg, memberItem, isLongTap);
      v33 = sub_B1702C(v30);
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
            v42 = sub_B17024(v30);
            v43 = sub_B17428(v30);
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
                  v25 = sub_AAFEF8(memberItem, v45, v46);
                }
                v17 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&memberItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))sub_B170AC(v17, v30);
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
                  v16 = sub_AAFEF8(memberItem, class_0, v11);
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
          v35 = sub_B17024(v30);
          v36 = sub_B17428(v30);
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
                v27 = sub_AAFEF8(v31, v38, v39);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))sub_B170AC(v24, v30);
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
                v23 = sub_AAFEF8(v31, v19, v18);
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_40F7096 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, data);
    byte_40F7096 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)*data;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
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
  v4 = sub_B16FA4(result, &v6, result);
  if ( !v4 )
    sub_B170D4();
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
        sub_B170B8(*(_QWORD *)&v21->fields.extra_arg, data, *(_QWORD *)&gachaId);
      if ( (sub_B1702C(v23) & 1) != 0 )
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
          v25 = sub_B17024(v23);
          v26 = sub_B17428(v23);
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
                v19 = sub_AAFEF8(v22, v28, v29);
              }
              v17 = *(_QWORD *)(v19 + 8);
            }
            else
            {
              v17 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
            }
            v20 = (__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))sub_B170AC(v17, v23);
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
                v16 = sub_AAFEF8(v22, class_0, v11);
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7092 & 1) == 0 )
  {
    sub_B16FFC(&BonusSelectSummonConfirmDialog___c_TypeInfo, v1);
    byte_40F7092 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BonusSelectSummonConfirmDialog___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return listViewItem->fields.servantEntity == 0LL;
}


bool __fastcall BonusSelectSummonConfirmDialog___c___Open_b__21_1(
        BonusSelectSummonConfirmDialog___c_o *this,
        BonusSelectSummonPartyOrganizationListViewObject_o *itemObj,
        const MethodInfo *method)
{
  struct BonusSelectSummonPartyOrganizationListViewItem_o *listViewItem; // x8

  if ( !itemObj || (listViewItem = itemObj->fields.listViewItem) == 0LL )
    sub_B170D4();
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
  BonusSelectSummonConfirmDialog_o *v13; // x0
  struct BonusSelectSummonConfirmDialog_o *v14; // x8
  UnityEngine_Behaviour_o *rootObj; // x0
  BonusSelectSummonConfirmDialog_o *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  struct BonusSelectSummonConfirmDialog_o *v21; // x8
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *itemList; // x21
  BonusSelectSummonConfirmDialog___c_c *v24; // x0
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__21_1; // x22
  Il2CppObject *v27; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  bool v35; // w0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Action_o *_9__2; // x21
  BaseDialog_o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_40F7093 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AtlasManager_TypeInfo, v3);
    sub_B16FFC(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___, v4);
    sub_B16FFC(&Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__, v5);
    sub_B16FFC(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo, v6);
    sub_B16FFC(&Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__, v7);
    sub_B16FFC(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__, v8);
    sub_B16FFC(&BonusSelectSummonConfirmDialog___c_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_16639, v10);
    byte_40F7093 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  messageBg = _4__this->fields.messageBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(messageBg, (System_String_o *)StringLiteral_16639, 0LL);
  v13 = this->fields.__4__this;
  if ( !v13 )
    goto LABEL_25;
  BonusSelectSummonConfirmDialog__CreateList(v13, 0LL);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_25;
  rootObj = (UnityEngine_Behaviour_o *)v14->fields.rootObj;
  if ( !rootObj )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled(rootObj, 1, 0LL);
  v16 = this->fields.__4__this;
  if ( !v16 )
    goto LABEL_25;
  BonusSelectSummonConfirmDialog__SetLoadSelectBonusData(v16, 0LL);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_25;
  buttonDecide = v21->fields.buttonDecide;
  itemList = (System_Collections_Generic_List_T__o *)v21->fields.itemList;
  v24 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  if ( (BYTE3(BonusSelectSummonConfirmDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo);
    v24 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo,
                                                                                    v17,
                                                                                    v18,
                                                                                    v19,
                                                                                    v20);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__21_1,
      v27,
      Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__);
    v28 = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    v28->__9__21_1 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__21_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v28->__9__21_1,
      (System_Int32_array **)_9__21_1,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          itemList,
          (System_Func_T__bool__o *)_9__21_1,
          (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
    goto LABEL_25;
  ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
    buttonDecide,
    !v35,
    buttonDecide->klass->vtable._6_OnInit.methodPtr);
  _9__2 = this->fields.__9__2;
  v41 = (BaseDialog_o *)this->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  if ( !v41 )
LABEL_25:
    sub_B170D4();
  BaseDialog__Open(v41, _9__2, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass21_0___Open_b__2(
        BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
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
    sub_B170D4();
  return x->fields.gachaId == data->fields.gachaId;
}