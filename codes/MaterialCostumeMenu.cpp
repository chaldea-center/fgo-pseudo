void MaterialCostumeMenu___ctor(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_5933602 & 1) == 0 )
  {
    sub_21FFC50(&BaseMenu_TypeInfo);
    byte_5933602 = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method, v2);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void MaterialCostumeMenu__Callback(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct MaterialCostumeMenu_CallbackFunc_o *v9; // x19
  struct MaterialCostumeMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void MaterialCostumeMenu__Close(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCostumeMenu__Close_39992376(this, 0, v2);
}


void MaterialCostumeMenu__Close_39992376(
        MaterialCostumeMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x1

  if ( (byte_59335FA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10355/*"OnStartClose"*/);
    byte_59335FA = 1;
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


void MaterialCostumeMenu__EndClose(MaterialCostumeMenu_o *this, const MethodInfo *method)
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

  MaterialCostumeMenu__Init(this, method);
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


void MaterialCostumeMenu__EndCloseShowCostume(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x0
  struct MaterialCostumeServantListViewManager_o *v5; // x20
  MaterialCostumeServantListViewManager_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2

  if ( (byte_5933600 & 1) == 0 )
  {
    sub_21FFC50(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_MaterialCostumeMenu_OnSelectCostume__);
    byte_5933600 = 1;
  }
  materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
  if ( !materialCostumeServantListViewManager
    || (MaterialCostumeServantListViewManager__RequestListObject_40002796(materialCostumeServantListViewManager, 4, v2),
        v5 = this->fields.materialCostumeServantListViewManager,
        v6 = (MaterialCostumeServantListViewManager_CallbackFunc_o *)sub_21FFEBC(MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo),
        MaterialCostumeServantListViewManager_CallbackFunc___ctor(
          v6,
          (Il2CppObject *)this,
          Method_MaterialCostumeMenu_OnSelectCostume__,
          v7),
        !v5) )
  {
    sub_21FFECC(materialCostumeServantListViewManager, method);
  }
  v5->fields.callbackFunc = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5->fields.callbackFunc, (int32_t)v6, v8, v9, v10, v11, v12, v13);
  MaterialCostumeServantListViewManager__SetMode_39994148(v5, 2, v14);
}


void MaterialCostumeMenu__EndOpen(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  MaterialCostumeServantListViewManager_CallbackFunc_c *v3; // x0
  struct MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x20
  MaterialCostumeServantListViewManager_CallbackFunc_o *v5; // x21
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

  if ( (byte_59335F9 & 1) == 0 )
  {
    sub_21FFC50(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_MaterialCostumeMenu_OnSelectCostume__);
    byte_59335F9 = 1;
  }
  v3 = MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo;
  materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
  this->fields.state = 2;
  v5 = (MaterialCostumeServantListViewManager_CallbackFunc_o *)sub_21FFEBC(v3);
  MaterialCostumeServantListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MaterialCostumeMenu_OnSelectCostume__,
    v6);
  if ( !materialCostumeServantListViewManager )
    sub_21FFECC(v7, v8);
  materialCostumeServantListViewManager->fields.callbackFunc = v5;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&materialCostumeServantListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  MaterialCostumeServantListViewManager__SetMode_39994148(materialCostumeServantListViewManager, 2, v15);
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

  if ( (byte_59335FF & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_MaterialCostumeMenu_EndCloseShowCostume__);
    sub_21FFC50(&Method_MaterialCostumeMenu_EndShowCostume__);
    byte_59335FF = 1;
  }
  v4 = Method_MaterialCostumeMenu_EndShowCostume__;
  if ( (*((_BYTE *)Method_MaterialCostumeMenu_EndShowCostume__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_21FFC68(Method_MaterialCostumeMenu_EndShowCostume__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MaterialCostumeMenu_EndCloseShowCostume__, 0);
  if ( !itemDetailInfoComp )
    sub_21FFECC(v8, v9);
  ItemDetailInfoComponent__Close_39907844(itemDetailInfoComp, v7, 0);
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
    sub_21FFECC(materialCostumeServantListViewManager, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)materialCostumeServantListViewManager & 1, 0);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void MaterialCostumeMenu__OnClickCancel(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_59335FD & 1) == 0 )
  {
    sub_21FFC50(&Method_MaterialCostumeMenu_OnClickCancel__);
    byte_59335FD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCostumeMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialCostumeMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_MaterialCostumeMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    MaterialCostumeMenu__Callback(this, v5);
  }
}


void MaterialCostumeMenu__OnClickDecide(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_59335FC & 1) == 0 )
  {
    sub_21FFC50(&Method_MaterialCostumeMenu_OnClickDecide__);
    byte_59335FC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCostumeMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_MaterialCostumeMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_MaterialCostumeMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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

  if ( (byte_5933601 & 1) == 0 )
  {
    sub_21FFC50(&Method_MaterialCostumeMenu_OnClickScaleChange__);
    byte_5933601 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCostumeMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_MaterialCostumeMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_MaterialCostumeMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
    if ( !materialCostumeServantListViewManager )
      sub_21FFECC(0, v5);
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
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  System_String_o *monitor; // x21
  System_String_o *klass; // x22
  ItemDetailInfoComponent_CallbackFunc_o *v14; // x23

  if ( (byte_59335FE & 1) == 0 )
  {
    sub_21FFC50(&ItemDetailInfoComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_MaterialCostumeMenu_EndShowCostume__);
    byte_59335FE = 1;
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
        itemDetailInfoComp = this->fields.itemDetailInfoComp;
        monitor = (System_String_o *)dragParentObject[1].monitor;
        klass = (System_String_o *)dragParentObject[2].klass;
        v14 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_21FFEBC(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
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
      sub_21FFECC(materialCostumeServantListViewManager, *(_QWORD *)&kind);
    }
  }
}


void MaterialCostumeMenu__OnStartClose(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_59335FB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_MaterialCostumeMenu_EndClose__);
    byte_59335FB = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MaterialCostumeMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v3, 0);
}


