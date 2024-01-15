void __fastcall MaterialCollectionMenu___ctor(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FCB5C & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40FCB5C = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall MaterialCollectionMenu__Callback(
        MaterialCollectionMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  MaterialCollectionMenu_CallbackFunc_o *v9; // x20
  struct MaterialCollectionMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    MaterialCollectionMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall MaterialCollectionMenu__Close(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCollectionMenu__Close_30080128(this, 0LL, v2);
}


void __fastcall MaterialCollectionMenu__Close_30080128(
        MaterialCollectionMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( (byte_40FCB50 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_10026/*"OnStartClose"*/, callback);
    byte_40FCB50 = 1;
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


void __fastcall MaterialCollectionMenu__EndClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
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

  MaterialCollectionMenu__Init(this, method);
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


void __fastcall MaterialCollectionMenu__EndCloseShowServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  struct MaterialCollectionServantListViewManager_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  MaterialCollectionServantListViewManager_CallbackFunc_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_40FCB5B & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_MaterialCollectionMenu_OnSelectServant__, v4);
    byte_40FCB5B = 1;
  }
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( !materialCollectionServantListViewManager
    || (MaterialCollectionServantListViewManager__RequestListObject_30099796(
          materialCollectionServantListViewManager,
          4,
          v2),
        v6 = this->fields.materialCollectionServantListViewManager,
        v11 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                           MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo,
                                                                           v7,
                                                                           v8,
                                                                           v9,
                                                                           v10),
        MaterialCollectionServantListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_OnSelectServant__,
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
  MaterialCollectionServantListViewManager__SetMode_30084748(v6, 2, v18);
}


void __fastcall MaterialCollectionMenu__EndCloseShowServantuestQuestJump(
        MaterialCollectionMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.state = 3;
  MaterialCollectionMenu__Callback(this, 1, v2);
}


void __fastcall MaterialCollectionMenu__EndOpen(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x20
  MaterialCollectionServantListViewManager_CallbackFunc_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_40FCB4F & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_MaterialCollectionMenu_OnSelectServant__, v6);
    byte_40FCB4F = 1;
  }
  this->fields.state = 2;
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  v8 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                    MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3,
                                                                    v4);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    0LL);
  if ( !materialCollectionServantListViewManager )
    sub_B170D4();
  materialCollectionServantListViewManager->fields.callbackFunc = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&materialCollectionServantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  MaterialCollectionServantListViewManager__SetMode_30084748(materialCollectionServantListViewManager, 2, v15);
  ActionExtensions__Call(this->fields.mOpenedAct, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionMenu__EndShowServant(
        MaterialCollectionMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  CommonUI_o *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Action_o *v16; // x0
  __int64 *v17; // x8
  ListViewManager_o *materialCollectionServantListViewManager; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Action_o *v23; // x21

  if ( (byte_40FCB59 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_MaterialCollectionMenu_EndCloseShowServant__, v8);
    sub_B16FFC(&Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_40FCB59 = 1;
  }
  if ( questId < 1 )
  {
    if ( isNeedSort )
    {
      materialCollectionServantListViewManager = (ListViewManager_o *)this->fields.materialCollectionServantListViewManager;
      if ( !materialCollectionServantListViewManager )
        goto LABEL_11;
      ListViewManager__SortItem(materialCollectionServantListViewManager, -1, 0, -1, 0LL);
    }
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
    v17 = &Method_MaterialCollectionMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v12, v13, v14, v15);
    v17 = &Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__;
  }
  v23 = v16;
  System_Action___ctor(v16, (Il2CppObject *)this, *v17, 0LL);
  if ( !Instance )
LABEL_11:
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v23, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionMenu__EndShowServantEquip(
        MaterialCollectionMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x21

  if ( (byte_40FCB5A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_MaterialCollectionMenu_EndCloseShowServant__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FCB5A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseServantStatusDialog(Instance, v11, 0LL);
}


void __fastcall MaterialCollectionMenu__Init(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  UnityEngine_Component_o *v4; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *bgTxtSprite; // x0
  UnityEngine_GameObject_o *v7; // x20
  bool IsActiveBgTxt; // w0

  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  this->fields.state = 0;
  if ( !materialCollectionServantListViewManager
    || (MaterialCollectionServantListViewManager__DestroyList(materialCollectionServantListViewManager, method),
        (v4 = (UnityEngine_Component_o *)this->fields.materialCollectionServantListViewManager) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(v4, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        (bgTxtSprite = (UnityEngine_Component_o *)this->fields.bgTxtSprite) == 0LL)
    || (v7 = UnityEngine_Component__get_gameObject(bgTxtSprite, 0LL),
        IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL),
        !v7) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v7, IsActiveBgTxt, 0LL);
  this->fields.tabKind = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall MaterialCollectionMenu__OnClickCancel(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FCB54 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCB54 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    MaterialCollectionMenu__Callback(this, 0, v3);
  }
}


void __fastcall MaterialCollectionMenu__OnClickDecide(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FCB53 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCB53 = 1;
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
    MaterialCollectionMenu__Callback(this, 0, v3);
  }
}


void __fastcall MaterialCollectionMenu__OnClickTabCommandCode(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FCB57 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCB57 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    MaterialCollectionMenu__SetTabKind(this, 2, 0, v3);
  }
}


void __fastcall MaterialCollectionMenu__OnClickTabServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FCB55 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCB55 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    MaterialCollectionMenu__SetTabKind(this, 0, 0, v3);
  }
}


