void __fastcall CoinBulkSelectDialog___ctor(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49FF88C & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49FF88C = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_o *v7; // x21

  if ( (byte_49FF886 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_int___, action);
    sub_1B640C8(&System_Action_TypeInfo, v5);
    sub_1B640C8(&Method_CoinBulkSelectDialog_EndClose__, v6);
    byte_49FF886 = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, action, method);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CoinBulkSelectDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  if ( action )
    ActionExtensions__Call_int_(
      (System_Action_T__o *)action,
      this->fields.selectNum,
      (const MethodInfo_2D909D8 *)Method_ActionExtensions_Call_int___);
}


void __fastcall CoinBulkSelectDialog__EndClose(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  CoinBulkSelectDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall CoinBulkSelectDialog__EndOpen(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall CoinBulkSelectDialog__Init(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.userSvtCoinEntity = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userSvtCoinEntity, 0, v4, v5);
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
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FF888 & 1) == 0 )
  {
    sub_1B640C8(&Method_CoinBulkSelectDialog_OnClickCancel__, method);
    byte_49FF888 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.isOpen = 0;
    v3 = Method_CoinBulkSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinBulkSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_CoinBulkSelectDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1B64324(0LL);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    CoinBulkSelectDialog__Close(this, 0LL, v6);
  }
}


