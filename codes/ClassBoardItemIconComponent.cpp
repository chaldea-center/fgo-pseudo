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
  __int64 v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B196C9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClassBoardItemIconComponent_CloseItemDetail__, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    byte_4B196C9 = 1;
  }
  v5 = Method_ClassBoardItemIconComponent_CloseItemDetail__;
  if ( (*((_BYTE *)Method_ClassBoardItemIconComponent_CloseItemDetail__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardItemIconComponent_CloseItemDetail__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)Instance, 0LL, 0LL);
        return;
      }
LABEL_13:
      sub_1BCAA3C(Instance, v8);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ClassBoardItemIconComponent__GetHaveNum(
        ClassBoardItemIconComponent_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UserGameEntity_o *SelfUserGame; // x20
  int64_t Instance; // x0
  __int64 v12; // x1
  ItemMaster_o *v13; // x21
  int32_t *p_mana; // x8
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B196C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&objectId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserItemMaster___, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B196C7 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_24;
  v13 = (ItemMaster_o *)Instance;
  Instance = ItemMaster__isQP((ItemMaster_o *)Instance, objectId, 0LL);
  if ( (Instance & 1) == 0 )
  {
    Instance = ItemMaster__isMana(v13, objectId, 0LL);
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
      Instance = ItemMaster__isRarePri(v13, objectId, 0LL);
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
        Instance = ItemMaster__isStone(v13, objectId, 0LL);
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
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
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
    sub_1BCAA3C(Instance, v12);
  }
  if ( !SelfUserGame )
    goto LABEL_24;
  p_mana = &SelfUserGame->fields.qp;
  return *p_mana;
}


