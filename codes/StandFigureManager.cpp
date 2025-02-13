void __fastcall StandFigureManager___ctor(StandFigureManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDB840 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__);
    sub_1C21E38(&System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager___ctor__);
    byte_4BDB840 = 1;
  }
  v3 = (System_Collections_Generic_Queue_T__o *)sub_1C22084(System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v3,
    (const MethodInfo_37C0E20 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__);
  this->fields.renderWaitList = (struct System_Collections_Generic_Queue_StandFigureRenderWaitStatus__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.renderWaitList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_388D470 *)Method_SingletonMonoBehaviour_StandFigureManager___ctor__);
}


void __fastcall StandFigureManager__AddRender(
        StandFigureManager_o *this,
        StandFigureRenderWaitStatus_o *info,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0

  if ( (byte_4BDB838 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__);
    byte_4BDB838 = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1C22094(0LL, info);
  System_Collections_Generic_Queue_object___Enqueue(
    renderWaitList,
    (Il2CppObject *)info,
    (const MethodInfo_37C13E8 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__);
}


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshLocal(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *standFigureMPrefab; // x20
  UnityEngine_GameObject_o *layer; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x22
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDB83A & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_13185/*"StandFigureM"*/);
    byte_4BDB83A = 1;
  }
  standFigureMPrefab = (Il2CppObject *)this->fields.standFigureMPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        standFigureMPrefab,
                                        (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_15;
  v8 = layer;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       layer,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___);
  transform = UnityEngine_GameObject__get_transform(v8, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !layer )
    goto LABEL_15;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_13185/*"StandFigureM"*/, 0LL);
  if ( !parent )
    goto LABEL_15;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0LL);
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4BD6BB7 )
  {
    sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
    byte_4BD6BB7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v16.fields.x = x;
  v16.fields.y = y;
  v16.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v16, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_object )
