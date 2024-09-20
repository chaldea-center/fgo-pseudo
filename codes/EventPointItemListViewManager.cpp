void __fastcall EventPointItemListViewManager___ctor(EventPointItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall EventPointItemListViewManager__CloseCommandCodeDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5F088 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F088 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
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
  if ( (byte_4A5F07A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5654/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/);
    byte_4A5F07A = 1;
  }
  eventPointReplaseRewardDialog = this->fields.eventPointReplaseRewardDialog;
  if ( !eventPointReplaseRewardDialog )
    sub_1B8880C(0LL, *(_QWORD *)&eventId);
  EventPointReplaseRewardDialog__Close(eventPointReplaseRewardDialog, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  v6 = System_String__Concat_61707032((System_String_o *)StringLiteral_5654/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v5, 0LL);
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
  Il2CppObject *MasterData_object; // x22
  __int64 v10; // x8
  int v11; // w27
  int v12; // w28
  EventRewardEntity_o *v13; // x24
  bool v14; // w25
  GiftEntity_o *DataById; // x26
  EventPointItemListViewItem_o *v16; // x23
  const MethodInfo *v17; // x4
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v23; // x8

  if ( (byte_4A5F078 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1B885B0(&EventPointItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F078 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( rewardList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    v10 = *(_QWORD *)&rewardList->max_length;
    v11 = v10 - 1;
    if ( (int)v10 >= 1 )
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
        DataById = GiftMaster__getDataById((GiftMaster_o *)MasterData_object, v13->fields.giftId, 0LL);
        v16 = (EventPointItemListViewItem_o *)sub_1B887FC(EventPointItemListViewItem_TypeInfo);
        EventPointItemListViewItem___ctor(v16, v13, DataById, v14, v17);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        v20 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v21 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v20 )
          break;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v20 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v16,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = v20 + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v23 + 32) = v16;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)v16, v18, v19);
        }
        if ( v11 == v12 )
          goto LABEL_18;
        if ( ++v12 >= rewardList->max_length )
          sub_1B88814(Instance, v8);
      }
LABEL_20:
      sub_1B8880C(Instance, v8);
    }
