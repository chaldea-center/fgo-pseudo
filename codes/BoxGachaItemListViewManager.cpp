void BoxGachaItemListViewManager___ctor(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void BoxGachaItemListViewManager__ClickResetGachaBtn(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *MasterData_object; // x20
  UserBoxGachaEntity_o *Entity; // x20
  BoxGachaEntity_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *MessagePrizeName; // x21
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  __int64 v16; // x2
  struct System_Int32_array *baseIds; // x8
  int max_length; // w22
  int v19; // w8
  System_String_o *v20; // x20
  int *v21; // x1
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  Il2CppObject *v27; // x21
  System_String_o *v28; // x22
  System_String_o *v29; // x23
  System_String_o *v30; // x24
  CommonConfirmDialog_ClickDelegate_o *v31; // x25
  __int64 v32; // x2
  int v33; // [xsp+48h] [xbp-58h] BYREF
  int v34; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_596A6D8 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_BoxGachaItemListViewManager_ClickResetGachaBtn__);
    sub_2213A60(&Method_BoxGachaItemListViewManager_closeEventSvtConfirmDlg__);
    sub_2213A60(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_BoxGachaMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserBoxGachaMaster___);
    sub_2213A60(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_3115/*"BOX_GACHA_RESET_MSG"*/);
    sub_2213A60(&StringLiteral_3112/*"BOX_GACHA_RESET_LIMIT_NO_RARE_MSG"*/);
    sub_2213A60(&StringLiteral_3116/*"BOX_GACHA_RESET_NO_RARE_MSG"*/);
    sub_2213A60(&StringLiteral_3119/*"BOX_GACHA_RESET_TITLE"*/);
    sub_2213A60(&StringLiteral_3831/*"COMMON_CONFIRM_NO"*/);
    sub_2213A60(&StringLiteral_3111/*"BOX_GACHA_RESET_LIMIT_MSG"*/);
    sub_2213A60(&StringLiteral_3105/*"BOX_GACHA_EXE_TXT"*/);
    byte_596A6D8 = 1;
  }
  v3 = Method_BoxGachaItemListViewManager_ClickResetGachaBtn__;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_ClickResetGachaBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_BoxGachaItemListViewManager_ClickResetGachaBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v7);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object
    || (Entity = UserBoxGachaMaster__GetEntity(
                   (UserBoxGachaMaster_o *)MasterData_object,
                   *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                   this->fields.currentBoxGachaId,
                   0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_BoxGachaMaster___)) == 0
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      this->fields.currentBoxGachaId,
                                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int__GetEntity__),
        !Entity)
    || (v10 = (BoxGachaEntity_o *)Instance) == 0 )
  {
LABEL_40:
    sub_2213CDC(Instance, v6);
  }
  this->fields.isResetTarget = BoxGachaEntity__IsResetTarget(
                                 (BoxGachaEntity_o *)Instance,
                                 Entity->fields.boxIndex + 1,
                                 0);
  MessagePrizeName = (Il2CppObject *)BoxGachaEntity__GetMessagePrizeName(v10, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11, v12);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3115/*"BOX_GACHA_RESET_MSG"*/, 0);
  v15 = System_String__Format(v14, MessagePrizeName, 0);
  Instance = (DataManager_o *)BoxGachaEntity__IsLimitLineUp(v10, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    baseIds = v10->fields.baseIds;
    if ( !baseIds )
      goto LABEL_40;
    max_length = baseIds->max_length;
    v19 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
    if ( this->fields.isResetTarget )
    {
      if ( !v19 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v16);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3111/*"BOX_GACHA_RESET_LIMIT_MSG"*/, 0);
      v21 = &v33;
      v33 = max_length;
    }
    else
    {
      if ( !v19 )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v16);
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3112/*"BOX_GACHA_RESET_LIMIT_NO_RARE_MSG"*/, 0);
      v21 = &v34;
      v34 = max_length;
    }
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, v21);
    v23 = System_String__Format_75697880(v20, MessagePrizeName, v24, 0);
  }
  else
  {
    if ( this->fields.isResetTarget )
      goto LABEL_34;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v16);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3116/*"BOX_GACHA_RESET_NO_RARE_MSG"*/, 0);
    v23 = System_String__Format(v22, MessagePrizeName, 0);
  }
  v15 = v23;
