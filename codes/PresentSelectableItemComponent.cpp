void __fastcall PresentSelectableItemComponent___ctor(PresentSelectableItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PresentSelectableItemComponent__OnClickItem(
        PresentSelectableItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dialog; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  struct PresentSelectableDlgComponent_o *v7; // x0

  if ( (byte_4B14FB9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14FB9 = 1;
  }
  if ( this->fields.isEnableSelect )
  {
    dialog = (UnityEngine_Object_o *)this->fields.dialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(dialog, 0LL, 0LL) )
    {
      v7 = this->fields.dialog;
      if ( !v7 )
        sub_1BCAA3C(0LL, v5);
      if ( !v7->fields.isClosed )
        PresentSelectableDlgComponent__OpenItemConfirmDlg(
          v7,
          this->fields.itemSelectEnt,
          this->fields.itemEnt,
          this->fields.itemHold,
          v6);
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
      sub_1BCAA3C(0LL, method);
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  const MethodInfo *v41; // x1
  int64_t maskImg; // x0
  __int64 v43; // x1
  UILabel_o *currentInfoLb; // x23
  __int64 v45; // x8
  _DWORD *v46; // x23
  int32_t v47; // w2
  struct ItemEntity_o **p_itemEnt; // x23
  struct ItemEntity_o *itemEnt; // x8
  struct ItemEntity_o *v50; // x8
  UILabel_o *itemNameLb; // x22
  System_String_o *name; // x24
  Il2CppObject *v53; // x0
  System_String_o *v54; // x1
  __int64 v55; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v57; // w8
  UILabel_o *currentNumLb; // x22
  Il2CppObject *v59; // x0
  UILabel_o *spendNumLb; // x22
  float v61; // s1
  float v62; // s0
  float v63; // s3
  float v64; // s2
  int32_t v66; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t giftNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t requireNum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B14FB8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, data, *(_QWORD *)&ticketsHave);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&StringLiteral_25226/*"{0:N0}"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_10580/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_353/*" ×{0}"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v33, v34);
    byte_4B14FB8 = 1;
  }
  requireNum = 0;
  this->fields.itemSelectEnt = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.itemSelectEnt,
    (int64_t)data,
    *(int64_t *)&ticketsHave,
    ticketImgId,
    (System_String_o *)dlg,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields.dialog = dlg;
  this->fields.isEnableSelect = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dialog, (int64_t)dlg, v35, v36, v37, v38, v39, v40);
  maskImg = (int64_t)this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0LL);
  maskImg = (int64_t)this->fields.itemNameLb;
  if ( !maskImg )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.currentNumLb;
  if ( !maskImg )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.spendNumLb;
  if ( !maskImg )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.itemDetailLb;
  if ( !maskImg )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_915/*"-"*/, 0LL);
  currentInfoLb = this->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
  maskImg = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10580/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_49;
  UILabel__set_text(currentInfoLb, (System_String_o *)maskImg, 0LL);
  maskImg = (int64_t)this->fields.itemIconInfo;
  if ( !maskImg )
    goto LABEL_49;
  maskImg = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskImg, 0LL);
  if ( !maskImg )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 1, 0LL);
  if ( !data )
    goto LABEL_49;
  maskImg = (int64_t)ItemSelectEntity__GetGiftData(data, 0LL);
  if ( maskImg )
  {
    v45 = *(_QWORD *)(maskImg + 24);
    if ( v45 )
    {
      if ( !(_DWORD)v45 )
        sub_1BCAA44(maskImg, v41);
      v46 = *(_DWORD **)(maskImg + 32);
      if ( !v46 )
        goto LABEL_49;
      this->fields.giftNum = v46[7];
      if ( v46[5] == 2 )
      {
        maskImg = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !maskImg )
          goto LABEL_49;
        maskImg = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)maskImg,
                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !maskImg )
          goto LABEL_49;
        v47 = v46[6];
        p_itemEnt = &this->fields.itemEnt;
        maskImg = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)maskImg,
                    (Il2CppObject **)&this->fields.itemEnt,
                    v47,
                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
                    goto LABEL_49;
                  ItemIconComponent__SetItemImage((ItemIconComponent_o *)maskImg, ticketImgId, 0LL);
                }
                v50 = this->fields.itemEnt;
                if ( v50 )
                {
                  itemNameLb = this->fields.itemNameLb;
                  name = v50->fields.name;
                  if ( this->fields.giftNum <= 1 )
                  {
                    v54 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  else
                  {
                    giftNum = this->fields.giftNum;
                    v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &giftNum);
                    v54 = System_String__Format((System_String_o *)StringLiteral_353/*" ×{0}"*/, v53, 0LL);
                  }
                  maskImg = (int64_t)System_String__Concat_62401220(name, v54, 0LL);
                  if ( itemNameLb )
                  {
                    UILabel__set_text(itemNameLb, (System_String_o *)maskImg, 0LL);
                    maskImg = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( maskImg )
                    {
                      MasterData_object = DataManager__GetMasterData_object_(
                                            (DataManager_o *)maskImg,
                                            (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v55);
                      maskImg = NetworkManager__get_UserId(0LL);
                      if ( *p_itemEnt )
                      {
                        if ( MasterData_object )
                        {
                          maskImg = (int64_t)UserItemMaster__GetEntityDefinitely(
                                               (UserItemMaster_o *)MasterData_object,
                                               maskImg,
                                               (*p_itemEnt)->fields.id,
                                               0LL);
                          if ( maskImg )
                          {
                            v57 = *(_DWORD *)(maskImg + 28);
                            this->fields.itemHold = v57;
                            requireNum = data->fields.requireNum;
                            currentNumLb = this->fields.currentNumLb;
                            v66 = v57;
                            v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
                            maskImg = (int64_t)System_String__Format((System_String_o *)StringLiteral_25226/*"{0:N0}"*/, v59, 0LL);
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
                                  maskImg = (int64_t)this->fields.spendNumLb;
                                  v61 = 1.0;
                                  if ( requireNum > ticketsHave )
                                    v61 = 0.0;
                                  this->fields.isEnableSelect = requireNum <= ticketsHave;
                                  if ( maskImg )
                                  {
                                    v62 = 1.0;
                                    v63 = 1.0;
                                    v64 = v61;
                                    UIWidget__set_color((UIWidget_o *)maskImg, *(UnityEngine_Color_o *)(&v61 - 1), 0LL);
                                    maskImg = (int64_t)this->fields.maskImg;
                                    if ( maskImg )
                                    {
                                      UnityEngine_GameObject__SetActive(
                                        (UnityEngine_GameObject_o *)maskImg,
                                        !this->fields.isEnableSelect,
                                        0LL);
                                      goto LABEL_48;
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
          }
LABEL_49:
          sub_1BCAA3C(maskImg, v41);
        }
      }
    }
  }
LABEL_48:
  PresentSelectableItemComponent__setEnableSelectItem(this, v41);
  return this->fields.giftNum;
}