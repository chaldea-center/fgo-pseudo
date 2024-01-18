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
  ItemDetailInfoComponent_CallbackFunc_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4187723 & 1) == 0 )
  {
    sub_B2C35C(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    sub_B2C35C(&Method_SoundPlayerShopItemComponent_closeItemDetail__, v4);
    byte_4187723 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, method);
  itemDetailComp = this->fields.itemDetailComp;
  itemEnt = this->fields.itemEnt;
  v7 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B2C42C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_SoundPlayerShopItemComponent_closeItemDetail__,
    0LL);
  if ( !itemDetailComp )
    sub_B2C434(v8, v9);
  ItemDetailInfoComponent__Open(itemDetailComp, itemEnt, v7, 50, 0LL);
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
  __int64 v4; // x1
  ItemDetailInfoComponent_o *itemDetailComp; // x0

  if ( (byte_4187724 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, isDecide);
    byte_4187724 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, (const MethodInfo *)isDecide);
  itemDetailComp = this->fields.itemDetailComp;
  if ( !itemDetailComp )
    sub_B2C434(0LL, v4);
  ItemDetailInfoComponent__Close(itemDetailComp, 0LL);
}


void __fastcall SoundPlayerShopItemComponent__enableDispItemInfo(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_B2C434(0LL, method);
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
  int32_t v21; // w8
  int data; // w8
  UILabel_o *haveNumLb; // x22
  Il2CppObject *v24; // x0
  UILabel_o *needNumLb; // x22
  Il2CppObject *v26; // x0
  int v27; // s3
  float v28; // s4
  float v29; // s5
  float v30; // s6
  UIWidget_o *needTitleLb; // x22
  int v32; // s1
  int v33; // s0
  int v34; // s2
  UIWidget_o *v35; // x22
  float v36; // s4
  float v37; // s5
  float v38; // s6
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  UIWidget_o *v43; // x22
  int v44; // s0
  struct ItemEntity_o *Entity; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct ItemEntity_o *itemEnt; // x8
  float v56; // s1
  float v57; // s2
  float v58; // s8
  float v59; // s9
  MethodInfo methoda; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4187722 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, usrId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13);
    sub_B2C35C(&int_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&StringLiteral_23866/*"必要"*/, v16);
    sub_B2C35C(&StringLiteral_23867/*"所持"*/, v17);
    sub_B2C35C(&StringLiteral_23489/*"{0:#,0}"*/, v18);
    byte_4187722 = 1;
  }
  *(_QWORD *)&methoda.token = 0LL;
  methoda.return_type = 0LL;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    v21 = *(_DWORD *)(*(_QWORD *)&methoda.token + 28LL);
LABEL_8:
    this->fields.haveItemNum = v21;
    goto LABEL_17;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_39;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
         (WarEntity_o **)&methoda.return_type,
         itemId,
         (const MethodInfo_24E412C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    Instance = UserGameMaster__getSelfUserGame(0LL);
    if ( !methoda.return_type )
      goto LABEL_39;
    data = (int)methoda.return_type[3].data;
    if ( data == 5 )
    {
      if ( !Instance )
        goto LABEL_39;
      v21 = *((_DWORD *)Instance + 44);
    }
    else
    {
      if ( data != 22 )
        goto LABEL_17;
      if ( !Instance )
        goto LABEL_39;
      v21 = *((_DWORD *)Instance + 45);
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
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_23866/*"必要"*/, 0LL);
  Instance = this->fields.haveTitleLb;
  if ( !Instance )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_23867/*"所持"*/, 0LL);
  haveNumLb = this->fields.haveNumLb;
  LODWORD(methoda.name) = this->fields.haveItemNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.name);
  Instance = System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v24, 0LL);
  if ( !haveNumLb )
    goto LABEL_39;
  UILabel__set_text(haveNumLb, (System_String_o *)Instance, 0LL);
  needNumLb = this->fields.needNumLb;
  LODWORD(methoda.methodPointer) = this->fields.needItemNum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
  Instance = System_String__Format((System_String_o *)StringLiteral_23489/*"{0:#,0}"*/, v26, 0LL);
  if ( !needNumLb )
    goto LABEL_39;
  UILabel__set_text(needNumLb, (System_String_o *)Instance, 0LL);
  if ( this->fields.haveItemNum < this->fields.needItemNum )
  {
    needTitleLb = (UIWidget_o *)this->fields.needTitleLb;
    v32 = 0;
    v33 = 1062920520;
    v34 = 1050924810;
    this->fields.isItemNum = 0;
    methoda.name = 0LL;
    methoda.klass = 0LL;
    UnityEngine_Color___ctor_40633184(
      *(UnityEngine_Color_o *)(&v27 - 3),
      v28,
      v29,
      v30,
      (const MethodInfo *)&methoda.name);
    if ( needTitleLb )
    {
      UIWidget__set_color(needTitleLb, *(UnityEngine_Color_o *)&methoda.name, 0LL);
      v35 = (UIWidget_o *)this->fields.needNumLb;
      v62.fields.g = 0.0;
      v62.fields.r = 0.855;
      v62.fields.b = 0.32;
      methoda.methodPointer = 0LL;
      methoda.invoker_method = 0LL;
      UnityEngine_Color___ctor_40633184(v62, v36, v37, v38, &methoda);
      if ( v35 )
      {
        methodPointer_high = HIDWORD(methoda.methodPointer);
        methodPointer = (int)methoda.methodPointer;
        invoker_method_high = HIDWORD(methoda.invoker_method);
        invoker_method = (int)methoda.invoker_method;
        goto LABEL_28;
      }
    }
LABEL_39:
    sub_B2C434(Instance, v20);
  }
  v43 = (UIWidget_o *)this->fields.needTitleLb;
  this->fields.isItemNum = 1;
  *(UnityEngine_Color_o *)&v44 = UnityEngine_Color__get_white(0LL);
  if ( !v43 )
    goto LABEL_39;
  UIWidget__set_color(v43, *(UnityEngine_Color_o *)&v44, 0LL);
  v35 = (UIWidget_o *)this->fields.needNumLb;
  *(UnityEngine_Color_o *)&methodPointer = UnityEngine_Color__get_white(0LL);
  if ( !v35 )
    goto LABEL_39;
LABEL_28:
  UIWidget__set_color(v35, *(UnityEngine_Color_o *)&methodPointer, 0LL);
  Instance = this->fields.itemInfo;
  if ( !Instance )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  this->fields.currentItemId = itemId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_39;
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    this->fields.currentItemId,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = Entity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemEnt,
    (System_Int32_array **)Entity,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
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
  *(UnityEngine_Vector3_o *)(&v56 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)Instance,
                                           0LL);
  Instance = this->fields.itemDetailInfo;
  if ( !Instance )
    goto LABEL_39;
  v58 = v56;
  v59 = v57;
  Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_39;
  v61.fields.z = v59;
  v61.fields.x = -(float)((float)((float)idx * 135.0) + -135.0);
  v61.fields.y = v58;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Instance, v61, 0LL);
}