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

  if ( (byte_4C21826 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21826 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
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
  if ( (byte_4C21818 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5640/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/);
    byte_4C21818 = 1;
  }
  eventPointReplaseRewardDialog = this->fields.eventPointReplaseRewardDialog;
  if ( !eventPointReplaseRewardDialog )
    sub_1C2D6EC(0, *(_QWORD *)&eventId);
  EventPointReplaseRewardDialog__Close(eventPointReplaseRewardDialog, 0);
  v5 = System_Int32__ToString((int32_t)&v7, 0);
  v6 = System_String__Concat_63457864((System_String_o *)StringLiteral_5640/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v5, 0);
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
  il2cpp_array_size_t max_length; // x8
  int v11; // w27
  int v12; // w28
  EventRewardEntity_o *v13; // x24
  bool v14; // w25
  GiftEntity_o *DataById; // x26
  EventPointItemListViewItem_o *v16; // x23
  const MethodInfo *v17; // x4
  intptr_t m_CachedPtr; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v21; // x8
  __int64 v22; // x2
  __int64 v23; // x3

  if ( (byte_4C21816 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C2D490(&EventPointItemListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21816 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( rewardList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    max_length = rewardList->max_length;
    v11 = max_length - 1;
    if ( (int)max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = rewardList->m_Items[v12];
        if ( !v13 )
          break;
        if ( !MasterData_object )
          break;
        v14 = v13->fields.point <= currentPoint;
        DataById = GiftMaster__getDataById((GiftMaster_o *)MasterData_object, v13->fields.giftId, 0);
        v16 = (EventPointItemListViewItem_o *)sub_1C2D6DC(EventPointItemListViewItem_TypeInfo);
        EventPointItemListViewItem___ctor(v16, v13, DataById, v14, v17);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        m_CachedPtr = Instance->fields.m_CachedPtr;
        v19 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v16,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v21 + 32) = v16;
          Instance = (DataManager_o *)sub_1C2D434(v21 + 32);
        }
        if ( v11 == v12 )
          goto LABEL_18;
        if ( (unsigned int)++v12 >= LODWORD(rewardList->max_length) )
          sub_1C2D6F4(Instance, v8, v22, v23);
      }
LABEL_20:
      sub_1C2D6EC(Instance, v8);
    }
LABEL_18:
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19

  if ( (byte_4C2181A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (EventPointItemListViewManager_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2181A = 1;
  }
  if ( !gift )
    goto LABEL_22;
  type = gift->fields.type;
  if ( type == 11 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_3387D98 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( this )
          return CommandCodeEntity__GetName((CommandCodeEntity_o *)this, 0);
      }
    }
    goto LABEL_22;
  }
  if ( type == 2 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this )
          return (System_String_o *)this->fields.m_CancellationTokenSource;
      }
    }
    goto LABEL_22;
  }
  if ( type != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0
    || (this = (EventPointItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_22:
    sub_1C2D6EC(this, gift);
  }
  Name = ServantEntity__GetName((ServantEntity_o *)this, -1, 0, -1, 0, 0);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_48863712(Name, 0);
}


EventPointItemListViewItem_o *EventPointItemListViewManager__GetItem(
        EventPointItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventPointItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C2181C & 1) == 0 )
  {
    sub_1C2D490(&EventPointItemListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C2181C = 1;
  }
  result = (EventPointItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventPointItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  if ( (byte_4C21819 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_5633/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/);
    this = (EventPointItemListViewManager_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C21819 = 1;
  }
  if ( !gift )
    sub_1C2D6EC(this, gift);
  if ( gift->fields.type != 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_5633/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/, 0);
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
  struct SoundInfo_o *soundInfo; // x8
  CommonUI_o *v11; // x20
  int klass; // w8
  struct FadeInfo_o *fadeInfo; // x8
  int32_t m_CachedPtr_high; // w0
  Il2CppObject *v15; // x0
  ItemEntity_o *baseMountSystemUI; // x20
  CommonUI_o *v17; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v18; // x22
  Il2CppObject *Instance; // x0
  System_String_o *skipAnimation; // x21
  System_String_o *dummyErrorSelectDialog; // x20
  Il2CppObject *v22; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v23; // x23
  CommonUI_o *v24; // x0
  System_String_o *v25; // x1
  System_String_o *v26; // x2
  struct UnityEngine_Transform_o *baseMount; // x8
  CommonUI_o *v28; // x20
  UnityEngine_Transform_c *v29; // x21
  intptr_t m_CachedPtr; // x22
  int32_t v31; // w21
  ServantStatusDialog_EndDelegate_o *v32; // x22
  struct FadeInfo_o *v33; // x8
  int v34; // w8
  Il2CppObject *v35; // x0
  CommandCodeEntity_o *bgCamera; // x20
  CommonUI_o *v37; // x21
  ServantStatusDialog_EndDelegate_o *v38; // x22
  struct MaskFade_o *maskFade; // x8
  System_String_o *colliderBase; // x22
  System_String_o *v41; // x20
  CommonUI_o *v42; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4C21823 & 1) == 0 )
  {
    sub_1C2D490(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C2D490(&Method_EventPointItemListViewManager_CloseCommandCodeDetail__);
    sub_1C2D490(&Method_EventPointItemListViewManager_OnClickListView__);
    sub_1C2D490(&Method_EventPointItemListViewManager_closeItemDetail__);
    sub_1C2D490(&Method_EventPointItemListViewManager_closeSvtDetail__);
    sub_1C2D490(&EventPointItemListViewObject_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21823 = 1;
  }
  v5 = Method_EventPointItemListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventPointItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C2D4A8(Method_EventPointItemListViewManager_OnClickListView__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
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
  soundInfo = Item->fields.soundInfo;
  v11 = Item;
  if ( !soundInfo )
    goto LABEL_36;
  klass = (int)soundInfo[1].klass;
  if ( klass != 1 )
  {
    if ( (klass & 0xFFFFFFFE) != 2 )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    skipAnimation = (System_String_o *)v11->fields.skipAnimation;
    dummyErrorSelectDialog = (System_String_o *)v11->fields.dummyErrorSelectDialog;
    v22 = Instance;
    v23 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C2D6DC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0);
    if ( !v22 )
      goto LABEL_36;
    v24 = (CommonUI_o *)v22;
    v25 = skipAnimation;
    v26 = dummyErrorSelectDialog;
    goto LABEL_18;
  }
  fadeInfo = Item->fields.fadeInfo;
  if ( fadeInfo )
  {
    m_CachedPtr_high = HIDWORD(fadeInfo->fields.m_CachedPtr);
    if ( m_CachedPtr_high == 2 )
    {
      v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      baseMountSystemUI = (ItemEntity_o *)v11->fields.baseMountSystemUI;
      v17 = (CommonUI_o *)v15;
      v18 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C2D6DC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
        0);
      if ( v17 )
      {
        CommonUI__OpenItemDetailDialog(v17, baseMountSystemUI, v18, 50, 0);
        return;
      }
LABEL_36:
      sub_1C2D6EC(Item, v8);
    }
  }
  else
  {
    m_CachedPtr_high = 0;
  }
  if ( !Gift__IsServant(m_CachedPtr_high, 0) )
  {
    v33 = v11->fields.fadeInfo;
    if ( !v33 )
      return;
    v34 = HIDWORD(v33->fields.m_CachedPtr);
    if ( v34 != 12 )
    {
      if ( v34 == 11 )
      {
        v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        bgCamera = (CommandCodeEntity_o *)v11->fields.bgCamera;
        v37 = (CommonUI_o *)v35;
        v38 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v38,
          (Il2CppObject *)this,
          Method_EventPointItemListViewManager_CloseCommandCodeDetail__,
          0);
        if ( !v37 )
          goto LABEL_36;
        CommonUI__OpenServantEquipStatusDialog_31184128(v37, 25, bgCamera, 0, v38, 0, 0);
      }
      return;
    }
    if ( !v11->fields.maskFade )
      return;
    Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    maskFade = v11->fields.maskFade;
    if ( !maskFade )
      goto LABEL_36;
    colliderBase = (System_String_o *)maskFade->fields.colliderBase;
    v41 = (System_String_o *)v11->fields.skipAnimation;
    v42 = Item;
    v23 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C2D6DC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0);
    if ( !v42 )
      goto LABEL_36;
    v24 = v42;
    v25 = v41;
    v26 = colliderBase;
LABEL_18:
    CommonUI__OpenItemDetailDialog_31246476(v24, v25, v26, v23, 0);
    return;
  }
  Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  baseMount = v11->fields.baseMount;
  if ( !baseMount )
    goto LABEL_36;
  v28 = Item;
  m_CachedPtr = baseMount->fields.m_CachedPtr;
  v29 = baseMount[1].klass;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = m_CachedPtr;
  *(_QWORD *)&v43.fields.fakeValue = v29;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v43, 0);
  v32 = (ServantStatusDialog_EndDelegate_o *)sub_1C2D6DC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v32,
    (Il2CppObject *)this,
    Method_EventPointItemListViewManager_closeSvtDetail__,
    0);
  if ( !v28 )
    goto LABEL_36;
  CommonUI__OpenServantStatusDialog_31180960(v28, 7, v31, v32, 0);
}


