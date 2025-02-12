void __fastcall LimitCntUpItemComponent___ctor(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpItemComponent__CloseItemDetail(
        LimitCntUpItemComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4BCB477 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_LimitCntUpItemComponent_CloseItemDetail__, isDecide);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4BCB477 = 1;
  }
  v4 = Method_LimitCntUpItemComponent_CloseItemDetail__;
  if ( (*((_BYTE *)Method_LimitCntUpItemComponent_CloseItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C1ABEC(Method_LimitCntUpItemComponent_CloseItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)Instance, 0LL, 0LL);
        return;
      }
LABEL_13:
      sub_1C1AE30(Instance, v7);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall LimitCntUpItemComponent__DisableOpenItemDetailDialog(
        LimitCntUpItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  this->fields.disableOpenItemDetailDialog = enable;
}


ItemEntity_o *__fastcall LimitCntUpItemComponent__GetItemEntity(
        LimitCntUpItemComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.itemEnt;
}


void __fastcall LimitCntUpItemComponent__OnClickItem(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *maskSprite; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  bool IsEnableItemLinkInfoWindow; // w22
  Il2CppObject *Instance; // x0
  ItemEntity_o *itemEnt; // x20
  CommonUI_o *v16; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v17; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v18; // x22

  if ( (byte_4BCB476 & 1) == 0 )
  {
    sub_1C1ABD4(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_1C1ABD4(&Method_LimitCntUpItemComponent_CloseItemDetail__, v4);
    sub_1C1ABD4(&Method_LimitCntUpItemComponent_OnClickItem__, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4BCB476 = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !gameObject )
      goto LABEL_19;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0LL) )
      return;
  }
  if ( !this->fields.disableOpenItemDetailDialog )
  {
    v11 = Method_LimitCntUpItemComponent_OnClickItem__;
    if ( (*((_BYTE *)Method_LimitCntUpItemComponent_OnClickItem__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1C1ABEC(Method_LimitCntUpItemComponent_OnClickItem__);
    v12 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( gameObject )
    {
      IsEnableItemLinkInfoWindow = CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)gameObject, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      itemEnt = this->fields.itemEnt;
      v16 = (CommonUI_o *)Instance;
      if ( IsEnableItemLinkInfoWindow )
      {
        v17 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C1AE20(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          (intptr_t)Method_LimitCntUpItemComponent_CloseItemDetail__,
          0LL);
        if ( v16 )
        {
          CommonUI__OpenItemLinkInfoDetailWindow(v16, itemEnt, v17, 0, 0LL);
          return;
        }
      }
      else
      {
        v18 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C1AE20(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          (intptr_t)Method_LimitCntUpItemComponent_CloseItemDetail__,
          0LL);
        if ( v16 )
        {
          CommonUI__OpenItemDetailDialog(v16, itemEnt, v18, 51, 0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1C1AE30(gameObject, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpItemComponent__SetItemEntity(
        LimitCntUpItemComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BCB475 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&id);
    sub_1C1ABD4(&DataManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    byte_4BCB475 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    sub_1C1AE30(0LL, v8);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             id,
             (const MethodInfo_3248678 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)Entity;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.itemEnt, (int64_t)Entity, v10, v11, v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpItemComponent__SetItemIcon(
        LimitCntUpItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *itemInfo; // x0
  Il2CppObject *Entity; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  ItemIconComponent_o *itemIconComp; // x8

  if ( (byte_4BCB474 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&itemId);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BCB474 = 1;
  }
  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(itemInfo, 1, 0LL);
  itemInfo = this->fields.statusInfo;
  if ( !itemInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(itemInfo, 0, 0LL);
  this->fields.currentItemId = itemId;
  itemInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemInfo )
    goto LABEL_10;
  itemInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)itemInfo,
                                           (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemInfo
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)itemInfo,
                   this->fields.currentItemId,
                   (const MethodInfo_3248678 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        this->fields.itemEnt = (struct ItemEntity_o *)Entity,
        sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.itemEnt, (int64_t)Entity, v9, v10, v11, v12, v13, v14),
        (itemInfo = (UnityEngine_GameObject_o *)this->fields.itemEnt) == 0LL)
    || (itemInfo = (UnityEngine_GameObject_o *)ItemEntity__GetImageId((ItemEntity_o *)itemInfo, 0LL),
        itemIconComp = this->fields.itemIconComp,
        this->fields.itemImgId = (int)itemInfo,
        !itemIconComp) )
  {
LABEL_10:
    sub_1C1AE30(itemInfo, *(_QWORD *)&itemId);
  }
  ItemIconComponent__SetCombineItem(itemIconComp, itemId, -1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpItemComponent__SetMaskSprite(
        LimitCntUpItemComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4BCB478 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, isActive);
    byte_4BCB478 = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(maskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1C1AE30(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0LL);
  }
}


bool __fastcall LimitCntUpItemComponent__checkItemNum(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  return this->fields.isItemNum;
}


void __fastcall LimitCntUpItemComponent__enableDispItemInfo(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C1AE30(0LL, method);
  UnityEngine_GameObject__SetActive(itemInfo, 0, 0LL);
}


int32_t __fastcall LimitCntUpItemComponent__getItemId(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentItemId;
}


int32_t __fastcall LimitCntUpItemComponent__getItemImgId(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  return this->fields.itemImgId;
}


void __fastcall LimitCntUpItemComponent__setLimitUpItemInfo(
        LimitCntUpItemComponent_o *this,
        int64_t usrId,
        int32_t itemId,
        int32_t needNum,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x0
  struct ItemEntity_o **p_itemEnt; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct ItemEntity_o *itemEnt; // x8
  _DWORD *v29; // x8
  UILabel_o *needTitleLb; // x20
  UILabel_o *haveTitleLb; // x20
  UILabel_o *haveNumLb; // x20
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  UILabel_o *needNumLb; // x20
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  float v42; // s8
  float v43; // s9
  float v44; // s10
  float v45; // s11
  int32_t needItemNum; // [xsp+0h] [xbp-70h] BYREF
  int32_t haveItemNum; // [xsp+4h] [xbp-6Ch] BYREF
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UserItemEntity_o *v49; // [xsp+38h] [xbp-38h] BYREF
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BCB473 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_ItemMaster___, usrId);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserItemMaster___, v9);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v10);
    sub_1C1ABD4(&DataManager_TypeInfo, v11);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_1C1ABD4(&int_TypeInfo, v13);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v14);
    sub_1C1ABD4(&StringLiteral_25354/*"{0:#,0}"*/, v15);
    sub_1C1ABD4(&StringLiteral_3722/*"COMBINE_ITEM_INFO_HAVE"*/, v16);
    sub_1C1ABD4(&StringLiteral_3723/*"COMBINE_ITEM_INFO_NEED"*/, v17);
    byte_4BCB473 = 1;
  }
  v49 = 0LL;
  entity = 0LL;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  this->fields.currentItemId = itemId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_39;
  v20 = DataMasterBase_object__object__int___GetEntity(
          Master_object,
          this->fields.currentItemId,
          (const MethodInfo_3248678 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)v20;
  p_itemEnt = &this->fields.itemEnt;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.itemEnt, (int64_t)v20, v22, v23, v24, v25, v26, v27);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemEnt;
  if ( !Master_object )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ItemEntity__GetImageId(
                                                                  (ItemEntity_o *)Master_object,
                                                                  0LL);
  itemEnt = this->fields.itemEnt;
  this->fields.itemImgId = (int)Master_object;
  if ( !itemEnt )
    goto LABEL_39;
  if ( itemEnt->fields.type == 29 )
  {
    entity = 0LL;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
    if ( !*p_itemEnt || !Master_object )
      goto LABEL_39;
    UserSvtCoinMaster__TryGetEntity(
      (UserSvtCoinMaster_o *)Master_object,
      &entity,
      usrId,
      (*p_itemEnt)->fields.value,
      0LL);
    v29 = entity;
    if ( !entity )
      goto LABEL_21;
    goto LABEL_20;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserItemMaster__TryGetEntity(
                                                                  (UserItemMaster_o *)Master_object,
                                                                  &v49,
                                                                  usrId,
                                                                  itemId,
                                                                  0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v29 = v49;
    if ( !v49 )
      goto LABEL_39;
LABEL_20:
    LODWORD(v29) = v29[7];
LABEL_21:
    this->fields.haveItemNum = (int)v29;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemIconComp;
  if ( !Master_object )
    goto LABEL_39;
  ItemIconComponent__SetCombineItem((ItemIconComponent_o *)Master_object, itemId, -1, 0LL);
  needTitleLb = this->fields.needTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3723/*"COMBINE_ITEM_INFO_NEED"*/,
                                                                  0LL);
  if ( !needTitleLb )
    goto LABEL_39;
  UILabel__set_text(needTitleLb, (System_String_o *)Master_object, 0LL);
  haveTitleLb = this->fields.haveTitleLb;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3722/*"COMBINE_ITEM_INFO_HAVE"*/,
                                                                  0LL);
  if ( !haveTitleLb )
    goto LABEL_39;
  UILabel__set_text(haveTitleLb, (System_String_o *)Master_object, 0LL);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveItemNum, v33, v34, v35);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_25354/*"{0:#,0}"*/,
                                                                  v36,
                                                                  0LL);
  if ( !haveNumLb )
    goto LABEL_39;
  UILabel__set_text(haveNumLb, (System_String_o *)Master_object, 0LL);
  needNumLb = this->fields.needNumLb;
  needItemNum = this->fields.needItemNum;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &needItemNum, v38, v39, v40);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_25354/*"{0:#,0}"*/,
                                                                  v41,
                                                                  0LL);
  if ( !needNumLb )
    goto LABEL_39;
  UILabel__set_text(needNumLb, (System_String_o *)Master_object, 0LL);
  if ( this->fields.haveItemNum >= this->fields.needItemNum )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needTitleLb;
    this->fields.isItemNum = 1;
    if ( Master_object )
    {
      v51.fields.r = 1.0;
      v51.fields.g = 1.0;
      v51.fields.b = 1.0;
      v51.fields.a = 1.0;
      v42 = 1.0;
      UIWidget__set_color((UIWidget_o *)Master_object, v51, 0LL);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needNumLb;
      if ( Master_object )
      {
        v44 = 1.0;
        v43 = 1.0;
        v45 = 1.0;
        goto LABEL_36;
      }
    }
LABEL_39:
    sub_1C1AE30(Master_object, v19);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needTitleLb;
  this->fields.isItemNum = 0;
  if ( !Master_object )
    goto LABEL_39;
  v42 = 0.855;
  v43 = 0.32;
  v50.fields.g = 0.0;
  v50.fields.a = 1.0;
  v50.fields.r = 0.855;
  v50.fields.b = 0.32;
  v44 = 0.0;
  v45 = 1.0;
  UIWidget__set_color((UIWidget_o *)Master_object, v50, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needNumLb;
  if ( !Master_object )
    goto LABEL_39;
LABEL_36:
  v52.fields.r = v42;
  v52.fields.g = v44;
  v52.fields.b = v43;
  v52.fields.a = v45;
  UIWidget__set_color((UIWidget_o *)Master_object, v52, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemInfo;
  if ( !Master_object )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.statusInfo;
  if ( !Master_object )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
}