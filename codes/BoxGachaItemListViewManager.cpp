void __fastcall BoxGachaItemListViewManager___ctor(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall BoxGachaItemListViewManager__ClickResetGachaBtn(
        BoxGachaItemListViewManager_o *this,
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
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  __int64 Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x20
  UserBoxGachaEntity_o *Entity; // x20
  BoxGachaEntity_o *v27; // x22
  Il2CppObject *MessagePrizeName; // x21
  System_String_o *v29; // x0
  System_String_o *v30; // x20
  struct System_Int32_array *baseIds; // x8
  int max_length; // w22
  _BOOL4 isResetTarget; // w20
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  System_String_o *v37; // x20
  int *v38; // x1
  System_String_o *v39; // x0
  System_String_o *v40; // x0
  Il2CppObject *v41; // x0
  Il2CppObject *v42; // x21
  System_String_o *v43; // x22
  System_String_o *v44; // x23
  System_String_o *v45; // x24
  CommonConfirmDialog_ClickDelegate_o *v46; // x25
  int v47; // [xsp+48h] [xbp-58h] BYREF
  int v48; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4B3EFE7 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&Method_BoxGachaItemListViewManager_ClickResetGachaBtn__, v3);
    sub_1BDB878(&Method_BoxGachaItemListViewManager_closeEventSvtConfirmDlg__, v4);
    sub_1BDB878(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BDB878(&Method_DataManager_GetMasterData_BoxGachaMaster___, v6);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserBoxGachaMaster___, v7);
    sub_1BDB878(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int__GetEntity__, v8);
    sub_1BDB878(&int_TypeInfo, v9);
    sub_1BDB878(&LocalizationManager_TypeInfo, v10);
    sub_1BDB878(&NetworkManager_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BDB878(&StringLiteral_3017/*"BOX_GACHA_RESET_MSG"*/, v14);
    sub_1BDB878(&StringLiteral_3014/*"BOX_GACHA_RESET_LIMIT_NO_RARE_MSG"*/, v15);
    sub_1BDB878(&StringLiteral_3018/*"BOX_GACHA_RESET_NO_RARE_MSG"*/, v16);
    sub_1BDB878(&StringLiteral_3021/*"BOX_GACHA_RESET_TITLE"*/, v17);
    sub_1BDB878(&StringLiteral_3720/*"COMMON_CONFIRM_NO"*/, v18);
    sub_1BDB878(&StringLiteral_3013/*"BOX_GACHA_RESET_LIMIT_MSG"*/, v19);
    sub_1BDB878(&StringLiteral_3007/*"BOX_GACHA_EXE_TXT"*/, v20);
    byte_4B3EFE7 = 1;
  }
  v21 = Method_BoxGachaItemListViewManager_ClickResetGachaBtn__;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_ClickResetGachaBtn__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1BDB890(Method_BoxGachaItemListViewManager_ClickResetGachaBtn__);
  v22 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v24);
    byte_4B3ED56 = 1;
  }
  Instance = (__int64)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (__int64)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object
    || (Entity = UserBoxGachaMaster__GetEntity(
                   (UserBoxGachaMaster_o *)MasterData_object,
                   *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                   this->fields.currentBoxGachaId,
                   0LL),
        (Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_BoxGachaMaster___)) == 0
    || (Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              this->fields.currentBoxGachaId,
                              (const MethodInfo_32E1E3C *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int__GetEntity__),
        !Entity)
    || (v27 = (BoxGachaEntity_o *)Instance) == 0LL )
  {
LABEL_38:
    sub_1BDBAD4(Instance, v24);
  }
  this->fields.isResetTarget = BoxGachaEntity__IsResetTarget(
                                 (BoxGachaEntity_o *)Instance,
                                 Entity->fields.boxIndex + 1,
                                 0LL);
  MessagePrizeName = (Il2CppObject *)BoxGachaEntity__GetMessagePrizeName(v27, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3017/*"BOX_GACHA_RESET_MSG"*/, 0LL);
  v30 = System_String__Format(v29, MessagePrizeName, 0LL);
  Instance = BoxGachaEntity__IsLimitLineUp(v27, 0LL);
  if ( (Instance & 1) != 0 )
  {
    baseIds = v27->fields.baseIds;
    if ( !baseIds )
      goto LABEL_38;
    max_length = baseIds->max_length;
    isResetTarget = this->fields.isResetTarget;
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( this->fields.isResetTarget )
      {
LABEL_23:
        v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3013/*"BOX_GACHA_RESET_LIMIT_MSG"*/, 0LL);
        v47 = max_length;
        v38 = &v47;
LABEL_30:
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v38, v34, v35, v36);
        v40 = System_String__Format_62613552(v37, MessagePrizeName, v41, 0LL);
        goto LABEL_31;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isResetTarget )
        goto LABEL_23;
    }
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3014/*"BOX_GACHA_RESET_LIMIT_NO_RARE_MSG"*/, 0LL);
    v38 = &v48;
    v48 = max_length;
    goto LABEL_30;
  }
  if ( this->fields.isResetTarget )
    goto LABEL_32;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3018/*"BOX_GACHA_RESET_NO_RARE_MSG"*/, 0LL);
  v40 = System_String__Format(v39, MessagePrizeName, 0LL);
