void __fastcall StandFigureManager___ctor(StandFigureManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FAE73 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager___ctor__, v7);
    byte_40FAE73 = 1;
  }
  v8 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B170CC(
                                                                       System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo,
                                                                       method,
                                                                       v2,
                                                                       v3,
                                                                       v4);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v8,
    (const MethodInfo_2B15EA4 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__);
  this->fields.renderWaitList = (struct System_Collections_Generic_Queue_StandFigureRenderWaitStatus__o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.renderWaitList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_StandFigureManager___ctor__);
}


void __fastcall StandFigureManager__AddRender(
        StandFigureManager_o *this,
        StandFigureRenderWaitStatus_o *info,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *renderWaitList; // x0

  if ( (byte_40FAE6C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__, info);
    byte_40FAE6C = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_B170D4();
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    renderWaitList,
    (Mono_Net_CFNetwork_GetProxyData_o *)info,
    (const MethodInfo_2B16498 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__);
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
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x22
  UIStandFigureRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v13; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Transform_o *v17; // x0
  int32_t layer; // w0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FAE6E & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___, parent);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_12963/*"StandFigureM"*/, v7);
    byte_40FAE6E = 1;
  }
  standFigureMPrefab = this->fields.standFigureMPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)standFigureMPrefab,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v9 )
    goto LABEL_12;
  v10 = v9;
  Component_srcLineSprite = (UIStandFigureRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                       v9,
                                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___);
  transform = UnityEngine_GameObject__get_transform(v10, 0LL);
  v13 = UnityEngine_GameObject__get_transform(v10, 0LL);
  if ( !v13 )
    goto LABEL_12;
  localScale = UnityEngine_Transform__get_localScale(v13, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v10, (System_String_o *)StringLiteral_12963/*"StandFigureM"*/, 0LL);
  if ( !parent )
    goto LABEL_12;
  v17 = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_12;
  UnityEngine_Transform__set_parent(transform, v17, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v22, 0LL);
  layer = UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_srcLineSprite )
