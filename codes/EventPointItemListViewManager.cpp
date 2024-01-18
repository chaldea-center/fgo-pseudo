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
  __int64 v4; // x1

  if ( (byte_41878D9 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_41878D9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
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
  if ( (byte_41878CB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5661/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, *(_QWORD *)&eventId);
    byte_41878CB = 1;
  }
  eventPointReplaseRewardDialog = this->fields.eventPointReplaseRewardDialog;
  if ( !eventPointReplaseRewardDialog )
    sub_B2C434(0LL, *(_QWORD *)&eventId);
  EventPointReplaseRewardDialog__Close_25048500(eventPointReplaseRewardDialog, 0LL, method);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  v6 = System_String__Concat_44305532((System_String_o *)StringLiteral_5661/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v5, 0LL);
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
  __int64 v12; // x1
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v14; // x27
  il2cpp_array_size_t v15; // w28
  EventRewardEntity_o *v16; // x23
  bool v17; // w25
  GiftEntity_o *DataById; // x26
  EventPointItemListViewItem_o *v19; // x24
  const MethodInfo *v20; // x4
  __int64 v21; // x0

  if ( (byte_41878C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, rewardList);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventPointMaster___, v7);
    sub_B2C35C(&EventPointItemListViewItem_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_41878C9 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( rewardList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           Instance,
                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
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
        v19 = (EventPointItemListViewItem_o *)sub_B2C42C(EventPointItemListViewItem_TypeInfo);
        EventPointItemListViewItem___ctor(v19, v16, DataById, v17, v20);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        if ( (int)++v15 >= (int)v14 )
          goto LABEL_14;
        if ( v15 >= rewardList->max_length )
        {
          v21 = sub_B2C460(Instance);
          sub_B2C400(v21, 0LL);
        }
      }
LABEL_16:
      sub_B2C434(Instance, v12);
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

  if ( (byte_41878CD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, gift);
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    this = (EventPointItemListViewManager_o *)sub_B2C35C(&StringLiteral_1/*""*/, v11);
    byte_41878CD = 1;
  }
  if ( !gift )
    goto LABEL_23;
  type = gift->fields.type;
  if ( type == 11 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( this )
          return CommandCodeEntity__GetName((CommandCodeEntity_o *)this, 0LL);
      }
    }
    goto LABEL_23;
  }
  if ( type == 2 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this )
          return (System_String_o *)this->fields.dropObjectList;
      }
    }
    goto LABEL_23;
  }
  if ( type != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (EventPointItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_23:
    sub_B2C434(this, gift);
  }
  Name = ServantEntity__GetName((ServantEntity_o *)this, -1, 0, -1, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44796528(Name, 0LL);
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

  if ( (byte_41878CF & 1) == 0 )
  {
    sub_B2C35C(&EventPointItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_41878CF = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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

  if ( (byte_41878CC & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, gift);
    sub_B2C35C(&StringLiteral_5654/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/, v4);
    this = (EventPointItemListViewManager_o *)sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_41878CC = 1;
  }
  if ( !gift )
    sub_B2C434(this, gift);
  if ( gift->fields.type != 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_5654/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/, 0LL);
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
  const MethodInfo *v14; // x1
  __int64 v15; // x10
  __int64 v16; // x10
  EventPointItemListViewObject_o *v17; // x0
  struct SoundInfo_o *soundInfo; // x8
  CommonUI_o *v19; // x20
  intptr_t m_CachedPtr; // w8
  struct UnityEngine_Transform_o *baseMount; // x8
  int32_t v22; // w0
  WebViewManager_o *v23; // x0
  ItemEntity_o *bgCamera; // x20
  CommonUI_o *v25; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v26; // x22
  WebViewManager_o *Instance; // x0
  System_String_o *connectMark; // x21
  System_String_o *debugSelectDialog; // x20
  CommonUI_o *v30; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v31; // x23
  CommonUI_o *v32; // x0
  System_String_o *v33; // x1
  System_String_o *v34; // x2
  struct UnityEngine_Transform_o *baseMountSystemUI; // x8
  CommonUI_o *v36; // x20
  UnityEngine_Transform_c *klass; // x21
  __int64 v38; // x22
  int32_t v39; // w21
  ServantStatusDialog_EndDelegate_o *v40; // x22
  struct UnityEngine_Transform_o *v41; // x8
  int v42; // w8
  WebViewManager_o *v43; // x0
  CommandCodeEntity_o *maskFade; // x20
  CommonUI_o *v45; // x21
  ServantStatusDialog_EndDelegate_o *v46; // x22
  struct EventMaskFade_o *eventMaskFade; // x8
  System_String_o *v48; // x22
  System_String_o *v49; // x20
  CommonUI_o *v50; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_41878D6 & 1) == 0 )
  {
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B2C35C(&Method_EventPointItemListViewManager_CloseCommandCodeDetail__, v6);
    sub_B2C35C(&Method_EventPointItemListViewManager_closeItemDetail__, v7);
    sub_B2C35C(&Method_EventPointItemListViewManager_closeSvtDetail__, v8);
    sub_B2C35C(&EventPointItemListViewObject_TypeInfo, v9);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11);
    sub_B2C35C(&SoundManager_TypeInfo, v12);
    byte_41878D6 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_43;
  v15 = *(&EventPointItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v15
    || (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[v15 - 1] != EventPointItemListViewObject_TypeInfo )
  {
    goto LABEL_43;
  }
  v16 = *(&EventPointItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v16 )
    v17 = (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[v16 - 1] == EventPointItemListViewObject_TypeInfo
        ? (EventPointItemListViewObject_o *)obj
        : 0LL;
  else
    v17 = 0LL;
  Item = (CommonUI_o *)EventPointItemListViewObject__GetItem(v17, v14);
  if ( !Item )
    goto LABEL_43;
  soundInfo = Item->fields.soundInfo;
  v19 = Item;
  if ( !soundInfo )
    goto LABEL_43;
  m_CachedPtr = soundInfo[1].fields.m_CachedPtr;
  if ( m_CachedPtr != 1 )
  {
    if ( (m_CachedPtr & 0xFFFFFFFE) != 2 )
      return;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    connectMark = (System_String_o *)v19->fields.connectMark;
    debugSelectDialog = (System_String_o *)v19->fields.debugSelectDialog;
    v30 = (CommonUI_o *)Instance;
    v31 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v31,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v30 )
      goto LABEL_43;
    v32 = v30;
    v33 = connectMark;
    v34 = debugSelectDialog;
    goto LABEL_24;
  }
  baseMount = Item->fields.baseMount;
  if ( baseMount )
  {
    v22 = *((_DWORD *)&baseMount->fields + 1);
    if ( v22 == 2 )
    {
      v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      bgCamera = (ItemEntity_o *)v19->fields.bgCamera;
      v25 = (CommonUI_o *)v23;
      v26 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
        0LL);
      if ( v25 )
      {
        CommonUI__OpenItemDetailDialog(v25, bgCamera, v26, 50, 0LL);
        return;
      }
LABEL_43:
      sub_B2C434(Item, v14);
    }
  }
  else
  {
    v22 = 0;
  }
  if ( !Gift__IsServant(v22, 0LL) )
  {
    v41 = v19->fields.baseMount;
    if ( !v41 )
      return;
    v42 = *((_DWORD *)&v41->fields + 1);
    if ( v42 != 12 )
    {
      if ( v42 == 11 )
      {
        v43 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        maskFade = (CommandCodeEntity_o *)v19->fields.maskFade;
        v45 = (CommonUI_o *)v43;
        v46 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v46,
          (Il2CppObject *)this,
          Method_EventPointItemListViewManager_CloseCommandCodeDetail__,
          0LL);
        if ( !v45 )
          goto LABEL_43;
        CommonUI__OpenServantEquipStatusDialog_17987504(v45, 25, maskFade, 0, v46, 0LL, 0LL);
      }
      return;
    }
    if ( !v19->fields.eventMaskFade )
      return;
    Item = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventMaskFade = v19->fields.eventMaskFade;
    if ( !eventMaskFade )
      goto LABEL_43;
    v48 = *(System_String_o **)&eventMaskFade->fields.maskKind;
    v49 = (System_String_o *)v19->fields.connectMark;
    v50 = Item;
    v31 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v31,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v50 )
      goto LABEL_43;
    v32 = v50;
    v33 = v49;
    v34 = v48;
LABEL_24:
    CommonUI__OpenItemDetailDialog_18036692(v32, v33, v34, v31, 0LL);
    return;
  }
  Item = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  baseMountSystemUI = v19->fields.baseMountSystemUI;
  if ( !baseMountSystemUI )
    goto LABEL_43;
  v36 = Item;
  v38 = *(_QWORD *)&baseMountSystemUI->fields.m_CachedPtr;
  klass = baseMountSystemUI[1].klass;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v51.fields.currentCryptoKey = v38;
  *(_QWORD *)&v51.fields.fakeValue = klass;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v51, 0LL);
  v40 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v40,
    (Il2CppObject *)this,
    Method_EventPointItemListViewManager_closeSvtDetail__,
    0LL);
  if ( !v36 )
    goto LABEL_43;
  CommonUI__OpenServantStatusDialog_17985072(v36, 7, v39, v40, 0LL);
}


