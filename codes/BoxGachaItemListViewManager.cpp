void __fastcall BoxGachaItemListViewManager___ctor(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall BoxGachaItemListViewManager__ClickResetGachaBtn(
        BoxGachaItemListViewManager_o *this,
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
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int64_t Instance; // x0
  __int64 v60; // x1
  UserBoxGachaMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserBoxGachaEntity_o *Entity; // x21
  const MethodInfo *v63; // x2
  int64_t v64; // x20
  __int64 v65; // x8
  int v66; // w23
  System_String_o *v67; // x21
  Il2CppObject *v68; // x0
  System_String_o *v69; // x0
  System_String_o *v70; // x20
  __int64 *v71; // x8
  System_String_o *v72; // x20
  Il2CppObject *v73; // x0
  CommonUI_o *v74; // x21
  System_String_o *v75; // x22
  System_String_o *v76; // x23
  System_String_o *v77; // x24
  CommonConfirmDialog_ClickDelegate_o *v78; // x25
  int v79; // [xsp+4Ch] [xbp-34h] BYREF

  if ( (byte_42EA585 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BoxGachaItemListViewManager_closeEventSvtConfirmDlg__, v5, v6, v7);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_BoxGachaMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserBoxGachaMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&int_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&NetworkManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&SoundManager_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_2671/*"BOX_GACHA_RESET_MSG"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_2668/*"BOX_GACHA_RESET_LIMIT_NO_RARE_MSG"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_2672/*"BOX_GACHA_RESET_NO_RARE_MSG"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_2675/*"BOX_GACHA_RESET_TITLE"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_2667/*"BOX_GACHA_RESET_LIMIT_MSG"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_2661/*"BOX_GACHA_EXE_TXT"*/, v56, v57, v58);
    byte_42EA585 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_43;
  MasterData_WarQuestSelectionMaster = (UserBoxGachaMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                 (DataManager_o *)Instance,
                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BoxGachaMaster___)) == 0
    || (Instance = (int64_t)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              this->fields.currentBoxGachaId,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int__GetEntity__),
        !Entity)
    || (v64 = Instance) == 0
    || (Instance = BoxGachaEntity__IsResetTarget((BoxGachaEntity_o *)Instance, Entity->fields.boxIndex + 1, v63),
        this->fields.isResetTarget = Instance & 1,
        (v65 = *(_QWORD *)(v64 + 32)) == 0) )
  {
LABEL_43:
    sub_B5D69C(Instance, v60);
  }
  v66 = *(_DWORD *)(v65 + 24);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v67 = LocalizationManager__Get((System_String_o *)StringLiteral_2671/*"BOX_GACHA_RESET_MSG"*/, 0LL);
  v79 = v66;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
  v69 = System_String__Format(v67, v68, 0LL);
  if ( (*(_DWORD *)(v64 + 76) & 2) != 0 )
  {
    if ( this->fields.isResetTarget )
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v71 = &StringLiteral_2667/*"BOX_GACHA_RESET_LIMIT_MSG"*/;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v71 = &StringLiteral_2668/*"BOX_GACHA_RESET_LIMIT_NO_RARE_MSG"*/;
    }
    goto LABEL_34;
  }
  v70 = v69;
  if ( !this->fields.isResetTarget )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v71 = &StringLiteral_2672/*"BOX_GACHA_RESET_NO_RARE_MSG"*/;
