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

  if ( (byte_4B1A274 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B1A274 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
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
  if ( (byte_4B1A266 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5738/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, *(_QWORD *)&eventId, method);
    byte_4B1A266 = 1;
  }
  eventPointReplaseRewardDialog = this->fields.eventPointReplaseRewardDialog;
  if ( !eventPointReplaseRewardDialog )
    sub_1BCAA3C(0LL, *(_QWORD *)&eventId);
  EventPointReplaseRewardDialog__Close(eventPointReplaseRewardDialog, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  v6 = System_String__Concat_62401220((System_String_o *)StringLiteral_5738/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v5, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x22
  __int64 v18; // x8
  int v19; // w27
  int v20; // w28
  EventRewardEntity_o *v21; // x24
  bool v22; // w25
  GiftEntity_o *DataById; // x26
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  EventPointItemListViewItem_o *v27; // x23
  const MethodInfo *v28; // x4
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x8
  _QWORD *v36; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v38; // x8

  if ( (byte_4B1A264 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, rewardList, currentPoint);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventPointMaster___, v7, v8);
    sub_1BCA7E0(&EventPointItemListViewItem_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__Add__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B1A264 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( rewardList )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    MasterData_object = DataManager__GetMasterData_object_(
                          Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    v18 = *(_QWORD *)&rewardList->max_length;
    v19 = v18 - 1;
    if ( (int)v18 >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        v21 = rewardList->m_Items[v20];
        if ( !v21 )
          break;
        if ( !MasterData_object )
          break;
        v22 = v21->fields.point <= currentPoint;
        DataById = GiftMaster__getDataById((GiftMaster_o *)MasterData_object, v21->fields.giftId, 0LL);
        v27 = (EventPointItemListViewItem_o *)sub_1BCAA2C(EventPointItemListViewItem_TypeInfo, v24, v25, v26);
        EventPointItemListViewItem___ctor(v27, v21, DataById, v22, v28);
        Instance = (DataManager_o *)this->fields.itemList;
        if ( !Instance )
          break;
        v35 = *(_QWORD *)&Instance->fields.m_CachedPtr;
        v36 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++HIDWORD(Instance->fields.m_CancellationTokenSource);
        if ( !v35 )
          break;
        m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v35 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            (Il2CppObject *)v27,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = v35 + 8 * m_CancellationTokenSource_low;
          LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v38 + 32) = v27;
          sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 32), (int64_t)v27, v29, v30, v31, v32, v33, v34);
        }
        if ( v19 == v20 )
          goto LABEL_18;
        if ( ++v20 >= rewardList->max_length )
          sub_1BCAA44(Instance, v16);
      }
LABEL_20:
      sub_1BCAA3C(Instance, v16);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t type; // w8
  __int64 v21; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *Name; // x19

  if ( (byte_4B1A268 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_CommandCodeMaster___, gift, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    this = (EventPointItemListViewManager_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v18, v19);
    byte_4B1A268 = 1;
  }
  if ( !gift )
    goto LABEL_22;
  type = gift->fields.type;
  if ( type == 11 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( this )
          return CommandCodeEntity__GetName((CommandCodeEntity_o *)this, 0LL);
      }
    }
    goto LABEL_22;
  }
  if ( type == 2 )
  {
    this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)this,
                                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
      if ( this )
      {
        this = (EventPointItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
        if ( this )
          return (System_String_o *)this->fields.m_CancellationTokenSource;
      }
    }
    goto LABEL_22;
  }
  if ( type != 1 )
    return (System_String_o *)StringLiteral_1/*""*/;
  this = (EventPointItemListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventPointItemListViewManager_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)this,
                                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (this = (EventPointItemListViewManager_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                    gift->fields.objectId,
                                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_22:
    sub_1BCAA3C(this, gift);
  }
  Name = ServantEntity__GetName((ServantEntity_o *)this, -1, 0, -1, 0, 0LL);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v21);
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_47047272(Name, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventPointItemListViewItem_o *__fastcall EventPointItemListViewManager__GetItem(
        EventPointItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  EventPointItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B1A26A & 1) == 0 )
  {
    sub_1BCA7E0(&EventPointItemListViewItem_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5, v6);
    byte_4B1A26A = 1;
  }
  result = (EventPointItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (EventPointItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)result,
                                               index,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2

  if ( (byte_4B1A267 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, gift, method);
    sub_1BCA7E0(&StringLiteral_5731/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/, v4, v5);
    this = (EventPointItemListViewManager_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B1A267 = 1;
  }
  if ( !gift )
    sub_1BCAA3C(this, gift);
  if ( gift->fields.type != 11 )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, gift);
  return LocalizationManager__Get((System_String_o *)StringLiteral_5731/*"EVENT_POINT_GIFT_ADD_COMMAND_CODE"*/, 0LL);
}


