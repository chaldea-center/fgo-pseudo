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

  if ( (byte_4BCB05C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ClassBoardItemIconComponent_CloseItemDetail__, isDecide);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4BCB05C = 1;
  }
  v4 = Method_ClassBoardItemIconComponent_CloseItemDetail__;
  if ( (*((_BYTE *)Method_ClassBoardItemIconComponent_CloseItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C1ABEC(Method_ClassBoardItemIconComponent_CloseItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)Instance, 0LL, 0LL);
        return;
      }
LABEL_13:
      sub_1C1AE30(Instance, v7);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  void *Instance; // x0
  __int64 v9; // x1
  ItemMaster_o *v10; // x21
  int32_t *p_mana; // x8
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4BCB05A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&objectId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4BCB05A = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_28;
  v10 = (ItemMaster_o *)Instance;
  Instance = (void *)ItemMaster__isQP((ItemMaster_o *)Instance, objectId, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    Instance = (void *)ItemMaster__isMana(v10, objectId, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( SelfUserGame )
      {
        p_mana = &SelfUserGame->fields.mana;
        return *p_mana;
      }
    }
    else
    {
      Instance = (void *)ItemMaster__isRarePri(v10, objectId, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( SelfUserGame )
        {
          p_mana = &SelfUserGame->fields.rarePri;
          return *p_mana;
        }
      }
      else
      {
        Instance = (void *)ItemMaster__isStone(v10, objectId, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( SelfUserGame )
          {
            p_mana = &SelfUserGame->fields.stone;
            return *p_mana;
          }
        }
        else
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserItemMaster___);
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4BC2585 )
            {
              sub_1C1ABD4(&NetworkManager_TypeInfo, v9);
              byte_4BC2585 = 1;
            }
            Instance = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              Instance = NetworkManager_TypeInfo;
            }
            if ( MasterData_object )
            {
              Instance = UserItemMaster__GetEntityDefinitely(
                           (UserItemMaster_o *)MasterData_object,
                           *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                           objectId,
                           0LL);
              if ( Instance )
              {
                p_mana = (int32_t *)((char *)Instance + 28);
                return *p_mana;
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C1AE30(Instance, v9);
  }
  if ( !SelfUserGame )
    goto LABEL_28;
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

  if ( (byte_4BCB05B & 1) == 0 )
  {
    sub_1C1ABD4(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_1C1ABD4(&Method_ClassBoardItemIconComponent_CloseItemDetail__, v4);
    sub_1C1ABD4(&Method_ClassBoardItemIconComponent_OnClickItem__, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4BCB05B = 1;
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
      v11 = (_QWORD *)sub_1C1ABEC(Method_ClassBoardItemIconComponent_OnClickItem__);
    v12 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( gameObject )
    {
      IsEnableItemLinkInfoWindow = CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)gameObject, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      itemEnt = this->fields.itemEnt;
      v16 = (CommonUI_o *)Instance;
      if ( IsEnableItemLinkInfoWindow )
      {
        v17 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C1AE20(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
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
        v18 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C1AE20(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
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
    sub_1C1AE30(gameObject, v9);
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x0
  struct ItemEntity_o **p_itemEnt; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x2
  struct ItemEntity_o *itemEnt; // x8
  Il2CppObject *v28; // x22
  UserSvtCoinEntity_o *v29; // x0
  int32_t num; // w8
  UILabel_o *needTitleLb; // x20
  UILabel_o *haveTitleLb; // x20
  UILabel_o *haveNumLb; // x20
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  UILabel_o *needNumLb; // x20
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  float v43; // s9
  float v44; // s8
  int32_t NeedItemNum_k__BackingField; // [xsp+18h] [xbp-38h] BYREF
  int32_t haveItemNum; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BCB059 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&itemId);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7);
    sub_1C1ABD4(&DataManager_TypeInfo, v8);
    sub_1C1ABD4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1C1ABD4(&int_TypeInfo, v10);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v11);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v12);
    sub_1C1ABD4(&StringLiteral_3522/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE"*/, v13);
    sub_1C1ABD4(&StringLiteral_3524/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED"*/, v14);
    sub_1C1ABD4(&StringLiteral_25354/*"{0:#,0}"*/, v15);
    byte_4BCB059 = 1;
  }
  this->fields.haveItemNum = 0;
  this->fields._NeedItemNum_k__BackingField = needNum;
  this->fields._CurrentItemId_k__BackingField = itemId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             this->fields._CurrentItemId_k__BackingField,
             (const MethodInfo_3248678 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)Entity;
  p_itemEnt = &this->fields.itemEnt;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.itemEnt, (int64_t)Entity, v20, v21, v22, v23, v24, v25);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemEnt;
  if ( !Master_object )
    goto LABEL_40;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ItemEntity__GetImageId(
                                                                  (ItemEntity_o *)Master_object,
                                                                  0LL);
  itemEnt = this->fields.itemEnt;
  this->fields.itemImgId = (int)Master_object;
  if ( !itemEnt )
    goto LABEL_40;
  if ( itemEnt->fields.type == 29 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v28 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BC2585 )
    {
      sub_1C1ABD4(&NetworkManager_TypeInfo, v17);
      byte_4BC2585 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
    }
    if ( !*p_itemEnt || !v28 )
      goto LABEL_40;
    v29 = UserSvtCoinMaster__GetEntity(
            (UserSvtCoinMaster_o *)v28,
            (int64_t)Master_object[2].fields.list[1].monitor,
            (*p_itemEnt)->fields.value,
            0LL);
    if ( v29 )
      num = v29->fields.num;
    else
      num = 0;
  }
  else
  {
    num = ClassBoardItemIconComponent__GetHaveNum((ClassBoardItemIconComponent_o *)Master_object, itemId, v26);
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemIconComp;
  this->fields.haveItemNum = num;
  if ( !Master_object )
    goto LABEL_40;
  ItemIconComponent__SetCombineItem((ItemIconComponent_o *)Master_object, itemId, -1, 0LL);
  needTitleLb = this->fields.needTitleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3524/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED"*/,
                                                                  0LL);
  if ( !needTitleLb )
    goto LABEL_40;
  UILabel__set_text(needTitleLb, (System_String_o *)Master_object, 0LL);
  haveTitleLb = this->fields.haveTitleLb;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3522/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE"*/,
                                                                  0LL);
  if ( !haveTitleLb )
    goto LABEL_40;
  UILabel__set_text(haveTitleLb, (System_String_o *)Master_object, 0LL);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &haveItemNum, v34, v35, v36);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_25354/*"{0:#,0}"*/,
                                                                  v37,
                                                                  0LL);
  if ( !haveNumLb )
    goto LABEL_40;
  UILabel__set_text(haveNumLb, (System_String_o *)Master_object, 0LL);
  needNumLb = this->fields.needNumLb;
  NeedItemNum_k__BackingField = this->fields._NeedItemNum_k__BackingField;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &NeedItemNum_k__BackingField, v39, v40, v41);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_25354/*"{0:#,0}"*/,
                                                                  v42,
                                                                  0LL);
  if ( !needNumLb )
    goto LABEL_40;
  UILabel__set_text(needNumLb, (System_String_o *)Master_object, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needTitleLb;
  if ( this->fields.haveItemNum >= this->fields._NeedItemNum_k__BackingField )
  {
    if ( Master_object )
    {
      v48.fields.r = 1.0;
      v48.fields.g = 1.0;
      v48.fields.b = 1.0;
      v48.fields.a = 1.0;
      v44 = 1.0;
      UIWidget__set_color((UIWidget_o *)Master_object, v48, 0LL);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needNumLb;
      if ( Master_object )
      {
        v43 = 1.0;
        goto LABEL_37;
      }
    }
LABEL_40:
    sub_1C1AE30(Master_object, v17);
  }
  if ( !Master_object )
    goto LABEL_40;
  v47.fields.r = 1.0;
  v47.fields.g = 1.0;
  v47.fields.b = 0.0;
  v47.fields.a = 1.0;
  v43 = 0.0;
  v44 = 1.0;
  UIWidget__set_color((UIWidget_o *)Master_object, v47, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needNumLb;
  if ( !Master_object )
    goto LABEL_40;
LABEL_37:
  v49.fields.r = v44;
  v49.fields.g = v44;
  v49.fields.b = v43;
  v49.fields.a = v44;
  UIWidget__set_color((UIWidget_o *)Master_object, v49, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.itemInfo;
  if ( !Master_object )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.statusInfo;
  if ( !Master_object )
    goto LABEL_40;
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