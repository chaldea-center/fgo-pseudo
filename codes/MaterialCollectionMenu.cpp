void MaterialCollectionMenu___ctor(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5933589 & 1) == 0 )
  {
    sub_21FFC50(&BaseMenu_TypeInfo);
    byte_5933589 = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method, v2);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void MaterialCollectionMenu__Callback(MaterialCollectionMenu_o *this, int32_t result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct MaterialCollectionMenu_CallbackFunc_o *v9; // x20
  struct MaterialCollectionMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      v9->fields.method);
  }
}


void MaterialCollectionMenu__Close(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCollectionMenu__Close_39951728(this, 0, v2);
}


void MaterialCollectionMenu__Close_39951728(
        MaterialCollectionMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x1

  if ( (byte_593357D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10355/*"OnStartClose"*/);
    byte_593357D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = (System_String_o *)StringLiteral_10355/*"OnStartClose"*/;
  this->fields.state = 4;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v10, 0.1, 0);
}


void MaterialCollectionMenu__EndClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
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

  MaterialCollectionMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void MaterialCollectionMenu__EndCloseShowServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  struct MaterialCollectionServantListViewManager_o *v5; // x20
  MaterialCollectionServantListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_5933588 & 1) == 0 )
  {
    sub_21FFC50(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_MaterialCollectionMenu_OnSelectServant__);
    byte_5933588 = 1;
  }
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( !materialCollectionServantListViewManager
    || (MaterialCollectionServantListViewManager__RequestListObject_39971740(
          materialCollectionServantListViewManager,
          4,
          v2),
        v5 = this->fields.materialCollectionServantListViewManager,
        v6 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_21FFEBC(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo),
        MaterialCollectionServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_OnSelectServant__,
          v7),
        !v5) )
  {
    sub_21FFECC(materialCollectionServantListViewManager, method);
  }
  v5->fields.callbackFunc = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  MaterialCollectionServantListViewManager__SetMode_39956296(v5, 2, v14);
}


void MaterialCollectionMenu__EndCloseShowServantuestQuestJump(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.state = 3;
  MaterialCollectionMenu__Callback(this, 1, v2);
}


void MaterialCollectionMenu__EndOpen(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_CallbackFunc_c *v3; // x0
  struct MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x20
  MaterialCollectionServantListViewManager_CallbackFunc_o *v5; // x21
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

  if ( (byte_593357C & 1) == 0 )
  {
    sub_21FFC50(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_MaterialCollectionMenu_OnSelectServant__);
    byte_593357C = 1;
  }
  v3 = MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo;
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  this->fields.state = 2;
  v5 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_21FFEBC(v3);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    v6);
  if ( !materialCollectionServantListViewManager )
    sub_21FFECC(v7, v8);
  materialCollectionServantListViewManager->fields.callbackFunc = v5;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&materialCollectionServantListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  MaterialCollectionServantListViewManager__SetMode_39956296(materialCollectionServantListViewManager, 2, v15);
  ActionExtensions__Call(this->fields.mOpenedAct, 0);
}


