void __fastcall BoxGachaItemListViewManager___ctor(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall BoxGachaItemListViewManager__ClickResetGachaBtn(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int64_t Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  UserBoxGachaEntity_o *Entity; // x20
  BoxGachaEntity_o *v9; // x21
  struct System_Int32_array *baseIds; // x8
  int max_length; // w24
  System_String_o *v12; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  System_String_o *v17; // x20
  bool IsLimitLineUp; // w0
  _BOOL4 isResetTarget; // w21
  __int64 *v20; // x8
  System_String_o *v21; // x20
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  Il2CppObject *v26; // x21
  System_String_o *v27; // x22
  System_String_o *v28; // x23
  System_String_o *v29; // x24
  CommonConfirmDialog_ClickDelegate_o *v30; // x25
  int v31; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4A5EF82 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_BoxGachaItemListViewManager_ClickResetGachaBtn__);
    sub_1B885B0(&Method_BoxGachaItemListViewManager_closeEventSvtConfirmDlg__);
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_BoxGachaMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserBoxGachaMaster___);
    sub_1B885B0(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3095/*"BOX_GACHA_RESET_MSG"*/);
    sub_1B885B0(&StringLiteral_3092/*"BOX_GACHA_RESET_LIMIT_NO_RARE_MSG"*/);
    sub_1B885B0(&StringLiteral_3096/*"BOX_GACHA_RESET_NO_RARE_MSG"*/);
    sub_1B885B0(&StringLiteral_3099/*"BOX_GACHA_RESET_TITLE"*/);
    sub_1B885B0(&StringLiteral_3759/*"COMMON_CONFIRM_NO"*/);
    sub_1B885B0(&StringLiteral_3091/*"BOX_GACHA_RESET_LIMIT_MSG"*/);
    sub_1B885B0(&StringLiteral_3085/*"BOX_GACHA_EXE_TXT"*/);
    byte_4A5EF82 = 1;
  }
  v3 = Method_BoxGachaItemListViewManager_ClickResetGachaBtn__;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_ClickResetGachaBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_BoxGachaItemListViewManager_ClickResetGachaBtn__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_33;
  Entity = UserBoxGachaMaster__GetEntity(
             (UserBoxGachaMaster_o *)MasterData_object,
             Instance,
             this->fields.currentBoxGachaId,
             0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BoxGachaMaster___)) == 0
    || (Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              this->fields.currentBoxGachaId,
                              (const MethodInfo_311D934 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int__GetEntity__),
        !Entity)
    || (v9 = (BoxGachaEntity_o *)Instance) == 0LL
    || (Instance = BoxGachaEntity__IsResetTarget((BoxGachaEntity_o *)Instance, Entity->fields.boxIndex + 1, 0LL),
        this->fields.isResetTarget = Instance & 1,
        (baseIds = v9->fields.baseIds) == 0LL) )
  {
LABEL_33:
    sub_1B8880C(Instance, v6);
  }
  max_length = baseIds->max_length;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3095/*"BOX_GACHA_RESET_MSG"*/, 0LL);
  v31 = max_length;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v13, v14, v15);
  v17 = System_String__Format(v12, v16, 0LL);
  IsLimitLineUp = BoxGachaEntity__IsLimitLineUp(v9, 0LL);
  isResetTarget = this->fields.isResetTarget;
  if ( IsLimitLineUp )
  {
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( this->fields.isResetTarget )
      {
LABEL_19:
        v20 = &StringLiteral_3091/*"BOX_GACHA_RESET_LIMIT_MSG"*/;
        goto LABEL_26;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isResetTarget )
        goto LABEL_19;
    }
    v20 = &StringLiteral_3092/*"BOX_GACHA_RESET_LIMIT_NO_RARE_MSG"*/;
    goto LABEL_26;
  }
  if ( this->fields.isResetTarget )
    goto LABEL_27;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = &StringLiteral_3096/*"BOX_GACHA_RESET_NO_RARE_MSG"*/;
LABEL_26:
  v21 = LocalizationManager__Get((System_String_o *)*v20, 0LL);
  v31 = max_length;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v22, v23, v24);
  v17 = System_String__Format(v21, v25, 0LL);
