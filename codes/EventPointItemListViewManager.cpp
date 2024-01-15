void __fastcall EventPointItemListViewManager___ctor(EventPointItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__CloseCommandCodeDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FAC48 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FAC48 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__CloseReplaseRewardDialog(
        EventPointItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventPointReplaseRewardDialog_o *eventPointReplaseRewardDialog; // x0
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = eventId;
  if ( (byte_40FAC3A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5645/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, *(_QWORD *)&eventId);
    byte_40FAC3A = 1;
  }
  eventPointReplaseRewardDialog = this->fields.eventPointReplaseRewardDialog;
  if ( !eventPointReplaseRewardDialog )
    sub_B170D4();
  EventPointReplaseRewardDialog__Close_26647380(eventPointReplaseRewardDialog, 0LL, method);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  v6 = System_String__Concat_43743732((System_String_o *)StringLiteral_5645/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v5, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v6, 1, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventPointItemListViewManager__CreateList(
        EventPointItemListViewManager_o *this,
        EventRewardEntity_array *rewardList,
        int64_t currentPoint,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x22
  WebViewManager_o *v13; // x0
  __int64 v14; // x27
  il2cpp_array_size_t v15; // w28
  EventRewardEntity_o *v16; // x23
  bool v17; // w25
  GiftEntity_o *DataById; // x26
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  EventPointItemListViewItem_o *v23; // x24
  const MethodInfo *v24; // x4
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2

  if ( (byte_40FAC38 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, rewardList);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventPointMaster___, v7);
    sub_B16FFC(&EventPointItemListViewItem_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FAC38 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( rewardList )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
    v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !v13 )
      goto LABEL_16;
    DataManager__GetMasterData_WarQuestSelectionMaster_(
      (DataManager_o *)v13,
      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    v14 = *(_QWORD *)&rewardList->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        v16 = rewardList->m_Items[v15];
        if ( !v16 )
          break;
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v17 = v16->fields.point <= currentPoint;
        DataById = GiftMaster__getDataById(MasterData_WarQuestSelectionMaster, v16->fields.giftId, 0LL);
        v23 = (EventPointItemListViewItem_o *)sub_B170CC(EventPointItemListViewItem_TypeInfo, v19, v20, v21, v22);
        EventPointItemListViewItem___ctor(v23, v16, DataById, v17, v24);
        itemList = this->fields.itemList;
        if ( !itemList )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)itemList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v23,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        if ( (int)++v15 >= (int)v14 )
          goto LABEL_14;
        if ( v15 >= rewardList->max_length )
        {
          sub_B17100(v26, v27, v28);
          sub_B170A0();
        }
      }
LABEL_16:
      sub_B170D4();
    }
LABEL_14:
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall EventPointItemListViewManager__DestroyList(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


System_String_o *__fastcall EventPointItemListViewManager__GetGiftName(
        EventPointItemListViewManager_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t type; // w8
  WebViewManager_o *v13; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x0
  ServantEntity_o *v15; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19
  WebViewManager_o *v18; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v19; // x0
  WarEntity_o *v20; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  CommandCodeEntity_o *Entity; // x0

  if ( (byte_40FAC3C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, gift);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&StringLiteral_1/*""*/, v11);
    byte_40FAC3C = 1;
  }
  if ( !gift )
    goto LABEL_23;
  type = gift->fields.type;
  if ( type == 11 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        Entity = (CommandCodeEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          gift->fields.objectId,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( Entity )
          return CommandCodeEntity__GetName(Entity, 0LL);
      }
    }
    goto LABEL_23;
  }
  if ( type == 2 )
  {
    v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v18 )
    {
      v19 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)v18,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( v19 )
      {
        v20 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                v19,
                gift->fields.objectId,
                (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( v20 )
          return v20->fields.age;
      }
    }
    goto LABEL_23;
  }
  if ( type != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v13 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v13
    || (v14 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v13,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (v15 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   v14,
                                   gift->fields.objectId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_23:
    sub_B170D4();
  }
  Name = ServantEntity__GetName(v15, -1, 0, -1, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44107000(Name, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventPointItemListViewItem_o *__fastcall EventPointItemListViewManager__GetItem(
        EventPointItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v7; // x8
  __int64 v8; // x11

  if ( (byte_40FAC3E & 1) == 0 )
  {
    sub_B16FFC(&EventPointItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_40FAC3E = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v7 = itemList->fields._items->m_Items[index];
  if ( !v7 )
    return 0LL;
  v8 = *(&EventPointItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v7->klass->_2.bitflags2 + 1) < (unsigned int)v8 )
    return 0LL;
  if ( (EventPointItemListViewItem_c *)v7->klass->_2.typeHierarchy[v8 - 1] == EventPointItemListViewItem_TypeInfo )
    return (EventPointItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


System_String_o *__fastcall EventPointItemListViewManager__GetKindName(
        EventPointItemListViewManager_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_40FAC3B & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, gift);
    sub_B16FFC(&StringLiteral_5638/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/, v4);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40FAC3B = 1;
  }
  if ( !gift )
    sub_B170D4();
  if ( gift->fields.type != 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_5638/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/, 0LL);
}


void __fastcall EventPointItemListViewManager__OnClickListView(
        EventPointItemListViewManager_o *this,
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
  const MethodInfo *v13; // x1
  __int64 v14; // x10
  __int64 v15; // x10
  EventPointItemListViewObject_o *v16; // x0
  EventPointItemListViewItem_o *Item; // x0
  struct EventRewardEntity_o *eventRewardEnt; // x8
  EventPointItemListViewItem_o *v19; // x20
  int32_t type; // w8
  struct GiftEntity_o *giftEnt; // x8
  int32_t v22; // w0
  WebViewManager_o *v23; // x0
  ItemEntity_o *itemEnt; // x20
  CommonUI_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  ItemDetailInfoComponent_CallbackFunc_o *v30; // x22
  WebViewManager_o *Instance; // x0
  System_String_o *nameTxt; // x21
  System_String_o *rewardDetailTxt; // x20
  CommonUI_o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  ItemDetailInfoComponent_CallbackFunc_o *v39; // x23
  CommonUI_o *v40; // x0
  System_String_o *v41; // x1
  System_String_o *v42; // x2
  WebViewManager_o *v43; // x0
  struct ServantEntity_o *svtEnt; // x8
  CommonUI_o *v45; // x20
  __int64 v46; // x21
  __int64 v47; // x22
  int32_t v48; // w21
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  ServantStatusDialog_EndDelegate_o *v53; // x22
  struct GiftEntity_o *v54; // x8
  int32_t v55; // w8
  WebViewManager_o *v56; // x0
  CommandCodeEntity_o *commandCodeEntity; // x20
  CommonUI_o *v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  ServantStatusDialog_EndDelegate_o *v63; // x22
  WebViewManager_o *v64; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  struct EventPointBuffEntity_o *eventPointBuffEntity; // x8
  System_String_o *detail; // x22
  System_String_o *v71; // x20
  CommonUI_o *v72; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_40FAC45 & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B16FFC(&Method_EventPointItemListViewManager_CloseCommandCodeDetail__, v6);
    sub_B16FFC(&Method_EventPointItemListViewManager_closeItemDetail__, v7);
    sub_B16FFC(&Method_EventPointItemListViewManager_closeSvtDetail__, v8);
    sub_B16FFC(&EventPointItemListViewObject_TypeInfo, v9);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B16FFC(&SoundManager_TypeInfo, v12);
    byte_40FAC45 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_43;
  v14 = *(&EventPointItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v14
    || (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[v14 - 1] != EventPointItemListViewObject_TypeInfo )
  {
    goto LABEL_43;
  }
  v15 = *(&EventPointItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v15 )
    v16 = (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[v15 - 1] == EventPointItemListViewObject_TypeInfo
        ? (EventPointItemListViewObject_o *)obj
        : 0LL;
  else
    v16 = 0LL;
  Item = EventPointItemListViewObject__GetItem(v16, v13);
  if ( !Item )
    goto LABEL_43;
  eventRewardEnt = Item->fields.eventRewardEnt;
  v19 = Item;
  if ( !eventRewardEnt )
    goto LABEL_43;
  type = eventRewardEnt->fields.type;
  if ( type != 1 )
  {
    if ( (type & 0xFFFFFFFE) != 2 )
      return;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    nameTxt = v19->fields.nameTxt;
    rewardDetailTxt = v19->fields.rewardDetailTxt;
    v34 = (CommonUI_o *)Instance;
    v39 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v35,
                                                      v36,
                                                      v37,
                                                      v38);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v39,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v34 )
      goto LABEL_43;
    v40 = v34;
    v41 = nameTxt;
    v42 = rewardDetailTxt;
    goto LABEL_24;
  }
  giftEnt = Item->fields.giftEnt;
  if ( giftEnt )
  {
    v22 = giftEnt->fields.type;
    if ( v22 == 2 )
    {
      v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      itemEnt = v19->fields.itemEnt;
      v25 = (CommonUI_o *)v23;
      v30 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                        ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                        v26,
                                                        v27,
                                                        v28,
                                                        v29);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v30,
        (Il2CppObject *)this,
        (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
        0LL);
      if ( v25 )
      {
        CommonUI__OpenItemDetailDialog(v25, itemEnt, v30, 50, 0LL);
        return;
      }
LABEL_43:
      sub_B170D4();
    }
  }
  else
  {
    v22 = 0;
  }
  if ( !Gift__IsServant(v22, 0LL) )
  {
    v54 = v19->fields.giftEnt;
    if ( !v54 )
      return;
    v55 = v54->fields.type;
    if ( v55 != 12 )
    {
      if ( v55 == 11 )
      {
        v56 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        commandCodeEntity = v19->fields.commandCodeEntity;
        v58 = (CommonUI_o *)v56;
        v63 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                     ServantStatusDialog_EndDelegate_TypeInfo,
                                                     v59,
                                                     v60,
                                                     v61,
                                                     v62);
        ServantStatusDialog_EndDelegate___ctor(
          v63,
          (Il2CppObject *)this,
          Method_EventPointItemListViewManager_CloseCommandCodeDetail__,
          0LL);
        if ( !v58 )
          goto LABEL_43;
        CommonUI__OpenServantEquipStatusDialog_18253740(v58, 25, commandCodeEntity, 0, v63, 0LL, 0LL);
      }
      return;
    }
    if ( !v19->fields.eventPointBuffEntity )
      return;
    v64 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventPointBuffEntity = v19->fields.eventPointBuffEntity;
    if ( !eventPointBuffEntity )
      goto LABEL_43;
    detail = eventPointBuffEntity->fields.detail;
    v71 = v19->fields.nameTxt;
    v72 = (CommonUI_o *)v64;
    v39 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v65,
                                                      v66,
                                                      v67,
                                                      v68);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v39,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v72 )
      goto LABEL_43;
    v40 = v72;
    v41 = v71;
    v42 = detail;
LABEL_24:
    CommonUI__OpenItemDetailDialog_18297320(v40, v41, v42, v39, 0LL);
    return;
  }
  v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  svtEnt = v19->fields.svtEnt;
  if ( !svtEnt )
    goto LABEL_43;
  v45 = (CommonUI_o *)v43;
  v47 = *(_QWORD *)&svtEnt->fields.id.fields.currentCryptoKey;
  v46 = *(_QWORD *)&svtEnt->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v73.fields.currentCryptoKey = v47;
  *(_QWORD *)&v73.fields.fakeValue = v46;
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v73, 0LL);
  v53 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(ServantStatusDialog_EndDelegate_TypeInfo, v49, v50, v51, v52);
  ServantStatusDialog_EndDelegate___ctor(
    v53,
    (Il2CppObject *)this,
    Method_EventPointItemListViewManager_closeSvtDetail__,
    0LL);
  if ( !v45 )
    goto LABEL_43;
  CommonUI__OpenServantStatusDialog_18251308(v45, 7, v48, v53, 0LL);
}


void __fastcall EventPointItemListViewManager__OnMoveEnd(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UIScrollView_o *v13; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_40FAC44 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FAC44 = 1;
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
        v13 = this->fields.scrollView;
        if ( !v13 )
          sub_B170D4();
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__OpenReplaseRewardDialog(
        EventPointItemListViewManager_o *this,
        EventRewardEntity_array *eventRewardEntList,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  WebViewManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x22
  WebViewManager_o *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x23
  WebViewManager_o *v45; // x0
  EventPointItemListViewManager_o *Entitys_WarMaster__WarEntity; // x0
  __int64 v47; // x1
  __int64 giftId; // x2
  const MethodInfo *v49; // x3
  __int64 v50; // x4
  signed int max_length; // w8
  GiftEntity_array *v52; // x25
  __int64 v53; // x19
  EventRewardEntity_o *v54; // x28
  GiftEntity_o *v55; // x0
  System_Text_StringBuilder_o *v56; // x24
  int size; // w8
  __int64 v58; // x28
  GiftEntity_o *v59; // x26
  EventPointItemListViewManager_o *DataById; // x0
  const MethodInfo *v61; // x2
  GiftEntity_o *v62; // x25
  System_String_o *KindName; // x27
  const MethodInfo *v64; // x2
  System_String_o *GiftName; // x0
  System_String_o *v66; // x0
  System_String_o *v67; // x0
  System_Text_StringBuilder_o *appended; // x0
  const MethodInfo *v69; // x2
  System_String_o *v70; // x0
  System_String_o *v71; // x26
  System_String_o *v72; // x0
  System_String_o *v73; // x25
  System_String_o *v74; // x0
  System_String_o *v75; // x0
  EventPointReplaseRewardDialog_o *eventPointReplaseRewardDialog; // x19
  System_String_o *v77; // x0
  System_String_o *v78; // x21
  System_String_o *v79; // x0
  System_String_o *v80; // x21
  System_String_o *v81; // x22
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  EventPointReplaseRewardDialog_ClickDelegate_o *v86; // x23
  const MethodInfo *v87; // [xsp+10h] [xbp-60h]
  EventPointItemListViewManager_o *v88; // [xsp+18h] [xbp-58h]

  if ( (byte_40FAC39 & 1) == 0 )
  {
    sub_B16FFC(&EventPointReplaseRewardDialog_ClickDelegate_TypeInfo, eventRewardEntList);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventPointMaster___, v9);
    sub_B16FFC(&Method_DataManager_getEntitys_GiftMaster__GiftEntity___, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v14);
    sub_B16FFC(&System_Collections_Generic_List_GiftEntity__TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v18);
    sub_B16FFC(&Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__, v19);
    sub_B16FFC(&EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v21);
    sub_B16FFC(&StringLiteral_5645/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v22);
    sub_B16FFC(&StringLiteral_23674/*"→　「"*/, v23);
    sub_B16FFC(&StringLiteral_5637/*"EVENT_POINT_GIFT_ADD"*/, v24);
    sub_B16FFC(&StringLiteral_5639/*"EVENT_POINT_GIFT_ADD_COUNT"*/, v25);
    sub_B16FFC(&StringLiteral_23700/*"」"*/, v26);
    sub_B16FFC(&StringLiteral_23699/*"「"*/, v27);
    byte_40FAC39 = 1;
  }
  v28 = sub_B170CC(
          EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo,
          eventRewardEntList,
          *(_QWORD *)&eventId,
          method,
          v4);
  EventPointItemListViewManager___c__DisplayClass20_0___ctor(
    (EventPointItemListViewManager___c__DisplayClass20_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_46;
  *(_QWORD *)(v28 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  *(_DWORD *)(v28 + 24) = eventId;
  if ( eventRewardEntList )
  {
    if ( *(_QWORD *)&eventRewardEntList->max_length )
    {
      v35 = System_Int32__ToString((int)v28 + 24, 0LL);
      v36 = System_String__Concat_43743732((System_String_o *)StringLiteral_5645/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v35, 0LL);
      if ( !UnityEngine_PlayerPrefs__GetInt(v36, 0, 0LL) )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_46;
        MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)Instance,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
        v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v39 )
          goto LABEL_46;
        v88 = this;
        DataManager__GetMasterData_WarQuestSelectionMaster_(
          (DataManager_o *)v39,
          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
        v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GiftEntity__TypeInfo, v40, v41, v42, v43);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v44,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        v45 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v45 )
          goto LABEL_46;
        Entitys_WarMaster__WarEntity = (EventPointItemListViewManager_o *)DataManager__getEntitys_WarMaster__WarEntity_(
                                                                            (DataManager_o *)v45,
                                                                            (const MethodInfo_18C3518 *)Method_DataManager_getEntitys_GiftMaster__GiftEntity___);
        max_length = eventRewardEntList->max_length;
        if ( max_length >= 1 )
        {
          v52 = (GiftEntity_array *)Entitys_WarMaster__WarEntity;
          v53 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v53 >= max_length )
            {
              sub_B17100(Entitys_WarMaster__WarEntity, v47, giftId);
              sub_B170A0();
            }
            v54 = eventRewardEntList->m_Items[v53];
            if ( !v54 )
              break;
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Entitys_WarMaster__WarEntity = (EventPointItemListViewManager_o *)GiftMaster__getDataById(
                                                                                MasterData_WarQuestSelectionMaster,
                                                                                v54->fields.giftId,
                                                                                0LL);
            if ( !Entitys_WarMaster__WarEntity )
              break;
            giftId = (unsigned int)v54->fields.giftId;
            if ( Entitys_WarMaster__WarEntity->fields.m_CachedPtr != (_DWORD)giftId )
            {
              v55 = EventPointItemListViewManager__TargetItemTargetGiftEntity(
                      Entitys_WarMaster__WarEntity,
                      v52,
                      giftId,
                      v49);
              if ( !v44 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v44,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
            }
            max_length = eventRewardEntList->max_length;
            if ( (int)++v53 >= max_length )
              goto LABEL_20;
          }
LABEL_46:
          sub_B170D4();
        }
LABEL_20:
        if ( !v44 )
          goto LABEL_46;
        if ( v44->fields._size >= 1 )
        {
          v56 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v47, giftId, v49, v50);
          System_Text_StringBuilder___ctor(v56, 0LL);
          size = v44->fields._size;
          if ( size >= 1 )
          {
            v58 = 0LL;
            do
            {
              if ( size <= (unsigned int)v58 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v59 = (GiftEntity_o *)v44->fields._items->m_Items[v58];
              if ( !v59 || !MasterData_WarQuestSelectionMaster )
                goto LABEL_46;
              DataById = (EventPointItemListViewManager_o *)GiftMaster__getDataById(
                                                              MasterData_WarQuestSelectionMaster,
                                                              v59->fields.id,
                                                              0LL);
              v62 = (GiftEntity_o *)DataById;
              if ( (_DWORD)v58 )
              {
                if ( !v56 )
                  goto LABEL_46;
                DataById = (EventPointItemListViewManager_o *)System_Text_StringBuilder__Append_41914240(
                                                                v56,
                                                                (System_String_o *)StringLiteral_26/*"\n"*/,
                                                                0LL);
              }
              KindName = EventPointItemListViewManager__GetKindName(DataById, v59, v61);
              GiftName = EventPointItemListViewManager__GetGiftName(
                           (EventPointItemListViewManager_o *)KindName,
                           v59,
                           v64);
              v66 = System_String__Concat_43747144(
                      KindName,
                      (System_String_o *)StringLiteral_23699/*"「"*/,
                      GiftName,
                      (System_String_o *)StringLiteral_23700/*"」"*/,
                      0LL);
              if ( !v66 )
                goto LABEL_46;
              v67 = System_String__PadRight(v66, 15, 0x3000u, 0LL);
              if ( !v56 )
                goto LABEL_46;
              System_Text_StringBuilder__Append_41914240(v56, v67, 0LL);
              appended = System_Text_StringBuilder__Append_41914240(v56, (System_String_o *)StringLiteral_23674/*"→　「"*/, 0LL);
              v70 = EventPointItemListViewManager__GetGiftName((EventPointItemListViewManager_o *)appended, v62, v69);
              if ( !v62 )
                goto LABEL_46;
              v71 = v70;
              v72 = System_Int32__ToString((int)v62 + 28, 0LL);
              if ( !v72 )
                goto LABEL_46;
              v73 = System_String__PadLeft(v72, 2, 0x20u, 0LL);
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v74 = LocalizationManager__Get((System_String_o *)StringLiteral_5639/*"EVENT_POINT_GIFT_ADD_COUNT"*/, 0LL);
              v75 = System_String__Concat_43747144(v71, v73, v74, (System_String_o *)StringLiteral_23700/*"」"*/, 0LL);
              System_Text_StringBuilder__Append_41914240(v56, v75, 0LL);
              size = v44->fields._size;
            }
            while ( (int)++v58 < size );
          }
          eventPointReplaseRewardDialog = v88->fields.eventPointReplaseRewardDialog;
          v77 = System_Int32__ToString((int)v28 + 24, 0LL);
          v78 = System_String__Concat_43743732((System_String_o *)StringLiteral_5637/*"EVENT_POINT_GIFT_ADD"*/, v77, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v79 = LocalizationManager__Get(v78, 0LL);
          if ( !v56 )
            goto LABEL_46;
          v80 = v79;
          v81 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v56->klass->vtable._3_ToString.method)(
                                     v56,
                                     v56->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v86 = (EventPointReplaseRewardDialog_ClickDelegate_o *)sub_B170CC(
                                                                   EventPointReplaseRewardDialog_ClickDelegate_TypeInfo,
                                                                   v82,
                                                                   v83,
                                                                   v84,
                                                                   v85);
          EventPointReplaseRewardDialog_ClickDelegate___ctor(
            v86,
            (Il2CppObject *)v28,
            Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__,
            0LL);
          if ( !eventPointReplaseRewardDialog )
            goto LABEL_46;
          EventPointReplaseRewardDialog__Open(eventPointReplaseRewardDialog, v80, v81, v86, -1, 0, 0, 0, 0, 0, v87);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__RequestInto(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_EventPointItemListViewObject__o *ObjectList; // x0
  System_Collections_Generic_List_EventPointItemListViewObject__o *v9; // x20
  signed __int64 size; // x8
  unsigned __int64 v11; // x24
  int v12; // w23
  EventPointItemListViewObject_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FAC43 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventPointItemListViewManager_OnMoveEnd__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Item__, v5);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v6);
    byte_40FAC43 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventPointItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B170D4();
  v9 = ObjectList;
  this->fields.callbackCount = ObjectList->fields._size;
  LODWORD(size) = ObjectList->fields._size;
  if ( (int)size < 1 )
    goto LABEL_14;
  v11 = 0LL;
  v12 = 0;
  do
  {
    if ( v11 >= (unsigned int)size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v13 = v9->fields._items->m_Items[v11];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v13, 0LL) )
    {
      v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v13 )
        goto LABEL_15;
      ++v12;
      zero = UnityEngine_Vector3__get_zero(0LL);
      EventPointItemListViewObject__Init(v13, 4, v18, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v19);
    }
    else
    {
      --this->fields.callbackCount;
    }
    size = v9->fields._size;
    ++v11;
  }
  while ( (__int64)v11 < size );
  if ( !v12 )
  {
LABEL_14:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      0.6,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__RequestListObject(
        EventPointItemListViewManager_o *this,
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
  int32_t size; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *current; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FAC41 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__, v9);
    sub_B16FFC(&Method_EventPointItemListViewManager_OnMoveEnd__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v12);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v13);
    byte_40FAC41 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventPointItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v23,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v23.fields.current;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      EventPointItemListViewObject__Init(
        (EventPointItemListViewObject_o *)current,
        mode,
        v21,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v22);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__RequestListObject_26640336(
        EventPointItemListViewManager_o *this,
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
  int32_t size; // w8
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40FAC42 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__, v7);
    sub_B16FFC(&Method_EventPointItemListViewManager_OnMoveEnd__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v10);
    sub_B16FFC(&StringLiteral_10004/*"OnMoveEnd"*/, v11);
    byte_40FAC42 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventPointItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B170D4();
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10004/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B170D4();
      zero = UnityEngine_Vector3__get_zero(0LL);
      EventPointItemListViewObject__Init(
        (EventPointItemListViewObject_o *)current,
        mode,
        v19,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v20);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
  }
}


