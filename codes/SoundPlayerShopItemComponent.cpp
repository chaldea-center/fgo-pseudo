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

  if ( (byte_4C3E71F & 1) == 0 )
  {
    sub_1C37058(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_SoundPlayerShopItemComponent_OnClickItem__);
    sub_1C37058(&Method_SoundPlayerShopItemComponent_closeItemDetail__);
    byte_4C3E71F = 1;
  }
  v3 = Method_SoundPlayerShopItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_SoundPlayerShopItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_SoundPlayerShopItemComponent_OnClickItem__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  itemDetailComp = this->fields.itemDetailComp;
  itemEnt = this->fields.itemEnt;
  v7 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C372A4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerShopItemComponent_closeItemDetail__,
    0);
  if ( !itemDetailComp )
    sub_1C372B4(v8);
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
  ItemDetailInfoComponent_o *itemDetailComp; // x0

  if ( (byte_4C3E720 & 1) == 0 )
  {
    sub_1C37058(&Method_SoundPlayerShopItemComponent_closeItemDetail__);
    byte_4C3E720 = 1;
  }
  v4 = Method_SoundPlayerShopItemComponent_closeItemDetail__;
  if ( (*((_BYTE *)Method_SoundPlayerShopItemComponent_closeItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C37070(Method_SoundPlayerShopItemComponent_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  itemDetailComp = this->fields.itemDetailComp;
  if ( !itemDetailComp )
    sub_1C372B4(0);
  ItemDetailInfoComponent__Close(itemDetailComp, 0);
}


void SoundPlayerShopItemComponent__enableDispItemInfo(SoundPlayerShopItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1C372B4(0);
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
  int32_t num; // w8
  int klass; // w8
  UILabel_o *haveNumLb; // x22
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x0
  UILabel_o *needNumLb; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  Il2CppObject *v29; // x0
  float v30; // s8
  float v31; // s9
  float v32; // s10
  float v33; // s11
  Il2CppObject *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct ItemEntity_o *itemEnt; // x8
  float y; // s8
  float z; // s9
  int32_t needItemNum; // [xsp+0h] [xbp-80h] BYREF
  int32_t haveItemNum; // [xsp+4h] [xbp-7Ch] BYREF
  Il2CppObject *v42; // [xsp+8h] [xbp-78h] BYREF
  UserItemEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3E71E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_25479/*"必要"*/);
    sub_1C37058(&StringLiteral_25480/*"所持"*/);
    sub_1C37058(&StringLiteral_25052/*"{0:#,0}"*/);
    byte_4C3E71E = 1;
  }
  entity = 0;
  v42 = 0;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &v42,
         itemId,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    Instance = UserGameMaster__getSelfUserGame(0);
    if ( !v42 )
      goto LABEL_40;
    klass = (int)v42[3].klass;
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
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_25479/*"必要"*/, 0);
  Instance = this->fields.haveTitleLb;
  if ( !Instance )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_25480/*"所持"*/, 0);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveItemNum, v15, v16, v17, v18, v19, v20);
  Instance = System_String__Format((System_String_o *)StringLiteral_25052/*"{0:#,0}"*/, v21, 0);
  if ( !haveNumLb )
    goto LABEL_40;
  UILabel__set_text(haveNumLb, (System_String_o *)Instance, 0);
  needNumLb = this->fields.needNumLb;
  needItemNum = this->fields.needItemNum;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &needItemNum, v23, v24, v25, v26, v27, v28);
  Instance = System_String__Format((System_String_o *)StringLiteral_25052/*"{0:#,0}"*/, v29, 0);
  if ( !needNumLb )
    goto LABEL_40;
  UILabel__set_text(needNumLb, (System_String_o *)Instance, 0);
  if ( this->fields.haveItemNum >= this->fields.needItemNum )
  {
    Instance = this->fields.needTitleLb;
    this->fields.isItemNum = 1;
    if ( Instance )
    {
      v47.fields.r = 1.0;
      v47.fields.g = 1.0;
      v47.fields.b = 1.0;
      v47.fields.a = 1.0;
      v30 = 1.0;
      UIWidget__set_color((UIWidget_o *)Instance, v47, 0);
      Instance = this->fields.needNumLb;
      if ( Instance )
      {
        v32 = 1.0;
        v31 = 1.0;
        v33 = 1.0;
        goto LABEL_29;
      }
    }
LABEL_40:
    sub_1C372B4(Instance);
  }
  Instance = this->fields.needTitleLb;
  this->fields.isItemNum = 0;
  if ( !Instance )
    goto LABEL_40;
  v30 = 0.855;
  v31 = 0.32;
  v46.fields.g = 0.0;
  v46.fields.a = 1.0;
  v46.fields.r = 0.855;
  v46.fields.b = 0.32;
  v32 = 0.0;
  v33 = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v46, 0);
  Instance = this->fields.needNumLb;
  if ( !Instance )
    goto LABEL_40;
LABEL_29:
  v48.fields.r = v30;
  v48.fields.g = v32;
  v48.fields.b = v31;
  v48.fields.a = v33;
  UIWidget__set_color((UIWidget_o *)Instance, v48, 0);
  Instance = this->fields.itemInfo;
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  this->fields.currentItemId = itemId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  v34 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.currentItemId,
          (const MethodInfo_33A10A0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)v34;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemEnt, (int32_t)v34, v35, v36);
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
  v45.fields.x = -(float)((float)((float)idx * 135.0) + -135.0);
  v45.fields.y = y;
  v45.fields.z = z;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v45, 0);
}