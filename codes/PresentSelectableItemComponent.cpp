void __fastcall PresentSelectableItemComponent___ctor(PresentSelectableItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall PresentSelectableItemComponent__OnClickItem(
        PresentSelectableItemComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *dialog; // x20
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  struct PresentSelectableDlgComponent_o *v8; // x0

  if ( (byte_42E87CA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E87CA = 1;
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
      v8 = this->fields.dialog;
      if ( !v8 )
        sub_B5D69C(0LL, v6);
      if ( !v8->fields.isClosed )
        PresentSelectableDlgComponent__OpenItemConfirmDlg(
          v8,
          this->fields.itemSelectEnt,
          this->fields.itemEnt,
          this->fields.itemHold,
          v7);
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
      sub_B5D69C(0LL, method);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x1
  int64_t maskImg; // x0
  UILabel_o *currentInfoLb; // x23
  __int64 v55; // x8
  _DWORD *v56; // x23
  int32_t v57; // w2
  struct ItemEntity_o **p_itemEnt; // x23
  struct ItemEntity_o *itemEnt; // x8
  struct ItemEntity_o *v60; // x8
  UILabel_o *itemNameLb; // x22
  System_String_o *name; // x24
  Il2CppObject *v63; // x0
  System_String_o *v64; // x1
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t v66; // w8
  UILabel_o *currentNumLb; // x22
  Il2CppObject *v68; // x0
  UILabel_o *spendNumLb; // x22
  UIWidget_o *v70; // x21
  bool v71; // cc
  int v72; // s0
  __int64 v77; // x0
  int32_t v78; // [xsp+Ch] [xbp-44h] BYREF
  int32_t giftNum; // [xsp+18h] [xbp-38h] BYREF
  int32_t requireNum; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42E87C9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)data, ticketsHave, *(_QWORD *)&ticketImgId);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v16, v17, v18);
    sub_B5D5C4(&int_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&NetworkManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_23838/*"{0:N0}"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_10620/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_282/*" ×{0}"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_1/*""*/, v43, v44, v45);
    byte_42E87C9 = 1;
  }
  requireNum = 0;
  this->fields.itemSelectEnt = data;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.dialog,
    (System_Int32_array **)dlg,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  maskImg = (int64_t)this->fields.maskImg;
  if ( !maskImg )
    goto LABEL_53;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskImg, 0, 0LL);
  maskImg = (int64_t)this->fields.itemNameLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_755/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.currentNumLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_755/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.spendNumLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_755/*"-"*/, 0LL);
  maskImg = (int64_t)this->fields.itemDetailLb;
  if ( !maskImg )
    goto LABEL_53;
  UILabel__set_text((UILabel_o *)maskImg, (System_String_o *)StringLiteral_755/*"-"*/, 0LL);
  currentInfoLb = this->fields.currentInfoLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  maskImg = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_10620/*"PRESENT_BOX_SELECTABLE_LIST_CURRENT_HOLD"*/, 0LL);
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
    v55 = *(_QWORD *)(maskImg + 24);
    if ( v55 )
    {
      if ( !(_DWORD)v55 )
      {
        v77 = sub_B5D6C8(maskImg);
        sub_B5D668(v77, 0LL);
      }
      v56 = *(_DWORD **)(maskImg + 32);
      if ( !v56 )
        goto LABEL_53;
      this->fields.giftNum = v56[7];
      if ( v56[5] == 2 )
      {
        maskImg = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !maskImg )
          goto LABEL_53;
        maskImg = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)maskImg,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
        if ( !maskImg )
          goto LABEL_53;
        v57 = v56[6];
        p_itemEnt = &this->fields.itemEnt;
        maskImg = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    (DataMasterBase_WarMaster__WarEntity__int__o *)maskImg,
                    (WarEntity_o **)&this->fields.itemEnt,
                    v57,
                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
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
                v60 = this->fields.itemEnt;
                if ( v60 )
                {
                  itemNameLb = this->fields.itemNameLb;
                  name = v60->fields.name;
                  if ( this->fields.giftNum <= 1 )
                  {
                    v64 = (System_String_o *)StringLiteral_1/*""*/;
                  }
                  else
                  {
                    giftNum = this->fields.giftNum;
                    v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &giftNum);
                    v64 = System_String__Format((System_String_o *)StringLiteral_282/*" ×{0}"*/, v63, 0LL);
                  }
                  maskImg = (int64_t)System_String__Concat_44577788(name, v64, 0LL);
                  if ( itemNameLb )
                  {
                    UILabel__set_text(itemNameLb, (System_String_o *)maskImg, 0LL);
                    maskImg = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                    if ( maskImg )
                    {
                      MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)maskImg,
                                                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
                            v66 = *(_DWORD *)(maskImg + 28);
                            this->fields.itemHold = v66;
                            requireNum = data->fields.requireNum;
                            currentNumLb = this->fields.currentNumLb;
                            v78 = v66;
                            v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78);
                            maskImg = (int64_t)System_String__Format((System_String_o *)StringLiteral_23838/*"{0:N0}"*/, v68, 0LL);
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
                                  v70 = (UIWidget_o *)this->fields.spendNumLb;
                                  v71 = requireNum <= ticketsHave;
                                  this->fields.isEnableSelect = requireNum <= ticketsHave;
                                  if ( v71 )
                                  {
                                    *(UnityEngine_Color_o *)&v72 = UnityEngine_Color__get_white(0LL);
                                    if ( !v70 )
                                      goto LABEL_53;
                                  }
                                  else
                                  {
                                    *(UnityEngine_Color_o *)&v72 = UnityEngine_Color__get_red(0LL);
                                    if ( !v70 )
                                      goto LABEL_53;
                                  }
                                  UIWidget__set_color(v70, *(UnityEngine_Color_o *)&v72, 0LL);
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
          sub_B5D69C(maskImg, v52);
        }
      }
    }
  }
LABEL_52:
  PresentSelectableItemComponent__setEnableSelectItem(this, v52);
  return this->fields.giftNum;
}