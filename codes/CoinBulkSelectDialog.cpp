void __fastcall CoinBulkSelectDialog___ctor(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4214730 & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4214730 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
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

  if ( (byte_421472A & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_int___, action);
    sub_B0D8A4(&System_Action_TypeInfo, v5);
    sub_B0D8A4(&Method_CoinBulkSelectDialog_EndClose__, v6);
    byte_421472A = 1;
  }
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, action, method);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CoinBulkSelectDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  if ( action )
    ActionExtensions__Call_int_(
      (System_Action_T__o *)action,
      this->fields.selectNum,
      (const MethodInfo_2D96680 *)Method_ActionExtensions_Call_int___);
}


void __fastcall CoinBulkSelectDialog__EndClose(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  CoinBulkSelectDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall CoinBulkSelectDialog__EndOpen(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall CoinBulkSelectDialog__Init(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.userSvtCoinEntity = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.userSvtCoinEntity, 0LL, v4, v5, v6, v7, v8, v9);
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
  UISliderWithButton_o *itemSlider; // x0
  const MethodInfo *v4; // x2

  if ( (byte_421472C & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421472C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.isOpen = 0;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    itemSlider = this->fields.itemSlider;
    if ( !itemSlider )
      sub_B0D97C(0LL);
    UISliderWithButton__grayMode(itemSlider, 0LL);
    CoinBulkSelectDialog__Close(this, 0LL, v4);
  }
}


void __fastcall CoinBulkSelectDialog__OnClickDecide(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Action_T1__T2__o *onDecideAction; // x20

  if ( (byte_421472B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_CoinRoomCoinIconObject__int__Invoke__, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_421472B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    onDecideAction = (System_Action_T1__T2__o *)this->fields.onDecideAction;
    if ( onDecideAction )
    {
      this->fields.onDecideAction = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.onDecideAction, 0LL, v4, v5, v6, v7, v8, v9);
      System_Action_object__int___Invoke(
        onDecideAction,
        (Il2CppObject *)this->fields.iconObject,
        this->fields.selectNum,
        (const MethodInfo_247C484 *)Method_System_Action_CoinRoomCoinIconObject__int__Invoke__);
    }
  }
}


void __fastcall CoinBulkSelectDialog__OnEnable(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_421472F & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_15524/*"Window/CancelButton"*/, v3);
    byte_421472F = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_20833784(transform, (System_String_o *)StringLiteral_15524/*"Window/CancelButton"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CoinBulkSelectDialog__Open(
        CoinBulkSelectDialog_o *this,
        UserSvtCoinEntity_o *entity,
        CoinRoomCoinIconObject_o *iconObject,
        int32_t sumPoint,
        System_Action_CoinRoomCoinIconObject__int__o *onDecideAction,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  int64_t gameObject; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  CoinRoomCoinIconItem_o *linkItem; // x24
  __int64 v44; // x9
  WebViewManager_o *Instance; // x0
  DataManager_o *v46; // x22
  UILabel_o *subTitleLabel; // x23
  UILabel_o *selectInfoLabel; // x23
  const MethodInfo *v49; // x4
  ServantEntity_o *v50; // x23
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x24
  int32_t v52; // w1
  Il2CppObject *Name; // x22
  System_String_o *v54; // x0
  UILabel_o *itemName; // x23
  int32_t v56; // w0
  const MethodInfo *v57; // x3
  int32_t maxPoint; // w21
  int32_t currentPoint; // w22
  int32_t num; // w20
  int v61; // w20
  __int64 v62; // x1
  __int64 v63; // x2
  System_Action_o *v64; // x20
  CoinRoomCoinIconDraw_o *v65; // x0
  CoinRoomCoinIconItem_o *v66; // x1
  int32_t v67; // w2
  bool v68; // w3
  const MethodInfo *v69; // x4
  UserServantCollectionEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4214729 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, entity);
    sub_B0D8A4(&Method_CoinBulkSelectDialog_EndOpen__, v13);
    sub_B0D8A4(&CoinRoomCoinIconItem_TypeInfo, v14);
    sub_B0D8A4(&CoinRoomUtility_TypeInfo, v15);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_CoinRoomCoinIconDraw___, v16);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v20);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v22);
    sub_B0D8A4(&System_Math_TypeInfo, v23);
    sub_B0D8A4(&NetworkManager_TypeInfo, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B0D8A4(&StringLiteral_3156/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, v26);
    sub_B0D8A4(&StringLiteral_3153/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_NAME"*/, v27);
    sub_B0D8A4(&StringLiteral_3154/*"COIN_ROOM_SELECT_DIALOD_SELECT_INFO_TXET"*/, v28);
    byte_4214729 = 1;
  }
  entitya = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecideAction = onDecideAction;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.onDecideAction,
      (System_Int32_array **)onDecideAction,
      (System_String_array **)iconObject,
      *(System_String_array ***)&sumPoint,
      (System_Boolean_array **)onDecideAction,
      (System_Int32_array **)method,
      v6,
      v7);
    this->fields.userSvtCoinEntity = entity;
    p_userSvtCoinEntity = &this->fields.userSvtCoinEntity;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.userSvtCoinEntity,
      (System_Int32_array **)entity,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    this->fields.iconObject = iconObject;
    this->fields.isOpen = 0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.iconObject,
      (System_Int32_array **)iconObject,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    if ( !iconObject )
      goto LABEL_57;
    linkItem = (CoinRoomCoinIconItem_o *)iconObject->fields.linkItem;
    if ( linkItem
      && ((v44 = *(&CoinRoomCoinIconItem_TypeInfo->_2.bitflags2 + 1),
           *(&linkItem->klass->_2.bitflags2 + 1) < (unsigned int)v44)
       || (CoinRoomCoinIconItem_c *)linkItem->klass->_2.typeHierarchy[v44 - 1] != CoinRoomCoinIconItem_TypeInfo) )
    {
      v65 = (CoinRoomCoinIconDraw_o *)sub_B0DC70(iconObject->fields.linkItem);
      CoinRoomCoinIconDraw__SetItem(v65, v66, v67, v68, v69);
    }
    else
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      this->fields.selectNum = 1;
      v46 = (DataManager_o *)Instance;
      if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      }
      this->fields.maxPoint = CoinRoomUtility__MaxPoint(0LL) - sumPoint;
      subTitleLabel = this->fields.subTitleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3156/*"COIN_ROOM_SELECT_LIST_SUB_TITLE"*/, 0LL);
      if ( !subTitleLabel )
        goto LABEL_57;
      UILabel__set_text(subTitleLabel, (System_String_o *)gameObject, 0LL);
      selectInfoLabel = this->fields.selectInfoLabel;
      gameObject = (int64_t)LocalizationManager__Get((System_String_o *)StringLiteral_3154/*"COIN_ROOM_SELECT_DIALOD_SELECT_INFO_TXET"*/, 0LL);
      if ( !selectInfoLabel )
        goto LABEL_57;
      UILabel__set_text(selectInfoLabel, (System_String_o *)gameObject, 0LL);
      gameObject = (int64_t)this->fields.iconPrefab;
      if ( !gameObject )
        goto LABEL_57;
      gameObject = (int64_t)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                              (UnityEngine_Component_o *)gameObject,
                              (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_CoinRoomCoinIconDraw___);
      if ( !gameObject )
        goto LABEL_57;
      CoinRoomCoinIconDraw__SetItem((CoinRoomCoinIconDraw_o *)gameObject, linkItem, 1, 1, v49);
      gameObject = (int64_t)this->fields.iconPrefab;
      if ( !gameObject )
        goto LABEL_57;
      gameObject = (int64_t)UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)gameObject,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( !gameObject )
        goto LABEL_57;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
      if ( !entity )
        goto LABEL_57;
      this->fields.svtId = entity->fields.svtId;
      if ( !linkItem )
        goto LABEL_57;
      this->fields.itemId = linkItem->fields._itemId_k__BackingField;
      if ( !v46 )
        goto LABEL_57;
      gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              v46,
                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !gameObject )
        goto LABEL_57;
      v50 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)gameObject,
                                 entity->fields.svtId,
                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                              v46,
                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      gameObject = NetworkManager__get_UserId(0LL);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_57;
      gameObject = UserServantCollectionMaster__TryGetEntity(
                     MasterData_WarQuestSelectionMaster,
                     &entitya,
                     gameObject,
                     this->fields.svtId,
                     0LL);
      if ( (gameObject & 1) != 0 )
      {
        gameObject = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                v46,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        if ( !entitya )
          goto LABEL_57;
        if ( !gameObject )
          goto LABEL_57;
        gameObject = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                       (ServantLimitImageMaster_o *)gameObject,
                       this->fields.svtId,
                       entitya->fields.maxLimitCount,
                       0LL);
        if ( !entitya )
          goto LABEL_57;
        v52 = (_DWORD)gameObject == entitya->fields.maxLimitCount ? -1 : gameObject;
        if ( !v50 )
          goto LABEL_57;
      }
      else
      {
        v52 = -1;
        if ( !v50 )
          goto LABEL_57;
      }
      Name = (Il2CppObject *)ServantEntity__getName(v50, v52, -1, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3153/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_NAME"*/, 0LL);
      itemName = this->fields.itemName;
      gameObject = (int64_t)System_String__Format(v54, Name, 0LL);
      if ( !itemName )
        goto LABEL_57;
      UILabel__set_text(itemName, (System_String_o *)gameObject, 0LL);
      if ( !*p_userSvtCoinEntity )
        goto LABEL_57;
      this->fields.coinCount = (*p_userSvtCoinEntity)->fields.num;
      if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      }
      v56 = CoinRoomUtility__MonthExchangePoint(0LL);
      this->fields.currentPoint = v56;
      CoinBulkSelectDialog__UpdateCountValue(this, 1, v56 + 1, v57);
      maxPoint = this->fields.maxPoint;
      currentPoint = this->fields.currentPoint;
      num = entity->fields.num;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      gameObject = System_Math__Min_44514512(maxPoint - currentPoint, num, 0LL);
      if ( !this->fields.itemSlider
        || (v61 = gameObject,
            UISliderWithButton__init(this->fields.itemSlider, gameObject, 0, 1, 0LL),
            (gameObject = (int64_t)this->fields.itemSlider) == 0) )
      {
LABEL_57:
        sub_B0D97C(gameObject);
      }
      if ( v61 >= 2 )
        UISliderWithButton__normalMode((UISliderWithButton_o *)gameObject, 0LL);
      else
        UISliderWithButton__grayMode((UISliderWithButton_o *)gameObject, 0LL);
      this->fields.state = 1;
      v64 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v62, v63);
      System_Action___ctor(v64, (Il2CppObject *)this, Method_CoinBulkSelectDialog_EndOpen__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v64, 0, 0LL);
      this->fields.isOpen = 1;
    }
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

  if ( (byte_421472D & 1) == 0 )
  {
    sub_B0D8A4(&CoinRoomUtility_TypeInfo, method);
    byte_421472D = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    sub_B0D97C(0LL);
  v4 = UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  if ( this->fields.isOpen )
  {
    v5 = v4;
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
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
  System_String_o *v10; // x0
  UILabel_o *remainingLabel; // x22
  System_String_o *v12; // x23
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x21
  UILabel_o *itemCount; // x20
  Il2CppObject *v17; // x0
  int32_t v18; // [xsp+8h] [xbp-38h] BYREF
  int v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_421472E & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&count);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_3152/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_COUNT"*/, v8);
    sub_B0D8A4(&StringLiteral_3151/*"COIN_ROOM_SELECT_DIALOD_REMAINING_TEXT"*/, v9);
    byte_421472E = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3151/*"COIN_ROOM_SELECT_DIALOD_REMAINING_TEXT"*/, 0LL);
  remainingLabel = this->fields.remainingLabel;
  v12 = v10;
  v19 = this->fields.maxPoint - point;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19);
  v14 = System_String__Format(v12, v13, 0LL);
  if ( !remainingLabel
    || (UILabel__set_text(remainingLabel, v14, 0LL),
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3152/*"COIN_ROOM_SELECT_DIALOD_SELECTED_ITEM_COUNT"*/, 0LL),
        itemCount = this->fields.itemCount,
        v18 = count,
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18),
        v14 = System_String__Format(v15, v17, 0LL),
        !itemCount) )
  {
    sub_B0D97C(v14);
  }
  UILabel__set_text(itemCount, v14, 0LL);
}