void MaterialCollectionMenu___ctor(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4E72661 & 1) == 0 )
  {
    sub_1D0F0B4(&BaseMenu_TypeInfo);
    byte_4E72661 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void MaterialCollectionMenu__Callback(MaterialCollectionMenu_o *this, int32_t result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct MaterialCollectionMenu_CallbackFunc_o *v9; // x20
  struct MaterialCollectionMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1D0F058(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      v9->fields.method);
  }
}


void MaterialCollectionMenu__Close(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCollectionMenu__Close_34441252(this, 0, v2);
}


void MaterialCollectionMenu__Close_34441252(
        MaterialCollectionMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4E72655 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_10083/*"OnStartClose"*/);
    byte_4E72655 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_10083/*"OnStartClose"*/, 0.1, 0);
}


void MaterialCollectionMenu__EndClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  MaterialCollectionMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1D0F30C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1D0F058(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void MaterialCollectionMenu__EndCloseShowServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  struct MaterialCollectionServantListViewManager_o *v5; // x20
  MaterialCollectionServantListViewManager_CallbackFunc_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4E72660 & 1) == 0 )
  {
    sub_1D0F0B4(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_MaterialCollectionMenu_OnSelectServant__);
    byte_4E72660 = 1;
  }
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( !materialCollectionServantListViewManager
    || (MaterialCollectionServantListViewManager__RequestListObject_34460728(
          materialCollectionServantListViewManager,
          4,
          v2),
        v5 = this->fields.materialCollectionServantListViewManager,
        v6 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_1D0F300(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo),
        MaterialCollectionServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_OnSelectServant__,
          0),
        !v5) )
  {
    sub_1D0F30C(materialCollectionServantListViewManager, method);
  }
  v5->fields.callbackFunc = v6;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v7, v8, v9, v10, v11, v12);
  MaterialCollectionServantListViewManager__SetMode_34445828(v5, 2, v13);
}


void MaterialCollectionMenu__EndCloseShowServantuestQuestJump(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.state = 3;
  MaterialCollectionMenu__Callback(this, 1, v2);
}


void MaterialCollectionMenu__EndOpen(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  struct MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x20
  MaterialCollectionServantListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x2

  if ( (byte_4E72654 & 1) == 0 )
  {
    sub_1D0F0B4(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_MaterialCollectionMenu_OnSelectServant__);
    byte_4E72654 = 1;
  }
  this->fields.state = 2;
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  v4 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_1D0F300(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    0);
  if ( !materialCollectionServantListViewManager )
    sub_1D0F30C(v5, v6);
  materialCollectionServantListViewManager->fields.callbackFunc = v4;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&materialCollectionServantListViewManager->fields.callbackFunc,
    (int32_t)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  MaterialCollectionServantListViewManager__SetMode_34445828(materialCollectionServantListViewManager, 2, v13);
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

  if ( (byte_4E7265E & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_MaterialCollectionMenu_EndCloseShowServant__);
    sub_1D0F0B4(&Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7265E = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    v10 = Method_MaterialCollectionMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
    v10 = Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__;
  }
  v12 = v9;
  System_Action___ctor(v9, (Il2CppObject *)this, v10, 0);
  if ( !Instance )
LABEL_11:
    sub_1D0F30C(materialCollectionServantListViewManager, isDecide);
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

  if ( (byte_4E7265F & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_MaterialCollectionMenu_EndCloseShowServant__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7265F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndCloseShowServant__, 0);
  if ( !Instance )
    sub_1D0F30C(v6, v7);
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
    sub_1D0F30C(materialCollectionServantListViewManager, method);
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

  if ( (byte_4E72659 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_MaterialCollectionMenu_OnClickCancel__);
    byte_4E72659 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCollectionMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_MaterialCollectionMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    MaterialCollectionMenu__Callback(this, 0, v5);
  }
}


void MaterialCollectionMenu__OnClickDecide(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4E72658 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_MaterialCollectionMenu_OnClickDecide__);
    byte_4E72658 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCollectionMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_MaterialCollectionMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    MaterialCollectionMenu__Callback(this, 0, v5);
  }
}


void MaterialCollectionMenu__OnClickTabCommandCode(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4E7265C & 1) == 0 )
  {
    sub_1D0F0B4(&Method_MaterialCollectionMenu_OnClickTabCommandCode__);
    byte_4E7265C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_MaterialCollectionMenu_OnClickTabCommandCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    MaterialCollectionMenu__SetTabKind(this, 2, 0, v5);
  }
}