LABEL_34:
    v72 = LocalizationManager__Get((System_String_o *)*v71, 0LL);
    v79 = v66;
    v73 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79);
    v70 = System_String__Format(v72, v73, 0LL);
  }
  v74 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_2675/*"BOX_GACHA_RESET_TITLE"*/, 0LL);
  v76 = LocalizationManager__Get((System_String_o *)StringLiteral_2661/*"BOX_GACHA_EXE_TXT"*/, 0LL);
  v77 = LocalizationManager__Get((System_String_o *)StringLiteral_3330/*"COMMON_CONFIRM_NO"*/, 0LL);
  v78 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v78,
    (Il2CppObject *)this,
    Method_BoxGachaItemListViewManager_closeEventSvtConfirmDlg__,
    0LL);
  Instance = (int64_t)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !v74 )
    goto LABEL_43;
  CommonUI__OpenConfirmDecideDlg(
    v74,
    v75,
    v70,
    v76,
    v77,
    v78,
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
  __int64 v3; // x3
  UIScrollView_o *scrollView; // x0

  if ( (byte_42EA584 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EA584 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__UpdatePosition(scrollView, 0LL),
        (scrollView = (UIScrollView_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(scrollView, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)scrollView, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UnityEngine_GameObject_o *resetInfoObj; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x27
  BoxGachaBaseEntity_o *v21; // x24
  __int64 v22; // x11
  bool v23; // w25
  __int64 v24; // x9
  char v25; // w8
  int32_t v26; // w12
  BoxGachaItemListViewItem_o *v27; // x26
  const MethodInfo *v28; // x5
  __int64 v29; // x0

  if ( (byte_42EA578 & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaItemListViewItem_TypeInfo, (_DWORD)baseData, eventId, *(_QWORD *)&boxGachaId);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15, v16, v17);
    byte_42EA578 = 1;
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
  v19 = *(_QWORD *)&baseData->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v19 )
      {
        v29 = sub_B5D6C8(resetInfoObj);
        sub_B5D668(v29, 0LL);
      }
      v21 = baseData->m_Items[v20];
      if ( resIds )
      {
        v22 = *(_QWORD *)&resIds->max_length;
        v23 = 0;
        if ( v22 && (int)v22 >= 1 )
        {
          if ( !v21 )
            break;
          v24 = 0LL;
          v25 = 0;
          do
          {
            v26 = resIds->m_Items[++v24];
            if ( v21->fields.no == v26 )
              v25 = 1;
          }
          while ( v24 < (int)v22 );
          v23 = v25;
        }
      }
      else
      {
        v23 = 0;
      }
      v27 = (BoxGachaItemListViewItem_o *)sub_B5D694(BoxGachaItemListViewItem_TypeInfo);
      BoxGachaItemListViewItem___ctor(v27, v21, eventId, boxGachaId, v23, v28);
      resetInfoObj = (UnityEngine_GameObject_o *)this->fields.itemList;
      if ( !resetInfoObj )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)resetInfoObj,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      LODWORD(v19) = baseData->max_length;
      if ( (__int64)++v20 >= (int)v19 )
        goto LABEL_20;
    }
LABEL_21:
    sub_B5D69C(resetInfoObj, baseData);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v10; // x8
  __int64 v11; // x11

  if ( (byte_42EA57A & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaItemListViewItem_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    byte_42EA57A = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&BoxGachaItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (BoxGachaItemListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == BoxGachaItemListViewItem_TypeInfo )
    return (BoxGachaItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


void __fastcall BoxGachaItemListViewManager__OnClickListView(
        BoxGachaItemListViewManager_o *this,
        ListViewObject_o *obj,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  ServantEntity_o *Item; // x0
  const MethodInfo *v40; // x1
  __int64 v41; // x10
  __int64 v42; // x10
  BoxGachaItemListViewObject_o *v43; // x0
  __int64 v44; // x8
  ServantEntity_o *v45; // x21
  int v46; // w8
  __int64 v47; // x8
  bool IsServantEquip; // w22
  CommonUI_o *v49; // x20
  GiftEntity_o *v50; // x21
  ServantStatusDialog_EndDelegate_o *v51; // x22
  WebViewManager_o *v52; // x0
  System_String_o *classPassive; // x20
  System_String_o *v54; // x21
  CommonUI_o *v55; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v56; // x23
  __int64 v57; // x8
  __int64 v58; // x21
  __int64 v59; // x22
  int32_t v60; // w21
  ServantStatusDialog_EndDelegate_o *v61; // x22
  WebViewManager_o *v62; // x0
  CommandCodeEntity_o *cardIds; // x20
  CommonUI_o *v64; // x21
  ServantStatusDialog_EndDelegate_o *v65; // x22
  WebViewManager_o *Instance; // x0
  ItemEntity_o *v67; // x20
  CommonUI_o *v68; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v69; // x22
  int v70; // w20
  ServantCostumeEntity_o *v71; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v72; // x21
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_42EA581 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BoxGachaItemListViewManager_CloseCommandCodeDetail__, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BoxGachaItemListViewManager_closeItemDetail__, v6, v7, v8);
    sub_B5D5C4(&Method_BoxGachaItemListViewManager_closeSvtDetail__, v9, v10, v11);
    sub_B5D5C4(&BoxGachaItemListViewObject_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v18, v19, v20);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&MissionInfoMaker_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&SoundManager_TypeInfo, v36, v37, v38);
    byte_42EA581 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_44;
  v41 = *(&BoxGachaItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v41
    || (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[v41 - 1] != BoxGachaItemListViewObject_TypeInfo )
  {
    goto LABEL_44;
  }
  v42 = *(&BoxGachaItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v42 )
    v43 = (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[v42 - 1] == BoxGachaItemListViewObject_TypeInfo
        ? (BoxGachaItemListViewObject_o *)obj
        : 0LL;
  else
    v43 = 0LL;
  Item = (ServantEntity_o *)BoxGachaItemListViewObject__GetItem(v43, v40);
  if ( !Item )
    goto LABEL_44;
  v44 = *(_QWORD *)&Item->fields.combineSkillId;
  v45 = Item;
  if ( !v44 )
    goto LABEL_44;
  v46 = *(_DWORD *)(v44 + 24);
  if ( v46 == 1 )
  {
    v47 = *(_QWORD *)&Item->fields.sellQp;
    if ( v47 )
    {
      switch ( *(_DWORD *)(v47 + 20) )
      {
        case 1:
        case 6:
        case 7:
          Item = *(ServantEntity_o **)&Item->fields.sellRarePri;
          if ( !Item )
            goto LABEL_44;
          IsServantEquip = ServantEntity__get_IsServantEquip(Item, 0LL);
          Item = (ServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v49 = (CommonUI_o *)Item;
          if ( IsServantEquip )
          {
            v50 = *(GiftEntity_o **)&v45->fields.sellQp;
            v51 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v51,
              (Il2CppObject *)this,
              Method_BoxGachaItemListViewManager_closeSvtDetail__,
              0LL);
            if ( v49 )
            {
              CommonUI__OpenServantStatusDialog_18176692(v49, 7, v50, v51, 0LL);
              return;
            }
LABEL_44:
            sub_B5D69C(Item, v40);
          }
          v57 = *(_QWORD *)&v45->fields.sellRarePri;
          if ( !v57 )
            goto LABEL_44;
          v59 = *(_QWORD *)(v57 + 16);
          v58 = *(_QWORD *)(v57 + 24);
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v74.fields.currentCryptoKey = v59;
          *(_QWORD *)&v74.fields.fakeValue = v58;
          v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v74, 0LL);
          v61 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v61,
            (Il2CppObject *)this,
            Method_BoxGachaItemListViewManager_closeSvtDetail__,
            0LL);
          if ( !v49 )
            goto LABEL_44;
          CommonUI__OpenServantStatusDialog_18215952(v49, 7, v60, v61, 0LL);
          break;
        case 2:
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v67 = *(ItemEntity_o **)&v45->fields.combineMaterialId;
          v68 = (CommonUI_o *)Instance;
          v69 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
          ItemDetailInfoComponent_CallbackFunc___ctor(
            v69,
            (Il2CppObject *)this,
            (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
            0LL);
          if ( !v68 )
            goto LABEL_44;
          CommonUI__OpenItemDetailDialog(v68, v67, v69, 50, 0LL);
          return;
        case 9:
          v70 = *(_DWORD *)(v47 + 24);
          Item = (ServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Item )
            goto LABEL_44;
          Item = (ServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)Item,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
          if ( !Item )
            goto LABEL_44;
          if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Item, &entity, v70 / 100, v70 % 100, 0LL) )
          {
            v71 = entity;
            v72 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
            ItemDetailInfoComponent_CallbackFunc___ctor(
              v72,
              (Il2CppObject *)this,
              (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
              0LL);
            if ( (BYTE3(MissionInfoMaker_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
            }
            MissionInfoMaker__OpenCostumeReleaseDetail(v71, v72, 0LL);
          }
          return;
        case 0xB:
          v62 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          cardIds = (CommandCodeEntity_o *)v45->fields.cardIds;
          v64 = (CommonUI_o *)v62;
          v65 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v65,
            (Il2CppObject *)this,
            Method_BoxGachaItemListViewManager_CloseCommandCodeDetail__,
            0LL);
          if ( !v64 )
            goto LABEL_44;
          CommonUI__OpenServantEquipStatusDialog_18218384(v64, 25, cardIds, 0, v65, 0LL, 0LL);
          return;
        default:
          return;
      }
    }
  }
  else if ( (v46 & 0xFFFFFFFE) == 2 )
  {
    v52 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    classPassive = (System_String_o *)v45->fields.classPassive;
    v54 = *(System_String_o **)&v45->fields.collectionNo;
    v55 = (CommonUI_o *)v52;
    v56 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v56,
      (Il2CppObject *)this,
      (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v55 )
      goto LABEL_44;
    CommonUI__OpenItemDetailDialog_18267660(v55, classPassive, v54, v56, 0LL);
  }
}


void __fastcall BoxGachaItemListViewManager__OnMoveEnd(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t callbackCount; // w8
  bool v6; // vf
  int32_t v7; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct UIScrollView_o *v16; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_42EA580 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA580 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v6 = __OFSUB__(callbackCount, 1);
  v7 = callbackCount - 1;
  if ( v7 < 0 == v6 )
  {
    this->fields.callbackCount = v7;
    if ( !v7 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v16 = this->fields.scrollView;
        if ( !v16 )
          sub_B5D69C(0LL, v9);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v16->klass->vtable._8_UpdateScrollbars.method)(
          v16,
          1LL,
          v16->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v10, v11, v12, v13, v14, v15);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


void __fastcall BoxGachaItemListViewManager__RefrashListDisp(
        BoxGachaItemListViewManager_o *this,
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
  UnityEngine_GameObject_o *resetInfoObj; // x0
  Il2CppObject *current; // x8
  __int64 v19; // x11
  _BOOL8 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42EA579 & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v14, v15, v16);
    byte_42EA579 = 1;
  }
  memset(&v22, 0, sizeof(v22));
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
    sub_B5D69C(resetInfoObj, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resetInfoObj,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v20 )
      break;
    current = v22.fields.current;
    if ( !v22.fields.current
      || (v19 = *(&BoxGachaItemListViewItem_TypeInfo->_2.bitflags2 + 1),
          *(&v22.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v19)
      || (BoxGachaItemListViewItem_c *)v22.fields.current->klass->_2.typeHierarchy[v19 - 1] != BoxGachaItemListViewItem_TypeInfo )
    {
      sub_B5D69C(v20, v21);
    }
    this->fields.allMaxNum += LODWORD(v22.fields.current[12].klass);
    this->fields.allCurrentNum += HIDWORD(current[11].monitor);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__RequestInto(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
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
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_BoxGachaItemListViewObject__o *ObjectList; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_BoxGachaItemListViewObject__o *v20; // x20
  signed __int64 size; // x8
  unsigned __int64 v22; // x24
  int v23; // w23
  BoxGachaItemListViewObject_o *v24; // x21
  System_Action_o *v25; // x22
  float listInDelay; // s8
  const MethodInfo *v27; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EA57F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BoxGachaItemListViewManager_OnMoveEnd__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Item__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v14, v15, v16);
    byte_42EA57F = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = BoxGachaItemListViewManager__get_ObjectList(this, v17);
  if ( !ObjectList )
LABEL_15:
    sub_B5D69C(ObjectList, v19);
  v20 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v22 = 0LL;
  v23 = 0;
  do
  {
    if ( v22 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v24 = v20->fields._items->m_Items[v22];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v24, 0LL) )
    {
      v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v24 )
        goto LABEL_15;
      listInDelay = this->fields.listInDelay;
      ++v23;
      zero = UnityEngine_Vector3__get_zero(0LL);
      BoxGachaItemListViewObject__Init(v24, 4, v25, listInDelay, *(UnityEngine_Vector3_o *)&zero.fields.y, v27);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v20->fields._size;
    ++v22;
  }
  while ( (__int64)v22 < size );
  if ( !v23 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
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
  __int64 v4; // x3
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v30; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EA57D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_BoxGachaItemListViewManager_OnMoveEnd__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__, v14, v15, v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__get_Current__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42EA57D = 1;
  }
  memset(&v37, 0, sizeof(v37));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BoxGachaItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v30);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__) )
    {
      current = v37.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      zero = UnityEngine_Vector3__get_zero(0LL);
      BoxGachaItemListViewObject__Init(
        (BoxGachaItemListViewObject_o *)current,
        mode,
        v33,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v36);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__RequestListObject_28531136(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v28; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42EA57E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BoxGachaItemListViewManager_OnMoveEnd__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__, v12, v13, v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__get_Current__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42EA57E = 1;
  }
  memset(&v35, 0, sizeof(v35));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)BoxGachaItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B5D69C(0LL, v28);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__) )
    {
      current = v35.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      zero = UnityEngine_Vector3__get_zero(0LL);
      BoxGachaItemListViewObject__Init(
        (BoxGachaItemListViewObject_o *)current,
        mode,
        v31,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v34);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
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
    sub_B5D69C(resetInfoObj, isGachaReset);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  BoxGachaItemListViewManager__SetMode_28530168(this, mode, v10);
}


