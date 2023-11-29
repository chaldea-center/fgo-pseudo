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
  __int64 v9; // x3
  __int64 v10; // x4
  ItemDetailInfoComponent_CallbackFunc_o *v11; // x22

  if ( (byte_40F9D54 & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    sub_B16FFC(&Method_SoundPlayerShopItemComponent_closeItemDetail__, v4);
    byte_40F9D54 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, method);
  itemDetailComp = this->fields.itemDetailComp;
  itemEnt = this->fields.itemEnt;
  v11 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                    ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                    v7,
                                                    v8,
                                                    v9,
                                                    v10);
  ItemDetailInfoComponent_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_SoundPlayerShopItemComponent_closeItemDetail__,
    0LL);
  if ( !itemDetailComp )
    sub_B170D4();
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
  ItemDetailInfoComponent_o *itemDetailComp; // x0

  if ( (byte_40F9D55 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, isDecide);
    byte_40F9D55 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, (const MethodInfo *)isDecide);
  itemDetailComp = this->fields.itemDetailComp;
  if ( !itemDetailComp )
    sub_B170D4();
  ItemDetailInfoComponent__Close(itemDetailComp, 0LL);
}


void __fastcall SoundPlayerShopItemComponent__enableDispItemInfo(
        SoundPlayerShopItemComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t mana; // w8
  WebViewManager_o *v22; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int data; // w8
  ItemIconComponent_o *itemIconComp; // x0
  UILabel_o *needTitleLb; // x0
  UILabel_o *haveTitleLb; // x0
  UILabel_o *haveNumLb; // x22
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  UILabel_o *needNumLb; // x22
  Il2CppObject *v33; // x0
  System_String_o *v34; // x0
  int v35; // s3
  float v36; // s4
  float v37; // s5
  float v38; // s6
  UIWidget_o *v39; // x22
  int v40; // s1
  int v41; // s0
  int v42; // s2
  UIWidget_o *v43; // x22
  float v44; // s4
  float v45; // s5
  float v46; // s6
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  UIWidget_o *v51; // x22
  int v52; // s0
  UnityEngine_GameObject_o *itemInfo; // x0
  WebViewManager_o *v57; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v58; // x0
  struct ItemEntity_o *Entity; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct ItemEntity_o *itemEnt; // x8
  UnityEngine_GameObject_o *itemDetailInfo; // x0
  UnityEngine_Transform_o *transform; // x0
  float v69; // s1
  float v70; // s2
  UnityEngine_GameObject_o *v71; // x0
  float v72; // s8
  float v73; // s9
  UnityEngine_Transform_o *v74; // x0
  MethodInfo methoda; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F9D53 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, usrId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v13);
    sub_B16FFC(&int_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&StringLiteral_23767, v16);
    sub_B16FFC(&StringLiteral_23768, v17);
    sub_B16FFC(&StringLiteral_23395, v18);
    byte_40F9D53 = 1;
  }
  *(_QWORD *)&methoda.token = 0LL;
  methoda.return_type = 0LL;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_39;
  if ( UserItemMaster__TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         (UserItemEntity_o **)&methoda.token,
         usrId,
         itemId,
         0LL) )
  {
    if ( !*(_QWORD *)&methoda.token )
      goto LABEL_39;
    mana = *(_DWORD *)(*(_QWORD *)&methoda.token + 28LL);
LABEL_8:
    this->fields.haveItemNum = mana;
    goto LABEL_17;
  }
  v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v22 )
    goto LABEL_39;
  v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v22,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !v23 )
    goto LABEL_39;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v23,
         (WarEntity_o **)&methoda.return_type,
         itemId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !methoda.return_type )
      goto LABEL_39;
    data = (int)methoda.return_type[3].data;
    if ( data == 5 )
    {
      if ( !SelfUserGame )
        goto LABEL_39;
      mana = SelfUserGame->fields.mana;
    }
    else
    {
      if ( data != 22 )
        goto LABEL_17;
      if ( !SelfUserGame )
        goto LABEL_39;
      mana = SelfUserGame->fields.rarePri;
    }
    goto LABEL_8;
  }
