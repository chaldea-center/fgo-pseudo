void __fastcall CoinBulkSelectDialog___ctor(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B197A2 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B197A2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CoinBulkSelectDialog__Close(
        CoinBulkSelectDialog_o *this,
        System_Action_int__o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_o *v10; // x21

  if ( (byte_4B1979C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_int___, action, method);
    sub_1BCA7E0(&System_Action_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_CoinBulkSelectDialog_EndClose__, v8, v9);
    byte_4B1979C = 1;
  }
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, action, method, v3);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CoinBulkSelectDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
  if ( action )
    ActionExtensions__Call_int_(
      (System_Action_T__o *)action,
      this->fields.selectNum,
      (const MethodInfo_2E654E8 *)Method_ActionExtensions_Call_int___);
}


void __fastcall CoinBulkSelectDialog__EndClose(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  CoinBulkSelectDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.userSvtCoinEntity = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.userSvtCoinEntity, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4B1979E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CoinBulkSelectDialog_OnClickCancel__, method, v2);
    byte_4B1979E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.isOpen = 0;
    v4 = Method_CoinBulkSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinBulkSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CoinBulkSelectDialog_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1BCAA3C(0LL, v6);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    CoinBulkSelectDialog__Close(this, 0LL, v8);
  }
}


void __fastcall CoinBulkSelectDialog__OnClickDecide(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Action_CoinRoomCoinIconObject__int__o *onDecideAction; // x20

  if ( (byte_4B1979D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CoinBulkSelectDialog_OnClickDecide__, method, v2);
    byte_4B1979D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_CoinBulkSelectDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinBulkSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_CoinBulkSelectDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    onDecideAction = this->fields.onDecideAction;
    if ( onDecideAction )
    {
      this->fields.onDecideAction = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onDecideAction, 0LL, v6, v7, v8, v9, v10, v11);
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
  __int64 v2; // x2
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_4B197A1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15808/*"Window/CancelButton"*/, method, v2);
    byte_4B197A1 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_42532052(transform, (System_String_o *)StringLiteral_15808/*"Window/CancelButton"*/, 0LL);
}


