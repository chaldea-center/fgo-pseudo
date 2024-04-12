void __fastcall ClassBoardItemIconComponent___ctor(ClassBoardItemIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardItemIconComponent__CloseItemDetail(
        ClassBoardItemIconComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42B3862 & 1) == 0 )
  {
    sub_B52984(&Method_ClassBoardItemIconComponent_CloseItemDetail__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B3862 = 1;
  }
  v3 = Method_ClassBoardItemIconComponent_CloseItemDetail__;
  if ( (*((_BYTE *)Method_ClassBoardItemIconComponent_CloseItemDetail__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B5298C(Method_ClassBoardItemIconComponent_CloseItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v6);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


int32_t __fastcall ClassBoardItemIconComponent__GetHaveNum(
        ClassBoardItemIconComponent_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x20
  int64_t Instance; // x0
  __int64 v6; // x1
  ItemMaster_o *v7; // x21
  int32_t *p_mana; // x8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_42B3860 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3860 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_25;
  v7 = (ItemMaster_o *)Instance;
  Instance = ItemMaster__isQP((ItemMaster_o *)Instance, objectId, 0LL);
  if ( (Instance & 1) == 0 )
  {
    Instance = ItemMaster__isMana(v7, objectId, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( SelfUserGame )
      {
        p_mana = &SelfUserGame->fields.mana;
        return *p_mana;
      }
    }
    else
    {
      Instance = ItemMaster__isRarePri(v7, objectId, 0LL);
      if ( (Instance & 1) != 0 )
      {
        if ( SelfUserGame )
        {
          p_mana = &SelfUserGame->fields.rarePri;
          return *p_mana;
        }
      }
      else
      {
        Instance = ItemMaster__isStone(v7, objectId, 0LL);
        if ( (Instance & 1) != 0 )
        {
          if ( SelfUserGame )
          {
            p_mana = &SelfUserGame->fields.stone;
            return *p_mana;
          }
        }
        else
        {
          Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            Instance = NetworkManager__get_UserId(0LL);
            if ( MasterData_WarQuestSelectionMaster )
            {
              Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                                    MasterData_WarQuestSelectionMaster,
                                    Instance,
                                    objectId,
                                    0LL);
              if ( Instance )
              {
                p_mana = (int32_t *)(Instance + 28);
                return *p_mana;
              }
            }
          }
        }
      }
    }
LABEL_25:
    sub_B52A5C(Instance, v6);
  }
  if ( !SelfUserGame )
    goto LABEL_25;
  p_mana = &SelfUserGame->fields.qp;
  return *p_mana;
}


void __fastcall ClassBoardItemIconComponent__OnClickItem(ClassBoardItemIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *maskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  WebViewManager_o *Instance; // x0
  ItemEntity_o *itemEnt; // x20
  CommonUI_o *v10; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v11; // x22

  if ( (byte_42B3861 & 1) == 0 )
  {
    sub_B52984(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B52984(&Method_ClassBoardItemIconComponent_CloseItemDetail__);
    sub_B52984(&Method_ClassBoardItemIconComponent_OnClickItem__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B3861 = 1;
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
      goto LABEL_16;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0LL) )
      return;
  }
  if ( !this->fields.disableOpenItemDetailDialog )
  {
    v6 = Method_ClassBoardItemIconComponent_OnClickItem__;
    if ( (*((_BYTE *)Method_ClassBoardItemIconComponent_OnClickItem__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B5298C(Method_ClassBoardItemIconComponent_OnClickItem__);
    v7 = (System_Reflection_MethodBase_o *)sub_B52968(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    itemEnt = this->fields.itemEnt;
    v10 = (CommonUI_o *)Instance;
    v11 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B52A54(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      (intptr_t)Method_ClassBoardItemIconComponent_CloseItemDetail__,
      0LL);
    if ( v10 )
    {
      CommonUI__OpenItemDetailDialog(v10, itemEnt, v11, 51, 0LL);
      return;
    }
LABEL_16:
    sub_B52A5C(gameObject, v4);
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
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  struct ItemEntity_o *Entity; // x0
  struct ItemEntity_o **p_itemEnt; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2
  struct ItemEntity_o *itemEnt; // x8
  UserSvtCoinMaster_o *v19; // x22
  ItemIconComponent_o *itemIconComp; // x8
  UILabel_o *needTitleLb; // x20
  UILabel_o *haveTitleLb; // x20
  UILabel_o *haveNumLb; // x20
  Il2CppObject *v24; // x0
  UILabel_o *needNumLb; // x20
  Il2CppObject *v26; // x0
  UIWidget_o *v27; // x20
  int v28; // s0
  UIWidget_o *v32; // x20
  int v33; // s0
  UIWidget_o *v37; // x20
  int v38; // s0
  UnityEngine_Color32_o v42; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color32_o c; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v46; // 0:x0.8
  UnityEngine_Color32_o v47; // 0:x0.8

  if ( (byte_42B385F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_ItemMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_3029/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE"*/);
    sub_B52984(&StringLiteral_3031/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED"*/);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    byte_42B385F = 1;
  }
  this->fields.currentItemId = itemId;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_38;
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                    this->fields.currentItemId,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  p_itemEnt = &this->fields.itemEnt;
  this->fields.itemEnt = Entity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.itemEnt,
    (System_Int32_array **)Entity,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.itemEnt;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_38;
  Master_WarQuestSelectionMaster = ItemEntity__GetImageId((ItemEntity_o *)Master_WarQuestSelectionMaster, 0LL);
  itemEnt = this->fields.itemEnt;
  this->fields.itemImgId = Master_WarQuestSelectionMaster;
  if ( !itemEnt )
    goto LABEL_38;
  if ( itemEnt->fields.type == 29 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v19 = (UserSvtCoinMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
    if ( !*p_itemEnt || !v19 )
      goto LABEL_38;
    Master_WarQuestSelectionMaster = (int64_t)UserSvtCoinMaster__GetEntity(
                                                v19,
                                                Master_WarQuestSelectionMaster,
                                                (*p_itemEnt)->fields.value,
                                                0LL);
    if ( Master_WarQuestSelectionMaster )
      Master_WarQuestSelectionMaster = *(unsigned int *)(Master_WarQuestSelectionMaster + 28);
  }
  else
  {
    Master_WarQuestSelectionMaster = ClassBoardItemIconComponent__GetHaveNum(
                                       (ClassBoardItemIconComponent_o *)Master_WarQuestSelectionMaster,
                                       itemId,
                                       v17);
  }
  itemIconComp = this->fields.itemIconComp;
  this->fields.haveItemNum = Master_WarQuestSelectionMaster;
  if ( !itemIconComp )
    goto LABEL_38;
  ItemIconComponent__SetCombineItem(itemIconComp, itemId, -1, 0LL);
  needTitleLb = this->fields.needTitleLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3031/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED"*/, 0LL);
  if ( !needTitleLb )
    goto LABEL_38;
  UILabel__set_text(needTitleLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  haveTitleLb = this->fields.haveTitleLb;
  Master_WarQuestSelectionMaster = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3029/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE"*/, 0LL);
  if ( !haveTitleLb )
    goto LABEL_38;
  UILabel__set_text(haveTitleLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  haveNumLb = this->fields.haveNumLb;
  c.fields.rgba = this->fields.haveItemNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &c);
  Master_WarQuestSelectionMaster = (int64_t)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v24, 0LL);
  if ( !haveNumLb )
    goto LABEL_38;
  UILabel__set_text(haveNumLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  needNumLb = this->fields.needNumLb;
  v42.fields.rgba = this->fields.needItemNum;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  Master_WarQuestSelectionMaster = (int64_t)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v26, 0LL);
  if ( !needNumLb )
    goto LABEL_38;
  UILabel__set_text(needNumLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  if ( this->fields.haveItemNum >= this->fields.needItemNum )
  {
    v37 = (UIWidget_o *)this->fields.needTitleLb;
    this->fields.isItemNum = 1;
    *(UnityEngine_Color_o *)&v38 = UnityEngine_Color__get_white(0LL);
    if ( v37 )
    {
      UIWidget__set_color(v37, *(UnityEngine_Color_o *)&v38, 0LL);
      v32 = (UIWidget_o *)this->fields.needNumLb;
      *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_white(0LL);
      if ( v32 )
        goto LABEL_35;
    }
LABEL_38:
    sub_B52A5C(Master_WarQuestSelectionMaster, v8);
  }
  v27 = (UIWidget_o *)this->fields.needTitleLb;
  p_c = (UnityEngine_Color32_o)&c;
  this->fields.isItemNum = 0;
  c.fields.rgba = 0;
  UnityEngine_Color32___ctor(p_c, 0xFFu, 0xFFu, 0, 0xFFu, 0LL);
  rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
  *(UnityEngine_Color_o *)&v28 = UnityEngine_Color32__op_Implicit_41466640(rgba, 0LL);
  if ( !v27 )
    goto LABEL_38;
  UIWidget__set_color(v27, *(UnityEngine_Color_o *)&v28, 0LL);
  v32 = (UIWidget_o *)this->fields.needNumLb;
  v46 = (UnityEngine_Color32_o)&v42;
  v42.fields.rgba = 0;
  UnityEngine_Color32___ctor(v46, 0xFFu, 0xFFu, 0, 0xFFu, 0LL);
  v47 = (UnityEngine_Color32_o)(unsigned int)v42.fields.rgba;
  *(UnityEngine_Color_o *)&v33 = UnityEngine_Color32__op_Implicit_41466640(v47, 0LL);
  if ( !v32 )
    goto LABEL_38;
LABEL_35:
  UIWidget__set_color(v32, *(UnityEngine_Color_o *)&v33, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.itemInfo;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.statusInfo;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
}