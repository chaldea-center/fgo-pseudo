void PresentSelectableItemComponent___ctor(PresentSelectableItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void PresentSelectableItemComponent__OnClickItem(PresentSelectableItemComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *dialog; // x20
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  struct PresentSelectableDlgComponent_o *v7; // x0

  if ( (byte_5937308 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937308 = 1;
  }
  if ( this->fields.isEnableSelect )
  {
    dialog = (UnityEngine_Object_o *)this->fields.dialog;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( UnityEngine_Object__op_Inequality(dialog, 0, 0) )
    {
      v7 = this->fields.dialog;
      if ( !v7 )
        sub_21FFECC(0, v5);
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


void PresentSelectableItemComponent__setEnableSelectItem(
        PresentSelectableItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *maskImg; // x0

  if ( !this->fields.isEnableSelect )
  {
    maskImg = this->fields.maskImg;
    if ( !maskImg )
      sub_21FFECC(0, method);
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
  bool v6; // w6
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x1
  void *maskImg; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  UILabel_o *currentInfoLb; // x23
  __int64 v24; // x8
  _DWORD *v25; // x23
  int v26; // w8
  struct ItemEntity_o *itemEnt; // x8
  struct ItemEntity_o *v28; // x9
  UILabel_o *itemNameLb; // x22
  System_String_o *name; // x23
  Il2CppObject *v31; // x0
  System_String_o *v32; // x1
  __int64 v33; // x2
  Il2CppObject *MasterData_object; // x22
  struct ItemEntity_o *v35; // x8
  int32_t v36; // w8
  int32_t requireNum; // w9
  __int64 v38; // x0
  UILabel_o *currentNumLb; // x22
  Il2CppObject *v40; // x0
  UILabel_o *spendNumLb; // x22
  int32_t v42; // w8
  float v43; // s1 OVERLAPPED
  float v44; // s3
  float v45; // s0
  float v46; // s2
  int32_t v48; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t giftNum; // [xsp+8h] [xbp-48h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_5937307 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_26423/*"{0:N0}"*/);
    sub_21FFC50(&StringLiteral_923/*"-"*/);
    sub_21FFC50(&StringLiteral_10867/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/);
    sub_21FFC50(&StringLiteral_350/*" ×{0}"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937307 = 1;
  }
  v50 = 0;
  this->fields.itemSelectEnt = data;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemSelectEnt,
    (int32_t)data,
    *(System_String_o **)&ticketsHave,
    *(System_String_o **)&ticketImgId,
    (int32_t)dlg,
    (int32_t)method,
    v6,
    v7);
  this->fields.dialog = dlg;
  this->fields.isEnableSelect = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dialog, (int32_t)dlg, v13, v14, v15, v16, v17, v18);
  maskImg = this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0);
  maskImg = this->fields.itemNameLb;
  if ( !maskImg )
    goto LABEL_54;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  maskImg = this->fields.currentNumLb;
  if ( !maskImg )
    goto LABEL_54;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  maskImg = this->fields.spendNumLb;
  if ( !maskImg )
    goto LABEL_54;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  maskImg = this->fields.itemDetailLb;
  if ( !maskImg )
    goto LABEL_54;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_923/*"-"*/, 0);
  currentInfoLb = this->fields.currentInfoLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21, v22);
  maskImg = LocalizationManager__Get((System_String_o *)StringLiteral_10867/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, 0);
  if ( !currentInfoLb )
    goto LABEL_54;
  UILabel__set_text(currentInfoLb, (System_String_o *)maskImg, 0);
  maskImg = this->fields.itemIconInfo;
  if ( !maskImg )
    goto LABEL_54;
  maskImg = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskImg, 0);
  if ( !maskImg )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 1, 0);
  if ( !data )
    goto LABEL_54;
  maskImg = ItemSelectEntity__GetGiftData(data, 0);
  if ( maskImg )
  {
    v24 = *((_QWORD *)maskImg + 3);
    if ( v24 )
    {
      if ( !(_DWORD)v24 )
        sub_21FFED4(maskImg);
      v25 = (_DWORD *)*((_QWORD *)maskImg + 4);
      if ( !v25 )
        goto LABEL_54;
      v26 = v25[5];
      this->fields.giftNum = v25[7];
      if ( v26 == 2 )
      {
        maskImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !maskImg )
          goto LABEL_54;
        maskImg = DataManager__GetMasterData_object_(
                    (DataManager_o *)maskImg,
                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !maskImg )
          goto LABEL_54;
        maskImg = (void *)DataMasterBase_object__object__int___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)maskImg,
                            (Il2CppObject **)&this->fields.itemEnt,
                            v25[6],
                            (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
              if ( ticketImgId <= 0 )
              {
                if ( !maskImg )
                  goto LABEL_54;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0);
              }
              else
              {
                if ( !maskImg )
                  goto LABEL_54;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 1, 0);
                maskImg = this->fields.ticketSp;
                if ( !maskImg )
                  goto LABEL_54;
                ItemIconComponent__SetItemImage((ItemIconComponent_o *)maskImg, ticketImgId, 0);
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
                  v31 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &giftNum);
                  v32 = System_String__Format((System_String_o *)StringLiteral_350/*" ×{0}"*/, v31, 0);
                }
                maskImg = System_String__Concat_75438412(name, v32, 0);
                if ( itemNameLb )
                {
                  UILabel__set_text(itemNameLb, (System_String_o *)maskImg, 0);
                  maskImg = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                  if ( maskImg )
                  {
                    MasterData_object = DataManager__GetMasterData_object_(
                                          (DataManager_o *)maskImg,
                                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
                    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19, v33);
                    if ( !byte_5931D52 )
                    {
                      sub_21FFC50(&NetworkManager_TypeInfo);
                      byte_5931D52 = 1;
                    }
                    maskImg = NetworkManager_TypeInfo;
                    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                    {
                      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19, v33);
                      maskImg = NetworkManager_TypeInfo;
                    }
                    v35 = this->fields.itemEnt;
                    if ( v35 )
                    {
                      if ( MasterData_object )
                      {
                        maskImg = UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)MasterData_object,
                                    *(_QWORD *)(*((_QWORD *)maskImg + 23) + 64LL),
                                    v35->fields.id,
                                    0);
                        if ( maskImg )
                        {
                          v36 = *((_DWORD *)maskImg + 7);
                          requireNum = data->fields.requireNum;
                          v38 = qword_594C070;
                          currentNumLb = this->fields.currentNumLb;
                          this->fields.itemHold = v36;
                          v50 = requireNum;
                          v48 = v36;
                          v40 = (Il2CppObject *)j_il2cpp_value_box_0(v38, &v48);
                          maskImg = System_String__Format((System_String_o *)StringLiteral_26423/*"{0:N0}"*/, v40, 0);
                          if ( currentNumLb )
                          {
                            UILabel__set_text(currentNumLb, (System_String_o *)maskImg, 0);
                            spendNumLb = this->fields.spendNumLb;
                            maskImg = System_Int32__ToString((int32_t)&v50, 0);
                            if ( spendNumLb )
                            {
                              UILabel__set_text(spendNumLb, (System_String_o *)maskImg, 0);
                              maskImg = this->fields.itemDetailLb;
                              if ( maskImg )
                              {
                                UILabel__set_text((UILabel_o *)maskImg, data->fields.detail, 0);
                                v42 = v50;
                                maskImg = this->fields.spendNumLb;
                                this->fields.isEnableSelect = v50 <= ticketsHave;
                                if ( maskImg )
                                {
                                  v43 = 1.0;
                                  v44 = 1.0;
                                  if ( v42 > ticketsHave )
                                    v43 = 0.0;
                                  v45 = 1.0;
                                  v46 = v43;
                                  UIWidget__set_color((UIWidget_o *)maskImg, *(UnityEngine_Color_o *)(&v43 - 1), 0);
                                  maskImg = this->fields.maskImg;
                                  if ( maskImg )
                                  {
                                    UnityEngine_GameObject__SetActive(
                                      (UnityEngine_GameObject_o *)maskImg,
                                      !this->fields.isEnableSelect,
                                      0);
                                    goto LABEL_53;
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
LABEL_54:
          sub_21FFECC(maskImg, v19);
        }
      }
    }
  }
LABEL_53:
  PresentSelectableItemComponent__setEnableSelectItem(this, v19);
  return this->fields.giftNum;
}