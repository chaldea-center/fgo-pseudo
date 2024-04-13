void __fastcall BonusSelectSummonConfirmDialog___ctor(BonusSelectSummonConfirmDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8661 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8661 = 1;
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

  BonusSelectSummonConfirmDialog__Close_24912980(this, 0LL, v2);
}


void __fastcall BonusSelectSummonConfirmDialog__Close_24912980(
        BonusSelectSummonConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  CommonUI_o *Instance; // x0
  __int64 v20; // x1
  System_Action_o *v21; // x20

  if ( (byte_42E8655 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_BonusSelectSummonConfirmDialog__Close_b__24_0__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17, v18);
    byte_42E8655 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
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
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v20);
  CommonUI__SetFadeMaskCollider(Instance, 1, 0LL);
  v21 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_BonusSelectSummonConfirmDialog__Close_b__24_0__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v21, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__CreateList(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  GachaBonusSelectMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v30; // x1
  GachaBonusSelectEntity_array *v31; // x23
  signed int max_length; // w8
  unsigned int v33; // w24
  GachaBonusSelectEntity_o *v34; // x21
  int32_t slot; // w22
  BonusSelectSummonPartyOrganizationListViewItem_o *v36; // x20
  const MethodInfo *v37; // x4
  struct UnityEngine_GameObject_o *prefab; // x21
  UnityEngine_Transform_o *transform; // x22
  BonusSelectSummonPartyOrganizationListViewObject_o *Component_srcLineSprite; // x21
  BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *v41; // x22
  const MethodInfo *v42; // x3
  __int64 v43; // x0
  GachaBonusSelectEntity_array *entityArray; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E8657 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BonusSelectSummonConfirmDialog_OnClick__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BonusSelectSummonPartyOrganizationListViewItem_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_GachaBonusSelectMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo, v26, v27, v28);
    byte_42E8657 = 1;
  }
  entityArray = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (GachaBonusSelectMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  Master_WarQuestSelectionMaster = (GachaBonusSelectMaster_o *)GachaBonusSelectMaster__TryGetEntityArray(
                                                                 Master_WarQuestSelectionMaster,
                                                                 &entityArray,
                                                                 this->fields.gachaId,
                                                                 0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    v31 = entityArray;
    if ( !entityArray )
      goto LABEL_22;
    max_length = entityArray->max_length;
    if ( max_length >= 1 )
    {
      v33 = 0;
      while ( 1 )
      {
        if ( v33 >= max_length )
        {
          v43 = sub_B5D6C8(Master_WarQuestSelectionMaster);
          sub_B5D668(v43, 0LL);
        }
        v34 = v31->m_Items[v33];
        if ( !v34 )
          break;
        slot = v34->fields.slot;
        v36 = (BonusSelectSummonPartyOrganizationListViewItem_o *)sub_B5D694(BonusSelectSummonPartyOrganizationListViewItem_TypeInfo);
        BonusSelectSummonPartyOrganizationListViewItem___ctor(v36, slot, 0LL, v34, v37);
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
                                                                       (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
        if ( !Master_WarQuestSelectionMaster )
          break;
        Component_srcLineSprite = (BonusSelectSummonPartyOrganizationListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                          (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyOrganizationListViewObject___);
        v41 = (BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *)sub_B5D694(BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_TypeInfo);
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent___ctor(
          v41,
          (Il2CppObject *)this,
          (intptr_t)Method_BonusSelectSummonConfirmDialog_OnClick__,
          0LL);
        if ( !Component_srcLineSprite )
          break;
        BonusSelectSummonPartyOrganizationListViewObject__Init(Component_srcLineSprite, v36, v41, v42);
        Master_WarQuestSelectionMaster = (GachaBonusSelectMaster_o *)this->fields.itemList;
        if ( !Master_WarQuestSelectionMaster )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__Add__);
        max_length = v31->max_length;
        if ( (int)++v33 >= max_length )
          return;
      }
LABEL_22:
      sub_B5D69C(Master_WarQuestSelectionMaster, v30);
    }
  }
}


void __fastcall BonusSelectSummonConfirmDialog__EndClose(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x1
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v28; // x20
  struct System_Action_o *closeCallbackFunc; // t1
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8656 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42E8656 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  itemList = this->fields.itemList;
  if ( !itemList )
    sub_B5D69C(0LL, v17);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v30,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v30.fields.current )
      sub_B5D69C(0LL, v19);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v30.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v30,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v28 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v21, v22, v23, v24, v25, v26);
    System_Action__Invoke(v28, 0LL);
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
  __int64 v3; // x3
  BonusSelectSummonConfirmDialog_ClickDelegate_o *enableBtn; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42E8659 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E8659 = 1;
  }
  enableBtn = this->fields.enableBtn;
  if ( !enableBtn
    || (BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(enableBtn, 1, 0LL),
        BonusSelectSummonConfirmDialog__SetBackBtn(this, v6),
        (enableBtn = (BonusSelectSummonConfirmDialog_ClickDelegate_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(enableBtn, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)enableBtn, 0LL, 0LL);
}


SelectBonusData_o *__fastcall BonusSelectSummonConfirmDialog__GetSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  __int64 v33; // x1
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  __int64 v35; // x26
  __int64 v36; // x27
  _BOOL8 v37; // x0
  __int64 v38; // x1
  _QWORD *monitor; // x8
  __int64 v40; // x9
  int32_t v41; // w21
  int32_t v42; // w22
  __int64 v43; // x8
  int32_t v44; // w24
  int32_t v45; // w23
  SelectBonus_o *v46; // x25
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x21
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  BonusSelectSummonConfirmDialog_o *v58; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v59; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E865D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SelectBonus__Add__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SelectBonus__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SelectBonus___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_SelectBonus__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&SelectBonusData_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&SelectBonus_TypeInfo, v29, v30, v31);
    byte_42E865D = 1;
  }
  memset(&v60, 0, sizeof(v60));
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SelectBonus__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SelectBonus___ctor__);
  itemList = this->fields.itemList;
  v58 = this;
  if ( !itemList )
    goto LABEL_30;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v59,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  v60 = v59;
  v35 = 0LL;
  v36 = 0LL;
  while ( 1 )
  {
    v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v60,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
    if ( !v37 )
      break;
    if ( !v60.fields.current )
      sub_B5D69C(v37, v38);
    monitor = v60.fields.current[7].monitor;
    if ( !monitor )
      sub_B5D69C(v37, v38);
    v40 = monitor[16];
    if ( v40 )
      v36 = monitor[16];
    if ( v40 )
    {
      if ( !v36 )
        sub_B5D69C(v37, v38);
      v41 = *(_DWORD *)(v36 + 20);
      v42 = *(_DWORD *)(v40 + 24);
    }
    else
    {
      v41 = -1;
      v42 = -1;
    }
    v43 = monitor[17];
    if ( v43 )
      v35 = v43;
    if ( v43 )
    {
      if ( !v35 )
        sub_B5D69C(v37, v38);
      v44 = *(_DWORD *)(v35 + 20);
      v45 = *(_DWORD *)(v43 + 24);
    }
    else
    {
      v45 = -1;
      v44 = -1;
    }
    v46 = (SelectBonus_o *)sub_B5D694(SelectBonus_TypeInfo);
    SelectBonus___ctor(v46, v41, v42, v44, v45, 0LL);
    if ( !v32 )
      sub_B5D69C(v47, v48);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v32,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SelectBonus__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v60,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  v49 = sub_B5D694(SelectBonusData_TypeInfo);
  SelectBonusData___ctor((SelectBonusData_o *)v49, 0LL);
  if ( !v49 || (*(_DWORD *)(v49 + 16) = v58->fields.gachaId, !v32) )
LABEL_30:
    sub_B5D69C(itemList, v33);
  v50 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                                 (const MethodInfo_305910C *)Method_System_Collections_Generic_List_SelectBonus__ToArray__);
  *(_QWORD *)(v49 + 24) = v50;
  sub_B5D560((BattleServantConfConponent_o *)(v49 + 24), v50, v51, v52, v53, v54, v55, v56);
  return (SelectBonusData_o *)v49;
}