LABEL_17:
  itemIconComp = this->fields.itemIconComp;
  if ( !itemIconComp )
    goto LABEL_39;
  ItemIconComponent__SetCombineItem(itemIconComp, itemId, -1, 0LL);
  needTitleLb = this->fields.needTitleLb;
  if ( !needTitleLb )
    goto LABEL_39;
  UILabel__set_text(needTitleLb, (System_String_o *)StringLiteral_23767, 0LL);
  haveTitleLb = this->fields.haveTitleLb;
  if ( !haveTitleLb )
    goto LABEL_39;
  UILabel__set_text(haveTitleLb, (System_String_o *)StringLiteral_23768, 0LL);
  haveNumLb = this->fields.haveNumLb;
  LODWORD(methoda.name) = this->fields.haveItemNum;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.name);
  v31 = System_String__Format((System_String_o *)StringLiteral_23395, v30, 0LL);
  if ( !haveNumLb )
    goto LABEL_39;
  UILabel__set_text(haveNumLb, v31, 0LL);
  needNumLb = this->fields.needNumLb;
  LODWORD(methoda.methodPointer) = this->fields.needItemNum;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
  v34 = System_String__Format((System_String_o *)StringLiteral_23395, v33, 0LL);
  if ( !needNumLb )
    goto LABEL_39;
  UILabel__set_text(needNumLb, v34, 0LL);
  if ( this->fields.haveItemNum < this->fields.needItemNum )
  {
    v39 = (UIWidget_o *)this->fields.needTitleLb;
    v40 = 0;
    v41 = 1062920520;
    v42 = 1050924810;
    this->fields.isItemNum = 0;
    methoda.name = 0LL;
    methoda.klass = 0LL;
    UnityEngine_Color___ctor_40666012(
      *(UnityEngine_Color_o *)(&v35 - 3),
      v36,
      v37,
      v38,
      (const MethodInfo *)&methoda.name);
    if ( v39 )
    {
      UIWidget__set_color(v39, *(UnityEngine_Color_o *)&methoda.name, 0LL);
      v43 = (UIWidget_o *)this->fields.needNumLb;
      v77.fields.g = 0.0;
      v77.fields.r = 0.855;
      v77.fields.b = 0.32;
      methoda.methodPointer = 0LL;
      methoda.invoker_method = 0LL;
      UnityEngine_Color___ctor_40666012(v77, v44, v45, v46, &methoda);
      if ( v43 )
      {
        methodPointer_high = HIDWORD(methoda.methodPointer);
        methodPointer = (int)methoda.methodPointer;
        invoker_method_high = HIDWORD(methoda.invoker_method);
        invoker_method = (int)methoda.invoker_method;
        goto LABEL_28;
      }
    }
LABEL_39:
    sub_B170D4();
  }
  v51 = (UIWidget_o *)this->fields.needTitleLb;
  this->fields.isItemNum = 1;
  *(UnityEngine_Color_o *)&v52 = UnityEngine_Color__get_white(0LL);
  if ( !v51 )
    goto LABEL_39;
  UIWidget__set_color(v51, *(UnityEngine_Color_o *)&v52, 0LL);
  v43 = (UIWidget_o *)this->fields.needNumLb;
  *(UnityEngine_Color_o *)&methodPointer = UnityEngine_Color__get_white(0LL);
  if ( !v43 )
    goto LABEL_39;
LABEL_28:
  UIWidget__set_color(v43, *(UnityEngine_Color_o *)&methodPointer, 0LL);
  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive(itemInfo, 1, 0LL);
  this->fields.currentItemId = itemId;
  v57 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v57 )
    goto LABEL_39;
  v58 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v57,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !v58 )
    goto LABEL_39;
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v58,
                                    this->fields.currentItemId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemEnt,
    (System_Int32_array **)Entity,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  itemEnt = this->fields.itemEnt;
  if ( !itemEnt )
    goto LABEL_39;
  itemDetailInfo = this->fields.itemDetailInfo;
  this->fields.itemImgId = itemEnt->fields.imageId;
  if ( !itemDetailInfo )
    goto LABEL_39;
  transform = UnityEngine_GameObject__get_transform(itemDetailInfo, 0LL);
  if ( !transform )
    goto LABEL_39;
  *(UnityEngine_Vector3_o *)(&v69 - 1) = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v71 = this->fields.itemDetailInfo;
  if ( !v71 )
    goto LABEL_39;
  v72 = v69;
  v73 = v70;
  v74 = UnityEngine_GameObject__get_transform(v71, 0LL);
  if ( !v74 )
    goto LABEL_39;
  v76.fields.z = v73;
  v76.fields.x = -(float)((float)((float)idx * 135.0) + -135.0);
  v76.fields.y = v72;
  UnityEngine_Transform__set_localPosition(v74, v76, 0LL);
}