void MaterialCollectionMenu___ctor(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C3E0F2 & 1) == 0 )
  {
    sub_1C37058(&BaseMenu_TypeInfo);
    byte_4C3E0F2 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void MaterialCollectionMenu__Callback(MaterialCollectionMenu_o *this, int32_t result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct MaterialCollectionMenu_CallbackFunc_o *v5; // x20
  struct MaterialCollectionMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C36FFC(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      (unsigned int)result,
      v5->fields.method);
  }
}


void MaterialCollectionMenu__Close(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCollectionMenu__Close_33255860(this, 0, v2);
}


void MaterialCollectionMenu__Close_33255860(
        MaterialCollectionMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C3E0E6 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9965/*"OnStartClose"*/);
    byte_4C3E0E6 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9965/*"OnStartClose"*/, 0.1, 0);
}


void MaterialCollectionMenu__EndClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v7; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  MaterialCollectionMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v7 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C36FFC(p_closeCallbackFunc, 0, v4, v5);
    ((void (__fastcall *)(intptr_t, intptr_t))v7->fields.invoke_impl)(v7->fields.method_code, v7->fields.method);
  }
}


void MaterialCollectionMenu__EndCloseShowServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  MaterialCollectionServantListViewManager_o *v4; // x20
  MaterialCollectionServantListViewManager_CallbackFunc_o *v5; // x21

  if ( (byte_4C3E0F1 & 1) == 0 )
  {
    sub_1C37058(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_MaterialCollectionMenu_OnSelectServant__);
    byte_4C3E0F1 = 1;
  }
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( !materialCollectionServantListViewManager
    || (MaterialCollectionServantListViewManager__ModifyItem(
          materialCollectionServantListViewManager,
          this->fields.selectIndex,
          0),
        v4 = this->fields.materialCollectionServantListViewManager,
        v5 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_1C372A4(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo),
        MaterialCollectionServantListViewManager_CallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_OnSelectServant__,
          0),
        !v4) )
  {
    sub_1C372B4(materialCollectionServantListViewManager);
  }
  MaterialCollectionServantListViewManager__SetMode(v4, 2, v5, 0);
}


void MaterialCollectionMenu__EndCloseShowServantuestQuestJump(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  this->fields.state = 3;
  MaterialCollectionMenu__Callback(this, 1, v2);
}


void MaterialCollectionMenu__EndOpen(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x20
  MaterialCollectionServantListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C3E0E5 & 1) == 0 )
  {
    sub_1C37058(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_MaterialCollectionMenu_OnSelectServant__);
    byte_4C3E0E5 = 1;
  }
  this->fields.state = 2;
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  v4 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_1C372A4(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    0);
  if ( !materialCollectionServantListViewManager )
    sub_1C372B4(v5);
  MaterialCollectionServantListViewManager__SetMode(materialCollectionServantListViewManager, 2, v4, 0);
  ActionExtensions__Call(this->fields.mOpenedAct, 0);
}


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

  if ( (byte_4C3E0EF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MaterialCollectionMenu_EndCloseShowServant__);
    sub_1C37058(&Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E0EF = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    v10 = Method_MaterialCollectionMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    v10 = Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__;
  }
  v12 = v9;
  System_Action___ctor(v9, (Il2CppObject *)this, v10, 0);
  if ( !Instance )
LABEL_11:
    sub_1C372B4(materialCollectionServantListViewManager);
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

  if ( (byte_4C3E0F0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MaterialCollectionMenu_EndCloseShowServant__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E0F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndCloseShowServant__, 0);
  if ( !Instance )
    sub_1C372B4(v6);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v5, 0);
}


