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

  if ( (byte_4B00D2E & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B00D2E = 1;
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
        sub_1BC3264(0LL, v4);
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
      sub_1BC3264(0LL, method);
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  void *maskImg; // x0
  UILabel_o *currentInfoLb; // x23
  __int64 v27; // x2
  __int64 v28; // x8
  _DWORD *v29; // x23
  int32_t v30; // w2
  struct ItemEntity_o **p_itemEnt; // x23
  struct ItemEntity_o *itemEnt; // x8
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  struct ItemEntity_o *v36; // x8
  UILabel_o *itemNameLb; // x22
  System_String_o *name; // x24
  Il2CppObject *v39; // x0
  System_String_o *v40; // x1
  Il2CppObject *MasterData_object; // x22
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int32_t v45; // w8
  UILabel_o *currentNumLb; // x22
  Il2CppObject *v47; // x0
  UILabel_o *spendNumLb; // x22
  float v49; // s1
  float v50; // s0
  float v51; // s3
  float v52; // s2
  int32_t v54; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t giftNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t requireNum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B00D2D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ItemMaster___, data);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v12);
    sub_1BC3008(&int_TypeInfo, v13);
    sub_1BC3008(&LocalizationManager_TypeInfo, v14);
    sub_1BC3008(&NetworkManager_TypeInfo, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BC3008(&StringLiteral_24851/*"{0:N0}"*/, v17);
    sub_1BC3008(&StringLiteral_856/*"-"*/, v18);
    sub_1BC3008(&StringLiteral_10355/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, v19);
    sub_1BC3008(&StringLiteral_327/*" ×{0}"*/, v20);
    sub_1BC3008(&StringLiteral_1/*""*/, v21);
    byte_4B00D2D = 1;
  }
  requireNum = 0;
  this->fields.itemSelectEnt = data;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.itemSelectEnt,
    (int32_t)data,
    ticketsHave,
    *(const MethodInfo **)&ticketImgId);
  this->fields.dialog = dlg;
  this->fields.isEnableSelect = 0;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dialog, (int32_t)dlg, v22, v23);
  maskImg = this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0LL);
  maskImg = this->fields.itemNameLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_856/*"-"*/, 0LL);
  maskImg = this->fields.currentNumLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_856/*"-"*/, 0LL);
  maskImg = this->fields.spendNumLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_856/*"-"*/, 0LL);
  maskImg = this->fields.itemDetailLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_856/*"-"*/, 0LL);
  currentInfoLb = this->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  maskImg = LocalizationManager__Get((System_String_o *)StringLiteral_10355/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, 0LL);
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
    v28 = *((_QWORD *)maskImg + 3);
    if ( v28 )
    {
      if ( !(_DWORD)v28 )
        sub_1BC326C(maskImg, v24, v27);
      v29 = (_DWORD *)*((_QWORD *)maskImg + 4);
      if ( !v29 )
        goto LABEL_53;
      this->fields.giftNum = v29[7];
      if ( v29[5] == 2 )
      {
        maskImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !maskImg )
          goto LABEL_53;
        maskImg = DataManager__GetMasterData_object_(
                    (DataManager_o *)maskImg,
                    (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !maskImg )
          goto LABEL_53;
        v30 = v29[6];
        p_itemEnt = &this->fields.itemEnt;
        maskImg = (void *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)maskImg,
                            (Il2CppObject **)&this->fields.itemEnt,
                            v30,
                            (const MethodInfo_32AF0BC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
                v36 = this->fields.itemEnt;
                if ( v36 )
                {
                  itemNameLb = this->fields.itemNameLb;
                  name = v36->fields.name;
                  if ( this->fields.giftNum <= 1 )
                  {
                    v40 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  else
                  {
                    giftNum = this->fields.giftNum;
                    v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &giftNum, v33, v34, v35);
                    v40 = System_String__Format((System_String_o *)StringLiteral_327/*" ×{0}"*/, v39, 0LL);
                  }
                  maskImg = System_String__Concat_62348648(name, v40, 0LL);
                  if ( itemNameLb )
                  {
                    UILabel__set_text(itemNameLb, (System_String_o *)maskImg, 0LL);
                    maskImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( maskImg )
                    {
                      MasterData_object = DataManager__GetMasterData_object_(
                                            (DataManager_o *)maskImg,
                                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserItemMaster___);
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                      if ( !byte_4AFC1F1 )
                      {
                        sub_1BC3008(&NetworkManager_TypeInfo, v24);
                        byte_4AFC1F1 = 1;
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
                            v45 = *((_DWORD *)maskImg + 7);
                            this->fields.itemHold = v45;
                            requireNum = data->fields.requireNum;
                            currentNumLb = this->fields.currentNumLb;
                            v54 = v45;
                            v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v42, v43, v44);
                            maskImg = System_String__Format((System_String_o *)StringLiteral_24851/*"{0:N0}"*/, v47, 0LL);
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
                                  v49 = 1.0;
                                  if ( requireNum > ticketsHave )
                                    v49 = 0.0;
                                  this->fields.isEnableSelect = requireNum <= ticketsHave;
                                  if ( maskImg )
                                  {
                                    v50 = 1.0;
                                    v51 = 1.0;
                                    v52 = v49;
                                    UIWidget__set_color((UIWidget_o *)maskImg, *(UnityEngine_Color_o *)(&v49 - 1), 0LL);
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
          sub_1BC3264(maskImg, v24);
        }
      }
    }
  }
LABEL_52:
  PresentSelectableItemComponent__setEnableSelectItem(this, v24);
  return this->fields.giftNum;
}