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
  ItemDetailInfoComponent_o *itemDetailComp; // x20
  ItemEntity_o *itemEnt; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  ItemDetailInfoComponent_CallbackFunc_o *v9; // x22
  __int64 v10; // x0

  if ( (byte_4214B5A & 1) == 0 )
  {
    sub_B0D8A4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SoundPlayerShopItemComponent_closeItemDetail__, v4);
    byte_4214B5A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, method);
  itemDetailComp = this->fields.itemDetailComp;
  itemEnt = this->fields.itemEnt;
  v9 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B0D974(ItemDetailInfoComponent_CallbackFunc_TypeInfo, v7, v8);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SoundPlayerShopItemComponent_closeItemDetail__,
    0LL);
  if ( !itemDetailComp )
    sub_B0D97C(v10);
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
  ItemDetailInfoComponent_o *itemDetailComp; // x0

  if ( (byte_4214B5B & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, isDecide);
    byte_4214B5B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, (const MethodInfo *)isDecide);
  itemDetailComp = this->fields.itemDetailComp;
  if ( !itemDetailComp )
    sub_B0D97C(0LL);
  ItemDetailInfoComponent__Close(itemDetailComp, 0LL);
}


void __fastcall SoundPlayerShopItemComponent__enableDispItemInfo(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_B0D97C(0LL);
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
  int32_t v20; // w8
  int data; // w8
  UILabel_o *haveNumLb; // x22
  Il2CppObject *v23; // x0
  UILabel_o *needNumLb; // x22
  Il2CppObject *v25; // x0
  int v26; // s3
  float v27; // s4
  float v28; // s5
  float v29; // s6
  UIWidget_o *needTitleLb; // x22
  int v31; // s1
  int v32; // s0
  int v33; // s2
  UIWidget_o *v34; // x22
  float v35; // s4
  float v36; // s5
  float v37; // s6
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  UIWidget_o *v42; // x22
  int v43; // s0
  struct ItemEntity_o *Entity; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct ItemEntity_o *itemEnt; // x8
  float v55; // s1
  float v56; // s2
  float v57; // s8
  float v58; // s9
  MethodInfo methoda; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4214B59 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, usrId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_B0D8A4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13);
    sub_B0D8A4(&int_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&StringLiteral_23947/*"必要"*/, v16);
    sub_B0D8A4(&StringLiteral_23948/*"所持"*/, v17);
    sub_B0D8A4(&StringLiteral_23567/*"{0:#,0}"*/, v18);
    byte_4214B59 = 1;
  }
  *(_QWORD *)&methoda.token = 0LL;
  methoda.return_type = 0LL;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !Instance )
    goto LABEL_39;
  Instance = (void *)UserItemMaster__TryGetEntity(
                       (UserItemMaster_o *)Instance,
                       (UserItemEntity_o **)&methoda.token,
                       usrId,
                       itemId,
                       0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !*(_QWORD *)&methoda.token )
      goto LABEL_39;
    v20 = *(_DWORD *)(*(_QWORD *)&methoda.token + 28LL);
LABEL_8:
    this->fields.haveItemNum = v20;
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         (WarEntity_o **)&methoda.return_type,
         itemId,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    Instance = UserGameMaster__getSelfUserGame(0LL);
    if ( !methoda.return_type )
      goto LABEL_39;
    data = (int)methoda.return_type[3].data;
    if ( data == 5 )
    {
      if ( !Instance )
        goto LABEL_39;
      v20 = *((_DWORD *)Instance + 44);
    }
    else
    {
      if ( data != 22 )
        goto LABEL_17;
      if ( !Instance )
        goto LABEL_39;
      v20 = *((_DWORD *)Instance + 45);
    }
    goto LABEL_8;
  }
