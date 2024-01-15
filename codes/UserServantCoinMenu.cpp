void __fastcall UserServantCoinMenu___ctor(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40F8145 & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40F8145 = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall UserServantCoinMenu__Close(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  UserServantCoinMenu__Close_21381496(this, 0LL, v2);
}


void __fastcall UserServantCoinMenu__Close_21381496(
        UserServantCoinMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( (byte_40F8142 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_10026/*"OnStartClose"*/, callback);
    byte_40F8142 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
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
    (System_String_o *)StringLiteral_10026/*"OnStartClose"*/,
    0.1,
    0LL);
}


void __fastcall UserServantCoinMenu__EndClose(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  UserServantCoinMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
  }
}


void __fastcall UserServantCoinMenu__EndCloseShowServantCoin(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  struct UserServantCoinListViewManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  UserServantCoinListViewManager_CallbackFunc_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_40F8141 & 1) == 0 )
  {
    sub_B16FFC(&UserServantCoinListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_UserServantCoinMenu_OnSelectServantCoin__, v4);
    byte_40F8141 = 1;
  }
  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  if ( !userServantCoinListViewManager
    || (UserServantCoinListViewManager__RequestListObject(userServantCoinListViewManager, 4, 0.0, v2),
        v6 = this->fields.userServantCoinListViewManager,
        v11 = (UserServantCoinListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                 UserServantCoinListViewManager_CallbackFunc_TypeInfo,
                                                                 v7,
                                                                 v8,
                                                                 v9,
                                                                 v10),
        UserServantCoinListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_UserServantCoinMenu_OnSelectServantCoin__,
          0LL),
        !v6) )
  {
    sub_B170D4();
  }
  v6->fields.callbackFunc = v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v6->fields.callbackFunc,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  UserServantCoinListViewManager__SetMode_21387288(v6, 2, v18);
}


