void EventPointItemListViewManager___ctor(EventPointItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void EventPointItemListViewManager__CloseCommandCodeDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596A7E5 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A7E5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventPointItemListViewManager__CloseReplaseRewardDialog(
        EventPointItemListViewManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventPointReplaseRewardDialog_o *eventPointReplaseRewardDialog; // x0
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = eventId;
  if ( (byte_596A7D7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_5880/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/);
    byte_596A7D7 = 1;
  }
  eventPointReplaseRewardDialog = this->fields.eventPointReplaseRewardDialog;
  if ( !eventPointReplaseRewardDialog )
    sub_2213CDC(0, *(_QWORD *)&eventId);
  EventPointReplaseRewardDialog__Close(eventPointReplaseRewardDialog, 0);
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  v6 = System_String__Concat_75651716((System_String_o *)StringLiteral_5880/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v5, 0);
  UnityEngine_PlayerPrefs__SetInt(v6, 1, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void EventPointItemListViewManager__CreateList(
        EventPointItemListViewManager_o *this,
        EventRewardEntity_array *rewardList,
        int64_t currentPoint,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x22
  il2cpp_array_size_t max_length; // x27
  __int64 v11; // x28
  EventRewardEntity_o *v12; // x24
  bool v13; // w25
  GiftEntity_o *DataById; // x26
  EventPointItemListViewItem_o *v15; // x23
  const MethodInfo *v16; // x4
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v24; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v26; // x8

  if ( (byte_596A7D5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_2213A60(&EventPointItemListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A7D5 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( rewardList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    max_length = rewardList->max_length;
    if ( (int)max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= LODWORD(rewardList->max_length) )
          sub_2213CE4(Instance);
        v12 = rewardList->m_Items[v11];
        if ( !v12 )
          break;
        if ( !MasterData_object )
          break;
        v13 = v12->fields.point <= currentPoint;
        DataById = GiftMaster__getDataById((GiftMaster_o *)MasterData_object, v12->fields.giftId, 0);
        v15 = (EventPointItemListViewItem_o *)sub_2213CCC(EventPointItemListViewItem_TypeInfo);
        EventPointItemListViewItem___ctor(v15, v12, DataById, v13, v16);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        m_CachedPtr = Instance->fields.m_CachedPtr;
        v24 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v15,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v26 + 32) = v15;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 32), (int32_t)v15, v17, v18, v19, v20, v21, v22);
        }
        if ( (_DWORD)max_length == (_DWORD)++v11 )
          goto LABEL_17;
      }
LABEL_19:
      sub_2213CDC(Instance, v8);
    }
LABEL_17:
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  }
}


void EventPointItemListViewManager__DestroyList(EventPointItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


System_String_o *EventPointItemListViewManager__GetGiftName(
        EventPointItemListViewManager_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  int32_t type; // w8
  __int64 v5; // x1
  __int64 v6; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19

  if ( (byte_596A7D9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (EventPointItemListViewManager_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A7D9 = 1;
  }
  if ( !gift )
    goto LABEL_22;
  type = gift->fields.type;
  if ( type == 11 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( this )
          return CommandCodeEntity__GetName((CommandCodeEntity_o *)this, 0);
      }
    }
    goto LABEL_22;
  }
  if ( type == 2 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this )
          return (System_String_o *)this->fields.m_CancellationTokenSource;
      }
    }
    goto LABEL_22;
  }
  if ( type != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (this = (EventPointItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_22:
    sub_2213CDC(this, gift);
  }
  Name = ServantEntity__GetName((ServantEntity_o *)this, -1, 0, -1, 0, 0);
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v5, v6);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(Name, 0);
}


