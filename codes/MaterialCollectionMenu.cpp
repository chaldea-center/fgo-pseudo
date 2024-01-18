void __fastcall MaterialCollectionMenu___ctor(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4189CF7 & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    byte_4189CF7 = 1;
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
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    MaterialCollectionMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall MaterialCollectionMenu__Close(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCollectionMenu__Close_28942972(this, 0LL, v2);
}


void __fastcall MaterialCollectionMenu__Close_28942972(
        MaterialCollectionMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( (byte_4189CEB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10058/*"OnStartClose"*/, callback);
    byte_4189CEB = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
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
    (System_String_o *)StringLiteral_10058/*"OnStartClose"*/,
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
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall MaterialCollectionMenu__EndCloseShowServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  struct MaterialCollectionServantListViewManager_o *v6; // x20
  MaterialCollectionServantListViewManager_CallbackFunc_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4189CF6 & 1) == 0 )
  {
    sub_B2C35C(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_MaterialCollectionMenu_OnSelectServant__, v4);
    byte_4189CF6 = 1;
  }
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( !materialCollectionServantListViewManager
    || (MaterialCollectionServantListViewManager__RequestListObject_28962640(
          materialCollectionServantListViewManager,
          4,
          v2),
        v6 = this->fields.materialCollectionServantListViewManager,
        v7 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_B2C42C(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo),
        MaterialCollectionServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_OnSelectServant__,
          0LL),
        !v6) )
  {
    sub_B2C434(materialCollectionServantListViewManager, method);
  }
  v6->fields.callbackFunc = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v6->fields.callbackFunc,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  MaterialCollectionServantListViewManager__SetMode_28947592(v6, 2, v14);
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
  __int64 v3; // x1
  struct MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x20
  MaterialCollectionServantListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2

  if ( (byte_4189CEA & 1) == 0 )
  {
    sub_B2C35C(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_MaterialCollectionMenu_OnSelectServant__, v3);
    byte_4189CEA = 1;
  }
  this->fields.state = 2;
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  v5 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_B2C42C(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    0LL);
  if ( !materialCollectionServantListViewManager )
    sub_B2C434(v6, v7);
  materialCollectionServantListViewManager->fields.callbackFunc = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&materialCollectionServantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v5,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  MaterialCollectionServantListViewManager__SetMode_28947592(materialCollectionServantListViewManager, 2, v14);
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
  System_Action_o *v12; // x0
  __int64 *v13; // x8
  ListViewManager_o *materialCollectionServantListViewManager; // x0
  System_Action_o *v15; // x21

  if ( (byte_4189CF4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_MaterialCollectionMenu_EndCloseShowServant__, v8);
    sub_B2C35C(&Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4189CF4 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v13 = &Method_MaterialCollectionMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    v13 = &Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__;
  }
  v15 = v12;
  System_Action___ctor(v12, (Il2CppObject *)this, *v13, 0LL);
  if ( !Instance )
LABEL_11:
    sub_B2C434(materialCollectionServantListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v15, 0LL);
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
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4189CF5 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_MaterialCollectionMenu_EndCloseShowServant__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4189CF5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_B2C434(v8, v9);
  CommonUI__CloseServantStatusDialog(Instance, v7, 0LL);
}


