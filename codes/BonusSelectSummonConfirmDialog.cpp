void __fastcall BonusSelectSummonConfirmDialog___ctor(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4187DC7 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4187DC7 = 1;
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

  BonusSelectSummonConfirmDialog__Close_25544028(this, 0LL, v2);
}


void __fastcall BonusSelectSummonConfirmDialog__Close_25544028(
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
  System_Action_o *v15; // x20

  if ( (byte_4187DBB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&AtlasManager_TypeInfo, v10);
    sub_B2C35C(&Method_BonusSelectSummonConfirmDialog__Close_b__24_0__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4187DBB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v14);
  CommonUI__SetFadeMaskCollider(Instance, 1, 0LL);
  v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_BonusSelectSummonConfirmDialog__Close_b__24_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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
  GachaBonusSelectEntity_array *v13; // x23
  signed int max_length; // w8
  unsigned int v15; // w24
  GachaBonusSelectEntity_o *v16; // x21
  int32_t slot; // w22
  BonusSelectSummonPartyOrganizationListViewItem_o *v18; // x20
  const MethodInfo *v19; // x4
  struct UnityEngine_GameObject_o *prefab; // x21
  UnityEngine_Transform_o *transform; // x22
  BonusSelectSummonPartyOrganizationListViewObject_o *Component_srcLineSprite; // x21
  BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *v23; // x22
  const MethodInfo *v24; // x3
  __int64 v25; // x0
  GachaBonusSelectEntity_array *entityArray; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4187DBD & 1) == 0 )
  {
    sub_B2C35C(&Method_BonusSelectSummonConfirmDialog_OnClick__, method);
    sub_B2C35C(&BonusSelectSummonPartyOrganizationListViewItem_TypeInfo, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_GachaBonusSelectMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__, v7);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo, v10);
    byte_4187DBD = 1;
  }
  entityArray = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GachaBonusSelectMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  Master_WarQuestSelectionMaster = (GachaBonusSelectMaster_o *)GachaBonusSelectMaster__TryGetEntityArray(
                                                                 Master_WarQuestSelectionMaster,
                                                                 &entityArray,
                                                                 this->fields.gachaId,
                                                                 0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    v13 = entityArray;
    if ( !entityArray )
      goto LABEL_22;
    max_length = entityArray->max_length;
    if ( max_length >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        if ( v15 >= max_length )
        {
          v25 = sub_B2C460(Master_WarQuestSelectionMaster);
          sub_B2C400(v25, 0LL);
        }
        v16 = v13->m_Items[v15];
        if ( !v16 )
          break;
        slot = v16->fields.slot;
        v18 = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B2C42C(BonusSelectSummonPartyOrganizationListViewItem_TypeInfo);
        BonusSelectSummonPartyOrganizationListViewItem___ctor(v18, slot, 0LL, v16, v19);
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
                                                                       (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
        if ( !Master_WarQuestSelectionMaster )
          break;
        Component_srcLineSprite = (BonusSelectSummonPartyOrganizationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                          (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___);
        v23 = (BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *)sub_B2C42C(BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo);
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent___ctor(
          v23,
          (Il2CppObject *)this,
          (intptr_t)Method_BonusSelectSummonConfirmDialog_OnClick__,
          0LL);
        if ( !Component_srcLineSprite )
          break;
        BonusSelectSummonPartyOrganizationListViewObject__Init(Component_srcLineSprite, v18, v23, v24);
        Master_WarQuestSelectionMaster = (GachaBonusSelectMaster_o *)this->fields.itemList;
        if ( !Master_WarQuestSelectionMaster )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__);
        max_length = v13->max_length;
        if ( (int)++v15 >= max_length )
          return;
      }
LABEL_22:
      sub_B2C434(Master_WarQuestSelectionMaster, v12);
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
  __int64 v7; // x1
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v18; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187DBC & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4187DBC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B2C434(0LL, v7);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v20.fields.current )
      sub_B2C434(0LL, v9);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v20.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v18 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v11, v12, v13, v14, v15, v16);
    System_Action__Invoke(v18, 0LL);
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

  if ( (byte_4187DBF & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4187DBF = 1;
  }
  enableBtn = this->fields.enableBtn;
  if ( !enableBtn
    || (BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(enableBtn, 1, 0LL),
        BonusSelectSummonConfirmDialog__SetBackBtn(this, v5),
        (enableBtn = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(enableBtn, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)enableBtn, 0LL, 0LL);
}


SelectBonusData_o *__fastcall BonusSelectSummonConfirmDialog__GetSelectBonusData(
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
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  __int64 v13; // x1
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  __int64 v15; // x26
  __int64 v16; // x27
  _BOOL8 v17; // x0
  __int64 v18; // x1
  _QWORD *monitor; // x8
  __int64 v20; // x9
  int32_t v21; // w21
  int32_t v22; // w22
  __int64 v23; // x8
  int32_t v24; // w24
  int32_t v25; // w23
  SelectBonus_o *v26; // x25
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x21
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  BonusSelectSummonConfirmDialog_o *v38; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4187DC3 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_SelectBonus__Add__, v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_SelectBonus__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SelectBonus___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_SelectBonus__TypeInfo, v9);
    sub_B2C35C(&SelectBonusData_TypeInfo, v10);
    sub_B2C35C(&SelectBonus_TypeInfo, v11);
    byte_4187DC3 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SelectBonus__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SelectBonus___ctor__);
  itemList = this->fields.itemList;
  v38 = this;
  if ( !itemList )
    goto LABEL_30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  v40 = v39;
  v15 = 0LL;
  v16 = 0LL;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    if ( !v17 )
      break;
    if ( !v40.fields.current )
      sub_B2C434(v17, v18);
    monitor = v40.fields.current[7].monitor;
    if ( !monitor )
      sub_B2C434(v17, v18);
    v20 = monitor[16];
    if ( v20 )
      v16 = monitor[16];
    if ( v20 )
    {
      if ( !v16 )
        sub_B2C434(v17, v18);
      v21 = *(_DWORD *)(v16 + 20);
      v22 = *(_DWORD *)(v20 + 24);
    }
    else
    {
      v21 = -1;
      v22 = -1;
    }
    v23 = monitor[17];
    if ( v23 )
      v15 = v23;
    if ( v23 )
    {
      if ( !v15 )
        sub_B2C434(v17, v18);
      v24 = *(_DWORD *)(v15 + 20);
      v25 = *(_DWORD *)(v23 + 24);
    }
    else
    {
      v25 = -1;
      v24 = -1;
    }
    v26 = (SelectBonus_o *)sub_B2C42C(SelectBonus_TypeInfo);
    SelectBonus___ctor(v26, v21, v22, v24, v25, 0LL);
    if ( !v12 )
      sub_B2C434(v27, v28);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v12,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SelectBonus__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  v29 = sub_B2C42C(SelectBonusData_TypeInfo);
  SelectBonusData___ctor((SelectBonusData_o *)v29, 0LL);
  if ( !v29 || (*(_DWORD *)(v29 + 16) = v38->fields.gachaId, !v12) )
LABEL_30:
    sub_B2C434(itemList, v13);
  v30 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_SelectBonus__ToArray__);
  *(_QWORD *)(v29 + 24) = v30;
  sub_B2C2F8((BattleServantConfConponent_o *)(v29 + 24), v30, v31, v32, v33, v34, v35, v36);
  return (SelectBonusData_o *)v29;
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
  const MethodInfo *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct UnityEngine_GameObject_o *OrganizationListViewItemPrefab_k__BackingField; // x1
  struct BonusSelectSummonPartyServantSelectMenu_o **p_servantSelectMenu; // x21
  UnityEngine_Object_o *servantSelectMenu; // x22
  struct UnityEngine_GameObject_o *ServantSelectMenuPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x22
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_4187DB9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___, assetManager);
    sub_B2C35C(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo, v6);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject____67450600, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    byte_4187DB9 = 1;
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
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.prefab,
      (System_Int32_array **)OrganizationListViewItemPrefab_k__BackingField,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
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
                                               (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_GameObject____67450600);
    if ( !titleLabel )
