void __fastcall BoxGachaItemListViewManager___ctor(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall BoxGachaItemListViewManager__ClickResetGachaBtn(
        BoxGachaItemListViewManager_o *this,
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
  __int64 v19; // x1
  __int64 v20; // x1
  int64_t Instance; // x0
  __int64 v22; // x1
  UserBoxGachaMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserBoxGachaEntity_o *Entity; // x21
  const MethodInfo *v25; // x2
  int64_t v26; // x20
  __int64 v27; // x8
  int v28; // w23
  System_String_o *v29; // x21
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x20
  __int64 *v33; // x8
  System_String_o *v34; // x20
  Il2CppObject *v35; // x0
  CommonUI_o *v36; // x21
  System_String_o *v37; // x22
  System_String_o *v38; // x23
  System_String_o *v39; // x24
  CommonConfirmDialog_ClickDelegate_o *v40; // x25
  int v41; // [xsp+3Ch] [xbp-34h] BYREF

  if ( (byte_41896CC & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&Method_BoxGachaItemListViewManager_closeEventSvtConfirmDlg__, v3);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_BoxGachaMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserBoxGachaMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int__GetEntity__, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B2C35C(&SoundManager_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_2617/*"BOX_GACHA_RESET_MSG"*/, v14);
    sub_B2C35C(&StringLiteral_2614/*"BOX_GACHA_RESET_LIMIT_NO_RARE_MSG"*/, v15);
    sub_B2C35C(&StringLiteral_2618/*"BOX_GACHA_RESET_NO_RARE_MSG"*/, v16);
    sub_B2C35C(&StringLiteral_2621/*"BOX_GACHA_RESET_TITLE"*/, v17);
    sub_B2C35C(&StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, v18);
    sub_B2C35C(&StringLiteral_2613/*"BOX_GACHA_RESET_LIMIT_MSG"*/, v19);
    sub_B2C35C(&StringLiteral_2607/*"BOX_GACHA_EXE_TXT"*/, v20);
    byte_41896CC = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_WarQuestSelectionMaster = (UserBoxGachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BoxGachaMaster___)) == 0
    || (Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.currentBoxGachaId,
                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int__GetEntity__),
        !Entity)
    || (v26 = Instance) == 0
    || (Instance = BoxGachaEntity__IsResetTarget((BoxGachaEntity_o *)Instance, Entity->fields.boxIndex + 1, v25),
        this->fields.isResetTarget = Instance & 1,
        (v27 = *(_QWORD *)(v26 + 32)) == 0) )
  {
LABEL_43:
    sub_B2C434(Instance, v22);
  }
  v28 = *(_DWORD *)(v27 + 24);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_2617/*"BOX_GACHA_RESET_MSG"*/, 0LL);
  v41 = v28;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
  v31 = System_String__Format(v29, v30, 0LL);
  if ( (*(_DWORD *)(v26 + 76) & 2) != 0 )
  {
    if ( this->fields.isResetTarget )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v33 = &StringLiteral_2613/*"BOX_GACHA_RESET_LIMIT_MSG"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v33 = &StringLiteral_2614/*"BOX_GACHA_RESET_LIMIT_NO_RARE_MSG"*/;
    }
    goto LABEL_34;
  }
  v32 = v31;
  if ( !this->fields.isResetTarget )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = &StringLiteral_2618/*"BOX_GACHA_RESET_NO_RARE_MSG"*/;