LABEL_31:
  v30 = v40;
LABEL_32:
  v42 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3021/*"BOX_GACHA_RESET_TITLE"*/, 0LL);
  v44 = LocalizationManager__Get((System_String_o *)StringLiteral_3007/*"BOX_GACHA_EXE_TXT"*/, 0LL);
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3720/*"COMMON_CONFIRM_NO"*/, 0LL);
  v46 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BDBAC4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v46,
    (Il2CppObject *)this,
    Method_BoxGachaItemListViewManager_closeEventSvtConfirmDlg__,
    0LL);
  Instance = (__int64)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    Instance = j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v42 )
    goto LABEL_38;
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)v42,
    v43,
    v30,
    v44,
    v45,
    v46,
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
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__CloseCommandCodeDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  if ( (byte_4B3EFE6 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B3EFE6 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__UpdatePosition(scrollView, 0LL),
        (scrollView = (UIScrollView_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(scrollView, isDecide);
  }
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)scrollView, 0LL, 0LL);
}


void __fastcall BoxGachaItemListViewManager__CreateList(
        BoxGachaItemListViewManager_o *this,
        BoxGachaBaseEntity_array *baseData,
        int32_t eventId,
        int32_t boxGachaId,
        int32_t baseId,
        System_Int32_array *resIds,
        bool isReset,
        const MethodInfo *method)
{
  __int64 v15; // x1
  UnityEngine_GameObject_o *resetInfoObj; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x8
  unsigned __int64 v20; // x27
  BoxGachaBaseEntity_o *v21; // x24
  __int64 v22; // x10
  bool v23; // w26
  int32_t *v24; // x11
  char v25; // w8
  __int64 v26; // x10
  int v27; // t1
  BoxGachaItemListViewItem_o *v28; // x25
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 klass_low; // x10
  __int64 v32; // x8

  if ( (byte_4B3EFDA & 1) == 0 )
  {
    sub_1BDB878(&BoxGachaItemListViewItem_TypeInfo, baseData);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15);
    byte_4B3EFDA = 1;
  }
  resetInfoObj = this->fields.resetInfoObj;
  if ( !resetInfoObj )
    goto LABEL_25;
  UnityEngine_GameObject__SetActive(resetInfoObj, 0, 0LL);
  this->fields.isReset = isReset;
  *(_QWORD *)&this->fields.allMaxNum = 0LL;
  this->fields.currentBoxGachaId = boxGachaId;
  this->fields.currentBaseId = baseId;
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !baseData )
    goto LABEL_25;
  v19 = *(_QWORD *)&baseData->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v19 )
        sub_1BDBADC(resetInfoObj, baseData, v17, v18);
      v21 = baseData->m_Items[v20];
      if ( resIds )
      {
        v22 = *(_QWORD *)&resIds->max_length;
        v23 = 0;
        if ( v22 && (int)v22 >= 1 )
        {
          if ( !v21 )
            break;
          v24 = &resIds->m_Items[1];
          v25 = 0;
          v26 = (unsigned int)*(_QWORD *)&resIds->max_length;
          do
          {
            v27 = *v24++;
            if ( v21->fields.no == v27 )
              v25 = 1;
            --v26;
          }
          while ( v26 );
          v23 = v25;
        }
      }
      else
      {
        v23 = 0;
      }
      v28 = (BoxGachaItemListViewItem_o *)sub_1BDBAC4(BoxGachaItemListViewItem_TypeInfo);
      BoxGachaItemListViewItem___ctor(v28, v21, eventId, boxGachaId, v23, 0LL);
      resetInfoObj = (UnityEngine_GameObject_o *)this->fields.itemList;
      if ( !resetInfoObj )
        break;
      v29 = *(_QWORD *)&resetInfoObj->fields.m_CachedPtr;
      v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(resetInfoObj[1].klass);
      if ( !v29 )
        break;
      klass_low = SLODWORD(resetInfoObj[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v29 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)resetInfoObj,
          (Il2CppObject *)v28,
          *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = v29 + 8 * klass_low;
        LODWORD(resetInfoObj[1].klass) = klass_low + 1;
        *(_QWORD *)(v32 + 32) = v28;
        resetInfoObj = (UnityEngine_GameObject_o *)sub_1BDB81C(v32 + 32);
      }
      LODWORD(v19) = baseData->max_length;
      if ( (__int64)++v20 >= (int)v19 )
        goto LABEL_24;
    }
