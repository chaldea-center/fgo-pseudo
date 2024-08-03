void __fastcall MaterialCollectionMenu___ctor(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49F7B3B & 1) == 0 )
  {
    sub_1B640C8(&BaseMenu_TypeInfo, method);
    byte_49F7B3B = 1;
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
  struct MaterialCollectionMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct MaterialCollectionMenu_CallbackFunc_o *v4; // x20
  struct MaterialCollectionMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1B6406C(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall MaterialCollectionMenu__Close(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCollectionMenu__Close_30881096(this, 0LL, v2);
}


void __fastcall MaterialCollectionMenu__Close_30881096(
        MaterialCollectionMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  if ( (byte_49F7B2F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9913/*"OnStartClose"*/, callback);
    byte_49F7B2F = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_9913/*"OnStartClose"*/,
    0.1,
    0LL);
}


void __fastcall MaterialCollectionMenu__EndClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v5; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  MaterialCollectionMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v5 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1B6406C(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      *(_QWORD *)&v5->fields.extra_arg);
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
  MaterialCollectionServantListViewManager_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x2

  if ( (byte_49F7B3A & 1) == 0 )
  {
    sub_1B640C8(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_MaterialCollectionMenu_OnSelectServant__, v4);
    byte_49F7B3A = 1;
  }
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( !materialCollectionServantListViewManager
    || (MaterialCollectionServantListViewManager__RequestListObject_30900692(
          materialCollectionServantListViewManager,
          4,
          v2),
        v6 = this->fields.materialCollectionServantListViewManager,
        v9 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                          MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo,
                                                                          v7,
                                                                          v8),
        MaterialCollectionServantListViewManager_CallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_OnSelectServant__,
          0LL),
        !v6) )
  {
    sub_1B64324(materialCollectionServantListViewManager);
  }
  v6->fields.callbackFunc = v9;
  sub_1B6406C(&v6->fields.callbackFunc);
  MaterialCollectionServantListViewManager__SetMode_30885672(v6, 2, v10);
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
  __int64 v4; // x1
  struct MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x20
  MaterialCollectionServantListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_49F7B2E & 1) == 0 )
  {
    sub_1B640C8(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1B640C8(&Method_MaterialCollectionMenu_OnSelectServant__, v4);
    byte_49F7B2E = 1;
  }
  this->fields.state = 2;
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  v6 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                    MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo,
                                                                    method,
                                                                    v2);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    0LL);
  if ( !materialCollectionServantListViewManager )
    sub_1B64324(v7);
  materialCollectionServantListViewManager->fields.callbackFunc = v6;
  sub_1B6406C(&materialCollectionServantListViewManager->fields.callbackFunc);
  MaterialCollectionServantListViewManager__SetMode_30885672(materialCollectionServantListViewManager, 2, v8);
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
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_o *v14; // x0
  intptr_t v15; // w2
  ListViewManager_o *materialCollectionServantListViewManager; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x21

  if ( (byte_49F7B38 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_MaterialCollectionMenu_EndCloseShowServant__, v8);
    sub_1B640C8(&Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_49F7B38 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v17, v18);
    v15 = Method_MaterialCollectionMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v12, v13);
    v15 = Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__;
  }
  v19 = v14;
  System_Action___ctor(v14, (Il2CppObject *)this, v15, 0LL);
  if ( !Instance )
LABEL_11:
    sub_1B64324(materialCollectionServantListViewManager);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v19, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x21
  __int64 v10; // x0

  if ( (byte_49F7B39 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isDecide);
    sub_1B640C8(&Method_MaterialCollectionMenu_EndCloseShowServant__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49F7B39 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_1B64324(v10);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v9, 0LL);
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
    sub_1B64324(materialCollectionServantListViewManager);
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

  if ( (byte_49F7B33 & 1) == 0 )
  {
    sub_1B640C8(&Method_MaterialCollectionMenu_OnClickCancel__, method);
    byte_49F7B33 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCollectionMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_MaterialCollectionMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    MaterialCollectionMenu__Callback(this, 0, v5);
  }
}


void __fastcall MaterialCollectionMenu__OnClickDecide(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49F7B32 & 1) == 0 )
  {
    sub_1B640C8(&Method_MaterialCollectionMenu_OnClickDecide__, method);
    byte_49F7B32 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCollectionMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_MaterialCollectionMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    MaterialCollectionMenu__Callback(this, 0, v5);
  }
}


void __fastcall MaterialCollectionMenu__OnClickTabCommandCode(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_49F7B36 & 1) == 0 )
  {
    sub_1B640C8(&Method_MaterialCollectionMenu_OnClickTabCommandCode__, method);
    byte_49F7B36 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_MaterialCollectionMenu_OnClickTabCommandCode__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    MaterialCollectionMenu__SetTabKind(this, 2, 0, v5);
  }
}