void __fastcall BonusSelectSummonConfirmDialog__Init(
        BonusSelectSummonConfirmDialog_o *this,
        BonusSelectSummonAssetManager_o *assetManager,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_Object_o *prefab; // x22
  UnityEngine_GameObject_o *titleLabel; // x0
  const MethodInfo *v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct UnityEngine_GameObject_o *OrganizationListViewItemPrefab_k__BackingField; // x1
  struct BonusSelectSummonPartyServantSelectMenu_o **p_servantSelectMenu; // x21
  UnityEngine_Object_o *servantSelectMenu; // x22
  struct UnityEngine_GameObject_o *ServantSelectMenuPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x22
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_42E8653 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___,
      (_DWORD)assetManager,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    byte_42E8653 = 1;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.prefab,
      (System_Int32_array **)OrganizationListViewItemPrefab_k__BackingField,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
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
                                               (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
    if ( !titleLabel )
LABEL_28:
      sub_B5D69C(titleLabel, v23);
    Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       titleLabel,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BonusSelectSummonPartyServantSelectMenu___);
    *p_servantSelectMenu = (struct BonusSelectSummonPartyServantSelectMenu_o *)Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.servantSelectMenu,
      Component_srcLineSprite,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  titleLabel = (UnityEngine_GameObject_o *)*p_servantSelectMenu;
  if ( !*p_servantSelectMenu )
    goto LABEL_28;
  BonusSelectSummonPartyServantSelectMenu__Init((BonusSelectSummonPartyServantSelectMenu_o *)titleLabel, v23);
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)v42;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemList,
    (System_Int32_array **)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *itemList; // x0
  const MethodInfo *v30; // x1
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *v32; // x21
  BonusSelectSummonConfirmDialog___c_c *v33; // x0
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__29_0; // x22
  Il2CppObject *v36; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x1
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E865A & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__, v23, v24, v25);
    sub_B5D5C4(&BonusSelectSummonConfirmDialog___c_TypeInfo, v26, v27, v28);
    byte_42E865A = 1;
  }
  memset(&v45, 0, sizeof(v45));
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__) )
  {
    if ( !v45.fields.current )
      sub_B5D69C(0LL, v30);
    BonusSelectSummonPartyOrganizationListViewObject__Modfy(
      (BonusSelectSummonPartyOrganizationListViewObject_o *)v45.fields.current,
      v30);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
  buttonDecide = this->fields.buttonDecide;
  v32 = (System_Collections_Generic_List_T__o *)this->fields.itemList;
  v33 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  if ( (BYTE3(BonusSelectSummonConfirmDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo);
    v33 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__29_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__29_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__29_0,
      v36,
      Method_BonusSelectSummonConfirmDialog___c__Modify_b__29_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__);
    v37 = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    v37->__9__29_0 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__29_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v37->__9__29_0,
      (System_Int32_array **)_9__29_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  itemList = (struct System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(v32, (System_Func_T__bool__o *)_9__29_0, (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
LABEL_19:
    sub_B5D69C(itemList, method);
  ((void (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
    buttonDecide,
    ((unsigned __int8)itemList & 1) == 0,
    buttonDecide->klass->vtable._6_OnInit.methodPtr);
  BonusSelectSummonConfirmDialog__SaveSelectBonusData(this, v44);
}


void __fastcall BonusSelectSummonConfirmDialog__OnClick(
        BonusSelectSummonConfirmDialog_o *this,
        BonusSelectSummonPartyOrganizationListViewItem_o *memberItem,
        bool isLongTap,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_o *v6; // x19
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int v43; // w1
  char v44; // w2
  __int64 v45; // x3
  int v46; // w1
  char v47; // w2
  __int64 v48; // x3
  int v49; // w1
  char v50; // w2
  __int64 v51; // x3
  _QWORD *v52; // x0
  System_Reflection_MethodBase_o *v53; // x0
  struct ServantEntity_o *servantEntity; // x8
  CommonUI_o *v55; // x20
  __int64 v56; // x21
  __int64 v57; // x22
  int32_t v58; // w22
  ServantLeaderInfo_o *v59; // x21
  ServantStatusDialog_EndDelegate_o *v60; // x22
  _QWORD *v61; // x0
  System_Reflection_MethodBase_o *v62; // x0
  System_Collections_Generic_List_int__o *v63; // x21
  _BOOL8 v64; // x0
  __int64 v65; // x1
  _QWORD *monitor; // x8
  __int64 v67; // x8
  __int64 v68; // x22
  __int64 v69; // x23
  __int64 v70; // x0
  BonusSelectSummonPartyServantSelectMenu_o *servantSelectMenu; // x22
  System_Int32_array *v72; // x21
  System_Action_o *v73; // x23
  const MethodInfo *v74; // x4
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v77; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v78; // 0:x0.16

  v6 = this;
  if ( (byte_42E8658 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)memberItem, isLongTap, method);
    sub_B5D5C4(&Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__, v7, v8, v9);
    sub_B5D5C4(&Method_BonusSelectSummonConfirmDialog_OnClick__, v10, v11, v12);
    sub_B5D5C4(&Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__, v13, v14, v15);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v16, v17, v18);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      v19,
      v20,
      v21);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v22,
      v23,
      v24);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v25,
      v26,
      v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v28, v29, v30);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v31,
      v32,
      v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v37, v38, v39);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v40, v41, v42);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&ServantLeaderInfo_TypeInfo, v46, v47, v48);
    this = (BonusSelectSummonConfirmDialog_o *)sub_B5D5C4(
                                                 &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                                 v49,
                                                 v50,
                                                 v51);
    byte_42E8658 = 1;
  }
  memset(&v76, 0, sizeof(v76));
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
        v52 = Method_BonusSelectSummonConfirmDialog_OnClick__;
        if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClick__ + 75) & 2) != 0 )
          v52 = (_QWORD *)sub_B5D5CC(Method_BonusSelectSummonConfirmDialog_OnClick__);
        v53 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v52, v52[3]);
        OverwriteAssetSoundName__PlaySystemSe(v53, 0, 0LL);
        this = (BonusSelectSummonConfirmDialog_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        servantEntity = memberItem->fields.servantEntity;
        if ( servantEntity )
        {
          v55 = (CommonUI_o *)this;
          v57 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
          v56 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v77.fields.currentCryptoKey = v57;
          *(_QWORD *)&v77.fields.fakeValue = v56;
          v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v77, 0LL);
          v59 = (ServantLeaderInfo_o *)sub_B5D694(ServantLeaderInfo_TypeInfo);
          ServantLeaderInfo___ctor_29348816(v59, v58, 0, 1, 0LL);
          v60 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v60,
            (Il2CppObject *)v6,
            Method_BonusSelectSummonConfirmDialog_EndShowServantStatusDialog__,
            0LL);
          if ( v55 )
          {
            CommonUI__OpenServantStatusDialog_18214956(v55, 7, v59, v60, 0LL);
            return;
          }
        }
      }