LABEL_25:
    sub_1BDBAD4(resetInfoObj, baseData);
  }
LABEL_24:
  BoxGachaItemListViewManager__RefrashListDisp(this, (const MethodInfo *)baseData);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall BoxGachaItemListViewManager__DestroyList(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


int32_t __fastcall BoxGachaItemListViewManager__GetGachaItemCurrentNum(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.allCurrentNum;
}


int32_t __fastcall BoxGachaItemListViewManager__GetGachaItemMaxNum(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.allMaxNum;
}


// local variable allocation has failed, the output may be wrong!
BoxGachaItemListViewItem_o *__fastcall BoxGachaItemListViewManager__GetItem(
        BoxGachaItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BoxGachaItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B3EFDC & 1) == 0 )
  {
    sub_1BDB878(&BoxGachaItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4B3EFDC = 1;
  }
  result = (BoxGachaItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (BoxGachaItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(BoxGachaItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (BoxGachaItemListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != BoxGachaItemListViewItem_TypeInfo )
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


void __fastcall BoxGachaItemListViewManager__OnClickListView(
        BoxGachaItemListViewManager_o *this,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  BoxGachaItemListViewItem_o *Item; // x0
  const MethodInfo *v19; // x1
  __int64 methodPtr_low; // x10
  BoxGachaItemListViewItem_o *v21; // x20
  int32_t GachaBaseType; // w0
  Il2CppObject *Instance; // x21
  ItemEntity_o *ItemEntity; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v25; // x22
  Il2CppObject *v26; // x0
  System_String_o *nameTxt; // x21
  System_String_o *extraDetailTxt; // x20
  CommonUI_o *v29; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v30; // x23
  Il2CppObject *v31; // x0
  CommandCodeEntity_o *commandCodeEntity; // x20
  CommonUI_o *v33; // x21
  ServantStatusDialog_EndDelegate_o *v34; // x22
  bool IsServantEquip; // w22
  Il2CppObject *v36; // x21
  GiftEntity_o *giftEnt; // x20
  ServantStatusDialog_EndDelegate_o *v38; // x22
  __int64 v39; // x20
  __int64 v40; // x22
  int32_t v41; // w20
  ServantStatusDialog_EndDelegate_o *v42; // x22
  struct GiftEntity_o *v43; // x8
  int32_t objectId; // w20
  ServantCostumeEntity_o *v45; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v46; // x21
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_4B3EFE3 & 1) == 0 )
  {
    sub_1BDB878(&Method_BoxGachaItemListViewManager_CloseCommandCodeDetail__, obj);
    sub_1BDB878(&Method_BoxGachaItemListViewManager_OnClickListView__, v5);
    sub_1BDB878(&Method_BoxGachaItemListViewManager_closeItemDetail__, v6);
    sub_1BDB878(&Method_BoxGachaItemListViewManager_closeSvtDetail__, v7);
    sub_1BDB878(&BoxGachaItemListViewObject_TypeInfo, v8);
    sub_1BDB878(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v9);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v10);
    sub_1BDB878(&ServantStatusDialog_EndDelegate_TypeInfo, v11);
    sub_1BDB878(&MissionInfoMaker_TypeInfo, v12);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B3EFE3 = 1;
  }
  v16 = Method_BoxGachaItemListViewManager_OnClickListView__;
  entity = 0LL;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1BDB890(Method_BoxGachaItemListViewManager_OnClickListView__);
  v17 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
  if ( !obj )
    goto LABEL_40;
  methodPtr_low = LOBYTE(BoxGachaItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_40;
  if ( (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BoxGachaItemListViewObject_TypeInfo )
    goto LABEL_40;
  Item = BoxGachaItemListViewObject__GetItem((BoxGachaItemListViewObject_o *)obj, v19);
  if ( !Item )
    goto LABEL_40;
  v21 = Item;
  GachaBaseType = BoxGachaItemListViewItem__get_GachaBaseType(Item, 0LL);
  if ( GachaBaseType == 1 )
  {
    if ( BoxGachaItemListViewItem__get_GiftType(v21, 0LL) == 2 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      ItemEntity = BoxGachaItemListViewItem__get_ItemEntity(v21, 0LL);
      v25 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BDBAC4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v25,
        (Il2CppObject *)this,
        (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
        0LL);
      if ( Instance )
      {
        CommonUI__OpenItemDetailDialog((CommonUI_o *)Instance, ItemEntity, v25, 50, 0LL);
        return;
      }
LABEL_40:
      sub_1BDBAD4(Item, v19);
    }
    if ( BoxGachaItemListViewItem__get_GiftType(v21, 0LL) == 11 )
    {
      v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      commandCodeEntity = v21->fields.commandCodeEntity;
      v33 = (CommonUI_o *)v31;
      v34 = (ServantStatusDialog_EndDelegate_o *)sub_1BDBAC4(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v34,
        (Il2CppObject *)this,
        Method_BoxGachaItemListViewManager_CloseCommandCodeDetail__,
        0LL);
      if ( !v33 )
        goto LABEL_40;
      CommonUI__OpenServantEquipStatusDialog_30849996(v33, 25, commandCodeEntity, 0, v34, 0LL, 0LL);
    }
    else if ( BoxGachaItemListViewItem__get_GiftType(v21, 0LL) == 1
           || BoxGachaItemListViewItem__get_GiftType(v21, 0LL) == 6
           || BoxGachaItemListViewItem__get_GiftType(v21, 0LL) == 7 )
    {
      Item = (BoxGachaItemListViewItem_o *)BoxGachaItemListViewItem__get_SvtEntity(v21, 0LL);
      if ( !Item )
        goto LABEL_40;
      IsServantEquip = ServantEntity__get_IsServantEquip((ServantEntity_o *)Item, 0LL);
      v36 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( IsServantEquip )
      {
        giftEnt = v21->fields.giftEnt;
        v38 = (ServantStatusDialog_EndDelegate_o *)sub_1BDBAC4(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v38,
          (Il2CppObject *)this,
          Method_BoxGachaItemListViewManager_closeSvtDetail__,
          0LL);
        if ( !v36 )
          goto LABEL_40;
        CommonUI__OpenServantStatusDialog_30847404((CommonUI_o *)v36, 7, giftEnt, v38, 0LL);
      }
      else
      {
        Item = (BoxGachaItemListViewItem_o *)BoxGachaItemListViewItem__get_SvtEntity(v21, 0LL);
        if ( !Item )
          goto LABEL_40;
        v40 = *(_QWORD *)&Item->fields.selectNum;
        v39 = *(_QWORD *)&Item->fields.sortIndex;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v48.fields.currentCryptoKey = v40;
        *(_QWORD *)&v48.fields.fakeValue = v39;
        v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v48, 0LL);
        v42 = (ServantStatusDialog_EndDelegate_o *)sub_1BDBAC4(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v42,
          (Il2CppObject *)this,
          Method_BoxGachaItemListViewManager_closeSvtDetail__,
          0LL);
        if ( !v36 )
          goto LABEL_40;
        CommonUI__OpenServantStatusDialog_30846840((CommonUI_o *)v36, 7, v41, v42, 0LL);
      }
    }
    else
    {
      Item = (BoxGachaItemListViewItem_o *)BoxGachaItemListViewItem__get_GiftType(v21, 0LL);
      if ( (_DWORD)Item == 9 )
      {
        v43 = v21->fields.giftEnt;
        if ( !v43 )
          goto LABEL_40;
        objectId = v43->fields.objectId;
        Item = (BoxGachaItemListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Item )
          goto LABEL_40;
        Item = (BoxGachaItemListViewItem_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Item,
                                               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
        if ( !Item )
          goto LABEL_40;
        if ( ServantCostumeMaster__TryGetEntity(
               (ServantCostumeMaster_o *)Item,
               &entity,
               objectId / 100,
               objectId % 100,
               0LL) )
        {
          v45 = entity;
          v46 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BDBAC4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
          ItemDetailInfoComponent_CallbackFunc___ctor(
            v46,
            (Il2CppObject *)this,
            (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
            0LL);
          if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
          MissionInfoMaker__OpenCostumeReleaseDetail(v45, v46, 0LL);
        }
      }
    }
  }
  else if ( (GachaBaseType & 0xFFFFFFFE) == 2 )
  {
    v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    nameTxt = v21->fields.nameTxt;
    extraDetailTxt = v21->fields.extraDetailTxt;
    v29 = (CommonUI_o *)v26;
    v30 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BDBAC4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v30,
      (Il2CppObject *)this,
      (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v29 )
      goto LABEL_40;
    CommonUI__OpenItemDetailDialog_30911904(v29, nameTxt, extraDetailTxt, v30, 0LL);
  }
}


void __fastcall BoxGachaItemListViewManager__OnMoveEnd(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  struct UIScrollView_o *v8; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4B3EFE2 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B3EFE2 = 1;
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
        v8 = this->fields.scrollView;
        if ( !v8 )
          sub_1BDBAD4(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v8->klass->vtable._8_UpdateScrollbars.method)(
          v8,
          1LL,
          v8->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BDB81C(&this->fields.callbackFunc2);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


void __fastcall BoxGachaItemListViewManager__RefrashListDisp(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *resetInfoObj; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  __int64 methodPtr_low; // x11
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B3EFDB & 1) == 0 )
  {
    sub_1BDB878(&BoxGachaItemListViewItem_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_4B3EFDB = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.isReset )
  {
    resetInfoObj = this->fields.resetInfoObj;
    if ( !resetInfoObj )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive(resetInfoObj, 1, 0LL);
  }
  resetInfoObj = (UnityEngine_GameObject_o *)this->fields.itemList;
  if ( !resetInfoObj )
LABEL_15:
    sub_1BDBAD4(resetInfoObj, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)resetInfoObj,
    (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current
      || (methodPtr_low = LOBYTE(BoxGachaItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v11.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (BoxGachaItemListViewItem_c *)v11.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != BoxGachaItemListViewItem_TypeInfo )
    {
      sub_1BDBAD4(v8, v9);
    }
    *(int32x2_t *)&this->fields.allMaxNum = vadd_s32(
                                              vrev64_s32(*(int32x2_t *)((char *)&v11.fields._current[11].monitor + 4)),
                                              *(int32x2_t *)&this->fields.allMaxNum);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall BoxGachaItemListViewManager__RequestInto(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_BoxGachaItemListViewObject__o *ObjectList; // x0
  __int64 v9; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v11; // x20
  int v12; // w24
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v15; // x23
  const MethodInfo *v16; // x3

  if ( (byte_4B3EFE1 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_BoxGachaItemListViewManager_OnMoveEnd__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Item__, v5);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v6);
    byte_4B3EFE1 = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = BoxGachaItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_13:
    sub_1BDBAD4(ObjectList, v9);
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
             (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v15 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v12;
      BoxGachaItemListViewObject__Init_31042632(
        (BoxGachaItemListViewObject_o *)Item,
        4,
        v15,
        this->fields.listInDelay,
        v16);
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
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      this->fields.listInDelay + 0.5,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__RequestListObject(
        BoxGachaItemListViewManager_o *this,
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

  if ( (byte_4B3EFDF & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&Method_BoxGachaItemListViewManager_OnMoveEnd__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__get_Current__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__, v12);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v13);
    byte_4B3EFDF = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)BoxGachaItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BDBAD4(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BDBAD4(v19, v20);
      BoxGachaItemListViewObject__Init_31042632((BoxGachaItemListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__RequestListObject_31042732(
        BoxGachaItemListViewManager_o *this,
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

  if ( (byte_4B3EFE0 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&Method_BoxGachaItemListViewManager_OnMoveEnd__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__get_Current__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__, v10);
    sub_1BDB878(&StringLiteral_9941/*"OnMoveEnd"*/, v11);
    byte_4B3EFE0 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)BoxGachaItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BDBAD4(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9941/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BDBAD4(v17, v18);
      BoxGachaItemListViewObject__Init_31043236((BoxGachaItemListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__ResetBtnColliderCtr(
        BoxGachaItemListViewManager_o *this,
        bool isGachaReset,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *resetInfoObj; // x0

  resetInfoObj = (UnityEngine_Collider_o *)this->fields.resetInfoObj;
  if ( !resetInfoObj )
    goto LABEL_6;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)resetInfoObj, 0LL) )
  {
    resetInfoObj = (UnityEngine_Collider_o *)this->fields.resetInfoCol;
    if ( resetInfoObj )
    {
      UnityEngine_Collider__set_enabled(resetInfoObj, isGachaReset, 0LL);
      return;
    }
LABEL_6:
    sub_1BDBAD4(resetInfoObj, isGachaReset);
  }
}


void __fastcall BoxGachaItemListViewManager__SetMode(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        BoxGachaItemListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BDB81C(&this->fields.callbackFunc);
  BoxGachaItemListViewManager__SetMode_31041748(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__SetMode_31041748(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B3EFDE & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_1BDB878(&StringLiteral_11316/*"RequestInto"*/, v5);
    byte_4B3EFDE = 1;
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
        sub_1BDBAD4(gameObject, v7);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11316/*"RequestInto"*/,
      0.0,
      0LL);
  }
}


void __fastcall BoxGachaItemListViewManager__SetMode_31042000(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BDB81C(&this->fields.callbackFunc2);
  BoxGachaItemListViewManager__SetMode_31041748(this, mode, v6);
}


void __fastcall BoxGachaItemListViewManager__SetMode_31042052(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1BDB81C(&this->fields.callbackFunc2);
  BoxGachaItemListViewManager__SetMode_31041748(this, mode, v7);
}


void __fastcall BoxGachaItemListViewManager__SetObjectItem(
        BoxGachaItemListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  BoxGachaItemListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B3EFDD & 1) == 0 )
  {
    this = (BoxGachaItemListViewManager_o *)sub_1BDB878(&BoxGachaItemListViewObject_TypeInfo, obj);
    byte_4B3EFDD = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(BoxGachaItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BoxGachaItemListViewObject_TypeInfo )
  {
    sub_1BDBAD4(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  BoxGachaItemListViewObject__Init_31041620((BoxGachaItemListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__SetScrollInfo(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  void *scrollView; // x0
  float v4; // s0
  float v5; // s2
  float v6; // s8
  float v7; // s9
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector4_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B3EFEA & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4B3EFEA = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !scrollView )
    goto LABEL_10;
  v9.fields.x = *((float *)scrollView + 74);
  v9.fields.y = *((float *)scrollView + 75);
  v9.fields.z = *((float *)scrollView + 76);
  v9.fields.w = 450.0;
  UIPanel__set_baseClipRegion((UIPanel_o *)scrollView, v9, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)&v4 = UnityEngine_Transform__get_localPosition(
                                          (UnityEngine_Transform_o *)scrollView,
                                          0LL),
        (scrollView = this->fields.scrollView) == 0LL)
    || (v6 = v4,
        v7 = v5,
        (scrollView = UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_1BDBAD4(scrollView, method);
  }
  v8.fields.y = 145.0;
  v8.fields.x = v6;
  v8.fields.z = v7;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v8, 0LL);
}


void __fastcall BoxGachaItemListViewManager___closeEventSvtConfirmDlg_b__46_0(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *targetFSM; // x0

  if ( (byte_4B3EFEB & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_5803/*"EXE_RESETGACHA"*/, method);
    byte_4B3EFEB = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1BDBAD4(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5803/*"EXE_RESETGACHA"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__closeEventSvtConfirmDlg(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x21
  System_Action_o *v10; // x20

  if ( (byte_4B3EFE8 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, isDecide);
    sub_1BDB878(&Method_BoxGachaItemListViewManager__closeEventSvtConfirmDlg_b__46_0__, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4B3EFE8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    v10 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BoxGachaItemListViewManager__closeEventSvtConfirmDlg_b__46_0__,
      0LL);
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30833860(v9, v10, 0LL);
      return;
    }
LABEL_8:
    sub_1BDBAD4(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__closeItemDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B3EFE4 & 1) == 0 )
  {
    sub_1BDB878(&Method_BoxGachaItemListViewManager_closeItemDetail__, isDecide);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4B3EFE4 = 1;
  }
  v4 = Method_BoxGachaItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BDB890(Method_BoxGachaItemListViewManager_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v7);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__closeSvtDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  if ( (byte_4B3EFE5 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4B3EFE5 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__UpdatePosition(scrollView, 0LL),
        (scrollView = (UIScrollView_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(scrollView, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)scrollView, 0LL, 0LL);
}


bool __fastcall BoxGachaItemListViewManager__getIsRareTarget(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isResetTarget;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__itemColliderCtr(
        BoxGachaItemListViewManager_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v12; // w19
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x26
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x20
  __int64 v18; // x1
  UnityEngine_Component_o *v19; // x0
  Il2CppObject *Component_object; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B3EFE9 & 1) == 0 )
  {
    sub_1BDB878(&BoxGachaItemListViewItem_TypeInfo, isDisp);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_Collider___, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    byte_4B3EFE9 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_36D68BC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v12 = isDisp;
    v23 = v22;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_346A2A4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v13 )
        break;
      current = v23.fields._current;
      if ( !v23.fields._current
        || (methodPtr_low = LOBYTE(BoxGachaItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v23.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (BoxGachaItemListViewItem_c *)v23.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != BoxGachaItemListViewItem_TypeInfo )
      {
        sub_1BDBAD4(v13, v14);
      }
      monitor = (UnityEngine_Object_o *)v23.fields._current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v19 = (UnityEngine_Component_o *)current[6].monitor;
        if ( !v19 )
          sub_1BDBAD4(0LL, v18);
        Component_object = UnityEngine_Component__GetComponent_object_(
                             v19,
                             (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Collider___);
        if ( !Component_object )
          sub_1BDBAD4(0LL, v21);
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, v12, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_346A2A0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager_CallbackFunc___ctor(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
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
  sub_1BDB81C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A1C7B4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1C774;
}


System_IAsyncResult_o *__fastcall BoxGachaItemListViewManager_CallbackFunc__BeginInvoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BDB82C(this, &v5, callback, object);
}


void __fastcall BoxGachaItemListViewManager_CallbackFunc__EndInvoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
}


void __fastcall BoxGachaItemListViewManager_CallbackFunc__Invoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}