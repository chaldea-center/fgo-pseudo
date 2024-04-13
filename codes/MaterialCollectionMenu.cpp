void __fastcall MaterialCollectionMenu___ctor(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8A24 & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8A24 = 1;
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    MaterialCollectionMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall MaterialCollectionMenu__Close(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCollectionMenu__Close_25342140(this, 0LL, v2);
}


void __fastcall MaterialCollectionMenu__Close_25342140(
        MaterialCollectionMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( (byte_42E8A18 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10164/*"OnStartClose"*/, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E8A18 = 1;
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


void __fastcall MaterialCollectionMenu__EndClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
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

  MaterialCollectionMenu__Init(this, method);
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


void __fastcall MaterialCollectionMenu__EndCloseShowServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  MaterialCollectionServantListViewManager_o *v9; // x20
  MaterialCollectionServantListViewManager_CallbackFunc_o *v10; // x21

  if ( (byte_42E8A23 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MaterialCollectionMenu_OnSelectServant__, v5, v6, v7);
    byte_42E8A23 = 1;
  }
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( !materialCollectionServantListViewManager
    || (MaterialCollectionServantListViewManager__ModifyItem(
          materialCollectionServantListViewManager,
          this->fields.selectIndex,
          0LL),
        v9 = this->fields.materialCollectionServantListViewManager,
        v10 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_B5D694(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo),
        MaterialCollectionServantListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_OnSelectServant__,
          0LL),
        !v9) )
  {
    sub_B5D69C(materialCollectionServantListViewManager, method);
  }
  MaterialCollectionServantListViewManager__SetMode(v9, 2, v10, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x20
  MaterialCollectionServantListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E8A17 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MaterialCollectionMenu_OnSelectServant__, v5, v6, v7);
    byte_42E8A17 = 1;
  }
  this->fields.state = 2;
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  v9 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_B5D694(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    0LL);
  if ( !materialCollectionServantListViewManager )
    sub_B5D69C(v10, v11);
  MaterialCollectionServantListViewManager__SetMode(materialCollectionServantListViewManager, 2, v9, 0LL);
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
  int v8; // w1
  char v9; // w2
  __int64 v10; // x3
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v18; // x0
  __int64 *v19; // x8
  ListViewManager_o *materialCollectionServantListViewManager; // x0
  System_Action_o *v21; // x21

  if ( (byte_42E8A21 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, isNeedSort, *(_QWORD *)&questId);
    sub_B5D5C4(&Method_MaterialCollectionMenu_EndCloseShowServant__, v8, v9, v10);
    sub_B5D5C4(&Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    byte_42E8A21 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v19 = &Method_MaterialCollectionMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    v19 = &Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__;
  }
  v21 = v18;
  System_Action___ctor(v18, (Il2CppObject *)this, *v19, 0LL);
  if ( !Instance )
LABEL_11:
    sub_B5D69C(materialCollectionServantListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v21, 0LL);
}


void __fastcall MaterialCollectionMenu__EndShowServantEquip(
        MaterialCollectionMenu_o *this,
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
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E8A22 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_MaterialCollectionMenu_EndCloseShowServant__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E8A22 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_B5D69C(v13, v14);
  CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
}


void __fastcall MaterialCollectionMenu__Init(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  this->fields.state = 0;
  if ( !materialCollectionServantListViewManager
    || (MaterialCollectionServantListViewManager__DestroyList(materialCollectionServantListViewManager, 0LL),
        (materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager) == 0LL)
    || (materialCollectionServantListViewManager = (MaterialCollectionServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                                   (UnityEngine_Component_o *)materialCollectionServantListViewManager,
                                                                                                   0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCollectionServantListViewManager, 0, 0LL),
        (materialCollectionServantListViewManager = (MaterialCollectionServantListViewManager_o *)this->fields.bgTxtSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)materialCollectionServantListViewManager,
                       0LL),
        materialCollectionServantListViewManager = (MaterialCollectionServantListViewManager_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject) )
  {
    sub_B5D69C(materialCollectionServantListViewManager, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)materialCollectionServantListViewManager & 1, 0LL);
  this->fields.tabKind = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall MaterialCollectionMenu__OnClickCancel(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E8A1C & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8A1C = 1;
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
    MaterialCollectionMenu__Callback(this, 0, v5);
  }
}


void __fastcall MaterialCollectionMenu__OnClickDecide(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E8A1B & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8A1B = 1;
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
    MaterialCollectionMenu__Callback(this, 0, v5);
  }
}


void __fastcall MaterialCollectionMenu__OnClickTabCommandCode(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x3

  if ( (byte_42E8A1F & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8A1F = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    MaterialCollectionMenu__SetTabKind(this, 2, 0, v5);
  }
}


void __fastcall MaterialCollectionMenu__OnClickTabServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x3

  if ( (byte_42E8A1D & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8A1D = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    MaterialCollectionMenu__SetTabKind(this, 0, 0, v5);
  }
}


void __fastcall MaterialCollectionMenu__OnClickTabServantEquip(
        MaterialCollectionMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x3

  if ( (byte_42E8A1E & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8A1E = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    MaterialCollectionMenu__SetTabKind(this, 1, 0, v5);
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
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  MaterialCollectionServantListViewManager_o *v20; // x20
  ServantEntity_o *dropList; // x0
  bool IsKeepServantEquip; // w22
  WebViewManager_o *Instance; // x0
  UserServantCollectionEntity_o *dragParentObject; // x20
  CommonUI_o *v25; // x21
  ServantStatusDialog_EndDelegate_o *v26; // x22
  WebViewManager_o *v27; // x0
  UserCommandCodeCollectionEntity_o *sortKindButton; // x20
  CommonUI_o *v29; // x21
  ServantStatusDialog_EndDelegate_o *v30; // x22
  WebViewManager_o *v31; // x0
  ServantStatusDialog_ResultDelegate_o *v32; // x22

  if ( (byte_42E8A20 & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, kind, index, method);
    sub_B5D5C4(&Method_MaterialCollectionMenu_EndShowServantEquip__, v7, v8, v9);
    sub_B5D5C4(&Method_MaterialCollectionMenu_EndShowServant__, v10, v11, v12);
    sub_B5D5C4(&ServantStatusDialog_ResultDelegate_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16, v17, v18);
    byte_42E8A20 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.selectIndex = index;
    if ( kind == 1 )
    {
      materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
      if ( !materialCollectionServantListViewManager )
        goto LABEL_19;
      materialCollectionServantListViewManager = (MaterialCollectionServantListViewManager_o *)MaterialCollectionServantListViewManager__GetItem(
                                                                                                 materialCollectionServantListViewManager,
                                                                                                 index,
                                                                                                 0LL);
      if ( !materialCollectionServantListViewManager )
        goto LABEL_19;
      v20 = materialCollectionServantListViewManager;
      if ( materialCollectionServantListViewManager->fields.dragParentObject )
      {
        dropList = (ServantEntity_o *)materialCollectionServantListViewManager->fields.dropList;
        if ( dropList )
        {
          IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip(dropList, 0LL);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          dragParentObject = (UserServantCollectionEntity_o *)v20->fields.dragParentObject;
          v25 = (CommonUI_o *)Instance;
          if ( IsKeepServantEquip )
          {
            v26 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v26,
              (Il2CppObject *)this,
              Method_MaterialCollectionMenu_EndShowServantEquip__,
              0LL);
            if ( v25 )
            {
              CommonUI__OpenServantStatusDialog_18214220(v25, 2, dragParentObject, v26, 0LL);
              return;
            }
LABEL_19:
            sub_B5D69C(materialCollectionServantListViewManager, *(_QWORD *)&kind);
          }
        }
        else
        {
          v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          dragParentObject = (UserServantCollectionEntity_o *)v20->fields.dragParentObject;
          v25 = (CommonUI_o *)v31;
        }
        v32 = (ServantStatusDialog_ResultDelegate_o *)sub_B5D694(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v32,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServant__,
          0LL);
        if ( !v25 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_18214716(v25, 2, dragParentObject, v32, 0LL);
      }
      else if ( materialCollectionServantListViewManager->fields.sortKindButton )
      {
        v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sortKindButton = (UserCommandCodeCollectionEntity_o *)v20->fields.sortKindButton;
        v29 = (CommonUI_o *)v27;
        v30 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v30,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServantEquip__,
          0LL);
        if ( !v29 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_18215700(v29, 2, sortKindButton, v30, 0LL, 0LL);
      }
    }
  }
}


void __fastcall MaterialCollectionMenu__OnStartClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42E8A19 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MaterialCollectionMenu_EndClose__, v5, v6, v7);
    byte_42E8A19 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v8, 0LL);
}


void __fastcall MaterialCollectionMenu__OnStartOpen(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42E8A16 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MaterialCollectionMenu_EndOpen__, v5, v6, v7);
    byte_42E8A16 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v8, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  struct System_Int32_array *NewList; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x3

  if ( (byte_42E8A15 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_UserServantCollectionMaster___,
      (_DWORD)opened_act,
      (_DWORD)callback,
      method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_10165/*"OnStartOpen"*/, v14, v15, v16);
    byte_42E8A15 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = opened_act;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.mOpenedAct,
      (System_Int32_array **)opened_act,
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
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_16;
    NewList = UserServantCollectionMaster__GetNewList((UserServantCollectionMaster_o *)Instance, 0LL);
    this->fields.newSvtIdList = NewList;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.newSvtIdList,
      (System_Int32_array **)NewList,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_16;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_16;
    MaterialCollectionServantListViewManager__CreateList((MaterialCollectionServantListViewManager_o *)Instance, 0, 0LL);
    Instance = (DataManager_o *)this->fields.servantTabButton;
    if ( !Instance )
      goto LABEL_16;
    ((void (__fastcall *)(DataManager_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Instance->klass[1]._1.implementedInterfaces)(
      Instance,
      0LL,
      1LL,
      Instance->klass[1]._1.interfaceOffsets);
    Instance = (DataManager_o *)this->fields.servantTabButton;
    if ( !Instance )
      goto LABEL_16;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0LL);
    Instance = (DataManager_o *)this->fields.servantEquipTabButton;
    if ( !Instance
      || (((void (__fastcall *)(DataManager_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))Instance->klass[1]._1.implementedInterfaces)(
            Instance,
            3LL,
            1LL,
            Instance->klass[1]._1.interfaceOffsets),
          (Instance = (DataManager_o *)this->fields.commandCodeTabButton) == 0LL)
      || (((void (__fastcall *)(DataManager_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))Instance->klass[1]._1.implementedInterfaces)(
            Instance,
            3LL,
            1LL,
            Instance->klass[1]._1.interfaceOffsets),
          MaterialCollectionMenu__SetTabKind(this, this->fields.tabKind, 1, v32),
          Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager,
          this->fields.state = 1,
          !Instance) )
    {
LABEL_16:
      sub_B5D69C(Instance, v24);
    }
    MaterialCollectionServantListViewManager__SetMode_31956444(
      (MaterialCollectionServantListViewManager_o *)Instance,
      1,
      0LL);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10165/*"OnStartOpen"*/,
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int v43; // w1
  char v44; // w2
  __int64 v45; // x3
  int v46; // w1
  char v47; // w2
  __int64 v48; // x3
  int v49; // w1
  char v50; // w2
  __int64 v51; // x3
  int v52; // w1
  char v53; // w2
  __int64 v54; // x3
  int v55; // w1
  char v56; // w2
  __int64 v57; // x3
  bool v58; // w22
  void *Instance; // x0
  __int64 v60; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x24
  char v62; // w2
  __int64 v63; // x3
  __n128 inited; // q0
  float *v65; // x8
  float v66; // s8
  float v67; // s9
  float v68; // s10
  float v69; // s11
  struct UICommonButton_o *servantTabButton; // x8
  float *v71; // x9
  float v72; // s12
  float v73; // s13
  float v74; // s14
  float v75; // s15
  __int64 *v76; // x8
  __int64 *v77; // x8
  bool v78; // w21
  bool v79; // w22
  UserServantCollectionEntity_array *CollectionList; // x0
  UILabel_o *servantTabLabel; // x25
  UserServantCollectionEntity_array *v82; // x23
  System_String_o *v83; // x27
  Il2CppObject *v84; // x28
  Il2CppObject *v85; // x0
  float v86; // s3
  float v87; // s2
  float v88; // s1
  float v89; // s0
  bool v90; // w27
  __int64 *v91; // x8
  __int64 *v92; // x8
  UserServantCollectionEntity_array *v93; // x0
  UILabel_o *servantEquipTabLabel; // x23
  UserServantCollectionEntity_array *v95; // x24
  System_String_o *v96; // x25
  Il2CppObject *v97; // x26
  Il2CppObject *v98; // x0
  float v99; // s3
  float v100; // s2
  float v101; // s1
  float v102; // s0
  __int64 *v103; // x8
  __int64 *v104; // x8
  UserCommandCodeCollectionEntity_array *v105; // x0
  UILabel_o *commandCodeTabLabel; // x21
  UserCommandCodeCollectionEntity_array *v107; // x22
  System_String_o *v108; // x23
  Il2CppObject *v109; // x24
  Il2CppObject *v110; // x0
  float v111; // s3
  float v112; // s2
  float v113; // s1
  float v114; // s0
  int32_t v115; // w1
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x21
  MaterialCollectionServantListViewManager_CallbackFunc_o *v117; // x22
  UserCommandCodeCollectionMaster_o *v118; // [xsp+8h] [xbp-A8h]
  int v119; // [xsp+10h] [xbp-A0h] BYREF
  int32_t v120; // [xsp+14h] [xbp-9Ch] BYREF
  int32_t findSum[2]; // [xsp+18h] [xbp-98h] BYREF

  if ( (byte_42E8A1A & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, kind, isInit, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v10, v11, v12);
    sub_B5D5C4(&int_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_MaterialCollectionMenu_OnSelectServant__, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_17256/*"btn_txt_craftessence_off"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_17296/*"btn_txt_servant_off"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_17253/*"btn_txt_cc_off"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_17171/*"btn_bg_12"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_17254/*"btn_txt_cc_on"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_17297/*"btn_txt_servant_on"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_17173/*"btn_bg_19"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_3028/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_17257/*"btn_txt_craftessence_on"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_3029/*"CHARA_GRAPH_TAB_SERVANT"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_3030/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v55, v56, v57);
    byte_42E8A1A = 1;
  }
  *(_QWORD *)findSum = 0LL;
  v58 = !this->fields.isInitTab;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_122;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_122;
  v118 = (UserCommandCodeCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Instance,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42E563C )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v60, v62, v63);
    byte_42E563C = 1;
  }
  Instance = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager_TypeInfo;
  }
  v65 = (float *)*((_QWORD *)Instance + 23);
  v66 = v65[20];
  v67 = v65[21];
  v68 = v65[22];
  v69 = v65[23];
  if ( !byte_42E563D )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, v60, v62, v63);
    Instance = LocalizationManager_TypeInfo;
    byte_42E563D = 1;
  }
  if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
  {
    inited = j_il2cpp_runtime_class_init_0(Instance);
    Instance = LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_122;
  v71 = (float *)*((_QWORD *)Instance + 23);
  v72 = v71[24];
  v73 = v71[25];
  v74 = v71[26];
  v75 = v71[27];
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer, long double))servantTabButton->klass->vtable._5_set_isEnabled.method)(
    this->fields.servantTabButton,
    1LL,
    servantTabButton->klass->vtable._6_OnInit.methodPtr,
    *(long double *)&inited);
  Instance = this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_122;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, kind != 0, 0LL);
  Instance = this->fields.servantTabBoxCollider;
  if ( !Instance )
    goto LABEL_122;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Instance, kind != 0, 0LL);
  Instance = this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_122;
  v76 = &StringLiteral_17171/*"btn_bg_12"*/;
  if ( !kind )
    v76 = &StringLiteral_17173/*"btn_bg_19"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v76, 0LL);
  Instance = this->fields.servantTabStrSp;
  if ( !Instance )
    goto LABEL_122;
  v77 = &StringLiteral_17296/*"btn_txt_servant_off"*/;
  if ( !kind )
    v77 = &StringLiteral_17297/*"btn_txt_servant_on"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v77, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_122;
  v78 = v58;
  v79 = isInit;
  CollectionList = UserServantCollectionMaster__getCollectionList(
                     MasterData_WarQuestSelectionMaster,
                     &findSum[1],
                     findSum,
                     0,
                     1,
                     0LL);
  servantTabLabel = this->fields.servantTabLabel;
  v82 = CollectionList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v83 = LocalizationManager__Get((System_String_o *)StringLiteral_3029/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v120 = findSum[0];
  Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v120);
  if ( !v82 )
    goto LABEL_122;
  v84 = (Il2CppObject *)Instance;
  v119 = *(_QWORD *)&v82->max_length;
  v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119);
  Instance = System_String__Format_44573324(v83, v84, v85, 0LL);
  if ( !servantTabLabel )
    goto LABEL_122;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = this->fields.servantTabLabel;
  if ( !Instance )
    goto LABEL_122;
  v86 = kind ? v69 : v75;
  v87 = kind ? v68 : v74;
  v88 = kind ? v67 : v73;
  v89 = kind ? v66 : v72;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v86 - 3), 0LL);
  Instance = this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_122;
  v90 = v78 || isInit;
  (*(void (__fastcall **)(void *, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
    Instance,
    0LL,
    v78 || isInit,
    *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  Instance = this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_122;
  (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_122;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, kind != 1, 0LL);
  Instance = this->fields.servantEquipTabBoxCollider;
  if ( !Instance )
    goto LABEL_122;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Instance, kind != 1, 0LL);
  Instance = this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_122;
  v91 = &StringLiteral_17173/*"btn_bg_19"*/;
  if ( kind != 1 )
    v91 = &StringLiteral_17171/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v91, 0LL);
  Instance = this->fields.servantEquipTabStrSp;
  if ( !Instance )
    goto LABEL_122;
  v92 = &StringLiteral_17257/*"btn_txt_craftessence_on"*/;
  if ( kind != 1 )
    v92 = &StringLiteral_17256/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v92, 0LL);
  v93 = UserServantCollectionMaster__getCollectionList(
          MasterData_WarQuestSelectionMaster,
          &findSum[1],
          findSum,
          1,
          0,
          0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v95 = v93;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v96 = LocalizationManager__Get((System_String_o *)StringLiteral_3030/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v120 = findSum[0];
  Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v120);
  if ( !v95 )
    goto LABEL_122;
  v97 = (Il2CppObject *)Instance;
  v119 = *(_QWORD *)&v95->max_length;
  v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119);
  Instance = System_String__Format_44573324(v96, v97, v98, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_122;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = this->fields.servantEquipTabLabel;
  if ( !Instance )
    goto LABEL_122;
  v99 = kind == 1 ? v75 : v69;
  v100 = kind == 1 ? v74 : v68;
  v101 = kind == 1 ? v73 : v67;
  v102 = kind == 1 ? v72 : v66;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v99 - 3), 0LL);
  Instance = this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_122;
  (*(void (__fastcall **)(void *, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
    Instance,
    0LL,
    v78 || v79,
    *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  Instance = this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_122;
  (*(void (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1LL,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_122;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, kind != 2, 0LL);
  Instance = this->fields.commandCodeTabBoxCollider;
  if ( !Instance )
    goto LABEL_122;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Instance, kind != 2, 0LL);
  Instance = this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_122;
  v103 = &StringLiteral_17173/*"btn_bg_19"*/;
  if ( kind != 2 )
    v103 = &StringLiteral_17171/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v103, 0LL);
  Instance = this->fields.commandCodeTabStrSp;
  if ( !Instance )
    goto LABEL_122;
  v104 = &StringLiteral_17254/*"btn_txt_cc_on"*/;
  if ( kind != 2 )
    v104 = &StringLiteral_17253/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v104, 0LL);
  Instance = v118;
  if ( !v118 )
    goto LABEL_122;
  v105 = UserCommandCodeCollectionMaster__getCollectionList(v118, &findSum[1], findSum, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v107 = v105;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v108 = LocalizationManager__Get((System_String_o *)StringLiteral_3028/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v120 = findSum[0];
  Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v120);
  if ( !v107 )
    goto LABEL_122;
  v109 = (Il2CppObject *)Instance;
  v119 = *(_QWORD *)&v107->max_length;
  v110 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v119);
  Instance = System_String__Format_44573324(v108, v109, v110, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_122;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL);
  Instance = this->fields.commandCodeTabLabel;
  if ( !Instance )
    goto LABEL_122;
  v111 = kind == 2 ? v75 : v69;
  v112 = kind == 2 ? v74 : v68;
  v113 = kind == 2 ? v73 : v67;
  v114 = kind == 2 ? v72 : v66;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v111 - 3), 0LL);
  Instance = this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_122;
  Instance = (void *)(*(__int64 (__fastcall **)(void *, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
                       Instance,
                       0LL,
                       v90,
                       *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  if ( !v90 && this->fields.tabKind == kind )
    goto LABEL_116;
  if ( kind == 2 )
  {
    Instance = this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_122;
    v115 = 3;
  }
  else if ( kind == 1 )
  {
    Instance = this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_122;
    v115 = 1;
  }
  else
  {
    if ( kind )
      goto LABEL_116;
    Instance = this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_122;
    v115 = 0;
  }
  MaterialCollectionServantListViewManager__CreateList(
    (MaterialCollectionServantListViewManager_o *)Instance,
    v115,
    0LL);
LABEL_116:
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( this->fields.state != 2 )
  {
    if ( materialCollectionServantListViewManager )
    {
      MaterialCollectionServantListViewManager__SetMode_31956444(
        this->fields.materialCollectionServantListViewManager,
        1,
        0LL);
      goto LABEL_121;
    }
LABEL_122:
    sub_B5D69C(Instance, v60);
  }
  v117 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_B5D694(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v117,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    0LL);
  if ( !materialCollectionServantListViewManager )
    goto LABEL_122;
  MaterialCollectionServantListViewManager__SetMode(materialCollectionServantListViewManager, 2, v117, 0LL);
LABEL_121:
  this->fields.isInitTab = 1;
  this->fields.tabKind = kind;
}


void __fastcall MaterialCollectionMenu__add_callbackFunc(
        MaterialCollectionMenu_o *this,
        MaterialCollectionMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct MaterialCollectionMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct MaterialCollectionMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  MaterialCollectionMenu_o *v12; // x0
  MaterialCollectionMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E8A13 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCollectionMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8A13 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (MaterialCollectionMenu_CallbackFunc_c *)v9->klass != MaterialCollectionMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (MaterialCollectionMenu_o *)sub_B5D990(v9);
  MaterialCollectionMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall MaterialCollectionMenu__remove_callbackFunc(
        MaterialCollectionMenu_o *this,
        MaterialCollectionMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct MaterialCollectionMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct MaterialCollectionMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  MaterialCollectionMenu_o *v12; // x0
  int32_t v13; // w1
  bool v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_42E8A14 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCollectionMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E8A14 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (MaterialCollectionMenu_CallbackFunc_c *)v9->klass != MaterialCollectionMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (MaterialCollectionMenu_o *)sub_B5D990(v9);
  MaterialCollectionMenu__SetTabKind(v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionMenu_CallbackFunc___ctor(
        MaterialCollectionMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


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
  if ( (byte_42E5F3D & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCollectionMenu_ResultKind_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5F3D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(MaterialCollectionMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall MaterialCollectionMenu_CallbackFunc__EndInvoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned int v12; // w22
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  MaterialCollectionMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(unsigned int *, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  unsigned int v26; // w23
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+4h] [xbp-4Ch] BYREF
  MaterialCollectionMenu_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v33;
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
      v19 = v6[v7];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(unsigned int *, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int *)v32, v21);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v20 )
    {
      v22(&v32 - 4, v21);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        v26 = v32;
        if ( (v24 & 1) != 0 )
        {
          v27 = *v20;
          v28 = *(_QWORD *)(v21 + 24);
          v29 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v28, v29, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, v26, v18);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          v12 = v32;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v11 + 16LL * (int)(*v14 + v8) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, v12, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            v32,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, v32, v21);
    goto LABEL_38;
  }
}