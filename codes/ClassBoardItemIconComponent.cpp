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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5E59B & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardItemIconComponent_CloseItemDetail__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E59B = 1;
  }
  v3 = Method_ClassBoardItemIconComponent_CloseItemDetail__;
  if ( (*((_BYTE *)Method_ClassBoardItemIconComponent_CloseItemDetail__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_ClassBoardItemIconComponent_CloseItemDetail__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)Instance, 0LL, 0LL);
        return;
      }
LABEL_13:
      sub_1B8880C(Instance, v6);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
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
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4A5E599 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserItemMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E599 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_24;
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
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            Instance = NetworkManager__get_UserId(0LL);
            if ( MasterData_object )
            {
              Instance = (int64_t)UserItemMaster__GetEntityDefinitely(
                                    (UserItemMaster_o *)MasterData_object,
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
LABEL_24:
    sub_1B8880C(Instance, v6);
  }
  if ( !SelfUserGame )
    goto LABEL_24;
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
  bool IsEnableItemLinkInfoWindow; // w22
  Il2CppObject *Instance; // x0
  ItemEntity_o *itemEnt; // x20
  CommonUI_o *v11; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v12; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x22

  if ( (byte_4A5E59A & 1) == 0 )
  {
    sub_1B885B0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ClassBoardItemIconComponent_CloseItemDetail__);
    sub_1B885B0(&Method_ClassBoardItemIconComponent_OnClickItem__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E59A = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !gameObject )
      goto LABEL_19;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_19;
    if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0LL) )
      return;
  }
  if ( !this->fields.disableOpenItemDetailDialog )
  {
    v6 = Method_ClassBoardItemIconComponent_OnClickItem__;
    if ( (*((_BYTE *)Method_ClassBoardItemIconComponent_OnClickItem__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1B885C8(Method_ClassBoardItemIconComponent_OnClickItem__);
    v7 = (System_Reflection_MethodBase_o *)sub_1B88594(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( gameObject )
    {
      IsEnableItemLinkInfoWindow = CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)gameObject, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      itemEnt = this->fields.itemEnt;
      v11 = (CommonUI_o *)Instance;
      if ( IsEnableItemLinkInfoWindow )
      {
        v12 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B887FC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          (intptr_t)Method_ClassBoardItemIconComponent_CloseItemDetail__,
          0LL);
        if ( v11 )
        {
          CommonUI__OpenItemLinkInfoDetailWindow(v11, itemEnt, v12, 0, 0LL);
          return;
        }
      }
      else
      {
        v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B887FC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          (intptr_t)Method_ClassBoardItemIconComponent_CloseItemDetail__,
          0LL);
        if ( v11 )
        {
          CommonUI__OpenItemDetailDialog(v11, itemEnt, v13, 51, 0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1B8880C(gameObject, v4);
  }
}


void __fastcall ClassBoardItemIconComponent__SetDisableClick(
        ClassBoardItemIconComponent_o *this,
        const MethodInfo *method)
{
  this->fields.disableOpenItemDetailDialog = 1;
}


int32_t __fastcall ClassBoardItemIconComponent__get_CurrentItemId(
        ClassBoardItemIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._CurrentItemId_k__BackingField;
}


int32_t __fastcall ClassBoardItemIconComponent__get_NeedItemNum(
        ClassBoardItemIconComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._NeedItemNum_k__BackingField;
}


void __fastcall ClassBoardItemIconComponent__setItemInfo(
        ClassBoardItemIconComponent_o *this,
        int32_t itemId,
        int32_t needNum,
        const MethodInfo *method)
{
  int64_t Master_object; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  struct ItemEntity_o **p_itemEnt; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2
  struct ItemEntity_o *itemEnt; // x8
  Il2CppObject *v15; // x22
  UserSvtCoinEntity_o *v16; // x0
  int32_t num; // w8
  UILabel_o *needTitleLb; // x20
  UILabel_o *haveTitleLb; // x20
  UILabel_o *haveNumLb; // x20
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  UILabel_o *needNumLb; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  float v30; // s9
  float v31; // s8
  int32_t NeedItemNum_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t haveItemNum; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E598 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ItemMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserSvtCoinMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3481/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE"*/);
    sub_1B885B0(&StringLiteral_3483/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED"*/);
    sub_1B885B0(&StringLiteral_24933/*"{0:#,0}"*/);
    byte_4A5E598 = 1;
  }
  this->fields.haveItemNum = 0;
  this->fields._NeedItemNum_k__BackingField = needNum;
  this->fields._CurrentItemId_k__BackingField = itemId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields._CurrentItemId_k__BackingField,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)Entity;
  p_itemEnt = &this->fields.itemEnt;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemEnt, (int32_t)Entity, v11, v12);
  Master_object = (int64_t)this->fields.itemEnt;
  if ( !Master_object )
    goto LABEL_36;
  Master_object = ItemEntity__GetImageId((ItemEntity_o *)Master_object, 0LL);
  itemEnt = this->fields.itemEnt;
  this->fields.itemImgId = Master_object;
  if ( !itemEnt )
    goto LABEL_36;
  if ( itemEnt->fields.type == 29 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v15 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager__get_UserId(0LL);
    if ( !*p_itemEnt || !v15 )
      goto LABEL_36;
    v16 = UserSvtCoinMaster__GetEntity((UserSvtCoinMaster_o *)v15, Master_object, (*p_itemEnt)->fields.value, 0LL);
    if ( v16 )
      num = v16->fields.num;
    else
      num = 0;
  }
  else
  {
    num = ClassBoardItemIconComponent__GetHaveNum((ClassBoardItemIconComponent_o *)Master_object, itemId, v13);
  }
  Master_object = (int64_t)this->fields.itemIconComp;
  this->fields.haveItemNum = num;
  if ( !Master_object )
    goto LABEL_36;
  ItemIconComponent__SetCombineItem((ItemIconComponent_o *)Master_object, itemId, -1, 0LL);
  needTitleLb = this->fields.needTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3483/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED"*/, 0LL);
  if ( !needTitleLb )
    goto LABEL_36;
  UILabel__set_text(needTitleLb, (System_String_o *)Master_object, 0LL);
  haveTitleLb = this->fields.haveTitleLb;
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3481/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE"*/, 0LL);
  if ( !haveTitleLb )
    goto LABEL_36;
  UILabel__set_text(haveTitleLb, (System_String_o *)Master_object, 0LL);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveItemNum, v21, v22, v23);
  Master_object = (int64_t)System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v24, 0LL);
  if ( !haveNumLb )
    goto LABEL_36;
  UILabel__set_text(haveNumLb, (System_String_o *)Master_object, 0LL);
  needNumLb = this->fields.needNumLb;
  NeedItemNum_k__BackingField = this->fields._NeedItemNum_k__BackingField;
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &NeedItemNum_k__BackingField, v26, v27, v28);
  Master_object = (int64_t)System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v29, 0LL);
  if ( !needNumLb )
    goto LABEL_36;
  UILabel__set_text(needNumLb, (System_String_o *)Master_object, 0LL);
  Master_object = (int64_t)this->fields.needTitleLb;
  if ( this->fields.haveItemNum >= this->fields._NeedItemNum_k__BackingField )
  {
    if ( Master_object )
    {
      v35.fields.r = 1.0;
      v35.fields.g = 1.0;
      v35.fields.b = 1.0;
      v35.fields.a = 1.0;
      v31 = 1.0;
      UIWidget__set_color((UIWidget_o *)Master_object, v35, 0LL);
      Master_object = (int64_t)this->fields.needNumLb;
      if ( Master_object )
      {
        v30 = 1.0;
        goto LABEL_33;
      }
    }
LABEL_36:
    sub_1B8880C(Master_object, v8);
  }
  if ( !Master_object )
    goto LABEL_36;
  v34.fields.r = 1.0;
  v34.fields.g = 1.0;
  v34.fields.b = 0.0;
  v34.fields.a = 1.0;
  v30 = 0.0;
  v31 = 1.0;
  UIWidget__set_color((UIWidget_o *)Master_object, v34, 0LL);
  Master_object = (int64_t)this->fields.needNumLb;
  if ( !Master_object )
    goto LABEL_36;
LABEL_33:
  v36.fields.r = v31;
  v36.fields.g = v31;
  v36.fields.b = v30;
  v36.fields.a = v31;
  UIWidget__set_color((UIWidget_o *)Master_object, v36, 0LL);
  Master_object = (int64_t)this->fields.itemInfo;
  if ( !Master_object )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (int64_t)this->fields.statusInfo;
  if ( !Master_object )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
}


void __fastcall ClassBoardItemIconComponent__set_CurrentItemId(
        ClassBoardItemIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CurrentItemId_k__BackingField = value;
}


void __fastcall ClassBoardItemIconComponent__set_NeedItemNum(
        ClassBoardItemIconComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._NeedItemNum_k__BackingField = value;
}