LABEL_12:
    sub_B170D4();
  UIStandFigureRender__SetLayer(Component_srcLineSprite, layer, 0LL);
  return (UIStandFigureM_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshLocal_26841580(
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
  UIStandFigureM_o *v16; // x20
  UnityEngine_Object_o *gameObject; // x26
  const MethodInfo *v18; // x2
  System_String_o *StandFigureMName; // x0

  MeshLocal = (UnityEngine_Component_o *)StandFigureManager__CreateMeshLocal(this, parent, *(const MethodInfo **)&svtId);
  if ( !MeshLocal
    || (v16 = (UIStandFigureM_o *)MeshLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(MeshLocal, 0LL),
        StandFigureMName = StandFigureManager__CreateStandFigureMName(svtId, imageLimitCount, v18),
        !gameObject) )
  {
    sub_B170D4();
  }
  UnityEngine_Object__set_name(gameObject, StandFigureMName, 0LL);
  UIStandFigureM__SetCharacter_40866952(v16, svtId, imageLimitCount, faceType, callbackFunc, loadRequiredResource, 0LL);
  UIStandFigureRender__SetDepth((UIStandFigureRender_o *)v16, (float)panelDepth, 0LL);
  return v16;
}


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  StandFigureManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40FAE5A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, method);
    byte_40FAE5A = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return StandFigureManager__CreateMeshLocal(Instance, parent, v4);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_26841340(
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
  int32_t ImageLimitCount; // w0
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]

  if ( (byte_40FAE5B & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v14);
    byte_40FAE5B = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_B170D4();
  return StandFigureManager__CreateMeshLocal_26841580(
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


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_26841764(
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
  const MethodInfo *v17; // [xsp+0h] [xbp-50h]

  if ( (byte_40FAE5C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    byte_40FAE5C = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return StandFigureManager__CreateMeshLocal_26841580(
           Instance,
           parent,
           svtId,
           imageLimitCount,
           faceType,
           panelDepth,
           callbackFunc,
           loadRequiredResource,
           v17);
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
  const MethodInfo *v21; // x2
  UIStandFigureR_o *RenderLocal; // x0
  UnityEngine_Component_o *v23; // x23
  int32_t Form; // w24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v26; // x0
  System_String_o *v27; // x0
  int32_t imageIda; // [xsp+Ch] [xbp-44h] BYREF

  imageIda = imageId;
  if ( (byte_40FAE60 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&imageId);
    sub_B16FFC(&UIStandFigureRender_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_12966/*"StandFigureR("*/, v18);
    sub_B16FFC(&StringLiteral_651/*")"*/, v19);
    byte_40FAE60 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  RenderLocal = StandFigureManager__CreateRenderLocal(Instance, parent, v21);
  v23 = (UnityEngine_Component_o *)RenderLocal;
  if ( !isIgnoreFormChange )
  {
    if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    }
    Form = UIStandFigureRender__GetForm(imageId, 0, friendship, 0LL);
    if ( v23 )
      goto LABEL_11;
LABEL_13:
    sub_B170D4();
  }
  Form = 0;
  if ( !RenderLocal )
    goto LABEL_13;
LABEL_11:
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v23, 0LL);
  v26 = System_Int32__ToString((int32_t)&imageIda, 0LL);
  v27 = System_String__Concat_43746016(
          (System_String_o *)StringLiteral_12966/*"StandFigureR("*/,
          v26,
          (System_String_o *)StringLiteral_651/*")"*/,
          0LL);
  if ( !gameObject )
    goto LABEL_13;
  UnityEngine_Object__set_name(gameObject, v27, 0LL);
  UIStandFigureR__SetCharacterForImageId(
    (UIStandFigureR_o *)v23,
    imageIda,
    offsetKind,
    faceType,
    Form,
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
  const MethodInfo *v17; // x2
  UnityEngine_Component_o *RenderLocal; // x0
  UIStandFigureR_o *v19; // x24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  int32_t imageIda; // [xsp+Ch] [xbp-34h] BYREF

  imageIda = imageId;
  if ( (byte_40FAE61 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&imageId);
    sub_B16FFC(&StringLiteral_12966/*"StandFigureR("*/, v14);
    sub_B16FFC(&StringLiteral_651/*")"*/, v15);
    byte_40FAE61 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance
    || (RenderLocal = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v17)) == 0LL
    || (v19 = (UIStandFigureR_o *)RenderLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(RenderLocal, 0LL),
        v21 = System_Int32__ToString((int32_t)&imageIda, 0LL),
        v22 = System_String__Concat_43746016(
                (System_String_o *)StringLiteral_12966/*"StandFigureR("*/,
                v21,
                (System_String_o *)StringLiteral_651/*")"*/,
                0LL),
        !gameObject) )
  {
    sub_B170D4();
  }
  UnityEngine_Object__set_name(gameObject, v22, 0LL);
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
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x22
  UIStandFigureR_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v13; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t layer; // w0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FAE70 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___, parent);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_12965/*"StandFigureR"*/, v7);
    byte_40FAE70 = 1;
  }
  standFigureRPrefab = this->fields.standFigureRPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)standFigureRPrefab,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v9 )
    goto LABEL_13;
  v10 = v9;
  Component_srcLineSprite = (UIStandFigureR_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                  v9,
                                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  transform = UnityEngine_GameObject__get_transform(v10, 0LL);
  v13 = UnityEngine_GameObject__get_transform(v10, 0LL);
  if ( !v13 )
    goto LABEL_13;
  localScale = UnityEngine_Transform__get_localScale(v13, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v10, (System_String_o *)StringLiteral_12965/*"StandFigureR"*/, 0LL);
  if ( !parent )
    goto LABEL_13;
  v17 = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(transform, v17, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v23, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject || (layer = UnityEngine_GameObject__get_layer(gameObject, 0LL), !Component_srcLineSprite) )
LABEL_13:
    sub_B170D4();
  UIStandFigureR__SetLayer(Component_srcLineSprite, layer, 0LL);
  return Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_26842628(
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
  int32_t Id; // w0
  int32_t Form; // w24
  int32_t v24; // w24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v26; // x26
  System_String_o *v27; // x0
  System_String_o *v28; // x0
  int32_t v30; // [xsp+8h] [xbp-58h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-54h] BYREF

  v30 = imageLimitCount;
  v31 = svtId;
  if ( (byte_40FAE71 & 1) == 0 )
  {
    sub_B16FFC(&UIStandFigureRender_TypeInfo, parent);
    sub_B16FFC(&StringLiteral_12966/*"StandFigureR("*/, v19);
    sub_B16FFC(&StringLiteral_651/*")"*/, v20);
    byte_40FAE71 = 1;
  }
  RenderLocal = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(
                                             this,
                                             parent,
                                             *(const MethodInfo **)&svtId);
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  if ( isIgnoreFormChange )
  {
    Form = 0;
    if ( !RenderLocal )
      goto LABEL_12;
  }
  else
  {
    v24 = Id;
    if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    }
    Form = UIStandFigureRender__GetForm(v24, 0, friendship, 0LL);
    if ( !RenderLocal )
LABEL_12:
      sub_B170D4();
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(RenderLocal, 0LL);
  v26 = System_Int32__ToString((int32_t)&v31, 0LL);
  v27 = System_Int32__ToString((int32_t)&v30, 0LL);
  v28 = System_String__Concat_43747144(
          (System_String_o *)StringLiteral_12966/*"StandFigureR("*/,
          v26,
          v27,
          (System_String_o *)StringLiteral_651/*")"*/,
          0LL);
  if ( !gameObject )
    goto LABEL_12;
  UnityEngine_Object__set_name(gameObject, v28, 0LL);
  UIStandFigureR__SetCharacter_40881944(
    (UIStandFigureR_o *)RenderLocal,
    v31,
    v30,
    offsetKind,
    faceType,
    Form,
    callbackFunc,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)RenderLocal, depth, 0LL);
  return (UIStandFigureR_o *)RenderLocal;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_26844180(
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
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *v23; // x25
  System_String_o *v24; // x0
  System_String_o *v25; // x0
  int32_t v27; // [xsp+8h] [xbp-48h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-44h] BYREF

  v27 = imageLimitCount;
  v28 = svtId;
  if ( (byte_40FAE72 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12966/*"StandFigureR("*/, parent);
    sub_B16FFC(&StringLiteral_651/*")"*/, v20);
    byte_40FAE72 = 1;
  }
  RenderLocal = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(
                                             this,
                                             parent,
                                             *(const MethodInfo **)&svtId);
  ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  if ( !RenderLocal
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(RenderLocal, 0LL),
        v23 = System_Int32__ToString((int32_t)&v28, 0LL),
        v24 = System_Int32__ToString((int32_t)&v27, 0LL),
        v25 = System_String__Concat_43747144(
                (System_String_o *)StringLiteral_12966/*"StandFigureR("*/,
                v23,
                v24,
                (System_String_o *)StringLiteral_651/*")"*/,
                0LL),
        !gameObject) )
  {
    sub_B170D4();
  }
  UnityEngine_Object__set_name(gameObject, v25, 0LL);
  UIStandFigureR__SetCharacter_40881944(
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
  const MethodInfo *v4; // x2

  if ( (byte_40FAE5D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, method);
    byte_40FAE5D = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return StandFigureManager__CreateRenderLocal(Instance, parent, v4);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_26842372(
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
  int32_t ImageLimitCount; // w0
  const MethodInfo *v20; // [xsp+10h] [xbp-50h]

  if ( (byte_40FAE5E & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v16);
    byte_40FAE5E = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_B170D4();
  return StandFigureManager__CreateRenderLocal_26842628(
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


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_26843068(
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
  const MethodInfo *v20; // [xsp+10h] [xbp-60h]

  if ( (byte_40FAE5F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    byte_40FAE5F = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return StandFigureManager__CreateRenderLocal_26842628(
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
           v20);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_26843988(
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
  int32_t v21; // [xsp+10h] [xbp-60h]
  const MethodInfo *v22; // [xsp+18h] [xbp-58h]

  if ( (byte_40FAE62 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    byte_40FAE62 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return StandFigureManager__CreateRenderLocal_26844180(
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
           v21,
           v22);
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
  if ( (byte_40FAE6F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12964/*"StandFigureM("*/, *(_QWORD *)&imageLimitCount);
    sub_B16FFC(&StringLiteral_651/*")"*/, v3);
    byte_40FAE6F = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_43747144(
           (System_String_o *)StringLiteral_12964/*"StandFigureM("*/,
           v4,
           v5,
           (System_String_o *)StringLiteral_651/*")"*/,
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
  System_String_o *AssetName_26839468; // x20

  if ( (byte_40FAE54 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v8);
    byte_40FAE54 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_26839468 = StandFigureManager__GetAssetName_26839468(svtId, ImageLimitCount, v10);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_26839468, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__DownloadAsset_26840012(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_26839468; // x20

  if ( (byte_40FAE55 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_40FAE55 = 1;
  }
  AssetName_26839468 = StandFigureManager__GetAssetName_26839468(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_26839468, callback, 1, 0LL);
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

  if ( (byte_40FAE50 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&UIStandFigureRender_TypeInfo, v6);
    byte_40FAE50 = 1;
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
  if ( (byte_40FAE53 & 1) == 0 )
  {
    sub_B16FFC(&UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_40FAE53 = 1;
  }
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  return UIStandFigureRender__GetAssetName_40893800(svtId, imageLimitCount, formId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StandFigureManager__GetAssetName_26839468(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  if ( (byte_40FAE51 & 1) == 0 )
  {
    sub_B16FFC(&UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_40FAE51 = 1;
  }
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  return UIStandFigureRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName_26839584(int32_t id, const MethodInfo *method)
{
  if ( (byte_40FAE52 & 1) == 0 )
  {
    sub_B16FFC(&UIStandFigureRender_TypeInfo, method);
    byte_40FAE52 = 1;
  }
  if ( (BYTE3(UIStandFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIStandFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  }
  return UIStandFigureRender__GetAssetName_40894600(id, 0LL);
}


void __fastcall StandFigureManager__LateUpdate(StandFigureManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  struct StandFigureRenderWaitStatus_o *renderInfo; // x8
  StandFigureCamera_o *standFigureCamera; // x0
  UnityEngine_RenderTexture_o *renderTex; // x1
  bool v7; // w0
  UnityEngine_Component_o *standFigureRender; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIStandFigureRender_o *v10; // x0
  const MethodInfo *v11; // x2
  StandFigureRenderWaitStatus_o *v12; // x0
  bool v13; // w0

  if ( StandFigureManager__RenderStart(this, method) )
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
    v7 = StandFigureCamera__RequestTypePoint(standFigureCamera, renderTex, v3);
    this->fields.isRenderWait = !v7;
    if ( v7 )
    {
LABEL_8:
      standFigureRender = (UnityEngine_Component_o *)this->fields.standFigureRender;
      if ( standFigureRender )
      {
        gameObject = UnityEngine_Component__get_gameObject(standFigureRender, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          v10 = this->fields.standFigureRender;
          if ( v10 )
          {
            UIStandFigureRender__SetActive(v10, 1, 0LL);
            v12 = this->fields.renderInfo;
            if ( v12 )
            {
              StandFigureRenderWaitStatus__SetCharacter(v12, this->fields.standFigureRender, v11);
              return;
            }
          }
        }
      }
LABEL_15:
      sub_B170D4();
    }
  }
  else
  {
    v13 = StandFigureCamera__Request(standFigureCamera, renderTex, v3);
    this->fields.isRenderWait = !v13;
    if ( v13 )
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
  System_String_o *AssetName_26839468; // x20

  if ( (byte_40FAE56 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v8);
    byte_40FAE56 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_26839468 = StandFigureManager__GetAssetName_26839468(svtId, ImageLimitCount, v10);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_26839468, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__LoadAsset_26840360(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_26839468; // x20

  if ( (byte_40FAE57 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_40FAE57 = 1;
  }
  AssetName_26839468 = StandFigureManager__GetAssetName_26839468(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_26839468, callback, 1, 0LL);
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
    sub_B16F98(p_renderInfo, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_40FAE6B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__, v9);
    byte_40FAE6B = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_B170D4();
  if ( renderWaitList->fields._size >= 1 )
    System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
      renderWaitList,
      (const MethodInfo_2B16138 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
  this->fields.renderInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.renderInfo, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_String_o *AssetName_26839468; // x19

  if ( (byte_40FAE58 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&ImageLimitCount_TypeInfo, v6);
    byte_40FAE58 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_26839468 = StandFigureManager__GetAssetName_26839468(svtId, ImageLimitCount, v8);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_26839468, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__ReleaseAsset_26840696(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  System_String_o *AssetName_26839468; // x19

  if ( (byte_40FAE59 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_40FAE59 = 1;
  }
  AssetName_26839468 = StandFigureManager__GetAssetName_26839468(svtId, imageLimitCount, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_26839468, 0LL);
}


void __fastcall StandFigureManager__ReleaseCharaFigure(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WebViewManager_o *Instance; // x19
  UnityEngine_Object_o *webViewBase; // x20
  UIStandFigureRender_o *v5; // x0

  if ( (byte_40FAE6A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v1);
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v2);
    byte_40FAE6A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL) )
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
      v5 = (UIStandFigureRender_o *)Instance->fields.webViewBase;
      if ( v5 )
      {
        UIStandFigureRender__ReleaseCharacter(v5, 0LL);
        return;
      }
LABEL_15:
      sub_B170D4();
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  StandFigureRenderWaitStatus_o *v20; // x22
  StandFigureManager_o *Instance; // x0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // [xsp+0h] [xbp-40h]

  if ( (byte_40FAE63 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v12);
    sub_B16FFC(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_40FAE63 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v20 = (StandFigureRenderWaitStatus_o *)sub_B170CC(StandFigureRenderWaitStatus_TypeInfo, v16, v17, v18, v19);
  StandFigureRenderWaitStatus___ctor_26846364(v20, 0LL, Id, faceType, 0, 0, textureList, callback, v23);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  StandFigureManager__AddRender(Instance, v20, v22);
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
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // [xsp+0h] [xbp-50h]

  if ( (byte_40FAE69 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&id);
    sub_B16FFC(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_40FAE69 = 1;
  }
  v14 = (StandFigureRenderWaitStatus_o *)sub_B170CC(
                                           StandFigureRenderWaitStatus_TypeInfo,
                                           *(_QWORD *)&id,
                                           *(_QWORD *)&faceType,
                                           *(_QWORD *)&formId,
                                           textureList);
  StandFigureRenderWaitStatus___ctor_26846364(v14, renderTex, id, faceType, formId, 1, textureList, callback, v17);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  StandFigureManager__AddRender(Instance, v14, v16);
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

  if ( (byte_40FAE6D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__, v3);
    byte_40FAE6D = 1;
  }
  if ( this->fields.renderInfo )
    return 0;
  renderWaitList = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_B170D4();
  if ( renderWaitList->fields._size < 1 )
    return 0;
  ProxyData___Dequeue = System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                          renderWaitList,
                          (const MethodInfo_2B166B0 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__);
  this->fields.renderInfo = (struct StandFigureRenderWaitStatus_o *)ProxyData___Dequeue;
  sub_B16F98(
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
void __fastcall StandFigureManager__Render_26844952(
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  int32_t Id; // w23
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  StandFigureRenderWaitStatus_o *v17; // x22
  StandFigureManager_o *Instance; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // [xsp+0h] [xbp-40h]

  if ( (byte_40FAE64 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&imageLimitCount);
    sub_B16FFC(&StandFigureRenderWaitStatus_TypeInfo, v11);
    byte_40FAE64 = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v17 = (StandFigureRenderWaitStatus_o *)sub_B170CC(StandFigureRenderWaitStatus_TypeInfo, v13, v14, v15, v16);
  StandFigureRenderWaitStatus___ctor_26846364(v17, 0LL, Id, faceType, 0, 0, textureList, callback, v20);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  StandFigureManager__AddRender(Instance, v17, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_26845168(
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  StandFigureRenderWaitStatus_o *v10; // x23
  StandFigureManager_o *Instance; // x0
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // [xsp+0h] [xbp-40h]

  if ( (byte_40FAE65 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&faceType);
    sub_B16FFC(&StandFigureRenderWaitStatus_TypeInfo, v9);
    byte_40FAE65 = 1;
  }
  v10 = (StandFigureRenderWaitStatus_o *)sub_B170CC(
                                           StandFigureRenderWaitStatus_TypeInfo,
                                           *(_QWORD *)&faceType,
                                           textureList,
                                           callback,
                                           method);
  StandFigureRenderWaitStatus___ctor_26846364(v10, 0LL, id, faceType, 0, 0, textureList, callback, v13);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  StandFigureManager__AddRender(Instance, v10, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_26845356(
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  StandFigureRenderWaitStatus_o *v22; // x23
  StandFigureManager_o *Instance; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // [xsp+0h] [xbp-50h]

  if ( (byte_40FAE66 & 1) == 0 )
  {
    sub_B16FFC(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v14);
    sub_B16FFC(&StandFigureRenderWaitStatus_TypeInfo, v15);
    byte_40FAE66 = 1;
  }
  if ( (BYTE3(ImageLimitCount_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ImageLimitCount_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  }
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v22 = (StandFigureRenderWaitStatus_o *)sub_B170CC(StandFigureRenderWaitStatus_TypeInfo, v18, v19, v20, v21);
  StandFigureRenderWaitStatus___ctor_26846364(v22, renderTex, Id, faceType, 0, 0, textureList, callback, v25);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  StandFigureManager__AddRender(Instance, v22, v24);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_26845688(
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  StandFigureRenderWaitStatus_o *v19; // x23
  StandFigureManager_o *Instance; // x0
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // [xsp+0h] [xbp-50h]

  if ( (byte_40FAE67 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    sub_B16FFC(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_40FAE67 = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v19 = (StandFigureRenderWaitStatus_o *)sub_B170CC(StandFigureRenderWaitStatus_TypeInfo, v15, v16, v17, v18);
  StandFigureRenderWaitStatus___ctor_26846364(v19, renderTex, Id, faceType, 0, 0, textureList, callback, v22);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  StandFigureManager__AddRender(Instance, v19, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_26845916(
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
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // [xsp+0h] [xbp-50h]

  if ( (byte_40FAE68 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&id);
    sub_B16FFC(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_40FAE68 = 1;
  }
  v14 = (StandFigureRenderWaitStatus_o *)sub_B170CC(
                                           StandFigureRenderWaitStatus_TypeInfo,
                                           *(_QWORD *)&id,
                                           *(_QWORD *)&faceType,
                                           *(_QWORD *)&formId,
                                           textureList);
  StandFigureRenderWaitStatus___ctor_26846364(v14, renderTex, id, faceType, formId, 0, textureList, callback, v17);
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  StandFigureManager__AddRender(Instance, v14, v16);
}