LABEL_15:
    sub_1C22094(layer, v7);
  UIStandFigureRender__SetLayer((UIStandFigureRender_o *)Component_object, (int32_t)layer, 0LL);
  return (UIStandFigureM_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshLocal_39222036(
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
    sub_1C22094(MeshLocal, v16);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)MeshLocal, 0LL);
  UIStandFigureM__SetCharacter_42308116(v17, svtId, imageLimitCount, faceType, callbackFunc, loadRequiredResource, 0LL);
  UIStandFigureRender__SetDepth((UIStandFigureRender_o *)v17, (float)panelDepth, 0LL);
  return v17;
}


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4BDB826 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4BDB826 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  return StandFigureManager__CreateMeshLocal((StandFigureManager_o *)Instance, parent, v5);
}


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_39221808(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        int32_t faceType,
        int32_t panelDepth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x25
  __int64 ImageLimitCount; // x0
  __int64 v16; // x1
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  if ( (byte_4BDB827 & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4BDB827 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_1C22094(ImageLimitCount, v16);
  return StandFigureManager__CreateMeshLocal_39222036(
           (StandFigureManager_o *)Instance,
           parent,
           svtId,
           ImageLimitCount,
           faceType,
           panelDepth,
           callbackFunc,
           0,
           v18);
}


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_39222216(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        int32_t panelDepth,
        System_Action_o *callbackFunc,
        bool loadRequiredResource,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  if ( (byte_4BDB828 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4BDB828 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v16);
  return StandFigureManager__CreateMeshLocal_39222036(
           (StandFigureManager_o *)Instance,
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
        UnityEngine_GameObject_o *original,
        const MethodInfo *method)
{
  StandFigureManager_o *Instance; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  UnityEngine_Component_o *v21; // x23
  int32_t v22; // w24
  const MethodInfo *v23; // x2
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v25; // x0
  int32_t imageIda; // [xsp+Ch] [xbp-54h] BYREF

  imageIda = imageId;
  if ( (byte_4BDB82C & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C21E38(&UIStandFigureRender_TypeInfo);
    sub_1C21E38(&StringLiteral_13188/*"StandFigureR("*/);
    sub_1C21E38(&StringLiteral_812/*")"*/);
    byte_4BDB82C = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1C22094(Instance, v19);
  Instance = (StandFigureManager_o *)StandFigureManager__CreateStandFigureAnimated(Instance, original, parent, v20);
  v21 = (UnityEngine_Component_o *)Instance;
  if ( Instance )
  {
    if ( isIgnoreFormChange )
    {
LABEL_6:
      v22 = 0;
      goto LABEL_12;
    }
  }
  else
  {
    Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v23);
    v21 = (UnityEngine_Component_o *)Instance;
    if ( isIgnoreFormChange )
      goto LABEL_6;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  Instance = (StandFigureManager_o *)UIStandFigureRender__GetForm(imageId, 0, friendship, 0LL);
  v22 = (int)Instance;
LABEL_12:
  if ( !v21 )
    goto LABEL_15;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v21, 0LL);
  v25 = System_Int32__ToString((int32_t)&imageIda, 0LL);
  Instance = (StandFigureManager_o *)System_String__Concat_63126736(
                                       (System_String_o *)StringLiteral_13188/*"StandFigureR("*/,
                                       v25,
                                       (System_String_o *)StringLiteral_812/*")"*/,
                                       0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
  UIStandFigureR__SetCharacterForImageId(
    (UIStandFigureR_o *)v21,
    imageIda,
    offsetKind,
    faceType,
    v22,
    callbackFunc,
    0,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)v21, depth, 0LL);
  return (UIStandFigureR_o *)v21;
}


UIStandFigureR_o *__fastcall StandFigureManager__CreatePrefabForImageIdAndForm(
        UnityEngine_GameObject_o *parent,
        int32_t imageId,
        int32_t formId,
        int32_t offsetKind,
        int32_t faceType,
        int32_t depth,
        System_Action_o *callbackFunc,
        UnityEngine_GameObject_o *original,
        const MethodInfo *method)
{
  StandFigureManager_o *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  UnityEngine_Component_o *StandFigureAnimated; // x24
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v22; // x0
  int32_t imageIda; // [xsp+Ch] [xbp-54h] BYREF

  imageIda = imageId;
  if ( (byte_4BDB82D & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C21E38(&StringLiteral_13188/*"StandFigureR("*/);
    sub_1C21E38(&StringLiteral_812/*")"*/);
    byte_4BDB82D = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance
    || (StandFigureAnimated = (UnityEngine_Component_o *)StandFigureManager__CreateStandFigureAnimated(
                                                           Instance,
                                                           original,
                                                           parent,
                                                           v18)) == 0LL
    && ((Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__)) == 0LL
     || (Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v20),
         (StandFigureAnimated = (UnityEngine_Component_o *)Instance) == 0LL))
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(StandFigureAnimated, 0LL),
        v22 = System_Int32__ToString((int32_t)&imageIda, 0LL),
        Instance = (StandFigureManager_o *)System_String__Concat_63126736(
                                             (System_String_o *)StringLiteral_13188/*"StandFigureR("*/,
                                             v22,
                                             (System_String_o *)StringLiteral_812/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_1C22094(Instance, v17);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
  UIStandFigureR__SetCharacterForImageId(
    (UIStandFigureR_o *)StandFigureAnimated,
    imageIda,
    offsetKind,
    faceType,
    formId,
    callbackFunc,
    0,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)StandFigureAnimated, depth, 0LL);
  return (UIStandFigureR_o *)StandFigureAnimated;
}


UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *standFigureRPrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x22
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDB83C & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_13187/*"StandFigureR"*/);
    byte_4BDB83C = 1;
  }
  standFigureRPrefab = (Il2CppObject *)this->fields.standFigureRPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             standFigureRPrefab,
                                             (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v8 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  transform = UnityEngine_GameObject__get_transform(v8, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_13187/*"StandFigureR"*/, 0LL);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4BD6BB7 )
  {
    sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
    byte_4BD6BB7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v16.fields.x = x;
  v16.fields.y = y;
  v16.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v16, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL), !Component_object) )
  {
LABEL_16:
    sub_1C22094(gameObject, v7);
  }
  UIStandFigureR__SetLayer((UIStandFigureR_o *)Component_object, (int32_t)gameObject, 0LL);
  UIStandFigureR__SetMaterial((UIStandFigureR_o *)Component_object, 0LL);
  return (UIStandFigureR_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_39223256(
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
        UnityEngine_GameObject_o *original,
        const MethodInfo *method)
{
  StandFigureManager_o *v19; // x27
  const MethodInfo *v20; // x2
  UnityEngine_Component_o *StandFigureAnimated; // x23
  System_String_o *Id; // x0
  __int64 v23; // x1
  int32_t v24; // w24
  int32_t v25; // w24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v27; // x26
  System_String_o *v28; // x0
  int32_t v30; // [xsp+8h] [xbp-58h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-54h] BYREF

  v19 = this;
  v30 = imageLimitCount;
  v31 = svtId;
  if ( (byte_4BDB83E & 1) == 0 )
  {
    sub_1C21E38(&UIStandFigureRender_TypeInfo);
    sub_1C21E38(&StringLiteral_13188/*"StandFigureR("*/);
    this = (StandFigureManager_o *)sub_1C21E38(&StringLiteral_812/*")"*/);
    byte_4BDB83E = 1;
  }
  StandFigureAnimated = (UnityEngine_Component_o *)StandFigureManager__CreateStandFigureAnimated(
                                                     this,
                                                     original,
                                                     parent,
                                                     *(const MethodInfo **)&imageLimitCount);
  if ( !StandFigureAnimated )
    StandFigureAnimated = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(v19, parent, v20);
  Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  if ( isIgnoreFormChange )
  {
    v24 = 0;
  }
  else
  {
    v25 = (int)Id;
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    Id = (System_String_o *)UIStandFigureRender__GetForm(v25, 0, friendship, 0LL);
    v24 = (int)Id;
  }
  if ( !StandFigureAnimated
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(StandFigureAnimated, 0LL),
        v27 = System_Int32__ToString((int32_t)&v31, 0LL),
        v28 = System_Int32__ToString((int32_t)&v30, 0LL),
        Id = System_String__Concat_63128740(
               (System_String_o *)StringLiteral_13188/*"StandFigureR("*/,
               v27,
               v28,
               (System_String_o *)StringLiteral_812/*")"*/,
               0LL),
        !gameObject) )
  {
    sub_1C22094(Id, v23);
  }
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_42318944(
    (UIStandFigureR_o *)StandFigureAnimated,
    v31,
    v30,
    offsetKind,
    faceType,
    v24,
    callbackFunc,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)StandFigureAnimated, depth, 0LL);
  return (UIStandFigureR_o *)StandFigureAnimated;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_39225388(
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
        UnityEngine_GameObject_o *original,
        const MethodInfo *method)
{
  StandFigureManager_o *v20; // x27
  UIStandFigureR_o *StandFigureAnimated; // x0
  const MethodInfo *v22; // x2
  UnityEngine_Component_o *RenderLocal; // x23
  System_String_o *Id; // x0
  __int64 v25; // x1
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *v27; // x25
  System_String_o *v28; // x0
  int32_t v30; // [xsp+8h] [xbp-58h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-54h] BYREF

  v20 = this;
  v30 = imageLimitCount;
  v31 = svtId;
  if ( (byte_4BDB83F & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13188/*"StandFigureR("*/);
    this = (StandFigureManager_o *)sub_1C21E38(&StringLiteral_812/*")"*/);
    byte_4BDB83F = 1;
  }
  StandFigureAnimated = StandFigureManager__CreateStandFigureAnimated(
                          this,
                          original,
                          parent,
                          *(const MethodInfo **)&imageLimitCount);
  if ( StandFigureAnimated )
  {
    RenderLocal = (UnityEngine_Component_o *)StandFigureAnimated;
    ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  }
  else
  {
    RenderLocal = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(v20, parent, v22);
    Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
    if ( !RenderLocal )
      goto LABEL_8;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(RenderLocal, 0LL);
  v27 = System_Int32__ToString((int32_t)&v31, 0LL);
  v28 = System_Int32__ToString((int32_t)&v30, 0LL);
  Id = System_String__Concat_63128740(
         (System_String_o *)StringLiteral_13188/*"StandFigureR("*/,
         v27,
         v28,
         (System_String_o *)StringLiteral_812/*")"*/,
         0LL);
  if ( !gameObject )
LABEL_8:
    sub_1C22094(Id, v25);
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_42318944(
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4BDB829 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4BDB829 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  return StandFigureManager__CreateRenderLocal((StandFigureManager_o *)Instance, parent, v5);
}


UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_39223000(
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
  Il2CppObject *Instance; // x26
  __int64 ImageLimitCount; // x0
  __int64 v18; // x1
  const MethodInfo *v20; // [xsp+18h] [xbp-68h]

  if ( (byte_4BDB82A & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4BDB82A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_1C22094(ImageLimitCount, v18);
  return StandFigureManager__CreateRenderLocal_39223256(
           (StandFigureManager_o *)Instance,
           parent,
           svtId,
           ImageLimitCount,
           offsetKind,
           faceType,
           depth,
           callbackFunc,
           0,
           -1,
           0LL,
           v20);
}


UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_39223696(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t offsetKind,
        int32_t faceType,
        int32_t depth,
        System_Action_o *callbackFunc,
        bool isIgnoreFormChange,
        int32_t friendship,
        UnityEngine_GameObject_o *original,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v22; // [xsp+18h] [xbp-68h]

  if ( (byte_4BDB82B & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4BDB82B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v20);
  return StandFigureManager__CreateRenderLocal_39223256(
           (StandFigureManager_o *)Instance,
           parent,
           svtId,
           imageLimitCount,
           offsetKind,
           faceType,
           depth,
           callbackFunc,
           isIgnoreFormChange,
           friendship,
           original,
           v22);
}


UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_39225192(
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
        UnityEngine_GameObject_o *original,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  int32_t v23; // [xsp+10h] [xbp-80h]
  const MethodInfo *v24; // [xsp+20h] [xbp-70h]

  if ( (byte_4BDB82E & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4BDB82E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v21);
  return StandFigureManager__CreateRenderLocal_39225388(
           (StandFigureManager_o *)Instance,
           parent,
           svtId,
           imageLimitCount,
           formId,
           offsetKind,
           faceType,
           depth,
           callbackFunc,
           0,
           v23,
           original,
           v24);
}


UIStandFigureR_o *__fastcall StandFigureManager__CreateStandFigureAnimated(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *original,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 layer; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Object_o *v10; // x21
  UnityEngine_Transform_o *v11; // x22
  UnityEngine_Transform_o *v12; // x21

  if ( (byte_4BDB83D & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715640);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_13187/*"StandFigureR"*/);
    byte_4BDB83D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  layer = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)original, 0LL, 0LL);
  Component_object = 0LL;
  if ( (layer & 1) == 0 )
  {
    if ( !parent )
      goto LABEL_19;
    transform = UnityEngine_GameObject__get_transform(parent, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    layer = (__int64)UnityEngine_Object__Instantiate_object__50551384(
                       (Il2CppObject *)original,
                       transform,
                       0,
                       (const MethodInfo_3035A58 *)Method_UnityEngine_Object_Instantiate_GameObject____77715640);
    if ( !layer )
      goto LABEL_19;
    v10 = (UnityEngine_Object_o *)layer;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)layer,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
    UnityEngine_Object__set_name(v10, (System_String_o *)StringLiteral_13187/*"StandFigureR"*/, 0LL);
    layer = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
    v11 = (UnityEngine_Transform_o *)layer;
    if ( !byte_4BD6BB1 )
    {
      layer = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    if ( !v11 )
      goto LABEL_19;
    UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    layer = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v10, 0LL);
    v12 = (UnityEngine_Transform_o *)layer;
    if ( !byte_4BD6BB7 )
    {
      layer = sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
      byte_4BD6BB7 = 1;
    }
    if ( !v12
      || (UnityEngine_Transform__set_localRotation(
            v12,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0LL),
          layer = UnityEngine_GameObject__get_layer(parent, 0LL),
          !Component_object) )
    {
LABEL_19:
      sub_1C22094(layer, v7);
    }
    UIStandFigureR__SetLayer((UIStandFigureR_o *)Component_object, layer, 0LL);
    UIStandFigureR__SetMaterial((UIStandFigureR_o *)Component_object, 0LL);
  }
  return (UIStandFigureR_o *)Component_object;
}


System_String_o *__fastcall StandFigureManager__CreateStandFigureMName(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+8h] [xbp-28h] BYREF
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v6 = imageLimitCount;
  v7 = svtId;
  if ( (byte_4BDB83B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13186/*"StandFigureM("*/);
    sub_1C21E38(&StringLiteral_812/*")"*/);
    byte_4BDB83B = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v7, 0LL);
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_63128740(
           (System_String_o *)StringLiteral_13186/*"StandFigureM("*/,
           v3,
           v4,
           (System_String_o *)StringLiteral_812/*")"*/,
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
  System_String_o *AssetName_39219988; // x20

  if ( (byte_4BDB820 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    byte_4BDB820 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_39219988 = StandFigureManager__GetAssetName_39219988(svtId, ImageLimitCount, v9);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_39219988, callback, 1, 0LL);
}


void __fastcall StandFigureManager__DownloadAsset_39220476(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_39219988; // x20

  if ( (byte_4BDB821 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB821 = 1;
  }
  AssetName_39219988 = StandFigureManager__GetAssetName_39219988(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_39219988, callback, 1, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w20

  if ( (byte_4BDB81C & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&UIStandFigureRender_TypeInfo);
    byte_4BDB81C = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName(svtId, ImageLimitCount, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetNameByForm(
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t formId,
        const MethodInfo *method)
{
  if ( (byte_4BDB81F & 1) == 0 )
  {
    sub_1C21E38(&UIStandFigureRender_TypeInfo);
    byte_4BDB81F = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName_42335332(svtId, imageLimitCount, formId, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName_39219988(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4BDB81D & 1) == 0 )
  {
    sub_1C21E38(&UIStandFigureRender_TypeInfo);
    byte_4BDB81D = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName_39220092(int32_t id, const MethodInfo *method)
{
  if ( (byte_4BDB81E & 1) == 0 )
  {
    sub_1C21E38(&UIStandFigureRender_TypeInfo);
    byte_4BDB81E = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName_42336100(id, 0LL);
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
      sub_1C22094(standFigureCamera, v4);
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
  System_String_o *AssetName_39219988; // x20

  if ( (byte_4BDB822 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    byte_4BDB822 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_39219988 = StandFigureManager__GetAssetName_39219988(svtId, ImageLimitCount, v9);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_39219988, callback, 1, 0LL);
}


void __fastcall StandFigureManager__LoadAsset_39220792(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_39219988; // x20

  if ( (byte_4BDB823 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB823 = 1;
  }
  AssetName_39219988 = StandFigureManager__GetAssetName_39219988(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_39219988, callback, 1, 0LL);
}


void __fastcall StandFigureManager__OnRenderEnd(
        StandFigureManager_o *this,
        UnityEngine_RenderTexture_o *renderTexture,
        const MethodInfo *method)
{
  StandFigureRenderWaitStatus_o *renderInfo; // x0
  PartyOrganizationUtility_o *p_renderInfo; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  p_renderInfo = (PartyOrganizationUtility_o *)&this->fields.renderInfo;
  renderInfo = this->fields.renderInfo;
  if ( renderInfo )
  {
    StandFigureRenderWaitStatus__Callback(renderInfo, renderTexture, method);
    p_renderInfo->klass = 0LL;
    sub_1C21DDC(p_renderInfo, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall StandFigureManager__Reboot(StandFigureManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0

  if ( (byte_4BDB837 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__);
    byte_4BDB837 = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1C22094(0LL, method);
  if ( renderWaitList->fields._size >= 1 )
    System_Collections_Generic_Queue_object___Clear(
      renderWaitList,
      (const MethodInfo_37C10A8 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
  this->fields.renderInfo = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.renderInfo, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_String_o *AssetName_39219988; // x19

  if ( (byte_4BDB824 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    byte_4BDB824 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_39219988 = StandFigureManager__GetAssetName_39219988(svtId, ImageLimitCount, v7);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_39219988, 0LL);
}


void __fastcall StandFigureManager__ReleaseAsset_39221096(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  System_String_o *AssetName_39219988; // x19

  if ( (byte_4BDB825 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB825 = 1;
  }
  AssetName_39219988 = StandFigureManager__GetAssetName_39219988(svtId, imageLimitCount, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_39219988, 0LL);
}


void __fastcall StandFigureManager__ReleaseCharaFigure(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *klass; // x20

  if ( (byte_4BDB836 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4BDB836 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v2 = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)v2 & 1) != 0 )
  {
    if ( !Instance )
      goto LABEL_13;
    klass = (UnityEngine_Object_o *)Instance[2].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      v2 = Instance[2].klass;
      if ( v2 )
      {
        UIStandFigureRender__ReleaseCharacter((UIStandFigureRender_o *)v2, 0LL);
        return;
      }
LABEL_13:
      sub_1C22094(v2, v3);
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
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]

  if ( (byte_4BDB82F & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C21E38(&StandFigureRenderWaitStatus_TypeInfo);
    byte_4BDB82F = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v14 = (StandFigureRenderWaitStatus_o *)sub_1C22084(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_39227552(v14, 0LL, Id, faceType, 0, 0, textureList, callback, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v16);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v14, v17);
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
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // [xsp+0h] [xbp-60h]

  if ( (byte_4BDB835 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C21E38(&StandFigureRenderWaitStatus_TypeInfo);
    byte_4BDB835 = 1;
  }
  v13 = (StandFigureRenderWaitStatus_o *)sub_1C22084(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_39227552(v13, renderTex, id, faceType, formId, 1, textureList, callback, v17);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v15);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v13, v16);
}


bool __fastcall StandFigureManager__RenderStart(StandFigureManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0
  Il2CppObject *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDB839 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__);
    byte_4BDB839 = 1;
  }
  if ( this->fields.renderInfo )
    return 0;
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1C22094(0LL, method);
  if ( renderWaitList->fields._size < 1 )
    return 0;
  v5 = System_Collections_Generic_Queue_object___Dequeue(
         renderWaitList,
         (const MethodInfo_37C1578 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__);
  this->fields.renderInfo = (struct StandFigureRenderWaitStatus_o *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.renderInfo, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  return 1;
}


void __fastcall StandFigureManager__Render_39226172(
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  int32_t Id; // w23
  StandFigureRenderWaitStatus_o *v12; // x22
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // [xsp+0h] [xbp-60h]

  if ( (byte_4BDB830 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C21E38(&StandFigureRenderWaitStatus_TypeInfo);
    byte_4BDB830 = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v12 = (StandFigureRenderWaitStatus_o *)sub_1C22084(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_39227552(v12, 0LL, Id, faceType, 0, 0, textureList, callback, v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v14);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v12, v15);
}


void __fastcall StandFigureManager__Render_39226392(
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  StandFigureRenderWaitStatus_o *v9; // x23
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // [xsp+0h] [xbp-50h]

  if ( (byte_4BDB831 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C21E38(&StandFigureRenderWaitStatus_TypeInfo);
    byte_4BDB831 = 1;
  }
  v9 = (StandFigureRenderWaitStatus_o *)sub_1C22084(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_39227552(v9, 0LL, id, faceType, 0, 0, textureList, callback, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v11);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v9, v12);
}


void __fastcall StandFigureManager__Render_39226576(
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
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // [xsp+0h] [xbp-60h]

  if ( (byte_4BDB832 & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C21E38(&StandFigureRenderWaitStatus_TypeInfo);
    byte_4BDB832 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v16 = (StandFigureRenderWaitStatus_o *)sub_1C22084(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_39227552(v16, renderTex, Id, faceType, 0, 0, textureList, callback, v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v18);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v16, v19);
}


void __fastcall StandFigureManager__Render_39226892(
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
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  if ( (byte_4BDB833 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C21E38(&StandFigureRenderWaitStatus_TypeInfo);
    byte_4BDB833 = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v14 = (StandFigureRenderWaitStatus_o *)sub_1C22084(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_39227552(v14, renderTex, Id, faceType, 0, 0, textureList, callback, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v16);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v14, v17);
}


void __fastcall StandFigureManager__Render_39227116(
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        int32_t formId,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  StandFigureRenderWaitStatus_o *v13; // x25
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // [xsp+0h] [xbp-60h]

  if ( (byte_4BDB834 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1C21E38(&StandFigureRenderWaitStatus_TypeInfo);
    byte_4BDB834 = 1;
  }
  v13 = (StandFigureRenderWaitStatus_o *)sub_1C22084(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_39227552(v13, renderTex, id, faceType, formId, 0, textureList, callback, v17);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v15);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v13, v16);
}