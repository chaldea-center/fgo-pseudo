void __fastcall StandFigureManager___ctor(StandFigureManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_Queue_T__o *v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B1B7B8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIStandFigureRender___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_List_UIStandFigureRender__TypeInfo, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__, v4);
    sub_1BCAFF8(&System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager___ctor__, v6);
    byte_4B1B7B8 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UIStandFigureRender__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UIStandFigureRender___ctor__);
  this->fields.sfrInstances = (struct System_Collections_Generic_List_UIStandFigureRender__o *)v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.sfrInstances, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_Queue_T__o *)sub_1BCB244(System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v10,
    (const MethodInfo_382E240 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__);
  this->fields.renderWaitList = (struct System_Collections_Generic_Queue_StandFigureRenderWaitStatus__o *)v10;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.renderWaitList, (int32_t)v10, v11, v12);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38F8EF0 *)Method_SingletonMonoBehaviour_StandFigureManager___ctor__);
}


void __fastcall StandFigureManager__AddRender(
        StandFigureManager_o *this,
        StandFigureRenderWaitStatus_o *info,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0

  if ( (byte_4B1B7AD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__, info);
    byte_4B1B7AD = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1BCB254(0LL, info);
  System_Collections_Generic_Queue_object___Enqueue(
    renderWaitList,
    (Il2CppObject *)info,
    (const MethodInfo_382E808 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__);
}


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshLocal(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *standFigureMPrefab; // x20
  UnityEngine_GameObject_o *layer; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x22
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1B7B0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___, parent);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_12918/*"StandFigureM"*/, v7);
    byte_4B1B7B0 = 1;
  }
  standFigureMPrefab = (Il2CppObject *)this->fields.standFigureMPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        standFigureMPrefab,
                                        (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_15;
  v11 = layer;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       layer,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !layer )
    goto LABEL_15;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_12918/*"StandFigureM"*/, 0LL);
  if ( !parent )
    goto LABEL_15;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0LL);
  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v17);
    byte_4B16191 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B16197 )
  {
    sub_1BCAFF8(&UnityEngine_Quaternion_TypeInfo, v18);
    byte_4B16197 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v21, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_object )
