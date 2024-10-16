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
  int64_t Instance; // x0
  __int64 v24; // x1
  Il2CppObject *MasterData_object; // x20
  UserBoxGachaEntity_o *Entity; // x20
  BoxGachaEntity_o *v27; // x21
  struct System_Int32_array *baseIds; // x8
  int max_length; // w24
  System_String_o *v30; // x20
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  System_String_o *v35; // x20
  bool IsLimitLineUp; // w0
  _BOOL4 isResetTarget; // w21
  __int64 *v38; // x8
  System_String_o *v39; // x20
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  Il2CppObject *v43; // x0
  Il2CppObject *v44; // x21
  System_String_o *v45; // x22
  System_String_o *v46; // x23
  System_String_o *v47; // x24
  CommonConfirmDialog_ClickDelegate_o *v48; // x25
  int v49; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4AB9BC2 & 1) == 0 )
  {
    sub_1BAB41C(&BalanceConfig_TypeInfo, method);
    sub_1BAB41C(&Method_BoxGachaItemListViewManager_ClickResetGachaBtn__, v3);
    sub_1BAB41C(&Method_BoxGachaItemListViewManager_closeEventSvtConfirmDlg__, v4);
    sub_1BAB41C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_1BAB41C(&Method_DataManager_GetMasterData_BoxGachaMaster___, v6);
    sub_1BAB41C(&Method_DataManager_GetMasterData_UserBoxGachaMaster___, v7);
    sub_1BAB41C(&Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int__GetEntity__, v8);
    sub_1BAB41C(&int_TypeInfo, v9);
    sub_1BAB41C(&LocalizationManager_TypeInfo, v10);
    sub_1BAB41C(&NetworkManager_TypeInfo, v11);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1BAB41C(&StringLiteral_3091/*"BOX_GACHA_RESET_MSG"*/, v14);
    sub_1BAB41C(&StringLiteral_3088/*"BOX_GACHA_RESET_LIMIT_NO_RARE_MSG"*/, v15);
    sub_1BAB41C(&StringLiteral_3092/*"BOX_GACHA_RESET_NO_RARE_MSG"*/, v16);
    sub_1BAB41C(&StringLiteral_3095/*"BOX_GACHA_RESET_TITLE"*/, v17);
    sub_1BAB41C(&StringLiteral_3757/*"COMMON_CONFIRM_NO"*/, v18);
    sub_1BAB41C(&StringLiteral_3087/*"BOX_GACHA_RESET_LIMIT_MSG"*/, v19);
    sub_1BAB41C(&StringLiteral_3081/*"BOX_GACHA_EXE_TXT"*/, v20);
    byte_4AB9BC2 = 1;
  }
  v21 = Method_BoxGachaItemListViewManager_ClickResetGachaBtn__;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_ClickResetGachaBtn__ + 83) & 2) != 0 )
    v21 = (_QWORD *)sub_1BAB434(Method_BoxGachaItemListViewManager_ClickResetGachaBtn__);
  v22 = (System_Reflection_MethodBase_o *)sub_1BAB400(v21, v21[4]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_UserBoxGachaMaster___);
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_BoxGachaMaster___)) == 0
    || (Instance = (int64_t)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                              this->fields.currentBoxGachaId,
                              (const MethodInfo_3163D90 *)Method_DataMasterBase_BoxGachaMaster__BoxGachaEntity__int__GetEntity__),
        !Entity)
    || (v27 = (BoxGachaEntity_o *)Instance) == 0LL
    || (Instance = BoxGachaEntity__IsResetTarget((BoxGachaEntity_o *)Instance, Entity->fields.boxIndex + 1, 0LL),
        this->fields.isResetTarget = Instance & 1,
        (baseIds = v27->fields.baseIds) == 0LL) )
  {
LABEL_33:
    sub_1BAB678(Instance, v24);
  }
  max_length = baseIds->max_length;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3091/*"BOX_GACHA_RESET_MSG"*/, 0LL);
  v49 = max_length;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v31, v32, v33);
  v35 = System_String__Format(v30, v34, 0LL);
  IsLimitLineUp = BoxGachaEntity__IsLimitLineUp(v27, 0LL);
  isResetTarget = this->fields.isResetTarget;
  if ( IsLimitLineUp )
  {
    if ( LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      if ( this->fields.isResetTarget )
      {
LABEL_19:
        v38 = &StringLiteral_3087/*"BOX_GACHA_RESET_LIMIT_MSG"*/;
        goto LABEL_26;
      }
    }
    else
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      if ( isResetTarget )
        goto LABEL_19;
    }
    v38 = &StringLiteral_3088/*"BOX_GACHA_RESET_LIMIT_NO_RARE_MSG"*/;
    goto LABEL_26;
  }
  if ( this->fields.isResetTarget )
    goto LABEL_27;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v38 = &StringLiteral_3092/*"BOX_GACHA_RESET_NO_RARE_MSG"*/;
