void __fastcall EventPointItemListViewManager___ctor(EventPointItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventPointItemListViewManager__CloseCommandCodeDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E90E4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E90E4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseServantEquipStatusDialog(Instance, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__CloseReplaseRewardDialog(
        EventPointItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventPointReplaseRewardDialog_o *eventPointReplaseRewardDialog; // x0
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = eventId;
  if ( (byte_42E90D6 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5738/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, eventId, (_DWORD)method, v3);
    byte_42E90D6 = 1;
  }
  eventPointReplaseRewardDialog = this->fields.eventPointReplaseRewardDialog;
  if ( !eventPointReplaseRewardDialog )
    sub_B5D69C(0LL, *(_QWORD *)&eventId);
  EventPointReplaseRewardDialog__Close(eventPointReplaseRewardDialog, 0LL);
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  v7 = System_String__Concat_44577788((System_String_o *)StringLiteral_5738/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v6, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v7, 1, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventPointItemListViewManager__CreateList(
        EventPointItemListViewManager_o *this,
        EventRewardEntity_array *rewardList,
        int64_t currentPoint,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v22; // x27
  il2cpp_array_size_t v23; // w28
  EventRewardEntity_o *v24; // x23
  bool v25; // w25
  GiftEntity_o *DataById; // x26
  EventPointItemListViewItem_o *v27; // x24
  const MethodInfo *v28; // x4
  __int64 v29; // x0

  if ( (byte_42E90D4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, (_DWORD)rewardList, currentPoint, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v7, v8, v9);
    sub_B5D5C4(&EventPointItemListViewItem_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E90D4 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( rewardList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           Instance,
                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    v22 = *(_QWORD *)&rewardList->max_length;
    if ( (int)v22 >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        v24 = rewardList->m_Items[v23];
        if ( !v24 )
          break;
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v25 = v24->fields.point <= currentPoint;
        DataById = GiftMaster__getDataById(MasterData_WarQuestSelectionMaster, v24->fields.giftId, 0LL);
        v27 = (EventPointItemListViewItem_o *)sub_B5D694(EventPointItemListViewItem_TypeInfo);
        EventPointItemListViewItem___ctor(v27, v24, DataById, v25, v28);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        if ( (int)++v23 >= (int)v22 )
          goto LABEL_14;
        if ( v23 >= rewardList->max_length )
        {
          v29 = sub_B5D6C8(Instance);
          sub_B5D668(v29, 0LL);
        }
      }
LABEL_16:
      sub_B5D69C(Instance, v20);
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
  int32_t type; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19

  if ( (byte_42E90D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, (_DWORD)gift, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    this = (EventPointItemListViewManager_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v26, v27, v28);
    byte_42E90D8 = 1;
  }
  if ( !gift )
    goto LABEL_23;
  type = gift->fields.type;
  if ( type == 11 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( this )
          return CommandCodeEntity__GetName((CommandCodeEntity_o *)this, 0LL);
      }
    }
    goto LABEL_23;
  }
  if ( type == 2 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this )
          return (System_String_o *)this->fields.dropObjectList;
      }
    }
    goto LABEL_23;
  }
  if ( type != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (EventPointItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_23:
    sub_B5D69C(this, gift);
  }
  Name = ServantEntity__GetName((ServantEntity_o *)this, -1, 0, -1, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44937752(Name, 0LL);
}


EventPointItemListViewItem_o *__fastcall EventPointItemListViewManager__GetItem(
        EventPointItemListViewManager_o *this,
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

  if ( (byte_42E90DA & 1) == 0 )
  {
    sub_B5D5C4(&EventPointItemListViewItem_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7, v8);
    byte_42E90DA = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v10 = itemList->fields._items->m_Items[index];
  if ( !v10 )
    return 0LL;
  v11 = *(&EventPointItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) < (unsigned int)v11 )
    return 0LL;
  if ( (EventPointItemListViewItem_c *)v10->klass->_2.typeHierarchy[v11 - 1] == EventPointItemListViewItem_TypeInfo )
    return (EventPointItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


System_String_o *__fastcall EventPointItemListViewManager__GetKindName(
        EventPointItemListViewManager_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3

  if ( (byte_42E90D7 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)gift, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_5731/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/, v5, v6, v7);
    this = (EventPointItemListViewManager_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E90D7 = 1;
  }
  if ( !gift )
    sub_B5D69C(this, gift);
  if ( gift->fields.type != 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_5731/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/, 0LL);
}


void __fastcall EventPointItemListViewManager__OnClickListView(
        EventPointItemListViewManager_o *this,
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
  CommonUI_o *Item; // x0
  __int64 v31; // x1
  __int64 v32; // x10
  __int64 v33; // x10
  EventPointItemListViewObject_o *v34; // x0
  struct SoundInfo_o *soundInfo; // x8
  CommonUI_o *v36; // x20
  intptr_t m_CachedPtr; // w8
  struct UnityEngine_Transform_o *baseMount; // x8
  int32_t v39; // w0
  WebViewManager_o *v40; // x0
  ItemEntity_o *bgCamera; // x20
  CommonUI_o *v42; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v43; // x22
  WebViewManager_o *Instance; // x0
  System_String_o *connectMark; // x21
  System_String_o *debugSelectDialog; // x20
  CommonUI_o *v47; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v48; // x23
  CommonUI_o *v49; // x0
  System_String_o *v50; // x1
  System_String_o *v51; // x2
  struct UnityEngine_Transform_o *baseMountSystemUI; // x8
  CommonUI_o *v53; // x20
  UnityEngine_Transform_c *klass; // x21
  __int64 v55; // x22
  int32_t v56; // w21
  ServantStatusDialog_EndDelegate_o *v57; // x22
  struct UnityEngine_Transform_o *v58; // x8
  int v59; // w8
  WebViewManager_o *v60; // x0
  CommandCodeEntity_o *maskFade; // x20
  CommonUI_o *v62; // x21
  ServantStatusDialog_EndDelegate_o *v63; // x22
  struct EventMaskFade_o *eventMaskFade; // x8
  System_String_o *v65; // x22
  System_String_o *v66; // x20
  CommonUI_o *v67; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  if ( (byte_42E90E1 & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_EventPointItemListViewManager_CloseCommandCodeDetail__, v9, v10, v11);
    sub_B5D5C4(&Method_EventPointItemListViewManager_closeItemDetail__, v12, v13, v14);
    sub_B5D5C4(&Method_EventPointItemListViewManager_closeSvtDetail__, v15, v16, v17);
    sub_B5D5C4(&EventPointItemListViewObject_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&SoundManager_TypeInfo, v27, v28, v29);
    byte_42E90E1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_43;
  v32 = *(&EventPointItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v32
    || (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[v32 - 1] != EventPointItemListViewObject_TypeInfo )
  {
    goto LABEL_43;
  }
  v33 = *(&EventPointItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v33 )
    v34 = (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[v33 - 1] == EventPointItemListViewObject_TypeInfo
        ? (EventPointItemListViewObject_o *)obj
        : 0LL;
  else
    v34 = 0LL;
  Item = (CommonUI_o *)EventPointItemListViewObject__GetItem(v34, 0LL);
  if ( !Item )
    goto LABEL_43;
  soundInfo = Item->fields.soundInfo;
  v36 = Item;
  if ( !soundInfo )
    goto LABEL_43;
  m_CachedPtr = soundInfo[1].fields.m_CachedPtr;
  if ( m_CachedPtr != 1 )
  {
    if ( (m_CachedPtr & 0xFFFFFFFE) != 2 )
      return;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    connectMark = (System_String_o *)v36->fields.connectMark;
    debugSelectDialog = (System_String_o *)v36->fields.debugSelectDialog;
    v47 = (CommonUI_o *)Instance;
    v48 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v48,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v47 )
      goto LABEL_43;
    v49 = v47;
    v50 = connectMark;
    v51 = debugSelectDialog;
    goto LABEL_24;
  }
  baseMount = Item->fields.baseMount;
  if ( baseMount )
  {
    v39 = *((_DWORD *)&baseMount->fields + 1);
    if ( v39 == 2 )
    {
      v40 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      bgCamera = (ItemEntity_o *)v36->fields.bgCamera;
      v42 = (CommonUI_o *)v40;
      v43 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v43,
        (Il2CppObject *)this,
        (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
        0LL);
      if ( v42 )
      {
        CommonUI__OpenItemDetailDialog(v42, bgCamera, v43, 50, 0LL);
        return;
      }
LABEL_43:
      sub_B5D69C(Item, v31);
    }
  }
  else
  {
    v39 = 0;
  }
  if ( !Gift__IsServant(v39, 0LL) )
  {
    v58 = v36->fields.baseMount;
    if ( !v58 )
      return;
    v59 = *((_DWORD *)&v58->fields + 1);
    if ( v59 != 12 )
    {
      if ( v59 == 11 )
      {
        v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        maskFade = (CommandCodeEntity_o *)v36->fields.maskFade;
        v62 = (CommonUI_o *)v60;
        v63 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v63,
          (Il2CppObject *)this,
          Method_EventPointItemListViewManager_CloseCommandCodeDetail__,
          0LL);
        if ( !v62 )
          goto LABEL_43;
        CommonUI__OpenServantEquipStatusDialog_18218384(v62, 25, maskFade, 0, v63, 0LL, 0LL);
      }
      return;
    }
    if ( !v36->fields.eventMaskFade )
      return;
    Item = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventMaskFade = v36->fields.eventMaskFade;
    if ( !eventMaskFade )
      goto LABEL_43;
    v65 = *(System_String_o **)&eventMaskFade->fields.maskKind;
    v66 = (System_String_o *)v36->fields.connectMark;
    v67 = Item;
    v48 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v48,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v67 )
      goto LABEL_43;
    v49 = v67;
    v50 = v66;
    v51 = v65;
LABEL_24:
    CommonUI__OpenItemDetailDialog_18267660(v49, v50, v51, v48, 0LL);
    return;
  }
  Item = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  baseMountSystemUI = v36->fields.baseMountSystemUI;
  if ( !baseMountSystemUI )
    goto LABEL_43;
  v53 = Item;
  v55 = *(_QWORD *)&baseMountSystemUI->fields.m_CachedPtr;
  klass = baseMountSystemUI[1].klass;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v68.fields.currentCryptoKey = v55;
  *(_QWORD *)&v68.fields.fakeValue = klass;
  v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v68, 0LL);
  v57 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v57,
    (Il2CppObject *)this,
    Method_EventPointItemListViewManager_closeSvtDetail__,
    0LL);
  if ( !v53 )
    goto LABEL_43;
  CommonUI__OpenServantStatusDialog_18215952(v53, 7, v56, v57, 0LL);
}


void __fastcall EventPointItemListViewManager__OnMoveEnd(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
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

  if ( (byte_42E90E0 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E90E0 = 1;
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


void __fastcall EventPointItemListViewManager__OpenReplaseRewardDialog(
        EventPointItemListViewManager_o *this,
        EventRewardEntity_array *eventRewardEntList,
        int32_t eventId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
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
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  __int64 v67; // x20
  DataManager_o *Instance; // x0
  __int64 v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_String_o *v76; // x0
  System_String_o *v77; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v79; // x23
  signed int max_length; // w8
  GiftEntity_array *v81; // x25
  __int64 v82; // x19
  EventRewardEntity_o *v83; // x28
  const MethodInfo *v84; // x3
  int32_t giftId; // w2
  System_Text_StringBuilder_o *v86; // x24
  int size; // w8
  __int64 v88; // x28
  GiftEntity_o *v89; // x26
  const MethodInfo *v90; // x2
  GiftEntity_o *v91; // x25
  System_String_o *KindName; // x27
  const MethodInfo *v93; // x2
  System_String_o *GiftName; // x0
  System_Text_StringBuilder_o *appended; // x0
  const MethodInfo *v96; // x2
  System_String_o *v97; // x26
  System_String_o *v98; // x25
  System_String_o *v99; // x0
  System_String_o *v100; // x0
  EventPointReplaseRewardDialog_o *eventPointReplaseRewardDialog; // x19
  System_String_o *v102; // x0
  System_String_o *v103; // x21
  System_String_o *v104; // x21
  System_String_o *v105; // x22
  EventPointReplaseRewardDialog_ClickDelegate_o *v106; // x23
  __int64 v107; // x0
  EventPointItemListViewManager_o *v108; // [xsp+18h] [xbp-58h]

  if ( (byte_42E90D5 & 1) == 0 )
  {
    sub_B5D5C4(&EventPointReplaseRewardDialog_ClickDelegate_TypeInfo, (_DWORD)eventRewardEntList, eventId, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventPointMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_getEntitys_GiftMaster__GiftEntity___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v25, v26, v27);
    sub_B5D5C4(&System_Collections_Generic_List_GiftEntity__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v37, v38, v39);
    sub_B5D5C4(
      &Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__,
      v40,
      v41,
      v42);
    sub_B5D5C4(&EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_5738/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_24080/*"→　「"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_5730/*"EVENT_POINT_GIFT_ADD"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_5732/*"EVENT_POINT_GIFT_ADD_COUNT"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_24107/*"」"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_24106/*"「"*/, v64, v65, v66);
    byte_42E90D5 = 1;
  }
  v67 = sub_B5D694(EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo);
  EventPointItemListViewManager___c__DisplayClass20_0___ctor(
    (EventPointItemListViewManager___c__DisplayClass20_0_o *)v67,
    0LL);
  if ( !v67 )
    goto LABEL_46;
  *(_QWORD *)(v67 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v67 + 16), (System_Int32_array **)this, v70, v71, v72, v73, v74, v75);
  *(_DWORD *)(v67 + 24) = eventId;
  if ( eventRewardEntList )
  {
    if ( *(_QWORD *)&eventRewardEntList->max_length )
    {
      v76 = System_Int32__ToString((int)v67 + 24, 0LL);
      v77 = System_String__Concat_44577788((System_String_o *)StringLiteral_5738/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v76, 0LL);
      if ( !UnityEngine_PlayerPrefs__GetInt(v77, 0, 0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_46;
        MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_46;
        v108 = this;
        DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
        v79 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v79,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (DataManager_o *)DataManager__getEntitys_WarMaster__WarEntity_(
                                      Instance,
                                      (const MethodInfo_1AE44E0 *)Method_DataManager_getEntitys_GiftMaster__GiftEntity___);
        max_length = eventRewardEntList->max_length;
        if ( max_length >= 1 )
        {
          v81 = (GiftEntity_array *)Instance;
          v82 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v82 >= max_length )
            {
              v107 = sub_B5D6C8(Instance);
              sub_B5D668(v107, 0LL);
            }
            v83 = eventRewardEntList->m_Items[v82];
            if ( !v83 )
              break;
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = (DataManager_o *)GiftMaster__getDataById(
                                          MasterData_WarQuestSelectionMaster,
                                          v83->fields.giftId,
                                          0LL);
            if ( !Instance )
              break;
            giftId = v83->fields.giftId;
            if ( Instance->fields.m_CachedPtr != giftId )
            {
              Instance = (DataManager_o *)EventPointItemListViewManager__TargetItemTargetGiftEntity(
                                            (EventPointItemListViewManager_o *)Instance,
                                            v81,
                                            giftId,
                                            v84);
              if ( !v79 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v79,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
            }
            max_length = eventRewardEntList->max_length;
            if ( (int)++v82 >= max_length )
              goto LABEL_20;
          }
LABEL_46:
          sub_B5D69C(Instance, v69);
        }
LABEL_20:
        if ( !v79 )
          goto LABEL_46;
        if ( v79->fields._size >= 1 )
        {
          v86 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
          System_Text_StringBuilder___ctor(v86, 0LL);
          size = v79->fields._size;
          if ( size >= 1 )
          {
            v88 = 0LL;
            do
            {
              if ( size <= (unsigned int)v88 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v89 = (GiftEntity_o *)v79->fields._items->m_Items[v88];
              if ( !v89 || !MasterData_WarQuestSelectionMaster )
                goto LABEL_46;
              Instance = (DataManager_o *)GiftMaster__getDataById(
                                            MasterData_WarQuestSelectionMaster,
                                            v89->fields.id,
                                            0LL);
              v91 = (GiftEntity_o *)Instance;
              if ( (_DWORD)v88 )
              {
                if ( !v86 )
                  goto LABEL_46;
                Instance = (DataManager_o *)System_Text_StringBuilder__Append_42953744(
                                              v86,
                                              (System_String_o *)StringLiteral_26/*"\n"*/,
                                              0LL);
              }
              KindName = EventPointItemListViewManager__GetKindName(
                           (EventPointItemListViewManager_o *)Instance,
                           v89,
                           v90);
              GiftName = EventPointItemListViewManager__GetGiftName(
                           (EventPointItemListViewManager_o *)KindName,
                           v89,
                           v93);
              Instance = (DataManager_o *)System_String__Concat_44581200(
                                            KindName,
                                            (System_String_o *)StringLiteral_24106/*"「"*/,
                                            GiftName,
                                            (System_String_o *)StringLiteral_24107/*"」"*/,
                                            0LL);
              if ( !Instance )
                goto LABEL_46;
              Instance = (DataManager_o *)System_String__PadRight((System_String_o *)Instance, 15, 0x3000u, 0LL);
              if ( !v86 )
                goto LABEL_46;
              System_Text_StringBuilder__Append_42953744(v86, (System_String_o *)Instance, 0LL);
              appended = System_Text_StringBuilder__Append_42953744(v86, (System_String_o *)StringLiteral_24080/*"→　「"*/, 0LL);
              Instance = (DataManager_o *)EventPointItemListViewManager__GetGiftName(
                                            (EventPointItemListViewManager_o *)appended,
                                            v91,
                                            v96);
              if ( !v91 )
                goto LABEL_46;
              v97 = (System_String_o *)Instance;
              Instance = (DataManager_o *)System_Int32__ToString((int)v91 + 28, 0LL);
              if ( !Instance )
                goto LABEL_46;
              v98 = System_String__PadLeft((System_String_o *)Instance, 2, 0x20u, 0LL);
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v99 = LocalizationManager__Get((System_String_o *)StringLiteral_5732/*"EVENT_POINT_GIFT_ADD_COUNT"*/, 0LL);
              v100 = System_String__Concat_44581200(v97, v98, v99, (System_String_o *)StringLiteral_24107/*"」"*/, 0LL);
              Instance = (DataManager_o *)System_Text_StringBuilder__Append_42953744(v86, v100, 0LL);
              size = v79->fields._size;
            }
            while ( (int)++v88 < size );
          }
          eventPointReplaseRewardDialog = v108->fields.eventPointReplaseRewardDialog;
          v102 = System_Int32__ToString((int)v67 + 24, 0LL);
          v103 = System_String__Concat_44577788((System_String_o *)StringLiteral_5730/*"EVENT_POINT_GIFT_ADD"*/, v102, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__Get(v103, 0LL);
          if ( !v86 )
            goto LABEL_46;
          v104 = (System_String_o *)Instance;
          v105 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v86->klass->vtable._3_ToString.method)(
                                      v86,
                                      v86->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v106 = (EventPointReplaseRewardDialog_ClickDelegate_o *)sub_B5D694(EventPointReplaseRewardDialog_ClickDelegate_TypeInfo);
          EventPointReplaseRewardDialog_ClickDelegate___ctor(
            v106,
            (Il2CppObject *)v67,
            Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__,
            0LL);
          if ( !eventPointReplaseRewardDialog )
            goto LABEL_46;
          EventPointReplaseRewardDialog__Open(eventPointReplaseRewardDialog, v104, v105, v106, -1, 0, 0, 0, 0, 0, 0LL);
        }
      }
    }
  }
}


void __fastcall EventPointItemListViewManager__RequestInto(
        EventPointItemListViewManager_o *this,
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
  const MethodInfo *v17; // x1
  System_Collections_Generic_List_EventPointItemListViewObject__o *ObjectList; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_EventPointItemListViewObject__o *v20; // x20
  signed __int64 size; // x8
  unsigned __int64 v22; // x24
  int v23; // w23
  EventPointItemListViewObject_o *v24; // x21
  System_Action_o *v25; // x22

  if ( (byte_42E90DF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventPointItemListViewManager_OnMoveEnd__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Item__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v14, v15, v16);
    byte_42E90DF = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventPointItemListViewManager__get_ObjectList(this, v17);
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
      System_Action___ctor(v25, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v24 )
        goto LABEL_15;
      ++v23;
      EventPointItemListViewObject__Init_25733944(v24, 4, v25, 0.1, 0LL);
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
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E90DD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_EventPointItemListViewManager_OnMoveEnd__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v26, v27, v28);
    byte_42E90DD = 1;
  }
  memset(&v36, 0, sizeof(v36));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventPointItemListViewManager__get_ObjectList(
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
      &v36,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v36,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v36.fields.current;
      v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v33, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v34, v35);
      EventPointItemListViewObject__Init_25733944((EventPointItemListViewObject_o *)current, mode, v33, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v36,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__RequestListObject_26043728(
        EventPointItemListViewManager_o *this,
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
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E90DE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_EventPointItemListViewManager_OnMoveEnd__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, v24, v25, v26);
    byte_42E90DE = 1;
  }
  memset(&v34, 0, sizeof(v34));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventPointItemListViewManager__get_ObjectList(
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
      &v34,
      ObjectList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v34,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v34.fields.current;
      v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v31, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B5D69C(v32, v33);
      EventPointItemListViewObject__Init_25734024((EventPointItemListViewObject_o *)current, mode, v31, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v34,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventPointItemListViewManager__SetMode_26042844(this, mode, v10);
}


void __fastcall EventPointItemListViewManager__SetMode_26042844(
        EventPointItemListViewManager_o *this,
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

  if ( (byte_42E90DC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, mode, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11562/*"RequestInto"*/, v6, v7, v8);
    byte_42E90DC = 1;
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


void __fastcall EventPointItemListViewManager__SetMode_26043120(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  EventPointItemListViewManager__SetMode_26042844(this, mode, v11);
}


void __fastcall EventPointItemListViewManager__SetMode_26043180(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventPointItemListViewManager__SetMode_26042844(this, mode, v10);
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
  if ( (byte_42E90DB & 1) == 0 )
  {
    this = (EventPointItemListViewManager_o *)sub_B5D5C4(
                                                &EventPointItemListViewObject_TypeInfo,
                                                (_DWORD)obj,
                                                (_DWORD)item,
                                                method);
    byte_42E90DB = 1;
  }
  if ( !obj
    || (v6 = *(&EventPointItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventPointItemListViewObject_TypeInfo )
  {
    sub_B5D69C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventPointItemListViewObject__Init_25732420((EventPointItemListViewObject_o *)obj, v7, 0LL);
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
    sub_B5D69C(this, entitys);
  }
  return 0LL;
}


void __fastcall EventPointItemListViewManager__add_callbackFunc(
        EventPointItemListViewManager_o *this,
        EventPointItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct EventPointItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventPointItemListViewManager_o *v11; // x0
  EventPointItemListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E90CE & 1) == 0 )
  {
    sub_B5D5C4(&EventPointItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E90CE = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EventPointItemListViewManager_CallbackFunc_c *)v8->klass != EventPointItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventPointItemListViewManager_o *)sub_B5D990(v8);
  EventPointItemListViewManager__remove_callbackFunc(v11, v12, v13);
}


void __fastcall EventPointItemListViewManager__add_callbackFunc2(
        EventPointItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventPointItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E90D0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E90D0 = 1;
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
  v11 = (EventPointItemListViewManager_o *)sub_B5D990(v8);
  EventPointItemListViewManager__remove_callbackFunc2(v11, v12, v13);
}


void __fastcall EventPointItemListViewManager__closeItemDetail(
        EventPointItemListViewManager_o *this,
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

  if ( (byte_42E90E2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EventPointItemListViewManager_closeItemDetail__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42E90E2 = 1;
  }
  v7 = Method_EventPointItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_EventPointItemListViewManager_closeItemDetail__ + 75) & 2) != 0 )
    v7 = (_QWORD *)sub_B5D5CC(Method_EventPointItemListViewManager_closeItemDetail__);
  v8 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v7, v7[3]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


void __fastcall EventPointItemListViewManager__closeSvtDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E90E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E90E3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


System_Collections_Generic_List_EventPointItemListViewObject__o *__fastcall EventPointItemListViewManager__get_ClippingObjectList(
        EventPointItemListViewManager_o *this,
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
  EventPointItemListViewObject_o *Component_srcLineSprite; // x0
  __int64 v36; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v37; // x21
  ListViewItem_o *Item; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42E90D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E90D3 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
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
      Component_srcLineSprite = (EventPointItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      v37 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B5D69C(0LL, v36);
      Item = (ListViewItem_o *)EventPointItemListViewObject__GetItem(Component_srcLineSprite, 0LL);
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
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v44,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v29;
}


System_Collections_Generic_List_EventPointItemListViewObject__o *__fastcall EventPointItemListViewManager__get_ObjectList(
        EventPointItemListViewManager_o *this,
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

  if ( (byte_42E90D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    byte_42E90D2 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
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
                                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      if ( !v29 )
        sub_B5D69C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v29,
        Component_srcLineSprite,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v38,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v29;
}


void __fastcall EventPointItemListViewManager__remove_callbackFunc(
        EventPointItemListViewManager_o *this,
        EventPointItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct EventPointItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventPointItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E90CF & 1) == 0 )
  {
    sub_B5D5C4(&EventPointItemListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E90CF = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EventPointItemListViewManager_CallbackFunc_c *)v8->klass != EventPointItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventPointItemListViewManager_o *)sub_B5D990(v8);
  EventPointItemListViewManager__add_callbackFunc2(v11, v12, v13);
}


void __fastcall EventPointItemListViewManager__remove_callbackFunc2(
        EventPointItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EventPointItemListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E90D1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E90D1 = 1;
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
  v11 = (EventPointItemListViewManager_o *)sub_B5D990(v8);
  EventPointItemListViewManager__get_ObjectList(v11, v12);
}


void __fastcall EventPointItemListViewManager__setNextRewardInfo(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ListViewManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  int size; // w21
  int32_t v13; // w20
  ListViewItem_o *v14; // x8
  __int64 v15; // x11

  v4 = (ListViewManager_o *)this;
  if ( (byte_42E90D9 & 1) == 0 )
  {
    sub_B5D5C4(&EventPointItemListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5, v6, v7);
    this = (EventPointItemListViewManager_o *)sub_B5D5C4(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v8,
                                                v9,
                                                v10);
    byte_42E90D9 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    do
    {
      if ( itemList->fields._size <= (unsigned int)v13 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v14 = itemList->fields._items->m_Items[v13];
      if ( !v14 )
        break;
      v15 = *(&EventPointItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (EventPointItemListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] != EventPointItemListViewItem_TypeInfo )
      {
        break;
      }
      if ( (EventPointItemListViewItem_c *)v14->klass->_2.typeHierarchy[*(&EventPointItemListViewItem_TypeInfo->_2.bitflags2
                                                                        + 1)
                                                                      - 1] != EventPointItemListViewItem_TypeInfo )
        v14 = 0LL;
      if ( !LOBYTE(v14[1].fields.sortValue2B) )
        goto LABEL_18;
      if ( ++v13 >= size )
        goto LABEL_17;
      itemList = v4->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_B5D69C(this, method);
  }
LABEL_17:
  v13 = 0;
LABEL_18:
  ListViewManager__SetTopItem(v4, v13, 0LL);
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall EventPointItemListViewManager_CallbackFunc__BeginInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall EventPointItemListViewManager_CallbackFunc__EndInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v10; // x3
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
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  EventPointItemListViewManager_CallbackFunc_o *v30; // [xsp+8h] [xbp-38h] BYREF

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
    v6 = (EventPointItemListViewManager_CallbackFunc_o **)(v3 + 32);
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
    sub_B5D69C(0LL, isOk);
  EventPointItemListViewManager__CloseReplaseRewardDialog(_4__this, this->fields.eventId, 0LL);
}