LABEL_15:
    sub_1BCB254(layer, v10);
  UIStandFigureRender__SetLayer((UIStandFigureRender_o *)Component_object, (int32_t)layer, 0LL);
  return (UIStandFigureM_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshLocal_39932116(
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
    sub_1BCB254(MeshLocal, v16);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)MeshLocal, 0LL);
  UIStandFigureM__SetCharacter_43169504(v17, svtId, imageLimitCount, faceType, callbackFunc, loadRequiredResource, 0LL);
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

  if ( (byte_4B1B797 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, method);
    byte_4B1B797 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  return StandFigureManager__CreateMeshLocal((StandFigureManager_o *)Instance, parent, v5);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_39931888(
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
  Il2CppObject *Instance; // x25
  __int64 ImageLimitCount; // x0
  __int64 v17; // x1
  const MethodInfo *v19; // [xsp+0h] [xbp-60h]

  if ( (byte_4B1B798 & 1) == 0 )
  {
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v14);
    byte_4B1B798 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_1BCB254(ImageLimitCount, v17);
  return StandFigureManager__CreateMeshLocal_39932116(
           (StandFigureManager_o *)Instance,
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
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_39932296(
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

  if ( (byte_4B1B799 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4B1B799 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v16);
  return StandFigureManager__CreateMeshLocal_39932116(
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
        UnityEngine_GameObject_o *original,
        const MethodInfo *method)
{
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  StandFigureManager_o *Instance; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  UnityEngine_Component_o *v24; // x23
  int32_t v25; // w24
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v28; // x0
  int32_t imageIda; // [xsp+Ch] [xbp-54h] BYREF

  imageIda = imageId;
  if ( (byte_4B1B79E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&imageId);
    sub_1BCAFF8(&UIStandFigureRender_TypeInfo, v18);
    sub_1BCAFF8(&StringLiteral_12921/*"StandFigureR("*/, v19);
    sub_1BCAFF8(&StringLiteral_754/*")"*/, v20);
    byte_4B1B79E = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1BCB254(Instance, v22);
  Instance = (StandFigureManager_o *)StandFigureManager__CreateStandFigureAnimated(Instance, original, parent, v23);
  v24 = (UnityEngine_Component_o *)Instance;
  if ( Instance )
  {
    if ( isIgnoreFormChange )
    {
LABEL_6:
      v25 = 0;
      goto LABEL_12;
    }
  }
  else
  {
    Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v26);
    v24 = (UnityEngine_Component_o *)Instance;
    if ( isIgnoreFormChange )
      goto LABEL_6;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  Instance = (StandFigureManager_o *)UIStandFigureRender__GetForm(imageId, 0, friendship, 0LL);
  v25 = (int)Instance;
LABEL_12:
  if ( !v24 )
    goto LABEL_15;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v24, 0LL);
  v28 = System_Int32__ToString((int32_t)&imageIda, 0LL);
  Instance = (StandFigureManager_o *)System_String__Concat_62488672(
                                       (System_String_o *)StringLiteral_12921/*"StandFigureR("*/,
                                       v28,
                                       (System_String_o *)StringLiteral_754/*")"*/,
                                       0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
  UIStandFigureR__SetCharacterForImageId(
    (UIStandFigureR_o *)v24,
    imageIda,
    offsetKind,
    faceType,
    v25,
    callbackFunc,
    0,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)v24, depth, 0LL);
  return (UIStandFigureR_o *)v24;
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
        UnityEngine_GameObject_o *original,
        const MethodInfo *method)
{
  __int64 v16; // x1
  __int64 v17; // x1
  StandFigureManager_o *Instance; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  UnityEngine_Component_o *StandFigureAnimated; // x24
  const MethodInfo *v22; // x2
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v24; // x0
  int32_t imageIda; // [xsp+Ch] [xbp-54h] BYREF

  imageIda = imageId;
  if ( (byte_4B1B7A0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&imageId);
    sub_1BCAFF8(&StringLiteral_12921/*"StandFigureR("*/, v16);
    sub_1BCAFF8(&StringLiteral_754/*")"*/, v17);
    byte_4B1B7A0 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance
    || (StandFigureAnimated = (UnityEngine_Component_o *)StandFigureManager__CreateStandFigureAnimated(
                                                           Instance,
                                                           original,
                                                           parent,
                                                           v20)) == 0LL
    && ((Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__)) == 0LL
     || (Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v22),
         (StandFigureAnimated = (UnityEngine_Component_o *)Instance) == 0LL))
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(StandFigureAnimated, 0LL),
        v24 = System_Int32__ToString((int32_t)&imageIda, 0LL),
        Instance = (StandFigureManager_o *)System_String__Concat_62488672(
                                             (System_String_o *)StringLiteral_12921/*"StandFigureR("*/,
                                             v24,
                                             (System_String_o *)StringLiteral_754/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_1BCB254(Instance, v19);
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


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreatePrefabForImageIdWithEffect(
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  StandFigureManager_o *Instance; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  UnityEngine_Component_o *v27; // x24
  int32_t v28; // w25
  const MethodInfo *v29; // x2
  UnityEngine_Object_o *gameObject; // x26
  System_String_o *v31; // x0
  int32_t imageIda; // [xsp+2Ch] [xbp-54h] BYREF

  imageIda = imageId;
  if ( (byte_4B1B79F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&imageId);
    sub_1BCAFF8(&UIStandFigureRender_TypeInfo, v21);
    sub_1BCAFF8(&StringLiteral_12921/*"StandFigureR("*/, v22);
    sub_1BCAFF8(&StringLiteral_754/*")"*/, v23);
    byte_4B1B79F = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
LABEL_15:
    sub_1BCB254(Instance, v25);
  Instance = (StandFigureManager_o *)StandFigureManager__CreateStandFigureAnimated(Instance, original, parent, v26);
  v27 = (UnityEngine_Component_o *)Instance;
  if ( Instance )
  {
    if ( isIgnoreFormChange )
    {
LABEL_6:
      v28 = 0;
      goto LABEL_12;
    }
  }
  else
  {
    Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    if ( !Instance )
      goto LABEL_15;
    Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v29);
    v27 = (UnityEngine_Component_o *)Instance;
    if ( isIgnoreFormChange )
      goto LABEL_6;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  Instance = (StandFigureManager_o *)UIStandFigureRender__GetForm(imageId, 0, friendship, 0LL);
  v28 = (int)Instance;
LABEL_12:
  if ( !v27 )
    goto LABEL_15;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v27, 0LL);
  v31 = System_Int32__ToString((int32_t)&imageIda, 0LL);
  Instance = (StandFigureManager_o *)System_String__Concat_62488672(
                                       (System_String_o *)StringLiteral_12921/*"StandFigureR("*/,
                                       v31,
                                       (System_String_o *)StringLiteral_754/*")"*/,
                                       0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
  UIStandFigureR__SetCharacterForImageIdWithEffect(
    (UIStandFigureR_o *)v27,
    imageIda,
    offsetKind,
    faceType,
    v28,
    multiPortraitIndex,
    callbackFunc,
    0,
    waitToStartRenderWhileAssetLoadBusy,
    isCommitEnqueue,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)v27, depth, 0LL);
  return (UIStandFigureR_o *)v27;
}


UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *standFigureRPrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x22
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1B7B2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___, parent);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_12920/*"StandFigureR"*/, v7);
    byte_4B1B7B2 = 1;
  }
  standFigureRPrefab = (Il2CppObject *)this->fields.standFigureRPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             standFigureRPrefab,
                                             (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v11 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_12920/*"StandFigureR"*/, 0LL);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v17);
    byte_4B16191 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B16197 )
  {
    sub_1BCAFF8(&UnityEngine_Quaternion_TypeInfo, v18);
    byte_4B16197 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v21, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL), !Component_object) )
  {
LABEL_16:
    sub_1BCB254(gameObject, v10);
  }
  UIStandFigureR__SetLayer((UIStandFigureR_o *)Component_object, (int32_t)gameObject, 0LL);
  UIStandFigureR__SetMaterial((UIStandFigureR_o *)Component_object, 0LL);
  return (UIStandFigureR_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocalWithEffect(
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
  __int64 v20; // x1
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Component_o *StandFigureAnimated; // x23
  System_String_o *Id; // x0
  __int64 v25; // x1
  int32_t v26; // w24
  int32_t v27; // w24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v29; // x26
  System_String_o *v30; // x0
  int32_t v32; // [xsp+18h] [xbp-58h] BYREF
  int32_t v33; // [xsp+1Ch] [xbp-54h] BYREF

  v19 = this;
  v32 = imageLimitCount;
  v33 = svtId;
  if ( (byte_4B1B7B6 & 1) == 0 )
  {
    sub_1BCAFF8(&UIStandFigureRender_TypeInfo, parent);
    sub_1BCAFF8(&StringLiteral_12921/*"StandFigureR("*/, v20);
    this = (StandFigureManager_o *)sub_1BCAFF8(&StringLiteral_754/*")"*/, v21);
    byte_4B1B7B6 = 1;
  }
  StandFigureAnimated = (UnityEngine_Component_o *)StandFigureManager__CreateStandFigureAnimated(
                                                     this,
                                                     original,
                                                     parent,
                                                     *(const MethodInfo **)&imageLimitCount);
  if ( !StandFigureAnimated )
    StandFigureAnimated = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(v19, parent, v22);
  Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  if ( isIgnoreFormChange )
  {
    v26 = 0;
  }
  else
  {
    v27 = (int)Id;
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    Id = (System_String_o *)UIStandFigureRender__GetForm(v27, 0, friendship, 0LL);
    v26 = (int)Id;
  }
  if ( !StandFigureAnimated
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(StandFigureAnimated, 0LL),
        v29 = System_Int32__ToString((int32_t)&v33, 0LL),
        v30 = System_Int32__ToString((int32_t)&v32, 0LL),
        Id = System_String__Concat_62490676(
               (System_String_o *)StringLiteral_12921/*"StandFigureR("*/,
               v29,
               v30,
               (System_String_o *)StringLiteral_754/*")"*/,
               0LL),
        !gameObject) )
  {
    sub_1BCB254(Id, v25);
  }
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacterWithEffect(
    (UIStandFigureR_o *)StandFigureAnimated,
    v33,
    v32,
    offsetKind,
    faceType,
    v26,
    0.0,
    callbackFunc,
    0,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)StandFigureAnimated, depth, 0LL);
  return (UIStandFigureR_o *)StandFigureAnimated;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_39933336(
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
  __int64 v20; // x1
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  UnityEngine_Component_o *StandFigureAnimated; // x23
  System_String_o *Id; // x0
  __int64 v25; // x1
  int32_t v26; // w24
  int32_t v27; // w24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v29; // x26
  System_String_o *v30; // x0
  int32_t v32; // [xsp+8h] [xbp-58h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-54h] BYREF

  v19 = this;
  v32 = imageLimitCount;
  v33 = svtId;
  if ( (byte_4B1B7B4 & 1) == 0 )
  {
    sub_1BCAFF8(&UIStandFigureRender_TypeInfo, parent);
    sub_1BCAFF8(&StringLiteral_12921/*"StandFigureR("*/, v20);
    this = (StandFigureManager_o *)sub_1BCAFF8(&StringLiteral_754/*")"*/, v21);
    byte_4B1B7B4 = 1;
  }
  StandFigureAnimated = (UnityEngine_Component_o *)StandFigureManager__CreateStandFigureAnimated(
                                                     this,
                                                     original,
                                                     parent,
                                                     *(const MethodInfo **)&imageLimitCount);
  if ( !StandFigureAnimated )
    StandFigureAnimated = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(v19, parent, v22);
  Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  if ( isIgnoreFormChange )
  {
    v26 = 0;
  }
  else
  {
    v27 = (int)Id;
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    Id = (System_String_o *)UIStandFigureRender__GetForm(v27, 0, friendship, 0LL);
    v26 = (int)Id;
  }
  if ( !StandFigureAnimated
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(StandFigureAnimated, 0LL),
        v29 = System_Int32__ToString((int32_t)&v33, 0LL),
        v30 = System_Int32__ToString((int32_t)&v32, 0LL),
        Id = System_String__Concat_62490676(
               (System_String_o *)StringLiteral_12921/*"StandFigureR("*/,
               v29,
               v30,
               (System_String_o *)StringLiteral_754/*")"*/,
               0LL),
        !gameObject) )
  {
    sub_1BCB254(Id, v25);
  }
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_43181072(
    (UIStandFigureR_o *)StandFigureAnimated,
    v33,
    v32,
    offsetKind,
    faceType,
    v26,
    0.0,
    callbackFunc,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)StandFigureAnimated, depth, 0LL);
  return (UIStandFigureR_o *)StandFigureAnimated;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_39936404(
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
  __int64 v21; // x1
  UIStandFigureR_o *StandFigureAnimated; // x0
  const MethodInfo *v23; // x2
  UnityEngine_Component_o *RenderLocal; // x23
  System_String_o *Id; // x0
  __int64 v26; // x1
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *v28; // x25
  System_String_o *v29; // x0
  int32_t v31; // [xsp+8h] [xbp-58h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-54h] BYREF

  v20 = this;
  v31 = imageLimitCount;
  v32 = svtId;
  if ( (byte_4B1B7B5 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_12921/*"StandFigureR("*/, parent);
    this = (StandFigureManager_o *)sub_1BCAFF8(&StringLiteral_754/*")"*/, v21);
    byte_4B1B7B5 = 1;
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
    RenderLocal = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(v20, parent, v23);
    Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
    if ( !RenderLocal )
      goto LABEL_8;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(RenderLocal, 0LL);
  v28 = System_Int32__ToString((int32_t)&v32, 0LL);
  v29 = System_Int32__ToString((int32_t)&v31, 0LL);
  Id = System_String__Concat_62490676(
         (System_String_o *)StringLiteral_12921/*"StandFigureR("*/,
         v28,
         v29,
         (System_String_o *)StringLiteral_754/*")"*/,
         0LL);
  if ( !gameObject )
LABEL_8:
    sub_1BCB254(Id, v26);
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_43181056(
    (UIStandFigureR_o *)RenderLocal,
    v32,
    v31,
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

  if ( (byte_4B1B79A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, method);
    byte_4B1B79A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  return StandFigureManager__CreateRenderLocal((StandFigureManager_o *)Instance, parent, v5);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefabWithEffect(
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

  if ( (byte_4B1B79D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4B1B79D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v20);
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


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_39863448(
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

  if ( (byte_4B1B79C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4B1B79C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v20);
  return StandFigureManager__CreateRenderLocal_39933336(
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


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_39933080(
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
  Il2CppObject *Instance; // x26
  __int64 ImageLimitCount; // x0
  __int64 v19; // x1
  const MethodInfo *v21; // [xsp+18h] [xbp-68h]

  if ( (byte_4B1B79B & 1) == 0 )
  {
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v16);
    byte_4B1B79B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_1BCB254(ImageLimitCount, v19);
  return StandFigureManager__CreateRenderLocal_39933336(
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
           v21);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_39936208(
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

  if ( (byte_4B1B7A1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4B1B7A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v21);
  return StandFigureManager__CreateRenderLocal_39936404(
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 layer; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x20
  UnityEngine_Object_o *v13; // x21
  UnityEngine_Transform_o *v14; // x22
  UnityEngine_Transform_o *v15; // x21

  if ( (byte_4B1B7B3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___, original);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001552, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_12920/*"StandFigureR"*/, v8);
    byte_4B1B7B3 = 1;
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
    layer = (__int64)UnityEngine_Object__Instantiate_object__51002704(
                       (Il2CppObject *)original,
                       transform,
                       0,
                       (const MethodInfo_30A3D50 *)Method_UnityEngine_Object_Instantiate_GameObject____77001552);
    if ( !layer )
      goto LABEL_19;
    v13 = (UnityEngine_Object_o *)layer;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)layer,
                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
    UnityEngine_Object__set_name(v13, (System_String_o *)StringLiteral_12920/*"StandFigureR"*/, 0LL);
    layer = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0LL);
    v14 = (UnityEngine_Transform_o *)layer;
    if ( !byte_4B16191 )
    {
      layer = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v10);
      byte_4B16191 = 1;
    }
    if ( !v14 )
      goto LABEL_19;
    UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
    layer = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0LL);
    v15 = (UnityEngine_Transform_o *)layer;
    if ( !byte_4B16197 )
    {
      layer = sub_1BCAFF8(&UnityEngine_Quaternion_TypeInfo, v10);
      byte_4B16197 = 1;
    }
    if ( !v15
      || (UnityEngine_Transform__set_localRotation(
            v15,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0LL),
          layer = UnityEngine_GameObject__get_layer(parent, 0LL),
          !Component_object) )
    {
LABEL_19:
      sub_1BCB254(layer, v10);
    }
    UIStandFigureR__SetLayer((UIStandFigureR_o *)Component_object, layer, 0LL);
    UIStandFigureR__SetMaterial((UIStandFigureR_o *)Component_object, 0LL);
  }
  return (UIStandFigureR_o *)Component_object;
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
  int32_t v7; // [xsp+8h] [xbp-28h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v7 = imageLimitCount;
  v8 = svtId;
  if ( (byte_4B1B7B1 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_12919/*"StandFigureM("*/, *(_QWORD *)&imageLimitCount);
    sub_1BCAFF8(&StringLiteral_754/*")"*/, v3);
    byte_4B1B7B1 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_62490676(
           (System_String_o *)StringLiteral_12919/*"StandFigureM("*/,
           v4,
           v5,
           (System_String_o *)StringLiteral_754/*")"*/,
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
  System_String_o *AssetName_39930068; // x20

  if ( (byte_4B1B791 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v8);
    byte_4B1B791 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_39930068 = StandFigureManager__GetAssetName_39930068(svtId, ImageLimitCount, v10);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_39930068, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__DownloadAsset_39930556(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_39930068; // x20

  if ( (byte_4B1B792 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4B1B792 = 1;
  }
  AssetName_39930068 = StandFigureManager__GetAssetName_39930068(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_39930068, callback, 1, 0LL);
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

  if ( (byte_4B1B78D & 1) == 0 )
  {
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_1BCAFF8(&UIStandFigureRender_TypeInfo, v6);
    byte_4B1B78D = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName(svtId, ImageLimitCount, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StandFigureManager__GetAssetNameByForm(
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t formId,
        const MethodInfo *method)
{
  if ( (byte_4B1B790 & 1) == 0 )
  {
    sub_1BCAFF8(&UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4B1B790 = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName_43202344(svtId, imageLimitCount, formId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StandFigureManager__GetAssetName_39930068(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4B1B78E & 1) == 0 )
  {
    sub_1BCAFF8(&UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4B1B78E = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName_39930172(int32_t id, const MethodInfo *method)
{
  if ( (byte_4B1B78F & 1) == 0 )
  {
    sub_1BCAFF8(&UIStandFigureRender_TypeInfo, method);
    byte_4B1B78F = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName_43203112(id, 0LL);
}


void __fastcall StandFigureManager__LateUpdate(StandFigureManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_RenderTexture_o *v5; // x1
  const MethodInfo *v6; // x2
  struct StandFigureRenderWaitStatus_o *renderInfo; // x8
  StandFigureCamera_o *standFigureCamera; // x0
  struct StandFigureRenderWaitStatus_o *v9; // x8
  Il2CppObject *standFigureRender; // x20
  UnityEngine_Transform_o *parent; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *sfrInstances; // x8
  struct System_Object_array *items; // x9
  _QWORD *v16; // x10
  __int64 size; // x11
  Il2CppClass **v18; // x0
  const MethodInfo *v19; // x2

  if ( (byte_4B1B7AF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIStandFigureRender__Add__, method);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_UIStandFigureRender___, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    byte_4B1B7AF = 1;
  }
  if ( StandFigureManager__RenderStart(this, method) )
    this->fields.isRenderWait = 1;
  renderInfo = this->fields.renderInfo;
  if ( renderInfo && this->fields.isRenderWait )
  {
    standFigureCamera = this->fields.standFigureCamera;
    if ( renderInfo->fields.isFaceOnly )
    {
      if ( !standFigureCamera )
        goto LABEL_31;
      standFigureCamera = (StandFigureCamera_o *)StandFigureCamera__RequestTypePoint(
                                                   standFigureCamera,
                                                   renderInfo->fields.renderTex,
                                                   v6);
      this->fields.isRenderWait = ((unsigned __int8)standFigureCamera & 1) == 0;
      if ( ((unsigned __int8)standFigureCamera & 1) == 0 )
        return;
      goto LABEL_15;
    }
    if ( !standFigureCamera )
      goto LABEL_31;
    if ( renderInfo->fields.withEffect )
    {
      standFigureCamera = (StandFigureCamera_o *)StandFigureCamera__RequestWithEffect(standFigureCamera, v5, v6);
      this->fields.isRenderWait = 0;
      goto LABEL_15;
    }
    standFigureCamera = (StandFigureCamera_o *)StandFigureCamera__Request(
                                                 standFigureCamera,
                                                 renderInfo->fields.renderTex,
                                                 v6);
    this->fields.isRenderWait = ((unsigned __int8)standFigureCamera & 1) == 0;
    if ( ((unsigned __int8)standFigureCamera & 1) != 0 )
    {
LABEL_15:
      v9 = this->fields.renderInfo;
      if ( !v9 )
        goto LABEL_31;
      standFigureRender = (Il2CppObject *)this->fields.standFigureRender;
      if ( v9->fields.withEffect
        && this->fields.numberServantPortrait - 1 > v9->fields._MultiPortraitIndex_k__BackingField )
      {
        if ( !standFigureRender )
          goto LABEL_31;
        standFigureCamera = (StandFigureCamera_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this->fields.standFigureRender,
                                                     0LL);
        if ( !standFigureCamera )
          goto LABEL_31;
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)standFigureCamera, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        standFigureCamera = (StandFigureCamera_o *)UnityEngine_Object__Instantiate_object__51002592(
                                                     standFigureRender,
                                                     parent,
                                                     (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_UIStandFigureRender___);
        sfrInstances = (System_Collections_Generic_List_object__o *)this->fields.sfrInstances;
        if ( !sfrInstances )
          goto LABEL_31;
        items = sfrInstances->fields._items;
        v16 = Method_System_Collections_Generic_List_UIStandFigureRender__Add__;
        ++sfrInstances->fields._version;
        if ( !items )
          goto LABEL_31;
        size = sfrInstances->fields._size;
        standFigureRender = (Il2CppObject *)standFigureCamera;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            sfrInstances,
            (Il2CppObject *)standFigureCamera,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          sfrInstances->fields._size = size + 1;
          v18[4] = (Il2CppClass *)standFigureRender;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 4), (int32_t)standFigureRender, v12, v13);
        }
      }
      if ( standFigureRender )
      {
        standFigureCamera = (StandFigureCamera_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)standFigureRender,
                                                     0LL);
        if ( standFigureCamera )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureCamera, 1, 0LL);
          UIStandFigureRender__SetActive((UIStandFigureRender_o *)standFigureRender, 1, 0LL);
          standFigureCamera = (StandFigureCamera_o *)this->fields.renderInfo;
          if ( standFigureCamera )
          {
            StandFigureRenderWaitStatus__SetCharacter(
              (StandFigureRenderWaitStatus_o *)standFigureCamera,
              (UIStandFigureRender_o *)standFigureRender,
              v19);
            return;
          }
        }
      }
LABEL_31:
      sub_1BCB254(standFigureCamera, v5);
    }
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
  System_String_o *AssetName_39930068; // x20

  if ( (byte_4B1B793 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v8);
    byte_4B1B793 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_39930068 = StandFigureManager__GetAssetName_39930068(svtId, ImageLimitCount, v10);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_39930068, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__LoadAsset_39930872(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_39930068; // x20

  if ( (byte_4B1B794 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4B1B794 = 1;
  }
  AssetName_39930068 = StandFigureManager__GetAssetName_39930068(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_39930068, callback, 1, 0LL);
}


void __fastcall StandFigureManager__OnRenderEnd(
        StandFigureManager_o *this,
        UnityEngine_RenderTexture_o *renderTexture,
        const MethodInfo *method)
{
  StandFigureRenderWaitStatus_o *renderInfo; // x0
  CGThumbnailListItem_o *p_renderInfo; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_renderInfo = (CGThumbnailListItem_o *)&this->fields.renderInfo;
  renderInfo = this->fields.renderInfo;
  if ( renderInfo )
  {
    StandFigureRenderWaitStatus__Callback(renderInfo, renderTexture, method);
    p_renderInfo->klass = 0LL;
    sub_1BCAF9C(p_renderInfo, 0, v5, v6);
  }
}


void __fastcall StandFigureManager__OnRenderEndWithEffect(
        StandFigureManager_o *this,
        UnityEngine_RenderTexture_o *renderTexture,
        const MethodInfo *method)
{
  StandFigureRenderWaitStatus_o *renderInfo; // x0
  CGThumbnailListItem_o *p_renderInfo; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_renderInfo = (CGThumbnailListItem_o *)&this->fields.renderInfo;
  renderInfo = this->fields.renderInfo;
  if ( renderInfo )
  {
    StandFigureRenderWaitStatus__Callback(renderInfo, renderTexture, method);
    p_renderInfo->klass = 0LL;
    sub_1BCAF9C(p_renderInfo, 0, v5, v6);
  }
}


void __fastcall StandFigureManager__Reboot(StandFigureManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0
  struct StandFigureRenderWaitStatus_o **p_renderInfo; // x19

  if ( (byte_4B1B7AC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__, v5);
    byte_4B1B7AC = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1BCB254(0LL, method);
  if ( renderWaitList->fields._size >= 1 )
    System_Collections_Generic_Queue_object___Clear(
      renderWaitList,
      (const MethodInfo_382E4C8 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
  this->fields.renderInfo = 0LL;
  p_renderInfo = &this->fields.renderInfo;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_renderInfo, 0, v2, v3);
  *((_DWORD *)p_renderInfo - 4) = 0;
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
  System_String_o *AssetName_39930068; // x19

  if ( (byte_4B1B795 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v6);
    byte_4B1B795 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_39930068 = StandFigureManager__GetAssetName_39930068(svtId, ImageLimitCount, v8);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_39930068, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__ReleaseAsset_39931176(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  System_String_o *AssetName_39930068; // x19

  if ( (byte_4B1B796 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4B1B796 = 1;
  }
  AssetName_39930068 = StandFigureManager__GetAssetName_39930068(svtId, imageLimitCount, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_39930068, 0LL);
}


void __fastcall StandFigureManager__ReleaseCharaFigure(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *klass; // x20

  if ( (byte_4B1B7AB & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v1);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v2);
    byte_4B1B7AB = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    if ( !Instance )
      goto LABEL_13;
    klass = (UnityEngine_Object_o *)Instance[2].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      v4 = Instance[2].klass;
      if ( v4 )
      {
        UIStandFigureRender__ReleaseCharacter((UIStandFigureRender_o *)v4, 0LL);
        goto LABEL_12;
      }
LABEL_13:
      sub_1BCB254(v4, v5);
    }
  }
LABEL_12:
  StandFigureManager__ReleaseStandFigureRenderInstances((const MethodInfo *)v4);
}


void __fastcall StandFigureManager__ReleaseStandFigureRenderInstances(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x19
  Il2CppClass *klass; // x0
  __int64 v10; // x1
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  Il2CppClass *v15; // x8
  int32_t namespaze; // w2
  int v17; // w9
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B1B7AA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureRender__Dispose__, v1);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureRender__MoveNext__, v2);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_UIStandFigureRender__get_Current__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIStandFigureRender__Clear__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIStandFigureRender__GetEnumerator__, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v7);
    byte_4B1B7AA = 1;
  }
  memset(&v19, 0, sizeof(v19));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  klass = (Il2CppClass *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0LL, 0LL);
  if ( ((unsigned __int8)klass & 1) != 0 )
  {
    if ( !Instance )
      goto LABEL_20;
    klass = Instance[4].klass;
    if ( !klass )
      goto LABEL_20;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)klass,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_UIStandFigureRender__GetEnumerator__);
    v19 = v18;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureRender__MoveNext__);
      if ( !v11 )
        break;
      current = v19.fields._current;
      if ( !v19.fields._current )
        sub_1BCB254(v11, v12);
      UIStandFigureRender__ReleaseCharacter((UIStandFigureRender_o *)v19.fields._current, 0LL);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_UIStandFigureRender__Dispose__);
    v15 = Instance[4].klass;
    if ( !v15 )
LABEL_20:
      sub_1BCB254(klass, v10);
    namespaze = (int32_t)v15->_1.namespaze;
    v17 = HIDWORD(v15->_1.namespaze) + 1;
    LODWORD(v15->_1.namespaze) = 0;
    HIDWORD(v15->_1.namespaze) = v17;
    if ( namespaze >= 1 )
      System_Array__Clear((System_Array_o *)v15->_1.name, 0, namespaze, 0LL);
    LODWORD(Instance[4].monitor) = 0;
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
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // [xsp+0h] [xbp-50h]

  if ( (byte_4B1B7A2 & 1) == 0 )
  {
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v12);
    sub_1BCAFF8(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_4B1B7A2 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v16 = (StandFigureRenderWaitStatus_o *)sub_1BCB244(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_39938980(v16, 0LL, Id, faceType, 0, 0, textureList, callback, v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v18);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v16, v19);
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
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  if ( (byte_4B1B7A9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&id);
    sub_1BCAFF8(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_4B1B7A9 = 1;
  }
  v14 = (StandFigureRenderWaitStatus_o *)sub_1BCB244(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_39938980(v14, renderTex, id, faceType, formId, 1, textureList, callback, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v16);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v14, v17);
}


bool __fastcall StandFigureManager__RenderStart(StandFigureManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B1B7AE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__, v3);
    byte_4B1B7AE = 1;
  }
  if ( this->fields.renderInfo )
    return 0;
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1BCB254(0LL, method);
  if ( renderWaitList->fields._size < 1 )
    return 0;
  v6 = System_Collections_Generic_Queue_object___Dequeue(
         renderWaitList,
         (const MethodInfo_382E998 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__);
  this->fields.renderInfo = (struct StandFigureRenderWaitStatus_o *)v6;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.renderInfo, (int32_t)v6, v7, v8);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__RenderWithEffect(
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        int32_t formId,
        int32_t multiPortraitIndex,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v15; // x1
  StandFigureRenderWaitStatus_o *v16; // x26
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // [xsp+10h] [xbp-70h]

  if ( (byte_4B1B7A8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&id);
    sub_1BCAFF8(&StandFigureRenderWaitStatus_TypeInfo, v15);
    byte_4B1B7A8 = 1;
  }
  v16 = (StandFigureRenderWaitStatus_o *)sub_1BCB244(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_39938584(
    v16,
    renderTex,
    id,
    faceType,
    formId,
    multiPortraitIndex,
    0,
    1,
    textureList,
    callback,
    v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v18);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v16, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_39937188(
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
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // [xsp+0h] [xbp-60h]

  if ( (byte_4B1B7A3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&imageLimitCount);
    sub_1BCAFF8(&StandFigureRenderWaitStatus_TypeInfo, v11);
    byte_4B1B7A3 = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v13 = (StandFigureRenderWaitStatus_o *)sub_1BCB244(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_39938980(v13, 0LL, Id, faceType, 0, 0, textureList, callback, v17);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v15);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v13, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_39937408(
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  StandFigureRenderWaitStatus_o *v10; // x23
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // [xsp+0h] [xbp-50h]

  if ( (byte_4B1B7A4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&faceType);
    sub_1BCAFF8(&StandFigureRenderWaitStatus_TypeInfo, v9);
    byte_4B1B7A4 = 1;
  }
  v10 = (StandFigureRenderWaitStatus_o *)sub_1BCB244(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_39938980(v10, 0LL, id, faceType, 0, 0, textureList, callback, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v12);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v10, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_39937592(
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
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // [xsp+0h] [xbp-60h]

  if ( (byte_4B1B7A5 & 1) == 0 )
  {
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v14);
    sub_1BCAFF8(&StandFigureRenderWaitStatus_TypeInfo, v15);
    byte_4B1B7A5 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v18 = (StandFigureRenderWaitStatus_o *)sub_1BCB244(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_39938980(v18, renderTex, Id, faceType, 0, 0, textureList, callback, v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v20);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v18, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_39937908(
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
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // [xsp+0h] [xbp-60h]

  if ( (byte_4B1B7A6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    sub_1BCAFF8(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_4B1B7A6 = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v15 = (StandFigureRenderWaitStatus_o *)sub_1BCB244(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_39938980(v15, renderTex, Id, faceType, 0, 0, textureList, callback, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v17);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v15, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_39938132(
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
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  if ( (byte_4B1B7A7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&id);
    sub_1BCAFF8(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_4B1B7A7 = 1;
  }
  v14 = (StandFigureRenderWaitStatus_o *)sub_1BCB244(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_39938980(v14, renderTex, id, faceType, formId, 0, textureList, callback, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v16);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v14, v17);
}


void __fastcall StandFigureManager__ResetCameraRenderState(StandFigureManager_o *this, const MethodInfo *method)
{
  StandFigureCamera_o *standFigureCamera; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1B7B7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__, method);
    byte_4B1B7B7 = 1;
  }
  standFigureCamera = this->fields.standFigureCamera;
  if ( !standFigureCamera
    || (StandFigureCamera__ResetCameraRenderState(standFigureCamera, method),
        this->fields.renderInfo = 0LL,
        this->fields.isRenderWait = 0,
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.renderInfo, 0, v4, v5),
        (standFigureCamera = (StandFigureCamera_o *)this->fields.renderWaitList) == 0LL) )
  {
    sub_1BCB254(standFigureCamera, method);
  }
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)standFigureCamera,
    (const MethodInfo_382E4C8 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
  this->fields.numberServantPortrait = 0;
}


void __fastcall StandFigureManager__SetNumberServantPortrait(
        StandFigureManager_o *this,
        int32_t count,
        const MethodInfo *method)
{
  this->fields.numberServantPortrait = count;
}


bool __fastcall StandFigureManager__get_RenderInfoIsNull(StandFigureManager_o *this, const MethodInfo *method)
{
  return this->fields.renderInfo == 0LL;
}