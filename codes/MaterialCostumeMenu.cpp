void __fastcall MaterialCostumeMenu___ctor(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC2E3 & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC2E3 = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall MaterialCostumeMenu__Callback(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  MaterialCostumeMenu_CallbackFunc_o *v9; // x19
  struct MaterialCostumeMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, v2, v3, v4, v5, v6, v7);
    MaterialCostumeMenu_CallbackFunc__Invoke(v9, 0LL);
  }
}


void __fastcall MaterialCostumeMenu__Close(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCostumeMenu__Close_31977640(this, 0LL, v2);
}


void __fastcall MaterialCostumeMenu__Close_31977640(
        MaterialCostumeMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  if ( (byte_42EC2DB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10164/*"OnStartClose"*/, (_DWORD)callback, (_DWORD)method, v3);
    byte_42EC2DB = 1;
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


void __fastcall MaterialCostumeMenu__EndClose(MaterialCostumeMenu_o *this, const MethodInfo *method)
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

  MaterialCostumeMenu__Init(this, method);
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


void __fastcall MaterialCostumeMenu__EndCloseShowCostume(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x0
  struct MaterialCostumeServantListViewManager_o *v9; // x20
  MaterialCostumeServantListViewManager_CallbackFunc_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_42EC2E1 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_MaterialCostumeMenu_OnSelectCostume__, v5, v6, v7);
    byte_42EC2E1 = 1;
  }
  materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
  if ( !materialCostumeServantListViewManager
    || (MaterialCostumeServantListViewManager__RequestListObject_31987836(materialCostumeServantListViewManager, 4, v2),
        v9 = this->fields.materialCostumeServantListViewManager,
        v10 = (MaterialCostumeServantListViewManager_CallbackFunc_o *)sub_B5D694(MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo),
        MaterialCostumeServantListViewManager_CallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_MaterialCostumeMenu_OnSelectCostume__,
          0LL),
        !v9) )
  {
    sub_B5D69C(materialCostumeServantListViewManager, method);
  }
  v9->fields.callbackFunc = v10;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v9->fields.callbackFunc,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  MaterialCostumeServantListViewManager__SetMode_31979468(v9, 2, v17);
}


void __fastcall MaterialCostumeMenu__EndOpen(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x20
  MaterialCostumeServantListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_42EC2DA & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MaterialCostumeMenu_OnSelectCostume__, v5, v6, v7);
    byte_42EC2DA = 1;
  }
  this->fields.state = 2;
  materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
  v9 = (MaterialCostumeServantListViewManager_CallbackFunc_o *)sub_B5D694(MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo);
  MaterialCostumeServantListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_MaterialCostumeMenu_OnSelectCostume__,
    0LL);
  if ( !materialCostumeServantListViewManager )
    sub_B5D69C(v10, v11);
  materialCostumeServantListViewManager->fields.callbackFunc = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&materialCostumeServantListViewManager->fields.callbackFunc,
    (System_Int32_array **)v9,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  MaterialCostumeServantListViewManager__SetMode_31979468(materialCostumeServantListViewManager, 2, v18);
  ActionExtensions__Call(this->fields.mOpenedAct, 0LL);
}


void __fastcall MaterialCostumeMenu__EndShowCostume(
        MaterialCostumeMenu_o *this,
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
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_42EC2E0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_MaterialCostumeMenu_EndCloseShowCostume__, v5, v6, v7);
    sub_B5D5C4(&Method_MaterialCostumeMenu_EndShowCostume__, v8, v9, v10);
    byte_42EC2E0 = 1;
  }
  v11 = Method_MaterialCostumeMenu_EndShowCostume__;
  if ( (*((_BYTE *)Method_MaterialCostumeMenu_EndShowCostume__ + 75) & 2) != 0 )
    v11 = (_QWORD *)sub_B5D5CC(Method_MaterialCostumeMenu_EndShowCostume__);
  v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_MaterialCostumeMenu_EndCloseShowCostume__, 0LL);
  if ( !itemDetailInfoComp )
    sub_B5D69C(v15, v16);
  ItemDetailInfoComponent__Close_28491116(itemDetailInfoComp, v14, 0LL);
}