void __fastcall EventPointItemListViewManager__OnClickListView(
        EventPointItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  CommonUI_o *Item; // x0
  const MethodInfo *v24; // x1
  __int64 methodPtr_low; // x10
  struct AssetsInfo_o *assetsInfo; // x8
  CommonUI_o *v27; // x20
  int v28; // w8
  struct SoundInfo_o *soundInfo; // x8
  int32_t v30; // w0
  Il2CppObject *v31; // x0
  ItemEntity_o *baseMount; // x20
  CommonUI_o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  ItemDetailInfoComponent_CallbackFunc_o *v37; // x22
  Il2CppObject *Instance; // x0
  System_String_o *eventMaskFade; // x21
  System_String_o *retryBootDialog; // x20
  Il2CppObject *v41; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  ItemDetailInfoComponent_CallbackFunc_o *v45; // x23
  CommonUI_o *v46; // x0
  System_String_o *v47; // x1
  System_String_o *v48; // x2
  struct FadeInfo_o *fadeInfo; // x8
  CommonUI_o *v50; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x21
  __int64 v52; // x22
  int32_t v53; // w21
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  ServantStatusDialog_EndDelegate_o *v57; // x22
  struct SoundInfo_o *v58; // x8
  int v59; // w8
  Il2CppObject *v60; // x0
  CommandCodeEntity_o *baseMountSystemUI; // x20
  CommonUI_o *v62; // x21
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  ServantStatusDialog_EndDelegate_o *v66; // x22
  __int64 v67; // x2
  __int64 v68; // x3
  struct UnityEngine_Camera_o *bgCamera; // x8
  System_String_o *v70; // x22
  System_String_o *v71; // x20
  CommonUI_o *v72; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  if ( (byte_4B1A271 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, obj, method);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_EventPointItemListViewManager_CloseCommandCodeDetail__, v7, v8);
    sub_1BCA7E0(&Method_EventPointItemListViewManager_OnClickListView__, v9, v10);
    sub_1BCA7E0(&Method_EventPointItemListViewManager_closeItemDetail__, v11, v12);
    sub_1BCA7E0(&Method_EventPointItemListViewManager_closeSvtDetail__, v13, v14);
    sub_1BCA7E0(&EventPointItemListViewObject_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19, v20);
    byte_4B1A271 = 1;
  }
  v21 = Method_EventPointItemListViewManager_OnClickListView__;
  if ( (*((_BYTE *)Method_EventPointItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1BCA7F8(Method_EventPointItemListViewManager_OnClickListView__);
  v22 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
  if ( !obj )
    goto LABEL_36;
  methodPtr_low = LOBYTE(EventPointItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_36;
  if ( (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointItemListViewObject_TypeInfo )
    goto LABEL_36;
  Item = (CommonUI_o *)EventPointItemListViewObject__GetItem((EventPointItemListViewObject_o *)obj, v24);
  if ( !Item )
    goto LABEL_36;
  assetsInfo = Item->fields.assetsInfo;
  v27 = Item;
  if ( !assetsInfo )
    goto LABEL_36;
  v28 = *(_DWORD *)&assetsInfo->fields.show;
  if ( v28 != 1 )
  {
    if ( (v28 & 0xFFFFFFFE) != 2 )
      return;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    eventMaskFade = (System_String_o *)v27->fields.eventMaskFade;
    retryBootDialog = (System_String_o *)v27->fields.retryBootDialog;
    v41 = Instance;
    v45 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v42,
                                                      v43,
                                                      v44);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v45,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v41 )
      goto LABEL_36;
    v46 = (CommonUI_o *)v41;
    v47 = eventMaskFade;
    v48 = retryBootDialog;
    goto LABEL_18;
  }
  soundInfo = Item->fields.soundInfo;
  if ( soundInfo )
  {
    v30 = *((_DWORD *)&soundInfo->fields.UnityEngine_Behaviour_Fields + 1);
    if ( v30 == 2 )
    {
      v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      baseMount = (ItemEntity_o *)v27->fields.baseMount;
      v33 = (CommonUI_o *)v31;
      v37 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                        ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                        v34,
                                                        v35,
                                                        v36);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v37,
        (Il2CppObject *)this,
        (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
        0LL);
      if ( v33 )
      {
        CommonUI__OpenItemDetailDialog(v33, baseMount, v37, 50, 0LL);
        return;
      }
LABEL_36:
      sub_1BCAA3C(Item, v24);
    }
  }
  else
  {
    v30 = 0;
  }
  if ( !Gift__IsServant(v30, 0LL) )
  {
    v58 = v27->fields.soundInfo;
    if ( !v58 )
      return;
    v59 = *((_DWORD *)&v58->fields.UnityEngine_Behaviour_Fields + 1);
    if ( v59 != 12 )
    {
      if ( v59 == 11 )
      {
        v60 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        baseMountSystemUI = (CommandCodeEntity_o *)v27->fields.baseMountSystemUI;
        v62 = (CommonUI_o *)v60;
        v66 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v63, v64, v65);
        ServantStatusDialog_EndDelegate___ctor(
          v66,
          (Il2CppObject *)this,
          Method_EventPointItemListViewManager_CloseCommandCodeDetail__,
          0LL);
        if ( !v62 )
          goto LABEL_36;
        CommonUI__OpenServantEquipStatusDialog_30782812(v62, 25, baseMountSystemUI, 0, v66, 0LL, 0LL);
      }
      return;
    }
    if ( !v27->fields.bgCamera )
      return;
    Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    bgCamera = v27->fields.bgCamera;
    if ( !bgCamera )
      goto LABEL_36;
    v70 = *(System_String_o **)&bgCamera[1].fields.m_CachedPtr;
    v71 = (System_String_o *)v27->fields.eventMaskFade;
    v72 = Item;
    v45 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v24,
                                                      v67,
                                                      v68);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v45,
      (Il2CppObject *)this,
      (intptr_t)Method_EventPointItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v72 )
      goto LABEL_36;
    v46 = v72;
    v47 = v71;
    v48 = v70;