void MaterialCollectionMenu__OnClickTabServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4E7265A & 1) == 0 )
  {
    sub_1D0F0B4(&Method_MaterialCollectionMenu_OnClickTabServant__);
    byte_4E7265A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_MaterialCollectionMenu_OnClickTabServant__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    MaterialCollectionMenu__SetTabKind(this, 0, 0, v5);
  }
}


void MaterialCollectionMenu__OnClickTabServantEquip(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4E7265B & 1) == 0 )
  {
    sub_1D0F0B4(&Method_MaterialCollectionMenu_OnClickTabServantEquip__);
    byte_4E7265B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1D0F0CC(Method_MaterialCollectionMenu_OnClickTabServantEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1D0F098(v3, v3[4]);
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
  bool IsKeepServantEquip; // w22
  Il2CppObject *Instance; // x0
  UserServantCollectionEntity_o *dragParentObject; // x20
  CommonUI_o *v13; // x21
  ServantStatusDialog_EndDelegate_o *v14; // x22
  Il2CppObject *v15; // x0
  UserCommandCodeCollectionEntity_o *sortKindButton; // x20
  CommonUI_o *v17; // x21
  ServantStatusDialog_EndDelegate_o *v18; // x22
  Il2CppObject *v19; // x0
  ServantStatusDialog_ResultDelegate_o *v20; // x22

  if ( (byte_4E7265D & 1) == 0 )
  {
    sub_1D0F0B4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1D0F0B4(&Method_MaterialCollectionMenu_EndShowServantEquip__);
    sub_1D0F0B4(&Method_MaterialCollectionMenu_EndShowServant__);
    sub_1D0F0B4(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4E7265D = 1;
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
      v8 = materialCollectionServantListViewManager;
      if ( materialCollectionServantListViewManager->fields.dragParentObject )
      {
        dropList = (ServantEntity_o *)materialCollectionServantListViewManager->fields.dropList;
        if ( dropList )
        {
          IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip(dropList, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          dragParentObject = (UserServantCollectionEntity_o *)v8->fields.dragParentObject;
          v13 = (CommonUI_o *)Instance;
          if ( IsKeepServantEquip )
          {
            v14 = (ServantStatusDialog_EndDelegate_o *)sub_1D0F300(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v14,
              (Il2CppObject *)this,
              Method_MaterialCollectionMenu_EndShowServantEquip__,
              0);
            if ( v13 )
            {
              CommonUI__OpenServantStatusDialog_32098360(v13, 2, dragParentObject, v14, 0);
              return;
            }
LABEL_19:
            sub_1D0F30C(materialCollectionServantListViewManager, *(_QWORD *)&kind);
          }
        }
        else
        {
          v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          dragParentObject = (UserServantCollectionEntity_o *)v8->fields.dragParentObject;
          v13 = (CommonUI_o *)v19;
        }
        v20 = (ServantStatusDialog_ResultDelegate_o *)sub_1D0F300(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v20,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServant__,
          0);
        if ( !v13 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_32098824(v13, 2, dragParentObject, v20, 0);
      }
      else if ( materialCollectionServantListViewManager->fields.sortKindButton )
      {
        v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sortKindButton = (UserCommandCodeCollectionEntity_o *)v8->fields.sortKindButton;
        v17 = (CommonUI_o *)v15;
        v18 = (ServantStatusDialog_EndDelegate_o *)sub_1D0F300(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v18,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServantEquip__,
          0);
        if ( !v17 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_32099744(v17, 2, sortKindButton, v18, 0, 0);
      }
    }
  }
}


void MaterialCollectionMenu__OnStartClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4E72656 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_MaterialCollectionMenu_EndClose__);
    byte_4E72656 = 1;
  }
  v3 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v3, 0);
}


void MaterialCollectionMenu__OnStartOpen(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4E72653 & 1) == 0 )
  {
    sub_1D0F0B4(&System_Action_TypeInfo);
    sub_1D0F0B4(&Method_MaterialCollectionMenu_EndOpen__);
    byte_4E72653 = 1;
  }
  v3 = (System_Action_o *)sub_1D0F300(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v3, 0);
}