void EventPointItemListViewManager__OnMoveEnd(EventPointItemListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C21822 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21822 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1C2D6EC(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C2D434(&this->fields.callbackFunc2);
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
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v13; // x24
  __int64 giftId; // x2
  const MethodInfo *v15; // x3
  int max_length; // w8
  GiftEntity_array *v17; // x25
  __int64 v18; // x26
  EventRewardEntity_o *v19; // x29
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass *v23; // x1
  Il2CppClass **v24; // x0
  System_Text_StringBuilder_o *v25; // x23
  int32_t v26; // w25
  GiftEntity_o *v27; // x27
  const MethodInfo *v28; // x2
  GiftEntity_o *v29; // x26
  EventPointItemListViewManager_o *KindName; // x28
  const MethodInfo *v31; // x2
  System_String_o *GiftName; // x0
  EventPointItemListViewManager_o *appended; // x0
  const MethodInfo *v34; // x2
  System_String_o *v35; // x27
  System_String_o *v36; // x26
  System_String_o *v37; // x0
  System_String_o *v38; // x0
  EventPointReplaseRewardDialog_o *eventPointReplaseRewardDialog; // x19
  System_String_o *v40; // x0
  System_String_o *v41; // x21
  System_String_o *v42; // x21
  System_String_o *v43; // x22
  EventPointReplaseRewardDialog_ClickDelegate_o *v44; // x23

  if ( (byte_4C21817 & 1) == 0 )
  {
    sub_1C2D490(&EventPointReplaseRewardDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_GiftMaster__GiftEntity__string__getEntitys__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__);
    sub_1C2D490(&EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_5640/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/);
    sub_1C2D490(&StringLiteral_25323/*"→　「"*/);
    sub_1C2D490(&StringLiteral_5632/*"EVENT_POINT_GIFT_ADD"*/);
    sub_1C2D490(&StringLiteral_5634/*"EVENT_POINT_GIFT_ADD_COUNT"*/);
    sub_1C2D490(&StringLiteral_25353/*"」"*/);
    sub_1C2D490(&StringLiteral_25352/*"「"*/);
    byte_4C21817 = 1;
  }
  v7 = sub_1C2D6DC(EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_47;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2D434(v7 + 16);
  *(_DWORD *)(v7 + 24) = eventId;
  if ( eventRewardEntList )
  {
    if ( eventRewardEntList->max_length )
    {
      v10 = System_Int32__ToString((int)v7 + 24, 0);
      v11 = System_String__Concat_63457864((System_String_o *)StringLiteral_5640/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v10, 0);
      if ( !UnityEngine_PlayerPrefs__GetInt(v11, 0, 0) )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_47;
        MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_47;
        DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
        v13 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v13,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_GiftMaster___);
        if ( !Instance )
          goto LABEL_47;
        Instance = DataMasterBase_object__object__object___getEntitys(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     (const MethodInfo_338BAD4 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__getEntitys__);
        max_length = eventRewardEntList->max_length;
        if ( max_length >= 1 )
        {
          v17 = (GiftEntity_array *)Instance;
          v18 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v18 >= max_length )
              sub_1C2D6F4(Instance, v9, giftId, v15);
            v19 = eventRewardEntList->m_Items[v18];
            if ( !v19 )
              break;
            if ( !MasterData_object )
              break;
            Instance = GiftMaster__getDataById((GiftMaster_o *)MasterData_object, v19->fields.giftId, 0);
            if ( !Instance )
              break;
            giftId = (unsigned int)v19->fields.giftId;
            if ( *((_DWORD *)Instance + 4) != (_DWORD)giftId )
            {
              Instance = EventPointItemListViewManager__TargetItemTargetGiftEntity(
                           (EventPointItemListViewManager_o *)Instance,
                           v17,
                           giftId,
                           v15);
              if ( !v13 )
                break;
              items = v13->fields._items;
              v21 = Method_System_Collections_Generic_List_GiftEntity__Add__;
              ++v13->fields._version;
              if ( !items )
                break;
              size = v13->fields._size;
              v23 = (Il2CppClass *)Instance;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v13,
                  (Il2CppObject *)Instance,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v24 = &items->obj.klass + size;
                v13->fields._size = size + 1;
                v24[4] = v23;
                Instance = (void *)sub_1C2D434(v24 + 4);
              }
            }
            max_length = eventRewardEntList->max_length;
            if ( (int)++v18 >= max_length )
              goto LABEL_25;
          }
LABEL_47:
          sub_1C2D6EC(Instance, v9);
        }
LABEL_25:
        if ( !v13 )
          goto LABEL_47;
        if ( v13->fields._size >= 1 )
        {
          v25 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
          System_Text_StringBuilder___ctor(v25, 0);
          if ( v13->fields._size >= 1 )
          {
            v26 = 0;
            do
            {
              Instance = System_Collections_Generic_List_object___get_Item(
                           v13,
                           v26,
                           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
              if ( !Instance || !MasterData_object )
                goto LABEL_47;
              v27 = (GiftEntity_o *)Instance;
              Instance = GiftMaster__getDataById((GiftMaster_o *)MasterData_object, *((_DWORD *)Instance + 4), 0);
              v29 = (GiftEntity_o *)Instance;
              if ( v26 )
              {
                if ( !v25 )
                  goto LABEL_47;
                Instance = System_Text_StringBuilder__Append_63542928(v25, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
              }
              KindName = (EventPointItemListViewManager_o *)EventPointItemListViewManager__GetKindName(
                                                              (EventPointItemListViewManager_o *)Instance,
                                                              v27,
                                                              v28);
              GiftName = EventPointItemListViewManager__GetGiftName(KindName, v27, v31);
              Instance = System_String__Concat_63498116(
                           (System_String_o *)KindName,
                           (System_String_o *)StringLiteral_25352/*"「"*/,
                           GiftName,
                           (System_String_o *)StringLiteral_25353/*"」"*/,
                           0);
              if ( !Instance )
                goto LABEL_47;
              Instance = System_String__PadRight_63502896((System_String_o *)Instance, 15, 0x3000u, 0);
              if ( !v25 )
                goto LABEL_47;
              System_Text_StringBuilder__Append_63542928(v25, (System_String_o *)Instance, 0);
              appended = (EventPointItemListViewManager_o *)System_Text_StringBuilder__Append_63542928(
                                                              v25,
                                                              (System_String_o *)StringLiteral_25323/*"→　「"*/,
                                                              0);
              Instance = EventPointItemListViewManager__GetGiftName(appended, v29, v34);
              if ( !v29 )
                goto LABEL_47;
              v35 = (System_String_o *)Instance;
              Instance = System_Int32__ToString((int)v29 + 28, 0);
              if ( !Instance )
                goto LABEL_47;
              v36 = System_String__PadLeft((System_String_o *)Instance, 2, 0x20u, 0);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v37 = LocalizationManager__Get((System_String_o *)StringLiteral_5634/*"EVENT_POINT_GIFT_ADD_COUNT"*/, 0);
              v38 = System_String__Concat_63498116(v35, v36, v37, (System_String_o *)StringLiteral_25353/*"」"*/, 0);
              System_Text_StringBuilder__Append_63542928(v25, v38, 0);
            }
            while ( ++v26 < v13->fields._size );
          }
          eventPointReplaseRewardDialog = this->fields.eventPointReplaseRewardDialog;
          v40 = System_Int32__ToString((int)v7 + 24, 0);
          v41 = System_String__Concat_63457864((System_String_o *)StringLiteral_5632/*"EVENT_POINT_GIFT_ADD"*/, v40, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = LocalizationManager__Get(v41, 0);
          if ( !v25 )
            goto LABEL_47;
          v42 = (System_String_o *)Instance;
          v43 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v25->klass->vtable._3_ToString.methodPtr)(
                                     v25,
                                     v25->klass->vtable._3_ToString.method);
          v44 = (EventPointReplaseRewardDialog_ClickDelegate_o *)sub_1C2D6DC(EventPointReplaseRewardDialog_ClickDelegate_TypeInfo);
          EventPointReplaseRewardDialog_ClickDelegate___ctor(
            v44,
            (Il2CppObject *)v7,
            Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__,
            0);
          if ( !eventPointReplaseRewardDialog )
            goto LABEL_47;
          EventPointReplaseRewardDialog__Open(eventPointReplaseRewardDialog, v42, v43, v44, -1, 0, 0, 0, 0, 0, 0);
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

  if ( (byte_4C21821 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_EventPointItemListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Item__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C21821 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList = EventPointItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1C2D6EC(ObjectList, v5);
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
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      EventPointItemListViewObject__Init_31750360((EventPointItemListViewObject_o *)Item, 4, v11, 0.1, v12);
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
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.6,
      0);
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
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C2181F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__);
    sub_1C2D490(&Method_EventPointItemListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C2181F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)EventPointItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v12, v13);
      EventPointItemListViewObject__Init_31750360((EventPointItemListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventPointItemListViewManager__RequestListObject_31750460(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C21820 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__);
    sub_1C2D490(&Method_EventPointItemListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C21820 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)EventPointItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v10, v11);
      EventPointItemListViewObject__Init_31750964((EventPointItemListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
  }
}


void EventPointItemListViewManager__SetMode(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        EventPointItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C2D434(&this->fields.callbackFunc);
  EventPointItemListViewManager__SetMode_31749476(this, mode, v6);
}


void EventPointItemListViewManager__SetMode_31749476(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C2181E & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_11339/*"RequestInto"*/);
    byte_4C2181E = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( mode == 1 )
  {
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
      {
        sub_1C2D6EC(gameObject, v6);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11339/*"RequestInto"*/,
      0.0,
      0);
  }
}


void EventPointItemListViewManager__SetMode_31749728(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1C2D434(&this->fields.callbackFunc2);
  EventPointItemListViewManager__SetMode_31749476(this, mode, v7);
}


void EventPointItemListViewManager__SetMode_31749784(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C2D434(&this->fields.callbackFunc2);
  EventPointItemListViewManager__SetMode_31749476(this, mode, v6);
}


void EventPointItemListViewManager__SetObjectItem(
        EventPointItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventPointItemListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C2181D & 1) == 0 )
  {
    this = (EventPointItemListViewManager_o *)sub_1C2D490(&EventPointItemListViewObject_TypeInfo);
    byte_4C2181D = 1;
  }
  if ( !obj
    || (naturalAligment = EventPointItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != EventPointItemListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventPointItemListViewObject__Init_31749348((EventPointItemListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


GiftEntity_o *EventPointItemListViewManager__TargetItemTargetGiftEntity(
        EventPointItemListViewManager_o *this,
        GiftEntity_array *entitys,
        int32_t giftId,
        const MethodInfo *method)
{
  int max_length; // w8
  int v5; // w9

  if ( !entitys )
    goto LABEL_9;
  max_length = entitys->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      this = (EventPointItemListViewManager_o *)entitys->m_Items[v5];
      if ( !this )
        break;
      if ( LODWORD(this->fields.m_CachedPtr) == giftId )
        return (GiftEntity_o *)this;
      if ( max_length == ++v5 )
        return 0;
    }
LABEL_9:
    sub_1C2D6EC(this, entitys);
  }
  return 0;
}


void EventPointItemListViewManager__add_callbackFunc(
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

  if ( (byte_4C21810 & 1) == 0 )
  {
    sub_1C2D490(&EventPointItemListViewManager_CallbackFunc_TypeInfo);
    byte_4C21810 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (EventPointItemListViewManager_CallbackFunc_c *)v7->klass != EventPointItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_1C2D9AC(v7);
  EventPointItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


void EventPointItemListViewManager__add_callbackFunc2(
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

  if ( (byte_4C21812 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C21812 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_1C2D9AC(v7);
  EventPointItemListViewManager__remove_callbackFunc2(v10, v11, v12);
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

  if ( (byte_4C21824 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventPointItemListViewManager_closeItemDetail__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21824 = 1;
  }
  v3 = Method_EventPointItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_EventPointItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_EventPointItemListViewManager_closeItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void EventPointItemListViewManager__closeSvtDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C21825 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21825 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0, 0);
}


System_Collections_Generic_List_EventPointItemListViewObject__o *EventPointItemListViewManager__get_ClippingObjectList(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C21815 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21815 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v10);
      Item = (ListViewItem_o *)EventPointItemListViewObject__GetItem(
                                 (EventPointItemListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C2D6EC(0, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_43582756((ListViewManager_o *)this, Item, 0);
        if ( v14 )
        {
          if ( !v3 )
            sub_1C2D6EC(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C2D6EC(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C2D6EC(Item, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C2D6EC(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1C2D434(v19 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v3;
}


System_Collections_Generic_List_EventPointItemListViewObject__o *EventPointItemListViewManager__get_ObjectList(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  Il2CppObject *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C21814 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21814 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C2D434(v14 + 4);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v3;
}


void EventPointItemListViewManager__remove_callbackFunc(
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

  if ( (byte_4C21811 & 1) == 0 )
  {
    sub_1C2D490(&EventPointItemListViewManager_CallbackFunc_TypeInfo);
    byte_4C21811 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (EventPointItemListViewManager_CallbackFunc_c *)v7->klass != EventPointItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_1C2D9AC(v7);
  EventPointItemListViewManager__add_callbackFunc2(v10, v11, v12);
}


void EventPointItemListViewManager__remove_callbackFunc2(
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

  if ( (byte_4C21813 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C21813 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (EventPointItemListViewManager_o *)sub_1C2D9AC(v7);
  EventPointItemListViewManager__get_ObjectList(v10, v11);
}


void EventPointItemListViewManager__setNextRewardInfo(EventPointItemListViewManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v5; // w21
  int32_t v6; // w20
  __int64 naturalAligment; // x10

  if ( (byte_4C2181B & 1) == 0 )
  {
    sub_1C2D490(&EventPointItemListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C2181B = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_12;
  size = itemList->fields._size;
  v5 = size - 1;
  if ( size >= 1 )
  {
    v6 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v6,
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      naturalAligment = EventPointItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( itemList->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (EventPointItemListViewItem_c *)itemList->klass->_2.typeHierarchy[naturalAligment - 1] != EventPointItemListViewItem_TypeInfo )
      {
        break;
      }
      if ( !LOBYTE(itemList[5].klass) )
        goto LABEL_14;
      if ( v5 == v6 )
        goto LABEL_13;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v6;
    }
    while ( itemList );
LABEL_12:
    sub_1C2D6EC(itemList, method);
  }
LABEL_13:
  v6 = 0;
LABEL_14:
  ListViewManager__SetTopItem((ListViewManager_o *)this, v6, 0);
}


void EventPointItemListViewManager_CallbackFunc___ctor(
        EventPointItemListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434(&this->fields.m_target);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6959C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6955C;
}


System_IAsyncResult_o *EventPointItemListViewManager_CallbackFunc__BeginInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v5, callback, object);
}


void EventPointItemListViewManager_CallbackFunc__EndInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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


void EventPointItemListViewManager___c__DisplayClass20_0___OpenReplaseRewardDialog_b__0(
        EventPointItemListViewManager___c__DisplayClass20_0_o *this,
        bool isOk,
        const MethodInfo *method)
{
  if ( !this->fields.__4__this )
    sub_1C2D6EC(this, isOk);
  EventPointItemListViewManager__CloseReplaseRewardDialog(this->fields.__4__this, this->fields.eventId, method);
}