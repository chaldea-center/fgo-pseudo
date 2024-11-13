void __fastcall MaterialCollectionMenu___ctor(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1171D & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B1171D = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
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
    sub_1BCA784(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      (unsigned int)result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall MaterialCollectionMenu__Close(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCollectionMenu__Close_31712188(this, 0LL, v2);
}


void __fastcall MaterialCollectionMenu__Close_31712188(
        MaterialCollectionMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  if ( (byte_4B11711 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10091/*"OnStartClose"*/, callback, method);
    byte_4B11711 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10091/*"OnStartClose"*/,
    0.1,
    0LL);
}


void __fastcall MaterialCollectionMenu__EndClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  MaterialCollectionMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall MaterialCollectionMenu__EndCloseShowServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0
  struct MaterialCollectionServantListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  MaterialCollectionServantListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x2

  if ( (byte_4B1171C & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MaterialCollectionMenu_OnSelectServant__, v4, v5);
    byte_4B1171C = 1;
  }
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( !materialCollectionServantListViewManager
    || (MaterialCollectionServantListViewManager__RequestListObject_31731784(
          materialCollectionServantListViewManager,
          4,
          v2),
        v7 = this->fields.materialCollectionServantListViewManager,
        v11 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                           MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo,
                                                                           v8,
                                                                           v9,
                                                                           v10),
        MaterialCollectionServantListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_OnSelectServant__,
          0LL),
        !v7) )
  {
    sub_1BCAA3C(materialCollectionServantListViewManager, method);
  }
  v7->fields.callbackFunc = v11;
  sub_1BCA784(&v7->fields.callbackFunc, v11);
  MaterialCollectionServantListViewManager__SetMode_31716764(v7, 2, v12);
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
  __int64 v5; // x1
  __int64 v6; // x2
  struct MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x20
  MaterialCollectionServantListViewManager_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4B11710 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MaterialCollectionMenu_OnSelectServant__, v5, v6);
    byte_4B11710 = 1;
  }
  this->fields.state = 2;
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  v8 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                    MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    0LL);
  if ( !materialCollectionServantListViewManager )
    sub_1BCAA3C(v9, v10);
  materialCollectionServantListViewManager->fields.callbackFunc = v8;
  sub_1BCA784(&materialCollectionServantListViewManager->fields.callbackFunc, v8);
  MaterialCollectionServantListViewManager__SetMode_31716764(materialCollectionServantListViewManager, 2, v11);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Instance; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  System_Action_o *v18; // x0
  intptr_t v19; // w2
  ListViewManager_o *materialCollectionServantListViewManager; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Action_o *v24; // x21

  if ( (byte_4B1171A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, isNeedSort);
    sub_1BCA7E0(&Method_MaterialCollectionMenu_EndCloseShowServant__, v8, v9);
    sub_1BCA7E0(&Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    byte_4B1171A = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v22, v23);
    v19 = Method_MaterialCollectionMenu_EndCloseShowServant__;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v18 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
    v19 = Method_MaterialCollectionMenu_EndCloseShowServantuestQuestJump__;
  }
  v24 = v18;
  System_Action___ctor(v18, (Il2CppObject *)this, v19, 0LL);
  if ( !Instance )
LABEL_11:
    sub_1BCAA3C(materialCollectionServantListViewManager, isDecide);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v24, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCollectionMenu__EndShowServantEquip(
        MaterialCollectionMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B1171B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_MaterialCollectionMenu_EndCloseShowServant__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B1171B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndCloseShowServant__, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v13, v14);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v12, 0LL);
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
    sub_1BCAA3C(materialCollectionServantListViewManager, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)materialCollectionServantListViewManager & 1, 0LL);
  this->fields.tabKind = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall MaterialCollectionMenu__OnClickCancel(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B11715 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCollectionMenu_OnClickCancel__, method, v2);
    byte_4B11715 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_MaterialCollectionMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    MaterialCollectionMenu__Callback(this, 0, v6);
  }
}


