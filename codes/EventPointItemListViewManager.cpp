void __fastcall EventPointItemListViewManager___ctor(EventPointItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventPointItemListViewManager__CloseCommandCodeDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B05C2 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B05C2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
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
  if ( (byte_42B05B4 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5703/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/);
    byte_42B05B4 = 1;
  }
  eventPointReplaseRewardDialog = this->fields.eventPointReplaseRewardDialog;
  if ( !eventPointReplaseRewardDialog )
    sub_B52A5C(0LL, *(_QWORD *)&eventId);
  EventPointReplaseRewardDialog__Close(eventPointReplaseRewardDialog, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  v6 = System_String__Concat_44568316((System_String_o *)StringLiteral_5703/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v5, 0LL);
  UnityEngine_PlayerPrefs__SetInt(v6, 1, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


void __fastcall EventPointItemListViewManager__CreateList(
        EventPointItemListViewManager_o *this,
        EventRewardEntity_array *rewardList,
        int64_t currentPoint,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v10; // x27
  il2cpp_array_size_t v11; // w28
  EventRewardEntity_o *v12; // x23
  bool v13; // w25
  GiftEntity_o *DataById; // x26
  EventPointItemListViewItem_o *v15; // x24
  const MethodInfo *v16; // x4
  __int64 v17; // x0

  if ( (byte_42B05B2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_B52984(&EventPointItemListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B05B2 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( rewardList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           Instance,
                                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    v10 = *(_QWORD *)&rewardList->max_length;
    if ( (int)v10 >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        v12 = rewardList->m_Items[v11];
        if ( !v12 )
          break;
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v13 = v12->fields.point <= currentPoint;
        DataById = GiftMaster__getDataById(MasterData_WarQuestSelectionMaster, v12->fields.giftId, 0LL);
        v15 = (EventPointItemListViewItem_o *)sub_B52A54(EventPointItemListViewItem_TypeInfo);
        EventPointItemListViewItem___ctor(v15, v12, DataById, v13, v16);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
        if ( (int)++v11 >= (int)v10 )
          goto LABEL_14;
        if ( v11 >= rewardList->max_length )
        {
          v17 = sub_B52A88(Instance);
          sub_B52A28(v17, 0LL);
        }
      }
LABEL_16:
      sub_B52A5C(Instance, v8);
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
  int32_t type; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19

  if ( (byte_42B05B6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (EventPointItemListViewManager_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B05B6 = 1;
  }
  if ( !gift )
    goto LABEL_23;
  type = gift->fields.type;
  if ( type == 11 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( this )
          return CommandCodeEntity__GetName((CommandCodeEntity_o *)this, 0LL);
      }
    }
    goto LABEL_23;
  }
  if ( type == 2 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this )
          return (System_String_o *)this->fields.dropObjectList;
      }
    }
    goto LABEL_23;
  }
  if ( type != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (EventPointItemListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_23:
    sub_B52A5C(this, gift);
  }
  Name = ServantEntity__GetName((ServantEntity_o *)this, -1, 0, -1, 0LL);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  }
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_44824884(Name, 0LL);
}


EventPointItemListViewItem_o *__fastcall EventPointItemListViewManager__GetItem(
        EventPointItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  if ( (byte_42B05B8 & 1) == 0 )
  {
    sub_B52984(&EventPointItemListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_42B05B8 = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v6 = itemList->fields._items->m_Items[index];
  if ( !v6 )
    return 0LL;
  v7 = *(&EventPointItemListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (EventPointItemListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == EventPointItemListViewItem_TypeInfo )
    return (EventPointItemListViewItem_o *)itemList->fields._items->m_Items[index];
  return 0LL;
}


System_String_o *__fastcall EventPointItemListViewManager__GetKindName(
        EventPointItemListViewManager_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  if ( (byte_42B05B5 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_5696/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/);
    this = (EventPointItemListViewManager_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42B05B5 = 1;
  }
  if ( !gift )
    sub_B52A5C(this, gift);
  if ( gift->fields.type != 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get((System_String_o *)StringLiteral_5696/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/, 0LL);
}


void __fastcall EventPointItemListViewManager__OnClickListView(
        EventPointItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  CommonUI_o *Item; // x0
  __int64 v6; // x1
  __int64 v7; // x10
  __int64 v8; // x10
  EventPointItemListViewObject_o *v9; // x0
  struct SoundInfo_o *soundInfo; // x8
  CommonUI_o *v11; // x20
  intptr_t m_CachedPtr; // w8
  struct UnityEngine_Transform_o *baseMount; // x8
  int32_t v14; // w0
  WebViewManager_o *v15; // x0
  ItemEntity_o *bgCamera; // x20
  CommonUI_o *v17; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v18; // x22
  WebViewManager_o *Instance; // x0
  System_String_o *connectMark; // x21
  System_String_o *debugSelectDialog; // x20
  CommonUI_o *v22; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v23; // x23
  CommonUI_o *v24; // x0
  System_String_o *v25; // x1
  System_String_o *v26; // x2
  struct UnityEngine_Transform_o *baseMountSystemUI; // x8
  CommonUI_o *v28; // x20
  UnityEngine_Transform_c *klass; // x21
  __int64 v30; // x22
  int32_t v31; // w21
  ServantStatusDialog_EndDelegate_o *v32; // x22
  struct UnityEngine_Transform_o *v33; // x8
  int v34; // w8
  WebViewManager_o *v35; // x0
  CommandCodeEntity_o *maskFade; // x20
  CommonUI_o *v37; // x21
  ServantStatusDialog_EndDelegate_o *v38; // x22
  struct EventMaskFade_o *eventMaskFade; // x8
  System_String_o *v40; // x22
  System_String_o *v41; // x20
  CommonUI_o *v42; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_42B05BF & 1) == 0 )
  {
    sub_B52984(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&Method_EventPointItemListViewManager_CloseCommandCodeDetail__);
    sub_B52984(&Method_EventPointItemListViewManager_closeItemDetail__);
    sub_B52984(&Method_EventPointItemListViewManager_closeSvtDetail__);
    sub_B52984(&EventPointItemListViewObject_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B05BF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  if ( !obj )
    goto LABEL_43;
  v7 = *(&EventPointItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != EventPointItemListViewObject_TypeInfo )
  {
    goto LABEL_43;
  }
  v8 = *(&EventPointItemListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v8 )
    v9 = (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[v8 - 1] == EventPointItemListViewObject_TypeInfo
       ? (EventPointItemListViewObject_o *)obj
       : 0LL;
  else
    v9 = 0LL;
  Item = (CommonUI_o *)EventPointItemListViewObject__GetItem(v9, 0LL);
  if ( !Item )
    goto LABEL_43;
  soundInfo = Item->fields.soundInfo;
  v11 = Item;
  if ( !soundInfo )
    goto LABEL_43;
  m_CachedPtr = soundInfo[1].fields.m_CachedPtr;
  if ( m_CachedPtr != 1 )
  {
    if ( (m_CachedPtr & 0xFFFFFFFE) != 2 )
      return;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    connectMark = (System_String_o *)v11->fields.connectMark;
    debugSelectDialog = (System_String_o *)v11->fields.debugSelectDialog;
    v22 = (CommonUI_o *)Instance;
    v23 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B52A54(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v22 )
      goto LABEL_43;
    v24 = v22;
    v25 = connectMark;
    v26 = debugSelectDialog;
    goto LABEL_24;
  }
  baseMount = Item->fields.baseMount;
  if ( baseMount )
  {
    v14 = *((_DWORD *)&baseMount->fields + 1);
    if ( v14 == 2 )
    {
      v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      bgCamera = (ItemEntity_o *)v11->fields.bgCamera;
      v17 = (CommonUI_o *)v15;
      v18 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B52A54(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
        0LL);
      if ( v17 )
      {
        CommonUI__OpenItemDetailDialog(v17, bgCamera, v18, 50, 0LL);
        return;
      }
LABEL_43:
      sub_B52A5C(Item, v6);
    }
  }
  else
  {
    v14 = 0;
  }
  if ( !Gift__IsServant(v14, 0LL) )
  {
    v33 = v11->fields.baseMount;
    if ( !v33 )
      return;
    v34 = *((_DWORD *)&v33->fields + 1);
    if ( v34 != 12 )
    {
      if ( v34 == 11 )
      {
        v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        maskFade = (CommandCodeEntity_o *)v11->fields.maskFade;
        v37 = (CommonUI_o *)v35;
        v38 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v38,
          (Il2CppObject *)this,
          Method_EventPointItemListViewManager_CloseCommandCodeDetail__,
          0LL);
        if ( !v37 )
          goto LABEL_43;
        CommonUI__OpenServantEquipStatusDialog_18174448(v37, 25, maskFade, 0, v38, 0LL, 0LL);
      }
      return;
    }
    if ( !v11->fields.eventMaskFade )
      return;
    Item = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventMaskFade = v11->fields.eventMaskFade;
    if ( !eventMaskFade )
      goto LABEL_43;
    v40 = *(System_String_o **)&eventMaskFade->fields.maskKind;
    v41 = (System_String_o *)v11->fields.connectMark;
    v42 = Item;
    v23 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B52A54(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v42 )
      goto LABEL_43;
    v24 = v42;
    v25 = v41;
    v26 = v40;
LABEL_24:
    CommonUI__OpenItemDetailDialog_18223668(v24, v25, v26, v23, 0LL);
    return;
  }
  Item = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  baseMountSystemUI = v11->fields.baseMountSystemUI;
  if ( !baseMountSystemUI )
    goto LABEL_43;
  v28 = Item;
  v30 = *(_QWORD *)&baseMountSystemUI->fields.m_CachedPtr;
  klass = baseMountSystemUI[1].klass;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v43.fields.currentCryptoKey = v30;
  *(_QWORD *)&v43.fields.fakeValue = klass;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v43, 0LL);
  v32 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v32,
    (Il2CppObject *)this,
    Method_EventPointItemListViewManager_closeSvtDetail__,
    0LL);
  if ( !v28 )
    goto LABEL_43;
  CommonUI__OpenServantStatusDialog_18172016(v28, 7, v31, v32, 0LL);
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

  if ( (byte_42B05BE & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B05BE = 1;
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
          sub_B52A5C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v7; // x20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x23
  signed int max_length; // w8
  GiftEntity_array *v21; // x25
  __int64 v22; // x19
  EventRewardEntity_o *v23; // x28
  const MethodInfo *v24; // x3
  int32_t giftId; // w2
  System_Text_StringBuilder_o *v26; // x24
  int size; // w8
  __int64 v28; // x28
  GiftEntity_o *v29; // x26
  const MethodInfo *v30; // x2
  GiftEntity_o *v31; // x25
  System_String_o *KindName; // x27
  const MethodInfo *v33; // x2
  System_String_o *GiftName; // x0
  System_Text_StringBuilder_o *appended; // x0
  const MethodInfo *v36; // x2
  System_String_o *v37; // x26
  System_String_o *v38; // x25
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  EventPointReplaseRewardDialog_o *eventPointReplaseRewardDialog; // x19
  System_String_o *v42; // x0
  System_String_o *v43; // x21
  System_String_o *v44; // x21
  System_String_o *v45; // x22
  EventPointReplaseRewardDialog_ClickDelegate_o *v46; // x23
  __int64 v47; // x0
  EventPointItemListViewManager_o *v48; // [xsp+18h] [xbp-58h]

  if ( (byte_42B05B3 & 1) == 0 )
  {
    sub_B52984(&EventPointReplaseRewardDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_B52984(&Method_DataManager_getEntitys_GiftMaster__GiftEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_B52984(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    sub_B52984(&Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__);
    sub_B52984(&EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo);
    sub_B52984(&StringLiteral_26/*"\n"*/);
    sub_B52984(&StringLiteral_5703/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/);
    sub_B52984(&StringLiteral_23962/*"→　「"*/);
    sub_B52984(&StringLiteral_5695/*"EVENT_POINT_GIFT_ADD"*/);
    sub_B52984(&StringLiteral_5697/*"EVENT_POINT_GIFT_ADD_COUNT"*/);
    sub_B52984(&StringLiteral_23989/*"」"*/);
    sub_B52984(&StringLiteral_23988/*"「"*/);
    byte_42B05B3 = 1;
  }
  v7 = sub_B52A54(EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo);
  EventPointItemListViewManager___c__DisplayClass20_0___ctor(
    (EventPointItemListViewManager___c__DisplayClass20_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_46;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = eventId;
  if ( eventRewardEntList )
  {
    if ( *(_QWORD *)&eventRewardEntList->max_length )
    {
      v16 = System_Int32__ToString((int)v7 + 24, 0LL);
      v17 = System_String__Concat_44568316((System_String_o *)StringLiteral_5703/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v16, 0LL);
      if ( !UnityEngine_PlayerPrefs__GetInt(v17, 0, 0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_46;
        MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               Instance,
                                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_46;
        v48 = this;
        DataManager__GetMasterData_WarQuestSelectionMaster_(
          Instance,
          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
        v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v19,
          (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_46;
        Instance = (DataManager_o *)DataManager__getEntitys_WarMaster__WarEntity_(
                                      Instance,
                                      (const MethodInfo_1A4F418 *)Method_DataManager_getEntitys_GiftMaster__GiftEntity___);
        max_length = eventRewardEntList->max_length;
        if ( max_length >= 1 )
        {
          v21 = (GiftEntity_array *)Instance;
          v22 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v22 >= max_length )
            {
              v47 = sub_B52A88(Instance);
              sub_B52A28(v47, 0LL);
            }
            v23 = eventRewardEntList->m_Items[v22];
            if ( !v23 )
              break;
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            Instance = (DataManager_o *)GiftMaster__getDataById(
                                          MasterData_WarQuestSelectionMaster,
                                          v23->fields.giftId,
                                          0LL);
            if ( !Instance )
              break;
            giftId = v23->fields.giftId;
            if ( Instance->fields.m_CachedPtr != giftId )
            {
              Instance = (DataManager_o *)EventPointItemListViewManager__TargetItemTargetGiftEntity(
                                            (EventPointItemListViewManager_o *)Instance,
                                            v21,
                                            giftId,
                                            v24);
              if ( !v19 )
                break;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v19,
                (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
                (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GiftEntity__Add__);
            }
            max_length = eventRewardEntList->max_length;
            if ( (int)++v22 >= max_length )
              goto LABEL_20;
          }
LABEL_46:
          sub_B52A5C(Instance, v9);
        }
LABEL_20:
        if ( !v19 )
          goto LABEL_46;
        if ( v19->fields._size >= 1 )
        {
          v26 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
          System_Text_StringBuilder___ctor(v26, 0LL);
          size = v19->fields._size;
          if ( size >= 1 )
          {
            v28 = 0LL;
            do
            {
              if ( size <= (unsigned int)v28 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              v29 = (GiftEntity_o *)v19->fields._items->m_Items[v28];
              if ( !v29 || !MasterData_WarQuestSelectionMaster )
                goto LABEL_46;
              Instance = (DataManager_o *)GiftMaster__getDataById(
                                            MasterData_WarQuestSelectionMaster,
                                            v29->fields.id,
                                            0LL);
              v31 = (GiftEntity_o *)Instance;
              if ( (_DWORD)v28 )
              {
                if ( !v26 )
                  goto LABEL_46;
                Instance = (DataManager_o *)System_Text_StringBuilder__Append_42994048(
                                              v26,
                                              (System_String_o *)StringLiteral_26/*"\n"*/,
                                              0LL);
              }
              KindName = EventPointItemListViewManager__GetKindName(
                           (EventPointItemListViewManager_o *)Instance,
                           v29,
                           v30);
              GiftName = EventPointItemListViewManager__GetGiftName(
                           (EventPointItemListViewManager_o *)KindName,
                           v29,
                           v33);
              Instance = (DataManager_o *)System_String__Concat_44571728(
                                            KindName,
                                            (System_String_o *)StringLiteral_23988/*"「"*/,
                                            GiftName,
                                            (System_String_o *)StringLiteral_23989/*"」"*/,
                                            0LL);
              if ( !Instance )
                goto LABEL_46;
              Instance = (DataManager_o *)System_String__PadRight((System_String_o *)Instance, 15, 0x3000u, 0LL);
              if ( !v26 )
                goto LABEL_46;
              System_Text_StringBuilder__Append_42994048(v26, (System_String_o *)Instance, 0LL);
              appended = System_Text_StringBuilder__Append_42994048(v26, (System_String_o *)StringLiteral_23962/*"→　「"*/, 0LL);
              Instance = (DataManager_o *)EventPointItemListViewManager__GetGiftName(
                                            (EventPointItemListViewManager_o *)appended,
                                            v31,
                                            v36);
              if ( !v31 )
                goto LABEL_46;
              v37 = (System_String_o *)Instance;
              Instance = (DataManager_o *)System_Int32__ToString((int)v31 + 28, 0LL);
              if ( !Instance )
                goto LABEL_46;
              v38 = System_String__PadLeft((System_String_o *)Instance, 2, 0x20u, 0LL);
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v39 = LocalizationManager__Get((System_String_o *)StringLiteral_5697/*"EVENT_POINT_GIFT_ADD_COUNT"*/, 0LL);
              v40 = System_String__Concat_44571728(v37, v38, v39, (System_String_o *)StringLiteral_23989/*"」"*/, 0LL);
              Instance = (DataManager_o *)System_Text_StringBuilder__Append_42994048(v26, v40, 0LL);
              size = v19->fields._size;
            }
            while ( (int)++v28 < size );
          }
          eventPointReplaseRewardDialog = v48->fields.eventPointReplaseRewardDialog;
          v42 = System_Int32__ToString((int)v7 + 24, 0LL);
          v43 = System_String__Concat_44568316((System_String_o *)StringLiteral_5695/*"EVENT_POINT_GIFT_ADD"*/, v42, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          Instance = (DataManager_o *)LocalizationManager__Get(v43, 0LL);
          if ( !v26 )
            goto LABEL_46;
          v44 = (System_String_o *)Instance;
          v45 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v26->klass->vtable._3_ToString.method)(
                                     v26,
                                     v26->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v46 = (EventPointReplaseRewardDialog_ClickDelegate_o *)sub_B52A54(EventPointReplaseRewardDialog_ClickDelegate_TypeInfo);
          EventPointReplaseRewardDialog_ClickDelegate___ctor(
            v46,
            (Il2CppObject *)v7,
            Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__,
            0LL);
          if ( !eventPointReplaseRewardDialog )
            goto LABEL_46;
          EventPointReplaseRewardDialog__Open(eventPointReplaseRewardDialog, v44, v45, v46, -1, 0, 0, 0, 0, 0, 0LL);
        }
      }
    }
  }
}


void __fastcall EventPointItemListViewManager__RequestInto(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_EventPointItemListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_EventPointItemListViewObject__o *v6; // x20
  signed __int64 size; // x8
  unsigned __int64 v8; // x24
  int v9; // w23
  EventPointItemListViewObject_o *v10; // x21
  System_Action_o *v11; // x22

  if ( (byte_42B05BD & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventPointItemListViewManager_OnMoveEnd__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Item__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B05BD = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventPointItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_15:
    sub_B52A5C(ObjectList, v5);
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
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
    v10 = v6->fields._items->m_Items[v8];
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)v10, 0LL) )
    {
      v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !v10 )
        goto LABEL_15;
      ++v9;
      EventPointItemListViewObject__Init_25508344(v10, 4, v11, 0.1, 0LL);
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
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B05BB & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__);
    sub_B52984(&Method_EventPointItemListViewManager_OnMoveEnd__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B05BB = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventPointItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v14.fields.current;
      v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v12, v13);
      EventPointItemListViewObject__Init_25508344((EventPointItemListViewObject_o *)current, mode, v11, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__RequestListObject_25708172(
        EventPointItemListViewManager_o *this,
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
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42B05BC & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__);
    sub_B52984(&Method_EventPointItemListViewManager_OnMoveEnd__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__);
    sub_B52984(&StringLiteral_10100/*"OnMoveEnd"*/);
    byte_42B05BC = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventPointItemListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B52A5C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10100/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      ObjectList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v12.fields.current;
      v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B52A5C(v10, v11);
      EventPointItemListViewObject__Init_25508424((EventPointItemListViewObject_o *)current, mode, v9, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventPointItemListViewManager__SetMode_25707288(this, mode, v10);
}


void __fastcall EventPointItemListViewManager__SetMode_25707288(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42B05BA & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_11516/*"RequestInto"*/);
    byte_42B05BA = 1;
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
        sub_B52A5C(gameObject, v6);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11516/*"RequestInto"*/,
      0.0,
      0LL);
  }
}


void __fastcall EventPointItemListViewManager__SetMode_25707564(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v5,
    v6,
    v7,
    v8);
  EventPointItemListViewManager__SetMode_25707288(this, mode, v11);
}


void __fastcall EventPointItemListViewManager__SetMode_25707624(
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  EventPointItemListViewManager__SetMode_25707288(this, mode, v10);
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
  if ( (byte_42B05B9 & 1) == 0 )
  {
    this = (EventPointItemListViewManager_o *)sub_B52984(&EventPointItemListViewObject_TypeInfo);
    byte_42B05B9 = 1;
  }
  if ( !obj
    || (v6 = *(&EventPointItemListViewObject_TypeInfo->_2.bitflags2 + 1),
        *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
    || (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != EventPointItemListViewObject_TypeInfo )
  {
    sub_B52A5C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventPointItemListViewObject__Init_25506820((EventPointItemListViewObject_o *)obj, v7, 0LL);
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
    sub_B52A5C(this, entitys);
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

  if ( (byte_42B05AC & 1) == 0 )
  {
    sub_B52984(&EventPointItemListViewManager_CallbackFunc_TypeInfo);
    byte_42B05AC = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_B52D50(v7);
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

  if ( (byte_42B05AE & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B05AE = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_B52D50(v7);
  EventPointItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall EventPointItemListViewManager__closeItemDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42B05C0 & 1) == 0 )
  {
    sub_B52984(&Method_EventPointItemListViewManager_closeItemDetail__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B05C0 = 1;
  }
  v3 = Method_EventPointItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_EventPointItemListViewManager_closeItemDetail__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B5298C(Method_EventPointItemListViewManager_closeItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v6);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


void __fastcall EventPointItemListViewManager__closeSvtDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B05C1 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B05C1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__CloseServantStatusDialog(Instance, 0LL, 0LL);
}


System_Collections_Generic_List_EventPointItemListViewObject__o *__fastcall EventPointItemListViewManager__get_ClippingObjectList(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventPointItemListViewObject_o *Component_srcLineSprite; // x0
  __int64 v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_42B05B1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B05B1 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
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
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (EventPointItemListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B52A5C(0LL, v10);
      Item = (ListViewItem_o *)EventPointItemListViewObject__GetItem(Component_srcLineSprite, 0LL);
      if ( !Item )
        sub_B52A5C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_23551160((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B52A5C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B52A5C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v3;
}


System_Collections_Generic_List_EventPointItemListViewObject__o *__fastcall EventPointItemListViewManager__get_ObjectList(
        EventPointItemListViewManager_o *this,
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

  if ( (byte_42B05B0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B05B0 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B52A5C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
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
        sub_B52A5C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      if ( !v3 )
        sub_B52A5C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v3;
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

  if ( (byte_42B05AD & 1) == 0 )
  {
    sub_B52984(&EventPointItemListViewManager_CallbackFunc_TypeInfo);
    byte_42B05AD = 1;
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
    v8 = sub_B4739C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_B52D50(v7);
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

  if ( (byte_42B05AF & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42B05AF = 1;
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
    v8 = sub_B4739C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_B52D50(v7);
  EventPointItemListViewManager__get_ObjectList(v10, v11);
}


void __fastcall EventPointItemListViewManager__setNextRewardInfo(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  int size; // w21
  int32_t v5; // w20
  ListViewItem_o *v6; // x8
  __int64 v7; // x11

  v2 = (ListViewManager_o *)this;
  if ( (byte_42B05B7 & 1) == 0 )
  {
    sub_B52984(&EventPointItemListViewItem_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (EventPointItemListViewManager_o *)sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_42B05B7 = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    do
    {
      if ( itemList->fields._size <= (unsigned int)v5 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v6 = itemList->fields._items->m_Items[v5];
      if ( !v6 )
        break;
      v7 = *(&EventPointItemListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v6->klass->_2.bitflags2 + 1) < (unsigned int)v7
        || (EventPointItemListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] != EventPointItemListViewItem_TypeInfo )
      {
        break;
      }
      if ( (EventPointItemListViewItem_c *)v6->klass->_2.typeHierarchy[*(&EventPointItemListViewItem_TypeInfo->_2.bitflags2
                                                                       + 1)
                                                                     - 1] != EventPointItemListViewItem_TypeInfo )
        v6 = 0LL;
      if ( !LOBYTE(v6[1].fields.sortValue2B) )
        goto LABEL_18;
      if ( ++v5 >= size )
        goto LABEL_17;
      itemList = v2->fields.itemList;
    }
    while ( itemList );
LABEL_16:
    sub_B52A5C(this, method);
  }
LABEL_17:
  v5 = 0;
LABEL_18:
  ListViewManager__SetTopItem(v2, v5, 0LL);
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall EventPointItemListViewManager_CallbackFunc__BeginInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B52928(this, &v5, callback, object);
}


void __fastcall EventPointItemListViewManager_CallbackFunc__EndInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B529B4(v21) & 1) == 0 )
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
      v23 = sub_B529AC(v21);
      v24 = sub_B52DB0(v21);
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
            v17 = sub_AEB880(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B52A34(v16, v21);
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
            v15 = sub_AEB880(v20, class_0, v9, v11);
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
    sub_B52A5C(0LL, isOk);
  EventPointItemListViewManager__CloseReplaseRewardDialog(_4__this, this->fields.eventId, 0LL);
}