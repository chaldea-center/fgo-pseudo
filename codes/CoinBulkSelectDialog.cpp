void CoinBulkSelectDialog___ctor(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_59747D3 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_59747D3 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CoinBulkSelectDialog__Close(CoinBulkSelectDialog_o *this, System_Action_int__o *action, const MethodInfo *method)
{
  System_Action_c *v5; // x0
  System_Action_o *v6; // x21

  if ( (byte_59747CD & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_int___);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CoinBulkSelectDialog_EndClose__);
    byte_59747CD = 1;
  }
  v5 = System_Action_TypeInfo;
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_2213CCC(v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_CoinBulkSelectDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
  if ( action )
    ActionExtensions__Call_int_(
      (System_Action_T__o *)action,
      this->fields.selectNum,
      (const MethodInfo_36FFDDC *)Method_ActionExtensions_Call_int___);
}


void CoinBulkSelectDialog__EndClose(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  CoinBulkSelectDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.userSvtCoinEntity = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.userSvtCoinEntity, 0, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_59747CF & 1) == 0 )
  {
    sub_2213A60(&Method_CoinBulkSelectDialog_OnClickCancel__);
    byte_59747CF = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.isOpen = 0;
    v3 = Method_CoinBulkSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinBulkSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CoinBulkSelectDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_2213CDC(0, v5);
    UISliderWithButton__grayMode(itemSlider, 0);
    CoinBulkSelectDialog__Close(this, 0, v7);
  }
}


