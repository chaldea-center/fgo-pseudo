void __fastcall StandFigureManager___ctor(StandFigureManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B0B2C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__);
    sub_B52984(&System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager___ctor__);
    byte_42B0B2C = 1;
  }
  v3 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B52A54(System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v3,
    (const MethodInfo_28DDA5C *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__);
  this->fields.renderWaitList = (struct System_Collections_Generic_Queue_StandFigureRenderWaitStatus__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.renderWaitList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_StandFigureManager___ctor__);
}


void __fastcall StandFigureManager__AddRender(
        StandFigureManager_o *this,
        StandFigureRenderWaitStatus_o *info,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *renderWaitList; // x0

  if ( (byte_42B0B25 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__);
    byte_42B0B25 = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_B52A5C(0LL, info);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    renderWaitList,
    (Mono_Net_CFNetwork_GetProxyData_o *)info,
    (const MethodInfo_28DE050 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__);
}


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshLocal(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *standFigureMPrefab; // x20
  UnityEngine_GameObject_o *layer; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x22
  UIStandFigureRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B0B27 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_13116/*"StandFigureM"*/);
    byte_42B0B27 = 1;
  }
  standFigureMPrefab = this->fields.standFigureMPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)standFigureMPrefab,
                                        (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_12;
  v8 = layer;
  Component_srcLineSprite = (UIStandFigureRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       layer,
                                                       (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___);
  transform = UnityEngine_GameObject__get_transform(v8, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !layer )
    goto LABEL_12;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_13116/*"StandFigureM"*/, 0LL);
  if ( !parent )
    goto LABEL_12;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_12;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v17, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_srcLineSprite )
LABEL_12:
    sub_B52A5C(layer, v7);
  UIStandFigureRender__SetLayer(Component_srcLineSprite, (int32_t)layer, 0LL);
  return (UIStandFigureM_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshLocal_26219088(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        int32_t panelDepth,
        System_Action_o *callbackFunc,
        bool loadRequiredResource,
        const MethodInfo *method)
{
  UnityEngine_Component_o *MeshLocal; // x0
  __int64 v16; // x1
  UIStandFigureM_o *v17; // x20
  UnityEngine_Object_o *gameObject; // x26
  const MethodInfo *v19; // x2

  MeshLocal = (UnityEngine_Component_o *)StandFigureManager__CreateMeshLocal(this, parent, *(const MethodInfo **)&svtId);
  if ( !MeshLocal
    || (v17 = (UIStandFigureM_o *)MeshLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(MeshLocal, 0LL),
        MeshLocal = (UnityEngine_Component_o *)StandFigureManager__CreateStandFigureMName(svtId, imageLimitCount, v19),
        !gameObject) )
  {
    sub_B52A5C(MeshLocal, v16);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)MeshLocal, 0LL);
  UIStandFigureM__SetCharacter_40849396(v17, svtId, imageLimitCount, faceType, callbackFunc, loadRequiredResource, 0LL);
  UIStandFigureRender__SetDepth((UIStandFigureRender_o *)v17, (float)panelDepth, 0LL);
  return v17;
}


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  StandFigureManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_42B0B13 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_42B0B13 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  return StandFigureManager__CreateMeshLocal(Instance, parent, v5);
}


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_26218848(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        int32_t faceType,
        int32_t panelDepth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  StandFigureManager_o *Instance; // x25
  __int64 ImageLimitCount; // x0
  __int64 v16; // x1
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]

  if ( (byte_42B0B14 & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_42B0B14 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_B52A5C(ImageLimitCount, v16);
  return StandFigureManager__CreateMeshLocal_26219088(
           Instance,
           parent,
           svtId,
           ImageLimitCount,
           faceType,
           panelDepth,
           callbackFunc,
           0,
           v18);
}


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_26219272(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        int32_t panelDepth,
        System_Action_o *callbackFunc,
        bool loadRequiredResource,
        const MethodInfo *method)
{
  StandFigureManager_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]

  if ( (byte_42B0B15 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_42B0B15 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v16);
  return StandFigureManager__CreateMeshLocal_26219088(
           Instance,
           parent,
           svtId,
           imageLimitCount,
           faceType,
           panelDepth,
           callbackFunc,
           loadRequiredResource,
           v18);
}


UIStandFigureR_o *__fastcall StandFigureManager__CreatePrefabForImageId(
        UnityEngine_GameObject_o *parent,
        int32_t imageId,
        int32_t offsetKind,
        int32_t faceType,
        int32_t depth,
        System_Action_o *callbackFunc,
        bool isIgnoreFormChange,
        int32_t friendship,
        const MethodInfo *method)
{
  StandFigureManager_o *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  UnityEngine_Component_o *v20; // x23
  int32_t v21; // w24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v23; // x0
  int32_t imageIda; // [xsp+Ch] [xbp-44h] BYREF

  imageIda = imageId;
  if ( (byte_42B0B19 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_B52984(&UIStandFigureRender_TypeInfo);
    sub_B52984(&StringLiteral_13119/*"StandFigureR("*/);
    sub_B52984(&StringLiteral_661/*")"*/);
    byte_42B0B19 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v19);
  v20 = (UnityEngine_Component_o *)Instance;
  if ( !isIgnoreFormChange )
  {
    if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    }
    Instance = (StandFigureManager_o *)UIStandFigureRender__GetForm(imageId, 0, friendship, 0LL);
    v21 = (int)Instance;
    if ( v20 )
      goto LABEL_11;
LABEL_13:
    sub_B52A5C(Instance, v18);
  }
  v21 = 0;
  if ( !Instance )
    goto LABEL_13;
LABEL_11:
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v20, 0LL);
  v23 = System_Int32__ToString((int32_t)&imageIda, 0LL);
  Instance = (StandFigureManager_o *)System_String__Concat_44570600(
                                       (System_String_o *)StringLiteral_13119/*"StandFigureR("*/,
                                       v23,
                                       (System_String_o *)StringLiteral_661/*")"*/,
                                       0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
  UIStandFigureR__SetCharacterForImageId(
    (UIStandFigureR_o *)v20,
    imageIda,
    offsetKind,
    faceType,
    v21,
    callbackFunc,
    0,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)v20, depth, 0LL);
  return (UIStandFigureR_o *)v20;
}