LABEL_34:
  v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25, v26);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3119/*"BOX_GACHA_RESET_TITLE"*/, 0);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3105/*"BOX_GACHA_EXE_TXT"*/, 0);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_NO"*/, 0);
  v31 = (CommonConfirmDialog_ClickDelegate_o *)sub_2213CCC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)this,
    Method_BoxGachaItemListViewManager_closeEventSvtConfirmDlg__,
    0);
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v6, v32);
  if ( !v27 )
    goto LABEL_40;
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)v27,
    v28,
    v15,
    v29,
    v30,
    v31,
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
    0,
    0);
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaItemListViewManager__CloseCommandCodeDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  if ( (byte_596A6D7 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A6D7 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__UpdatePosition(scrollView, 0),
        (scrollView = (UIScrollView_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_2213CDC(scrollView, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)scrollView, 0, 0);
}


void BoxGachaItemListViewManager__CreateList(
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x2
  Il2CppObject *Master_object; // x24
  bool EventFlag; // w24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v22; // x26
  BoxGachaBaseEntity_o *v23; // x24
  int32_t *m_Items; // x10
  char v25; // w29
  __int64 v26; // x9
  int v27; // t1
  BoxGachaItemListViewItem_o *v28; // x25
  const MethodInfo *v29; // x5
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v37; // x9
  __int64 klass_low; // x10
  intptr_t v39; // x8

  if ( (byte_596A6CB & 1) == 0 )
  {
    sub_2213A60(&BoxGachaItemListViewItem_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_23694/*"overwriteFirstTimeDispItemGet"*/);
    byte_596A6CB = 1;
  }
  resetInfoObj = this->fields.resetInfoObj;
  if ( !resetInfoObj )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(resetInfoObj, 0, 0);
  this->fields.isReset = isReset;
  *(_QWORD *)&this->fields.allMaxNum = 0;
  this->fields.currentBoxGachaId = boxGachaId;
  this->fields.currentBaseId = baseId;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16, v17);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, baseData, v18);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  resetInfoObj = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, baseData, v18);
    resetInfoObj = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_35;
  resetInfoObj = (UnityEngine_GameObject_o *)UserEventMaster__GetEntityDefinitely(
                                               (UserEventMaster_o *)Master_object,
                                               *(_QWORD *)(resetInfoObj[7].fields.m_CachedPtr + 64),
                                               eventId,
                                               0);
  if ( !resetInfoObj )
    goto LABEL_35;
  EventFlag = UserEventEntity__getEventFlag((UserEventEntity_o *)resetInfoObj, 10, 0);
  resetInfoObj = (UnityEngine_GameObject_o *)UnityEngine_PlayerPrefs__GetInt_83396820(
                                               (System_String_o *)StringLiteral_23694/*"overwriteFirstTimeDispItemGet"*/,
                                               0);
  if ( EventFlag && !(_DWORD)resetInfoObj )
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_23694/*"overwriteFirstTimeDispItemGet"*/, 1, 0);
  if ( !baseData )
    goto LABEL_35;
  max_length = baseData->max_length;
  if ( (int)max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)max_length )
        sub_2213CE4(resetInfoObj);
      v23 = baseData->m_Items[v22];
      if ( resIds && (int)resIds->max_length >= 1 )
      {
        if ( !v23 )
          break;
        m_Items = resIds->m_Items;
        v25 = 0;
        v26 = (unsigned int)resIds->max_length;
        do
        {
          v27 = *m_Items++;
          --v26;
          v25 |= v23->fields.no == v27;
        }
        while ( v26 );
      }
      else
      {
        v25 = 0;
      }
      v28 = (BoxGachaItemListViewItem_o *)sub_2213CCC(BoxGachaItemListViewItem_TypeInfo);
      BoxGachaItemListViewItem___ctor(v28, v23, eventId, boxGachaId, v25 & 1, v29);
      resetInfoObj = (UnityEngine_GameObject_o *)this->fields.itemList;
      if ( !resetInfoObj )
        break;
      m_CachedPtr = resetInfoObj->fields.m_CachedPtr;
      v37 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(resetInfoObj[1].klass);
      if ( !m_CachedPtr )
        break;
      klass_low = SLODWORD(resetInfoObj[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)resetInfoObj,
          (Il2CppObject *)v28,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = m_CachedPtr + 8 * klass_low;
        LODWORD(resetInfoObj[1].klass) = klass_low + 1;
        *(_QWORD *)(v39 + 32) = v28;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v39 + 32), (int32_t)v28, v30, v31, v32, v33, v34, v35);
      }
      LODWORD(max_length) = baseData->max_length;
      if ( (__int64)++v22 >= (int)max_length )
        goto LABEL_34;
    }