void __fastcall UserServantCoinMenu__EndOpen(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct UserServantCoinListViewManager_o *userServantCoinListViewManager; // x20
  UserServantCoinListViewManager_CallbackFunc_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_40F813E & 1) == 0 )
  {
    sub_B16FFC(&UserServantCoinListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_UserServantCoinMenu_OnSelectServantCoin__, v6);
    byte_40F813E = 1;
  }
  this->fields.state = 2;
  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  v8 = (UserServantCoinListViewManager_CallbackFunc_o *)sub_B170CC(
                                                          UserServantCoinListViewManager_CallbackFunc_TypeInfo,
                                                          method,
                                                          v2,
                                                          v3,
                                                          v4);
  UserServantCoinListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_UserServantCoinMenu_OnSelectServantCoin__,
    0LL);
  if ( !userServantCoinListViewManager )
    sub_B170D4();
  userServantCoinListViewManager->fields.callbackFunc = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&userServantCoinListViewManager->fields.callbackFunc,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UserServantCoinListViewManager__SetMode_21387288(userServantCoinListViewManager, 2, v15);
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
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x21

  if ( (byte_40F8140 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_UserServantCoinMenu_EndCloseShowServantCoin__, v4);
    sub_B16FFC(&Method_UserServantCoinMenu_EndShowServantCoin__, v5);
    byte_40F8140 = 1;
  }
  v6 = Method_UserServantCoinMenu_EndShowServantCoin__;
  if ( (*((_BYTE *)Method_UserServantCoinMenu_EndShowServantCoin__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B17004(Method_UserServantCoinMenu_EndShowServantCoin__);
  v7 = (System_Reflection_MethodBase_o *)sub_B16FE0(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_UserServantCoinMenu_EndCloseShowServantCoin__, 0LL);
  if ( !itemDetailInfoComp )
    sub_B170D4();
  ItemDetailInfoComponent__Close_28918100(itemDetailInfoComp, v13, 0LL);
}


void __fastcall UserServantCoinMenu__Init(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *bgTextSprite; // x0
  UnityEngine_GameObject_o *v7; // x20
  bool IsActiveBgTxt; // w0

  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  this->fields.state = 0;
  if ( !userServantCoinListViewManager
    || (UserServantCoinListViewManager__DestroyList(userServantCoinListViewManager, method),
        (v4 = (UnityEngine_Component_o *)this->fields.userServantCoinListViewManager) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (bgTextSprite = (UnityEngine_Component_o *)this->fields.bgTextSprite) == 0LL)
    || (v7 = UnityEngine_Component__get_gameObject(bgTextSprite, 0LL),
        IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL),
        !v7) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v7, IsActiveBgTxt, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall UserServantCoinMenu__OnClickScaleChange(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  const MethodInfo *v5; // x1

  if ( (byte_40F8144 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40F8144 = 1;
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
      sub_B170D4();
    UserServantCoinListViewManager__ChangeIconScale(userServantCoinListViewManager, v3);
    UserServantCoinMenu__UpdateScaleChangeIconSprite(this, v5);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **age; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **name; // x1
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x21
  ItemDetailInfoComponent_CallbackFunc_o *v38; // x22
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F813F & 1) == 0 )
  {
    sub_B16FFC(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, v7);
    sub_B16FFC(&Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&UserItemData_TypeInfo, v10);
    sub_B16FFC(&Method_UserServantCoinMenu_EndShowServantCoin__, v11);
    byte_40F813F = 1;
  }
  entity = 0LL;
  if ( kind == 1 && this->fields.state == 2 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_15;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            MasterData_WarQuestSelectionMaster,
            &entity,
            itemId,
            (const MethodInfo_266F3E4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__TryGetEntity__) )
      return;
    v18 = sub_B170CC(UserItemData_TypeInfo, v14, v15, v16, v17);
    UserItemData___ctor((UserItemData_o *)v18, 0LL);
    if ( !entity )
      goto LABEL_15;
    if ( !v18 )
      goto LABEL_15;
    age = (System_Int32_array **)entity->fields.age;
    *(_QWORD *)(v18 + 32) = age;
    sub_B16F98((BattleServantConfConponent_o *)(v18 + 32), age, v19, v20, v21, v22, v23, v24);
    if ( !entity
      || (name = (System_Int32_array **)entity->fields.name,
          *(_QWORD *)(v18 + 40) = name,
          sub_B16F98((BattleServantConfConponent_o *)(v18 + 40), name, v26, v27, v28, v29, v30, v31),
          !entity)
      || (*(_DWORD *)(v18 + 20) = HIDWORD(entity->fields.emptyMessage),
          itemDetailInfoComp = this->fields.itemDetailInfoComp,
          v38 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                            ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                            v33,
                                                            v34,
                                                            v35,
                                                            v36),
          ItemDetailInfoComponent_CallbackFunc___ctor(
            v38,
            (Il2CppObject *)this,
            (intptr_t)Method_UserServantCoinMenu_EndShowServantCoin__,
            0LL),
          !itemDetailInfoComp) )
    {
LABEL_15:
      sub_B170D4();
    }
    ItemDetailInfoComponent__OpenUserItemInfo(itemDetailInfoComp, (UserItemData_o *)v18, v38, 5, 0LL);
  }
}


void __fastcall UserServantCoinMenu__OnStartClose(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40F8143 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UserServantCoinMenu_EndClose__, v6);
    byte_40F8143 = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_UserServantCoinMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v7, 0LL);
}


void __fastcall UserServantCoinMenu__OnStartOpen(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40F813D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_UserServantCoinMenu_EndOpen__, v6);
    byte_40F813D = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_UserServantCoinMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v7, 0LL);
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
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  UserServantCoinListViewManager_o *v21; // x0
  const MethodInfo *v22; // x1

  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = openedAct;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mOpenedAct,
      (System_Int32_array **)openedAct,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_B16F98(
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
          (userServantCoinListViewManager = this->fields.userServantCoinListViewManager) == 0LL)
      || (UserServantCoinListViewManager__CreateList(userServantCoinListViewManager, v17),
          UserServantCoinMenu__UpdateScaleChangeIconSprite(this, v19),
          (v21 = this->fields.userServantCoinListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    UserServantCoinListViewManager__SetMode_21387288(v21, 1, v20);
    UserServantCoinMenu__OnStartOpen(this, v22);
  }
}


