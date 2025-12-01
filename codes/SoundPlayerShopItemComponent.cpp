void SoundPlayerShopItemComponent___ctor(SoundPlayerShopItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SoundPlayerShopItemComponent__OnClickItem(SoundPlayerShopItemComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ItemDetailInfoComponent_o *itemDetailComp; // x20
  ItemEntity_o *itemEnt; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CC2B02 & 1) == 0 )
  {
    sub_1C713B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C713B0(&Method_SoundPlayerShopItemComponent_OnClickItem__);
    sub_1C713B0(&Method_SoundPlayerShopItemComponent_closeItemDetail__);
    byte_4CC2B02 = 1;
  }
  v3 = Method_SoundPlayerShopItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_SoundPlayerShopItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_SoundPlayerShopItemComponent_OnClickItem__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  itemDetailComp = this->fields.itemDetailComp;
  itemEnt = this->fields.itemEnt;
  v7 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C715FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerShopItemComponent_closeItemDetail__,
    0);
  if ( !itemDetailComp )
    sub_1C71608(v8, v9);
  ItemDetailInfoComponent__Open(itemDetailComp, itemEnt, v7, 50, 0);
}


bool SoundPlayerShopItemComponent__checkItemNum(SoundPlayerShopItemComponent_o *this, const MethodInfo *method)
{
  return this->fields.isItemNum;
}