LABEL_35:
    sub_2213CDC(resetInfoObj, baseData);
  }
LABEL_34:
  BoxGachaItemListViewManager__RefrashListDisp(this, (const MethodInfo *)baseData);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void BoxGachaItemListViewManager__DestroyList(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


int32_t BoxGachaItemListViewManager__GetGachaItemCurrentNum(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.allCurrentNum;
}


int32_t BoxGachaItemListViewManager__GetGachaItemMaxNum(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.allMaxNum;
}


BoxGachaItemListViewItem_o *BoxGachaItemListViewManager__GetItem(
        BoxGachaItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BoxGachaItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596A6CD & 1) == 0 )
  {
    sub_2213A60(&BoxGachaItemListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596A6CD = 1;
  }
  result = (BoxGachaItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (BoxGachaItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = BoxGachaItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (BoxGachaItemListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != BoxGachaItemListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


void BoxGachaItemListViewManager__OnClickListView(
        BoxGachaItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  ServantEntity_o *Item; // x0
  const MethodInfo *v8; // x1
  __int64 naturalAligment; // x10
  __int64 v10; // x8
  ServantEntity_o *v11; // x20
  int v12; // w8
  __int64 v13; // x8
  int v14; // w9
  Il2CppObject *v15; // x21
  CommandCodeEntity_o *v16; // x20
  ServantStatusDialog_EndDelegate_o *v17; // x22
  Il2CppObject *Instance; // x22
  System_String_o *individuality; // x21
  System_String_o *relateQuestIds; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v21; // x23
  Il2CppObject *v22; // x21
  ItemEntity_o *cardIds; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v24; // x22
  bool IsServantEquip; // w22
  __int64 v26; // x2
  CommonUI_o *v27; // x21
  GiftEntity_o *v28; // x20
  ServantStatusDialog_EndDelegate_o *v29; // x22
  __int64 v30; // x8
  __int64 v31; // x20
  __int64 v32; // x22
  int32_t v33; // w20
  ServantStatusDialog_EndDelegate_o *v34; // x22
  int v35; // w20
  ServantCostumeEntity_o *v36; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_596A6D4 & 1) == 0 )
  {
    sub_2213A60(&Method_BoxGachaItemListViewManager_CloseCommandCodeDetail__);
    sub_2213A60(&Method_BoxGachaItemListViewManager_OnClickListView__);
    sub_2213A60(&Method_BoxGachaItemListViewManager_closeItemDetail__);
    sub_2213A60(&Method_BoxGachaItemListViewManager_closeSvtDetail__);
    sub_2213A60(&BoxGachaItemListViewObject_TypeInfo);
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&MissionInfoMaker_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A6D4 = 1;
  }
  v5 = Method_BoxGachaItemListViewManager_OnClickListView__;
  entity = 0;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_BoxGachaItemListViewManager_OnClickListView__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  if ( !obj )
    goto LABEL_41;
  naturalAligment = BoxGachaItemListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_41;
  if ( (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != BoxGachaItemListViewObject_TypeInfo )
    goto LABEL_41;
  Item = (ServantEntity_o *)BoxGachaItemListViewObject__GetItem((BoxGachaItemListViewObject_o *)obj, v8);
  if ( !Item )
    goto LABEL_41;
  v10 = *(_QWORD *)&Item->fields.sellQp;
  v11 = Item;
  if ( !v10 )
    goto LABEL_41;
  v12 = *(_DWORD *)(v10 + 24);
  if ( v12 != 1 )
  {
    if ( (v12 & 0xFFFFFFFE) == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      individuality = (System_String_o *)v11->fields.individuality;
      relateQuestIds = (System_String_o *)v11->fields.relateQuestIds;
      v21 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v21,
        (Il2CppObject *)this,
        (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
        0);
      if ( !Instance )
        goto LABEL_41;
      CommonUI__OpenItemDetailDialog_37450192((CommonUI_o *)Instance, individuality, relateQuestIds, v21, 0);
    }
    return;
  }
  v13 = *(_QWORD *)&Item->fields.sellRarePri;
  if ( !v13 )
    return;
  v14 = *(_DWORD *)(v13 + 20);
  if ( v14 <= 5 )
  {
    if ( v14 != 1 )
    {
      if ( v14 == 2 )
      {
        v22 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        cardIds = (ItemEntity_o *)v11->fields.cardIds;
        v24 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v24,
          (Il2CppObject *)this,
          (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
          0);
        if ( !v22 )
          goto LABEL_41;
        CommonUI__OpenItemDetailDialog((CommonUI_o *)v22, cardIds, v24, 50, 0);
      }
      return;
    }
    goto LABEL_25;
  }
  if ( (unsigned int)(v14 - 6) < 2 )
  {
LABEL_25:
    Item = *(ServantEntity_o **)&Item->fields.combineMaterialId;
    if ( !Item )
      goto LABEL_41;
    IsServantEquip = ServantEntity__get_IsServantEquip(Item, 0);
    Item = (ServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v27 = (CommonUI_o *)Item;
    if ( IsServantEquip )
    {
      v28 = *(GiftEntity_o **)&v11->fields.sellRarePri;
      v29 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v29,
        (Il2CppObject *)this,
        Method_BoxGachaItemListViewManager_closeSvtDetail__,
        0);
      if ( !v27 )
        goto LABEL_41;
      CommonUI__OpenServantStatusDialog_37387092(v27, 7, v28, v29, 0);
    }
    else
    {
      v30 = *(_QWORD *)&v11->fields.combineMaterialId;
      if ( !v30 )
        goto LABEL_41;
      v31 = *(_QWORD *)(v30 + 16);
      v32 = *(_QWORD *)(v30 + 24);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v26);
      *(_QWORD *)&v41.fields.currentCryptoKey = v31;
      *(_QWORD *)&v41.fields.fakeValue = v32;
      v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v41, 0);
      v34 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v34,
        (Il2CppObject *)this,
        Method_BoxGachaItemListViewManager_closeSvtDetail__,
        0);
      if ( !v27 )
        goto LABEL_41;
      CommonUI__OpenServantStatusDialog_37386528(v27, 7, v33, v34, 0);
    }
    return;
  }
  if ( v14 == 9 )
  {
    v35 = *(_DWORD *)(v13 + 24);
    Item = (ServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Item )
      goto LABEL_41;
    Item = (ServantEntity_o *)DataManager__GetMasterData_object_(
                                (DataManager_o *)Item,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
    if ( !Item )
      goto LABEL_41;
    if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Item, &entity, v35 / 100, v35 % 100, 0) )
    {
      v36 = entity;
      v37 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v37,
        (Il2CppObject *)this,
        (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
        0);
      if ( !*(&MissionInfoMaker_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo, v38, v39);
      MissionInfoMaker__OpenCostumeReleaseDetail(v36, v37, 0);
    }
  }
  else if ( v14 == 11 )
  {
    v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = *(CommandCodeEntity_o **)&v11->fields.cost;
    v17 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v17,
      (Il2CppObject *)this,
      Method_BoxGachaItemListViewManager_CloseCommandCodeDetail__,
      0);
    if ( v15 )
    {
      CommonUI__OpenServantEquipStatusDialog_37389176((CommonUI_o *)v15, 25, v16, 0, v17, 0, 0);
      return;
    }
LABEL_41:
    sub_2213CDC(Item, v8);
  }
}