void __fastcall MaterialCollectionMenu__OnClickTabServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_49F7B34 & 1) == 0 )
  {
    sub_1B640C8(&Method_MaterialCollectionMenu_OnClickTabServant__, method);
    byte_49F7B34 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_MaterialCollectionMenu_OnClickTabServant__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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

  if ( (byte_49F7B35 & 1) == 0 )
  {
    sub_1B640C8(&Method_MaterialCollectionMenu_OnClickTabServantEquip__, method);
    byte_49F7B35 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCollectionMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_MaterialCollectionMenu_OnClickTabServantEquip__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
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
  __int64 v16; // x1
  __int64 v17; // x2
  UserServantCollectionEntity_o *v18; // x20
  CommonUI_o *v19; // x21
  ServantStatusDialog_EndDelegate_o *v20; // x22
  Il2CppObject *v21; // x0
  UserCommandCodeCollectionEntity_o *v22; // x20
  CommonUI_o *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  ServantStatusDialog_EndDelegate_o *v26; // x22
  Il2CppObject *v27; // x0
  ServantStatusDialog_ResultDelegate_o *v28; // x22

  if ( (byte_49F7B37 & 1) == 0 )
  {
    sub_1B640C8(&ServantStatusDialog_EndDelegate_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&Method_MaterialCollectionMenu_EndShowServantEquip__, v7);
    sub_1B640C8(&Method_MaterialCollectionMenu_EndShowServant__, v8);
    sub_1B640C8(&ServantStatusDialog_ResultDelegate_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_49F7B37 = 1;
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
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v18 = (UserServantCollectionEntity_o *)*((_QWORD *)v12 + 14);
          v19 = (CommonUI_o *)Instance;
          if ( IsKeepServantEquip )
          {
            v20 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v16, v17);
            ServantStatusDialog_EndDelegate___ctor(
              v20,
              (Il2CppObject *)this,
              Method_MaterialCollectionMenu_EndShowServantEquip__,
              0LL);
            if ( v19 )
            {
              CommonUI__OpenServantStatusDialog_30356776(v19, 2, v18, v20, 0LL);
              return;
            }
LABEL_19:
            sub_1B64324(materialCollectionServantListViewManager);
          }
        }
        else
        {
          v27 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v18 = (UserServantCollectionEntity_o *)*((_QWORD *)v12 + 14);
          v19 = (CommonUI_o *)v27;
        }
        v28 = (ServantStatusDialog_ResultDelegate_o *)sub_1B64314(ServantStatusDialog_ResultDelegate_TypeInfo, v16, v17);
        ServantStatusDialog_ResultDelegate___ctor(
          v28,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServant__,
          0LL);
        if ( !v19 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_30357240(v19, 2, v18, v28, 0LL);
      }
      else if ( *((_QWORD *)materialCollectionServantListViewManager + 16) )
      {
        v21 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v22 = (UserCommandCodeCollectionEntity_o *)*((_QWORD *)v12 + 16);
        v23 = (CommonUI_o *)v21;
        v26 = (ServantStatusDialog_EndDelegate_o *)sub_1B64314(ServantStatusDialog_EndDelegate_TypeInfo, v24, v25);
        ServantStatusDialog_EndDelegate___ctor(
          v26,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServantEquip__,
          0LL);
        if ( !v23 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_30358160(v23, 2, v22, v26, 0LL, 0LL);
      }
    }
  }
}


void __fastcall MaterialCollectionMenu__OnStartClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_49F7B30 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_MaterialCollectionMenu_EndClose__, v4);
    byte_49F7B30 = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v5, 0LL);
}


void __fastcall MaterialCollectionMenu__OnStartOpen(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_49F7B2D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_MaterialCollectionMenu_EndOpen__, v4);
    byte_49F7B2D = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v5, 0LL);
}