void MaterialCollectionMenu__Open(
        MaterialCollectionMenu_o *this,
        System_Action_o *opened_act,
        MaterialCollectionMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  struct System_Int32_array *NewList; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x2

  if ( (byte_4E72652 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_10084/*"OnStartOpen"*/);
    byte_4E72652 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = opened_act;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.mOpenedAct,
      (int32_t)opened_act,
      (int32_t)callback,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    this->fields.callbackFunc = callback;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_16;
    NewList = UserServantCollectionMaster__GetNewList((UserServantCollectionMaster_o *)Instance, 0);
    this->fields.newSvtIdList = NewList;
    sub_1D0F058(
      (GrandQuestFolderBoardItem_o *)&this->fields.newSvtIdList,
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
      sub_1D0F30C(Instance, v18);
    }
    MaterialCollectionServantListViewManager__SetMode_34445828(
      (MaterialCollectionServantListViewManager_o *)Instance,
      1,
      v28);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10084/*"OnStartOpen"*/,
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
  bool v7; // w27
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x24
  long double inited; // q0
  float *v12; // x8
  float v13; // s12
  float v14; // s13
  float v15; // s14
  float v16; // s15
  struct UICommonButton_o *servantTabButton; // x8
  float *v18; // x9
  float v19; // s10
  float v20; // s11
  float v21; // s8
  float v22; // s9
  __int64 *v23; // x8
  __int64 *v24; // x8
  bool v25; // w22
  bool v26; // w21
  UserServantCollectionEntity_array *CollectionList; // x0
  UILabel_o *servantTabLabel; // x25
  UserServantCollectionEntity_array *v29; // x26
  System_String_o *v30; // x27
  Il2CppObject *v31; // x28
  Il2CppObject *v32; // x0
  float v33; // s3
  float v34; // s2
  float v35; // s1
  float v36; // s0 OVERLAPPED
  bool v37; // w27
  System_String_o **v38; // x8
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
  float v49; // s0 OVERLAPPED
  System_String_o **v50; // x8
  __int64 *v51; // x8
  UserCommandCodeCollectionEntity_array *v52; // x0
  UILabel_o *commandCodeTabLabel; // x21
  UserCommandCodeCollectionEntity_array *v54; // x22
  System_String_o *v55; // x23
  Il2CppObject *v56; // x24
  Il2CppObject *v57; // x0
  const MethodInfo *v58; // x2
  int32_t v59; // w1
  struct MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x21
  MaterialCollectionServantListViewManager_CallbackFunc_o *v61; // x22
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  int32_t v68; // w1
  UserCommandCodeCollectionMaster_o *v69; // [xsp+8h] [xbp-B8h]
  int max_length; // [xsp+10h] [xbp-B0h] BYREF
  int32_t v71; // [xsp+14h] [xbp-ACh] BYREF
  int32_t findSum[2]; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E72657 & 1) == 0 )
  {
    sub_1D0F0B4(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_1D0F0B4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1D0F0B4(&int_TypeInfo);
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    sub_1D0F0B4(&Method_MaterialCollectionMenu_OnSelectServant__);
    sub_1D0F0B4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1D0F0B4(&StringLiteral_17823/*"btn_txt_craftessence_off"*/);
    sub_1D0F0B4(&StringLiteral_17863/*"btn_txt_servant_off"*/);
    sub_1D0F0B4(&StringLiteral_17819/*"btn_txt_cc_off"*/);
    sub_1D0F0B4(&StringLiteral_17704/*"btn_bg_12"*/);
    sub_1D0F0B4(&StringLiteral_17820/*"btn_txt_cc_on"*/);
    sub_1D0F0B4(&StringLiteral_17864/*"btn_txt_servant_on"*/);
    sub_1D0F0B4(&StringLiteral_17706/*"btn_bg_19"*/);
    sub_1D0F0B4(&StringLiteral_3376/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_1D0F0B4(&StringLiteral_17824/*"btn_txt_craftessence_on"*/);
    sub_1D0F0B4(&StringLiteral_3377/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_1D0F0B4(&StringLiteral_3378/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    byte_4E72657 = 1;
  }
  *(_QWORD *)findSum = 0;
  v7 = !this->fields.isInitTab;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3BAC684 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v69 = (UserCommandCodeCollectionMaster_o *)DataManager__GetMasterData_object_(
                                               Instance,
                                               (const MethodInfo_324F1B8 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4E71D15 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    byte_4E71D15 = 1;
  }
  Instance = (DataManager_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager_TypeInfo;
  }
  v12 = *(float **)&Instance[1].fields._DispLog;
  v13 = v12[20];
  v14 = v12[21];
  v15 = v12[22];
  v16 = v12[23];
  if ( !byte_4E71D16 )
  {
    sub_1D0F0B4(&LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager_TypeInfo;
    byte_4E71D16 = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    inited = j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_88;
  v18 = *(float **)&Instance[1].fields._DispLog;
  v20 = v18[24];
  v19 = v18[25];
  v22 = v18[26];
  v21 = v18[27];
  ((void (__fastcall *)(struct UICommonButton_o *__return_ptr, struct UICommonButton_o *, __int64, const MethodInfo *, long double))servantTabButton->klass->vtable._5_set_isEnabled.methodPtr)(
    servantTabButton,
    this->fields.servantTabButton,
    1,
    servantTabButton->klass->vtable._5_set_isEnabled.method,
    inited);
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
  v23 = &StringLiteral_17706/*"btn_bg_19"*/;
  if ( kind )
    v23 = &StringLiteral_17704/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v23, 0);
  Instance = (DataManager_o *)this->fields.servantTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v24 = &StringLiteral_17864/*"btn_txt_servant_on"*/;
  v25 = isInit;
  if ( kind )
    v24 = &StringLiteral_17863/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v24, 0);
  if ( !MasterData_object )
    goto LABEL_88;
  v26 = v7;
  CollectionList = UserServantCollectionMaster__getCollectionList(
                     (UserServantCollectionMaster_o *)MasterData_object,
                     &findSum[1],
                     findSum,
                     0,
                     1,
                     0);
  servantTabLabel = this->fields.servantTabLabel;
  v29 = CollectionList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3377/*"CHARA_GRAPH_TAB_SERVANT"*/, 0);
  v71 = findSum[0];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
  if ( !v29 )
    goto LABEL_88;
  v31 = (Il2CppObject *)Instance;
  max_length = v29->max_length;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &max_length);
  Instance = (DataManager_o *)System_String__Format_65604080(v30, v31, v32, 0);
  if ( !servantTabLabel )
    goto LABEL_88;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.servantTabLabel;
  v33 = v21;
  v34 = v22;
  v35 = v19;
  v36 = v20;
  if ( kind )
  {
    v33 = v16;
    v34 = v15;
    v35 = v14;
    v36 = v13;
  }
  if ( !Instance )
    goto LABEL_88;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v36, 0);
  Instance = (DataManager_o *)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_88;
  v37 = v26 || v25;
  ((void (__fastcall *)(DataManager_o *, _QWORD, bool, Il2CppClass **))Instance->klass[1]._1.nestedTypes)(
    Instance,
    0,
    v26 || v25,
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
  v38 = (System_String_o **)(kind == 1 ? &StringLiteral_17706/*"btn_bg_19"*/ : &StringLiteral_17704/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v38, 0);
  Instance = (DataManager_o *)this->fields.servantEquipTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v39 = &StringLiteral_17824/*"btn_txt_craftessence_on"*/;
  if ( kind != 1 )
    v39 = &StringLiteral_17823/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v39, 0);
  v40 = UserServantCollectionMaster__getCollectionList(
          (UserServantCollectionMaster_o *)MasterData_object,
          &findSum[1],
          findSum,
          1,
          0,
          0);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v42 = v40;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3378/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0);
  v71 = findSum[0];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
  if ( !v42 )
    goto LABEL_88;
  v44 = (Il2CppObject *)Instance;
  max_length = v42->max_length;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &max_length);
  Instance = (DataManager_o *)System_String__Format_65604080(v43, v44, v45, 0);
  if ( !servantEquipTabLabel )
    goto LABEL_88;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.servantEquipTabLabel;
  v46 = v21;
  v47 = v22;
  v48 = v19;
  v49 = v20;
  if ( kind != 1 )
  {
    v46 = v16;
    v47 = v15;
    v48 = v14;
    v49 = v13;
  }
  if ( !Instance )
    goto LABEL_88;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v49, 0);
  Instance = (DataManager_o *)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_88;
  ((void (__fastcall *)(DataManager_o *, _QWORD, bool, Il2CppClass **))Instance->klass[1]._1.nestedTypes)(
    Instance,
    0,
    v26 || v25,
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
  v50 = (System_String_o **)(kind == 2 ? &StringLiteral_17706/*"btn_bg_19"*/ : &StringLiteral_17704/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v50, 0);
  Instance = (DataManager_o *)this->fields.commandCodeTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v51 = &StringLiteral_17820/*"btn_txt_cc_on"*/;
  if ( kind != 2 )
    v51 = &StringLiteral_17819/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v51, 0);
  Instance = (DataManager_o *)v69;
  if ( !v69 )
    goto LABEL_88;
  v52 = UserCommandCodeCollectionMaster__getCollectionList(v69, &findSum[1], findSum, 0);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v54 = v52;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v55 = LocalizationManager__Get((System_String_o *)StringLiteral_3376/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0);
  v71 = findSum[0];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v71);
  if ( !v54 )
    goto LABEL_88;
  v56 = (Il2CppObject *)Instance;
  max_length = v54->max_length;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &max_length);
  Instance = (DataManager_o *)System_String__Format_65604080(v55, v56, v57, 0);
  if ( !commandCodeTabLabel )
    goto LABEL_88;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0);
  Instance = (DataManager_o *)this->fields.commandCodeTabLabel;
  if ( kind != 2 )
  {
    v21 = v16;
    v22 = v15;
    v19 = v14;
    v20 = v13;
  }
  if ( !Instance )
    goto LABEL_88;
  v73.fields.r = v20;
  v73.fields.g = v19;
  v73.fields.b = v22;
  v73.fields.a = v21;
  UILabel__set_effectColor((UILabel_o *)Instance, v73, 0);
  Instance = (DataManager_o *)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_88;
  Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, _QWORD, bool, Il2CppClass **))Instance->klass[1]._1.nestedTypes)(
                                Instance,
                                0,
                                v37,
                                Instance->klass[1]._1.implementedInterfaces);
  if ( !v37 && this->fields.tabKind == kind )
    goto LABEL_82;
  if ( kind == 2 )
  {
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v59 = 3;
  }
  else if ( kind == 1 )
  {
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v59 = 1;
  }
  else
  {
    if ( kind )
      goto LABEL_82;
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v59 = 0;
  }
  MaterialCollectionServantListViewManager__CreateList((MaterialCollectionServantListViewManager_o *)Instance, v59, v58);