void BoxGachaItemListViewManager__OnMoveEnd(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_596A6D3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A6D3 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_2213CDC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


void BoxGachaItemListViewManager__RefrashListDisp(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  _BOOL4 isReset; // w8
  UnityEngine_GameObject_o *resetInfoObj; // x0
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 naturalAligment; // x11
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596A6CC & 1) == 0 )
  {
    sub_2213A60(&BoxGachaItemListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_596A6CC = 1;
  }
  isReset = this->fields.isReset;
  memset(&v8, 0, sizeof(v8));
  if ( isReset )
  {
    resetInfoObj = this->fields.resetInfoObj;
    if ( !resetInfoObj )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive(resetInfoObj, 1, 0);
  }
  resetInfoObj = (UnityEngine_GameObject_o *)this->fields.itemList;
  if ( !resetInfoObj )
LABEL_15:
    sub_2213CDC(resetInfoObj, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)resetInfoObj,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current
      || (naturalAligment = BoxGachaItemListViewItem_TypeInfo->_2.naturalAligment,
          v8.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (BoxGachaItemListViewItem_c *)v8.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != BoxGachaItemListViewItem_TypeInfo )
    {
      sub_2213CDC(v5, v6);
    }
    *(int32x2_t *)&this->fields.allMaxNum = vadd_s32(
                                              vrev64_s32(*(int32x2_t *)((char *)&v8.fields._current->klass
                                                                      + (unsigned __int64)off_C0
                                                                      + 4)),
                                              *(int32x2_t *)&this->fields.allMaxNum);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void BoxGachaItemListViewManager__RequestInto(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_BoxGachaItemListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v7; // x20
  int v8; // w24
  int32_t v9; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v11; // x23
  const MethodInfo *v12; // x3
  System_String_o *v13; // x1
  float v14; // s0

  if ( (byte_596A6D2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoxGachaItemListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Item__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596A6D2 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList = BoxGachaItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_2213CDC(ObjectList, v5);
  size = ObjectList->fields._size;
  v7 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v8 = 0;
  v9 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v7,
             v9,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      BoxGachaItemListViewObject__Init_38288324(
        (BoxGachaItemListViewObject_o *)Item,
        4,
        v11,
        this->fields.listInDelay,
        v12);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v9;
  }
  while ( v9 < v7->fields._size );
  if ( !v8 )
  {
LABEL_12:
    v13 = (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/;
    v14 = this->fields.listInDelay + 0.5;
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v13, v14, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaItemListViewManager__RequestListObject(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596A6D0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoxGachaItemListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596A6D0 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)BoxGachaItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      BoxGachaItemListViewObject__Init_38288324((BoxGachaItemListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaItemListViewManager__RequestListObject_38288424(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596A6D1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoxGachaItemListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596A6D1 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)BoxGachaItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      BoxGachaItemListViewObject__Init_38288916((BoxGachaItemListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaItemListViewManager__ResetBtnColliderCtr(
        BoxGachaItemListViewManager_o *this,
        bool isGachaReset,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *resetInfoObj; // x0

  resetInfoObj = (UnityEngine_Collider_o *)this->fields.resetInfoObj;
  if ( !resetInfoObj )
    goto LABEL_6;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resetInfoObj, 0) )
  {
    resetInfoObj = (UnityEngine_Collider_o *)this->fields.resetInfoCol;
    if ( resetInfoObj )
    {
      UnityEngine_Collider__set_enabled(resetInfoObj, isGachaReset, 0);
      return;
    }
LABEL_6:
    sub_2213CDC(resetInfoObj, isGachaReset);
  }
}


void BoxGachaItemListViewManager__SetMode(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        BoxGachaItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  BoxGachaItemListViewManager__SetMode_38287452(this, mode, v10);
}


void BoxGachaItemListViewManager__SetMode_38287452(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_596A6CF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_11840/*"RequestInto"*/);
    byte_596A6CF = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( mode == 1 )
  {
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
      {
        sub_2213CDC(gameObject, v8);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11840/*"RequestInto"*/,
      0.0,
      0);
  }
}


void BoxGachaItemListViewManager__SetMode_38287704(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  BoxGachaItemListViewManager__SetMode_38287452(this, mode, v10);
}


void BoxGachaItemListViewManager__SetMode_38287756(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  const MethodInfo *v11; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v5,
    v6,
    v7,
    v8);
  BoxGachaItemListViewManager__SetMode_38287452(this, mode, v11);
}


void BoxGachaItemListViewManager__SetObjectItem(
        BoxGachaItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596A6CE & 1) == 0 )
  {
    sub_2213A60(&BoxGachaItemListViewObject_TypeInfo);
    byte_596A6CE = 1;
  }
  if ( obj
    && (naturalAligment = BoxGachaItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == BoxGachaItemListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 2 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  BoxGachaItemListViewObject__Init_38287324((BoxGachaItemListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void BoxGachaItemListViewManager__SetScrollInfo(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v5; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A6DB & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_596A6DB = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v6.fields.x = *((float *)scrollView + 74);
  v6.fields.y = *((float *)scrollView + 75);
  v6.fields.w = 450.0;
  v6.fields.z = *((float *)scrollView + 76);
  UIPanel__set_baseClipRegion((UIPanel_o *)scrollView, v6, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0),
        (scrollView = this->fields.scrollView) == 0)
    || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0)) == 0 )
  {
LABEL_10:
    sub_2213CDC(scrollView, method);
  }
  v5.fields.y = 145.0;
  v5.fields.x = localPosition.fields.x;
  v5.fields.z = localPosition.fields.z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v5, 0);
}


void BoxGachaItemListViewManager___closeEventSvtConfirmDlg_b__46_0(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_596A6DC & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6020/*"EXE_RESETGACHA"*/);
    byte_596A6DC = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_6020/*"EXE_RESETGACHA"*/, 0);
}


void BoxGachaItemListViewManager__add_callbackFunc(
        BoxGachaItemListViewManager_o *this,
        BoxGachaItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  BoxGachaItemListViewManager_o *v11; // x0
  BoxGachaItemListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596A6C5 & 1) == 0 )
  {
    sub_2213A60(&BoxGachaItemListViewManager_CallbackFunc_TypeInfo);
    byte_596A6C5 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (BoxGachaItemListViewManager_CallbackFunc_c *)v6->klass != BoxGachaItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoxGachaItemListViewManager_o *)sub_221405C(v6, BoxGachaItemListViewManager_CallbackFunc_TypeInfo, v7, v8);
  BoxGachaItemListViewManager__remove_callbackFunc(v11, v12, v13);
}


