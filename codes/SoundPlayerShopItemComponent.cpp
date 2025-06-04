void __fastcall SoundPlayerShopItemComponent___ctor(SoundPlayerShopItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SoundPlayerShopItemComponent__OnClickItem(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  ItemDetailInfoComponent_o *itemDetailComp; // x20
  ItemEntity_o *itemEnt; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4AFD850 & 1) == 0 )
  {
    sub_1BC3008(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_SoundPlayerShopItemComponent_OnClickItem__, v3);
    sub_1BC3008(&Method_SoundPlayerShopItemComponent_closeItemDetail__, v4);
    byte_4AFD850 = 1;
  }
  v5 = Method_SoundPlayerShopItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_SoundPlayerShopItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BC3020(Method_SoundPlayerShopItemComponent_OnClickItem__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  itemDetailComp = this->fields.itemDetailComp;
  itemEnt = this->fields.itemEnt;
  v9 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BC3254(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerShopItemComponent_closeItemDetail__,
    0LL);
  if ( !itemDetailComp )
    sub_1BC3264(v10, v11);
  ItemDetailInfoComponent__Open(itemDetailComp, itemEnt, v9, 50, 0LL);
}


bool __fastcall SoundPlayerShopItemComponent__checkItemNum(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isItemNum;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerShopItemComponent__closeItemDetail(
        SoundPlayerShopItemComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  ItemDetailInfoComponent_o *itemDetailComp; // x0

  if ( (byte_4AFD851 & 1) == 0 )
  {
    sub_1BC3008(&Method_SoundPlayerShopItemComponent_closeItemDetail__, isDecide);
    byte_4AFD851 = 1;
  }
  v4 = Method_SoundPlayerShopItemComponent_closeItemDetail__;
  if ( (*((_BYTE *)Method_SoundPlayerShopItemComponent_closeItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BC3020(Method_SoundPlayerShopItemComponent_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  itemDetailComp = this->fields.itemDetailComp;
  if ( !itemDetailComp )
    sub_1BC3264(0LL, v6);
  ItemDetailInfoComponent__Close(itemDetailComp, 0LL);
}


void __fastcall SoundPlayerShopItemComponent__enableDispItemInfo(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1BC3264(0LL, method);
  UnityEngine_GameObject__SetActive(itemInfo, 0, 0LL);
}


int32_t __fastcall SoundPlayerShopItemComponent__getItemId(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.currentItemId;
}


int32_t __fastcall SoundPlayerShopItemComponent__getItemImgId(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.itemImgId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SoundPlayerShopItemComponent__setItemInfo(
        SoundPlayerShopItemComponent_o *this,
        int64_t usrId,
        int32_t itemId,
        int32_t needNum,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  void *Instance; // x0
  __int64 v20; // x1
  int32_t num; // w8
  int klass; // w8
  UILabel_o *haveNumLb; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  UILabel_o *needNumLb; // x22
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  float v33; // s8
  float v34; // s9
  float v35; // s10
  float v36; // s11
  Il2CppObject *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct ItemEntity_o *itemEnt; // x8
  float v41; // s1
  float v42; // s2
  float v43; // s8
  float v44; // s9
  int32_t needItemNum; // [xsp+0h] [xbp-80h] BYREF
  int32_t haveItemNum; // [xsp+4h] [xbp-7Ch] BYREF
  Il2CppObject *v47; // [xsp+8h] [xbp-78h] BYREF
  UserItemEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4AFD84F & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ItemMaster___, usrId);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_1BC3008(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13);
    sub_1BC3008(&int_TypeInfo, v14);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BC3008(&StringLiteral_25232/*"必要"*/, v16);
    sub_1BC3008(&StringLiteral_25233/*"所持"*/, v17);
    sub_1BC3008(&StringLiteral_24811/*"{0:#,0}"*/, v18);
    byte_4AFD84F = 1;
  }
  entity = 0LL;
  v47 = 0LL;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  Instance = (void *)UserItemMaster__TryGetEntity((UserItemMaster_o *)Instance, &entity, usrId, itemId, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_40;
    num = entity->fields.num;
LABEL_8:
    this->fields.haveItemNum = num;
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &v47,
         itemId,
         (const MethodInfo_32AF0BC *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    Instance = UserGameMaster__getSelfUserGame(0LL);
    if ( !v47 )
      goto LABEL_40;
    klass = (int)v47[3].klass;
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
  ItemIconComponent__SetCombineItem((ItemIconComponent_o *)Instance, itemId, -1, 0LL);
  Instance = this->fields.needTitleLb;
  if ( !Instance )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_25232/*"必要"*/, 0LL);
  Instance = this->fields.haveTitleLb;
  if ( !Instance )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_25233/*"所持"*/, 0LL);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveItemNum, v24, v25, v26);
  Instance = System_String__Format((System_String_o *)StringLiteral_24811/*"{0:#,0}"*/, v27, 0LL);
  if ( !haveNumLb )
    goto LABEL_40;
  UILabel__set_text(haveNumLb, (System_String_o *)Instance, 0LL);
  needNumLb = this->fields.needNumLb;
  needItemNum = this->fields.needItemNum;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &needItemNum, v29, v30, v31);
  Instance = System_String__Format((System_String_o *)StringLiteral_24811/*"{0:#,0}"*/, v32, 0LL);
  if ( !needNumLb )
    goto LABEL_40;
  UILabel__set_text(needNumLb, (System_String_o *)Instance, 0LL);
  if ( this->fields.haveItemNum >= this->fields.needItemNum )
  {
    Instance = this->fields.needTitleLb;
    this->fields.isItemNum = 1;
    if ( Instance )
    {
      v51.fields.r = 1.0;
      v51.fields.g = 1.0;
      v51.fields.b = 1.0;
      v51.fields.a = 1.0;
      v33 = 1.0;
      UIWidget__set_color((UIWidget_o *)Instance, v51, 0LL);
      Instance = this->fields.needNumLb;
      if ( Instance )
      {
        v35 = 1.0;
        v34 = 1.0;
        v36 = 1.0;
        goto LABEL_29;
      }
    }
LABEL_40:
    sub_1BC3264(Instance, v20);
  }
  Instance = this->fields.needTitleLb;
  this->fields.isItemNum = 0;
  if ( !Instance )
    goto LABEL_40;
  v33 = 0.855;
  v34 = 0.32;
  v50.fields.g = 0.0;
  v50.fields.a = 1.0;
  v50.fields.r = 0.855;
  v50.fields.b = 0.32;
  v35 = 0.0;
  v36 = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v50, 0LL);
  Instance = this->fields.needNumLb;
  if ( !Instance )
    goto LABEL_40;
LABEL_29:
  v52.fields.r = v33;
  v52.fields.g = v35;
  v52.fields.b = v34;
  v52.fields.a = v36;
  UIWidget__set_color((UIWidget_o *)Instance, v52, 0LL);
  Instance = this->fields.itemInfo;
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.currentItemId = itemId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  v37 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.currentItemId,
          (const MethodInfo_32AF070 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)v37;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.itemEnt, (int32_t)v37, v38, v39);
  itemEnt = this->fields.itemEnt;
  if ( !itemEnt )
    goto LABEL_40;
  Instance = this->fields.itemDetailInfo;
  this->fields.itemImgId = itemEnt->fields.imageId;
  if ( !Instance )
    goto LABEL_40;
  Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)(&v41 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0LL);
  Instance = this->fields.itemDetailInfo;
  if ( !Instance )
    goto LABEL_40;
  v43 = v41;
  v44 = v42;
  Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
  v49.fields.x = -(float)((float)((float)idx * 135.0) + -135.0);
  v49.fields.y = v43;
  v49.fields.z = v44;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v49, 0LL);
}