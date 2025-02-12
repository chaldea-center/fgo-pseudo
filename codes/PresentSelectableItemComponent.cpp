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

  if ( (byte_4BC684F & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BC684F = 1;
  }
  if ( this->fields.isEnableSelect )
  {
    dialog = (UnityEngine_Object_o *)this->fields.dialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dialog, 0LL, 0LL) )
    {
      v6 = this->fields.dialog;
      if ( !v6 )
        sub_1C1AE30(0LL, v4);
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
      sub_1C1AE30(0LL, method);
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  const MethodInfo *v30; // x1
  void *maskImg; // x0
  UILabel_o *currentInfoLb; // x23
  __int64 v33; // x8
  _DWORD *v34; // x23
  int32_t v35; // w2
  struct ItemEntity_o **p_itemEnt; // x23
  struct ItemEntity_o *itemEnt; // x8
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  struct ItemEntity_o *v41; // x8
  UILabel_o *itemNameLb; // x22
  System_String_o *name; // x24
  Il2CppObject *v44; // x0
  System_String_o *v45; // x1
  Il2CppObject *MasterData_object; // x22
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  int32_t v50; // w8
  UILabel_o *currentNumLb; // x22
  Il2CppObject *v52; // x0
  UILabel_o *spendNumLb; // x22
  float v54; // s1
  float v55; // s0
  float v56; // s3
  float v57; // s2
  int32_t v59; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t giftNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t requireNum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BC684E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, data);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserItemMaster___, v13);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v14);
    sub_1C1ABD4(&int_TypeInfo, v15);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v16);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v17);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1C1ABD4(&StringLiteral_25393/*"{0:N0}"*/, v19);
    sub_1C1ABD4(&StringLiteral_918/*"-"*/, v20);
    sub_1C1ABD4(&StringLiteral_10641/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, v21);
    sub_1C1ABD4(&StringLiteral_355/*" ×{0}"*/, v22);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v23);
    byte_4BC684E = 1;
  }
  requireNum = 0;
  this->fields.itemSelectEnt = data;
  sub_1C1AB78(
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
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.dialog, (int64_t)dlg, v24, v25, v26, v27, v28, v29);
  maskImg = this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0LL);
  maskImg = this->fields.itemNameLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_918/*"-"*/, 0LL);
  maskImg = this->fields.currentNumLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_918/*"-"*/, 0LL);
  maskImg = this->fields.spendNumLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_918/*"-"*/, 0LL);
  maskImg = this->fields.itemDetailLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_918/*"-"*/, 0LL);
  currentInfoLb = this->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  maskImg = LocalizationManager__Get((System_String_o *)StringLiteral_10641/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, 0LL);
  if ( !currentInfoLb )
    goto LABEL_53;
  UILabel__set_text(currentInfoLb, (System_String_o *)maskImg, 0LL);
  maskImg = this->fields.itemIconInfo;
  if ( !maskImg )
    goto LABEL_53;
  maskImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskImg, 0LL);
  if ( !maskImg )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 1, 0LL);
  if ( !data )
    goto LABEL_53;
  maskImg = ItemSelectEntity__GetGiftData(data, 0LL);
  if ( maskImg )
  {
    v33 = *((_QWORD *)maskImg + 3);
    if ( v33 )
    {
      if ( !(_DWORD)v33 )
        sub_1C1AE38(maskImg, v30);
      v34 = (_DWORD *)*((_QWORD *)maskImg + 4);
      if ( !v34 )
        goto LABEL_53;
      this->fields.giftNum = v34[7];
      if ( v34[5] == 2 )
      {
        maskImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !maskImg )
          goto LABEL_53;
        maskImg = DataManager__GetMasterData_object_(
                    (DataManager_o *)maskImg,
                    (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !maskImg )
          goto LABEL_53;
        v35 = v34[6];
        p_itemEnt = &this->fields.itemEnt;
        maskImg = (void *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)maskImg,
                            (Il2CppObject **)&this->fields.itemEnt,
                            v35,
                            (const MethodInfo_32486C4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)maskImg & 1) != 0 )
        {
          itemEnt = this->fields.itemEnt;
          if ( itemEnt )
          {
            maskImg = this->fields.itemIconInfo;
            if ( maskImg )
            {
              ItemIconComponent__SetItemImage((ItemIconComponent_o *)maskImg, itemEnt->fields.imageId, 0LL);
              maskImg = this->fields.ticketObj;
              if ( maskImg )
              {
                if ( ticketImgId <= 0 )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0LL);
                }
                else
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 1, 0LL);
                  maskImg = this->fields.ticketSp;
                  if ( !maskImg )
                    goto LABEL_53;
                  ItemIconComponent__SetItemImage((ItemIconComponent_o *)maskImg, ticketImgId, 0LL);
                }
                v41 = this->fields.itemEnt;
                if ( v41 )
                {
                  itemNameLb = this->fields.itemNameLb;
                  name = v41->fields.name;
                  if ( this->fields.giftNum <= 1 )
                  {
                    v45 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  else
                  {
                    giftNum = this->fields.giftNum;
                    v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &giftNum, v38, v39, v40);
                    v45 = System_String__Format((System_String_o *)StringLiteral_355/*" ×{0}"*/, v44, 0LL);
                  }
                  maskImg = System_String__Concat_63040368(name, v45, 0LL);
                  if ( itemNameLb )
                  {
                    UILabel__set_text(itemNameLb, (System_String_o *)maskImg, 0LL);
                    maskImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( maskImg )
                    {
                      MasterData_object = DataManager__GetMasterData_object_(
                                            (DataManager_o *)maskImg,
                                            (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserItemMaster___);
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                      if ( !byte_4BC2585 )
                      {
                        sub_1C1ABD4(&NetworkManager_TypeInfo, v30);
                        byte_4BC2585 = 1;
                      }
                      maskImg = NetworkManager_TypeInfo;
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                        maskImg = NetworkManager_TypeInfo;
                      }
                      if ( *p_itemEnt )
                      {
                        if ( MasterData_object )
                        {
                          maskImg = UserItemMaster__GetEntityDefinitely(
                                      (UserItemMaster_o *)MasterData_object,
                                      *(_QWORD *)(*((_QWORD *)maskImg + 23) + 64LL),
                                      (*p_itemEnt)->fields.id,
                                      0LL);
                          if ( maskImg )
                          {
                            v50 = *((_DWORD *)maskImg + 7);
                            this->fields.itemHold = v50;
                            requireNum = data->fields.requireNum;
                            currentNumLb = this->fields.currentNumLb;
                            v59 = v50;
                            v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, v47, v48, v49);
                            maskImg = System_String__Format((System_String_o *)StringLiteral_25393/*"{0:N0}"*/, v52, 0LL);
                            if ( currentNumLb )
                            {
                              UILabel__set_text(currentNumLb, (System_String_o *)maskImg, 0LL);
                              spendNumLb = this->fields.spendNumLb;
                              maskImg = System_Int32__ToString((int32_t)&requireNum, 0LL);
                              if ( spendNumLb )
                              {
                                UILabel__set_text(spendNumLb, (System_String_o *)maskImg, 0LL);
                                maskImg = this->fields.itemDetailLb;
                                if ( maskImg )
                                {
                                  UILabel__set_text((UILabel_o *)maskImg, data->fields.detail, 0LL);
                                  maskImg = this->fields.spendNumLb;
                                  v54 = 1.0;
                                  if ( requireNum > ticketsHave )
                                    v54 = 0.0;
                                  this->fields.isEnableSelect = requireNum <= ticketsHave;
                                  if ( maskImg )
                                  {
                                    v55 = 1.0;
                                    v56 = 1.0;
                                    v57 = v54;
                                    UIWidget__set_color((UIWidget_o *)maskImg, *(UnityEngine_Color_o *)(&v54 - 1), 0LL);
                                    maskImg = this->fields.maskImg;
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
          }
LABEL_53:
          sub_1C1AE30(maskImg, v30);
        }
      }
    }
  }
LABEL_52:
  PresentSelectableItemComponent__setEnableSelectItem(this, v30);
  return this->fields.giftNum;
}