void __fastcall BoxGachaItemListViewManager___ctor(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall BoxGachaItemListViewManager__ClickResetGachaBtn(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  UserBoxGachaMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserBoxGachaEntity_o *Entity; // x21
  const MethodInfo *v7; // x2
  int64_t v8; // x20
  __int64 v9; // x8
  int v10; // w23
  System_String_o *v11; // x21
  __int64 v12; // x2
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  __int64 *v16; // x8
  System_String_o *v17; // x20
  __int64 v18; // x2
  Il2CppObject *v19; // x0
  CommonUI_o *v20; // x21
  System_String_o *v21; // x22
  System_String_o *v22; // x23
  System_String_o *v23; // x24
  CommonConfirmDialog_ClickDelegate_o *v24; // x25
  int v25; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_4353EA7 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&Method_BoxGachaItemListViewManager_closeEventSvtConfirmDlg__);
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_BoxGachaMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserBoxGachaMaster___);
    sub_B70694(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int__GetEntity__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_2679/*"BOX_GACHA_RESET_MSG"*/);
    sub_B70694(&StringLiteral_2676/*"BOX_GACHA_RESET_LIMIT_NO_RARE_MSG"*/);
    sub_B70694(&StringLiteral_2680/*"BOX_GACHA_RESET_NO_RARE_MSG"*/);
    sub_B70694(&StringLiteral_2683/*"BOX_GACHA_RESET_TITLE"*/);
    sub_B70694(&StringLiteral_3339/*"COMMON_CONFIRM_NO"*/);
    sub_B70694(&StringLiteral_2675/*"BOX_GACHA_RESET_LIMIT_MSG"*/);
    sub_B70694(&StringLiteral_2669/*"BOX_GACHA_EXE_TXT"*/);
    byte_4353EA7 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_WarQuestSelectionMaster = (UserBoxGachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_43;
  Entity = UserBoxGachaMaster__GetEntity(
             MasterData_WarQuestSelectionMaster,
             Instance,
             this->fields.currentBoxGachaId,
             0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BoxGachaMaster___)) == 0
    || (Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.currentBoxGachaId,
                              (const MethodInfo_21C0440 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int__GetEntity__),
        !Entity)
    || (v8 = Instance) == 0
    || (Instance = BoxGachaEntity__IsResetTarget((BoxGachaEntity_o *)Instance, Entity->fields.boxIndex + 1, v7),
        this->fields.isResetTarget = Instance & 1,
        (v9 = *(_QWORD *)(v8 + 32)) == 0) )
  {
LABEL_43:
    sub_B7076C(Instance, v4);
  }
  v10 = *(_DWORD *)(v9 + 24);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2679/*"BOX_GACHA_RESET_MSG"*/, 0LL);
  v25 = v10;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v12);
  v14 = System_String__Format(v11, v13, 0LL);
  if ( (*(_DWORD *)(v8 + 76) & 2) != 0 )
  {
    if ( this->fields.isResetTarget )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = &StringLiteral_2675/*"BOX_GACHA_RESET_LIMIT_MSG"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v16 = &StringLiteral_2676/*"BOX_GACHA_RESET_LIMIT_NO_RARE_MSG"*/;
    }
    goto LABEL_34;
  }
  v15 = v14;
  if ( !this->fields.isResetTarget )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = &StringLiteral_2680/*"BOX_GACHA_RESET_NO_RARE_MSG"*/;