void __fastcall BoxGachaItemListViewManager__SetMode_28530168(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42EA57C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11562/*"RequestInto"*/, v6, v7, v8);
    byte_42EA57C = 1;
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
        sub_B5D69C(gameObject, v10);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11562/*"RequestInto"*/,
      0.0,
      0LL);
  }
}


void __fastcall BoxGachaItemListViewManager__SetMode_28530444(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  BoxGachaItemListViewManager__SetMode_28530168(this, mode, v10);
}


void __fastcall BoxGachaItemListViewManager__SetMode_28530500(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  BoxGachaItemListViewManager__SetMode_28530168(this, mode, v11);
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
  if ( (byte_42EA57B & 1) == 0 )
  {
    this = (BoxGachaItemListViewManager_o *)sub_B5D5C4(
                                              &BoxGachaItemListViewObject_TypeInfo,
                                              (_DWORD)obj,
                                              (_DWORD)item,
                                              method);
    byte_42EA57B = 1;
  }
  if ( !obj
    || (v6 = *(&BoxGachaItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != BoxGachaItemListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
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
  int v2; // w2
  __int64 v3; // x3
  void *scrollView; // x0
  float v6; // s0
  float v7; // s2
  float v8; // s8
  float v9; // s9
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EA588 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIPanel___, (_DWORD)method, v2, v3);
    byte_42EA588 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_WebViewObject_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v11.fields.x = *((float *)scrollView + 72);
  v11.fields.y = *((float *)scrollView + 73);
  v11.fields.z = *((float *)scrollView + 74);
  v11.fields.w = 450.0;
  UIPanel__set_baseClipRegion((UIPanel_o *)scrollView, v11, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)scrollView,
                                          0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (v8 = v6,
        v9 = v7,
        (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(scrollView, method);
  }
  v10.fields.y = 145.0;
  v10.fields.x = v8;
  v10.fields.z = v9;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v10, 0LL);
}


void __fastcall BoxGachaItemListViewManager___closeEventSvtConfirmDlg_b__46_0(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_42EA589 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5839/*"EXE_RESETGACHA"*/, (_DWORD)method, v2, v3);
    byte_42EA589 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5839/*"EXE_RESETGACHA"*/, 0LL);
}


