void __fastcall LimitCntUpItemComponent___ctor(LimitCntUpItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall LimitCntUpItemComponent__CloseItemDetail(
        LimitCntUpItemComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42AF1D2 & 1) == 0 )
  {
    sub_B52984(&Method_LimitCntUpItemComponent_CloseItemDetail__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AF1D2 = 1;
  }
  v3 = Method_LimitCntUpItemComponent_CloseItemDetail__;
  if ( (*((_BYTE *)Method_LimitCntUpItemComponent_CloseItemDetail__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B5298C(Method_LimitCntUpItemComponent_CloseItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v6);
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
  UnityEngine_Object_o *maskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  WebViewManager_o *Instance; // x0
  ItemEntity_o *itemEnt; // x20
  CommonUI_o *v8; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v9; // x22

  if ( (byte_42AF1D1 & 1) == 0 )
  {
    sub_B52984(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B52984(&Method_LimitCntUpItemComponent_CloseItemDetail__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AF1D1 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    itemEnt = this->fields.itemEnt;
    v8 = (CommonUI_o *)Instance;
    v9 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B52A54(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      (intptr_t)Method_LimitCntUpItemComponent_CloseItemDetail__,
      0LL);
    if ( v8 )
    {
      CommonUI__OpenItemDetailDialog(v8, itemEnt, v9, 51, 0LL);
      return;
    }
LABEL_17:
    sub_B52A5C(gameObject, v4);
  }
}


void __fastcall LimitCntUpItemComponent__SetItemEntity(
        LimitCntUpItemComponent_o *this,
        int32_t id,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  struct ItemEntity_o *Entity; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42AF1D0 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    byte_42AF1D0 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v6);
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    Master_WarQuestSelectionMaster,
                                    id,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = Entity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.itemEnt,
    (System_Int32_array **)Entity,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LimitCntUpItemComponent__SetItemIcon(
        LimitCntUpItemComponent_o *this,
        int32_t itemId,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *itemInfo; // x0
  struct ItemEntity_o *Entity; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  ItemIconComponent_o *itemIconComp; // x8

  if ( (byte_42AF1CF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF1CF = 1;
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
  itemInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !itemInfo )
    goto LABEL_10;
  itemInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)itemInfo,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itemInfo
    || (Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          (DataMasterBase_WarMaster__WarEntity__int__o *)itemInfo,
                                          this->fields.currentItemId,
                                          (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__),
        this->fields.itemEnt = Entity,
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.itemEnt,
          (System_Int32_array **)Entity,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12),
        (itemInfo = (UnityEngine_GameObject_o *)this->fields.itemEnt) == 0LL)
    || (itemInfo = (UnityEngine_GameObject_o *)ItemEntity__GetImageId((ItemEntity_o *)itemInfo, 0LL),
        itemIconComp = this->fields.itemIconComp,
        this->fields.itemImgId = (int)itemInfo,
        !itemIconComp) )
  {
LABEL_10:
    sub_B52A5C(itemInfo, *(_QWORD *)&itemId);
  }
  ItemIconComponent__SetCombineItem(itemIconComp, itemId, -1, 0LL);
}


void __fastcall LimitCntUpItemComponent__SetMaskSprite(
        LimitCntUpItemComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42AF1D3 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AF1D3 = 1;
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
      sub_B52A5C(gameObject, v6);
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
    sub_B52A5C(0LL, method);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  struct ItemEntity_o *Entity; // x0
  struct ItemEntity_o **p_itemEnt; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct ItemEntity_o *itemEnt; // x8
  const Il2CppType *return_type; // x8
  UILabel_o *needTitleLb; // x20
  UILabel_o *haveTitleLb; // x20
  UILabel_o *haveNumLb; // x20
  Il2CppObject *v24; // x0
  UILabel_o *needNumLb; // x20
  Il2CppObject *v26; // x0
  int v27; // s3
  float v28; // s4
  float v29; // s5
  float v30; // s6
  UIWidget_o *v31; // x20
  int v32; // s1
  int v33; // s0
  int v34; // s2
  UIWidget_o *v35; // x20
  float v36; // s4
  float v37; // s5
  float v38; // s6
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  UIWidget_o *v43; // x20
  int v44; // s0
  MethodInfo methoda; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42AF1CE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    sub_B52984(&StringLiteral_3215/*"COMBINE_ITEM_INFO_HAVE"*/);
    sub_B52984(&StringLiteral_3216/*"COMBINE_ITEM_INFO_NEED"*/);
    byte_42AF1CE = 1;
  }
  *(_QWORD *)&methoda.token = 0LL;
  methoda.return_type = 0LL;
  this->fields.currentItemId = itemId;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    Master_WarQuestSelectionMaster,
                                    this->fields.currentItemId,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  p_itemEnt = &this->fields.itemEnt;
  this->fields.itemEnt = Entity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.itemEnt,
    (System_Int32_array **)Entity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
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
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserItemMaster___);
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
                                                                                    (System_String_o *)StringLiteral_3216/*"COMBINE_ITEM_INFO_NEED"*/,
                                                                                    0LL);
  if ( !needTitleLb )
    goto LABEL_42;
  UILabel__set_text(needTitleLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  haveTitleLb = this->fields.haveTitleLb;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                    (System_String_o *)StringLiteral_3215/*"COMBINE_ITEM_INFO_HAVE"*/,
                                                                                    0LL);
  if ( !haveTitleLb )
    goto LABEL_42;
  UILabel__set_text(haveTitleLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  haveNumLb = this->fields.haveNumLb;
  LODWORD(methoda.name) = this->fields.haveItemNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.name);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                    (System_String_o *)StringLiteral_23682/*"{0:#,0}"*/,
                                                                                    v24,
                                                                                    0LL);
  if ( !haveNumLb )
    goto LABEL_42;
  UILabel__set_text(haveNumLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  needNumLb = this->fields.needNumLb;
  LODWORD(methoda.methodPointer) = this->fields.needItemNum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                    (System_String_o *)StringLiteral_23682/*"{0:#,0}"*/,
                                                                                    v26,
                                                                                    0LL);
  if ( !needNumLb )
    goto LABEL_42;
  UILabel__set_text(needNumLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  if ( this->fields.haveItemNum < this->fields.needItemNum )
  {
    v31 = (UIWidget_o *)this->fields.needTitleLb;
    v32 = 0;
    v33 = 1062920520;
    v34 = 1050924810;
    this->fields.isItemNum = 0;
    methoda.name = 0LL;
    methoda.klass = 0LL;
    UnityEngine_Color___ctor_41463668(
      *(UnityEngine_Color_o *)(&v27 - 3),
      v28,
      v29,
      v30,
      (const MethodInfo *)&methoda.name);
    if ( v31 )
    {
      UIWidget__set_color(v31, *(UnityEngine_Color_o *)&methoda.name, 0LL);
      v35 = (UIWidget_o *)this->fields.needNumLb;
      v49.fields.g = 0.0;
      v49.fields.r = 0.855;
      v49.fields.b = 0.32;
      methoda.methodPointer = 0LL;
      methoda.invoker_method = 0LL;
      UnityEngine_Color___ctor_41463668(v49, v36, v37, v38, &methoda);
      if ( v35 )
      {
        methodPointer_high = HIDWORD(methoda.methodPointer);
        methodPointer = (int)methoda.methodPointer;
        invoker_method_high = HIDWORD(methoda.invoker_method);
        invoker_method = (int)methoda.invoker_method;
        goto LABEL_39;
      }
    }
LABEL_42:
    sub_B52A5C(Master_WarQuestSelectionMaster, v10);
  }
  v43 = (UIWidget_o *)this->fields.needTitleLb;
  this->fields.isItemNum = 1;
  *(UnityEngine_Color_o *)&v44 = UnityEngine_Color__get_white(0LL);
  if ( !v43 )
    goto LABEL_42;
  UIWidget__set_color(v43, *(UnityEngine_Color_o *)&v44, 0LL);
  v35 = (UIWidget_o *)this->fields.needNumLb;
  *(UnityEngine_Color_o *)&methodPointer = UnityEngine_Color__get_white(0LL);
  if ( !v35 )
    goto LABEL_42;
LABEL_39:
  UIWidget__set_color(v35, *(UnityEngine_Color_o *)&methodPointer, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.itemInfo;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.statusInfo;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
}