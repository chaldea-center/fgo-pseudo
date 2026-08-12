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

  if ( (byte_596BD3B & 1) == 0 )
  {
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_SoundPlayerShopItemComponent_OnClickItem__);
    sub_2213A60(&Method_SoundPlayerShopItemComponent_closeItemDetail__);
    byte_596BD3B = 1;
  }
  v3 = Method_SoundPlayerShopItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_SoundPlayerShopItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_SoundPlayerShopItemComponent_OnClickItem__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  itemDetailComp = this->fields.itemDetailComp;
  itemEnt = this->fields.itemEnt;
  v7 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerShopItemComponent_closeItemDetail__,
    0);
  if ( !itemDetailComp )
    sub_2213CDC(v8, v9);
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

  if ( (byte_596BD3C & 1) == 0 )
  {
    sub_2213A60(&Method_SoundPlayerShopItemComponent_closeItemDetail__);
    byte_596BD3C = 1;
  }
  v4 = Method_SoundPlayerShopItemComponent_closeItemDetail__;
  if ( (*((_BYTE *)Method_SoundPlayerShopItemComponent_closeItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_SoundPlayerShopItemComponent_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  itemDetailComp = this->fields.itemDetailComp;
  if ( !itemDetailComp )
    sub_2213CDC(0, v6);
  ItemDetailInfoComponent__Close(itemDetailComp, 0);
}


void SoundPlayerShopItemComponent__enableDispItemInfo(SoundPlayerShopItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_2213CDC(0, method);
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
  const MethodInfo_47A29F8 *v11; // x0
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  int32_t *p_num; // x8
  int klass; // w8
  UILabel_o *haveNumLb; // x22
  Il2CppObject *v17; // x0
  UILabel_o *needNumLb; // x22
  Il2CppObject *v19; // x0
  const MethodInfo_47A29F8 *v22; // x0
  Il2CppObject *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct ItemEntity_o *itemEnt; // x8
  int32_t needItemNum; // [xsp+0h] [xbp-70h] BYREF
  int32_t haveItemNum; // [xsp+4h] [xbp-6Ch] BYREF
  Il2CppObject *v33; // [xsp+8h] [xbp-68h] BYREF
  UserItemEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596BD3A & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_26879/*"必要"*/);
    sub_2213A60(&StringLiteral_26880/*"所持"*/);
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    byte_596BD3A = 1;
  }
  v11 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  entity = 0;
  v33 = 0;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v11);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UserItemMaster__TryGetEntity((UserItemMaster_o *)Instance, &entity, usrId, itemId, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_40;
    p_num = &entity->fields.num;
LABEL_8:
    this->fields.haveItemNum = *p_num;
    goto LABEL_17;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &v33,
         itemId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
    if ( !v33 )
      goto LABEL_40;
    klass = (int)v33[3].klass;
    if ( klass == 5 )
    {
      if ( !Instance )
        goto LABEL_40;
      p_num = (int32_t *)&Instance[1].fields.datalist;
    }
    else
    {
      if ( klass != 22 )
        goto LABEL_17;
      if ( !Instance )
        goto LABEL_40;
      p_num = (int32_t *)&Instance[1].fields.datalist + 1;
    }
    goto LABEL_8;
  }
LABEL_17:
  Instance = (DataManager_o *)this->fields.itemIconComp;
  if ( !Instance )
    goto LABEL_40;
  ItemIconComponent__SetCombineItem((ItemIconComponent_o *)Instance, itemId, -1, 0);
  Instance = (DataManager_o *)this->fields.needTitleLb;
  if ( !Instance )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_26879/*"必要"*/, 0);
  Instance = (DataManager_o *)this->fields.haveTitleLb;
  if ( !Instance )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_26880/*"所持"*/, 0);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &haveItemNum);
  Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v17, 0);
  if ( !haveNumLb )
    goto LABEL_40;
  UILabel__set_text(haveNumLb, (System_String_o *)Instance, 0);
  needNumLb = this->fields.needNumLb;
  needItemNum = this->fields.needItemNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &needItemNum);
  Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v19, 0);
  if ( !needNumLb )
    goto LABEL_40;
  UILabel__set_text(needNumLb, (System_String_o *)Instance, 0);
  if ( this->fields.haveItemNum >= this->fields.needItemNum )
  {
    Instance = (DataManager_o *)this->fields.needTitleLb;
    this->fields.isItemNum = 1;
    if ( Instance )
    {
      v39.fields.r = 1.0;
      v39.fields.g = 1.0;
      v39.fields.b = 1.0;
      v39.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)Instance, v39, 0);
      Instance = (DataManager_o *)this->fields.needNumLb;
      if ( Instance )
      {
        v38.fields.r = 1.0;
        v38.fields.g = 1.0;
        v38.fields.b = 1.0;
        goto LABEL_29;
      }
    }
LABEL_40:
    sub_2213CDC(Instance, v13);
  }
  Instance = (DataManager_o *)this->fields.needTitleLb;
  this->fields.isItemNum = 0;
  if ( !Instance )
    goto LABEL_40;
  v37.fields.g = 0.0;
  v37.fields.a = 1.0;
  v37.fields.r = 0.855;
  v37.fields.b = 0.32;
  UIWidget__set_color((UIWidget_o *)Instance, v37, 0);
  Instance = (DataManager_o *)this->fields.needNumLb;
  if ( !Instance )
    goto LABEL_40;
  v38.fields.g = 0.0;
  v38.fields.r = 0.855;
  v38.fields.b = 0.32;
LABEL_29:
  v38.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v38, 0);
  Instance = (DataManager_o *)this->fields.itemInfo;
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v22 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.currentItemId = itemId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v22);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  v23 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.currentItemId,
          (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)v23;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemEnt, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  itemEnt = this->fields.itemEnt;
  if ( !itemEnt )
    goto LABEL_40;
  Instance = (DataManager_o *)this->fields.itemDetailInfo;
  this->fields.itemImgId = itemEnt->fields.imageId;
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_40;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.itemDetailInfo;
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_40;
  v36.fields.z = localPosition.fields.z;
  v36.fields.y = localPosition.fields.y;
  v36.fields.x = -(float)((float)((float)idx * 135.0) + -135.0);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v36, 0);
}