LABEL_40:
      sub_B5D69C(this, memberItem);
    }
  }
  else
  {
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.enableBtn;
    if ( !this )
      goto LABEL_40;
    BonusSelectSummonConfirmDialog_ClickDelegate__Invoke((BonusSelectSummonConfirmDialog_ClickDelegate_o *)this, 0, 0LL);
    v61 = Method_BonusSelectSummonConfirmDialog_OnClick__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClick__ + 75) & 2) != 0 )
      v61 = (_QWORD *)sub_B5D5CC(Method_BonusSelectSummonConfirmDialog_OnClick__);
    v62 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v61, v61[3]);
    OverwriteAssetSoundName__PlaySystemSe(v62, 0, 0LL);
    v63 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v63,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    this = (BonusSelectSummonConfirmDialog_o *)v6->fields.itemList;
    if ( !this )
      goto LABEL_40;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v75,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
    v76 = v75;
    while ( 1 )
    {
      v64 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v76,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
      if ( !v64 )
        break;
      if ( !v76.fields.current )
        sub_B5D69C(v64, v65);
      monitor = v76.fields.current[7].monitor;
      if ( !monitor )
        sub_B5D69C(v64, v65);
      v67 = monitor[15];
      if ( v67 )
      {
        v69 = *(_QWORD *)(v67 + 16);
        v68 = *(_QWORD *)(v67 + 24);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v78.fields.currentCryptoKey = v69;
        *(_QWORD *)&v78.fields.fakeValue = v68;
        v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v78, 0LL);
        if ( !v63 )
          sub_B5D69C(v70, (unsigned int)v70);
        System_Collections_Generic_List_int___Add(
          v63,
          v70,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v76,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
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
    if ( !v63 )
      goto LABEL_40;
    servantSelectMenu = v6->fields.servantSelectMenu;
    v72 = System_Collections_Generic_List_int___ToArray(
            v63,
            (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    v73 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v73, (Il2CppObject *)v6, Method_BonusSelectSummonConfirmDialog__OnClick_b__27_0__, 0LL);
    if ( !servantSelectMenu )
      goto LABEL_40;
    BonusSelectSummonPartyServantSelectMenu__Open(servantSelectMenu, memberItem, v72, v73, v74);
  }
}


void __fastcall BonusSelectSummonConfirmDialog__OnClickCancel(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  BonusSelectSummonConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_42E865F & 1) == 0 )
  {
    sub_B5D5C4(&Method_BonusSelectSummonConfirmDialog_OnClickCancel__, (_DWORD)method, v2, v3);
    byte_42E865F = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_BonusSelectSummonConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickCancel__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_BonusSelectSummonConfirmDialog_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(clickFunc, 0, 0LL);
    BonusSelectSummonConfirmDialog__Close_24912980(this, 0LL, v7);
  }
}