// local variable allocation has failed, the output may be wrong!
void MaterialCollectionMenu__EndShowServant(
        MaterialCollectionMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x0
  intptr_t v10; // x2
  ListViewManager_o *materialCollectionServantListViewManager; // x0
  System_Action_o *v12; // x21

  if ( (byte_5933586 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_MaterialCollectionMenu_EndCloseShowServant__);
    sub_21FFC50(&Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5933586 = 1;
  }
  if ( questId < 1 )
  {
    if ( isNeedSort )
    {
      materialCollectionServantListViewManager = (ListViewManager_o *)this->fields.materialCollectionServantListViewManager;
      if ( !materialCollectionServantListViewManager )
        goto LABEL_11;
      ListViewManager__SortItem(materialCollectionServantListViewManager, -1, 0, -1, 0);
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    v10 = Method_MaterialCollectionMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    v10 = Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__;
  }
  v12 = v9;
  System_Action___ctor(v9, (Il2CppObject *)this, v10, 0);
  if ( !Instance )
LABEL_11:
    sub_21FFECC(materialCollectionServantListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v12, 0);
}


void MaterialCollectionMenu__EndShowServantEquip(
        MaterialCollectionMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_5933587 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_MaterialCollectionMenu_EndCloseShowServant__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5933587 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndCloseShowServant__, 0);
  if ( !Instance )
    sub_21FFECC(v6, v7);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void MaterialCollectionMenu__Init(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  this->fields.state = 0;
  if ( !materialCollectionServantListViewManager
    || (MaterialCollectionServantListViewManager__DestroyList(materialCollectionServantListViewManager, method),
        (materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager) == 0)
    || (materialCollectionServantListViewManager = (MaterialCollectionServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                                   (UnityEngine_Component_o *)materialCollectionServantListViewManager,
                                                                                                   0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCollectionServantListViewManager, 0, 0),
        (materialCollectionServantListViewManager = (MaterialCollectionServantListViewManager_o *)this->fields.bgTxtSprite) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)materialCollectionServantListViewManager,
                       0),
        materialCollectionServantListViewManager = (MaterialCollectionServantListViewManager_o *)BgTxtManager__IsActiveBgTxt(0),
        !gameObject) )
  {
    sub_21FFECC(materialCollectionServantListViewManager, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)materialCollectionServantListViewManager & 1, 0);
  this->fields.tabKind = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void MaterialCollectionMenu__OnClickCancel(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5933581 & 1) == 0 )
  {
    sub_21FFC50(&Method_MaterialCollectionMenu_OnClickCancel__);
    byte_5933581 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCollectionMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_MaterialCollectionMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    MaterialCollectionMenu__Callback(this, 0, v5);
  }
}


void MaterialCollectionMenu__OnClickDecide(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5933580 & 1) == 0 )
  {
    sub_21FFC50(&Method_MaterialCollectionMenu_OnClickDecide__);
    byte_5933580 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCollectionMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_MaterialCollectionMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    MaterialCollectionMenu__Callback(this, 0, v5);
  }
}


void MaterialCollectionMenu__OnClickTabCommandCode(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_5933584 & 1) == 0 )
  {
    sub_21FFC50(&Method_MaterialCollectionMenu_OnClickTabCommandCode__);
    byte_5933584 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_MaterialCollectionMenu_OnClickTabCommandCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    MaterialCollectionMenu__SetTabKind(this, 2, 0, v5);
  }
}


void MaterialCollectionMenu__OnClickTabServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_5933582 & 1) == 0 )
  {
    sub_21FFC50(&Method_MaterialCollectionMenu_OnClickTabServant__);
    byte_5933582 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_MaterialCollectionMenu_OnClickTabServant__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    MaterialCollectionMenu__SetTabKind(this, 0, 0, v5);
  }
}


void MaterialCollectionMenu__OnClickTabServantEquip(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_5933583 & 1) == 0 )
  {
    sub_21FFC50(&Method_MaterialCollectionMenu_OnClickTabServantEquip__);
    byte_5933583 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_MaterialCollectionMenu_OnClickTabServantEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    MaterialCollectionMenu__SetTabKind(this, 1, 0, v5);
  }
}