void __fastcall MaterialCollectionMenu__Open(
        MaterialCollectionMenu_o *this,
        System_Action_o *opened_act,
        MaterialCollectionMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_49F7B2C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, opened_act);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&StringLiteral_9914/*"OnStartOpen"*/, v8);
    byte_49F7B2C = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = opened_act;
    sub_1B6406C(&this->fields.mOpenedAct);
    this->fields.callbackFunc = callback;
    sub_1B6406C(&this->fields.callbackFunc);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_16;
    this->fields.newSvtIdList = UserServantCollectionMaster__GetNewList((UserServantCollectionMaster_o *)Instance, 0LL);
    sub_1B6406C(&this->fields.newSvtIdList);
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
    MaterialCollectionServantListViewManager__CreateList((MaterialCollectionServantListViewManager_o *)Instance, 0, v10);
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
          MaterialCollectionMenu__SetTabKind(this, this->fields.tabKind, 1, v11),
          Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager,
          this->fields.state = 1,
          !Instance) )
    {
LABEL_16:
      sub_1B64324(Instance);
    }
    MaterialCollectionServantListViewManager__SetMode_30885672(
      (MaterialCollectionServantListViewManager_o *)Instance,
      1,
      v12);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9914/*"OnStartOpen"*/,
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
  Il2CppObject *MasterData_object; // x24
  __int64 v27; // x1
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
  Il2CppObject *v48; // x28
  Il2CppObject *v49; // x0
  float v50; // s3
  float v51; // s2
  float v52; // s1
  float v53; // s0
  bool v54; // w27
  System_String_o **v55; // x8
  __int64 *v56; // x8
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
  System_String_o **v67; // x8
  __int64 *v68; // x8
  UserCommandCodeCollectionEntity_array *v69; // x0
  UILabel_o *commandCodeTabLabel; // x21
  UserCommandCodeCollectionEntity_array *v71; // x22
  System_String_o *v72; // x23
  Il2CppObject *v73; // x24
  Il2CppObject *v74; // x0
  __int64 v75; // x1
  const MethodInfo *v76; // x2
  int32_t v77; // w1
  struct MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x21
  MaterialCollectionServantListViewManager_CallbackFunc_o *v79; // x22
  int32_t v80; // w1
  UserCommandCodeCollectionMaster_o *v81; // [xsp+8h] [xbp-B8h]
  int v82; // [xsp+10h] [xbp-B0h] BYREF
  int32_t v83; // [xsp+14h] [xbp-ACh] BYREF
  int32_t findSum[2]; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49F7B31 & 1) == 0 )
  {
    sub_1B640C8(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8);
    sub_1B640C8(&int_TypeInfo, v9);
    sub_1B640C8(&LocalizationManager_TypeInfo, v10);
    sub_1B640C8(&Method_MaterialCollectionMenu_OnSelectServant__, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&StringLiteral_17500/*"btn_txt_craftessence_off"*/, v13);
    sub_1B640C8(&StringLiteral_17540/*"btn_txt_servant_off"*/, v14);
    sub_1B640C8(&StringLiteral_17496/*"btn_txt_cc_off"*/, v15);
    sub_1B640C8(&StringLiteral_17406/*"btn_bg_12"*/, v16);
    sub_1B640C8(&StringLiteral_17497/*"btn_txt_cc_on"*/, v17);
    sub_1B640C8(&StringLiteral_17541/*"btn_txt_servant_on"*/, v18);
    sub_1B640C8(&StringLiteral_17408/*"btn_bg_19"*/, v19);
    sub_1B640C8(&StringLiteral_3430/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v20);
    sub_1B640C8(&StringLiteral_17501/*"btn_txt_craftessence_on"*/, v21);
    sub_1B640C8(&StringLiteral_3431/*"CHARA_GRAPH_TAB_SERVANT"*/, v22);
    sub_1B640C8(&StringLiteral_3432/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v23);
    byte_49F7B31 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  v24 = !this->fields.isInitTab;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v81 = (UserCommandCodeCollectionMaster_o *)DataManager__GetMasterData_object_(
                                               Instance,
                                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( !byte_49F779B )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v27);
    byte_49F779B = 1;
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
  if ( !byte_49F779C )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, v27);
    Instance = (DataManager_o *)LocalizationManager_TypeInfo;
    byte_49F779C = 1;
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
  v40 = &StringLiteral_17408/*"btn_bg_19"*/;
  if ( kind )
    v40 = &StringLiteral_17406/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v40, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v41 = &StringLiteral_17541/*"btn_txt_servant_on"*/;
  v42 = isInit;
  if ( kind )
    v41 = &StringLiteral_17540/*"btn_txt_servant_off"*/;
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
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_3431/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v83 = findSum[0];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
  if ( !v46 )
    goto LABEL_88;
  v48 = (Il2CppObject *)Instance;
  v82 = *(_QWORD *)&v46->max_length;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
  Instance = (DataManager_o *)System_String__Format_61389768(v47, v48, v49, 0LL);
  if ( !servantTabLabel )
    goto LABEL_88;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabLabel;
  v50 = v38;
  v51 = v39;
  v52 = v36;
  v53 = v37;
  if ( kind )
  {
    v50 = v33;
    v51 = v32;
    v52 = v31;
    v53 = v30;
  }
  if ( !Instance )
    goto LABEL_88;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v53, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_88;
  v54 = v43 || v42;
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
  v55 = (System_String_o **)(kind == 1 ? &StringLiteral_17408/*"btn_bg_19"*/ : &StringLiteral_17406/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v55, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v56 = &StringLiteral_17501/*"btn_txt_craftessence_on"*/;
  if ( kind != 1 )
    v56 = &StringLiteral_17500/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v56, 0LL);
  v57 = UserServantCollectionMaster__getCollectionList(
          (UserServantCollectionMaster_o *)MasterData_object,
          &findSum[1],
          findSum,
          1,
          0,
          0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v59 = v57;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_3432/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v83 = findSum[0];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
  if ( !v59 )
    goto LABEL_88;
  v61 = (Il2CppObject *)Instance;
  v82 = *(_QWORD *)&v59->max_length;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
  Instance = (DataManager_o *)System_String__Format_61389768(v60, v61, v62, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_88;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabLabel;
  v63 = v38;
  v64 = v39;
  v65 = v36;
  v66 = v37;
  if ( kind != 1 )
  {
    v63 = v33;
    v64 = v32;
    v65 = v31;
    v66 = v30;
  }
  if ( !Instance )
    goto LABEL_88;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v66, 0LL);
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
  v67 = (System_String_o **)(kind == 2 ? &StringLiteral_17408/*"btn_bg_19"*/ : &StringLiteral_17406/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v67, 0LL);
  Instance = (DataManager_o *)this->fields.commandCodeTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v68 = &StringLiteral_17497/*"btn_txt_cc_on"*/;
  if ( kind != 2 )
    v68 = &StringLiteral_17496/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v68, 0LL);
  Instance = (DataManager_o *)v81;
  if ( !v81 )
    goto LABEL_88;
  v69 = UserCommandCodeCollectionMaster__getCollectionList(v81, &findSum[1], findSum, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v71 = v69;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v72 = LocalizationManager__Get((System_String_o *)StringLiteral_3430/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v83 = findSum[0];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
  if ( !v71 )
    goto LABEL_88;
  v73 = (Il2CppObject *)Instance;
  v82 = *(_QWORD *)&v71->max_length;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v82);
  Instance = (DataManager_o *)System_String__Format_61389768(v72, v73, v74, 0LL);
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
  v85.fields.r = v37;
  v85.fields.g = v36;
  v85.fields.b = v39;
  v85.fields.a = v38;
  UILabel__set_effectColor((UILabel_o *)Instance, v85, 0LL);
  Instance = (DataManager_o *)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_88;
  Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))Instance->klass[1]._1.implementedInterfaces)(
                                Instance,
                                0LL,
                                v54,
                                Instance->klass[1]._1.interfaceOffsets);
  if ( !v54 && this->fields.tabKind == kind )
    goto LABEL_82;
  if ( kind == 2 )
  {
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v77 = 3;
  }
  else if ( kind == 1 )
  {
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v77 = 1;
  }
  else
  {
    if ( kind )
      goto LABEL_82;
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v77 = 0;
  }
  MaterialCollectionServantListViewManager__CreateList((MaterialCollectionServantListViewManager_o *)Instance, v77, v76);
