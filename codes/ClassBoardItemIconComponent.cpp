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
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A01ED5 & 1) == 0 )
  {
    sub_1B64A00(&Method_ClassBoardItemIconComponent_CloseItemDetail__, isDecide);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4A01ED5 = 1;
  }
  v4 = Method_ClassBoardItemIconComponent_CloseItemDetail__;
  if ( (*((_BYTE *)Method_ClassBoardItemIconComponent_CloseItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B64A18(Method_ClassBoardItemIconComponent_CloseItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B649E4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)Instance, 0LL, 0LL);
        return;
      }
LABEL_13:
      sub_1B64C5C(Instance, v7);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  UserGameEntity_o *SelfUserGame; // x20
  int64_t Instance; // x0
  __int64 v9; // x1
  ItemMaster_o *v10; // x21
  int32_t *p_mana; // x8
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4A01ED3 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&objectId);
    sub_1B64A00(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1B64A00(&NetworkManager_TypeInfo, v5);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A01ED3 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_24;
  v10 = (ItemMaster_o *)Instance;
  Instance = ItemMaster__isQP((ItemMaster_o *)Instance, objectId, 0LL);
  if ( (Instance & 1) == 0 )
  {
    Instance = ItemMaster__isMana(v10, objectId, 0LL);
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
      Instance = ItemMaster__isRarePri(v10, objectId, 0LL);
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
        Instance = ItemMaster__isStone(v10, objectId, 0LL);
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
          Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_UserItemMaster___);
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
    sub_1B64C5C(Instance, v9);
  }
  if ( !SelfUserGame )
    goto LABEL_24;
  p_mana = &SelfUserGame->fields.qp;
  return *p_mana;
}