UIStandFigureR_o *__fastcall StandFigureManager__CreatePrefabForImageIdAndForm(
        UnityEngine_GameObject_o *parent,
        int32_t imageId,
        int32_t formId,
        int32_t offsetKind,
        int32_t faceType,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  StandFigureManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  UIStandFigureR_o *v17; // x24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v19; // x0
  int32_t imageIda; // [xsp+Ch] [xbp-34h] BYREF

  imageIda = imageId;
  if ( (byte_42B0B1A & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_B52984(&StringLiteral_13119/*"StandFigureR("*/);
    sub_B52984(&StringLiteral_661/*")"*/);
    byte_42B0B1A = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance
    || (Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v16)) == 0LL
    || (v17 = (UIStandFigureR_o *)Instance,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL),
        v19 = System_Int32__ToString((int32_t)&imageIda, 0LL),
        Instance = (StandFigureManager_o *)System_String__Concat_44570600(
                                             (System_String_o *)StringLiteral_13119/*"StandFigureR("*/,
                                             v19,
                                             (System_String_o *)StringLiteral_661/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_B52A5C(Instance, v15);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
  UIStandFigureR__SetCharacterForImageId(v17, imageIda, offsetKind, faceType, formId, callbackFunc, 0, 0LL);
  UIStandFigureR__SetDepth(v17, depth, 0LL);
  return v17;
}


UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *standFigureRPrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x22
  UIStandFigureR_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42B0B29 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_13118/*"StandFigureR"*/);
    byte_42B0B29 = 1;
  }
  standFigureRPrefab = this->fields.standFigureRPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)standFigureRPrefab,
                                             (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_13;
  v8 = gameObject;
  Component_srcLineSprite = (UIStandFigureR_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  gameObject,
                                                  (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  transform = UnityEngine_GameObject__get_transform(v8, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_13118/*"StandFigureR"*/, 0LL);
  if ( !parent )
    goto LABEL_13;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v17, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL),
        !Component_srcLineSprite) )
  {
LABEL_13:
    sub_B52A5C(gameObject, v7);
  }
  UIStandFigureR__SetLayer(Component_srcLineSprite, (int32_t)gameObject, 0LL);
  UIStandFigureR__SetMaterial(Component_srcLineSprite, 0LL);
  return Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_26220148(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        int32_t depth,
        System_Action_o *callbackFunc,
        bool isIgnoreFormChange,
        int32_t friendship,
        const MethodInfo *method)
{
  UnityEngine_Component_o *RenderLocal; // x23
  System_String_o *Id; // x0
  __int64 v21; // x1
  int32_t v22; // w24
  int32_t v23; // w24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v25; // x26
  System_String_o *v26; // x0
  int32_t v28; // [xsp+8h] [xbp-58h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-54h] BYREF

  v28 = imageLimitCount;
  v29 = svtId;
  if ( (byte_42B0B2A & 1) == 0 )
  {
    sub_B52984(&UIStandFigureRender_TypeInfo);
    sub_B52984(&StringLiteral_13119/*"StandFigureR("*/);
    sub_B52984(&StringLiteral_661/*")"*/);
    byte_42B0B2A = 1;
  }
  RenderLocal = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(
                                             this,
                                             parent,
                                             *(const MethodInfo **)&svtId);
  Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  if ( isIgnoreFormChange )
  {
    v22 = 0;
    if ( !RenderLocal )
      goto LABEL_12;
  }
  else
  {
    v23 = (int)Id;
    if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    }
    Id = (System_String_o *)UIStandFigureRender__GetForm(v23, 0, friendship, 0LL);
    v22 = (int)Id;
    if ( !RenderLocal )
LABEL_12:
      sub_B52A5C(Id, v21);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(RenderLocal, 0LL);
  v25 = System_Int32__ToString((int32_t)&v29, 0LL);
  v26 = System_Int32__ToString((int32_t)&v28, 0LL);
  Id = System_String__Concat_44571728(
         (System_String_o *)StringLiteral_13119/*"StandFigureR("*/,
         v25,
         v26,
         (System_String_o *)StringLiteral_661/*")"*/,
         0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_40866952(
    (UIStandFigureR_o *)RenderLocal,
    v29,
    v28,
    offsetKind,
    faceType,
    v22,
    callbackFunc,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)RenderLocal, depth, 0LL);
  return (UIStandFigureR_o *)RenderLocal;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_26221708(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t formId,
        int32_t offsetKind,
        int32_t faceType,
        int32_t depth,
        System_Action_o *callbackFunc,
        bool isIgnoreFormChange,
        int32_t friendship,
        const MethodInfo *method)
{
  UnityEngine_Component_o *RenderLocal; // x23
  System_String_o *Id; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *v24; // x25
  System_String_o *v25; // x0
  int32_t v27; // [xsp+8h] [xbp-48h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-44h] BYREF

  v27 = imageLimitCount;
  v28 = svtId;
  if ( (byte_42B0B2B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_13119/*"StandFigureR("*/);
    sub_B52984(&StringLiteral_661/*")"*/);
    byte_42B0B2B = 1;
  }
  RenderLocal = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(
                                             this,
                                             parent,
                                             *(const MethodInfo **)&svtId);
  Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  if ( !RenderLocal
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(RenderLocal, 0LL),
        v24 = System_Int32__ToString((int32_t)&v28, 0LL),
        v25 = System_Int32__ToString((int32_t)&v27, 0LL),
        Id = System_String__Concat_44571728(
               (System_String_o *)StringLiteral_13119/*"StandFigureR("*/,
               v24,
               v25,
               (System_String_o *)StringLiteral_661/*")"*/,
               0LL),
        !gameObject) )
  {
    sub_B52A5C(Id, v22);
  }
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_40866952(
    (UIStandFigureR_o *)RenderLocal,
    v28,
    v27,
    offsetKind,
    faceType,
    formId,
    callbackFunc,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)RenderLocal, depth, 0LL);
  return (UIStandFigureR_o *)RenderLocal;
}


UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  StandFigureManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_42B0B16 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_42B0B16 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  return StandFigureManager__CreateRenderLocal(Instance, parent, v5);
}


UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_26219892(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        int32_t offsetKind,
        int32_t faceType,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  StandFigureManager_o *Instance; // x26
  __int64 ImageLimitCount; // x0
  __int64 v18; // x1
  const MethodInfo *v20; // [xsp+10h] [xbp-50h]

  if ( (byte_42B0B17 & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_42B0B17 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_B52A5C(ImageLimitCount, v18);
  return StandFigureManager__CreateRenderLocal_26220148(
           Instance,
           parent,
           svtId,
           ImageLimitCount,
           offsetKind,
           faceType,
           depth,
           callbackFunc,
           0,
           -1,
           v20);
}


UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_26220588(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        int32_t depth,
        System_Action_o *callbackFunc,
        bool isIgnoreFormChange,
        int32_t friendship,
        const MethodInfo *method)
{
  StandFigureManager_o *Instance; // x0
  __int64 v19; // x1
  const MethodInfo *v21; // [xsp+10h] [xbp-60h]

  if ( (byte_42B0B18 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_42B0B18 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v19);
  return StandFigureManager__CreateRenderLocal_26220148(
           Instance,
           parent,
           svtId,
           imageLimitCount,
           offsetKind,
           faceType,
           depth,
           callbackFunc,
           isIgnoreFormChange,
           friendship,
           v21);
}


UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_26221516(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t formId,
        int32_t offsetKind,
        int32_t faceType,
        int32_t depth,
        System_Action_o *callbackFunc,
        bool isIgnoreFormChange,
        int32_t friendship,
        const MethodInfo *method)
{
  StandFigureManager_o *Instance; // x0
  __int64 v20; // x1
  int32_t v22; // [xsp+10h] [xbp-60h]
  const MethodInfo *v23; // [xsp+18h] [xbp-58h]

  if ( (byte_42B0B1B & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_42B0B1B = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v20);
  return StandFigureManager__CreateRenderLocal_26221708(
           Instance,
           parent,
           svtId,
           imageLimitCount,
           formId,
           offsetKind,
           faceType,
           depth,
           callbackFunc,
           0,
           v22,
           v23);
}


System_String_o *__fastcall StandFigureManager__CreateStandFigureMName(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+8h] [xbp-8h] BYREF
  int32_t v7; // [xsp+Ch] [xbp-4h] BYREF

  v7 = svtId;
  v6 = imageLimitCount;
  if ( (byte_42B0B28 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_13117/*"StandFigureM("*/);
    sub_B52984(&StringLiteral_661/*")"*/);
    byte_42B0B28 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v7, 0LL);
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_44571728(
           (System_String_o *)StringLiteral_13117/*"StandFigureM("*/,
           v3,
           v4,
           (System_String_o *)StringLiteral_661/*")"*/,
           0LL);
}


void __fastcall StandFigureManager__DownloadAsset(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w0
  const MethodInfo *v9; // x2
  System_String_o *AssetName_26216976; // x20

  if ( (byte_42B0B0D & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&ImageLimitCount_TypeInfo);
    byte_42B0B0D = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_26216976 = StandFigureManager__GetAssetName_26216976(svtId, ImageLimitCount, v9);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_26216976, callback, 1, 0LL);
}


void __fastcall StandFigureManager__DownloadAsset_26217520(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_26216976; // x20

  if ( (byte_42B0B0E & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    byte_42B0B0E = 1;
  }
  AssetName_26216976 = StandFigureManager__GetAssetName_26216976(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_26216976, callback, 1, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w20

  if ( (byte_42B0B09 & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&UIStandFigureRender_TypeInfo);
    byte_42B0B09 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  return UIStandFigureRender__GetAssetName(svtId, ImageLimitCount, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetNameByForm(
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t formId,
        const MethodInfo *method)
{
  if ( (byte_42B0B0C & 1) == 0 )
  {
    sub_B52984(&UIStandFigureRender_TypeInfo);
    byte_42B0B0C = 1;
  }
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  return UIStandFigureRender__GetAssetName_40878056(svtId, imageLimitCount, formId, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName_26216976(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  if ( (byte_42B0B0A & 1) == 0 )
  {
    sub_B52984(&UIStandFigureRender_TypeInfo);
    byte_42B0B0A = 1;
  }
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  return UIStandFigureRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName_26217092(int32_t id, const MethodInfo *method)
{
  if ( (byte_42B0B0B & 1) == 0 )
  {
    sub_B52984(&UIStandFigureRender_TypeInfo);
    byte_42B0B0B = 1;
  }
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  return UIStandFigureRender__GetAssetName_40878856(id, 0LL);
}


void __fastcall StandFigureManager__LateUpdate(StandFigureManager_o *this, const MethodInfo *method)
{
  StandFigureCamera_o *standFigureCamera; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct StandFigureRenderWaitStatus_o *renderInfo; // x8
  UnityEngine_RenderTexture_o *renderTex; // x1
  bool v8; // w0
  const MethodInfo *v9; // x2
  bool v10; // w0

  standFigureCamera = (StandFigureCamera_o *)StandFigureManager__RenderStart(this, method);
  if ( ((unsigned __int8)standFigureCamera & 1) != 0 )
  {
    this->fields.isRenderWait = 1;
  }
  else if ( !this->fields.isRenderWait )
  {
    return;
  }
  renderInfo = this->fields.renderInfo;
  if ( !renderInfo )
    goto LABEL_15;
  standFigureCamera = this->fields.standFigureCamera;
  if ( !standFigureCamera )
    goto LABEL_15;
  renderTex = renderInfo->fields.renderTex;
  if ( renderInfo->fields.isFaceOnly )
  {
    v8 = StandFigureCamera__RequestTypePoint(standFigureCamera, renderTex, v5);
    this->fields.isRenderWait = !v8;
    if ( v8 )
    {
LABEL_8:
      standFigureCamera = (StandFigureCamera_o *)this->fields.standFigureRender;
      if ( standFigureCamera )
      {
        standFigureCamera = (StandFigureCamera_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)standFigureCamera,
                                                     0LL);
        if ( standFigureCamera )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureCamera, 1, 0LL);
          standFigureCamera = (StandFigureCamera_o *)this->fields.standFigureRender;
          if ( standFigureCamera )
          {
            UIStandFigureRender__SetActive((UIStandFigureRender_o *)standFigureCamera, 1, 0LL);
            standFigureCamera = (StandFigureCamera_o *)this->fields.renderInfo;
            if ( standFigureCamera )
            {
              StandFigureRenderWaitStatus__SetCharacter(
                (StandFigureRenderWaitStatus_o *)standFigureCamera,
                this->fields.standFigureRender,
                v9);
              return;
            }
          }
        }
      }
LABEL_15:
      sub_B52A5C(standFigureCamera, v4);
    }
  }
  else
  {
    v10 = StandFigureCamera__Request(standFigureCamera, renderTex, v5);
    this->fields.isRenderWait = !v10;
    if ( v10 )
      goto LABEL_8;
  }
}


void __fastcall StandFigureManager__LoadAsset(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w0
  const MethodInfo *v9; // x2
  System_String_o *AssetName_26216976; // x20

  if ( (byte_42B0B0F & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&ImageLimitCount_TypeInfo);
    byte_42B0B0F = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_26216976 = StandFigureManager__GetAssetName_26216976(svtId, ImageLimitCount, v9);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_26216976, callback, 1, 0LL);
}


void __fastcall StandFigureManager__LoadAsset_26217868(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_26216976; // x20

  if ( (byte_42B0B10 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    byte_42B0B10 = 1;
  }
  AssetName_26216976 = StandFigureManager__GetAssetName_26216976(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_26216976, callback, 1, 0LL);
}


void __fastcall StandFigureManager__OnRenderEnd(
        StandFigureManager_o *this,
        UnityEngine_RenderTexture_o *renderTexture,
        const MethodInfo *method)
{
  StandFigureRenderWaitStatus_o *renderInfo; // x0
  BattleServantConfConponent_o *p_renderInfo; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  p_renderInfo = (BattleServantConfConponent_o *)&this->fields.renderInfo;
  renderInfo = this->fields.renderInfo;
  if ( renderInfo )
  {
    StandFigureRenderWaitStatus__Callback(renderInfo, renderTexture, method);
    p_renderInfo->klass = 0LL;
    sub_B52920(p_renderInfo, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall StandFigureManager__Reboot(StandFigureManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *renderWaitList; // x0

  if ( (byte_42B0B24 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
    sub_B52984(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__);
    byte_42B0B24 = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_B52A5C(0LL, method);
  if ( renderWaitList->fields._size >= 1 )
    System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
      renderWaitList,
      (const MethodInfo_28DDCF0 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
  this->fields.renderInfo = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.renderInfo, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall StandFigureManager__Release(UnityEngine_RenderTexture_o *renderTex, const MethodInfo *method)
{
  UnityEngine_RenderTexture__ReleaseTemporary(renderTex, 0LL);
}


void __fastcall StandFigureManager__ReleaseAsset(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w0
  const MethodInfo *v7; // x2
  System_String_o *AssetName_26216976; // x19

  if ( (byte_42B0B11 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&ImageLimitCount_TypeInfo);
    byte_42B0B11 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_26216976 = StandFigureManager__GetAssetName_26216976(svtId, ImageLimitCount, v7);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_26216976, 0LL);
}


void __fastcall StandFigureManager__ReleaseAsset_26218204(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  System_String_o *AssetName_26216976; // x19

  if ( (byte_42B0B12 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    byte_42B0B12 = 1;
  }
  AssetName_26216976 = StandFigureManager__GetAssetName_26216976(svtId, imageLimitCount, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_26216976, 0LL);
}


void __fastcall StandFigureManager__ReleaseCharaFigure(const MethodInfo *method)
{
  WebViewManager_o *Instance; // x19
  UIStandFigureRender_o *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *webViewBase; // x20

  if ( (byte_42B0B23 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_42B0B23 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v2 = (UIStandFigureRender_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( ((unsigned __int8)v2 & 1) != 0 )
  {
    if ( !Instance )
      goto LABEL_15;
    webViewBase = (UnityEngine_Object_o *)Instance->fields.webViewBase;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(webViewBase, 0LL, 0LL) )
    {
      v2 = (UIStandFigureRender_o *)Instance->fields.webViewBase;
      if ( v2 )
      {
        UIStandFigureRender__ReleaseCharacter(v2, 0LL);
        return;
      }
LABEL_15:
      sub_B52A5C(v2, v3);
    }
  }
}


void __fastcall StandFigureManager__Render(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w0
  int32_t Id; // w23
  StandFigureRenderWaitStatus_o *v14; // x22
  StandFigureManager_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // [xsp+0h] [xbp-40h]

  if ( (byte_42B0B1C & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_B52984(&StandFigureRenderWaitStatus_TypeInfo);
    byte_42B0B1C = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v14 = (StandFigureRenderWaitStatus_o *)sub_B52A54(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_26223892(v14, 0LL, Id, faceType, 0, 0, textureList, callback, v18);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v16);
  StandFigureManager__AddRender(Instance, v14, v17);
}


void __fastcall StandFigureManager__RenderFace(
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        int32_t formId,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  StandFigureRenderWaitStatus_o *v13; // x25
  StandFigureManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // [xsp+0h] [xbp-50h]

  if ( (byte_42B0B22 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_B52984(&StandFigureRenderWaitStatus_TypeInfo);
    byte_42B0B22 = 1;
  }
  v13 = (StandFigureRenderWaitStatus_o *)sub_B52A54(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_26223892(v13, renderTex, id, faceType, formId, 1, textureList, callback, v17);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v15);
  StandFigureManager__AddRender(Instance, v13, v16);
}


bool __fastcall StandFigureManager__RenderStart(StandFigureManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *renderWaitList; // x0
  Mono_Net_CFNetwork_GetProxyData_o *ProxyData___Dequeue; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42B0B26 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__);
    sub_B52984(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__);
    byte_42B0B26 = 1;
  }
  if ( this->fields.renderInfo )
    return 0;
  renderWaitList = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_B52A5C(0LL, method);
  if ( renderWaitList->fields._size < 1 )
    return 0;
  ProxyData___Dequeue = System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                          renderWaitList,
                          (const MethodInfo_28DE268 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__);
  this->fields.renderInfo = (struct StandFigureRenderWaitStatus_o *)ProxyData___Dequeue;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.renderInfo,
    (System_Int32_array **)ProxyData___Dequeue,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  return 1;
}


void __fastcall StandFigureManager__Render_26222480(
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  int32_t Id; // w23
  StandFigureRenderWaitStatus_o *v12; // x22
  StandFigureManager_o *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // [xsp+0h] [xbp-40h]

  if ( (byte_42B0B1D & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_B52984(&StandFigureRenderWaitStatus_TypeInfo);
    byte_42B0B1D = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v12 = (StandFigureRenderWaitStatus_o *)sub_B52A54(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_26223892(v12, 0LL, Id, faceType, 0, 0, textureList, callback, v16);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v14);
  StandFigureManager__AddRender(Instance, v12, v15);
}


void __fastcall StandFigureManager__Render_26222696(
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  StandFigureRenderWaitStatus_o *v9; // x23
  StandFigureManager_o *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // [xsp+0h] [xbp-40h]

  if ( (byte_42B0B1E & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_B52984(&StandFigureRenderWaitStatus_TypeInfo);
    byte_42B0B1E = 1;
  }
  v9 = (StandFigureRenderWaitStatus_o *)sub_B52A54(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_26223892(v9, 0LL, id, faceType, 0, 0, textureList, callback, v13);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v11);
  StandFigureManager__AddRender(Instance, v9, v12);
}


void __fastcall StandFigureManager__Render_26222884(
        UnityEngine_RenderTexture_o *renderTex,
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w0
  int32_t Id; // w24
  StandFigureRenderWaitStatus_o *v16; // x23
  StandFigureManager_o *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // [xsp+0h] [xbp-50h]

  if ( (byte_42B0B1F & 1) == 0 )
  {
    sub_B52984(&ImageLimitCount_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_B52984(&StandFigureRenderWaitStatus_TypeInfo);
    byte_42B0B1F = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v16 = (StandFigureRenderWaitStatus_o *)sub_B52A54(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_26223892(v16, renderTex, Id, faceType, 0, 0, textureList, callback, v20);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v18);
  StandFigureManager__AddRender(Instance, v16, v19);
}


void __fastcall StandFigureManager__Render_26223216(
        UnityEngine_RenderTexture_o *renderTex,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  int32_t Id; // w24
  StandFigureRenderWaitStatus_o *v14; // x23
  StandFigureManager_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]

  if ( (byte_42B0B20 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_B52984(&StandFigureRenderWaitStatus_TypeInfo);
    byte_42B0B20 = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v14 = (StandFigureRenderWaitStatus_o *)sub_B52A54(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_26223892(v14, renderTex, Id, faceType, 0, 0, textureList, callback, v18);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v16);
  StandFigureManager__AddRender(Instance, v14, v17);
}


void __fastcall StandFigureManager__Render_26223444(
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        int32_t formId,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  StandFigureRenderWaitStatus_o *v13; // x25
  StandFigureManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // [xsp+0h] [xbp-50h]

  if ( (byte_42B0B21 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_B52984(&StandFigureRenderWaitStatus_TypeInfo);
    byte_42B0B21 = 1;
  }
  v13 = (StandFigureRenderWaitStatus_o *)sub_B52A54(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_26223892(v13, renderTex, id, faceType, formId, 0, textureList, callback, v17);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v15);
  StandFigureManager__AddRender(Instance, v13, v16);
}