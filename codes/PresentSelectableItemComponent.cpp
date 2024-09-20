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

  if ( (byte_4A59E84 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59E84 = 1;
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
        sub_1B8880C(0LL, v4);
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
      sub_1B8880C(0LL, method);
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
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  int64_t maskImg; // x0
  UILabel_o *currentInfoLb; // x23
  __int64 v16; // x8
  _DWORD *v17; // x23
  int32_t v18; // w2
  struct ItemEntity_o **p_itemEnt; // x23
  struct ItemEntity_o *itemEnt; // x8
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  struct ItemEntity_o *v24; // x8
  UILabel_o *itemNameLb; // x22
  System_String_o *name; // x24
  Il2CppObject *v27; // x0
  System_String_o *v28; // x1
  Il2CppObject *MasterData_object; // x22
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  int32_t v33; // w8
  UILabel_o *currentNumLb; // x22
  Il2CppObject *v35; // x0
  UILabel_o *spendNumLb; // x22
  float v37; // s1
  float v38; // s0
  float v39; // s3
  float v40; // s2
  int32_t v42; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t giftNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t requireNum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A59E83 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_24971/*"{0:N0}"*/);
    sub_1B885B0(&StringLiteral_919/*"-"*/);
    sub_1B885B0(&StringLiteral_10447/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/);
    sub_1B885B0(&StringLiteral_358/*" ×{0}"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A59E83 = 1;
  }
  requireNum = 0;
  this->fields.itemSelectEnt = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemSelectEnt, (int32_t)data, ticketsHave, ticketImgId);
  this->fields.dialog = dlg;
  this->fields.isEnableSelect = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dialog, (int32_t)dlg, v11, v12);
  maskImg = (int64_t)this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0LL);
  maskImg = (int64_t)this->fields.itemNameLb;
  if ( !maskImg )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_919/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.currentNumLb;
  if ( !maskImg )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_919/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.spendNumLb;
  if ( !maskImg )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_919/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.itemDetailLb;
  if ( !maskImg )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_919/*"-"*/, 0LL);
  currentInfoLb = this->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  maskImg = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10447/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, 0LL);
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
    v16 = *(_QWORD *)(maskImg + 24);
    if ( v16 )
    {
      if ( !(_DWORD)v16 )
        sub_1B88814(maskImg, v13);
      v17 = *(_DWORD **)(maskImg + 32);
      if ( !v17 )
        goto LABEL_49;
      this->fields.giftNum = v17[7];
      if ( v17[5] == 2 )
      {
        maskImg = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !maskImg )
          goto LABEL_49;
        maskImg = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)maskImg,
                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !maskImg )
          goto LABEL_49;
        v18 = v17[6];
        p_itemEnt = &this->fields.itemEnt;
        maskImg = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)maskImg,
                    (Il2CppObject **)&this->fields.itemEnt,
                    v18,
                    (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
                v24 = this->fields.itemEnt;
                if ( v24 )
                {
                  itemNameLb = this->fields.itemNameLb;
                  name = v24->fields.name;
                  if ( this->fields.giftNum <= 1 )
                  {
                    v28 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  else
                  {
                    giftNum = this->fields.giftNum;
                    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &giftNum, v21, v22, v23);
                    v28 = System_String__Format((System_String_o *)StringLiteral_358/*" ×{0}"*/, v27, 0LL);
                  }
                  maskImg = (int64_t)System_String__Concat_61707032(name, v28, 0LL);
                  if ( itemNameLb )
                  {
                    UILabel__set_text(itemNameLb, (System_String_o *)maskImg, 0LL);
                    maskImg = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( maskImg )
                    {
                      MasterData_object = DataManager__GetMasterData_object_(
                                            (DataManager_o *)maskImg,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
                            v33 = *(_DWORD *)(maskImg + 28);
                            this->fields.itemHold = v33;
                            requireNum = data->fields.requireNum;
                            currentNumLb = this->fields.currentNumLb;
                            v42 = v33;
                            v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v30, v31, v32);
                            maskImg = (int64_t)System_String__Format((System_String_o *)StringLiteral_24971/*"{0:N0}"*/, v35, 0LL);
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
                                  v37 = 1.0;
                                  if ( requireNum > ticketsHave )
                                    v37 = 0.0;
                                  this->fields.isEnableSelect = requireNum <= ticketsHave;
                                  if ( maskImg )
                                  {
                                    v38 = 1.0;
                                    v39 = 1.0;
                                    v40 = v37;
                                    UIWidget__set_color((UIWidget_o *)maskImg, *(UnityEngine_Color_o *)(&v37 - 1), 0LL);
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
          sub_1B8880C(maskImg, v13);
        }
      }
    }
  }
LABEL_48:
  PresentSelectableItemComponent__setEnableSelectItem(this, v13);
  return this->fields.giftNum;
}