void __fastcall ClassBoardItemIconComponent__OnClickItem(ClassBoardItemIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *maskSprite; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  bool IsEnableItemLinkInfoWindow; // w22
  Il2CppObject *Instance; // x0
  ItemEntity_o *itemEnt; // x20
  CommonUI_o *v16; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v17; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v18; // x22

  if ( (byte_4A01ED4 & 1) == 0 )
  {
    sub_1B64A00(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, method);
    sub_1B64A00(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_1B64A00(&Method_ClassBoardItemIconComponent_CloseItemDetail__, v4);
    sub_1B64A00(&Method_ClassBoardItemIconComponent_OnClickItem__, v5);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4A01ED4 = 1;
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
    v11 = Method_ClassBoardItemIconComponent_OnClickItem__;
    if ( (*((_BYTE *)Method_ClassBoardItemIconComponent_OnClickItem__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1B64A18(Method_ClassBoardItemIconComponent_OnClickItem__);
    v12 = (System_Reflection_MethodBase_o *)sub_1B649E4(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( gameObject )
    {
      IsEnableItemLinkInfoWindow = CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)gameObject, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      itemEnt = this->fields.itemEnt;
      v16 = (CommonUI_o *)Instance;
      if ( IsEnableItemLinkInfoWindow )
      {
        v17 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B64C4C(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          (intptr_t)Method_ClassBoardItemIconComponent_CloseItemDetail__,
          0LL);
        if ( v16 )
        {
          CommonUI__OpenItemLinkInfoDetailWindow(v16, itemEnt, v17, 0, 0LL);
          return;
        }
      }
      else
      {
        v18 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64C4C(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          (intptr_t)Method_ClassBoardItemIconComponent_CloseItemDetail__,
          0LL);
        if ( v16 )
        {
          CommonUI__OpenItemDetailDialog(v16, itemEnt, v18, 51, 0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1B64C5C(gameObject, v9);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int64_t Master_object; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x0
  struct ItemEntity_o **p_itemEnt; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x2
  struct ItemEntity_o *itemEnt; // x8
  Il2CppObject *v24; // x22
  UserSvtCoinEntity_o *v25; // x0
  int32_t num; // w8
  UILabel_o *needTitleLb; // x20
  UILabel_o *haveTitleLb; // x20
  UILabel_o *haveNumLb; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  UILabel_o *needNumLb; // x20
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  float v39; // s9
  float v40; // s8
  int32_t NeedItemNum_k__BackingField; // [xsp+8h] [xbp-48h] BYREF
  int32_t haveItemNum; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A01ED2 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&itemId);
    sub_1B64A00(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7);
    sub_1B64A00(&DataManager_TypeInfo, v8);
    sub_1B64A00(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1B64A00(&int_TypeInfo, v10);
    sub_1B64A00(&LocalizationManager_TypeInfo, v11);
    sub_1B64A00(&NetworkManager_TypeInfo, v12);
    sub_1B64A00(&StringLiteral_3459/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE"*/, v13);
    sub_1B64A00(&StringLiteral_3461/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED"*/, v14);
    sub_1B64A00(&StringLiteral_24838/*"{0:#,0}"*/, v15);
    byte_4A01ED2 = 1;
  }
  this->fields.haveItemNum = 0;
  this->fields._NeedItemNum_k__BackingField = needNum;
  this->fields._CurrentItemId_k__BackingField = itemId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             this->fields._CurrentItemId_k__BackingField,
             (const MethodInfo_30D6798 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)Entity;
  p_itemEnt = &this->fields.itemEnt;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.itemEnt, (int32_t)Entity, v20, v21);
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
    v24 = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager__get_UserId(0LL);
    if ( !*p_itemEnt || !v24 )
      goto LABEL_36;
    v25 = UserSvtCoinMaster__GetEntity((UserSvtCoinMaster_o *)v24, Master_object, (*p_itemEnt)->fields.value, 0LL);
    if ( v25 )
      num = v25->fields.num;
    else
      num = 0;
  }
  else
  {
    num = ClassBoardItemIconComponent__GetHaveNum((ClassBoardItemIconComponent_o *)Master_object, itemId, v22);
  }
  Master_object = (int64_t)this->fields.itemIconComp;
  this->fields.haveItemNum = num;
  if ( !Master_object )
    goto LABEL_36;
  ItemIconComponent__SetCombineItem((ItemIconComponent_o *)Master_object, itemId, -1, 0LL);
  needTitleLb = this->fields.needTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3461/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED"*/, 0LL);
  if ( !needTitleLb )
    goto LABEL_36;
  UILabel__set_text(needTitleLb, (System_String_o *)Master_object, 0LL);
  haveTitleLb = this->fields.haveTitleLb;
  Master_object = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3459/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE"*/, 0LL);
  if ( !haveTitleLb )
    goto LABEL_36;
  UILabel__set_text(haveTitleLb, (System_String_o *)Master_object, 0LL);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveItemNum, v30, v31, v32);
  Master_object = (int64_t)System_String__Format((System_String_o *)StringLiteral_24838/*"{0:#,0}"*/, v33, 0LL);
  if ( !haveNumLb )
    goto LABEL_36;
  UILabel__set_text(haveNumLb, (System_String_o *)Master_object, 0LL);
  needNumLb = this->fields.needNumLb;
  NeedItemNum_k__BackingField = this->fields._NeedItemNum_k__BackingField;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &NeedItemNum_k__BackingField, v35, v36, v37);
  Master_object = (int64_t)System_String__Format((System_String_o *)StringLiteral_24838/*"{0:#,0}"*/, v38, 0LL);
  if ( !needNumLb )
    goto LABEL_36;
  UILabel__set_text(needNumLb, (System_String_o *)Master_object, 0LL);
  Master_object = (int64_t)this->fields.needTitleLb;
  if ( this->fields.haveItemNum >= this->fields._NeedItemNum_k__BackingField )
  {
    if ( Master_object )
    {
      v44.fields.r = 1.0;
      v44.fields.g = 1.0;
      v44.fields.b = 1.0;
      v44.fields.a = 1.0;
      v40 = 1.0;
      UIWidget__set_color((UIWidget_o *)Master_object, v44, 0LL);
      Master_object = (int64_t)this->fields.needNumLb;
      if ( Master_object )
      {
        v39 = 1.0;
        goto LABEL_33;
      }
    }
LABEL_36:
    sub_1B64C5C(Master_object, v17);
  }
  if ( !Master_object )
    goto LABEL_36;
  v43.fields.r = 1.0;
  v43.fields.g = 1.0;
  v43.fields.b = 0.0;
  v43.fields.a = 1.0;
  v39 = 0.0;
  v40 = 1.0;
  UIWidget__set_color((UIWidget_o *)Master_object, v43, 0LL);
  Master_object = (int64_t)this->fields.needNumLb;
  if ( !Master_object )
    goto LABEL_36;
LABEL_33:
  v45.fields.r = v40;
  v45.fields.g = v40;
  v45.fields.b = v39;
  v45.fields.a = v40;
  UIWidget__set_color((UIWidget_o *)Master_object, v45, 0LL);
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