LABEL_18:
    CommonUI__OpenItemDetailDialog_30842472(v46, v47, v48, v45, 0LL);
    return;
  }
  Item = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  fadeInfo = v27->fields.fadeInfo;
  if ( !fadeInfo )
    goto LABEL_36;
  v50 = Item;
  v52 = *(_QWORD *)&fadeInfo->fields.m_CachedPtr;
  m_CancellationTokenSource = fadeInfo->fields.m_CancellationTokenSource;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
  *(_QWORD *)&v73.fields.currentCryptoKey = v52;
  *(_QWORD *)&v73.fields.fakeValue = m_CancellationTokenSource;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v73, 0LL);
  v57 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v54, v55, v56);
  ServantStatusDialog_EndDelegate___ctor(
    v57,
    (Il2CppObject *)this,
    Method_EventPointItemListViewManager_closeSvtDetail__,
    0LL);
  if ( !v50 )
    goto LABEL_36;
  CommonUI__OpenServantStatusDialog_30779656(v50, 7, v53, v57, 0LL);
}


void __fastcall EventPointItemListViewManager__OnMoveEnd(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B1A270 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A270 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_1BCAA3C(0LL, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v15->klass->vtable._8_UpdateScrollbars.method)(
          v15,
          1LL,
          v15->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.callbackFunc2, 0LL, v9, v10, v11, v12, v13, v14);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x20
  DataManager_o *Instance; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_String_o *v56; // x0
  System_String_o *v57; // x0
  Il2CppObject *MasterData_object; // x22
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Collections_Generic_List_object__o *v62; // x24
  __int64 giftId; // x2
  const MethodInfo *v64; // x3
  signed int max_length; // w8
  GiftEntity_array *v66; // x25
  __int64 v67; // x26
  EventRewardEntity_o *v68; // x29
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct System_Object_array *items; // x8
  _QWORD *v76; // x9
  __int64 size; // x10
  int64_t v78; // x1
  Il2CppClass **v79; // x0
  System_Text_StringBuilder_o *v80; // x23
  int32_t v81; // w25
  GiftEntity_o *v82; // x27
  const MethodInfo *v83; // x2
  GiftEntity_o *v84; // x26
  EventPointItemListViewManager_o *KindName; // x28
  const MethodInfo *v86; // x2
  System_String_o *GiftName; // x0
  EventPointItemListViewManager_o *appended; // x0
  const MethodInfo *v89; // x2
  System_String_o *v90; // x27
  __int64 v91; // x1
  System_String_o *v92; // x26
  System_String_o *v93; // x0
  System_String_o *v94; // x0
  EventPointReplaseRewardDialog_o *eventPointReplaseRewardDialog; // x19
  System_String_o *v96; // x0
  __int64 v97; // x1
  System_String_o *v98; // x21
  System_String_o *v99; // x21
  System_String_o *v100; // x22
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  EventPointReplaseRewardDialog_ClickDelegate_o *v104; // x23

  if ( (byte_4B1A265 & 1) == 0 )
  {
    sub_1BCA7E0(&EventPointReplaseRewardDialog_ClickDelegate_TypeInfo, eventRewardEntList, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventPointMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_getEntitys_GiftMaster__GiftEntity___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Count__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GiftEntity__get_Item__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_GiftEntity__TypeInfo, v21, v22);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25, v26);
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__, v29, v30);
    sub_1BCA7E0(&EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo, v31, v32);
    sub_1BCA7E0(&StringLiteral_43/*"\n"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_5738/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_25497/*"→　「"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_5730/*"EVENT_POINT_GIFT_ADD"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_5732/*"EVENT_POINT_GIFT_ADD_COUNT"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_25524/*"」"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_25523/*"「"*/, v45, v46);
    byte_4B1A265 = 1;
  }
  v47 = sub_1BCAA2C(
          EventPointItemListViewManager___c__DisplayClass20_0_TypeInfo,
          eventRewardEntList,
          *(_QWORD *)&eventId,
          method);
  System_Object___ctor((Il2CppObject *)v47, 0LL);
  if ( !v47 )
    goto LABEL_45;
  *(_QWORD *)(v47 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v47 + 16), (int64_t)this, v50, v51, v52, v53, v54, v55);
  *(_DWORD *)(v47 + 24) = eventId;
  if ( eventRewardEntList )
  {
    if ( *(_QWORD *)&eventRewardEntList->max_length )
    {
      v56 = System_Int32__ToString((int)v47 + 24, 0LL);
      v57 = System_String__Concat_62401220((System_String_o *)StringLiteral_5738/*"EVENT_POINT_OPEN_REPLASE_REWARD_"*/, v56, 0LL);
      if ( !UnityEngine_PlayerPrefs__GetInt(v57, 0, 0LL) )
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_45;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_45;
        DataManager__GetMasterData_object_(
          Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
        v62 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_GiftEntity__TypeInfo,
                                                             v59,
                                                             v60,
                                                             v61);
        System_Collections_Generic_List_object____ctor(
          v62,
          (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GiftEntity___ctor__);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_45;
        Instance = (DataManager_o *)DataManager__getEntitys_object__object_(
                                      Instance,
                                      (const MethodInfo_2F12EF0 *)Method_DataManager_getEntitys_GiftMaster__GiftEntity___);
        max_length = eventRewardEntList->max_length;
        if ( max_length >= 1 )
        {
          v66 = (GiftEntity_array *)Instance;
          v67 = 0LL;
          while ( 1 )
          {
            if ( (unsigned int)v67 >= max_length )
              sub_1BCAA44(Instance, v49);
            v68 = eventRewardEntList->m_Items[v67];
            if ( !v68 )
              break;
            if ( !MasterData_object )
              break;
            Instance = (DataManager_o *)GiftMaster__getDataById(
                                          (GiftMaster_o *)MasterData_object,
                                          v68->fields.giftId,
                                          0LL);
            if ( !Instance )
              break;
            giftId = (unsigned int)v68->fields.giftId;
            if ( Instance->fields.m_CachedPtr != (_DWORD)giftId )
            {
              Instance = (DataManager_o *)EventPointItemListViewManager__TargetItemTargetGiftEntity(
                                            (EventPointItemListViewManager_o *)Instance,
                                            v66,
                                            giftId,
                                            v64);
              if ( !v62 )
                break;
              items = v62->fields._items;
              v76 = Method_System_Collections_Generic_List_GiftEntity__Add__;
              ++v62->fields._version;
              if ( !items )
                break;
              size = v62->fields._size;
              v78 = (int64_t)Instance;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v62,
                  (Il2CppObject *)Instance,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
              }
              else
              {
                v79 = &items->obj.klass + size;
                v62->fields._size = size + 1;
                v79[4] = (Il2CppClass *)v78;
                sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 4), v78, v69, v70, v71, v72, v73, v74);
              }
            }
            max_length = eventRewardEntList->max_length;
            if ( (int)++v67 >= max_length )
              goto LABEL_23;
          }
LABEL_45:
          sub_1BCAA3C(Instance, v49);
        }