void __fastcall MaterialCollectionMenu__OnClickDecide(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B11714 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCollectionMenu_OnClickDecide__, method, v2);
    byte_4B11714 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_MaterialCollectionMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    MaterialCollectionMenu__Callback(this, 0, v6);
  }
}


void __fastcall MaterialCollectionMenu__OnClickTabCommandCode(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4B11718 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCollectionMenu_OnClickTabCommandCode__, method, v2);
    byte_4B11718 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_MaterialCollectionMenu_OnClickTabCommandCode__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabCommandCode__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionMenu_OnClickTabCommandCode__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    MaterialCollectionMenu__SetTabKind(this, 2, 0, v6);
  }
}


void __fastcall MaterialCollectionMenu__OnClickTabServant(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4B11716 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCollectionMenu_OnClickTabServant__, method, v2);
    byte_4B11716 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_MaterialCollectionMenu_OnClickTabServant__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionMenu_OnClickTabServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    MaterialCollectionMenu__SetTabKind(this, 0, 0, v6);
  }
}


void __fastcall MaterialCollectionMenu__OnClickTabServantEquip(
        MaterialCollectionMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4B11717 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCollectionMenu_OnClickTabServantEquip__, method, v2);
    byte_4B11717 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_MaterialCollectionMenu_OnClickTabServantEquip__;
    if ( (*((_BYTE *)Method_MaterialCollectionMenu_OnClickTabServantEquip__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MaterialCollectionMenu_OnClickTabServantEquip__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    MaterialCollectionMenu__SetTabKind(this, 1, 0, v6);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  void *materialCollectionServantListViewManager; // x0
  void *v16; // x20
  ServantEntity_o *v17; // x0
  bool IsKeepServantEquip; // w22
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  UserServantCollectionEntity_o *v23; // x20
  CommonUI_o *v24; // x21
  ServantStatusDialog_EndDelegate_o *v25; // x22
  Il2CppObject *v26; // x0
  UserCommandCodeCollectionEntity_o *v27; // x20
  CommonUI_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  ServantStatusDialog_EndDelegate_o *v32; // x22
  Il2CppObject *v33; // x0
  ServantStatusDialog_ResultDelegate_o *v34; // x22

  if ( (byte_4B11719 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&index);
    sub_1BCA7E0(&Method_MaterialCollectionMenu_EndShowServantEquip__, v7, v8);
    sub_1BCA7E0(&Method_MaterialCollectionMenu_EndShowServant__, v9, v10);
    sub_1BCA7E0(&ServantStatusDialog_ResultDelegate_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14);
    byte_4B11719 = 1;
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
      v16 = materialCollectionServantListViewManager;
      if ( *((_QWORD *)materialCollectionServantListViewManager + 14) )
      {
        v17 = (ServantEntity_o *)*((_QWORD *)materialCollectionServantListViewManager + 15);
        if ( v17 )
        {
          IsKeepServantEquip = ServantEntity__get_IsKeepServantEquip(v17, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v23 = (UserServantCollectionEntity_o *)*((_QWORD *)v16 + 14);
          v24 = (CommonUI_o *)Instance;
          if ( IsKeepServantEquip )
          {
            v25 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(
                                                         ServantStatusDialog_EndDelegate_TypeInfo,
                                                         v20,
                                                         v21,
                                                         v22);
            ServantStatusDialog_EndDelegate___ctor(
              v25,
              (Il2CppObject *)this,
              Method_MaterialCollectionMenu_EndShowServantEquip__,
              0LL);
            if ( v24 )
            {
              CommonUI__OpenServantStatusDialog_30778040(v24, 2, v23, v25, 0LL);
              return;
            }
LABEL_19:
            sub_1BCAA3C(materialCollectionServantListViewManager, *(_QWORD *)&kind);
          }
        }
        else
        {
          v33 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v23 = (UserServantCollectionEntity_o *)*((_QWORD *)v16 + 14);
          v24 = (CommonUI_o *)v33;
        }
        v34 = (ServantStatusDialog_ResultDelegate_o *)sub_1BCAA2C(
                                                        ServantStatusDialog_ResultDelegate_TypeInfo,
                                                        v20,
                                                        v21,
                                                        v22);
        ServantStatusDialog_ResultDelegate___ctor(
          v34,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServant__,
          0LL);
        if ( !v24 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_30778504(v24, 2, v23, v34, 0LL);
      }
      else if ( *((_QWORD *)materialCollectionServantListViewManager + 16) )
      {
        v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v27 = (UserCommandCodeCollectionEntity_o *)*((_QWORD *)v16 + 16);
        v28 = (CommonUI_o *)v26;
        v32 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v29, v30, v31);
        ServantStatusDialog_EndDelegate___ctor(
          v32,
          (Il2CppObject *)this,
          Method_MaterialCollectionMenu_EndShowServantEquip__,
          0LL);
        if ( !v28 )
          goto LABEL_19;
        CommonUI__OpenServantStatusDialog_30779424(v28, 2, v27, v32, 0LL, 0LL);
      }
    }
  }
}


void __fastcall MaterialCollectionMenu__OnStartClose(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B11712 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MaterialCollectionMenu_EndClose__, v5, v6);
    byte_4B11712 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v7, 0LL);
}


