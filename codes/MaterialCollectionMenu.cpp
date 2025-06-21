void __fastcall MaterialCollectionMenu___ctor(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4B17710 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseMenu_TypeInfo, method);
    byte_4B17710 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall MaterialCollectionMenu__Callback(
        MaterialCollectionMenu_o *this,
        int32_t result,
        const MethodInfo *method)
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
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall MaterialCollectionMenu__Close(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCollectionMenu__Close_32524672(this, 0LL, v2);
}


void __fastcall MaterialCollectionMenu__Close_32524672(
        MaterialCollectionMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4B17704 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_9888/*"OnStartClose"*/, callback);
    byte_4B17704 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9888/*"OnStartClose"*/,
    0.1,
    0LL);
}


void __fastcall MaterialCollectionMenu__EndClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  MaterialCollectionMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCAF9C(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v8->fields.m_target)(
      v8->fields.original_method_info,
      *(_QWORD *)&v8->fields.extra_arg);
  }
}


void __fastcall MaterialCollectionMenu__EndCloseShowServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  struct MaterialCollectionServantListViewManager_o *v6; // x20
  MaterialCollectionServantListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4B1770F & 1) == 0 )
  {
    sub_1BCAFF8(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&Method_MaterialCollectionMenu_OnSelectServant__, v4);
    byte_4B1770F = 1;
  }
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( !materialCollectionServantListViewManager
    || (MaterialCollectionServantListViewManager__RequestListObject_32545444(
          materialCollectionServantListViewManager,
          4,
          v2),
        v6 = this->fields.materialCollectionServantListViewManager,
        v7 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_1BCB244(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo),
        MaterialCollectionServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_OnSelectServant__,
          v8),
        !v6) )
  {
    sub_1BCB254(materialCollectionServantListViewManager, method);
  }
  v6->fields.callbackFunc = v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields.callbackFunc, (int32_t)v7, v9, v10);
  MaterialCollectionServantListViewManager__SetMode_32529244(v6, 2, v11);
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
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2

  if ( (byte_4B17703 & 1) == 0 )
  {
    sub_1BCAFF8(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BCAFF8(&Method_MaterialCollectionMenu_OnSelectServant__, v3);
    byte_4B17703 = 1;
  }
  this->fields.state = 2;
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  v5 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_1BCB244(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    v6);
  if ( !materialCollectionServantListViewManager )
    sub_1BCB254(v7, v8);
  materialCollectionServantListViewManager->fields.callbackFunc = v5;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&materialCollectionServantListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v9,
    v10);
  MaterialCollectionServantListViewManager__SetMode_32529244(materialCollectionServantListViewManager, 2, v11);
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
  Il2CppObject *Instance; // x20
  System_Action_o *v12; // x0
  intptr_t v13; // w2
  ListViewManager_o *materialCollectionServantListViewManager; // x0
  System_Action_o *v15; // x21

  if ( (byte_4B1770D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_MaterialCollectionMenu_EndCloseShowServant__, v8);
    sub_1BCAFF8(&Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4B1770D = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    v13 = Method_MaterialCollectionMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    v13 = Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__;
  }
  v15 = v12;
  System_Action___ctor(v12, (Il2CppObject *)this, v13, 0LL);
  if ( !Instance )
LABEL_11:
    sub_1BCB254(materialCollectionServantListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionMenu__EndShowServantEquip(
        MaterialCollectionMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4B1770E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, isDecide);
    sub_1BCAFF8(&Method_MaterialCollectionMenu_EndCloseShowServant__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4B1770E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_1BCB254(v8, v9);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v7, 0LL);
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
    sub_1BCB254(materialCollectionServantListViewManager, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)materialCollectionServantListViewManager & 1, 0LL);
  this->fields.tabKind = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall MaterialCollectionMenu__OnClickCancel(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B17708 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_MaterialCollectionMenu_OnClickCancel__, method);
    byte_4B17708 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCollectionMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_MaterialCollectionMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    MaterialCollectionMenu__Callback(this, 0, v5);
  }
}


