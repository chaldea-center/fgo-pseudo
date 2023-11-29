void __fastcall CoinBulkSelectDialog___ctor(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40F9A02 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40F9A02 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  System_Action_o *v9; // x21

  if ( (byte_40F99FC & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_int___, action);
    sub_B16FFC(&System_Action_TypeInfo, v7);
    sub_B16FFC(&Method_CoinBulkSelectDialog_EndClose__, v8);
    byte_40F99FC = 1;
  }
  this->fields.state = 4;
  v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, action, method, v3, v4);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CoinBulkSelectDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
  if ( action )
    ActionExtensions__Call_int_(
      (System_Action_T__o *)action,
      this->fields.selectNum,
      (const MethodInfo_2D39F14 *)Method_ActionExtensions_Call_int___);
}


void __fastcall CoinBulkSelectDialog__EndClose(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  CoinBulkSelectDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
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
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.userSvtCoinEntity = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.userSvtCoinEntity, 0LL, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_40F99FE & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F99FE = 1;
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
      sub_B170D4();
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

  if ( (byte_40F99FD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_CoinRoomCoinIconObject__int__Invoke__, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40F99FD = 1;
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
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.onDecideAction, 0LL, v4, v5, v6, v7, v8, v9);
      System_Action_object__int___Invoke(
        onDecideAction,
        (Il2CppObject *)this->fields.iconObject,
        this->fields.selectNum,
        (const MethodInfo_24C46F4 *)Method_System_Action_CoinRoomCoinIconObject__int__Invoke__);
    }
  }
}