LABEL_28:
      sub_B2C434(titleLabel, v12);
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       titleLabel,
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___);
    *p_servantSelectMenu = (struct BonusSelectSummonPartyServantSelectMenu_o *)Component_srcLineSprite;
    sub_B2C2F8(
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
  BonusSelectSummonPartyServantSelectMenu__Init((BonusSelectSummonPartyServantSelectMenu_o *)titleLabel, v12);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)v31;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *v14; // x21
  BonusSelectSummonConfirmDialog___c_c *v15; // x0
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__29_0; // x22
  Il2CppObject *v18; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4187DC0 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___, method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v5);
    sub_B2C35C(&Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__, v6);
    sub_B2C35C(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo, v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v8);
    sub_B2C35C(&Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__, v9);
    sub_B2C35C(&BonusSelectSummonConfirmDialog___c_TypeInfo, v10);
    byte_4187DC0 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v27.fields.current )
      sub_B2C434(0LL, v12);
    BonusSelectSummonPartyOrganizationListViewObject__Modfy(
      (BonusSelectSummonPartyOrganizationListViewObject_o *)v27.fields.current,
      v12);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  buttonDecide = this->fields.buttonDecide;
  v14 = (System_Collections_Generic_List_T__o *)this->fields.itemList;
  v15 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  if ( (BYTE3(BonusSelectSummonConfirmDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo);
    v15 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__29_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__29_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__29_0,
      v18,
      Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__);
    v19 = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    v19->__9__29_0 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__29_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v19->__9__29_0,
      (System_Int32_array **)_9__29_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(v14, (System_Func_T__bool__o *)_9__29_0, (const MethodInfo_17266AC *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
LABEL_19:
    sub_B2C434(itemList, method);
  ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
    buttonDecide,
    ((unsigned __int8)itemList & 1) == 0,
    buttonDecide->klass->vtable._6_OnInit.methodPtr);
  BonusSelectSummonConfirmDialog__SaveSelectBonusData(this, v26);
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
  ServantLeaderInfo_o *v29; // x21
  ServantStatusDialog_EndDelegate_o *v30; // x22
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  System_Collections_Generic_List_int__o *v33; // x21
  _BOOL8 v34; // x0
  __int64 v35; // x1
  _QWORD *monitor; // x8
  __int64 v37; // x8
  __int64 v38; // x22
  __int64 v39; // x23
  __int64 v40; // x0
  BonusSelectSummonPartyServantSelectMenu_o *servantSelectMenu; // x22
  System_Int32_array *v42; // x21
  System_Action_o *v43; // x23
  const MethodInfo *v44; // x4
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  v6 = this;
  if ( (byte_4187DBE & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, memberItem);
    sub_B2C35C(&Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__, v7);
    sub_B2C35C(&Method_BonusSelectSummonConfirmDialog_OnClick__, v8);
    sub_B2C35C(&Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__, v9);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      v11);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v17);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_B2C35C(&ServantLeaderInfo_TypeInfo, v20);
    this = (BonusSelectSummonConfirmDialog_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v21);
    byte_4187DBE = 1;
  }
  memset(&v46, 0, sizeof(v46));
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
          v22 = (_QWORD *)sub_B2C364(Method_BonusSelectSummonConfirmDialog_OnClick__);
        v23 = (System_Reflection_MethodBase_o *)sub_B2C340(v22, v22[3]);
        OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0LL);
        this = (BonusSelectSummonConfirmDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          *(_QWORD *)&v47.fields.currentCryptoKey = v27;
          *(_QWORD *)&v47.fields.fakeValue = v26;
          v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v47, 0LL);
          v29 = (ServantLeaderInfo_o *)sub_B2C42C(ServantLeaderInfo_TypeInfo);
          ServantLeaderInfo___ctor_29329736(v29, v28, 0, 1, 0LL);
          v30 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v30,
            (Il2CppObject *)v6,
            Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__,
            0LL);
          if ( v25 )
          {
            CommonUI__OpenServantStatusDialog_17984076(v25, 7, v29, v30, 0LL);
            return;
          }
        }
      }