LABEL_34:
    v34 = LocalizationManager__Get((System_String_o *)*v33, 0LL);
    v41 = v28;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
    v32 = System_String__Format(v34, v35, 0LL);
  }
  v36 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_2621/*"BOX_GACHA_RESET_TITLE"*/, 0LL);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_2607/*"BOX_GACHA_EXE_TXT"*/, 0LL);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3264/*"COMMON_CONFIRM_NO"*/, 0LL);
  v40 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v40,
    (Il2CppObject *)this,
    Method_BoxGachaItemListViewManager_closeEventSvtConfirmDlg__,
    0LL);
  Instance = (int64_t)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v36 )
    goto LABEL_43;
  CommonUI__OpenConfirmDecideDlg(
    v36,
    v37,
    v32,
    v38,
    v39,
    v40,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0.0,
    15.0,
    0,
    0,
    0,
    240,
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

  if ( (byte_41896CB & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_41896CB = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__UpdatePosition(scrollView, 0LL),
        (scrollView = (UIScrollView_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(scrollView, isDecide);
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
  __int64 v15; // x1
  UnityEngine_GameObject_o *resetInfoObj; // x0
  __int64 v17; // x8
  unsigned __int64 v18; // x27
  BoxGachaBaseEntity_o *v19; // x24
  __int64 v20; // x11
  bool v21; // w25
  __int64 v22; // x9
  char v23; // w8
  int32_t v24; // w12
  BoxGachaItemListViewItem_o *v25; // x26
  const MethodInfo *v26; // x5
  __int64 v27; // x0

  if ( (byte_41896BF & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaItemListViewItem_TypeInfo, baseData);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15);
    byte_41896BF = 1;
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
  v17 = *(_QWORD *)&baseData->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
      {
        v27 = sub_B2C460(resetInfoObj);
        sub_B2C400(v27, 0LL);
      }
      v19 = baseData->m_Items[v18];
      if ( resIds )
      {
        v20 = *(_QWORD *)&resIds->max_length;
        v21 = 0;
        if ( v20 && (int)v20 >= 1 )
        {
          if ( !v19 )
            break;
          v22 = 0LL;
          v23 = 0;
          do
          {
            v24 = resIds->m_Items[++v22];
            if ( v19->fields.no == v24 )
              v23 = 1;
          }
          while ( v22 < (int)v20 );
          v21 = v23;
        }
      }
      else
      {
        v21 = 0;
      }
      v25 = (BoxGachaItemListViewItem_o *)sub_B2C42C(BoxGachaItemListViewItem_TypeInfo);
      BoxGachaItemListViewItem___ctor(v25, v19, eventId, boxGachaId, v21, v26);
      resetInfoObj = (UnityEngine_GameObject_o *)this->fields.itemList;
      if ( !resetInfoObj )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resetInfoObj,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v17) = baseData->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_20;
    }
LABEL_21:
    sub_B2C434(resetInfoObj, baseData);
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


// local variable allocation has failed, the output may be wrong!
BoxGachaItemListViewItem_o *__fastcall BoxGachaItemListViewManager__GetItem(
        BoxGachaItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_41896C1 & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_41896C1 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&BoxGachaItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (BoxGachaItemListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == BoxGachaItemListViewItem_TypeInfo )
    return (BoxGachaItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall BoxGachaItemListViewManager__OnClickListView(
        BoxGachaItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
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
  ServantEntity_o *Item; // x0
  const MethodInfo *v17; // x1
  __int64 v18; // x10
  __int64 v19; // x10
  BoxGachaItemListViewObject_o *v20; // x0
  __int64 v21; // x8
  ServantEntity_o *v22; // x21
  int v23; // w8
  __int64 v24; // x8
  bool IsServantEquip; // w22
  CommonUI_o *v26; // x20
  GiftEntity_o *v27; // x21
  ServantStatusDialog_EndDelegate_o *v28; // x22
  WebViewManager_o *v29; // x0
  System_String_o *classPassive; // x20
  System_String_o *v31; // x21
  CommonUI_o *v32; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v33; // x23
  __int64 v34; // x8
  __int64 v35; // x21
  __int64 v36; // x22
  int32_t v37; // w21
  ServantStatusDialog_EndDelegate_o *v38; // x22
  WebViewManager_o *v39; // x0
  CommandCodeEntity_o *cardIds; // x20
  CommonUI_o *v41; // x21
  ServantStatusDialog_EndDelegate_o *v42; // x22
  WebViewManager_o *Instance; // x0
  ItemEntity_o *v44; // x20
  CommonUI_o *v45; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v46; // x22
  int v47; // w20
  ServantCostumeEntity_o *v48; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v49; // x21
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_41896C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_BoxGachaItemListViewManager_CloseCommandCodeDetail__, obj);
    sub_B2C35C(&Method_BoxGachaItemListViewManager_closeItemDetail__, v5);
    sub_B2C35C(&Method_BoxGachaItemListViewManager_closeSvtDetail__, v6);
    sub_B2C35C(&BoxGachaItemListViewObject_TypeInfo, v7);
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v9);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v10);
    sub_B2C35C(&MissionInfoMaker_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_B2C35C(&SoundManager_TypeInfo, v15);
    byte_41896C8 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_44;
  v18 = *(&BoxGachaItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v18
    || (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[v18 - 1] != BoxGachaItemListViewObject_TypeInfo )
  {
    goto LABEL_44;
  }
  v19 = *(&BoxGachaItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v19 )
    v20 = (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[v19 - 1] == BoxGachaItemListViewObject_TypeInfo
        ? (BoxGachaItemListViewObject_o *)obj
        : 0LL;
  else
    v20 = 0LL;
  Item = (ServantEntity_o *)BoxGachaItemListViewObject__GetItem(v20, v17);
  if ( !Item )
    goto LABEL_44;
  v21 = *(_QWORD *)&Item->fields.combineSkillId;
  v22 = Item;
  if ( !v21 )
    goto LABEL_44;
  v23 = *(_DWORD *)(v21 + 24);
  if ( v23 == 1 )
  {
    v24 = *(_QWORD *)&Item->fields.sellQp;
    if ( v24 )
    {
      switch ( *(_DWORD *)(v24 + 20) )
      {
        case 1:
        case 6:
        case 7:
          Item = *(ServantEntity_o **)&Item->fields.sellRarePri;
          if ( !Item )
            goto LABEL_44;
          IsServantEquip = ServantEntity__get_IsServantEquip(Item, 0LL);
          Item = (ServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v26 = (CommonUI_o *)Item;
          if ( IsServantEquip )
          {
            v27 = *(GiftEntity_o **)&v22->fields.sellQp;
            v28 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v28,
              (Il2CppObject *)this,
              Method_BoxGachaItemListViewManager_closeSvtDetail__,
              0LL);
            if ( v26 )
            {
              CommonUI__OpenServantStatusDialog_17945944(v26, 7, v27, v28, 0LL);
              return;
            }
LABEL_44:
            sub_B2C434(Item, v17);
          }
          v34 = *(_QWORD *)&v22->fields.sellRarePri;
          if ( !v34 )
            goto LABEL_44;
          v36 = *(_QWORD *)(v34 + 16);
          v35 = *(_QWORD *)(v34 + 24);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v51.fields.currentCryptoKey = v36;
          *(_QWORD *)&v51.fields.fakeValue = v35;
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v51, 0LL);
          v38 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v38,
            (Il2CppObject *)this,
            Method_BoxGachaItemListViewManager_closeSvtDetail__,
            0LL);
          if ( !v26 )
            goto LABEL_44;
          CommonUI__OpenServantStatusDialog_17985072(v26, 7, v37, v38, 0LL);
          break;
        case 2:
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v44 = *(ItemEntity_o **)&v22->fields.combineMaterialId;
          v45 = (CommonUI_o *)Instance;
          v46 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
          ItemDetailInfoComponent_CallbackFunc___ctor(
            v46,
            (Il2CppObject *)this,
            (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
            0LL);
          if ( !v45 )
            goto LABEL_44;
          CommonUI__OpenItemDetailDialog(v45, v44, v46, 50, 0LL);
          return;
        case 9:
          v47 = *(_DWORD *)(v24 + 24);
          Item = (ServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Item )
            goto LABEL_44;
          Item = (ServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)Item,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
          if ( !Item )
            goto LABEL_44;
          if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Item, &entity, v47 / 100, v47 % 100, 0LL) )
          {
            v48 = entity;
            v49 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
            ItemDetailInfoComponent_CallbackFunc___ctor(
              v49,
              (Il2CppObject *)this,
              (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
              0LL);
            if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
            }
            MissionInfoMaker__OpenCostumeReleaseDetail(v48, v49, 0LL);
          }
          return;
        case 0xB:
          v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          cardIds = (CommandCodeEntity_o *)v22->fields.cardIds;
          v41 = (CommonUI_o *)v39;
          v42 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v42,
            (Il2CppObject *)this,
            Method_BoxGachaItemListViewManager_CloseCommandCodeDetail__,
            0LL);
          if ( !v41 )
            goto LABEL_44;
          CommonUI__OpenServantEquipStatusDialog_17987504(v41, 25, cardIds, 0, v42, 0LL, 0LL);
          return;
        default:
          return;
      }
    }
  }
  else if ( (v23 & 0xFFFFFFFE) == 2 )
  {
    v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    classPassive = (System_String_o *)v22->fields.classPassive;
    v31 = *(System_String_o **)&v22->fields.collectionNo;
    v32 = (CommonUI_o *)v29;
    v33 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v33,
      (Il2CppObject *)this,
      (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v32 )
      goto LABEL_44;
    CommonUI__OpenItemDetailDialog_18036692(v32, classPassive, v31, v33, 0LL);
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

  if ( (byte_41896C7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41896C7 = 1;
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
          sub_B2C434(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


void __fastcall BoxGachaItemListViewManager__RefrashListDisp(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *resetInfoObj; // x0
  Il2CppObject *current; // x8
  __int64 v9; // x11
  _BOOL8 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_41896C0 & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaItemListViewItem_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_41896C0 = 1;
  }
  memset(&v12, 0, sizeof(v12));
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
    sub_B2C434(resetInfoObj, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resetInfoObj,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v10 )
      break;
    current = v12.fields.current;
    if ( !v12.fields.current
      || (v9 = *(&BoxGachaItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v12.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v9)
      || (BoxGachaItemListViewItem_c *)v12.fields.current->klass->_2.typeHierarchy[v9 - 1] != BoxGachaItemListViewItem_TypeInfo )
    {
      sub_B2C434(v10, v11);
    }
    this->fields.allMaxNum += LODWORD(v12.fields.current[12].klass);
    this->fields.allCurrentNum += HIDWORD(current[11].monitor);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__RequestInto(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_BoxGachaItemListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_BoxGachaItemListViewObject__o *v10; // x20
  signed __int64 size; // x8
  unsigned __int64 v12; // x24
  int v13; // w23
  BoxGachaItemListViewObject_o *v14; // x21
  System_Action_o *v15; // x22
  float listInDelay; // s8
  const MethodInfo *v17; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_41896C6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BoxGachaItemListViewManager_OnMoveEnd__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Item__, v5);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v6);
    byte_41896C6 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = BoxGachaItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B2C434(ObjectList, v9);
  v10 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v12 = 0LL;
  v13 = 0;
  do
  {
    if ( v12 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v14 = v10->fields._items->m_Items[v12];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v14, 0LL) )
    {
      v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v14 )
        goto LABEL_15;
      listInDelay = this->fields.listInDelay;
      ++v13;
      zero = UnityEngine_Vector3__get_zero(0LL);
      BoxGachaItemListViewObject__Init(v14, 4, v15, listInDelay, *(UnityEngine_Vector3_o *)&zero.fields.y, v17);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v10->fields._size;
    ++v12;
  }
  while ( (__int64)v12 < size );
  if ( !v13 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_41896C4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_BoxGachaItemListViewManager_OnMoveEnd__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_41896C4 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BoxGachaItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      BoxGachaItemListViewObject__Init(
        (BoxGachaItemListViewObject_o *)current,
        mode,
        v18,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__RequestListObject_28315688(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_41896C5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_BoxGachaItemListViewManager_OnMoveEnd__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_41896C5 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BoxGachaItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      BoxGachaItemListViewObject__Init(
        (BoxGachaItemListViewObject_o *)current,
        mode,
        v16,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
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
    sub_B2C434(resetInfoObj, isGachaReset);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  BoxGachaItemListViewManager__SetMode_28314720(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__SetMode_28314720(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_41896C3 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&StringLiteral_11429/*"RequestInto"*/, v5);
    byte_41896C3 = 1;
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
        sub_B2C434(gameObject, v7);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11429/*"RequestInto"*/,
      0.0,
      0LL);
  }
}


void __fastcall BoxGachaItemListViewManager__SetMode_28314996(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  BoxGachaItemListViewManager__SetMode_28314720(this, mode, v10);
}


void __fastcall BoxGachaItemListViewManager__SetMode_28315052(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  BoxGachaItemListViewManager__SetMode_28314720(this, mode, v11);
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
  if ( (byte_41896C2 & 1) == 0 )
  {
    this = (BoxGachaItemListViewManager_o *)sub_B2C35C(&BoxGachaItemListViewObject_TypeInfo, obj);
    byte_41896C2 = 1;
  }
  if ( !obj
    || (v6 = *(&BoxGachaItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != BoxGachaItemListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
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

  if ( (byte_41896CF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_41896CF = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_WebViewObject_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_B2C434(scrollView, method);
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

  if ( (byte_41896D0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5762/*"EXE_RESETGACHA"*/, method);
    byte_41896D0 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_B2C434(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5762/*"EXE_RESETGACHA"*/, 0LL);
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

  if ( (byte_41896B9 & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_41896B9 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoxGachaItemListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_41896BB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_41896BB = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoxGachaItemListViewManager_o *)sub_B2C728(v7);
  BoxGachaItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__closeEventSvtConfirmDlg(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x21
  System_Action_o *v10; // x20

  if ( (byte_41896CD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_BoxGachaItemListViewManager__closeEventSvtConfirmDlg_b__46_0__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_41896CD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = Instance;
  if ( isDecide )
  {
    v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BoxGachaItemListViewManager__closeEventSvtConfirmDlg_b__46_0__,
      0LL);
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_17971588(v9, v10, 0LL);
      return;
    }
LABEL_8:
    sub_B2C434(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__closeItemDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_41896C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_BoxGachaItemListViewManager_closeItemDetail__, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_41896C9 = 1;
  }
  v4 = Method_BoxGachaItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_closeItemDetail__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B2C364(Method_BoxGachaItemListViewManager_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_B2C340(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__closeSvtDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  if ( (byte_41896CA & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_41896CA = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__UpdatePosition(scrollView, 0LL),
        (scrollView = (UIScrollView_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(scrollView, isDecide);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  BoxGachaItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_41896BE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_41896BE = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (BoxGachaItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)current,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)BoxGachaItemListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoxGachaItemListViewObject__o *)v11;
}


System_Collections_Generic_List_BoxGachaItemListViewObject__o *__fastcall BoxGachaItemListViewManager__get_ObjectList(
        BoxGachaItemListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_41896BD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_41896BD = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoxGachaItemListViewObject__o *)v11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__itemColliderCtr(
        BoxGachaItemListViewManager_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v12; // w19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x25
  __int64 v16; // x10
  UnityEngine_Object_o *monitor; // x20
  __int64 v18; // x1
  UnityEngine_Component_o *v19; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_41896CE & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaItemListViewItem_TypeInfo, isDisp);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Collider___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_41896CE = 1;
  }
  memset(&v23, 0, sizeof(v23));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v23 = v22;
    v12 = isDisp;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v13 )
        break;
      current = v23.fields.current;
      if ( !v23.fields.current
        || (v16 = *(&BoxGachaItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v23.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v16)
        || (BoxGachaItemListViewItem_c *)v23.fields.current->klass->_2.typeHierarchy[v16 - 1] != BoxGachaItemListViewItem_TypeInfo )
      {
        sub_B2C434(v13, v14);
      }
      monitor = (UnityEngine_Object_o *)v23.fields.current[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v19 = (UnityEngine_Component_o *)current[6].monitor;
        if ( !v19 )
          sub_B2C434(0LL, v18);
        Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              v19,
                                                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Collider___);
        if ( !Component_WebViewObject )
          sub_B2C434(0LL, v21);
        UnityEngine_Collider__set_enabled(Component_WebViewObject, v12, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_41896BA & 1) == 0 )
  {
    sub_B2C35C(&BoxGachaItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_41896BA = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoxGachaItemListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_41896BC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_41896BC = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoxGachaItemListViewManager_o *)sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall BoxGachaItemListViewManager_CallbackFunc__BeginInvoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall BoxGachaItemListViewManager_CallbackFunc__EndInvoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall BoxGachaItemListViewManager_CallbackFunc__Invoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  BoxGachaItemListViewManager_CallbackFunc_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  BoxGachaItemListViewManager_CallbackFunc_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  BoxGachaItemListViewManager_CallbackFunc_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (BoxGachaItemListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B2C38C(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B2C384(v21);
      v24 = sub_B2C788(v21);
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
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AC5258(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B2C40C(v16, v21);
        (*v18)(v20, v18);
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
            v15 = sub_AC5258(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
    goto LABEL_36;
  }
}