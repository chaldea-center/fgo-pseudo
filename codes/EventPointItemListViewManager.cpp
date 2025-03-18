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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C26194 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4C26194 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
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
  if ( (byte_4C26186 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_5773/*"Effect/RecollectionQuest"*/, *(_QWORD *)&eventId);
    byte_4C26186 = 1;
  }
  eventPointReplaseRewardDialog = this->fields.eventPointReplaseRewardDialog;
  if ( !eventPointReplaseRewardDialog )
    sub_1C3B9C0(0LL, *(_QWORD *)&eventId);
  EventPointReplaseRewardDialog__Close(eventPointReplaseRewardDialog, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  v6 = System_String__Concat_63368612((System_String_o *)StringLiteral_5773/*"Effect/RecollectionQuest"*/, v5, 0LL);
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
  Il2CppObject *MasterData_object; // x22
  __int64 v14; // x8
  int v15; // w27
  int v16; // w28
  EventRewardEntity_o *v17; // x24
  bool v18; // w25
  GiftEntity_o *DataById; // x26
  EventPointItemListViewItem_o *v20; // x23
  const MethodInfo *v21; // x4
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v31; // x8

  if ( (byte_4C26184 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_GiftMaster___, rewardList);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventPointMaster___, v7);
    sub_1C3B764(&EventPointItemListViewItem_TypeInfo, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__Add__, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C26184 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( rewardList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_GiftMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    v14 = *(_QWORD *)&rewardList->max_length;
    v15 = v14 - 1;
    if ( (int)v14 >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = rewardList->m_Items[v16];
        if ( !v17 )
          break;
        if ( !MasterData_object )
          break;
        v18 = v17->fields.point <= currentPoint;
        DataById = GiftMaster__getDataById((GiftMaster_o *)MasterData_object, v17->fields.giftId, 0LL);
        v20 = (EventPointItemListViewItem_o *)sub_1C3B9B0(EventPointItemListViewItem_TypeInfo);
        EventPointItemListViewItem___ctor(v20, v17, DataById, v18, v21);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        v28 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v29 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v28 )
          break;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v28 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v20,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = v28 + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v31 + 32) = v20;
          sub_1C3B708((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)v20, v22, v23, v24, v25, v26, v27);
        }
        if ( v15 == v16 )
          goto LABEL_18;
        if ( ++v16 >= rewardList->max_length )
          sub_1C3B9C8(Instance, v12);
      }