LABEL_82:
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( this->fields.state != 2 )
  {
    if ( materialCollectionServantListViewManager )
    {
      v80 = 1;
      goto LABEL_87;
    }
LABEL_88:
    sub_1B64324(Instance);
  }
  v79 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_1B64314(
                                                                     MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo,
                                                                     v75,
                                                                     v76);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v79,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    0LL);
  if ( !materialCollectionServantListViewManager )
    goto LABEL_88;
  materialCollectionServantListViewManager->fields.callbackFunc = v79;
  sub_1B6406C(&materialCollectionServantListViewManager->fields.callbackFunc);
  v80 = 2;
LABEL_87:
  MaterialCollectionServantListViewManager__SetMode_30885672(materialCollectionServantListViewManager, v80, v76);
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

  if ( (byte_49F7B2A & 1) == 0 )
  {
    sub_1B640C8(&MaterialCollectionMenu_CallbackFunc_TypeInfo, value);
    byte_49F7B2A = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionMenu_o *)sub_1B645E4(v8);
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

  if ( (byte_49F7B2B & 1) == 0 )
  {
    sub_1B640C8(&MaterialCollectionMenu_CallbackFunc_TypeInfo, value);
    byte_49F7B2B = 1;
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
    v9 = sub_1B9F5B8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionServantListViewManager_o *)sub_1B645E4(v8);
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
  sub_1B6406C(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A5350;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A5308;
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
  if ( (byte_49F7B3C & 1) == 0 )
  {
    sub_1B640C8(&MaterialCollectionMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_49F7B3C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(MaterialCollectionMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall MaterialCollectionMenu_CallbackFunc__EndInvoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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