EventPointItemListViewItem_o *EventPointItemListViewManager__GetItem(
        EventPointItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventPointItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596A7DB & 1) == 0 )
  {
    sub_2213A60(&EventPointItemListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596A7DB = 1;
  }
  result = (EventPointItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventPointItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = EventPointItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (EventPointItemListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != EventPointItemListViewItem_TypeInfo )
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


System_String_o *EventPointItemListViewManager__GetKindName(
        EventPointItemListViewManager_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  if ( (byte_596A7D8 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_5873/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/);
    this = (EventPointItemListViewManager_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_596A7D8 = 1;
  }
  if ( !gift )
    sub_2213CDC(this, gift);
  if ( gift->fields.type != 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, gift, method);
  return LocalizationManager__Get((System_String_o *)StringLiteral_5873/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/, 0);
}


void EventPointItemListViewManager__OnClickListView(
        EventPointItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CommonUI_o *Item; // x0
  const MethodInfo *v8; // x1
  __int64 naturalAligment; // x10
  struct UnityEngine_Transform_o *baseMount; // x8
  CommonUI_o *v11; // x20
  int m_CachedPtr; // w8
  struct UnityEngine_Transform_o *baseMountSystemUI; // x8
  int32_t m_CachedPtr_high; // w0
  Il2CppObject *v15; // x21
  ItemEntity_o *maskFade; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v17; // x22
  Il2CppObject *Instance; // x22
  System_String_o *warningDialog; // x21
  System_String_o *dataUpdateDialog; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v21; // x23
  CommonUI_o *v22; // x0
  System_String_o *v23; // x1
  System_String_o *v24; // x2
  __int64 v25; // x2
  struct UnityEngine_Camera_o *bgCamera; // x8
  CommonUI_o *v27; // x20
  intptr_t v28; // x21
  __int64 v29; // x22
  int32_t v30; // w21
  ServantStatusDialog_EndDelegate_o *v31; // x22
  struct UnityEngine_Transform_o *v32; // x8
  int v33; // w8
  Il2CppObject *v34; // x21
  CommandCodeEntity_o *eventMaskFade; // x20
  ServantStatusDialog_EndDelegate_o *v36; // x22
  struct UnityEngine_GameObject_o *skipAnimation; // x8
  CommonUI_o *v38; // x21
  System_String_o *v39; // x20
  System_String_o *v40; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_596A7E2 & 1) == 0 )
  {
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_2213A60(&Method_EventPointItemListViewManager_CloseCommandCodeDetail__);
    sub_2213A60(&Method_EventPointItemListViewManager_OnClickListView__);
    sub_2213A60(&Method_EventPointItemListViewManager_closeItemDetail__);
    sub_2213A60(&Method_EventPointItemListViewManager_closeSvtDetail__);
    sub_2213A60(&EventPointItemListViewObject_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A7E2 = 1;
  }
  v5 = Method_EventPointItemListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventPointItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_EventPointItemListViewManager_OnClickListView__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  if ( !obj )
    goto LABEL_36;
  naturalAligment = EventPointItemListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_36;
  if ( (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventPointItemListViewObject_TypeInfo )
    goto LABEL_36;
  Item = (CommonUI_o *)EventPointItemListViewObject__GetItem((EventPointItemListViewObject_o *)obj, v8);
  if ( !Item )
    goto LABEL_36;
  baseMount = Item->fields.baseMount;
  v11 = Item;
  if ( !baseMount )
    goto LABEL_36;
  m_CachedPtr = baseMount[1].fields.m_CachedPtr;
  if ( m_CachedPtr != 1 )
  {
    if ( (m_CachedPtr & 0xFFFFFFFE) != 2 )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    warningDialog = (System_String_o *)v11->fields.warningDialog;
    dataUpdateDialog = (System_String_o *)v11->fields.dataUpdateDialog;
    v21 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0);
    if ( !Instance )
      goto LABEL_36;
    v22 = (CommonUI_o *)Instance;
    v23 = warningDialog;
    v24 = dataUpdateDialog;
    goto LABEL_18;
  }
  baseMountSystemUI = Item->fields.baseMountSystemUI;
  if ( baseMountSystemUI )
  {
    m_CachedPtr_high = HIDWORD(baseMountSystemUI->fields.m_CachedPtr);
    if ( m_CachedPtr_high == 2 )
    {
      v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      maskFade = (ItemEntity_o *)v11->fields.maskFade;
      v17 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
        0);
      if ( v15 )
      {
        CommonUI__OpenItemDetailDialog((CommonUI_o *)v15, maskFade, v17, 50, 0);
        return;
      }
LABEL_36:
      sub_2213CDC(Item, v8);
    }
  }
  else
  {
    m_CachedPtr_high = 0;
  }
  if ( !Gift__IsServant(m_CachedPtr_high, 0) )
  {
    v32 = v11->fields.baseMountSystemUI;
    if ( !v32 )
      return;
    v33 = HIDWORD(v32->fields.m_CachedPtr);
    if ( v33 != 12 )
    {
      if ( v33 == 11 )
      {
        v34 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        eventMaskFade = (CommandCodeEntity_o *)v11->fields.eventMaskFade;
        v36 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v36,
          (Il2CppObject *)this,
          Method_EventPointItemListViewManager_CloseCommandCodeDetail__,
          0);
        if ( !v34 )
          goto LABEL_36;
        CommonUI__OpenServantEquipStatusDialog_37389176((CommonUI_o *)v34, 25, eventMaskFade, 0, v36, 0, 0);
      }
      return;
    }
    if ( !v11->fields.skipAnimation )
      return;
    Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    skipAnimation = v11->fields.skipAnimation;
    if ( !skipAnimation )
      goto LABEL_36;
    v38 = Item;
    v39 = (System_String_o *)v11->fields.warningDialog;
    v40 = (System_String_o *)skipAnimation[1].fields.m_CachedPtr;
    v21 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0);
    if ( !v38 )
      goto LABEL_36;
    v22 = v38;
    v23 = v39;
    v24 = v40;
LABEL_18:
    CommonUI__OpenItemDetailDialog_37450192(v22, v23, v24, v21, 0);
    return;
  }
  Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  bgCamera = v11->fields.bgCamera;
  if ( !bgCamera )
    goto LABEL_36;
  v27 = Item;
  v28 = bgCamera->fields.m_CachedPtr;
  v29 = *(_QWORD *)&bgCamera->fields.m_NonSerializedVersion;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v25);
  *(_QWORD *)&v41.fields.currentCryptoKey = v28;
  *(_QWORD *)&v41.fields.fakeValue = v29;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v41, 0);
  v31 = (ServantStatusDialog_EndDelegate_o *)sub_2213CCC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v31,
    (Il2CppObject *)this,
    Method_EventPointItemListViewManager_closeSvtDetail__,
    0);
  if ( !v27 )
    goto LABEL_36;
  CommonUI__OpenServantStatusDialog_37386528(v27, 7, v30, v31, 0);
}