void __fastcall MaterialCollectionMenu__OnClickDecide(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B17707 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_MaterialCollectionMenu_OnClickDecide__, method);
    byte_4B17707 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCollectionMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_MaterialCollectionMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    MaterialCollectionMenu__Callback(this, 0, v5);
  }
}


void __fastcall MaterialCollectionMenu__OnClickTabCommandCode(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4B1770B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_MaterialCollectionMenu_OnClickTabCommandCode__, method);
    byte_4B1770B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_MaterialCollectionMenu_OnClickTabCommandCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    MaterialCollectionMenu__SetTabKind(this, 2, 0, v5);
  }
}


void __fastcall MaterialCollectionMenu__OnClickTabServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4B17709 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_MaterialCollectionMenu_OnClickTabServant__, method);
    byte_4B17709 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_MaterialCollectionMenu_OnClickTabServant__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    MaterialCollectionMenu__SetTabKind(this, 0, 0, v5);
  }
}


void __fastcall MaterialCollectionMenu__OnClickTabServantEquip(
        MaterialCollectionMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4B1770A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_MaterialCollectionMenu_OnClickTabServantEquip__, method);
    byte_4B1770A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_MaterialCollectionMenu_OnClickTabServantEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *materialCollectionServantListViewManager; // x0
  void *v12; // x20
  ServantEntity_o *v13; // x0
  bool IsKeepServantEquip; // w22
  Il2CppObject *Instance; // x0
  UserServantCollectionEntity_o *v16; // x20
  CommonUI_o *v17; // x21
  ServantStatusDialog_EndDelegate_o *v18; // x22
  Il2CppObject *v19; // x0
  UserCommandCodeCollectionEntity_o *v20; // x20
  CommonUI_o *v21; // x21
  ServantStatusDialog_EndDelegate_o *v22; // x22
  Il2CppObject *v23; // x0
  ServantStatusDialog_ResultDelegate_o *v24; // x22

  if ( (byte_4B1770C & 1) == 0 )
  {
    sub_1BCAFF8(&ServantStatusDialog_EndDelegate_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&Method_MaterialCollectionMenu_EndShowServantEquip__, v7);
    sub_1BCAFF8(&Method_MaterialCollectionMenu_EndShowServant__, v8);
    sub_1BCAFF8(&ServantStatusDialog_ResultDelegate_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_4B1770C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.selectIndex = index;
    if ( kind == 1 )
    {
      materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
      if ( !materialCollectionServantListViewManager )
        goto LABEL_19;
      materialCollectionServantListViewManager = MaterialCollectionServantListViewManager__GetItem(
                                                   (MaterialCollectionServantListViewManager_o *)materialCollectionServantListViewManager,
                                                   index,
                                                   *(const MethodInfo **)&index);
      if ( !materialCollectionServantListViewManager )
        goto LABEL_19;
      v12 = materialCollectionServantListViewManager;
      if ( *((_QWORD *)materialCollectionServantListViewManager + 14) )
      {
        v13 = (ServantEntity_o *)*((_QWORD *)materialCollectionServantListViewManager + 15);
        if ( v13 )
        {
          IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip(v13, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v16 = (UserServantCollectionEntity_o *)*((_QWORD *)v12 + 14);
          v17 = (CommonUI_o *)Instance;
          if ( IsKeepServantEquip )
          {
            v18 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
            ServantStatusDialog_EndDelegate___ctor(
              v18,
              (Il2CppObject *)this,
              Method_MaterialCollectionMenu_EndShowServantEquip__,
              0LL);
            if ( v17 )
            {
              CommonUI__OpenServantStatusDialog_30775452(v17, 2, v16, v18, 0LL);
              return;
            }
LABEL_19:
            sub_1BCB254(materialCollectionServantListViewManager, *(_QWORD *)&kind);
          }
        }
        else
        {
          v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v16 = (UserServantCollectionEntity_o *)*((_QWORD *)v12 + 14);
          v17 = (CommonUI_o *)v23;
        }
        v24 = (ServantStatusDialog_ResultDelegate_o *)sub_1BCB244(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v24,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServant__,
          0LL);
        if ( !v17 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_30775916(v17, 2, v16, v24, 0LL);
      }
      else if ( *((_QWORD *)materialCollectionServantListViewManager + 16) )
      {
        v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v20 = (UserCommandCodeCollectionEntity_o *)*((_QWORD *)v12 + 16);
        v21 = (CommonUI_o *)v19;
        v22 = (ServantStatusDialog_EndDelegate_o *)sub_1BCB244(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v22,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServantEquip__,
          0LL);
        if ( !v21 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_30776836(v21, 2, v20, v22, 0LL, 0LL);
      }
    }
  }
}


void __fastcall MaterialCollectionMenu__OnStartClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B17705 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_MaterialCollectionMenu_EndClose__, v3);
    byte_4B17705 = 1;
  }
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v4, 0LL);
}


