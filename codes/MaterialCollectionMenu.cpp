void __fastcall MaterialCollectionMenu___ctor(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  if ( (byte_42B0036 & 1) == 0 )
  {
    sub_B52984(&BaseMenu_TypeInfo);
    byte_42B0036 = 1;
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
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    MaterialCollectionMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall MaterialCollectionMenu__Close(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCollectionMenu__Close_25136820(this, 0LL, v2);
}


void __fastcall MaterialCollectionMenu__Close_25136820(
        MaterialCollectionMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( (byte_42B002A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10122/*"OnStartClose"*/);
    byte_42B002A = 1;
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


void __fastcall MaterialCollectionMenu__EndCloseShowServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  MaterialCollectionServantListViewManager_o *v4; // x20
  MaterialCollectionServantListViewManager_CallbackFunc_o *v5; // x21

  if ( (byte_42B0035 & 1) == 0 )
  {
    sub_B52984(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_MaterialCollectionMenu_OnSelectServant__);
    byte_42B0035 = 1;
  }
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( !materialCollectionServantListViewManager
    || (MaterialCollectionServantListViewManager__ModifyItem(
          materialCollectionServantListViewManager,
          this->fields.selectIndex,
          0LL),
        v4 = this->fields.materialCollectionServantListViewManager,
        v5 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_B52A54(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo),
        MaterialCollectionServantListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_OnSelectServant__,
          0LL),
        !v4) )
  {
    sub_B52A5C(materialCollectionServantListViewManager, method);
  }
  MaterialCollectionServantListViewManager__SetMode(v4, 2, v5, 0LL);
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
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x20
  MaterialCollectionServantListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42B0029 & 1) == 0 )
  {
    sub_B52984(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_MaterialCollectionMenu_OnSelectServant__);
    byte_42B0029 = 1;
  }
  this->fields.state = 2;
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  v4 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_B52A54(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    0LL);
  if ( !materialCollectionServantListViewManager )
    sub_B52A5C(v5, v6);
  MaterialCollectionServantListViewManager__SetMode(materialCollectionServantListViewManager, 2, v4, 0LL);
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
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x0
  __int64 *v10; // x8
  ListViewManager_o *materialCollectionServantListViewManager; // x0
  System_Action_o *v12; // x21

  if ( (byte_42B0033 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_MaterialCollectionMenu_EndCloseShowServant__);
    sub_B52984(&Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B0033 = 1;
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    v10 = &Method_MaterialCollectionMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    v10 = &Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__;
  }
  v12 = v9;
  System_Action___ctor(v9, (Il2CppObject *)this, *v10, 0LL);
  if ( !Instance )
LABEL_11:
    sub_B52A5C(materialCollectionServantListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog(Instance, v12, 0LL);
}


void __fastcall MaterialCollectionMenu__EndShowServantEquip(
        MaterialCollectionMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_42B0034 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_MaterialCollectionMenu_EndCloseShowServant__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B0034 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_B52A5C(v6, v7);
  CommonUI__CloseServantStatusDialog(Instance, v5, 0LL);
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
    sub_B52A5C(materialCollectionServantListViewManager, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)materialCollectionServantListViewManager & 1, 0LL);
  this->fields.tabKind = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall MaterialCollectionMenu__OnClickCancel(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42B002E & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B002E = 1;
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

  if ( (byte_42B002D & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B002D = 1;
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

  if ( (byte_42B0031 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0031 = 1;
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

  if ( (byte_42B002F & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B002F = 1;
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

  if ( (byte_42B0030 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0030 = 1;
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
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  MaterialCollectionServantListViewManager_o *v8; // x20
  ServantEntity_o *dropList; // x0
  bool IsKeepServantEquip; // w22
  WebViewManager_o *Instance; // x0
  UserServantCollectionEntity_o *dragParentObject; // x20
  CommonUI_o *v13; // x21
  ServantStatusDialog_EndDelegate_o *v14; // x22
  WebViewManager_o *v15; // x0
  UserCommandCodeCollectionEntity_o *sortKindButton; // x20
  CommonUI_o *v17; // x21
  ServantStatusDialog_EndDelegate_o *v18; // x22
  WebViewManager_o *v19; // x0
  ServantStatusDialog_ResultDelegate_o *v20; // x22

  if ( (byte_42B0032 & 1) == 0 )
  {
    sub_B52984(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B52984(&Method_MaterialCollectionMenu_EndShowServantEquip__);
    sub_B52984(&Method_MaterialCollectionMenu_EndShowServant__);
    sub_B52984(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B0032 = 1;
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
      v8 = materialCollectionServantListViewManager;
      if ( materialCollectionServantListViewManager->fields.dragParentObject )
      {
        dropList = (ServantEntity_o *)materialCollectionServantListViewManager->fields.dropList;
        if ( dropList )
        {
          IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip(dropList, 0LL);
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          dragParentObject = (UserServantCollectionEntity_o *)v8->fields.dragParentObject;
          v13 = (CommonUI_o *)Instance;
          if ( IsKeepServantEquip )
          {
            v14 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v14,
              (Il2CppObject *)this,
              Method_MaterialCollectionMenu_EndShowServantEquip__,
              0LL);
            if ( v13 )
            {
              CommonUI__OpenServantStatusDialog_18170284(v13, 2, dragParentObject, v14, 0LL);
              return;
            }
LABEL_19:
            sub_B52A5C(materialCollectionServantListViewManager, *(_QWORD *)&kind);
          }
        }
        else
        {
          v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          dragParentObject = (UserServantCollectionEntity_o *)v8->fields.dragParentObject;
          v13 = (CommonUI_o *)v19;
        }
        v20 = (ServantStatusDialog_ResultDelegate_o *)sub_B52A54(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v20,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServant__,
          0LL);
        if ( !v13 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_18170780(v13, 2, dragParentObject, v20, 0LL);
      }
      else if ( materialCollectionServantListViewManager->fields.sortKindButton )
      {
        v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sortKindButton = (UserCommandCodeCollectionEntity_o *)v8->fields.sortKindButton;
        v17 = (CommonUI_o *)v15;
        v18 = (ServantStatusDialog_EndDelegate_o *)sub_B52A54(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v18,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServantEquip__,
          0LL);
        if ( !v17 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_18171764(v17, 2, sortKindButton, v18, 0LL, 0LL);
      }
    }
  }
}


void __fastcall MaterialCollectionMenu__OnStartClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_42B002B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_MaterialCollectionMenu_EndClose__);
    byte_42B002B = 1;
  }
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v3, 0LL);
}


void __fastcall MaterialCollectionMenu__OnStartOpen(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_42B0028 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_MaterialCollectionMenu_EndOpen__);
    byte_42B0028 = 1;
  }
  v3 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v3, 0LL);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  struct System_Int32_array *NewList; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x3

  if ( (byte_42B0027 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_10123/*"OnStartOpen"*/);
    byte_42B0027 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = opened_act;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.mOpenedAct,
      (System_Int32_array **)opened_act,
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
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_16;
    NewList = UserServantCollectionMaster__GetNewList((UserServantCollectionMaster_o *)Instance, 0LL);
    this->fields.newSvtIdList = NewList;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.newSvtIdList,
      (System_Int32_array **)NewList,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
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
          MaterialCollectionMenu__SetTabKind(this, this->fields.tabKind, 1, v26),
          Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager,
          this->fields.state = 1,
          !Instance) )
    {
LABEL_16:
      sub_B52A5C(Instance, v18);
    }
    MaterialCollectionServantListViewManager__SetMode_31502116(
      (MaterialCollectionServantListViewManager_o *)Instance,
      1,
      0LL);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10123/*"OnStartOpen"*/,
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
  bool v7; // w22
  void *Instance; // x0
  __int64 v9; // x1
  UserServantCollectionMaster_o *MasterData_WarQuestSelectionMaster; // x24
  __n128 inited; // q0
  float *v12; // x8
  float v13; // s8
  float v14; // s9
  float v15; // s10
  float v16; // s11
  struct UICommonButton_o *servantTabButton; // x8
  float *v18; // x9
  float v19; // s12
  float v20; // s13
  float v21; // s14
  float v22; // s15
  __int64 *v23; // x8
  __int64 *v24; // x8
  bool v25; // w21
  bool v26; // w22
  UserServantCollectionEntity_array *CollectionList; // x0
  UILabel_o *servantTabLabel; // x25
  UserServantCollectionEntity_array *v29; // x23
  System_String_o *v30; // x27
  Il2CppObject *v31; // x28
  Il2CppObject *v32; // x0
  float v33; // s3
  float v34; // s2
  float v35; // s1
  float v36; // s0
  bool v37; // w27
  __int64 *v38; // x8
  __int64 *v39; // x8
  UserServantCollectionEntity_array *v40; // x0
  UILabel_o *servantEquipTabLabel; // x23
  UserServantCollectionEntity_array *v42; // x24
  System_String_o *v43; // x25
  Il2CppObject *v44; // x26
  Il2CppObject *v45; // x0
  float v46; // s3
  float v47; // s2
  float v48; // s1
  float v49; // s0
  __int64 *v50; // x8
  __int64 *v51; // x8
  UserCommandCodeCollectionEntity_array *v52; // x0
  UILabel_o *commandCodeTabLabel; // x21
  UserCommandCodeCollectionEntity_array *v54; // x22
  System_String_o *v55; // x23
  Il2CppObject *v56; // x24
  Il2CppObject *v57; // x0
  float v58; // s3
  float v59; // s2
  float v60; // s1
  float v61; // s0
  int32_t v62; // w1
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x21
  MaterialCollectionServantListViewManager_CallbackFunc_o *v64; // x22
  UserCommandCodeCollectionMaster_o *v65; // [xsp+8h] [xbp-A8h]
  int v66; // [xsp+10h] [xbp-A0h] BYREF
  int32_t v67; // [xsp+14h] [xbp-9Ch] BYREF
  int32_t findSum[2]; // [xsp+18h] [xbp-98h] BYREF

  if ( (byte_42B002C & 1) == 0 )
  {
    sub_B52984(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_MaterialCollectionMenu_OnSelectServant__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_17165/*"btn_txt_craftessence_off"*/);
    sub_B52984(&StringLiteral_17205/*"btn_txt_servant_off"*/);
    sub_B52984(&StringLiteral_17162/*"btn_txt_cc_off"*/);
    sub_B52984(&StringLiteral_17080/*"btn_bg_12"*/);
    sub_B52984(&StringLiteral_17163/*"btn_txt_cc_on"*/);
    sub_B52984(&StringLiteral_17206/*"btn_txt_servant_on"*/);
    sub_B52984(&StringLiteral_17082/*"btn_bg_19"*/);
    sub_B52984(&StringLiteral_3001/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_B52984(&StringLiteral_17166/*"btn_txt_craftessence_on"*/);
    sub_B52984(&StringLiteral_3002/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_B52984(&StringLiteral_3003/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    byte_42B002C = 1;
  }
  *(_QWORD *)findSum = 0LL;
  v7 = !this->fields.isInitTab;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_122;
  MasterData_WarQuestSelectionMaster = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_122;
  v65 = (UserCommandCodeCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( !byte_42ACC22 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    byte_42ACC22 = 1;
  }
  Instance = LocalizationManager_TypeInfo;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = LocalizationManager_TypeInfo;
  }
  v12 = (float *)*((_QWORD *)Instance + 23);
  v13 = v12[20];
  v14 = v12[21];
  v15 = v12[22];
  v16 = v12[23];
  if ( !byte_42ACC23 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    Instance = LocalizationManager_TypeInfo;
    byte_42ACC23 = 1;
  }
  if ( (*((_BYTE *)Instance + 307) & 4) != 0 && !*((_DWORD *)Instance + 56) )
  {
    inited = j_il2cpp_runtime_class_init_0(Instance);
    Instance = LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_122;
  v18 = (float *)*((_QWORD *)Instance + 23);
  v19 = v18[24];
  v20 = v18[25];
  v21 = v18[26];
  v22 = v18[27];
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
  v23 = &StringLiteral_17080/*"btn_bg_12"*/;
  if ( !kind )
    v23 = &StringLiteral_17082/*"btn_bg_19"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v23, 0LL);
  Instance = this->fields.servantTabStrSp;
  if ( !Instance )
    goto LABEL_122;
  v24 = &StringLiteral_17205/*"btn_txt_servant_off"*/;
  if ( !kind )
    v24 = &StringLiteral_17206/*"btn_txt_servant_on"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v24, 0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_122;
  v25 = v7;
  v26 = isInit;
  CollectionList = UserServantCollectionMaster__getCollectionList(
                     MasterData_WarQuestSelectionMaster,
                     &findSum[1],
                     findSum,
                     0,
                     1,
                     0LL);
  servantTabLabel = this->fields.servantTabLabel;
  v29 = CollectionList;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3002/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v67 = findSum[0];
  Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
  if ( !v29 )
    goto LABEL_122;
  v31 = (Il2CppObject *)Instance;
  v66 = *(_QWORD *)&v29->max_length;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
  Instance = System_String__Format_44563852(v30, v31, v32, 0LL);
  if ( !servantTabLabel )
    goto LABEL_122;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = this->fields.servantTabLabel;
  if ( !Instance )
    goto LABEL_122;
  v33 = kind ? v16 : v22;
  v34 = kind ? v15 : v21;
  v35 = kind ? v14 : v20;
  v36 = kind ? v13 : v19;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v33 - 3), 0LL);
  Instance = this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_122;
  v37 = v25 || isInit;
  (*(void (__fastcall **)(void *, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
    Instance,
    0LL,
    v25 || isInit,
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
  v38 = &StringLiteral_17082/*"btn_bg_19"*/;
  if ( kind != 1 )
    v38 = &StringLiteral_17080/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v38, 0LL);
  Instance = this->fields.servantEquipTabStrSp;
  if ( !Instance )
    goto LABEL_122;
  v39 = &StringLiteral_17166/*"btn_txt_craftessence_on"*/;
  if ( kind != 1 )
    v39 = &StringLiteral_17165/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v39, 0LL);
  v40 = UserServantCollectionMaster__getCollectionList(
          MasterData_WarQuestSelectionMaster,
          &findSum[1],
          findSum,
          1,
          0,
          0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v42 = v40;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3003/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v67 = findSum[0];
  Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
  if ( !v42 )
    goto LABEL_122;
  v44 = (Il2CppObject *)Instance;
  v66 = *(_QWORD *)&v42->max_length;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
  Instance = System_String__Format_44563852(v43, v44, v45, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_122;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = this->fields.servantEquipTabLabel;
  if ( !Instance )
    goto LABEL_122;
  v46 = kind == 1 ? v22 : v16;
  v47 = kind == 1 ? v21 : v15;
  v48 = kind == 1 ? v20 : v14;
  v49 = kind == 1 ? v19 : v13;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v46 - 3), 0LL);
  Instance = this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_122;
  (*(void (__fastcall **)(void *, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
    Instance,
    0LL,
    v25 || v26,
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
  v50 = &StringLiteral_17082/*"btn_bg_19"*/;
  if ( kind != 2 )
    v50 = &StringLiteral_17080/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v50, 0LL);
  Instance = this->fields.commandCodeTabStrSp;
  if ( !Instance )
    goto LABEL_122;
  v51 = &StringLiteral_17163/*"btn_txt_cc_on"*/;
  if ( kind != 2 )
    v51 = &StringLiteral_17162/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v51, 0LL);
  Instance = v65;
  if ( !v65 )
    goto LABEL_122;
  v52 = UserCommandCodeCollectionMaster__getCollectionList(v65, &findSum[1], findSum, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v54 = v52;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_3001/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v67 = findSum[0];
  Instance = (void *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
  if ( !v54 )
    goto LABEL_122;
  v56 = (Il2CppObject *)Instance;
  v66 = *(_QWORD *)&v54->max_length;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66);
  Instance = System_String__Format_44563852(v55, v56, v57, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_122;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL);
  Instance = this->fields.commandCodeTabLabel;
  if ( !Instance )
    goto LABEL_122;
  v58 = kind == 2 ? v22 : v16;
  v59 = kind == 2 ? v21 : v15;
  v60 = kind == 2 ? v20 : v14;
  v61 = kind == 2 ? v19 : v13;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)(&v58 - 3), 0LL);
  Instance = this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_122;
  Instance = (void *)(*(__int64 (__fastcall **)(void *, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
                       Instance,
                       0LL,
                       v37,
                       *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  if ( !v37 && this->fields.tabKind == kind )
    goto LABEL_116;
  if ( kind == 2 )
  {
    Instance = this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_122;
    v62 = 3;
  }
  else if ( kind == 1 )
  {
    Instance = this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_122;
    v62 = 1;
  }
  else
  {
    if ( kind )
      goto LABEL_116;
    Instance = this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_122;
    v62 = 0;
  }
  MaterialCollectionServantListViewManager__CreateList((MaterialCollectionServantListViewManager_o *)Instance, v62, 0LL);
LABEL_116:
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( this->fields.state != 2 )
  {
    if ( materialCollectionServantListViewManager )
    {
      MaterialCollectionServantListViewManager__SetMode_31502116(
        this->fields.materialCollectionServantListViewManager,
        1,
        0LL);
      goto LABEL_121;
    }
LABEL_122:
    sub_B52A5C(Instance, v9);
  }
  v64 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_B52A54(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v64,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    0LL);
  if ( !materialCollectionServantListViewManager )
    goto LABEL_122;
  MaterialCollectionServantListViewManager__SetMode(materialCollectionServantListViewManager, 2, v64, 0LL);
LABEL_121:
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

  if ( (byte_42B0025 & 1) == 0 )
  {
    sub_B52984(&MaterialCollectionMenu_CallbackFunc_TypeInfo);
    byte_42B0025 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionMenu_o *)sub_B52D50(v8);
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
  MaterialCollectionMenu_o *v11; // x0
  int32_t v12; // w1
  bool v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_42B0026 & 1) == 0 )
  {
    sub_B52984(&MaterialCollectionMenu_CallbackFunc_TypeInfo);
    byte_42B0026 = 1;
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
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionMenu_o *)sub_B52D50(v8);
  MaterialCollectionMenu__SetTabKind(v11, v12, v13, v14);
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
  sub_B52920(p_method);
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
  if ( (byte_42ADCB6 & 1) == 0 )
  {
    sub_B52984(&MaterialCollectionMenu_ResultKind_TypeInfo);
    byte_42ADCB6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(MaterialCollectionMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall MaterialCollectionMenu_CallbackFunc__EndInvoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
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
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
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
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
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
            v18 = sub_AEB880(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B52A34(v17, v22);
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
            v16 = sub_AEB880(v21, class_0, v9, v11);
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