void __fastcall BonusSelectSummonConfirmDialog___ctor(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_42AFEDC & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42AFEDC = 1;
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

  BonusSelectSummonConfirmDialog__Close_24999840(this, 0LL, v2);
}


void __fastcall BonusSelectSummonConfirmDialog__Close_24999840(
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

  if ( (byte_42AFED0 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_BonusSelectSummonConfirmDialog__Close_b__24_0__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFED0 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v11);
  CommonUI__SetFadeMaskCollider(Instance, 1, 0LL);
  v12 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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

  if ( (byte_42AFED2 & 1) == 0 )
  {
    sub_B52984(&Method_BonusSelectSummonConfirmDialog_OnClick__);
    sub_B52984(&BonusSelectSummonPartyOrganizationListViewItem_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_GachaBonusSelectMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo);
    byte_42AFED2 = 1;
  }
  entityArray = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GachaBonusSelectMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
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
          v17 = sub_B52A88(Master_WarQuestSelectionMaster);
          sub_B52A28(v17, 0LL);
        }
        v8 = v5->m_Items[v7];
        if ( !v8 )
          break;
        slot = v8->fields.slot;
        v10 = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B52A54(BonusSelectSummonPartyOrganizationListViewItem_TypeInfo);
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
                                                                       (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
        if ( !Master_WarQuestSelectionMaster )
          break;
        Component_srcLineSprite = (BonusSelectSummonPartyOrganizationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                          (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                                          (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___);
        v15 = (BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *)sub_B52A54(BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo);
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
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__);
        max_length = v5->max_length;
        if ( (int)++v7 >= max_length )
          return;
      }
LABEL_22:
      sub_B52A5C(Master_WarQuestSelectionMaster, v4);
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

  if ( (byte_42AFED1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFED1 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B52A5C(0LL, v3);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B52A5C(0LL, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v16.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v14 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B52920(p_closeCallbackFunc, 0LL, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_42AFED4 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFED4 = 1;
  }
  enableBtn = this->fields.enableBtn;
  if ( !enableBtn
    || (BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(enableBtn, 1, 0LL),
        BonusSelectSummonConfirmDialog__SetBackBtn(this, v5),
        (enableBtn = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B52A5C(enableBtn, isDecide);
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

  if ( (byte_42AFED8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_SelectBonus__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_SelectBonus__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_SelectBonus___ctor__);
    sub_B52984(&System_Collections_Generic_List_SelectBonus__TypeInfo);
    sub_B52984(&SelectBonusData_TypeInfo);
    sub_B52984(&SelectBonus_TypeInfo);
    byte_42AFED8 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SelectBonus__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SelectBonus___ctor__);
  itemList = this->fields.itemList;
  v29 = this;
  if ( !itemList )
    goto LABEL_30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  v31 = v30;
  v6 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v31,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    if ( !v8 )
      break;
    if ( !v31.fields.current )
      sub_B52A5C(v8, v9);
    monitor = v31.fields.current[7].monitor;
    if ( !monitor )
      sub_B52A5C(v8, v9);
    v11 = monitor[16];
    if ( v11 )
      v7 = monitor[16];
    if ( v11 )
    {
      if ( !v7 )
        sub_B52A5C(v8, v9);
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
        sub_B52A5C(v8, v9);
      v15 = *(_DWORD *)(v6 + 20);
      v16 = *(_DWORD *)(v14 + 24);
    }
    else
    {
      v16 = -1;
      v15 = -1;
    }
    v17 = (SelectBonus_o *)sub_B52A54(SelectBonus_TypeInfo);
    SelectBonus___ctor(v17, v12, v13, v15, v16, 0LL);
    if ( !v3 )
      sub_B52A5C(v18, v19);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v3,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SelectBonus__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  v20 = sub_B52A54(SelectBonusData_TypeInfo);
  SelectBonusData___ctor((SelectBonusData_o *)v20, 0LL);
  if ( !v20 || (*(_DWORD *)(v20 + 16) = v29->fields.gachaId, !v3) )
LABEL_30:
    sub_B52A5C(itemList, v4);
  v21 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v3,
                                 (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_SelectBonus__ToArray__);
  *(_QWORD *)(v20 + 24) = v21;
  sub_B52920((BattleServantConfConponent_o *)(v20 + 24), v21, v22, v23, v24, v25, v26, v27);
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

  if ( (byte_42AFECE & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___);
    sub_B52984(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AFECE = 1;
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
    sub_B52920(
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
                                               (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    if ( !titleLabel )
LABEL_28:
      sub_B52A5C(titleLabel, v7);
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       titleLabel,
                                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___);
    *p_servantSelectMenu = (struct BonusSelectSummonPartyServantSelectMenu_o *)Component_srcLineSprite;
    sub_B52920(
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
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)v26;
  sub_B52920(
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

  if ( (byte_42AFED5 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__);
    sub_B52984(&Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__);
    sub_B52984(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    sub_B52984(&Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__);
    sub_B52984(&BonusSelectSummonConfirmDialog___c_TypeInfo);
    byte_42AFED5 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B52A5C(0LL, v4);
    BonusSelectSummonPartyOrganizationListViewObject__Modfy(
      (BonusSelectSummonPartyOrganizationListViewObject_o *)v19.fields.current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
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
    _9__29_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__29_0,
      v10,
      Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__);
    v11 = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    v11->__9__29_0 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__29_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v11->__9__29_0,
      (System_Int32_array **)_9__29_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(v6, (System_Func_T__bool__o *)_9__29_0, (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
LABEL_19:
    sub_B52A5C(itemList, method);
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
  if ( (byte_42AFED3 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__);
    sub_B52984(&Method_BonusSelectSummonConfirmDialog_OnClick__);
    sub_B52984(&Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__);
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantLeaderInfo_TypeInfo);
    this = (BonusSelectSummonConfirmDialog_o *)sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFED3 = 1;
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
          v7 = (_QWORD *)sub_B5298C(Method_BonusSelectSummonConfirmDialog_OnClick__);
        v8 = (System_Reflection_MethodBase_o *)sub_B52968(v7, v7[3]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
        this = (BonusSelectSummonConfirmDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
          v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v32, 0LL);
          v14 = (ServantLeaderInfo_o *)sub_B52A54(ServantLeaderInfo_TypeInfo);
          ServantLeaderInfo___ctor_29276080(v14, v13, 0, 1, 0LL);
          v15 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v15,
            (Il2CppObject *)v6,
            Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__,
            0LL);
          if ( v10 )
          {
            CommonUI__OpenServantStatusDialog_18171020(v10, 7, v14, v15, 0LL);
            return;
          }
        }
      }
LABEL_40:
      sub_B52A5C(this, memberItem);
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
      v16 = (_QWORD *)sub_B5298C(Method_BonusSelectSummonConfirmDialog_OnClick__);
    v17 = (System_Reflection_MethodBase_o *)sub_B52968(v16, v16[3]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
    v18 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v18,
      (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.itemList;
    if ( !this )
      goto LABEL_40;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v30,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    v31 = v30;
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v31,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
      if ( !v19 )
        break;
      if ( !v31.fields.current )
        sub_B52A5C(v19, v20);
      monitor = v31.fields.current[7].monitor;
      if ( !monitor )
        sub_B52A5C(v19, v20);
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
        v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v33, 0LL);
        if ( !v18 )
          sub_B52A5C(v25, (unsigned int)v25);
        System_Collections_Generic_List_int___Add(
          v18,
          v25,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v31,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
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
            (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
    v28 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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

  if ( (byte_42AFEDA & 1) == 0 )
  {
    sub_B52984(&Method_BonusSelectSummonConfirmDialog_OnClickCancel__);
    byte_42AFEDA = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_BonusSelectSummonConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_BonusSelectSummonConfirmDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(clickFunc, 0, 0LL);
    BonusSelectSummonConfirmDialog__Close_24999840(this, 0LL, v5);
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

  if ( (byte_42AFED9 & 1) == 0 )
  {
    sub_B52984(&Method_BonusSelectSummonConfirmDialog_OnClickDecide__);
    byte_42AFED9 = 1;
  }
  isButtonEnable = this->fields.isButtonEnable;
  v4 = Method_BonusSelectSummonConfirmDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B5298C(Method_BonusSelectSummonConfirmDialog_OnClickDecide__);
  v5 = (System_Reflection_MethodBase_o *)sub_B52968(v4, v4[3]);
  if ( isButtonEnable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
    BonusSelectSummonConfirmDialog__Close_24999840(this, 0LL, v6);
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

  if ( (byte_42AFECF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__);
    sub_B52984(&BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo);
    sub_B52984(&StringLiteral_12508/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/);
    sub_B52984(&StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/);
    sub_B52984(&StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B52984(&StringLiteral_12510/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/);
    byte_42AFECF = 1;
  }
  v13 = sub_B52A54(BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo);
  BonusSelectSummonConfirmDialog___c__DisplayClass21_0___ctor(
    (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_15;
  *(_QWORD *)(v13 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = endOpenCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)(v13 + 24),
    (System_Int32_array **)endOpenCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.clickFunc = func;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  this->fields.enableBtn = enableBtn;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.enableBtn,
    (System_Int32_array **)enableBtn,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.tryGetBonusSelectData = tryGetBonusSelectData;
  sub_B52920(
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
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12510/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, v14, 0LL);
  messageLabel = this->fields.messageLabel;
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_12508/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, v14, 0LL),
        buttonDecideLabel = this->fields.buttonDecideLabel,
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3295/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
        !buttonDecideLabel)
    || (UILabel__set_text(buttonDecideLabel, v14, 0LL),
        buttonCancelLabel = this->fields.buttonCancelLabel,
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3293/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !buttonCancelLabel) )
  {
LABEL_15:
    sub_B52A5C(v14, v15);
  }
  UILabel__set_text(buttonCancelLabel, v14, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v50 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
  Il2CppObject *String_35644948; // x22
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

  if ( (byte_42AFED7 & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_SelectBonusData___);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_SelectBonusData___);
    sub_B52984(&Method_System_Func_SelectBonusData__bool___ctor__);
    sub_B52984(&System_Func_SelectBonusData__bool__TypeInfo);
    sub_B52984(&Method_JsonManager_DeserializeArray_SelectBonusData___);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_SelectBonusData__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_SelectBonusData___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_SelectBonusData__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_SelectBonusData__set_Item__);
    sub_B52984(&System_Collections_Generic_List_SelectBonusData__TypeInfo);
    sub_B52984(&string_TypeInfo);
    sub_B52984(&SummonControl_TypeInfo);
    sub_B52984(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__);
    sub_B52984(&BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo);
    byte_42AFED7 = 1;
  }
  v3 = sub_B52A54(BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo);
  BonusSelectSummonConfirmDialog___c__DisplayClass31_0___ctor(
    (BonusSelectSummonConfirmDialog___c__DisplayClass31_0_o *)v3,
    0LL);
  SelectBonusData = BonusSelectSummonConfirmDialog__GetSelectBonusData(this, v4);
  if ( !v3 )
    goto LABEL_36;
  *(_QWORD *)(v3 + 16) = SelectBonusData;
  v13 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v3 + 16);
  sub_B52920(
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
  String_35644948 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35644948(
                                      v14->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SelectBonusData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_35644948, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                 String_35644948,
                                                                 (const MethodInfo_1F690B0 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                                    v17,
                                                                                                    (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_SelectBonusData___);
  }
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_SelectBonusData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v3,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_SelectBonusData__bool___ctor__);
  SelectBonusData = (SelectBonusData_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                           (System_Collections_Generic_List_T__o *)v16,
                                           (System_Func_T__bool__o *)v18,
                                           (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_SelectBonusData___);
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
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
            (const MethodInfo_2FF135C *)Method_System_Collections_Generic_List_SelectBonusData__set_Item__);
        size = v16->fields._size;
        if ( ++v20 >= size )
          goto LABEL_26;
      }
LABEL_36:
      sub_B52A5C(SelectBonusData, v6);
    }
  }
  else
  {
    if ( !v16 )
      goto LABEL_36;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v16,
      *v13,
      (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SelectBonusData__Add__);
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
            (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
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

  if ( (byte_42AFEDB & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    sub_B52984(&StringLiteral_15582/*"Window/CancelButton"*/);
    byte_42AFEDB = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21195324(transform, (System_String_o *)StringLiteral_15582/*"Window/CancelButton"*/, 0LL);
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

  if ( (byte_42AFED6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    byte_42AFED6 = 1;
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
            v16 = sub_B52A88(tryGetBonusSelectData);
            sub_B52A28(v16, 0LL);
          }
          tryGetBonusSelectData = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)this->fields.itemList;
          if ( !tryGetBonusSelectData )
            break;
          v8 = selectBonusDatas->m_Items[v7];
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v17,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)tryGetBonusSelectData,
            (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
          v19 = *(System_Collections_Generic_List_Enumerator_T__o *)v17;
          while ( 1 )
          {
            v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v19,
                   (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
            if ( !v9 )
              break;
            if ( !v19.fields.current )
              sub_B52A5C(v9, v10);
            monitor = (BonusSelectSummonPartyOrganizationListViewItem_o *)v19.fields.current[7].monitor;
            if ( !monitor )
              sub_B52A5C(v9, v10);
            gachaBonusSelectEntity = monitor->fields.gachaBonusSelectEntity;
            if ( gachaBonusSelectEntity )
            {
              if ( !v8 )
                sub_B52A5C(v9, v10);
              slot = gachaBonusSelectEntity->fields.slot;
              if ( slot == v8->fields.slot )
              {
                if ( !data )
                  sub_B52A5C(v9, v10);
                BonusSelectSummonPartyOrganizationListViewItem__Modify_25006032(
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
            (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
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
        sub_B52A5C(tryGetBonusSelectData, method);
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

  if ( (byte_42AFEDD & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFEDD = 1;
  }
  BonusSelectSummonConfirmDialog__EndClose(this, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
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
    sub_B52A5C(enableBtn, v3);
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
  sub_B52920(p_method);
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
  if ( (byte_42AD66D & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD66D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_ClickDelegate__EndInvoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, isDecide, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
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
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
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
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
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
            v16 = sub_AEB880(v21, class_0, v10, v12);
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
  sub_B52920(p_method);
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
  if ( (byte_42AD66E & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD66E = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)memberItem;
  v11[1] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  return (System_IAsyncResult_o *)sub_B52928(this, v11, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__EndInvoke(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v31->fields.extra_arg, memberItem, isLongTap, method);
      v35 = sub_B529B4(v32);
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
            v45 = sub_B529AC(v32);
            v46 = sub_B52DB0(v32);
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
                  v27 = sub_AEB880(memberItem, v49, v50, v47);
                }
                v18 = *(_QWORD *)(v27 + 8);
              }
              else
              {
                v18 = *((_QWORD *)&memberItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72));
              }
              v28 = (void (__fastcall **)(BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))sub_B52A34(v18, v32);
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
                  v17 = sub_AEB880(memberItem, class_0, v11, v13);
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
          v37 = sub_B529AC(v32);
          v38 = sub_B52DB0(v32);
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
                v29 = sub_AEB880(v33, v41, v42, v39);
              }
              v26 = *(_QWORD *)(v29 + 8);
            }
            else
            {
              v26 = *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320);
            }
            v30 = (void (__fastcall **)(__int64 *, BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))sub_B52A34(v26, v32);
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
                v25 = sub_AEB880(v33, v20, v19, v21);
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
  sub_B52920(p_method);
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
  if ( (byte_42AD66F & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    byte_42AD66F = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)*data;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B52928(this, v11, callback, object);
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
  v4 = sub_B5292C(result, &v7, result);
  if ( !v4 )
    sub_B52A5C(0LL, v5);
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
        sub_B52A40(*(_QWORD *)&v22->fields.extra_arg, data, *(_QWORD *)&gachaId, method);
      if ( (sub_B529B4(v24) & 1) != 0 )
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
          v26 = sub_B529AC(v24);
          v27 = sub_B52DB0(v24);
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
                v20 = sub_AEB880(v23, v30, v31, v28);
              }
              v18 = *(_QWORD *)(v20 + 8);
            }
            else
            {
              v18 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
            }
            v21 = (__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))sub_B52A34(v18, v24);
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
                v17 = sub_AEB880(v23, class_0, v11, v13);
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
  Il2CppObject *v1; // x19
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x0

  if ( (byte_42AD66B & 1) == 0 )
  {
    sub_B52984(&BonusSelectSummonConfirmDialog___c_TypeInfo);
    byte_42AD66B = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BonusSelectSummonConfirmDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BonusSelectSummonConfirmDialog___c_o *)v1;
  sub_B52920(static_fields);
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
    sub_B52A5C(this, itemObj);
  return listViewItem->fields.servantEntity == 0LL;
}


bool __fastcall BonusSelectSummonConfirmDialog___c___Open_b__21_1(
        BonusSelectSummonConfirmDialog___c_o *this,
        BonusSelectSummonPartyOrganizationListViewObject_o *itemObj,
        const MethodInfo *method)
{
  struct BonusSelectSummonPartyOrganizationListViewItem_o *listViewItem; // x8

  if ( !itemObj || (listViewItem = itemObj->fields.listViewItem) == 0LL )
    sub_B52A5C(this, itemObj);
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
  if ( (byte_42AD66C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
    sub_B52984(&Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__);
    sub_B52984(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    sub_B52984(&Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__);
    sub_B52984(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__);
    sub_B52984(&BonusSelectSummonConfirmDialog___c_TypeInfo);
    this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)sub_B52984(&StringLiteral_16818/*"bg_white"*/);
    byte_42AD66C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  messageBg = _4__this->fields.messageBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(messageBg, (System_String_o *)StringLiteral_16818/*"bg_white"*/, 0LL);
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
    _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__21_1,
      v12,
      Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__,
      (const MethodInfo_2BC90BC *)Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__);
    v13 = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    v13->__9__21_1 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__21_1;
    sub_B52920(&v13->__9__21_1);
  }
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                                     itemList,
                                                                     (System_Func_T__bool__o *)_9__21_1,
                                                                     (const MethodInfo_1A41C6C *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
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
    _9__2 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_B52920(&v2->fields.__9__2);
  }
  if ( !v15 )
LABEL_25:
    sub_B52A5C(this, method);
  BaseDialog__Open(v15, _9__2, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass21_0___Open_b__2(
        BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(this, x);
  return x->fields.gachaId == data->fields.gachaId;
}