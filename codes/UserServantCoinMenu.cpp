void UserServantCoinMenu___ctor(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C229F6 & 1) == 0 )
  {
    sub_1C2D490(&BaseMenu_TypeInfo);
    byte_4C229F6 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void UserServantCoinMenu__Close(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserServantCoinMenu__Close_33656292(this, 0, v2);
}


void UserServantCoinMenu__Close_33656292(
        UserServantCoinMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C229F3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9959/*"OnStartClose"*/);
    byte_4C229F3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9959/*"OnStartClose"*/, 0.1, 0);
}


void UserServantCoinMenu__EndClose(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  UserServantCoinMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C2D434(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


void UserServantCoinMenu__EndCloseShowServantCoin(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  struct UserServantCoinListViewManager_o *v5; // x20
  UserServantCoinListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4C229F2 & 1) == 0 )
  {
    sub_1C2D490(&UserServantCoinListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_UserServantCoinMenu_OnSelectServantCoin__);
    byte_4C229F2 = 1;
  }
  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  if ( !userServantCoinListViewManager
    || (UserServantCoinListViewManager__RequestListObject(userServantCoinListViewManager, 4, 0.0, v2),
        v5 = this->fields.userServantCoinListViewManager,
        v6 = (UserServantCoinListViewManager_CallbackFunc_o *)sub_1C2D6DC(UserServantCoinListViewManager_CallbackFunc_TypeInfo),
        UserServantCoinListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_UserServantCoinMenu_OnSelectServantCoin__,
          v7),
        !v5) )
  {
    sub_1C2D6EC(userServantCoinListViewManager, method);
  }
  v5->fields.callbackFunc = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9);
  UserServantCoinListViewManager__SetMode_33661952(v5, 2, v10);
}


void UserServantCoinMenu__EndOpen(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  struct UserServantCoinListViewManager_o *userServantCoinListViewManager; // x20
  UserServantCoinListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4C229EF & 1) == 0 )
  {
    sub_1C2D490(&UserServantCoinListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_UserServantCoinMenu_OnSelectServantCoin__);
    byte_4C229EF = 1;
  }
  this->fields.state = 2;
  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  v4 = (UserServantCoinListViewManager_CallbackFunc_o *)sub_1C2D6DC(UserServantCoinListViewManager_CallbackFunc_TypeInfo);
  UserServantCoinListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_UserServantCoinMenu_OnSelectServantCoin__,
    v5);
  if ( !userServantCoinListViewManager )
    sub_1C2D6EC(v6, v7);
  userServantCoinListViewManager->fields.callbackFunc = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&userServantCoinListViewManager->fields.callbackFunc, (int32_t)v4, v8, v9);
  UserServantCoinListViewManager__SetMode_33661952(userServantCoinListViewManager, 2, v10);
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

  if ( (byte_4C229F1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_UserServantCoinMenu_EndCloseShowServantCoin__);
    sub_1C2D490(&Method_UserServantCoinMenu_EndShowServantCoin__);
    byte_4C229F1 = 1;
  }
  v4 = Method_UserServantCoinMenu_EndShowServantCoin__;
  if ( (*((_BYTE *)Method_UserServantCoinMenu_EndShowServantCoin__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C2D4A8(Method_UserServantCoinMenu_EndShowServantCoin__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow((CommonUI_o *)Instance, 0) )
    {
      v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_UserServantCoinMenu_EndCloseShowServantCoin__, 0);
      if ( v8 )
      {
        CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)v8, v9, 0);
        return;
      }
LABEL_13:
      sub_1C2D6EC(Instance, v7);
    }
  }
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_UserServantCoinMenu_EndCloseShowServantCoin__, 0);
  if ( !itemDetailInfoComp )
    goto LABEL_13;
  ItemDetailInfoComponent__Close_33002376(itemDetailInfoComp, v11, 0);
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
    sub_1C2D6EC(userServantCoinListViewManager, method);
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

  if ( (byte_4C229F5 & 1) == 0 )
  {
    sub_1C2D490(&Method_UserServantCoinMenu_OnClickScaleChange__);
    byte_4C229F5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_UserServantCoinMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_UserServantCoinMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_UserServantCoinMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
    if ( !userServantCoinListViewManager )
      sub_1C2D6EC(0, v5);
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

  if ( (byte_4C229F0 & 1) == 0 )
  {
    sub_1C2D490(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_UserServantCoinMenu_EndShowServantCoin__);
    byte_4C229F0 = 1;
  }
  entity = 0;
  if ( kind == 1 && this->fields.state == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !Instance )
      goto LABEL_16;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           itemId,
           (const MethodInfo_3387DE4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_16;
      UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)Instance, (ItemEntity_o *)entity, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_16;
      if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0) )
      {
        v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v11 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C2D6DC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          (intptr_t)Method_UserServantCoinMenu_EndShowServantCoin__,
          0);
        if ( v10 )
        {
          CommonUI__OpenItemLinkInfoDetailWindow_31274180((CommonUI_o *)v10, UserItemData, v11, 0);
          return;
        }
