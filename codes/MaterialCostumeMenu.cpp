void __fastcall MaterialCostumeMenu___ctor(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BC2F94 & 1) == 0 )
  {
    sub_1C1ABD4(&BaseMenu_TypeInfo, method);
    byte_4BC2F94 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall MaterialCostumeMenu__Callback(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  struct MaterialCostumeMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct MaterialCostumeMenu_CallbackFunc_o *v3; // x19
  struct MaterialCostumeMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v3 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1C1AB78(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


void __fastcall MaterialCostumeMenu__Close(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCostumeMenu__Close_32097332(this, 0LL, v2);
}


void __fastcall MaterialCostumeMenu__Close_32097332(
        MaterialCostumeMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  if ( (byte_4BC2F8C & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_10145/*"OnStartClose"*/, callback);
    byte_4BC2F8C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C1AB78(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_10145/*"OnStartClose"*/,
    0.1,
    0LL);
}


void __fastcall MaterialCostumeMenu__EndClose(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  MaterialCostumeMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C1AE30(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1C1AB78(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall MaterialCostumeMenu__EndCloseShowCostume(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x0
  struct MaterialCostumeServantListViewManager_o *v6; // x20
  MaterialCostumeServantListViewManager_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4BC2F92 & 1) == 0 )
  {
    sub_1C1ABD4(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_MaterialCostumeMenu_OnSelectCostume__, v4);
    byte_4BC2F92 = 1;
  }
  materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
  if ( !materialCostumeServantListViewManager
    || (MaterialCostumeServantListViewManager__RequestListObject_32107664(materialCostumeServantListViewManager, 4, v2),
        v6 = this->fields.materialCostumeServantListViewManager,
        v7 = (MaterialCostumeServantListViewManager_CallbackFunc_o *)sub_1C1AE20(MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo),
        MaterialCostumeServantListViewManager_CallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_MaterialCostumeMenu_OnSelectCostume__,
          v8),
        !v6) )
  {
    sub_1C1AE30(materialCostumeServantListViewManager, method);
  }
  v6->fields.callbackFunc = v7;
  sub_1C1AB78(&v6->fields.callbackFunc);
  MaterialCostumeServantListViewManager__SetMode_32099104(v6, 2, v9);
}


void __fastcall MaterialCostumeMenu__EndOpen(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x20
  MaterialCostumeServantListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4BC2F8B & 1) == 0 )
  {
    sub_1C1ABD4(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_MaterialCostumeMenu_OnSelectCostume__, v3);
    byte_4BC2F8B = 1;
  }
  this->fields.state = 2;
  materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
  v5 = (MaterialCostumeServantListViewManager_CallbackFunc_o *)sub_1C1AE20(MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo);
  MaterialCostumeServantListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_MaterialCostumeMenu_OnSelectCostume__,
    v6);
  if ( !materialCostumeServantListViewManager )
    sub_1C1AE30(v7, v8);
  materialCostumeServantListViewManager->fields.callbackFunc = v5;
  sub_1C1AB78(&materialCostumeServantListViewManager->fields.callbackFunc);
  MaterialCostumeServantListViewManager__SetMode_32099104(materialCostumeServantListViewManager, 2, v9);
  ActionExtensions__Call(this->fields.mOpenedAct, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeMenu__EndShowCostume(
        MaterialCostumeMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_4BC2F91 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDecide);
    sub_1C1ABD4(&Method_MaterialCostumeMenu_EndCloseShowCostume__, v4);
    sub_1C1ABD4(&Method_MaterialCostumeMenu_EndShowCostume__, v5);
    byte_4BC2F91 = 1;
  }
  v6 = Method_MaterialCostumeMenu_EndShowCostume__;
  if ( (*((_BYTE *)Method_MaterialCostumeMenu_EndShowCostume__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C1ABEC(Method_MaterialCostumeMenu_EndShowCostume__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  v9 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MaterialCostumeMenu_EndCloseShowCostume__, 0LL);
  if ( !itemDetailInfoComp )
    sub_1C1AE30(v10, v11);
  ItemDetailInfoComponent__Close_32012056(itemDetailInfoComp, v9, 0LL);
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
    sub_1C1AE30(materialCostumeServantListViewManager, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)materialCostumeServantListViewManager & 1, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall MaterialCostumeMenu__OnClickCancel(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BC2F8F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_MaterialCostumeMenu_OnClickCancel__, method);
    byte_4BC2F8F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCostumeMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialCostumeMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_MaterialCostumeMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    MaterialCostumeMenu__Callback(this, v5);
  }
}


void __fastcall MaterialCostumeMenu__OnClickDecide(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BC2F8E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_MaterialCostumeMenu_OnClickDecide__, method);
    byte_4BC2F8E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MaterialCostumeMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_MaterialCostumeMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_MaterialCostumeMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    MaterialCostumeMenu__Callback(this, v5);
  }
}


void __fastcall MaterialCostumeMenu__OnClickScaleChange(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4BC2F93 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_MaterialCostumeMenu_OnClickScaleChange__, method);
    byte_4BC2F93 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MaterialCostumeMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_MaterialCostumeMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_MaterialCostumeMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
    if ( !materialCostumeServantListViewManager )
      sub_1C1AE30(0LL, v5);
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
  __int64 v9; // x1
  MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x0
  struct UnityEngine_Vector2_o clipRange; // x8
  System_String_o *v12; // x21
  System_String_o *v13; // x22
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v15; // x23

  if ( (byte_4BC2F90 & 1) == 0 )
  {
    sub_1C1ABD4(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&Method_MaterialCostumeMenu_EndShowCostume__, v9);
    byte_4BC2F90 = 1;
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
    if ( (unsigned int)(LODWORD(materialCostumeServantListViewManager->fields.dropList) - 1) <= 1 )
    {
      clipRange = materialCostumeServantListViewManager->fields.clipRange;
      if ( clipRange )
      {
        v12 = *(System_String_o **)(*(_QWORD *)&clipRange + 32LL);
        v13 = *(System_String_o **)(*(_QWORD *)&clipRange + 48LL);
        itemDetailInfoComp = this->fields.itemDetailInfoComp;
        v15 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1C1AE20(ItemDetailInfoComponent_CallbackFunc_TypeInfo);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          (intptr_t)Method_MaterialCostumeMenu_EndShowCostume__,
          0LL);
        if ( itemDetailInfoComp )
        {
          ItemDetailInfoComponent__OpenItemMsgInfo(itemDetailInfoComp, v12, v13, v15, 0LL);
          return;
        }
      }
LABEL_12:
      sub_1C1AE30(materialCostumeServantListViewManager, *(_QWORD *)&kind);
    }
  }
}