void __fastcall CoinBulkSelectDialog__OnClickDecide(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_Action_CoinRoomCoinIconObject__int__o *onDecideAction; // x20

  if ( (byte_49FF887 & 1) == 0 )
  {
    sub_1B640C8(&Method_CoinBulkSelectDialog_OnClickDecide__, method);
    byte_49FF887 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_CoinBulkSelectDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinBulkSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_CoinBulkSelectDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    onDecideAction = this->fields.onDecideAction;
    if ( onDecideAction )
    {
      this->fields.onDecideAction = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onDecideAction, 0, v5, v6);
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

  if ( (byte_49FF88B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15573/*"Window/CancelButton"*/, method);
    byte_49FF88B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_41446668(transform, (System_String_o *)StringLiteral_15573/*"Window/CancelButton"*/, 0LL);
}


void __fastcall CoinBulkSelectDialog__Open(
        CoinBulkSelectDialog_o *this,
        UserSvtCoinEntity_o *entity,
        CoinRoomCoinIconObject_o *iconObject,
        int32_t sumPoint,
        System_Action_CoinRoomCoinIconObject__int__o *onDecideAction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  struct UserSvtCoinEntity_o **p_userSvtCoinEntity; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  int64_t gameObject; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  CoinRoomCoinIconItem_o *linkItem; // x24
  __int64 methodPtr_low; // x9
  Il2CppObject *Instance; // x0
  DataManager_o *v36; // x22
  UILabel_o *subTitleLabel; // x23
  UILabel_o *selectInfoLabel; // x23
  Il2CppObject *v39; // x23
  Il2CppObject *MasterData_object; // x24
  int32_t v41; // w1
  Il2CppObject *Name; // x22
  System_String_o *v43; // x0
  UILabel_o *itemName; // x23
  int32_t v45; // w0
  const MethodInfo *v46; // x3
  int32_t maxPoint; // w21
  int32_t currentPoint; // w22
  int32_t num; // w20
  int v50; // w20
  __int64 v51; // x1
  __int64 v52; // x2
  System_Action_o *v53; // x20
  CoinBulkSelectDialog_o *v54; // x0
  int32_t v55; // w1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  UserServantCollectionEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49FF885 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, entity);
    sub_1B640C8(&Method_CoinBulkSelectDialog_EndOpen__, v11);
    sub_1B640C8(&CoinRoomCoinIconItem_TypeInfo, v12);
    sub_1B640C8(&CoinRoomUtility_TypeInfo, v13);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponentInChildren_CoinRoomCoinIconDraw___, v14);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v18);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v19);
    sub_1B640C8(&LocalizationManager_TypeInfo, v20);
    sub_1B640C8(&System_Math_TypeInfo, v21);
    sub_1B640C8(&NetworkManager_TypeInfo, v22);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_1B640C8(&StringLiteral_3615/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, v24);
    sub_1B640C8(&StringLiteral_3612/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_NAME"*/, v25);
    sub_1B640C8(&StringLiteral_3613/*"COIN_ROOM_SELECT_DIALOD_SELECT_INFO_TXET"*/, v26);
    byte_49FF885 = 1;
  }
  entitya = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecideAction = onDecideAction;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.onDecideAction,
      (int32_t)onDecideAction,
      (int32_t)iconObject,
      sumPoint);
    this->fields.userSvtCoinEntity = entity;
    p_userSvtCoinEntity = &this->fields.userSvtCoinEntity;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.userSvtCoinEntity, (int32_t)entity, v28, v29);
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.iconObject = iconObject;
      this->fields.isOpen = 0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.iconObject, (int32_t)iconObject, v31, v32);
      if ( iconObject )
      {
        linkItem = (CoinRoomCoinIconItem_o *)iconObject->fields.linkItem;
        if ( linkItem )
        {
          methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != CoinRoomCoinIconItem_TypeInfo )
          {
            sub_1B645E4(iconObject->fields.linkItem);
            CoinBulkSelectDialog__UpdateCountValue(v54, v55, v56, v57);
            return;
          }
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        this->fields.selectNum = 1;
        v36 = (DataManager_o *)Instance;
        if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        this->fields.maxPoint = CoinRoomUtility__MaxPoint(0LL) - sumPoint;
        subTitleLabel = this->fields.subTitleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3615/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, 0LL);
        if ( subTitleLabel )
        {
          UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0LL);
          selectInfoLabel = this->fields.selectInfoLabel;
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3613/*"COIN_ROOM_SELECT_DIALOD_SELECT_INFO_TXET"*/, 0LL);
          if ( selectInfoLabel )
          {
            UILabel__set_text(selectInfoLabel, (System_String_o *)gameObject, 0LL);
            gameObject = (int64_t)this->fields.iconPrefab;
            if ( gameObject )
            {
              gameObject = (int64_t)UnityEngine_Component__GetComponentInChildren_object__48431348(
                                      (UnityEngine_Component_o *)gameObject,
                                      (const MethodInfo_2E300F4 *)Method_UnityEngine_Component_GetComponentInChildren_CoinRoomCoinIconDraw___);
              if ( gameObject )
              {
                CoinRoomCoinIconDraw__SetItem((CoinRoomCoinIconDraw_o *)gameObject, linkItem, 1, 1, 0LL);
                gameObject = (int64_t)this->fields.iconPrefab;
                if ( gameObject )
                {
                  gameObject = (int64_t)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)gameObject,
                                          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                  if ( gameObject )
                  {
                    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
                    if ( entity )
                    {
                      this->fields.svtId = entity->fields.svtId;
                      if ( linkItem )
                      {
                        this->fields.itemId = linkItem->fields._itemId_k__BackingField;
                        if ( v36 )
                        {
                          gameObject = (int64_t)DataManager__GetMasterData_object_(
                                                  v36,
                                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
                          if ( gameObject )
                          {
                            v39 = DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                    entity->fields.svtId,
                                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                            MasterData_object = DataManager__GetMasterData_object_(
                                                  v36,
                                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
                                                        v36,
                                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
                                  v41 = -1;
                                else
                                  v41 = gameObject;
                              }
                              else
                              {
                                v41 = -1;
                              }
                              if ( v39 )
                              {
                                Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v39, v41, -1, 0LL);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3612/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_NAME"*/, 0LL);
                                itemName = this->fields.itemName;
                                gameObject = (int64_t)System_String__Format(v43, Name, 0LL);
                                if ( itemName )
                                {
                                  UILabel__set_text(itemName, (System_String_o *)gameObject, 0LL);
                                  if ( *p_userSvtCoinEntity )
                                  {
                                    this->fields.coinCount = (*p_userSvtCoinEntity)->fields.num;
                                    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
                                    v45 = CoinRoomUtility__MonthExchangePoint(0LL);
                                    this->fields.currentPoint = v45;
                                    CoinBulkSelectDialog__UpdateCountValue(this, 1, v45 + 1, v46);
                                    maxPoint = this->fields.maxPoint;
                                    currentPoint = this->fields.currentPoint;
                                    num = entity->fields.num;
                                    if ( !System_Math_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                                    gameObject = System_Math__Min_62194364(maxPoint - currentPoint, num, 0LL);
                                    if ( this->fields.itemSlider )
                                    {
                                      v50 = gameObject;
                                      UISliderWithButton__init(this->fields.itemSlider, gameObject, 0, 1, 0LL);
                                      gameObject = (int64_t)this->fields.itemSlider;
                                      if ( gameObject )
                                      {
                                        if ( v50 >= 2 )
                                          UISliderWithButton__normalMode((UISliderWithButton_o *)gameObject, 0LL);
                                        else
                                          UISliderWithButton__grayMode((UISliderWithButton_o *)gameObject, 0LL);
                                        this->fields.state = 1;
                                        v53 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v51, v52);
                                        System_Action___ctor(
                                          v53,
                                          (Il2CppObject *)this,
                                          Method_CoinBulkSelectDialog_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v53, 0, 0LL);
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
    sub_1B64324(gameObject);
  }
}


void __fastcall CoinBulkSelectDialog__SliderValueChange(CoinBulkSelectDialog_o *this, const MethodInfo *method)
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

  if ( (byte_49FF889 & 1) == 0 )
  {
    sub_1B640C8(&CoinRoomUtility_TypeInfo, method);
    byte_49FF889 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    sub_1B64324(0LL);
  v4 = UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  if ( this->fields.isOpen )
  {
    v5 = v4;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    v6 = CoinRoomUtility__CalcPoint(0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinBulkSelectDialog__UpdateCountValue(
        CoinBulkSelectDialog_o *this,
        int32_t count,
        int32_t point,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x23
  UILabel_o *remainingLabel; // x22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x21
  UILabel_o *itemCount; // x20
  Il2CppObject *v16; // x0
  int32_t v17; // [xsp+8h] [xbp-38h] BYREF
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FF88A & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&count);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_3611/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_COUNT"*/, v8);
    sub_1B640C8(&StringLiteral_3610/*"COIN_ROOM_SELECT_DIALOD_REMAINING_TEXT"*/, v9);
    byte_49FF88A = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3610/*"COIN_ROOM_SELECT_DIALOD_REMAINING_TEXT"*/, 0LL);
  remainingLabel = this->fields.remainingLabel;
  v18 = this->fields.maxPoint - point;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v13 = System_String__Format(v10, v12, 0LL);
  if ( !remainingLabel
    || (UILabel__set_text(remainingLabel, v13, 0LL),
        v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3611/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_COUNT"*/, 0LL),
        itemCount = this->fields.itemCount,
        v17 = count,
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17),
        v13 = System_String__Format(v14, v16, 0LL),
        !itemCount) )
  {
    sub_1B64324(v13);
  }
  UILabel__set_text(itemCount, v13, 0LL);
}