void CoinBulkSelectDialog__OnClickDecide(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_Action_CoinRoomCoinIconObject__int__o *onDecideAction; // x20

  if ( (byte_59747CE & 1) == 0 )
  {
    sub_2213A60(&Method_CoinBulkSelectDialog_OnClickDecide__);
    byte_59747CE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_CoinBulkSelectDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinBulkSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_CoinBulkSelectDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    onDecideAction = this->fields.onDecideAction;
    if ( onDecideAction )
    {
      this->fields.onDecideAction = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onDecideAction, 0, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_59747D2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16259/*"Window/CancelButton"*/);
    byte_59747D2 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  AndroidBackKeyManager__AddBackBtn_51984988(transform, (System_String_o *)StringLiteral_16259/*"Window/CancelButton"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void CoinBulkSelectDialog__Open(
        CoinBulkSelectDialog_o *this,
        UserSvtCoinEntity_o *entity,
        CoinRoomCoinIconObject_o *iconObject,
        int32_t sumPoint,
        System_Action_CoinRoomCoinIconObject__int__o *onDecideAction,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  int32_t state; // w8
  struct UserSvtCoinEntity_o **p_userSvtCoinEntity; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  __int64 v29; // x2
  CoinRoomCoinIconItem_o *linkItem; // x23
  __int64 naturalAligment; // x9
  CoinRoomUtility_c *v32; // x0
  __int64 v33; // x1
  int32_t v34; // w8
  UILabel_o *subTitleLabel; // x22
  UILabel_o *selectInfoLabel; // x22
  const MethodInfo *v37; // x4
  DataManager_c *v38; // x0
  System_String_o *OverwriteServantCoinName; // x0
  Il2CppObject *v40; // x22
  Il2CppObject *Master_object; // x23
  __int64 v42; // x1
  System_String_o *Name; // x0
  __int64 v44; // x1
  Il2CppObject *v45; // x22
  System_String_o *v46; // x0
  UILabel_o *itemName; // x23
  CoinRoomUtility_c *v48; // x0
  int v49; // w9
  int32_t v50; // w0
  const MethodInfo *v51; // x3
  __int64 v52; // x1
  int32_t num; // w20
  int32_t maxPoint; // w21
  int32_t currentPoint; // w22
  int v56; // w20
  System_Action_o *v57; // x20
  const MethodInfo *v58; // x0
  UserServantCollectionEntity_o *v59; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *entitya; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_59747CC & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CoinBulkSelectDialog_EndOpen__);
    sub_2213A60(&CoinRoomCoinIconItem_TypeInfo);
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentInChildren_CoinRoomCoinIconDraw___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_3699/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/);
    sub_2213A60(&StringLiteral_3696/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_NAME"*/);
    sub_2213A60(&StringLiteral_3697/*"COIN_ROOM_SELECT_DIALOD_SELECT_INFO_TXET"*/);
    byte_59747CC = 1;
  }
  state = this->fields.state;
  entitya = 0;
  v59 = 0;
  if ( !state )
  {
    this->fields.onDecideAction = onDecideAction;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onDecideAction,
      (int32_t)onDecideAction,
      (System_String_o *)iconObject,
      *(System_String_o **)&sumPoint,
      (int32_t)onDecideAction,
      (int32_t)method,
      v6,
      v7);
    this->fields.userSvtCoinEntity = entity;
    p_userSvtCoinEntity = &this->fields.userSvtCoinEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.userSvtCoinEntity,
      (int32_t)entity,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      this->fields.iconObject = iconObject;
      this->fields.isOpen = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.iconObject,
        (int32_t)iconObject,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      if ( iconObject )
      {
        linkItem = (CoinRoomCoinIconItem_o *)iconObject->fields.linkItem;
        if ( linkItem )
        {
          v22 = (__int64)CoinRoomCoinIconItem_TypeInfo;
          naturalAligment = CoinRoomCoinIconItem_TypeInfo->_2.naturalAligment;
          if ( linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment
            || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != CoinRoomCoinIconItem_TypeInfo )
          {
            sub_221405C(linkItem, CoinRoomCoinIconItem_TypeInfo, v29);
            CoinRoomUtility__MaxPoint(v58);
            return;
          }
        }
        this->fields.selectNum = 1;
        v32 = CoinRoomUtility_TypeInfo;
        if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v22);
        v34 = CoinRoomUtility__MaxPoint((const MethodInfo *)v32) - sumPoint;
        subTitleLabel = this->fields.subTitleLabel;
        this->fields.maxPoint = v34;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3699/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, 0);
        if ( subTitleLabel )
        {
          UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0);
          selectInfoLabel = this->fields.selectInfoLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3697/*"COIN_ROOM_SELECT_DIALOD_SELECT_INFO_TXET"*/, 0);
          if ( selectInfoLabel )
          {
            UILabel__set_text(selectInfoLabel, (System_String_o *)gameObject, 0);
            gameObject = (UnityEngine_GameObject_o *)this->fields.iconPrefab;
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__58855044(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         (const MethodInfo_3820E84 *)Method_UnityEngine_Component_GetComponentInChildren_CoinRoomCoinIconDraw___);
              if ( gameObject )
              {
                CoinRoomCoinIconDraw__SetItem((CoinRoomCoinIconDraw_o *)gameObject, linkItem, 1, 1, v37);
                gameObject = (UnityEngine_GameObject_o *)this->fields.iconPrefab;
                if ( gameObject )
                {
                  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                  if ( gameObject )
                  {
                    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
                    if ( entity )
                    {
                      this->fields.svtId = entity->fields.svtId;
                      if ( linkItem )
                      {
                        v38 = DataManager_TypeInfo;
                        this->fields.itemId = linkItem->fields._itemId_k__BackingField;
                        if ( !*(&v38->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(v38, v22);
                        gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantAddMaster___);
                        if ( gameObject )
                        {
                          if ( !DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                  &entitya,
                                  entity->fields.svtId,
                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int__TryGetEntity__) )
                            goto LABEL_71;
                          gameObject = (UnityEngine_GameObject_o *)entitya;
                          if ( !entitya )
                            goto LABEL_67;
                          OverwriteServantCoinName = ServantAddEntity__GetOverwriteServantCoinName(
                                                       (ServantAddEntity_o *)entitya,
                                                       0);
                          if ( !System_String__IsNullOrEmpty(OverwriteServantCoinName, 0) )
                          {
                            gameObject = (UnityEngine_GameObject_o *)entitya;
                            if ( !entitya )
                              goto LABEL_67;
                            Name = ServantAddEntity__GetOverwriteServantCoinName((ServantAddEntity_o *)entitya, 0);
                          }
                          else
                          {
LABEL_71:
                            if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
                            gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
                            if ( !gameObject )
                              goto LABEL_67;
                            v40 = DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                    entity->fields.svtId,
                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                            Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
                            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
                            if ( !byte_5969EF2 )
                            {
                              sub_2213A60(&NetworkManager_TypeInfo);
                              byte_5969EF2 = 1;
                            }
                            gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
                            {
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
                              gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
                            }
                            if ( !Master_object )
                              goto LABEL_67;
                            gameObject = (UnityEngine_GameObject_o *)UserServantCollectionMaster__TryGetEntity(
                                                                       (UserServantCollectionMaster_o *)Master_object,
                                                                       &v59,
                                                                       *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 64),
                                                                       this->fields.svtId,
                                                                       0);
                            if ( ((unsigned __int8)gameObject & 1) != 0 )
                            {
                              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v42);
                              gameObject = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
                              if ( !v59 )
                                goto LABEL_67;
                              if ( !gameObject )
                                goto LABEL_67;
                              gameObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                         (ServantLimitImageMaster_o *)gameObject,
                                                                         this->fields.svtId,
                                                                         v59->fields.maxLimitCount,
                                                                         0);
                              if ( !v59 )
                                goto LABEL_67;
                              if ( (_DWORD)gameObject == v59->fields.maxLimitCount )
                                v22 = 0xFFFFFFFFLL;
                              else
                                v22 = (unsigned int)gameObject;
                            }
                            else
                            {
                              v22 = 0xFFFFFFFFLL;
                            }
                            if ( !v40 )
                              goto LABEL_67;
                            Name = ServantEntity__getName((ServantEntity_o *)v40, v22, -1, 0, 0, 0);
                          }
                          v45 = (Il2CppObject *)Name;
                          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
                          v46 = LocalizationManager__Get((System_String_o *)StringLiteral_3696/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_NAME"*/, 0);
                          itemName = this->fields.itemName;
                          gameObject = (UnityEngine_GameObject_o *)System_String__Format(v46, v45, 0);
                          if ( itemName )
                          {
                            UILabel__set_text(itemName, (System_String_o *)gameObject, 0);
                            if ( *p_userSvtCoinEntity )
                            {
                              v48 = CoinRoomUtility_TypeInfo;
                              v49 = *(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1);
                              this->fields.coinCount = (*p_userSvtCoinEntity)->fields.num;
                              if ( !v49 )
                                j_il2cpp_runtime_class_init_0(v48, v22);
                              v50 = CoinRoomUtility__MonthExchangePoint((const MethodInfo *)v48);
                              this->fields.currentPoint = v50;
                              CoinBulkSelectDialog__UpdateCountValue(this, 1, v50 + 1, v51);
                              num = entity->fields.num;
                              maxPoint = this->fields.maxPoint;
                              currentPoint = this->fields.currentPoint;
                              if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                                j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v52);
                              gameObject = (UnityEngine_GameObject_o *)System_Math__Min_77153596(
                                                                         maxPoint - currentPoint,
                                                                         num,
                                                                         0);
                              if ( this->fields.itemSlider )
                              {
                                v56 = (int)gameObject;
                                UISliderWithButton__init(this->fields.itemSlider, (int32_t)gameObject, 0, 1, 0);
                                gameObject = (UnityEngine_GameObject_o *)this->fields.itemSlider;
                                if ( v56 >= 2 )
                                {
                                  if ( gameObject )
                                  {
                                    UISliderWithButton__normalMode((UISliderWithButton_o *)gameObject, 0);
                                    goto LABEL_65;
                                  }
                                }
                                else if ( gameObject )
                                {
                                  UISliderWithButton__grayMode((UISliderWithButton_o *)gameObject, 0);
LABEL_65:
                                  this->fields.state = 1;
                                  v57 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                                  System_Action___ctor(
                                    v57,
                                    (Il2CppObject *)this,
                                    Method_CoinBulkSelectDialog_EndOpen__,
                                    0);
                                  BaseDialog__Open((BaseDialog_o *)this, v57, 0, 0, 0);
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
LABEL_67:
    sub_2213CDC(gameObject, v22);
  }
}


void CoinBulkSelectDialog__SliderValueChange(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  int32_t v4; // w0
  __int64 v5; // x1
  int32_t v6; // w20
  CoinRoomUtility_c *v7; // x0
  int32_t v8; // w0
  const MethodInfo *v9; // x3
  int32_t maxPoint; // w9
  int v11; // w8
  int32_t v12; // w2

  if ( (byte_59747D0 & 1) == 0 )
  {
    sub_2213A60(&CoinRoomUtility_TypeInfo);
    byte_59747D0 = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    sub_2213CDC(0, method);
  v4 = UISliderWithButton__sliderValueChange(itemSlider, 0);
  if ( this->fields.isOpen )
  {
    v6 = v4;
    v7 = CoinRoomUtility_TypeInfo;
    if ( !*(&CoinRoomUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v5);
    v8 = CoinRoomUtility__CalcPoint((const MethodInfo *)v7);
    maxPoint = this->fields.maxPoint;
    v11 = this->fields.currentPoint + v8 * v6;
    this->fields.selectNum = v6;
    if ( maxPoint >= v11 )
      v12 = v11;
    else
      v12 = maxPoint;
    CoinBulkSelectDialog__UpdateCountValue(this, v6, v12, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_59747D1 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3695/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_COUNT"*/);
    sub_2213A60(&StringLiteral_3694/*"COIN_ROOM_SELECT_DIALOD_REMAINING_TEXT"*/);
    byte_59747D1 = 1;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&count);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3694/*"COIN_ROOM_SELECT_DIALOD_REMAINING_TEXT"*/, 0);
  remainingLabel = this->fields.remainingLabel;
  v16 = this->fields.maxPoint - point;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v16);
  v10 = System_String__Format(v7, v9, 0);
  if ( !remainingLabel
    || (UILabel__set_text(remainingLabel, v10, 0),
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3695/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_COUNT"*/, 0),
        itemCount = this->fields.itemCount,
        v15 = count,
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v15),
        v10 = System_String__Format(v12, v14, 0),
        !itemCount) )
  {
    sub_2213CDC(v10, v11);
  }
  UILabel__set_text(itemCount, v10, 0);
}