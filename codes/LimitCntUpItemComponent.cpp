void __fastcall LimitCntUpItemComponent___ctor(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall LimitCntUpItemComponent__CloseItemDetail(
        LimitCntUpItemComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v4; // w1
  int v5; // w2
  __int64 v6; // x3
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  CommonUI_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42E7D59 & 1) == 0 )
  {
    sub_B5D5C4(&Method_LimitCntUpItemComponent_CloseItemDetail__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42E7D59 = 1;
  }
  v7 = Method_LimitCntUpItemComponent_CloseItemDetail__;
  if ( (*((_BYTE *)Method_LimitCntUpItemComponent_CloseItemDetail__ + 75) & 2) != 0 )
    v7 = (_QWORD *)sub_B5D5CC(Method_LimitCntUpItemComponent_CloseItemDetail__);
  v8 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v7, v7[3]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Object_o *maskSprite; // x20
  __int64 v18; // x1
  UnityEngine_Component_o *gameObject; // x0
  WebViewManager_o *Instance; // x0
  ItemEntity_o *itemEnt; // x20
  CommonUI_o *v22; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v23; // x22

  if ( (byte_42E7D58 & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_LimitCntUpItemComponent_CloseItemDetail__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42E7D58 = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !gameObject )
      goto LABEL_17;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0LL) )
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    itemEnt = this->fields.itemEnt;
    v22 = (CommonUI_o *)Instance;
    v23 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      (intptr_t)Method_LimitCntUpItemComponent_CloseItemDetail__,
      0LL);
    if ( v22 )
    {
      CommonUI__OpenItemDetailDialog(v22, itemEnt, v23, 51, 0LL);
      return;
    }
LABEL_17:
    sub_B5D69C(gameObject, v18);
  }
}


void __fastcall LimitCntUpItemComponent__SetItemEntity(
        LimitCntUpItemComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  struct ItemEntity_o *Entity; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E7D57 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, id, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9, v10, v11);
    byte_42E7D57 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v13);
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    Master_WarQuestSelectionMaster,
                                    id,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemEnt,
    (System_Int32_array **)Entity,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpItemComponent__SetItemIcon(
        LimitCntUpItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_GameObject_o *itemInfo; // x0
  struct ItemEntity_o *Entity; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  ItemIconComponent_o *itemIconComp; // x8

  if ( (byte_42E7D56 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, itemId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E7D56 = 1;
  }
  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(itemInfo, 1, 0LL);
  itemInfo = this->fields.statusInfo;
  if ( !itemInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive(itemInfo, 0, 0LL);
  this->fields.currentItemId = itemId;
  itemInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemInfo )
    goto LABEL_10;
  itemInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)itemInfo,
                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemInfo
    || (Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)itemInfo,
                                          this->fields.currentItemId,
                                          (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        this->fields.itemEnt = Entity,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.itemEnt,
          (System_Int32_array **)Entity,
          v14,
          v15,
          v16,
          v17,
          v18,
          v19),
        (itemInfo = (UnityEngine_GameObject_o *)this->fields.itemEnt) == 0LL)
    || (itemInfo = (UnityEngine_GameObject_o *)ItemEntity__GetImageId((ItemEntity_o *)itemInfo, 0LL),
        itemIconComp = this->fields.itemIconComp,
        this->fields.itemImgId = (int)itemInfo,
        !itemIconComp) )
  {
LABEL_10:
    sub_B5D69C(itemInfo, *(_QWORD *)&itemId);
  }
  ItemIconComponent__SetCombineItem(itemIconComp, itemId, -1, 0LL);
}


