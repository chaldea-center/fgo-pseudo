void __fastcall UserServantCoinMenu___ctor(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6B10 & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6B10 = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall UserServantCoinMenu__Close(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserServantCoinMenu__Close_21775540(this, 0LL, v2);
}


void __fastcall UserServantCoinMenu__Close_21775540(
        UserServantCoinMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( (byte_42E6B0D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10164/*"OnStartClose"*/, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E6B0D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
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
    (System_String_o *)StringLiteral_10164/*"OnStartClose"*/,
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall UserServantCoinMenu__EndCloseShowServantCoin(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  struct UserServantCoinListViewManager_o *v9; // x20
  UserServantCoinListViewManager_CallbackFunc_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_42E6B0C & 1) == 0 )
  {
    sub_B5D5C4(&UserServantCoinListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_UserServantCoinMenu_OnSelectServantCoin__, v5, v6, v7);
    byte_42E6B0C = 1;
  }
  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  if ( !userServantCoinListViewManager
    || (UserServantCoinListViewManager__RequestListObject(userServantCoinListViewManager, 4, 0.0, v2),
        v9 = this->fields.userServantCoinListViewManager,
        v10 = (UserServantCoinListViewManager_CallbackFunc_o *)sub_B5D694(UserServantCoinListViewManager_CallbackFunc_TypeInfo),
        UserServantCoinListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_UserServantCoinMenu_OnSelectServantCoin__,
          0LL),
        !v9) )
  {
    sub_B5D69C(userServantCoinListViewManager, method);
  }
  v9->fields.callbackFunc = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields.callbackFunc,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  UserServantCoinListViewManager__SetMode_21781332(v9, 2, v17);
}


void __fastcall UserServantCoinMenu__EndOpen(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct UserServantCoinListViewManager_o *userServantCoinListViewManager; // x20
  UserServantCoinListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_42E6B09 & 1) == 0 )
  {
    sub_B5D5C4(&UserServantCoinListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UserServantCoinMenu_OnSelectServantCoin__, v5, v6, v7);
    byte_42E6B09 = 1;
  }
  this->fields.state = 2;
  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  v9 = (UserServantCoinListViewManager_CallbackFunc_o *)sub_B5D694(UserServantCoinListViewManager_CallbackFunc_TypeInfo);
  UserServantCoinListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_UserServantCoinMenu_OnSelectServantCoin__,
    0LL);
  if ( !userServantCoinListViewManager )
    sub_B5D69C(v10, v11);
  userServantCoinListViewManager->fields.callbackFunc = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&userServantCoinListViewManager->fields.callbackFunc,
    (System_Int32_array **)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  UserServantCoinListViewManager__SetMode_21781332(userServantCoinListViewManager, 2, v18);
  ActionExtensions__Call(this->fields.mOpenedAct, 0LL);
}


void __fastcall UserServantCoinMenu__EndShowServantCoin(
        UserServantCoinMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42E6B0B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UserServantCoinMenu_EndCloseShowServantCoin__, v5, v6, v7);
    sub_B5D5C4(&Method_UserServantCoinMenu_EndShowServantCoin__, v8, v9, v10);
    byte_42E6B0B = 1;
  }
  v11 = Method_UserServantCoinMenu_EndShowServantCoin__;
  if ( (*((_BYTE *)Method_UserServantCoinMenu_EndShowServantCoin__ + 75) & 2) != 0 )
    v11 = (_QWORD *)sub_B5D5CC(Method_UserServantCoinMenu_EndShowServantCoin__);
  v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_UserServantCoinMenu_EndCloseShowServantCoin__, 0LL);
  if ( !itemDetailInfoComp )
    sub_B5D69C(v15, v16);
  ItemDetailInfoComponent__Close_28491116(itemDetailInfoComp, v14, 0LL);
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
    sub_B5D69C(userServantCoinListViewManager, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)userServantCoinListViewManager & 1, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall UserServantCoinMenu__OnClickScaleChange(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42E6B0F & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6B0F = 1;
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
      sub_B5D69C(0LL, v5);
    UserServantCoinListViewManager__ChangeIconScale(userServantCoinListViewManager, v5);
    UserServantCoinMenu__UpdateScaleChangeIconSprite(this, v7);
  }
}


