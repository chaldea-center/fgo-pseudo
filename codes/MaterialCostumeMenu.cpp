void __fastcall MaterialCostumeMenu___ctor(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B117A3 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B117A3 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
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
    sub_1BCA784(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v3->fields.m_target)(
      v3->fields.original_method_info,
      *(_QWORD *)&v3->fields.extra_arg);
  }
}


void __fastcall MaterialCostumeMenu__Close(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MaterialCostumeMenu__Close_31753516(this, 0LL, v2);
}


void __fastcall MaterialCostumeMenu__Close_31753516(
        MaterialCostumeMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  if ( (byte_4B1179B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10091/*"OnStartClose"*/, callback, method);
    byte_4B1179B = 1;
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


void __fastcall MaterialCostumeMenu__EndCloseShowCostume(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x0
  struct MaterialCostumeServantListViewManager_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  MaterialCostumeServantListViewManager_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4B117A1 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MaterialCostumeMenu_OnSelectCostume__, v4, v5);
    byte_4B117A1 = 1;
  }
  materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
  if ( !materialCostumeServantListViewManager
    || (MaterialCostumeServantListViewManager__RequestListObject_31763888(materialCostumeServantListViewManager, 4, v2),
        v7 = this->fields.materialCostumeServantListViewManager,
        v11 = (MaterialCostumeServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                        MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo,
                                                                        v8,
                                                                        v9,
                                                                        v10),
        MaterialCostumeServantListViewManager_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_MaterialCostumeMenu_OnSelectCostume__,
          v12),
        !v7) )
  {
    sub_1BCAA3C(materialCostumeServantListViewManager, method);
  }
  v7->fields.callbackFunc = v11;
  sub_1BCA784(&v7->fields.callbackFunc, v11);
  MaterialCostumeServantListViewManager__SetMode_31755344(v7, 2, v13);
}


void __fastcall MaterialCostumeMenu__EndOpen(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x20
  MaterialCostumeServantListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B1179A & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MaterialCostumeMenu_OnSelectCostume__, v5, v6);
    byte_4B1179A = 1;
  }
  this->fields.state = 2;
  materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
  v8 = (MaterialCostumeServantListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                                 MaterialCostumeServantListViewManager_CallbackFunc_TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  MaterialCostumeServantListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_MaterialCostumeMenu_OnSelectCostume__,
    v9);
  if ( !materialCostumeServantListViewManager )
    sub_1BCAA3C(v10, v11);
  materialCostumeServantListViewManager->fields.callbackFunc = v8;
  sub_1BCA784(&materialCostumeServantListViewManager->fields.callbackFunc, v8);
  MaterialCostumeServantListViewManager__SetMode_31755344(materialCostumeServantListViewManager, 2, v12);
  ActionExtensions__Call(this->fields.mOpenedAct, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialCostumeMenu__EndShowCostume(
        MaterialCostumeMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Action_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4B117A0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_MaterialCostumeMenu_EndCloseShowCostume__, v4, v5);
    sub_1BCA7E0(&Method_MaterialCostumeMenu_EndShowCostume__, v6, v7);
    byte_4B117A0 = 1;
  }
  v8 = Method_MaterialCostumeMenu_EndShowCostume__;
  if ( (*((_BYTE *)Method_MaterialCostumeMenu_EndShowCostume__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_MaterialCostumeMenu_EndShowCostume__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  itemDetailInfoComp = this->fields.itemDetailInfoComp;
  v14 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_MaterialCostumeMenu_EndCloseShowCostume__, 0LL);
  if ( !itemDetailInfoComp )
    sub_1BCAA3C(v15, v16);
  ItemDetailInfoComponent__Close_31668900(itemDetailInfoComp, v14, 0LL);
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
    sub_1BCAA3C(materialCostumeServantListViewManager, method);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)materialCostumeServantListViewManager & 1, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall MaterialCostumeMenu__OnClickCancel(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B1179E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCostumeMenu_OnClickCancel__, method, v2);
    byte_4B1179E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_MaterialCostumeMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_MaterialCostumeMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MaterialCostumeMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    MaterialCostumeMenu__Callback(this, v6);
  }
}


void __fastcall MaterialCostumeMenu__OnClickDecide(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B1179D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCostumeMenu_OnClickDecide__, method, v2);
    byte_4B1179D = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_MaterialCostumeMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_MaterialCostumeMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MaterialCostumeMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    MaterialCostumeMenu__Callback(this, v6);
  }
}