void EventPointItemListViewManager__OnMoveEnd(EventPointItemListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_596A7E1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A7E1 = 1;
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


void EventPointItemListViewManager__OpenReplaseRewardDialog(
        EventPointItemListViewManager_o *this,
        EventRewardEntity_array *eventRewardEntList,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v7; // x20
  void *Instance; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v19; // x24
  __int64 v20; // x1
  __int64 v21; // x2
  int max_length; // w8
  GiftEntity_array *v23; // x25
  __int64 v24; // x26
  EventRewardEntity_o *v25; // x29
  const MethodInfo *v26; // x3
  int32_t giftId; // w2
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass *v37; // x1
  Il2CppClass **v38; // x0
  System_Text_StringBuilder_o *v39; // x23
  int32_t v40; // w25
  GiftEntity_o *v41; // x27
  const MethodInfo *v42; // x2
  GiftEntity_o *v43; // x26
  EventPointItemListViewManager_o *KindName; // x28
  const MethodInfo *v45; // x2
  System_String_o *GiftName; // x0
  EventPointItemListViewManager_o *appended; // x0
  const MethodInfo *v48; // x2
  System_String_o *v49; // x27
  __int64 v50; // x1
  __int64 v51; // x2
  System_String_o *v52; // x26
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  EventPointReplaseRewardDialog_o *eventPointReplaseRewardDialog; // x19
  System_String_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  System_String_o *v59; // x21
  System_String_o *v60; // x21
  System_String_o *v61; // x22
  EventPointReplaseRewardDialog_ClickDelegate_o *v62; // x23

  if ( (byte_596A7D6 & 1) == 0 )
  {
    sub_2213A60(&EventPointReplaseRewardDialog_ClickDelegate_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_GiftMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GiftMaster__GiftEntity__string__getEntitys__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&System_Text_StringBuilder_TypeInfo);
    sub_2213A60(&Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__);
    sub_2213A60(&EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_5880/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/);
    sub_2213A60(&StringLiteral_26747/*"→　「"*/);
    sub_2213A60(&StringLiteral_5872/*"EVENT_POINT_GIFT_ADD"*/);
    sub_2213A60(&StringLiteral_5874/*"EVENT_POINT_GIFT_ADD_COUNT"*/);
    sub_2213A60(&StringLiteral_26777/*"」"*/);
    sub_2213A60(&StringLiteral_26776/*"「"*/);
    byte_596A7D6 = 1;
  }
  v7 = sub_2213CCC(EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_47;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = eventId;
  if ( eventRewardEntList )
  {
    if ( eventRewardEntList->max_length )
    {
      v16 = System_Int32__ToString((int)v7 + 24, 0);
      v17 = System_String__Concat_75651716((System_String_o *)StringLiteral_5880/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v16, 0);
      if ( !UnityEngine_PlayerPrefs__GetInt(v17, 0, 0) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_47;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_47;
        DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventPointMaster___);
        v19 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v19,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20, v21);
        Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GiftMaster___);
        if ( !Instance )
          goto LABEL_47;
        Instance = DataMasterBase_object__object__object___getEntitys(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     (const MethodInfo_3F14B68 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__getEntitys__);
        max_length = eventRewardEntList->max_length;
        if ( max_length >= 1 )
        {
          v23 = (GiftEntity_array *)Instance;
          v24 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v24 >= max_length )
              sub_2213CE4(Instance);
            v25 = eventRewardEntList->m_Items[v24];
            if ( !v25 )
              break;
            if ( !MasterData_object )
              break;
            Instance = GiftMaster__getDataById((GiftMaster_o *)MasterData_object, v25->fields.giftId, 0);
            if ( !Instance )
              break;
            giftId = v25->fields.giftId;
            if ( *((_DWORD *)Instance + 4) != giftId )
            {
              Instance = EventPointItemListViewManager__TargetItemTargetGiftEntity(
                           (EventPointItemListViewManager_o *)Instance,
                           v23,
                           giftId,
                           v26);
              if ( !v19 )
                break;
              items = v19->fields._items;
              v35 = Method_System_Collections_Generic_List_GiftEntity__Add__;
              ++v19->fields._version;
              if ( !items )
                break;
              size = v19->fields._size;
              v37 = (Il2CppClass *)Instance;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v19,
                  (Il2CppObject *)Instance,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
              }
              else
              {
                v38 = &items->obj.klass + size;
                v19->fields._size = size + 1;
                v38[4] = v37;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v37, v28, v29, v30, v31, v32, v33);
              }
            }
            max_length = eventRewardEntList->max_length;
            if ( (int)++v24 >= max_length )
              goto LABEL_25;
          }
LABEL_47:
          sub_2213CDC(Instance, v9);
        }
