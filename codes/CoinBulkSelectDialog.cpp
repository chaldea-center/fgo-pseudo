void __fastcall CoinBulkSelectDialog___ctor(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C256C2 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C256C2 = 1;
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

  if ( (byte_4C256BC & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_int___, action);
    sub_1C3B764(&System_Action_TypeInfo, v5);
    sub_1C3B764(&Method_CoinBulkSelectDialog_EndClose__, v6);
    byte_4C256BC = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CoinBulkSelectDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  if ( action )
    ActionExtensions__Call_int_(
      (System_Action_T__o *)action,
      this->fields.selectNum,
      (const MethodInfo_2F42260 *)Method_ActionExtensions_Call_int___);
}


void __fastcall CoinBulkSelectDialog__EndClose(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  CoinBulkSelectDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C3B9C0(0LL, v4);
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
    sub_1C3B9C0(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.userSvtCoinEntity = 0LL;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.userSvtCoinEntity, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4C256BE & 1) == 0 )
  {
    sub_1C3B764(&Method_CoinBulkSelectDialog_OnClickCancel__, method);
    byte_4C256BE = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.isOpen = 0;
    v3 = Method_CoinBulkSelectDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CoinBulkSelectDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_CoinBulkSelectDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_1C3B9C0(0LL, v5);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    CoinBulkSelectDialog__Close(this, 0LL, v7);
  }
}


