void StandFigureManager___ctor(StandFigureManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_Queue_T__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596FA22 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIStandFigureRender___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIStandFigureRender__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__);
    sub_2213A60(&System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager___ctor__);
    byte_596FA22 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIStandFigureRender__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIStandFigureRender___ctor__);
  this->fields.sfrInstances = (struct System_Collections_Generic_List_UIStandFigureRender__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.sfrInstances, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_Queue_T__o *)sub_2213CCC(System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v10,
    (const MethodInfo_46D37D8 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__);
  this->fields.renderWaitList = (struct System_Collections_Generic_Queue_StandFigureRenderWaitStatus__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.renderWaitList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_StandFigureManager___ctor__);
}


void StandFigureManager__AddRender(
        StandFigureManager_o *this,
        StandFigureRenderWaitStatus_o *info,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0

  if ( (byte_596FA17 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__);
    byte_596FA17 = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_2213CDC(0, info);
  System_Collections_Generic_Queue_object___Enqueue(
    renderWaitList,
    (Il2CppObject *)info,
    (const MethodInfo_46D3DA4 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__);
}


UIStandFigureM_o *StandFigureManager__CreateMeshLocal(
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

  if ( (byte_596FA1A & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_13580/*"StandFigureM"*/);
    byte_596FA1A = 1;
  }
  standFigureMPrefab = (Il2CppObject *)this->fields.standFigureMPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent, method);
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        standFigureMPrefab,
                                        (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_15;
  v8 = layer;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       layer,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___);
  transform = UnityEngine_GameObject__get_transform(v8, 0);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
  if ( !layer )
    goto LABEL_15;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_13580/*"StandFigureM"*/, 0);
  if ( !parent )
    goto LABEL_15;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_5969AE6 )
  {
    sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  v16.fields.x = x;
  v16.fields.y = y;
  v16.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v16, 0);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0);
  if ( !Component_object )
LABEL_15:
    sub_2213CDC(layer, v7);
  UIStandFigureRender__SetLayer((UIStandFigureRender_o *)Component_object, (int32_t)layer, 0);
  return (UIStandFigureM_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *StandFigureManager__CreateMeshLocal_47710892(
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
  UIStandFigureM_o *v17; // x21
  UnityEngine_Object_o *gameObject; // x26
  const MethodInfo *v19; // x2

  MeshLocal = (UnityEngine_Component_o *)StandFigureManager__CreateMeshLocal(this, parent, *(const MethodInfo **)&svtId);
  if ( !MeshLocal
    || (v17 = (UIStandFigureM_o *)MeshLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(MeshLocal, 0),
        MeshLocal = (UnityEngine_Component_o *)StandFigureManager__CreateStandFigureMName(svtId, imageLimitCount, v19),
        !gameObject) )
  {
    sub_2213CDC(MeshLocal, v16);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)MeshLocal, 0);
  UIStandFigureM__SetCharacter_51056312(v17, svtId, imageLimitCount, faceType, callbackFunc, loadRequiredResource, 0);
  UIStandFigureRender__SetDepth((UIStandFigureRender_o *)v17, (float)panelDepth, 0);
  return v17;
}


UIStandFigureM_o *StandFigureManager__CreateMeshPrefab(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_596FA01 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_596FA01 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  return StandFigureManager__CreateMeshLocal((StandFigureManager_o *)Instance, parent, v5);
}


UIStandFigureM_o *StandFigureManager__CreateMeshPrefab_47710664(
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
  __int64 v15; // x2
  Il2CppObject *Instance; // x25
  __int64 ImageLimitCount; // x0
  __int64 v18; // x1
  const MethodInfo *v20; // [xsp+0h] [xbp-60h]

  if ( (byte_596FA02 & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_596FA02 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v14, v15);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  if ( !Instance )
    sub_2213CDC(ImageLimitCount, v18);
  return StandFigureManager__CreateMeshLocal_47710892(
           (StandFigureManager_o *)Instance,
           parent,
           svtId,
           ImageLimitCount,
           faceType,
           panelDepth,
           callbackFunc,
           0,
           v20);
}


UIStandFigureM_o *StandFigureManager__CreateMeshPrefab_47711072(
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

  if ( (byte_596FA03 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_596FA03 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v16);
  return StandFigureManager__CreateMeshLocal_47710892(
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


UIStandFigureR_o *StandFigureManager__CreatePrefabForImageId(
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
  __int64 v21; // x2
  UnityEngine_Component_o *v22; // x23
  int32_t v23; // w24
  const MethodInfo *v24; // x2
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v26; // x0
  int32_t imageIda; // [xsp+1Ch] [xbp-54h] BYREF

  imageIda = imageId;
  if ( (byte_596FA08 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    sub_2213A60(&StringLiteral_13583/*"StandFigureR("*/);
    sub_2213A60(&StringLiteral_789/*")"*/);
    byte_596FA08 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_2213CDC(Instance, v19);
  Instance = (StandFigureManager_o *)StandFigureManager__CreateStandFigureAnimated(Instance, original, parent, v20);
  v22 = (UnityEngine_Component_o *)Instance;
  if ( Instance )
  {
    if ( isIgnoreFormChange )
    {
LABEL_6:
      v23 = 0;
      goto LABEL_12;
    }
  }
  else
  {
    Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v24);
    v22 = (UnityEngine_Component_o *)Instance;
    if ( isIgnoreFormChange )
      goto LABEL_6;
  }
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v19, v21);
  Instance = (StandFigureManager_o *)UIStandFigureRender__GetForm(imageId, 0, friendship, 0);
  v23 = (int)Instance;
LABEL_12:
  if ( !v22 )
    goto LABEL_15;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v22, 0);
  v26 = System_Int32__ToString((int32_t)&imageIda, 0);
  Instance = (StandFigureManager_o *)System_String__Concat_75694928(
                                       (System_String_o *)StringLiteral_13583/*"StandFigureR("*/,
                                       v26,
                                       (System_String_o *)StringLiteral_789/*")"*/,
                                       0);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0);
  UIStandFigureR__SetCharacterForImageId(
    (UIStandFigureR_o *)v22,
    imageIda,
    offsetKind,
    faceType,
    v23,
    callbackFunc,
    0,
    0,
    0);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)v22, depth, 0);
  return (UIStandFigureR_o *)v22;
}


