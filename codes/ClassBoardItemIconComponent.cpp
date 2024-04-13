void __fastcall ClassBoardItemIconComponent___ctor(ClassBoardItemIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardItemIconComponent__CloseItemDetail(
        ClassBoardItemIconComponent_o *this,
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

  if ( (byte_42EA7FC & 1) == 0 )
  {
    sub_B5D5C4(&Method_ClassBoardItemIconComponent_CloseItemDetail__, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    byte_42EA7FC = 1;
  }
  v7 = Method_ClassBoardItemIconComponent_CloseItemDetail__;
  if ( (*((_BYTE *)Method_ClassBoardItemIconComponent_CloseItemDetail__ + 75) & 2) != 0 )
    v7 = (_QWORD *)sub_B5D5CC(Method_ClassBoardItemIconComponent_CloseItemDetail__);
  v8 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v7, v7[3]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  CommonUI__CloseItemDetailDialog(Instance, 0LL);
}


int32_t __fastcall ClassBoardItemIconComponent__GetHaveNum(
        ClassBoardItemIconComponent_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
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
  UserGameEntity_o *SelfUserGame; // x20
  int64_t Instance; // x0
  __int64 v16; // x1
  ItemMaster_o *v17; // x21
  int32_t *p_mana; // x8
  UserItemMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_42EA7FA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, objectId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserItemMaster___, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EA7FA = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_25;
  v17 = (ItemMaster_o *)Instance;
  Instance = ItemMaster__isQP((ItemMaster_o *)Instance, objectId, 0LL);
  if ( (Instance & 1) == 0 )
  {
    Instance = ItemMaster__isMana(v17, objectId, 0LL);
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
      Instance = ItemMaster__isRarePri(v17, objectId, 0LL);
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
        Instance = ItemMaster__isStone(v17, objectId, 0LL);
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
          Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_WarQuestSelectionMaster = (UserItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)Instance,
                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_B5D69C(Instance, v16);
  }
  if ( !SelfUserGame )
    goto LABEL_25;
  p_mana = &SelfUserGame->fields.qp;
  return *p_mana;
}


void __fastcall ClassBoardItemIconComponent__OnClickItem(ClassBoardItemIconComponent_o *this, const MethodInfo *method)
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
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  WebViewManager_o *Instance; // x0
  ItemEntity_o *itemEnt; // x20
  CommonUI_o *v24; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v25; // x22

  if ( (byte_42EA7FB & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardItemIconComponent_CloseItemDetail__, v5, v6, v7);
    sub_B5D5C4(&Method_ClassBoardItemIconComponent_OnClickItem__, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    byte_42EA7FB = 1;
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
    v20 = Method_ClassBoardItemIconComponent_OnClickItem__;
    if ( (*((_BYTE *)Method_ClassBoardItemIconComponent_OnClickItem__ + 75) & 2) != 0 )
      v20 = (_QWORD *)sub_B5D5CC(Method_ClassBoardItemIconComponent_OnClickItem__);
    v21 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v20, v20[3]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    itemEnt = this->fields.itemEnt;
    v24 = (CommonUI_o *)Instance;
    v25 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    ItemDetailInfoComponent_CallbackFunc___ctor(
      v25,
      (Il2CppObject *)this,
      (intptr_t)Method_ClassBoardItemIconComponent_CloseItemDetail__,
      0LL);
    if ( v24 )
    {
      CommonUI__OpenItemDetailDialog(v24, itemEnt, v25, 51, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(gameObject, v18);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int64_t Master_WarQuestSelectionMaster; // x0
  __int64 v35; // x1
  struct ItemEntity_o *Entity; // x0
  struct ItemEntity_o **p_itemEnt; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  const MethodInfo *v44; // x2
  struct ItemEntity_o *itemEnt; // x8
  UserSvtCoinMaster_o *v46; // x22
  ItemIconComponent_o *itemIconComp; // x8
  UILabel_o *needTitleLb; // x20
  UILabel_o *haveTitleLb; // x20
  UILabel_o *haveNumLb; // x20
  Il2CppObject *v51; // x0
  UILabel_o *needNumLb; // x20
  Il2CppObject *v53; // x0
  UIWidget_o *v54; // x20
  int v55; // s0
  UIWidget_o *v59; // x20
  int v60; // s0
  UIWidget_o *v64; // x20
  int v65; // s0
  UnityEngine_Color32_o v69; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color32_o c; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Color32_o p_c; // 0:x0.8
  UnityEngine_Color32_o rgba; // 0:x0.8
  UnityEngine_Color32_o v73; // 0:x0.8
  UnityEngine_Color32_o v74; // 0:x0.8

  if ( (byte_42EA7F9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ItemMaster___, itemId, needNum, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7, v8, v9);
    sub_B5D5C4(&DataManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v13, v14, v15);
    sub_B5D5C4(&int_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&NetworkManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_3056/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_3058/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v31, v32, v33);
    byte_42EA7F9 = 1;
  }
  this->fields.currentItemId = itemId;
  this->fields.haveItemNum = 0;
  this->fields.needItemNum = needNum;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_38;
  Entity = (struct ItemEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                    this->fields.currentItemId,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  p_itemEnt = &this->fields.itemEnt;
  this->fields.itemEnt = Entity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemEnt,
    (System_Int32_array **)Entity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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
    v46 = (UserSvtCoinMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = NetworkManager__get_UserId(0LL);
    if ( !*p_itemEnt || !v46 )
      goto LABEL_38;
    Master_WarQuestSelectionMaster = (int64_t)UserSvtCoinMaster__GetEntity(
                                                v46,
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
                                       v44);
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
  Master_WarQuestSelectionMaster = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3058/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED"*/, 0LL);
  if ( !needTitleLb )
    goto LABEL_38;
  UILabel__set_text(needTitleLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  haveTitleLb = this->fields.haveTitleLb;
  Master_WarQuestSelectionMaster = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3056/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE"*/, 0LL);
  if ( !haveTitleLb )
    goto LABEL_38;
  UILabel__set_text(haveTitleLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  haveNumLb = this->fields.haveNumLb;
  c.fields.rgba = this->fields.haveItemNum;
  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &c);
  Master_WarQuestSelectionMaster = (int64_t)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v51, 0LL);
  if ( !haveNumLb )
    goto LABEL_38;
  UILabel__set_text(haveNumLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  needNumLb = this->fields.needNumLb;
  v69.fields.rgba = this->fields.needItemNum;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
  Master_WarQuestSelectionMaster = (int64_t)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v53, 0LL);
  if ( !needNumLb )
    goto LABEL_38;
  UILabel__set_text(needNumLb, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  if ( this->fields.haveItemNum >= this->fields.needItemNum )
  {
    v64 = (UIWidget_o *)this->fields.needTitleLb;
    this->fields.isItemNum = 1;
    *(UnityEngine_Color_o *)&v65 = UnityEngine_Color__get_white(0LL);
    if ( v64 )
    {
      UIWidget__set_color(v64, *(UnityEngine_Color_o *)&v65, 0LL);
      v59 = (UIWidget_o *)this->fields.needNumLb;
      *(UnityEngine_Color_o *)&v60 = UnityEngine_Color__get_white(0LL);
      if ( v59 )
        goto LABEL_35;
    }
LABEL_38:
    sub_B5D69C(Master_WarQuestSelectionMaster, v35);
  }
  v54 = (UIWidget_o *)this->fields.needTitleLb;
  p_c = (UnityEngine_Color32_o)&c;
  this->fields.isItemNum = 0;
  c.fields.rgba = 0;
  UnityEngine_Color32___ctor(p_c, 0xFFu, 0xFFu, 0, 0xFFu, 0LL);
  rgba = (UnityEngine_Color32_o)(unsigned int)c.fields.rgba;
  *(UnityEngine_Color_o *)&v55 = UnityEngine_Color32__op_Implicit_41570788(rgba, 0LL);
  if ( !v54 )
    goto LABEL_38;
  UIWidget__set_color(v54, *(UnityEngine_Color_o *)&v55, 0LL);
  v59 = (UIWidget_o *)this->fields.needNumLb;
  v73 = (UnityEngine_Color32_o)&v69;
  v69.fields.rgba = 0;
  UnityEngine_Color32___ctor(v73, 0xFFu, 0xFFu, 0, 0xFFu, 0LL);
  v74 = (UnityEngine_Color32_o)(unsigned int)v69.fields.rgba;
  *(UnityEngine_Color_o *)&v60 = UnityEngine_Color32__op_Implicit_41570788(v74, 0LL);
  if ( !v59 )
    goto LABEL_38;
LABEL_35:
  UIWidget__set_color(v59, *(UnityEngine_Color_o *)&v60, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.itemInfo;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  Master_WarQuestSelectionMaster = (int64_t)this->fields.statusInfo;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
}