void __fastcall UserServantCoinMenu__OnSelectServantCoin(
        UserServantCoinMenu_o *this,
        int32_t kind,
        int32_t itemId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  __int64 v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **age; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **name; // x1
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v40; // x22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E6B0A & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, kind, itemId, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&UserItemData_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_UserServantCoinMenu_EndShowServantCoin__, v19, v20, v21);
    byte_42E6B0A = 1;
  }
  entity = 0LL;
  if ( kind == 1 && this->fields.state == 2 )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !Instance )
      goto LABEL_15;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
            &entity,
            itemId,
            (const MethodInfo_23FAE6C *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      return;
    v24 = sub_B5D694(UserItemData_TypeInfo);
    UserItemData___ctor((UserItemData_o *)v24, 0LL);
    if ( !entity )
      goto LABEL_15;
    if ( !v24 )
      goto LABEL_15;
    age = (System_Int32_array **)entity->fields.age;
    *(_QWORD *)(v24 + 32) = age;
    sub_B5D560((BattleServantConfConponent_o *)(v24 + 32), age, v25, v26, v27, v28, v29, v30);
    if ( !entity
      || (name = (System_Int32_array **)entity->fields.name,
          *(_QWORD *)(v24 + 40) = name,
          sub_B5D560((BattleServantConfConponent_o *)(v24 + 40), name, v32, v33, v34, v35, v36, v37),
          !entity)
      || (*(_DWORD *)(v24 + 20) = HIDWORD(entity->fields.emptyMessage),
          itemDetailInfoComp = this->fields.itemDetailInfoComp,
          v40 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo),
          ItemDetailInfoComponent_CallbackFunc___ctor(
            v40,
            (Il2CppObject *)this,
            (intptr_t)Method_UserServantCoinMenu_EndShowServantCoin__,
            0LL),
          !itemDetailInfoComp) )
    {
LABEL_15:
      sub_B5D69C(Instance, v23);
    }
    ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, (UserItemData_o *)v24, v40, 5, 0LL);
  }
}


void __fastcall UserServantCoinMenu__OnStartClose(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42E6B0E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UserServantCoinMenu_EndClose__, v5, v6, v7);
    byte_42E6B0E = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_UserServantCoinMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v8, 0LL);
}


void __fastcall UserServantCoinMenu__OnStartOpen(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42E6B08 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UserServantCoinMenu_EndOpen__, v5, v6, v7);
    byte_42E6B08 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_UserServantCoinMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v8, 0LL);
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mOpenedAct,
      (System_Int32_array **)openedAct,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_B5D560(
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
      sub_B5D69C(gameObject, v17);
    }
    UserServantCoinListViewManager__SetMode_21781332((UserServantCoinListViewManager_o *)gameObject, 1, v19);
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
    sub_B5D69C(userServantCoinListViewManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)userServantCoinListViewManager, 0LL);
}


void __fastcall UserServantCoinMenu__add_callbackFunc(
        UserServantCoinMenu_o *this,
        UserServantCoinMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct UserServantCoinMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct UserServantCoinMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  UserServantCoinMenu_o *v12; // x0
  UserServantCoinMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E6B06 & 1) == 0 )
  {
    sub_B5D5C4(&UserServantCoinMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6B06 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (UserServantCoinMenu_CallbackFunc_c *)v9->klass != UserServantCoinMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (UserServantCoinMenu_o *)sub_B5D990(v9);
  UserServantCoinMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall UserServantCoinMenu__remove_callbackFunc(
        UserServantCoinMenu_o *this,
        UserServantCoinMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct UserServantCoinMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct UserServantCoinMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  UserServantCoinMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E6B07 & 1) == 0 )
  {
    sub_B5D5C4(&UserServantCoinMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E6B07 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (UserServantCoinMenu_CallbackFunc_c *)v9->klass != UserServantCoinMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (UserServantCoinMenu_o *)sub_B5D990(v9);
  UserServantCoinMenu__UpdateScaleChangeIconSprite(v12, v13);
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
  sub_B5D560(
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
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall UserServantCoinMenu_CallbackFunc__EndInvoke(
        UserServantCoinMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall UserServantCoinMenu_CallbackFunc__Invoke(
        UserServantCoinMenu_CallbackFunc_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  UserServantCoinMenu_CallbackFunc_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  UserServantCoinMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  UserServantCoinMenu_CallbackFunc_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (UserServantCoinMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}