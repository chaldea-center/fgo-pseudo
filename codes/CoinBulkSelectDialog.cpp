void CoinBulkSelectDialog___ctor(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CCB114 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CCB114 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CoinBulkSelectDialog__Close(CoinBulkSelectDialog_o *this, System_Action_int__o *action, const MethodInfo *method)
{
  System_Action_o *v5; // x21

  if ( (byte_4CCB10E & 1) == 0 )
  {
    sub_1C713B0(&Method_ActionExtensions_Call_int___);
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CoinBulkSelectDialog_EndClose__);
    byte_4CCB10E = 1;
  }
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CoinBulkSelectDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0);
  if ( action )
    ActionExtensions__Call_int_(
      (System_Action_T__o *)action,
      this->fields.selectNum,
      (const MethodInfo_3095C68 *)Method_ActionExtensions_Call_int___);
}


void CoinBulkSelectDialog__EndClose(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  CoinBulkSelectDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void CoinBulkSelectDialog__EndOpen(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void CoinBulkSelectDialog__Init(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.userSvtCoinEntity = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.userSvtCoinEntity, 0, v5, v6, v7, v8, v9, v10);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


int64_t CoinBulkSelectDialog__ItemMaxOverCheck(CoinBulkSelectDialog_o *this, int64_t point, const MethodInfo *method)
{
  if ( this->fields.maxPoint >= point )
    return point;
  else
    return this->fields.maxPoint;
}


void CoinBulkSelectDialog__OnClickCancel(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4CCB110 & 1) == 0 )
  {
    sub_1C713B0(&Method_CoinBulkSelectDialog_OnClickCancel__);
    byte_4CCB110 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.isOpen = 0;
    v3 = Method_CoinBulkSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinBulkSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CoinBulkSelectDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C71608(0, v5);
    UISliderWithButton__grayMode(itemSlider, 0);
    CoinBulkSelectDialog__Close(this, 0, v7);
  }
}


void CoinBulkSelectDialog__OnClickDecide(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct System_Action_CoinRoomCoinIconObject__int__o *onDecideAction; // x20

  if ( (byte_4CCB10F & 1) == 0 )
  {
    sub_1C713B0(&Method_CoinBulkSelectDialog_OnClickDecide__);
    byte_4CCB10F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_CoinBulkSelectDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinBulkSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_CoinBulkSelectDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    onDecideAction = this->fields.onDecideAction;
    if ( onDecideAction )
    {
      this->fields.onDecideAction = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.onDecideAction, 0, v5, v6, v7, v8, v9, v10);
      ((void (__fastcall *)(intptr_t, struct CoinRoomCoinIconObject_o *, _QWORD, intptr_t))onDecideAction->fields.invoke_impl)(
        onDecideAction->fields.method_code,
        this->fields.iconObject,
        (unsigned int)this->fields.selectNum,
        onDecideAction->fields.method);
    }
  }
}


void CoinBulkSelectDialog__OnEnable(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4CCB113 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_15645/*"Window/CancelButton"*/);
    byte_4CCB113 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_45260884(transform, (System_String_o *)StringLiteral_15645/*"Window/CancelButton"*/, 0);
}