void __fastcall CoinBulkSelectDialog__OnClickDecide(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct System_Action_CoinRoomCoinIconObject__int__o *onDecideAction; // x20

  if ( (byte_4C256BD & 1) == 0 )
  {
    sub_1C3B764(&Method_CoinBulkSelectDialog_OnClickDecide__, method);
    byte_4C256BD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_CoinBulkSelectDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CoinBulkSelectDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_CoinBulkSelectDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    onDecideAction = this->fields.onDecideAction;
    if ( onDecideAction )
    {
      this->fields.onDecideAction = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.onDecideAction, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4C256C1 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_15950/*"_PIG"*/, method);
    byte_4C256C1 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  AndroidBackKeyManager__AddBackBtn_43310944(transform, (System_String_o *)StringLiteral_15950/*"_PIG"*/, 0LL);
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
  __int64 v27; // x1
  __int64 v28; // x1
  struct UserSvtCoinEntity_o **p_userSvtCoinEntity; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  CoinRoomCoinIconItem_o *linkItem; // x24
  __int64 methodPtr_low; // x9
  Il2CppObject *Instance; // x0
  DataManager_o *v47; // x22
  UILabel_o *subTitleLabel; // x23
  UILabel_o *selectInfoLabel; // x23
  const MethodInfo *v50; // x4
  Il2CppObject *v51; // x23
  Il2CppObject *MasterData_object; // x24
  Il2CppObject *Name; // x22
  System_String_o *v54; // x0
  UILabel_o *itemName; // x23
  int32_t v56; // w0
  const MethodInfo *v57; // x3
  int32_t maxPoint; // w21
  int32_t currentPoint; // w22
  int32_t num; // w20
  int v61; // w20
  System_Action_o *v62; // x20
  CoinRoomCoinIconDraw_o *v63; // x0
  CoinRoomCoinIconItem_o *v64; // x1
  int32_t v65; // w2
  bool v66; // w3
  const MethodInfo *v67; // x4
  UserServantCollectionEntity_o *entitya; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C256BB & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, entity);
    sub_1C3B764(&Method_CoinBulkSelectDialog_EndOpen__, v13);
    sub_1C3B764(&CoinRoomCoinIconItem_TypeInfo, v14);
    sub_1C3B764(&CoinRoomUtility_TypeInfo, v15);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponentInChildren_CoinRoomCoinIconDraw___, v16);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v17);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v18);
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v20);
    sub_1C3B764(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1C3B764(&LocalizationManager_TypeInfo, v22);
    sub_1C3B764(&System_Math_TypeInfo, v23);
    sub_1C3B764(&NetworkManager_TypeInfo, v24);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1C3B764(&StringLiteral_3679/*"CONDUCTION_COMBINE"*/, v26);
    sub_1C3B764(&StringLiteral_3676/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, v27);
    sub_1C3B764(&StringLiteral_3677/*"CONCENT_NG"*/, v28);
    byte_4C256BB = 1;
  }
  entitya = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecideAction = onDecideAction;
    sub_1C3B708(
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
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.userSvtCoinEntity,
      (int64_t)entity,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      this->fields.iconObject = iconObject;
      this->fields.isOpen = 0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.iconObject,
        (int64_t)iconObject,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
      if ( iconObject )
      {
        linkItem = (CoinRoomCoinIconItem_o *)iconObject->fields.linkItem;
        if ( linkItem )
        {
          methodPtr_low = LOBYTE(CoinRoomCoinIconItem_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != CoinRoomCoinIconItem_TypeInfo )
          {
            sub_1C3BC80(iconObject->fields.linkItem);
            CoinRoomCoinIconDraw__SetItem(v63, v64, v65, v66, v67);
            return;
          }
        }
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        this->fields.selectNum = 1;
        v47 = (DataManager_o *)Instance;
        if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
        this->fields.maxPoint = CoinRoomUtility__MaxPoint(0LL) - sumPoint;
        subTitleLabel = this->fields.subTitleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"CONDUCTION_COMBINE"*/, 0LL);
        if ( subTitleLabel )
        {
          UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0LL);
          selectInfoLabel = this->fields.selectInfoLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"CONCENT_NG"*/, 0LL);
          if ( selectInfoLabel )
          {
            UILabel__set_text(selectInfoLabel, (System_String_o *)gameObject, 0LL);
            gameObject = (UnityEngine_GameObject_o *)this->fields.iconPrefab;
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentInChildren_object__50228848(
                                                         (UnityEngine_Component_o *)gameObject,
                                                         (const MethodInfo_2FE6E70 *)Method_UnityEngine_Component_GetComponentInChildren_CoinRoomCoinIconDraw___);
              if ( gameObject )
              {
                CoinRoomCoinIconDraw__SetItem((CoinRoomCoinIconDraw_o *)gameObject, linkItem, 1, 1, v50);
                gameObject = (UnityEngine_GameObject_o *)this->fields.iconPrefab;
                if ( gameObject )
                {
                  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                             (UnityEngine_Component_o *)gameObject,
                                                             (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
                  if ( gameObject )
                  {
                    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
                    if ( entity )
                    {
                      this->fields.svtId = entity->fields.svtId;
                      if ( linkItem )
                      {
                        this->fields.itemId = linkItem->fields._itemId_k__BackingField;
                        if ( v47 )
                        {
                          gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                                     v47,
                                                                     (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantMaster___);
                          if ( gameObject )
                          {
                            v51 = DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                                    entity->fields.svtId,
                                    (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
                            MasterData_object = DataManager__GetMasterData_object_(
                                                  v47,
                                                  (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
                            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                            if ( !byte_4C1C955 )
                            {
                              sub_1C3B764(&NetworkManager_TypeInfo, v37);
                              byte_4C1C955 = 1;
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
                                                                         *(_QWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr
                                                                                   + 64LL),
                                                                         this->fields.svtId,
                                                                         0LL);
                              if ( ((unsigned __int8)gameObject & 1) != 0 )
                              {
                                gameObject = (UnityEngine_GameObject_o *)DataManager__GetMasterData_object_(
                                                                           v47,
                                                                           (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
                                if ( !entitya )
                                  goto LABEL_54;
                                if ( !gameObject )
                                  goto LABEL_54;
                                gameObject = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                           (ServantLimitImageMaster_o *)gameObject,
                                                                           this->fields.svtId,
                                                                           entitya->fields.maxLimitCount,
                                                                           0LL);
                                if ( !entitya )
                                  goto LABEL_54;
                                if ( (_DWORD)gameObject == entitya->fields.maxLimitCount )
                                  v37 = 0xFFFFFFFFLL;
                                else
                                  v37 = (unsigned int)gameObject;
                              }
                              else
                              {
                                v37 = 0xFFFFFFFFLL;
                              }
                              if ( v51 )
                              {
                                Name = (Il2CppObject *)ServantEntity__getName((ServantEntity_o *)v51, v37, -1, 0, 0LL);
                                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3676/*"COMPLETE_MISSION_TIME_REST_ACHIVE"*/, 0LL);
                                itemName = this->fields.itemName;
                                gameObject = (UnityEngine_GameObject_o *)System_String__Format(v54, Name, 0LL);
                                if ( itemName )
                                {
                                  UILabel__set_text(itemName, (System_String_o *)gameObject, 0LL);
                                  if ( *p_userSvtCoinEntity )
                                  {
                                    this->fields.coinCount = (*p_userSvtCoinEntity)->fields.num;
                                    if ( !CoinRoomUtility_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
                                    v56 = CoinRoomUtility__MonthExchangePoint(0LL);
                                    this->fields.currentPoint = v56;
                                    CoinBulkSelectDialog__UpdateCountValue(this, 1, v56 + 1, v57);
                                    maxPoint = this->fields.maxPoint;
                                    currentPoint = this->fields.currentPoint;
                                    num = entity->fields.num;
                                    if ( !System_Math_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                                    gameObject = (UnityEngine_GameObject_o *)System_Math__Min_64188084(
                                                                               maxPoint - currentPoint,
                                                                               num,
                                                                               0LL);
                                    if ( this->fields.itemSlider )
                                    {
                                      v61 = (int)gameObject;
                                      UISliderWithButton__init(this->fields.itemSlider, (int32_t)gameObject, 0, 1, 0LL);
                                      gameObject = (UnityEngine_GameObject_o *)this->fields.itemSlider;
                                      if ( gameObject )
                                      {
                                        if ( v61 >= 2 )
                                          UISliderWithButton__normalMode((UISliderWithButton_o *)gameObject, 0LL);
                                        else
                                          UISliderWithButton__grayMode((UISliderWithButton_o *)gameObject, 0LL);
                                        this->fields.state = 1;
                                        v62 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
                                        System_Action___ctor(
                                          v62,
                                          (Il2CppObject *)this,
                                          Method_CoinBulkSelectDialog_EndOpen__,
                                          0LL);
                                        BaseDialog__Open((BaseDialog_o *)this, v62, 0, 0LL);
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
    sub_1C3B9C0(gameObject, v37);
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

  if ( (byte_4C256BF & 1) == 0 )
  {
    sub_1C3B764(&CoinRoomUtility_TypeInfo, method);
    byte_4C256BF = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    sub_1C3B9C0(0LL, method);
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x21
  UILabel_o *itemCount; // x20
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  int32_t v24; // [xsp+8h] [xbp-38h] BYREF
  int v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C256C0 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, *(_QWORD *)&count);
    sub_1C3B764(&LocalizationManager_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_3675/*"COMPLETE_MISSION_END"*/, v8);
    sub_1C3B764(&StringLiteral_3674/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, v9);
    byte_4C256C0 = 1;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3674/*"COMPLETE_MISSION_ACTION_SUCCESS"*/, 0LL);
  remainingLabel = this->fields.remainingLabel;
  v25 = this->fields.maxPoint - point;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v12, v13, v14);
  v16 = System_String__Format(v10, v15, 0LL);
  if ( !remainingLabel
    || (UILabel__set_text(remainingLabel, v16, 0LL),
        v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3675/*"COMPLETE_MISSION_END"*/, 0LL),
        itemCount = this->fields.itemCount,
        v24 = count,
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v20, v21, v22),
        v16 = System_String__Format(v18, v23, 0LL),
        !itemCount) )
  {
    sub_1C3B9C0(v16, v17);
  }
  UILabel__set_text(itemCount, v16, 0LL);
}