LABEL_82:
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( this->fields.state != 2 )
  {
    if ( materialCollectionServantListViewManager )
    {
      v68 = 1;
      goto LABEL_87;
    }
LABEL_88:
    sub_1D0F30C(Instance, v9);
  }
  v61 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_1D0F300(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v61,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    0);
  if ( !materialCollectionServantListViewManager )
    goto LABEL_88;
  materialCollectionServantListViewManager->fields.callbackFunc = v61;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&materialCollectionServantListViewManager->fields.callbackFunc,
    (int32_t)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v68 = 2;
LABEL_87:
  MaterialCollectionServantListViewManager__SetMode_34445828(materialCollectionServantListViewManager, v68, v58);
  this->fields.isInitTab = 1;
  this->fields.tabKind = kind;
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
  __int64 v9; // x0
  bool v10; // zf
  MaterialCollectionMenu_o *v11; // x0
  MaterialCollectionMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4E72650 & 1) == 0 )
  {
    sub_1D0F0B4(&MaterialCollectionMenu_CallbackFunc_TypeInfo);
    byte_4E72650 = 1;
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
    v9 = sub_1D6AE88(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionMenu_o *)sub_1D0F6A8(v8);
  MaterialCollectionMenu__remove_callbackFunc(v11, v12, v13);
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
  __int64 v9; // x0
  bool v10; // zf
  MaterialCollectionServantListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4E72651 & 1) == 0 )
  {
    sub_1D0F0B4(&MaterialCollectionMenu_CallbackFunc_TypeInfo);
    byte_4E72651 = 1;
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
    v9 = sub_1D6AE88(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionServantListViewManager_o *)sub_1D0F6A8(v8);
  MaterialCollectionServantListViewManager__DestroyList(v11, v12);
}


void MaterialCollectionMenu_CallbackFunc___ctor(
        MaterialCollectionMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1D0F174(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1D0F328(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1D0F1DC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B35EE8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B35EA0;
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
  if ( (byte_4E72662 & 1) == 0 )
  {
    sub_1D0F0B4(&MaterialCollectionMenu_ResultKind_TypeInfo);
    byte_4E72662 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(MaterialCollectionMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1D0F068(this, v9, callback, object);
}


void MaterialCollectionMenu_CallbackFunc__EndInvoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1D0F06C(result, 0, method);
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