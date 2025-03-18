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
    sub_1C3B9C0(0LL, call);
  BattleViewBufflistComponent__setHide(buffListView, 0, 0LL);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleFieldConfConponent__CompOpen(BattleFieldConfConponent_o *this, const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1C3B9C0(0LL, method);
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
  Il2CppObject *Object_object__50142412; // x20
  Il2CppObject *Component_object; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4C24F81 & 1) == 0 )
  {
    sub_1C3B764(&Method_AssetData_GetObject_GameObject____77902856, method);
    sub_1C3B764(&AssetManager_TypeInfo, v3);
    sub_1C3B764(&BattleDataDefine_TypeInfo, v4);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    sub_1C3B764(&StringLiteral_3261/*"Button.onClick"*/, v7);
    byte_4C24F81 = 1;
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
  Object_object__50142412 = AssetData__GetObject_object__50142412(
                              AssetStorage,
                              (System_String_o *)StringLiteral_3261/*"Button.onClick"*/,
                              (const MethodInfo_2FD1CCC *)Method_AssetData_GetObject_GameObject____77902856);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(
                                  (UnityEngine_Object_o *)Object_object__50142412,
                                  0LL,
                                  0LL);
  if ( ((unsigned __int8)AssetStorage & 1) != 0 )
  {
    if ( Object_object__50142412 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object_object__50142412,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      this->fields.BattleAssetUIAtlas = (struct UIAtlas_o *)Component_object;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&this->fields.BattleAssetUIAtlas,
        (int64_t)Component_object,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      return;
    }
LABEL_14:
    sub_1C3B9C0(AssetStorage, v11);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x1

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
    sub_1C3B9C0(gameObject, v6);
  }
  v9 = 0;
  v10 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v8 - 1), 0LL);
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
  BattleWindowComponent__setClose((BattleWindowComponent_o *)this, 0LL);
  this->fields.callbackClose = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.callbackClose,
    (int64_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  BattleFieldConfConponent__InitAtlas(this, v17);
}


void __fastcall BattleFieldConfConponent__OnClick(BattleFieldConfConponent_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( !BattleWindowComponent__isOpening((BattleWindowComponent_o *)this, 0LL) )
  {
    ActionExtensions__Call(this->fields.callbackClose, 0LL);
    this->fields.fieldData = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.fieldData, 0LL, v3, v4, v5, v6, v7, v8);
  }
}


void __fastcall BattleFieldConfConponent__Open(
        BattleFieldConfConponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1C3B9C0(0LL, call);
  BattleViewBufflistComponent__setHide(buffListView, 0, 0LL);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleFieldConfConponent__SetConfData(
        BattleFieldConfConponent_o *this,
        BattleFieldEnvironmentData_o *inFieldData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleFieldEnvironmentData_o **p_fieldData; // x20
  BattleViewBufflistComponent_o *buffListView; // x19
  BattleBuffData_o *BuffData; // x0
  __int64 v12; // x1

  this->fields.fieldData = inFieldData;
  p_fieldData = &this->fields.fieldData;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.fieldData,
    (int64_t)inFieldData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( *p_fieldData )
  {
    buffListView = this->fields.buffListView;
    BuffData = BattleFieldEnvironmentData__get_BuffData(*p_fieldData, 0LL);
    if ( !BuffData || (BuffData = (BattleBuffData_o *)BattleBuffData__getShowServantConf(BuffData, 0LL), !buffListView) )
      sub_1C3B9C0(BuffData, v12);
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
    sub_1C3B9C0(this, 0LL);
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
  if ( (byte_4C24F82 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_18370/*"ease-out-back"*/, method);
    byte_4C24F82 = 1;
  }
  return (System_String_o *)StringLiteral_18370/*"ease-out-back"*/;
}


void __fastcall BattleFieldConfConponent__setCallBackPushClose(
        BattleFieldConfConponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.callbackClose = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.callbackClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}