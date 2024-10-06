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
    sub_1B9026C(0LL, call);
  BattleViewBufflistComponent__setHide(buffListView, 0, 0LL);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleFieldConfConponent__CompOpen(BattleFieldConfConponent_o *this, const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1B9026C(0LL, method);
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
  __int64 v11; // x1
  Il2CppObject *Object_object__48695184; // x20
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A72C7C & 1) == 0 )
  {
    sub_1B90010(&Method_AssetData_GetObject_GameObject____76169496, method);
    sub_1B90010(&AssetManager_TypeInfo, v3);
    sub_1B90010(&BattleDataDefine_TypeInfo, v4);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    sub_1B90010(&StringLiteral_3228/*"BattleAssetUIAtlas"*/, v7);
    byte_4A72C7C = 1;
  }
  v8 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v8 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v8->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  Object_object__48695184 = AssetData__GetObject_object__48695184(
                              AssetStorage,
                              (System_String_o *)StringLiteral_3228/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_2E70790 *)Method_AssetData_GetObject_GameObject____76169496);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(
                                  (UnityEngine_Object_o *)Object_object__48695184,
                                  0LL,
                                  0LL);
  if ( ((unsigned __int8)AssetStorage & 1) != 0 )
  {
    if ( Object_object__48695184 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object_object__48695184,
                           (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      this->fields.BattleAssetUIAtlas = (struct UIAtlas_o *)Component_object;
      sub_1B8FFB4(
        (ServantStatusBattleListViewItem_o *)&this->fields.BattleAssetUIAtlas,
        (int32_t)Component_object,
        v14,
        v15);
      return;
    }
LABEL_14:
    sub_1B9026C(AssetStorage, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldConfConponent__Initialize(
        BattleFieldConfConponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x21
  int v8; // s1
  int v9; // s0
  int v10; // s2
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (transform = UnityEngine_GameObject__get_transform(gameObject, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL)) == 0LL
    || (*(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)gameObject,
                                                0LL),
        !transform) )
  {
    sub_1B9026C(gameObject, v6);
  }
  v9 = 0;
  v10 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v8 - 1), 0LL);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
  BattleWindowComponent__setClose((BattleWindowComponent_o *)this, 0LL);
  this->fields.callbackClose = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackClose, (int32_t)callback, v11, v12);
  BattleFieldConfConponent__InitAtlas(this, v13);
}


void __fastcall BattleFieldConfConponent__OnClick(BattleFieldConfConponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3

  ActionExtensions__Call(this->fields.callbackClose, 0LL);
  this->fields.fieldData = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.fieldData, 0, v3, v4);
}


void __fastcall BattleFieldConfConponent__Open(
        BattleFieldConfConponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1B9026C(0LL, call);
  BattleViewBufflistComponent__setHide(buffListView, 0, 0LL);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleFieldConfConponent__SetConfData(
        BattleFieldConfConponent_o *this,
        BattleFieldEnvironmentData_o *inFieldData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  BattleFieldEnvironmentData_o **p_fieldData; // x20
  BattleViewBufflistComponent_o *buffListView; // x19
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1

  this->fields.fieldData = inFieldData;
  p_fieldData = &this->fields.fieldData;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.fieldData, (int32_t)inFieldData, (int32_t)method, v3);
  if ( *p_fieldData )
  {
    buffListView = this->fields.buffListView;
    BuffData = BattleFieldEnvironmentData__get_BuffData(*p_fieldData, 0LL);
    if ( !BuffData || (BuffData = (BattleBuffData_o *)BattleBuffData__getShowServantConf(BuffData, 0LL), !buffListView) )
      sub_1B9026C(BuffData, v8);
    BattleViewBufflistComponent__setBuffList(buffListView, (BattleBuffData_ShowBuffData_array *)BuffData, 0LL);
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
    sub_1B9026C(this, 0LL);
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
  if ( (byte_4A72C7D & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_18046/*"close"*/, method);
    byte_4A72C7D = 1;
  }
  return (System_String_o *)StringLiteral_18046/*"close"*/;
}


void __fastcall BattleFieldConfConponent__setCallBackPushClose(
        BattleFieldConfConponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.callbackClose = callback;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.callbackClose, (int32_t)callback, (int32_t)method, v3);
}