void __fastcall MaterialCollectionMenu__OnClickTabServantEquip(
        MaterialCollectionMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_40FCB56 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FCB56 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    MaterialCollectionMenu__SetTabKind(this, 1, 0, v3);
  }
}


void __fastcall MaterialCollectionMenu__OnMoveEnd(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionMenu__OnSelectServant(
        MaterialCollectionMenu_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  MaterialCollectionServantListViewItem_o *Item; // x0
  MaterialCollectionServantListViewItem_o *v13; // x20
  ServantEntity_o *servantEntity; // x0
  bool IsKeepServantEquip; // w22
  WebViewManager_o *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  UserServantCollectionEntity_o *userSvtCollectionEntity; // x20
  CommonUI_o *v22; // x21
  ServantStatusDialog_EndDelegate_o *v23; // x22
  WebViewManager_o *v24; // x0
  UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity; // x20
  CommonUI_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  ServantStatusDialog_EndDelegate_o *v31; // x22
  WebViewManager_o *v32; // x0
  ServantStatusDialog_ResultDelegate_o *v33; // x22

  if ( (byte_40FCB58 & 1) == 0 )
  {
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_MaterialCollectionMenu_EndShowServantEquip__, v7);
    sub_B16FFC(&Method_MaterialCollectionMenu_EndShowServant__, v8);
    sub_B16FFC(&ServantStatusDialog_ResultDelegate_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_40FCB58 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.selectIndex = index;
    if ( kind == 1 )
    {
      materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
      if ( !materialCollectionServantListViewManager )
        goto LABEL_19;
      Item = MaterialCollectionServantListViewManager__GetItem(
               materialCollectionServantListViewManager,
               index,
               *(const MethodInfo **)&index);
      if ( !Item )
        goto LABEL_19;
      v13 = Item;
      if ( Item->fields.userSvtCollectionEntity )
      {
        servantEntity = Item->fields.servantEntity;
        if ( servantEntity )
        {
          IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip(servantEntity, 0LL);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          userSvtCollectionEntity = v13->fields.userSvtCollectionEntity;
          v22 = (CommonUI_o *)Instance;
          if ( IsKeepServantEquip )
          {
            v23 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                         ServantStatusDialog_EndDelegate_TypeInfo,
                                                         v17,
                                                         v18,
                                                         v19,
                                                         v20);
            ServantStatusDialog_EndDelegate___ctor(
              v23,
              (Il2CppObject *)this,
              Method_MaterialCollectionMenu_EndShowServantEquip__,
              0LL);
            if ( v22 )
            {
              CommonUI__OpenServantStatusDialog_18249576(v22, 2, userSvtCollectionEntity, v23, 0LL);
              return;
            }
LABEL_19:
            sub_B170D4();
          }
        }
        else
        {
          v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          userSvtCollectionEntity = v13->fields.userSvtCollectionEntity;
          v22 = (CommonUI_o *)v32;
        }
        v33 = (ServantStatusDialog_ResultDelegate_o *)sub_B170CC(
                                                        ServantStatusDialog_ResultDelegate_TypeInfo,
                                                        v17,
                                                        v18,
                                                        v19,
                                                        v20);
        ServantStatusDialog_ResultDelegate___ctor(
          v33,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServant__,
          0LL);
        if ( !v22 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_18250072(v22, 2, userSvtCollectionEntity, v33, 0LL);
      }
      else if ( Item->fields.userCommandCodeCollectionEntity )
      {
        v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        userCommandCodeCollectionEntity = v13->fields.userCommandCodeCollectionEntity;
        v26 = (CommonUI_o *)v24;
        v31 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                     ServantStatusDialog_EndDelegate_TypeInfo,
                                                     v27,
                                                     v28,
                                                     v29,
                                                     v30);
        ServantStatusDialog_EndDelegate___ctor(
          v31,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServantEquip__,
          0LL);
        if ( !v26 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_18251056(v26, 2, userCommandCodeCollectionEntity, v31, 0LL, 0LL);
      }
    }
  }
}


void __fastcall MaterialCollectionMenu__OnStartClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40FCB51 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MaterialCollectionMenu_EndClose__, v6);
    byte_40FCB51 = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v7, 0LL);
}


