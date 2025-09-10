void MaterialCostumeMenu___ctor(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C224BB & 1) == 0 )
  {
    sub_1C2D490(&BaseMenu_TypeInfo);
    byte_4C224BB = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void MaterialCostumeMenu__Callback(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct MaterialCostumeMenu_CallbackFunc_o *v5; // x19
  struct MaterialCostumeMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void MaterialCostumeMenu__Close(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCostumeMenu__Close_33090040(this, 0, v2);
}


void MaterialCostumeMenu__Close_33090040(
        MaterialCostumeMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( (byte_4C224B3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9959/*"OnStartClose"*/);
    byte_4C224B3 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_9959/*"OnStartClose"*/, 0.1, 0);
}


void MaterialCostumeMenu__EndClose(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  MaterialCostumeMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C2D434(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
  }
}


void MaterialCostumeMenu__EndCloseShowCostume(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x0
  struct MaterialCostumeServantListViewManager_o *v5; // x20
  MaterialCostumeServantListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4C224B9 & 1) == 0 )
  {
    sub_1C2D490(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_MaterialCostumeMenu_OnSelectCostume__);
    byte_4C224B9 = 1;
  }
  materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
  if ( !materialCostumeServantListViewManager
    || (MaterialCostumeServantListViewManager__RequestListObject_33100504(materialCostumeServantListViewManager, 4, v2),
        v5 = this->fields.materialCostumeServantListViewManager,
        v6 = (MaterialCostumeServantListViewManager_CallbackFunc_o *)sub_1C2D6DC(MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo),
        MaterialCostumeServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_MaterialCostumeMenu_OnSelectCostume__,
          v7),
        !v5) )
  {
    sub_1C2D6EC(materialCostumeServantListViewManager, method);
  }
  v5->fields.callbackFunc = v6;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9);
  MaterialCostumeServantListViewManager__SetMode_33091812(v5, 2, v10);
}


void MaterialCostumeMenu__EndOpen(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  struct MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x20
  MaterialCostumeServantListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4C224B2 & 1) == 0 )
  {
    sub_1C2D490(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_MaterialCostumeMenu_OnSelectCostume__);
    byte_4C224B2 = 1;
  }
  this->fields.state = 2;
  materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
  v4 = (MaterialCostumeServantListViewManager_CallbackFunc_o *)sub_1C2D6DC(MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo);
  MaterialCostumeServantListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_MaterialCostumeMenu_OnSelectCostume__,
    v5);
  if ( !materialCostumeServantListViewManager )
    sub_1C2D6EC(v6, v7);
  materialCostumeServantListViewManager->fields.callbackFunc = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&materialCostumeServantListViewManager->fields.callbackFunc, (int32_t)v4, v8, v9);
  MaterialCostumeServantListViewManager__SetMode_33091812(materialCostumeServantListViewManager, 2, v10);
  ActionExtensions__Call(this->fields.mOpenedAct, 0);
}


void MaterialCostumeMenu__EndShowCostume(MaterialCostumeMenu_o *this, bool isDecide, const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4C224B8 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_MaterialCostumeMenu_EndCloseShowCostume__);
    sub_1C2D490(&Method_MaterialCostumeMenu_EndShowCostume__);
    byte_4C224B8 = 1;
  }
  v4 = Method_MaterialCostumeMenu_EndShowCostume__;
  if ( (*((_BYTE *)Method_MaterialCostumeMenu_EndShowCostume__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C2D4A8(Method_MaterialCostumeMenu_EndShowCostume__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MaterialCostumeMenu_EndCloseShowCostume__, 0);
  if ( !itemDetailInfoComp )
    sub_1C2D6EC(v8, v9);
  ItemDetailInfoComponent__Close_33002376(itemDetailInfoComp, v7, 0);
}


void MaterialCostumeMenu__Init(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x0
  UnityEngine_GameObject_o *gameObject; // x20

  materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
  this->fields.state = 0;
  if ( !materialCostumeServantListViewManager
    || (MaterialCostumeServantListViewManager__DestroyList(materialCostumeServantListViewManager, method),
        (materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager) == 0)
    || (materialCostumeServantListViewManager = (MaterialCostumeServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                                             (UnityEngine_Component_o *)materialCostumeServantListViewManager,
                                                                                             0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialCostumeServantListViewManager, 0, 0),
        (materialCostumeServantListViewManager = (MaterialCostumeServantListViewManager_o *)this->fields.bgTxtSprite) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)materialCostumeServantListViewManager,
                       0),
        materialCostumeServantListViewManager = (MaterialCostumeServantListViewManager_o *)BgTxtManager__IsActiveBgTxt(0),
        !gameObject) )
  {
    sub_1C2D6EC(materialCostumeServantListViewManager, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)materialCostumeServantListViewManager & 1, 0);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void MaterialCostumeMenu__OnClickCancel(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C224B6 & 1) == 0 )
  {
    sub_1C2D490(&Method_MaterialCostumeMenu_OnClickCancel__);
    byte_4C224B6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCostumeMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialCostumeMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_MaterialCostumeMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    MaterialCostumeMenu__Callback(this, v5);
  }
}


void MaterialCostumeMenu__OnClickDecide(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C224B5 & 1) == 0 )
  {
    sub_1C2D490(&Method_MaterialCostumeMenu_OnClickDecide__);
    byte_4C224B5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCostumeMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_MaterialCostumeMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_MaterialCostumeMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    MaterialCostumeMenu__Callback(this, v5);
  }
}