LABEL_26:
  v39 = LocalizationManager__Get((System_String_o *)*v38, 0LL);
  v49 = max_length;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v40, v41, v42);
  v35 = System_String__Format(v39, v43, 0LL);
LABEL_27:
  v44 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3095/*"BOX_GACHA_RESET_TITLE"*/, 0LL);
  v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3081/*"BOX_GACHA_EXE_TXT"*/, 0LL);
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_NO"*/, 0LL);
  v48 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BAB668(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v48,
    (Il2CppObject *)this,
    Method_BoxGachaItemListViewManager_closeEventSvtConfirmDlg__,
    0LL);
  Instance = (int64_t)BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v44 )
    goto LABEL_33;
  CommonUI__OpenConfirmDecideDlg(
    (CommonUI_o *)v44,
    v45,
    v35,
    v46,
    v47,
    v48,
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

  if ( (byte_4AB9BC1 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4AB9BC1 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__UpdatePosition(scrollView, 0LL),
        (scrollView = (UIScrollView_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BAB678(scrollView, isDecide);
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
  __int64 v17; // x8
  unsigned __int64 v18; // x27
  BoxGachaBaseEntity_o *v19; // x24
  __int64 v20; // x10
  bool v21; // w26
  int32_t *v22; // x11
  char v23; // w8
  __int64 v24; // x10
  int v25; // t1
  BoxGachaItemListViewItem_o *v26; // x25
  const MethodInfo *v27; // x5
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 klass_low; // x10
  __int64 v33; // x8

  if ( (byte_4AB9BB5 & 1) == 0 )
  {
    sub_1BAB41C(&BoxGachaItemListViewItem_TypeInfo, baseData);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v15);
    byte_4AB9BB5 = 1;
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
  v17 = *(_QWORD *)&baseData->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
        sub_1BAB680(resetInfoObj, baseData);
      v19 = baseData->m_Items[v18];
      if ( resIds )
      {
        v20 = *(_QWORD *)&resIds->max_length;
        v21 = 0;
        if ( v20 && (int)v20 >= 1 )
        {
          if ( !v19 )
            break;
          v22 = &resIds->m_Items[1];
          v23 = 0;
          v24 = (unsigned int)*(_QWORD *)&resIds->max_length;
          do
          {
            v25 = *v22++;
            if ( v19->fields.no == v25 )
              v23 = 1;
            --v24;
          }
          while ( v24 );
          v21 = v23;
        }
      }
      else
      {
        v21 = 0;
      }
      v26 = (BoxGachaItemListViewItem_o *)sub_1BAB668(BoxGachaItemListViewItem_TypeInfo);
      BoxGachaItemListViewItem___ctor(v26, v19, eventId, boxGachaId, v21, v27);
      resetInfoObj = (UnityEngine_GameObject_o *)this->fields.itemList;
      if ( !resetInfoObj )
        break;
      v30 = *(_QWORD *)&resetInfoObj->fields.m_CachedPtr;
      v31 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++HIDWORD(resetInfoObj[1].klass);
      if ( !v30 )
        break;
      klass_low = SLODWORD(resetInfoObj[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v30 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)resetInfoObj,
          (Il2CppObject *)v26,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = v30 + 8 * klass_low;
        LODWORD(resetInfoObj[1].klass) = klass_low + 1;
        *(_QWORD *)(v33 + 32) = v26;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v33 + 32), (int32_t)v26, v28, v29);
      }
      LODWORD(v17) = baseData->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_24;
    }
LABEL_25:
    sub_1BAB678(resetInfoObj, baseData);
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

  if ( (byte_4AB9BB7 & 1) == 0 )
  {
    sub_1BAB41C(&BoxGachaItemListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4AB9BB7 = 1;
  }
  result = (BoxGachaItemListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (BoxGachaItemListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                             (System_Collections_Generic_List_object__o *)result,
                                             index,
                                             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  ServantEntity_o *Item; // x0
  const MethodInfo *v19; // x1
  __int64 methodPtr_low; // x10
  __int64 v21; // x8
  ServantEntity_o *v22; // x21
  int v23; // w8
  __int64 v24; // x8
  bool IsServantEquip; // w22
  CommonUI_o *v26; // x20
  GiftEntity_o *v27; // x21
  ServantStatusDialog_EndDelegate_o *v28; // x22
  Il2CppObject *v29; // x0
  System_String_o *classPassive; // x20
  System_String_o *v31; // x21
  CommonUI_o *v32; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v33; // x23
  __int64 v34; // x8
  __int64 v35; // x21
  __int64 v36; // x22
  int32_t v37; // w21
  ServantStatusDialog_EndDelegate_o *v38; // x22
  Il2CppObject *Instance; // x0
  ItemEntity_o *v40; // x20
  CommonUI_o *v41; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v42; // x22
  int v43; // w20
  ServantCostumeEntity_o *v44; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v45; // x21
  Il2CppObject *v46; // x0
  CommandCodeEntity_o *cardIds; // x20
  CommonUI_o *v48; // x21
  ServantStatusDialog_EndDelegate_o *v49; // x22
  ServantCostumeEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16

  if ( (byte_4AB9BBE & 1) == 0 )
  {
    sub_1BAB41C(&Method_BoxGachaItemListViewManager_CloseCommandCodeDetail__, obj);
    sub_1BAB41C(&Method_BoxGachaItemListViewManager_OnClickListView__, v5);
    sub_1BAB41C(&Method_BoxGachaItemListViewManager_closeItemDetail__, v6);
    sub_1BAB41C(&Method_BoxGachaItemListViewManager_closeSvtDetail__, v7);
    sub_1BAB41C(&BoxGachaItemListViewObject_TypeInfo, v8);
    sub_1BAB41C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v9);
    sub_1BAB41C(&Method_DataManager_GetMasterData_ServantCostumeMaster___, v10);
    sub_1BAB41C(&ServantStatusDialog_EndDelegate_TypeInfo, v11);
    sub_1BAB41C(&MissionInfoMaker_TypeInfo, v12);
    sub_1BAB41C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4AB9BBE = 1;
  }
  v16 = Method_BoxGachaItemListViewManager_OnClickListView__;
  entity = 0LL;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_OnClickListView__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1BAB434(Method_BoxGachaItemListViewManager_OnClickListView__);
  v17 = (System_Reflection_MethodBase_o *)sub_1BAB400(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
  if ( !obj )
    goto LABEL_36;
  methodPtr_low = LOBYTE(BoxGachaItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_36;
  if ( (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BoxGachaItemListViewObject_TypeInfo )
    goto LABEL_36;
  Item = (ServantEntity_o *)BoxGachaItemListViewObject__GetItem((BoxGachaItemListViewObject_o *)obj, v19);
  if ( !Item )
    goto LABEL_36;
  v21 = *(_QWORD *)&Item->fields.combineSkillId;
  v22 = Item;
  if ( !v21 )
    goto LABEL_36;
  v23 = *(_DWORD *)(v21 + 24);
  if ( v23 == 1 )
  {
    v24 = *(_QWORD *)&Item->fields.sellQp;
    if ( v24 )
    {
      switch ( *(_DWORD *)(v24 + 20) )
      {
        case 1:
        case 6:
        case 7:
          Item = *(ServantEntity_o **)&Item->fields.sellRarePri;
          if ( !Item )
            goto LABEL_36;
          IsServantEquip = ServantEntity__get_IsServantEquip(Item, 0LL);
          Item = (ServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v26 = (CommonUI_o *)Item;
          if ( IsServantEquip )
          {
            v27 = *(GiftEntity_o **)&v22->fields.sellQp;
            v28 = (ServantStatusDialog_EndDelegate_o *)sub_1BAB668(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v28,
              (Il2CppObject *)this,
              Method_BoxGachaItemListViewManager_closeSvtDetail__,
              0LL);
            if ( v26 )
            {
              CommonUI__OpenServantStatusDialog_30650652(v26, 7, v27, v28, 0LL);
              return;
            }
LABEL_36:
            sub_1BAB678(Item, v19);
          }
          v34 = *(_QWORD *)&v22->fields.sellRarePri;
          if ( !v34 )
            goto LABEL_36;
          v36 = *(_QWORD *)(v34 + 16);
          v35 = *(_QWORD *)(v34 + 24);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v51.fields.currentCryptoKey = v36;
          *(_QWORD *)&v51.fields.fakeValue = v35;
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46695852(v51, 0LL);
          v38 = (ServantStatusDialog_EndDelegate_o *)sub_1BAB668(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v38,
            (Il2CppObject *)this,
            Method_BoxGachaItemListViewManager_closeSvtDetail__,
            0LL);
          if ( !v26 )
            goto LABEL_36;
          CommonUI__OpenServantStatusDialog_30650088(v26, 7, v37, v38, 0LL);
          break;
        case 2:
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v40 = *(ItemEntity_o **)&v22->fields.combineMaterialId;
          v41 = (CommonUI_o *)Instance;
          v42 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BAB668(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
          ItemDetailInfoComponent_CallbackFunc___ctor(
            v42,
            (Il2CppObject *)this,
            (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
            0LL);
          if ( !v41 )
            goto LABEL_36;
          CommonUI__OpenItemDetailDialog(v41, v40, v42, 50, 0LL);
          return;
        case 9:
          v43 = *(_DWORD *)(v24 + 24);
          Item = (ServantEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Item )
            goto LABEL_36;
          Item = (ServantEntity_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Item,
                                      (const MethodInfo_2EC55C8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
          if ( !Item )
            goto LABEL_36;
          if ( ServantCostumeMaster__TryGetEntity((ServantCostumeMaster_o *)Item, &entity, v43 / 100, v43 % 100, 0LL) )
          {
            v44 = entity;
            v45 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BAB668(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
            ItemDetailInfoComponent_CallbackFunc___ctor(
              v45,
              (Il2CppObject *)this,
              (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
              0LL);
            if ( !MissionInfoMaker_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(MissionInfoMaker_TypeInfo);
            MissionInfoMaker__OpenCostumeReleaseDetail(v44, v45, 0LL);
          }
          return;
        case 0xB:
          v46 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          cardIds = (CommandCodeEntity_o *)v22->fields.cardIds;
          v48 = (CommonUI_o *)v46;
          v49 = (ServantStatusDialog_EndDelegate_o *)sub_1BAB668(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v49,
            (Il2CppObject *)this,
            Method_BoxGachaItemListViewManager_CloseCommandCodeDetail__,
            0LL);
          if ( !v48 )
            goto LABEL_36;
          CommonUI__OpenServantEquipStatusDialog_30653244(v48, 25, cardIds, 0, v49, 0LL, 0LL);
          return;
        default:
          return;
      }
    }
  }
  else if ( (v23 & 0xFFFFFFFE) == 2 )
  {
    v29 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    classPassive = (System_String_o *)v22->fields.classPassive;
    v31 = *(System_String_o **)&v22->fields.collectionNo;
    v32 = (CommonUI_o *)v29;
    v33 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BAB668(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v33,
      (Il2CppObject *)this,
      (intptr_t)Method_BoxGachaItemListViewManager_closeItemDetail__,
      0LL);
    if ( !v32 )
      goto LABEL_36;
    CommonUI__OpenItemDetailDialog_30700800(v32, classPassive, v31, v33, 0LL);
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

  if ( (byte_4AB9BBD & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, method);
    byte_4AB9BBD = 1;
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
          sub_1BAB678(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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

  if ( (byte_4AB9BB6 & 1) == 0 )
  {
    sub_1BAB41C(&BoxGachaItemListViewItem_TypeInfo, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_4AB9BB6 = 1;
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
    sub_1BAB678(resetInfoObj, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)resetInfoObj,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current
      || (methodPtr_low = LOBYTE(BoxGachaItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v11.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (BoxGachaItemListViewItem_c *)v11.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != BoxGachaItemListViewItem_TypeInfo )
    {
      sub_1BAB678(v8, v9);
    }
    *(int32x2_t *)&this->fields.allMaxNum = vadd_s32(
                                              vrev64_s32(*(int32x2_t *)((char *)&v11.fields._current[11].monitor + 4)),
                                              *(int32x2_t *)&this->fields.allMaxNum);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4AB9BBC & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, method);
    sub_1BAB41C(&Method_BoxGachaItemListViewManager_OnMoveEnd__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Item__, v5);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v6);
    byte_4AB9BBC = 1;
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  ListViewManager__DragMaskStart((ListViewManager_o *)this, 0LL);
  ObjectList = BoxGachaItemListViewManager__get_ObjectList(this, v7);
  if ( !ObjectList )
LABEL_13:
    sub_1BAB678(ObjectList, v9);
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
             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Item__);
    if ( ListViewManager__ClippingItem((ListViewManager_o *)this, (ListViewObject_o *)Item, 0LL) )
    {
      v15 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !Item )
        goto LABEL_13;
      ++v12;
      BoxGachaItemListViewObject__Init_46091740(
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
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
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

  if ( (byte_4AB9BBA & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BAB41C(&Method_BoxGachaItemListViewManager_OnMoveEnd__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__get_Current__, v10);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__, v11);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__, v12);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v13);
    byte_4AB9BBA = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)BoxGachaItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BAB678(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BAB678(v19, v20);
      BoxGachaItemListViewObject__Init_46091740((BoxGachaItemListViewObject_o *)current, mode, v18, delay, v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__RequestListObject_46091840(
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

  if ( (byte_4AB9BBB & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BAB41C(&Method_BoxGachaItemListViewManager_OnMoveEnd__, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__get_Current__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__, v9);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__get_Count__, v10);
    sub_1BAB41C(&StringLiteral_9942/*"OnMoveEnd"*/, v11);
    byte_4AB9BBB = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)BoxGachaItemListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BAB678(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9942/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_BoxGachaItemListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BAB678(v17, v18);
      BoxGachaItemListViewObject__Init_46092344((BoxGachaItemListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_BoxGachaItemListViewObject__Dispose__);
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
    sub_1BAB678(resetInfoObj, isGachaReset);
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
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  BoxGachaItemListViewManager__SetMode_46090856(this, mode, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__SetMode_46090856(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4AB9BB9 & 1) == 0 )
  {
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&mode);
    sub_1BAB41C(&StringLiteral_11320/*"RequestInto"*/, v5);
    byte_4AB9BB9 = 1;
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
        sub_1BAB678(gameObject, v7);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_11320/*"RequestInto"*/,
      0.0,
      0LL);
  }
}


void __fastcall BoxGachaItemListViewManager__SetMode_46091108(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  BoxGachaItemListViewManager__SetMode_46090856(this, mode, v6);
}


void __fastcall BoxGachaItemListViewManager__SetMode_46091160(
        BoxGachaItemListViewManager_o *this,
        int32_t mode,
        float delay,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2

  this->fields.listInDelay = delay;
  this->fields.callbackFunc2 = callback;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  BoxGachaItemListViewManager__SetMode_46090856(this, mode, v7);
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
  if ( (byte_4AB9BB8 & 1) == 0 )
  {
    this = (BoxGachaItemListViewManager_o *)sub_1BAB41C(&BoxGachaItemListViewObject_TypeInfo, obj);
    byte_4AB9BB8 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(BoxGachaItemListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (BoxGachaItemListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != BoxGachaItemListViewObject_TypeInfo )
  {
    sub_1BAB678(this, obj);
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  BoxGachaItemListViewObject__Init_46090728((BoxGachaItemListViewObject_o *)obj, v7, (const MethodInfo *)item);
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

  if ( (byte_4AB9BC5 & 1) == 0 )
  {
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_UIPanel___, method);
    byte_4AB9BC5 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_10;
  scrollView = UnityEngine_Component__GetComponent_object_(
                 (UnityEngine_Component_o *)scrollView,
                 (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1BAB678(scrollView, method);
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

  if ( (byte_4AB9BC6 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_5757/*"EXE_RESETGACHA"*/, method);
    byte_4AB9BC6 = 1;
  }
  targetFSM = this->fields.targetFSM;
  if ( !targetFSM )
    sub_1BAB678(0LL, method);
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)StringLiteral_5757/*"EXE_RESETGACHA"*/, 0LL);
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

  if ( (byte_4AB9BAF & 1) == 0 )
  {
    sub_1BAB41C(&BoxGachaItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AB9BAF = 1;
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
    v8 = sub_1BE690C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BAB938(v7);
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

  if ( (byte_4AB9BB1 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, value);
    byte_4AB9BB1 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BAB938(v7);
  BoxGachaItemListViewManager__remove_callbackFunc2(v10, v11, v12);
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

  if ( (byte_4AB9BC3 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, isDecide);
    sub_1BAB41C(&Method_BoxGachaItemListViewManager__closeEventSvtConfirmDlg_b__46_0__, v5);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4AB9BC3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (CommonUI_o *)Instance;
  if ( isDecide )
  {
    v10 = (System_Action_o *)sub_1BAB668(System_Action_TypeInfo);
    System_Action___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BoxGachaItemListViewManager__closeEventSvtConfirmDlg_b__46_0__,
      0LL);
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_30637300(v9, v10, 0LL);
      return;
    }
LABEL_8:
    sub_1BAB678(Instance, v8);
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

  if ( (byte_4AB9BBF & 1) == 0 )
  {
    sub_1BAB41C(&Method_BoxGachaItemListViewManager_closeItemDetail__, isDecide);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4AB9BBF = 1;
  }
  v4 = Method_BoxGachaItemListViewManager_closeItemDetail__;
  if ( (*((_BYTE *)Method_BoxGachaItemListViewManager_closeItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BAB434(Method_BoxGachaItemListViewManager_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BAB400(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BAB678(0LL, v7);
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoxGachaItemListViewManager__closeSvtDetail(
        BoxGachaItemListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0

  if ( (byte_4AB9BC0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4AB9BC0 = 1;
  }
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__UpdatePosition(scrollView, 0LL),
        (scrollView = (UIScrollView_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BAB678(scrollView, isDecide);
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
  int32_t v22; // w2
  int32_t v23; // w3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4AB9BB4 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    byte_4AB9BB4 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BAB678(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BAB678(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BAB678(0LL, v18);
      Item = (ListViewItem_o *)BoxGachaItemListViewObject__GetItem(
                                 (BoxGachaItemListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1BAB678(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_41118488((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BAB678(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BAB678(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_354D8BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BAB678(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BAB678(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoxGachaItemListViewObject__o *)v11;
}


System_Collections_Generic_List_BoxGachaItemListViewObject__o *__fastcall BoxGachaItemListViewManager__get_ObjectList(
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4AB9BB3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BAB41C(&Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__, v8);
    sub_1BAB41C(&System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    byte_4AB9BB3 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_BoxGachaItemListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_BoxGachaItemListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BAB678(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BAB678(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2F13970 *)Method_UnityEngine_GameObject_GetComponent_BoxGachaItemListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BAB678(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_BoxGachaItemListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BAB678(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_354D8BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BoxGachaItemListViewObject__o *)v11;
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

  if ( (byte_4AB9BC4 & 1) == 0 )
  {
    sub_1BAB41C(&BoxGachaItemListViewItem_TypeInfo, isDisp);
    sub_1BAB41C(&Method_UnityEngine_Component_GetComponent_Collider___, v5);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v9);
    sub_1BAB41C(&UnityEngine_Object_TypeInfo, v10);
    byte_4AB9BC4 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)itemList,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    v12 = isDisp;
    v23 = v22;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v13 )
        break;
      current = v23.fields._current;
      if ( !v23.fields._current
        || (methodPtr_low = LOBYTE(BoxGachaItemListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v23.fields._current->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
        || (BoxGachaItemListViewItem_c *)v23.fields._current->klass->_2.typeHierarchy[methodPtr_low - 1] != BoxGachaItemListViewItem_TypeInfo )
      {
        sub_1BAB678(v13, v14);
      }
      monitor = (UnityEngine_Object_o *)v23.fields._current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      {
        v19 = (UnityEngine_Component_o *)current[6].monitor;
        if ( !v19 )
          sub_1BAB678(0LL, v18);
        Component_object = UnityEngine_Component__GetComponent_object_(
                             v19,
                             (const MethodInfo_2EBAE18 *)Method_UnityEngine_Component_GetComponent_Collider___);
        if ( !Component_object )
          sub_1BAB678(0LL, v21);
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, v12, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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

  if ( (byte_4AB9BB0 & 1) == 0 )
  {
    sub_1BAB41C(&BoxGachaItemListViewManager_CallbackFunc_TypeInfo, value);
    byte_4AB9BB0 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BAB938(v7);
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

  if ( (byte_4AB9BB2 & 1) == 0 )
  {
    sub_1BAB41C(&System_Action_TypeInfo, value);
    byte_4AB9BB2 = 1;
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
    v8 = sub_1BE690C(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BAB938(v7);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BAB4DC(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BAB694(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BAB544(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19F3E88;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19F3E48;
}


System_IAsyncResult_o *__fastcall BoxGachaItemListViewManager_CallbackFunc__BeginInvoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BAB3D0(this, &v5, callback, object);
}


void __fastcall BoxGachaItemListViewManager_CallbackFunc__EndInvoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BAB3D4(result, 0LL, method);
}


void __fastcall BoxGachaItemListViewManager_CallbackFunc__Invoke(
        BoxGachaItemListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}