void BoxGachaItemListViewManager__add_callbackFunc2(
        BoxGachaItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  BoxGachaItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596A6C7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A6C7 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoxGachaItemListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  BoxGachaItemListViewManager__remove_callbackFunc2(v11, v12, v13);
}


void BoxGachaItemListViewManager__closeEventSvtConfirmDlg(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x21
  System_Action_o *v8; // x20

  if ( (byte_596A6D9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_BoxGachaItemListViewManager__closeEventSvtConfirmDlg_b__46_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A6D9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BoxGachaItemListViewManager__closeEventSvtConfirmDlg_b__46_0__,
      0);
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_37373868(v7, v8, 0);
      return;
    }
LABEL_8:
    sub_2213CDC(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void BoxGachaItemListViewManager__closeItemDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596A6D5 & 1) == 0 )
  {
    sub_2213A60(&Method_BoxGachaItemListViewManager_closeItemDetail__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A6D5 = 1;
  }
  v3 = Method_BoxGachaItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_BoxGachaItemListViewManager_closeItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaItemListViewManager__closeSvtDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  if ( (byte_596A6D6 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A6D6 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__UpdatePosition(scrollView, 0),
        (scrollView = (UIScrollView_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_2213CDC(scrollView, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)scrollView, 0, 0);
}


bool BoxGachaItemListViewManager__getIsRareTarget(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isResetTarget;
}


System_Collections_Generic_List_BoxGachaItemListViewObject__o *BoxGachaItemListViewManager__get_ClippingObjectList(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596A6CA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A6CA = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)BoxGachaItemListViewObject__GetItem(
                                 (BoxGachaItemListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoxGachaItemListViewObject__o *)v3;
}


System_Collections_Generic_List_BoxGachaItemListViewObject__o *BoxGachaItemListViewManager__get_ObjectList(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596A6C9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A6C9 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoxGachaItemListViewObject__o *)v3;
}


void BoxGachaItemListViewManager__itemColliderCtr(
        BoxGachaItemListViewManager_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *current; // x26
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x20
  __int64 v12; // x1
  UnityEngine_Component_o *v13; // x0
  Il2CppObject *Component_object; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596A6DA & 1) == 0 )
  {
    sub_2213A60(&BoxGachaItemListViewItem_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A6DA = 1;
  }
  itemList = this->fields.itemList;
  memset(&v17, 0, sizeof(v17));
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v17 = v16;
    v16.fields._list = 0;
    *(_QWORD *)&v16.fields._index = &v17;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v17,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v6 )
        break;
      current = v17.fields._current;
      if ( !v17.fields._current
        || (naturalAligment = BoxGachaItemListViewItem_TypeInfo->_2.naturalAligment,
            v17.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (BoxGachaItemListViewItem_c *)v17.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != BoxGachaItemListViewItem_TypeInfo )
      {
        sub_2213CDC(v6, v7);
      }
      klass = v17.fields._current[7].klass;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        v13 = (UnityEngine_Component_o *)current[7].klass;
        if ( !v13 )
          sub_2213CDC(0, v12);
        Component_object = UnityEngine_Component__GetComponent_object_(
                             v13,
                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Collider___);
        if ( !Component_object )
          sub_2213CDC(0, v15);
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isDisp, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void BoxGachaItemListViewManager__remove_callbackFunc(
        BoxGachaItemListViewManager_o *this,
        BoxGachaItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  BoxGachaItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596A6C6 & 1) == 0 )
  {
    sub_2213A60(&BoxGachaItemListViewManager_CallbackFunc_TypeInfo);
    byte_596A6C6 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (BoxGachaItemListViewManager_CallbackFunc_c *)v6->klass != BoxGachaItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoxGachaItemListViewManager_o *)sub_221405C(v6, BoxGachaItemListViewManager_CallbackFunc_TypeInfo, v7, v8);
  BoxGachaItemListViewManager__add_callbackFunc2(v11, v12, v13);
}


void BoxGachaItemListViewManager__remove_callbackFunc2(
        BoxGachaItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  BoxGachaItemListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596A6C8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A6C8 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (BoxGachaItemListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  BoxGachaItemListViewManager__get_ObjectList(v11, v12);
}


void BoxGachaItemListViewManager_CallbackFunc___ctor(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFF898;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FFF858;
}


System_IAsyncResult_o *BoxGachaItemListViewManager_CallbackFunc__BeginInvoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


void BoxGachaItemListViewManager_CallbackFunc__EndInvoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void BoxGachaItemListViewManager_CallbackFunc__Invoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}