void __fastcall ClassBoardItemIconComponent___ctor(ClassBoardItemIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardItemIconComponent__CloseItemDetail(
        ClassBoardItemIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40FB961 & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardItemIconComponent_CloseItemDetail__, isDecide);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_40FB961 = 1;
  }
  v4 = Method_ClassBoardItemIconComponent_CloseItemDetail__;
  if ( (*((_BYTE *)Method_ClassBoardItemIconComponent_CloseItemDetail__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B17004(Method_ClassBoardItemIconComponent_CloseItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_B16FE0(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ClassBoardItemIconComponent__GetHaveNum(
        ClassBoardItemIconComponent_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserGameEntity_o *SelfUserGame; // x20
  WebViewManager_o *Instance; // x0
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ItemMaster_o *v10; // x21
  int32_t *p_mana; // x8
  WebViewManager_o *v12; // x0
  UserItemMaster_o *v13; // x20
  int64_t UserId; // x0
  UserItemEntity_o *EntityDefinitely; // x0

  if ( (byte_40FB95F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&objectId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FB95F = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_25;
  v10 = MasterData_WarQuestSelectionMaster;
  if ( !ItemMaster__isQP(MasterData_WarQuestSelectionMaster, objectId, 0LL) )
  {
    if ( ItemMaster__isMana(v10, objectId, 0LL) )
    {
      if ( SelfUserGame )
      {
        p_mana = &SelfUserGame->fields.mana;
        return *p_mana;
      }
    }
    else if ( ItemMaster__isRarePri(v10, objectId, 0LL) )
    {
      if ( SelfUserGame )
      {
        p_mana = &SelfUserGame->fields.rarePri;
        return *p_mana;
      }
    }
    else if ( ItemMaster__isStone(v10, objectId, 0LL) )
    {
      if ( SelfUserGame )
      {
        p_mana = &SelfUserGame->fields.stone;
        return *p_mana;
      }
    }
    else
    {
      v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v12 )
      {
        v13 = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)v12,
                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        if ( v13 )
        {
          EntityDefinitely = UserItemMaster__GetEntityDefinitely(v13, UserId, objectId, 0LL);
          if ( EntityDefinitely )
          {
            p_mana = &EntityDefinitely->fields.num;
            return *p_mana;
          }
        }
      }
    }
LABEL_25:
    sub_B170D4();
  }
  if ( !SelfUserGame )
    goto LABEL_25;
  p_mana = &SelfUserGame->fields.qp;
  return *p_mana;
}


void __fastcall ClassBoardItemIconComponent__OnClickItem(ClassBoardItemIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *maskSprite; // x20
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  WebViewManager_o *Instance; // x0
  ItemEntity_o *itemEnt; // x20
  CommonUI_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  ItemDetailInfoComponent_CallbackFunc_o *v19; // x22

  if ( (byte_40FB960 & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardItemIconComponent_CloseItemDetail__, v3);
    sub_B16FFC(&Method_ClassBoardItemIconComponent_OnClickItem__, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FB960 = 1;
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
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    if ( UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
      return;
  }
  if ( !this->fields.disableOpenItemDetailDialog )
  {
    v10 = Method_ClassBoardItemIconComponent_OnClickItem__;
    if ( (*((_BYTE *)Method_ClassBoardItemIconComponent_OnClickItem__ + 75) & 2) != 0 )
      v10 = (_QWORD *)sub_B17004(Method_ClassBoardItemIconComponent_OnClickItem__);
    v11 = (System_Reflection_MethodBase_o *)sub_B16FE0(v10, v10[3]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    itemEnt = this->fields.itemEnt;
    v14 = (CommonUI_o *)Instance;
    v19 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                      ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                      v15,
                                                      v16,
                                                      v17,
                                                      v18);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      (intptr_t)Method_ClassBoardItemIconComponent_CloseItemDetail__,
      0LL);
    if ( v14 )
    {
      CommonUI__OpenItemDetailDialog(v14, itemEnt, v19, 51, 0LL);
      return;
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall ClassBoardItemIconComponent__SetDisableClick(
        ClassBoardItemIconComponent_o *this,
        const MethodInfo *method)
{
  this->fields.disableOpenItemDetailDialog = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardItemIconComponent__setItemInfo(
        ClassBoardItemIconComponent_o *this,
        int32_t itemId,
        int32_t needNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct ItemEntity_o *Entity; // x0
  struct ItemEntity_o **p_itemEnt; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  ItemEntity_o *itemEnt; // x0
  ClassBoardItemIconComponent_o *ImageId; // x0
  const MethodInfo *v27; // x2
  struct ItemEntity_o *v28; // x8
  UserSvtCoinMaster_o *v29; // x22
  int64_t UserId; // x0
  UserSvtCoinEntity_o *v31; // x0
  ItemIconComponent_o *itemIconComp; // x8
  UILabel_o *needTitleLb; // x20
  System_String_o *v34; // x0
  UILabel_o *haveTitleLb; // x20
  System_String_o *v36; // x0
  UILabel_o *haveNumLb; // x20
  Il2CppObject *v38; // x0
  System_String_o *v39; // x0
  UILabel_o *needNumLb; // x20
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  UIWidget_o *v43; // x20
  int v44; // s0
  UIWidget_o *v48; // x20
  int v49; // s0
  UIWidget_o *v53; // x20
  int v54; // s0
  UnityEngine_GameObject_o *itemInfo; // x0
  UnityEngine_GameObject_o *statusInfo; // x0
  UnityEngine_Color32_o v60; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color32_o c; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v64; // 0:x0.8
  UnityEngine_Color32_o v65; // 0:x0.8

  if ( (byte_40FB95E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&itemId);
    sub_B16FFC(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_2988, v13);
    sub_B16FFC(&StringLiteral_2990, v14);
    sub_B16FFC(&StringLiteral_23395, v15);
    byte_40FB95E = 1;
  }
  this->fields.currentItemId = itemId;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_38;
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    Master_WarQuestSelectionMaster,
                                    this->fields.currentItemId,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  p_itemEnt = &this->fields.itemEnt;
  this->fields.itemEnt = Entity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemEnt,
    (System_Int32_array **)Entity,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  itemEnt = this->fields.itemEnt;
  if ( !itemEnt )
    goto LABEL_38;
  ImageId = (ClassBoardItemIconComponent_o *)ItemEntity__GetImageId(itemEnt, 0LL);
  v28 = this->fields.itemEnt;
  this->fields.itemImgId = (int)ImageId;
  if ( !v28 )
    goto LABEL_38;
  if ( v28->fields.type == 29 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v29 = (UserSvtCoinMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    if ( !*p_itemEnt || !v29 )
      goto LABEL_38;
    v31 = UserSvtCoinMaster__GetEntity(v29, UserId, (*p_itemEnt)->fields.value, 0LL);
    if ( v31 )
      LODWORD(v31) = v31->fields.num;
  }
  else
  {
    LODWORD(v31) = ClassBoardItemIconComponent__GetHaveNum(ImageId, itemId, v27);
  }
  itemIconComp = this->fields.itemIconComp;
  this->fields.haveItemNum = (int)v31;
  if ( !itemIconComp )
    goto LABEL_38;
  ItemIconComponent__SetCombineItem(itemIconComp, itemId, -1, 0LL);
  needTitleLb = this->fields.needTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_2990, 0LL);
  if ( !needTitleLb )
    goto LABEL_38;
  UILabel__set_text(needTitleLb, v34, 0LL);
  haveTitleLb = this->fields.haveTitleLb;
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2988, 0LL);
  if ( !haveTitleLb )
    goto LABEL_38;
  UILabel__set_text(haveTitleLb, v36, 0LL);
  haveNumLb = this->fields.haveNumLb;
  c.fields.rgba = this->fields.haveItemNum;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &c);
  v39 = System_String__Format((System_String_o *)StringLiteral_23395, v38, 0LL);
  if ( !haveNumLb )
    goto LABEL_38;
  UILabel__set_text(haveNumLb, v39, 0LL);
  needNumLb = this->fields.needNumLb;
  v60.fields.rgba = this->fields.needItemNum;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v60);
  v42 = System_String__Format((System_String_o *)StringLiteral_23395, v41, 0LL);
  if ( !needNumLb )
    goto LABEL_38;
  UILabel__set_text(needNumLb, v42, 0LL);
  if ( this->fields.haveItemNum >= this->fields.needItemNum )
  {
    v53 = (UIWidget_o *)this->fields.needTitleLb;
    this->fields.isItemNum = 1;
    *(UnityEngine_Color_o *)&v54 = UnityEngine_Color__get_white(0LL);
    if ( v53 )
    {
      UIWidget__set_color(v53, *(UnityEngine_Color_o *)&v54, 0LL);
      v48 = (UIWidget_o *)this->fields.needNumLb;
      *(UnityEngine_Color_o *)&v49 = UnityEngine_Color__get_white(0LL);
      if ( v48 )
        goto LABEL_35;
    }
LABEL_38:
    sub_B170D4();
  }
  v43 = (UIWidget_o *)this->fields.needTitleLb;
  p_c = (UnityEngine_Color32_o)&c;
  this->fields.isItemNum = 0;
  c.fields.rgba = 0;
  UnityEngine_Color32___ctor(p_c, 0xFFu, 0xFFu, 0, 0xFFu, 0LL);
  rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
  *(UnityEngine_Color_o *)&v44 = UnityEngine_Color32__op_Implicit_40668984(rgba, 0LL);
  if ( !v43 )
    goto LABEL_38;
  UIWidget__set_color(v43, *(UnityEngine_Color_o *)&v44, 0LL);
  v48 = (UIWidget_o *)this->fields.needNumLb;
  v64 = (UnityEngine_Color32_o)&v60;
  v60.fields.rgba = 0;
  UnityEngine_Color32___ctor(v64, 0xFFu, 0xFFu, 0, 0xFFu, 0LL);
  v65 = (UnityEngine_Color32_o)(unsigned int)v60.fields.rgba;
  *(UnityEngine_Color_o *)&v49 = UnityEngine_Color32__op_Implicit_40668984(v65, 0LL);
  if ( !v48 )
    goto LABEL_38;
LABEL_35:
  UIWidget__set_color(v48, *(UnityEngine_Color_o *)&v49, 0LL);
  itemInfo = this->fields.itemInfo;
  if ( !itemInfo )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(itemInfo, 1, 0LL);
  statusInfo = this->fields.statusInfo;
  if ( !statusInfo )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(statusInfo, 1, 0LL);
}