void __fastcall MaterialCostumeMenu__Init(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
  this->fields.state = 0;
  if ( !materialCostumeServantListViewManager
    || (MaterialCostumeServantListViewManager__DestroyList(materialCostumeServantListViewManager, method),
        (materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager) == 0LL)
    || (materialCostumeServantListViewManager = (MaterialCostumeServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                             (UnityEngine_Component_o *)materialCostumeServantListViewManager,
                                                                                             0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCostumeServantListViewManager, 0, 0LL),
        (materialCostumeServantListViewManager = (MaterialCostumeServantListViewManager_o *)this->fields.bgTxtSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)materialCostumeServantListViewManager,
                       0LL),
        materialCostumeServantListViewManager = (MaterialCostumeServantListViewManager_o *)BgTxtManager__IsActiveBgTxt(0LL),
        !gameObject) )
  {
    sub_B5D69C(materialCostumeServantListViewManager, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)materialCostumeServantListViewManager & 1, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall MaterialCostumeMenu__OnClickCancel(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42EC2DE & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC2DE = 1;
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
    MaterialCostumeMenu__Callback(this, v5);
  }
}


void __fastcall MaterialCostumeMenu__OnClickDecide(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42EC2DD & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC2DD = 1;
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
    MaterialCostumeMenu__Callback(this, v5);
  }
}


void __fastcall MaterialCostumeMenu__OnClickScaleChange(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42EC2E2 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC2E2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
    if ( !materialCostumeServantListViewManager )
      sub_B5D69C(0LL, v5);
    MaterialCostumeServantListViewManager__ChangeIconScale(materialCostumeServantListViewManager, v5);
    MaterialCostumeMenu__UpdateScaleChangeIconSprite(this, v7);
  }
}


void __fastcall MaterialCostumeMenu__OnMoveEnd(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeMenu__OnSelectCostume(
        MaterialCostumeMenu_o *this,
        int32_t kind,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x0
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  System_String_o *monitor; // x21
  System_String_o *klass; // x22
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v17; // x23

  if ( (byte_42EC2DF & 1) == 0 )
  {
    sub_B5D5C4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, kind, svtId, *(_QWORD *)&costumeId);
    sub_B5D5C4(&Method_MaterialCostumeMenu_EndShowCostume__, v9, v10, v11);
    byte_42EC2DF = 1;
  }
  if ( kind == 1 && this->fields.state == 2 )
  {
    materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
    if ( !materialCostumeServantListViewManager )
      goto LABEL_12;
    materialCostumeServantListViewManager = (MaterialCostumeServantListViewManager_o *)MaterialCostumeServantListViewManager__GetSelectedItem(
                                                                                         materialCostumeServantListViewManager,
                                                                                         svtId,
                                                                                         costumeId,
                                                                                         *(const MethodInfo **)&costumeId);
    if ( !materialCostumeServantListViewManager )
      goto LABEL_12;
    if ( (unsigned int)(LODWORD(materialCostumeServantListViewManager->fields.sortKindButton) - 1) <= 1 )
    {
      dragParentObject = materialCostumeServantListViewManager->fields.dragParentObject;
      if ( dragParentObject )
      {
        monitor = (System_String_o *)dragParentObject[1].monitor;
        klass = (System_String_o *)dragParentObject[2].klass;
        itemDetailInfoComp = this->fields.itemDetailInfoComp;
        v17 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_B5D694(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          (intptr_t)Method_MaterialCostumeMenu_EndShowCostume__,
          0LL);
        if ( itemDetailInfoComp )
        {
          ItemDetailInfoComponent__OpenItemMsgInfo(itemDetailInfoComp, monitor, klass, v17, 0LL);
          return;
        }
      }
LABEL_12:
      sub_B5D69C(materialCostumeServantListViewManager, *(_QWORD *)&kind);
    }
  }
}


