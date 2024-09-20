void __fastcall SoundPlayerShopItemComponent___ctor(SoundPlayerShopItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SoundPlayerShopItemComponent__OnClickItem(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ItemDetailInfoComponent_o *itemDetailComp; // x20
  ItemEntity_o *itemEnt; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A56DFA & 1) == 0 )
  {
    sub_1B885B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SoundPlayerShopItemComponent_OnClickItem__);
    sub_1B885B0(&Method_SoundPlayerShopItemComponent_closeItemDetail__);
    byte_4A56DFA = 1;
  }
  v3 = Method_SoundPlayerShopItemComponent_OnClickItem__;
  if ( (*((_BYTE *)Method_SoundPlayerShopItemComponent_OnClickItem__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_SoundPlayerShopItemComponent_OnClickItem__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  itemDetailComp = this->fields.itemDetailComp;
  itemEnt = this->fields.itemEnt;
  v7 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    (intptr_t)Method_SoundPlayerShopItemComponent_closeItemDetail__,
    0LL);
  if ( !itemDetailComp )
    sub_1B8880C(v8, v9);
  ItemDetailInfoComponent__Open(itemDetailComp, itemEnt, v7, 50, 0LL);
}


bool __fastcall SoundPlayerShopItemComponent__checkItemNum(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isItemNum;
}


void __fastcall SoundPlayerShopItemComponent__closeItemDetail(
        SoundPlayerShopItemComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  ItemDetailInfoComponent_o *itemDetailComp; // x0

  if ( (byte_4A56DFB & 1) == 0 )
  {
    sub_1B885B0(&Method_SoundPlayerShopItemComponent_closeItemDetail__);
    byte_4A56DFB = 1;
  }
  v4 = Method_SoundPlayerShopItemComponent_closeItemDetail__;
  if ( (*((_BYTE *)Method_SoundPlayerShopItemComponent_closeItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_SoundPlayerShopItemComponent_closeItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  itemDetailComp = this->fields.itemDetailComp;
  if ( !itemDetailComp )
    sub_1B8880C(0LL, v6);
  ItemDetailInfoComponent__Close(itemDetailComp, 0LL);
}


void __fastcall SoundPlayerShopItemComponent__enableDispItemInfo(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_1B8880C(0LL, method);
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
  void *Instance; // x0
  __int64 v12; // x1
  int32_t num; // w8
  int klass; // w8
  UILabel_o *haveNumLb; // x22
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  UILabel_o *needNumLb; // x22
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  float v25; // s8
  float v26; // s9
  float v27; // s10
  float v28; // s11
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  struct ItemEntity_o *itemEnt; // x8
  float v33; // s1
  float v34; // s2
  float v35; // s8
  float v36; // s9
  int32_t needItemNum; // [xsp+0h] [xbp-80h] BYREF
  int32_t haveItemNum; // [xsp+4h] [xbp-7Ch] BYREF
  Il2CppObject *v39; // [xsp+8h] [xbp-78h] BYREF
  UserItemEntity_o *entity; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A56DF9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_25362/*"必要"*/);
    sub_1B885B0(&StringLiteral_25363/*"所持"*/);
    sub_1B885B0(&StringLiteral_24933/*"{0:#,0}"*/);
    byte_4A56DF9 = 1;
  }
  entity = 0LL;
  v39 = 0LL;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
         &v39,
         itemId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    Instance = UserGameMaster__getSelfUserGame(0LL);
    if ( !v39 )
      goto LABEL_40;
    klass = (int)v39[3].klass;
    if ( klass == 5 )
    {
      if ( !Instance )
        goto LABEL_40;
      num = *((_DWORD *)Instance + 46);
    }
    else
    {
      if ( klass != 22 )
        goto LABEL_17;
      if ( !Instance )
        goto LABEL_40;
      num = *((_DWORD *)Instance + 47);
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
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_25362/*"必要"*/, 0LL);
  Instance = this->fields.haveTitleLb;
  if ( !Instance )
    goto LABEL_40;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_25363/*"所持"*/, 0LL);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveItemNum, v16, v17, v18);
  Instance = System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v19, 0LL);
  if ( !haveNumLb )
    goto LABEL_40;
  UILabel__set_text(haveNumLb, (System_String_o *)Instance, 0LL);
  needNumLb = this->fields.needNumLb;
  needItemNum = this->fields.needItemNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &needItemNum, v21, v22, v23);
  Instance = System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v24, 0LL);
  if ( !needNumLb )
    goto LABEL_40;
  UILabel__set_text(needNumLb, (System_String_o *)Instance, 0LL);
  if ( this->fields.haveItemNum >= this->fields.needItemNum )
  {
    Instance = this->fields.needTitleLb;
    this->fields.isItemNum = 1;
    if ( Instance )
    {
      v43.fields.r = 1.0;
      v43.fields.g = 1.0;
      v43.fields.b = 1.0;
      v43.fields.a = 1.0;
      v25 = 1.0;
      UIWidget__set_color((UIWidget_o *)Instance, v43, 0LL);
      Instance = this->fields.needNumLb;
      if ( Instance )
      {
        v27 = 1.0;
        v26 = 1.0;
        v28 = 1.0;
        goto LABEL_29;
      }
    }
LABEL_40:
    sub_1B8880C(Instance, v12);
  }
  Instance = this->fields.needTitleLb;
  this->fields.isItemNum = 0;
  if ( !Instance )
    goto LABEL_40;
  v25 = 0.855;
  v26 = 0.32;
  v42.fields.g = 0.0;
  v42.fields.a = 1.0;
  v42.fields.r = 0.855;
  v42.fields.b = 0.32;
  v27 = 0.0;
  v28 = 1.0;
  UIWidget__set_color((UIWidget_o *)Instance, v42, 0LL);
  Instance = this->fields.needNumLb;
  if ( !Instance )
    goto LABEL_40;
LABEL_29:
  v44.fields.r = v25;
  v44.fields.g = v27;
  v44.fields.b = v26;
  v44.fields.a = v28;
  UIWidget__set_color((UIWidget_o *)Instance, v44, 0LL);
  Instance = this->fields.itemInfo;
  if ( !Instance )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.currentItemId = itemId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_40;
  v29 = DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          this->fields.currentItemId,
          (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)v29;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemEnt, (int32_t)v29, v30, v31);
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
  *(UnityEngine_Vector3_o *)(&v33 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0LL);
  Instance = this->fields.itemDetailInfo;
  if ( !Instance )
    goto LABEL_40;
  v35 = v33;
  v36 = v34;
  Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_40;
  v41.fields.x = -(float)((float)((float)idx * 135.0) + -135.0);
  v41.fields.y = v35;
  v41.fields.z = v36;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v41, 0LL);
}