UIStandFigureR_o *StandFigureManager__CreatePrefabForImageIdAndForm(
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
  if ( (byte_596FA0A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_2213A60(&StringLiteral_13583/*"StandFigureR("*/);
    sub_2213A60(&StringLiteral_789/*")"*/);
    byte_596FA0A = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance
    || (StandFigureAnimated = (UnityEngine_Component_o *)StandFigureManager__CreateStandFigureAnimated(
                                                           Instance,
                                                           original,
                                                           parent,
                                                           v18)) == 0
    && ((Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__)) == 0
     || (Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v20),
         (StandFigureAnimated = (UnityEngine_Component_o *)Instance) == 0))
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(StandFigureAnimated, 0),
        v22 = System_Int32__ToString((int32_t)&imageIda, 0),
        Instance = (StandFigureManager_o *)System_String__Concat_75694928(
                                             (System_String_o *)StringLiteral_13583/*"StandFigureR("*/,
                                             v22,
                                             (System_String_o *)StringLiteral_789/*")"*/,
                                             0),
        !gameObject) )
  {
    sub_2213CDC(Instance, v17);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0);
  UIStandFigureR__SetCharacterForImageId(
    (UIStandFigureR_o *)StandFigureAnimated,
    imageIda,
    offsetKind,
    faceType,
    formId,
    callbackFunc,
    0,
    0,
    0);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)StandFigureAnimated, depth, 0);
  return (UIStandFigureR_o *)StandFigureAnimated;
}


UIStandFigureR_o *StandFigureManager__CreatePrefabForImageIdWithEffect(
        UnityEngine_GameObject_o *parent,
        int32_t imageId,
        int32_t offsetKind,
        int32_t faceType,
        int32_t depth,
        int32_t multiPortraitIndex,
        System_Action_o *callbackFunc,
        bool isIgnoreFormChange,
        int32_t friendship,
        UnityEngine_GameObject_o *original,
        bool waitToStartRenderWhileAssetLoadBusy,
        bool isCommitEnqueue,
        const MethodInfo *method)
{
  StandFigureManager_o *Instance; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  __int64 v24; // x2
  UnityEngine_Component_o *v25; // x24
  int32_t v26; // w25
  const MethodInfo *v27; // x2
  UnityEngine_Object_o *gameObject; // x26
  System_String_o *v29; // x0
  int32_t imageIda; // [xsp+2Ch] [xbp-54h] BYREF

  imageIda = imageId;
  if ( (byte_596FA09 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    sub_2213A60(&StringLiteral_13583/*"StandFigureR("*/);
    sub_2213A60(&StringLiteral_789/*")"*/);
    byte_596FA09 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_2213CDC(Instance, v22);
  Instance = (StandFigureManager_o *)StandFigureManager__CreateStandFigureAnimated(Instance, original, parent, v23);
  v25 = (UnityEngine_Component_o *)Instance;
  if ( Instance )
  {
    if ( isIgnoreFormChange )
    {
LABEL_6:
      v26 = 0;
      goto LABEL_12;
    }
  }
  else
  {
    Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v27);
    v25 = (UnityEngine_Component_o *)Instance;
    if ( isIgnoreFormChange )
      goto LABEL_6;
  }
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v22, v24);
  Instance = (StandFigureManager_o *)UIStandFigureRender__GetForm(imageId, 0, friendship, 0);
  v26 = (int)Instance;
LABEL_12:
  if ( !v25 )
    goto LABEL_15;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v25, 0);
  v29 = System_Int32__ToString((int32_t)&imageIda, 0);
  Instance = (StandFigureManager_o *)System_String__Concat_75694928(
                                       (System_String_o *)StringLiteral_13583/*"StandFigureR("*/,
                                       v29,
                                       (System_String_o *)StringLiteral_789/*")"*/,
                                       0);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0);
  UIStandFigureR__SetCharacterForImageIdWithEffect(
    (UIStandFigureR_o *)v25,
    imageIda,
    offsetKind,
    faceType,
    v26,
    multiPortraitIndex,
    callbackFunc,
    0,
    waitToStartRenderWhileAssetLoadBusy,
    isCommitEnqueue,
    0);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)v25, depth, 0);
  return (UIStandFigureR_o *)v25;
}