void MaterialCollectionMenu__OnMoveEnd(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void MaterialCollectionMenu__OnSelectServant(
        MaterialCollectionMenu_o *this,
        int32_t kind,
        int32_t index,
        const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  MaterialCollectionServantListViewManager_o *v8; // x20
  ServantEntity_o *dropList; // x0
  Il2CppObject *Instance; // x21
  UserServantCollectionEntity_o *dragParentObject; // x20
  ServantStatusDialog_EndDelegate_o *v12; // x22
  Il2CppObject *v13; // x21
  UserServantCollectionEntity_o *v14; // x20
  ServantStatusDialog_ResultDelegate_o *v15; // x22
  Il2CppObject *v16; // x21
  UserCommandCodeCollectionEntity_o *sortKindButton; // x20
  ServantStatusDialog_EndDelegate_o *v18; // x22

  if ( (byte_5933585 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_21FFC50(&Method_MaterialCollectionMenu_EndShowServantEquip__);
    sub_21FFC50(&Method_MaterialCollectionMenu_EndShowServant__);
    sub_21FFC50(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5933585 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.selectIndex = index;
    if ( kind == 1 )
    {
      materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
      if ( !materialCollectionServantListViewManager )
        goto LABEL_18;
      materialCollectionServantListViewManager = (MaterialCollectionServantListViewManager_o *)MaterialCollectionServantListViewManager__GetItem(
                                                                                                 materialCollectionServantListViewManager,
                                                                                                 index,
                                                                                                 *(const MethodInfo **)&index);
      if ( !materialCollectionServantListViewManager )
        goto LABEL_18;
      v8 = materialCollectionServantListViewManager;
      if ( materialCollectionServantListViewManager->fields.dragParentObject )
      {
        dropList = (ServantEntity_o *)materialCollectionServantListViewManager->fields.dropList;
        if ( dropList && ServantEntity__get_IsKeepServantEquip(dropList, 0) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          dragParentObject = (UserServantCollectionEntity_o *)v8->fields.dragParentObject;
          v12 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v12,
            (Il2CppObject *)this,
            Method_MaterialCollectionMenu_EndShowServantEquip__,
            0);
          if ( Instance )
          {
            CommonUI__OpenServantStatusDialog_37303496((CommonUI_o *)Instance, 2, dragParentObject, v12, 0);
            return;
          }
LABEL_18:
          sub_21FFECC(materialCollectionServantListViewManager, *(_QWORD *)&kind);
        }
        v13 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v14 = (UserServantCollectionEntity_o *)v8->fields.dragParentObject;
        v15 = (ServantStatusDialog_ResultDelegate_o *)sub_21FFEBC(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v15,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServant__,
          0);
        if ( !v13 )
          goto LABEL_18;
        CommonUI__OpenServantStatusDialog_37303960((CommonUI_o *)v13, 2, v14, v15, 0);
      }
      else if ( materialCollectionServantListViewManager->fields.sortKindButton )
      {
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sortKindButton = (UserCommandCodeCollectionEntity_o *)v8->fields.sortKindButton;
        v18 = (ServantStatusDialog_EndDelegate_o *)sub_21FFEBC(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v18,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServantEquip__,
          0);
        if ( !v16 )
          goto LABEL_18;
        CommonUI__OpenServantStatusDialog_37304880((CommonUI_o *)v16, 2, sortKindButton, v18, 0, 0);
      }
    }
  }
}


void MaterialCollectionMenu__OnStartClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_593357E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_MaterialCollectionMenu_EndClose__);
    byte_593357E = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v3, 0);
}


void MaterialCollectionMenu__OnStartOpen(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_593357B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_MaterialCollectionMenu_EndOpen__);
    byte_593357B = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v3, 0);
}


void MaterialCollectionMenu__Open(
        MaterialCollectionMenu_o *this,
        System_Action_o *opened_act,
        MaterialCollectionMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  struct System_Int32_array *NewList; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2

  if ( (byte_593357A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_10356/*"OnStartOpen"*/);
    byte_593357A = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = opened_act;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mOpenedAct,
      (int32_t)opened_act,
      (System_String_o *)callback,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_16;
    NewList = UserServantCollectionMaster__GetNewList((UserServantCollectionMaster_o *)Instance, 0);
    this->fields.newSvtIdList = NewList;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.newSvtIdList,
      (int32_t)NewList,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !Instance )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_16;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_16;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_16;
    MaterialCollectionServantListViewManager__CreateList((MaterialCollectionServantListViewManager_o *)Instance, 0, v26);
    Instance = (DataManager_o *)this->fields.servantTabButton;
    if ( !Instance )
      goto LABEL_16;
    ((void (__fastcall *)(DataManager_o *, _QWORD, __int64, Il2CppClass **))Instance->klass[1]._1.nestedTypes)(
      Instance,
      0,
      1,
      Instance->klass[1]._1.implementedInterfaces);
    Instance = (DataManager_o *)this->fields.servantTabButton;
    if ( !Instance )
      goto LABEL_16;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, 0, 0);
    Instance = (DataManager_o *)this->fields.servantEquipTabButton;
    if ( !Instance
      || (((void (__fastcall *)(DataManager_o *, __int64, __int64, Il2CppClass **))Instance->klass[1]._1.nestedTypes)(
            Instance,
            3,
            1,
            Instance->klass[1]._1.implementedInterfaces),
          (Instance = (DataManager_o *)this->fields.commandCodeTabButton) == 0)
      || (((void (__fastcall *)(DataManager_o *, __int64, __int64, Il2CppClass **))Instance->klass[1]._1.nestedTypes)(
            Instance,
            3,
            1,
            Instance->klass[1]._1.implementedInterfaces),
          MaterialCollectionMenu__SetTabKind(this, this->fields.tabKind, 1, v27),
          Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager,
          this->fields.state = 1,
          !Instance) )
    {
LABEL_16:
      sub_21FFECC(Instance, v18);
    }
    MaterialCollectionServantListViewManager__SetMode_39956296(
      (MaterialCollectionServantListViewManager_o *)Instance,
      1,
      v28);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10356/*"OnStartOpen"*/,
      0.5,
      0);
  }
}


