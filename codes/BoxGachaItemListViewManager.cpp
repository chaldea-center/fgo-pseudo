void BoxGachaItemListViewManager___ctor(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void BoxGachaItemListViewManager__ClickResetGachaBtn(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  UserBoxGachaEntity_o *Entity; // x20
  BoxGachaEntity_o *v9; // x22
  Il2CppObject *MessagePrizeName; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  struct System_Int32_array *baseIds; // x8
  int max_length; // w22
  _BOOL4 isResetTarget; // w20
  System_String_o *v16; // x20
  int *v17; // x1
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  Il2CppObject *v20; // x0
  Il2CppObject *v21; // x21
  System_String_o *v22; // x22
  System_String_o *v23; // x23
  System_String_o *v24; // x24
  CommonConfirmDialog_ClickDelegate_o *v25; // x25
  int v26; // [xsp+48h] [xbp-58h] BYREF
  int v27; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4D26ABC & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&Method_BoxGachaItemListViewManager_ClickResetGachaBtn__);
    sub_1C94098(&Method_BoxGachaItemListViewManager_closeEventSvtConfirmDlg__);
    sub_1C94098(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_BoxGachaMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserBoxGachaMaster___);
    sub_1C94098(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int__GetEntity__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_2994/*"BOX_GACHA_RESET_MSG"*/);
    sub_1C94098(&StringLiteral_2991/*"BOX_GACHA_RESET_LIMIT_NO_RARE_MSG"*/);
    sub_1C94098(&StringLiteral_2995/*"BOX_GACHA_RESET_NO_RARE_MSG"*/);
    sub_1C94098(&StringLiteral_2998/*"BOX_GACHA_RESET_TITLE"*/);
    sub_1C94098(&StringLiteral_3693/*"COMMON_CONFIRM_NO"*/);
    sub_1C94098(&StringLiteral_2990/*"BOX_GACHA_RESET_LIMIT_MSG"*/);
    sub_1C94098(&StringLiteral_2984/*"BOX_GACHA_EXE_TXT"*/);
    byte_4D26ABC = 1;
  }
  v3 = Method_BoxGachaItemListViewManager_ClickResetGachaBtn__;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_ClickResetGachaBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_BoxGachaItemListViewManager_ClickResetGachaBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object
    || (Entity = UserBoxGachaMaster__GetEntity(
                   (UserBoxGachaMaster_o *)MasterData_object,
                   *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                   this->fields.currentBoxGachaId,
                   0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_BoxGachaMaster___)) == 0
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      this->fields.currentBoxGachaId,
                                      (const MethodInfo_345B4C0 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int__GetEntity__),
        !Entity)
    || (v9 = (BoxGachaEntity_o *)Instance) == 0 )
  {
LABEL_38:
    sub_1C942F0(Instance, v6);
  }
  this->fields.isResetTarget = BoxGachaEntity__IsResetTarget(
                                 (BoxGachaEntity_o *)Instance,
                                 Entity->fields.boxIndex + 1,
                                 0);
  MessagePrizeName = (Il2CppObject *)BoxGachaEntity__GetMessagePrizeName(v9, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_2994/*"BOX_GACHA_RESET_MSG"*/, 0);
  v12 = System_String__Format(v11, MessagePrizeName, 0);
  Instance = (DataManager_o *)BoxGachaEntity__IsLimitLineUp(v9, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    baseIds = v9->fields.baseIds;
    if ( !baseIds )
      goto LABEL_38;
    max_length = baseIds->max_length;
    isResetTarget = this->fields.isResetTarget;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( this->fields.isResetTarget )
      {
LABEL_23:
        v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2990/*"BOX_GACHA_RESET_LIMIT_MSG"*/, 0);
        v26 = max_length;
        v17 = &v26;
LABEL_30:
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v17);
        v19 = System_String__Format_64459052(v16, MessagePrizeName, v20, 0);
        goto LABEL_31;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isResetTarget )
        goto LABEL_23;
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2991/*"BOX_GACHA_RESET_LIMIT_NO_RARE_MSG"*/, 0);
    v17 = &v27;
    v27 = max_length;
    goto LABEL_30;
  }
  if ( this->fields.isResetTarget )
    goto LABEL_32;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2995/*"BOX_GACHA_RESET_NO_RARE_MSG"*/, 0);
  v19 = System_String__Format(v18, MessagePrizeName, 0);