void __fastcall MaterialCollectionMenu__OnStartOpen(MaterialCollectionMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B1170F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MaterialCollectionMenu_EndOpen__, v5, v6);
    byte_4B1170F = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MaterialCollectionMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v7, 0LL);
}


void __fastcall MaterialCollectionMenu__Open(
        MaterialCollectionMenu_o *this,
        System_Action_o *opened_act,
        MaterialCollectionMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct System_Int32_array *NewList; // x0
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4B1170E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, opened_act, callback);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&StringLiteral_10092/*"OnStartOpen"*/, v9, v10);
    byte_4B1170E = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = opened_act;
    sub_1BCA784(&this->fields.mOpenedAct, opened_act);
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_16;
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    if ( !Instance )
      goto LABEL_16;
    NewList = UserServantCollectionMaster__GetNewList((UserServantCollectionMaster_o *)Instance, 0LL);
    this->fields.newSvtIdList = NewList;
    sub_1BCA784(&this->fields.newSvtIdList, NewList);
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
    MaterialCollectionServantListViewManager__CreateList((MaterialCollectionServantListViewManager_o *)Instance, 0, v14);
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
          MaterialCollectionMenu__SetTabKind(this, this->fields.tabKind, 1, v15),
          Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager,
          this->fields.state = 1,
          !Instance) )
    {
LABEL_16:
      sub_1BCAA3C(Instance, v12);
    }
    MaterialCollectionServantListViewManager__SetMode_31716764(
      (MaterialCollectionServantListViewManager_o *)Instance,
      1,
      v16);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnStartOpen"*/,
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  bool v41; // w27
  DataManager_o *Instance; // x0
  __int64 v43; // x1
  Il2CppObject *MasterData_object; // x24
  __int64 v45; // x2
  long double inited; // q0
  float *v47; // x8
  float v48; // s12
  float v49; // s13
  float v50; // s14
  float v51; // s15
  struct UICommonButton_o *servantTabButton; // x8
  float *v53; // x9
  float v54; // s10
  float v55; // s11
  float v56; // s8
  float v57; // s9
  __int64 *v58; // x8
  __int64 *v59; // x8
  bool v60; // w22
  bool v61; // w21
  UserServantCollectionEntity_array *CollectionList; // x0
  __int64 v63; // x1
  UILabel_o *servantTabLabel; // x25
  UserServantCollectionEntity_array *v65; // x26
  System_String_o *v66; // x27
  Il2CppObject *v67; // x28
  Il2CppObject *v68; // x0
  float v69; // s3
  float v70; // s2
  float v71; // s1
  float v72; // s0
  bool v73; // w27
  System_String_o **v74; // x8
  __int64 *v75; // x8
  UserServantCollectionEntity_array *v76; // x0
  __int64 v77; // x1
  UILabel_o *servantEquipTabLabel; // x23
  UserServantCollectionEntity_array *v79; // x24
  System_String_o *v80; // x25
  Il2CppObject *v81; // x26
  Il2CppObject *v82; // x0
  float v83; // s3
  float v84; // s2
  float v85; // s1
  float v86; // s0
  System_String_o **v87; // x8
  __int64 *v88; // x8
  UserCommandCodeCollectionEntity_array *v89; // x0
  __int64 v90; // x1
  UILabel_o *commandCodeTabLabel; // x21
  UserCommandCodeCollectionEntity_array *v92; // x22
  System_String_o *v93; // x23
  Il2CppObject *v94; // x24
  Il2CppObject *v95; // x0
  const MethodInfo *v96; // x2
  __int64 v97; // x3
  int32_t v98; // w1
  struct MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x21
  MaterialCollectionServantListViewManager_CallbackFunc_o *v100; // x22
  int32_t v101; // w1
  UserCommandCodeCollectionMaster_o *v102; // [xsp+8h] [xbp-B8h]
  int v103; // [xsp+10h] [xbp-B0h] BYREF
  int32_t v104; // [xsp+14h] [xbp-ACh] BYREF
  int32_t findSum[2]; // [xsp+18h] [xbp-A8h] BYREF
  UnityEngine_Color_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B11713 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind, isInit);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_MaterialCollectionMenu_OnSelectServant__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    sub_1BCA7E0(&StringLiteral_17747/*"btn_txt_craftessence_off"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_17787/*"btn_txt_servant_off"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17743/*"btn_txt_cc_off"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_17649/*"btn_bg_12"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_17744/*"btn_txt_cc_on"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_17788/*"btn_txt_servant_on"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_17651/*"btn_bg_19"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_3478/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_17748/*"btn_txt_craftessence_on"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_3479/*"CHARA_GRAPH_TAB_SERVANT"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_3480/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, v39, v40);
    byte_4B11713 = 1;
  }
  *(_QWORD *)findSum = 0LL;
  v41 = !this->fields.isInitTab;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v102 = (UserCommandCodeCollectionMaster_o *)DataManager__GetMasterData_object_(
                                                Instance,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserCommandCodeCollectionMaster___);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
  if ( !byte_4B11133 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v43, v45);
    byte_4B11133 = 1;
  }
  Instance = (DataManager_o *)LocalizationManager_TypeInfo;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v43);
    Instance = (DataManager_o *)LocalizationManager_TypeInfo;
  }
  v47 = *(float **)&Instance[1].fields._DispLog;
  v48 = v47[20];
  v49 = v47[21];
  v50 = v47[22];
  v51 = v47[23];
  if ( !byte_4B11134 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v43, v45);
    Instance = (DataManager_o *)LocalizationManager_TypeInfo;
    byte_4B11134 = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    inited = j_il2cpp_runtime_class_init_0(Instance, v43);
    Instance = (DataManager_o *)LocalizationManager_TypeInfo;
  }
  servantTabButton = this->fields.servantTabButton;
  if ( !servantTabButton )
    goto LABEL_88;
  v53 = *(float **)&Instance[1].fields._DispLog;
  v55 = v53[24];
  v54 = v53[25];
  v57 = v53[26];
  v56 = v53[27];
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
  v58 = &StringLiteral_17651/*"btn_bg_19"*/;
  if ( kind )
    v58 = &StringLiteral_17649/*"btn_bg_12"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v58, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v59 = &StringLiteral_17788/*"btn_txt_servant_on"*/;
  v60 = isInit;
  if ( kind )
    v59 = &StringLiteral_17787/*"btn_txt_servant_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v59, 0LL);
  if ( !MasterData_object )
    goto LABEL_88;
  v61 = v41;
  CollectionList = UserServantCollectionMaster__getCollectionList(
                     (UserServantCollectionMaster_o *)MasterData_object,
                     &findSum[1],
                     findSum,
                     0,
                     1,
                     0LL);
  servantTabLabel = this->fields.servantTabLabel;
  v65 = CollectionList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v63);
  v66 = LocalizationManager__Get((System_String_o *)StringLiteral_3479/*"CHARA_GRAPH_TAB_SERVANT"*/, 0LL);
  v104 = findSum[0];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v104);
  if ( !v65 )
    goto LABEL_88;
  v67 = (Il2CppObject *)Instance;
  v103 = *(_QWORD *)&v65->max_length;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v103);
  Instance = (DataManager_o *)System_String__Format_62415592(v66, v67, v68, 0LL);
  if ( !servantTabLabel )
    goto LABEL_88;
  UILabel__set_text(servantTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabLabel;
  v69 = v56;
  v70 = v57;
  v71 = v54;
  v72 = v55;
  if ( kind )
  {
    v69 = v51;
    v70 = v50;
    v71 = v49;
    v72 = v48;
  }
  if ( !Instance )
    goto LABEL_88;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v72, 0LL);
  Instance = (DataManager_o *)this->fields.servantTabButton;
  if ( !Instance )
    goto LABEL_88;
  v73 = v61 || v60;
  ((void (__fastcall *)(DataManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))Instance->klass[1]._1.implementedInterfaces)(
    Instance,
    0LL,
    v61 || v60,
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
  v74 = (System_String_o **)(kind == 1 ? &StringLiteral_17651/*"btn_bg_19"*/ : &StringLiteral_17649/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v74, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v75 = &StringLiteral_17748/*"btn_txt_craftessence_on"*/;
  if ( kind != 1 )
    v75 = &StringLiteral_17747/*"btn_txt_craftessence_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v75, 0LL);
  v76 = UserServantCollectionMaster__getCollectionList(
          (UserServantCollectionMaster_o *)MasterData_object,
          &findSum[1],
          findSum,
          1,
          0,
          0LL);
  servantEquipTabLabel = this->fields.servantEquipTabLabel;
  v79 = v76;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v77);
  v80 = LocalizationManager__Get((System_String_o *)StringLiteral_3480/*"CHARA_GRAPH_TAB_SERVANT_EQUIP"*/, 0LL);
  v104 = findSum[0];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v104);
  if ( !v79 )
    goto LABEL_88;
  v81 = (Il2CppObject *)Instance;
  v103 = *(_QWORD *)&v79->max_length;
  v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v103);
  Instance = (DataManager_o *)System_String__Format_62415592(v80, v81, v82, 0LL);
  if ( !servantEquipTabLabel )
    goto LABEL_88;
  UILabel__set_text(servantEquipTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabLabel;
  v83 = v56;
  v84 = v57;
  v85 = v54;
  v86 = v55;
  if ( kind != 1 )
  {
    v83 = v51;
    v84 = v50;
    v85 = v49;
    v86 = v48;
  }
  if ( !Instance )
    goto LABEL_88;
  UILabel__set_effectColor((UILabel_o *)Instance, *(UnityEngine_Color_o *)&v86, 0LL);
  Instance = (DataManager_o *)this->fields.servantEquipTabButton;
  if ( !Instance )
    goto LABEL_88;
  ((void (__fastcall *)(DataManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))Instance->klass[1]._1.implementedInterfaces)(
    Instance,
    0LL,
    v61 || v60,
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
  v87 = (System_String_o **)(kind == 2 ? &StringLiteral_17651/*"btn_bg_19"*/ : &StringLiteral_17649/*"btn_bg_12"*/);
  UISprite__set_spriteName((UISprite_o *)Instance, *v87, 0LL);
  Instance = (DataManager_o *)this->fields.commandCodeTabStrSp;
  if ( !Instance )
    goto LABEL_88;
  v88 = &StringLiteral_17744/*"btn_txt_cc_on"*/;
  if ( kind != 2 )
    v88 = &StringLiteral_17743/*"btn_txt_cc_off"*/;
  UISprite__set_spriteName((UISprite_o *)Instance, (System_String_o *)*v88, 0LL);
  Instance = (DataManager_o *)v102;
  if ( !v102 )
    goto LABEL_88;
  v89 = UserCommandCodeCollectionMaster__getCollectionList(v102, &findSum[1], findSum, 0LL);
  commandCodeTabLabel = this->fields.commandCodeTabLabel;
  v92 = v89;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v90);
  v93 = LocalizationManager__Get((System_String_o *)StringLiteral_3478/*"CHARA_GRAPH_TAB_COMMAND_CODE"*/, 0LL);
  v104 = findSum[0];
  Instance = (DataManager_o *)j_il2cpp_value_box_0(int_TypeInfo, &v104);
  if ( !v92 )
    goto LABEL_88;
  v94 = (Il2CppObject *)Instance;
  v103 = *(_QWORD *)&v92->max_length;
  v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v103);
  Instance = (DataManager_o *)System_String__Format_62415592(v93, v94, v95, 0LL);
  if ( !commandCodeTabLabel )
    goto LABEL_88;
  UILabel__set_text(commandCodeTabLabel, (System_String_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.commandCodeTabLabel;
  if ( kind != 2 )
  {
    v56 = v51;
    v57 = v50;
    v54 = v49;
    v55 = v48;
  }
  if ( !Instance )
    goto LABEL_88;
  v106.fields.r = v55;
  v106.fields.g = v54;
  v106.fields.b = v57;
  v106.fields.a = v56;
  UILabel__set_effectColor((UILabel_o *)Instance, v106, 0LL);
  Instance = (DataManager_o *)this->fields.commandCodeTabButton;
  if ( !Instance )
    goto LABEL_88;
  Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))Instance->klass[1]._1.implementedInterfaces)(
                                Instance,
                                0LL,
                                v73,
                                Instance->klass[1]._1.interfaceOffsets);
  if ( !v73 && this->fields.tabKind == kind )
    goto LABEL_82;
  if ( kind == 2 )
  {
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v98 = 3;
  }
  else if ( kind == 1 )
  {
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v98 = 1;
  }
  else
  {
    if ( kind )
      goto LABEL_82;
    Instance = (DataManager_o *)this->fields.materialCollectionServantListViewManager;
    if ( !Instance )
      goto LABEL_88;
    v98 = 0;
  }
  MaterialCollectionServantListViewManager__CreateList((MaterialCollectionServantListViewManager_o *)Instance, v98, v96);