void MaterialCollectionMenu__Init(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  this->fields.state = 0;
  if ( !materialCollectionServantListViewManager
    || (MaterialCollectionServantListViewManager__DestroyList(materialCollectionServantListViewManager, 0),
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
    sub_1C372B4(materialCollectionServantListViewManager);
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

  if ( (byte_4C3E0EA & 1) == 0 )
  {
    sub_1C37058(&Method_MaterialCollectionMenu_OnClickCancel__);
    byte_4C3E0EA = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCollectionMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_MaterialCollectionMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    MaterialCollectionMenu__Callback(this, 0, v5);
  }
}


void MaterialCollectionMenu__OnClickDecide(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C3E0E9 & 1) == 0 )
  {
    sub_1C37058(&Method_MaterialCollectionMenu_OnClickDecide__);
    byte_4C3E0E9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCollectionMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_MaterialCollectionMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    MaterialCollectionMenu__Callback(this, 0, v5);
  }
}


void MaterialCollectionMenu__OnClickTabCommandCode(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4C3E0ED & 1) == 0 )
  {
    sub_1C37058(&Method_MaterialCollectionMenu_OnClickTabCommandCode__);
    byte_4C3E0ED = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_MaterialCollectionMenu_OnClickTabCommandCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    MaterialCollectionMenu__SetTabKind(this, 2, 0, v5);
  }
}


void MaterialCollectionMenu__OnClickTabServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4C3E0EB & 1) == 0 )
  {
    sub_1C37058(&Method_MaterialCollectionMenu_OnClickTabServant__);
    byte_4C3E0EB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_MaterialCollectionMenu_OnClickTabServant__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    MaterialCollectionMenu__SetTabKind(this, 0, 0, v5);
  }
}


void MaterialCollectionMenu__OnClickTabServantEquip(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4C3E0EC & 1) == 0 )
  {
    sub_1C37058(&Method_MaterialCollectionMenu_OnClickTabServantEquip__);
    byte_4C3E0EC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_MaterialCollectionMenu_OnClickTabServantEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    MaterialCollectionMenu__SetTabKind(this, 1, 0, v5);
  }
}


void MaterialCollectionMenu__OnMoveEnd(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  ;
}


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

  if ( (byte_4C3E0EE & 1) == 0 )
  {
    sub_1C37058(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_1C37058(&Method_MaterialCollectionMenu_EndShowServantEquip__);
    sub_1C37058(&Method_MaterialCollectionMenu_EndShowServant__);
    sub_1C37058(&ServantStatusDialog_ResultDelegate_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E0EE = 1;
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
                                                                                                 0);
      if ( !materialCollectionServantListViewManager )
        goto LABEL_19;
      v8 = materialCollectionServantListViewManager;
      if ( materialCollectionServantListViewManager->fields.dragParentObject )
      {
        dropList = (ServantEntity_o *)materialCollectionServantListViewManager->fields.dropList;
        if ( dropList )
        {
          IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip(dropList, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          dragParentObject = (UserServantCollectionEntity_o *)v8->fields.dragParentObject;
          v13 = (CommonUI_o *)Instance;
          if ( IsKeepServantEquip )
          {
            v14 = (ServantStatusDialog_EndDelegate_o *)sub_1C372A4(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v14,
              (Il2CppObject *)this,
              Method_MaterialCollectionMenu_EndShowServantEquip__,
              0);
            if ( v13 )
            {
              CommonUI__OpenServantStatusDialog_31219916(v13, 2, dragParentObject, v14, 0);
              return;
            }
LABEL_19:
            sub_1C372B4(materialCollectionServantListViewManager);
          }
        }
        else
        {
          v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          dragParentObject = (UserServantCollectionEntity_o *)v8->fields.dragParentObject;
          v13 = (CommonUI_o *)v19;
        }
        v20 = (ServantStatusDialog_ResultDelegate_o *)sub_1C372A4(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v20,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServant__,
          0);
        if ( !v13 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_31220380(v13, 2, dragParentObject, v20, 0);
      }
      else if ( materialCollectionServantListViewManager->fields.sortKindButton )
      {
        v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        sortKindButton = (UserCommandCodeCollectionEntity_o *)v8->fields.sortKindButton;
        v17 = (CommonUI_o *)v15;
        v18 = (ServantStatusDialog_EndDelegate_o *)sub_1C372A4(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v18,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServantEquip__,
          0);
        if ( !v17 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_31221300(v17, 2, sortKindButton, v18, 0, 0);
      }
    }
  }
}


void MaterialCollectionMenu__OnStartClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C3E0E7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MaterialCollectionMenu_EndClose__);
    byte_4C3E0E7 = 1;
  }
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v3, 0);
}


