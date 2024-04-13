void __fastcall StandFigureManager___ctor(StandFigureManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42E930B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_StandFigureManager___ctor__, v8, v9, v10);
    byte_42E930B = 1;
  }
  v11 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B5D694(System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v11,
    (const MethodInfo_2B9DEAC *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__);
  this->fields.renderWaitList = (struct System_Collections_Generic_Queue_StandFigureRenderWaitStatus__o *)v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.renderWaitList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_StandFigureManager___ctor__);
}


void __fastcall StandFigureManager__AddRender(
        StandFigureManager_o *this,
        StandFigureRenderWaitStatus_o *info,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *renderWaitList; // x0

  if ( (byte_42E9304 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__,
      (_DWORD)info,
      (_DWORD)method,
      v3);
    byte_42E9304 = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_B5D69C(0LL, info);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    renderWaitList,
    (Mono_Net_CFNetwork_GetProxyData_o *)info,
    (const MethodInfo_2B9E4A0 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__);
}


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshLocal(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct UnityEngine_GameObject_o *standFigureMPrefab; // x20
  UnityEngine_GameObject_o *layer; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x22
  UIStandFigureRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E9306 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___, (_DWORD)parent, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_13175/*"StandFigureM"*/, v12, v13, v14);
    byte_42E9306 = 1;
  }
  standFigureMPrefab = this->fields.standFigureMPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)standFigureMPrefab,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_12;
  v18 = layer;
  Component_srcLineSprite = (UIStandFigureRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       layer,
                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___);
  transform = UnityEngine_GameObject__get_transform(v18, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
  if ( !layer )
    goto LABEL_12;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v18, (System_String_o *)StringLiteral_13175/*"StandFigureM"*/, 0LL);
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
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v27, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_srcLineSprite )
LABEL_12:
    sub_B5D69C(layer, v17);
  UIStandFigureRender__SetLayer(Component_srcLineSprite, (int32_t)layer, 0LL);
  return (UIStandFigureM_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshLocal_26228464(
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
    sub_B5D69C(MeshLocal, v16);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)MeshLocal, 0LL);
  UIStandFigureM__SetCharacter_40953484(v17, svtId, imageLimitCount, faceType, callbackFunc, loadRequiredResource, 0LL);
  UIStandFigureRender__SetDepth((UIStandFigureRender_o *)v17, (float)panelDepth, 0LL);
  return v17;
}


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  StandFigureManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E92F2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E92F2 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  return StandFigureManager__CreateMeshLocal(Instance, parent, v7);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_26228224(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        int32_t faceType,
        int32_t panelDepth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  StandFigureManager_o *Instance; // x25
  __int64 ImageLimitCount; // x0
  __int64 v19; // x1
  const MethodInfo *v21; // [xsp+0h] [xbp-50h]

  if ( (byte_42E92F3 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, svtId, limitCount, *(_QWORD *)&lv);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v14, v15, v16);
    byte_42E92F3 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_B5D69C(ImageLimitCount, v19);
  return StandFigureManager__CreateMeshLocal_26228464(
           Instance,
           parent,
           svtId,
           ImageLimitCount,
           faceType,
           panelDepth,
           callbackFunc,
           0,
           v21);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_26228648(
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

  if ( (byte_42E92F4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__,
      svtId,
      imageLimitCount,
      *(_QWORD *)&faceType);
    byte_42E92F4 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v16);
  return StandFigureManager__CreateMeshLocal_26228464(
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  StandFigureManager_o *Instance; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  UnityEngine_Component_o *v29; // x23
  int32_t v30; // w24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v32; // x0
  int32_t imageIda; // [xsp+Ch] [xbp-44h] BYREF

  imageIda = imageId;
  if ( (byte_42E92F8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__,
      imageId,
      offsetKind,
      *(_QWORD *)&faceType);
    sub_B5D5C4(&UIStandFigureRender_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_13178/*"StandFigureR("*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v23, v24, v25);
    byte_42E92F8 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v28);
  v29 = (UnityEngine_Component_o *)Instance;
  if ( !isIgnoreFormChange )
  {
    if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    }
    Instance = (StandFigureManager_o *)UIStandFigureRender__GetForm(imageId, 0, friendship, 0LL);
    v30 = (int)Instance;
    if ( v29 )
      goto LABEL_11;
LABEL_13:
    sub_B5D69C(Instance, v27);
  }
  v30 = 0;
  if ( !Instance )
    goto LABEL_13;
LABEL_11:
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v29, 0LL);
  v32 = System_Int32__ToString((int32_t)&imageIda, 0LL);
  Instance = (StandFigureManager_o *)System_String__Concat_44580072(
                                       (System_String_o *)StringLiteral_13178/*"StandFigureR("*/,
                                       v32,
                                       (System_String_o *)StringLiteral_659/*")"*/,
                                       0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
  UIStandFigureR__SetCharacterForImageId(
    (UIStandFigureR_o *)v29,
    imageIda,
    offsetKind,
    faceType,
    v30,
    callbackFunc,
    0,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)v29, depth, 0LL);
  return (UIStandFigureR_o *)v29;
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  StandFigureManager_o *Instance; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  UIStandFigureR_o *v23; // x24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v25; // x0
  int32_t imageIda; // [xsp+Ch] [xbp-34h] BYREF

  imageIda = imageId;
  if ( (byte_42E92F9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__,
      imageId,
      formId,
      *(_QWORD *)&offsetKind);
    sub_B5D5C4(&StringLiteral_13178/*"StandFigureR("*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v17, v18, v19);
    byte_42E92F9 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance
    || (Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v22)) == 0LL
    || (v23 = (UIStandFigureR_o *)Instance,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL),
        v25 = System_Int32__ToString((int32_t)&imageIda, 0LL),
        Instance = (StandFigureManager_o *)System_String__Concat_44580072(
                                             (System_String_o *)StringLiteral_13178/*"StandFigureR("*/,
                                             v25,
                                             (System_String_o *)StringLiteral_659/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_B5D69C(Instance, v21);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
  UIStandFigureR__SetCharacterForImageId(v23, imageIda, offsetKind, faceType, formId, callbackFunc, 0, 0LL);
  UIStandFigureR__SetDepth(v23, depth, 0LL);
  return v23;
}


UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct UnityEngine_GameObject_o *standFigureRPrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x22
  UIStandFigureR_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E9308 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___, (_DWORD)parent, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_13177/*"StandFigureR"*/, v12, v13, v14);
    byte_42E9308 = 1;
  }
  standFigureRPrefab = this->fields.standFigureRPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)standFigureRPrefab,
                                             (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_13;
  v18 = gameObject;
  Component_srcLineSprite = (UIStandFigureR_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  gameObject,
                                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  transform = UnityEngine_GameObject__get_transform(v18, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v18, (System_String_o *)StringLiteral_13177/*"StandFigureR"*/, 0LL);
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
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v27, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL),
        !Component_srcLineSprite) )
  {
LABEL_13:
    sub_B5D69C(gameObject, v17);
  }
  UIStandFigureR__SetLayer(Component_srcLineSprite, (int32_t)gameObject, 0LL);
  UIStandFigureR__SetMaterial(Component_srcLineSprite, 0LL);
  return Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_26229524(
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  UnityEngine_Component_o *RenderLocal; // x23
  System_String_o *Id; // x0
  __int64 v27; // x1
  int32_t v28; // w24
  int32_t v29; // w24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v31; // x26
  System_String_o *v32; // x0
  int32_t v34; // [xsp+8h] [xbp-58h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-54h] BYREF

  v34 = imageLimitCount;
  v35 = svtId;
  if ( (byte_42E9309 & 1) == 0 )
  {
    sub_B5D5C4(&UIStandFigureRender_TypeInfo, (_DWORD)parent, svtId, *(_QWORD *)&imageLimitCount);
    sub_B5D5C4(&StringLiteral_13178/*"StandFigureR("*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v22, v23, v24);
    byte_42E9309 = 1;
  }
  RenderLocal = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(
                                             this,
                                             parent,
                                             *(const MethodInfo **)&svtId);
  Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  if ( isIgnoreFormChange )
  {
    v28 = 0;
    if ( !RenderLocal )
      goto LABEL_12;
  }
  else
  {
    v29 = (int)Id;
    if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    }
    Id = (System_String_o *)UIStandFigureRender__GetForm(v29, 0, friendship, 0LL);
    v28 = (int)Id;
    if ( !RenderLocal )
LABEL_12:
      sub_B5D69C(Id, v27);
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(RenderLocal, 0LL);
  v31 = System_Int32__ToString((int32_t)&v35, 0LL);
  v32 = System_Int32__ToString((int32_t)&v34, 0LL);
  Id = System_String__Concat_44581200(
         (System_String_o *)StringLiteral_13178/*"StandFigureR("*/,
         v31,
         v32,
         (System_String_o *)StringLiteral_659/*")"*/,
         0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_40971040(
    (UIStandFigureR_o *)RenderLocal,
    v35,
    v34,
    offsetKind,
    faceType,
    v28,
    callbackFunc,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)RenderLocal, depth, 0LL);
  return (UIStandFigureR_o *)RenderLocal;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_26231084(
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  UnityEngine_Component_o *RenderLocal; // x23
  System_String_o *Id; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *v27; // x25
  System_String_o *v28; // x0
  int32_t v30; // [xsp+8h] [xbp-48h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-44h] BYREF

  v30 = imageLimitCount;
  v31 = svtId;
  if ( (byte_42E930A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13178/*"StandFigureR("*/, (_DWORD)parent, svtId, *(_QWORD *)&imageLimitCount);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v20, v21, v22);
    byte_42E930A = 1;
  }
  RenderLocal = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(
                                             this,
                                             parent,
                                             *(const MethodInfo **)&svtId);
  Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  if ( !RenderLocal
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(RenderLocal, 0LL),
        v27 = System_Int32__ToString((int32_t)&v31, 0LL),
        v28 = System_Int32__ToString((int32_t)&v30, 0LL),
        Id = System_String__Concat_44581200(
               (System_String_o *)StringLiteral_13178/*"StandFigureR("*/,
               v27,
               v28,
               (System_String_o *)StringLiteral_659/*")"*/,
               0LL),
        !gameObject) )
  {
    sub_B5D69C(Id, v25);
  }
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_40971040(
    (UIStandFigureR_o *)RenderLocal,
    v31,
    v30,
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
  int v2; // w2
  __int64 v3; // x3
  StandFigureManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E92F5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E92F5 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  return StandFigureManager__CreateRenderLocal(Instance, parent, v7);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_26229268(
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  StandFigureManager_o *Instance; // x26
  __int64 ImageLimitCount; // x0
  __int64 v21; // x1
  const MethodInfo *v23; // [xsp+10h] [xbp-50h]

  if ( (byte_42E92F6 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, svtId, limitCount, *(_QWORD *)&lv);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v16, v17, v18);
    byte_42E92F6 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_B5D69C(ImageLimitCount, v21);
  return StandFigureManager__CreateRenderLocal_26229524(
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
           v23);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_26229964(
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

  if ( (byte_42E92F7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__,
      svtId,
      imageLimitCount,
      *(_QWORD *)&offsetKind);
    byte_42E92F7 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v19);
  return StandFigureManager__CreateRenderLocal_26229524(
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
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_26230892(
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

  if ( (byte_42E92FA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__,
      svtId,
      imageLimitCount,
      *(_QWORD *)&formId);
    byte_42E92FA = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v20);
  return StandFigureManager__CreateRenderLocal_26231084(
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
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  int32_t v10; // [xsp+8h] [xbp-8h] BYREF
  int32_t v11; // [xsp+Ch] [xbp-4h] BYREF

  v11 = svtId;
  v10 = imageLimitCount;
  if ( (byte_42E9307 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13176/*"StandFigureM("*/, imageLimitCount, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v4, v5, v6);
    byte_42E9307 = 1;
  }
  v7 = System_Int32__ToString((int32_t)&v11, 0LL);
  v8 = System_Int32__ToString((int32_t)&v10, 0LL);
  return System_String__Concat_44581200(
           (System_String_o *)StringLiteral_13176/*"StandFigureM("*/,
           v7,
           v8,
           (System_String_o *)StringLiteral_659/*")"*/,
           0LL);
}


void __fastcall StandFigureManager__DownloadAsset(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t ImageLimitCount; // w0
  const MethodInfo *v12; // x2
  System_String_o *AssetName_26226352; // x20

  if ( (byte_42E92EC & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, limitCount, lv, callback);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v8, v9, v10);
    byte_42E92EC = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_26226352 = StandFigureManager__GetAssetName_26226352(svtId, ImageLimitCount, v12);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_26226352, callback, 1, 0LL);
}


void __fastcall StandFigureManager__DownloadAsset_26226896(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_26226352; // x20

  if ( (byte_42E92ED & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, imageLimitCount, (_DWORD)callback, method);
    byte_42E92ED = 1;
  }
  AssetName_26226352 = StandFigureManager__GetAssetName_26226352(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_26226352, callback, 1, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t ImageLimitCount; // w20

  if ( (byte_42E92E8 & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, limitCount, lv, method);
    sub_B5D5C4(&UIStandFigureRender_TypeInfo, v6, v7, v8);
    byte_42E92E8 = 1;
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
  if ( (byte_42E92EB & 1) == 0 )
  {
    sub_B5D5C4(&UIStandFigureRender_TypeInfo, imageLimitCount, formId, method);
    byte_42E92EB = 1;
  }
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  return UIStandFigureRender__GetAssetName_40982204(svtId, imageLimitCount, formId, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName_26226352(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E92E9 & 1) == 0 )
  {
    sub_B5D5C4(&UIStandFigureRender_TypeInfo, imageLimitCount, (_DWORD)method, v3);
    byte_42E92E9 = 1;
  }
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  return UIStandFigureRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName_26226468(int32_t id, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E92EA & 1) == 0 )
  {
    sub_B5D5C4(&UIStandFigureRender_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E92EA = 1;
  }
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  return UIStandFigureRender__GetAssetName_40983004(id, 0LL);
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
      sub_B5D69C(standFigureCamera, v4);
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t ImageLimitCount; // w0
  const MethodInfo *v12; // x2
  System_String_o *AssetName_26226352; // x20

  if ( (byte_42E92EE & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, limitCount, lv, callback);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v8, v9, v10);
    byte_42E92EE = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_26226352 = StandFigureManager__GetAssetName_26226352(svtId, ImageLimitCount, v12);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_26226352, callback, 1, 0LL);
}


void __fastcall StandFigureManager__LoadAsset_26227244(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_26226352; // x20

  if ( (byte_42E92EF & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, imageLimitCount, (_DWORD)callback, method);
    byte_42E92EF = 1;
  }
  AssetName_26226352 = StandFigureManager__GetAssetName_26226352(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_26226352, callback, 1, 0LL);
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
    sub_B5D560(p_renderInfo, 0LL, v5, v6, v7, v8, v9, v10);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *renderWaitList; // x0

  if ( (byte_42E9303 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__, v9, v10, v11);
    byte_42E9303 = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_B5D69C(0LL, method);
  if ( renderWaitList->fields._size >= 1 )
    System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
      renderWaitList,
      (const MethodInfo_2B9E140 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
  this->fields.renderInfo = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.renderInfo, 0LL, v2, v3, v4, v5, v6, v7);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int32_t ImageLimitCount; // w0
  const MethodInfo *v10; // x2
  System_String_o *AssetName_26226352; // x19

  if ( (byte_42E92F0 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, limitCount, lv, method);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v6, v7, v8);
    byte_42E92F0 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_26226352 = StandFigureManager__GetAssetName_26226352(svtId, ImageLimitCount, v10);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_26226352, 0LL);
}


void __fastcall StandFigureManager__ReleaseAsset_26227580(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *AssetName_26226352; // x19

  if ( (byte_42E92F1 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, imageLimitCount, (_DWORD)method, v3);
    byte_42E92F1 = 1;
  }
  AssetName_26226352 = StandFigureManager__GetAssetName_26226352(svtId, imageLimitCount, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_26226352, 0LL);
}


void __fastcall StandFigureManager__ReleaseCharaFigure(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  WebViewManager_o *Instance; // x19
  UIStandFigureRender_o *v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *webViewBase; // x20

  if ( (byte_42E9302 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v4, v5, v6);
    byte_42E9302 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UIStandFigureRender_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
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
      v8 = (UIStandFigureRender_o *)Instance->fields.webViewBase;
      if ( v8 )
      {
        UIStandFigureRender__ReleaseCharacter(v8, 0LL);
        return;
      }
LABEL_15:
      sub_B5D69C(v8, v9);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t ImageLimitCount; // w0
  int32_t Id; // w23
  StandFigureRenderWaitStatus_o *v20; // x22
  StandFigureManager_o *Instance; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // [xsp+0h] [xbp-40h]

  if ( (byte_42E92FB & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, limitCount, lv, *(_QWORD *)&faceType);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&StandFigureRenderWaitStatus_TypeInfo, v15, v16, v17);
    byte_42E92FB = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v20 = (StandFigureRenderWaitStatus_o *)sub_B5D694(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_26233268(v20, 0LL, Id, faceType, 0, 0, textureList, callback, v24);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v22);
  StandFigureManager__AddRender(Instance, v20, v23);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  StandFigureRenderWaitStatus_o *v16; // x25
  StandFigureManager_o *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // [xsp+0h] [xbp-50h]

  if ( (byte_42E9301 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, id, faceType, *(_QWORD *)&formId);
    sub_B5D5C4(&StandFigureRenderWaitStatus_TypeInfo, v13, v14, v15);
    byte_42E9301 = 1;
  }
  v16 = (StandFigureRenderWaitStatus_o *)sub_B5D694(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_26233268(v16, renderTex, id, faceType, formId, 1, textureList, callback, v20);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v18);
  StandFigureManager__AddRender(Instance, v16, v19);
}


bool __fastcall StandFigureManager__RenderStart(StandFigureManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *renderWaitList; // x0
  Mono_Net_CFNetwork_GetProxyData_o *ProxyData___Dequeue; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42E9305 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__, v5, v6, v7);
    byte_42E9305 = 1;
  }
  if ( this->fields.renderInfo )
    return 0;
  renderWaitList = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_B5D69C(0LL, method);
  if ( renderWaitList->fields._size < 1 )
    return 0;
  ProxyData___Dequeue = System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                          renderWaitList,
                          (const MethodInfo_2B9E6B8 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__);
  this->fields.renderInfo = (struct StandFigureRenderWaitStatus_o *)ProxyData___Dequeue;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.renderInfo,
    (System_Int32_array **)ProxyData___Dequeue,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  return 1;
}


void __fastcall StandFigureManager__Render_26231856(
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t Id; // w23
  StandFigureRenderWaitStatus_o *v15; // x22
  StandFigureManager_o *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // [xsp+0h] [xbp-40h]

  if ( (byte_42E92FC & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__,
      imageLimitCount,
      faceType,
      textureList);
    sub_B5D5C4(&StandFigureRenderWaitStatus_TypeInfo, v11, v12, v13);
    byte_42E92FC = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v15 = (StandFigureRenderWaitStatus_o *)sub_B5D694(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_26233268(v15, 0LL, Id, faceType, 0, 0, textureList, callback, v19);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v17);
  StandFigureManager__AddRender(Instance, v15, v18);
}


void __fastcall StandFigureManager__Render_26232072(
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  StandFigureRenderWaitStatus_o *v12; // x23
  StandFigureManager_o *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // [xsp+0h] [xbp-40h]

  if ( (byte_42E92FD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__,
      faceType,
      (_DWORD)textureList,
      callback);
    sub_B5D5C4(&StandFigureRenderWaitStatus_TypeInfo, v9, v10, v11);
    byte_42E92FD = 1;
  }
  v12 = (StandFigureRenderWaitStatus_o *)sub_B5D694(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_26233268(v12, 0LL, id, faceType, 0, 0, textureList, callback, v16);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v14);
  StandFigureManager__AddRender(Instance, v12, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_26232260(
        UnityEngine_RenderTexture_o *renderTex,
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int32_t ImageLimitCount; // w0
  int32_t Id; // w24
  StandFigureRenderWaitStatus_o *v22; // x23
  StandFigureManager_o *Instance; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // [xsp+0h] [xbp-50h]

  if ( (byte_42E92FE & 1) == 0 )
  {
    sub_B5D5C4(&ImageLimitCount_TypeInfo, svtId, limitCount, *(_QWORD *)&lv);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StandFigureRenderWaitStatus_TypeInfo, v17, v18, v19);
    byte_42E92FE = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v22 = (StandFigureRenderWaitStatus_o *)sub_B5D694(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_26233268(v22, renderTex, Id, faceType, 0, 0, textureList, callback, v26);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v24);
  StandFigureManager__AddRender(Instance, v22, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_26232592(
        UnityEngine_RenderTexture_o *renderTex,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int32_t Id; // w24
  StandFigureRenderWaitStatus_o *v17; // x23
  StandFigureManager_o *Instance; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // [xsp+0h] [xbp-50h]

  if ( (byte_42E92FF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__,
      svtId,
      imageLimitCount,
      *(_QWORD *)&faceType);
    sub_B5D5C4(&StandFigureRenderWaitStatus_TypeInfo, v13, v14, v15);
    byte_42E92FF = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v17 = (StandFigureRenderWaitStatus_o *)sub_B5D694(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_26233268(v17, renderTex, Id, faceType, 0, 0, textureList, callback, v21);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v19);
  StandFigureManager__AddRender(Instance, v17, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_26232820(
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        int32_t formId,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  StandFigureRenderWaitStatus_o *v16; // x25
  StandFigureManager_o *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // [xsp+0h] [xbp-50h]

  if ( (byte_42E9300 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, id, faceType, *(_QWORD *)&formId);
    sub_B5D5C4(&StandFigureRenderWaitStatus_TypeInfo, v13, v14, v15);
    byte_42E9300 = 1;
  }
  v16 = (StandFigureRenderWaitStatus_o *)sub_B5D694(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_26233268(v16, renderTex, id, faceType, formId, 0, textureList, callback, v20);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v18);
  StandFigureManager__AddRender(Instance, v16, v19);
}