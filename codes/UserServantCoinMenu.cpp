void __fastcall UserServantCoinMenu___ctor(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  if ( (byte_42AE1A9 & 1) == 0 )
  {
    sub_B52984(&BaseMenu_TypeInfo);
    byte_42AE1A9 = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall UserServantCoinMenu__Close(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserServantCoinMenu__Close_21444352(this, 0LL, v2);
}


void __fastcall UserServantCoinMenu__Close_21444352(
        UserServantCoinMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( (byte_42AE1A6 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10122/*"OnStartClose"*/);
    byte_42AE1A6 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10122/*"OnStartClose"*/,
    0.1,
    0LL);
}


void __fastcall UserServantCoinMenu__EndClose(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  UserServantCoinMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B52A5C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B52920(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall UserServantCoinMenu__EndCloseShowServantCoin(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  struct UserServantCoinListViewManager_o *v5; // x20
  UserServantCoinListViewManager_CallbackFunc_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_42AE1A5 & 1) == 0 )
  {
    sub_B52984(&UserServantCoinListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_UserServantCoinMenu_OnSelectServantCoin__);
    byte_42AE1A5 = 1;
  }
  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  if ( !userServantCoinListViewManager
    || (UserServantCoinListViewManager__RequestListObject(userServantCoinListViewManager, 4, 0.0, v2),
        v5 = this->fields.userServantCoinListViewManager,
        v6 = (UserServantCoinListViewManager_CallbackFunc_o *)sub_B52A54(UserServantCoinListViewManager_CallbackFunc_TypeInfo),
        UserServantCoinListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_UserServantCoinMenu_OnSelectServantCoin__,
          0LL),
        !v5) )
  {
    sub_B52A5C(userServantCoinListViewManager, method);
  }
  v5->fields.callbackFunc = v6;
  sub_B52920(
    (BattleServantConfConponent_o *)&v5->fields.callbackFunc,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  UserServantCoinListViewManager__SetMode_21450144(v5, 2, v13);
}


void __fastcall UserServantCoinMenu__EndOpen(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  struct UserServantCoinListViewManager_o *userServantCoinListViewManager; // x20
  UserServantCoinListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_42AE1A2 & 1) == 0 )
  {
    sub_B52984(&UserServantCoinListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_UserServantCoinMenu_OnSelectServantCoin__);
    byte_42AE1A2 = 1;
  }
  this->fields.state = 2;
  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  v4 = (UserServantCoinListViewManager_CallbackFunc_o *)sub_B52A54(UserServantCoinListViewManager_CallbackFunc_TypeInfo);
  UserServantCoinListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_UserServantCoinMenu_OnSelectServantCoin__,
    0LL);
  if ( !userServantCoinListViewManager )
    sub_B52A5C(v5, v6);
  userServantCoinListViewManager->fields.callbackFunc = v4;
  sub_B52920(
    (BattleServantConfConponent_o *)&userServantCoinListViewManager->fields.callbackFunc,
    (System_Int32_array **)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  UserServantCoinListViewManager__SetMode_21450144(userServantCoinListViewManager, 2, v13);
  ActionExtensions__Call(this->fields.mOpenedAct, 0LL);
}


