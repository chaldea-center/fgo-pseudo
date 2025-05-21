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

  if ( (byte_4B482DC & 1) == 0 )
  {
    sub_1BDB878(&Method_ClassBoardItemIconComponent_CloseItemDetail__, isDecide);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    byte_4B482DC = 1;
  }
  v4 = Method_ClassBoardItemIconComponent_CloseItemDetail__;
  if ( (*((_BYTE *)Method_ClassBoardItemIconComponent_CloseItemDetail__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BDB890(Method_ClassBoardItemIconComponent_CloseItemDetail__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)Instance, 0LL, 0LL);
        return;
      }
LABEL_13:
      sub_1BDBAD4(Instance, v7);
    }
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  CommonUI__CloseItemDetailDialog((CommonUI_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall ClassBoardItemIconComponent__GetHaveNum(
        ClassBoardItemIconComponent_o *this,
        int32_t objectId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserGameEntity_o *SelfUserGame; // x20
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  ItemMaster_o *v10; // x21
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B482DA & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&objectId);
    sub_1BDB878(&Method_DataManager_GetMasterData_UserItemMaster___, v4);
    sub_1BDB878(&NetworkManager_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B482DA = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !Instance )
    goto LABEL_27;
  v10 = (ItemMaster_o *)Instance;
  Instance = (DataManager_o *)ItemMaster__isQP((ItemMaster_o *)Instance, objectId, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( SelfUserGame )
      return SelfUserGame->fields.qp;
LABEL_27:
    sub_1BDBAD4(Instance, v9);
  }
  Instance = (DataManager_o *)ItemMaster__isMana(v10, objectId, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !SelfUserGame )
      goto LABEL_27;
    return SelfUserGame->fields.mana;
  }
  else
  {
    Instance = (DataManager_o *)ItemMaster__isRarePri(v10, objectId, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !SelfUserGame )
        goto LABEL_27;
      return SelfUserGame->fields.rarePri;
    }
    else
    {
      Instance = (DataManager_o *)ItemMaster__isStone(v10, objectId, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !SelfUserGame )
          goto LABEL_27;
        return SelfUserGame->fields.stone;
      }
      else
      {
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance )
          goto LABEL_27;
        MasterData_object = DataManager__GetMasterData_object_(
                              Instance,
                              (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserItemMaster___);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4B3ED56 )
        {
          sub_1BDB878(&NetworkManager_TypeInfo, v9);
          byte_4B3ED56 = 1;
        }
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (DataManager_o *)NetworkManager_TypeInfo;
        }
        if ( !MasterData_object )
          goto LABEL_27;
        Instance = (DataManager_o *)UserItemMaster__GetEntityDefinitely(
                                      (UserItemMaster_o *)MasterData_object,
                                      *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                      objectId,
                                      0LL);
        if ( !Instance )
          goto LABEL_27;
        return SHIDWORD(Instance->fields.m_CancellationTokenSource);
      }
    }
  }
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

  if ( (byte_4B482DB & 1) == 0 )
  {
    sub_1BDB878(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, method);
    sub_1BDB878(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v3);
    sub_1BDB878(&Method_ClassBoardItemIconComponent_CloseItemDetail__, v4);
    sub_1BDB878(&Method_ClassBoardItemIconComponent_OnClickItem__, v5);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4B482DB = 1;
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
      v11 = (_QWORD *)sub_1BDB890(Method_ClassBoardItemIconComponent_OnClickItem__);
    v12 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( gameObject )
    {
      IsEnableItemLinkInfoWindow = CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)gameObject, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      itemEnt = this->fields.itemEnt;
      v16 = (CommonUI_o *)Instance;
      if ( IsEnableItemLinkInfoWindow )
      {
        v17 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1BDBAC4(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
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
        v18 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BDBAC4(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
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
    sub_1BDBAD4(gameObject, v9);
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
  __int64 v16; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v18; // x1
  Il2CppObject *Entity; // x0
  struct ItemEntity_o **p_itemEnt; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  struct ItemEntity_o *itemEnt; // x8
  Il2CppObject *v25; // x22
  UserSvtCoinEntity_o *v26; // x0
  int64_t num; // x8
  UILabel_o *needTitleLb; // x20
  UILabel_o *haveTitleLb; // x20
  UILabel_o *haveNumLb; // x20
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  UILabel_o *needNumLb; // x20
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  float v40; // s9
  float v41; // s8
  int32_t NeedItemNum_k__BackingField; // [xsp+Ch] [xbp-54h] BYREF
  int64_t haveItemNum; // [xsp+28h] [xbp-38h] BYREF
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B482D9 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ItemMaster___, *(_QWORD *)&itemId);
    sub_1BDB878(&Method_DataManager_GetMaster_UserSvtCoinMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v9);
    sub_1BDB878(&int_TypeInfo, v10);
    sub_1BDB878(&long_TypeInfo, v11);
    sub_1BDB878(&LocalizationManager_TypeInfo, v12);
    sub_1BDB878(&NetworkManager_TypeInfo, v13);
    sub_1BDB878(&StringLiteral_3413/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE"*/, v14);
    sub_1BDB878(&StringLiteral_3415/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED"*/, v15);
    sub_1BDB878(&StringLiteral_25126/*"{0:#,0}"*/, v16);
    byte_4B482D9 = 1;
  }
  this->fields.haveItemNum = 0LL;
  this->fields._NeedItemNum_k__BackingField = needNum;
  this->fields._CurrentItemId_k__BackingField = itemId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ItemMaster___);
  if ( !Master_object )
    goto LABEL_40;
  Entity = DataMasterBase_object__object__int___GetEntity(
             Master_object,
             this->fields._CurrentItemId_k__BackingField,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
  this->fields.itemEnt = (struct ItemEntity_o *)Entity;
  p_itemEnt = &this->fields.itemEnt;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.itemEnt, (int32_t)Entity, v21, v22);
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
    v25 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserSvtCoinMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4B3ED56 )
    {
      sub_1BDB878(&NetworkManager_TypeInfo, v18);
      byte_4B3ED56 = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)NetworkManager_TypeInfo;
    }
    if ( !*p_itemEnt || !v25 )
      goto LABEL_40;
    v26 = UserSvtCoinMaster__GetEntity(
            (UserSvtCoinMaster_o *)v25,
            (int64_t)Master_object[2].fields.list[1].monitor,
            (*p_itemEnt)->fields.value,
            0LL);
    if ( v26 )
      num = v26->fields.num;
    else
      num = 0LL;
  }
  else
  {
    num = ClassBoardItemIconComponent__GetHaveNum((ClassBoardItemIconComponent_o *)Master_object, itemId, v23);
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
                                                                  (System_String_o *)StringLiteral_3415/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED"*/,
                                                                  0LL);
  if ( !needTitleLb )
    goto LABEL_40;
  UILabel__set_text(needTitleLb, (System_String_o *)Master_object, 0LL);
  haveTitleLb = this->fields.haveTitleLb;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                  (System_String_o *)StringLiteral_3413/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE"*/,
                                                                  0LL);
  if ( !haveTitleLb )
    goto LABEL_40;
  UILabel__set_text(haveTitleLb, (System_String_o *)Master_object, 0LL);
  haveNumLb = this->fields.haveNumLb;
  haveItemNum = this->fields.haveItemNum;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &haveItemNum, v31, v32, v33);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_25126/*"{0:#,0}"*/,
                                                                  v34,
                                                                  0LL);
  if ( !haveNumLb )
    goto LABEL_40;
  UILabel__set_text(haveNumLb, (System_String_o *)Master_object, 0LL);
  needNumLb = this->fields.needNumLb;
  NeedItemNum_k__BackingField = this->fields._NeedItemNum_k__BackingField;
  v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &NeedItemNum_k__BackingField, v36, v37, v38);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_25126/*"{0:#,0}"*/,
                                                                  v39,
                                                                  0LL);
  if ( !needNumLb )
    goto LABEL_40;
  UILabel__set_text(needNumLb, (System_String_o *)Master_object, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needTitleLb;
  if ( this->fields.haveItemNum >= this->fields._NeedItemNum_k__BackingField )
  {
    if ( Master_object )
    {
      v45.fields.r = 1.0;
      v45.fields.g = 1.0;
      v45.fields.b = 1.0;
      v45.fields.a = 1.0;
      v41 = 1.0;
      UIWidget__set_color((UIWidget_o *)Master_object, v45, 0LL);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needNumLb;
      if ( Master_object )
      {
        v40 = 1.0;
        goto LABEL_37;
      }
    }
LABEL_40:
    sub_1BDBAD4(Master_object, v18);
  }
  if ( !Master_object )
    goto LABEL_40;
  v44.fields.r = 1.0;
  v44.fields.g = 1.0;
  v44.fields.b = 0.0;
  v44.fields.a = 1.0;
  v40 = 0.0;
  v41 = 1.0;
  UIWidget__set_color((UIWidget_o *)Master_object, v44, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.needNumLb;
  if ( !Master_object )
    goto LABEL_40;
LABEL_37:
  v46.fields.r = v41;
  v46.fields.g = v41;
  v46.fields.b = v40;
  v46.fields.a = v41;
  UIWidget__set_color((UIWidget_o *)Master_object, v46, 0LL);
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