void __fastcall BoxGachaItemListViewManager__add_callbackFunc(
        BoxGachaItemListViewManager_o *this,
        BoxGachaItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct BoxGachaItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoxGachaItemListViewManager_o *v11; // x0
  BoxGachaItemListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EA572 & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA572 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (BoxGachaItemListViewManager_CallbackFunc_c *)v8->klass != BoxGachaItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoxGachaItemListViewManager_o *)sub_B5D990(v8);
  BoxGachaItemListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall BoxGachaItemListViewManager__add_callbackFunc2(
        BoxGachaItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoxGachaItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EA574 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA574 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoxGachaItemListViewManager_o *)sub_B5D990(v8);
  BoxGachaItemListViewManager__remove_callbackFunc2(v11, v12, v13);
}


void __fastcall BoxGachaItemListViewManager__closeEventSvtConfirmDlg(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CommonUI_o *Instance; // x0
  __int64 v13; // x1
  CommonUI_o *v14; // x21
  System_Action_o *v15; // x20

  if ( (byte_42EA586 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BoxGachaItemListViewManager__closeEventSvtConfirmDlg_b__46_0__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42EA586 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = Instance;
  if ( isDecide )
  {
    v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)this,
      Method_BoxGachaItemListViewManager__closeEventSvtConfirmDlg_b__46_0__,
      0LL);
    if ( v14 )
    {
      CommonUI__CloseConfirmDialog_18202348(v14, v15, 0LL);
      return;
    }
LABEL_8:
    sub_B5D69C(Instance, v13);
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
  __int64 v3; // x3
  char v4; // w1
  int v5; // w2
  __int64 v6; // x3
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  CommonUI_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42EA582 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BoxGachaItemListViewManager_closeItemDetail__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42EA582 = 1;
  }
  v7 = Method_BoxGachaItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_closeItemDetail__ + 75) & 2) != 0 )
    v7 = (_QWORD *)sub_B5D5CC(Method_BoxGachaItemListViewManager_closeItemDetail__);
  v8 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v7, v7[3]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__closeSvtDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UIScrollView_o *scrollView; // x0

  if ( (byte_42EA583 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42EA583 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__UpdatePosition(scrollView, 0LL),
        (scrollView = (UIScrollView_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(scrollView, isDecide);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v33; // x0
  __int64 v34; // x1
  BoxGachaItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EA577 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EA577 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v43,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v44 = v43;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v44,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v44.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (BoxGachaItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  (UnityEngine_GameObject_o *)current,
                                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)BoxGachaItemListViewObject__GetItem(Component_srcLineSprite, v36);
      if ( !Item )
        sub_B5D69C(0LL, v39);
      if ( Item->fields.isTermination )
      {
        v40 = ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, Item, 0LL);
        if ( v40 )
        {
          if ( !v29 )
            sub_B5D69C(v40, v41);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v29 )
          sub_B5D69C(Item, v39);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v29,
          v37,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoxGachaItemListViewObject__o *)v29;
}


System_Collections_Generic_List_BoxGachaItemListViewObject__o *__fastcall BoxGachaItemListViewManager__get_ObjectList(
        BoxGachaItemListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v33; // x0
  __int64 v34; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EA576 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42EA576 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B5D69C(0LL, v30);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v37,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v38 = v37;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v38,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v38.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v33 )
    {
      if ( !current )
        sub_B5D69C(v33, v34);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoxGachaItemListViewObject__o *)v29;
}


void __fastcall BoxGachaItemListViewManager__itemColliderCtr(
        BoxGachaItemListViewManager_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v25; // w19
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x25
  __int64 v29; // x10
  UnityEngine_Object_o *monitor; // x20
  __int64 v31; // x1
  UnityEngine_Component_o *v32; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  __int64 v34; // x1
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42EA587 & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaItemListViewItem_TypeInfo, isDisp, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Collider___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    byte_42EA587 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v35,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v36 = v35;
    v25 = isDisp;
    while ( 1 )
    {
      v26 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v26 )
        break;
      current = v36.fields.current;
      if ( !v36.fields.current
        || (v29 = *(&BoxGachaItemListViewItem_TypeInfo->_2.bitflags2 + 1),
            *(&v36.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v29)
        || (BoxGachaItemListViewItem_c *)v36.fields.current->klass->_2.typeHierarchy[v29 - 1] != BoxGachaItemListViewItem_TypeInfo )
      {
        sub_B5D69C(v26, v27);
      }
      monitor = (UnityEngine_Object_o *)v36.fields.current[6].monitor;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v32 = (UnityEngine_Component_o *)current[6].monitor;
        if ( !v32 )
          sub_B5D69C(0LL, v31);
        Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              v32,
                                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Collider___);
        if ( !Component_WebViewObject )
          sub_B5D69C(0LL, v34);
        UnityEngine_Collider__set_enabled(Component_WebViewObject, v25, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall BoxGachaItemListViewManager__remove_callbackFunc(
        BoxGachaItemListViewManager_o *this,
        BoxGachaItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct BoxGachaItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoxGachaItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42EA573 & 1) == 0 )
  {
    sub_B5D5C4(&BoxGachaItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA573 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (BoxGachaItemListViewManager_CallbackFunc_c *)v8->klass != BoxGachaItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoxGachaItemListViewManager_o *)sub_B5D990(v8);
  BoxGachaItemListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall BoxGachaItemListViewManager__remove_callbackFunc2(
        BoxGachaItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  BoxGachaItemListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42EA575 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA575 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc2, v8, callbackFunc2);
    v10 = callbackFunc2 == (System_Delegate_o *)v9;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoxGachaItemListViewManager_o *)sub_B5D990(v8);
  BoxGachaItemListViewManager__get_ObjectList(v11, v12);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall BoxGachaItemListViewManager_CallbackFunc__BeginInvoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall BoxGachaItemListViewManager_CallbackFunc__EndInvoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall BoxGachaItemListViewManager_CallbackFunc__Invoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  BoxGachaItemListViewManager_CallbackFunc_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  BoxGachaItemListViewManager_CallbackFunc_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  BoxGachaItemListViewManager_CallbackFunc_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (BoxGachaItemListViewManager_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
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
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}