UIStandFigureR_o *StandFigureManager__CreateRenderLocal(
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

  if ( (byte_596FA1C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_13582/*"StandFigureR"*/);
    byte_596FA1C = 1;
  }
  standFigureRPrefab = (Il2CppObject *)this->fields.standFigureRPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent, method);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             standFigureRPrefab,
                                             (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v8 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  transform = UnityEngine_GameObject__get_transform(v8, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_13582/*"StandFigureR"*/, 0);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_5969AE6 )
  {
    sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  v16.fields.x = x;
  v16.fields.y = y;
  v16.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v16, 0);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0), !Component_object) )
  {
LABEL_16:
    sub_2213CDC(gameObject, v7);
  }
  UIStandFigureR__SetLayer((UIStandFigureR_o *)Component_object, (int32_t)gameObject, 0);
  UIStandFigureR__SetMaterial((UIStandFigureR_o *)Component_object, 0);
  return (UIStandFigureR_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *StandFigureManager__CreateRenderLocalWithEffect(
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
  __int64 v24; // x2
  int32_t v25; // w24
  int32_t v26; // w24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v28; // x26
  System_String_o *v29; // x0
  int32_t v31; // [xsp+18h] [xbp-58h] BYREF
  int32_t v32; // [xsp+1Ch] [xbp-54h] BYREF

  v19 = this;
  v31 = imageLimitCount;
  v32 = svtId;
  if ( (byte_596FA20 & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    sub_2213A60(&StringLiteral_13583/*"StandFigureR("*/);
    this = (StandFigureManager_o *)sub_2213A60(&StringLiteral_789/*")"*/);
    byte_596FA20 = 1;
  }
  StandFigureAnimated = (UnityEngine_Component_o *)StandFigureManager__CreateStandFigureAnimated(
                                                     this,
                                                     original,
                                                     parent,
                                                     *(const MethodInfo **)&imageLimitCount);
  if ( !StandFigureAnimated )
    StandFigureAnimated = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(v19, parent, v20);
  Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0);
  if ( isIgnoreFormChange )
  {
    v25 = 0;
  }
  else
  {
    v26 = (int)Id;
    if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v23, v24);
    Id = (System_String_o *)UIStandFigureRender__GetForm(v26, 0, friendship, 0);
    v25 = (int)Id;
  }
  if ( !StandFigureAnimated
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(StandFigureAnimated, 0),
        v28 = System_Int32__ToString((int32_t)&v32, 0),
        v29 = System_Int32__ToString((int32_t)&v31, 0),
        Id = System_String__Concat_75696856(
               (System_String_o *)StringLiteral_13583/*"StandFigureR("*/,
               v28,
               v29,
               (System_String_o *)StringLiteral_789/*")"*/,
               0),
        !gameObject) )
  {
    sub_2213CDC(Id, v23);
  }
  UnityEngine_Object__set_name(gameObject, Id, 0);
  UIStandFigureR__SetCharacterWithEffect(
    (UIStandFigureR_o *)StandFigureAnimated,
    v32,
    v31,
    offsetKind,
    faceType,
    v25,
    0.0,
    callbackFunc,
    0,
    0);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)StandFigureAnimated, depth, 0);
  return (UIStandFigureR_o *)StandFigureAnimated;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *StandFigureManager__CreateRenderLocal_47712112(
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
  __int64 v24; // x2
  int32_t v25; // w24
  int32_t v26; // w24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v28; // x26
  System_String_o *v29; // x0
  int32_t v31; // [xsp+8h] [xbp-58h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-54h] BYREF

  v19 = this;
  v31 = imageLimitCount;
  v32 = svtId;
  if ( (byte_596FA1E & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    sub_2213A60(&StringLiteral_13583/*"StandFigureR("*/);
    this = (StandFigureManager_o *)sub_2213A60(&StringLiteral_789/*")"*/);
    byte_596FA1E = 1;
  }
  StandFigureAnimated = (UnityEngine_Component_o *)StandFigureManager__CreateStandFigureAnimated(
                                                     this,
                                                     original,
                                                     parent,
                                                     *(const MethodInfo **)&imageLimitCount);
  if ( !StandFigureAnimated )
    StandFigureAnimated = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(v19, parent, v20);
  Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0);
  if ( isIgnoreFormChange )
  {
    v25 = 0;
  }
  else
  {
    v26 = (int)Id;
    if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v23, v24);
    Id = (System_String_o *)UIStandFigureRender__GetForm(v26, 0, friendship, 0);
    v25 = (int)Id;
  }
  if ( !StandFigureAnimated
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(StandFigureAnimated, 0),
        v28 = System_Int32__ToString((int32_t)&v32, 0),
        v29 = System_Int32__ToString((int32_t)&v31, 0),
        Id = System_String__Concat_75696856(
               (System_String_o *)StringLiteral_13583/*"StandFigureR("*/,
               v28,
               v29,
               (System_String_o *)StringLiteral_789/*")"*/,
               0),
        !gameObject) )
  {
    sub_2213CDC(Id, v23);
  }
  UnityEngine_Object__set_name(gameObject, Id, 0);
  UIStandFigureR__SetCharacter_51068096(
    (UIStandFigureR_o *)StandFigureAnimated,
    v32,
    v31,
    offsetKind,
    faceType,
    v25,
    0.0,
    callbackFunc,
    0);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)StandFigureAnimated, depth, 0);
  return (UIStandFigureR_o *)StandFigureAnimated;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *StandFigureManager__CreateRenderLocal_47715196(
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
  if ( (byte_596FA1F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13583/*"StandFigureR("*/);
    this = (StandFigureManager_o *)sub_2213A60(&StringLiteral_789/*")"*/);
    byte_596FA1F = 1;
  }
  StandFigureAnimated = StandFigureManager__CreateStandFigureAnimated(
                          this,
                          original,
                          parent,
                          *(const MethodInfo **)&imageLimitCount);
  if ( StandFigureAnimated )
  {
    RenderLocal = (UnityEngine_Component_o *)StandFigureAnimated;
    ServantScriptMaster__getId(svtId, imageLimitCount, 0);
  }
  else
  {
    RenderLocal = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(v20, parent, v22);
    Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0);
    if ( !RenderLocal )
      goto LABEL_8;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(RenderLocal, 0);
  v27 = System_Int32__ToString((int32_t)&v31, 0);
  v28 = System_Int32__ToString((int32_t)&v30, 0);
  Id = System_String__Concat_75696856(
         (System_String_o *)StringLiteral_13583/*"StandFigureR("*/,
         v27,
         v28,
         (System_String_o *)StringLiteral_789/*")"*/,
         0);
  if ( !gameObject )
LABEL_8:
    sub_2213CDC(Id, v25);
  UnityEngine_Object__set_name(gameObject, Id, 0);
  UIStandFigureR__SetCharacter_51068080(
    (UIStandFigureR_o *)RenderLocal,
    v31,
    v30,
    offsetKind,
    faceType,
    formId,
    callbackFunc,
    0);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)RenderLocal, depth, 0);
  return (UIStandFigureR_o *)RenderLocal;
}