LABEL_16:
        sub_1C2D6EC(Instance, v8);
      }
      itemDetailInfoComp = this->fields.itemDetailInfoComp;
      v13 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C2D6DC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
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

  if ( (byte_4C229F4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UserServantCoinMenu_EndClose__);
    byte_4C229F4 = 1;
  }
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_UserServantCoinMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v3, 0);
}


void UserServantCoinMenu__OnStartOpen(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C229EE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_UserServantCoinMenu_EndOpen__);
    byte_4C229EE = 1;
  }
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_UserServantCoinMenu_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v3, 0);
}


void UserServantCoinMenu__Open(
        UserServantCoinMenu_o *this,
        System_Action_o *openedAct,
        UserServantCoinMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1

  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = openedAct;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mOpenedAct, (int32_t)openedAct, (int32_t)callback, method);
    this->fields.callbackFunc = callback;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v6, v7);
    this->fields.state = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.userServantCoinListViewManager) == 0)
      || (UserServantCoinListViewManager__CreateList((UserServantCoinListViewManager_o *)gameObject, v9),
          UserServantCoinMenu__UpdateScaleChangeIconSprite(this, v10),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.userServantCoinListViewManager) == 0) )
    {
      sub_1C2D6EC(gameObject, v9);
    }
    UserServantCoinListViewManager__SetMode_33661952((UserServantCoinListViewManager_o *)gameObject, 1, v11);
    UserServantCoinMenu__OnStartOpen(this, v12);
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
    sub_1C2D6EC(userServantCoinListViewManager, method);
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
  __int64 v9; // x0
  bool v10; // zf
  UserServantCoinMenu_o *v11; // x0
  UserServantCoinMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C229EC & 1) == 0 )
  {
    sub_1C2D490(&UserServantCoinMenu_CallbackFunc_TypeInfo);
    byte_4C229EC = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserServantCoinMenu_o *)sub_1C2D9AC(v8);
  UserServantCoinMenu__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  UserServantCoinMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C229ED & 1) == 0 )
  {
    sub_1C2D490(&UserServantCoinMenu_CallbackFunc_TypeInfo);
    byte_4C229ED = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserServantCoinMenu_o *)sub_1C2D9AC(v8);
  UserServantCoinMenu__UpdateScaleChangeIconSprite(v11, v12);
}


void UserServantCoinMenu_CallbackFunc___ctor(
        UserServantCoinMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6B7A4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6B764;
}


System_IAsyncResult_o *UserServantCoinMenu_CallbackFunc__BeginInvoke(
        UserServantCoinMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v5, callback, object);
}


void UserServantCoinMenu_CallbackFunc__EndInvoke(
        UserServantCoinMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void UserServantCoinMenu_CallbackFunc__Invoke(UserServantCoinMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}