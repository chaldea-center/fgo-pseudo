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
    sub_1B8880C(0LL, call);
  BattleViewBufflistComponent__setHide(buffListView, 0, 0LL);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleFieldConfConponent__CompOpen(BattleFieldConfConponent_o *this, const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1B8880C(0LL, method);
  BattleViewBufflistComponent__setShow(buffListView, 0LL);
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleFieldConfConponent__InitAtlas(BattleFieldConfConponent_o *this, const MethodInfo *method)
{
  BattleDataDefine_c *v3; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x20
  AssetData_o *AssetStorage; // x0
  __int64 v6; // x1
  Il2CppObject *Object_object__48635516; // x20
  Il2CppObject *Component_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5DF64 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3227/*"BattleAssetUIAtlas"*/);
    byte_4A5DF64 = 1;
  }
  v3 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v3 = BattleDataDefine_TypeInfo;
  }
  ASSET_BATTLE_COMMON = v3->static_fields->ASSET_BATTLE_COMMON;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
  if ( !AssetStorage )
    goto LABEL_14;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              AssetStorage,
                              (System_String_o *)StringLiteral_3227/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(
                                  (UnityEngine_Object_o *)Object_object__48635516,
                                  0LL,
                                  0LL);
  if ( ((unsigned __int8)AssetStorage & 1) != 0 )
  {
    if ( Object_object__48635516 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object_object__48635516,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      this->fields.BattleAssetUIAtlas = (struct UIAtlas_o *)Component_object;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.BattleAssetUIAtlas,
        (int32_t)Component_object,
        v9,
        v10);
      return;
    }
LABEL_14:
    sub_1B8880C(AssetStorage, v6);
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
    sub_1B8880C(gameObject, v6);
  }
  v9 = 0;
  v10 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v8 - 1), 0LL);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
  BattleWindowComponent__setClose((BattleWindowComponent_o *)this, 0LL);
  this->fields.callbackClose = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackClose, (int32_t)callback, v11, v12);
  BattleFieldConfConponent__InitAtlas(this, v13);
}


void __fastcall BattleFieldConfConponent__OnClick(BattleFieldConfConponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3

  ActionExtensions__Call(this->fields.callbackClose, 0LL);
  this->fields.fieldData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fieldData, 0, v3, v4);
}


void __fastcall BattleFieldConfConponent__Open(
        BattleFieldConfConponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1B8880C(0LL, call);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fieldData, (int32_t)inFieldData, (int32_t)method, v3);
  if ( *p_fieldData )
  {
    buffListView = this->fields.buffListView;
    BuffData = BattleFieldEnvironmentData__get_BuffData(*p_fieldData, 0LL);
    if ( !BuffData || (BuffData = (BattleBuffData_o *)BattleBuffData__getShowServantConf(BuffData, 0LL), !buffListView) )
      sub_1B8880C(BuffData, v8);
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
    sub_1B8880C(this, 0LL);
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
  if ( (byte_4A5DF65 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_18020/*"close"*/);
    byte_4A5DF65 = 1;
  }
  return (System_String_o *)StringLiteral_18020/*"close"*/;
}


void __fastcall BattleFieldConfConponent__setCallBackPushClose(
        BattleFieldConfConponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.callbackClose = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackClose, (int32_t)callback, (int32_t)method, v3);
}