void __fastcall UserServantCoinMenu__UpdateScaleChangeIconSprite(UserServantCoinMenu_o *this, const MethodInfo *method)
{
  UserServantCoinListViewManager_o *userServantCoinListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19
  System_String_o *ScaleButtonSpriteName; // x0

  userServantCoinListViewManager = this->fields.userServantCoinListViewManager;
  if ( !userServantCoinListViewManager
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        ScaleButtonSpriteName = UserServantCoinListViewManager__GetScaleButtonSpriteName(
                                  userServantCoinListViewManager,
                                  method),
        !scaleChangeTabSprite) )
  {
    sub_B170D4();
  }
  UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
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

  if ( (byte_40F813B & 1) == 0 )
  {
    sub_B16FFC(&UserServantCoinMenu_CallbackFunc_TypeInfo, value);
    byte_40F813B = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserServantCoinMenu_o *)sub_B173C8(v8);
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

  if ( (byte_40F813C & 1) == 0 )
  {
    sub_B16FFC(&UserServantCoinMenu_CallbackFunc_TypeInfo, value);
    byte_40F813C = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (UserServantCoinMenu_o *)sub_B173C8(v8);
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
  sub_B16F98(
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, &v5, callback, object);
}


void __fastcall UserServantCoinMenu_CallbackFunc__EndInvoke(
        UserServantCoinMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v10; // x8
  unsigned __int64 v11; // x10
  _DWORD *v12; // x11
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  void (__fastcall **v16)(__int64 *, _QWORD); // x0
  UserServantCoinMenu_CallbackFunc_o *v17; // x8
  __int64 *v18; // x20
  __int64 v19; // x21
  void (__fastcall *v20)(__int64); // x22
  char v21; // w22
  char v22; // w0
  __int64 v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x10
  _DWORD *v27; // x11
  UserServantCoinMenu_CallbackFunc_o *v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v28;
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
      v17 = v6[v7];
      v18 = *(__int64 **)&v17->fields.method;
      v19 = *(_QWORD *)&v17->fields.extra_arg;
      v20 = *(void (__fastcall **)(__int64))&v17->fields.method_ptr;
      if ( *(__int16 *)(v19 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v17->fields.extra_arg, method, v2);
      if ( (sub_B1702C(v19) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v19 + 74) )
        goto LABEL_35;
      v20(v19);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v18 && *(__int16 *)(v19 + 72) != -1 && (*(_BYTE *)(*v18 + 277) & 1) == 0 && this->fields.m_target )
    {
      v21 = sub_B17024(v19);
      v22 = sub_B17428(v19);
      if ( (v21 & 1) != 0 )
      {
        if ( (v22 & 1) != 0 )
        {
          v23 = *v18;
          v24 = *(_QWORD *)(v19 + 24);
          v25 = *(unsigned __int16 *)(v19 + 72);
          if ( *(_WORD *)(*v18 + 298) )
          {
            v26 = 0LL;
            v27 = (_DWORD *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((_QWORD *)v27 - 1) != v24 )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_34;
            }
            v15 = v23 + 16LL * (*v27 + (int)v25) + 312;
          }
          else
          {
LABEL_34:
            v15 = sub_AAFEF8(v18, v24, v25);
          }
          v14 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v14 = *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320);
        }
        v16 = (void (__fastcall **)(__int64 *, _QWORD))sub_B170AC(v14, v19);
        (*v16)(v18, v16);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v19 + 72);
        if ( (v22 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v19);
          v10 = *v18;
          if ( *(_WORD *)(*v18 + 298) )
          {
            v11 = 0LL;
            v12 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v12 - 1) != class_0 )
            {
              ++v11;
              v12 += 4;
              if ( v11 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_11;
            }
            v13 = v10 + 16LL * (int)(*v12 + v8) + 312;
          }
          else
          {
LABEL_11:
            v13 = sub_AAFEF8(v18, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v13)(v18, *(_QWORD *)(v13 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 312))(
            v18,
            *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v20)(v18, v19);
    goto LABEL_36;
  }
}