void __fastcall BonusSelectSummonConfirmDialog__OnClickDecide(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 isButtonEnable; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  BonusSelectSummonConfirmDialog_ClickDelegate_o *clickFunc; // x0

  if ( (byte_42E865E & 1) == 0 )
  {
    sub_B5D5C4(&Method_BonusSelectSummonConfirmDialog_OnClickDecide__, (_DWORD)method, v2, v3);
    byte_42E865E = 1;
  }
  isButtonEnable = this->fields.isButtonEnable;
  v6 = Method_BonusSelectSummonConfirmDialog_OnClickDecide__;
  if ( (*((_BYTE *)Method_BonusSelectSummonConfirmDialog_OnClickDecide__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B5D5CC(Method_BonusSelectSummonConfirmDialog_OnClickDecide__);
  v7 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v6, v6[3]);
  if ( isButtonEnable )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      BonusSelectSummonConfirmDialog_ClickDelegate__Invoke(clickFunc, 1, 0LL);
    BonusSelectSummonConfirmDialog__Close_24912980(this, 0LL, v8);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  __int64 v37; // x20
  System_String_o *v38; // x0
  __int64 v39; // x1
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
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  UILabel_o *buttonDecideLabel; // x21
  UILabel_o *buttonCancelLabel; // x21
  System_Action_o *v74; // x19

  if ( (byte_42E8654 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, gachaId, (_DWORD)enableBtn, func);
    sub_B5D5C4(&AtlasManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__, v19, v20, v21);
    sub_B5D5C4(&BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_12567/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_12569/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/, v34, v35, v36);
    byte_42E8654 = 1;
  }
  v37 = sub_B5D694(BonusSelectSummonConfirmDialog___c__DisplayClass21_0_TypeInfo);
  BonusSelectSummonConfirmDialog___c__DisplayClass21_0___ctor(
    (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v37,
    0LL);
  if ( !v37 )
    goto LABEL_15;
  *(_QWORD *)(v37 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v37 + 16), (System_Int32_array **)this, v40, v41, v42, v43, v44, v45);
  *(_QWORD *)(v37 + 24) = endOpenCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v37 + 24),
    (System_Int32_array **)endOpenCallback,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.clickFunc = func;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)func,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  this->fields.enableBtn = enableBtn;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.enableBtn,
    (System_Int32_array **)enableBtn,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  this->fields.tryGetBonusSelectData = tryGetBonusSelectData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.tryGetBonusSelectData,
    (System_Int32_array **)tryGetBonusSelectData,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  this->fields.gachaId = gachaId;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12569/*"SUMMON_BONUS_SELECT_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_15;
  UILabel__set_text(titleLabel, v38, 0LL);
  messageLabel = this->fields.messageLabel;
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12567/*"SUMMON_BONUS_SELECT_DIALOG_MESSAGE"*/, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, v38, 0LL),
        buttonDecideLabel = this->fields.buttonDecideLabel,
        v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
        !buttonDecideLabel)
    || (UILabel__set_text(buttonDecideLabel, v38, 0LL),
        buttonCancelLabel = this->fields.buttonCancelLabel,
        v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !buttonCancelLabel) )
  {
LABEL_15:
    sub_B5D69C(v38, v39);
  }
  UILabel__set_text(buttonCancelLabel, v38, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v74 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v74,
    (Il2CppObject *)v37,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadPartyOrganizationAtlas(v74, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SaveSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  __int64 v53; // x21
  const MethodInfo *v54; // x1
  SelectBonusData_o *SelectBonusData; // x0
  __int64 v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  EventMissionProgressRequest_Argument_ProgressData_o **v63; // x19
  SummonControl_c *v64; // x0
  Il2CppObject *String_35648228; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v68; // x22
  int size; // w8
  int32_t v70; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v71; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *v72; // x2
  WarBoardUiData_SaveData_array *v73; // x19
  System_String_o *Empty; // x19
  SummonControl_c *v75; // x0

  if ( (byte_42E865C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_SelectBonusData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_SelectBonusData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_SelectBonusData__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_SelectBonusData__bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_SelectBonusData___, v14, v15, v16);
    sub_B5D5C4(&JsonManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SelectBonusData__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SelectBonusData__ToArray__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SelectBonusData___ctor__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SelectBonusData__get_Count__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SelectBonusData__get_Item__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SelectBonusData__set_Item__, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_SelectBonusData__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&string_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&SummonControl_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__, v47, v48, v49);
    sub_B5D5C4(&BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo, v50, v51, v52);
    byte_42E865C = 1;
  }
  v53 = sub_B5D694(BonusSelectSummonConfirmDialog___c__DisplayClass31_0_TypeInfo);
  BonusSelectSummonConfirmDialog___c__DisplayClass31_0___ctor(
    (BonusSelectSummonConfirmDialog___c__DisplayClass31_0_o *)v53,
    0LL);
  SelectBonusData = BonusSelectSummonConfirmDialog__GetSelectBonusData(this, v54);
  if ( !v53 )
    goto LABEL_36;
  *(_QWORD *)(v53 + 16) = SelectBonusData;
  v63 = (EventMissionProgressRequest_Argument_ProgressData_o **)(v53 + 16);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v53 + 16),
    (System_Int32_array **)SelectBonusData,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v64 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v64 = SummonControl_TypeInfo;
  }
  String_35648228 = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString_35648228(
                                      v64->static_fields->BONUS_SELECTSUMMON_SAVEKEY,
                                      0LL);
  v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SelectBonusData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v66,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SelectBonusData___ctor__);
  if ( !System_String__IsNullOrEmpty((System_String_o *)String_35648228, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v67 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                 String_35648228,
                                                                 (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_SelectBonusData___);
    v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                                                    v67,
                                                                                                    (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_SelectBonusData___);
  }
  v68 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_SelectBonusData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v68,
    (Il2CppObject *)v53,
    Method_BonusSelectSummonConfirmDialog___c__DisplayClass31_0__SaveSelectBonusData_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_SelectBonusData__bool___ctor__);
  SelectBonusData = (SelectBonusData_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                           (System_Collections_Generic_List_T__o *)v66,
                                           (System_Func_T__bool__o *)v68,
                                           (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_SelectBonusData___);
  if ( ((unsigned __int8)SelectBonusData & 1) != 0 )
  {
    if ( !v66 )
      goto LABEL_36;
    size = v66->fields._size;
    if ( size >= 1 )
    {
      v70 = 0;
      while ( 1 )
      {
        if ( size <= (unsigned int)v70 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v71 = v66->fields._items->m_Items[v70];
        if ( !v71 )
          break;
        v72 = *v63;
        if ( !*v63 )
          break;
        if ( v71->fields.missionTargetId == v72->fields.missionTargetId )
          System_Collections_Generic_List_WarBoardManager_TaskList___set_Item(
            (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v66,
            v70,
            (WarBoardManager_TaskList_o *)v72,
            (const MethodInfo_3056D18 *)Method_System_Collections_Generic_List_SelectBonusData__set_Item__);
        size = v66->fields._size;
        if ( ++v70 >= size )
          goto LABEL_26;
      }
LABEL_36:
      sub_B5D69C(SelectBonusData, v56);
    }
  }
  else
  {
    if ( !v66 )
      goto LABEL_36;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v66,
      *v63,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SelectBonusData__Add__);
  }
LABEL_26:
  if ( v66->fields._size <= 0 )
  {
    Empty = string_TypeInfo->static_fields->Empty;
  }
  else
  {
    v73 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v66,
            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_SelectBonusData__ToArray__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Empty = JsonManager__toJson(&v73->obj, 0, 0, 0LL);
  }
  v75 = SummonControl_TypeInfo;
  if ( (BYTE3(SummonControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v75 = SummonControl_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetString(v75->static_fields->BONUS_SELECTSUMMON_SAVEKEY, Empty, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SetBackBtn(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_42E8660 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_15667/*"Window/CancelButton"*/, v5, v6, v7);
    byte_42E8660 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21237572(transform, (System_String_o *)StringLiteral_15667/*"Window/CancelButton"*/, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog__SetLoadSelectBonusData(
        BonusSelectSummonConfirmDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *tryGetBonusSelectData; // x0
  struct SelectBonus_array *selectBonusDatas; // x20
  __int64 v16; // x8
  int v17; // w25
  unsigned __int64 v18; // x21
  SelectBonus_o *v19; // x28
  _BOOL8 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x4
  BonusSelectSummonPartyOrganizationListViewItem_o *monitor; // x8
  struct GachaBonusSelectEntity_o *gachaBonusSelectEntity; // x9
  int32_t slot; // w2
  int v26; // w8
  __int64 v27; // x0
  _BYTE v28[28]; // [xsp+0h] [xbp-90h] BYREF
  int v29; // [xsp+1Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-70h] BYREF
  SelectBonusData_o *data; // [xsp+38h] [xbp-58h] BYREF

  if ( (byte_42E865B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__,
      v11,
      v12,
      v13);
    byte_42E865B = 1;
  }
  data = 0LL;
  memset(&v30, 0, sizeof(v30));
  v29 = 0;
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
      v16 = *(_QWORD *)&selectBonusDatas->max_length;
      if ( (int)v16 >= 1 )
      {
        v17 = 0;
        v18 = 0LL;
        while ( 1 )
        {
          if ( v18 >= (unsigned int)v16 )
          {
            v27 = sub_B5D6C8(tryGetBonusSelectData);
            sub_B5D668(v27, 0LL);
          }
          tryGetBonusSelectData = (BonusSelectSummonConfirmDialog_TryGetBonusSelectData_o *)this->fields.itemList;
          if ( !tryGetBonusSelectData )
            break;
          v19 = selectBonusDatas->m_Items[v18];
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v28,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)tryGetBonusSelectData,
            (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BonusSelectSummonPartyOrganizationListViewObject__GetEnumerator__);
          v30 = *(System_Collections_Generic_List_Enumerator_T__o *)v28;
          while ( 1 )
          {
            v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v30,
                    (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__MoveNext__);
            if ( !v20 )
              break;
            if ( !v30.fields.current )
              sub_B5D69C(v20, v21);
            monitor = (BonusSelectSummonPartyOrganizationListViewItem_o *)v30.fields.current[7].monitor;
            if ( !monitor )
              sub_B5D69C(v20, v21);
            gachaBonusSelectEntity = monitor->fields.gachaBonusSelectEntity;
            if ( gachaBonusSelectEntity )
            {
              if ( !v19 )
                sub_B5D69C(v20, v21);
              slot = gachaBonusSelectEntity->fields.slot;
              if ( slot == v19->fields.slot )
              {
                if ( !data )
                  sub_B5D69C(v20, v21);
                BonusSelectSummonPartyOrganizationListViewItem__Modify_24919172(
                  monitor,
                  data->fields.gachaId,
                  slot,
                  v19->fields.giftId,
                  v22);
              }
            }
          }
          *(_DWORD *)&v28[4 * v17 + 24] = 168;
          v17 = ++v29;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v30,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BonusSelectSummonPartyOrganizationListViewObject__Dispose__);
          if ( v17 )
          {
            v26 = v17 - 1;
            if ( *(_DWORD *)&v28[4 * v17 + 20] == 168 )
            {
              --v17;
              v29 = v26;
            }
          }
          LODWORD(v16) = selectBonusDatas->max_length;
          if ( (__int64)++v18 >= (int)v16 )
            goto LABEL_29;
        }
LABEL_31:
        sub_B5D69C(tryGetBonusSelectData, method);
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
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E8662 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E8662 = 1;
  }
  BonusSelectSummonConfirmDialog__EndClose(this, method);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
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
    sub_B5D69C(enableBtn, v3);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5E24 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isDecide, (_DWORD)callback, object);
    byte_42E5E24 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_ClickDelegate__EndInvoke(
        BonusSelectSummonConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
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
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  BonusSelectSummonConfirmDialog_ClickDelegate_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isDecide, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isDecide, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isDecide, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5E25 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)memberItem, isLongTap, callback);
    byte_42E5E25 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)memberItem;
  v11[1] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  return (System_IAsyncResult_o *)sub_B5D568(this, v11, callback, object);
}


void __fastcall BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent__EndInvoke(
        BonusSelectSummonConfirmDialog_OnTapPartyMemberEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v31->fields.extra_arg, memberItem, isLongTap);
      v35 = sub_B5D5F4(v32);
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
            v45 = sub_B5D5EC(v32);
            v46 = sub_B5D9F0(v32);
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
                  v27 = sub_AF54C0(memberItem, v49, v50, v47);
                }
                v18 = *(_QWORD *)(v27 + 8);
              }
              else
              {
                v18 = *((_QWORD *)&memberItem->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v32 + 72));
              }
              v28 = (void (__fastcall **)(BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))sub_B5D674(v18, v32);
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
                  v17 = sub_AF54C0(memberItem, class_0, v11, v13);
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
          v37 = sub_B5D5EC(v32);
          v38 = sub_B5D9F0(v32);
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
                v29 = sub_AF54C0(v33, v41, v42, v39);
              }
              v26 = *(_QWORD *)(v29 + 8);
            }
            else
            {
              v26 = *(_QWORD *)(*v33 + 16LL * *(unsigned __int16 *)(v32 + 72) + 320);
            }
            v30 = (void (__fastcall **)(__int64 *, BonusSelectSummonPartyOrganizationListViewItem_o *, bool, _QWORD))sub_B5D674(v26, v32);
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
                v25 = sub_AF54C0(v33, v20, v19, v21);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E5E26 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)data, gachaId, callback);
    byte_42E5E26 = 1;
  }
  v11[2] = 0LL;
  v11[0] = (__int64)*data;
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B5D568(this, v11, callback, object);
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
  v4 = sub_B5D56C(result, &v7, result);
  if ( !v4 )
    sub_B5D69C(0LL, v5);
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
        sub_B5D680(*(_QWORD *)&v22->fields.extra_arg, data, *(_QWORD *)&gachaId);
      if ( (sub_B5D5F4(v24) & 1) != 0 )
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
          v26 = sub_B5D5EC(v24);
          v27 = sub_B5D9F0(v24);
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
                v20 = sub_AF54C0(v23, v30, v31, v28);
              }
              v18 = *(_QWORD *)(v20 + 8);
            }
            else
            {
              v18 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
            }
            v21 = (__int64 (__fastcall **)(__int64 *, SelectBonusData_o **, _QWORD, _QWORD))sub_B5D674(v18, v24);
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
                v17 = sub_AF54C0(v23, class_0, v11, v13);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E22 & 1) == 0 )
  {
    sub_B5D5C4(&BonusSelectSummonConfirmDialog___c_TypeInfo, v1, v2, v3);
    byte_42E5E22 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BonusSelectSummonConfirmDialog___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BonusSelectSummonConfirmDialog___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, itemObj);
  return listViewItem->fields.servantEntity == 0LL;
}


