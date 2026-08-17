void UserServantCoinMenu___ctor(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596BCCA & 1) == 0 )
  {
    sub_2213A60(&BaseMenu_TypeInfo);
    byte_596BCCA = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method, v2);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void UserServantCoinMenu__Close(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserServantCoinMenu__Close_40607320(this, 0, v2);
}


void UserServantCoinMenu__Close_40607320(
        UserServantCoinMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x1

  if ( (byte_596BCC7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_10368/*"OnStartClose"*/);
    byte_596BCC7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_String_o *)StringLiteral_10368/*"OnStartClose"*/;
  this->fields.state = 4;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v10, 0.1, 0);
}


void UserServantCoinMenu__EndClose(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  UserServantCoinMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void UserServantCoinMenu__EndCloseShowServantCoin(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  struct UserServantCoinListViewManager_o *v5; // x20
  UserServantCoinListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_596BCC6 & 1) == 0 )
  {
    sub_2213A60(&UserServantCoinListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_UserServantCoinMenu_OnSelectServantCoin__);
    byte_596BCC6 = 1;
  }
  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  if ( !userServantCoinListViewManager
    || (UserServantCoinListViewManager__RequestListObject(userServantCoinListViewManager, 4, 0.0, v2),
        v5 = this->fields.userServantCoinListViewManager,
        v6 = (UserServantCoinListViewManager_CallbackFunc_o *)sub_2213CCC(UserServantCoinListViewManager_CallbackFunc_TypeInfo),
        UserServantCoinListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_UserServantCoinMenu_OnSelectServantCoin__,
          v7),
        !v5) )
  {
    sub_2213CDC(userServantCoinListViewManager, method);
  }
  v5->fields.callbackFunc = v6;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  UserServantCoinListViewManager__SetMode_40612960(v5, 2, v14);
}


void UserServantCoinMenu__EndOpen(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  UserServantCoinListViewManager_CallbackFunc_c *v3; // x0
  struct UserServantCoinListViewManager_o *userServantCoinListViewManager; // x20
  UserServantCoinListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2

  if ( (byte_596BCC3 & 1) == 0 )
  {
    sub_2213A60(&UserServantCoinListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_UserServantCoinMenu_OnSelectServantCoin__);
    byte_596BCC3 = 1;
  }
  v3 = UserServantCoinListViewManager_CallbackFunc_TypeInfo;
  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  this->fields.state = 2;
  v5 = (UserServantCoinListViewManager_CallbackFunc_o *)sub_2213CCC(v3);
  UserServantCoinListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_UserServantCoinMenu_OnSelectServantCoin__,
    v6);
  if ( !userServantCoinListViewManager )
    sub_2213CDC(v7, v8);
  userServantCoinListViewManager->fields.callbackFunc = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&userServantCoinListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UserServantCoinListViewManager__SetMode_40612960(userServantCoinListViewManager, 2, v15);
  ActionExtensions__Call(this->fields.mOpenedAct, 0);
}


void UserServantCoinMenu__EndShowServantCoin(UserServantCoinMenu_o *this, bool isDecide, const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  System_Action_o *v9; // x21
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  System_Action_o *v11; // x21

  if ( (byte_596BCC5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_UserServantCoinMenu_EndCloseShowServantCoin__);
    sub_2213A60(&Method_UserServantCoinMenu_EndShowServantCoin__);
    byte_596BCC5 = 1;
  }
  v4 = Method_UserServantCoinMenu_EndShowServantCoin__;
  if ( (*((_BYTE *)Method_UserServantCoinMenu_EndShowServantCoin__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_2213A78(Method_UserServantCoinMenu_EndShowServantCoin__);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow((CommonUI_o *)Instance, 0) )
    {
      v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_UserServantCoinMenu_EndCloseShowServantCoin__, 0);
      if ( v8 )
      {
        CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)v8, v9, 0);
        return;
      }
LABEL_13:
      sub_2213CDC(Instance, v7);
    }
  }
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_UserServantCoinMenu_EndCloseShowServantCoin__, 0);
  if ( !itemDetailInfoComp )
    goto LABEL_13;
  ItemDetailInfoComponent__Close_39909252(itemDetailInfoComp, v11, 0);
}


void UserServantCoinMenu__Init(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  this->fields.state = 0;
  if ( !userServantCoinListViewManager
    || (UserServantCoinListViewManager__DestroyList(userServantCoinListViewManager, method),
        (userServantCoinListViewManager = this->fields.userServantCoinListViewManager) == 0)
    || (userServantCoinListViewManager = (UserServantCoinListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)userServantCoinListViewManager,
                                                                               0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userServantCoinListViewManager, 0, 0),
        (userServantCoinListViewManager = (UserServantCoinListViewManager_o *)this->fields.bgTextSprite) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)userServantCoinListViewManager, 0),
        userServantCoinListViewManager = (UserServantCoinListViewManager_o *)BgTxtManager__IsActiveBgTxt(0),
        !gameObject) )
  {
    sub_2213CDC(userServantCoinListViewManager, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)userServantCoinListViewManager & 1, 0);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void UserServantCoinMenu__OnClickScaleChange(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_596BCC9 & 1) == 0 )
  {
    sub_2213A60(&Method_UserServantCoinMenu_OnClickScaleChange__);
    byte_596BCC9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_UserServantCoinMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_UserServantCoinMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_UserServantCoinMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
    if ( !userServantCoinListViewManager )
      sub_2213CDC(0, v5);
    UserServantCoinListViewManager__ChangeIconScale(userServantCoinListViewManager, v5);
    UserServantCoinMenu__UpdateScaleChangeIconSprite(this, v7);
  }
}