UIStandFigureR_o *StandFigureManager__CreateRenderPrefab(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_596FA04 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_596FA04 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  return StandFigureManager__CreateRenderLocal((StandFigureManager_o *)Instance, parent, v5);
}


UIStandFigureR_o *StandFigureManager__CreateRenderPrefabWithEffect(
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

  if ( (byte_596FA07 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_596FA07 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v20);
  return StandFigureManager__CreateRenderLocalWithEffect(
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


UIStandFigureR_o *StandFigureManager__CreateRenderPrefab_47638192(
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

  if ( (byte_596FA06 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_596FA06 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v20);
  return StandFigureManager__CreateRenderLocal_47712112(
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


UIStandFigureR_o *StandFigureManager__CreateRenderPrefab_47711856(
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
  __int64 v17; // x2
  Il2CppObject *Instance; // x26
  __int64 ImageLimitCount; // x0
  __int64 v20; // x1
  const MethodInfo *v22; // [xsp+18h] [xbp-68h]

  if ( (byte_596FA05 & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_596FA05 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v16, v17);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  if ( !Instance )
    sub_2213CDC(ImageLimitCount, v20);
  return StandFigureManager__CreateRenderLocal_47712112(
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
           0,
           v22);
}


UIStandFigureR_o *StandFigureManager__CreateRenderPrefab_47715000(
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

  if ( (byte_596FA0B & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_596FA0B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v21);
  return StandFigureManager__CreateRenderLocal_47715196(
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


UIStandFigureR_o *StandFigureManager__CreateStandFigureAnimated(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *original,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 layer; // x0
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Object_o *v12; // x21
  UnityEngine_Transform_o *v13; // x22
  UnityEngine_Transform_o *v14; // x21

  if ( (byte_596FA1D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801592);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_13582/*"StandFigureR"*/);
    byte_596FA1D = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, original, parent);
  layer = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)original, 0, 0);
  Component_object = 0;
  if ( (layer & 1) == 0 )
  {
    if ( !parent )
      goto LABEL_19;
    transform = UnityEngine_GameObject__get_transform(parent, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    layer = (__int64)UnityEngine_Object__Instantiate_object__59717228(
                       (Il2CppObject *)original,
                       transform,
                       0,
                       (const MethodInfo_38F366C *)Method_UnityEngine_Object_Instantiate_GameObject____91801592);
    if ( !layer )
      goto LABEL_19;
    v12 = (UnityEngine_Object_o *)layer;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)layer,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
    UnityEngine_Object__set_name(v12, (System_String_o *)StringLiteral_13582/*"StandFigureR"*/, 0);
    layer = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0);
    v13 = (UnityEngine_Transform_o *)layer;
    if ( !byte_5969AE0 )
    {
      layer = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    if ( !v13 )
      goto LABEL_19;
    UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    layer = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0);
    v14 = (UnityEngine_Transform_o *)layer;
    if ( !byte_5969AE6 )
    {
      layer = sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
      byte_5969AE6 = 1;
    }
    if ( !v14
      || (UnityEngine_Transform__set_localRotation(
            v14,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0),
          layer = UnityEngine_GameObject__get_layer(parent, 0),
          !Component_object) )
    {
LABEL_19:
      sub_2213CDC(layer, v7);
    }
    UIStandFigureR__SetLayer((UIStandFigureR_o *)Component_object, layer, 0);
    UIStandFigureR__SetMaterial((UIStandFigureR_o *)Component_object, 0);
  }
  return (UIStandFigureR_o *)Component_object;
}


System_String_o *StandFigureManager__CreateStandFigureMName(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *v4; // x0
  int32_t v6; // [xsp+8h] [xbp-28h] BYREF
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = svtId;
  v6 = imageLimitCount;
  if ( (byte_596FA1B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_13581/*"StandFigureM("*/);
    sub_2213A60(&StringLiteral_789/*")"*/);
    byte_596FA1B = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v7, 0);
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  return System_String__Concat_75696856(
           (System_String_o *)StringLiteral_13581/*"StandFigureM("*/,
           v3,
           v4,
           (System_String_o *)StringLiteral_789/*")"*/,
           0);
}


// local variable allocation has failed, the output may be wrong!
void StandFigureManager__DownloadAsset(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w0
  const MethodInfo *v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *AssetName_47708836; // x20

  if ( (byte_596F9FB & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_596F9FB = 1;
  }
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&lv);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  AssetName_47708836 = StandFigureManager__GetAssetName_47708836(svtId, ImageLimitCount, v9);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10, v11);
  AssetManager__downloadAssetStorage(AssetName_47708836, callback, 1, 0);
}


void StandFigureManager__DownloadAsset_47709324(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *AssetName_47708836; // x20

  if ( (byte_596F9FC & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F9FC = 1;
  }
  AssetName_47708836 = StandFigureManager__GetAssetName_47708836(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
  AssetManager__downloadAssetStorage(AssetName_47708836, callback, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *StandFigureManager__GetAssetName(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t ImageLimitCount; // w20

  if ( (byte_596F9F7 & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_596F9F7 = 1;
  }
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&lv);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v6, v7);
  return UIStandFigureRender__GetAssetName(svtId, ImageLimitCount, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *StandFigureManager__GetAssetNameByForm(
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t formId,
        const MethodInfo *method)
{
  if ( (byte_596F9FA & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_596F9FA = 1;
  }
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount, *(_QWORD *)&formId);
  return UIStandFigureRender__GetAssetName_51087076(svtId, imageLimitCount, formId, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *StandFigureManager__GetAssetName_47708836(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  if ( (byte_596F9F8 & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_596F9F8 = 1;
  }
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount, method);
  return UIStandFigureRender__GetAssetName(svtId, imageLimitCount, 0);
}


System_String_o *StandFigureManager__GetAssetName_47708940(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F9F9 & 1) == 0 )
  {
    sub_2213A60(&UIStandFigureRender_TypeInfo);
    byte_596F9F9 = 1;
  }
  if ( !*(&UIStandFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method, v2);
  return UIStandFigureRender__GetAssetName_51087816(id, 0);
}


void StandFigureManager__LateUpdate(StandFigureManager_o *this, const MethodInfo *method)
{
  UnityEngine_RenderTexture_o *v3; // x1
  const MethodInfo *v4; // x2
  struct StandFigureRenderWaitStatus_o *renderInfo; // x8
  StandFigureCamera_o *standFigureCamera; // x0
  struct StandFigureRenderWaitStatus_o *v7; // x8
  Il2CppObject *standFigureRender; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Transform_o *parent; // x21
  const MethodInfo *v12; // x2

  if ( (byte_596FA19 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIStandFigureRender__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_UIStandFigureRender___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FA19 = 1;
  }
  if ( StandFigureManager__RenderStart(this, method) )
    this->fields.isRenderWait = 1;
  renderInfo = this->fields.renderInfo;
  if ( renderInfo && this->fields.isRenderWait )
  {
    if ( renderInfo->fields.isFaceOnly )
    {
      standFigureCamera = this->fields.standFigureCamera;
      if ( !standFigureCamera )
        goto LABEL_29;
      standFigureCamera = (StandFigureCamera_o *)StandFigureCamera__RequestTypePoint(
                                                   standFigureCamera,
                                                   renderInfo->fields.renderTex,
                                                   v4);
      this->fields.isRenderWait = ((unsigned __int8)standFigureCamera & 1) == 0;
      if ( ((unsigned __int8)standFigureCamera & 1) == 0 )
        return;
      goto LABEL_16;
    }
    standFigureCamera = this->fields.standFigureCamera;
    if ( renderInfo->fields.withEffect )
    {
      if ( !standFigureCamera )
        goto LABEL_29;
      standFigureCamera = (StandFigureCamera_o *)StandFigureCamera__RequestWithEffect(standFigureCamera, v3, v4);
      this->fields.isRenderWait = 0;
      goto LABEL_16;
    }
    if ( !standFigureCamera )
      goto LABEL_29;
    standFigureCamera = (StandFigureCamera_o *)StandFigureCamera__Request(
                                                 standFigureCamera,
                                                 renderInfo->fields.renderTex,
                                                 v4);
    this->fields.isRenderWait = ((unsigned __int8)standFigureCamera & 1) == 0;
    if ( ((unsigned __int8)standFigureCamera & 1) != 0 )
    {
LABEL_16:
      v7 = this->fields.renderInfo;
      if ( !v7 )
        goto LABEL_29;
      standFigureRender = (Il2CppObject *)this->fields.standFigureRender;
      if ( v7->fields.withEffect
        && this->fields.numberServantPortrait - 1 > v7->fields._MultiPortraitIndex_k__BackingField )
      {
        if ( !standFigureRender )
          goto LABEL_29;
        standFigureCamera = (StandFigureCamera_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.standFigureRender,
                                                     0);
        if ( !standFigureCamera )
          goto LABEL_29;
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)standFigureCamera, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
        standFigureCamera = (StandFigureCamera_o *)UnityEngine_Object__Instantiate_object__59717116(
                                                     standFigureRender,
                                                     parent,
                                                     (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_UIStandFigureRender___);
        if ( !this->fields.sfrInstances )
          goto LABEL_29;
        standFigureRender = (Il2CppObject *)standFigureCamera;
        standFigureCamera = (StandFigureCamera_o *)sub_1FFEDA8(
                                                     this->fields.sfrInstances,
                                                     standFigureCamera,
                                                     Method_System_Collections_Generic_List_UIStandFigureRender__Add__);
      }
      if ( standFigureRender )
      {
        standFigureCamera = (StandFigureCamera_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)standFigureRender,
                                                     0);
        if ( standFigureCamera )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureCamera, 1, 0);
          UIStandFigureRender__SetActive((UIStandFigureRender_o *)standFigureRender, 1, 0);
          standFigureCamera = (StandFigureCamera_o *)this->fields.renderInfo;
          if ( standFigureCamera )
          {
            StandFigureRenderWaitStatus__SetCharacter(
              (StandFigureRenderWaitStatus_o *)standFigureCamera,
              (UIStandFigureRender_o *)standFigureRender,
              v12);
            return;
          }
        }
      }
LABEL_29:
      sub_2213CDC(standFigureCamera, v3);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void StandFigureManager__LoadAsset(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w0
  const MethodInfo *v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_o *AssetName_47708836; // x20

  if ( (byte_596F9FD & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_596F9FD = 1;
  }
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&lv);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  AssetName_47708836 = StandFigureManager__GetAssetName_47708836(svtId, ImageLimitCount, v9);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10, v11);
  AssetManager__loadAssetStorage(AssetName_47708836, callback, 1, 0, 0);
}


void StandFigureManager__LoadAsset_47709644(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *AssetName_47708836; // x20

  if ( (byte_596F9FE & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F9FE = 1;
  }
  AssetName_47708836 = StandFigureManager__GetAssetName_47708836(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
  AssetManager__loadAssetStorage(AssetName_47708836, callback, 1, 0, 0);
}


void StandFigureManager__OnRenderEnd(
        StandFigureManager_o *this,
        UnityEngine_RenderTexture_o *renderTexture,
        const MethodInfo *method)
{
  StandFigureRenderWaitStatus_o *renderInfo; // x0
  MissionNaviTransitionBoardItem_o *p_renderInfo; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_renderInfo = (MissionNaviTransitionBoardItem_o *)&this->fields.renderInfo;
  renderInfo = this->fields.renderInfo;
  if ( renderInfo )
  {
    StandFigureRenderWaitStatus__Callback(renderInfo, renderTexture, method);
    p_renderInfo->klass = 0;
    sub_2213A04(p_renderInfo, 0, v5, v6, v7, v8, v9, v10);
  }
}


void StandFigureManager__OnRenderEndWithEffect(
        StandFigureManager_o *this,
        UnityEngine_RenderTexture_o *renderTexture,
        const MethodInfo *method)
{
  StandFigureRenderWaitStatus_o *renderInfo; // x0
  MissionNaviTransitionBoardItem_o *p_renderInfo; // x19
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_renderInfo = (MissionNaviTransitionBoardItem_o *)&this->fields.renderInfo;
  renderInfo = this->fields.renderInfo;
  if ( renderInfo )
  {
    StandFigureRenderWaitStatus__Callback(renderInfo, renderTexture, method);
    p_renderInfo->klass = 0;
    sub_2213A04(p_renderInfo, 0, v5, v6, v7, v8, v9, v10);
  }
}


void StandFigureManager__Reboot(StandFigureManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0
  struct StandFigureRenderWaitStatus_o **p_renderInfo; // x19

  if ( (byte_596FA16 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__);
    byte_596FA16 = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_2213CDC(0, method);
  if ( renderWaitList->fields._size >= 1 )
    System_Collections_Generic_Queue_object___Clear(
      renderWaitList,
      (const MethodInfo_46D3A6C *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
  this->fields.renderInfo = 0;
  p_renderInfo = &this->fields.renderInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_renderInfo, 0, v2, v3, v4, v5, v6, v7);
  *((_DWORD *)p_renderInfo - 4) = 0;
}


void StandFigureManager__Release(UnityEngine_RenderTexture_o *renderTex, const MethodInfo *method)
{
  UnityEngine_RenderTexture__ReleaseTemporary(renderTex, 0);
}


// local variable allocation has failed, the output may be wrong!
void StandFigureManager__ReleaseAsset(int32_t svtId, int32_t limitCount, int32_t lv, const MethodInfo *method)
{
  int32_t ImageLimitCount; // w0
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *AssetName_47708836; // x19

  if ( (byte_596F9FF & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_596F9FF = 1;
  }
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&lv);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  AssetName_47708836 = StandFigureManager__GetAssetName_47708836(svtId, ImageLimitCount, v7);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v8, v9);
  AssetManager__releaseAssetStorage(AssetName_47708836, 0);
}


void StandFigureManager__ReleaseAsset_47709952(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *AssetName_47708836; // x19

  if ( (byte_596FA00 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596FA00 = 1;
  }
  AssetName_47708836 = StandFigureManager__GetAssetName_47708836(svtId, imageLimitCount, method);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5, v6);
  AssetManager__releaseAssetStorage(AssetName_47708836, 0);
}


void StandFigureManager__ReleaseCharaFigure(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *klass; // x20

  if ( (byte_596FA15 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_596FA15 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1, v2);
  v4 = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(Instance, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    if ( !Instance )
      goto LABEL_13;
    klass = (UnityEngine_Object_o *)Instance[2].klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    v4 = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(klass, 0, 0);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      v4 = Instance[2].klass;
      if ( v4 )
      {
        UIStandFigureRender__ReleaseCharacter((UIStandFigureRender_o *)v4, 0);
        goto LABEL_12;
      }
LABEL_13:
      sub_2213CDC(v4, v5);
    }
  }
LABEL_12:
  StandFigureManager__ReleaseStandFigureRenderInstances((const MethodInfo *)v4);
}


void StandFigureManager__ReleaseStandFigureRenderInstances(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x19
  Il2CppClass *klass; // x0
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *gameObject; // x20
  Il2CppClass *v12; // x8
  int32_t namespaze; // w2
  int v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596FA14 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureRender__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureRender__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureRender__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIStandFigureRender__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIStandFigureRender__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_596FA14 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1, v2);
  klass = (Il2CppClass *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( ((unsigned __int8)klass & 1) != 0 )
  {
    if ( !Instance )
      goto LABEL_20;
    klass = Instance[4].klass;
    if ( !klass )
      goto LABEL_20;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)klass,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UIStandFigureRender__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v15,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureRender__MoveNext__);
      if ( !v6 )
        break;
      current = v15.fields._current;
      if ( !v15.fields._current )
        sub_2213CDC(v6, v7);
      UIStandFigureRender__ReleaseCharacter((UIStandFigureRender_o *)v15.fields._current, 0);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      UnityEngine_Object__Destroy_83459800(gameObject, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureRender__Dispose__);
    v12 = Instance[4].klass;
    if ( !v12 )
LABEL_20:
      sub_2213CDC(klass, v5);
    namespaze = (int32_t)v12->_1.namespaze;
    v14 = HIDWORD(v12->_1.namespaze) + 1;
    LODWORD(v12->_1.namespaze) = 0;
    HIDWORD(v12->_1.namespaze) = v14;
    if ( namespaze >= 1 )
      System_Array__Clear((System_Array_o *)v12->_1.name, 0, namespaze, 0);
    LODWORD(Instance[4].monitor) = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void StandFigureManager__Render(
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

  if ( (byte_596FA0C & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_2213A60(&StandFigureRenderWaitStatus_TypeInfo);
    byte_596FA0C = 1;
  }
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&lv);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0);
  v14 = (StandFigureRenderWaitStatus_o *)sub_2213CCC(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_47717772(v14, 0, Id, faceType, 0, 0, textureList, callback, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v16);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v14, v17);
}


void StandFigureManager__RenderFace(
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

  if ( (byte_596FA13 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_2213A60(&StandFigureRenderWaitStatus_TypeInfo);
    byte_596FA13 = 1;
  }
  v13 = (StandFigureRenderWaitStatus_o *)sub_2213CCC(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_47717772(v13, renderTex, id, faceType, formId, 1, textureList, callback, v17);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v15);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v13, v16);
}


bool StandFigureManager__RenderStart(StandFigureManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0
  Il2CppObject *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596FA18 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__);
    sub_2213A60(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__);
    byte_596FA18 = 1;
  }
  if ( this->fields.renderInfo )
    return 0;
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_2213CDC(0, method);
  if ( renderWaitList->fields._size < 1 )
    return 0;
  v5 = System_Collections_Generic_Queue_object___Dequeue(
         renderWaitList,
         (const MethodInfo_46D3F34 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__);
  this->fields.renderInfo = (struct StandFigureRenderWaitStatus_o *)v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.renderInfo, (int32_t)v5, v6, v7, v8, v9, v10, v11);
  return 1;
}


void StandFigureManager__RenderWithEffect(
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        int32_t formId,
        int32_t multiPortraitIndex,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  StandFigureRenderWaitStatus_o *v15; // x26
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // [xsp+10h] [xbp-70h]

  if ( (byte_596FA12 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_2213A60(&StandFigureRenderWaitStatus_TypeInfo);
    byte_596FA12 = 1;
  }
  v15 = (StandFigureRenderWaitStatus_o *)sub_2213CCC(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_47717376(
    v15,
    renderTex,
    id,
    faceType,
    formId,
    multiPortraitIndex,
    0,
    1,
    textureList,
    callback,
    v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v17);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v15, v18);
}


void StandFigureManager__Render_47715980(
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

  if ( (byte_596FA0D & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_2213A60(&StandFigureRenderWaitStatus_TypeInfo);
    byte_596FA0D = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0);
  v12 = (StandFigureRenderWaitStatus_o *)sub_2213CCC(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_47717772(v12, 0, Id, faceType, 0, 0, textureList, callback, v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v14);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v12, v15);
}


void StandFigureManager__Render_47716200(
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

  if ( (byte_596FA0E & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_2213A60(&StandFigureRenderWaitStatus_TypeInfo);
    byte_596FA0E = 1;
  }
  v9 = (StandFigureRenderWaitStatus_o *)sub_2213CCC(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_47717772(v9, 0, id, faceType, 0, 0, textureList, callback, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v11);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v9, v12);
}


// local variable allocation has failed, the output may be wrong!
void StandFigureManager__Render_47716384(
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

  if ( (byte_596FA0F & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_2213A60(&StandFigureRenderWaitStatus_TypeInfo);
    byte_596FA0F = 1;
  }
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0);
  v16 = (StandFigureRenderWaitStatus_o *)sub_2213CCC(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_47717772(v16, renderTex, Id, faceType, 0, 0, textureList, callback, v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v18);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v16, v19);
}


void StandFigureManager__Render_47716700(
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

  if ( (byte_596FA10 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_2213A60(&StandFigureRenderWaitStatus_TypeInfo);
    byte_596FA10 = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0);
  v14 = (StandFigureRenderWaitStatus_o *)sub_2213CCC(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_47717772(v14, renderTex, Id, faceType, 0, 0, textureList, callback, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v16);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v14, v17);
}


void StandFigureManager__Render_47716924(
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

  if ( (byte_596FA11 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_2213A60(&StandFigureRenderWaitStatus_TypeInfo);
    byte_596FA11 = 1;
  }
  v13 = (StandFigureRenderWaitStatus_o *)sub_2213CCC(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_47717772(v13, renderTex, id, faceType, formId, 0, textureList, callback, v17);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v15);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v13, v16);
}


void StandFigureManager__ResetCameraRenderState(StandFigureManager_o *this, const MethodInfo *method)
{
  StandFigureCamera_o *standFigureCamera; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596FA21 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
    byte_596FA21 = 1;
  }
  standFigureCamera = this->fields.standFigureCamera;
  if ( !standFigureCamera
    || (StandFigureCamera__ResetCameraRenderState(standFigureCamera, method),
        this->fields.renderInfo = 0,
        this->fields.isRenderWait = 0,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.renderInfo, 0, v4, v5, v6, v7, v8, v9),
        (standFigureCamera = (StandFigureCamera_o *)this->fields.renderWaitList) == 0) )
  {
    sub_2213CDC(standFigureCamera, method);
  }
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)standFigureCamera,
    (const MethodInfo_46D3A6C *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
  this->fields.numberServantPortrait = 0;
}


void StandFigureManager__SetNumberServantPortrait(StandFigureManager_o *this, int32_t count, const MethodInfo *method)
{
  this->fields.numberServantPortrait = count;
}


bool StandFigureManager__get_RenderInfoIsNull(StandFigureManager_o *this, const MethodInfo *method)
{
  return this->fields.renderInfo == 0;
}