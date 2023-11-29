void __fastcall LimitCntUpItemComponent___ctor(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpItemComponent__CloseItemDetail(
        LimitCntUpItemComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40FC247 & 1) == 0 )
  {
    sub_B16FFC(&Method_LimitCntUpItemComponent_CloseItemDetail__, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_40FC247 = 1;
  }
  v4 = Method_LimitCntUpItemComponent_CloseItemDetail__;
  if ( (*((_BYTE *)Method_LimitCntUpItemComponent_CloseItemDetail__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B17004(Method_LimitCntUpItemComponent_CloseItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_B16FE0(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


void __fastcall LimitCntUpItemComponent__DisableOpenItemDetailDialog(
        LimitCntUpItemComponent_o *this,
        bool enable,
        const MethodInfo *method)
{
  this->fields.disableOpenItemDetailDialog = enable;
}


ItemEntity_o *__fastcall LimitCntUpItemComponent__GetItemEntity(
        LimitCntUpItemComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.itemEnt;
}


void __fastcall LimitCntUpItemComponent__OnClickItem(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *maskSprite; // x20
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  WebViewManager_o *Instance; // x0
  ItemEntity_o *itemEnt; // x20
  CommonUI_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  ItemDetailInfoComponent_CallbackFunc_o *v17; // x22

  if ( (byte_40FC246 & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_LimitCntUpItemComponent_CloseItemDetail__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    byte_40FC246 = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v8 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !v8 )
      goto LABEL_17;
    gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
      return;
  }
  if ( !this->fields.disableOpenItemDetailDialog )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    itemEnt = this->fields.itemEnt;
    v12 = (CommonUI_o *)Instance;
    v17 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v13,
                                                      v14,
                                                      v15,
                                                      v16);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v17,
      (Il2CppObject *)this,
      (intptr_t)Method_LimitCntUpItemComponent_CloseItemDetail__,
      0LL);
    if ( v12 )
    {
      CommonUI__OpenItemDetailDialog(v12, itemEnt, v17, 51, 0LL);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpItemComponent__SetItemEntity(
        LimitCntUpItemComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct ItemEntity_o *Entity; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FC245 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&id);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6);
    byte_40FC245 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    Master_WarQuestSelectionMaster,
                                    id,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemEnt,
    (System_Int32_array **)Entity,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpItemComponent__SetItemIcon(
        LimitCntUpItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_GameObject_o *itemInfo; // x0
  UnityEngine_GameObject_o *statusInfo; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct ItemEntity_o *Entity; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  ItemEntity_o *itemEnt; // x0
  int32_t ImageId; // w0
  const MethodInfo *v21; // x3
  ItemIconComponent_o *itemIconComp; // x8

  if ( (byte_40FC244 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&itemId);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FC244 = 1;
  }
  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(itemInfo, 1, 0LL);
  statusInfo = this->fields.statusInfo;
  if ( !statusInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(statusInfo, 0, 0LL);
  this->fields.currentItemId = itemId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !MasterData_WarQuestSelectionMaster
    || (Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          this->fields.currentItemId,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        this->fields.itemEnt = Entity,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.itemEnt,
          (System_Int32_array **)Entity,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (itemEnt = this->fields.itemEnt) == 0LL)
    || (ImageId = ItemEntity__GetImageId(itemEnt, v18),
        itemIconComp = this->fields.itemIconComp,
        this->fields.itemImgId = ImageId,
        !itemIconComp) )
  {
LABEL_10:
    sub_B170D4();
  }
  ItemIconComponent__SetCombineItem(itemIconComp, itemId, -1, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpItemComponent__SetMaskSprite(
        LimitCntUpItemComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *maskSprite; // x21
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FC248 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isActive);
    byte_40FC248 = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(maskSprite, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !v6 || (gameObject = UnityEngine_Component__get_gameObject(v6, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
  }
}


bool __fastcall LimitCntUpItemComponent__checkItemNum(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  return this->fields.isItemNum;
}


void __fastcall LimitCntUpItemComponent__enableDispItemInfo(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0

  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(itemInfo, 0, 0LL);
}


int32_t __fastcall LimitCntUpItemComponent__getItemId(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  return this->fields.currentItemId;
}


int32_t __fastcall LimitCntUpItemComponent__getItemImgId(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  return this->fields.itemImgId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpItemComponent__setLimitUpItemInfo(
        LimitCntUpItemComponent_o *this,
        int64_t usrId,
        int32_t itemId,
        int32_t needNum,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct ItemEntity_o *Entity; // x0
  struct ItemEntity_o **p_itemEnt; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  ItemEntity_o *itemEnt; // x0
  int32_t ImageId; // w0
  struct ItemEntity_o *v30; // x8
  UserSvtCoinMaster_o *v31; // x0
  const MethodInfo *v32; // x3
  const Il2CppType *return_type; // x8
  UserItemMaster_o *v34; // x0
  ItemIconComponent_o *itemIconComp; // x0
  UILabel_o *needTitleLb; // x20
  System_String_o *v37; // x0
  UILabel_o *haveTitleLb; // x20
  System_String_o *v39; // x0
  UILabel_o *haveNumLb; // x20
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  UILabel_o *needNumLb; // x20
  Il2CppObject *v44; // x0
  System_String_o *v45; // x0
  int v46; // s3
  float v47; // s4
  float v48; // s5
  float v49; // s6
  UIWidget_o *v50; // x20
  int v51; // s1
  int v52; // s0
  int v53; // s2
  UIWidget_o *v54; // x20
  float v55; // s4
  float v56; // s5
  float v57; // s6
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  UIWidget_o *v62; // x20
  int v63; // s0
  UnityEngine_GameObject_o *itemInfo; // x0
  UnityEngine_GameObject_o *statusInfo; // x0
  MethodInfo methoda; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC243 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, usrId);
    sub_B16FFC(&Method_DataManager_GetMaster_UserItemMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v12);
    sub_B16FFC(&int_TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_23395, v15);
    sub_B16FFC(&StringLiteral_3174, v16);
    sub_B16FFC(&StringLiteral_3175, v17);
    byte_40FC243 = 1;
  }
  *(_QWORD *)&methoda.token = 0LL;
  methoda.return_type = 0LL;
  this->fields.currentItemId = itemId;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    Master_WarQuestSelectionMaster,
                                    this->fields.currentItemId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  p_itemEnt = &this->fields.itemEnt;
  this->fields.itemEnt = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemEnt,
    (System_Int32_array **)Entity,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  itemEnt = this->fields.itemEnt;
  if ( !itemEnt )
    goto LABEL_42;
  ImageId = ItemEntity__GetImageId(itemEnt, v27);
  v30 = this->fields.itemEnt;
  this->fields.itemImgId = ImageId;
  if ( !v30 )
    goto LABEL_42;
  if ( v30->fields.type == 29 )
  {
    methoda.return_type = 0LL;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v31 = (UserSvtCoinMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
    if ( !*p_itemEnt || !v31 )
      goto LABEL_42;
    UserSvtCoinMaster__TryGetEntity(
      v31,
      (UserSvtCoinEntity_o **)&methoda.return_type,
      usrId,
      (*p_itemEnt)->fields.value,
      0LL);
    return_type = methoda.return_type;
    if ( !methoda.return_type )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v34 = (UserItemMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !v34 )
    goto LABEL_42;
  if ( UserItemMaster__TryGetEntity(v34, (UserItemEntity_o **)&methoda.token, usrId, itemId, 0LL) )
  {
    return_type = *(const Il2CppType **)&methoda.token;
    if ( !*(_QWORD *)&methoda.token )
      goto LABEL_42;
LABEL_23:
    LODWORD(return_type) = *(&return_type[1].bits + 1);
LABEL_24:
    this->fields.haveItemNum = (int)return_type;
  }
  itemIconComp = this->fields.itemIconComp;
  if ( !itemIconComp )
    goto LABEL_42;
  ItemIconComponent__SetCombineItem(itemIconComp, itemId, -1, v32);
  needTitleLb = this->fields.needTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3175, 0LL);
  if ( !needTitleLb )
    goto LABEL_42;
  UILabel__set_text(needTitleLb, v37, 0LL);
  haveTitleLb = this->fields.haveTitleLb;
  v39 = LocalizationManager__Get((System_String_o *)StringLiteral_3174, 0LL);
  if ( !haveTitleLb )
    goto LABEL_42;
  UILabel__set_text(haveTitleLb, v39, 0LL);
  haveNumLb = this->fields.haveNumLb;
  LODWORD(methoda.name) = this->fields.haveItemNum;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.name);
  v42 = System_String__Format((System_String_o *)StringLiteral_23395, v41, 0LL);
  if ( !haveNumLb )
    goto LABEL_42;
  UILabel__set_text(haveNumLb, v42, 0LL);
  needNumLb = this->fields.needNumLb;
  LODWORD(methoda.methodPointer) = this->fields.needItemNum;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
  v45 = System_String__Format((System_String_o *)StringLiteral_23395, v44, 0LL);
  if ( !needNumLb )
    goto LABEL_42;
  UILabel__set_text(needNumLb, v45, 0LL);
  if ( this->fields.haveItemNum < this->fields.needItemNum )
  {
    v50 = (UIWidget_o *)this->fields.needTitleLb;
    v51 = 0;
    v52 = 1062920520;
    v53 = 1050924810;
    this->fields.isItemNum = 0;
    methoda.name = 0LL;
    methoda.klass = 0LL;
    UnityEngine_Color___ctor_40666012(
      *(UnityEngine_Color_o *)(&v46 - 3),
      v47,
      v48,
      v49,
      (const MethodInfo *)&methoda.name);
    if ( v50 )
    {
      UIWidget__set_color(v50, *(UnityEngine_Color_o *)&methoda.name, 0LL);
      v54 = (UIWidget_o *)this->fields.needNumLb;
      v70.fields.g = 0.0;
      v70.fields.r = 0.855;
      v70.fields.b = 0.32;
      methoda.methodPointer = 0LL;
      methoda.invoker_method = 0LL;
      UnityEngine_Color___ctor_40666012(v70, v55, v56, v57, &methoda);
      if ( v54 )
      {
        methodPointer_high = HIDWORD(methoda.methodPointer);
        methodPointer = (int)methoda.methodPointer;
        invoker_method_high = HIDWORD(methoda.invoker_method);
        invoker_method = (int)methoda.invoker_method;
        goto LABEL_39;
      }
    }
LABEL_42:
    sub_B170D4();
  }
  v62 = (UIWidget_o *)this->fields.needTitleLb;
  this->fields.isItemNum = 1;
  *(UnityEngine_Color_o *)&v63 = UnityEngine_Color__get_white(0LL);
  if ( !v62 )
    goto LABEL_42;
  UIWidget__set_color(v62, *(UnityEngine_Color_o *)&v63, 0LL);
  v54 = (UIWidget_o *)this->fields.needNumLb;
  *(UnityEngine_Color_o *)&methodPointer = UnityEngine_Color__get_white(0LL);
  if ( !v54 )
    goto LABEL_42;
LABEL_39:
  UIWidget__set_color(v54, *(UnityEngine_Color_o *)&methodPointer, 0LL);
  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive(itemInfo, 1, 0LL);
  statusInfo = this->fields.statusInfo;
  if ( !statusInfo )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive(statusInfo, 1, 0LL);
}