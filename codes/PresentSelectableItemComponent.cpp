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

  if ( (byte_4D2B4EF & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2B4EF = 1;
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
        sub_1C942F0(0, v4);
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
      sub_1C942F0(0, method);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1
  void *maskImg; // x0
  UILabel_o *currentInfoLb; // x23
  __int64 v22; // x8
  _DWORD *v23; // x23
  int32_t v24; // w2
  struct ItemEntity_o **p_itemEnt; // x23
  struct ItemEntity_o *itemEnt; // x8
  struct ItemEntity_o *v27; // x8
  UILabel_o *itemNameLb; // x22
  System_String_o *name; // x24
  Il2CppObject *v30; // x0
  System_String_o *v31; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v33; // w8
  UILabel_o *currentNumLb; // x22
  Il2CppObject *v35; // x0
  UILabel_o *spendNumLb; // x22
  float v37; // s1 OVERLAPPED
  float v38; // s0
  float v39; // s3
  float v40; // s2
  int32_t v42; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t giftNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t requireNum; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2B4EE & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C94098(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&StringLiteral_25345/*"{0:N0}"*/);
    sub_1C94098(&StringLiteral_858/*"-"*/);
    sub_1C94098(&StringLiteral_10481/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/);
    sub_1C94098(&StringLiteral_328/*" ×{0}"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2B4EE = 1;
  }
  requireNum = 0;
  this->fields.itemSelectEnt = data;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemSelectEnt,
    (int32_t)data,
    ticketsHave,
    ticketImgId,
    (System_String_o *)dlg,
    (int32_t)method,
    v6,
    v7);
  this->fields.dialog = dlg;
  this->fields.isEnableSelect = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.dialog, (int32_t)dlg, v13, v14, v15, v16, v17, v18);
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
  maskImg = LocalizationManager__Get((System_String_o *)StringLiteral_10481/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, 0);
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
    v22 = *((_QWORD *)maskImg + 3);
    if ( v22 )
    {
      if ( !(_DWORD)v22 )
        sub_1C942F8(maskImg);
      v23 = (_DWORD *)*((_QWORD *)maskImg + 4);
      if ( !v23 )
        goto LABEL_53;
      this->fields.giftNum = v23[7];
      if ( v23[5] == 2 )
      {
        maskImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !maskImg )
          goto LABEL_53;
        maskImg = DataManager__GetMasterData_object_(
                    (DataManager_o *)maskImg,
                    (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !maskImg )
          goto LABEL_53;
        v24 = v23[6];
        p_itemEnt = &this->fields.itemEnt;
        maskImg = (void *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)maskImg,
                            (Il2CppObject **)&this->fields.itemEnt,
                            v24,
                            (const MethodInfo_345B50C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
                v27 = this->fields.itemEnt;
                if ( v27 )
                {
                  itemNameLb = this->fields.itemNameLb;
                  name = v27->fields.name;
                  if ( this->fields.giftNum <= 1 )
                  {
                    v31 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  else
                  {
                    giftNum = this->fields.giftNum;
                    v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &giftNum);
                    v31 = System_String__Format((System_String_o *)StringLiteral_328/*" ×{0}"*/, v30, 0);
                  }
                  maskImg = System_String__Concat_64417744(name, v31, 0);
                  if ( itemNameLb )
                  {
                    UILabel__set_text(itemNameLb, (System_String_o *)maskImg, 0);
                    maskImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( maskImg )
                    {
                      MasterData_object = DataManager__GetMasterData_object_(
                                            (DataManager_o *)maskImg,
                                            (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserItemMaster___);
                      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                      if ( !byte_4D2633A )
                      {
                        sub_1C94098(&NetworkManager_TypeInfo);
                        byte_4D2633A = 1;
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
                            v33 = *((_DWORD *)maskImg + 7);
                            this->fields.itemHold = v33;
                            requireNum = data->fields.requireNum;
                            currentNumLb = this->fields.currentNumLb;
                            v42 = v33;
                            v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
                            maskImg = System_String__Format((System_String_o *)StringLiteral_25345/*"{0:N0}"*/, v35, 0);
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
                                  v37 = 1.0;
                                  if ( requireNum > ticketsHave )
                                    v37 = 0.0;
                                  this->fields.isEnableSelect = requireNum <= ticketsHave;
                                  if ( maskImg )
                                  {
                                    v38 = 1.0;
                                    v39 = 1.0;
                                    v40 = v37;
                                    UIWidget__set_color((UIWidget_o *)maskImg, *(UnityEngine_Color_o *)(&v37 - 1), 0);
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
          sub_1C942F0(maskImg, v19);
        }
      }
    }
  }
LABEL_52:
  PresentSelectableItemComponent__setEnableSelectItem(this, v19);
  return this->fields.giftNum;
}