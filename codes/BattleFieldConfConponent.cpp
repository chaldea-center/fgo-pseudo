void BattleFieldConfConponent___ctor(BattleFieldConfConponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleFieldConfConponent__Close(
        BattleFieldConfConponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_21FFECC(0, call);
  BattleViewBufflistComponent__setHide(buffListView, 0, 0);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0);
}


void BattleFieldConfConponent__CompOpen(BattleFieldConfConponent_o *this, const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_21FFECC(0, method);
  BattleViewBufflistComponent__setShow(buffListView, 0);
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0);
}


void BattleFieldConfConponent__InitAtlas(BattleFieldConfConponent_o *this, const MethodInfo *method)
{
  BattleDataDefine_c *v3; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Object_object__58323140; // x20
  Il2CppObject *Component_object; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_593BD20 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&BattleDataDefine_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_3226/*"BattleAssetUIAtlas"*/);
    byte_593BD20 = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
    v3 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v3->static_fields->ASSET_BATTLE_COMMON;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
  if ( !AssetStorage )
    goto LABEL_14;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              AssetStorage,
                              (System_String_o *)StringLiteral_3226/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__58323140, 0, 0);
  if ( ((unsigned __int8)AssetStorage & 1) != 0 )
  {
    if ( Object_object__58323140 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object_object__58323140,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      this->fields.BattleAssetUIAtlas = (struct UIAtlas_o *)Component_object;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.BattleAssetUIAtlas,
        (int32_t)Component_object,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      return;
    }
LABEL_14:
    sub_21FFECC(AssetStorage, v6);
  }
}


void BattleFieldConfConponent__Initialize(
        BattleFieldConfConponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x21
  int v8; // s0
  int v9; // s2
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0), !transform) )
  {
    sub_21FFECC(gameObject, v6);
  }
  v8 = 0;
  v9 = 0;
  UnityEngine_Transform__set_localPosition(transform, localPosition, 0);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0);
  BattleWindowComponent__setClose((BattleWindowComponent_o *)this, 0);
  this->fields.callbackClose = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackClose,
    (int32_t)callback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  BattleFieldConfConponent__InitAtlas(this, v16);
}


void BattleFieldConfConponent__OnClick(BattleFieldConfConponent_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  if ( !BattleWindowComponent__isOpening((BattleWindowComponent_o *)this, 0) )
  {
    ActionExtensions__Call(this->fields.callbackClose, 0);
    this->fields.fieldData = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.fieldData, 0, v3, v4, v5, v6, v7, v8);
  }
}


void BattleFieldConfConponent__Open(
        BattleFieldConfConponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_21FFECC(0, call);
  BattleViewBufflistComponent__setHide(buffListView, 0, 0);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
}


void BattleFieldConfConponent__SetConfData(
        BattleFieldConfConponent_o *this,
        BattleFieldEnvironmentData_o *inFieldData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleFieldEnvironmentData_o **p_fieldData; // x20
  BattleViewBufflistComponent_o *buffListView; // x19
  BattleBuffData_o *BuffData; // x0
  __int64 v12; // x1

  this->fields.fieldData = inFieldData;
  p_fieldData = &this->fields.fieldData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fieldData,
    (int32_t)inFieldData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( *p_fieldData )
  {
    buffListView = this->fields.buffListView;
    BuffData = BattleFieldEnvironmentData__get_BuffData(*p_fieldData, 0);
    if ( !BuffData || (BuffData = (BattleBuffData_o *)BattleBuffData__getShowServantConf(BuffData, 0), !buffListView) )
      sub_21FFECC(BuffData, v12);
    BattleViewBufflistComponent__setBuffList(buffListView, (BattleBuffData_ShowBuffData_array *)BuffData, 0);
  }
}


void BattleFieldConfConponent__SetUISprite(
        BattleFieldConfConponent_o *this,
        UISprite_o *sprite,
        UIAtlas_o *atlas,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( !sprite )
    sub_21FFECC(this, 0);
  UISprite__set_atlas(sprite, atlas, 0);
  UISprite__set_spriteName(sprite, spriteName, 0);
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))sprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
    sprite,
    sprite->klass->vtable._33_MakePixelPerfect.method);
}


System_String_o *BattleFieldConfConponent__get_closeBtnPath(BattleFieldConfConponent_o *this, const MethodInfo *method)
{
  if ( (byte_593BD21 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18775/*"close"*/);
    byte_593BD21 = 1;
  }
  return (System_String_o *)StringLiteral_18775/*"close"*/;
}


void BattleFieldConfConponent__setCallBackPushClose(
        BattleFieldConfConponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.callbackClose = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackClose,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}