void MaterialCollectionMenu__OnStartOpen(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C3E0E4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MaterialCollectionMenu_EndOpen__);
    byte_4C3E0E4 = 1;
  }
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v3, 0);
}


void MaterialCollectionMenu__Open(
        MaterialCollectionMenu_o *this,
        System_Action_o *opened_act,
        MaterialCollectionMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  DataManager_o *Instance; // x0
  struct System_Int32_array *NewList; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3

  if ( (byte_4C3E0E3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_9966/*"OnStartOpen"*/);
    byte_4C3E0E3 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = opened_act;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mOpenedAct, (int32_t)opened_act, (int32_t)callback, method);
    this->fields.callbackFunc = callback;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v7, v8);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_16;
    NewList = UserServantCollectionMaster__GetNewList((UserServantCollectionMaster_o *)Instance, 0);
    this->fields.newSvtIdList = NewList;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.newSvtIdList, (int32_t)NewList, v11, v12);
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
    MaterialCollectionServantListViewManager__CreateList((MaterialCollectionServantListViewManager_o *)Instance, 0, 0);
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
          MaterialCollectionMenu__SetTabKind(this, this->fields.tabKind, 1, v13),
          Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager,
          this->fields.state = 1,
          !Instance) )
    {
LABEL_16:
      sub_1C372B4(Instance);
    }
    MaterialCollectionServantListViewManager__SetMode_33278768(
      (MaterialCollectionServantListViewManager_o *)Instance,
      1,
      0);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9966/*"OnStartOpen"*/,
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
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x24
  long double inited; // q0
  float *v11; // x8
  float v12; // s12
  float v13; // s13
  float v14; // s14
  float v15; // s15
  struct UICommonButton_o *servantTabButton; // x8
  float *v17; // x9
  float v18; // s10
  float v19; // s11
  float v20; // s8
  float v21; // s9
  __int64 *v22; // x8
  __int64 *v23; // x8
  bool v24; // w22
  bool v25; // w21
  UserServantCollectionEntity_array *CollectionList; // x0
  UILabel_o *servantTabLabel; // x25
  UserServantCollectionEntity_array *v28; // x26
  System_String_o *v29; // x27
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x5
  __int64 v40; // x6
  __int64 v41; // x7
  Il2CppObject *v42; // x28
  Il2CppObject *v43; // x0
  float v44; // s3
  float v45; // s2
  float v46; // s1
  float v47; // s0 OVERLAPPED
  bool v48; // w27
  System_String_o **v49; // x8
  __int64 *v50; // x8
  UserServantCollectionEntity_array *v51; // x0
  UILabel_o *servantEquipTabLabel; // x23
  UserServantCollectionEntity_array *v53; // x24
  System_String_o *v54; // x25
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  __int64 v58; // x5
  __int64 v59; // x6
  __int64 v60; // x7
  __int64 v61; // x2
  __int64 v62; // x3
  __int64 v63; // x4
  __int64 v64; // x5
  __int64 v65; // x6
  __int64 v66; // x7
  Il2CppObject *v67; // x26
  Il2CppObject *v68; // x0
  float v69; // s3
  float v70; // s2
  float v71; // s1
  float v72; // s0 OVERLAPPED
  System_String_o **v73; // x8
  __int64 *v74; // x8
  UserCommandCodeCollectionEntity_array *v75; // x0
  UILabel_o *commandCodeTabLabel; // x21
  UserCommandCodeCollectionEntity_array *v77; // x22
  System_String_o *v78; // x23
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  __int64 v82; // x5
  __int64 v83; // x6
  __int64 v84; // x7
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  __int64 v88; // x5
  __int64 v89; // x6
  __int64 v90; // x7
  Il2CppObject *v91; // x24
  Il2CppObject *v92; // x0
  int32_t v93; // w1
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x21
  MaterialCollectionServantListViewManager_CallbackFunc_o *v95; // x22
  UserCommandCodeCollectionMaster_o *v96; // [xsp+8h] [xbp-B8h]
  int max_length; // [xsp+10h] [xbp-B0h] BYREF
  int32_t v98; // [xsp+14h] [xbp-ACh] BYREF
  int32_t findSum[2]; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3E0E8 & 1) == 0 )
  {
    sub_1C37058(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_MaterialCollectionMenu_OnSelectServant__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_17558/*"btn_txt_craftessence_off"*/);
    sub_1C37058(&StringLiteral_17598/*"btn_txt_servant_off"*/);
    sub_1C37058(&StringLiteral_17554/*"btn_txt_cc_off"*/);
    sub_1C37058(&StringLiteral_17444/*"btn_bg_12"*/);
    sub_1C37058(&StringLiteral_17555/*"btn_txt_cc_on"*/);
    sub_1C37058(&StringLiteral_17599/*"btn_txt_servant_on"*/);
    sub_1C37058(&StringLiteral_17446/*"btn_bg_19"*/);
    sub_1C37058(&StringLiteral_3341/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/);
    sub_1C37058(&StringLiteral_17559/*"btn_txt_craftessence_on"*/);
    sub_1C37058(&StringLiteral_3342/*"CHARA_GRAPH_TAB_SERVANT"*/);
    sub_1C37058(&StringLiteral_3343/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/);
    byte_4C3E0E8 = 1;
  }
  *(_QWORD *)findSum = 0;
  v7 = !this->fields.isInitTab;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v96 = (UserCommandCodeCollectionMaster_o *)DataManager__GetMasterData_object_(
                                               (DataManager_o *)Instance,
                                               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4C3D77E )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    byte_4C3D77E = 1;
  }
  Instance = (__int64)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (__int64)LocalizationManager_TypeInfo;
  }
  v11 = *(float **)(Instance + 184);
  v12 = v11[20];
  v13 = v11[21];
  v14 = v11[22];
  v15 = v11[23];
  if ( !byte_4C3D77F )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    Instance = (__int64)LocalizationManager_TypeInfo;
    byte_4C3D77F = 1;
  }
  if ( !*(_DWORD *)(Instance + 224) )
  {
    inited = j_il2cpp_runtime_class_init_0(Instance);
    Instance = (__int64)LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_88;
  v17 = *(float **)(Instance + 184);
  v19 = v17[24];
  v18 = v17[25];
  v21 = v17[26];
  v20 = v17[27];
  ((void (__fastcall *)(struct UICommonButton_o *__return_ptr, struct UICommonButton_o *, __int64, const MethodInfo *, long double))servantTabButton->klass->vtable._5_set_isEnabled.methodPtr)(
    servantTabButton,
    this->fields.servantTabButton,
    1,
    servantTabButton->klass->vtable._5_set_isEnabled.method,
    inited);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, kind != 0, 0);
  Instance = (__int64)this->fields.servantTabBoxCollider;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Instance, kind != 0, 0);
  Instance = (__int64)this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_88;
  v22 = &StringLiteral_17446/*"btn_bg_19"*/;
  if ( kind )
    v22 = &StringLiteral_17444/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v22, 0);
  Instance = (__int64)this->fields.servantTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v23 = &StringLiteral_17599/*"btn_txt_servant_on"*/;
  v24 = isInit;
  if ( kind )
    v23 = &StringLiteral_17598/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v23, 0);
  if ( !MasterData_object )
    goto LABEL_88;
  v25 = v7;
  CollectionList = UserServantCollectionMaster__getCollectionList(
                     (UserServantCollectionMaster_o *)MasterData_object,
                     &findSum[1],
                     findSum,
                     0,
                     1,
                     0);
  servantTabLabel = this->fields.servantTabLabel;
  v28 = CollectionList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3342/*"CHARA_GRAPH_TAB_SERVANT"*/, 0);
  v98 = findSum[0];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v98, v30, v31, v32, v33, v34, v35);
  if ( !v28 )
    goto LABEL_88;
  v42 = (Il2CppObject *)Instance;
  max_length = v28->max_length;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &max_length, v36, v37, v38, v39, v40, v41);
  Instance = (__int64)System_String__Format_63602948(v29, v42, v43, 0);
  if ( !servantTabLabel )
    goto LABEL_88;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.servantTabLabel;
  v44 = v20;
  v45 = v21;
  v46 = v18;
  v47 = v19;
  if ( kind )
  {
    v44 = v15;
    v45 = v14;
    v46 = v13;
    v47 = v12;
  }
  if ( !Instance )
    goto LABEL_88;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v47, 0);
  Instance = (__int64)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_88;
  v48 = v25 || v24;
  (*(void (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
    Instance,
    0,
    v25 || v24,
    *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_88;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, kind != 1, 0);
  Instance = (__int64)this->fields.servantEquipTabBoxCollider;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Instance, kind != 1, 0);
  Instance = (__int64)this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_88;
  v49 = (System_String_o **)(kind == 1 ? &StringLiteral_17446/*"btn_bg_19"*/ : &StringLiteral_17444/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v49, 0);
  Instance = (__int64)this->fields.servantEquipTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v50 = &StringLiteral_17559/*"btn_txt_craftessence_on"*/;
  if ( kind != 1 )
    v50 = &StringLiteral_17558/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v50, 0);
  v51 = UserServantCollectionMaster__getCollectionList(
          (UserServantCollectionMaster_o *)MasterData_object,
          &findSum[1],
          findSum,
          1,
          0,
          0);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v53 = v51;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_3343/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0);
  v98 = findSum[0];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v98, v55, v56, v57, v58, v59, v60);
  if ( !v53 )
    goto LABEL_88;
  v67 = (Il2CppObject *)Instance;
  max_length = v53->max_length;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &max_length, v61, v62, v63, v64, v65, v66);
  Instance = (__int64)System_String__Format_63602948(v54, v67, v68, 0);
  if ( !servantEquipTabLabel )
    goto LABEL_88;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.servantEquipTabLabel;
  v69 = v20;
  v70 = v21;
  v71 = v18;
  v72 = v19;
  if ( kind != 1 )
  {
    v69 = v15;
    v70 = v14;
    v71 = v13;
    v72 = v12;
  }
  if ( !Instance )
    goto LABEL_88;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v72, 0);
  Instance = (__int64)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_88;
  (*(void (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
    Instance,
    0,
    v25 || v24,
    *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_88;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)Instance + 392LL))(
    Instance,
    1,
    *(_QWORD *)(*(_QWORD *)Instance + 400LL));
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, kind != 2, 0);
  Instance = (__int64)this->fields.commandCodeTabBoxCollider;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Instance, kind != 2, 0);
  Instance = (__int64)this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_88;
  v73 = (System_String_o **)(kind == 2 ? &StringLiteral_17446/*"btn_bg_19"*/ : &StringLiteral_17444/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v73, 0);
  Instance = (__int64)this->fields.commandCodeTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v74 = &StringLiteral_17555/*"btn_txt_cc_on"*/;
  if ( kind != 2 )
    v74 = &StringLiteral_17554/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v74, 0);
  Instance = (__int64)v96;
  if ( !v96 )
    goto LABEL_88;
  v75 = UserCommandCodeCollectionMaster__getCollectionList(v96, &findSum[1], findSum, 0);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v77 = v75;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v78 = LocalizationManager__Get((System_String_o *)StringLiteral_3341/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0);
  v98 = findSum[0];
  Instance = j_il2cpp_value_box_0(int_TypeInfo, &v98, v79, v80, v81, v82, v83, v84);
  if ( !v77 )
    goto LABEL_88;
  v91 = (Il2CppObject *)Instance;
  max_length = v77->max_length;
  v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &max_length, v85, v86, v87, v88, v89, v90);
  Instance = (__int64)System_String__Format_63602948(v78, v91, v92, 0);
  if ( !commandCodeTabLabel )
    goto LABEL_88;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0);
  Instance = (__int64)this->fields.commandCodeTabLabel;
  if ( kind != 2 )
  {
    v20 = v15;
    v21 = v14;
    v18 = v13;
    v19 = v12;
  }
  if ( !Instance )
    goto LABEL_88;
  v100.fields.r = v19;
  v100.fields.g = v18;
  v100.fields.b = v21;
  v100.fields.a = v20;
  UILabel__set_effectColor((UILabel_o *)Instance, v100, 0);
  Instance = (__int64)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_88;
  Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, bool, _QWORD))(*(_QWORD *)Instance + 536LL))(
               Instance,
               0,
               v48,
               *(_QWORD *)(*(_QWORD *)Instance + 544LL));
  if ( !v48 && this->fields.tabKind == kind )
    goto LABEL_82;
  if ( kind == 2 )
  {
    Instance = (__int64)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v93 = 3;
  }
  else if ( kind == 1 )
  {
    Instance = (__int64)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v93 = 1;
  }
  else
  {
    if ( kind )
      goto LABEL_82;
    Instance = (__int64)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v93 = 0;
  }
  MaterialCollectionServantListViewManager__CreateList((MaterialCollectionServantListViewManager_o *)Instance, v93, 0);