LABEL_25:
        if ( !v19 )
          goto LABEL_47;
        if ( v19->fields._size >= 1 )
        {
          v39 = (System_Text_StringBuilder_o *)sub_2213CCC(System_Text_StringBuilder_TypeInfo);
          System_Text_StringBuilder___ctor(v39, 0);
          if ( v19->fields._size >= 1 )
          {
            v40 = 0;
            do
            {
              Instance = System_Collections_Generic_List_object___get_Item(
                           v19,
                           v40,
                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
              if ( !Instance || !MasterData_object )
                goto LABEL_47;
              v41 = (GiftEntity_o *)Instance;
              Instance = GiftMaster__getDataById((GiftMaster_o *)MasterData_object, *((_DWORD *)Instance + 4), 0);
              v43 = (GiftEntity_o *)Instance;
              if ( v40 )
              {
                if ( !v39 )
                  goto LABEL_47;
                Instance = System_Text_StringBuilder__Append_75735064(v39, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
              }
              KindName = (EventPointItemListViewManager_o *)EventPointItemListViewManager__GetKindName(
                                                              (EventPointItemListViewManager_o *)Instance,
                                                              v41,
                                                              v42);
              GiftName = EventPointItemListViewManager__GetGiftName(KindName, v41, v45);
              Instance = System_String__Concat_75696856(
                           (System_String_o *)KindName,
                           (System_String_o *)StringLiteral_26776/*"「"*/,
                           GiftName,
                           (System_String_o *)StringLiteral_26777/*"」"*/,
                           0);
              if ( !Instance )
                goto LABEL_47;
              Instance = System_String__PadRight_75701720((System_String_o *)Instance, 15, 0x3000u, 0);
              if ( !v39 )
                goto LABEL_47;
              System_Text_StringBuilder__Append_75735064(v39, (System_String_o *)Instance, 0);
              appended = (EventPointItemListViewManager_o *)System_Text_StringBuilder__Append_75735064(
                                                              v39,
                                                              (System_String_o *)StringLiteral_26747/*"→　「"*/,
                                                              0);
              Instance = EventPointItemListViewManager__GetGiftName(appended, v43, v48);
              if ( !v43 )
                goto LABEL_47;
              v49 = (System_String_o *)Instance;
              Instance = System_Int32__ToString((int)v43 + 28, 0);
              if ( !Instance )
                goto LABEL_47;
              v52 = System_String__PadLeft((System_String_o *)Instance, 2, 0x20u, 0);
              if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v50, v51);
              v53 = LocalizationManager__Get((System_String_o *)StringLiteral_5874/*"EVENT_POINT_GIFT_ADD_COUNT"*/, 0);
              v54 = System_String__Concat_75696856(v49, v52, v53, (System_String_o *)StringLiteral_26777/*"」"*/, 0);
              System_Text_StringBuilder__Append_75735064(v39, v54, 0);
            }
            while ( ++v40 < v19->fields._size );
          }
          eventPointReplaseRewardDialog = this->fields.eventPointReplaseRewardDialog;
          v56 = System_Int32__ToString((int)v7 + 24, 0);
          v59 = System_String__Concat_75651716((System_String_o *)StringLiteral_5872/*"EVENT_POINT_GIFT_ADD"*/, v56, 0);
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57, v58);
          Instance = LocalizationManager__Get(v59, 0);
          if ( !v39 )
            goto LABEL_47;
          v60 = (System_String_o *)Instance;
          v61 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v39->klass->vtable._3_ToString.methodPtr)(
                                     v39,
                                     v39->klass->vtable._3_ToString.method);
          v62 = (EventPointReplaseRewardDialog_ClickDelegate_o *)sub_2213CCC(EventPointReplaseRewardDialog_ClickDelegate_TypeInfo);
          EventPointReplaseRewardDialog_ClickDelegate___ctor(
            v62,
            (Il2CppObject *)v7,
            Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__,
            0);
          if ( !eventPointReplaseRewardDialog )
            goto LABEL_47;
          EventPointReplaseRewardDialog__Open(eventPointReplaseRewardDialog, v60, v61, v62, -1, 0, 0, 0, 0, 0, 0);
        }
      }
    }
  }
}


