void LimitCntUpItemComponent___ctor(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void LimitCntUpItemComponent__CloseItemDetail(LimitCntUpItemComponent_o *this, bool isDecide, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CCB46D & 1) == 0 )
  {
    sub_1C713B0(&Method_LimitCntUpItemComponent_CloseItemDetail__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCB46D = 1;
  }
  v3 = Method_LimitCntUpItemComponent_CloseItemDetail__;
  if ( (*((_BYTE *)Method_LimitCntUpItemComponent_CloseItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_LimitCntUpItemComponent_CloseItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow((CommonUI_o *)Instance, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)Instance, 0, 0);
        return;
      }
LABEL_13:
      sub_1C71608(Instance, v6);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


void LimitCntUpItemComponent__DisableOpenItemDetailDialog(
        LimitCntUpItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  this->fields.disableOpenItemDetailDialog = enable;
}


ItemEntity_o *LimitCntUpItemComponent__GetItemEntity(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  return this->fields.itemEnt;
}


void LimitCntUpItemComponent__OnClickItem(LimitCntUpItemComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4CCB46C & 1) == 0 )
  {
    sub_1C713B0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1C713B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_LimitCntUpItemComponent_CloseItemDetail__);
    sub_1C713B0(&Method_LimitCntUpItemComponent_OnClickItem__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CCB46C = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !gameObject )
      goto LABEL_19;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_19;
    if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0) )
      return;
  }
  if ( !this->fields.disableOpenItemDetailDialog )
  {
    v6 = Method_LimitCntUpItemComponent_OnClickItem__;
    if ( (*((_BYTE *)Method_LimitCntUpItemComponent_OnClickItem__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C713C8(Method_LimitCntUpItemComponent_OnClickItem__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C71394(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( gameObject )
    {
      IsEnableItemLinkInfoWindow = CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)gameObject, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      itemEnt = this->fields.itemEnt;
      v11 = (CommonUI_o *)Instance;
      if ( IsEnableItemLinkInfoWindow )
      {
        v12 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C715FC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_LimitCntUpItemComponent_CloseItemDetail__,
          0);
        if ( v11 )
        {
          CommonUI__OpenItemLinkInfoDetailWindow(v11, itemEnt, v12, 0, 0);
          return;
        }
      }
      else
      {
        v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C715FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_LimitCntUpItemComponent_CloseItemDetail__,
          0);
        if ( v11 )
        {
          CommonUI__OpenItemDetailDialog(v11, itemEnt, v13, 51, 0);
          return;
        }
      }
    }
LABEL_19:
    sub_1C71608(gameObject, v4);
  }
}


void LimitCntUpItemComponent__SetItemEntity(LimitCntUpItemComponent_o *this, int32_t id, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *Entity; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CCB46B & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_4CCB46B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    sub_1C71608(0, v6);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             id,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)Entity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemEnt, (int32_t)Entity, v8, v9, v10, v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void LimitCntUpItemComponent__SetItemIcon(LimitCntUpItemComponent_o *this, int32_t itemId, const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0
  Il2CppObject *Entity; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  ItemIconComponent_o *itemIconComp; // x8

  if ( (byte_4CCB46A & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCB46A = 1;
  }
  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(itemInfo, 1, 0);
  itemInfo = this->fields.statusInfo;
  if ( !itemInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(itemInfo, 0, 0);
  this->fields.currentItemId = itemId;
  itemInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemInfo )
    goto LABEL_10;
  itemInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                           (DataManager_o *)itemInfo,
                                           (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemInfo
    || (Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)itemInfo,
                   this->fields.currentItemId,
                   (const MethodInfo_3408E80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        this->fields.itemEnt = (struct ItemEntity_o *)Entity,
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemEnt, (int32_t)Entity, v7, v8, v9, v10, v11, v12),
        (itemInfo = (UnityEngine_GameObject_o *)this->fields.itemEnt) == 0)
    || (itemInfo = (UnityEngine_GameObject_o *)ItemEntity__GetImageId((ItemEntity_o *)itemInfo, 0),
        itemIconComp = this->fields.itemIconComp,
        this->fields.itemImgId = (int)itemInfo,
        !itemIconComp) )
  {
LABEL_10:
    sub_1C71608(itemInfo, *(_QWORD *)&itemId);
  }
  ItemIconComponent__SetCombineItem(itemIconComp, itemId, -1, 0);
}


void LimitCntUpItemComponent__SetMaskSprite(LimitCntUpItemComponent_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4CCB46E & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CCB46E = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(maskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C71608(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0);
  }
}


bool LimitCntUpItemComponent__checkItemNum(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  return this->fields.isItemNum;
}


void LimitCntUpItemComponent__enableDispItemInfo(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C71608(0, method);
  UnityEngine_GameObject__SetActive(itemInfo, 0, 0);
}


int32_t LimitCntUpItemComponent__getItemId(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentItemId;
}


int32_t LimitCntUpItemComponent__getItemImgId(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  return this->fields.itemImgId;
}


void LimitCntUpItemComponent__setLimitUpItemInfo(
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
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct ItemEntity_o *itemEnt; // x8
  _DWORD *v20; // x8
  UILabel_o *needTitleLb; // x20
  UILabel_o *haveTitleLb; // x20
  UILabel_o *haveNumLb; // x20
  Il2CppObject *v24; // x0
  UILabel_o *needNumLb; // x20
  Il2CppObject *v26; // x0
  float v27; // s8
  float v28; // s9
  float v29; // s10
  float v30; // s11
  int32_t needItemNum; // [xsp+0h] [xbp-70h] BYREF
  int32_t haveItemNum; // [xsp+4h] [xbp-6Ch] BYREF
  UserSvtCoinEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UserItemEntity_o *v34; // [xsp+38h] [xbp-38h] BYREF
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CCB469 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_25182/*"{0:#,0}"*/);
    sub_1C713B0(&StringLiteral_3592/*"COMBINE_ITEM_INFO_HAVE"*/);
    sub_1C713B0(&StringLiteral_3593/*"COMBINE_ITEM_INFO_NEED"*/);
    byte_4CCB469 = 1;
  }
  v34 = 0;
  entity = 0;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  this->fields.currentItemId = itemId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_39;
  v11 = DataMasterBase_object__object__int___GetEntity(
          Master_object,
          this->fields.currentItemId,
          (const MethodInfo_3408E80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)v11;
  p_itemEnt = &this->fields.itemEnt;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemEnt, (int32_t)v11, v13, v14, v15, v16, v17, v18);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemEnt;
  if ( !Master_object )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0);
  itemEnt = this->fields.itemEnt;
  this->fields.itemImgId = (int)Master_object;
  if ( !itemEnt )
    goto LABEL_39;
  if ( itemEnt->fields.type == 29 )
  {
    entity = 0;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
    if ( !*p_itemEnt || !Master_object )
      goto LABEL_39;
    UserSvtCoinMaster__TryGetEntity((UserSvtCoinMaster_o *)Master_object, &entity, usrId, (*p_itemEnt)->fields.value, 0);
    v20 = entity;
    if ( !entity )
      goto LABEL_21;
    goto LABEL_20;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_object )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UserItemMaster__TryGetEntity(
                                                                  (UserItemMaster_o *)Master_object,
                                                                  &v34,
                                                                  usrId,
                                                                  itemId,
                                                                  0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v20 = v34;
    if ( !v34 )
      goto LABEL_39;
LABEL_20:
    LODWORD(v20) = v20[7];
LABEL_21:
    this->fields.haveItemNum = (int)v20;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemIconComp;
  if ( !Master_object )
    goto LABEL_39;
  ItemIconComponent__SetCombineItem((ItemIconComponent_o *)Master_object, itemId, -1, 0);
  needTitleLb = this->fields.needTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3593/*"COMBINE_ITEM_INFO_NEED"*/,
                                                                  0);
  if ( !needTitleLb )
    goto LABEL_39;
  UILabel__set_text(needTitleLb, (System_String_o *)Master_object, 0);
  haveTitleLb = this->fields.haveTitleLb;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3592/*"COMBINE_ITEM_INFO_HAVE"*/,
                                                                  0);
  if ( !haveTitleLb )
    goto LABEL_39;
  UILabel__set_text(haveTitleLb, (System_String_o *)Master_object, 0);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveItemNum);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_25182/*"{0:#,0}"*/,
                                                                  v24,
                                                                  0);
  if ( !haveNumLb )
    goto LABEL_39;
  UILabel__set_text(haveNumLb, (System_String_o *)Master_object, 0);
  needNumLb = this->fields.needNumLb;
  needItemNum = this->fields.needItemNum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &needItemNum);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_25182/*"{0:#,0}"*/,
                                                                  v26,
                                                                  0);
  if ( !needNumLb )
    goto LABEL_39;
  UILabel__set_text(needNumLb, (System_String_o *)Master_object, 0);
  if ( this->fields.haveItemNum >= this->fields.needItemNum )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needTitleLb;
    this->fields.isItemNum = 1;
    if ( Master_object )
    {
      v36.fields.r = 1.0;
      v36.fields.g = 1.0;
      v36.fields.b = 1.0;
      v36.fields.a = 1.0;
      v27 = 1.0;
      UIWidget__set_color((UIWidget_o *)Master_object, v36, 0);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needNumLb;
      if ( Master_object )
      {
        v29 = 1.0;
        v28 = 1.0;
        v30 = 1.0;
        goto LABEL_36;
      }
    }
LABEL_39:
    sub_1C71608(Master_object, v10);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needTitleLb;
  this->fields.isItemNum = 0;
  if ( !Master_object )
    goto LABEL_39;
  v27 = 0.855;
  v28 = 0.32;
  v35.fields.g = 0.0;
  v35.fields.a = 1.0;
  v35.fields.r = 0.855;
  v35.fields.b = 0.32;
  v29 = 0.0;
  v30 = 1.0;
  UIWidget__set_color((UIWidget_o *)Master_object, v35, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needNumLb;
  if ( !Master_object )
    goto LABEL_39;
LABEL_36:
  v37.fields.r = v27;
  v37.fields.g = v29;
  v37.fields.b = v28;
  v37.fields.a = v30;
  UIWidget__set_color((UIWidget_o *)Master_object, v37, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemInfo;
  if ( !Master_object )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.statusInfo;
  if ( !Master_object )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
}