void MaterialCostumeMenu__OnStartOpen(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_59335F8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_MaterialCostumeMenu_EndOpen__);
    byte_59335F8 = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MaterialCostumeMenu_EndOpen__, 0);
  BaseMenu__Open((BaseMenu_o *)this, v3, 0);
}


void MaterialCostumeMenu__Open(
        MaterialCostumeMenu_o *this,
        System_Action_o *opened_act,
        MaterialCostumeMenu_CallbackFunc_o *callback,
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2

  if ( (byte_59335F7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10356/*"OnStartOpen"*/);
    byte_59335F7 = 1;
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
            v19),
          MaterialCostumeMenu__UpdateScaleChangeIconSprite(this, v20),
          gameObject = (UnityEngine_GameObject_o *)this->fields.materialCostumeServantListViewManager,
          this->fields.state = 1,
          !gameObject) )
    {
LABEL_10:
      sub_21FFECC(gameObject, v18);
    }
    MaterialCostumeServantListViewManager__SetMode_39994148(
      (MaterialCostumeServantListViewManager_o *)gameObject,
      1,
      v21);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10356/*"OnStartOpen"*/,
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
    sub_21FFECC(materialCostumeServantListViewManager, method);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  MaterialCostumeMenu_o *v13; // x0
  MaterialCostumeMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_59335F5 & 1) == 0 )
  {
    sub_21FFC50(&MaterialCostumeMenu_CallbackFunc_TypeInfo);
    byte_59335F5 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (MaterialCostumeMenu_o *)sub_220024C(v8, MaterialCostumeMenu_CallbackFunc_TypeInfo, v9, v10);
  MaterialCostumeMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  MaterialCostumeServantListViewManager_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_59335F6 & 1) == 0 )
  {
    sub_21FFC50(&MaterialCostumeMenu_CallbackFunc_TypeInfo);
    byte_59335F6 = 1;
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
    v11 = sub_223767C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (MaterialCostumeServantListViewManager_o *)sub_220024C(v8, MaterialCostumeMenu_CallbackFunc_TypeInfo, v9, v10);
  MaterialCostumeServantListViewManager__DestroyList(v13, v14);
}


void MaterialCostumeMenu_CallbackFunc___ctor(
        MaterialCostumeMenu_CallbackFunc_o *this,
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
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FEF504;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FEF4C4;
}


System_IAsyncResult_o *MaterialCostumeMenu_CallbackFunc__BeginInvoke(
        MaterialCostumeMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_21FFC04(this, &v5, callback, object);
}


void MaterialCostumeMenu_CallbackFunc__EndInvoke(
        MaterialCostumeMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void MaterialCostumeMenu_CallbackFunc__Invoke(MaterialCostumeMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}