void __fastcall MaterialCostumeMenu__OnStartClose(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42EC2DC & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MaterialCostumeMenu_EndClose__, v5, v6, v7);
    byte_42EC2DC = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MaterialCostumeMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v8, 0LL);
}


void __fastcall MaterialCostumeMenu__OnStartOpen(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42EC2D9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_MaterialCostumeMenu_EndOpen__, v5, v6, v7);
    byte_42EC2D9 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_MaterialCostumeMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v8, 0LL);
}


void __fastcall MaterialCostumeMenu__Open(
        MaterialCostumeMenu_o *this,
        System_Action_o *opened_act,
        MaterialCostumeMenu_CallbackFunc_o *callback,
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2

  if ( (byte_42EC2D8 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10165/*"OnStartOpen"*/, (_DWORD)opened_act, (_DWORD)callback, method);
    byte_42EC2D8 = 1;
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
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_10;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.materialCostumeServantListViewManager;
    if ( !gameObject
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.materialCostumeServantListViewManager) == 0LL)
      || (MaterialCostumeServantListViewManager__CreateList(
            (MaterialCostumeServantListViewManager_o *)gameObject,
            0,
            v19),
          MaterialCostumeMenu__UpdateScaleChangeIconSprite(this, v20),
          gameObject = (UnityEngine_GameObject_o *)this->fields.materialCostumeServantListViewManager,
          this->fields.state = 1,
          !gameObject) )
    {
LABEL_10:
      sub_B5D69C(gameObject, v18);
    }
    MaterialCostumeServantListViewManager__SetMode_31979468(
      (MaterialCostumeServantListViewManager_o *)gameObject,
      1,
      v21);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10165/*"OnStartOpen"*/,
      0.5,
      0LL);
  }
}


void __fastcall MaterialCostumeMenu__UpdateScaleChangeIconSprite(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
  if ( !materialCostumeServantListViewManager
    || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
        materialCostumeServantListViewManager = (MaterialCostumeServantListViewManager_o *)MaterialCostumeServantListViewManager__GetScaleButtonSpriteName(
                                                                                             materialCostumeServantListViewManager,
                                                                                             method),
        !scaleChangeTabSprite) )
  {
    sub_B5D69C(materialCostumeServantListViewManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)materialCostumeServantListViewManager, 0LL);
}


void __fastcall MaterialCostumeMenu__add_callbackFunc(
        MaterialCostumeMenu_o *this,
        MaterialCostumeMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct MaterialCostumeMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct MaterialCostumeMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  MaterialCostumeMenu_o *v12; // x0
  MaterialCostumeMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EC2D6 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCostumeMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC2D6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (MaterialCostumeMenu_CallbackFunc_c *)v9->klass != MaterialCostumeMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  MaterialCostumeMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall MaterialCostumeMenu__remove_callbackFunc(
        MaterialCostumeMenu_o *this,
        MaterialCostumeMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct MaterialCostumeMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct MaterialCostumeMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  MaterialCostumeServantListViewManager_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EC2D7 & 1) == 0 )
  {
    sub_B5D5C4(&MaterialCostumeMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EC2D7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (MaterialCostumeMenu_CallbackFunc_c *)v9->klass != MaterialCostumeMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  MaterialCostumeServantListViewManager__DestroyList(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeMenu_CallbackFunc___ctor(
        MaterialCostumeMenu_CallbackFunc_o *this,
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


System_IAsyncResult_o *__fastcall MaterialCostumeMenu_CallbackFunc__BeginInvoke(
        MaterialCostumeMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall MaterialCostumeMenu_CallbackFunc__EndInvoke(
        MaterialCostumeMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall MaterialCostumeMenu_CallbackFunc__Invoke(
        MaterialCostumeMenu_CallbackFunc_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  MaterialCostumeMenu_CallbackFunc_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  MaterialCostumeMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  MaterialCostumeMenu_CallbackFunc_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (MaterialCostumeMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
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
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}