LABEL_40:
      sub_B2C434(this, memberItem);
    }
  }
  else
  {
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.enableBtn;
    if ( !this )
      goto LABEL_40;
    BonusSelectSummonConfirmDialog_ClickDelegate__Invoke((BonusSelectSummonConfirmDialog_ClickDelegate_o *)this, 0, 0LL);
    v31 = Method_BonusSelectSummonConfirmDialog_OnClick__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClick__ + 75) & 2) != 0 )
      v31 = (_QWORD *)sub_B2C364(Method_BonusSelectSummonConfirmDialog_OnClick__);
    v32 = (System_Reflection_MethodBase_o *)sub_B2C340(v31, v31[3]);
    OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0LL);
    v33 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v33,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.itemList;
    if ( !this )
      goto LABEL_40;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v45,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    v46 = v45;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v46,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
      if ( !v34 )
        break;
      if ( !v46.fields.current )
        sub_B2C434(v34, v35);
      monitor = v46.fields.current[7].monitor;
      if ( !monitor )
        sub_B2C434(v34, v35);
      v37 = monitor[15];
      if ( v37 )
      {
        v39 = *(_QWORD *)(v37 + 16);
        v38 = *(_QWORD *)(v37 + 24);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v48.fields.currentCryptoKey = v39;
        *(_QWORD *)&v48.fields.fakeValue = v38;
        v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v48, 0LL);
        if ( !v33 )
          sub_B2C434(v40, (unsigned int)v40);
        System_Collections_Generic_List_int___Add(
          v33,
          v40,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v46,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
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
    if ( !v33 )
      goto LABEL_40;
    servantSelectMenu = v6->fields.servantSelectMenu;
    v42 = System_Collections_Generic_List_int___ToArray(
            v33,
            (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
    v43 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v43, (Il2CppObject *)v6, Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__, 0LL);
    if ( !servantSelectMenu )
      goto LABEL_40;
    BonusSelectSummonPartyServantSelectMenu__Open(servantSelectMenu, memberItem, v42, v43, v44);
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

  if ( (byte_4187DC5 & 1) == 0 )
  {
    sub_B2C35C(&Method_BonusSelectSummonConfirmDialog_OnClickCancel__, method);
    byte_4187DC5 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_BonusSelectSummonConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_BonusSelectSummonConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(clickFunc, 0, 0LL);
    BonusSelectSummonConfirmDialog__Close_25544028(this, 0LL, v5);
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

  if ( (byte_4187DC4 & 1) == 0 )
  {
    sub_B2C35C(&Method_BonusSelectSummonConfirmDialog_OnClickDecide__, method);
    byte_4187DC4 = 1;
  }
  isButtonEnable = this->fields.isButtonEnable;
  v4 = Method_BonusSelectSummonConfirmDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B2C364(Method_BonusSelectSummonConfirmDialog_OnClickDecide__);
  v5 = (System_Reflection_MethodBase_o *)sub_B2C340(v4, v4[3]);
  if ( isButtonEnable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
    BonusSelectSummonConfirmDialog__Close_25544028(this, 0LL, v6);
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
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  UILabel_o *buttonDecideLabel; // x21
  UILabel_o *buttonCancelLabel; // x21
  System_Action_o *v58; // x19

  if ( (byte_4187DBA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&gachaId);
    sub_B2C35C(&AtlasManager_TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__, v15);
    sub_B2C35C(&BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_12419/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, v17);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v18);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v19);
    sub_B2C35C(&StringLiteral_12421/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/, v20);
    byte_4187DBA = 1;
  }
  v21 = sub_B2C42C(BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo);
  BonusSelectSummonConfirmDialog___c__DisplayClass21_0___ctor(
    (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_15;
  *(_QWORD *)(v21 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = endOpenCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v21 + 24),
    (System_Int32_array **)endOpenCallback,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.clickFunc = func;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  this->fields.enableBtn = enableBtn;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.enableBtn,
    (System_Int32_array **)enableBtn,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.tryGetBonusSelectData = tryGetBonusSelectData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tryGetBonusSelectData,
    (System_Int32_array **)tryGetBonusSelectData,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this->fields.gachaId = gachaId;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12421/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, v22, 0LL);
  messageLabel = this->fields.messageLabel;
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12419/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, v22, 0LL),
        buttonDecideLabel = this->fields.buttonDecideLabel,
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
        !buttonDecideLabel)
    || (UILabel__set_text(buttonDecideLabel, v22, 0LL),
        buttonCancelLabel = this->fields.buttonCancelLabel,
        v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !buttonCancelLabel) )
  {
LABEL_15:
    sub_B2C434(v22, v23);
  }
  UILabel__set_text(buttonCancelLabel, v22, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v58 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v58,
    (Il2CppObject *)v21,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v58, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SaveSelectBonusData(
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x21
  const MethodInfo *v20; // x1
  SelectBonusData_o *SelectBonusData; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v29; // x19
  SummonControl_c *v30; // x0
  Il2CppObject *String_35342888; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v34; // x22
  int size; // w8
  int32_t v36; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x2
  WarBoardUiData_SaveData_array *v39; // x19
  System_String_o *Empty; // x19
  SummonControl_c *v41; // x0

  if ( (byte_4187DC2 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_SelectBonusData___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_SelectBonusData___, v3);
    sub_B2C35C(&Method_System_Func_SelectBonusData__bool___ctor__, v4);
    sub_B2C35C(&System_Func_SelectBonusData__bool__TypeInfo, v5);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_SelectBonusData___, v6);
    sub_B2C35C(&JsonManager_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SelectBonusData__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SelectBonusData___ctor__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_SelectBonusData__get_Item__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_SelectBonusData__set_Item__, v13);
    sub_B2C35C(&System_Collections_Generic_List_SelectBonusData__TypeInfo, v14);
    sub_B2C35C(&string_TypeInfo, v15);
    sub_B2C35C(&SummonControl_TypeInfo, v16);
    sub_B2C35C(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__, v17);
    sub_B2C35C(&BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo, v18);
    byte_4187DC2 = 1;
  }
  v19 = sub_B2C42C(BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo);
  BonusSelectSummonConfirmDialog___c__DisplayClass31_0___ctor(
    (BonusSelectSummonConfirmDialog___c__DisplayClass31_0_o *)v19,
    0LL);
  SelectBonusData = BonusSelectSummonConfirmDialog__GetSelectBonusData(this, v20);
  if ( !v19 )
    goto LABEL_36;
  *(_QWORD *)(v19 + 16) = SelectBonusData;
  v29 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v19 + 16);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v19 + 16),
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
  String_35342888 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35342888(
                                      v30->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SelectBonusData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_35342888, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v33 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                 String_35342888,
                                                                 (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                                    v33,
                                                                                                    (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_SelectBonusData___);
  }
  v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_SelectBonusData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v34,
    (Il2CppObject *)v19,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_SelectBonusData__bool___ctor__);
  SelectBonusData = (SelectBonusData_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                           (System_Collections_Generic_List_T__o *)v32,
                                           (System_Func_T__bool__o *)v34,
                                           (const MethodInfo_17266AC *)Method_BasicHelper_Any_SelectBonusData___);
  if ( ((unsigned __int8)SelectBonusData & 1) != 0 )
  {
    if ( !v32 )
      goto LABEL_36;
    size = v32->fields._size;
    if ( size >= 1 )
    {
      v36 = 0;
      while ( 1 )
      {
        if ( size <= (unsigned int)v36 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v37 = v32->fields._items->m_Items[v36];
        if ( !v37 )
          break;
        v38 = *v29;
        if ( !*v29 )
          break;
        if ( v37->fields.missionTargetId == v38->fields.missionTargetId )
          System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v32,
            v36,
            (WarBoardManager_TaskList_o *)v38,
            (const MethodInfo_2EF41B8 *)Method_System_Collections_Generic_List_SelectBonusData__set_Item__);
        size = v32->fields._size;
        if ( ++v36 >= size )
          goto LABEL_26;
      }
LABEL_36:
      sub_B2C434(SelectBonusData, v22);
    }
  }
  else
  {
    if ( !v32 )
      goto LABEL_36;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v32,
      *v29,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SelectBonusData__Add__);
  }
