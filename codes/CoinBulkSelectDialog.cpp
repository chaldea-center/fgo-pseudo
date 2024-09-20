void __fastcall CoinBulkSelectDialog___ctor(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E674 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5E674 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinBulkSelectDialog__Close(
        CoinBulkSelectDialog_o *this,
        System_Action_int__o *action,
        const MethodInfo *method)
{
  System_Action_o *v5; // x21

  if ( (byte_4A5E66E & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_int___);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CoinBulkSelectDialog_EndClose__);
    byte_4A5E66E = 1;
  }
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CoinBulkSelectDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
  if ( action )
    ActionExtensions__Call_int_(
      (System_Action_T__o *)action,
      this->fields.selectNum,
      (const MethodInfo_2DD57B8 *)Method_ActionExtensions_Call_int___);
}


void __fastcall CoinBulkSelectDialog__EndClose(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  CoinBulkSelectDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall CoinBulkSelectDialog__EndOpen(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall CoinBulkSelectDialog__Init(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.userSvtCoinEntity = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtCoinEntity, 0, v5, v6);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


int64_t __fastcall CoinBulkSelectDialog__ItemMaxOverCheck(
        CoinBulkSelectDialog_o *this,
        int64_t point,
        const MethodInfo *method)
{
  if ( this->fields.maxPoint >= point )
    return point;
  else
    return this->fields.maxPoint;
}


void __fastcall CoinBulkSelectDialog__OnClickCancel(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4A5E670 & 1) == 0 )
  {
    sub_1B885B0(&Method_CoinBulkSelectDialog_OnClickCancel__);
    byte_4A5E670 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.isOpen = 0;
    v3 = Method_CoinBulkSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinBulkSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CoinBulkSelectDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1B8880C(0LL, v5);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    CoinBulkSelectDialog__Close(this, 0LL, v7);
  }
}


void __fastcall CoinBulkSelectDialog__OnClickDecide(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_Action_CoinRoomCoinIconObject__int__o *onDecideAction; // x20

  if ( (byte_4A5E66F & 1) == 0 )
  {
    sub_1B885B0(&Method_CoinBulkSelectDialog_OnClickDecide__);
    byte_4A5E66F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_CoinBulkSelectDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinBulkSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_CoinBulkSelectDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    onDecideAction = this->fields.onDecideAction;
    if ( onDecideAction )
    {
      this->fields.onDecideAction = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onDecideAction, 0, v5, v6);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct CoinRoomCoinIconObject_o *, _QWORD, _QWORD))onDecideAction->fields.m_target)(
        onDecideAction->fields.original_method_info,
        this->fields.iconObject,
        (unsigned int)this->fields.selectNum,
        *(_QWORD *)&onDecideAction->fields.extra_arg);
    }
  }
}


void __fastcall CoinBulkSelectDialog__OnEnable(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4A5E673 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15641/*"Window/CancelButton"*/);
    byte_4A5E673 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41945856(transform, (System_String_o *)StringLiteral_15641/*"Window/CancelButton"*/, 0LL);
}