void __fastcall ClassBoardItemIconComponent__OnClickItem(ClassBoardItemIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *maskSprite; // x20
  __int64 v15; // x1
  UnityEngine_Component_o *gameObject; // x0
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  bool IsEnableItemLinkInfoWindow; // w22
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  ItemEntity_o *itemEnt; // x20
  CommonUI_o *v25; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v26; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v27; // x22

  if ( (byte_4B196C8 & 1) == 0 )
  {
    sub_1BCA7E0(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardItemIconComponent_CloseItemDetail__, v6, v7);
    sub_1BCA7E0(&Method_ClassBoardItemIconComponent_OnClickItem__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    byte_4B196C8 = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    v17 = Method_ClassBoardItemIconComponent_OnClickItem__;
    if ( (*((_BYTE *)Method_ClassBoardItemIconComponent_OnClickItem__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardItemIconComponent_OnClickItem__);
    v18 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( gameObject )
    {
      IsEnableItemLinkInfoWindow = CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)gameObject, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      itemEnt = this->fields.itemEnt;
      v25 = (CommonUI_o *)Instance;
      if ( IsEnableItemLinkInfoWindow )
      {
        v26 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                              ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo,
                                                              v21,
                                                              v22,
                                                              v23);
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v26,
          (Il2CppObject *)this,
          (intptr_t)Method_ClassBoardItemIconComponent_CloseItemDetail__,
          0LL);
        if ( v25 )
        {
          CommonUI__OpenItemLinkInfoDetailWindow(v25, itemEnt, v26, 0, 0LL);
          return;
        }
      }
      else
      {
        v27 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          v21,
                                                          v22,
                                                          v23);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v27,
          (Il2CppObject *)this,
          (intptr_t)Method_ClassBoardItemIconComponent_CloseItemDetail__,
          0LL);
        if ( v25 )
        {
          CommonUI__OpenItemDetailDialog(v25, itemEnt, v27, 51, 0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1BCAA3C(gameObject, v15);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardItemIconComponent__setItemInfo(
        ClassBoardItemIconComponent_o *this,
        int32_t itemId,
        int32_t needNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  int64_t Master_object; // x0
  __int64 v26; // x1
  Il2CppObject *Entity; // x0
  struct ItemEntity_o **p_itemEnt; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x2
  struct ItemEntity_o *itemEnt; // x8
  __int64 v37; // x1
  Il2CppObject *v38; // x22
  UserSvtCoinEntity_o *v39; // x0
  int32_t num; // w8
  __int64 v41; // x1
  UILabel_o *needTitleLb; // x20
  UILabel_o *haveTitleLb; // x20
  UILabel_o *haveNumLb; // x20
  Il2CppObject *v45; // x0
  UILabel_o *needNumLb; // x20
  Il2CppObject *v47; // x0
  float v48; // s9
  float v49; // s8
  int32_t NeedItemNum_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t haveItemNum; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B196C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&itemId, *(_QWORD *)&needNum);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v11, v12);
    sub_1BCA7E0(&int_TypeInfo, v13, v14);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v15, v16);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_3507/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_3509/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v23, v24);
    byte_4B196C6 = 1;
  }
  this->fields.haveItemNum = 0;
  this->fields._NeedItemNum_k__BackingField = needNum;
  this->fields._CurrentItemId_k__BackingField = itemId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&itemId);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields._CurrentItemId_k__BackingField,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)Entity;
  p_itemEnt = &this->fields.itemEnt;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.itemEnt, (int64_t)Entity, v29, v30, v31, v32, v33, v34);
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v26);
    v38 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v37);
    Master_object = NetworkManager__get_UserId(0LL);
    if ( !*p_itemEnt || !v38 )
      goto LABEL_36;
    v39 = UserSvtCoinMaster__GetEntity((UserSvtCoinMaster_o *)v38, Master_object, (*p_itemEnt)->fields.value, 0LL);
    if ( v39 )
      num = v39->fields.num;
    else
      num = 0;
  }
  else
  {
    num = ClassBoardItemIconComponent__GetHaveNum((ClassBoardItemIconComponent_o *)Master_object, itemId, v35);
  }
  Master_object = (int64_t)this->fields.itemIconComp;
  this->fields.haveItemNum = num;
  if ( !Master_object )
    goto LABEL_36;
  ItemIconComponent__SetCombineItem((ItemIconComponent_o *)Master_object, itemId, -1, 0LL);
  needTitleLb = this->fields.needTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v41);
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3509/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED"*/, 0LL);
  if ( !needTitleLb )
    goto LABEL_36;
  UILabel__set_text(needTitleLb, (System_String_o *)Master_object, 0LL);
  haveTitleLb = this->fields.haveTitleLb;
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3507/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE"*/, 0LL);
  if ( !haveTitleLb )
    goto LABEL_36;
  UILabel__set_text(haveTitleLb, (System_String_o *)Master_object, 0LL);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveItemNum);
  Master_object = (int64_t)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v45, 0LL);
  if ( !haveNumLb )
    goto LABEL_36;
  UILabel__set_text(haveNumLb, (System_String_o *)Master_object, 0LL);
  needNumLb = this->fields.needNumLb;
  NeedItemNum_k__BackingField = this->fields._NeedItemNum_k__BackingField;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &NeedItemNum_k__BackingField);
  Master_object = (int64_t)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v47, 0LL);
  if ( !needNumLb )
    goto LABEL_36;
  UILabel__set_text(needNumLb, (System_String_o *)Master_object, 0LL);
  Master_object = (int64_t)this->fields.needTitleLb;
  if ( this->fields.haveItemNum >= this->fields._NeedItemNum_k__BackingField )
  {
    if ( Master_object )
    {
      v53.fields.r = 1.0;
      v53.fields.g = 1.0;
      v53.fields.b = 1.0;
      v53.fields.a = 1.0;
      v49 = 1.0;
      UIWidget__set_color((UIWidget_o *)Master_object, v53, 0LL);
      Master_object = (int64_t)this->fields.needNumLb;
      if ( Master_object )
      {
        v48 = 1.0;
        goto LABEL_33;
      }
    }
LABEL_36:
    sub_1BCAA3C(Master_object, v26);
  }
  if ( !Master_object )
    goto LABEL_36;
  v52.fields.r = 1.0;
  v52.fields.g = 1.0;
  v52.fields.b = 0.0;
  v52.fields.a = 1.0;
  v48 = 0.0;
  v49 = 1.0;
  UIWidget__set_color((UIWidget_o *)Master_object, v52, 0LL);
  Master_object = (int64_t)this->fields.needNumLb;
  if ( !Master_object )
    goto LABEL_36;
LABEL_33:
  v54.fields.r = v49;
  v54.fields.g = v49;
  v54.fields.b = v48;
  v54.fields.a = v49;
  UIWidget__set_color((UIWidget_o *)Master_object, v54, 0LL);
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