LABEL_26:
  if ( v32->fields._size <= 0 )
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  else
  {
    v39 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Empty = JsonManager__toJson(&v39->obj, 0, 0, 0LL);
  }
  v41 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v41 = SummonControl_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v41->static_fields->BONUS_SELECTSUMMON_SAVEKEY, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SetBackBtn(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_4187DC6 & 1) == 0 )
  {
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_15477/*"Window/CancelButton"*/, v3);
    byte_4187DC6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21105064(transform, (System_String_o *)StringLiteral_15477/*"Window/CancelButton"*/, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SetLoadSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *tryGetBonusSelectData; // x0
  struct SelectBonus_array *selectBonusDatas; // x20
  __int64 v8; // x8
  int v9; // w25
  unsigned __int64 v10; // x21
  SelectBonus_o *v11; // x28
  _BOOL8 v12; // x0
  __int64 v13; // x1
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

  if ( (byte_4187DC1 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v5);
    byte_4187DC1 = 1;
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
      v8 = *(_QWORD *)&selectBonusDatas->max_length;
      if ( (int)v8 >= 1 )
      {
        v9 = 0;
        v10 = 0LL;
        while ( 1 )
        {
          if ( v10 >= (unsigned int)v8 )
          {
            v19 = sub_B2C460(tryGetBonusSelectData);
            sub_B2C400(v19, 0LL);
          }
          tryGetBonusSelectData = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)this->fields.itemList;
          if ( !tryGetBonusSelectData )
            break;
          v11 = selectBonusDatas->m_Items[v10];
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v20,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)tryGetBonusSelectData,
            (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
          v22 = *(System_Collections_Generic_List_Enumerator_T__o *)v20;
          while ( 1 )
          {
            v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v22,
                    (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
            if ( !v12 )
              break;
            if ( !v22.fields.current )
              sub_B2C434(v12, v13);
            monitor = (BonusSelectSummonPartyOrganizationListViewItem_o *)v22.fields.current[7].monitor;
            if ( !monitor )
              sub_B2C434(v12, v13);
            gachaBonusSelectEntity = monitor->fields.gachaBonusSelectEntity;
            if ( gachaBonusSelectEntity )
            {
              if ( !v11 )
                sub_B2C434(v12, v13);
              slot = gachaBonusSelectEntity->fields.slot;
              if ( slot == v11->fields.slot )
              {
                if ( !data )
                  sub_B2C434(v12, v13);
                BonusSelectSummonPartyOrganizationListViewItem__Modify_25550220(
                  monitor,
                  data->fields.gachaId,
                  slot,
                  v11->fields.giftId,
                  v14);
              }
            }
          }
          *(_DWORD *)&v20[4 * v9 + 24] = 168;
          v9 = ++v21;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v22,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
          if ( v9 )
          {
            v18 = v9 - 1;
            if ( *(_DWORD *)&v20[4 * v9 + 20] == 168 )
            {
              --v9;
              v21 = v18;
            }
          }
          LODWORD(v8) = selectBonusDatas->max_length;
          if ( (__int64)++v10 >= (int)v8 )
            goto LABEL_29;
        }
LABEL_31:
        sub_B2C434(tryGetBonusSelectData, method);
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

  if ( (byte_4187DC8 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4187DC8 = 1;
  }
  BonusSelectSummonConfirmDialog__EndClose(this, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
    sub_B2C434(enableBtn, v3);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4184E9C & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isDecide);
    byte_4184E9C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_ClickDelegate__EndInvoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isDecide, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isDecide, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isDecide, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isDecide,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isDecide, v22);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4184E9D & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, memberItem);
    byte_4184E9D = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)memberItem;
  v11[1] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__EndInvoke(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v13; // x3
  BonusSelectSummonPartyOrganizationListViewItem_c *v14; // x8
  unsigned __int64 v15; // x10
  int32_t *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  unsigned int v19; // w24
  __int64 v20; // x0
  __int64 v21; // x3
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  _DWORD *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  void (__fastcall **v28)(BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD); // x0
  __int64 v29; // x0
  void (__fastcall **v30)(__int64 *, BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD); // x0
  BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *v31; // x8
  __int64 v32; // x22
  __int64 *v33; // x23
  void (__fastcall *v34)(BonusSelectSummonPartyOrganizationListViewItem_o *, bool, __int64); // x24
  char v35; // w0
  int v36; // w8
  char v37; // w24
  char v38; // w0
  __int64 v39; // x3
  __int64 v40; // x8
  __int64 v41; // x1
  __int64 v42; // x2
  unsigned __int64 v43; // x10
  _DWORD *v44; // x11
  char v45; // w23
  char v46; // w0
  __int64 v47; // x3
  BonusSelectSummonPartyOrganizationListViewItem_c *klass; // x8
  __int64 v49; // x1
  __int64 v50; // x2
  unsigned __int64 v51; // x10
  int32_t *p_offset; // x11
  BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *v53; // [xsp+8h] [xbp-48h] BYREF

  v53 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v53;
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
      v31 = v9[i];
      v33 = *(__int64 **)&v31->fields.method;
      v32 = *(_QWORD *)&v31->fields.extra_arg;
      v34 = *(void (__fastcall **)(BonusSelectSummonPartyOrganizationListViewItem_o *, bool, __int64))&v31->fields.method_ptr;
      if ( *(__int16 *)(v32 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v31->fields.extra_arg, memberItem, isLongTap, method);
      v35 = sub_B2C38C(v32);
      v36 = *(unsigned __int8 *)(v32 + 74);
      if ( (v35 & 1) != 0 )
      {
        if ( v36 == 2 )
          goto LABEL_58;
      }
      else
      {
        if ( v36 != 2 )
        {
          if ( *(__int16 *)(v32 + 72) != -1 && this->fields.m_target )
          {
            v45 = sub_B2C384(v32);
            v46 = sub_B2C788(v32);
            if ( (v45 & 1) != 0 )
            {
              if ( (v46 & 1) != 0 )
              {
                klass = memberItem->klass;
                v49 = *(_QWORD *)(v32 + 24);
                v50 = *(unsigned __int16 *)(v32 + 72);
                if ( *(_WORD *)&memberItem->klass->_2.bitflags1 )
                {
                  v51 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v49 )
                  {
                    ++v51;
                    p_offset += 4;
                    if ( v51 >= *(unsigned __int16 *)&memberItem->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v50);
                }
                else
                {
LABEL_57:
                  v27 = sub_AC5258(memberItem, v49, v50, v47);
                }
                v18 = *(_QWORD *)(v27 + 8);
              }
              else
              {
                v18 = *((_QWORD *)&memberItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72));
              }
              v28 = (void (__fastcall **)(BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))sub_B2C40C(v18, v32);
              (*v28)(memberItem, isLongTap, v28);
            }
            else
            {
              v11 = *(unsigned __int16 *)(v32 + 72);
              if ( (v46 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v32);
                v14 = memberItem->klass;
                if ( *(_WORD *)&memberItem->klass->_2.bitflags1 )
                {
                  v15 = 0LL;
                  v16 = &v14->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v16 - 1) != class_0 )
                  {
                    ++v15;
                    v16 += 4;
                    if ( v15 >= *(unsigned __int16 *)&memberItem->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v17 = (__int64)(&v14->vtable._0_Equals.method + 2 * (int)(*v16 + v11));
                }
                else
                {
LABEL_11:
                  v17 = sub_AC5258(memberItem, class_0, v11, v13);
                }
                (*(void (__fastcall **)(BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))v17)(
                  memberItem,
                  isLongTap,
                  *(_QWORD *)(v17 + 8));
              }
              else
              {
                (*((void (__fastcall **)(BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))&memberItem->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v32 + 72)))(
                  memberItem,
                  isLongTap,
                  *((_QWORD *)&memberItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v34(memberItem, isLongTap, v32);
          continue;
        }
        if ( !v33 )
          goto LABEL_58;
        if ( *(__int16 *)(v32 + 72) != -1 && (*(_BYTE *)(*v33 + 277) & 1) == 0 && this->fields.m_target )
        {
          v37 = sub_B2C384(v32);
          v38 = sub_B2C788(v32);
          if ( (v37 & 1) != 0 )
          {
            if ( (v38 & 1) != 0 )
            {
              v40 = *v33;
              v41 = *(_QWORD *)(v32 + 24);
              v42 = *(unsigned __int16 *)(v32 + 72);
              if ( *(_WORD *)(*v33 + 298) )
              {
                v43 = 0LL;
                v44 = (_DWORD *)(*(_QWORD *)(v40 + 176) + 8LL);
                while ( *((_QWORD *)v44 - 1) != v41 )
                {
                  ++v43;
                  v44 += 4;
                  if ( v43 >= *(unsigned __int16 *)(*v33 + 298) )
                    goto LABEL_48;
                }
                v29 = v40 + 16LL * (*v44 + (int)v42) + 312;
              }
              else
              {
LABEL_48:
                v29 = sub_AC5258(v33, v41, v42, v39);
              }
              v26 = *(_QWORD *)(v29 + 8);
            }
            else
            {
              v26 = *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320);
            }
            v30 = (void (__fastcall **)(__int64 *, BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))sub_B2C40C(v26, v32);
            (*v30)(v33, memberItem, isLongTap, v30);
          }
          else
          {
            v19 = *(unsigned __int16 *)(v32 + 72);
            if ( (v38 & 1) != 0 )
            {
              v20 = j_il2cpp_method_get_class_0(v32);
              v22 = *v33;
              if ( *(_WORD *)(*v33 + 298) )
              {
                v23 = 0LL;
                v24 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
                while ( *((_QWORD *)v24 - 1) != v20 )
                {
                  ++v23;
                  v24 += 4;
                  if ( v23 >= *(unsigned __int16 *)(*v33 + 298) )
                    goto LABEL_19;
                }
                v25 = v22 + 16LL * (int)(*v24 + v19) + 312;
              }
              else
              {
LABEL_19:
                v25 = sub_AC5258(v33, v20, v19, v21);
              }
              (*(void (__fastcall **)(__int64 *, BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))v25)(
                v33,
                memberItem,
                isLongTap,
                *(_QWORD *)(v25 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 312))(
                v33,
                memberItem,
                isLongTap,
                *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, BonusSelectSummonPartyOrganizationListViewItem_o *, bool, __int64))v34)(
        v33,
        memberItem,
        isLongTap,
        v32);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4184E9E & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, data);
    byte_4184E9E = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)*data;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
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
  v4 = sub_B2C304(result, &v7, result);
  if ( !v4 )
    sub_B2C434(0LL, v5);
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
  __int64 v13; // x3
  __int64 v14; // x8
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  char v19; // w0
  __int64 v20; // x0
  __int64 (__fastcall **v21)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD); // x0
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v22; // x8
  __int64 *v23; // x22
  __int64 v24; // x23
  __int64 (__fastcall *v25)(SelectBonusData_o **, _QWORD, __int64); // x24
  char v26; // w24
  char v27; // w0
  __int64 v28; // x3
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *v35; // [xsp+8h] [xbp-48h] BYREF

  v35 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v35;
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
      v22 = v9[v10];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(__int64 (__fastcall **)(SelectBonusData_o **, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v22->fields.extra_arg, data, *(_QWORD *)&gachaId, method);
      if ( (sub_B2C38C(v24) & 1) != 0 )
      {
        if ( *(_BYTE *)(v24 + 74) == 2 )
          goto LABEL_37;
      }
      else
      {
        if ( !v23 )
        {
LABEL_37:
          v19 = v25(data, (unsigned int)gachaId, v24);
          goto LABEL_38;
        }
        if ( *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
        {
          v26 = sub_B2C384(v24);
          v27 = sub_B2C788(v24);
          if ( (v26 & 1) != 0 )
          {
            if ( (v27 & 1) != 0 )
            {
              v29 = *v23;
              v30 = *(_QWORD *)(v24 + 24);
              v31 = *(unsigned __int16 *)(v24 + 72);
              if ( *(_WORD *)(*v23 + 298) )
              {
                v32 = 0LL;
                v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
                while ( *((_QWORD *)v33 - 1) != v30 )
                {
                  ++v32;
                  v33 += 4;
                  if ( v32 >= *(unsigned __int16 *)(*v23 + 298) )
                    goto LABEL_35;
                }
                v20 = v29 + 16LL * (*v33 + (int)v31) + 312;
              }
              else
              {
LABEL_35:
                v20 = sub_AC5258(v23, v30, v31, v28);
              }
              v18 = *(_QWORD *)(v20 + 8);
            }
            else
            {
              v18 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
            }
            v21 = (__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))sub_B2C40C(v18, v24);
            v19 = (*v21)(v23, data, (unsigned int)gachaId, v21);
          }
          else
          {
            v11 = *(unsigned __int16 *)(v24 + 72);
            if ( (v27 & 1) != 0 )
            {
              class_0 = j_il2cpp_method_get_class_0(v24);
              v14 = *v23;
              if ( *(_WORD *)(*v23 + 298) )
              {
                v15 = 0LL;
                v16 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
                while ( *((_QWORD *)v16 - 1) != class_0 )
                {
                  ++v15;
                  v16 += 4;
                  if ( v15 >= *(unsigned __int16 *)(*v23 + 298) )
                    goto LABEL_11;
                }
                v17 = v14 + 16LL * (int)(*v16 + v11) + 312;
              }
              else
              {
LABEL_11:
                v17 = sub_AC5258(v23, class_0, v11, v13);
              }
              v19 = (*(__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))v17)(
                      v23,
                      data,
                      (unsigned int)gachaId,
                      *(_QWORD *)(v17 + 8));
            }
            else
            {
              v19 = (*(__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))(*v23
                                                                                               + 16LL
                                                                                               * *(unsigned __int16 *)(v24 + 72)
                                                                                               + 312))(
                      v23,
                      data,
                      (unsigned int)gachaId,
                      *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
            }
          }
          goto LABEL_38;
        }
      }
      v19 = ((__int64 (__fastcall *)(__int64 *, SelectBonusData_o **, _QWORD, __int64))v25)(
              v23,
              data,
              (unsigned int)gachaId,
              v24);
LABEL_38:
      if ( ++v10 == v8 )
        return v19 & 1;
    }
  }
  v19 = 0;
  return v19 & 1;
}


void __fastcall BonusSelectSummonConfirmDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4184E9A & 1) == 0 )
  {
    sub_B2C35C(&BonusSelectSummonConfirmDialog___c_TypeInfo, v1);
    byte_4184E9A = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BonusSelectSummonConfirmDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BonusSelectSummonConfirmDialog___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, itemObj);
  return listViewItem->fields.servantEntity == 0LL;
}