void __fastcall EventPointItemListViewManager__OnMoveEnd(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
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

  if ( (byte_41878D5 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41878D5 = 1;
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
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x23
  signed int max_length; // w8
  GiftEntity_array *v41; // x25
  __int64 v42; // x19
  EventRewardEntity_o *v43; // x28
  const MethodInfo *v44; // x3
  int32_t giftId; // w2
  System_Text_StringBuilder_o *v46; // x24
  int size; // w8
  __int64 v48; // x28
  GiftEntity_o *v49; // x26
  const MethodInfo *v50; // x2
  GiftEntity_o *v51; // x25
  System_String_o *KindName; // x27
  const MethodInfo *v53; // x2
  System_String_o *GiftName; // x0
  System_Text_StringBuilder_o *appended; // x0
  const MethodInfo *v56; // x2
  System_String_o *v57; // x26
  System_String_o *v58; // x25
  System_String_o *v59; // x0
  System_String_o *v60; // x0
  EventPointReplaseRewardDialog_o *eventPointReplaseRewardDialog; // x19
  System_String_o *v62; // x0
  System_String_o *v63; // x21
  System_String_o *v64; // x21
  System_String_o *v65; // x22
  EventPointReplaseRewardDialog_ClickDelegate_o *v66; // x23
  __int64 v67; // x0
  const MethodInfo *v68; // [xsp+10h] [xbp-60h]
  EventPointItemListViewManager_o *v69; // [xsp+18h] [xbp-58h]

  if ( (byte_41878CA & 1) == 0 )
  {
    sub_B2C35C(&EventPointReplaseRewardDialog_ClickDelegate_TypeInfo, eventRewardEntList);
    sub_B2C35C(&Method_DataManager_GetMasterData_GiftMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventPointMaster___, v8);
    sub_B2C35C(&Method_DataManager_getEntitys_GiftMaster__GiftEntity___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v13);
    sub_B2C35C(&System_Collections_Generic_List_GiftEntity__TypeInfo, v14);
    sub_B2C35C(&LocalizationManager_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v17);
    sub_B2C35C(&Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__, v18);
    sub_B2C35C(&EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v20);
    sub_B2C35C(&StringLiteral_5661/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v21);
    sub_B2C35C(&StringLiteral_23768/*"→　「"*/, v22);
    sub_B2C35C(&StringLiteral_5653/*"EVENT_POINT_GIFT_ADD"*/, v23);
    sub_B2C35C(&StringLiteral_5655/*"EVENT_POINT_GIFT_ADD_COUNT"*/, v24);
    sub_B2C35C(&StringLiteral_23794/*"」"*/, v25);
    sub_B2C35C(&StringLiteral_23793/*"「"*/, v26);
    byte_41878CA = 1;
  }
  v27 = sub_B2C42C(EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo);
  EventPointItemListViewManager___c__DisplayClass20_0___ctor(
    (EventPointItemListViewManager___c__DisplayClass20_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_46;
  *(_QWORD *)(v27 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  *(_DWORD *)(v27 + 24) = eventId;
  if ( eventRewardEntList )
  {
    if ( *(_QWORD *)&eventRewardEntList->max_length )
    {
      v36 = System_Int32__ToString((int)v27 + 24, 0LL);
      v37 = System_String__Concat_44305532((System_String_o *)StringLiteral_5661/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v36, 0LL);
      if ( !UnityEngine_PlayerPrefs__GetInt(v37, 0, 0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_46;
        MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_GiftMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_46;
        v69 = this;
        DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventPointMaster___);
        v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v39,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (DataManager_o *)DataManager__getEntitys_WarMaster__WarEntity_(
                                      Instance,
                                      (const MethodInfo_1733C80 *)Method_DataManager_getEntitys_GiftMaster__GiftEntity___);
        max_length = eventRewardEntList->max_length;
        if ( max_length >= 1 )
        {
          v41 = (GiftEntity_array *)Instance;
          v42 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v42 >= max_length )
            {
              v67 = sub_B2C460(Instance);
              sub_B2C400(v67, 0LL);
            }
            v43 = eventRewardEntList->m_Items[v42];
            if ( !v43 )
              break;
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = (DataManager_o *)GiftMaster__getDataById(
                                          MasterData_WarQuestSelectionMaster,
                                          v43->fields.giftId,
                                          0LL);
            if ( !Instance )
              break;
            giftId = v43->fields.giftId;
            if ( Instance->fields.m_CachedPtr != giftId )
            {
              Instance = (DataManager_o *)EventPointItemListViewManager__TargetItemTargetGiftEntity(
                                            (EventPointItemListViewManager_o *)Instance,
                                            v41,
                                            giftId,
                                            v44);
              if ( !v39 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v39,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
            }
            max_length = eventRewardEntList->max_length;
            if ( (int)++v42 >= max_length )
              goto LABEL_20;
          }
LABEL_46:
          sub_B2C434(Instance, v29);
        }
LABEL_20:
        if ( !v39 )
          goto LABEL_46;
        if ( v39->fields._size >= 1 )
        {
          v46 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
          System_Text_StringBuilder___ctor(v46, 0LL);
          size = v39->fields._size;
          if ( size >= 1 )
          {
            v48 = 0LL;
            do
            {
              if ( size <= (unsigned int)v48 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v49 = (GiftEntity_o *)v39->fields._items->m_Items[v48];
              if ( !v49 || !MasterData_WarQuestSelectionMaster )
                goto LABEL_46;
              Instance = (DataManager_o *)GiftMaster__getDataById(
                                            MasterData_WarQuestSelectionMaster,
                                            v49->fields.id,
                                            0LL);
              v51 = (GiftEntity_o *)Instance;
              if ( (_DWORD)v48 )
              {
                if ( !v46 )
                  goto LABEL_46;
                Instance = (DataManager_o *)System_Text_StringBuilder__Append_42408700(
                                              v46,
                                              (System_String_o *)StringLiteral_26/*"\n"*/,
                                              0LL);
              }
              KindName = EventPointItemListViewManager__GetKindName(
                           (EventPointItemListViewManager_o *)Instance,
                           v49,
                           v50);
              GiftName = EventPointItemListViewManager__GetGiftName(
                           (EventPointItemListViewManager_o *)KindName,
                           v49,
                           v53);
              Instance = (DataManager_o *)System_String__Concat_44308944(
                                            KindName,
                                            (System_String_o *)StringLiteral_23793/*"「"*/,
                                            GiftName,
                                            (System_String_o *)StringLiteral_23794/*"」"*/,
                                            0LL);
              if ( !Instance )
                goto LABEL_46;
              Instance = (DataManager_o *)System_String__PadRight((System_String_o *)Instance, 15, 0x3000u, 0LL);
              if ( !v46 )
                goto LABEL_46;
              System_Text_StringBuilder__Append_42408700(v46, (System_String_o *)Instance, 0LL);
              appended = System_Text_StringBuilder__Append_42408700(v46, (System_String_o *)StringLiteral_23768/*"→　「"*/, 0LL);
              Instance = (DataManager_o *)EventPointItemListViewManager__GetGiftName(
                                            (EventPointItemListViewManager_o *)appended,
                                            v51,
                                            v56);
              if ( !v51 )
                goto LABEL_46;
              v57 = (System_String_o *)Instance;
              Instance = (DataManager_o *)System_Int32__ToString((int)v51 + 28, 0LL);
              if ( !Instance )
                goto LABEL_46;
              v58 = System_String__PadLeft((System_String_o *)Instance, 2, 0x20u, 0LL);
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v59 = LocalizationManager__Get((System_String_o *)StringLiteral_5655/*"EVENT_POINT_GIFT_ADD_COUNT"*/, 0LL);
              v60 = System_String__Concat_44308944(v57, v58, v59, (System_String_o *)StringLiteral_23794/*"」"*/, 0LL);
              Instance = (DataManager_o *)System_Text_StringBuilder__Append_42408700(v46, v60, 0LL);
              size = v39->fields._size;
            }
            while ( (int)++v48 < size );
          }
          eventPointReplaseRewardDialog = v69->fields.eventPointReplaseRewardDialog;
          v62 = System_Int32__ToString((int)v27 + 24, 0LL);
          v63 = System_String__Concat_44305532((System_String_o *)StringLiteral_5653/*"EVENT_POINT_GIFT_ADD"*/, v62, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__Get(v63, 0LL);
          if ( !v46 )
            goto LABEL_46;
          v64 = (System_String_o *)Instance;
          v65 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v46->klass->vtable._3_ToString.method)(
                                     v46,
                                     v46->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v66 = (EventPointReplaseRewardDialog_ClickDelegate_o *)sub_B2C42C(EventPointReplaseRewardDialog_ClickDelegate_TypeInfo);
          EventPointReplaseRewardDialog_ClickDelegate___ctor(
            v66,
            (Il2CppObject *)v27,
            Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__,
            0LL);
          if ( !eventPointReplaseRewardDialog )
            goto LABEL_46;
          EventPointReplaseRewardDialog__Open(eventPointReplaseRewardDialog, v64, v65, v66, -1, 0, 0, 0, 0, 0, v68);
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
  __int64 v9; // x1
  System_Collections_Generic_List_EventPointItemListViewObject__o *v10; // x20
  signed __int64 size; // x8
  unsigned __int64 v12; // x24
  int v13; // w23
  EventPointItemListViewObject_o *v14; // x21
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x3
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_41878D4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EventPointItemListViewManager_OnMoveEnd__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Item__, v5);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v6);
    byte_41878D4 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventPointItemListViewManager__get_ObjectList(this, v7);
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
      System_Action___ctor(v15, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v14 )
        goto LABEL_15;
      ++v13;
      zero = UnityEngine_Vector3__get_zero(0LL);
      EventPointItemListViewObject__Init(v14, 4, v15, 0.1, *(UnityEngine_Vector3_o *)&zero.fields.y, v16);
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
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_41878D2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__, v9);
    sub_B2C35C(&Method_EventPointItemListViewManager_OnMoveEnd__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_41878D2 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventPointItemListViewManager__get_ObjectList(
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
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v22,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v22.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      zero = UnityEngine_Vector3__get_zero(0LL);
      EventPointItemListViewObject__Init(
        (EventPointItemListViewObject_o *)current,
        mode,
        v18,
        delay,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v21);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v22,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__RequestListObject_25041456(
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
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_41878D3 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__, v7);
    sub_B2C35C(&Method_EventPointItemListViewManager_OnMoveEnd__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_41878D3 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventPointItemListViewManager__get_ObjectList(
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
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v20.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      zero = UnityEngine_Vector3__get_zero(0LL);
      EventPointItemListViewObject__Init(
        (EventPointItemListViewObject_o *)current,
        mode,
        v16,
        0.0,
        *(UnityEngine_Vector3_o *)&zero.fields.y,
        v19);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventPointItemListViewManager__SetMode_25040488(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__SetMode_25040488(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_41878D1 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&StringLiteral_11429/*"RequestInto"*/, v5);
    byte_41878D1 = 1;
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


void __fastcall EventPointItemListViewManager__SetMode_25040764(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  EventPointItemListViewManager__SetMode_25040488(this, mode, v11);
}


void __fastcall EventPointItemListViewManager__SetMode_25040824(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventPointItemListViewManager__SetMode_25040488(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__SetObjectItem(
        EventPointItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventPointItemListViewManager_o *v5; // x20
  __int64 v6; // x10
  int32_t initMode; // w20
  const MethodInfo *v8; // x3
  int v9; // s1
  int32_t v12; // w1

  v5 = this;
  if ( (byte_41878D0 & 1) == 0 )
  {
    this = (EventPointItemListViewManager_o *)sub_B2C35C(&EventPointItemListViewObject_TypeInfo, obj);
    byte_41878D0 = 1;
  }
  if ( !obj
    || (v6 = *(&EventPointItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventPointItemListViewObject_TypeInfo )
  {
    sub_B2C434(this, obj);
  }
  initMode = v5->fields.initMode;
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
    sub_B2C434(this, entitys);
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

  if ( (byte_41878C3 & 1) == 0 )
  {
    sub_B2C35C(&EventPointItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_41878C3 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_41878C5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_41878C5 = 1;
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
  v10 = (EventPointItemListViewManager_o *)sub_B2C728(v7);
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
  __int64 v7; // x1

  if ( (byte_41878D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_EventPointItemListViewManager_closeItemDetail__, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_41878D7 = 1;
  }
  v4 = Method_EventPointItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_EventPointItemListViewManager_closeItemDetail__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B2C364(Method_EventPointItemListViewManager_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_B2C340(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v7);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__closeSvtDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_41878D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_41878D8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


System_Collections_Generic_List_EventPointItemListViewObject__o *__fastcall EventPointItemListViewManager__get_ClippingObjectList(
        EventPointItemListViewManager_o *this,
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
  EventPointItemListViewObject_o *Component_srcLineSprite; // x0
  const MethodInfo *v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_41878C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_41878C8 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
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
      Component_srcLineSprite = (EventPointItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)EventPointItemListViewObject__GetItem(Component_srcLineSprite, v18);
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
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v11;
}


System_Collections_Generic_List_EventPointItemListViewObject__o *__fastcall EventPointItemListViewManager__get_ObjectList(
        EventPointItemListViewManager_o *this,
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

  if ( (byte_41878C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_41878C7 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
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
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v11;
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

  if ( (byte_41878C4 & 1) == 0 )
  {
    sub_B2C35C(&EventPointItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_41878C4 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_B2C728(v7);
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

  if ( (byte_41878C6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_41878C6 = 1;
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
  v10 = (EventPointItemListViewManager_o *)sub_B2C728(v7);
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
  if ( (byte_41878CE & 1) == 0 )
  {
    sub_B2C35C(&EventPointItemListViewItem_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v3);
    this = (EventPointItemListViewManager_o *)sub_B2C35C(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v4);
    byte_41878CE = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(this, method);
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
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall EventPointItemListViewManager_CallbackFunc__BeginInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall EventPointItemListViewManager_CallbackFunc__EndInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  EventPointItemListViewManager_CallbackFunc_o *v19; // x8
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
  EventPointItemListViewManager_CallbackFunc_o *v31; // [xsp+8h] [xbp-38h] BYREF

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
    v7 = (EventPointItemListViewManager_CallbackFunc_o **)(v4 + 32);
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
    sub_B2C434(0LL, isOk);
  EventPointItemListViewManager__CloseReplaseRewardDialog(_4__this, this->fields.eventId, 0LL);
}