void SoundPlayerShopItemComponent__closeItemDetail(
        SoundPlayerShopItemComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  ItemDetailInfoComponent_o *itemDetailComp; // x0

  if ( (byte_4CC2B03 & 1) == 0 )
  {
    sub_1C713B0(&Method_SoundPlayerShopItemComponent_closeItemDetail__);
    byte_4CC2B03 = 1;
  }
  v4 = Method_SoundPlayerShopItemComponent_closeItemDetail__;
  if ( (*((_BYTE *)Method_SoundPlayerShopItemComponent_closeItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C713C8(Method_SoundPlayerShopItemComponent_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  itemDetailComp = this->fields.itemDetailComp;
  if ( !itemDetailComp )
    sub_1C71608(0, v6);
  ItemDetailInfoComponent__Close(itemDetailComp, 0);
}


void SoundPlayerShopItemComponent__enableDispItemInfo(SoundPlayerShopItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C71608(0, method);
  UnityEngine_GameObject__SetActive(itemInfo, 0, 0);
}


int32_t SoundPlayerShopItemComponent__getItemId(SoundPlayerShopItemComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentItemId;
}


int32_t SoundPlayerShopItemComponent__getItemImgId(SoundPlayerShopItemComponent_o *this, const MethodInfo *method)
{
  return this->fields.itemImgId;
}


void SoundPlayerShopItemComponent__setItemInfo(
        SoundPlayerShopItemComponent_o *this,
        int64_t usrId,
        int32_t itemId,
        int32_t needNum,
        int32_t idx,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v12; // x1
  int32_t num; // w8
  int klass; // w8
  UILabel_o *haveNumLb; // x22
  Il2CppObject *v16; // x0
  UILabel_o *needNumLb; // x22
  Il2CppObject *v18; // x0
  float v19; // s8
  float v20; // s9
  float v21; // s10
  float v22; // s11
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct ItemEntity_o *itemEnt; // x8
  float y; // s8
  float z; // s9
  int32_t needItemNum; // [xsp+0h] [xbp-80h] BYREF
  int32_t haveItemNum; // [xsp+4h] [xbp-7Ch] BYREF
  Il2CppObject *v35; // [xsp+8h] [xbp-78h] BYREF
  UserItemEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC2B01 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_25609/*"必要"*/);
    sub_1C713B0(&StringLiteral_25610/*"所持"*/);
    sub_1C713B0(&StringLiteral_25182/*"{0:#,0}"*/);
    byte_4CC2B01 = 1;
  }
  entity = 0;
  v35 = 0;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  Instance = (void *)UserItemMaster__TryGetEntity((UserItemMaster_o *)Instance, &entity, usrId, itemId, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_40;
    num = entity->fields.num;
LABEL_8:
    this->fields.haveItemNum = num;
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &v35,
         itemId,
         (const MethodInfo_3408ECC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    Instance = UserGameMaster__getSelfUserGame(0);
    if ( !v35 )
      goto LABEL_40;
    klass = (int)v35[3].klass;
    if ( klass == 5 )
    {
      if ( !Instance )
        goto LABEL_40;
      num = *((_DWORD *)Instance + 48);
    }
    else
    {
      if ( klass != 22 )
        goto LABEL_17;
      if ( !Instance )
        goto LABEL_40;
      num = *((_DWORD *)Instance + 49);
    }
    goto LABEL_8;
  }
LABEL_17:
  Instance = this->fields.itemIconComp;
  if ( !Instance )
    goto LABEL_40;
  ItemIconComponent__SetCombineItem((ItemIconComponent_o *)Instance, itemId, -1, 0);
  Instance = this->fields.needTitleLb;
  if ( !Instance )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_25609/*"必要"*/, 0);
  Instance = this->fields.haveTitleLb;
  if ( !Instance )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_25610/*"所持"*/, 0);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveItemNum);
  Instance = System_String__Format((System_String_o *)StringLiteral_25182/*"{0:#,0}"*/, v16, 0);
  if ( !haveNumLb )
    goto LABEL_40;
  UILabel__set_text(haveNumLb, (System_String_o *)Instance, 0);
  needNumLb = this->fields.needNumLb;
  needItemNum = this->fields.needItemNum;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &needItemNum);
  Instance = System_String__Format((System_String_o *)StringLiteral_25182/*"{0:#,0}"*/, v18, 0);
  if ( !needNumLb )
    goto LABEL_40;
  UILabel__set_text(needNumLb, (System_String_o *)Instance, 0);
  if ( this->fields.haveItemNum >= this->fields.needItemNum )
  {
    Instance = this->fields.needTitleLb;
    this->fields.isItemNum = 1;
    if ( Instance )
    {
      v40.fields.r = 1.0;
      v40.fields.g = 1.0;
      v40.fields.b = 1.0;
      v40.fields.a = 1.0;
      v19 = 1.0;
      UIWidget__set_color((UIWidget_o *)Instance, v40, 0);
      Instance = this->fields.needNumLb;
      if ( Instance )
      {
        v21 = 1.0;
        v20 = 1.0;
        v22 = 1.0;
        goto LABEL_29;
      }
    }
LABEL_40:
    sub_1C71608(Instance, v12);
  }
  Instance = this->fields.needTitleLb;
  this->fields.isItemNum = 0;
  if ( !Instance )
    goto LABEL_40;
  v19 = 0.855;
  v20 = 0.32;
  v39.fields.g = 0.0;
  v39.fields.a = 1.0;
  v39.fields.r = 0.855;
  v39.fields.b = 0.32;
  v21 = 0.0;
  v22 = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v39, 0);
  Instance = this->fields.needNumLb;
  if ( !Instance )
    goto LABEL_40;
LABEL_29:
  v41.fields.r = v19;
  v41.fields.g = v21;
  v41.fields.b = v20;
  v41.fields.a = v22;
  UIWidget__set_color((UIWidget_o *)Instance, v41, 0);
  Instance = this->fields.itemInfo;
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  this->fields.currentItemId = itemId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  v23 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.currentItemId,
          (const MethodInfo_3408E80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)v23;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.itemEnt, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  itemEnt = this->fields.itemEnt;
  if ( !itemEnt )
    goto LABEL_40;
  Instance = this->fields.itemDetailInfo;
  this->fields.itemImgId = itemEnt->fields.imageId;
  if ( !Instance )
    goto LABEL_40;
  Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_40;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  Instance = this->fields.itemDetailInfo;
  if ( !Instance )
    goto LABEL_40;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_40;
  v38.fields.x = -(float)((float)((float)idx * 135.0) + -135.0);
  v38.fields.y = y;
  v38.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v38, 0);
}