void __fastcall MaterialCostumeMenu__OnStartClose(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4BC2F8D & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_MaterialCostumeMenu_EndClose__, v3);
    byte_4BC2F8D = 1;
  }
  v4 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MaterialCostumeMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v4, 0LL);
}


void __fastcall MaterialCostumeMenu__OnStartOpen(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4BC2F8A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_MaterialCostumeMenu_EndOpen__, v3);
    byte_4BC2F8A = 1;
  }
  v4 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MaterialCostumeMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v4, 0LL);
}


void __fastcall MaterialCostumeMenu__Open(
        MaterialCostumeMenu_o *this,
        System_Action_o *opened_act,
        MaterialCostumeMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4BC2F89 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_10146/*"OnStartOpen"*/, opened_act);
    byte_4BC2F89 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = opened_act;
    sub_1C1AB78(&this->fields.mOpenedAct);
    this->fields.callbackFunc = callback;
    sub_1C1AB78(&this->fields.callbackFunc);
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
            v9),
          MaterialCostumeMenu__UpdateScaleChangeIconSprite(this, v10),
          gameObject = (UnityEngine_GameObject_o *)this->fields.materialCostumeServantListViewManager,
          this->fields.state = 1,
          !gameObject) )
    {
LABEL_10:
      sub_1C1AE30(gameObject, v8);
    }
    MaterialCostumeServantListViewManager__SetMode_32099104(
      (MaterialCostumeServantListViewManager_o *)gameObject,
      1,
      v11);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10146/*"OnStartOpen"*/,
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
    sub_1C1AE30(materialCostumeServantListViewManager, method);
  }
  UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)materialCostumeServantListViewManager, 0LL);
}


void __fastcall MaterialCostumeMenu__add_callbackFunc(
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

  if ( (byte_4BC2F87 & 1) == 0 )
  {
    sub_1C1ABD4(&MaterialCostumeMenu_CallbackFunc_TypeInfo, value);
    byte_4BC2F87 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MaterialCostumeMenu_CallbackFunc_c *)v8->klass != MaterialCostumeMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeMenu_o *)sub_1C1B0F0(v8);
  MaterialCostumeMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall MaterialCostumeMenu__remove_callbackFunc(
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

  if ( (byte_4BC2F88 & 1) == 0 )
  {
    sub_1C1ABD4(&MaterialCostumeMenu_CallbackFunc_TypeInfo, value);
    byte_4BC2F88 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (MaterialCostumeMenu_CallbackFunc_c *)v8->klass != MaterialCostumeMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeServantListViewManager_o *)sub_1C1B0F0(v8);
  MaterialCostumeServantListViewManager__DestroyList(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeMenu_CallbackFunc___ctor(
        MaterialCostumeMenu_CallbackFunc_o *this,
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
  sub_1C1AB78(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A553BC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5537C;
}


System_IAsyncResult_o *__fastcall MaterialCostumeMenu_CallbackFunc__BeginInvoke(
        MaterialCostumeMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1C1AB88(this, &v5, callback, object);
}


void __fastcall MaterialCostumeMenu_CallbackFunc__EndInvoke(
        MaterialCostumeMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
}


void __fastcall MaterialCostumeMenu_CallbackFunc__Invoke(
        MaterialCostumeMenu_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}