LABEL_20:
      sub_1C3B9C0(Instance, v12);
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

  if ( (byte_4C26188 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_CommandCodeMaster___, gift);
    sub_1C3B764(&Method_DataManager_GetMasterData_ItemMaster___, v4);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v5);
    sub_1C3B764(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1C3B764(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v8);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    this = (EventPointItemListViewManager_o *)sub_1C3B764(&StringLiteral_1/*""*/, v11);
    byte_4C26188 = 1;
  }
  if ( !gift )
    goto LABEL_22;
  type = gift->fields.type;
  if ( type == 11 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_329AE48 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( this )
          return CommandCodeEntity__GetName((CommandCodeEntity_o *)this, 0LL);
      }
    }
    goto LABEL_22;
  }
  if ( type == 2 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_329AE48 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this )
          return (System_String_o *)this->fields.m_CancellationTokenSource;
      }
    }
    goto LABEL_22;
  }
  if ( type != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (EventPointItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_22:
    sub_1C3B9C0(this, gift);
  }
  Name = ServantEntity__GetName((ServantEntity_o *)this, -1, 0, -1, 0, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47918404(Name, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventPointItemListViewItem_o *__fastcall EventPointItemListViewManager__GetItem(
        EventPointItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventPointItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4C2618A & 1) == 0 )
  {
    sub_1C3B764(&EventPointItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4C2618A = 1;
  }
  result = (EventPointItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventPointItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_4C26187 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, gift);
    sub_1C3B764(&StringLiteral_5766/*"Effect/Event/{0}"*/, v4);
    this = (EventPointItemListViewManager_o *)sub_1C3B764(&StringLiteral_1/*""*/, v5);
    byte_4C26187 = 1;
  }
  if ( !gift )
    sub_1C3B9C0(this, gift);
  if ( gift->fields.type != 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get((System_String_o *)StringLiteral_5766/*"Effect/Event/{0}"*/, 0LL);
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
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  CommonUI_o *Item; // x0
  const MethodInfo *v16; // x1
  __int64 methodPtr_low; // x10
  struct AssetsInfo_o *assetsInfo; // x8
  CommonUI_o *v19; // x20
  int v20; // w8
  struct SoundInfo_o *soundInfo; // x8
  int32_t v22; // w0
  Il2CppObject *v23; // x0
  ItemEntity_o *baseMount; // x20
  CommonUI_o *v25; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v26; // x22
  Il2CppObject *Instance; // x0
  System_String_o *eventMaskFade; // x21
  System_String_o *retryBootDialog; // x20
  Il2CppObject *v30; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v31; // x23
  CommonUI_o *v32; // x0
  System_String_o *v33; // x1
  System_String_o *v34; // x2
  struct FadeInfo_o *fadeInfo; // x8
  CommonUI_o *v36; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x21
  __int64 v38; // x22
  int32_t v39; // w21
  ServantStatusDialog_EndDelegate_o *v40; // x22
  struct SoundInfo_o *v41; // x8
  int v42; // w8
  Il2CppObject *v43; // x0
  CommandCodeEntity_o *baseMountSystemUI; // x20
  CommonUI_o *v45; // x21
  ServantStatusDialog_EndDelegate_o *v46; // x22
  struct UnityEngine_Camera_o *bgCamera; // x8
  System_String_o *v48; // x22
  System_String_o *v49; // x20
  CommonUI_o *v50; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4C26191 & 1) == 0 )
  {
    sub_1C3B764(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj);
    sub_1C3B764(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1C3B764(&Method_EventPointItemListViewManager_CloseCommandCodeDetail__, v6);
    sub_1C3B764(&Method_EventPointItemListViewManager_OnClickListView__, v7);
    sub_1C3B764(&Method_EventPointItemListViewManager_closeItemDetail__, v8);
    sub_1C3B764(&Method_EventPointItemListViewManager_closeSvtDetail__, v9);
    sub_1C3B764(&EventPointItemListViewObject_TypeInfo, v10);
    sub_1C3B764(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4C26191 = 1;
  }
  v13 = Method_EventPointItemListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventPointItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1C3B77C(Method_EventPointItemListViewManager_OnClickListView__);
  v14 = (System_Reflection_MethodBase_o *)sub_1C3B748(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
  if ( !obj )
    goto LABEL_36;
  methodPtr_low = LOBYTE(EventPointItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_36;
  if ( (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointItemListViewObject_TypeInfo )
    goto LABEL_36;
  Item = (CommonUI_o *)EventPointItemListViewObject__GetItem((EventPointItemListViewObject_o *)obj, v16);
  if ( !Item )
    goto LABEL_36;
  assetsInfo = Item->fields.assetsInfo;
  v19 = Item;
  if ( !assetsInfo )
    goto LABEL_36;
  v20 = *(_DWORD *)&assetsInfo->fields.show;
  if ( v20 != 1 )
  {
    if ( (v20 & 0xFFFFFFFE) != 2 )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventMaskFade = (System_String_o *)v19->fields.eventMaskFade;
    retryBootDialog = (System_String_o *)v19->fields.retryBootDialog;
    v30 = Instance;
    v31 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C3B9B0(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v31,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v30 )
      goto LABEL_36;
    v32 = (CommonUI_o *)v30;
    v33 = eventMaskFade;
    v34 = retryBootDialog;
    goto LABEL_18;
  }
  soundInfo = Item->fields.soundInfo;
  if ( soundInfo )
  {
    v22 = *((_DWORD *)&soundInfo->fields.UnityEngine_Behaviour_Fields + 1);
    if ( v22 == 2 )
    {
      v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      baseMount = (ItemEntity_o *)v19->fields.baseMount;
      v25 = (CommonUI_o *)v23;
      v26 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C3B9B0(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
        0LL);
      if ( v25 )
      {
        CommonUI__OpenItemDetailDialog(v25, baseMount, v26, 50, 0LL);
        return;
      }
LABEL_36:
      sub_1C3B9C0(Item, v16);
    }
  }
  else
  {
    v22 = 0;
  }
  if ( !Gift__IsServant(v22, 0LL) )
  {
    v41 = v19->fields.soundInfo;
    if ( !v41 )
      return;
    v42 = *((_DWORD *)&v41->fields.UnityEngine_Behaviour_Fields + 1);
    if ( v42 != 12 )
    {
      if ( v42 == 11 )
      {
        v43 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        baseMountSystemUI = (CommandCodeEntity_o *)v19->fields.baseMountSystemUI;
        v45 = (CommonUI_o *)v43;
        v46 = (ServantStatusDialog_EndDelegate_o *)sub_1C3B9B0(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v46,
          (Il2CppObject *)this,
          Method_EventPointItemListViewManager_CloseCommandCodeDetail__,
          0LL);
        if ( !v45 )
          goto LABEL_36;
        CommonUI__OpenServantEquipStatusDialog_31248356(v45, 25, baseMountSystemUI, 0, v46, 0LL, 0LL);
      }
      return;
    }
    if ( !v19->fields.bgCamera )
      return;
    Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    bgCamera = v19->fields.bgCamera;
    if ( !bgCamera )
      goto LABEL_36;
    v48 = *(System_String_o **)&bgCamera[1].fields.m_CachedPtr;
    v49 = (System_String_o *)v19->fields.eventMaskFade;
    v50 = Item;
    v31 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C3B9B0(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v31,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v50 )
      goto LABEL_36;
    v32 = v50;
    v33 = v49;
    v34 = v48;
LABEL_18:
    CommonUI__OpenItemDetailDialog_31308824(v32, v33, v34, v31, 0LL);
    return;
  }
  Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  fadeInfo = v19->fields.fadeInfo;
  if ( !fadeInfo )
    goto LABEL_36;
  v36 = Item;
  v38 = *(_QWORD *)&fadeInfo->fields.m_CachedPtr;
  m_CancellationTokenSource = fadeInfo->fields.m_CancellationTokenSource;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v51.fields.currentCryptoKey = v38;
  *(_QWORD *)&v51.fields.fakeValue = m_CancellationTokenSource;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47882560(v51, 0LL);
  v40 = (ServantStatusDialog_EndDelegate_o *)sub_1C3B9B0(ServantStatusDialog_EndDelegate_TypeInfo);
  ServantStatusDialog_EndDelegate___ctor(
    v40,
    (Il2CppObject *)this,
    Method_EventPointItemListViewManager_closeSvtDetail__,
    0LL);
  if ( !v36 )
    goto LABEL_36;
  CommonUI__OpenServantStatusDialog_31245200(v36, 7, v39, v40, 0LL);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C26190 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C26190 = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1C3B9C0(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
          v14,
          1LL,
          v14->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x20
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_object__o *v41; // x24
  signed int max_length; // w8
  GiftEntity_array *v43; // x25
  __int64 v44; // x26
  EventRewardEntity_o *v45; // x29
  const MethodInfo *v46; // x3
  int32_t giftId; // w2
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  int64_t v57; // x1
  Il2CppClass **v58; // x0
  System_Text_StringBuilder_o *v59; // x23
  int32_t v60; // w25
  GiftEntity_o *v61; // x27
  const MethodInfo *v62; // x2
  GiftEntity_o *v63; // x26
  EventPointItemListViewManager_o *KindName; // x28
  const MethodInfo *v65; // x2
  System_String_o *GiftName; // x0
  EventPointItemListViewManager_o *appended; // x0
  const MethodInfo *v68; // x2
  System_String_o *v69; // x27
  System_String_o *v70; // x26
  System_String_o *v71; // x0
  System_String_o *v72; // x0
  EventPointReplaseRewardDialog_o *eventPointReplaseRewardDialog; // x19
  System_String_o *v74; // x0
  System_String_o *v75; // x21
  System_String_o *v76; // x21
  System_String_o *v77; // x22
  EventPointReplaseRewardDialog_ClickDelegate_o *v78; // x23

  if ( (byte_4C26185 & 1) == 0 )
  {
    sub_1C3B764(&EventPointReplaseRewardDialog_ClickDelegate_TypeInfo, eventRewardEntList);
    sub_1C3B764(&Method_DataManager_GetMasterData_GiftMaster___, v7);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserEventPointMaster___, v8);
    sub_1C3B764(&Method_DataManager_GetMaster_GiftMaster___, v9);
    sub_1C3B764(&DataManager_TypeInfo, v10);
    sub_1C3B764(&Method_DataMasterBase_GiftMaster__GiftEntity__string__getEntitys__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_GiftEntity__Add__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v15);
    sub_1C3B764(&System_Collections_Generic_List_GiftEntity__TypeInfo, v16);
    sub_1C3B764(&LocalizationManager_TypeInfo, v17);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1C3B764(&System_Text_StringBuilder_TypeInfo, v19);
    sub_1C3B764(&Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__, v20);
    sub_1C3B764(&EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo, v21);
    sub_1C3B764(&StringLiteral_43/*"\n"*/, v22);
    sub_1C3B764(&StringLiteral_5773/*"Effect/RecollectionQuest"*/, v23);
    sub_1C3B764(&StringLiteral_25761, v24);
    sub_1C3B764(&StringLiteral_5765/*"Effect/Event/"*/, v25);
    sub_1C3B764(&StringLiteral_5767/*"Effect/Event/{0}/{1}"*/, v26);
    sub_1C3B764(&StringLiteral_25790, v27);
    sub_1C3B764(&StringLiteral_25789, v28);
    byte_4C26185 = 1;
  }
  v29 = sub_1C3B9B0(EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
    goto LABEL_47;
  *(_QWORD *)(v29 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v29 + 16), (int64_t)this, v32, v33, v34, v35, v36, v37);
  *(_DWORD *)(v29 + 24) = eventId;
  if ( eventRewardEntList )
  {
    if ( *(_QWORD *)&eventRewardEntList->max_length )
    {
      v38 = System_Int32__ToString((int)v29 + 24, 0LL);
      v39 = System_String__Concat_63368612((System_String_o *)StringLiteral_5773/*"Effect/RecollectionQuest"*/, v38, 0LL);
      if ( !UnityEngine_PlayerPrefs__GetInt(v39, 0, 0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_47;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_GiftMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_47;
        DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
        v41 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GiftEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v41,
          (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_GiftMaster___);
        if ( !Instance )
          goto LABEL_47;
        Instance = (DataManager_o *)DataMasterBase_object__object__object___getEntitys(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      (const MethodInfo_329EB84 *)Method_DataMasterBase_GiftMaster__GiftEntity__string__getEntitys__);
        max_length = eventRewardEntList->max_length;
        if ( max_length >= 1 )
        {
          v43 = (GiftEntity_array *)Instance;
          v44 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v44 >= max_length )
              sub_1C3B9C8(Instance, v31);
            v45 = eventRewardEntList->m_Items[v44];
            if ( !v45 )
              break;
            if ( !MasterData_object )
              break;
            Instance = (DataManager_o *)GiftMaster__getDataById(
                                          (GiftMaster_o *)MasterData_object,
                                          v45->fields.giftId,
                                          0LL);
            if ( !Instance )
              break;
            giftId = v45->fields.giftId;
            if ( Instance->fields.m_CachedPtr != giftId )
            {
              Instance = (DataManager_o *)EventPointItemListViewManager__TargetItemTargetGiftEntity(
                                            (EventPointItemListViewManager_o *)Instance,
                                            v43,
                                            giftId,
                                            v46);
              if ( !v41 )
                break;
              items = v41->fields._items;
              v55 = Method_System_Collections_Generic_List_GiftEntity__Add__;
              ++v41->fields._version;
              if ( !items )
                break;
              size = v41->fields._size;
              v57 = (int64_t)Instance;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v41,
                  (Il2CppObject *)Instance,
                  *(const MethodInfo_368BC6C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
              }
              else
              {
                v58 = &items->obj.klass + size;
                v41->fields._size = size + 1;
                v58[4] = (Il2CppClass *)v57;
                sub_1C3B708((PartyOrganizationUtility_o *)(v58 + 4), v57, v48, v49, v50, v51, v52, v53);
              }
            }
            max_length = eventRewardEntList->max_length;
            if ( (int)++v44 >= max_length )
              goto LABEL_25;
          }
LABEL_47:
          sub_1C3B9C0(Instance, v31);
        }
LABEL_25:
        if ( !v41 )
          goto LABEL_47;
        if ( v41->fields._size >= 1 )
        {
          v59 = (System_Text_StringBuilder_o *)sub_1C3B9B0(System_Text_StringBuilder_TypeInfo);
          System_Text_StringBuilder___ctor(v59, 0LL);
          if ( v41->fields._size >= 1 )
          {
            v60 = 0;
            do
            {
              Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                            v41,
                                            v60,
                                            (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
              if ( !Instance || !MasterData_object )
                goto LABEL_47;
              v61 = (GiftEntity_o *)Instance;
              Instance = (DataManager_o *)GiftMaster__getDataById(
                                            (GiftMaster_o *)MasterData_object,
                                            Instance->fields.m_CachedPtr,
                                            0LL);
              v63 = (GiftEntity_o *)Instance;
              if ( v60 )
              {
                if ( !v59 )
                  goto LABEL_47;
                Instance = (DataManager_o *)System_Text_StringBuilder__Append_62529764(
                                              v59,
                                              (System_String_o *)StringLiteral_43/*"\n"*/,
                                              0LL);
              }
              KindName = (EventPointItemListViewManager_o *)EventPointItemListViewManager__GetKindName(
                                                              (EventPointItemListViewManager_o *)Instance,
                                                              v61,
                                                              v62);
              GiftName = EventPointItemListViewManager__GetGiftName(KindName, v61, v65);
              Instance = (DataManager_o *)System_String__Concat_63381876(
                                            (System_String_o *)KindName,
                                            (System_String_o *)StringLiteral_25789,
                                            GiftName,
                                            (System_String_o *)StringLiteral_25790,
                                            0LL);
              if ( !Instance )
                goto LABEL_47;
              Instance = (DataManager_o *)System_String__PadRight_63386724(
                                            (System_String_o *)Instance,
                                            15,
                                            0x3000u,
                                            0LL);
              if ( !v59 )
                goto LABEL_47;
              System_Text_StringBuilder__Append_62529764(v59, (System_String_o *)Instance, 0LL);
              appended = (EventPointItemListViewManager_o *)System_Text_StringBuilder__Append_62529764(
                                                              v59,
                                                              (System_String_o *)StringLiteral_25761,
                                                              0LL);
              Instance = (DataManager_o *)EventPointItemListViewManager__GetGiftName(appended, v63, v68);
              if ( !v63 )
                goto LABEL_47;
              v69 = (System_String_o *)Instance;
              Instance = (DataManager_o *)System_Int32__ToString((int)v63 + 28, 0LL);
              if ( !Instance )
                goto LABEL_47;
              v70 = System_String__PadLeft((System_String_o *)Instance, 2, 0x20u, 0LL);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              v71 = LocalizationManager__Get((System_String_o *)StringLiteral_5767/*"Effect/Event/{0}/{1}"*/, 0LL);
              v72 = System_String__Concat_63381876(v69, v70, v71, (System_String_o *)StringLiteral_25790, 0LL);
              System_Text_StringBuilder__Append_62529764(v59, v72, 0LL);
            }
            while ( ++v60 < v41->fields._size );
          }
          eventPointReplaseRewardDialog = this->fields.eventPointReplaseRewardDialog;
          v74 = System_Int32__ToString((int)v29 + 24, 0LL);
          v75 = System_String__Concat_63368612((System_String_o *)StringLiteral_5765/*"Effect/Event/"*/, v74, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Instance = (DataManager_o *)LocalizationManager__Get(v75, 0LL);
          if ( !v59 )
            goto LABEL_47;
          v76 = (System_String_o *)Instance;
          v77 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v59->klass->vtable._3_ToString.method)(
                                     v59,
                                     v59->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v78 = (EventPointReplaseRewardDialog_ClickDelegate_o *)sub_1C3B9B0(EventPointReplaseRewardDialog_ClickDelegate_TypeInfo);
          EventPointReplaseRewardDialog_ClickDelegate___ctor(
            v78,
            (Il2CppObject *)v29,
            Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__,
            0LL);
          if ( !eventPointReplaseRewardDialog )
            goto LABEL_47;
          EventPointReplaseRewardDialog__Open(eventPointReplaseRewardDialog, v76, v77, v78, -1, 0, 0, 0, 0, 0, 0LL);
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
  __int64 v9; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v11; // x20
  int v12; // w24
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3

  if ( (byte_4C2618F & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_EventPointItemListViewManager_OnMoveEnd__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Item__, v5);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v6);
    byte_4C2618F = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventPointItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_13:
    sub_1C3B9C0(ObjectList, v9);
  size = ObjectList->fields._size;
  v11 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v12 = 0;
  v13 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v11,
             v13,
             (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v15 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v12;
      EventPointItemListViewObject__Init_47497936((EventPointItemListViewObject_o *)Item, 4, v15, 0.1, v16);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v13;
  }
  while ( v13 < v11->fields._size );
  if ( !v12 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C2618D & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__, v9);
    sub_1C3B764(&Method_EventPointItemListViewManager_OnMoveEnd__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v12);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v13);
    byte_4C2618D = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)EventPointItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3B9C0(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C3B9C0(v19, v20);
      EventPointItemListViewObject__Init_47497936((EventPointItemListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__RequestListObject_47498036(
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C2618E & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__, v7);
    sub_1C3B764(&Method_EventPointItemListViewManager_OnMoveEnd__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v10);
    sub_1C3B764(&StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/, v11);
    byte_4C2618E = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)EventPointItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C3B9C0(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10129/*"PHOTO_TARGET_CHANGE_DIALOG_MESSAGE"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1C3B9C0(v17, v18);
      EventPointItemListViewObject__Init_47498540((EventPointItemListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
  }
}


void __fastcall EventPointItemListViewManager__SetMode(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        EventPointItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EventPointItemListViewManager__SetMode_47497052(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__SetMode_47497052(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C2618C & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_1C3B764(&StringLiteral_11544/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/, v5);
    byte_4C2618C = 1;
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
        sub_1C3B9C0(gameObject, v7);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11544/*"SERVANT_SORT_FILTER_SERVANT_INDIVIDUAL_DISPLAY"*/,
      0.0,
      0LL);
  }
}


void __fastcall EventPointItemListViewManager__SetMode_47497304(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  const MethodInfo *v11; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  EventPointItemListViewManager__SetMode_47497052(this, mode, v11);
}


void __fastcall EventPointItemListViewManager__SetMode_47497360(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EventPointItemListViewManager__SetMode_47497052(this, mode, v10);
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
  if ( (byte_4C2618B & 1) == 0 )
  {
    this = (EventPointItemListViewManager_o *)sub_1C3B764(&EventPointItemListViewObject_TypeInfo, obj);
    byte_4C2618B = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventPointItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointItemListViewObject_TypeInfo )
  {
    sub_1C3B9C0(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventPointItemListViewObject__Init_47496924((EventPointItemListViewObject_o *)obj, v7, (const MethodInfo *)item);
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
    sub_1C3B9C0(this, entitys);
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

  if ( (byte_4C2617E & 1) == 0 )
  {
    sub_1C3B764(&EventPointItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4C2617E = 1;
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
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3BC80(v7);
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

  if ( (byte_4C26180 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, value);
    byte_4C26180 = 1;
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
    v8 = sub_1C76C54(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3BC80(v7);
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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4C26192 & 1) == 0 )
  {
    sub_1C3B764(&Method_EventPointItemListViewManager_closeItemDetail__, isDecide);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4C26192 = 1;
  }
  v4 = Method_EventPointItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_EventPointItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C3B77C(Method_EventPointItemListViewManager_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v7);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__closeSvtDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C26193 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4C26193 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C26183 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C26183 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3B9C0(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C3B9C0(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1C3B9C0(0LL, v18);
      Item = (ListViewItem_o *)EventPointItemListViewObject__GetItem(
                                 (EventPointItemListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1C3B9C0(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_42215272((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1C3B9C0(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C3B9C0(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1C3B9C0(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1C3B9C0(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 4), (int64_t)v19, v22, v23, v24, v25, v26, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C26182 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    byte_4C26182 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C3B9C0(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1C3B9C0(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      v24 = (int64_t)Component_object;
      if ( !v11 )
        sub_1C3B9C0(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C3B9C0(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C3B708((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4C2617F & 1) == 0 )
  {
    sub_1C3B764(&EventPointItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4C2617F = 1;
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
    v8 = sub_1C76C54(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3BC80(v7);
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

  if ( (byte_4C26181 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, value);
    byte_4C26181 = 1;
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
    v8 = sub_1C76C54(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C3BC80(v7);
  EventPointItemListViewManager__get_ObjectList(v10, v11);
}


void __fastcall EventPointItemListViewManager__setNextRewardInfo(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v7; // w21
  int32_t v8; // w20
  __int64 methodPtr_low; // x10

  if ( (byte_4C26189 & 1) == 0 )
  {
    sub_1C3B764(&EventPointItemListViewItem_TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v4);
    byte_4C26189 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_12;
  size = itemList->fields._size;
  v7 = size - 1;
  if ( size >= 1 )
  {
    v8 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v8,
                                                                (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( v7 == v8 )
        goto LABEL_13;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v8;
    }
    while ( itemList );
LABEL_12:
    sub_1C3B9C0(itemList, method);
  }
LABEL_13:
  v8 = 0;
LABEL_14:
  ListViewManager__SetTopItem((ListViewManager_o *)this, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager_CallbackFunc___ctor(
        EventPointItemListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A81784;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A81744;
}


System_IAsyncResult_o *__fastcall EventPointItemListViewManager_CallbackFunc__BeginInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C3B718(this, &v5, callback, object);
}


void __fastcall EventPointItemListViewManager_CallbackFunc__EndInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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
    sub_1C3B9C0(this, isOk);
  EventPointItemListViewManager__CloseReplaseRewardDialog(this->fields.__4__this, this->fields.eventId, method);
}