void MaterialCostumeMenu__OnClickScaleChange(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4C224BA & 1) == 0 )
  {
    sub_1C2D490(&Method_MaterialCostumeMenu_OnClickScaleChange__);
    byte_4C224BA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCostumeMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_MaterialCostumeMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_MaterialCostumeMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
    if ( !materialCostumeServantListViewManager )
      sub_1C2D6EC(0, v5);
    MaterialCostumeServantListViewManager__ChangeIconScale(materialCostumeServantListViewManager, v5);
    MaterialCostumeMenu__UpdateScaleChangeIconSprite(this, v7);
  }
}


void MaterialCostumeMenu__OnMoveEnd(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void MaterialCostumeMenu__OnSelectCostume(
        MaterialCostumeMenu_o *this,
        int32_t kind,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x0
  struct UnityEngine_GameObject_o *dragParentObject; // x8
  System_String_o *monitor; // x21
  System_String_o *klass; // x22
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v14; // x23

  if ( (byte_4C224B7 & 1) == 0 )
  {
    sub_1C2D490(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_MaterialCostumeMenu_EndShowCostume__);
    byte_4C224B7 = 1;
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
        v14 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C2D6DC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          (intptr_t)Method_MaterialCostumeMenu_EndShowCostume__,
          0);
        if ( itemDetailInfoComp )
        {
          ItemDetailInfoComponent__OpenItemMsgInfo(itemDetailInfoComp, monitor, klass, v14, 0);
          return;
        }
      }
LABEL_12:
      sub_1C2D6EC(materialCostumeServantListViewManager, *(_QWORD *)&kind);
    }
  }
}


void MaterialCostumeMenu__OnStartClose(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C224B4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_MaterialCostumeMenu_EndClose__);
    byte_4C224B4 = 1;
  }
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MaterialCostumeMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v3, 0);
}


void MaterialCostumeMenu__OnStartOpen(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C224B1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_MaterialCostumeMenu_EndOpen__);
    byte_4C224B1 = 1;
  }
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MaterialCostumeMenu_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v3, 0);
}


void MaterialCostumeMenu__Open(
        MaterialCostumeMenu_o *this,
        System_Action_o *opened_act,
        MaterialCostumeMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C224B0 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9960/*"OnStartOpen"*/);
    byte_4C224B0 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = opened_act;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mOpenedAct, (int32_t)opened_act, (int32_t)callback, method);
    this->fields.callbackFunc = callback;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v7, v8);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_10;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.materialCostumeServantListViewManager;
    if ( !gameObject
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0
      || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.materialCostumeServantListViewManager) == 0)
      || (MaterialCostumeServantListViewManager__CreateList(
            (MaterialCostumeServantListViewManager_o *)gameObject,
            0,
            v11),
          MaterialCostumeMenu__UpdateScaleChangeIconSprite(this, v12),
          gameObject = (UnityEngine_GameObject_o *)this->fields.materialCostumeServantListViewManager,
          this->fields.state = 1,
          !gameObject) )
    {
LABEL_10:
      sub_1C2D6EC(gameObject, v10);
    }
    MaterialCostumeServantListViewManager__SetMode_33091812(
      (MaterialCostumeServantListViewManager_o *)gameObject,
      1,
      v13);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9960/*"OnStartOpen"*/,
      0.5,
      0);
  }
}


void MaterialCostumeMenu__UpdateScaleChangeIconSprite(MaterialCostumeMenu_o *this, const MethodInfo *method)
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
    sub_1C2D6EC(materialCostumeServantListViewManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)materialCostumeServantListViewManager, 0);
}


void MaterialCostumeMenu__add_callbackFunc(
        MaterialCostumeMenu_o *this,
        MaterialCostumeMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MaterialCostumeMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MaterialCostumeMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialCostumeMenu_o *v11; // x0
  MaterialCostumeMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C224AE & 1) == 0 )
  {
    sub_1C2D490(&MaterialCostumeMenu_CallbackFunc_TypeInfo);
    byte_4C224AE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (MaterialCostumeMenu_CallbackFunc_c *)v8->klass != MaterialCostumeMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeMenu_o *)sub_1C2D9AC(v8);
  MaterialCostumeMenu__remove_callbackFunc(v11, v12, v13);
}


void MaterialCostumeMenu__remove_callbackFunc(
        MaterialCostumeMenu_o *this,
        MaterialCostumeMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct MaterialCostumeMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct MaterialCostumeMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  MaterialCostumeServantListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C224AF & 1) == 0 )
  {
    sub_1C2D490(&MaterialCostumeMenu_CallbackFunc_TypeInfo);
    byte_4C224AF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (MaterialCostumeMenu_CallbackFunc_c *)v8->klass != MaterialCostumeMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeServantListViewManager_o *)sub_1C2D9AC(v8);
  MaterialCostumeServantListViewManager__DestroyList(v11, v12);
}


void MaterialCostumeMenu_CallbackFunc___ctor(
        MaterialCostumeMenu_CallbackFunc_o *this,
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
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6AC28;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6ABE8;
}


System_IAsyncResult_o *MaterialCostumeMenu_CallbackFunc__BeginInvoke(
        MaterialCostumeMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v5, callback, object);
}


void MaterialCostumeMenu_CallbackFunc__EndInvoke(
        MaterialCostumeMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void MaterialCostumeMenu_CallbackFunc__Invoke(MaterialCostumeMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}