void __fastcall MaterialCollectionMenu__OnStartOpen(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_40FCB4E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_MaterialCollectionMenu_EndOpen__, v6);
    byte_40FCB4E = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v7, 0LL);
}


void __fastcall MaterialCollectionMenu__Open(
        MaterialCollectionMenu_o *this,
        System_Action_o *opened_act,
        MaterialCollectionMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Int32_array *NewList; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *materialCollectionServantListViewManager; // x0
  UnityEngine_GameObject_o *v30; // x0
  const MethodInfo *v31; // x2
  MaterialCollectionServantListViewManager_o *v32; // x0
  struct UICommonButton_o *servantTabButton; // x0
  UnityEngine_Behaviour_o *v34; // x0
  struct UICommonButton_o *servantEquipTabButton; // x0
  struct UICommonButton_o *commandCodeTabButton; // x0
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x2
  MaterialCollectionServantListViewManager_o *v39; // x0

  if ( (byte_40FCB4D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, opened_act);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_10027/*"OnStartOpen"*/, v12);
    byte_40FCB4D = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = opened_act;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.mOpenedAct,
      (System_Int32_array **)opened_act,
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
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_16;
    NewList = UserServantCollectionMaster__GetNewList(MasterData_WarQuestSelectionMaster, 0LL);
    this->fields.newSvtIdList = NewList;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.newSvtIdList,
      (System_Int32_array **)NewList,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    materialCollectionServantListViewManager = (UnityEngine_Component_o *)this->fields.materialCollectionServantListViewManager;
    if ( !materialCollectionServantListViewManager )
      goto LABEL_16;
    v30 = UnityEngine_Component__get_gameObject(materialCollectionServantListViewManager, 0LL);
    if ( !v30 )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive(v30, 1, 0LL);
    v32 = this->fields.materialCollectionServantListViewManager;
    if ( !v32 )
      goto LABEL_16;
    MaterialCollectionServantListViewManager__CreateList(v32, 0, v31);
    servantTabButton = this->fields.servantTabButton;
    if ( !servantTabButton )
      goto LABEL_16;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))servantTabButton->klass->vtable._14_SetState.method)(
      servantTabButton,
      0LL,
      1LL,
      servantTabButton->klass->vtable._15_OnPress.methodPtr);
    v34 = (UnityEngine_Behaviour_o *)this->fields.servantTabButton;
    if ( !v34 )
      goto LABEL_16;
    UnityEngine_Behaviour__set_enabled(v34, 0, 0LL);
    servantEquipTabButton = this->fields.servantEquipTabButton;
    if ( !servantEquipTabButton
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))servantEquipTabButton->klass->vtable._14_SetState.method)(
            servantEquipTabButton,
            3LL,
            1LL,
            servantEquipTabButton->klass->vtable._15_OnPress.methodPtr),
          (commandCodeTabButton = this->fields.commandCodeTabButton) == 0LL)
      || (((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))commandCodeTabButton->klass->vtable._14_SetState.method)(
            commandCodeTabButton,
            3LL,
            1LL,
            commandCodeTabButton->klass->vtable._15_OnPress.methodPtr),
          MaterialCollectionMenu__SetTabKind(this, this->fields.tabKind, 1, v37),
          v39 = this->fields.materialCollectionServantListViewManager,
          this->fields.state = 1,
          !v39) )
    {
LABEL_16:
      sub_B170D4();
    }
    MaterialCollectionServantListViewManager__SetMode_30084748(v39, 1, v38);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10027/*"OnStartOpen"*/,
      0.5,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionMenu__SetTabKind(
        MaterialCollectionMenu_o *this,
        int32_t kind,
        bool isInit,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
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
  bool v24; // w22
  WebViewManager_o *Instance; // x0
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x24
  WebViewManager_o *v27; // x0
  __int64 v28; // x1
  __n128 inited; // q0
  LocalizationManager_c *v30; // x0
  float *static_fields; // x8
  float v32; // s8
  float v33; // s9
  float v34; // s10
  float v35; // s11
  struct UICommonButton_o *servantTabButton; // x8
  float *v37; // x9
  float v38; // s12
  float v39; // s13
  float v40; // s14
  float v41; // s15
  UnityEngine_Behaviour_o *v42; // x0
  UnityEngine_Collider_o *servantTabBoxCollider; // x0
  UISprite_o *servantTabSprite; // x0
  __int64 *v45; // x8
  UISprite_o *servantTabStrSp; // x0
  System_String_o **v47; // x8
  bool v48; // w21
  bool v49; // w22
  UserServantCollectionEntity_array *CollectionList; // x0
  UILabel_o *servantTabLabel; // x25
  UserServantCollectionEntity_array *v52; // x23
  System_String_o *v53; // x27
  __int64 v54; // x0
  Il2CppObject *v55; // x28
  Il2CppObject *v56; // x0
  System_String_o *v57; // x0
  UILabel_o *v58; // x0
  float v59; // s3
  float v60; // s2
  float v61; // s1
  float v62; // s0
  struct UICommonButton_o *v63; // x0
  bool v64; // w27
  struct UICommonButton_o *servantEquipTabButton; // x0
  UnityEngine_Behaviour_o *v66; // x0
  UnityEngine_Collider_o *servantEquipTabBoxCollider; // x0
  UISprite_o *servantEquipTabSprite; // x0
  __int64 *v69; // x8
  UISprite_o *servantEquipTabStrSp; // x0
  System_String_o **v71; // x8
  UserServantCollectionEntity_array *v72; // x0
  UILabel_o *servantEquipTabLabel; // x23
  UserServantCollectionEntity_array *v74; // x24
  System_String_o *v75; // x25
  __int64 v76; // x0
  Il2CppObject *v77; // x26
  Il2CppObject *v78; // x0
  System_String_o *v79; // x0
  UILabel_o *v80; // x0
  float v81; // s3
  float v82; // s2
  float v83; // s1
  float v84; // s0
  struct UICommonButton_o *v85; // x0
  struct UICommonButton_o *commandCodeTabButton; // x0
  UnityEngine_Behaviour_o *v87; // x0
  UnityEngine_Collider_o *commandCodeTabBoxCollider; // x0
  UISprite_o *commandCodeTabSprite; // x0
  __int64 *v90; // x8
  UISprite_o *commandCodeTabStrSp; // x0
  System_String_o **v92; // x8
  UserCommandCodeCollectionEntity_array *v93; // x0
  UILabel_o *commandCodeTabLabel; // x21
  UserCommandCodeCollectionEntity_array *v95; // x22
  System_String_o *v96; // x23
  __int64 v97; // x0
  Il2CppObject *v98; // x24
  Il2CppObject *v99; // x0
  System_String_o *v100; // x0
  UILabel_o *v101; // x0
  float v102; // s3
  float v103; // s2
  float v104; // s1
  float v105; // s0
  struct UICommonButton_o *v106; // x0
  __int64 v107; // x1
  const MethodInfo *v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  int32_t v112; // w1
  struct MaterialCollectionServantListViewManager_o *v113; // x21
  MaterialCollectionServantListViewManager_CallbackFunc_o *v114; // x22
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  int32_t v121; // w1
  UserCommandCodeCollectionMaster_o *v122; // [xsp+8h] [xbp-A8h]
  int v123; // [xsp+10h] [xbp-A0h] BYREF
  int32_t v124; // [xsp+14h] [xbp-9Ch] BYREF
  int32_t findSum[2]; // [xsp+18h] [xbp-98h] BYREF

  if ( (byte_40FCB52 & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_B16FFC(&int_TypeInfo, v9);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&Method_MaterialCollectionMenu_OnSelectServant__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&StringLiteral_16981/*"btn_txt_craftessence_off"*/, v13);
    sub_B16FFC(&StringLiteral_17020/*"btn_txt_servant_off"*/, v14);
    sub_B16FFC(&StringLiteral_16978/*"btn_txt_cc_off"*/, v15);
    sub_B16FFC(&StringLiteral_16896/*"btn_bg_12"*/, v16);
    sub_B16FFC(&StringLiteral_16979/*"btn_txt_cc_on"*/, v17);
    sub_B16FFC(&StringLiteral_17021/*"btn_txt_servant_on"*/, v18);
    sub_B16FFC(&StringLiteral_16898/*"btn_bg_19"*/, v19);
    sub_B16FFC(&StringLiteral_2960/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v20);
    sub_B16FFC(&StringLiteral_16982/*"btn_txt_craftessence_on"*/, v21);
    sub_B16FFC(&StringLiteral_2961/*"CHARA_GRAPH_TAB_SERVANT"*/, v22);
    sub_B16FFC(&StringLiteral_2962/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v23);
    byte_40FCB52 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  v24 = !this->fields.isInitTab;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_122;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v27 )
    goto LABEL_122;
  v122 = (UserCommandCodeCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)v27,
                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_40F6254 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v28);
    byte_40F6254 = 1;
  }
  v30 = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v30 = LocalizationManager_TypeInfo;
  }
  static_fields = (float *)v30->static_fields;
  v32 = static_fields[20];
  v33 = static_fields[21];
  v34 = static_fields[22];
  v35 = static_fields[23];
  if ( !byte_40F6255 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, v28);
    v30 = LocalizationManager_TypeInfo;
    byte_40F6255 = 1;
  }
  if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(v30);
    v30 = LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_122;
  v37 = (float *)v30->static_fields;
  v38 = v37[24];
  v39 = v37[25];
  v40 = v37[26];
  v41 = v37[27];
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer, long double))servantTabButton->klass->vtable._5_set_isEnabled.method)(
    this->fields.servantTabButton,
    1LL,
    servantTabButton->klass->vtable._6_OnInit.methodPtr,
    *(long double *)&inited);
  v42 = (UnityEngine_Behaviour_o *)this->fields.servantTabButton;
  if ( !v42 )
    goto LABEL_122;
  UnityEngine_Behaviour__set_enabled(v42, kind != 0, 0LL);
  servantTabBoxCollider = (UnityEngine_Collider_o *)this->fields.servantTabBoxCollider;
  if ( !servantTabBoxCollider )
    goto LABEL_122;
  UnityEngine_Collider__set_enabled(servantTabBoxCollider, kind != 0, 0LL);
  servantTabSprite = this->fields.servantTabSprite;
  if ( !servantTabSprite )
    goto LABEL_122;
  v45 = &StringLiteral_16896/*"btn_bg_12"*/;
  if ( !kind )
    v45 = &StringLiteral_16898/*"btn_bg_19"*/;
  UISprite__set_spriteName(servantTabSprite, (System_String_o *)*v45, 0LL);
  servantTabStrSp = this->fields.servantTabStrSp;
  if ( !servantTabStrSp )
    goto LABEL_122;
  v47 = (System_String_o **)&StringLiteral_17020/*"btn_txt_servant_off"*/;
  if ( !kind )
    v47 = (System_String_o **)&StringLiteral_17021/*"btn_txt_servant_on"*/;
  UISprite__set_spriteName(servantTabStrSp, *v47, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_122;
  v48 = v24;
  v49 = isInit;
  CollectionList = UserServantCollectionMaster__getCollectionList(
                     MasterData_WarQuestSelectionMaster,
                     &findSum[1],
                     findSum,
                     0,
                     1,
                     0LL);
  servantTabLabel = this->fields.servantTabLabel;
  v52 = CollectionList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v53 = LocalizationManager__Get((System_String_o *)StringLiteral_2961/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v124 = findSum[0];
  v54 = j_il2cpp_value_box_0(int_TypeInfo, &v124);
  if ( !v52 )
    goto LABEL_122;
  v55 = (Il2CppObject *)v54;
  v123 = *(_QWORD *)&v52->max_length;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123);
  v57 = System_String__Format_43739268(v53, v55, v56, 0LL);
  if ( !servantTabLabel )
    goto LABEL_122;
  UILabel__set_text(servantTabLabel, v57, 0LL);
  v58 = this->fields.servantTabLabel;
  if ( !v58 )
    goto LABEL_122;
  v59 = kind ? v35 : v41;
  v60 = kind ? v34 : v40;
  v61 = kind ? v33 : v39;
  v62 = kind ? v32 : v38;
  UILabel__set_effectColor(v58, *(UnityEngine_Color_o *)(&v59 - 3), 0LL);
  v63 = this->fields.servantTabButton;
  if ( !v63 )
    goto LABEL_122;
  v64 = v48 || isInit;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v63->klass->vtable._14_SetState.method)(
    v63,
    0LL,
    v48 || isInit,
    v63->klass->vtable._15_OnPress.methodPtr);
  servantEquipTabButton = this->fields.servantEquipTabButton;
  if ( !servantEquipTabButton )
    goto LABEL_122;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))servantEquipTabButton->klass->vtable._5_set_isEnabled.method)(
    servantEquipTabButton,
    1LL,
    servantEquipTabButton->klass->vtable._6_OnInit.methodPtr);
  v66 = (UnityEngine_Behaviour_o *)this->fields.servantEquipTabButton;
  if ( !v66 )
    goto LABEL_122;
  UnityEngine_Behaviour__set_enabled(v66, kind != 1, 0LL);
  servantEquipTabBoxCollider = (UnityEngine_Collider_o *)this->fields.servantEquipTabBoxCollider;
  if ( !servantEquipTabBoxCollider )
    goto LABEL_122;
  UnityEngine_Collider__set_enabled(servantEquipTabBoxCollider, kind != 1, 0LL);
  servantEquipTabSprite = this->fields.servantEquipTabSprite;
  if ( !servantEquipTabSprite )
    goto LABEL_122;
  v69 = &StringLiteral_16898/*"btn_bg_19"*/;
  if ( kind != 1 )
    v69 = &StringLiteral_16896/*"btn_bg_12"*/;
  UISprite__set_spriteName(servantEquipTabSprite, (System_String_o *)*v69, 0LL);
  servantEquipTabStrSp = this->fields.servantEquipTabStrSp;
  if ( !servantEquipTabStrSp )
    goto LABEL_122;
  v71 = (System_String_o **)&StringLiteral_16982/*"btn_txt_craftessence_on"*/;
  if ( kind != 1 )
    v71 = (System_String_o **)&StringLiteral_16981/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName(servantEquipTabStrSp, *v71, 0LL);
  v72 = UserServantCollectionMaster__getCollectionList(
          MasterData_WarQuestSelectionMaster,
          &findSum[1],
          findSum,
          1,
          0,
          0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v74 = v72;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v75 = LocalizationManager__Get((System_String_o *)StringLiteral_2962/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v124 = findSum[0];
  v76 = j_il2cpp_value_box_0(int_TypeInfo, &v124);
  if ( !v74 )
    goto LABEL_122;
  v77 = (Il2CppObject *)v76;
  v123 = *(_QWORD *)&v74->max_length;
  v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123);
  v79 = System_String__Format_43739268(v75, v77, v78, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_122;
  UILabel__set_text(servantEquipTabLabel, v79, 0LL);
  v80 = this->fields.servantEquipTabLabel;
  if ( !v80 )
    goto LABEL_122;
  v81 = kind == 1 ? v41 : v35;
  v82 = kind == 1 ? v40 : v34;
  v83 = kind == 1 ? v39 : v33;
  v84 = kind == 1 ? v38 : v32;
  UILabel__set_effectColor(v80, *(UnityEngine_Color_o *)(&v81 - 3), 0LL);
  v85 = this->fields.servantEquipTabButton;
  if ( !v85 )
    goto LABEL_122;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v85->klass->vtable._14_SetState.method)(
    v85,
    0LL,
    v48 || v49,
    v85->klass->vtable._15_OnPress.methodPtr);
  commandCodeTabButton = this->fields.commandCodeTabButton;
  if ( !commandCodeTabButton )
    goto LABEL_122;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))commandCodeTabButton->klass->vtable._5_set_isEnabled.method)(
    commandCodeTabButton,
    1LL,
    commandCodeTabButton->klass->vtable._6_OnInit.methodPtr);
  v87 = (UnityEngine_Behaviour_o *)this->fields.commandCodeTabButton;
  if ( !v87 )
    goto LABEL_122;
  UnityEngine_Behaviour__set_enabled(v87, kind != 2, 0LL);
  commandCodeTabBoxCollider = (UnityEngine_Collider_o *)this->fields.commandCodeTabBoxCollider;
  if ( !commandCodeTabBoxCollider )
    goto LABEL_122;
  UnityEngine_Collider__set_enabled(commandCodeTabBoxCollider, kind != 2, 0LL);
  commandCodeTabSprite = this->fields.commandCodeTabSprite;
  if ( !commandCodeTabSprite )
    goto LABEL_122;
  v90 = &StringLiteral_16898/*"btn_bg_19"*/;
  if ( kind != 2 )
    v90 = &StringLiteral_16896/*"btn_bg_12"*/;
  UISprite__set_spriteName(commandCodeTabSprite, (System_String_o *)*v90, 0LL);
  commandCodeTabStrSp = this->fields.commandCodeTabStrSp;
  if ( !commandCodeTabStrSp )
    goto LABEL_122;
  v92 = (System_String_o **)&StringLiteral_16979/*"btn_txt_cc_on"*/;
  if ( kind != 2 )
    v92 = (System_String_o **)&StringLiteral_16978/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName(commandCodeTabStrSp, *v92, 0LL);
  if ( !v122 )
    goto LABEL_122;
  v93 = UserCommandCodeCollectionMaster__getCollectionList(v122, &findSum[1], findSum, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v95 = v93;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_2960/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v124 = findSum[0];
  v97 = j_il2cpp_value_box_0(int_TypeInfo, &v124);
  if ( !v95 )
    goto LABEL_122;
  v98 = (Il2CppObject *)v97;
  v123 = *(_QWORD *)&v95->max_length;
  v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v123);
  v100 = System_String__Format_43739268(v96, v98, v99, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_122;
  UILabel__set_text(commandCodeTabLabel, v100, 0LL);
  v101 = this->fields.commandCodeTabLabel;
  if ( !v101 )
    goto LABEL_122;
  v102 = kind == 2 ? v41 : v35;
  v103 = kind == 2 ? v40 : v34;
  v104 = kind == 2 ? v39 : v33;
  v105 = kind == 2 ? v38 : v32;
  UILabel__set_effectColor(v101, *(UnityEngine_Color_o *)(&v102 - 3), 0LL);
  v106 = this->fields.commandCodeTabButton;
  if ( !v106 )
    goto LABEL_122;
  ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v106->klass->vtable._14_SetState.method)(
    v106,
    0LL,
    v64,
    v106->klass->vtable._15_OnPress.methodPtr);
  if ( !v64 && this->fields.tabKind == kind )
    goto LABEL_116;
  if ( kind == 2 )
  {
    materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
    if ( !materialCollectionServantListViewManager )
      goto LABEL_122;
    v112 = 3;
  }
  else if ( kind == 1 )
  {
    materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
    if ( !materialCollectionServantListViewManager )
      goto LABEL_122;
    v112 = 1;
  }
  else
  {
    if ( kind )
      goto LABEL_116;
    materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
    if ( !materialCollectionServantListViewManager )
      goto LABEL_122;
    v112 = 0;
  }
  MaterialCollectionServantListViewManager__CreateList(materialCollectionServantListViewManager, v112, v108);
