void __fastcall StandFigureManager___ctor(StandFigureManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4188C76 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager___ctor__, v4);
    byte_4188C76 = 1;
  }
  v5 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B2C42C(System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v5,
    (const MethodInfo_295D884 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__);
  this->fields.renderWaitList = (struct System_Collections_Generic_Queue_StandFigureRenderWaitStatus__o *)v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.renderWaitList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_StandFigureManager___ctor__);
}


void __fastcall StandFigureManager__AddRender(
        StandFigureManager_o *this,
        StandFigureRenderWaitStatus_o *info,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *renderWaitList; // x0

  if ( (byte_4188C6F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__, info);
    byte_4188C6F = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_B2C434(0LL, info);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    renderWaitList,
    (Mono_Net_CFNetwork_GetProxyData_o *)info,
    (const MethodInfo_295DE78 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__);
}


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshLocal(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *standFigureMPrefab; // x20
  UnityEngine_GameObject_o *layer; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x22
  UIStandFigureRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4188C71 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___, parent);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_13019/*"StandFigureM"*/, v7);
    byte_4188C71 = 1;
  }
  standFigureMPrefab = this->fields.standFigureMPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)standFigureMPrefab,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_12;
  v11 = layer;
  Component_srcLineSprite = (UIStandFigureRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       layer,
                                                       (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !layer )
    goto LABEL_12;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_13019/*"StandFigureM"*/, 0LL);
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
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v20, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_srcLineSprite )
LABEL_12:
    sub_B2C434(layer, v10);
  UIStandFigureRender__SetLayer(Component_srcLineSprite, (int32_t)layer, 0LL);
  return (UIStandFigureM_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshLocal_27083788(
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
    sub_B2C434(MeshLocal, v16);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)MeshLocal, 0LL);
  UIStandFigureM__SetCharacter_40472052(v17, svtId, imageLimitCount, faceType, callbackFunc, loadRequiredResource, 0LL);
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

  if ( (byte_4188C5D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, method);
    byte_4188C5D = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return StandFigureManager__CreateMeshLocal(Instance, parent, v5);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_27083548(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        int32_t faceType,
        int32_t panelDepth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v14; // x1
  StandFigureManager_o *Instance; // x25
  __int64 ImageLimitCount; // x0
  __int64 v17; // x1
  const MethodInfo *v19; // [xsp+0h] [xbp-50h]

  if ( (byte_4188C5E & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v14);
    byte_4188C5E = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_B2C434(ImageLimitCount, v17);
  return StandFigureManager__CreateMeshLocal_27083788(
           Instance,
           parent,
           svtId,
           ImageLimitCount,
           faceType,
           panelDepth,
           callbackFunc,
           0,
           v19);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_27083972(
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

  if ( (byte_4188C5F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4188C5F = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v16);
  return StandFigureManager__CreateMeshLocal_27083788(
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


// local variable allocation has failed, the output may be wrong!
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  StandFigureManager_o *Instance; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Component_o *v23; // x23
  int32_t v24; // w24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v26; // x0
  int32_t imageIda; // [xsp+Ch] [xbp-44h] BYREF

  imageIda = imageId;
  if ( (byte_4188C63 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&imageId);
    sub_B2C35C(&UIStandFigureRender_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_13022/*"StandFigureR("*/, v18);
    sub_B2C35C(&StringLiteral_652/*")"*/, v19);
    byte_4188C63 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v22);
  v23 = (UnityEngine_Component_o *)Instance;
  if ( !isIgnoreFormChange )
  {
    if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    }
    Instance = (StandFigureManager_o *)UIStandFigureRender__GetForm(imageId, 0, friendship, 0LL);
    v24 = (int)Instance;
    if ( v23 )
      goto LABEL_11;
LABEL_13:
    sub_B2C434(Instance, v21);
  }
  v24 = 0;
  if ( !Instance )
    goto LABEL_13;
LABEL_11:
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v23, 0LL);
  v26 = System_Int32__ToString((int32_t)&imageIda, 0LL);
  Instance = (StandFigureManager_o *)System_String__Concat_44307816(
                                       (System_String_o *)StringLiteral_13022/*"StandFigureR("*/,
                                       v26,
                                       (System_String_o *)StringLiteral_652/*")"*/,
                                       0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
  UIStandFigureR__SetCharacterForImageId(
    (UIStandFigureR_o *)v23,
    imageIda,
    offsetKind,
    faceType,
    v24,
    callbackFunc,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)v23, depth, 0LL);
  return (UIStandFigureR_o *)v23;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v14; // x1
  __int64 v15; // x1
  StandFigureManager_o *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  UIStandFigureR_o *v19; // x24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v21; // x0
  int32_t imageIda; // [xsp+Ch] [xbp-34h] BYREF

  imageIda = imageId;
  if ( (byte_4188C64 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&imageId);
    sub_B2C35C(&StringLiteral_13022/*"StandFigureR("*/, v14);
    sub_B2C35C(&StringLiteral_652/*")"*/, v15);
    byte_4188C64 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance
    || (Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v18)) == 0LL
    || (v19 = (UIStandFigureR_o *)Instance,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL),
        v21 = System_Int32__ToString((int32_t)&imageIda, 0LL),
        Instance = (StandFigureManager_o *)System_String__Concat_44307816(
                                             (System_String_o *)StringLiteral_13022/*"StandFigureR("*/,
                                             v21,
                                             (System_String_o *)StringLiteral_652/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_B2C434(Instance, v17);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
  UIStandFigureR__SetCharacterForImageId(v19, imageIda, offsetKind, faceType, formId, callbackFunc, 0LL);
  UIStandFigureR__SetDepth(v19, depth, 0LL);
  return v19;
}


UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *standFigureRPrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x22
  UIStandFigureR_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4188C73 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___, parent);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_13021/*"StandFigureR"*/, v7);
    byte_4188C73 = 1;
  }
  standFigureRPrefab = this->fields.standFigureRPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)standFigureRPrefab,
                                             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_13;
  v11 = gameObject;
  Component_srcLineSprite = (UIStandFigureR_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  gameObject,
                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_13021/*"StandFigureR"*/, 0LL);
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
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v20, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL),
        !Component_srcLineSprite) )
  {
LABEL_13:
    sub_B2C434(gameObject, v10);
  }
  UIStandFigureR__SetLayer(Component_srcLineSprite, (int32_t)gameObject, 0LL);
  return Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_27084836(
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
  __int64 v19; // x1
  __int64 v20; // x1
  UnityEngine_Component_o *RenderLocal; // x23
  System_String_o *Id; // x0
  __int64 v23; // x1
  int32_t v24; // w24
  int32_t v25; // w24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v27; // x26
  System_String_o *v28; // x0
  int32_t v30; // [xsp+8h] [xbp-58h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-54h] BYREF

  v30 = imageLimitCount;
  v31 = svtId;
  if ( (byte_4188C74 & 1) == 0 )
  {
    sub_B2C35C(&UIStandFigureRender_TypeInfo, parent);
    sub_B2C35C(&StringLiteral_13022/*"StandFigureR("*/, v19);
    sub_B2C35C(&StringLiteral_652/*")"*/, v20);
    byte_4188C74 = 1;
  }
  RenderLocal = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(
                                             this,
                                             parent,
                                             *(const MethodInfo **)&svtId);
  Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  if ( isIgnoreFormChange )
  {
    v24 = 0;
    if ( !RenderLocal )
      goto LABEL_12;
  }
  else
  {
    v25 = (int)Id;
    if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    }
    Id = (System_String_o *)UIStandFigureRender__GetForm(v25, 0, friendship, 0LL);
    v24 = (int)Id;
    if ( !RenderLocal )
LABEL_12:
      sub_B2C434(Id, v23);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(RenderLocal, 0LL);
  v27 = System_Int32__ToString((int32_t)&v31, 0LL);
  v28 = System_Int32__ToString((int32_t)&v30, 0LL);
  Id = System_String__Concat_44308944(
         (System_String_o *)StringLiteral_13022/*"StandFigureR("*/,
         v27,
         v28,
         (System_String_o *)StringLiteral_652/*")"*/,
         0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_40489596(
    (UIStandFigureR_o *)RenderLocal,
    v31,
    v30,
    offsetKind,
    faceType,
    v24,
    callbackFunc,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)RenderLocal, depth, 0LL);
  return (UIStandFigureR_o *)RenderLocal;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_27086388(
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
  __int64 v20; // x1
  UnityEngine_Component_o *RenderLocal; // x23
  System_String_o *Id; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *v25; // x25
  System_String_o *v26; // x0
  int32_t v28; // [xsp+8h] [xbp-48h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-44h] BYREF

  v28 = imageLimitCount;
  v29 = svtId;
  if ( (byte_4188C75 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_13022/*"StandFigureR("*/, parent);
    sub_B2C35C(&StringLiteral_652/*")"*/, v20);
    byte_4188C75 = 1;
  }
  RenderLocal = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(
                                             this,
                                             parent,
                                             *(const MethodInfo **)&svtId);
  Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  if ( !RenderLocal
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(RenderLocal, 0LL),
        v25 = System_Int32__ToString((int32_t)&v29, 0LL),
        v26 = System_Int32__ToString((int32_t)&v28, 0LL),
        Id = System_String__Concat_44308944(
               (System_String_o *)StringLiteral_13022/*"StandFigureR("*/,
               v25,
               v26,
               (System_String_o *)StringLiteral_652/*")"*/,
               0LL),
        !gameObject) )
  {
    sub_B2C434(Id, v23);
  }
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_40489596(
    (UIStandFigureR_o *)RenderLocal,
    v29,
    v28,
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

  if ( (byte_4188C60 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, method);
    byte_4188C60 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return StandFigureManager__CreateRenderLocal(Instance, parent, v5);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_27084580(
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
  __int64 v16; // x1
  StandFigureManager_o *Instance; // x26
  __int64 ImageLimitCount; // x0
  __int64 v19; // x1
  const MethodInfo *v21; // [xsp+10h] [xbp-50h]

  if ( (byte_4188C61 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v16);
    byte_4188C61 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_B2C434(ImageLimitCount, v19);
  return StandFigureManager__CreateRenderLocal_27084836(
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
           v21);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_27085276(
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

  if ( (byte_4188C62 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4188C62 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v19);
  return StandFigureManager__CreateRenderLocal_27084836(
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


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_27086196(
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

  if ( (byte_4188C65 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4188C65 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v20);
  return StandFigureManager__CreateRenderLocal_27086388(
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StandFigureManager__CreateStandFigureMName(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x19
  System_String_o *v5; // x0
  int32_t v7; // [xsp+8h] [xbp-8h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-4h] BYREF

  v8 = svtId;
  v7 = imageLimitCount;
  if ( (byte_4188C72 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_13020/*"StandFigureM("*/, *(_QWORD *)&imageLimitCount);
    sub_B2C35C(&StringLiteral_652/*")"*/, v3);
    byte_4188C72 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_44308944(
           (System_String_o *)StringLiteral_13020/*"StandFigureM("*/,
           v4,
           v5,
           (System_String_o *)StringLiteral_652/*")"*/,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__DownloadAsset(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v8; // x1
  int32_t ImageLimitCount; // w0
  const MethodInfo *v10; // x2
  System_String_o *AssetName_27081676; // x20

  if ( (byte_4188C57 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v8);
    byte_4188C57 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_27081676 = StandFigureManager__GetAssetName_27081676(svtId, ImageLimitCount, v10);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_27081676, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__DownloadAsset_27082220(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_27081676; // x20

  if ( (byte_4188C58 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4188C58 = 1;
  }
  AssetName_27081676 = StandFigureManager__GetAssetName_27081676(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_27081676, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StandFigureManager__GetAssetName(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v6; // x1
  int32_t ImageLimitCount; // w20

  if ( (byte_4188C53 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_B2C35C(&UIStandFigureRender_TypeInfo, v6);
    byte_4188C53 = 1;
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StandFigureManager__GetAssetNameByForm(
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t formId,
        const MethodInfo *method)
{
  if ( (byte_4188C56 & 1) == 0 )
  {
    sub_B2C35C(&UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4188C56 = 1;
  }
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  return UIStandFigureRender__GetAssetName_40502308(svtId, imageLimitCount, formId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StandFigureManager__GetAssetName_27081676(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4188C54 & 1) == 0 )
  {
    sub_B2C35C(&UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4188C54 = 1;
  }
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  return UIStandFigureRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName_27081792(int32_t id, const MethodInfo *method)
{
  if ( (byte_4188C55 & 1) == 0 )
  {
    sub_B2C35C(&UIStandFigureRender_TypeInfo, method);
    byte_4188C55 = 1;
  }
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  return UIStandFigureRender__GetAssetName_40503108(id, 0LL);
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
      sub_B2C434(standFigureCamera, v4);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__LoadAsset(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v8; // x1
  int32_t ImageLimitCount; // w0
  const MethodInfo *v10; // x2
  System_String_o *AssetName_27081676; // x20

  if ( (byte_4188C59 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v8);
    byte_4188C59 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_27081676 = StandFigureManager__GetAssetName_27081676(svtId, ImageLimitCount, v10);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_27081676, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__LoadAsset_27082568(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_27081676; // x20

  if ( (byte_4188C5A & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4188C5A = 1;
  }
  AssetName_27081676 = StandFigureManager__GetAssetName_27081676(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_27081676, callback, 1, 0LL);
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
    sub_B2C2F8(p_renderInfo, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v9; // x1
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *renderWaitList; // x0

  if ( (byte_4188C6E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__, v9);
    byte_4188C6E = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_B2C434(0LL, method);
  if ( renderWaitList->fields._size >= 1 )
    System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
      renderWaitList,
      (const MethodInfo_295DB18 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
  this->fields.renderInfo = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.renderInfo, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall StandFigureManager__Release(UnityEngine_RenderTexture_o *renderTex, const MethodInfo *method)
{
  UnityEngine_RenderTexture__ReleaseTemporary(renderTex, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__ReleaseAsset(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v6; // x1
  int32_t ImageLimitCount; // w0
  const MethodInfo *v8; // x2
  System_String_o *AssetName_27081676; // x19

  if ( (byte_4188C5B & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v6);
    byte_4188C5B = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_27081676 = StandFigureManager__GetAssetName_27081676(svtId, ImageLimitCount, v8);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_27081676, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__ReleaseAsset_27082904(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  System_String_o *AssetName_27081676; // x19

  if ( (byte_4188C5C & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4188C5C = 1;
  }
  AssetName_27081676 = StandFigureManager__GetAssetName_27081676(svtId, imageLimitCount, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_27081676, 0LL);
}


void __fastcall StandFigureManager__ReleaseCharaFigure(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x19
  UIStandFigureRender_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *webViewBase; // x20

  if ( (byte_4188C6D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v1);
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v2);
    byte_4188C6D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (UIStandFigureRender_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
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
      v4 = (UIStandFigureRender_o *)Instance->fields.webViewBase;
      if ( v4 )
      {
        UIStandFigureRender__ReleaseCharacter(v4, 0LL);
        return;
      }
LABEL_15:
      sub_B2C434(v4, v5);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t ImageLimitCount; // w0
  int32_t Id; // w23
  StandFigureRenderWaitStatus_o *v16; // x22
  StandFigureManager_o *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // [xsp+0h] [xbp-40h]

  if ( (byte_4188C66 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v12);
    sub_B2C35C(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_4188C66 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v16 = (StandFigureRenderWaitStatus_o *)sub_B2C42C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_27088572(v16, 0LL, Id, faceType, 0, 0, textureList, callback, v20);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v18);
  StandFigureManager__AddRender(Instance, v16, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__RenderFace(
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        int32_t formId,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  StandFigureRenderWaitStatus_o *v14; // x25
  StandFigureManager_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]

  if ( (byte_4188C6C & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&id);
    sub_B2C35C(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_4188C6C = 1;
  }
  v14 = (StandFigureRenderWaitStatus_o *)sub_B2C42C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_27088572(v14, renderTex, id, faceType, formId, 1, textureList, callback, v18);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v16);
  StandFigureManager__AddRender(Instance, v14, v17);
}


bool __fastcall StandFigureManager__RenderStart(StandFigureManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *renderWaitList; // x0
  Mono_Net_CFNetwork_GetProxyData_o *ProxyData___Dequeue; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4188C70 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__, v3);
    byte_4188C70 = 1;
  }
  if ( this->fields.renderInfo )
    return 0;
  renderWaitList = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_B2C434(0LL, method);
  if ( renderWaitList->fields._size < 1 )
    return 0;
  ProxyData___Dequeue = System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                          renderWaitList,
                          (const MethodInfo_295E090 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__);
  this->fields.renderInfo = (struct StandFigureRenderWaitStatus_o *)ProxyData___Dequeue;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.renderInfo,
    (System_Int32_array **)ProxyData___Dequeue,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_27087160(
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  int32_t Id; // w23
  StandFigureRenderWaitStatus_o *v13; // x22
  StandFigureManager_o *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // [xsp+0h] [xbp-40h]

  if ( (byte_4188C67 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&imageLimitCount);
    sub_B2C35C(&StandFigureRenderWaitStatus_TypeInfo, v11);
    byte_4188C67 = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v13 = (StandFigureRenderWaitStatus_o *)sub_B2C42C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_27088572(v13, 0LL, Id, faceType, 0, 0, textureList, callback, v17);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v15);
  StandFigureManager__AddRender(Instance, v13, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_27087376(
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  StandFigureRenderWaitStatus_o *v10; // x23
  StandFigureManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // [xsp+0h] [xbp-40h]

  if ( (byte_4188C68 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&faceType);
    sub_B2C35C(&StandFigureRenderWaitStatus_TypeInfo, v9);
    byte_4188C68 = 1;
  }
  v10 = (StandFigureRenderWaitStatus_o *)sub_B2C42C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_27088572(v10, 0LL, id, faceType, 0, 0, textureList, callback, v14);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v12);
  StandFigureManager__AddRender(Instance, v10, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_27087564(
        UnityEngine_RenderTexture_o *renderTex,
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t ImageLimitCount; // w0
  int32_t Id; // w24
  StandFigureRenderWaitStatus_o *v18; // x23
  StandFigureManager_o *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // [xsp+0h] [xbp-50h]

  if ( (byte_4188C69 & 1) == 0 )
  {
    sub_B2C35C(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v14);
    sub_B2C35C(&StandFigureRenderWaitStatus_TypeInfo, v15);
    byte_4188C69 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v18 = (StandFigureRenderWaitStatus_o *)sub_B2C42C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_27088572(v18, renderTex, Id, faceType, 0, 0, textureList, callback, v22);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v20);
  StandFigureManager__AddRender(Instance, v18, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_27087896(
        UnityEngine_RenderTexture_o *renderTex,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  int32_t Id; // w24
  StandFigureRenderWaitStatus_o *v15; // x23
  StandFigureManager_o *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // [xsp+0h] [xbp-50h]

  if ( (byte_4188C6A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    sub_B2C35C(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_4188C6A = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v15 = (StandFigureRenderWaitStatus_o *)sub_B2C42C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_27088572(v15, renderTex, Id, faceType, 0, 0, textureList, callback, v19);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v17);
  StandFigureManager__AddRender(Instance, v15, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_27088124(
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        int32_t formId,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  StandFigureRenderWaitStatus_o *v14; // x25
  StandFigureManager_o *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]

  if ( (byte_4188C6B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&id);
    sub_B2C35C(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_4188C6B = 1;
  }
  v14 = (StandFigureRenderWaitStatus_o *)sub_B2C42C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_27088572(v14, renderTex, id, faceType, formId, 0, textureList, callback, v18);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v16);
  StandFigureManager__AddRender(Instance, v14, v17);
}