void __fastcall MaterialCollectionMenu__Init(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  this->fields.state = 0;
  if ( !materialCollectionServantListViewManager
    || (MaterialCollectionServantListViewManager__DestroyList(materialCollectionServantListViewManager, method),
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
    sub_B2C434(materialCollectionServantListViewManager, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)materialCollectionServantListViewManager & 1, 0LL);
  this->fields.tabKind = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall MaterialCollectionMenu__OnClickCancel(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4189CEF & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189CEF = 1;
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

  if ( (byte_4189CEE & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189CEE = 1;
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

  if ( (byte_4189CF2 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189CF2 = 1;
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

  if ( (byte_4189CF0 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189CF0 = 1;
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

  if ( (byte_4189CF1 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4189CF1 = 1;
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
  MaterialCollectionServantListViewManager_o *v12; // x20
  ServantEntity_o *dropList; // x0
  bool IsKeepServantEquip; // w22
  WebViewManager_o *Instance; // x0
  UserServantCollectionEntity_o *dragParentObject; // x20
  CommonUI_o *v17; // x21
  ServantStatusDialog_EndDelegate_o *v18; // x22
  WebViewManager_o *v19; // x0
  UserCommandCodeCollectionEntity_o *sortKindButton; // x20
  CommonUI_o *v21; // x21
  ServantStatusDialog_EndDelegate_o *v22; // x22
  WebViewManager_o *v23; // x0
  ServantStatusDialog_ResultDelegate_o *v24; // x22

  if ( (byte_4189CF3 & 1) == 0 )
  {
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_MaterialCollectionMenu_EndShowServantEquip__, v7);
    sub_B2C35C(&Method_MaterialCollectionMenu_EndShowServant__, v8);
    sub_B2C35C(&ServantStatusDialog_ResultDelegate_TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4189CF3 = 1;
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
                                                                                                 *(const MethodInfo **)&index);
      if ( !materialCollectionServantListViewManager )
        goto LABEL_19;
      v12 = materialCollectionServantListViewManager;
      if ( materialCollectionServantListViewManager->fields.dragParentObject )
      {
        dropList = (ServantEntity_o *)materialCollectionServantListViewManager->fields.dropList;
        if ( dropList )
        {
          IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip(dropList, 0LL);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          dragParentObject = (UserServantCollectionEntity_o *)v12->fields.dragParentObject;
          v17 = (CommonUI_o *)Instance;
          if ( IsKeepServantEquip )
          {
            v18 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v18,
              (Il2CppObject *)this,
              Method_MaterialCollectionMenu_EndShowServantEquip__,
              0LL);
            if ( v17 )
            {
              CommonUI__OpenServantStatusDialog_17983340(v17, 2, dragParentObject, v18, 0LL);
              return;
            }
LABEL_19:
            sub_B2C434(materialCollectionServantListViewManager, *(_QWORD *)&kind);
          }
        }
        else
        {
          v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          dragParentObject = (UserServantCollectionEntity_o *)v12->fields.dragParentObject;
          v17 = (CommonUI_o *)v23;
        }
        v24 = (ServantStatusDialog_ResultDelegate_o *)sub_B2C42C(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v24,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServant__,
          0LL);
        if ( !v17 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_17983836(v17, 2, dragParentObject, v24, 0LL);
      }
      else if ( materialCollectionServantListViewManager->fields.sortKindButton )
      {
        v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sortKindButton = (UserCommandCodeCollectionEntity_o *)v12->fields.sortKindButton;
        v21 = (CommonUI_o *)v19;
        v22 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v22,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServantEquip__,
          0LL);
        if ( !v21 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_17984820(v21, 2, sortKindButton, v22, 0LL, 0LL);
      }
    }
  }
}


void __fastcall MaterialCollectionMenu__OnStartClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4189CEC & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MaterialCollectionMenu_EndClose__, v3);
    byte_4189CEC = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v4, 0LL);
}


void __fastcall MaterialCollectionMenu__OnStartOpen(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4189CE9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_MaterialCollectionMenu_EndOpen__, v3);
    byte_4189CE9 = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v4, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  struct System_Int32_array *NewList; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2

  if ( (byte_4189CE8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, opened_act);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&StringLiteral_10059/*"OnStartOpen"*/, v12);
    byte_4189CE8 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = opened_act;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.mOpenedAct,
      (System_Int32_array **)opened_act,
      (System_String_array **)callback,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_16;
    NewList = UserServantCollectionMaster__GetNewList((UserServantCollectionMaster_o *)Instance, 0LL);
    this->fields.newSvtIdList = NewList;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.newSvtIdList,
      (System_Int32_array **)NewList,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
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
    MaterialCollectionServantListViewManager__CreateList((MaterialCollectionServantListViewManager_o *)Instance, 0, v28);
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
          MaterialCollectionMenu__SetTabKind(this, this->fields.tabKind, 1, v29),
          Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager,
          this->fields.state = 1,
          !Instance) )
    {
LABEL_16:
      sub_B2C434(Instance, v20);
    }
    MaterialCollectionServantListViewManager__SetMode_28947592(
      (MaterialCollectionServantListViewManager_o *)Instance,
      1,
      v30);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10059/*"OnStartOpen"*/,
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
  void *Instance; // x0
  __int64 v26; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x24
  __n128 inited; // q0
  float *v29; // x8
  float v30; // s8
  float v31; // s9
  float v32; // s10
  float v33; // s11
  struct UICommonButton_o *servantTabButton; // x8
  float *v35; // x9
  float v36; // s12
  float v37; // s13
  float v38; // s14
  float v39; // s15
  __int64 *v40; // x8
  System_String_o **v41; // x8
  bool v42; // w21
  bool v43; // w22
  UserServantCollectionEntity_array *CollectionList; // x0
  UILabel_o *servantTabLabel; // x25
  UserServantCollectionEntity_array *v46; // x23
  System_String_o *v47; // x27
  Il2CppObject *v48; // x28
  Il2CppObject *v49; // x0
  float v50; // s3
  float v51; // s2
  float v52; // s1
  float v53; // s0
  bool v54; // w27
  __int64 *v55; // x8
  System_String_o **v56; // x8
  UserServantCollectionEntity_array *v57; // x0
  UILabel_o *servantEquipTabLabel; // x23
  UserServantCollectionEntity_array *v59; // x24
  System_String_o *v60; // x25
  Il2CppObject *v61; // x26
  Il2CppObject *v62; // x0
  float v63; // s3
  float v64; // s2
  float v65; // s1
  float v66; // s0
  __int64 *v67; // x8
  System_String_o **v68; // x8
  UserCommandCodeCollectionEntity_array *v69; // x0
  UILabel_o *commandCodeTabLabel; // x21
  UserCommandCodeCollectionEntity_array *v71; // x22
  System_String_o *v72; // x23
  Il2CppObject *v73; // x24
  Il2CppObject *v74; // x0
  float v75; // s3
  float v76; // s2
  float v77; // s1
  float v78; // s0
  const MethodInfo *v79; // x2
  int32_t v80; // w1
  struct MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x21
  MaterialCollectionServantListViewManager_CallbackFunc_o *v82; // x22
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  int32_t v89; // w1
  UserCommandCodeCollectionMaster_o *v90; // [xsp+8h] [xbp-A8h]
  int v91; // [xsp+10h] [xbp-A0h] BYREF
  int32_t v92; // [xsp+14h] [xbp-9Ch] BYREF
  int32_t findSum[2]; // [xsp+18h] [xbp-98h] BYREF

  if ( (byte_4189CED & 1) == 0 )
  {
    sub_B2C35C(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_B2C35C(&int_TypeInfo, v9);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&Method_MaterialCollectionMenu_OnSelectServant__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&StringLiteral_17047/*"btn_txt_craftessence_off"*/, v13);
    sub_B2C35C(&StringLiteral_17086/*"btn_txt_servant_off"*/, v14);
    sub_B2C35C(&StringLiteral_17044/*"btn_txt_cc_off"*/, v15);
    sub_B2C35C(&StringLiteral_16962/*"btn_bg_12"*/, v16);
    sub_B2C35C(&StringLiteral_17045/*"btn_txt_cc_on"*/, v17);
    sub_B2C35C(&StringLiteral_17087/*"btn_txt_servant_on"*/, v18);
    sub_B2C35C(&StringLiteral_16964/*"btn_bg_19"*/, v19);
    sub_B2C35C(&StringLiteral_2969/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v20);
    sub_B2C35C(&StringLiteral_17048/*"btn_txt_craftessence_on"*/, v21);
    sub_B2C35C(&StringLiteral_2970/*"CHARA_GRAPH_TAB_SERVANT"*/, v22);
    sub_B2C35C(&StringLiteral_2971/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v23);
    byte_4189CED = 1;
  }
  *(_QWORD *)findSum = 0LL;
  v24 = !this->fields.isInitTab;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_122;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_122;
  v90 = (UserCommandCodeCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_4184963 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v26);
    byte_4184963 = 1;
  }
  Instance = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager_TypeInfo;
  }
  v29 = (float *)*((_QWORD *)Instance + 23);
  v30 = v29[20];
  v31 = v29[21];
  v32 = v29[22];
  v33 = v29[23];
  if ( !byte_4184964 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, v26);
    Instance = LocalizationManager_TypeInfo;
    byte_4184964 = 1;
  }
  if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
  {
    inited = j_il2cpp_runtime_class_init_0(Instance);
    Instance = LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_122;
  v35 = (float *)*((_QWORD *)Instance + 23);
  v36 = v35[24];
  v37 = v35[25];
  v38 = v35[26];
  v39 = v35[27];
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
  v40 = &StringLiteral_16962/*"btn_bg_12"*/;
  if ( !kind )
    v40 = &StringLiteral_16964/*"btn_bg_19"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v40, 0LL);
  Instance = this->fields.servantTabStrSp;
  if ( !Instance )
    goto LABEL_122;
  v41 = (System_String_o **)&StringLiteral_17086/*"btn_txt_servant_off"*/;
  if ( !kind )
    v41 = (System_String_o **)&StringLiteral_17087/*"btn_txt_servant_on"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v41, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_122;
  v42 = v24;
  v43 = isInit;
  CollectionList = UserServantCollectionMaster__getCollectionList(
                     MasterData_WarQuestSelectionMaster,
                     &findSum[1],
                     findSum,
                     0,
                     1,
                     0LL);
  servantTabLabel = this->fields.servantTabLabel;
  v46 = CollectionList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_2970/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v92 = findSum[0];
  Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v92);
  if ( !v46 )
    goto LABEL_122;
  v48 = (Il2CppObject *)Instance;
  v91 = *(_QWORD *)&v46->max_length;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91);
  Instance = System_String__Format_44301068(v47, v48, v49, 0LL);
  if ( !servantTabLabel )
    goto LABEL_122;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = this->fields.servantTabLabel;
  if ( !Instance )
    goto LABEL_122;
  v50 = kind ? v33 : v39;
  v51 = kind ? v32 : v38;
  v52 = kind ? v31 : v37;
  v53 = kind ? v30 : v36;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v50 - 3), 0LL);
  Instance = this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_122;
  v54 = v42 || isInit;
  (*(void (__fastcall **)(void *, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
    Instance,
    0LL,
    v42 || isInit,
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
  v55 = &StringLiteral_16964/*"btn_bg_19"*/;
  if ( kind != 1 )
    v55 = &StringLiteral_16962/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v55, 0LL);
  Instance = this->fields.servantEquipTabStrSp;
  if ( !Instance )
    goto LABEL_122;
  v56 = (System_String_o **)&StringLiteral_17048/*"btn_txt_craftessence_on"*/;
  if ( kind != 1 )
    v56 = (System_String_o **)&StringLiteral_17047/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v56, 0LL);
  v57 = UserServantCollectionMaster__getCollectionList(
          MasterData_WarQuestSelectionMaster,
          &findSum[1],
          findSum,
          1,
          0,
          0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v59 = v57;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_2971/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v92 = findSum[0];
  Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v92);
  if ( !v59 )
    goto LABEL_122;
  v61 = (Il2CppObject *)Instance;
  v91 = *(_QWORD *)&v59->max_length;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91);
  Instance = System_String__Format_44301068(v60, v61, v62, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_122;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = this->fields.servantEquipTabLabel;
  if ( !Instance )
    goto LABEL_122;
  v63 = kind == 1 ? v39 : v33;
  v64 = kind == 1 ? v38 : v32;
  v65 = kind == 1 ? v37 : v31;
  v66 = kind == 1 ? v36 : v30;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v63 - 3), 0LL);
  Instance = this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_122;
  (*(void (__fastcall **)(void *, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
    Instance,
    0LL,
    v42 || v43,
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
  v67 = &StringLiteral_16964/*"btn_bg_19"*/;
  if ( kind != 2 )
    v67 = &StringLiteral_16962/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v67, 0LL);
  Instance = this->fields.commandCodeTabStrSp;
  if ( !Instance )
    goto LABEL_122;
  v68 = (System_String_o **)&StringLiteral_17045/*"btn_txt_cc_on"*/;
  if ( kind != 2 )
    v68 = (System_String_o **)&StringLiteral_17044/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, *v68, 0LL);
  Instance = v90;
  if ( !v90 )
    goto LABEL_122;
  v69 = UserCommandCodeCollectionMaster__getCollectionList(v90, &findSum[1], findSum, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v71 = v69;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_2969/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v92 = findSum[0];
  Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v92);
  if ( !v71 )
    goto LABEL_122;
  v73 = (Il2CppObject *)Instance;
  v91 = *(_QWORD *)&v71->max_length;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91);
  Instance = System_String__Format_44301068(v72, v73, v74, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_122;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL);
  Instance = this->fields.commandCodeTabLabel;
  if ( !Instance )
    goto LABEL_122;
  v75 = kind == 2 ? v39 : v33;
  v76 = kind == 2 ? v38 : v32;
  v77 = kind == 2 ? v37 : v31;
  v78 = kind == 2 ? v36 : v30;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v75 - 3), 0LL);
  Instance = this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_122;
  Instance = (void *)(*(__int64 (__fastcall **)(void *, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
                       Instance,
                       0LL,
                       v54,
                       *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  if ( !v54 && this->fields.tabKind == kind )
    goto LABEL_116;
  if ( kind == 2 )
  {
    Instance = this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_122;
    v80 = 3;
  }
  else if ( kind == 1 )
  {
    Instance = this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_122;
    v80 = 1;
  }
  else
  {
    if ( kind )
      goto LABEL_116;
    Instance = this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_122;
    v80 = 0;
  }
  MaterialCollectionServantListViewManager__CreateList((MaterialCollectionServantListViewManager_o *)Instance, v80, v79);
LABEL_116:
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( this->fields.state != 2 )
  {
    if ( materialCollectionServantListViewManager )
    {
      v89 = 1;
      goto LABEL_121;
    }
LABEL_122:
    sub_B2C434(Instance, v26);
  }
  v82 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_B2C42C(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v82,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    0LL);
  if ( !materialCollectionServantListViewManager )
    goto LABEL_122;
  materialCollectionServantListViewManager->fields.callbackFunc = v82;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&materialCollectionServantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  v89 = 2;
LABEL_121:
  MaterialCollectionServantListViewManager__SetMode_28947592(materialCollectionServantListViewManager, v89, v79);
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

  if ( (byte_4189CE6 & 1) == 0 )
  {
    sub_B2C35C(&MaterialCollectionMenu_CallbackFunc_TypeInfo, value);
    byte_4189CE6 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_4189CE7 & 1) == 0 )
  {
    sub_B2C35C(&MaterialCollectionMenu_CallbackFunc_TypeInfo, value);
    byte_4189CE7 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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
  sub_B2C2F8(
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
  if ( (byte_4185D13 & 1) == 0 )
  {
    sub_B2C35C(&MaterialCollectionMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4185D13 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(MaterialCollectionMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall MaterialCollectionMenu_CallbackFunc__EndInvoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionMenu_CallbackFunc__Invoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  MaterialCollectionMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned int v13; // w22
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  MaterialCollectionMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(unsigned int *, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  unsigned int v27; // w23
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  unsigned int v33; // [xsp+4h] [xbp-4Ch] BYREF
  MaterialCollectionMenu_CallbackFunc_o *v34; // [xsp+8h] [xbp-48h] BYREF

  v34 = this;
  v33 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v34;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (MaterialCollectionMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v20 = v7[v8];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int *)v33, v22);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v21 )
    {
      v23(&v33 - 4, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        v27 = v33;
        if ( (v25 & 1) != 0 )
        {
          v28 = *v21;
          v29 = *(_QWORD *)(v22 + 24);
          v30 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, v27, v19);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v33;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v9) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, v13, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v33,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, v33, v22);
    goto LABEL_38;
  }
}