bool __fastcall BonusSelectSummonConfirmDialog___c___Open_b__21_1(
        BonusSelectSummonConfirmDialog___c_o *this,
        BonusSelectSummonPartyOrganizationListViewObject_o *itemObj,
        const MethodInfo *method)
{
  struct BonusSelectSummonPartyOrganizationListViewItem_o *listViewItem; // x8

  if ( !itemObj || (listViewItem = itemObj->fields.listViewItem) == 0LL )
    sub_B5D69C(this, itemObj);
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
  int v2; // w2
  __int64 v3; // x3
  BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  struct BonusSelectSummonConfirmDialog_o *_4__this; // x8
  UISprite_o *messageBg; // x20
  struct BonusSelectSummonConfirmDialog_o *v31; // x8
  struct BonusSelectSummonConfirmDialog_o *v32; // x8
  struct UICommonButton_o *buttonDecide; // x20
  System_Collections_Generic_List_T__o *itemList; // x21
  BonusSelectSummonConfirmDialog___c_c *v35; // x0
  struct BonusSelectSummonConfirmDialog___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__21_1; // x22
  Il2CppObject *v38; // x23
  struct BonusSelectSummonConfirmDialog___c_StaticFields *v39; // x0
  System_Action_o *_9__2; // x21
  BaseDialog_o *v41; // x20

  v4 = this;
  if ( (byte_42E5E23 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__, v17, v18, v19);
    sub_B5D5C4(&Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__, v20, v21, v22);
    sub_B5D5C4(&BonusSelectSummonConfirmDialog___c_TypeInfo, v23, v24, v25);
    this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)sub_B5D5C4(&StringLiteral_16909/*"bg_white"*/, v26, v27, v28);
    byte_42E5E23 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_25;
  messageBg = _4__this->fields.messageBg;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetPartyOrganizationImage(messageBg, (System_String_o *)StringLiteral_16909/*"bg_white"*/, 0LL);
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  BonusSelectSummonConfirmDialog__CreateList((BonusSelectSummonConfirmDialog_o *)this, 0LL);
  v31 = v4->fields.__4__this;
  if ( !v31 )
    goto LABEL_25;
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v31->fields.rootObj;
  if ( !this )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_25;
  BonusSelectSummonConfirmDialog__SetLoadSelectBonusData((BonusSelectSummonConfirmDialog_o *)this, 0LL);
  v32 = v4->fields.__4__this;
  if ( !v32 )
    goto LABEL_25;
  buttonDecide = v32->fields.buttonDecide;
  itemList = (System_Collections_Generic_List_T__o *)v32->fields.itemList;
  v35 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  if ( (BYTE3(BonusSelectSummonConfirmDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BonusSelectSummonConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BonusSelectSummonConfirmDialog___c_TypeInfo);
    v35 = BonusSelectSummonConfirmDialog___c_TypeInfo;
  }
  static_fields = v35->static_fields;
  _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      static_fields = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__21_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__21_1,
      v38,
      Method_BonusSelectSummonConfirmDialog___c__Open_b__21_1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool___ctor__);
    v39 = BonusSelectSummonConfirmDialog___c_TypeInfo->static_fields;
    v39->__9__21_1 = (struct System_Func_BonusSelectSummonPartyOrganizationListViewObject__bool__o *)_9__21_1;
    sub_B5D560(&v39->__9__21_1);
  }
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                                     itemList,
                                                                     (System_Func_T__bool__o *)_9__21_1,
                                                                     (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_BonusSelectSummonPartyOrganizationListViewObject___);
  if ( !buttonDecide )
    goto LABEL_25;
  this = (BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *)((__int64 (__fastcall *)(struct UICommonButton_o *, bool, Il2CppMethodPointer))buttonDecide->klass->vtable._5_set_isEnabled.method)(
                                                                     buttonDecide,
                                                                     ((unsigned __int8)this & 1) == 0,
                                                                     buttonDecide->klass->vtable._6_OnInit.methodPtr);
  _9__2 = v4->fields.__9__2;
  v41 = (BaseDialog_o *)v4->fields.__4__this;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_BonusSelectSummonConfirmDialog___c__DisplayClass21_0__Open_b__2__,
      0LL);
    v4->fields.__9__2 = _9__2;
    sub_B5D560(&v4->fields.__9__2);
  }
  if ( !v41 )
LABEL_25:
    sub_B5D69C(this, method);
  BaseDialog__Open(v41, _9__2, 1, 0LL);
}


void __fastcall BonusSelectSummonConfirmDialog___c__DisplayClass21_0___Open_b__2(
        BonusSelectSummonConfirmDialog___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  BonusSelectSummonConfirmDialog_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, x);
  return x->fields.gachaId == data->fields.gachaId;
}