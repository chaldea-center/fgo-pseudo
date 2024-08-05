void __fastcall UserServantCoinMenu___ctor(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49FA071 & 1) == 0 )
  {
    sub_1B64870(&BaseMenu_TypeInfo, method);
    byte_49FA071 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall UserServantCoinMenu__Close(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserServantCoinMenu__Close_31327792(this, 0LL, v2);
}


void __fastcall UserServantCoinMenu__Close_31327792(
        UserServantCoinMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  if ( (byte_49FA06E & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_9914/*"OnStartClose"*/, callback);
    byte_49FA06E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B64814(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9914/*"OnStartClose"*/,
    0.1,
    0LL);
}


void __fastcall UserServantCoinMenu__EndClose(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  UserServantCoinMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64ACC(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1B64814(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall UserServantCoinMenu__EndCloseShowServantCoin(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  struct UserServantCoinListViewManager_o *v6; // x20
  UserServantCoinListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_49FA06D & 1) == 0 )
  {
    sub_1B64870(&UserServantCoinListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B64870(&Method_UserServantCoinMenu_OnSelectServantCoin__, v4);
    byte_49FA06D = 1;
  }
  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  if ( !userServantCoinListViewManager
    || (UserServantCoinListViewManager__RequestListObject(userServantCoinListViewManager, 4, 0.0, v2),
        v6 = this->fields.userServantCoinListViewManager,
        v7 = (UserServantCoinListViewManager_CallbackFunc_o *)sub_1B64ABC(UserServantCoinListViewManager_CallbackFunc_TypeInfo),
        UserServantCoinListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_UserServantCoinMenu_OnSelectServantCoin__,
          v8),
        !v6) )
  {
    sub_1B64ACC(userServantCoinListViewManager, method);
  }
  v6->fields.callbackFunc = v7;
  sub_1B64814(&v6->fields.callbackFunc);
  UserServantCoinListViewManager__SetMode_31333308(v6, 2, v9);
}


void __fastcall UserServantCoinMenu__EndOpen(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UserServantCoinListViewManager_o *userServantCoinListViewManager; // x20
  UserServantCoinListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_49FA06A & 1) == 0 )
  {
    sub_1B64870(&UserServantCoinListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B64870(&Method_UserServantCoinMenu_OnSelectServantCoin__, v3);
    byte_49FA06A = 1;
  }
  this->fields.state = 2;
  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  v5 = (UserServantCoinListViewManager_CallbackFunc_o *)sub_1B64ABC(UserServantCoinListViewManager_CallbackFunc_TypeInfo);
  UserServantCoinListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_UserServantCoinMenu_OnSelectServantCoin__,
    v6);
  if ( !userServantCoinListViewManager )
    sub_1B64ACC(v7, v8);
  userServantCoinListViewManager->fields.callbackFunc = v5;
  sub_1B64814(&userServantCoinListViewManager->fields.callbackFunc);
  UserServantCoinListViewManager__SetMode_31333308(userServantCoinListViewManager, 2, v9);
  ActionExtensions__Call(this->fields.mOpenedAct, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinMenu__EndShowServantCoin(
        UserServantCoinMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x20
  System_Action_o *v12; // x21
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  System_Action_o *v14; // x21

  if ( (byte_49FA06C & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, isDecide);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B64870(&Method_UserServantCoinMenu_EndCloseShowServantCoin__, v5);
    sub_1B64870(&Method_UserServantCoinMenu_EndShowServantCoin__, v6);
    byte_49FA06C = 1;
  }
  v7 = Method_UserServantCoinMenu_EndShowServantCoin__;
  if ( (*((_BYTE *)Method_UserServantCoinMenu_EndShowServantCoin__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B64888(Method_UserServantCoinMenu_EndShowServantCoin__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B64854(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_13;
    if ( CommonUI__get_IsActiveItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
    {
      v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_UserServantCoinMenu_EndCloseShowServantCoin__, 0LL);
      if ( v11 )
      {
        CommonUI__CloseItemLinkInfoDetailWindow((CommonUI_o *)v11, v12, 0LL);
        return;
      }
LABEL_13:
      sub_1B64ACC(Instance, v10);
    }
  }
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  v14 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_UserServantCoinMenu_EndCloseShowServantCoin__, 0LL);
  if ( !itemDetailInfoComp )
    goto LABEL_13;
  ItemDetailInfoComponent__Close_30839676(itemDetailInfoComp, v14, 0LL);
}


void __fastcall UserServantCoinMenu__Init(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  this->fields.state = 0;
  if ( !userServantCoinListViewManager
    || (UserServantCoinListViewManager__DestroyList(userServantCoinListViewManager, method),
        (userServantCoinListViewManager = this->fields.userServantCoinListViewManager) == 0LL)
    || (userServantCoinListViewManager = (UserServantCoinListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)userServantCoinListViewManager,
                                                                               0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)userServantCoinListViewManager, 0, 0LL),
        (userServantCoinListViewManager = (UserServantCoinListViewManager_o *)this->fields.bgTextSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)userServantCoinListViewManager,
                       0LL),
        userServantCoinListViewManager = (UserServantCoinListViewManager_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject) )
  {
    sub_1B64ACC(userServantCoinListViewManager, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)userServantCoinListViewManager & 1, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall UserServantCoinMenu__OnClickScaleChange(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_49FA070 & 1) == 0 )
  {
    sub_1B64870(&Method_UserServantCoinMenu_OnClickScaleChange__, method);
    byte_49FA070 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_UserServantCoinMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_UserServantCoinMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_UserServantCoinMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
    if ( !userServantCoinListViewManager )
      sub_1B64ACC(0LL, v5);
    UserServantCoinListViewManager__ChangeIconScale(userServantCoinListViewManager, v5);
    UserServantCoinMenu__UpdateScaleChangeIconSprite(this, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinMenu__OnSelectServantCoin(
        UserServantCoinMenu_o *this,
        int32_t kind,
        int32_t itemId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  UserItemData_o *UserItemData; // x20
  Il2CppObject *v16; // x21
  ItemLinkInfoWindowComponent_CallbackFunc_o *v17; // x22
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v19; // x22
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FA06B & 1) == 0 )
  {
    sub_1B64870(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1B64870(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, v7);
    sub_1B64870(&Method_DataManager_GetMasterData_ItemMaster___, v8);
    sub_1B64870(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B64870(&Method_UserServantCoinMenu_EndShowServantCoin__, v12);
    byte_49FA06B = 1;
  }
  entity = 0LL;
  if ( kind == 1 && this->fields.state == 2 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !Instance )
      goto LABEL_16;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
           &entity,
           itemId,
           (const MethodInfo_30D61D4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_16;
      UserItemData = CommonUI__CreateUserItemData((CommonUI_o *)Instance, (ItemEntity_o *)entity, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_16;
      if ( CommonUI__get_IsEnableItemLinkInfoWindow((CommonUI_o *)Instance, 0LL) )
      {
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v17 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1B64ABC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
        ItemLinkInfoWindowComponent_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          (intptr_t)Method_UserServantCoinMenu_EndShowServantCoin__,
          0LL);
        if ( v16 )
        {
          CommonUI__OpenItemLinkInfoDetailWindow_30438896((CommonUI_o *)v16, UserItemData, v17, 0LL);
          return;
        }
LABEL_16:
        sub_1B64ACC(Instance, v14);
      }
      itemDetailInfoComp = this->fields.itemDetailInfoComp;
      v19 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1B64ABC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
      ItemDetailInfoComponent_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        (intptr_t)Method_UserServantCoinMenu_EndShowServantCoin__,
        0LL);
      if ( !itemDetailInfoComp )
        goto LABEL_16;
      ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, UserItemData, v19, 5, 0LL);
    }
  }
}


void __fastcall UserServantCoinMenu__OnStartClose(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_49FA06F & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_UserServantCoinMenu_EndClose__, v3);
    byte_49FA06F = 1;
  }
  v4 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserServantCoinMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v4, 0LL);
}


void __fastcall UserServantCoinMenu__OnStartOpen(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_49FA069 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, method);
    sub_1B64870(&Method_UserServantCoinMenu_EndOpen__, v3);
    byte_49FA069 = 1;
  }
  v4 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_UserServantCoinMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v4, 0LL);
}


