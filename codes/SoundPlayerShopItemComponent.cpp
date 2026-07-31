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

  if ( (byte_5933C22 & 1) == 0 )
  {
    sub_21FFC50(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SoundPlayerShopItemComponent_OnClickItem__);
    sub_21FFC50(&Method_SoundPlayerShopItemComponent_closeItemDetail__);
    byte_5933C22 = 1;
  }
  v3 = Method_SoundPlayerShopItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_SoundPlayerShopItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SoundPlayerShopItemComponent_OnClickItem__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  itemDetailComp = this->fields.itemDetailComp;
  itemEnt = this->fields.itemEnt;
  v7 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_21FFEBC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerShopItemComponent_closeItemDetail__,
    0);
  if ( !itemDetailComp )
    sub_21FFECC(v8, v9);
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

  if ( (byte_5933C23 & 1) == 0 )
  {
    sub_21FFC50(&Method_SoundPlayerShopItemComponent_closeItemDetail__);
    byte_5933C23 = 1;
  }
  v4 = Method_SoundPlayerShopItemComponent_closeItemDetail__;
  if ( (*((_BYTE *)Method_SoundPlayerShopItemComponent_closeItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_21FFC68(Method_SoundPlayerShopItemComponent_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  itemDetailComp = this->fields.itemDetailComp;
  if ( !itemDetailComp )
    sub_21FFECC(0, v6);
  ItemDetailInfoComponent__Close(itemDetailComp, 0);
}


void SoundPlayerShopItemComponent__enableDispItemInfo(SoundPlayerShopItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_21FFECC(0, method);
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


// local variable allocation has failed, the output may be wrong!
void SoundPlayerShopItemComponent__setItemInfo(
        SoundPlayerShopItemComponent_o *this,
        int64_t usrId,
        int32_t itemId,
        int32_t needNum,
        int32_t idx,
        const MethodInfo *method)
{
  const MethodInfo_476E8C0 *v11; // x0
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  int32_t *p_num; // x8
  int klass; // w8
  UILabel_o *haveNumLb; // x22
  Il2CppObject *v17; // x0
  UILabel_o *needNumLb; // x22
  Il2CppObject *v19; // x0
  float v20; // s1
  float v21; // s0 OVERLAPPED
  float v22; // s2
  float v23; // s3
  const MethodInfo_476E8C0 *v24; // x0
  Il2CppObject *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct ItemEntity_o *itemEnt; // x8
  float y; // s8
  float z; // s9
  int32_t needItemNum; // [xsp+0h] [xbp-70h] BYREF
  int32_t haveItemNum; // [xsp+4h] [xbp-6Ch] BYREF
  Il2CppObject *v37; // [xsp+8h] [xbp-68h] BYREF
  UserItemEntity_o *entity; // [xsp+28h] [xbp-48h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5933C21 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_26827/*"必要"*/);
    sub_21FFC50(&StringLiteral_26828/*"所持"*/);
    sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    byte_5933C21 = 1;
  }
  v11 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  entity = 0;
  v37 = 0;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v11);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &v37,
         itemId,
         (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    Instance = (DataManager_o *)UserGameMaster__getSelfUserGame(0);
    if ( !v37 )
      goto LABEL_40;
    klass = (int)v37[3].klass;
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
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_26827/*"必要"*/, 0);
  Instance = (DataManager_o *)this->fields.haveTitleLb;
  if ( !Instance )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_26828/*"所持"*/, 0);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &haveItemNum);
  Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v17, 0);
  if ( !haveNumLb )
    goto LABEL_40;
  UILabel__set_text(haveNumLb, (System_String_o *)Instance, 0);
  needNumLb = this->fields.needNumLb;
  needItemNum = this->fields.needItemNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &needItemNum);
  Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v19, 0);
  if ( !needNumLb )
    goto LABEL_40;
  UILabel__set_text(needNumLb, (System_String_o *)Instance, 0);
  if ( this->fields.haveItemNum >= this->fields.needItemNum )
  {
    Instance = (DataManager_o *)this->fields.needTitleLb;
    this->fields.isItemNum = 1;
    if ( Instance )
    {
      v42.fields.r = 1.0;
      v42.fields.g = 1.0;
      v42.fields.b = 1.0;
      v42.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)Instance, v42, 0);
      Instance = (DataManager_o *)this->fields.needNumLb;
      if ( Instance )
      {
        v21 = 1.0;
        v20 = 1.0;
        v22 = 1.0;
        goto LABEL_29;
      }
    }
LABEL_40:
    sub_21FFECC(Instance, v13);
  }
  Instance = (DataManager_o *)this->fields.needTitleLb;
  this->fields.isItemNum = 0;
  if ( !Instance )
    goto LABEL_40;
  v41.fields.g = 0.0;
  v41.fields.a = 1.0;
  v41.fields.r = 0.855;
  v41.fields.b = 0.32;
  UIWidget__set_color((UIWidget_o *)Instance, v41, 0);
  Instance = (DataManager_o *)this->fields.needNumLb;
  if ( !Instance )
    goto LABEL_40;
  v20 = 0.0;
  v21 = 0.855;
  v22 = 0.32;
LABEL_29:
  v23 = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, *(UnityEngine_Color_o *)&v21, 0);
  Instance = (DataManager_o *)this->fields.itemInfo;
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  v24 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  this->fields.currentItemId = itemId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v24);
  if ( !Instance )
    goto LABEL_40;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  v25 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.currentItemId,
          (const MethodInfo_3EDD388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)v25;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.itemEnt, (int32_t)v25, v26, v27, v28, v29, v30, v31);
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
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_40;
  v40.fields.z = z;
  v40.fields.y = y;
  v40.fields.x = -(float)((float)((float)idx * 135.0) + -135.0);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v40, 0);
}