LABEL_23:
        if ( !v62 )
          goto LABEL_45;
        if ( v62->fields._size >= 1 )
        {
          v80 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, v49, giftId, v64);
          System_Text_StringBuilder___ctor(v80, 0LL);
          if ( v62->fields._size >= 1 )
          {
            v81 = 0;
            do
            {
              Instance = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                            v62,
                                            v81,
                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_GiftEntity__get_Item__);
              if ( !Instance || !MasterData_object )
                goto LABEL_45;
              v82 = (GiftEntity_o *)Instance;
              Instance = (DataManager_o *)GiftMaster__getDataById(
                                            (GiftMaster_o *)MasterData_object,
                                            Instance->fields.m_CachedPtr,
                                            0LL);
              v84 = (GiftEntity_o *)Instance;
              if ( v81 )
              {
                if ( !v80 )
                  goto LABEL_45;
                Instance = (DataManager_o *)System_Text_StringBuilder__Append_61563116(
                                              v80,
                                              (System_String_o *)StringLiteral_43/*"\n"*/,
                                              0LL);
              }
              KindName = (EventPointItemListViewManager_o *)EventPointItemListViewManager__GetKindName(
                                                              (EventPointItemListViewManager_o *)Instance,
                                                              v82,
                                                              v83);
              GiftName = EventPointItemListViewManager__GetGiftName(KindName, v82, v86);
              Instance = (DataManager_o *)System_String__Concat_62414484(
                                            (System_String_o *)KindName,
                                            (System_String_o *)StringLiteral_25523/*"「"*/,
                                            GiftName,
                                            (System_String_o *)StringLiteral_25524/*"」"*/,
                                            0LL);
              if ( !Instance )
                goto LABEL_45;
              Instance = (DataManager_o *)System_String__PadRight_62419332(
                                            (System_String_o *)Instance,
                                            15,
                                            0x3000u,
                                            0LL);
              if ( !v80 )
                goto LABEL_45;
              System_Text_StringBuilder__Append_61563116(v80, (System_String_o *)Instance, 0LL);
              appended = (EventPointItemListViewManager_o *)System_Text_StringBuilder__Append_61563116(
                                                              v80,
                                                              (System_String_o *)StringLiteral_25497/*"→　「"*/,
                                                              0LL);
              Instance = (DataManager_o *)EventPointItemListViewManager__GetGiftName(appended, v84, v89);
              if ( !v84 )
                goto LABEL_45;
              v90 = (System_String_o *)Instance;
              Instance = (DataManager_o *)System_Int32__ToString((int)v84 + 28, 0LL);
              if ( !Instance )
                goto LABEL_45;
              v92 = System_String__PadLeft((System_String_o *)Instance, 2, 0x20u, 0LL);
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v91);
              v93 = LocalizationManager__Get((System_String_o *)StringLiteral_5732/*"EVENT_POINT_GIFT_ADD_COUNT"*/, 0LL);
              v94 = System_String__Concat_62414484(v90, v92, v93, (System_String_o *)StringLiteral_25524/*"」"*/, 0LL);
              System_Text_StringBuilder__Append_61563116(v80, v94, 0LL);
            }
            while ( ++v81 < v62->fields._size );
          }
          eventPointReplaseRewardDialog = this->fields.eventPointReplaseRewardDialog;
          v96 = System_Int32__ToString((int)v47 + 24, 0LL);
          v98 = System_String__Concat_62401220((System_String_o *)StringLiteral_5730/*"EVENT_POINT_GIFT_ADD"*/, v96, 0LL);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v97);
          Instance = (DataManager_o *)LocalizationManager__Get(v98, 0LL);
          if ( !v80 )
            goto LABEL_45;
          v99 = (System_String_o *)Instance;
          v100 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v80->klass->vtable._3_ToString.method)(
                                      v80,
                                      v80->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
          v104 = (EventPointReplaseRewardDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                    EventPointReplaseRewardDialog_ClickDelegate_TypeInfo,
                                                                    v101,
                                                                    v102,
                                                                    v103);
          EventPointReplaseRewardDialog_ClickDelegate___ctor(
            v104,
            (Il2CppObject *)v47,
            Method_EventPointItemListViewManager___c__DisplayClass20_0__OpenReplaseRewardDialog_b__0__,
            0LL);
          if ( !eventPointReplaseRewardDialog )
            goto LABEL_45;
          EventPointReplaseRewardDialog__Open(eventPointReplaseRewardDialog, v99, v100, v104, -1, 0, 0, 0, 0, 0, 0LL);
        }
      }
    }
  }
}


