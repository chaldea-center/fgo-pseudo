void __fastcall LimitCntUpItemComponent___ctor(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall LimitCntUpItemComponent__CloseItemDetail(
        LimitCntUpItemComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5E991 & 1) == 0 )
  {
    sub_1B885B0(&Method_LimitCntUpItemComponent_CloseItemDetail__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E991 = 1;
  }
  v3 = Method_LimitCntUpItemComponent_CloseItemDetail__;
  if ( (*((_BYTE *)Method_LimitCntUpItemComponent_CloseItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_LimitCntUpItemComponent_CloseItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)Instance, 0LL, 0LL);
        return;
      }
LABEL_13:
      sub_1B8880C(Instance, v6);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  UnityEngine_Object_o *maskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  bool IsEnableItemLinkInfoWindow; // w22
  Il2CppObject *Instance; // x0
  ItemEntity_o *itemEnt; // x20
  CommonUI_o *v11; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v12; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x22

  if ( (byte_4A5E990 & 1) == 0 )
  {
    sub_1B885B0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_LimitCntUpItemComponent_CloseItemDetail__);
    sub_1B885B0(&Method_LimitCntUpItemComponent_OnClickItem__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E990 = 1;
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
    v6 = Method_LimitCntUpItemComponent_OnClickItem__;
    if ( (*((_BYTE *)Method_LimitCntUpItemComponent_OnClickItem__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B885C8(Method_LimitCntUpItemComponent_OnClickItem__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( gameObject )
    {
      IsEnableItemLinkInfoWindow = CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)gameObject, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      itemEnt = this->fields.itemEnt;
      v11 = (CommonUI_o *)Instance;
      if ( IsEnableItemLinkInfoWindow )
      {
        v12 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B887FC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_LimitCntUpItemComponent_CloseItemDetail__,
          0LL);
        if ( v11 )
        {
          CommonUI__OpenItemLinkInfoDetailWindow(v11, itemEnt, v12, 0, 0LL);
          return;
        }
      }
      else
      {
        v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_LimitCntUpItemComponent_CloseItemDetail__,
          0LL);
        if ( v11 )
        {
          CommonUI__OpenItemDetailDialog(v11, itemEnt, v13, 51, 0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1B8880C(gameObject, v4);
  }
}


void __fastcall LimitCntUpItemComponent__SetItemEntity(
        LimitCntUpItemComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5E98F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_4A5E98F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v6);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             id,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)Entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemEnt, (int32_t)Entity, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpItemComponent__SetItemIcon(
        LimitCntUpItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0
  Il2CppObject *Entity; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  ItemIconComponent_o *itemIconComp; // x8

  if ( (byte_4A5E98E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E98E = 1;
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
  itemInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemInfo )
    goto LABEL_10;
  itemInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)itemInfo,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemInfo
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)itemInfo,
                   this->fields.currentItemId,
                   (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        this->fields.itemEnt = (struct ItemEntity_o *)Entity,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemEnt, (int32_t)Entity, v7, v8),
        (itemInfo = (UnityEngine_GameObject_o *)this->fields.itemEnt) == 0LL)
    || (itemInfo = (UnityEngine_GameObject_o *)ItemEntity__GetImageId((ItemEntity_o *)itemInfo, 0LL),
        itemIconComp = this->fields.itemIconComp,
        this->fields.itemImgId = (int)itemInfo,
        !itemIconComp) )
  {
LABEL_10:
    sub_1B8880C(itemInfo, *(_QWORD *)&itemId);
  }
  ItemIconComponent__SetCombineItem(itemIconComp, itemId, -1, 0LL);
}


void __fastcall LimitCntUpItemComponent__SetMaskSprite(
        LimitCntUpItemComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4A5E992 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E992 = 1;
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
      sub_1B8880C(gameObject, v6);
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
    sub_1B8880C(0LL, method);
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  struct ItemEntity_o **p_itemEnt; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  struct ItemEntity_o *itemEnt; // x8
  _DWORD *v16; // x8
  UILabel_o *needTitleLb; // x20
  UILabel_o *haveTitleLb; // x20
  UILabel_o *haveNumLb; // x20
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  UILabel_o *needNumLb; // x20
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  float v29; // s8
  float v30; // s9
  float v31; // s10
  float v32; // s11
  int32_t needItemNum; // [xsp+0h] [xbp-70h] BYREF
  int32_t haveItemNum; // [xsp+4h] [xbp-6Ch] BYREF
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UserItemEntity_o *v36; // [xsp+38h] [xbp-38h] BYREF
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E98D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24933/*"{0:#,0}"*/);
    sub_1B885B0(&StringLiteral_3676/*"COMBINE_ITEM_INFO_HAVE"*/);
    sub_1B885B0(&StringLiteral_3677/*"COMBINE_ITEM_INFO_NEED"*/);
    byte_4A5E98D = 1;
  }
  v36 = 0LL;
  entity = 0LL;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  this->fields.currentItemId = itemId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_39;
  v11 = DataMasterBase_object__object__int___GetEntity(
          Master_object,
          this->fields.currentItemId,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)v11;
  p_itemEnt = &this->fields.itemEnt;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemEnt, (int32_t)v11, v13, v14);
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
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
    if ( !*p_itemEnt || !Master_object )
      goto LABEL_39;
    UserSvtCoinMaster__TryGetEntity(
      (UserSvtCoinMaster_o *)Master_object,
      &entity,
      usrId,
      (*p_itemEnt)->fields.value,
      0LL);
    v16 = entity;
    if ( !entity )
      goto LABEL_21;
    goto LABEL_20;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserItemMaster__TryGetEntity(
                                                                  (UserItemMaster_o *)Master_object,
                                                                  &v36,
                                                                  usrId,
                                                                  itemId,
                                                                  0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v16 = v36;
    if ( !v36 )
      goto LABEL_39;
LABEL_20:
    LODWORD(v16) = v16[7];
LABEL_21:
    this->fields.haveItemNum = (int)v16;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemIconComp;
  if ( !Master_object )
    goto LABEL_39;
  ItemIconComponent__SetCombineItem((ItemIconComponent_o *)Master_object, itemId, -1, 0LL);
  needTitleLb = this->fields.needTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3677/*"COMBINE_ITEM_INFO_NEED"*/,
                                                                  0LL);
  if ( !needTitleLb )
    goto LABEL_39;
  UILabel__set_text(needTitleLb, (System_String_o *)Master_object, 0LL);
  haveTitleLb = this->fields.haveTitleLb;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3676/*"COMBINE_ITEM_INFO_HAVE"*/,
                                                                  0LL);
  if ( !haveTitleLb )
    goto LABEL_39;
  UILabel__set_text(haveTitleLb, (System_String_o *)Master_object, 0LL);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveItemNum, v20, v21, v22);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_24933/*"{0:#,0}"*/,
                                                                  v23,
                                                                  0LL);
  if ( !haveNumLb )
    goto LABEL_39;
  UILabel__set_text(haveNumLb, (System_String_o *)Master_object, 0LL);
  needNumLb = this->fields.needNumLb;
  needItemNum = this->fields.needItemNum;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &needItemNum, v25, v26, v27);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_24933/*"{0:#,0}"*/,
                                                                  v28,
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
      v38.fields.r = 1.0;
      v38.fields.g = 1.0;
      v38.fields.b = 1.0;
      v38.fields.a = 1.0;
      v29 = 1.0;
      UIWidget__set_color((UIWidget_o *)Master_object, v38, 0LL);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needNumLb;
      if ( Master_object )
      {
        v31 = 1.0;
        v30 = 1.0;
        v32 = 1.0;
        goto LABEL_36;
      }
    }
LABEL_39:
    sub_1B8880C(Master_object, v10);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needTitleLb;
  this->fields.isItemNum = 0;
  if ( !Master_object )
    goto LABEL_39;
  v29 = 0.855;
  v30 = 0.32;
  v37.fields.g = 0.0;
  v37.fields.a = 1.0;
  v37.fields.r = 0.855;
  v37.fields.b = 0.32;
  v31 = 0.0;
  v32 = 1.0;
  UIWidget__set_color((UIWidget_o *)Master_object, v37, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needNumLb;
  if ( !Master_object )
    goto LABEL_39;
LABEL_36:
  v39.fields.r = v29;
  v39.fields.g = v31;
  v39.fields.b = v30;
  v39.fields.a = v32;
  UIWidget__set_color((UIWidget_o *)Master_object, v39, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemInfo;
  if ( !Master_object )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.statusInfo;
  if ( !Master_object )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
}