LABEL_82:
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( this->fields.state != 2 )
  {
    if ( materialCollectionServantListViewManager )
    {
      MaterialCollectionServantListViewManager__SetMode_33278768(
        this->fields.materialCollectionServantListViewManager,
        1,
        0);
      goto LABEL_87;
    }
LABEL_88:
    sub_1C372B4(Instance);
  }
  v95 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_1C372A4(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v95,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    0);
  if ( !materialCollectionServantListViewManager )
    goto LABEL_88;
  MaterialCollectionServantListViewManager__SetMode(materialCollectionServantListViewManager, 2, v95, 0);
LABEL_87:
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

  if ( (byte_4C3E0E1 & 1) == 0 )
  {
    sub_1C37058(&MaterialCollectionMenu_CallbackFunc_TypeInfo);
    byte_4C3E0E1 = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionMenu_o *)sub_1C37574(v8);
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
  MaterialCollectionMenu_o *v11; // x0
  int32_t v12; // w1
  bool v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C3E0E2 & 1) == 0 )
  {
    sub_1C37058(&MaterialCollectionMenu_CallbackFunc_TypeInfo);
    byte_4C3E0E2 = 1;
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
    v9 = sub_1C712B0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionMenu_o *)sub_1C37574(v8);
  MaterialCollectionMenu__SetTabKind(v11, v12, v13, v14);
}


void MaterialCollectionMenu_CallbackFunc___ctor(
        MaterialCollectionMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A74544;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A744FC;
}


System_IAsyncResult_o *MaterialCollectionMenu_CallbackFunc__BeginInvoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-34h] BYREF

  v13 = result;
  if ( (byte_4C3E0F3 & 1) == 0 )
  {
    sub_1C37058(&MaterialCollectionMenu_ResultKind_TypeInfo);
    byte_4C3E0F3 = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(MaterialCollectionMenu_ResultKind_TypeInfo, &v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void MaterialCollectionMenu_CallbackFunc__EndInvoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
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