LABEL_18:
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

  if ( (byte_4A5F07C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    this = (EventPointItemListViewManager_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F07C = 1;
  }
  if ( !gift )
    goto LABEL_22;
  type = gift->fields.type;
  if ( type == 11 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_311D934 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( this )
          return CommandCodeEntity__GetName((CommandCodeEntity_o *)this, 0LL);
      }
    }
    goto LABEL_22;
  }
  if ( type == 2 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this )
          return (System_String_o *)this->fields.m_CancellationTokenSource;
      }
    }
    goto LABEL_22;
  }
  if ( type != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (EventPointItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_22:
    sub_1B8880C(this, gift);
  }
  Name = ServantEntity__GetName((ServantEntity_o *)this, -1, 0, -1, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_46485644(Name, 0LL);
}


EventPointItemListViewItem_o *__fastcall EventPointItemListViewManager__GetItem(
        EventPointItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventPointItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5F07E & 1) == 0 )
  {
    sub_1B885B0(&EventPointItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5F07E = 1;
  }
  result = (EventPointItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventPointItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(EventPointItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (EventPointItemListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointItemListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


System_String_o *__fastcall EventPointItemListViewManager__GetKindName(
        EventPointItemListViewManager_o *this,
        GiftEntity_o *gift,
        const MethodInfo *method)
{
  if ( (byte_4A5F07B & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5647/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/);
    this = (EventPointItemListViewManager_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5F07B = 1;
  }
  if ( !gift )
    sub_1B8880C(this, gift);
  if ( gift->fields.type != 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_5647/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/, 0LL);
}


void __fastcall EventPointItemListViewManager__OnClickListView(
        EventPointItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  CommonUI_o *Item; // x0
  const MethodInfo *v8; // x1
  __int64 methodPtr_low; // x10
  struct AllocMem_o *allocMem; // x8
  CommonUI_o *v11; // x20
  float lastCollectNum; // w8
  struct AssetsInfo_o *assetsInfo; // x8
  int32_t v14; // w0
  Il2CppObject *v15; // x0
  ItemEntity_o *fadeInfo; // x20
  CommonUI_o *v17; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v18; // x22
  Il2CppObject *Instance; // x0
  System_String_o *maskFade; // x21
  System_String_o *retryDialog; // x20
  Il2CppObject *v22; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v23; // x23
  CommonUI_o *v24; // x0
  System_String_o *v25; // x1
  System_String_o *v26; // x2
  struct SoundInfo_o *soundInfo; // x8
  CommonUI_o *v28; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x21
  __int64 v30; // x22
  int32_t v31; // w21
  ServantStatusDialog_EndDelegate_o *v32; // x22
  struct AssetsInfo_o *v33; // x8
  int v34; // w8
  Il2CppObject *v35; // x0
  CommandCodeEntity_o *baseMount; // x20
  CommonUI_o *v37; // x21
  ServantStatusDialog_EndDelegate_o *v38; // x22
  struct UnityEngine_Transform_o *baseMountSystemUI; // x8
  System_String_o *v40; // x22
  System_String_o *v41; // x20
  CommonUI_o *v42; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4A5F085 & 1) == 0 )
  {
    sub_1B885B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&Method_EventPointItemListViewManager_CloseCommandCodeDetail__);
    sub_1B885B0(&Method_EventPointItemListViewManager_OnClickListView__);
    sub_1B885B0(&Method_EventPointItemListViewManager_closeItemDetail__);
    sub_1B885B0(&Method_EventPointItemListViewManager_closeSvtDetail__);
    sub_1B885B0(&EventPointItemListViewObject_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F085 = 1;
  }
  v5 = Method_EventPointItemListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventPointItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_EventPointItemListViewManager_OnClickListView__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  if ( !obj )
    goto LABEL_36;
  methodPtr_low = LOBYTE(EventPointItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_36;
  if ( (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointItemListViewObject_TypeInfo )
    goto LABEL_36;
  Item = (CommonUI_o *)EventPointItemListViewObject__GetItem((EventPointItemListViewObject_o *)obj, v8);
  if ( !Item )
    goto LABEL_36;
  allocMem = Item->fields.allocMem;
  v11 = Item;
  if ( !allocMem )
    goto LABEL_36;
  lastCollectNum = allocMem->fields.lastCollectNum;
  if ( LODWORD(lastCollectNum) != 1 )
  {
    if ( (LODWORD(lastCollectNum) & 0xFFFFFFFE) != 2 )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    maskFade = (System_String_o *)v11->fields.maskFade;
    retryDialog = (System_String_o *)v11->fields.retryDialog;
    v22 = Instance;
    v23 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v22 )
      goto LABEL_36;
    v24 = (CommonUI_o *)v22;
    v25 = maskFade;
    v26 = retryDialog;
    goto LABEL_18;
  }
  assetsInfo = Item->fields.assetsInfo;
  if ( assetsInfo )
  {
    v14 = *((_DWORD *)&assetsInfo->fields.UnityEngine_Behaviour_Fields + 1);
    if ( v14 == 2 )
    {
      v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      fadeInfo = (ItemEntity_o *)v11->fields.fadeInfo;
      v17 = (CommonUI_o *)v15;
      v18 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
        0LL);
      if ( v17 )
      {
        CommonUI__OpenItemDetailDialog(v17, fadeInfo, v18, 50, 0LL);
        return;
      }
LABEL_36:
      sub_1B8880C(Item, v8);
    }
  }
  else
  {
    v14 = 0;
  }
  if ( !Gift__IsServant(v14, 0LL) )
  {
    v33 = v11->fields.assetsInfo;
    if ( !v33 )
      return;
    v34 = *((_DWORD *)&v33->fields.UnityEngine_Behaviour_Fields + 1);
    if ( v34 != 12 )
    {
      if ( v34 == 11 )
      {
        v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        baseMount = (CommandCodeEntity_o *)v11->fields.baseMount;
        v37 = (CommonUI_o *)v35;
        v38 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v38,
          (Il2CppObject *)this,
          Method_EventPointItemListViewManager_CloseCommandCodeDetail__,
          0LL);
        if ( !v37 )
          goto LABEL_36;
        CommonUI__OpenServantEquipStatusDialog_30510512(v37, 25, baseMount, 0, v38, 0LL, 0LL);
      }
      return;
    }
    if ( !v11->fields.baseMountSystemUI )
      return;
    Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    baseMountSystemUI = v11->fields.baseMountSystemUI;
    if ( !baseMountSystemUI )
      goto LABEL_36;
    v40 = *(System_String_o **)&baseMountSystemUI[1].fields.m_CachedPtr;
    v41 = (System_String_o *)v11->fields.maskFade;
    v42 = Item;
    v23 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v42 )
      goto LABEL_36;
    v24 = v42;
    v25 = v41;
    v26 = v40;
LABEL_18:
    CommonUI__OpenItemDetailDialog_30558980(v24, v25, v26, v23, 0LL);
    return;
  }
  Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  soundInfo = v11->fields.soundInfo;
  if ( !soundInfo )
    goto LABEL_36;
  v28 = Item;
  v30 = *(_QWORD *)&soundInfo->fields.m_CachedPtr;
  m_CancellationTokenSource = soundInfo->fields.m_CancellationTokenSource;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v30;
  *(_QWORD *)&v43.fields.fakeValue = m_CancellationTokenSource;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v43, 0LL);
  v32 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v32,
    (Il2CppObject *)this,
    Method_EventPointItemListViewManager_closeSvtDetail__,
    0LL);
  if ( !v28 )
    goto LABEL_36;
  CommonUI__OpenServantStatusDialog_30507356(v28, 7, v31, v32, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A5F084 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F084 = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v15; // x24
  signed int max_length; // w8
  GiftEntity_array *v17; // x25
  __int64 v18; // x26
  EventRewardEntity_o *v19; // x29
  const MethodInfo *v20; // x3
  int32_t giftId; // w2
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  DataManager_o *v27; // x1
  Il2CppClass **v28; // x0
  System_Text_StringBuilder_o *v29; // x23
  int32_t v30; // w25
  GiftEntity_o *v31; // x27
  const MethodInfo *v32; // x2
  GiftEntity_o *v33; // x26
  EventPointItemListViewManager_o *KindName; // x28
  const MethodInfo *v35; // x2
  System_String_o *GiftName; // x0
  EventPointItemListViewManager_o *appended; // x0
  const MethodInfo *v38; // x2
  System_String_o *v39; // x27
  System_String_o *v40; // x26
  System_String_o *v41; // x0
  System_String_o *v42; // x0
  EventPointReplaseRewardDialog_o *eventPointReplaseRewardDialog; // x19
  System_String_o *v44; // x0
  System_String_o *v45; // x21
  System_String_o *v46; // x21
  System_String_o *v47; // x22
  EventPointReplaseRewardDialog_ClickDelegate_o *v48; // x23

  if ( (byte_4A5F079 & 1) == 0 )
  {
    sub_1B885B0(&EventPointReplaseRewardDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1B885B0(&Method_DataManager_getEntitys_GiftMaster__GiftEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_GiftEntity__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    sub_1B885B0(&Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__);
    sub_1B885B0(&EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo);
    sub_1B885B0(&StringLiteral_43/*"\n"*/);
    sub_1B885B0(&StringLiteral_5654/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/);
    sub_1B885B0(&StringLiteral_25242/*"→　「"*/);
    sub_1B885B0(&StringLiteral_5646/*"EVENT_POINT_GIFT_ADD"*/);
    sub_1B885B0(&StringLiteral_5648/*"EVENT_POINT_GIFT_ADD_COUNT"*/);
    sub_1B885B0(&StringLiteral_25269/*"」"*/);
    sub_1B885B0(&StringLiteral_25268/*"「"*/);
    byte_4A5F079 = 1;
  }
  v7 = sub_1B887FC(EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_45;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = eventId;
  if ( eventRewardEntList )
  {
    if ( *(_QWORD *)&eventRewardEntList->max_length )
    {
      v12 = System_Int32__ToString((int)v7 + 24, 0LL);
      v13 = System_String__Concat_61707032((System_String_o *)StringLiteral_5654/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v12, 0LL);
      if ( !UnityEngine_PlayerPrefs__GetInt(v13, 0, 0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_45;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_45;
        DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
        v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v15,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_45;
        Instance = (DataManager_o *)DataManager__getEntitys_object__object_(
                                      Instance,
                                      (const MethodInfo_2E7FB68 *)Method_DataManager_getEntitys_GiftMaster__GiftEntity___);
        max_length = eventRewardEntList->max_length;
        if ( max_length >= 1 )
        {
          v17 = (GiftEntity_array *)Instance;
          v18 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v18 >= max_length )
              sub_1B88814(Instance, v9);
            v19 = eventRewardEntList->m_Items[v18];
            if ( !v19 )
              break;
            if ( !MasterData_object )
              break;
            Instance = (DataManager_o *)GiftMaster__getDataById(
                                          (GiftMaster_o *)MasterData_object,
                                          v19->fields.giftId,
                                          0LL);
            if ( !Instance )
              break;
            giftId = v19->fields.giftId;
            if ( Instance->fields.m_CachedPtr != giftId )
            {
              Instance = (DataManager_o *)EventPointItemListViewManager__TargetItemTargetGiftEntity(
                                            (EventPointItemListViewManager_o *)Instance,
                                            v17,
                                            giftId,
                                            v20);
              if ( !v15 )
                break;
              items = v15->fields._items;
              v25 = Method_System_Collections_Generic_List_GiftEntity__Add__;
              ++v15->fields._version;
              if ( !items )
                break;
              size = v15->fields._size;
              v27 = Instance;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v15,
                  (Il2CppObject *)Instance,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                v28 = &items->obj.klass + size;
                v15->fields._size = size + 1;
                v28[4] = (Il2CppClass *)v27;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v27, v22, v23);
              }
            }
            max_length = eventRewardEntList->max_length;
            if ( (int)++v18 >= max_length )
              goto LABEL_23;
          }
LABEL_45:
          sub_1B8880C(Instance, v9);
        }
LABEL_23:
        if ( !v15 )
          goto LABEL_45;
        if ( v15->fields._size >= 1 )
        {
          v29 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
          System_Text_StringBuilder___ctor(v29, 0LL);
          if ( v15->fields._size >= 1 )
          {
            v30 = 0;
            do
            {
              Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                            v15,
                                            v30,
                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
              if ( !Instance || !MasterData_object )
                goto LABEL_45;
              v31 = (GiftEntity_o *)Instance;
              Instance = (DataManager_o *)GiftMaster__getDataById(
                                            (GiftMaster_o *)MasterData_object,
                                            Instance->fields.m_CachedPtr,
                                            0LL);
              v33 = (GiftEntity_o *)Instance;
              if ( v30 )
              {
                if ( !v29 )
                  goto LABEL_45;
                Instance = (DataManager_o *)System_Text_StringBuilder__Append_60868928(
                                              v29,
                                              (System_String_o *)StringLiteral_43/*"\n"*/,
                                              0LL);
              }
              KindName = (EventPointItemListViewManager_o *)EventPointItemListViewManager__GetKindName(
                                                              (EventPointItemListViewManager_o *)Instance,
                                                              v31,
                                                              v32);
              GiftName = EventPointItemListViewManager__GetGiftName(KindName, v31, v35);
              Instance = (DataManager_o *)System_String__Concat_61720296(
                                            (System_String_o *)KindName,
                                            (System_String_o *)StringLiteral_25268/*"「"*/,
                                            GiftName,
                                            (System_String_o *)StringLiteral_25269/*"」"*/,
                                            0LL);
              if ( !Instance )
                goto LABEL_45;
              Instance = (DataManager_o *)System_String__PadRight_61725144(
                                            (System_String_o *)Instance,
                                            15,
                                            0x3000u,
                                            0LL);
              if ( !v29 )
                goto LABEL_45;
              System_Text_StringBuilder__Append_60868928(v29, (System_String_o *)Instance, 0LL);
              appended = (EventPointItemListViewManager_o *)System_Text_StringBuilder__Append_60868928(
                                                              v29,
                                                              (System_String_o *)StringLiteral_25242/*"→　「"*/,
                                                              0LL);
              Instance = (DataManager_o *)EventPointItemListViewManager__GetGiftName(appended, v33, v38);
              if ( !v33 )
                goto LABEL_45;
              v39 = (System_String_o *)Instance;
              Instance = (DataManager_o *)System_Int32__ToString((int)v33 + 28, 0LL);
              if ( !Instance )
                goto LABEL_45;
              v40 = System_String__PadLeft((System_String_o *)Instance, 2, 0x20u, 0LL);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v41 = LocalizationManager__Get((System_String_o *)StringLiteral_5648/*"EVENT_POINT_GIFT_ADD_COUNT"*/, 0LL);
              v42 = System_String__Concat_61720296(v39, v40, v41, (System_String_o *)StringLiteral_25269/*"」"*/, 0LL);
              System_Text_StringBuilder__Append_60868928(v29, v42, 0LL);
            }
            while ( ++v30 < v15->fields._size );
          }
          eventPointReplaseRewardDialog = this->fields.eventPointReplaseRewardDialog;
          v44 = System_Int32__ToString((int)v7 + 24, 0LL);
          v45 = System_String__Concat_61707032((System_String_o *)StringLiteral_5646/*"EVENT_POINT_GIFT_ADD"*/, v44, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__Get(v45, 0LL);
          if ( !v29 )
            goto LABEL_45;
          v46 = (System_String_o *)Instance;
          v47 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v29->klass->vtable._3_ToString.method)(
                                     v29,
                                     v29->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v48 = (EventPointReplaseRewardDialog_ClickDelegate_o *)sub_1B887FC(EventPointReplaseRewardDialog_ClickDelegate_TypeInfo);
          EventPointReplaseRewardDialog_ClickDelegate___ctor(
            v48,
            (Il2CppObject *)v7,
            Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__,
            0LL);
          if ( !eventPointReplaseRewardDialog )
            goto LABEL_45;
          EventPointReplaseRewardDialog__Open(eventPointReplaseRewardDialog, v46, v47, v48, -1, 0, 0, 0, 0, 0, 0LL);
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
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v7; // x20
  int v8; // w24
  int32_t v9; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v11; // x23
  const MethodInfo *v12; // x3

  if ( (byte_4A5F083 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventPointItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Item__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5F083 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventPointItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1B8880C(ObjectList, v5);
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
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      EventPointItemListViewObject__Init_45759728((EventPointItemListViewObject_o *)Item, 4, v11, 0.1, v12);
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
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5F081 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__);
    sub_1B885B0(&Method_EventPointItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5F081 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)EventPointItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      EventPointItemListViewObject__Init_45759728((EventPointItemListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__RequestListObject_45759828(
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

  if ( (byte_4A5F082 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__);
    sub_1B885B0(&Method_EventPointItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5F082 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)EventPointItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      EventPointItemListViewObject__Init_45760332((EventPointItemListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
  }
}


void __fastcall EventPointItemListViewManager__SetMode(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        EventPointItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventPointItemListViewManager__SetMode_45758844(this, mode, v6);
}


void __fastcall EventPointItemListViewManager__SetMode_45758844(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4A5F080 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_11311/*"RequestInto"*/);
    byte_4A5F080 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( mode == 1 )
  {
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
      {
        sub_1B8880C(gameObject, v6);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11311/*"RequestInto"*/,
      0.0,
      0LL);
  }
}


void __fastcall EventPointItemListViewManager__SetMode_45759096(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventPointItemListViewManager__SetMode_45758844(this, mode, v7);
}


void __fastcall EventPointItemListViewManager__SetMode_45759152(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  EventPointItemListViewManager__SetMode_45758844(this, mode, v6);
}


void __fastcall EventPointItemListViewManager__SetObjectItem(
        EventPointItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  EventPointItemListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A5F07F & 1) == 0 )
  {
    this = (EventPointItemListViewManager_o *)sub_1B885B0(&EventPointItemListViewObject_TypeInfo);
    byte_4A5F07F = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventPointItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointItemListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventPointItemListViewObject__Init_45758716((EventPointItemListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


GiftEntity_o *__fastcall EventPointItemListViewManager__TargetItemTargetGiftEntity(
        EventPointItemListViewManager_o *this,
        GiftEntity_array *entitys,
        int32_t giftId,
        const MethodInfo *method)
{
  signed int max_length; // w8
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
      if ( this->fields.m_CachedPtr == giftId )
        return (GiftEntity_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_9:
    sub_1B8880C(this, entitys);
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

  if ( (byte_4A5F072 & 1) == 0 )
  {
    sub_1B885B0(&EventPointItemListViewManager_CallbackFunc_TypeInfo);
    byte_4A5F072 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A5F074 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5F074 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  EventPointItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall EventPointItemListViewManager__closeItemDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5F086 & 1) == 0 )
  {
    sub_1B885B0(&Method_EventPointItemListViewManager_closeItemDetail__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F086 = 1;
  }
  v3 = Method_EventPointItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_EventPointItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_EventPointItemListViewManager_closeItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall EventPointItemListViewManager__closeSvtDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5F087 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5F087 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


System_Collections_Generic_List_EventPointItemListViewObject__o *__fastcall EventPointItemListViewManager__get_ClippingObjectList(
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
  int32_t v14; // w2
  int32_t v15; // w3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5F077 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F077 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)EventPointItemListViewObject__GetItem(
                                 (EventPointItemListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v16 )
        {
          if ( !v3 )
            sub_1B8880C(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v3;
}


System_Collections_Generic_List_EventPointItemListViewObject__o *__fastcall EventPointItemListViewManager__get_ObjectList(
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
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5F076 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F076 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4A5F073 & 1) == 0 )
  {
    sub_1B885B0(&EventPointItemListViewManager_CallbackFunc_TypeInfo);
    byte_4A5F073 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A5F075 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5F075 = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  EventPointItemListViewManager__get_ObjectList(v10, v11);
}


void __fastcall EventPointItemListViewManager__setNextRewardInfo(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v5; // w21
  int32_t v6; // w20
  __int64 methodPtr_low; // x10

  if ( (byte_4A5F07D & 1) == 0 )
  {
    sub_1B885B0(&EventPointItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5F07D = 1;
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
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
      if ( !itemList )
        break;
      methodPtr_low = LOBYTE(EventPointItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(itemList->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (EventPointItemListViewItem_c *)itemList->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointItemListViewItem_TypeInfo )
      {
        break;
      }
      if ( !LOBYTE(itemList[4].fields._syncRoot) )
        goto LABEL_14;
      if ( v5 == v6 )
        goto LABEL_13;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v6;
    }
    while ( itemList );
LABEL_12:
    sub_1B8880C(itemList, method);
  }
LABEL_13:
  v6 = 0;
LABEL_14:
  ListViewManager__SetTopItem((ListViewManager_o *)this, v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager_CallbackFunc___ctor(
        EventPointItemListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D39A0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D3960;
}


System_IAsyncResult_o *__fastcall EventPointItemListViewManager_CallbackFunc__BeginInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B88564(this, &v5, callback, object);
}


void __fastcall EventPointItemListViewManager_CallbackFunc__EndInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall EventPointItemListViewManager_CallbackFunc__Invoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
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
  if ( !this->fields.__4__this )
    sub_1B8880C(this, isOk);
  EventPointItemListViewManager__CloseReplaseRewardDialog(this->fields.__4__this, this->fields.eventId, method);
}