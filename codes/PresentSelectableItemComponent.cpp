void __fastcall PresentSelectableItemComponent___ctor(PresentSelectableItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PresentSelectableItemComponent__OnClickItem(
        PresentSelectableItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dialog; // x20
  const MethodInfo *v4; // x4
  struct PresentSelectableDlgComponent_o *v5; // x0

  if ( (byte_40FA004 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA004 = 1;
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
      v5 = this->fields.dialog;
      if ( !v5 )
        sub_B170D4();
      if ( !v5->fields.isClosed )
        PresentSelectableDlgComponent__OpenItemConfirmDlg(
          v5,
          this->fields.itemSelectEnt,
          this->fields.itemEnt,
          this->fields.itemHold,
          v4);
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
      sub_B170D4();
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_GameObject_o *maskImg; // x0
  UILabel_o *itemNameLb; // x0
  UILabel_o *currentNumLb; // x0
  UILabel_o *spendNumLb; // x0
  UILabel_o *itemDetailLb; // x0
  UILabel_o *currentInfoLb; // x23
  System_String_o *v36; // x0
  UnityEngine_Component_o *itemIconInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  GiftEntity_array *GiftData; // x0
  const MethodInfo *v40; // x1
  __int64 v41; // x2
  __int64 v42; // x8
  GiftEntity_o *v43; // x23
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  int32_t objectId; // w2
  struct ItemEntity_o **p_itemEnt; // x23
  struct ItemEntity_o *itemEnt; // x8
  ItemIconComponent_o *v49; // x0
  UnityEngine_GameObject_o *ticketObj; // x0
  ItemIconComponent_o *ticketSp; // x0
  struct ItemEntity_o *v52; // x8
  UILabel_o *v53; // x22
  System_String_o *name; // x24
  Il2CppObject *v55; // x0
  System_String_o *v56; // x1
  System_String_o *v57; // x0
  WebViewManager_o *v58; // x0
  UserItemMaster_o *v59; // x22
  int64_t UserId; // x0
  UserItemEntity_o *EntityDefinitely; // x0
  int32_t num; // w8
  UILabel_o *v63; // x22
  Il2CppObject *v64; // x0
  System_String_o *v65; // x0
  UILabel_o *v66; // x22
  System_String_o *v67; // x0
  UILabel_o *v68; // x0
  UIWidget_o *v69; // x21
  bool v70; // cc
  int v71; // s0
  UnityEngine_GameObject_o *v75; // x0
  int32_t v77; // [xsp+Ch] [xbp-44h] BYREF
  int32_t giftNum; // [xsp+18h] [xbp-38h] BYREF
  int32_t requireNum; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FA003 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, data);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v13);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v14);
    sub_B16FFC(&int_TypeInfo, v15);
    sub_B16FFC(&LocalizationManager_TypeInfo, v16);
    sub_B16FFC(&NetworkManager_TypeInfo, v17);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B16FFC(&StringLiteral_23433/*"{0:N0}"*/, v19);
    sub_B16FFC(&StringLiteral_746/*"-"*/, v20);
    sub_B16FFC(&StringLiteral_10470/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, v21);
    sub_B16FFC(&StringLiteral_278/*" ×{0}"*/, v22);
    sub_B16FFC(&StringLiteral_1/*""*/, v23);
    byte_40FA003 = 1;
  }
  requireNum = 0;
  this->fields.itemSelectEnt = data;
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.dialog,
    (System_Int32_array **)dlg,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  maskImg = this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(maskImg, 0, 0LL);
  itemNameLb = this->fields.itemNameLb;
  if ( !itemNameLb )
    goto LABEL_53;
  UILabel__set_text(itemNameLb, (System_String_o *)StringLiteral_746/*"-"*/, 0LL);
  currentNumLb = this->fields.currentNumLb;
  if ( !currentNumLb )
    goto LABEL_53;
  UILabel__set_text(currentNumLb, (System_String_o *)StringLiteral_746/*"-"*/, 0LL);
  spendNumLb = this->fields.spendNumLb;
  if ( !spendNumLb )
    goto LABEL_53;
  UILabel__set_text(spendNumLb, (System_String_o *)StringLiteral_746/*"-"*/, 0LL);
  itemDetailLb = this->fields.itemDetailLb;
  if ( !itemDetailLb )
    goto LABEL_53;
  UILabel__set_text(itemDetailLb, (System_String_o *)StringLiteral_746/*"-"*/, 0LL);
  currentInfoLb = this->fields.currentInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_10470/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_53;
  UILabel__set_text(currentInfoLb, v36, 0LL);
  itemIconInfo = (UnityEngine_Component_o *)this->fields.itemIconInfo;
  if ( !itemIconInfo )
    goto LABEL_53;
  gameObject = UnityEngine_Component__get_gameObject(itemIconInfo, 0LL);
  if ( !gameObject )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !data )
    goto LABEL_53;
  GiftData = ItemSelectEntity__GetGiftData(data, 0LL);
  if ( GiftData )
  {
    v42 = *(_QWORD *)&GiftData->max_length;
    if ( v42 )
    {
      if ( !(_DWORD)v42 )
      {
        sub_B17100(GiftData, v40, v41);
        sub_B170A0();
      }
      v43 = GiftData->m_Items[0];
      if ( !v43 )
        goto LABEL_53;
      this->fields.giftNum = v43->fields.num;
      if ( v43->fields.type == 2 )
      {
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_53;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_53;
        objectId = v43->fields.objectId;
        p_itemEnt = &this->fields.itemEnt;
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               (WarEntity_o **)&this->fields.itemEnt,
               objectId,
               (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
        {
          itemEnt = this->fields.itemEnt;
          if ( itemEnt )
          {
            v49 = this->fields.itemIconInfo;
            if ( v49 )
            {
              ItemIconComponent__SetItemImage(v49, itemEnt->fields.imageId, 0LL);
              ticketObj = this->fields.ticketObj;
              if ( ticketObj )
              {
                if ( ticketImgId <= 0 )
                {
                  UnityEngine_GameObject__SetActive(ticketObj, 0, 0LL);
                }
                else
                {
                  UnityEngine_GameObject__SetActive(ticketObj, 1, 0LL);
                  ticketSp = this->fields.ticketSp;
                  if ( !ticketSp )
                    goto LABEL_53;
                  ItemIconComponent__SetItemImage(ticketSp, ticketImgId, 0LL);
                }
                v52 = this->fields.itemEnt;
                if ( v52 )
                {
                  v53 = this->fields.itemNameLb;
                  name = v52->fields.name;
                  if ( this->fields.giftNum <= 1 )
                  {
                    v56 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  else
                  {
                    giftNum = this->fields.giftNum;
                    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &giftNum);
                    v56 = System_String__Format((System_String_o *)StringLiteral_278/*" ×{0}"*/, v55, 0LL);
                  }
                  v57 = System_String__Concat_43743732(name, v56, 0LL);
                  if ( v53 )
                  {
                    UILabel__set_text(v53, v57, 0LL);
                    v58 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( v58 )
                    {
                      v59 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)v58,
                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
                      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                      }
                      UserId = NetworkManager__get_UserId(0LL);
                      if ( *p_itemEnt )
                      {
                        if ( v59 )
                        {
                          EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                                               v59,
                                               UserId,
                                               (*p_itemEnt)->fields.id,
                                               0LL);
                          if ( EntityDefinitely )
                          {
                            num = EntityDefinitely->fields.num;
                            this->fields.itemHold = num;
                            requireNum = data->fields.requireNum;
                            v63 = this->fields.currentNumLb;
                            v77 = num;
                            v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
                            v65 = System_String__Format((System_String_o *)StringLiteral_23433/*"{0:N0}"*/, v64, 0LL);
                            if ( v63 )
                            {
                              UILabel__set_text(v63, v65, 0LL);
                              v66 = this->fields.spendNumLb;
                              v67 = System_Int32__ToString((int32_t)&requireNum, 0LL);
                              if ( v66 )
                              {
                                UILabel__set_text(v66, v67, 0LL);
                                v68 = this->fields.itemDetailLb;
                                if ( v68 )
                                {
                                  UILabel__set_text(v68, data->fields.detail, 0LL);
                                  v69 = (UIWidget_o *)this->fields.spendNumLb;
                                  v70 = requireNum <= ticketsHave;
                                  this->fields.isEnableSelect = requireNum <= ticketsHave;
                                  if ( v70 )
                                  {
                                    *(UnityEngine_Color_o *)&v71 = UnityEngine_Color__get_white(0LL);
                                    if ( !v69 )
                                      goto LABEL_53;
                                  }
                                  else
                                  {
                                    *(UnityEngine_Color_o *)&v71 = UnityEngine_Color__get_red(0LL);
                                    if ( !v69 )
                                      goto LABEL_53;
                                  }
                                  UIWidget__set_color(v69, *(UnityEngine_Color_o *)&v71, 0LL);
                                  v75 = this->fields.maskImg;
                                  if ( v75 )
                                  {
                                    UnityEngine_GameObject__SetActive(v75, !this->fields.isEnableSelect, 0LL);
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
          sub_B170D4();
        }
      }
    }
  }
LABEL_52:
  PresentSelectableItemComponent__setEnableSelectItem(this, v40);
  return this->fields.giftNum;
}