LABEL_17:
  Instance = this->fields.itemIconComp;
  if ( !Instance )
    goto LABEL_39;
  ItemIconComponent__SetCombineItem((ItemIconComponent_o *)Instance, itemId, -1, 0LL);
  Instance = this->fields.needTitleLb;
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_23947/*"必要"*/, 0LL);
  Instance = this->fields.haveTitleLb;
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_23948/*"所持"*/, 0LL);
  haveNumLb = this->fields.haveNumLb;
  LODWORD(methoda.name) = this->fields.haveItemNum;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.name);
  Instance = System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v23, 0LL);
  if ( !haveNumLb )
    goto LABEL_39;
  UILabel__set_text(haveNumLb, (System_String_o *)Instance, 0LL);
  needNumLb = this->fields.needNumLb;
  LODWORD(methoda.methodPointer) = this->fields.needItemNum;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
  Instance = System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v25, 0LL);
  if ( !needNumLb )
    goto LABEL_39;
  UILabel__set_text(needNumLb, (System_String_o *)Instance, 0LL);
  if ( this->fields.haveItemNum < this->fields.needItemNum )
  {
    needTitleLb = (UIWidget_o *)this->fields.needTitleLb;
    v31 = 0;
    v32 = 1062920520;
    v33 = 1050924810;
    this->fields.isItemNum = 0;
    methoda.name = 0LL;
    methoda.klass = 0LL;
    UnityEngine_Color___ctor_40757524(
      *(UnityEngine_Color_o *)(&v26 - 3),
      v27,
      v28,
      v29,
      (const MethodInfo *)&methoda.name);
    if ( needTitleLb )
    {
      UIWidget__set_color(needTitleLb, *(UnityEngine_Color_o *)&methoda.name, 0LL);
      v34 = (UIWidget_o *)this->fields.needNumLb;
      v61.fields.g = 0.0;
      v61.fields.r = 0.855;
      v61.fields.b = 0.32;
      methoda.methodPointer = 0LL;
      methoda.invoker_method = 0LL;
      UnityEngine_Color___ctor_40757524(v61, v35, v36, v37, &methoda);
      if ( v34 )
      {
        methodPointer_high = HIDWORD(methoda.methodPointer);
        methodPointer = (int)methoda.methodPointer;
        invoker_method_high = HIDWORD(methoda.invoker_method);
        invoker_method = (int)methoda.invoker_method;
        goto LABEL_28;
      }
    }
LABEL_39:
    sub_B0D97C(Instance);
  }
  v42 = (UIWidget_o *)this->fields.needTitleLb;
  this->fields.isItemNum = 1;
  *(UnityEngine_Color_o *)&v43 = UnityEngine_Color__get_white(0LL);
  if ( !v42 )
    goto LABEL_39;
  UIWidget__set_color(v42, *(UnityEngine_Color_o *)&v43, 0LL);
  v34 = (UIWidget_o *)this->fields.needNumLb;
  *(UnityEngine_Color_o *)&methodPointer = UnityEngine_Color__get_white(0LL);
  if ( !v34 )
    goto LABEL_39;
LABEL_28:
  UIWidget__set_color(v34, *(UnityEngine_Color_o *)&methodPointer, 0LL);
  Instance = this->fields.itemInfo;
  if ( !Instance )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.currentItemId = itemId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.currentItemId,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = Entity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemEnt,
    (System_Int32_array **)Entity,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  itemEnt = this->fields.itemEnt;
  if ( !itemEnt )
    goto LABEL_39;
  Instance = this->fields.itemDetailInfo;
  this->fields.itemImgId = itemEnt->fields.imageId;
  if ( !Instance )
    goto LABEL_39;
  Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_39;
  *(UnityEngine_Vector3_o *)(&v55 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0LL);
  Instance = this->fields.itemDetailInfo;
  if ( !Instance )
    goto LABEL_39;
  v57 = v55;
  v58 = v56;
  Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_39;
  v60.fields.z = v58;
  v60.fields.x = -(float)((float)((float)idx * 135.0) + -135.0);
  v60.fields.y = v57;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v60, 0LL);
}