void __fastcall MaterialCollectionMenu__OnStartOpen(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B17702 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_MaterialCollectionMenu_EndOpen__, v3);
    byte_4B17702 = 1;
  }
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v4, 0LL);
}


void __fastcall MaterialCollectionMenu__Open(
        MaterialCollectionMenu_o *this,
        System_Action_o *opened_act,
        MaterialCollectionMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct System_Int32_array *NewList; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2

  if ( (byte_4B17701 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, opened_act);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BCAFF8(&StringLiteral_9889/*"OnStartOpen"*/, v8);
    byte_4B17701 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = opened_act;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mOpenedAct, (int32_t)opened_act, (int32_t)callback, method);
    this->fields.callbackFunc = callback;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_16;
    NewList = UserServantCollectionMaster__GetNewList((UserServantCollectionMaster_o *)Instance, 0LL);
    this->fields.newSvtIdList = NewList;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.newSvtIdList, (int32_t)NewList, v14, v15);
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
    MaterialCollectionServantListViewManager__CreateList((MaterialCollectionServantListViewManager_o *)Instance, 0, v16);
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
          MaterialCollectionMenu__SetTabKind(this, this->fields.tabKind, 1, v17),
          Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager,
          this->fields.state = 1,
          !Instance) )
    {
LABEL_16:
      sub_1BCB254(Instance, v12);
    }
    MaterialCollectionServantListViewManager__SetMode_32529244(
      (MaterialCollectionServantListViewManager_o *)Instance,
      1,
      v18);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9889/*"OnStartOpen"*/,
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
  bool v24; // w27
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  Il2CppObject *MasterData_object; // x24
  long double inited; // q0
  float *v29; // x8
  float v30; // s12
  float v31; // s13
  float v32; // s14
  float v33; // s15
  struct UICommonButton_o *servantTabButton; // x8
  float *v35; // x9
  float v36; // s10
  float v37; // s11
  float v38; // s8
  float v39; // s9
  __int64 *v40; // x8
  __int64 *v41; // x8
  bool v42; // w22
  bool v43; // w21
  UserServantCollectionEntity_array *CollectionList; // x0
  UILabel_o *servantTabLabel; // x25
  UserServantCollectionEntity_array *v46; // x26
  System_String_o *v47; // x27
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x28
  Il2CppObject *v55; // x0
  float v56; // s3
  float v57; // s2
  float v58; // s1
  float v59; // s0
  bool v60; // w27
  System_String_o **v61; // x8
  __int64 *v62; // x8
  UserServantCollectionEntity_array *v63; // x0
  UILabel_o *servantEquipTabLabel; // x23
  UserServantCollectionEntity_array *v65; // x24
  System_String_o *v66; // x25
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  Il2CppObject *v73; // x26
  Il2CppObject *v74; // x0
  float v75; // s3
  float v76; // s2
  float v77; // s1
  float v78; // s0
  System_String_o **v79; // x8
  __int64 *v80; // x8
  UserCommandCodeCollectionEntity_array *v81; // x0
  UILabel_o *commandCodeTabLabel; // x21
  UserCommandCodeCollectionEntity_array *v83; // x22
  System_String_o *v84; // x23
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  Il2CppObject *v91; // x24
  Il2CppObject *v92; // x0
  const MethodInfo *v93; // x2
  int32_t v94; // w1
  struct MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x21
  MaterialCollectionServantListViewManager_CallbackFunc_o *v96; // x22
  const MethodInfo *v97; // x3
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  int32_t v100; // w1
  UserCommandCodeCollectionMaster_o *v101; // [xsp+8h] [xbp-B8h]
  int v102; // [xsp+10h] [xbp-B0h] BYREF
  int32_t v103; // [xsp+14h] [xbp-ACh] BYREF
  int32_t findSum[2]; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Color_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B17706 & 1) == 0 )
  {
    sub_1BCAFF8(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_1BCAFF8(&int_TypeInfo, v9);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v10);
    sub_1BCAFF8(&Method_MaterialCollectionMenu_OnSelectServant__, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BCAFF8(&StringLiteral_17413/*"btn_txt_craftessence_off"*/, v13);
    sub_1BCAFF8(&StringLiteral_17453/*"btn_txt_servant_off"*/, v14);
    sub_1BCAFF8(&StringLiteral_17409/*"btn_txt_cc_off"*/, v15);
    sub_1BCAFF8(&StringLiteral_17304/*"btn_bg_12"*/, v16);
    sub_1BCAFF8(&StringLiteral_17410/*"btn_txt_cc_on"*/, v17);
    sub_1BCAFF8(&StringLiteral_17454/*"btn_txt_servant_on"*/, v18);
    sub_1BCAFF8(&StringLiteral_17306/*"btn_bg_19"*/, v19);
    sub_1BCAFF8(&StringLiteral_3315/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v20);
    sub_1BCAFF8(&StringLiteral_17414/*"btn_txt_craftessence_on"*/, v21);
    sub_1BCAFF8(&StringLiteral_3316/*"CHARA_GRAPH_TAB_SERVANT"*/, v22);
    sub_1BCAFF8(&StringLiteral_3317/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v23);
    byte_4B17706 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  v24 = !this->fields.isInitTab;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v101 = (UserCommandCodeCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                Instance,
                                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_4B16DC5 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v26);
    byte_4B16DC5 = 1;
  }
  Instance = (DataManager_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Instance = (DataManager_o *)LocalizationManager_TypeInfo;
  }
  v29 = *(float **)&Instance[1].fields._DispLog;
  v30 = v29[20];
  v31 = v29[21];
  v32 = v29[22];
  v33 = v29[23];
  if ( !byte_4B16DC6 )
  {
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v26);
    Instance = (DataManager_o *)LocalizationManager_TypeInfo;
    byte_4B16DC6 = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    inited = j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_88;
  v35 = *(float **)&Instance[1].fields._DispLog;
  v37 = v35[24];
  v36 = v35[25];
  v39 = v35[26];
  v38 = v35[27];
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer, long double))servantTabButton->klass->vtable._5_set_isEnabled.method)(
    this->fields.servantTabButton,
    1LL,
    servantTabButton->klass->vtable._6_OnInit.methodPtr,
    inited);
  Instance = (DataManager_o *)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, kind != 0, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabBoxCollider;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Instance, kind != 0, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabSprite;
  if ( !Instance )
    goto LABEL_88;
  v40 = &StringLiteral_17306/*"btn_bg_19"*/;
  if ( kind )
    v40 = &StringLiteral_17304/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v40, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v41 = &StringLiteral_17454/*"btn_txt_servant_on"*/;
  v42 = isInit;
  if ( kind )
    v41 = &StringLiteral_17453/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v41, 0LL);
  if ( !MasterData_object )
    goto LABEL_88;
  v43 = v24;
  CollectionList = UserServantCollectionMaster__getCollectionList(
                     (UserServantCollectionMaster_o *)MasterData_object,
                     &findSum[1],
                     findSum,
                     0,
                     1,
                     0LL);
  servantTabLabel = this->fields.servantTabLabel;
  v46 = CollectionList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3316/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v103 = findSum[0];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v103, v48, v49, v50);
  if ( !v46 )
    goto LABEL_88;
  v54 = (Il2CppObject *)Instance;
  v102 = *(_QWORD *)&v46->max_length;
  v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102, v51, v52, v53);
  Instance = (DataManager_o *)System_String__Format_62491716(v47, v54, v55, 0LL);
  if ( !servantTabLabel )
    goto LABEL_88;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabLabel;
  v56 = v38;
  v57 = v39;
  v58 = v36;
  v59 = v37;
  if ( kind )
  {
    v56 = v33;
    v57 = v32;
    v58 = v31;
    v59 = v30;
  }
  if ( !Instance )
    goto LABEL_88;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v59, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_88;
  v60 = v43 || v42;
  ((void (__fastcall *)(DataManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))Instance->klass[1]._1.implementedInterfaces)(
    Instance,
    0LL,
    v43 || v42,
    Instance->klass[1]._1.interfaceOffsets);
  Instance = (DataManager_o *)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_88;
  ((void (__fastcall *)(DataManager_o *, __int64, void *))Instance->klass[1]._1.namespaze)(
    Instance,
    1LL,
    Instance->klass[1]._1.byval_arg.data);
  Instance = (DataManager_o *)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, kind != 1, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabBoxCollider;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Instance, kind != 1, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabSprite;
  if ( !Instance )
    goto LABEL_88;
  v61 = (System_String_o **)(kind == 1 ? &StringLiteral_17306/*"btn_bg_19"*/ : &StringLiteral_17304/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v61, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v62 = &StringLiteral_17414/*"btn_txt_craftessence_on"*/;
  if ( kind != 1 )
    v62 = &StringLiteral_17413/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v62, 0LL);
  v63 = UserServantCollectionMaster__getCollectionList(
          (UserServantCollectionMaster_o *)MasterData_object,
          &findSum[1],
          findSum,
          1,
          0,
          0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v65 = v63;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_3317/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v103 = findSum[0];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v103, v67, v68, v69);
  if ( !v65 )
    goto LABEL_88;
  v73 = (Il2CppObject *)Instance;
  v102 = *(_QWORD *)&v65->max_length;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102, v70, v71, v72);
  Instance = (DataManager_o *)System_String__Format_62491716(v66, v73, v74, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_88;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabLabel;
  v75 = v38;
  v76 = v39;
  v77 = v36;
  v78 = v37;
  if ( kind != 1 )
  {
    v75 = v33;
    v76 = v32;
    v77 = v31;
    v78 = v30;
  }
  if ( !Instance )
    goto LABEL_88;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v78, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_88;
  ((void (__fastcall *)(DataManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))Instance->klass[1]._1.implementedInterfaces)(
    Instance,
    0LL,
    v43 || v42,
    Instance->klass[1]._1.interfaceOffsets);
  Instance = (DataManager_o *)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_88;
  ((void (__fastcall *)(DataManager_o *, __int64, void *))Instance->klass[1]._1.namespaze)(
    Instance,
    1LL,
    Instance->klass[1]._1.byval_arg.data);
  Instance = (DataManager_o *)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Instance, kind != 2, 0LL);
  Instance = (DataManager_o *)this->fields.commandCodeTabBoxCollider;
  if ( !Instance )
    goto LABEL_88;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Instance, kind != 2, 0LL);
  Instance = (DataManager_o *)this->fields.commandCodeTabSprite;
  if ( !Instance )
    goto LABEL_88;
  v79 = (System_String_o **)(kind == 2 ? &StringLiteral_17306/*"btn_bg_19"*/ : &StringLiteral_17304/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v79, 0LL);
  Instance = (DataManager_o *)this->fields.commandCodeTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v80 = &StringLiteral_17410/*"btn_txt_cc_on"*/;
  if ( kind != 2 )
    v80 = &StringLiteral_17409/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v80, 0LL);
  Instance = (DataManager_o *)v101;
  if ( !v101 )
    goto LABEL_88;
  v81 = UserCommandCodeCollectionMaster__getCollectionList(v101, &findSum[1], findSum, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v83 = v81;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v84 = LocalizationManager__Get((System_String_o *)StringLiteral_3315/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v103 = findSum[0];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v103, v85, v86, v87);
  if ( !v83 )
    goto LABEL_88;
  v91 = (Il2CppObject *)Instance;
  v102 = *(_QWORD *)&v83->max_length;
  v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v102, v88, v89, v90);
  Instance = (DataManager_o *)System_String__Format_62491716(v84, v91, v92, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_88;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.commandCodeTabLabel;
  if ( kind != 2 )
  {
    v38 = v33;
    v39 = v32;
    v36 = v31;
    v37 = v30;
  }
  if ( !Instance )
    goto LABEL_88;
  v105.fields.r = v37;
  v105.fields.g = v36;
  v105.fields.b = v39;
  v105.fields.a = v38;
  UILabel__set_effectColor((UILabel_o *)Instance, v105, 0LL);
  Instance = (DataManager_o *)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_88;
  Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))Instance->klass[1]._1.implementedInterfaces)(
                                Instance,
                                0LL,
                                v60,
                                Instance->klass[1]._1.interfaceOffsets);
  if ( !v60 && this->fields.tabKind == kind )
    goto LABEL_82;
  if ( kind == 2 )
  {
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v94 = 3;
  }
  else if ( kind == 1 )
  {
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v94 = 1;
  }
  else
  {
    if ( kind )
      goto LABEL_82;
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v94 = 0;
  }
  MaterialCollectionServantListViewManager__CreateList((MaterialCollectionServantListViewManager_o *)Instance, v94, v93);
