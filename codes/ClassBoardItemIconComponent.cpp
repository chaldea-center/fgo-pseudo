void ClassBoardItemIconComponent___ctor(ClassBoardItemIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardItemIconComponent__CloseItemDetail(
        ClassBoardItemIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_59746BE & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardItemIconComponent_CloseItemDetail__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59746BE = 1;
  }
  v3 = Method_ClassBoardItemIconComponent_CloseItemDetail__;
  if ( (*((_BYTE *)Method_ClassBoardItemIconComponent_CloseItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ClassBoardItemIconComponent_CloseItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow((CommonUI_o *)Instance, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)Instance, 0, 0);
        return;
      }
LABEL_13:
      sub_2213CDC(Instance, v6);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0);
}


int64_t ClassBoardItemIconComponent__GetHaveNum(
        ClassBoardItemIconComponent_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  ItemMaster_o *v7; // x21
  Il2CppObject *MasterData_object; // x20

  if ( (byte_59746BC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59746BC = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_27;
  v7 = (ItemMaster_o *)Instance;
  Instance = (DataManager_o *)ItemMaster__isQP((ItemMaster_o *)Instance, objectId, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( SelfUserGame )
      return SelfUserGame->fields.qp;
LABEL_27:
    sub_2213CDC(Instance, v6);
  }
  Instance = (DataManager_o *)ItemMaster__isMana(v7, objectId, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !SelfUserGame )
      goto LABEL_27;
    return SelfUserGame->fields.mana;
  }
  else
  {
    Instance = (DataManager_o *)ItemMaster__isRarePri(v7, objectId, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_27;
      return SelfUserGame->fields.rarePri;
    }
    else
    {
      Instance = (DataManager_o *)ItemMaster__isStone(v7, objectId, 0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !SelfUserGame )
          goto LABEL_27;
        return SelfUserGame->fields.stone;
      }
      else
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( !MasterData_object )
          goto LABEL_27;
        Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                      (UserItemMaster_o *)MasterData_object,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      objectId,
                                      0);
        if ( !Instance )
          goto LABEL_27;
        return SHIDWORD(Instance->fields.m_CancellationTokenSource);
      }
    }
  }
}


void ClassBoardItemIconComponent__OnClickItem(ClassBoardItemIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *maskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  bool IsEnableItemLinkInfoWindow; // w22
  Il2CppObject *Instance; // x0
  ItemEntity_o *itemEnt; // x20
  CommonUI_o *v11; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v12; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x22

  if ( (byte_59746BD & 1) == 0 )
  {
    sub_2213A60(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ClassBoardItemIconComponent_CloseItemDetail__);
    sub_2213A60(&Method_ClassBoardItemIconComponent_OnClickItem__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_59746BD = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !gameObject )
      goto LABEL_19;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_19;
    if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0) )
      return;
  }
  if ( !this->fields.disableOpenItemDetailDialog )
  {
    v6 = Method_ClassBoardItemIconComponent_OnClickItem__;
    if ( (*((_BYTE *)Method_ClassBoardItemIconComponent_OnClickItem__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_ClassBoardItemIconComponent_OnClickItem__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( gameObject )
    {
      IsEnableItemLinkInfoWindow = CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)gameObject, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      itemEnt = this->fields.itemEnt;
      v11 = (CommonUI_o *)Instance;
      if ( IsEnableItemLinkInfoWindow )
      {
        v12 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_2213CCC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_ClassBoardItemIconComponent_CloseItemDetail__,
          0);
        if ( v11 )
        {
          CommonUI__OpenItemLinkInfoDetailWindow(v11, itemEnt, v12, 0, 0);
          return;
        }
      }
      else
      {
        v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_ClassBoardItemIconComponent_CloseItemDetail__,
          0);
        if ( v11 )
        {
          CommonUI__OpenItemDetailDialog(v11, itemEnt, v13, 51, 0);
          return;
        }
      }
    }
LABEL_19:
    sub_2213CDC(gameObject, v4);
  }
}


void ClassBoardItemIconComponent__SetDisableClick(ClassBoardItemIconComponent_o *this, const MethodInfo *method)
{
  this->fields.disableOpenItemDetailDialog = 1;
}


int32_t ClassBoardItemIconComponent__get_CurrentItemId(ClassBoardItemIconComponent_o *this, const MethodInfo *method)
{
  return this->fields._CurrentItemId_k__BackingField;
}


