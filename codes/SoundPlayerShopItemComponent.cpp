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
  __int64 v9; // x1
  __int64 v10; // x2
  ItemDetailInfoComponent_CallbackFunc_o *v11; // x22
  __int64 v12; // x0

  if ( (byte_49F7FF1 & 1) == 0 )
  {
    sub_1B640C8(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_SoundPlayerShopItemComponent_OnClickItem__, v3);
    sub_1B640C8(&Method_SoundPlayerShopItemComponent_closeItemDetail__, v4);
    byte_49F7FF1 = 1;
  }
  v5 = Method_SoundPlayerShopItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_SoundPlayerShopItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_SoundPlayerShopItemComponent_OnClickItem__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  itemDetailComp = this->fields.itemDetailComp;
  itemEnt = this->fields.itemEnt;
  v11 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64314(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v9, v10);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerShopItemComponent_closeItemDetail__,
    0LL);
  if ( !itemDetailComp )
    sub_1B64324(v12);
  ItemDetailInfoComponent__Open(itemDetailComp, itemEnt, v11, 50, 0LL);
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
  ItemDetailInfoComponent_o *itemDetailComp; // x0

  if ( (byte_49F7FF2 & 1) == 0 )
  {
    sub_1B640C8(&Method_SoundPlayerShopItemComponent_closeItemDetail__, isDecide);
    byte_49F7FF2 = 1;
  }
  v4 = Method_SoundPlayerShopItemComponent_closeItemDetail__;
  if ( (*((_BYTE *)Method_SoundPlayerShopItemComponent_closeItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B640E0(Method_SoundPlayerShopItemComponent_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B640AC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  itemDetailComp = this->fields.itemDetailComp;
  if ( !itemDetailComp )
    sub_1B64324(0LL);
  ItemDetailInfoComponent__Close(itemDetailComp, 0LL);
}


void __fastcall SoundPlayerShopItemComponent__enableDispItemInfo(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1B64324(0LL);
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
  __int64 Instance; // x0
  int32_t num; // w8
  int klass; // w8
  UILabel_o *haveNumLb; // x22
  Il2CppObject *v23; // x0
  UILabel_o *needNumLb; // x22
  Il2CppObject *v25; // x0
  float v26; // s8
  float v27; // s9
  float v28; // s10
  float v29; // s11
  struct ItemEntity_o *itemEnt; // x8
  float v31; // s1
  float v32; // s2
  float v33; // s8
  float v34; // s9
  int32_t needItemNum; // [xsp+0h] [xbp-80h] BYREF
  int32_t haveItemNum; // [xsp+4h] [xbp-7Ch] BYREF
  Il2CppObject *v37; // [xsp+8h] [xbp-78h] BYREF
  UserItemEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F7FF0 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, usrId);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13);
    sub_1B640C8(&int_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&StringLiteral_25260/*"必要"*/, v16);
    sub_1B640C8(&StringLiteral_25261/*"所持"*/, v17);
    sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v18);
    byte_49F7FF0 = 1;
  }
  entity = 0LL;
  v37 = 0LL;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  Instance = UserItemMaster__TryGetEntity((UserItemMaster_o *)Instance, &entity, usrId, itemId, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_40;
    num = entity->fields.num;
LABEL_8:
    this->fields.haveItemNum = num;
    goto LABEL_17;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &v37,
         itemId,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( !v37 )
      goto LABEL_40;
    klass = (int)v37[3].klass;
    if ( klass == 5 )
    {
      if ( !Instance )
        goto LABEL_40;
      num = *(_DWORD *)(Instance + 184);
    }
    else
    {
      if ( klass != 22 )
        goto LABEL_17;
      if ( !Instance )
        goto LABEL_40;
      num = *(_DWORD *)(Instance + 188);
    }
    goto LABEL_8;
  }
LABEL_17:
  Instance = (__int64)this->fields.itemIconComp;
  if ( !Instance )
    goto LABEL_40;
  ItemIconComponent__SetCombineItem((ItemIconComponent_o *)Instance, itemId, -1, 0LL);
  Instance = (__int64)this->fields.needTitleLb;
  if ( !Instance )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_25260/*"必要"*/, 0LL);
  Instance = (__int64)this->fields.haveTitleLb;
  if ( !Instance )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_25261/*"所持"*/, 0LL);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveItemNum);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v23, 0LL);
  if ( !haveNumLb )
    goto LABEL_40;
  UILabel__set_text(haveNumLb, (System_String_o *)Instance, 0LL);
  needNumLb = this->fields.needNumLb;
  needItemNum = this->fields.needItemNum;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &needItemNum);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v25, 0LL);
  if ( !needNumLb )
    goto LABEL_40;
  UILabel__set_text(needNumLb, (System_String_o *)Instance, 0LL);
  if ( this->fields.haveItemNum >= this->fields.needItemNum )
  {
    Instance = (__int64)this->fields.needTitleLb;
    this->fields.isItemNum = 1;
    if ( Instance )
    {
      v41.fields.r = 1.0;
      v41.fields.g = 1.0;
      v41.fields.b = 1.0;
      v41.fields.a = 1.0;
      v26 = 1.0;
      UIWidget__set_color((UIWidget_o *)Instance, v41, 0LL);
      Instance = (__int64)this->fields.needNumLb;
      if ( Instance )
      {
        v28 = 1.0;
        v27 = 1.0;
        v29 = 1.0;
        goto LABEL_29;
      }
    }
LABEL_40:
    sub_1B64324(Instance);
  }
  Instance = (__int64)this->fields.needTitleLb;
  this->fields.isItemNum = 0;
  if ( !Instance )
    goto LABEL_40;
  v26 = 0.855;
  v27 = 0.32;
  v40.fields.g = 0.0;
  v40.fields.a = 1.0;
  v40.fields.r = 0.855;
  v40.fields.b = 0.32;
  v28 = 0.0;
  v29 = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v40, 0LL);
  Instance = (__int64)this->fields.needNumLb;
  if ( !Instance )
    goto LABEL_40;
LABEL_29:
  v42.fields.r = v26;
  v42.fields.g = v28;
  v42.fields.b = v27;
  v42.fields.a = v29;
  UIWidget__set_color((UIWidget_o *)Instance, v42, 0LL);
  Instance = (__int64)this->fields.itemInfo;
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.currentItemId = itemId;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  this->fields.itemEnt = (struct ItemEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                                  this->fields.currentItemId,
                                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  Instance = sub_1B6406C(&this->fields.itemEnt);
  itemEnt = this->fields.itemEnt;
  if ( !itemEnt )
    goto LABEL_40;
  Instance = (__int64)this->fields.itemDetailInfo;
  this->fields.itemImgId = itemEnt->fields.imageId;
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
  *(UnityEngine_Vector3_o *)(&v31 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0LL);
  Instance = (__int64)this->fields.itemDetailInfo;
  if ( !Instance )
    goto LABEL_40;
  v33 = v31;
  v34 = v32;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
  v39.fields.x = -(float)((float)((float)idx * 135.0) + -135.0);
  v39.fields.y = v33;
  v39.fields.z = v34;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v39, 0LL);
}