LABEL_116:
  v113 = this->fields.materialCollectionServantListViewManager;
  if ( this->fields.state != 2 )
  {
    if ( v113 )
    {
      v121 = 1;
      goto LABEL_121;
    }
LABEL_122:
    sub_B170D4();
  }
  v114 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_B170CC(
                                                                      MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo,
                                                                      v107,
                                                                      v108,
                                                                      v109,
                                                                      v110);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v114,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    0LL);
  if ( !v113 )
    goto LABEL_122;
  v113->fields.callbackFunc = v114;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v113->fields.callbackFunc,
    (System_Int32_array **)v114,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  v121 = 2;
LABEL_121:
  MaterialCollectionServantListViewManager__SetMode_30084748(v113, v121, v108);
  this->fields.isInitTab = 1;
  this->fields.tabKind = kind;
}


void __fastcall MaterialCollectionMenu__add_callbackFunc(
        MaterialCollectionMenu_o *this,
        MaterialCollectionMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MaterialCollectionMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MaterialCollectionMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialCollectionMenu_o *v11; // x0
  MaterialCollectionMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FCB4B & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionMenu_CallbackFunc_TypeInfo, value);
    byte_40FCB4B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MaterialCollectionMenu_CallbackFunc_c *)v8->klass != MaterialCollectionMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  MaterialCollectionMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall MaterialCollectionMenu__remove_callbackFunc(
        MaterialCollectionMenu_o *this,
        MaterialCollectionMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MaterialCollectionMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MaterialCollectionMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialCollectionServantListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FCB4C & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionMenu_CallbackFunc_TypeInfo, value);
    byte_40FCB4C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MaterialCollectionMenu_CallbackFunc_c *)v8->klass != MaterialCollectionMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  MaterialCollectionServantListViewManager__DestroyList(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionMenu_CallbackFunc___ctor(
        MaterialCollectionMenu_CallbackFunc_o *this,
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


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MaterialCollectionMenu_CallbackFunc__BeginInvoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_40F6960 & 1) == 0 )
  {
    sub_B16FFC(&MaterialCollectionMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_40F6960 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(MaterialCollectionMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall MaterialCollectionMenu_CallbackFunc__EndInvoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionMenu_CallbackFunc__Invoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  MaterialCollectionMenu_CallbackFunc_o **v6; // x25
  __int64 v7; // x26
  unsigned int v8; // w23
  __int64 class_0; // x0
  __int64 v10; // x8
  unsigned int v11; // w22
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  MaterialCollectionMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(unsigned int *, __int64); // x23
  char v22; // w23
  char v23; // w0
  unsigned int v24; // w23
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  unsigned int v30; // [xsp+4h] [xbp-4Ch] BYREF
  MaterialCollectionMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v30 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v31;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (MaterialCollectionMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(unsigned int *, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int *)v30, v20);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v19 )
    {
      v21(&v30 - 4, v20);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        v24 = v30;
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
                goto LABEL_35;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v26, v27);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, v24, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v10 = *v19;
          v11 = v30;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v10 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, v11, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            v30,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, v30, v20);
    goto LABEL_38;
  }
}