void __fastcall CoinBulkSelectDialog__Open(
        CoinBulkSelectDialog_o *this,
        UserSvtCoinEntity_o *entity,
        CoinRoomCoinIconObject_o *iconObject,
        int32_t sumPoint,
        System_Action_CoinRoomCoinIconObject__int__o *onDecideAction,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  struct UserSvtCoinEntity_o **p_userSvtCoinEntity; // x21
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t gameObject; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  CoinRoomCoinIconItem_o *linkItem; // x24
  __int64 methodPtr_low; // x9
  Il2CppObject *Instance; // x0
  __int64 v63; // x1
  DataManager_o *v64; // x22
  __int64 v65; // x1
  UILabel_o *subTitleLabel; // x23
  UILabel_o *selectInfoLabel; // x23
  const MethodInfo *v68; // x4
  Il2CppObject *v69; // x23
  __int64 v70; // x1
  Il2CppObject *MasterData_object; // x24
  __int64 v72; // x1
  Il2CppObject *Name; // x22
  System_String_o *v74; // x0
  UILabel_o *itemName; // x23
  CoinRoomUtility_c *v76; // x0
  int32_t v77; // w0
  const MethodInfo *v78; // x3
  __int64 v79; // x1
  int32_t maxPoint; // w21
  int32_t currentPoint; // w22
  int32_t num; // w20
  int v83; // w20
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  System_Action_o *v87; // x20
  const MethodInfo *v88; // x0
  UserServantCollectionEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1979B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, entity, iconObject);
    sub_1BCA7E0(&Method_CoinBulkSelectDialog_EndOpen__, v13, v14);
    sub_1BCA7E0(&CoinRoomCoinIconItem_TypeInfo, v15, v16);
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_CoinRoomCoinIconDraw___, v19, v20);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v21, v22);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v23, v24);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v25, v26);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v27, v28);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v29, v30);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&System_Math_TypeInfo, v33, v34);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    sub_1BCA7E0(&StringLiteral_3667/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_3664/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_NAME"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_3665/*"COIN_ROOM_SELECT_DIALOD_SELECT_INFO_TXET"*/, v43, v44);
    byte_4B1979B = 1;
  }
  entitya = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecideAction = onDecideAction;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.onDecideAction,
      (int64_t)onDecideAction,
      (int64_t)iconObject,
      sumPoint,
      (System_String_o *)onDecideAction,
      (BattleSetupInfo_o *)method,
      v6,
      v7);
    this->fields.userSvtCoinEntity = entity;
    p_userSvtCoinEntity = &this->fields.userSvtCoinEntity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.userSvtCoinEntity,
      (int64_t)entity,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      this->fields.iconObject = iconObject;
      this->fields.isOpen = 0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.iconObject,
        (int64_t)iconObject,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
      if ( iconObject )
      {
        linkItem = (CoinRoomCoinIconItem_o *)iconObject->fields.linkItem;
        if ( linkItem )
        {
          methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != CoinRoomCoinIconItem_TypeInfo )
          {
            sub_1BCACFC(iconObject->fields.linkItem);
            CoinRoomUtility__MaxPoint(v88);
            return;
          }
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        this->fields.selectNum = 1;
        v64 = (DataManager_o *)Instance;
        if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v63);
        this->fields.maxPoint = CoinRoomUtility__MaxPoint((const MethodInfo *)Instance) - sumPoint;
        subTitleLabel = this->fields.subTitleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v65);
        gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3667/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, 0LL);
        if ( subTitleLabel )
        {
          UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0LL);
          selectInfoLabel = this->fields.selectInfoLabel;
          gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3665/*"COIN_ROOM_SELECT_DIALOD_SELECT_INFO_TXET"*/, 0LL);
          if ( selectInfoLabel )
          {
            UILabel__set_text(selectInfoLabel, (System_String_o *)gameObject, 0LL);
            gameObject = (int64_t)this->fields.iconPrefab;
            if ( gameObject )
            {
              gameObject = (int64_t)UnityEngine_Component__GetComponentInChildren_object__49322392(
                                      (UnityEngine_Component_o *)gameObject,
                                      (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_CoinRoomCoinIconDraw___);
              if ( gameObject )
              {
                CoinRoomCoinIconDraw__SetItem((CoinRoomCoinIconDraw_o *)gameObject, linkItem, 1, 1, v68);
                gameObject = (int64_t)this->fields.iconPrefab;
                if ( gameObject )
                {
                  gameObject = (int64_t)UnityEngine_Component__GetComponent_object_(
                                          (UnityEngine_Component_o *)gameObject,
                                          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                  if ( gameObject )
                  {
                    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
                    if ( entity )
                    {
                      this->fields.svtId = entity->fields.svtId;
                      if ( linkItem )
                      {
                        this->fields.itemId = linkItem->fields._itemId_k__BackingField;
                        if ( v64 )
                        {
                          gameObject = (int64_t)DataManager__GetMasterData_object_(
                                                  v64,
                                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
                          if ( gameObject )
                          {
                            v69 = DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                    entity->fields.svtId,
                                    (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                            MasterData_object = DataManager__GetMasterData_object_(
                                                  v64,
                                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v70);
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
                                                        v64,
                                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
                                  v53 = 0xFFFFFFFFLL;
                                else
                                  v53 = (unsigned int)gameObject;
                              }
                              else
                              {
                                v53 = 0xFFFFFFFFLL;
                              }
                              if ( v69 )
                              {
                                Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v69, v53, -1, 0LL);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v72);
                                v74 = LocalizationManager__Get((System_String_o *)StringLiteral_3664/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_NAME"*/, 0LL);
                                itemName = this->fields.itemName;
                                gameObject = (int64_t)System_String__Format(v74, Name, 0LL);
                                if ( itemName )
                                {
                                  UILabel__set_text(itemName, (System_String_o *)gameObject, 0LL);
                                  if ( *p_userSvtCoinEntity )
                                  {
                                    this->fields.coinCount = (*p_userSvtCoinEntity)->fields.num;
                                    v76 = CoinRoomUtility_TypeInfo;
                                    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v53);
                                    v77 = CoinRoomUtility__MonthExchangePoint((const MethodInfo *)v76);
                                    this->fields.currentPoint = v77;
                                    CoinBulkSelectDialog__UpdateCountValue(this, 1, v77 + 1, v78);
                                    maxPoint = this->fields.maxPoint;
                                    currentPoint = this->fields.currentPoint;
                                    num = entity->fields.num;
                                    if ( !System_Math_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v79);
                                    gameObject = System_Math__Min_63220524(maxPoint - currentPoint, num, 0LL);
                                    if ( this->fields.itemSlider )
                                    {
                                      v83 = gameObject;
                                      UISliderWithButton__init(this->fields.itemSlider, gameObject, 0, 1, 0LL);
                                      gameObject = (int64_t)this->fields.itemSlider;
                                      if ( gameObject )
                                      {
                                        if ( v83 >= 2 )
                                          UISliderWithButton__normalMode((UISliderWithButton_o *)gameObject, 0LL);
                                        else
                                          UISliderWithButton__grayMode((UISliderWithButton_o *)gameObject, 0LL);
                                        this->fields.state = 1;
                                        v87 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v84, v85, v86);
                                        System_Action___ctor(
                                          v87,
                                          (Il2CppObject *)this,
                                          Method_CoinBulkSelectDialog_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v87, 0, 0LL);
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
    sub_1BCAA3C(gameObject, v53);
  }
}


void __fastcall CoinBulkSelectDialog__SliderValueChange(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UISliderWithButton_o *itemSlider; // x0
  int32_t v5; // w0
  __int64 v6; // x1
  int32_t v7; // w20
  CoinRoomUtility_c *v8; // x0
  int32_t v9; // w0
  const MethodInfo *v10; // x3
  int32_t currentPoint; // w8
  int32_t maxPoint; // w9
  int32_t v13; // w8
  int32_t v14; // w2

  if ( (byte_4B1979F & 1) == 0 )
  {
    sub_1BCA7E0(&CoinRoomUtility_TypeInfo, method, v2);
    byte_4B1979F = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    sub_1BCAA3C(0LL, method);
  v5 = UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  if ( this->fields.isOpen )
  {
    v7 = v5;
    v8 = CoinRoomUtility_TypeInfo;
    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo, v6);
    v9 = CoinRoomUtility__CalcPoint((const MethodInfo *)v8);
    maxPoint = this->fields.maxPoint;
    currentPoint = this->fields.currentPoint;
    this->fields.selectNum = v7;
    v13 = currentPoint + v9 * v7;
    if ( maxPoint >= v13 )
      v14 = v13;
    else
      v14 = maxPoint;
    CoinBulkSelectDialog__UpdateCountValue(this, v7, v14, v10);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *v13; // x23
  UILabel_o *remainingLabel; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x21
  UILabel_o *itemCount; // x20
  Il2CppObject *v20; // x0
  int32_t v21; // [xsp+8h] [xbp-38h] BYREF
  int v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B197A0 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&count, *(_QWORD *)&point);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_3663/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_COUNT"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_3662/*"COIN_ROOM_SELECT_DIALOD_REMAINING_TEXT"*/, v11, v12);
    byte_4B197A0 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&count);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_3662/*"COIN_ROOM_SELECT_DIALOD_REMAINING_TEXT"*/, 0LL);
  remainingLabel = this->fields.remainingLabel;
  v22 = this->fields.maxPoint - point;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v16 = System_String__Format(v13, v15, 0LL);
  if ( !remainingLabel
    || (UILabel__set_text(remainingLabel, v16, 0LL),
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3663/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_COUNT"*/, 0LL),
        itemCount = this->fields.itemCount,
        v21 = count,
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21),
        v16 = System_String__Format(v18, v20, 0LL),
        !itemCount) )
  {
    sub_1BCAA3C(v16, v17);
  }
  UILabel__set_text(itemCount, v16, 0LL);
}