void __fastcall LimitCntUpItemComponent__SetMaskSprite(
        LimitCntUpItemComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42E7D5A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isActive, (_DWORD)method, v3);
    byte_42E7D5A = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(maskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B5D69C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isActive, 0LL);
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
    sub_B5D69C(0LL, method);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v37; // x1
  struct ItemEntity_o *Entity; // x0
  struct ItemEntity_o **p_itemEnt; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct ItemEntity_o *itemEnt; // x8
  const Il2CppType *return_type; // x8
  UILabel_o *needTitleLb; // x20
  UILabel_o *haveTitleLb; // x20
  UILabel_o *haveNumLb; // x20
  Il2CppObject *v51; // x0
  UILabel_o *needNumLb; // x20
  Il2CppObject *v53; // x0
  int v54; // s3
  float v55; // s4
  float v56; // s5
  float v57; // s6
  UIWidget_o *v58; // x20
  int v59; // s1
  int v60; // s0
  int v61; // s2
  UIWidget_o *v62; // x20
  float v63; // s4
  float v64; // s5
  float v65; // s6
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  UIWidget_o *v70; // x20
  int v71; // s0
  MethodInfo methoda; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E7D55 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, usrId, itemId, *(_QWORD *)&needNum);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserItemMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v12, v13, v14);
    sub_B5D5C4(&DataManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&int_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_3248/*"COMBINE_ITEM_INFO_HAVE"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_3249/*"COMBINE_ITEM_INFO_NEED"*/, v33, v34, v35);
    byte_42E7D55 = 1;
  }
  *(_QWORD *)&methoda.token = 0LL;
  methoda.return_type = 0LL;
  this->fields.currentItemId = itemId;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    Master_WarQuestSelectionMaster,
                                    this->fields.currentItemId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  p_itemEnt = &this->fields.itemEnt;
  this->fields.itemEnt = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemEnt,
    (System_Int32_array **)Entity,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.itemEnt;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)ItemEntity__GetImageId(
                                                                                    (ItemEntity_o *)Master_WarQuestSelectionMaster,
                                                                                    0LL);
  itemEnt = this->fields.itemEnt;
  this->fields.itemImgId = (int)Master_WarQuestSelectionMaster;
  if ( !itemEnt )
    goto LABEL_42;
  if ( itemEnt->fields.type == 29 )
  {
    methoda.return_type = 0LL;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
    if ( !*p_itemEnt || !Master_WarQuestSelectionMaster )
      goto LABEL_42;
    UserSvtCoinMaster__TryGetEntity(
      (UserSvtCoinMaster_o *)Master_WarQuestSelectionMaster,
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
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UserItemMaster__TryGetEntity(
                                                                                    (UserItemMaster_o *)Master_WarQuestSelectionMaster,
                                                                                    (UserItemEntity_o **)&methoda.token,
                                                                                    usrId,
                                                                                    itemId,
                                                                                    0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    return_type = *(const Il2CppType **)&methoda.token;
    if ( !*(_QWORD *)&methoda.token )
      goto LABEL_42;
LABEL_23:
    LODWORD(return_type) = *(&return_type[1].bits + 1);
LABEL_24:
    this->fields.haveItemNum = (int)return_type;
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.itemIconComp;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  ItemIconComponent__SetCombineItem((ItemIconComponent_o *)Master_WarQuestSelectionMaster, itemId, -1, 0LL);
  needTitleLb = this->fields.needTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_3249/*"COMBINE_ITEM_INFO_NEED"*/,
                                                                                    0LL);
  if ( !needTitleLb )
    goto LABEL_42;
  UILabel__set_text(needTitleLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  haveTitleLb = this->fields.haveTitleLb;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_3248/*"COMBINE_ITEM_INFO_HAVE"*/,
                                                                                    0LL);
  if ( !haveTitleLb )
    goto LABEL_42;
  UILabel__set_text(haveTitleLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  haveNumLb = this->fields.haveNumLb;
  LODWORD(methoda.name) = this->fields.haveItemNum;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.name);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                    (System_String_o *)StringLiteral_23800/*"{0:#,0}"*/,
                                                                                    v51,
                                                                                    0LL);
  if ( !haveNumLb )
    goto LABEL_42;
  UILabel__set_text(haveNumLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  needNumLb = this->fields.needNumLb;
  LODWORD(methoda.methodPointer) = this->fields.needItemNum;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                    (System_String_o *)StringLiteral_23800/*"{0:#,0}"*/,
                                                                                    v53,
                                                                                    0LL);
  if ( !needNumLb )
    goto LABEL_42;
  UILabel__set_text(needNumLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  if ( this->fields.haveItemNum < this->fields.needItemNum )
  {
    v58 = (UIWidget_o *)this->fields.needTitleLb;
    v59 = 0;
    v60 = 1062920520;
    v61 = 1050924810;
    this->fields.isItemNum = 0;
    methoda.name = 0LL;
    methoda.klass = 0LL;
    UnityEngine_Color___ctor_41567816(
      *(UnityEngine_Color_o *)(&v54 - 3),
      v55,
      v56,
      v57,
      (const MethodInfo *)&methoda.name);
    if ( v58 )
    {
      UIWidget__set_color(v58, *(UnityEngine_Color_o *)&methoda.name, 0LL);
      v62 = (UIWidget_o *)this->fields.needNumLb;
      v76.fields.g = 0.0;
      v76.fields.r = 0.855;
      v76.fields.b = 0.32;
      methoda.methodPointer = 0LL;
      methoda.invoker_method = 0LL;
      UnityEngine_Color___ctor_41567816(v76, v63, v64, v65, &methoda);
      if ( v62 )
      {
        methodPointer_high = HIDWORD(methoda.methodPointer);
        methodPointer = (int)methoda.methodPointer;
        invoker_method_high = HIDWORD(methoda.invoker_method);
        invoker_method = (int)methoda.invoker_method;
        goto LABEL_39;
      }
    }
LABEL_42:
    sub_B5D69C(Master_WarQuestSelectionMaster, v37);
  }
  v70 = (UIWidget_o *)this->fields.needTitleLb;
  this->fields.isItemNum = 1;
  *(UnityEngine_Color_o *)&v71 = UnityEngine_Color__get_white(0LL);
  if ( !v70 )
    goto LABEL_42;
  UIWidget__set_color(v70, *(UnityEngine_Color_o *)&v71, 0LL);
  v62 = (UIWidget_o *)this->fields.needNumLb;
  *(UnityEngine_Color_o *)&methodPointer = UnityEngine_Color__get_white(0LL);
  if ( !v62 )
    goto LABEL_42;
LABEL_39:
  UIWidget__set_color(v62, *(UnityEngine_Color_o *)&methodPointer, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.itemInfo;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.statusInfo;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
}