void __fastcall UserServantCoinMenu__Open(
        UserServantCoinMenu_o *this,
        System_Action_o *openedAct,
        UserServantCoinMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1

  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = openedAct;
    sub_1B64814(&this->fields.mOpenedAct);
    this->fields.callbackFunc = callback;
    sub_1B64814(&this->fields.callbackFunc);
    this->fields.state = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.userServantCoinListViewManager) == 0LL)
      || (UserServantCoinListViewManager__CreateList((UserServantCoinListViewManager_o *)gameObject, v7),
          UserServantCoinMenu__UpdateScaleChangeIconSprite(this, v8),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.userServantCoinListViewManager) == 0LL) )
    {
      sub_1B64ACC(gameObject, v7);
    }
    UserServantCoinListViewManager__SetMode_31333308((UserServantCoinListViewManager_o *)gameObject, 1, v9);
    UserServantCoinMenu__OnStartOpen(this, v10);
  }
}


void __fastcall UserServantCoinMenu__UpdateScaleChangeIconSprite(UserServantCoinMenu_o *this, const MethodInfo *method)
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
    sub_1B64ACC(userServantCoinListViewManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)userServantCoinListViewManager, 0LL);
}


void __fastcall UserServantCoinMenu__add_callbackFunc(
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

  if ( (byte_49FA067 & 1) == 0 )
  {
    sub_1B64870(&UserServantCoinMenu_CallbackFunc_TypeInfo, value);
    byte_49FA067 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (UserServantCoinMenu_CallbackFunc_c *)v8->klass != UserServantCoinMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B9FD60(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserServantCoinMenu_o *)sub_1B64D8C(v8);
  UserServantCoinMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall UserServantCoinMenu__remove_callbackFunc(
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

  if ( (byte_49FA068 & 1) == 0 )
  {
    sub_1B64870(&UserServantCoinMenu_CallbackFunc_TypeInfo, value);
    byte_49FA068 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (UserServantCoinMenu_CallbackFunc_c *)v8->klass != UserServantCoinMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1B9FD60(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserServantCoinMenu_o *)sub_1B64D8C(v8);
  UserServantCoinMenu__UpdateScaleChangeIconSprite(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinMenu_CallbackFunc___ctor(
        UserServantCoinMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B64814(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19A611C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A60DC;
}


System_IAsyncResult_o *__fastcall UserServantCoinMenu_CallbackFunc__BeginInvoke(
        UserServantCoinMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B64824(this, &v5, callback, object);
}


void __fastcall UserServantCoinMenu_CallbackFunc__EndInvoke(
        UserServantCoinMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
}


void __fastcall UserServantCoinMenu_CallbackFunc__Invoke(
        UserServantCoinMenu_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}