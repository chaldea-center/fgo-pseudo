void __fastcall SoundPlayerShopItemComponent___ctor(SoundPlayerShopItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SoundPlayerShopItemComponent__OnClickItem(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  ItemDetailInfoComponent_o *itemDetailComp; // x20
  ItemEntity_o *itemEnt; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  ItemDetailInfoComponent_CallbackFunc_o *v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_4B11CD9 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SoundPlayerShopItemComponent_OnClickItem__, v4, v5);
    sub_1BCA7E0(&Method_SoundPlayerShopItemComponent_closeItemDetail__, v6, v7);
    byte_4B11CD9 = 1;
  }
  v8 = Method_SoundPlayerShopItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_SoundPlayerShopItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_SoundPlayerShopItemComponent_OnClickItem__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  itemDetailComp = this->fields.itemDetailComp;
  itemEnt = this->fields.itemEnt;
  v15 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                    ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                    v12,
                                                    v13,
                                                    v14);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerShopItemComponent_closeItemDetail__,
    0LL);
  if ( !itemDetailComp )
    sub_1BCAA3C(v16, v17);
  ItemDetailInfoComponent__Open(itemDetailComp, itemEnt, v15, 50, 0LL);
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

  if ( (byte_4B11CDA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SoundPlayerShopItemComponent_closeItemDetail__, isDecide, method);
    byte_4B11CDA = 1;
  }
  v4 = Method_SoundPlayerShopItemComponent_closeItemDetail__;
  if ( (*((_BYTE *)Method_SoundPlayerShopItemComponent_closeItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_SoundPlayerShopItemComponent_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  itemDetailComp = this->fields.itemDetailComp;
  if ( !itemDetailComp )
    sub_1BCAA3C(0LL, v6);
  ItemDetailInfoComponent__Close(itemDetailComp, 0LL);
}


void __fastcall SoundPlayerShopItemComponent__enableDispItemInfo(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1BCAA3C(0LL, method);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 Instance; // x0
  __int64 v28; // x1
  int32_t num; // w8
  int klass; // w8
  UILabel_o *haveNumLb; // x22
  Il2CppObject *v32; // x0
  UILabel_o *needNumLb; // x22
  Il2CppObject *v34; // x0
  float v35; // s8
  float v36; // s9
  float v37; // s10
  float v38; // s11
  Il2CppObject *v39; // x0
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

  if ( (byte_4B11CD8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, usrId, *(_QWORD *)&itemId);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_25617/*"必要"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_25618/*"所持"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v25, v26);
    byte_4B11CD8 = 1;
  }
  entity = 0LL;
  v47 = 0LL;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &v47,
         itemId,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    Instance = (__int64)UserGameMaster__getSelfUserGame(0LL);
    if ( !v47 )
      goto LABEL_40;
    klass = (int)v47[3].klass;
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
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_25617/*"必要"*/, 0LL);
  Instance = (__int64)this->fields.haveTitleLb;
  if ( !Instance )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_25618/*"所持"*/, 0LL);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveItemNum);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v32, 0LL);
  if ( !haveNumLb )
    goto LABEL_40;
  UILabel__set_text(haveNumLb, (System_String_o *)Instance, 0LL);
  needNumLb = this->fields.needNumLb;
  needItemNum = this->fields.needItemNum;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &needItemNum);
  Instance = (__int64)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v34, 0LL);
  if ( !needNumLb )
    goto LABEL_40;
  UILabel__set_text(needNumLb, (System_String_o *)Instance, 0LL);
  if ( this->fields.haveItemNum >= this->fields.needItemNum )
  {
    Instance = (__int64)this->fields.needTitleLb;
    this->fields.isItemNum = 1;
    if ( Instance )
    {
      v51.fields.r = 1.0;
      v51.fields.g = 1.0;
      v51.fields.b = 1.0;
      v51.fields.a = 1.0;
      v35 = 1.0;
      UIWidget__set_color((UIWidget_o *)Instance, v51, 0LL);
      Instance = (__int64)this->fields.needNumLb;
      if ( Instance )
      {
        v37 = 1.0;
        v36 = 1.0;
        v38 = 1.0;
        goto LABEL_29;
      }
    }
LABEL_40:
    sub_1BCAA3C(Instance, v28);
  }
  Instance = (__int64)this->fields.needTitleLb;
  this->fields.isItemNum = 0;
  if ( !Instance )
    goto LABEL_40;
  v35 = 0.855;
  v36 = 0.32;
  v50.fields.g = 0.0;
  v50.fields.a = 1.0;
  v50.fields.r = 0.855;
  v50.fields.b = 0.32;
  v37 = 0.0;
  v38 = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v50, 0LL);
  Instance = (__int64)this->fields.needNumLb;
  if ( !Instance )
    goto LABEL_40;
LABEL_29:
  v52.fields.r = v35;
  v52.fields.g = v37;
  v52.fields.b = v36;
  v52.fields.a = v38;
  UIWidget__set_color((UIWidget_o *)Instance, v52, 0LL);
  Instance = (__int64)this->fields.itemInfo;
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.currentItemId = itemId;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  v39 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.currentItemId,
          (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)v39;
  Instance = sub_1BCA784(&this->fields.itemEnt, v39);
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
  *(UnityEngine_Vector3_o *)(&v41 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0LL);
  Instance = (__int64)this->fields.itemDetailInfo;
  if ( !Instance )
    goto LABEL_40;
  v43 = v41;
  v44 = v42;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
  v49.fields.x = -(float)((float)((float)idx * 135.0) + -135.0);
  v49.fields.y = v43;
  v49.fields.z = v44;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v49, 0LL);
}