bool __fastcall BonusSelectSummonConfirmDialog___c___Open_b__21_1(
        BonusSelectSummonConfirmDialog___c_o *this,
        BonusSelectSummonPartyOrganizationListViewObject_o *itemObj,
        const MethodInfo *method)
{
  struct BonusSelectSummonPartyOrganizationListViewItem_o *listViewItem; // x8

  if ( !itemObj || (listViewItem = itemObj->fields.listViewItem) == 0LL )
    sub_B2C434(this, itemObj);
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
  struct BonusSelectSummonConfirmDialog_o *v14; // x8
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *itemList; // x21
  BonusSelectSummonConfirmDialog___c_c *v17; // x0
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__21_1; // x22
  Il2CppObject *v20; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *v21; // x0
  System_Action_o *_9__2; // x21
  BaseDialog_o *v23; // x20

  v2 = this;
  if ( (byte_4184E9B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AtlasManager_TypeInfo, v3);
    sub_B2C35C(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___, v4);
    sub_B2C35C(&Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__, v5);
    sub_B2C35C(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo, v6);
    sub_B2C35C(&Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__, v7);
    sub_B2C35C(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__, v8);
    sub_B2C35C(&BonusSelectSummonConfirmDialog___c_TypeInfo, v9);
    this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)sub_B2C35C(&StringLiteral_16703/*"bg_white"*/, v10);
    byte_4184E9B = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  messageBg = _4__this->fields.messageBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(messageBg, (System_String_o *)StringLiteral_16703/*"bg_white"*/, 0LL);
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
  v14 = v2->fields.__4__this;
  if ( !v14 )
    goto LABEL_25;
  buttonDecide = v14->fields.buttonDecide;
  itemList = (System_Collections_Generic_List_T__o *)v14->fields.itemList;
  v17 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  if ( (BYTE3(BonusSelectSummonConfirmDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo);
    v17 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__21_1,
      v20,
      Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__,
      (const MethodInfo_2711C04 *)Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__);
    v21 = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    v21->__9__21_1 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__21_1;
    sub_B2C2F8(&v21->__9__21_1, _9__21_1);
  }
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                                     itemList,
                                                                     (System_Func_T__bool__o *)_9__21_1,
                                                                     (const MethodInfo_17266AC *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
    goto LABEL_25;
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
                                                                     buttonDecide,
                                                                     ((unsigned __int8)this & 1) == 0,
                                                                     buttonDecide->klass->vtable._6_OnInit.methodPtr);
  _9__2 = v2->fields.__9__2;
  v23 = (BaseDialog_o *)v2->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_B2C2F8(&v2->fields.__9__2, _9__2);
  }
  if ( !v23 )
LABEL_25:
    sub_B2C434(this, method);
  BaseDialog__Open(v23, _9__2, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass21_0___Open_b__2(
        BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
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
    sub_B2C434(this, x);
  return x->fields.gachaId == data->fields.gachaId;
}