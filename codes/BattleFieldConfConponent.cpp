void __fastcall BattleFieldConfConponent___ctor(BattleFieldConfConponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleFieldConfConponent__Close(
        BattleFieldConfConponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_B170D4();
  BattleViewBufflistComponent__setHide(buffListView, 0, 0LL);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleFieldConfConponent__CompOpen(BattleFieldConfConponent_o *this, const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_B170D4();
  BattleViewBufflistComponent__setShow(buffListView, 0LL);
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleFieldConfConponent__InitAtlas(BattleFieldConfConponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleDataDefine_c *v8; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x20
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F8D50 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, method);
    sub_B16FFC(&AssetManager_TypeInfo, v3);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v4);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_2758/*"BattleAssetUIAtlas"*/, v7);
    byte_40F8D50 = 1;
  }
  v8 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v8 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v8->static_fields->ASSET_BATTLE_COMMON;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_17;
  Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                 AssetStorage,
                                                                 (System_String_o *)StringLiteral_2758/*"BattleAssetUIAtlas"*/,
                                                                 (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
  {
    if ( Object_WarBoardWaitTimeSetting )
    {
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  Object_WarBoardWaitTimeSetting,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      this->fields.BattleAssetUIAtlas = (struct UIAtlas_o *)Component_srcLineSprite;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.BattleAssetUIAtlas,
        (System_Int32_array **)Component_srcLineSprite,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldConfConponent__Initialize(
        BattleFieldConfConponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Transform_o *v8; // x0
  int v9; // s1
  int v10; // s0
  int v11; // s2
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL),
        (v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (v8 = UnityEngine_GameObject__get_transform(v7, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v9 - 1) = UnityEngine_Transform__get_localPosition(v8, 0LL), !transform) )
  {
    sub_B170D4();
  }
  v10 = 0;
  v11 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v9 - 1), 0LL);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
  BattleWindowComponent__setClose((BattleWindowComponent_o *)this, 0LL);
  this->fields.callbackClose = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackClose,
    (System_Int32_array **)callback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  BattleFieldConfConponent__InitAtlas(this, v18);
}


void __fastcall BattleFieldConfConponent__OnClick(BattleFieldConfConponent_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  ActionExtensions__Call(this->fields.callbackClose, 0LL);
  this->fields.fieldData = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.fieldData, 0LL, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattleFieldConfConponent__Open(
        BattleFieldConfConponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_B170D4();
  BattleViewBufflistComponent__setHide(buffListView, 0, 0LL);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleFieldConfConponent__SetConfData(
        BattleFieldConfConponent_o *this,
        BattleFieldEnvironmentData_o *inFieldData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleFieldEnvironmentData_o **p_fieldData; // x20
  const MethodInfo *v10; // x1
  BattleViewBufflistComponent_o *buffListView; // x19
  BattleBuffData_o *BuffData; // x0
  BattleBuffData_ShowBuffData_array *ShowServantConf; // x0

  this->fields.fieldData = inFieldData;
  p_fieldData = &this->fields.fieldData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.fieldData,
    (System_Int32_array **)inFieldData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( *p_fieldData )
  {
    buffListView = this->fields.buffListView;
    BuffData = BattleFieldEnvironmentData__get_BuffData(*p_fieldData, v10);
    if ( !BuffData || (ShowServantConf = BattleBuffData__getShowServantConf(BuffData, 0LL), !buffListView) )
      sub_B170D4();
    BattleViewBufflistComponent__setBuffList(buffListView, ShowServantConf, 0LL);
  }
}


void __fastcall BattleFieldConfConponent__SetUISprite(
        BattleFieldConfConponent_o *this,
        UISprite_o *sprite,
        UIAtlas_o *atlas,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( !sprite )
    sub_B170D4();
  UISprite__set_atlas(sprite, atlas, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
  ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))sprite->klass->vtable._33_MakePixelPerfect.method)(
    sprite,
    sprite->klass->vtable._34_get_minWidth.methodPtr);
}


System_String_o *__fastcall BattleFieldConfConponent__get_closeBtnPath(
        BattleFieldConfConponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F8D51 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17409/*"close"*/, method);
    byte_40F8D51 = 1;
  }
  return (System_String_o *)StringLiteral_17409/*"close"*/;
}


void __fastcall BattleFieldConfConponent__setCallBackPushClose(
        BattleFieldConfConponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.callbackClose = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}