void __fastcall EventPointItemListViewManager__SetMode(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        EventPointItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventPointItemListViewManager__SetMode_26639368(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__SetMode_26639368(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Component_o *v7; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FAC40 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_B16FFC(&StringLiteral_11393/*"RequestInto"*/, v5);
    byte_40FAC40 = 1;
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
      v7 = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( !v7 || (gameObject = UnityEngine_Component__get_gameObject(v7, 0LL)) == 0LL )
        sub_B170D4();
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11393/*"RequestInto"*/,
      0.0,
      0LL);
  }
}


void __fastcall EventPointItemListViewManager__SetMode_26639644(
        EventPointItemListViewManager_o *this,
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  EventPointItemListViewManager__SetMode_26639368(this, mode, v11);
}


void __fastcall EventPointItemListViewManager__SetMode_26639704(
        EventPointItemListViewManager_o *this,
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventPointItemListViewManager__SetMode_26639368(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__SetObjectItem(
        EventPointItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  if ( (byte_40FAC3F & 1) == 0 )
  {
    sub_B16FFC(&EventPointItemListViewObject_TypeInfo, obj);
    byte_40FAC3F = 1;
  }
  if ( !obj
    || (v6 = *(&EventPointItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventPointItemListViewObject_TypeInfo )
  {
    sub_B170D4();
  }
  initMode = this->fields.initMode;
  *(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Vector3__get_zero(0LL);
  if ( initMode == 2 )
    v12 = 3;
  else
    v12 = 2;
  EventPointItemListViewObject__Init(
    (EventPointItemListViewObject_o *)obj,
    v12,
    0LL,
    0.0,
    *(UnityEngine_Vector3_o *)&v9,
    v8);
}


GiftEntity_o *__fastcall EventPointItemListViewManager__TargetItemTargetGiftEntity(
        EventPointItemListViewManager_o *this,
        GiftEntity_array *entitys,
        int32_t giftId,
        const MethodInfo *method)
{
  signed int max_length; // w8
  __int64 v5; // x9
  GiftEntity_o *result; // x0

  if ( !entitys )
    goto LABEL_9;
  max_length = entitys->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      result = entitys->m_Items[v5];
      if ( !result )
        break;
      if ( result->fields.id == giftId )
        return result;
      if ( (int)++v5 >= max_length )
        return 0LL;
    }
LABEL_9:
    sub_B170D4();
  }
  return 0LL;
}


void __fastcall EventPointItemListViewManager__add_callbackFunc(
        EventPointItemListViewManager_o *this,
        EventPointItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct EventPointItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventPointItemListViewManager_o *v10; // x0
  EventPointItemListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FAC32 & 1) == 0 )
  {
    sub_B16FFC(&EventPointItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FAC32 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (EventPointItemListViewManager_CallbackFunc_c *)v7->klass != EventPointItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_B173C8(v7);
  EventPointItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall EventPointItemListViewManager__add_callbackFunc2(
        EventPointItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventPointItemListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FAC34 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FAC34 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_B173C8(v7);
  EventPointItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__closeItemDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40FAC46 & 1) == 0 )
  {
    sub_B16FFC(&Method_EventPointItemListViewManager_closeItemDetail__, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_40FAC46 = 1;
  }
  v4 = Method_EventPointItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_EventPointItemListViewManager_closeItemDetail__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B17004(Method_EventPointItemListViewManager_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_B16FE0(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__closeSvtDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FAC47 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FAC47 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


System_Collections_Generic_List_EventPointItemListViewObject__o *__fastcall EventPointItemListViewManager__get_ClippingObjectList(
        EventPointItemListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  EventPointItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_40FAC37 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FAC37 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventPointItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      Item = (ListViewItem_o *)EventPointItemListViewObject__GetItem(Component_srcLineSprite, v18);
      if ( !Item )
        sub_B170D4();
      if ( Item->fields.isTermination )
      {
        if ( ListViewManager__ClippingItem_30192136((ListViewManager_o *)this, Item, 0LL) )
        {
          if ( !v14 )
            sub_B170D4();
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v14 )
          sub_B170D4();
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v14,
          v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v14;
}


System_Collections_Generic_List_EventPointItemListViewObject__o *__fastcall EventPointItemListViewManager__get_ObjectList(
        EventPointItemListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FAC36 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    byte_40FAC36 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !current )
        sub_B170D4();
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      if ( !v14 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        Component_srcLineSprite,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v14;
}


void __fastcall EventPointItemListViewManager__remove_callbackFunc(
        EventPointItemListViewManager_o *this,
        EventPointItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct EventPointItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventPointItemListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_40FAC33 & 1) == 0 )
  {
    sub_B16FFC(&EventPointItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_40FAC33 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (EventPointItemListViewManager_CallbackFunc_c *)v7->klass != EventPointItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B0BA14(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_B173C8(v7);
  EventPointItemListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall EventPointItemListViewManager__remove_callbackFunc2(
        EventPointItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  EventPointItemListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40FAC35 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, value);
    byte_40FAC35 = 1;
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
    v8 = sub_B0BA14(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_B173C8(v7);
  EventPointItemListViewManager__get_ObjectList(v10, v11);
}


void __fastcall EventPointItemListViewManager__setNextRewardInfo(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  int size; // w21
  int32_t v7; // w20
  ListViewItem_o *v8; // x8
  __int64 v9; // x11

  if ( (byte_40FAC3D & 1) == 0 )
  {
    sub_B16FFC(&EventPointItemListViewItem_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4);
    byte_40FAC3D = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      if ( itemList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v8 = itemList->fields._items->m_Items[v7];
      if ( !v8 )
        break;
      v9 = *(&EventPointItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v8->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (EventPointItemListViewItem_c *)v8->klass->_2.typeHierarchy[v9 - 1] != EventPointItemListViewItem_TypeInfo )
      {
        break;
      }
      if ( (EventPointItemListViewItem_c *)v8->klass->_2.typeHierarchy[*(&EventPointItemListViewItem_TypeInfo->_2.bitflags2
                                                                       + 1)
                                                                     - 1] != EventPointItemListViewItem_TypeInfo )
        v8 = 0LL;
      if ( !LOBYTE(v8[1].fields.sortValue2B) )
        goto LABEL_18;
      if ( ++v7 >= size )
        goto LABEL_17;
      itemList = this->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_B170D4();
  }
LABEL_17:
  v7 = 0;
LABEL_18:
  ListViewManager__SetTopItem((ListViewManager_o *)this, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager_CallbackFunc___ctor(
        EventPointItemListViewManager_CallbackFunc_o *this,
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


System_IAsyncResult_o *__fastcall EventPointItemListViewManager_CallbackFunc__BeginInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B16FA0(this, &v5, callback, object);
}


void __fastcall EventPointItemListViewManager_CallbackFunc__EndInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


void __fastcall EventPointItemListViewManager_CallbackFunc__Invoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  EventPointItemListViewManager_CallbackFunc_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned __int64 v11; // x10
  _DWORD *v12; // x11
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  void (__fastcall **v16)(__int64 *, _QWORD); // x0
  EventPointItemListViewManager_CallbackFunc_o *v17; // x8
  __int64 *v18; // x20
  __int64 v19; // x21
  void (__fastcall *v20)(__int64); // x22
  char v21; // w22
  char v22; // w0
  __int64 v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x10
  _DWORD *v27; // x11
  EventPointItemListViewManager_CallbackFunc_o *v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v28;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (EventPointItemListViewManager_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v17 = v6[v7];
      v18 = *(__int64 **)&v17->fields.method;
      v19 = *(_QWORD *)&v17->fields.extra_arg;
      v20 = *(void (__fastcall **)(__int64))&v17->fields.method_ptr;
      if ( *(__int16 *)(v19 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v17->fields.extra_arg, method, v2);
      if ( (sub_B1702C(v19) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v19 + 74) )
        goto LABEL_35;
      v20(v19);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v18 && *(__int16 *)(v19 + 72) != -1 && (*(_BYTE *)(*v18 + 277) & 1) == 0 && this->fields.m_target )
    {
      v21 = sub_B17024(v19);
      v22 = sub_B17428(v19);
      if ( (v21 & 1) != 0 )
      {
        if ( (v22 & 1) != 0 )
        {
          v23 = *v18;
          v24 = *(_QWORD *)(v19 + 24);
          v25 = *(unsigned __int16 *)(v19 + 72);
          if ( *(_WORD *)(*v18 + 298) )
          {
            v26 = 0LL;
            v27 = (_DWORD *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((_QWORD *)v27 - 1) != v24 )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_34;
            }
            v15 = v23 + 16LL * (*v27 + (int)v25) + 312;
          }
          else
          {
LABEL_34:
            v15 = sub_AAFEF8(v18, v24, v25);
          }
          v14 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v14 = *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320);
        }
        v16 = (void (__fastcall **)(__int64 *, _QWORD))sub_B170AC(v14, v19);
        (*v16)(v18, v16);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v19 + 72);
        if ( (v22 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v19);
          v10 = *v18;
          if ( *(_WORD *)(*v18 + 298) )
          {
            v11 = 0LL;
            v12 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v12 - 1) != class_0 )
            {
              ++v11;
              v12 += 4;
              if ( v11 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_11;
            }
            v13 = v10 + 16LL * (int)(*v12 + v8) + 312;
          }
          else
          {
LABEL_11:
            v13 = sub_AAFEF8(v18, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v13)(v18, *(_QWORD *)(v13 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 312))(
            v18,
            *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v20)(v18, v19);
    goto LABEL_36;
  }
}


void __fastcall EventPointItemListViewManager___c__DisplayClass20_0___ctor(
        EventPointItemListViewManager___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventPointItemListViewManager___c__DisplayClass20_0___OpenReplaseRewardDialog_b__0(
        EventPointItemListViewManager___c__DisplayClass20_0_o *this,
        bool isOk,
        const MethodInfo *method)
{
  EventPointItemListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  EventPointItemListViewManager__CloseReplaseRewardDialog(_4__this, this->fields.eventId, 0LL);
}