void __fastcall UserServantCoinMenu__EndShowServantCoin(
        UserServantCoinMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_42AE1A4 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UserServantCoinMenu_EndCloseShowServantCoin__);
    sub_B52984(&Method_UserServantCoinMenu_EndShowServantCoin__);
    byte_42AE1A4 = 1;
  }
  v4 = Method_UserServantCoinMenu_EndShowServantCoin__;
  if ( (*((_BYTE *)Method_UserServantCoinMenu_EndShowServantCoin__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B5298C(Method_UserServantCoinMenu_EndShowServantCoin__);
  v5 = (System_Reflection_MethodBase_o *)sub_B52968(v4, v4[3]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_UserServantCoinMenu_EndCloseShowServantCoin__, 0LL);
  if ( !itemDetailInfoComp )
    sub_B52A5C(v8, v9);
  ItemDetailInfoComponent__Close_28302480(itemDetailInfoComp, v7, 0LL);
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
    sub_B52A5C(userServantCoinListViewManager, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)userServantCoinListViewManager & 1, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall UserServantCoinMenu__OnClickScaleChange(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  const MethodInfo *v5; // x1

  if ( (byte_42AE1A8 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AE1A8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
    if ( !userServantCoinListViewManager )
      sub_B52A5C(0LL, v3);
    UserServantCoinListViewManager__ChangeIconScale(userServantCoinListViewManager, v3);
    UserServantCoinMenu__UpdateScaleChangeIconSprite(this, v5);
  }
}


void __fastcall UserServantCoinMenu__OnSelectServantCoin(
        UserServantCoinMenu_o *this,
        int32_t kind,
        int32_t itemId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **age; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **name; // x1
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v25; // x22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AE1A3 & 1) == 0 )
  {
    sub_B52984(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B52984(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserItemData_TypeInfo);
    sub_B52984(&Method_UserServantCoinMenu_EndShowServantCoin__);
    byte_42AE1A3 = 1;
  }
  entity = 0LL;
  if ( kind == 1 && this->fields.state == 2 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !Instance )
      goto LABEL_15;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
            &entity,
            itemId,
            (const MethodInfo_23E2334 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      return;
    v9 = sub_B52A54(UserItemData_TypeInfo);
    UserItemData___ctor((UserItemData_o *)v9, 0LL);
    if ( !entity )
      goto LABEL_15;
    if ( !v9 )
      goto LABEL_15;
    age = (System_Int32_array **)entity->fields.age;
    *(_QWORD *)(v9 + 32) = age;
    sub_B52920((BattleServantConfConponent_o *)(v9 + 32), age, v10, v11, v12, v13, v14, v15);
    if ( !entity
      || (name = (System_Int32_array **)entity->fields.name,
          *(_QWORD *)(v9 + 40) = name,
          sub_B52920((BattleServantConfConponent_o *)(v9 + 40), name, v17, v18, v19, v20, v21, v22),
          !entity)
      || (*(_DWORD *)(v9 + 20) = HIDWORD(entity->fields.emptyMessage),
          itemDetailInfoComp = this->fields.itemDetailInfoComp,
          v25 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B52A54(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
          ItemDetailInfoComponent_CallbackFunc___ctor(
            v25,
            (Il2CppObject *)this,
            (intptr_t)Method_UserServantCoinMenu_EndShowServantCoin__,
            0LL),
          !itemDetailInfoComp) )
    {
LABEL_15:
      sub_B52A5C(Instance, v8);
    }
    ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, (UserItemData_o *)v9, v25, 5, 0LL);
  }
}


void __fastcall UserServantCoinMenu__OnStartClose(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_42AE1A7 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UserServantCoinMenu_EndClose__);
    byte_42AE1A7 = 1;
  }
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_UserServantCoinMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v3, 0LL);
}


void __fastcall UserServantCoinMenu__OnStartOpen(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_42AE1A1 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_UserServantCoinMenu_EndOpen__);
    byte_42AE1A1 = 1;
  }
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_UserServantCoinMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v3, 0LL);
}


void __fastcall UserServantCoinMenu__Open(
        UserServantCoinMenu_o *this,
        System_Action_o *openedAct,
        UserServantCoinMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1

  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = openedAct;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.mOpenedAct,
      (System_Int32_array **)openedAct,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    this->fields.state = 1;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.userServantCoinListViewManager) == 0LL)
      || (UserServantCoinListViewManager__CreateList((UserServantCoinListViewManager_o *)gameObject, v17),
          UserServantCoinMenu__UpdateScaleChangeIconSprite(this, v18),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.userServantCoinListViewManager) == 0LL) )
    {
      sub_B52A5C(gameObject, v17);
    }
    UserServantCoinListViewManager__SetMode_21450144((UserServantCoinListViewManager_o *)gameObject, 1, v19);
    UserServantCoinMenu__OnStartOpen(this, v20);
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
    sub_B52A5C(userServantCoinListViewManager, method);
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

  if ( (byte_42AE19F & 1) == 0 )
  {
    sub_B52984(&UserServantCoinMenu_CallbackFunc_TypeInfo);
    byte_42AE19F = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserServantCoinMenu_o *)sub_B52D50(v8);
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

  if ( (byte_42AE1A0 & 1) == 0 )
  {
    sub_B52984(&UserServantCoinMenu_CallbackFunc_TypeInfo);
    byte_42AE1A0 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserServantCoinMenu_o *)sub_B52D50(v8);
  UserServantCoinMenu__UpdateScaleChangeIconSprite(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCoinMenu_CallbackFunc___ctor(
        UserServantCoinMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B52920(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall UserServantCoinMenu_CallbackFunc__BeginInvoke(
        UserServantCoinMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B52928(this, &v5, callback, object);
}


void __fastcall UserServantCoinMenu_CallbackFunc__EndInvoke(
        UserServantCoinMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


void __fastcall UserServantCoinMenu_CallbackFunc__Invoke(
        UserServantCoinMenu_CallbackFunc_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  UserServantCoinMenu_CallbackFunc_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  UserServantCoinMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  UserServantCoinMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (UserServantCoinMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B529B4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B529AC(v21);
      v24 = sub_B52DB0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AEB880(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B52A34(v16, v21);
        (*v18)(v20, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AEB880(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
    goto LABEL_36;
  }
}