LABEL_34:
    v17 = LocalizationManager__Get((System_String_o *)*v16, 0LL);
    v25 = v10;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v18);
    v15 = System_String__Format(v17, v19, 0LL);
  }
  v20 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2683/*"BOX_GACHA_RESET_TITLE"*/, 0LL);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2669/*"BOX_GACHA_EXE_TXT"*/, 0LL);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_3339/*"COMMON_CONFIRM_NO"*/, 0LL);
  v24 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v24,
    (Il2CppObject *)this,
    Method_BoxGachaItemListViewManager_closeEventSvtConfirmDlg__,
    0LL);
  Instance = (int64_t)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v20 )
    goto LABEL_43;
  CommonUI__OpenConfirmDecideDlg(
    v20,
    v21,
    v15,
    v22,
    v23,
    v24,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0.0,
    15.0,
    0,
    0,
    0,
    240,
    0,
    1,
    0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__CloseCommandCodeDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  if ( (byte_4353EA6 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4353EA6 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__UpdatePosition(scrollView, 0LL),
        (scrollView = (UIScrollView_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B7076C(scrollView, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)scrollView, 0LL, 0LL);
}


void __fastcall BoxGachaItemListViewManager__CreateList(
        BoxGachaItemListViewManager_o *this,
        BoxGachaBaseEntity_array *baseData,
        int32_t eventId,
        int32_t boxGachaId,
        int32_t baseId,
        System_Int32_array *resIds,
        bool isReset,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *resetInfoObj; // x0
  __int64 v16; // x8
  unsigned __int64 v17; // x27
  BoxGachaBaseEntity_o *v18; // x24
  __int64 v19; // x11
  bool v20; // w25
  __int64 v21; // x9
  char v22; // w8
  int32_t v23; // w12
  BoxGachaItemListViewItem_o *v24; // x26
  const MethodInfo *v25; // x5
  __int64 v26; // x0

  if ( (byte_4353E9A & 1) == 0 )
  {
    sub_B70694(&BoxGachaItemListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_4353E9A = 1;
  }
  resetInfoObj = this->fields.resetInfoObj;
  if ( !resetInfoObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(resetInfoObj, 0, 0LL);
  *(_QWORD *)&this->fields.allMaxNum = 0LL;
  this->fields.currentBoxGachaId = boxGachaId;
  this->fields.isReset = isReset;
  this->fields.currentBaseId = baseId;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !baseData )
    goto LABEL_21;
  v16 = *(_QWORD *)&baseData->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
      {
        v26 = sub_B70798(resetInfoObj);
        sub_B70738(v26, 0LL);
      }
      v18 = baseData->m_Items[v17];
      if ( resIds )
      {
        v19 = *(_QWORD *)&resIds->max_length;
        v20 = 0;
        if ( v19 && (int)v19 >= 1 )
        {
          if ( !v18 )
            break;
          v21 = 0LL;
          v22 = 0;
          do
          {
            v23 = resIds->m_Items[++v21];
            if ( v18->fields.no == v23 )
              v22 = 1;
          }
          while ( v21 < (int)v19 );
          v20 = v22;
        }
      }
      else
      {
        v20 = 0;
      }
      v24 = (BoxGachaItemListViewItem_o *)sub_B70764(BoxGachaItemListViewItem_TypeInfo);
      BoxGachaItemListViewItem___ctor(v24, v18, eventId, boxGachaId, v20, v25);
      resetInfoObj = (UnityEngine_GameObject_o *)this->fields.itemList;
      if ( !resetInfoObj )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resetInfoObj,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v16) = baseData->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_20;
    }
LABEL_21:
    sub_B7076C(resetInfoObj, baseData);
  }
LABEL_20:
  BoxGachaItemListViewManager__RefrashListDisp(this, (const MethodInfo *)baseData);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall BoxGachaItemListViewManager__DestroyList(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


int32_t __fastcall BoxGachaItemListViewManager__GetGachaItemCurrentNum(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.allCurrentNum;
}


int32_t __fastcall BoxGachaItemListViewManager__GetGachaItemMaxNum(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.allMaxNum;
}


BoxGachaItemListViewItem_o *__fastcall BoxGachaItemListViewManager__GetItem(
        BoxGachaItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_4353E9C & 1) == 0 )
  {
    sub_B70694(&BoxGachaItemListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4353E9C = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&BoxGachaItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (BoxGachaItemListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == BoxGachaItemListViewItem_TypeInfo )
    return (BoxGachaItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall BoxGachaItemListViewManager__OnClickListView(
        BoxGachaItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ServantEntity_o *Item; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x10
  __int64 v8; // x10
  BoxGachaItemListViewObject_o *v9; // x0
  __int64 v10; // x8
  ServantEntity_o *v11; // x21
  int v12; // w8
  __int64 v13; // x8
  bool IsServantEquip; // w22
  CommonUI_o *v15; // x20
  GiftEntity_o *v16; // x21
  ServantStatusDialog_EndDelegate_o *v17; // x22
  WebViewManager_o *v18; // x0
  System_String_o *classPassive; // x20
  System_String_o *v20; // x21
  CommonUI_o *v21; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v22; // x23
  __int64 v23; // x8
  __int64 v24; // x21
  __int64 v25; // x22
  int32_t v26; // w21
  ServantStatusDialog_EndDelegate_o *v27; // x22
  WebViewManager_o *v28; // x0
  CommandCodeEntity_o *cardIds; // x20
  CommonUI_o *v30; // x21
  ServantStatusDialog_EndDelegate_o *v31; // x22
  WebViewManager_o *Instance; // x0
  ItemEntity_o *v33; // x20
  CommonUI_o *v34; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v35; // x22
  int v36; // w20
  ServantCostumeEntity_o *v37; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v38; // x21
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4353EA3 & 1) == 0 )
  {
    sub_B70694(&Method_BoxGachaItemListViewManager_CloseCommandCodeDetail__);
    sub_B70694(&Method_BoxGachaItemListViewManager_closeItemDetail__);
    sub_B70694(&Method_BoxGachaItemListViewManager_closeSvtDetail__);
    sub_B70694(&BoxGachaItemListViewObject_TypeInfo);
    sub_B70694(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_B70694(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B70694(&MissionInfoMaker_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4353EA3 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_44;
  v7 = *(&BoxGachaItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != BoxGachaItemListViewObject_TypeInfo )
  {
    goto LABEL_44;
  }
  v8 = *(&BoxGachaItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v8 )
    v9 = (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[v8 - 1] == BoxGachaItemListViewObject_TypeInfo
       ? (BoxGachaItemListViewObject_o *)obj
       : 0LL;
  else
    v9 = 0LL;
  Item = (ServantEntity_o *)BoxGachaItemListViewObject__GetItem(v9, v6);
  if ( !Item )
    goto LABEL_44;
  v10 = *(_QWORD *)&Item->fields.combineSkillId;
  v11 = Item;
  if ( !v10 )
    goto LABEL_44;
  v12 = *(_DWORD *)(v10 + 24);
  if ( v12 == 1 )
  {
    v13 = *(_QWORD *)&Item->fields.sellQp;
    if ( v13 )
    {
      switch ( *(_DWORD *)(v13 + 20) )
      {
        case 1:
        case 6:
        case 7:
          Item = *(ServantEntity_o **)&Item->fields.sellRarePri;
          if ( !Item )
            goto LABEL_44;
          IsServantEquip = ServantEntity__get_IsServantEquip(Item, 0LL);
          Item = (ServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v15 = (CommonUI_o *)Item;
          if ( IsServantEquip )
          {
            v16 = *(GiftEntity_o **)&v11->fields.sellQp;
            v17 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v17,
              (Il2CppObject *)this,
              Method_BoxGachaItemListViewManager_closeSvtDetail__,
              0LL);
            if ( v15 )
            {
              CommonUI__OpenServantStatusDialog_17878868(v15, 7, v16, v17, 0LL);
              return;
            }
LABEL_44:
            sub_B7076C(Item, v6);
          }
          v23 = *(_QWORD *)&v11->fields.sellRarePri;
          if ( !v23 )
            goto LABEL_44;
          v25 = *(_QWORD *)(v23 + 16);
          v24 = *(_QWORD *)(v23 + 24);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v40.fields.currentCryptoKey = v25;
          *(_QWORD *)&v40.fields.fakeValue = v24;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v40, 0LL);
          v27 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v27,
            (Il2CppObject *)this,
            Method_BoxGachaItemListViewManager_closeSvtDetail__,
            0LL);
          if ( !v15 )
            goto LABEL_44;
          CommonUI__OpenServantStatusDialog_17918128(v15, 7, v26, v27, 0LL);
          break;
        case 2:
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v33 = *(ItemEntity_o **)&v11->fields.combineMaterialId;
          v34 = (CommonUI_o *)Instance;
          v35 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B70764(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
          ItemDetailInfoComponent_CallbackFunc___ctor(
            v35,
            (Il2CppObject *)this,
            (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
            0LL);
          if ( !v34 )
            goto LABEL_44;
          CommonUI__OpenItemDetailDialog(v34, v33, v35, 50, 0LL);
          return;
        case 9:
          v36 = *(_DWORD *)(v13 + 24);
          Item = (ServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Item )
            goto LABEL_44;
          Item = (ServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)Item,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
          if ( !Item )
            goto LABEL_44;
          if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Item, &entity, v36 / 100, v36 % 100, 0LL) )
          {
            v37 = entity;
            v38 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B70764(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
            ItemDetailInfoComponent_CallbackFunc___ctor(
              v38,
              (Il2CppObject *)this,
              (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
              0LL);
            if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
            }
            MissionInfoMaker__OpenCostumeReleaseDetail(v37, v38, 0LL);
          }
          return;
        case 0xB:
          v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          cardIds = (CommandCodeEntity_o *)v11->fields.cardIds;
          v30 = (CommonUI_o *)v28;
          v31 = (ServantStatusDialog_EndDelegate_o *)sub_B70764(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v31,
            (Il2CppObject *)this,
            Method_BoxGachaItemListViewManager_CloseCommandCodeDetail__,
            0LL);
          if ( !v30 )
            goto LABEL_44;
          CommonUI__OpenServantEquipStatusDialog_17920560(v30, 25, cardIds, 0, v31, 0LL, 0LL);
          return;
        default:
          return;
      }
    }
  }
  else if ( (v12 & 0xFFFFFFFE) == 2 )
  {
    v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    classPassive = (System_String_o *)v11->fields.classPassive;
    v20 = *(System_String_o **)&v11->fields.collectionNo;
    v21 = (CommonUI_o *)v18;
    v22 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B70764(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v21 )
      goto LABEL_44;
    CommonUI__OpenItemDetailDialog_17969836(v21, classPassive, v20, v22, 0LL);
  }
}


void __fastcall BoxGachaItemListViewManager__OnMoveEnd(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_4353EA2 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353EA2 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_B7076C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


void __fastcall BoxGachaItemListViewManager__RefrashListDisp(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *resetInfoObj; // x0
  Il2CppObject *current; // x8
  __int64 v5; // x11
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4353E9B & 1) == 0 )
  {
    sub_B70694(&BoxGachaItemListViewItem_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4353E9B = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( this->fields.isReset )
  {
    resetInfoObj = this->fields.resetInfoObj;
    if ( !resetInfoObj )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive(resetInfoObj, 1, 0LL);
  }
  resetInfoObj = (UnityEngine_GameObject_o *)this->fields.itemList;
  if ( !resetInfoObj )
LABEL_15:
    sub_B7076C(resetInfoObj, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resetInfoObj,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v8,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v6 )
      break;
    current = v8.fields.current;
    if ( !v8.fields.current
      || (v5 = *(&BoxGachaItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v8.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v5)
      || (BoxGachaItemListViewItem_c *)v8.fields.current->klass->_2.typeHierarchy[v5 - 1] != BoxGachaItemListViewItem_TypeInfo )
    {
      sub_B7076C(v6, v7);
    }
    this->fields.allMaxNum += LODWORD(v8.fields.current[12].klass);
    this->fields.allCurrentNum += HIDWORD(current[11].monitor);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__RequestInto(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_BoxGachaItemListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_BoxGachaItemListViewObject__o *v6; // x20
  signed __int64 size; // x8
  unsigned __int64 v8; // x24
  int v9; // w23
  BoxGachaItemListViewObject_o *v10; // x21
  System_Action_o *v11; // x22
  float listInDelay; // s8
  const MethodInfo *v13; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4353EA1 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BoxGachaItemListViewManager_OnMoveEnd__);
    sub_B70694(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Item__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_4353EA1 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = BoxGachaItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_15:
    sub_B7076C(ObjectList, v5);
  v6 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v8 = 0LL;
  v9 = 0;
  do
  {
    if ( v8 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v10 = v6->fields._items->m_Items[v8];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v10, 0LL) )
    {
      v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v10 )
        goto LABEL_15;
      listInDelay = this->fields.listInDelay;
      ++v9;
      zero = UnityEngine_Vector3__get_zero(0LL);
      BoxGachaItemListViewObject__Init(v10, 4, v11, listInDelay, *(UnityEngine_Vector3_o *)&zero.fields.y, v13);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v6->fields._size;
    ++v8;
  }
  while ( (__int64)v8 < size );
  if ( !v9 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      this->fields.listInDelay + 0.5,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__RequestListObject(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4353E9F & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BoxGachaItemListViewManager_OnMoveEnd__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_4353E9F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BoxGachaItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7076C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      ObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__) )
    {
      current = v15.fields.current;
      v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7076C(v12, v13);
      zero = UnityEngine_Vector3__get_zero(0LL);
      BoxGachaItemListViewObject__Init(
        (BoxGachaItemListViewObject_o *)current,
        mode,
        v11,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v14);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__RequestListObject_29087180(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4353EA0 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BoxGachaItemListViewManager_OnMoveEnd__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__);
    sub_B70694(&StringLiteral_10159/*"OnMoveEnd"*/);
    byte_4353EA0 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BoxGachaItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7076C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10159/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      ObjectList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__) )
    {
      current = v13.fields.current;
      v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7076C(v10, v11);
      zero = UnityEngine_Vector3__get_zero(0LL);
      BoxGachaItemListViewObject__Init(
        (BoxGachaItemListViewObject_o *)current,
        mode,
        v9,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v12);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__ResetBtnColliderCtr(
        BoxGachaItemListViewManager_o *this,
        bool isGachaReset,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *resetInfoObj; // x0

  resetInfoObj = (UnityEngine_Collider_o *)this->fields.resetInfoObj;
  if ( !resetInfoObj )
    goto LABEL_6;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resetInfoObj, 0LL) )
  {
    resetInfoObj = (UnityEngine_Collider_o *)this->fields.resetInfoCol;
    if ( resetInfoObj )
    {
      UnityEngine_Collider__set_enabled(resetInfoObj, isGachaReset, 0LL);
      return;
    }
LABEL_6:
    sub_B7076C(resetInfoObj, isGachaReset);
  }
}


void __fastcall BoxGachaItemListViewManager__SetMode(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        BoxGachaItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  BoxGachaItemListViewManager__SetMode_29086212(this, mode, v10);
}


void __fastcall BoxGachaItemListViewManager__SetMode_29086212(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4353E9E & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_11583/*"RequestInto"*/);
    byte_4353E9E = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( mode == 1 )
  {
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
      {
        sub_B7076C(gameObject, v6);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11583/*"RequestInto"*/,
      0.0,
      0LL);
  }
}


void __fastcall BoxGachaItemListViewManager__SetMode_29086488(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  BoxGachaItemListViewManager__SetMode_29086212(this, mode, v10);
}


void __fastcall BoxGachaItemListViewManager__SetMode_29086544(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  const MethodInfo *v11; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  BoxGachaItemListViewManager__SetMode_29086212(this, mode, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__SetObjectItem(
        BoxGachaItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  BoxGachaItemListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  v5 = this;
  if ( (byte_4353E9D & 1) == 0 )
  {
    this = (BoxGachaItemListViewManager_o *)sub_B70694(&BoxGachaItemListViewObject_TypeInfo);
    byte_4353E9D = 1;
  }
  if ( !obj
    || (v6 = *(&BoxGachaItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != BoxGachaItemListViewObject_TypeInfo )
  {
    sub_B7076C(this, obj);
  }
  initMode = v5->fields.initMode;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v12 = 3;
  else
    v12 = 2;
  BoxGachaItemListViewObject__Init(
    (BoxGachaItemListViewObject_o *)obj,
    v12,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&v9,
    v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__SetScrollInfo(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s0
  float v5; // s2
  float v6; // s8
  float v7; // s9
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4353EAA & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4353EAA = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_WebViewObject_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v9.fields.x = *((float *)scrollView + 72);
  v9.fields.y = *((float *)scrollView + 73);
  v9.fields.z = *((float *)scrollView + 74);
  v9.fields.w = 450.0;
  UIPanel__set_baseClipRegion((UIPanel_o *)scrollView, v9, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v4 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)scrollView,
                                          0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (v6 = v4,
        v7 = v5,
        (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B7076C(scrollView, method);
  }
  v8.fields.y = 145.0;
  v8.fields.x = v6;
  v8.fields.z = v7;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v8, 0LL);
}


void __fastcall BoxGachaItemListViewManager___closeEventSvtConfirmDlg_b__46_0(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4353EAB & 1) == 0 )
  {
    sub_B70694(&StringLiteral_5851/*"EXE_RESETGACHA"*/);
    byte_4353EAB = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_B7076C(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5851/*"EXE_RESETGACHA"*/, 0LL);
}


void __fastcall BoxGachaItemListViewManager__add_callbackFunc(
        BoxGachaItemListViewManager_o *this,
        BoxGachaItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct BoxGachaItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  BoxGachaItemListViewManager_o *v10; // x0
  BoxGachaItemListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4353E94 & 1) == 0 )
  {
    sub_B70694(&BoxGachaItemListViewManager_CallbackFunc_TypeInfo);
    byte_4353E94 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (BoxGachaItemListViewManager_CallbackFunc_c *)v7->klass != BoxGachaItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
  BoxGachaItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall BoxGachaItemListViewManager__add_callbackFunc2(
        BoxGachaItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  BoxGachaItemListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4353E96 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_4353E96 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B650AC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
  BoxGachaItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall BoxGachaItemListViewManager__closeEventSvtConfirmDlg(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x21
  System_Action_o *v8; // x20

  if ( (byte_4353EA8 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BoxGachaItemListViewManager__closeEventSvtConfirmDlg_b__46_0__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4353EA8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = Instance;
  if ( isDecide )
  {
    v8 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BoxGachaItemListViewManager__closeEventSvtConfirmDlg_b__46_0__,
      0LL);
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_17904524(v7, v8, 0LL);
      return;
    }
LABEL_8:
    sub_B7076C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall BoxGachaItemListViewManager__closeItemDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4353EA4 & 1) == 0 )
  {
    sub_B70694(&Method_BoxGachaItemListViewManager_closeItemDetail__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4353EA4 = 1;
  }
  v3 = Method_BoxGachaItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_closeItemDetail__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B7069C(Method_BoxGachaItemListViewManager_closeItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v6);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__closeSvtDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  if ( (byte_4353EA5 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4353EA5 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__UpdatePosition(scrollView, 0LL),
        (scrollView = (UIScrollView_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B7076C(scrollView, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)scrollView, 0LL, 0LL);
}


bool __fastcall BoxGachaItemListViewManager__getIsRareTarget(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isResetTarget;
}


System_Collections_Generic_List_BoxGachaItemListViewObject__o *__fastcall BoxGachaItemListViewManager__get_ClippingObjectList(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  BoxGachaItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4353E99 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353E99 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (BoxGachaItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)current,
                                                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7076C(0LL, v10);
      Item = (ListViewItem_o *)BoxGachaItemListViewObject__GetItem(Component_srcLineSprite, v10);
      if ( !Item )
        sub_B7076C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23985548((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7076C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7076C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoxGachaItemListViewObject__o *)v3;
}


System_Collections_Generic_List_BoxGachaItemListViewObject__o *__fastcall BoxGachaItemListViewManager__get_ObjectList(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4353E98 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353E98 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7076C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7076C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
      if ( !v3 )
        sub_B7076C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoxGachaItemListViewObject__o *)v3;
}


void __fastcall BoxGachaItemListViewManager__itemColliderCtr(
        BoxGachaItemListViewManager_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v6; // w19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x25
  __int64 v10; // x10
  UnityEngine_Object_o *monitor; // x20
  __int64 v12; // x1
  UnityEngine_Component_o *v13; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4353EA9 & 1) == 0 )
  {
    sub_B70694(&BoxGachaItemListViewItem_TypeInfo);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4353EA9 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v16,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v17 = v16;
    v6 = isDisp;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v17,
             (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v7 )
        break;
      current = v17.fields.current;
      if ( !v17.fields.current
        || (v10 = *(&BoxGachaItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v17.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v10)
        || (BoxGachaItemListViewItem_c *)v17.fields.current->klass->_2.typeHierarchy[v10 - 1] != BoxGachaItemListViewItem_TypeInfo )
      {
        sub_B7076C(v7, v8);
      }
      monitor = (UnityEngine_Object_o *)v17.fields.current[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v13 = (UnityEngine_Component_o *)current[6].monitor;
        if ( !v13 )
          sub_B7076C(0LL, v12);
        Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              v13,
                                                              (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Collider___);
        if ( !Component_WebViewObject )
          sub_B7076C(0LL, v15);
        UnityEngine_Collider__set_enabled(Component_WebViewObject, v6, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall BoxGachaItemListViewManager__remove_callbackFunc(
        BoxGachaItemListViewManager_o *this,
        BoxGachaItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct BoxGachaItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  BoxGachaItemListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4353E95 & 1) == 0 )
  {
    sub_B70694(&BoxGachaItemListViewManager_CallbackFunc_TypeInfo);
    byte_4353E95 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (BoxGachaItemListViewManager_CallbackFunc_c *)v7->klass != BoxGachaItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B650AC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
  BoxGachaItemListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall BoxGachaItemListViewManager__remove_callbackFunc2(
        BoxGachaItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  BoxGachaItemListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4353E97 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    byte_4353E97 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B650AC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B70A60(v7);
  BoxGachaItemListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager_CallbackFunc___ctor(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
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
  sub_B70630(p_method);
}


System_IAsyncResult_o *__fastcall BoxGachaItemListViewManager_CallbackFunc__BeginInvoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B70638(this, &v5, callback, object);
}


void __fastcall BoxGachaItemListViewManager_CallbackFunc__EndInvoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7063C(result, 0LL, method);
}


void __fastcall BoxGachaItemListViewManager_CallbackFunc__Invoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8
  __int64 v4; // x23
  BoxGachaItemListViewManager_CallbackFunc_o **v5; // x24
  __int64 v6; // x25
  unsigned int v7; // w22
  __int64 class_0; // x0
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  _DWORD *v11; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  void (__fastcall **v15)(__int64 *, _QWORD); // x0
  BoxGachaItemListViewManager_CallbackFunc_o *v16; // x8
  __int64 *v17; // x20
  __int64 v18; // x21
  void (__fastcall *v19)(__int64); // x22
  char v20; // w22
  char v21; // w0
  __int64 v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned __int64 v25; // x10
  _DWORD *v26; // x11
  BoxGachaItemListViewManager_CallbackFunc_o *v27; // [xsp+8h] [xbp-38h] BYREF

  v27 = this;
  v2 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v2 )
  {
    v5 = &v27;
    v4 = 1LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(v2 + 24);
  if ( v4 )
  {
    v5 = (BoxGachaItemListViewManager_CallbackFunc_o **)(v2 + 32);
LABEL_5:
    v6 = 0LL;
    while ( 1 )
    {
      v16 = v5[v6];
      v17 = *(__int64 **)&v16->fields.method;
      v18 = *(_QWORD *)&v16->fields.extra_arg;
      v19 = *(void (__fastcall **)(__int64))&v16->fields.method_ptr;
      if ( *(__int16 *)(v18 + 72) == -1 )
        sub_B70750(*(_QWORD *)&v16->fields.extra_arg, method);
      if ( (sub_B706C4(v18) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v18 + 74) )
        goto LABEL_35;
      v19(v18);
LABEL_36:
      if ( ++v6 == v4 )
        return;
    }
    if ( v17 && *(__int16 *)(v18 + 72) != -1 && (*(_BYTE *)(*v17 + 277) & 1) == 0 && this->fields.m_target )
    {
      v20 = sub_B706BC(v18);
      v21 = sub_B70AC0(v18);
      if ( (v20 & 1) != 0 )
      {
        if ( (v21 & 1) != 0 )
        {
          v22 = *v17;
          v23 = *(_QWORD *)(v18 + 24);
          v24 = *(unsigned __int16 *)(v18 + 72);
          if ( *(_WORD *)(*v17 + 298) )
          {
            v25 = 0LL;
            v26 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((_QWORD *)v26 - 1) != v23 )
            {
              ++v25;
              v26 += 4;
              if ( v25 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_34;
            }
            v14 = v22 + 16LL * (*v26 + (int)v24) + 312;
          }
          else
          {
LABEL_34:
            v14 = sub_B08590(v17, v23, v24);
          }
          v13 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          v13 = *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320);
        }
        v15 = (void (__fastcall **)(__int64 *, _QWORD))sub_B70744(v13, v18);
        (*v15)(v17, v15);
      }
      else
      {
        v7 = *(unsigned __int16 *)(v18 + 72);
        if ( (v21 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v18);
          v9 = *v17;
          if ( *(_WORD *)(*v17 + 298) )
          {
            v10 = 0LL;
            v11 = (_DWORD *)(*(_QWORD *)(v9 + 176) + 8LL);
            while ( *((_QWORD *)v11 - 1) != class_0 )
            {
              ++v10;
              v11 += 4;
              if ( v10 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_11;
            }
            v12 = v9 + 16LL * (int)(*v11 + v7) + 312;
          }
          else
          {
LABEL_11:
            v12 = sub_B08590(v17, class_0, v7);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v12)(v17, *(_QWORD *)(v12 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 312))(
            v17,
            *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v19)(v17, v18);
    goto LABEL_36;
  }
}