void UserServantCoinMenu__OnSelectServantCoin(
        UserServantCoinMenu_o *this,
        int32_t kind,
        int32_t itemId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  UserItemData_o *UserItemData; // x20
  Il2CppObject *v10; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v11; // x22
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v13; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596BCC4 & 1) == 0 )
  {
    sub_2213A60(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_UserServantCoinMenu_EndShowServantCoin__);
    byte_596BCC4 = 1;
  }
  entity = 0;
  if ( kind == 1 && this->fields.state == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !Instance )
      goto LABEL_16;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           itemId,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_16;
      UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)Instance, (ItemEntity_o *)entity, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_16;
      if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0) )
      {
        v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v11 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_2213CCC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_UserServantCoinMenu_EndShowServantCoin__,
          0);
        if ( v10 )
        {
          CommonUI__OpenItemLinkInfoDetailWindow_37479768((CommonUI_o *)v10, UserItemData, v11, 0);
          return;
        }
LABEL_16:
        sub_2213CDC(Instance, v8);
      }
      itemDetailInfoComp = this->fields.itemDetailInfoComp;
      v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_2213CCC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        (intptr_t)Method_UserServantCoinMenu_EndShowServantCoin__,
        0);
      if ( !itemDetailInfoComp )
        goto LABEL_16;
      ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, UserItemData, v13, 5, 0);
    }
  }
}


void UserServantCoinMenu__OnStartClose(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_596BCC8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UserServantCoinMenu_EndClose__);
    byte_596BCC8 = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_UserServantCoinMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v3, 0);
}


void UserServantCoinMenu__OnStartOpen(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_596BCC2 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_UserServantCoinMenu_EndOpen__);
    byte_596BCC2 = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_UserServantCoinMenu_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v3, 0);
}


void UserServantCoinMenu__Open(
        UserServantCoinMenu_o *this,
        System_Action_o *openedAct,
        UserServantCoinMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1

  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = openedAct;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mOpenedAct,
      (int32_t)openedAct,
      (System_String_o *)callback,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    this->fields.state = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.userServantCoinListViewManager) == 0)
      || (UserServantCoinListViewManager__CreateList((UserServantCoinListViewManager_o *)gameObject, v17),
          UserServantCoinMenu__UpdateScaleChangeIconSprite(this, v18),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.userServantCoinListViewManager) == 0) )
    {
      sub_2213CDC(gameObject, v17);
    }
    UserServantCoinListViewManager__SetMode_40612960((UserServantCoinListViewManager_o *)gameObject, 1, v19);
    UserServantCoinMenu__OnStartOpen(this, v20);
  }
}


void UserServantCoinMenu__UpdateScaleChangeIconSprite(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  if ( !userServantCoinListViewManager
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        userServantCoinListViewManager = (UserServantCoinListViewManager_o *)UserServantCoinListViewManager__GetScaleButtonSpriteName(
                                                                               userServantCoinListViewManager,
                                                                               method),
        !scaleChangeTabSprite) )
  {
    sub_2213CDC(userServantCoinListViewManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)userServantCoinListViewManager, 0);
}


void UserServantCoinMenu__add_callbackFunc(
        UserServantCoinMenu_o *this,
        UserServantCoinMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct UserServantCoinMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct UserServantCoinMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  UserServantCoinMenu_o *v13; // x0
  UserServantCoinMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596BCC0 & 1) == 0 )
  {
    sub_2213A60(&UserServantCoinMenu_CallbackFunc_TypeInfo);
    byte_596BCC0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (UserServantCoinMenu_CallbackFunc_c *)v8->klass != UserServantCoinMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (UserServantCoinMenu_o *)sub_221405C(v8, UserServantCoinMenu_CallbackFunc_TypeInfo, v9, v10);
  UserServantCoinMenu__remove_callbackFunc(v13, v14, v15);
}


void UserServantCoinMenu__remove_callbackFunc(
        UserServantCoinMenu_o *this,
        UserServantCoinMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct UserServantCoinMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct UserServantCoinMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  UserServantCoinMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596BCC1 & 1) == 0 )
  {
    sub_2213A60(&UserServantCoinMenu_CallbackFunc_TypeInfo);
    byte_596BCC1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (UserServantCoinMenu_CallbackFunc_c *)v8->klass != UserServantCoinMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (UserServantCoinMenu_o *)sub_221405C(v8, UserServantCoinMenu_CallbackFunc_TypeInfo, v9, v10);
  UserServantCoinMenu__UpdateScaleChangeIconSprite(v13, v14);
}


void UserServantCoinMenu_CallbackFunc___ctor(
        UserServantCoinMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2003718;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20036D8;
}


System_IAsyncResult_o *UserServantCoinMenu_CallbackFunc__BeginInvoke(
        UserServantCoinMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_2213A14(this, &v5, callback, object);
}


void UserServantCoinMenu_CallbackFunc__EndInvoke(
        UserServantCoinMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void UserServantCoinMenu_CallbackFunc__Invoke(UserServantCoinMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}