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

  if ( (byte_49FB155 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FB155 = 1;
  }
  if ( this->fields.isEnableSelect )
  {
    dialog = (UnityEngine_Object_o *)this->fields.dialog;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(dialog, 0LL, 0LL) )
    {
      v5 = this->fields.dialog;
      if ( !v5 )
        sub_1B64324(0LL);
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
      sub_1B64324(0LL);
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
  int32_t v23; // w3
  int64_t maskImg; // x0
  UILabel_o *currentInfoLb; // x23
  const MethodInfo *v26; // x1
  __int64 v27; // x8
  _DWORD *v28; // x23
  int32_t v29; // w2
  struct ItemEntity_o **p_itemEnt; // x23
  struct ItemEntity_o *itemEnt; // x8
  struct ItemEntity_o *v32; // x8
  UILabel_o *itemNameLb; // x22
  System_String_o *name; // x24
  Il2CppObject *v35; // x0
  System_String_o *v36; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v38; // w8
  UILabel_o *currentNumLb; // x22
  Il2CppObject *v40; // x0
  UILabel_o *spendNumLb; // x22
  float v42; // s1
  float v43; // s0
  float v44; // s3
  float v45; // s2
  int32_t v47; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t giftNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t requireNum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FB154 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, data);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v12);
    sub_1B640C8(&int_TypeInfo, v13);
    sub_1B640C8(&LocalizationManager_TypeInfo, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B640C8(&StringLiteral_24871/*"{0:N0}"*/, v17);
    sub_1B640C8(&StringLiteral_920/*"-"*/, v18);
    sub_1B640C8(&StringLiteral_10397/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, v19);
    sub_1B640C8(&StringLiteral_359/*" ×{0}"*/, v20);
    sub_1B640C8(&StringLiteral_1/*""*/, v21);
    byte_49FB154 = 1;
  }
  requireNum = 0;
  this->fields.itemSelectEnt = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemSelectEnt, (int32_t)data, ticketsHave, ticketImgId);
  this->fields.dialog = dlg;
  this->fields.isEnableSelect = 0;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dialog, (int32_t)dlg, v22, v23);
  maskImg = (int64_t)this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0LL);
  maskImg = (int64_t)this->fields.itemNameLb;
  if ( !maskImg )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_920/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.currentNumLb;
  if ( !maskImg )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_920/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.spendNumLb;
  if ( !maskImg )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_920/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.itemDetailLb;
  if ( !maskImg )
    goto LABEL_49;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_920/*"-"*/, 0LL);
  currentInfoLb = this->fields.currentInfoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  maskImg = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10397/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, 0LL);
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
    v27 = *(_QWORD *)(maskImg + 24);
    if ( v27 )
    {
      if ( !(_DWORD)v27 )
        sub_1B6432C(maskImg, v26);
      v28 = *(_DWORD **)(maskImg + 32);
      if ( !v28 )
        goto LABEL_49;
      this->fields.giftNum = v28[7];
      if ( v28[5] == 2 )
      {
        maskImg = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !maskImg )
          goto LABEL_49;
        maskImg = (int64_t)DataManager__GetMasterData_object_(
                             (DataManager_o *)maskImg,
                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !maskImg )
          goto LABEL_49;
        v29 = v28[6];
        p_itemEnt = &this->fields.itemEnt;
        maskImg = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)maskImg,
                    (Il2CppObject **)&this->fields.itemEnt,
                    v29,
                    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
                v32 = this->fields.itemEnt;
                if ( v32 )
                {
                  itemNameLb = this->fields.itemNameLb;
                  name = v32->fields.name;
                  if ( this->fields.giftNum <= 1 )
                  {
                    v36 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  else
                  {
                    giftNum = this->fields.giftNum;
                    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &giftNum);
                    v36 = System_String__Format((System_String_o *)StringLiteral_359/*" ×{0}"*/, v35, 0LL);
                  }
                  maskImg = (int64_t)System_String__Concat_61375396(name, v36, 0LL);
                  if ( itemNameLb )
                  {
                    UILabel__set_text(itemNameLb, (System_String_o *)maskImg, 0LL);
                    maskImg = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( maskImg )
                    {
                      MasterData_object = DataManager__GetMasterData_object_(
                                            (DataManager_o *)maskImg,
                                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                            v38 = *(_DWORD *)(maskImg + 28);
                            this->fields.itemHold = v38;
                            requireNum = data->fields.requireNum;
                            currentNumLb = this->fields.currentNumLb;
                            v47 = v38;
                            v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
                            maskImg = (int64_t)System_String__Format((System_String_o *)StringLiteral_24871/*"{0:N0}"*/, v40, 0LL);
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
                                  v42 = 1.0;
                                  if ( requireNum > ticketsHave )
                                    v42 = 0.0;
                                  this->fields.isEnableSelect = requireNum <= ticketsHave;
                                  if ( maskImg )
                                  {
                                    v43 = 1.0;
                                    v44 = 1.0;
                                    v45 = v42;
                                    UIWidget__set_color((UIWidget_o *)maskImg, *(UnityEngine_Color_o *)(&v42 - 1), 0LL);
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
          sub_1B64324(maskImg);
        }
      }
    }
  }
LABEL_48:
  PresentSelectableItemComponent__setEnableSelectItem(this, v26);
  return this->fields.giftNum;
}