void __fastcall CoinBulkSelectDialog__Open(
        CoinBulkSelectDialog_o *this,
        UserSvtCoinEntity_o *entity,
        CoinRoomCoinIconObject_o *iconObject,
        int32_t sumPoint,
        System_Action_CoinRoomCoinIconObject__int__o *onDecideAction,
        const MethodInfo *method)
{
  struct UserSvtCoinEntity_o **p_userSvtCoinEntity; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  int64_t gameObject; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  CoinRoomCoinIconItem_o *linkItem; // x24
  __int64 methodPtr_low; // x9
  Il2CppObject *Instance; // x0
  DataManager_o *v21; // x22
  UILabel_o *subTitleLabel; // x23
  UILabel_o *selectInfoLabel; // x23
  const MethodInfo *v24; // x4
  Il2CppObject *v25; // x23
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *Name; // x22
  System_String_o *v28; // x0
  UILabel_o *itemName; // x23
  CoinRoomUtility_c *v30; // x0
  int32_t v31; // w0
  const MethodInfo *v32; // x3
  int32_t maxPoint; // w21
  int32_t currentPoint; // w22
  int32_t num; // w20
  int v36; // w20
  System_Action_o *v37; // x20
  const MethodInfo *v38; // x0
  UserServantCollectionEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5E66D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_CoinBulkSelectDialog_EndOpen__);
    sub_1B885B0(&CoinRoomCoinIconItem_TypeInfo);
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_CoinRoomCoinIconDraw___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_3637/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/);
    sub_1B885B0(&StringLiteral_3634/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_NAME"*/);
    sub_1B885B0(&StringLiteral_3635/*"COIN_ROOM_SELECT_DIALOD_SELECT_INFO_TXET"*/);
    byte_4A5E66D = 1;
  }
  entitya = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecideAction = onDecideAction;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.onDecideAction,
      (int32_t)onDecideAction,
      (int32_t)iconObject,
      sumPoint);
    this->fields.userSvtCoinEntity = entity;
    p_userSvtCoinEntity = &this->fields.userSvtCoinEntity;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.userSvtCoinEntity, (int32_t)entity, v12, v13);
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.iconObject = iconObject;
      this->fields.isOpen = 0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconObject, (int32_t)iconObject, v16, v17);
      if ( iconObject )
      {
        linkItem = (CoinRoomCoinIconItem_o *)iconObject->fields.linkItem;
        if ( linkItem )
        {
          methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != CoinRoomCoinIconItem_TypeInfo )
          {
            sub_1B88ACC(iconObject->fields.linkItem);
            CoinRoomUtility__MaxPoint(v38);
            return;
          }
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        this->fields.selectNum = 1;
        v21 = (DataManager_o *)Instance;
        if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        this->fields.maxPoint = CoinRoomUtility__MaxPoint((const MethodInfo *)Instance) - sumPoint;
        subTitleLabel = this->fields.subTitleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3637/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, 0LL);
        if ( subTitleLabel )
        {
          UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0LL);
          selectInfoLabel = this->fields.selectInfoLabel;
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3635/*"COIN_ROOM_SELECT_DIALOD_SELECT_INFO_TXET"*/, 0LL);
          if ( selectInfoLabel )
          {
            UILabel__set_text(selectInfoLabel, (System_String_o *)gameObject, 0LL);
            gameObject = (int64_t)this->fields.iconPrefab;
            if ( gameObject )
            {
              gameObject = (int64_t)UnityEngine_Component__GetComponentInChildren_object__48719376(
                                      (UnityEngine_Component_o *)gameObject,
                                      (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_CoinRoomCoinIconDraw___);
              if ( gameObject )
              {
                CoinRoomCoinIconDraw__SetItem((CoinRoomCoinIconDraw_o *)gameObject, linkItem, 1, 1, v24);
                gameObject = (int64_t)this->fields.iconPrefab;
                if ( gameObject )
                {
                  gameObject = (int64_t)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)gameObject,
                                          (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                  if ( gameObject )
                  {
                    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
                    if ( entity )
                    {
                      this->fields.svtId = entity->fields.svtId;
                      if ( linkItem )
                      {
                        this->fields.itemId = linkItem->fields._itemId_k__BackingField;
                        if ( v21 )
                        {
                          gameObject = (int64_t)DataManager__GetMasterData_object_(
                                                  v21,
                                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
                          if ( gameObject )
                          {
                            v25 = DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                    entity->fields.svtId,
                                    (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                            MasterData_object = DataManager__GetMasterData_object_(
                                                  v21,
                                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                            gameObject = NetworkManager__get_UserId(0LL);
                            if ( MasterData_object )
                            {
                              gameObject = UserServantCollectionMaster__TryGetEntity(
                                             (UserServantCollectionMaster_o *)MasterData_object,
                                             &entitya,
                                             gameObject,
                                             this->fields.svtId,
                                             0LL);
                              if ( (gameObject & 1) != 0 )
                              {
                                gameObject = (int64_t)DataManager__GetMasterData_object_(
                                                        v21,
                                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                                if ( !entitya )
                                  goto LABEL_50;
                                if ( !gameObject )
                                  goto LABEL_50;
                                gameObject = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                               (ServantLimitImageMaster_o *)gameObject,
                                               this->fields.svtId,
                                               entitya->fields.maxLimitCount,
                                               0LL);
                                if ( !entitya )
                                  goto LABEL_50;
                                if ( (_DWORD)gameObject == entitya->fields.maxLimitCount )
                                  v15 = 0xFFFFFFFFLL;
                                else
                                  v15 = (unsigned int)gameObject;
                              }
                              else
                              {
                                v15 = 0xFFFFFFFFLL;
                              }
                              if ( v25 )
                              {
                                Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v25, v15, -1, 0LL);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3634/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_NAME"*/, 0LL);
                                itemName = this->fields.itemName;
                                gameObject = (int64_t)System_String__Format(v28, Name, 0LL);
                                if ( itemName )
                                {
                                  UILabel__set_text(itemName, (System_String_o *)gameObject, 0LL);
                                  if ( *p_userSvtCoinEntity )
                                  {
                                    this->fields.coinCount = (*p_userSvtCoinEntity)->fields.num;
                                    v30 = CoinRoomUtility_TypeInfo;
                                    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
                                    v31 = CoinRoomUtility__MonthExchangePoint((const MethodInfo *)v30);
                                    this->fields.currentPoint = v31;
                                    CoinBulkSelectDialog__UpdateCountValue(this, 1, v31 + 1, v32);
                                    maxPoint = this->fields.maxPoint;
                                    currentPoint = this->fields.currentPoint;
                                    num = entity->fields.num;
                                    if ( !System_Math_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                                    gameObject = System_Math__Min_62526008(maxPoint - currentPoint, num, 0LL);
                                    if ( this->fields.itemSlider )
                                    {
                                      v36 = gameObject;
                                      UISliderWithButton__init(this->fields.itemSlider, gameObject, 0, 1, 0LL);
                                      gameObject = (int64_t)this->fields.itemSlider;
                                      if ( gameObject )
                                      {
                                        if ( v36 >= 2 )
                                          UISliderWithButton__normalMode((UISliderWithButton_o *)gameObject, 0LL);
                                        else
                                          UISliderWithButton__grayMode((UISliderWithButton_o *)gameObject, 0LL);
                                        this->fields.state = 1;
                                        v37 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v37,
                                          (Il2CppObject *)this,
                                          Method_CoinBulkSelectDialog_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v37, 0, 0LL);
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
LABEL_50:
    sub_1B8880C(gameObject, v15);
  }
}


void __fastcall CoinBulkSelectDialog__SliderValueChange(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  int32_t v4; // w0
  int32_t v5; // w20
  CoinRoomUtility_c *v6; // x0
  int32_t v7; // w0
  const MethodInfo *v8; // x3
  int32_t currentPoint; // w8
  int32_t maxPoint; // w9
  int32_t v11; // w8
  int32_t v12; // w2

  if ( (byte_4A5E671 & 1) == 0 )
  {
    sub_1B885B0(&CoinRoomUtility_TypeInfo);
    byte_4A5E671 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    sub_1B8880C(0LL, method);
  v4 = UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  if ( this->fields.isOpen )
  {
    v5 = v4;
    v6 = CoinRoomUtility_TypeInfo;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v7 = CoinRoomUtility__CalcPoint((const MethodInfo *)v6);
    maxPoint = this->fields.maxPoint;
    currentPoint = this->fields.currentPoint;
    this->fields.selectNum = v5;
    v11 = currentPoint + v7 * v5;
    if ( maxPoint >= v11 )
      v12 = v11;
    else
      v12 = maxPoint;
    CoinBulkSelectDialog__UpdateCountValue(this, v5, v12, v8);
  }
}


void __fastcall CoinBulkSelectDialog__UpdateCountValue(
        CoinBulkSelectDialog_o *this,
        int32_t count,
        int32_t point,
        const MethodInfo *method)
{
  System_String_o *v7; // x23
  UILabel_o *remainingLabel; // x22
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x21
  UILabel_o *itemCount; // x20
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  int32_t v21; // [xsp+8h] [xbp-38h] BYREF
  int v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5E672 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3633/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_COUNT"*/);
    sub_1B885B0(&StringLiteral_3632/*"COIN_ROOM_SELECT_DIALOD_REMAINING_TEXT"*/);
    byte_4A5E672 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3632/*"COIN_ROOM_SELECT_DIALOD_REMAINING_TEXT"*/, 0LL);
  remainingLabel = this->fields.remainingLabel;
  v22 = this->fields.maxPoint - point;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v9, v10, v11);
  v13 = System_String__Format(v7, v12, 0LL);
  if ( !remainingLabel
    || (UILabel__set_text(remainingLabel, v13, 0LL),
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3633/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_COUNT"*/, 0LL),
        itemCount = this->fields.itemCount,
        v21 = count,
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21, v17, v18, v19),
        v13 = System_String__Format(v15, v20, 0LL),
        !itemCount) )
  {
    sub_1B8880C(v13, v14);
  }
  UILabel__set_text(itemCount, v13, 0LL);
}