LABEL_82:
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( this->fields.state != 2 )
  {
    if ( materialCollectionServantListViewManager )
    {
      v100 = 1;
      goto LABEL_87;
    }
LABEL_88:
    sub_1BCB254(Instance, v26);
  }
  v96 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_1BCB244(MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v96,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    v97);
  if ( !materialCollectionServantListViewManager )
    goto LABEL_88;
  materialCollectionServantListViewManager->fields.callbackFunc = v96;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&materialCollectionServantListViewManager->fields.callbackFunc,
    (int32_t)v96,
    v98,
    v99);
  v100 = 2;
LABEL_87:
  MaterialCollectionServantListViewManager__SetMode_32529244(materialCollectionServantListViewManager, v100, v93);
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

  if ( (byte_4B176FF & 1) == 0 )
  {
    sub_1BCAFF8(&MaterialCollectionMenu_CallbackFunc_TypeInfo, value);
    byte_4B176FF = 1;
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
    v9 = sub_1C05088(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionMenu_o *)sub_1BCB514(v8);
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

  if ( (byte_4B17700 & 1) == 0 )
  {
    sub_1BCAFF8(&MaterialCollectionMenu_CallbackFunc_TypeInfo, value);
    byte_4B17700 = 1;
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
    v9 = sub_1C05088(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionServantListViewManager_o *)sub_1BCB514(v8);
  MaterialCollectionServantListViewManager__DestroyList(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionMenu_CallbackFunc___ctor(
        MaterialCollectionMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0E1D4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0E18C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MaterialCollectionMenu_CallbackFunc__BeginInvoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4B17711 & 1) == 0 )
  {
    sub_1BCAFF8(&MaterialCollectionMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4B17711 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(MaterialCollectionMenu_ResultKind_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v9, callback, object);
}


void __fastcall MaterialCollectionMenu_CallbackFunc__EndInvoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall MaterialCollectionMenu_CallbackFunc__Invoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}