void CoinBulkSelectDialog__Open(
        CoinBulkSelectDialog_o *this,
        UserSvtCoinEntity_o *entity,
        CoinRoomCoinIconObject_o *iconObject,
        int32_t sumPoint,
        System_Action_CoinRoomCoinIconObject__int__o *onDecideAction,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct UserSvtCoinEntity_o **p_userSvtCoinEntity; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  CoinRoomCoinIconItem_o *linkItem; // x24
  __int64 naturalAligment; // x9
  Il2CppObject *Instance; // x0
  DataManager_o *v31; // x22
  UILabel_o *subTitleLabel; // x23
  UILabel_o *selectInfoLabel; // x23
  const MethodInfo *v34; // x4
  Il2CppObject *v35; // x23
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *Name; // x22
  System_String_o *v38; // x0
  UILabel_o *itemName; // x23
  int32_t v40; // w0
  const MethodInfo *v41; // x3
  int32_t maxPoint; // w21
  int32_t currentPoint; // w22
  int32_t num; // w20
  int v45; // w20
  System_Action_o *v46; // x20
  CoinRoomCoinIconDraw_o *v47; // x0
  CoinRoomCoinIconItem_o *v48; // x1
  int32_t v49; // w2
  bool v50; // w3
  const MethodInfo *v51; // x4
  UserServantCollectionEntity_o *entitya; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CCB10D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_CoinBulkSelectDialog_EndOpen__);
    sub_1C713B0(&CoinRoomCoinIconItem_TypeInfo);
    sub_1C713B0(&CoinRoomUtility_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentInChildren_CoinRoomCoinIconDraw___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&System_Math_TypeInfo);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_3552/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/);
    sub_1C713B0(&StringLiteral_3549/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_NAME"*/);
    sub_1C713B0(&StringLiteral_3550/*"COIN_ROOM_SELECT_DIALOD_SELECT_INFO_TXET"*/);
    byte_4CCB10D = 1;
  }
  entitya = 0;
  if ( !this->fields.state )
  {
    this->fields.onDecideAction = onDecideAction;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.onDecideAction,
      (int32_t)onDecideAction,
      (int32_t)iconObject,
      sumPoint,
      (System_String_o *)onDecideAction,
      (int32_t)method,
      v6,
      v7);
    this->fields.userSvtCoinEntity = entity;
    p_userSvtCoinEntity = &this->fields.userSvtCoinEntity;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.userSvtCoinEntity,
      (int32_t)entity,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      this->fields.iconObject = iconObject;
      this->fields.isOpen = 0;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&this->fields.iconObject,
        (int32_t)iconObject,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      if ( iconObject )
      {
        linkItem = (CoinRoomCoinIconItem_o *)iconObject->fields.linkItem;
        if ( linkItem )
        {
          naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
          if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != CoinRoomCoinIconItem_TypeInfo )
          {
            sub_1C719A4(iconObject->fields.linkItem);
            CoinRoomCoinIconDraw__SetItem(v47, v48, v49, v50, v51);
            return;
          }
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        this->fields.selectNum = 1;
        v31 = (DataManager_o *)Instance;
        if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        this->fields.maxPoint = CoinRoomUtility__MaxPoint(0) - sumPoint;
        subTitleLabel = this->fields.subTitleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3552/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, 0);
        if ( subTitleLabel )
        {
          UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0);
          selectInfoLabel = this->fields.selectInfoLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3550/*"COIN_ROOM_SELECT_DIALOD_SELECT_INFO_TXET"*/, 0);
          if ( selectInfoLabel )
          {
            UILabel__set_text(selectInfoLabel, (System_String_o *)gameObject, 0);
            gameObject = (UnityEngine_GameObject_o *)this->fields.iconPrefab;
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__51649344(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         (const MethodInfo_3141B40 *)Method_UnityEngine_Component_GetComponentInChildren_CoinRoomCoinIconDraw___);
              if ( gameObject )
              {
                CoinRoomCoinIconDraw__SetItem((CoinRoomCoinIconDraw_o *)gameObject, linkItem, 1, 1, v34);
                gameObject = (UnityEngine_GameObject_o *)this->fields.iconPrefab;
                if ( gameObject )
                {
                  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                  if ( gameObject )
                  {
                    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
                    if ( entity )
                    {
                      this->fields.svtId = entity->fields.svtId;
                      if ( linkItem )
                      {
                        this->fields.itemId = linkItem->fields._itemId_k__BackingField;
                        if ( v31 )
                        {
                          gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                                     v31,
                                                                     (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
                          if ( gameObject )
                          {
                            v35 = DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                    entity->fields.svtId,
                                    (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                            MasterData_object = DataManager__GetMasterData_object_(
                                                  v31,
                                                  (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                            if ( !byte_4CC112A )
                            {
                              sub_1C713B0(&NetworkManager_TypeInfo);
                              byte_4CC112A = 1;
                            }
                            gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                            {
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                              gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                            }
                            if ( MasterData_object )
                            {
                              gameObject = (UnityEngine_GameObject_o *)UserServantCollectionMaster__TryGetEntity(
                                                                         (UserServantCollectionMaster_o *)MasterData_object,
                                                                         &entitya,
                                                                         *(_QWORD *)(gameObject[7].fields.m_CachedPtr
                                                                                   + 64),
                                                                         this->fields.svtId,
                                                                         0);
                              if ( ((unsigned __int8)gameObject & 1) != 0 )
                              {
                                gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                                           v31,
                                                                           (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                                if ( !entitya )
                                  goto LABEL_54;
                                if ( !gameObject )
                                  goto LABEL_54;
                                gameObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                           (ServantLimitImageMaster_o *)gameObject,
                                                                           this->fields.svtId,
                                                                           entitya->fields.maxLimitCount,
                                                                           0);
                                if ( !entitya )
                                  goto LABEL_54;
                                if ( (_DWORD)gameObject == entitya->fields.maxLimitCount )
                                  v21 = 0xFFFFFFFFLL;
                                else
                                  v21 = (unsigned int)gameObject;
                              }
                              else
                              {
                                v21 = 0xFFFFFFFFLL;
                              }
                              if ( v35 )
                              {
                                Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v35, v21, -1, 0, 0);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v38 = LocalizationManager__Get((System_String_o *)StringLiteral_3549/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_NAME"*/, 0);
                                itemName = this->fields.itemName;
                                gameObject = (UnityEngine_GameObject_o *)System_String__Format(v38, Name, 0);
                                if ( itemName )
                                {
                                  UILabel__set_text(itemName, (System_String_o *)gameObject, 0);
                                  if ( *p_userSvtCoinEntity )
                                  {
                                    this->fields.coinCount = (*p_userSvtCoinEntity)->fields.num;
                                    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
                                    v40 = CoinRoomUtility__MonthExchangePoint(0);
                                    this->fields.currentPoint = v40;
                                    CoinBulkSelectDialog__UpdateCountValue(this, 1, v40 + 1, v41);
                                    maxPoint = this->fields.maxPoint;
                                    currentPoint = this->fields.currentPoint;
                                    num = entity->fields.num;
                                    if ( !System_Math_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                                    gameObject = (UnityEngine_GameObject_o *)System_Math__Min_65553872(
                                                                               maxPoint - currentPoint,
                                                                               num,
                                                                               0);
                                    if ( this->fields.itemSlider )
                                    {
                                      v45 = (int)gameObject;
                                      UISliderWithButton__init(this->fields.itemSlider, (int32_t)gameObject, 0, 1, 0);
                                      gameObject = (UnityEngine_GameObject_o *)this->fields.itemSlider;
                                      if ( gameObject )
                                      {
                                        if ( v45 >= 2 )
                                          UISliderWithButton__normalMode((UISliderWithButton_o *)gameObject, 0);
                                        else
                                          UISliderWithButton__grayMode((UISliderWithButton_o *)gameObject, 0);
                                        this->fields.state = 1;
                                        v46 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v46,
                                          (Il2CppObject *)this,
                                          Method_CoinBulkSelectDialog_EndOpen__,
                                          0);
                                        BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0, 0);
                                        this->fields.isOpen = 1;
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_54:
    sub_1C71608(gameObject, v21);
  }
}


void CoinBulkSelectDialog__SliderValueChange(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  int32_t v4; // w0
  int32_t v5; // w20
  int32_t v6; // w0
  const MethodInfo *v7; // x3
  int32_t currentPoint; // w8
  int32_t maxPoint; // w9
  int32_t v10; // w8
  int32_t v11; // w2

  if ( (byte_4CCB111 & 1) == 0 )
  {
    sub_1C713B0(&CoinRoomUtility_TypeInfo);
    byte_4CCB111 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    sub_1C71608(0, method);
  v4 = UISliderWithButton__sliderValueChange(itemSlider, 0);
  if ( this->fields.isOpen )
  {
    v5 = v4;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v6 = CoinRoomUtility__CalcPoint(0);
    maxPoint = this->fields.maxPoint;
    currentPoint = this->fields.currentPoint;
    this->fields.selectNum = v5;
    v10 = currentPoint + v6 * v5;
    if ( maxPoint >= v10 )
      v11 = v10;
    else
      v11 = maxPoint;
    CoinBulkSelectDialog__UpdateCountValue(this, v5, v11, v7);
  }
}


void CoinBulkSelectDialog__UpdateCountValue(
        CoinBulkSelectDialog_o *this,
        int32_t count,
        int32_t point,
        const MethodInfo *method)
{
  System_String_o *v7; // x23
  UILabel_o *remainingLabel; // x22
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x21
  UILabel_o *itemCount; // x20
  Il2CppObject *v14; // x0
  int32_t v15; // [xsp+8h] [xbp-38h] BYREF
  int v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CCB112 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_3548/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_COUNT"*/);
    sub_1C713B0(&StringLiteral_3547/*"COIN_ROOM_SELECT_DIALOD_REMAINING_TEXT"*/);
    byte_4CCB112 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3547/*"COIN_ROOM_SELECT_DIALOD_REMAINING_TEXT"*/, 0);
  remainingLabel = this->fields.remainingLabel;
  v16 = this->fields.maxPoint - point;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v10 = System_String__Format(v7, v9, 0);
  if ( !remainingLabel
    || (UILabel__set_text(remainingLabel, v10, 0),
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3548/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_COUNT"*/, 0),
        itemCount = this->fields.itemCount,
        v15 = count,
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15),
        v10 = System_String__Format(v12, v14, 0),
        !itemCount) )
  {
    sub_1C71608(v10, v11);
  }
  UILabel__set_text(itemCount, v10, 0);
}