void __fastcall CoinBulkSelectDialog__OnEnable(CoinBulkSelectDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Transform_o *transform; // x19

  if ( (byte_40F9A01 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_15414, v3);
    byte_40F9A01 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn_21111220(transform, (System_String_o *)StringLiteral_15414, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
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
  System_String_o *v48; // x0
  UILabel_o *selectInfoLabel; // x23
  System_String_o *v50; // x0
  UnityEngine_Component_o *iconPrefab; // x0
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  const MethodInfo *v53; // x4
  UnityEngine_Component_o *v54; // x0
  UnityEngine_Collider_o *Component_WebViewObject; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *v57; // x23
  UserServantCollectionMaster_o *v58; // x24
  int64_t UserId; // x0
  ServantLimitImageMaster_o *v60; // x0
  int32_t ServantLimitCountSealAfter; // w0
  int32_t v62; // w1
  Il2CppObject *Name; // x22
  System_String_o *v64; // x0
  UILabel_o *itemName; // x23
  System_String_o *v66; // x0
  CoinRoomUtility_c *v67; // x0
  int32_t v68; // w0
  const MethodInfo *v69; // x3
  int32_t maxPoint; // w21
  int32_t currentPoint; // w22
  int32_t num; // w20
  int32_t v73; // w0
  int v74; // w20
  UISliderWithButton_o *itemSlider; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  System_Action_o *v80; // x20
  const MethodInfo *v81; // x0
  UserServantCollectionEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F99FB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, entity);
    sub_B16FFC(&Method_CoinBulkSelectDialog_EndOpen__, v13);
    sub_B16FFC(&CoinRoomCoinIconItem_TypeInfo, v14);
    sub_B16FFC(&CoinRoomUtility_TypeInfo, v15);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_CoinRoomCoinIconDraw___, v16);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_BoxCollider___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v20);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_B16FFC(&LocalizationManager_TypeInfo, v22);
    sub_B16FFC(&System_Math_TypeInfo, v23);
    sub_B16FFC(&NetworkManager_TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B16FFC(&StringLiteral_3135, v26);
    sub_B16FFC(&StringLiteral_3132, v27);
    sub_B16FFC(&StringLiteral_3133, v28);
    byte_40F99FB = 1;
  }
  entitya = 0LL;
  if ( !this->fields.state )
  {
    this->fields.onDecideAction = onDecideAction;
    sub_B16F98(
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
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.userSvtCoinEntity,
      (System_Int32_array **)entity,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_57;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.iconObject = iconObject;
    this->fields.isOpen = 0;
    sub_B16F98(
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
      v81 = (const MethodInfo *)sub_B173C8(iconObject->fields.linkItem);
      CoinRoomUtility__MaxPoint(v81);
    }
    else
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      this->fields.selectNum = 1;
      v46 = (DataManager_o *)Instance;
      if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      }
      this->fields.maxPoint = CoinRoomUtility__MaxPoint((const MethodInfo *)Instance) - sumPoint;
      subTitleLabel = this->fields.subTitleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_3135, 0LL);
      if ( !subTitleLabel )
        goto LABEL_57;
      UILabel__set_text(subTitleLabel, v48, 0LL);
      selectInfoLabel = this->fields.selectInfoLabel;
      v50 = LocalizationManager__Get((System_String_o *)StringLiteral_3133, 0LL);
      if ( !selectInfoLabel )
        goto LABEL_57;
      UILabel__set_text(selectInfoLabel, v50, 0LL);
      iconPrefab = (UnityEngine_Component_o *)this->fields.iconPrefab;
      if ( !iconPrefab )
        goto LABEL_57;
      ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                       iconPrefab,
                                       (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_CoinRoomCoinIconDraw___);
      if ( !ComponentInChildren_UIWidget )
        goto LABEL_57;
      CoinRoomCoinIconDraw__SetItem((CoinRoomCoinIconDraw_o *)ComponentInChildren_UIWidget, linkItem, 1, 1, v53);
      v54 = (UnityEngine_Component_o *)this->fields.iconPrefab;
      if ( !v54 )
        goto LABEL_57;
      Component_WebViewObject = (UnityEngine_Collider_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                            v54,
                                                            (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( !Component_WebViewObject )
        goto LABEL_57;
      UnityEngine_Collider__set_enabled(Component_WebViewObject, 0, 0LL);
      if ( !entity )
        goto LABEL_57;
      this->fields.svtId = entity->fields.svtId;
      if ( !linkItem )
        goto LABEL_57;
      this->fields.itemId = linkItem->fields._itemId_k__BackingField;
      if ( !v46 )
        goto LABEL_57;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            v46,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_57;
      v57 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 entity->fields.svtId,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v58 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               v46,
                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = NetworkManager__get_UserId(0LL);
      if ( !v58 )
        goto LABEL_57;
      if ( UserServantCollectionMaster__TryGetEntity(v58, &entitya, UserId, this->fields.svtId, 0LL) )
      {
        v60 = (ServantLimitImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             v46,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
        if ( !entitya )
          goto LABEL_57;
        if ( !v60 )
          goto LABEL_57;
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                       v60,
                                       this->fields.svtId,
                                       entitya->fields.maxLimitCount,
                                       0LL);
        if ( !entitya )
          goto LABEL_57;
        v62 = ServantLimitCountSealAfter == entitya->fields.maxLimitCount ? -1 : ServantLimitCountSealAfter;
        if ( !v57 )
          goto LABEL_57;
      }
      else
      {
        v62 = -1;
        if ( !v57 )
          goto LABEL_57;
      }
      Name = (Il2CppObject *)ServantEntity__getName(v57, v62, -1, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v64 = LocalizationManager__Get((System_String_o *)StringLiteral_3132, 0LL);
      itemName = this->fields.itemName;
      v66 = System_String__Format(v64, Name, 0LL);
      if ( !itemName )
        goto LABEL_57;
      UILabel__set_text(itemName, v66, 0LL);
      if ( !*p_userSvtCoinEntity )
        goto LABEL_57;
      this->fields.coinCount = (*p_userSvtCoinEntity)->fields.num;
      v67 = CoinRoomUtility_TypeInfo;
      if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
      }
      v68 = CoinRoomUtility__MonthExchangePoint((const MethodInfo *)v67);
      this->fields.currentPoint = v68;
      CoinBulkSelectDialog__UpdateCountValue(this, 1, v68 + 1, v69);
      maxPoint = this->fields.maxPoint;
      currentPoint = this->fields.currentPoint;
      num = entity->fields.num;
      if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      }
      v73 = System_Math__Min_44418752(maxPoint - currentPoint, num, 0LL);
      if ( !this->fields.itemSlider
        || (v74 = v73,
            UISliderWithButton__init(this->fields.itemSlider, v73, 0, 1, 0LL),
            (itemSlider = this->fields.itemSlider) == 0LL) )
      {
LABEL_57:
        sub_B170D4();
      }
      if ( v74 >= 2 )
        UISliderWithButton__normalMode(itemSlider, 0LL);
      else
        UISliderWithButton__grayMode(itemSlider, 0LL);
      this->fields.state = 1;
      v80 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v76, v77, v78, v79);
      System_Action___ctor(v80, (Il2CppObject *)this, Method_CoinBulkSelectDialog_EndOpen__, 0LL);
      BaseDialog__Open((BaseDialog_o *)this, v80, 0, 0LL);
      this->fields.isOpen = 1;
    }
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

  if ( (byte_40F99FF & 1) == 0 )
  {
    sub_B16FFC(&CoinRoomUtility_TypeInfo, method);
    byte_40F99FF = 1;
  }
  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    sub_B170D4();
  v4 = UISliderWithButton__sliderValueChange(itemSlider, 0LL);
  if ( this->fields.isOpen )
  {
    v5 = v4;
    v6 = CoinRoomUtility_TypeInfo;
    if ( (BYTE3(CoinRoomUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CoinRoomUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CoinRoomUtility_TypeInfo);
    }
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
  System_String_o *v18; // x0
  int32_t v19; // [xsp+8h] [xbp-38h] BYREF
  int v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F9A00 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&count);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_3131, v8);
    sub_B16FFC(&StringLiteral_3130, v9);
    byte_40F9A00 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3130, 0LL);
  remainingLabel = this->fields.remainingLabel;
  v12 = v10;
  v20 = this->fields.maxPoint - point;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
  v14 = System_String__Format(v12, v13, 0LL);
  if ( !remainingLabel
    || (UILabel__set_text(remainingLabel, v14, 0LL),
        v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3131, 0LL),
        itemCount = this->fields.itemCount,
        v19 = count,
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19),
        v18 = System_String__Format(v15, v17, 0LL),
        !itemCount) )
  {
    sub_B170D4();
  }
  UILabel__set_text(itemCount, v18, 0LL);
}