LABEL_31:
  v12 = v19;
LABEL_32:
  v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2998/*"BOX_GACHA_RESET_TITLE"*/, 0);
  v23 = LocalizationManager__Get((System_String_o *)StringLiteral_2984/*"BOX_GACHA_EXE_TXT"*/, 0);
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMON_CONFIRM_NO"*/, 0);
  v25 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C942E4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v25,
    (Il2CppObject *)this,
    Method_BoxGachaItemListViewManager_closeEventSvtConfirmDlg__,
    0);
  Instance = (DataManager_o *)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v21 )
    goto LABEL_38;
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)v21,
    v22,
    v12,
    v23,
    v24,
    v25,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0.0,
    15.0,
    0,
    0,
    0,
    240,
    0,
    1,
    0,
    0,
    0);
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaItemListViewManager__CloseCommandCodeDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  if ( (byte_4D26ABB & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D26ABB = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__UpdatePosition(scrollView, 0),
        (scrollView = (UIScrollView_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C942F0(scrollView, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)scrollView, 0, 0);
}


void BoxGachaItemListViewManager__CreateList(
        BoxGachaItemListViewManager_o *this,
        BoxGachaBaseEntity_array *baseData,
        int32_t eventId,
        int32_t boxGachaId,
        int32_t baseId,
        System_Int32_array *resIds,
        bool isReset,
        const MethodInfo *method)
{
  __int64 resetInfoObj; // x0
  Il2CppObject *Master_object; // x24
  bool EventFlag; // w24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v19; // x27
  BoxGachaBaseEntity_o *v20; // x24
  il2cpp_array_size_t v21; // x10
  bool v22; // w26
  int32_t *m_Items; // x11
  char v24; // w8
  __int64 v25; // x10
  int v26; // t1
  BoxGachaItemListViewItem_o *v27; // x25
  const MethodInfo *v28; // x5
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8

  if ( (byte_4D26AAF & 1) == 0 )
  {
    sub_1C94098(&BoxGachaItemListViewItem_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_UserEventMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_22767/*"overwriteFirstTimeDispItemGet"*/);
    byte_4D26AAF = 1;
  }
  resetInfoObj = (__int64)this->fields.resetInfoObj;
  if ( !resetInfoObj )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resetInfoObj, 0, 0);
  this->fields.isReset = isReset;
  *(_QWORD *)&this->fields.allMaxNum = 0;
  this->fields.currentBoxGachaId = boxGachaId;
  this->fields.currentBaseId = baseId;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  resetInfoObj = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    resetInfoObj = (__int64)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_38;
  resetInfoObj = (__int64)UserEventMaster__GetEntityDefinitely(
                            (UserEventMaster_o *)Master_object,
                            *(_QWORD *)(*(_QWORD *)(resetInfoObj + 184) + 64LL),
                            eventId,
                            0);
  if ( !resetInfoObj )
    goto LABEL_38;
  EventFlag = UserEventEntity__getEventFlag((UserEventEntity_o *)resetInfoObj, 10, 0);
  resetInfoObj = UnityEngine_PlayerPrefs__GetInt_72068708((System_String_o *)StringLiteral_22767/*"overwriteFirstTimeDispItemGet"*/, 0);
  if ( EventFlag && !(_DWORD)resetInfoObj )
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_22767/*"overwriteFirstTimeDispItemGet"*/, 1, 0);
  if ( !baseData )
    goto LABEL_38;
  max_length = baseData->max_length;
  if ( (int)max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)max_length )
        sub_1C942F8(resetInfoObj);
      v20 = baseData->m_Items[v19];
      if ( resIds )
      {
        v21 = resIds->max_length;
        v22 = 0;
        if ( v21 && (int)v21 >= 1 )
        {
          if ( !v20 )
            break;
          m_Items = resIds->m_Items;
          v24 = 0;
          v25 = (unsigned int)resIds->max_length;
          do
          {
            v26 = *m_Items++;
            if ( v20->fields.no == v26 )
              v24 = 1;
            --v25;
          }
          while ( v25 );
          v22 = v24;
        }
      }
      else
      {
        v22 = 0;
      }
      v27 = (BoxGachaItemListViewItem_o *)sub_1C942E4(BoxGachaItemListViewItem_TypeInfo);
      BoxGachaItemListViewItem___ctor(v27, v20, eventId, boxGachaId, v22, v28);
      resetInfoObj = (__int64)this->fields.itemList;
      if ( !resetInfoObj )
        break;
      v29 = *(_QWORD *)(resetInfoObj + 16);
      v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++*(_DWORD *)(resetInfoObj + 28);
      if ( !v29 )
        break;
      v31 = *(int *)(resetInfoObj + 24);
      if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)resetInfoObj,
          (Il2CppObject *)v27,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = v29 + 8 * v31;
        *(_DWORD *)(resetInfoObj + 24) = v31 + 1;
        *(_QWORD *)(v32 + 32) = v27;
        resetInfoObj = sub_1C9403C(v32 + 32, v27);
      }
      LODWORD(max_length) = baseData->max_length;
      if ( (__int64)++v19 >= (int)max_length )
        goto LABEL_37;
    }