void EventPointItemListViewManager__RequestInto(EventPointItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_EventPointItemListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v7; // x20
  int v8; // w24
  int32_t v9; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v11; // x23
  const MethodInfo *v12; // x3
  System_String_o *v13; // x1

  if ( (byte_596A7E0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_EventPointItemListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Item__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596A7E0 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList = EventPointItemListViewManager__get_ObjectList(this, v3);
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
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      EventPointItemListViewObject__Init_38386172((EventPointItemListViewObject_o *)Item, 4, v11, 0.1, v12);
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
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v13, 0.6, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventPointItemListViewManager__RequestListObject(
        EventPointItemListViewManager_o *this,
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

  if ( (byte_596A7DE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__);
    sub_2213A60(&Method_EventPointItemListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596A7DE = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)EventPointItemListViewManager__get_ObjectList(
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
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      EventPointItemListViewObject__Init_38386172((EventPointItemListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventPointItemListViewManager__RequestListObject_38386272(
        EventPointItemListViewManager_o *this,
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

  if ( (byte_596A7DF & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__);
    sub_2213A60(&Method_EventPointItemListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596A7DF = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)EventPointItemListViewManager__get_ObjectList(
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
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      EventPointItemListViewObject__Init_38386764((EventPointItemListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
  }
}


void EventPointItemListViewManager__SetMode(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        EventPointItemListViewManager_CallbackFunc_o *callback,
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
  EventPointItemListViewManager__SetMode_38385300(this, mode, v10);
}


void EventPointItemListViewManager__SetMode_38385300(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_596A7DD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_11840/*"RequestInto"*/);
    byte_596A7DD = 1;
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


void EventPointItemListViewManager__SetMode_38385552(
        EventPointItemListViewManager_o *this,
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
  EventPointItemListViewManager__SetMode_38385300(this, mode, v11);
}


void EventPointItemListViewManager__SetMode_38385608(
        EventPointItemListViewManager_o *this,
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
  EventPointItemListViewManager__SetMode_38385300(this, mode, v10);
}


void EventPointItemListViewManager__SetObjectItem(
        EventPointItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_596A7DC & 1) == 0 )
  {
    sub_2213A60(&EventPointItemListViewObject_TypeInfo);
    byte_596A7DC = 1;
  }
  if ( obj
    && (naturalAligment = EventPointItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == EventPointItemListViewObject_TypeInfo )
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
  EventPointItemListViewObject__Init_38385172((EventPointItemListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


GiftEntity_o *EventPointItemListViewManager__TargetItemTargetGiftEntity(
        EventPointItemListViewManager_o *this,
        GiftEntity_array *entitys,
        int32_t giftId,
        const MethodInfo *method)
{
  int max_length; // w8
  GiftEntity_o **i; // x9

  if ( !entitys )
    goto LABEL_9;
  max_length = entitys->max_length;
  if ( max_length >= 1 )
  {
    for ( i = entitys->m_Items; ; ++i )
    {
      this = (EventPointItemListViewManager_o *)*i;
      if ( !*i )
        break;
      if ( LODWORD(this->fields.m_CachedPtr) == giftId )
        return (GiftEntity_o *)this;
      if ( !--max_length )
        return 0;
    }
LABEL_9:
    sub_2213CDC(this, entitys);
  }
  return 0;
}


void EventPointItemListViewManager__add_callbackFunc(
        EventPointItemListViewManager_o *this,
        EventPointItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EventPointItemListViewManager_o *v11; // x0
  EventPointItemListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596A7CF & 1) == 0 )
  {
    sub_2213A60(&EventPointItemListViewManager_CallbackFunc_TypeInfo);
    byte_596A7CF = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (EventPointItemListViewManager_CallbackFunc_c *)v6->klass != EventPointItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventPointItemListViewManager_o *)sub_221405C(v6, EventPointItemListViewManager_CallbackFunc_TypeInfo, v7, v8);
  EventPointItemListViewManager__remove_callbackFunc(v11, v12, v13);
}


void EventPointItemListViewManager__add_callbackFunc2(
        EventPointItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EventPointItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596A7D1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A7D1 = 1;
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
  v11 = (EventPointItemListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  EventPointItemListViewManager__remove_callbackFunc2(v11, v12, v13);
}


void EventPointItemListViewManager__closeItemDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_596A7E3 & 1) == 0 )
  {
    sub_2213A60(&Method_EventPointItemListViewManager_closeItemDetail__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A7E3 = 1;
  }
  v3 = Method_EventPointItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_EventPointItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_EventPointItemListViewManager_closeItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void EventPointItemListViewManager__closeSvtDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596A7E4 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596A7E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


System_Collections_Generic_List_EventPointItemListViewObject__o *EventPointItemListViewManager__get_ClippingObjectList(
        EventPointItemListViewManager_o *this,
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

  if ( (byte_596A7D4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A7D4 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
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
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)EventPointItemListViewObject__GetItem(
                                 (EventPointItemListViewObject_o *)Component_object,
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
                v24 = Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__,
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
              v24 = Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__,
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
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v3;
}


System_Collections_Generic_List_EventPointItemListViewObject__o *EventPointItemListViewManager__get_ObjectList(
        EventPointItemListViewManager_o *this,
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

  if ( (byte_596A7D3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A7D3 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
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
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__,
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
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v3;
}


void EventPointItemListViewManager__remove_callbackFunc(
        EventPointItemListViewManager_o *this,
        EventPointItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EventPointItemListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596A7D0 & 1) == 0 )
  {
    sub_2213A60(&EventPointItemListViewManager_CallbackFunc_TypeInfo);
    byte_596A7D0 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (EventPointItemListViewManager_CallbackFunc_c *)v6->klass != EventPointItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (EventPointItemListViewManager_o *)sub_221405C(v6, EventPointItemListViewManager_CallbackFunc_TypeInfo, v7, v8);
  EventPointItemListViewManager__add_callbackFunc2(v11, v12, v13);
}


void EventPointItemListViewManager__remove_callbackFunc2(
        EventPointItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  EventPointItemListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596A7D2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_596A7D2 = 1;
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
  v11 = (EventPointItemListViewManager_o *)sub_221405C(v6, System_Action_TypeInfo, v7, v8);
  EventPointItemListViewManager__get_ObjectList(v11, v12);
}


void EventPointItemListViewManager__setNextRewardInfo(EventPointItemListViewManager_o *this, const MethodInfo *method)
{
  EventPointItemListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  int size; // w21
  int32_t v5; // w20
  __int64 naturalAligment; // x10

  v2 = this;
  if ( (byte_596A7DA & 1) == 0 )
  {
    sub_2213A60(&EventPointItemListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (EventPointItemListViewManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_596A7DA = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    goto LABEL_14;
  size = itemList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      this = (EventPointItemListViewManager_o *)v2->fields.itemList;
      if ( !this )
        break;
      this = (EventPointItemListViewManager_o *)System_Collections_Generic_List_object___get_Item(
                                                  (System_Collections_Generic_List_object__o *)this,
                                                  v5,
                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !this )
        break;
      naturalAligment = EventPointItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( this->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (EventPointItemListViewItem_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] != EventPointItemListViewItem_TypeInfo )
      {
        break;
      }
      if ( !LOBYTE(this->fields.itemSortList) )
        goto LABEL_13;
      if ( size == ++v5 )
        goto LABEL_12;
    }
LABEL_14:
    sub_2213CDC(this, method);
  }
LABEL_12:
  v5 = 0;
LABEL_13:
  ListViewManager__SetTopItem((ListViewManager_o *)v2, v5, 0);
}


void EventPointItemListViewManager_CallbackFunc___ctor(
        EventPointItemListViewManager_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1FFFAEC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FFFAAC;
}


System_IAsyncResult_o *EventPointItemListViewManager_CallbackFunc__BeginInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_2213A14(this, &v5, callback, object);
}


void EventPointItemListViewManager_CallbackFunc__EndInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void EventPointItemListViewManager_CallbackFunc__Invoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void EventPointItemListViewManager___c__DisplayClass20_0___ctor(
        EventPointItemListViewManager___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void EventPointItemListViewManager___c__DisplayClass20_0___OpenReplaseRewardDialog_b__0(
        EventPointItemListViewManager___c__DisplayClass20_0_o *this,
        bool isOk,
        const MethodInfo *method)
{
  if ( !this->fields.__4__this )
    sub_2213CDC(this, isOk);
  EventPointItemListViewManager__CloseReplaseRewardDialog(this->fields.__4__this, this->fields.eventId, method);
}