void __fastcall MaterialCostumeMenu__OnClickScaleChange(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4B117A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MaterialCostumeMenu_OnClickScaleChange__, method, v2);
    byte_4B117A2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_MaterialCostumeMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_MaterialCostumeMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MaterialCostumeMenu_OnClickScaleChange__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    materialCostumeServantListViewManager = this->fields.materialCostumeServantListViewManager;
    if ( !materialCostumeServantListViewManager )
      sub_1BCAA3C(0LL, v6);
    MaterialCostumeServantListViewManager__ChangeIconScale(materialCostumeServantListViewManager, v6);
    MaterialCostumeMenu__UpdateScaleChangeIconSprite(this, v8);
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
  __int64 v10; // x2
  MaterialCostumeServantListViewManager_o *materialCostumeServantListViewManager; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  struct UnityEngine_Vector2_o clipRange; // x8
  System_String_o *v15; // x21
  System_String_o *v16; // x22
  ItemDetailInfoComponent_o *itemDetailInfoComp; // x20
  ItemDetailInfoComponent_CallbackFunc_o *v18; // x23

  if ( (byte_4B1179F & 1) == 0 )
  {
    sub_1BCA7E0(&ItemDetailInfoComponent_CallbackFunc_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_MaterialCostumeMenu_EndShowCostume__, v9, v10);
    byte_4B1179F = 1;
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
        v15 = *(System_String_o **)(*(_QWORD *)&clipRange + 32LL);
        v16 = *(System_String_o **)(*(_QWORD *)&clipRange + 48LL);
        itemDetailInfoComp = this->fields.itemDetailInfoComp;
        v18 = (ItemDetailInfoComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                          ItemDetailInfoComponent_CallbackFunc_TypeInfo,
                                                          *(_QWORD *)&kind,
                                                          v12,
                                                          v13);
        ItemDetailInfoComponent_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)this,
          (intptr_t)Method_MaterialCostumeMenu_EndShowCostume__,
          0LL);
        if ( itemDetailInfoComp )
        {
          ItemDetailInfoComponent__OpenItemMsgInfo(itemDetailInfoComp, v15, v16, v18, 0LL);
          return;
        }
      }
LABEL_12:
      sub_1BCAA3C(materialCostumeServantListViewManager, *(_QWORD *)&kind);
    }
  }
}


void __fastcall MaterialCostumeMenu__OnStartClose(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B1179C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MaterialCostumeMenu_EndClose__, v5, v6);
    byte_4B1179C = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MaterialCostumeMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v7, 0LL);
}


void __fastcall MaterialCostumeMenu__OnStartOpen(MaterialCostumeMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B11799 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_MaterialCostumeMenu_EndOpen__, v5, v6);
    byte_4B11799 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MaterialCostumeMenu_EndOpen__, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, v7, 0LL);
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

  if ( (byte_4B11798 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10092/*"OnStartOpen"*/, opened_act, callback);
    byte_4B11798 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.mOpenedAct = opened_act;
    sub_1BCA784(&this->fields.mOpenedAct, opened_act);
    this->fields.callbackFunc = callback;
    sub_1BCA784(&this->fields.callbackFunc, callback);
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
      sub_1BCAA3C(gameObject, v8);
    }
    MaterialCostumeServantListViewManager__SetMode_31755344(
      (MaterialCostumeServantListViewManager_o *)gameObject,
      1,
      v11);
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10092/*"OnStartOpen"*/,
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
    sub_1BCAA3C(materialCostumeServantListViewManager, method);
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

  if ( (byte_4B11796 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCostumeMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11796 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeMenu_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B11797 & 1) == 0 )
  {
    sub_1BCA7E0(&MaterialCostumeMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11797 = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MaterialCostumeServantListViewManager_o *)sub_1BCACFC(v8);
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
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A060BC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0607C;
}


System_IAsyncResult_o *__fastcall MaterialCostumeMenu_CallbackFunc__BeginInvoke(
        MaterialCostumeMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v5, callback, object);
}


void __fastcall MaterialCostumeMenu_CallbackFunc__EndInvoke(
        MaterialCostumeMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall MaterialCostumeMenu_CallbackFunc__Invoke(
        MaterialCostumeMenu_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}