LABEL_38:
    sub_1C942F0(resetInfoObj, baseData);
  }
LABEL_37:
  BoxGachaItemListViewManager__RefrashListDisp(this, (const MethodInfo *)baseData);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void BoxGachaItemListViewManager__DestroyList(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


int32_t BoxGachaItemListViewManager__GetGachaItemCurrentNum(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.allCurrentNum;
}


int32_t BoxGachaItemListViewManager__GetGachaItemMaxNum(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.allMaxNum;
}


BoxGachaItemListViewItem_o *BoxGachaItemListViewManager__GetItem(
        BoxGachaItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BoxGachaItemListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4D26AB1 & 1) == 0 )
  {
    sub_1C94098(&BoxGachaItemListViewItem_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4D26AB1 = 1;
  }
  result = (BoxGachaItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (BoxGachaItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = BoxGachaItemListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (BoxGachaItemListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != BoxGachaItemListViewItem_TypeInfo )
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


void BoxGachaItemListViewManager__OnClickListView(
        BoxGachaItemListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  ServantEntity_o *Item; // x0
  const MethodInfo *v8; // x1
  __int64 naturalAligment; // x10
  __int64 v10; // x8
  ServantEntity_o *v11; // x21
  int v12; // w8
  __int64 v13; // x8
  bool IsServantEquip; // w22
  CommonUI_o *v15; // x20
  GiftEntity_o *v16; // x21
  ServantStatusDialog_EndDelegate_o *v17; // x22
  Il2CppObject *v18; // x0
  System_String_o *individuality; // x20
  System_String_o *relateQuestIds; // x21
  CommonUI_o *v21; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v22; // x23
  __int64 v23; // x8
  __int64 v24; // x21
  __int64 v25; // x22
  int32_t v26; // w21
  ServantStatusDialog_EndDelegate_o *v27; // x22
  Il2CppObject *Instance; // x0
  ItemEntity_o *cardIds; // x20
  CommonUI_o *v30; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v31; // x22
  int v32; // w20
  ServantCostumeEntity_o *v33; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v34; // x21
  Il2CppObject *v35; // x0
  CommandCodeEntity_o *v36; // x20
  CommonUI_o *v37; // x21
  ServantStatusDialog_EndDelegate_o *v38; // x22
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4D26AB8 & 1) == 0 )
  {
    sub_1C94098(&Method_BoxGachaItemListViewManager_CloseCommandCodeDetail__);
    sub_1C94098(&Method_BoxGachaItemListViewManager_OnClickListView__);
    sub_1C94098(&Method_BoxGachaItemListViewManager_closeItemDetail__);
    sub_1C94098(&Method_BoxGachaItemListViewManager_closeSvtDetail__);
    sub_1C94098(&BoxGachaItemListViewObject_TypeInfo);
    sub_1C94098(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C94098(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C94098(&MissionInfoMaker_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D26AB8 = 1;
  }
  v5 = Method_BoxGachaItemListViewManager_OnClickListView__;
  entity = 0;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C940B0(Method_BoxGachaItemListViewManager_OnClickListView__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C9407C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  if ( !obj )
    goto LABEL_36;
  naturalAligment = BoxGachaItemListViewObject_TypeInfo->_2.naturalAligment;
  if ( obj->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_36;
  if ( (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != BoxGachaItemListViewObject_TypeInfo )
    goto LABEL_36;
  Item = (ServantEntity_o *)BoxGachaItemListViewObject__GetItem((BoxGachaItemListViewObject_o *)obj, v8);
  if ( !Item )
    goto LABEL_36;
  v10 = *(_QWORD *)&Item->fields.sellQp;
  v11 = Item;
  if ( !v10 )
    goto LABEL_36;
  v12 = *(_DWORD *)(v10 + 24);
  if ( v12 == 1 )
  {
    v13 = *(_QWORD *)&Item->fields.sellRarePri;
    if ( v13 )
    {
      switch ( *(_DWORD *)(v13 + 20) )
      {
        case 1:
        case 6:
        case 7:
          Item = *(ServantEntity_o **)&Item->fields.combineMaterialId;
          if ( !Item )
            goto LABEL_36;
          IsServantEquip = ServantEntity__get_IsServantEquip(Item, 0);
          Item = (ServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v15 = (CommonUI_o *)Item;
          if ( IsServantEquip )
          {
            v16 = *(GiftEntity_o **)&v11->fields.sellRarePri;
            v17 = (ServantStatusDialog_EndDelegate_o *)sub_1C942E4(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v17,
              (Il2CppObject *)this,
              Method_BoxGachaItemListViewManager_closeSvtDetail__,
              0);
            if ( v15 )
            {
              CommonUI__OpenServantStatusDialog_31597320(v15, 7, v16, v17, 0);
              return;
            }
LABEL_36:
            sub_1C942F0(Item, v8);
          }
          v23 = *(_QWORD *)&v11->fields.combineMaterialId;
          if ( !v23 )
            goto LABEL_36;
          v25 = *(_QWORD *)(v23 + 16);
          v24 = *(_QWORD *)(v23 + 24);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v40.fields.currentCryptoKey = v25;
          *(_QWORD *)&v40.fields.fakeValue = v24;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v40, 0);
          v27 = (ServantStatusDialog_EndDelegate_o *)sub_1C942E4(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v27,
            (Il2CppObject *)this,
            Method_BoxGachaItemListViewManager_closeSvtDetail__,
            0);
          if ( !v15 )
            goto LABEL_36;
          CommonUI__OpenServantStatusDialog_31596756(v15, 7, v26, v27, 0);
          break;
        case 2:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          cardIds = (ItemEntity_o *)v11->fields.cardIds;
          v30 = (CommonUI_o *)Instance;
          v31 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C942E4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
          ItemDetailInfoComponent_CallbackFunc___ctor(
            v31,
            (Il2CppObject *)this,
            (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
            0);
          if ( !v30 )
            goto LABEL_36;
          CommonUI__OpenItemDetailDialog(v30, cardIds, v31, 50, 0);
          return;
        case 9:
          v32 = *(_DWORD *)(v13 + 24);
          Item = (ServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Item )
            goto LABEL_36;
          Item = (ServantEntity_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Item,
                                      (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
          if ( !Item )
            goto LABEL_36;
          if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Item, &entity, v32 / 100, v32 % 100, 0) )
          {
            v33 = entity;
            v34 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C942E4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
            ItemDetailInfoComponent_CallbackFunc___ctor(
              v34,
              (Il2CppObject *)this,
              (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
              0);
            if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
            MissionInfoMaker__OpenCostumeReleaseDetail(v33, v34, 0);
          }
          return;
        case 0xB:
          v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v36 = *(CommandCodeEntity_o **)&v11->fields.cost;
          v37 = (CommonUI_o *)v35;
          v38 = (ServantStatusDialog_EndDelegate_o *)sub_1C942E4(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v38,
            (Il2CppObject *)this,
            Method_BoxGachaItemListViewManager_CloseCommandCodeDetail__,
            0);
          if ( !v37 )
            goto LABEL_36;
          CommonUI__OpenServantEquipStatusDialog_31599924(v37, 25, v36, 0, v38, 0, 0);
          return;
        default:
          return;
      }
    }
  }
  else if ( (v12 & 0xFFFFFFFE) == 2 )
  {
    v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    individuality = (System_String_o *)v11->fields.individuality;
    relateQuestIds = (System_String_o *)v11->fields.relateQuestIds;
    v21 = (CommonUI_o *)v18;
    v22 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C942E4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
      0);
    if ( !v21 )
      goto LABEL_36;
    CommonUI__OpenItemDetailDialog_31663148(v21, individuality, relateQuestIds, v22, 0);
  }
}


void BoxGachaItemListViewManager__OnMoveEnd(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4D26AB7 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26AB7 = 1;
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
          sub_1C942F0(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v8->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v8,
          1,
          v8->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C9403C(&this->fields.callbackFunc2, 0);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


void BoxGachaItemListViewManager__RefrashListDisp(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *resetInfoObj; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 naturalAligment; // x11
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D26AB0 & 1) == 0 )
  {
    sub_1C94098(&BoxGachaItemListViewItem_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4D26AB0 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( this->fields.isReset )
  {
    resetInfoObj = this->fields.resetInfoObj;
    if ( !resetInfoObj )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive(resetInfoObj, 1, 0);
  }
  resetInfoObj = (UnityEngine_GameObject_o *)this->fields.itemList;
  if ( !resetInfoObj )
LABEL_15:
    sub_1C942F0(resetInfoObj, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)resetInfoObj,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v7,
           (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v7.fields._current
      || (naturalAligment = BoxGachaItemListViewItem_TypeInfo->_2.naturalAligment,
          v7.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (BoxGachaItemListViewItem_c *)v7.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != BoxGachaItemListViewItem_TypeInfo )
    {
      sub_1C942F0(v4, v5);
    }
    *(int32x2_t *)&this->fields.allMaxNum = vadd_s32(
                                              vrev64_s32(*(int32x2_t *)((char *)&v7.fields._current->klass
                                                                      + (unsigned __int64)off_C0
                                                                      + 4)),
                                              *(int32x2_t *)&this->fields.allMaxNum);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void BoxGachaItemListViewManager__RequestInto(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_BoxGachaItemListViewObject__o *ObjectList; // x0
  __int64 v5; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v7; // x20
  int v8; // w24
  int32_t v9; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v11; // x23
  const MethodInfo *v12; // x3

  if ( (byte_4D26AB6 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BoxGachaItemListViewManager_OnMoveEnd__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Item__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D26AB6 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0);
  ObjectList = BoxGachaItemListViewManager__get_ObjectList(this, v3);
  if ( !ObjectList )
LABEL_13:
    sub_1C942F0(ObjectList, v5);
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
             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0) )
    {
      v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      BoxGachaItemListViewObject__Init_32444620(
        (BoxGachaItemListViewObject_o *)Item,
        4,
        v11,
        this->fields.listInDelay,
        v12);
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
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      this->fields.listInDelay + 0.5,
      0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaItemListViewManager__RequestListObject(
        BoxGachaItemListViewManager_o *this,
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

  if ( (byte_4D26AB4 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BoxGachaItemListViewManager_OnMoveEnd__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D26AB4 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)BoxGachaItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C942F0(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v12, v13);
      BoxGachaItemListViewObject__Init_32444620((BoxGachaItemListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaItemListViewManager__RequestListObject_32444720(
        BoxGachaItemListViewManager_o *this,
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

  if ( (byte_4D26AB5 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BoxGachaItemListViewManager_OnMoveEnd__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__);
    sub_1C94098(&StringLiteral_9964/*"OnMoveEnd"*/);
    byte_4D26AB5 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)BoxGachaItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C942F0(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9964/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C942F0(v10, v11);
      BoxGachaItemListViewObject__Init_32445224((BoxGachaItemListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaItemListViewManager__ResetBtnColliderCtr(
        BoxGachaItemListViewManager_o *this,
        bool isGachaReset,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *resetInfoObj; // x0

  resetInfoObj = (UnityEngine_Collider_o *)this->fields.resetInfoObj;
  if ( !resetInfoObj )
    goto LABEL_6;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resetInfoObj, 0) )
  {
    resetInfoObj = (UnityEngine_Collider_o *)this->fields.resetInfoCol;
    if ( resetInfoObj )
    {
      UnityEngine_Collider__set_enabled(resetInfoObj, isGachaReset, 0);
      return;
    }
LABEL_6:
    sub_1C942F0(resetInfoObj, isGachaReset);
  }
}


void BoxGachaItemListViewManager__SetMode(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        BoxGachaItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C9403C(&this->fields.callbackFunc, callback);
  BoxGachaItemListViewManager__SetMode_32443736(this, mode, v6);
}


void BoxGachaItemListViewManager__SetMode_32443736(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4D26AB3 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_11392/*"RequestInto"*/);
    byte_4D26AB3 = 1;
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
        sub_1C942F0(gameObject, v6);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11392/*"RequestInto"*/,
      0.0,
      0);
  }
}


void BoxGachaItemListViewManager__SetMode_32443988(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C9403C(&this->fields.callbackFunc2, callback);
  BoxGachaItemListViewManager__SetMode_32443736(this, mode, v6);
}


void BoxGachaItemListViewManager__SetMode_32444040(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1C9403C(&this->fields.callbackFunc2, callback);
  BoxGachaItemListViewManager__SetMode_32443736(this, mode, v7);
}


void BoxGachaItemListViewManager__SetObjectItem(
        BoxGachaItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  BoxGachaItemListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4D26AB2 & 1) == 0 )
  {
    this = (BoxGachaItemListViewManager_o *)sub_1C94098(&BoxGachaItemListViewObject_TypeInfo);
    byte_4D26AB2 = 1;
  }
  if ( !obj
    || (naturalAligment = BoxGachaItemListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != BoxGachaItemListViewObject_TypeInfo )
  {
    sub_1C942F0(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  BoxGachaItemListViewObject__Init_32443608((BoxGachaItemListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void BoxGachaItemListViewManager__SetScrollInfo(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  void *scrollView; // x0
  float x; // s8
  float z; // s9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D26ABF & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4D26ABF = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v8.fields.x = *((float *)scrollView + 74);
  v8.fields.y = *((float *)scrollView + 75);
  v8.fields.z = *((float *)scrollView + 76);
  v8.fields.w = 450.0;
  UIPanel__set_baseClipRegion((UIPanel_o *)scrollView, v8, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)scrollView, 0),
        (scrollView = this->fields.scrollView) == 0)
    || (x = localPosition.fields.x,
        z = localPosition.fields.z,
        (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0)) == 0) )
  {
LABEL_10:
    sub_1C942F0(scrollView, method);
  }
  v7.fields.y = 145.0;
  v7.fields.x = x;
  v7.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v7, 0);
}


void BoxGachaItemListViewManager___closeEventSvtConfirmDlg_b__46_0(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4D26AC0 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_5793/*"EXE_RESETGACHA"*/);
    byte_4D26AC0 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1C942F0(0, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5793/*"EXE_RESETGACHA"*/, 0);
}


void BoxGachaItemListViewManager__add_callbackFunc(
        BoxGachaItemListViewManager_o *this,
        BoxGachaItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct BoxGachaItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  BoxGachaItemListViewManager_o *v10; // x0
  BoxGachaItemListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D26AA9 & 1) == 0 )
  {
    sub_1C94098(&BoxGachaItemListViewManager_CallbackFunc_TypeInfo);
    byte_4D26AA9 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (BoxGachaItemListViewManager_CallbackFunc_c *)v7->klass != BoxGachaItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoxGachaItemListViewManager_o *)sub_1C9468C(v7);
  BoxGachaItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


void BoxGachaItemListViewManager__add_callbackFunc2(
        BoxGachaItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  BoxGachaItemListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D26AAB & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D26AAB = 1;
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
    v8 = sub_1CEFE6C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoxGachaItemListViewManager_o *)sub_1C9468C(v7);
  BoxGachaItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void BoxGachaItemListViewManager__closeEventSvtConfirmDlg(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x21
  System_Action_o *v8; // x20

  if ( (byte_4D26ABD & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BoxGachaItemListViewManager__closeEventSvtConfirmDlg_b__46_0__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D26ABD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BoxGachaItemListViewManager__closeEventSvtConfirmDlg_b__46_0__,
      0);
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_31583752(v7, v8, 0);
      return;
    }
LABEL_8:
    sub_1C942F0(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
}


void BoxGachaItemListViewManager__closeItemDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4D26AB9 & 1) == 0 )
  {
    sub_1C94098(&Method_BoxGachaItemListViewManager_closeItemDetail__);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D26AB9 = 1;
  }
  v3 = Method_BoxGachaItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C940B0(Method_BoxGachaItemListViewManager_closeItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C9407C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


// local variable allocation has failed, the output may be wrong!
void BoxGachaItemListViewManager__closeSvtDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  if ( (byte_4D26ABA & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D26ABA = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__UpdatePosition(scrollView, 0),
        (scrollView = (UIScrollView_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C942F0(scrollView, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)scrollView, 0, 0);
}


bool BoxGachaItemListViewManager__getIsRareTarget(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.isResetTarget;
}


System_Collections_Generic_List_BoxGachaItemListViewObject__o *BoxGachaItemListViewManager__get_ClippingObjectList(
        BoxGachaItemListViewManager_o *this,
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

  if ( (byte_4D26AAE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26AAE = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v22.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C942F0(0, v10);
      Item = (ListViewItem_o *)BoxGachaItemListViewObject__GetItem(
                                 (BoxGachaItemListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1C942F0(0, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_44610268((ListViewManager_o *)this, Item, 0);
        if ( v14 )
        {
          if ( !v3 )
            sub_1C942F0(v14, v15);
          items = v3->fields._items;
          v17 = Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C942F0(v14, v15);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C942F0(Item, v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C942F0(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v19 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v19[4] = (Il2CppClass *)v11;
        sub_1C9403C(v19 + 4, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoxGachaItemListViewObject__o *)v3;
}


System_Collections_Generic_List_BoxGachaItemListViewObject__o *BoxGachaItemListViewManager__get_ObjectList(
        BoxGachaItemListViewManager_o *this,
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

  if ( (byte_4D26AAD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
    sub_1C94098(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26AAD = 1;
  }
  memset(&v17, 0, sizeof(v17));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C942F0(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v17 = v16;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v17.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C942F0(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
      v10 = Component_object;
      if ( !v3 )
        sub_1C942F0(Component_object, Component_object);
      items = v3->fields._items;
      v12 = Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C942F0(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v14 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v14[4] = (Il2CppClass *)v10;
        sub_1C9403C(v14 + 4, v10);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoxGachaItemListViewObject__o *)v3;
}


void BoxGachaItemListViewManager__itemColliderCtr(
        BoxGachaItemListViewManager_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v6; // w19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x26
  __int64 naturalAligment; // x10
  Il2CppClass *klass; // x20
  __int64 v12; // x1
  UnityEngine_Component_o *v13; // x0
  Il2CppObject *Component_object; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4D26ABE & 1) == 0 )
  {
    sub_1C94098(&BoxGachaItemListViewItem_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D26ABE = 1;
  }
  memset(&v17, 0, sizeof(v17));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v6 = isDisp;
    v17 = v16;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v17,
             (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v7 )
        break;
      current = v17.fields._current;
      if ( !v17.fields._current
        || (naturalAligment = BoxGachaItemListViewItem_TypeInfo->_2.naturalAligment,
            v17.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment)
        || (BoxGachaItemListViewItem_c *)v17.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != BoxGachaItemListViewItem_TypeInfo )
      {
        sub_1C942F0(v7, v8);
      }
      klass = v17.fields._current[7].klass;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)klass, 0, 0) )
      {
        v13 = (UnityEngine_Component_o *)current[7].klass;
        if ( !v13 )
          sub_1C942F0(0, v12);
        Component_object = UnityEngine_Component__GetComponent_object_(
                             v13,
                             (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Collider___);
        if ( !Component_object )
          sub_1C942F0(0, v15);
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, v6, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void BoxGachaItemListViewManager__remove_callbackFunc(
        BoxGachaItemListViewManager_o *this,
        BoxGachaItemListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct BoxGachaItemListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  BoxGachaItemListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4D26AAA & 1) == 0 )
  {
    sub_1C94098(&BoxGachaItemListViewManager_CallbackFunc_TypeInfo);
    byte_4D26AAA = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (BoxGachaItemListViewManager_CallbackFunc_c *)v7->klass != BoxGachaItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CEFE6C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoxGachaItemListViewManager_o *)sub_1C9468C(v7);
  BoxGachaItemListViewManager__add_callbackFunc2(v10, v11, v12);
}


void BoxGachaItemListViewManager__remove_callbackFunc2(
        BoxGachaItemListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  BoxGachaItemListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4D26AAC & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    byte_4D26AAC = 1;
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
    v8 = sub_1CEFE6C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (BoxGachaItemListViewManager_o *)sub_1C9468C(v7);
  BoxGachaItemListViewManager__get_ObjectList(v10, v11);
}


void BoxGachaItemListViewManager_CallbackFunc___ctor(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
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
  sub_1C9403C(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C94158(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C9430C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C941C0(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1ABF7A8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ABF768;
}


System_IAsyncResult_o *BoxGachaItemListViewManager_CallbackFunc__BeginInvoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C9404C(this, &v5, callback, object);
}


void BoxGachaItemListViewManager_CallbackFunc__EndInvoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C94050(result, 0, method);
}


void BoxGachaItemListViewManager_CallbackFunc__Invoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}