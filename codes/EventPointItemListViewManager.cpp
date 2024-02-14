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

  if ( (byte_4214D7D & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4214D7D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  if ( (byte_4214D6F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5677/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, *(_QWORD *)&eventId);
    byte_4214D6F = 1;
  }
  eventPointReplaseRewardDialog = this->fields.eventPointReplaseRewardDialog;
  if ( !eventPointReplaseRewardDialog )
    sub_B0D97C(0LL);
  EventPointReplaseRewardDialog__Close(eventPointReplaseRewardDialog, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  v6 = System_String__Concat_43849904((System_String_o *)StringLiteral_5677/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v5, 0LL);
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
  DataManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v13; // x27
  il2cpp_array_size_t v14; // w28
  EventRewardEntity_o *v15; // x23
  bool v16; // w25
  GiftEntity_o *DataById; // x26
  __int64 v18; // x1
  __int64 v19; // x2
  EventPointItemListViewItem_o *v20; // x24
  const MethodInfo *v21; // x4
  __int64 v22; // x0

  if ( (byte_4214D6D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, rewardList);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v7);
    sub_B0D8A4(&EventPointItemListViewItem_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4214D6D = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( rewardList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           Instance,
                                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    v13 = *(_QWORD *)&rewardList->max_length;
    if ( (int)v13 >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        v15 = rewardList->m_Items[v14];
        if ( !v15 )
          break;
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v16 = v15->fields.point <= currentPoint;
        DataById = GiftMaster__getDataById(MasterData_WarQuestSelectionMaster, v15->fields.giftId, 0LL);
        v20 = (EventPointItemListViewItem_o *)sub_B0D974(EventPointItemListViewItem_TypeInfo, v18, v19);
        EventPointItemListViewItem___ctor(v20, v15, DataById, v16, v21);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v20,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        if ( (int)++v14 >= (int)v13 )
          goto LABEL_14;
        if ( v14 >= rewardList->max_length )
        {
          v22 = sub_B0D9A8(Instance);
          sub_B0D948(v22, 0LL);
        }
      }
LABEL_16:
      sub_B0D97C(Instance);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19

  if ( (byte_4214D71 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandCodeMaster___, gift);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B0D8A4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    this = (EventPointItemListViewManager_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    byte_4214D71 = 1;
  }
  if ( !gift )
    goto LABEL_23;
  type = gift->fields.type;
  if ( type == 11 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( this )
          return CommandCodeEntity__GetName((CommandCodeEntity_o *)this, 0LL);
      }
    }
    goto LABEL_23;
  }
  if ( type == 2 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this )
          return (System_String_o *)this->fields.dropObjectList;
      }
    }
    goto LABEL_23;
  }
  if ( type != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (EventPointItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_23:
    sub_B0D97C(this);
  }
  Name = ServantEntity__GetName((ServantEntity_o *)this, -1, 0, -1, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44201040(Name, 0LL);
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

  if ( (byte_4214D73 & 1) == 0 )
  {
    sub_B0D8A4(&EventPointItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4214D73 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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

  if ( (byte_4214D70 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, gift);
    sub_B0D8A4(&StringLiteral_5670/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/, v4);
    this = (EventPointItemListViewManager_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4214D70 = 1;
  }
  if ( !gift )
    sub_B0D97C(this);
  if ( gift->fields.type != 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_5670/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/, 0LL);
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
  CommonUI_o *Item; // x0
  __int64 v14; // x10
  __int64 v15; // x10
  EventPointItemListViewObject_o *v16; // x0
  struct SoundInfo_o *soundInfo; // x8
  CommonUI_o *v18; // x20
  intptr_t m_CachedPtr; // w8
  struct UnityEngine_Transform_o *baseMount; // x8
  int32_t v21; // w0
  WebViewManager_o *v22; // x0
  ItemEntity_o *bgCamera; // x20
  CommonUI_o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  ItemDetailInfoComponent_CallbackFunc_o *v27; // x22
  WebViewManager_o *Instance; // x0
  System_String_o *connectMark; // x21
  System_String_o *debugSelectDialog; // x20
  CommonUI_o *v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  ItemDetailInfoComponent_CallbackFunc_o *v34; // x23
  CommonUI_o *v35; // x0
  System_String_o *v36; // x1
  System_String_o *v37; // x2
  struct UnityEngine_Transform_o *baseMountSystemUI; // x8
  CommonUI_o *v39; // x20
  UnityEngine_Transform_c *klass; // x21
  __int64 v41; // x22
  int32_t v42; // w21
  __int64 v43; // x1
  __int64 v44; // x2
  ServantStatusDialog_EndDelegate_o *v45; // x22
  struct UnityEngine_Transform_o *v46; // x8
  int v47; // w8
  WebViewManager_o *v48; // x0
  CommandCodeEntity_o *maskFade; // x20
  CommonUI_o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  ServantStatusDialog_EndDelegate_o *v53; // x22
  __int64 v54; // x1
  __int64 v55; // x2
  struct EventMaskFade_o *eventMaskFade; // x8
  System_String_o *v57; // x22
  System_String_o *v58; // x20
  CommonUI_o *v59; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4214D7A & 1) == 0 )
  {
    sub_B0D8A4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B0D8A4(&Method_EventPointItemListViewManager_CloseCommandCodeDetail__, v6);
    sub_B0D8A4(&Method_EventPointItemListViewManager_closeItemDetail__, v7);
    sub_B0D8A4(&Method_EventPointItemListViewManager_closeSvtDetail__, v8);
    sub_B0D8A4(&EventPointItemListViewObject_TypeInfo, v9);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B0D8A4(&SoundManager_TypeInfo, v12);
    byte_4214D7A = 1;
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
  Item = (CommonUI_o *)EventPointItemListViewObject__GetItem(v16, 0LL);
  if ( !Item )
    goto LABEL_43;
  soundInfo = Item->fields.soundInfo;
  v18 = Item;
  if ( !soundInfo )
    goto LABEL_43;
  m_CachedPtr = soundInfo[1].fields.m_CachedPtr;
  if ( m_CachedPtr != 1 )
  {
    if ( (m_CachedPtr & 0xFFFFFFFE) != 2 )
      return;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    connectMark = (System_String_o *)v18->fields.connectMark;
    debugSelectDialog = (System_String_o *)v18->fields.debugSelectDialog;
    v31 = (CommonUI_o *)Instance;
    v34 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B0D974(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v32, v33);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v34,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v31 )
      goto LABEL_43;
    v35 = v31;
    v36 = connectMark;
    v37 = debugSelectDialog;
    goto LABEL_24;
  }
  baseMount = Item->fields.baseMount;
  if ( baseMount )
  {
    v21 = *((_DWORD *)&baseMount->fields + 1);
    if ( v21 == 2 )
    {
      v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      bgCamera = (ItemEntity_o *)v18->fields.bgCamera;
      v24 = (CommonUI_o *)v22;
      v27 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B0D974(
                                                        ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                        v25,
                                                        v26);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
        0LL);
      if ( v24 )
      {
        CommonUI__OpenItemDetailDialog(v24, bgCamera, v27, 50, 0LL);
        return;
      }
LABEL_43:
      sub_B0D97C(Item);
    }
  }
  else
  {
    v21 = 0;
  }
  if ( !Gift__IsServant(v21, 0LL) )
  {
    v46 = v18->fields.baseMount;
    if ( !v46 )
      return;
    v47 = *((_DWORD *)&v46->fields + 1);
    if ( v47 != 12 )
    {
      if ( v47 == 11 )
      {
        v48 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        maskFade = (CommandCodeEntity_o *)v18->fields.maskFade;
        v50 = (CommonUI_o *)v48;
        v53 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v51, v52);
        ServantStatusDialog_EndDelegate___ctor(
          v53,
          (Il2CppObject *)this,
          Method_EventPointItemListViewManager_CloseCommandCodeDetail__,
          0LL);
        if ( !v50 )
          goto LABEL_43;
        CommonUI__OpenServantEquipStatusDialog_17033196(v50, 25, maskFade, 0, v53, 0LL, 0LL);
      }
      return;
    }
    if ( !v18->fields.eventMaskFade )
      return;
    Item = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventMaskFade = v18->fields.eventMaskFade;
    if ( !eventMaskFade )
      goto LABEL_43;
    v57 = *(System_String_o **)&eventMaskFade->fields.maskKind;
    v58 = (System_String_o *)v18->fields.connectMark;
    v59 = Item;
    v34 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B0D974(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v54, v55);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v34,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v59 )
      goto LABEL_43;
    v35 = v59;
    v36 = v58;
    v37 = v57;
LABEL_24:
    CommonUI__OpenItemDetailDialog_17082384(v35, v36, v37, v34, 0LL);
    return;
  }
  Item = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  baseMountSystemUI = v18->fields.baseMountSystemUI;
  if ( !baseMountSystemUI )
    goto LABEL_43;
  v39 = Item;
  v41 = *(_QWORD *)&baseMountSystemUI->fields.m_CachedPtr;
  klass = baseMountSystemUI[1].klass;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v60.fields.currentCryptoKey = v41;
  *(_QWORD *)&v60.fields.fakeValue = klass;
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v60, 0LL);
  v45 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v43, v44);
  ServantStatusDialog_EndDelegate___ctor(
    v45,
    (Il2CppObject *)this,
    Method_EventPointItemListViewManager_closeSvtDetail__,
    0LL);
  if ( !v39 )
    goto LABEL_43;
  CommonUI__OpenServantStatusDialog_17030764(v39, 7, v42, v45, 0LL);
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

  if ( (byte_4214D79 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4214D79 = 1;
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
          sub_B0D97C(0LL);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._8_UpdateScrollbars.method)(
          v13,
          1LL,
          v13->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v7, v8, v9, v10, v11, v12);
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
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x20
  DataManager_o *Instance; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x23
  __int64 v41; // x1
  __int64 giftId; // x2
  signed int max_length; // w8
  GiftEntity_array *v44; // x25
  __int64 v45; // x19
  EventRewardEntity_o *v46; // x28
  const MethodInfo *v47; // x3
  System_Text_StringBuilder_o *v48; // x24
  int size; // w8
  __int64 v50; // x28
  GiftEntity_o *v51; // x26
  const MethodInfo *v52; // x2
  GiftEntity_o *v53; // x25
  System_String_o *KindName; // x27
  const MethodInfo *v55; // x2
  System_String_o *GiftName; // x0
  System_Text_StringBuilder_o *appended; // x0
  const MethodInfo *v58; // x2
  System_String_o *v59; // x26
  System_String_o *v60; // x25
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  EventPointReplaseRewardDialog_o *eventPointReplaseRewardDialog; // x19
  System_String_o *v64; // x0
  System_String_o *v65; // x21
  System_String_o *v66; // x21
  System_String_o *v67; // x22
  __int64 v68; // x1
  __int64 v69; // x2
  EventPointReplaseRewardDialog_ClickDelegate_o *v70; // x23
  __int64 v71; // x0
  EventPointItemListViewManager_o *v72; // [xsp+18h] [xbp-58h]

  if ( (byte_4214D6E & 1) == 0 )
  {
    sub_B0D8A4(&EventPointReplaseRewardDialog_ClickDelegate_TypeInfo, eventRewardEntList);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v8);
    sub_B0D8A4(&Method_DataManager_getEntitys_GiftMaster__GiftEntity___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v14);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, v17);
    sub_B0D8A4(&Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__, v18);
    sub_B0D8A4(&EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo, v19);
    sub_B0D8A4(&StringLiteral_26/*"\n"*/, v20);
    sub_B0D8A4(&StringLiteral_5677/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v21);
    sub_B0D8A4(&StringLiteral_23846/*"→　「"*/, v22);
    sub_B0D8A4(&StringLiteral_5669/*"EVENT_POINT_GIFT_ADD"*/, v23);
    sub_B0D8A4(&StringLiteral_5671/*"EVENT_POINT_GIFT_ADD_COUNT"*/, v24);
    sub_B0D8A4(&StringLiteral_23872/*"」"*/, v25);
    sub_B0D8A4(&StringLiteral_23871/*"「"*/, v26);
    byte_4214D6E = 1;
  }
  v27 = sub_B0D974(
          EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo,
          eventRewardEntList,
          *(_QWORD *)&eventId);
  EventPointItemListViewManager___c__DisplayClass20_0___ctor(
    (EventPointItemListViewManager___c__DisplayClass20_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_46;
  *(_QWORD *)(v27 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  *(_DWORD *)(v27 + 24) = eventId;
  if ( eventRewardEntList )
  {
    if ( *(_QWORD *)&eventRewardEntList->max_length )
    {
      v35 = System_Int32__ToString((int)v27 + 24, 0LL);
      v36 = System_String__Concat_43849904((System_String_o *)StringLiteral_5677/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v35, 0LL);
      if ( !UnityEngine_PlayerPrefs__GetInt(v36, 0, 0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_46;
        MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_46;
        v72 = this;
        DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
        v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GiftEntity__TypeInfo, v38, v39);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v40,
          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (DataManager_o *)DataManager__getEntitys_WarMaster__WarEntity_(
                                      Instance,
                                      (const MethodInfo_171483C *)Method_DataManager_getEntitys_GiftMaster__GiftEntity___);
        max_length = eventRewardEntList->max_length;
        if ( max_length >= 1 )
        {
          v44 = (GiftEntity_array *)Instance;
          v45 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v45 >= max_length )
            {
              v71 = sub_B0D9A8(Instance);
              sub_B0D948(v71, 0LL);
            }
            v46 = eventRewardEntList->m_Items[v45];
            if ( !v46 )
              break;
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = (DataManager_o *)GiftMaster__getDataById(
                                          MasterData_WarQuestSelectionMaster,
                                          v46->fields.giftId,
                                          0LL);
            if ( !Instance )
              break;
            giftId = (unsigned int)v46->fields.giftId;
            if ( Instance->fields.m_CachedPtr != (_DWORD)giftId )
            {
              Instance = (DataManager_o *)EventPointItemListViewManager__TargetItemTargetGiftEntity(
                                            (EventPointItemListViewManager_o *)Instance,
                                            v44,
                                            giftId,
                                            v47);
              if ( !v40 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v40,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
            }
            max_length = eventRewardEntList->max_length;
            if ( (int)++v45 >= max_length )
              goto LABEL_20;
          }
LABEL_46:
          sub_B0D97C(Instance);
        }
LABEL_20:
        if ( !v40 )
          goto LABEL_46;
        if ( v40->fields._size >= 1 )
        {
          v48 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, v41, giftId);
          System_Text_StringBuilder___ctor(v48, 0LL);
          size = v40->fields._size;
          if ( size >= 1 )
          {
            v50 = 0LL;
            do
            {
              if ( size <= (unsigned int)v50 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v51 = (GiftEntity_o *)v40->fields._items->m_Items[v50];
              if ( !v51 || !MasterData_WarQuestSelectionMaster )
                goto LABEL_46;
              Instance = (DataManager_o *)GiftMaster__getDataById(
                                            MasterData_WarQuestSelectionMaster,
                                            v51->fields.id,
                                            0LL);
              v53 = (GiftEntity_o *)Instance;
              if ( (_DWORD)v50 )
              {
                if ( !v48 )
                  goto LABEL_46;
                Instance = (DataManager_o *)System_Text_StringBuilder__Append_42155400(
                                              v48,
                                              (System_String_o *)StringLiteral_26/*"\n"*/,
                                              0LL);
              }
              KindName = EventPointItemListViewManager__GetKindName(
                           (EventPointItemListViewManager_o *)Instance,
                           v51,
                           v52);
              GiftName = EventPointItemListViewManager__GetGiftName(
                           (EventPointItemListViewManager_o *)KindName,
                           v51,
                           v55);
              Instance = (DataManager_o *)System_String__Concat_43853316(
                                            KindName,
                                            (System_String_o *)StringLiteral_23871/*"「"*/,
                                            GiftName,
                                            (System_String_o *)StringLiteral_23872/*"」"*/,
                                            0LL);
              if ( !Instance )
                goto LABEL_46;
              Instance = (DataManager_o *)System_String__PadRight((System_String_o *)Instance, 15, 0x3000u, 0LL);
              if ( !v48 )
                goto LABEL_46;
              System_Text_StringBuilder__Append_42155400(v48, (System_String_o *)Instance, 0LL);
              appended = System_Text_StringBuilder__Append_42155400(v48, (System_String_o *)StringLiteral_23846/*"→　「"*/, 0LL);
              Instance = (DataManager_o *)EventPointItemListViewManager__GetGiftName(
                                            (EventPointItemListViewManager_o *)appended,
                                            v53,
                                            v58);
              if ( !v53 )
                goto LABEL_46;
              v59 = (System_String_o *)Instance;
              Instance = (DataManager_o *)System_Int32__ToString((int)v53 + 28, 0LL);
              if ( !Instance )
                goto LABEL_46;
              v60 = System_String__PadLeft((System_String_o *)Instance, 2, 0x20u, 0LL);
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v61 = LocalizationManager__Get((System_String_o *)StringLiteral_5671/*"EVENT_POINT_GIFT_ADD_COUNT"*/, 0LL);
              v62 = System_String__Concat_43853316(v59, v60, v61, (System_String_o *)StringLiteral_23872/*"」"*/, 0LL);
              Instance = (DataManager_o *)System_Text_StringBuilder__Append_42155400(v48, v62, 0LL);
              size = v40->fields._size;
            }
            while ( (int)++v50 < size );
          }
          eventPointReplaseRewardDialog = v72->fields.eventPointReplaseRewardDialog;
          v64 = System_Int32__ToString((int)v27 + 24, 0LL);
          v65 = System_String__Concat_43849904((System_String_o *)StringLiteral_5669/*"EVENT_POINT_GIFT_ADD"*/, v64, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__Get(v65, 0LL);
          if ( !v48 )
            goto LABEL_46;
          v66 = (System_String_o *)Instance;
          v67 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v48->klass->vtable._3_ToString.method)(
                                     v48,
                                     v48->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v70 = (EventPointReplaseRewardDialog_ClickDelegate_o *)sub_B0D974(
                                                                   EventPointReplaseRewardDialog_ClickDelegate_TypeInfo,
                                                                   v68,
                                                                   v69);
          EventPointReplaseRewardDialog_ClickDelegate___ctor(
            v70,
            (Il2CppObject *)v27,
            Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__,
            0LL);
          if ( !eventPointReplaseRewardDialog )
            goto LABEL_46;
          EventPointReplaseRewardDialog__Open(eventPointReplaseRewardDialog, v66, v67, v70, -1, 0, 0, 0, 0, 0, 0LL);
        }
      }
    }
  }
}


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
  System_Action_o *v16; // x22

  if ( (byte_4214D78 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_EventPointItemListViewManager_OnMoveEnd__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Item__, v5);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v6);
    byte_4214D78 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventPointItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_15:
    sub_B0D97C(ObjectList);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v13 = v9->fields._items->m_Items[v11];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v13, 0LL) )
    {
      v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v13 )
        goto LABEL_15;
      ++v12;
      EventPointItemListViewObject__Init_24854260(v13, 4, v16, 0.1, 0LL);
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
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
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
  Il2CppObject *current; // x21
  System_Action_o *v19; // x22
  __int64 v20; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4214D76 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__, v9);
    sub_B0D8A4(&Method_EventPointItemListViewManager_OnMoveEnd__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v12);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v13);
    byte_4214D76 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventPointItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v20);
      EventPointItemListViewObject__Init_24854260((EventPointItemListViewObject_o *)current, mode, v19, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__RequestListObject_25251312(
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
  Il2CppObject *current; // x21
  System_Action_o *v17; // x22
  __int64 v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4214D77 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__, v7);
    sub_B0D8A4(&Method_EventPointItemListViewManager_OnMoveEnd__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v10);
    sub_B0D8A4(&StringLiteral_10060/*"OnMoveEnd"*/, v11);
    byte_4214D77 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventPointItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B0D97C(0LL);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10060/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      ObjectList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v19.fields.current;
      v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B0D97C(v18);
      EventPointItemListViewObject__Init_24854340((EventPointItemListViewObject_o *)current, mode, v17, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventPointItemListViewManager__SetMode_25250428(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__SetMode_25250428(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *scrollBar; // x20
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4214D75 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_B0D8A4(&StringLiteral_11456/*"RequestInto"*/, v5);
    byte_4214D75 = 1;
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
        sub_B0D97C(gameObject);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11456/*"RequestInto"*/,
      0.0,
      0LL);
  }
}


void __fastcall EventPointItemListViewManager__SetMode_25250704(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  EventPointItemListViewManager__SetMode_25250428(this, mode, v11);
}


void __fastcall EventPointItemListViewManager__SetMode_25250764(
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventPointItemListViewManager__SetMode_25250428(this, mode, v10);
}


void __fastcall EventPointItemListViewManager__SetObjectItem(
        EventPointItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventPointItemListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4214D74 & 1) == 0 )
  {
    this = (EventPointItemListViewManager_o *)sub_B0D8A4(&EventPointItemListViewObject_TypeInfo, obj);
    byte_4214D74 = 1;
  }
  if ( !obj
    || (v6 = *(&EventPointItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventPointItemListViewObject_TypeInfo )
  {
    sub_B0D97C(this);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventPointItemListViewObject__Init_24852736((EventPointItemListViewObject_o *)obj, v7, 0LL);
}


GiftEntity_o *__fastcall EventPointItemListViewManager__TargetItemTargetGiftEntity(
        EventPointItemListViewManager_o *this,
        GiftEntity_array *entitys,
        int32_t giftId,
        const MethodInfo *method)
{
  signed int max_length; // w8
  __int64 v5; // x9

  if ( !entitys )
    goto LABEL_9;
  max_length = entitys->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      this = (EventPointItemListViewManager_o *)entitys->m_Items[v5];
      if ( !this )
        break;
      if ( this->fields.m_CachedPtr == giftId )
        return (GiftEntity_o *)this;
      if ( (int)++v5 >= max_length )
        return 0LL;
    }
LABEL_9:
    sub_B0D97C(this);
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

  if ( (byte_4214D67 & 1) == 0 )
  {
    sub_B0D8A4(&EventPointItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4214D67 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_B0DC70(v7);
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

  if ( (byte_4214D69 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4214D69 = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_B0DC70(v7);
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

  if ( (byte_4214D7B & 1) == 0 )
  {
    sub_B0D8A4(&Method_EventPointItemListViewManager_closeItemDetail__, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4214D7B = 1;
  }
  v4 = Method_EventPointItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_EventPointItemListViewManager_closeItemDetail__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B0D8AC(Method_EventPointItemListViewManager_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_B0D888(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__closeSvtDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4214D7C & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4214D7C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


System_Collections_Generic_List_EventPointItemListViewObject__o *__fastcall EventPointItemListViewManager__get_ClippingObjectList(
        EventPointItemListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  EventPointItemListViewObject_o *Component_srcLineSprite; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x21
  ListViewItem_o *Item; // x0
  _BOOL8 v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4214D6C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4214D6C = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventPointItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      Item = (ListViewItem_o *)EventPointItemListViewObject__GetItem(Component_srcLineSprite, 0LL);
      if ( !Item )
        sub_B0D97C(0LL);
      if ( Item->fields.isTermination )
      {
        v19 = ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, Item, 0LL);
        if ( v19 )
        {
          if ( !v12 )
            sub_B0D97C(v19);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v12 )
          sub_B0D97C(Item);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          v17,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v12;
}


System_Collections_Generic_List_EventPointItemListViewObject__o *__fastcall EventPointItemListViewManager__get_ObjectList(
        EventPointItemListViewManager_o *this,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4214D6B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4214D6B = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B0D97C(v15);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      if ( !v12 )
        sub_B0D97C(Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        Component_srcLineSprite,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v12;
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

  if ( (byte_4214D68 & 1) == 0 )
  {
    sub_B0D8A4(&EventPointItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4214D68 = 1;
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
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_B0DC70(v7);
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

  if ( (byte_4214D6A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_4214D6A = 1;
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
    v8 = sub_B022BC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_B0DC70(v7);
  EventPointItemListViewManager__get_ObjectList(v10, v11);
}


void __fastcall EventPointItemListViewManager__setNextRewardInfo(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  int size; // w21
  int32_t v7; // w20
  ListViewItem_o *v8; // x8
  __int64 v9; // x11

  v2 = (ListViewManager_o *)this;
  if ( (byte_4214D72 & 1) == 0 )
  {
    sub_B0D8A4(&EventPointItemListViewItem_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v3);
    this = (EventPointItemListViewManager_o *)sub_B0D8A4(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v4);
    byte_4214D72 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      if ( itemList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
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
      itemList = v2->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_B0D97C(this);
  }
LABEL_17:
  v7 = 0;
LABEL_18:
  ListViewManager__SetTopItem(v2, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager_CallbackFunc___ctor(
        EventPointItemListViewManager_CallbackFunc_o *this,
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


System_IAsyncResult_o *__fastcall EventPointItemListViewManager_CallbackFunc__BeginInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B0D848(this, &v5, callback, object);
}


void __fastcall EventPointItemListViewManager_CallbackFunc__EndInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall EventPointItemListViewManager_CallbackFunc__Invoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  EventPointItemListViewManager_CallbackFunc_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  EventPointItemListViewManager_CallbackFunc_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  EventPointItemListViewManager_CallbackFunc_o *v29; // [xsp+8h] [xbp-38h] BYREF

  v29 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (EventPointItemListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v18->fields.extra_arg, method, v2, v3);
      if ( (sub_B0D8D4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B0D8CC(v20);
      v23 = sub_B0DCD0(v20);
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
                goto LABEL_34;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AA67A0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B0D954(v15, v20);
        (*v17)(v19, v17);
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
            v14 = sub_AA67A0(v19, class_0, v9);
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
    sub_B0D97C(0LL);
  EventPointItemListViewManager__CloseReplaseRewardDialog(_4__this, this->fields.eventId, 0LL);
}