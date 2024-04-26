void __fastcall PresentSelectableItemComponent___ctor(PresentSelectableItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PresentSelectableItemComponent__OnClickItem(
        PresentSelectableItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dialog; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  struct PresentSelectableDlgComponent_o *v6; // x0

  if ( (byte_4351F04 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351F04 = 1;
  }
  if ( this->fields.isEnableSelect )
  {
    dialog = (UnityEngine_Object_o *)this->fields.dialog;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(dialog, 0LL, 0LL) )
    {
      v6 = this->fields.dialog;
      if ( !v6 )
        sub_B7076C(0LL, v4);
      if ( !v6->fields.isClosed )
        PresentSelectableDlgComponent__OpenItemConfirmDlg(
          v6,
          this->fields.itemSelectEnt,
          this->fields.itemEnt,
          this->fields.itemHold,
          v5);
    }
  }
}


void __fastcall PresentSelectableItemComponent__setEnableSelectItem(
        PresentSelectableItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskImg; // x0

  if ( !this->fields.isEnableSelect )
  {
    maskImg = this->fields.maskImg;
    if ( !maskImg )
      sub_B7076C(0LL, method);
    UnityEngine_GameObject__SetActive(maskImg, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall PresentSelectableItemComponent__setItemInfo(
        PresentSelectableItemComponent_o *this,
        ItemSelectEntity_o *data,
        int32_t ticketsHave,
        int32_t ticketImgId,
        PresentSelectableDlgComponent_o *dlg,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  int64_t maskImg; // x0
  UILabel_o *currentInfoLb; // x23
  __int64 v22; // x8
  _DWORD *v23; // x23
  int32_t v24; // w2
  struct ItemEntity_o **p_itemEnt; // x23
  struct ItemEntity_o *itemEnt; // x8
  __int64 v27; // x2
  struct ItemEntity_o *v28; // x8
  UILabel_o *itemNameLb; // x22
  System_String_o *name; // x24
  Il2CppObject *v31; // x0
  System_String_o *v32; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v34; // x2
  int32_t v35; // w8
  UILabel_o *currentNumLb; // x22
  Il2CppObject *v37; // x0
  UILabel_o *spendNumLb; // x22
  UIWidget_o *v39; // x21
  bool v40; // cc
  int v41; // s0
  __int64 v46; // x0
  int32_t v47; // [xsp+Ch] [xbp-44h] BYREF
  int32_t giftNum; // [xsp+18h] [xbp-38h] BYREF
  int32_t requireNum; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4351F03 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B70694(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_23910/*"{0:N0}"*/);
    sub_B70694(&StringLiteral_760/*"-"*/);
    sub_B70694(&StringLiteral_10641/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/);
    sub_B70694(&StringLiteral_286/*" ×{0}"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4351F03 = 1;
  }
  requireNum = 0;
  this->fields.itemSelectEnt = data;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.itemSelectEnt,
    (System_Int32_array **)data,
    *(System_String_array ***)&ticketsHave,
    *(System_String_array ***)&ticketImgId,
    (System_Boolean_array **)dlg,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.dialog = dlg;
  this->fields.isEnableSelect = 0;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.dialog,
    (System_Int32_array **)dlg,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  maskImg = (int64_t)this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0LL);
  maskImg = (int64_t)this->fields.itemNameLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_760/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.currentNumLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_760/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.spendNumLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_760/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.itemDetailLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_760/*"-"*/, 0LL);
  currentInfoLb = this->fields.currentInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  maskImg = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10641/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_53;
  UILabel__set_text(currentInfoLb, (System_String_o *)maskImg, 0LL);
  maskImg = (int64_t)this->fields.itemIconInfo;
  if ( !maskImg )
    goto LABEL_53;
  maskImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskImg, 0LL);
  if ( !maskImg )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 1, 0LL);
  if ( !data )
    goto LABEL_53;
  maskImg = (int64_t)ItemSelectEntity__GetGiftData(data, 0LL);
  if ( maskImg )
  {
    v22 = *(_QWORD *)(maskImg + 24);
    if ( v22 )
    {
      if ( !(_DWORD)v22 )
      {
        v46 = sub_B70798(maskImg);
        sub_B70738(v46, 0LL);
      }
      v23 = *(_DWORD **)(maskImg + 32);
      if ( !v23 )
        goto LABEL_53;
      this->fields.giftNum = v23[7];
      if ( v23[5] == 2 )
      {
        maskImg = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !maskImg )
          goto LABEL_53;
        maskImg = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)maskImg,
                             (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !maskImg )
          goto LABEL_53;
        v24 = v23[6];
        p_itemEnt = &this->fields.itemEnt;
        maskImg = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    (DataMasterBase_WarMaster__WarEntity__int__o *)maskImg,
                    (WarEntity_o **)&this->fields.itemEnt,
                    v24,
                    (const MethodInfo_21C049C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( (maskImg & 1) != 0 )
        {
          itemEnt = this->fields.itemEnt;
          if ( itemEnt )
          {
            maskImg = (int64_t)this->fields.itemIconInfo;
            if ( maskImg )
            {
              ItemIconComponent__SetItemImage((ItemIconComponent_o *)maskImg, itemEnt->fields.imageId, 0LL);
              maskImg = (int64_t)this->fields.ticketObj;
              if ( maskImg )
              {
                if ( ticketImgId <= 0 )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0LL);
                }
                else
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 1, 0LL);
                  maskImg = (int64_t)this->fields.ticketSp;
                  if ( !maskImg )
                    goto LABEL_53;
                  ItemIconComponent__SetItemImage((ItemIconComponent_o *)maskImg, ticketImgId, 0LL);
                }
                v28 = this->fields.itemEnt;
                if ( v28 )
                {
                  itemNameLb = this->fields.itemNameLb;
                  name = v28->fields.name;
                  if ( this->fields.giftNum <= 1 )
                  {
                    v32 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  else
                  {
                    giftNum = this->fields.giftNum;
                    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &giftNum, v27);
                    v32 = System_String__Format((System_String_o *)StringLiteral_286/*" ×{0}"*/, v31, 0LL);
                  }
                  maskImg = (int64_t)System_String__Concat_44758168(name, v32, 0LL);
                  if ( itemNameLb )
                  {
                    UILabel__set_text(itemNameLb, (System_String_o *)maskImg, 0LL);
                    maskImg = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( maskImg )
                    {
                      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)maskImg,
                                                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserItemMaster___);
                      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                      }
                      maskImg = NetworkManager__get_UserId(0LL);
                      if ( *p_itemEnt )
                      {
                        if ( MasterData_WarQuestSelectionMaster )
                        {
                          maskImg = (int64_t)UserItemMaster__GetEntityDefinitely(
                                               MasterData_WarQuestSelectionMaster,
                                               maskImg,
                                               (*p_itemEnt)->fields.id,
                                               0LL);
                          if ( maskImg )
                          {
                            v35 = *(_DWORD *)(maskImg + 28);
                            this->fields.itemHold = v35;
                            requireNum = data->fields.requireNum;
                            currentNumLb = this->fields.currentNumLb;
                            v47 = v35;
                            v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v34);
                            maskImg = (int64_t)System_String__Format((System_String_o *)StringLiteral_23910/*"{0:N0}"*/, v37, 0LL);
                            if ( currentNumLb )
                            {
                              UILabel__set_text(currentNumLb, (System_String_o *)maskImg, 0LL);
                              spendNumLb = this->fields.spendNumLb;
                              maskImg = (int64_t)System_Int32__ToString((int32_t)&requireNum, 0LL);
                              if ( spendNumLb )
                              {
                                UILabel__set_text(spendNumLb, (System_String_o *)maskImg, 0LL);
                                maskImg = (int64_t)this->fields.itemDetailLb;
                                if ( maskImg )
                                {
                                  UILabel__set_text((UILabel_o *)maskImg, data->fields.detail, 0LL);
                                  v39 = (UIWidget_o *)this->fields.spendNumLb;
                                  v40 = requireNum <= ticketsHave;
                                  this->fields.isEnableSelect = requireNum <= ticketsHave;
                                  if ( v40 )
                                  {
                                    *(UnityEngine_Color_o *)&v41 = UnityEngine_Color__get_white(0LL);
                                    if ( !v39 )
                                      goto LABEL_53;
                                  }
                                  else
                                  {
                                    *(UnityEngine_Color_o *)&v41 = UnityEngine_Color__get_red(0LL);
                                    if ( !v39 )
                                      goto LABEL_53;
                                  }
                                  UIWidget__set_color(v39, *(UnityEngine_Color_o *)&v41, 0LL);
                                  maskImg = (int64_t)this->fields.maskImg;
                                  if ( maskImg )
                                  {
                                    UnityEngine_GameObject__SetActive(
                                      (UnityEngine_GameObject_o *)maskImg,
                                      !this->fields.isEnableSelect,
                                      0LL);
                                    goto LABEL_52;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_53:
          sub_B7076C(maskImg, v19);
        }
      }
    }
  }
LABEL_52:
  PresentSelectableItemComponent__setEnableSelectItem(this, v19);
  return this->fields.giftNum;
}