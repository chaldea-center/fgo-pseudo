void PresentSelectableItemComponent___ctor(PresentSelectableItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PresentSelectableItemComponent__OnClickItem(PresentSelectableItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dialog; // x20
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  struct PresentSelectableDlgComponent_o *v6; // x0

  if ( (byte_4CB4F70 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB4F70 = 1;
  }
  if ( this->fields.isEnableSelect )
  {
    dialog = (UnityEngine_Object_o *)this->fields.dialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dialog, 0, 0) )
    {
      v6 = this->fields.dialog;
      if ( !v6 )
        sub_1C6BC60(0, v4);
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


void PresentSelectableItemComponent__setEnableSelectItem(
        PresentSelectableItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskImg; // x0

  if ( !this->fields.isEnableSelect )
  {
    maskImg = this->fields.maskImg;
    if ( !maskImg )
      sub_1C6BC60(0, method);
    UnityEngine_GameObject__SetActive(maskImg, 1, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t PresentSelectableItemComponent__setItemInfo(
        PresentSelectableItemComponent_o *this,
        ItemSelectEntity_o *data,
        int32_t ticketsHave,
        int32_t ticketImgId,
        PresentSelectableDlgComponent_o *dlg,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  void *maskImg; // x0
  UILabel_o *currentInfoLb; // x23
  __int64 v16; // x8
  _DWORD *v17; // x23
  int32_t v18; // w2
  struct ItemEntity_o **p_itemEnt; // x23
  struct ItemEntity_o *itemEnt; // x8
  struct ItemEntity_o *v21; // x8
  UILabel_o *itemNameLb; // x22
  System_String_o *name; // x24
  Il2CppObject *v24; // x0
  System_String_o *v25; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v27; // w8
  UILabel_o *currentNumLb; // x22
  Il2CppObject *v29; // x0
  UILabel_o *spendNumLb; // x22
  float v31; // s1 OVERLAPPED
  float v32; // s0
  float v33; // s3
  float v34; // s2
  int32_t v36; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t giftNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t requireNum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CB4F6F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_25202/*"{0:N0}"*/);
    sub_1C6BA08(&StringLiteral_858/*"-"*/);
    sub_1C6BA08(&StringLiteral_10445/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/);
    sub_1C6BA08(&StringLiteral_328/*" ×{0}"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB4F6F = 1;
  }
  requireNum = 0;
  this->fields.itemSelectEnt = data;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.itemSelectEnt,
    (int32_t)data,
    ticketsHave,
    *(const MethodInfo **)&ticketImgId);
  this->fields.dialog = dlg;
  this->fields.isEnableSelect = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.dialog, (int32_t)dlg, v11, v12);
  maskImg = this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0);
  maskImg = this->fields.itemNameLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  maskImg = this->fields.currentNumLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  maskImg = this->fields.spendNumLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  maskImg = this->fields.itemDetailLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_858/*"-"*/, 0);
  currentInfoLb = this->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  maskImg = LocalizationManager__Get((System_String_o *)StringLiteral_10445/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, 0);
  if ( !currentInfoLb )
    goto LABEL_53;
  UILabel__set_text(currentInfoLb, (System_String_o *)maskImg, 0);
  maskImg = this->fields.itemIconInfo;
  if ( !maskImg )
    goto LABEL_53;
  maskImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskImg, 0);
  if ( !maskImg )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 1, 0);
  if ( !data )
    goto LABEL_53;
  maskImg = ItemSelectEntity__GetGiftData(data, 0);
  if ( maskImg )
  {
    v16 = *((_QWORD *)maskImg + 3);
    if ( v16 )
    {
      if ( !(_DWORD)v16 )
        sub_1C6BC68(maskImg);
      v17 = (_DWORD *)*((_QWORD *)maskImg + 4);
      if ( !v17 )
        goto LABEL_53;
      this->fields.giftNum = v17[7];
      if ( v17[5] == 2 )
      {
        maskImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !maskImg )
          goto LABEL_53;
        maskImg = DataManager__GetMasterData_object_(
                    (DataManager_o *)maskImg,
                    (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !maskImg )
          goto LABEL_53;
        v18 = v17[6];
        p_itemEnt = &this->fields.itemEnt;
        maskImg = (void *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)maskImg,
                            (Il2CppObject **)&this->fields.itemEnt,
                            v18,
                            (const MethodInfo_33F9128 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)maskImg & 1) != 0 )
        {
          itemEnt = this->fields.itemEnt;
          if ( itemEnt )
          {
            maskImg = this->fields.itemIconInfo;
            if ( maskImg )
            {
              ItemIconComponent__SetItemImage((ItemIconComponent_o *)maskImg, itemEnt->fields.imageId, 0);
              maskImg = this->fields.ticketObj;
              if ( maskImg )
              {
                if ( ticketImgId <= 0 )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0);
                }
                else
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 1, 0);
                  maskImg = this->fields.ticketSp;
                  if ( !maskImg )
                    goto LABEL_53;
                  ItemIconComponent__SetItemImage((ItemIconComponent_o *)maskImg, ticketImgId, 0);
                }
                v21 = this->fields.itemEnt;
                if ( v21 )
                {
                  itemNameLb = this->fields.itemNameLb;
                  name = v21->fields.name;
                  if ( this->fields.giftNum <= 1 )
                  {
                    v25 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  else
                  {
                    giftNum = this->fields.giftNum;
                    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &giftNum);
                    v25 = System_String__Format((System_String_o *)StringLiteral_328/*" ×{0}"*/, v24, 0);
                  }
                  maskImg = System_String__Concat_63966792(name, v25, 0);
                  if ( itemNameLb )
                  {
                    UILabel__set_text(itemNameLb, (System_String_o *)maskImg, 0);
                    maskImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( maskImg )
                    {
                      MasterData_object = DataManager__GetMasterData_object_(
                                            (DataManager_o *)maskImg,
                                            (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserItemMaster___);
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                      if ( !byte_4CB002A )
                      {
                        sub_1C6BA08(&NetworkManager_TypeInfo);
                        byte_4CB002A = 1;
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
                                      0);
                          if ( maskImg )
                          {
                            v27 = *((_DWORD *)maskImg + 7);
                            this->fields.itemHold = v27;
                            requireNum = data->fields.requireNum;
                            currentNumLb = this->fields.currentNumLb;
                            v36 = v27;
                            v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
                            maskImg = System_String__Format((System_String_o *)StringLiteral_25202/*"{0:N0}"*/, v29, 0);
                            if ( currentNumLb )
                            {
                              UILabel__set_text(currentNumLb, (System_String_o *)maskImg, 0);
                              spendNumLb = this->fields.spendNumLb;
                              maskImg = System_Int32__ToString((int32_t)&requireNum, 0);
                              if ( spendNumLb )
                              {
                                UILabel__set_text(spendNumLb, (System_String_o *)maskImg, 0);
                                maskImg = this->fields.itemDetailLb;
                                if ( maskImg )
                                {
                                  UILabel__set_text((UILabel_o *)maskImg, data->fields.detail, 0);
                                  maskImg = this->fields.spendNumLb;
                                  v31 = 1.0;
                                  if ( requireNum > ticketsHave )
                                    v31 = 0.0;
                                  this->fields.isEnableSelect = requireNum <= ticketsHave;
                                  if ( maskImg )
                                  {
                                    v32 = 1.0;
                                    v33 = 1.0;
                                    v34 = v31;
                                    UIWidget__set_color((UIWidget_o *)maskImg, *(UnityEngine_Color_o *)(&v31 - 1), 0);
                                    maskImg = this->fields.maskImg;
                                    if ( maskImg )
                                    {
                                      UnityEngine_GameObject__SetActive(
                                        (UnityEngine_GameObject_o *)maskImg,
                                        !this->fields.isEnableSelect,
                                        0);
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
          sub_1C6BC60(maskImg, v13);
        }
      }
    }
  }
LABEL_52:
  PresentSelectableItemComponent__setEnableSelectItem(this, v13);
  return this->fields.giftNum;
}