LABEL_82:
  materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
  if ( this->fields.state != 2 )
  {
    if ( materialCollectionServantListViewManager )
    {
      v101 = 1;
      goto LABEL_87;
    }
LABEL_88:
    sub_1BCAA3C(Instance, v43);
  }
  v100 = (MaterialCollectionServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                      MaterialCollectionServantListViewManager_CallbackFunc_TypeInfo,
                                                                      v43,
                                                                      v96,
                                                                      v97);
  MaterialCollectionServantListViewManager_CallbackFunc___ctor(
    v100,
    (Il2CppObject *)this,
    Method_MaterialCollectionMenu_OnSelectServant__,
    0LL);
  if ( !materialCollectionServantListViewManager )
    goto LABEL_88;
  materialCollectionServantListViewManager->fields.callbackFunc = v100;
  sub_1BCA784(&materialCollectionServantListViewManager->fields.callbackFunc, v100);
  v101 = 2;
LABEL_87:
  MaterialCollectionServantListViewManager__SetMode_31716764(materialCollectionServantListViewManager, v101, v96);
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

  if ( (byte_4B1170C & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCollectionMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B1170C = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionMenu_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B1170D & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCollectionMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B1170D = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCollectionServantListViewManager_o *)sub_1BCACFC(v8);
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
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A05F80;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A05F38;
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
  if ( (byte_4B1171E & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCollectionMenu_ResultKind_TypeInfo, *(_QWORD *)&result, callback);
    byte_4B1171E = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(MaterialCollectionMenu_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall MaterialCollectionMenu_CallbackFunc__EndInvoke(
        MaterialCollectionMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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