// local variable allocation has failed, the output may be wrong!
void MaterialCollectionMenu__SetTabKind(
        MaterialCollectionMenu_o *this,
        int32_t kind,
        bool isInit,
        const MethodInfo *method)
{
  _BOOL4 isInitTab; // w8
  bool v8; // w22
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x24
  __int64 v12; // x2
  __n128 inited; // q0
  float *v14; // x8
  float v15; // s12
  float v16; // s13
  float v17; // s14
  float v18; // s15
  struct UICommonButton_o *servantTabButton; // x8
  float *v20; // x9
  float v21; // s10
  float v22; // s11
  float v23; // s8
  float v24; // s9
  __int64 *v25; // x8
  __int64 *v26; // x8
  bool v27; // w21
  bool v28; // w22
  UserServantCollectionEntity_array *CollectionList; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  UILabel_o *servantTabLabel; // x25
  UserServantCollectionEntity_array *v33; // x26
  System_String_o *v34; // x27
  Il2CppObject *v35; // x28
  Il2CppObject *v36; // x0
  float v37; // s3
  float v38; // s2
  float v39; // s1
  float v40; // s0 OVERLAPPED
  bool v41; // w27
  System_String_o **v42; // x8
  __int64 *v43; // x8
  __int64 v44; // x1
  __int64 v45; // x2
  UserServantCollectionEntity_array *v46; // x24
  UILabel_o *servantEquipTabLabel; // x23
  System_String_o *v48; // x25
  Il2CppObject *v49; // x26
  Il2CppObject *v50; // x0
  float v51; // s3
  float v52; // s2
  float v53; // s1
  float v54; // s0 OVERLAPPED
  System_String_o **v55; // x8
  __int64 *v56; // x8
  __int64 v57; // x1
  __int64 v58; // x2
  UserCommandCodeCollectionEntity_array *v59; // x22
  UILabel_o *commandCodeTabLabel; // x21
  System_String_o *v61; // x23
  Il2CppObject *v62; // x24
  Il2CppObject *v63; // x0
  const MethodInfo *v64; // x2
  int32_t v65; // w1
  struct MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x21
  MaterialCollectionServantListViewManager_CallbackFunc_o *v67; // x22
  const MethodInfo *v68; // x3
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  int32_t v75; // w1
  UserCommandCodeCollectionMaster_o *v76; // [xsp+8h] [xbp-B8h]
  int max_length; // [xsp+10h] [xbp-B0h] BYREF
  int32_t v78; // [xsp+14h] [xbp-ACh] BYREF
  int32_t findSum[2]; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593357F & 1) == 0 )
  {
    sub_21FFC50(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_MaterialCollectionMenu_OnSelectServant__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_18292/*"btn_txt_craftessence_off"*/);
    sub_21FFC50(&StringLiteral_18333/*"btn_txt_servant_off"*/);
    sub_21FFC50(&StringLiteral_18288/*"btn_txt_cc_off"*/);
    sub_21FFC50(&StringLiteral_18168/*"btn_bg_12"*/);
    sub_21FFC50(&StringLiteral_18289/*"btn_txt_cc_on"*/);
    sub_21FFC50(&StringLiteral_18334/*"btn_txt_servant_on"*/);
    sub_21FFC50(&StringLiteral_18170/*"btn_bg_19"*/);
    sub_21FFC50(&StringLiteral_3475/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_21FFC50(&StringLiteral_18293/*"btn_txt_craftessence_on"*/);
    sub_21FFC50(&StringLiteral_3476/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_21FFC50(&StringLiteral_3477/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    byte_593357F = 1;
  }
  isInitTab = this->fields.isInitTab;
  *(_QWORD *)findSum = 0;
  v8 = !isInitTab;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v76 = (UserCommandCodeCollectionMaster_o *)DataManager__GetMasterData_object_(
                                               Instance,
                                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v12);
  if ( !byte_5932AD3 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    byte_5932AD3 = 1;
  }
  Instance = (DataManager_o *)LocalizationManager_TypeInfo;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v10, v12);
    Instance = (DataManager_o *)LocalizationManager_TypeInfo;
  }
  v14 = *(float **)&Instance[1].fields._DispLog;
  v15 = v14[20];
  v16 = v14[21];
  v17 = v14[22];
  v18 = v14[23];
  if ( !byte_5932AD4 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager_TypeInfo;
    byte_5932AD4 = 1;
  }
  if ( !HIDWORD(Instance[1].fields.saveDataMapList) )
  {
    inited = j_il2cpp_runtime_class_init_0(Instance, v10, v12);
    Instance = (DataManager_o *)LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_88;
  v20 = *(float **)&Instance[1].fields._DispLog;
  v22 = v20[24];
  v21 = v20[25];
  v24 = v20[26];
  v23 = v20[27];
  ((void (__fastcall *)(struct UICommonButton_o *__return_ptr, struct UICommonButton_o *, __int64, const MethodInfo *, long double))servantTabButton->klass->vtable._5_set_isEnabled.methodPtr)(
    servantTabButton,
    this->fields.servantTabButton,
    1,
    servantTabButton->klass->vtable._5_set_isEnabled.method,
    *(long double *)&inited);
  Instance = (DataManager_o *)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, kind != 0, 0);
  Instance = (DataManager_o *)this->fields.servantTabBoxCollider;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Instance, kind != 0, 0);
  Instance = (DataManager_o *)this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_88;
  v25 = &StringLiteral_18170/*"btn_bg_19"*/;
  if ( kind )
    v25 = &StringLiteral_18168/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v25, 0);
  Instance = (DataManager_o *)this->fields.servantTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v26 = &StringLiteral_18334/*"btn_txt_servant_on"*/;
  if ( kind )
    v26 = &StringLiteral_18333/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v26, 0);
  if ( !MasterData_object )
    goto LABEL_88;
  v27 = v8;
  v28 = isInit;
  CollectionList = UserServantCollectionMaster__getCollectionList(
                     (UserServantCollectionMaster_o *)MasterData_object,
                     &findSum[1],
                     findSum,
                     0,
                     1,
                     0);
  servantTabLabel = this->fields.servantTabLabel;
  v33 = CollectionList;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30, v31);
  v34 = LocalizationManager__Get((System_String_o *)StringLiteral_3476/*"CHARA_GRAPH_TAB_SERVANT"*/, 0);
  v78 = findSum[0];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_594C070, &v78);
  if ( !v33 )
    goto LABEL_88;
  v35 = (Il2CppObject *)Instance;
  max_length = v33->max_length;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &max_length);
  Instance = (DataManager_o *)System_String__Format_75484576(v34, v35, v36, 0);
  if ( !servantTabLabel )
    goto LABEL_88;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0);
  v37 = v23;
  v38 = v24;
  Instance = (DataManager_o *)this->fields.servantTabLabel;
  v39 = v21;
  v40 = v22;
  if ( kind )
  {
    v37 = v18;
    v38 = v17;
    v39 = v16;
    v40 = v15;
  }
  if ( !Instance )
    goto LABEL_88;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v40, 0);
  Instance = (DataManager_o *)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_88;
  v41 = v27 || v28;
  ((void (__fastcall *)(DataManager_o *, _QWORD, bool, Il2CppClass **))Instance->klass[1]._1.nestedTypes)(
    Instance,
    0,
    v27 || v28,
    Instance->klass[1]._1.implementedInterfaces);
  Instance = (DataManager_o *)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_88;
  ((void (__fastcall *)(DataManager_o *, __int64, const char *))Instance->klass[1]._1.name)(
    Instance,
    1,
    Instance->klass[1]._1.namespaze);
  Instance = (DataManager_o *)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, kind != 1, 0);
  Instance = (DataManager_o *)this->fields.servantEquipTabBoxCollider;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Instance, kind != 1, 0);
  Instance = (DataManager_o *)this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_88;
  v42 = (System_String_o **)(kind == 1 ? &StringLiteral_18170/*"btn_bg_19"*/ : &StringLiteral_18168/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v42, 0);
  Instance = (DataManager_o *)this->fields.servantEquipTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v43 = &StringLiteral_18292/*"btn_txt_craftessence_off"*/;
  if ( kind == 1 )
    v43 = &StringLiteral_18293/*"btn_txt_craftessence_on"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v43, 0);
  v46 = UserServantCollectionMaster__getCollectionList(
          (UserServantCollectionMaster_o *)MasterData_object,
          &findSum[1],
          findSum,
          1,
          0,
          0);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44, v45);
  v48 = LocalizationManager__Get((System_String_o *)StringLiteral_3477/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0);
  v78 = findSum[0];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_594C070, &v78);
  if ( !v46 )
    goto LABEL_88;
  v49 = (Il2CppObject *)Instance;
  max_length = v46->max_length;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &max_length);
  Instance = (DataManager_o *)System_String__Format_75484576(v48, v49, v50, 0);
  if ( !servantEquipTabLabel )
    goto LABEL_88;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0);
  v51 = v23;
  v52 = v24;
  Instance = (DataManager_o *)this->fields.servantEquipTabLabel;
  v53 = v21;
  v54 = v22;
  if ( kind != 1 )
  {
    v51 = v18;
    v52 = v17;
    v53 = v16;
    v54 = v15;
  }
  if ( !Instance )
    goto LABEL_88;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v54, 0);
  Instance = (DataManager_o *)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_88;
  ((void (__fastcall *)(DataManager_o *, _QWORD, bool, Il2CppClass **))Instance->klass[1]._1.nestedTypes)(
    Instance,
    0,
    v27 || v28,
    Instance->klass[1]._1.implementedInterfaces);
  Instance = (DataManager_o *)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_88;
  ((void (__fastcall *)(DataManager_o *, __int64, const char *))Instance->klass[1]._1.name)(
    Instance,
    1,
    Instance->klass[1]._1.namespaze);
  Instance = (DataManager_o *)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, kind != 2, 0);
  Instance = (DataManager_o *)this->fields.commandCodeTabBoxCollider;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Instance, kind != 2, 0);
  Instance = (DataManager_o *)this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_88;
  v55 = (System_String_o **)(kind == 2 ? &StringLiteral_18170/*"btn_bg_19"*/ : &StringLiteral_18168/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v55, 0);
  Instance = (DataManager_o *)this->fields.commandCodeTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v56 = &StringLiteral_18288/*"btn_txt_cc_off"*/;
  if ( kind == 2 )
    v56 = &StringLiteral_18289/*"btn_txt_cc_on"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v56, 0);
  Instance = (DataManager_o *)v76;
  if ( !v76 )
    goto LABEL_88;
  v59 = UserCommandCodeCollectionMaster__getCollectionList(v76, &findSum[1], findSum, 0);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v57, v58);
  v61 = LocalizationManager__Get((System_String_o *)StringLiteral_3475/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0);
  v78 = findSum[0];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(qword_594C070, &v78);
  if ( !v59 )
    goto LABEL_88;
  v62 = (Il2CppObject *)Instance;
  max_length = v59->max_length;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &max_length);
  Instance = (DataManager_o *)System_String__Format_75484576(v61, v62, v63, 0);
  if ( !commandCodeTabLabel )
    goto LABEL_88;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.commandCodeTabLabel;
  if ( kind != 2 )
  {
    v23 = v18;
    v24 = v17;
    v21 = v16;
    v22 = v15;
  }
  if ( !Instance )
    goto LABEL_88;
  v80.fields.r = v22;
  v80.fields.g = v21;
  v80.fields.b = v24;
  v80.fields.a = v23;
  UILabel__set_effectColor((UILabel_o *)Instance, v80, 0);
  Instance = (DataManager_o *)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_88;
  Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, _QWORD, bool, Il2CppClass **))Instance->klass[1]._1.nestedTypes)(
                                Instance,
                                0,
                                v41,
                                Instance->klass[1]._1.implementedInterfaces);
  if ( !v41 && this->fields.tabKind == kind )
    goto LABEL_82;
  if ( kind == 2 )
  {
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v65 = 3;
  }
  else if ( kind == 1 )
  {
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v65 = 1;
  }
  else
  {
    if ( kind )
      goto LABEL_82;
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v65 = 0;
  }
  MaterialCollectionServantListViewManager__CreateList((MaterialCollectionServantListViewManager_o *)Instance, v65, v64);
LABEL_82:
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( this->fields.state != 2 )
  {
    if ( materialCollectionServantListViewManager )
    {
      v75 = 1;
      goto LABEL_87;
    }
LABEL_88:
    sub_21FFECC(Instance, v10);
  }
  v67 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_21FFEBC(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v67,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    v68);
  if ( !materialCollectionServantListViewManager )
    goto LABEL_88;
  materialCollectionServantListViewManager->fields.callbackFunc = v67;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&materialCollectionServantListViewManager->fields.callbackFunc,
    (int32_t)v67,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  v75 = 2;
LABEL_87:
  MaterialCollectionServantListViewManager__SetMode_39956296(materialCollectionServantListViewManager, v75, v64);
  this->fields.tabKind = kind;
  this->fields.isInitTab = 1;
}


void MaterialCollectionMenu__add_callbackFunc(
        MaterialCollectionMenu_o *this,
        MaterialCollectionMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MaterialCollectionMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MaterialCollectionMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  MaterialCollectionMenu_o *v13; // x0
  MaterialCollectionMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5933578 & 1) == 0 )
  {
    sub_21FFC50(&MaterialCollectionMenu_CallbackFunc_TypeInfo);
    byte_5933578 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (MaterialCollectionMenu_CallbackFunc_c *)v8->klass != MaterialCollectionMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (MaterialCollectionMenu_o *)sub_220024C(v8, MaterialCollectionMenu_CallbackFunc_TypeInfo, v9, v10);
  MaterialCollectionMenu__remove_callbackFunc(v13, v14, v15);
}


void MaterialCollectionMenu__remove_callbackFunc(
        MaterialCollectionMenu_o *this,
        MaterialCollectionMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MaterialCollectionMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MaterialCollectionMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  MaterialCollectionServantListViewManager_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_5933579 & 1) == 0 )
  {
    sub_21FFC50(&MaterialCollectionMenu_CallbackFunc_TypeInfo);
    byte_5933579 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (MaterialCollectionMenu_CallbackFunc_c *)v8->klass != MaterialCollectionMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (MaterialCollectionServantListViewManager_o *)sub_220024C(
                                                        v8,
                                                        MaterialCollectionMenu_CallbackFunc_TypeInfo,
                                                        v9,
                                                        v10);
  MaterialCollectionServantListViewManager__DestroyList(v13, v14);
}


void MaterialCollectionMenu_CallbackFunc___ctor(
        MaterialCollectionMenu_CallbackFunc_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FEF398;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FEF350;
}


System_IAsyncResult_o *MaterialCollectionMenu_CallbackFunc__BeginInvoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_593358A & 1) == 0 )
  {
    sub_21FFC50(&MaterialCollectionMenu_ResultKind_TypeInfo);
    byte_593358A = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(MaterialCollectionMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void MaterialCollectionMenu_CallbackFunc__EndInvoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void MaterialCollectionMenu_CallbackFunc__Invoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}