int32_t ClassBoardItemIconComponent__get_NeedItemNum(ClassBoardItemIconComponent_o *this, const MethodInfo *method)
{
  return this->fields._NeedItemNum_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardItemIconComponent__setItemInfo(
        ClassBoardItemIconComponent_o *this,
        int32_t itemId,
        int32_t needNum,
        const MethodInfo *method)
{
  DataManager_c *v7; // x0
  int v8; // w8
  int64_t Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  struct ItemEntity_o **p_itemEnt; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x2
  struct ItemEntity_o *itemEnt; // x8
  Il2CppObject *v21; // x22
  ItemIconComponent_o *itemIconComp; // x8
  __int64 v23; // x1
  UILabel_o *needTitleLb; // x20
  UILabel_o *haveTitleLb; // x20
  UILabel_o *haveNumLb; // x20
  Il2CppObject *v27; // x0
  UILabel_o *needNumLb; // x20
  Il2CppObject *v29; // x0
  float v30; // s2
  float v31; // s0 OVERLAPPED
  float v32; // s1
  float v33; // s3
  int32_t NeedItemNum_k__BackingField; // [xsp+Ch] [xbp-44h] BYREF
  int64_t haveItemNum; // [xsp+18h] [xbp-38h] BYREF
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59746BB & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ItemMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_3514/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE"*/);
    sub_2213A60(&StringLiteral_3516/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED"*/);
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    byte_59746BB = 1;
  }
  v7 = DataManager_TypeInfo;
  this->fields.haveItemNum = 0;
  v8 = *(&v7->_2.cctor_finished + 1);
  this->fields._NeedItemNum_k__BackingField = needNum;
  this->fields._CurrentItemId_k__BackingField = itemId;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&itemId);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_39;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields._CurrentItemId_k__BackingField,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)Entity;
  p_itemEnt = &this->fields.itemEnt;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.itemEnt, (int32_t)Entity, v13, v14, v15, v16, v17, v18);
  Master_object = (int64_t)this->fields.itemEnt;
  if ( !Master_object )
    goto LABEL_39;
  Master_object = ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0);
  itemEnt = this->fields.itemEnt;
  this->fields.itemImgId = Master_object;
  if ( !itemEnt )
    goto LABEL_39;
  if ( itemEnt->fields.type == 29 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
    v21 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
    if ( !byte_5969EF2 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_5969EF2 = 1;
    }
    Master_object = (int64_t)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
      Master_object = (int64_t)NetworkManager_TypeInfo;
    }
    if ( !*p_itemEnt || !v21 )
      goto LABEL_39;
    Master_object = (int64_t)UserSvtCoinMaster__GetEntity(
                               (UserSvtCoinMaster_o *)v21,
                               *(_QWORD *)(*(_QWORD *)(Master_object + 184) + 64LL),
                               (*p_itemEnt)->fields.value,
                               0);
    if ( Master_object )
      Master_object = *(int *)(Master_object + 28);
  }
  else
  {
    Master_object = ClassBoardItemIconComponent__GetHaveNum((ClassBoardItemIconComponent_o *)Master_object, itemId, v19);
  }
  itemIconComp = this->fields.itemIconComp;
  this->fields.haveItemNum = Master_object;
  if ( !itemIconComp )
    goto LABEL_39;
  ItemIconComponent__SetCombineItem(itemIconComp, itemId, -1, 0);
  needTitleLb = this->fields.needTitleLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3516/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED"*/, 0);
  if ( !needTitleLb )
    goto LABEL_39;
  UILabel__set_text(needTitleLb, (System_String_o *)Master_object, 0);
  haveTitleLb = this->fields.haveTitleLb;
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3514/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE"*/, 0);
  if ( !haveTitleLb )
    goto LABEL_39;
  UILabel__set_text(haveTitleLb, (System_String_o *)Master_object, 0);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &haveItemNum);
  Master_object = (int64_t)System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v27, 0);
  if ( !haveNumLb )
    goto LABEL_39;
  UILabel__set_text(haveNumLb, (System_String_o *)Master_object, 0);
  needNumLb = this->fields.needNumLb;
  NeedItemNum_k__BackingField = this->fields._NeedItemNum_k__BackingField;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &NeedItemNum_k__BackingField);
  Master_object = (int64_t)System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v29, 0);
  if ( !needNumLb )
    goto LABEL_39;
  UILabel__set_text(needNumLb, (System_String_o *)Master_object, 0);
  Master_object = (int64_t)this->fields.needTitleLb;
  if ( this->fields.haveItemNum >= this->fields._NeedItemNum_k__BackingField )
  {
    if ( Master_object )
    {
      v37.fields.r = 1.0;
      v37.fields.g = 1.0;
      v37.fields.b = 1.0;
      v37.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)Master_object, v37, 0);
      Master_object = (int64_t)this->fields.needNumLb;
      if ( Master_object )
      {
        v31 = 1.0;
        v32 = 1.0;
        v30 = 1.0;
        goto LABEL_36;
      }
    }
LABEL_39:
    sub_2213CDC(Master_object, v10);
  }
  if ( !Master_object )
    goto LABEL_39;
  v36.fields.b = 0.0;
  v36.fields.r = 1.0;
  v36.fields.g = 1.0;
  v36.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)Master_object, v36, 0);
  Master_object = (int64_t)this->fields.needNumLb;
  if ( !Master_object )
    goto LABEL_39;
  v30 = 0.0;
  v31 = 1.0;
  v32 = 1.0;
LABEL_36:
  v33 = 1.0;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v31, 0);
  Master_object = (int64_t)this->fields.itemInfo;
  if ( !Master_object )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  Master_object = (int64_t)this->fields.statusInfo;
  if ( !Master_object )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
}


void ClassBoardItemIconComponent__set_CurrentItemId(
        ClassBoardItemIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CurrentItemId_k__BackingField = value;
}


void ClassBoardItemIconComponent__set_NeedItemNum(
        ClassBoardItemIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._NeedItemNum_k__BackingField = value;
}