LABEL_27:
  v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3099/*"BOX_GACHA_RESET_TITLE"*/, 0LL);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3085/*"BOX_GACHA_EXE_TXT"*/, 0LL);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3759/*"COMMON_CONFIRM_NO"*/, 0LL);
  v30 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v30,
    (Il2CppObject *)this,
    Method_BoxGachaItemListViewManager_closeEventSvtConfirmDlg__,
    0LL);
  Instance = (int64_t)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v26 )
    goto LABEL_33;
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)v26,
    v27,
    v17,
    v28,
    v29,
    v30,
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
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__CloseCommandCodeDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  if ( (byte_4A5EF81 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EF81 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__UpdatePosition(scrollView, 0LL),
        (scrollView = (UIScrollView_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(scrollView, isDecide);
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
  UnityEngine_GameObject_o *resetInfoObj; // x0
  __int64 v16; // x8
  unsigned __int64 v17; // x27
  BoxGachaBaseEntity_o *v18; // x24
  __int64 v19; // x10
  bool v20; // w26
  int32_t *v21; // x11
  char v22; // w8
  __int64 v23; // x10
  int v24; // t1
  BoxGachaItemListViewItem_o *v25; // x25
  const MethodInfo *v26; // x5
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 klass_low; // x10
  __int64 v32; // x8

  if ( (byte_4A5EF75 & 1) == 0 )
  {
    sub_1B885B0(&BoxGachaItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    byte_4A5EF75 = 1;
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
  v16 = *(_QWORD *)&baseData->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
        sub_1B88814(resetInfoObj, baseData);
      v18 = baseData->m_Items[v17];
      if ( resIds )
      {
        v19 = *(_QWORD *)&resIds->max_length;
        v20 = 0;
        if ( v19 && (int)v19 >= 1 )
        {
          if ( !v18 )
            break;
          v21 = &resIds->m_Items[1];
          v22 = 0;
          v23 = (unsigned int)*(_QWORD *)&resIds->max_length;
          do
          {
            v24 = *v21++;
            if ( v18->fields.no == v24 )
              v22 = 1;
            --v23;
          }
          while ( v23 );
          v20 = v22;
        }
      }
      else
      {
        v20 = 0;
      }
      v25 = (BoxGachaItemListViewItem_o *)sub_1B887FC(BoxGachaItemListViewItem_TypeInfo);
      BoxGachaItemListViewItem___ctor(v25, v18, eventId, boxGachaId, v20, v26);
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
          (Il2CppObject *)v25,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = v29 + 8 * klass_low;
        LODWORD(resetInfoObj[1].klass) = klass_low + 1;
        *(_QWORD *)(v32 + 32) = v25;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 32), (int32_t)v25, v27, v28);
      }
      LODWORD(v16) = baseData->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_24;
    }
LABEL_25:
    sub_1B8880C(resetInfoObj, baseData);
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


BoxGachaItemListViewItem_o *__fastcall BoxGachaItemListViewManager__GetItem(
        BoxGachaItemListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  BoxGachaItemListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5EF77 & 1) == 0 )
  {
    sub_1B885B0(&BoxGachaItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4A5EF77 = 1;
  }
  result = (BoxGachaItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (BoxGachaItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  ServantEntity_o *Item; // x0
  const MethodInfo *v8; // x1
  __int64 methodPtr_low; // x10
  __int64 v10; // x8
  ServantEntity_o *v11; // x21
  int v12; // w8
  __int64 v13; // x8
  bool IsServantEquip; // w22
  CommonUI_o *v15; // x20
  GiftEntity_o *v16; // x21
  ServantStatusDialog_EndDelegate_o *v17; // x22
  Il2CppObject *v18; // x0
  System_String_o *classPassive; // x20
  System_String_o *v20; // x21
  CommonUI_o *v21; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v22; // x23
  __int64 v23; // x8
  __int64 v24; // x21
  __int64 v25; // x22
  int32_t v26; // w21
  ServantStatusDialog_EndDelegate_o *v27; // x22
  Il2CppObject *Instance; // x0
  ItemEntity_o *v29; // x20
  CommonUI_o *v30; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v31; // x22
  int v32; // w20
  ServantCostumeEntity_o *v33; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v34; // x21
  Il2CppObject *v35; // x0
  CommandCodeEntity_o *cardIds; // x20
  CommonUI_o *v37; // x21
  ServantStatusDialog_EndDelegate_o *v38; // x22
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_4A5EF7E & 1) == 0 )
  {
    sub_1B885B0(&Method_BoxGachaItemListViewManager_CloseCommandCodeDetail__);
    sub_1B885B0(&Method_BoxGachaItemListViewManager_OnClickListView__);
    sub_1B885B0(&Method_BoxGachaItemListViewManager_closeItemDetail__);
    sub_1B885B0(&Method_BoxGachaItemListViewManager_closeSvtDetail__);
    sub_1B885B0(&BoxGachaItemListViewObject_TypeInfo);
    sub_1B885B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1B885B0(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1B885B0(&MissionInfoMaker_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5EF7E = 1;
  }
  v5 = Method_BoxGachaItemListViewManager_OnClickListView__;
  entity = 0LL;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B885C8(Method_BoxGachaItemListViewManager_OnClickListView__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  if ( !obj )
    goto LABEL_36;
  methodPtr_low = LOBYTE(BoxGachaItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_36;
  if ( (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BoxGachaItemListViewObject_TypeInfo )
    goto LABEL_36;
  Item = (ServantEntity_o *)BoxGachaItemListViewObject__GetItem((BoxGachaItemListViewObject_o *)obj, v8);
  if ( !Item )
    goto LABEL_36;
  v10 = *(_QWORD *)&Item->fields.combineSkillId;
  v11 = Item;
  if ( !v10 )
    goto LABEL_36;
  v12 = *(_DWORD *)(v10 + 24);
  if ( v12 == 1 )
  {
    v13 = *(_QWORD *)&Item->fields.sellQp;
    if ( v13 )
    {
      switch ( *(_DWORD *)(v13 + 20) )
      {
        case 1:
        case 6:
        case 7:
          Item = *(ServantEntity_o **)&Item->fields.sellRarePri;
          if ( !Item )
            goto LABEL_36;
          IsServantEquip = ServantEntity__get_IsServantEquip(Item, 0LL);
          Item = (ServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v15 = (CommonUI_o *)Item;
          if ( IsServantEquip )
          {
            v16 = *(GiftEntity_o **)&v11->fields.sellQp;
            v17 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v17,
              (Il2CppObject *)this,
              Method_BoxGachaItemListViewManager_closeSvtDetail__,
              0LL);
            if ( v15 )
            {
              CommonUI__OpenServantStatusDialog_30507920(v15, 7, v16, v17, 0LL);
              return;
            }
LABEL_36:
            sub_1B8880C(Item, v8);
          }
          v23 = *(_QWORD *)&v11->fields.sellRarePri;
          if ( !v23 )
            goto LABEL_36;
          v25 = *(_QWORD *)(v23 + 16);
          v24 = *(_QWORD *)(v23 + 24);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v40.fields.currentCryptoKey = v25;
          *(_QWORD *)&v40.fields.fakeValue = v24;
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v40, 0LL);
          v27 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v27,
            (Il2CppObject *)this,
            Method_BoxGachaItemListViewManager_closeSvtDetail__,
            0LL);
          if ( !v15 )
            goto LABEL_36;
          CommonUI__OpenServantStatusDialog_30507356(v15, 7, v26, v27, 0LL);
          break;
        case 2:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v29 = *(ItemEntity_o **)&v11->fields.combineMaterialId;
          v30 = (CommonUI_o *)Instance;
          v31 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
          ItemDetailInfoComponent_CallbackFunc___ctor(
            v31,
            (Il2CppObject *)this,
            (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
            0LL);
          if ( !v30 )
            goto LABEL_36;
          CommonUI__OpenItemDetailDialog(v30, v29, v31, 50, 0LL);
          return;
        case 9:
          v32 = *(_DWORD *)(v13 + 24);
          Item = (ServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Item )
            goto LABEL_36;
          Item = (ServantEntity_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Item,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
          if ( !Item )
            goto LABEL_36;
          if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Item, &entity, v32 / 100, v32 % 100, 0LL) )
          {
            v33 = entity;
            v34 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
            ItemDetailInfoComponent_CallbackFunc___ctor(
              v34,
              (Il2CppObject *)this,
              (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
              0LL);
            if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
            MissionInfoMaker__OpenCostumeReleaseDetail(v33, v34, 0LL);
          }
          return;
        case 0xB:
          v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          cardIds = (CommandCodeEntity_o *)v11->fields.cardIds;
          v37 = (CommonUI_o *)v35;
          v38 = (ServantStatusDialog_EndDelegate_o *)sub_1B887FC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v38,
            (Il2CppObject *)this,
            Method_BoxGachaItemListViewManager_CloseCommandCodeDetail__,
            0LL);
          if ( !v37 )
            goto LABEL_36;
          CommonUI__OpenServantEquipStatusDialog_30510512(v37, 25, cardIds, 0, v38, 0LL, 0LL);
          return;
        default:
          return;
      }
    }
  }
  else if ( (v12 & 0xFFFFFFFE) == 2 )
  {
    v18 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    classPassive = (System_String_o *)v11->fields.classPassive;
    v20 = *(System_String_o **)&v11->fields.collectionNo;
    v21 = (CommonUI_o *)v18;
    v22 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v21 )
      goto LABEL_36;
    CommonUI__OpenItemDetailDialog_30558980(v21, classPassive, v20, v22, 0LL);
  }
}


void __fastcall BoxGachaItemListViewManager__OnMoveEnd(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A5EF7D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF7D = 1;
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


void __fastcall BoxGachaItemListViewManager__RefrashListDisp(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *resetInfoObj; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 methodPtr_low; // x11
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5EF76 & 1) == 0 )
  {
    sub_1B885B0(&BoxGachaItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_4A5EF76 = 1;
  }
  memset(&v7, 0, sizeof(v7));
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
    sub_1B8880C(resetInfoObj, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)resetInfoObj,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v7,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v4 )
      break;
    if ( !v7.fields._current
      || (methodPtr_low = LOBYTE(BoxGachaItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v7.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (BoxGachaItemListViewItem_c *)v7.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != BoxGachaItemListViewItem_TypeInfo )
    {
      sub_1B8880C(v4, v5);
    }
    *(int32x2_t *)&this->fields.allMaxNum = vadd_s32(
                                              vrev64_s32(*(int32x2_t *)((char *)&v7.fields._current[11].monitor + 4)),
                                              *(int32x2_t *)&this->fields.allMaxNum);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall BoxGachaItemListViewManager__RequestInto(BoxGachaItemListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A5EF7C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoxGachaItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Item__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5EF7C = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = BoxGachaItemListViewManager__get_ObjectList(this, v3);
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
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v8;
      BoxGachaItemListViewObject__Init_45664548(
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
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
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
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5EF7A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoxGachaItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5EF7A = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)BoxGachaItemListViewManager__get_ObjectList(
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
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      BoxGachaItemListViewObject__Init_45664548((BoxGachaItemListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__RequestListObject_45664648(
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

  if ( (byte_4A5EF7B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoxGachaItemListViewManager_OnMoveEnd__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A5EF7B = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)BoxGachaItemListViewManager__get_ObjectList(
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
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      BoxGachaItemListViewObject__Init_45665152((BoxGachaItemListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
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
    sub_1B8880C(resetInfoObj, isGachaReset);
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
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  BoxGachaItemListViewManager__SetMode_45663664(this, mode, v6);
}


void __fastcall BoxGachaItemListViewManager__SetMode_45663664(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4A5EF79 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_11311/*"RequestInto"*/);
    byte_4A5EF79 = 1;
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


void __fastcall BoxGachaItemListViewManager__SetMode_45663916(
        BoxGachaItemListViewManager_o *this,
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
  BoxGachaItemListViewManager__SetMode_45663664(this, mode, v6);
}


void __fastcall BoxGachaItemListViewManager__SetMode_45663968(
        BoxGachaItemListViewManager_o *this,
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
  BoxGachaItemListViewManager__SetMode_45663664(this, mode, v7);
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
  if ( (byte_4A5EF78 & 1) == 0 )
  {
    this = (BoxGachaItemListViewManager_o *)sub_1B885B0(&BoxGachaItemListViewObject_TypeInfo);
    byte_4A5EF78 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(BoxGachaItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BoxGachaItemListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  BoxGachaItemListViewObject__Init_45663536((BoxGachaItemListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4A5EF85 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4A5EF85 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1B8880C(scrollView, method);
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

  if ( (byte_4A5EF86 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5755/*"EXE_RESETGACHA"*/);
    byte_4A5EF86 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5755/*"EXE_RESETGACHA"*/, 0LL);
}


void __fastcall BoxGachaItemListViewManager__add_callbackFunc(
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

  if ( (byte_4A5EF6F & 1) == 0 )
  {
    sub_1B885B0(&BoxGachaItemListViewManager_CallbackFunc_TypeInfo);
    byte_4A5EF6F = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (BoxGachaItemListViewManager_CallbackFunc_c *)v7->klass != BoxGachaItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  BoxGachaItemListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall BoxGachaItemListViewManager__add_callbackFunc2(
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

  if ( (byte_4A5EF71 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5EF71 = 1;
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
  BoxGachaItemListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall BoxGachaItemListViewManager__closeEventSvtConfirmDlg(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x21
  System_Action_o *v8; // x20

  if ( (byte_4A5EF83 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BoxGachaItemListViewManager__closeEventSvtConfirmDlg_b__46_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EF83 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BoxGachaItemListViewManager__closeEventSvtConfirmDlg_b__46_0__,
      0LL);
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_30494572(v7, v8, 0LL);
      return;
    }
LABEL_8:
    sub_1B8880C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_8;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall BoxGachaItemListViewManager__closeItemDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5EF7F & 1) == 0 )
  {
    sub_1B885B0(&Method_BoxGachaItemListViewManager_closeItemDetail__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EF7F = 1;
  }
  v3 = Method_BoxGachaItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_BoxGachaItemListViewManager_closeItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__closeSvtDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  if ( (byte_4A5EF80 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EF80 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__UpdatePosition(scrollView, 0LL),
        (scrollView = (UIScrollView_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(scrollView, isDecide);
  }
  CommonUI__CloseServantStatusDialog((CommonUI_o *)scrollView, 0LL, 0LL);
}


bool __fastcall BoxGachaItemListViewManager__getIsRareTarget(
        BoxGachaItemListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isResetTarget;
}


System_Collections_Generic_List_BoxGachaItemListViewObject__o *__fastcall BoxGachaItemListViewManager__get_ClippingObjectList(
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

  if ( (byte_4A5EF74 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF74 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
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
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)BoxGachaItemListViewObject__GetItem(
                                 (BoxGachaItemListViewObject_o *)Component_object,
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
          v19 = Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__;
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
        v19 = Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__;
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
  return (System_Collections_Generic_List_BoxGachaItemListViewObject__o *)v3;
}


System_Collections_Generic_List_BoxGachaItemListViewObject__o *__fastcall BoxGachaItemListViewManager__get_ObjectList(
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
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5EF73 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF73 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
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
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__;
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
  return (System_Collections_Generic_List_BoxGachaItemListViewObject__o *)v3;
}


void __fastcall BoxGachaItemListViewManager__itemColliderCtr(
        BoxGachaItemListViewManager_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  bool v6; // w19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x26
  __int64 methodPtr_low; // x10
  UnityEngine_Object_o *monitor; // x20
  __int64 v12; // x1
  UnityEngine_Component_o *v13; // x0
  Il2CppObject *Component_object; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5EF84 & 1) == 0 )
  {
    sub_1B885B0(&BoxGachaItemListViewItem_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF84 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v6 = isDisp;
    v17 = v16;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v17,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v7 )
        break;
      current = v17.fields._current;
      if ( !v17.fields._current
        || (methodPtr_low = LOBYTE(BoxGachaItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v17.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (BoxGachaItemListViewItem_c *)v17.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != BoxGachaItemListViewItem_TypeInfo )
      {
        sub_1B8880C(v7, v8);
      }
      monitor = (UnityEngine_Object_o *)v17.fields._current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v13 = (UnityEngine_Component_o *)current[6].monitor;
        if ( !v13 )
          sub_1B8880C(0LL, v12);
        Component_object = UnityEngine_Component__GetComponent_object_(
                             v13,
                             (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Collider___);
        if ( !Component_object )
          sub_1B8880C(0LL, v15);
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, v6, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
}


void __fastcall BoxGachaItemListViewManager__remove_callbackFunc(
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

  if ( (byte_4A5EF70 & 1) == 0 )
  {
    sub_1B885B0(&BoxGachaItemListViewManager_CallbackFunc_TypeInfo);
    byte_4A5EF70 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (BoxGachaItemListViewManager_CallbackFunc_c *)v7->klass != BoxGachaItemListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  BoxGachaItemListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall BoxGachaItemListViewManager__remove_callbackFunc2(
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

  if ( (byte_4A5EF72 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5EF72 = 1;
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
  BoxGachaItemListViewManager__get_ObjectList(v10, v11);
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
  this->fields.m_target = (Il2CppObject *)sub_19D381C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D37DC;
}


System_IAsyncResult_o *__fastcall BoxGachaItemListViewManager_CallbackFunc__BeginInvoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B88564(this, &v5, callback, object);
}


void __fastcall BoxGachaItemListViewManager_CallbackFunc__EndInvoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall BoxGachaItemListViewManager_CallbackFunc__Invoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}