void __fastcall EventPointItemListViewManager__RequestInto(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x1
  System_Collections_Generic_List_EventPointItemListViewObject__o *ObjectList; // x0
  __int64 v14; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v16; // x20
  int v17; // w24
  int32_t v18; // w21
  Il2CppObject *Item; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Action_o *v23; // x23
  const MethodInfo *v24; // x3

  if ( (byte_4B1A26F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventPointItemListViewManager_OnMoveEnd__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Item__, v8, v9);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v10, v11);
    byte_4B1A26F = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = EventPointItemListViewManager__get_ObjectList(this, v12);
  if ( !ObjectList )
LABEL_13:
    sub_1BCAA3C(ObjectList, v14);
  size = ObjectList->fields._size;
  v16 = (System_Collections_Generic_List_object__o *)ObjectList;
  this->fields.callbackCount = size;
  if ( size < 1 )
    goto LABEL_12;
  v17 = 0;
  v18 = 0;
  do
  {
    Item = System_Collections_Generic_List_object___get_Item(
             v16,
             v18,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v23 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v20, v21, v22);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v17;
      EventPointItemListViewObject__Init_46631188((EventPointItemListViewObject_o *)Item, 4, v23, 0.1, v24);
    }
    else
    {
      --this->fields.callbackCount;
    }
    ++v18;
  }
  while ( v18 < v16->fields._size );
  if ( !v17 )
  {
LABEL_12:
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v22; // x1
  int32_t size; // w8
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1A26D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__, v9, v10);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__,
      v11,
      v12);
    sub_1BCA7E0(&Method_EventPointItemListViewManager_OnMoveEnd__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v17, v18);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v19, v20);
    byte_4B1A26D = 1;
  }
  memset(&v32, 0, sizeof(v32));
  ObjectList = (System_Collections_Generic_List_object__o *)EventPointItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v22);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v32,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v32,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v32.fields._current;
      v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
      System_Action___ctor(v28, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v29, v30);
      EventPointItemListViewObject__Init_46631188((EventPointItemListViewObject_o *)current, mode, v28, delay, v31);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v32,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__RequestListObject_46631288(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v20; // x1
  int32_t size; // w8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  Il2CppObject *current; // x21
  System_Action_o *v26; // x22
  __int64 v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1A26E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_EventPointItemListViewManager_OnMoveEnd__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointItemListViewObject__get_Count__, v15, v16);
    sub_1BCA7E0(&StringLiteral_10069/*"OnMoveEnd"*/, v17, v18);
    byte_4B1A26E = 1;
  }
  memset(&v30, 0, sizeof(v30));
  ObjectList = (System_Collections_Generic_List_object__o *)EventPointItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BCAA3C(0LL, v20);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10069/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v30,
      ObjectList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventPointItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v30,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__MoveNext__) )
    {
      current = v30.fields._current;
      v26 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v22, v23, v24);
      System_Action___ctor(v26, (Il2CppObject *)this, Method_EventPointItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BCAA3C(v27, v28);
      EventPointItemListViewObject__Init_46631792((EventPointItemListViewObject_o *)current, mode, v26, v29);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v30,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventPointItemListViewObject__Dispose__);
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EventPointItemListViewManager__SetMode_46630304(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__SetMode_46630304(
        EventPointItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B1A26C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&StringLiteral_11448/*"RequestInto"*/, v5, v6);
    byte_4B1A26C = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( mode == 1 )
  {
    ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
    scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( UnityEngine_Object__op_Inequality(scrollBar, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
      {
        sub_1BCAA3C(gameObject, v9);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11448/*"RequestInto"*/,
      0.0,
      0LL);
  }
}


void __fastcall EventPointItemListViewManager__SetMode_46630556(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v5,
    v6,
    v7,
    v8);
  EventPointItemListViewManager__SetMode_46630304(this, mode, v11);
}


void __fastcall EventPointItemListViewManager__SetMode_46630612(
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.callbackFunc2,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  EventPointItemListViewManager__SetMode_46630304(this, mode, v10);
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
  if ( (byte_4B1A26B & 1) == 0 )
  {
    this = (EventPointItemListViewManager_o *)sub_1BCA7E0(&EventPointItemListViewObject_TypeInfo, obj, item);
    byte_4B1A26B = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(EventPointItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (EventPointItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != EventPointItemListViewObject_TypeInfo )
  {
    sub_1BCAA3C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  EventPointItemListViewObject__Init_46630176((EventPointItemListViewObject_o *)obj, v7, (const MethodInfo *)item);
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
    sub_1BCAA3C(this, entitys);
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

  if ( (byte_4B1A25E & 1) == 0 )
  {
    sub_1BCA7E0(&EventPointItemListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B1A25E = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B1A260 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1A260 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  EventPointItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager__closeItemDetail(
        EventPointItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B1A272 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventPointItemListViewManager_closeItemDetail__, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B1A272 = 1;
  }
  v5 = Method_EventPointItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_EventPointItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_EventPointItemListViewManager_closeItemDetail__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v8);
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

  if ( (byte_4B1A273 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B1A273 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


System_Collections_Generic_List_EventPointItemListViewObject__o *__fastcall EventPointItemListViewManager__get_ClippingObjectList(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x21
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v29; // x1
  Il2CppObject *v30; // x21
  ListViewItem_o *Item; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  _BOOL8 v39; // x0
  __int64 v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1A263 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B1A263 = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v47.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      v30 = Component_object;
      if ( !Component_object )
        sub_1BCAA3C(0LL, v29);
      Item = (ListViewItem_o *)EventPointItemListViewObject__GetItem(
                                 (EventPointItemListViewObject_o *)Component_object,
                                 v29);
      if ( !Item )
        sub_1BCAA3C(0LL, v32);
      if ( Item->fields.isTermination )
      {
        v39 = ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
        if ( v39 )
        {
          if ( !v21 )
            sub_1BCAA3C(v39, v40);
          items = v21->fields._items;
          v42 = Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__;
          ++v21->fields._version;
          if ( !items )
            sub_1BCAA3C(v39, v40);
          size = v21->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            v30,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v21 )
          sub_1BCAA3C(Item, v32);
        items = v21->fields._items;
        v42 = Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1BCAA3C(Item, v32);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v44 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v30, v33, v34, v35, v36, v37, v38);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v21;
}


System_Collections_Generic_List_EventPointItemListViewObject__o *__fastcall EventPointItemListViewManager__get_ObjectList(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  __int64 v22; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *Component_object; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x1
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1A262 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    byte_4B1A262 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventPointItemListViewObject__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventPointItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BCAA3C(0LL, v22);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v26 )
    {
      if ( !current )
        sub_1BCAA3C(v26, v27);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventPointItemListViewObject___);
      v35 = (int64_t)Component_object;
      if ( !v21 )
        sub_1BCAA3C(Component_object, Component_object);
      items = v21->fields._items;
      v37 = Method_System_Collections_Generic_List_EventPointItemListViewObject__Add__;
      ++v21->fields._version;
      if ( !items )
        sub_1BCAA3C(Component_object, Component_object);
      size = v21->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v21,
          Component_object,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v21->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 4), v35, v29, v30, v31, v32, v33, v34);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_EventPointItemListViewObject__o *)v21;
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

  if ( (byte_4B1A25F & 1) == 0 )
  {
    sub_1BCA7E0(&EventPointItemListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B1A25F = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
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

  if ( (byte_4B1A261 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1A261 = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  EventPointItemListViewManager__get_ObjectList(v10, v11);
}


void __fastcall EventPointItemListViewManager__setNextRewardInfo(
        EventPointItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *itemList; // x0
  int size; // w8
  int v10; // w21
  int32_t v11; // w20
  __int64 methodPtr_low; // x10

  if ( (byte_4B1A269 & 1) == 0 )
  {
    sub_1BCA7E0(&EventPointItemListViewItem_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6, v7);
    byte_4B1A269 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_12;
  size = itemList->fields._size;
  v10 = size - 1;
  if ( size >= 1 )
  {
    v11 = 0;
    do
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                itemList,
                                                                v11,
                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
      if ( v10 == v11 )
        goto LABEL_13;
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      ++v11;
    }
    while ( itemList );
LABEL_12:
    sub_1BCAA3C(itemList, method);
  }
LABEL_13:
  v11 = 0;
LABEL_14:
  ListViewManager__SetTopItem((ListViewManager_o *)this, v11, 0LL);
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
  sub_1BCA784(
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
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A11F48;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11F08;
}


System_IAsyncResult_o *__fastcall EventPointItemListViewManager_CallbackFunc__BeginInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v5, callback, object);
}


void __fastcall EventPointItemListViewManager_CallbackFunc__EndInvoke(
        EventPointItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall EventPointItemListViewManager___c__DisplayClass20_0___OpenReplaseRewardDialog_b__0(
        EventPointItemListViewManager___c__DisplayClass20_0_o *this,
        bool isOk,
        const MethodInfo *method)
{
  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, isOk);
  EventPointItemListViewManager__CloseReplaseRewardDialog(this->fields.__4__this, this->fields.eventId, method);
}