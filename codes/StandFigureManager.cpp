void __fastcall StandFigureManager___ctor(StandFigureManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Queue_T__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A6F1A2 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__, method);
    sub_1B90010(&System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo, v3);
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager___ctor__, v4);
    byte_4A6F1A2 = 1;
  }
  v5 = (System_Collections_Generic_Queue_T__o *)sub_1B9025C(System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v5,
    (const MethodInfo_368241C *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__);
  this->fields.renderWaitList = (struct System_Collections_Generic_Queue_StandFigureRenderWaitStatus__o *)v5;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.renderWaitList, (int32_t)v5, v6, v7);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_374CCA8 *)Method_SingletonMonoBehaviour_StandFigureManager___ctor__);
}


void __fastcall StandFigureManager__AddRender(
        StandFigureManager_o *this,
        StandFigureRenderWaitStatus_o *info,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0

  if ( (byte_4A6F19B & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__, info);
    byte_4A6F19B = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1B9026C(0LL, info);
  System_Collections_Generic_Queue_object___Enqueue(
    renderWaitList,
    (Il2CppObject *)info,
    (const MethodInfo_36829E4 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__);
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

  if ( (byte_4A6F19D & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___, parent);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    sub_1B90010(&StringLiteral_12958/*"StandFigureM"*/, v7);
    byte_4A6F19D = 1;
  }
  standFigureMPrefab = (Il2CppObject *)this->fields.standFigureMPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        standFigureMPrefab,
                                        (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_15;
  v11 = layer;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       layer,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !layer )
    goto LABEL_15;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_12958/*"StandFigureM"*/, 0LL);
  if ( !parent )
    goto LABEL_15;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0LL);
  if ( !byte_4A6A9C1 )
  {
    sub_1B90010(&UnityEngine_Vector3_TypeInfo, v17);
    byte_4A6A9C1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4A6A9C7 )
  {
    sub_1B90010(&UnityEngine_Quaternion_TypeInfo, v18);
    byte_4A6A9C7 = 1;
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
    sub_1B9026C(layer, v10);
  UIStandFigureRender__SetLayer((UIStandFigureRender_o *)Component_object, (int32_t)layer, 0LL);
  return (UIStandFigureM_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshLocal_38027944(
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
    sub_1B9026C(MeshLocal, v16);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)MeshLocal, 0LL);
  UIStandFigureM__SetCharacter_41008900(v17, svtId, imageLimitCount, faceType, callbackFunc, loadRequiredResource, 0LL);
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

  if ( (byte_4A6F189 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, method);
    byte_4A6F189 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v4);
  return StandFigureManager__CreateMeshLocal((StandFigureManager_o *)Instance, parent, v5);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_38027716(
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

  if ( (byte_4A6F18A & 1) == 0 )
  {
    sub_1B90010(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v14);
    byte_4A6F18A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_1B9026C(ImageLimitCount, v17);
  return StandFigureManager__CreateMeshLocal_38027944(
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
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_38028124(
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

  if ( (byte_4A6F18B & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4A6F18B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v16);
  return StandFigureManager__CreateMeshLocal_38027944(
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
  int32_t imageIda; // [xsp+Ch] [xbp-54h] BYREF

  imageIda = imageId;
  if ( (byte_4A6F18F & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&imageId);
    sub_1B90010(&UIStandFigureRender_TypeInfo, v17);
    sub_1B90010(&StringLiteral_12961/*"StandFigureR("*/, v18);
    sub_1B90010(&StringLiteral_814/*")"*/, v19);
    byte_4A6F18F = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v22);
  v23 = (UnityEngine_Component_o *)Instance;
  if ( isIgnoreFormChange )
  {
    v24 = 0;
  }
  else
  {
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    Instance = (StandFigureManager_o *)UIStandFigureRender__GetForm(imageId, 0, friendship, 0LL);
    v24 = (int)Instance;
  }
  if ( !v23
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v23, 0LL),
        v26 = System_Int32__ToString((int32_t)&imageIda, 0LL),
        Instance = (StandFigureManager_o *)System_String__Concat_61798352(
                                             (System_String_o *)StringLiteral_12961/*"StandFigureR("*/,
                                             v26,
                                             (System_String_o *)StringLiteral_814/*")"*/,
                                             0LL),
        !gameObject) )
  {
LABEL_12:
    sub_1B9026C(Instance, v21);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
  UIStandFigureR__SetCharacterForImageId(
    (UIStandFigureR_o *)v23,
    imageIda,
    offsetKind,
    faceType,
    v24,
    callbackFunc,
    0,
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
  int32_t imageIda; // [xsp+Ch] [xbp-54h] BYREF

  imageIda = imageId;
  if ( (byte_4A6F190 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&imageId);
    sub_1B90010(&StringLiteral_12961/*"StandFigureR("*/, v14);
    sub_1B90010(&StringLiteral_814/*")"*/, v15);
    byte_4A6F190 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance
    || (Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v18)) == 0LL
    || (v19 = (UIStandFigureR_o *)Instance,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL),
        v21 = System_Int32__ToString((int32_t)&imageIda, 0LL),
        Instance = (StandFigureManager_o *)System_String__Concat_61798352(
                                             (System_String_o *)StringLiteral_12961/*"StandFigureR("*/,
                                             v21,
                                             (System_String_o *)StringLiteral_814/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_1B9026C(Instance, v17);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
  UIStandFigureR__SetCharacterForImageId(v19, imageIda, offsetKind, faceType, formId, callbackFunc, 0, 0LL);
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

  if ( (byte_4A6F19F & 1) == 0 )
  {
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___, parent);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    sub_1B90010(&StringLiteral_12960/*"StandFigureR"*/, v7);
    byte_4A6F19F = 1;
  }
  standFigureRPrefab = (Il2CppObject *)this->fields.standFigureRPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             standFigureRPrefab,
                                             (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v11 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_12960/*"StandFigureR"*/, 0LL);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !byte_4A6A9C1 )
  {
    sub_1B90010(&UnityEngine_Vector3_TypeInfo, v17);
    byte_4A6A9C1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4A6A9C7 )
  {
    sub_1B90010(&UnityEngine_Quaternion_TypeInfo, v18);
    byte_4A6A9C7 = 1;
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
    sub_1B9026C(gameObject, v10);
  }
  UIStandFigureR__SetLayer((UIStandFigureR_o *)Component_object, (int32_t)gameObject, 0LL);
  UIStandFigureR__SetMaterial((UIStandFigureR_o *)Component_object, 0LL);
  return (UIStandFigureR_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_38029160(
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
  if ( (byte_4A6F1A0 & 1) == 0 )
  {
    sub_1B90010(&UIStandFigureRender_TypeInfo, parent);
    sub_1B90010(&StringLiteral_12961/*"StandFigureR("*/, v19);
    sub_1B90010(&StringLiteral_814/*")"*/, v20);
    byte_4A6F1A0 = 1;
  }
  RenderLocal = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(
                                             this,
                                             parent,
                                             *(const MethodInfo **)&svtId);
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
  if ( !RenderLocal
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(RenderLocal, 0LL),
        v27 = System_Int32__ToString((int32_t)&v31, 0LL),
        v28 = System_Int32__ToString((int32_t)&v30, 0LL),
        Id = System_String__Concat_61800356(
               (System_String_o *)StringLiteral_12961/*"StandFigureR("*/,
               v27,
               v28,
               (System_String_o *)StringLiteral_814/*")"*/,
               0LL),
        !gameObject) )
  {
    sub_1B9026C(Id, v23);
  }
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_41095956(
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
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_38030676(
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
  int32_t v28; // [xsp+8h] [xbp-58h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-54h] BYREF

  v28 = imageLimitCount;
  v29 = svtId;
  if ( (byte_4A6F1A1 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_12961/*"StandFigureR("*/, parent);
    sub_1B90010(&StringLiteral_814/*")"*/, v20);
    byte_4A6F1A1 = 1;
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
        Id = System_String__Concat_61800356(
               (System_String_o *)StringLiteral_12961/*"StandFigureR("*/,
               v25,
               v26,
               (System_String_o *)StringLiteral_814/*")"*/,
               0LL),
        !gameObject) )
  {
    sub_1B9026C(Id, v23);
  }
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_41095956(
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A6F18C & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, method);
    byte_4A6F18C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v4);
  return StandFigureManager__CreateRenderLocal((StandFigureManager_o *)Instance, parent, v5);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_38028908(
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
  const MethodInfo *v21; // [xsp+10h] [xbp-70h]

  if ( (byte_4A6F18D & 1) == 0 )
  {
    sub_1B90010(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v16);
    byte_4A6F18D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_1B9026C(ImageLimitCount, v19);
  return StandFigureManager__CreateRenderLocal_38029160(
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
           v21);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_38029576(
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
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  const MethodInfo *v21; // [xsp+10h] [xbp-70h]

  if ( (byte_4A6F18E & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4A6F18E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v19);
  return StandFigureManager__CreateRenderLocal_38029160(
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
           v21);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_38030488(
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
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  int32_t v22; // [xsp+10h] [xbp-70h]
  const MethodInfo *v23; // [xsp+18h] [xbp-68h]

  if ( (byte_4A6F191 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4A6F191 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v20);
  return StandFigureManager__CreateRenderLocal_38030676(
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
  int32_t v7; // [xsp+8h] [xbp-28h] BYREF
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  v7 = imageLimitCount;
  v8 = svtId;
  if ( (byte_4A6F19E & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_12959/*"StandFigureM("*/, *(_QWORD *)&imageLimitCount);
    sub_1B90010(&StringLiteral_814/*")"*/, v3);
    byte_4A6F19E = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_61800356(
           (System_String_o *)StringLiteral_12959/*"StandFigureM("*/,
           v4,
           v5,
           (System_String_o *)StringLiteral_814/*")"*/,
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
  System_String_o *AssetName_38025896; // x20

  if ( (byte_4A6F183 & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B90010(&ImageLimitCount_TypeInfo, v8);
    byte_4A6F183 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_38025896 = StandFigureManager__GetAssetName_38025896(svtId, ImageLimitCount, v10);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_38025896, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__DownloadAsset_38026384(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_38025896; // x20

  if ( (byte_4A6F184 & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4A6F184 = 1;
  }
  AssetName_38025896 = StandFigureManager__GetAssetName_38025896(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_38025896, callback, 1, 0LL);
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

  if ( (byte_4A6F17F & 1) == 0 )
  {
    sub_1B90010(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B90010(&UIStandFigureRender_TypeInfo, v6);
    byte_4A6F17F = 1;
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
  if ( (byte_4A6F182 & 1) == 0 )
  {
    sub_1B90010(&UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4A6F182 = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName_41111244(svtId, imageLimitCount, formId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StandFigureManager__GetAssetName_38025896(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4A6F180 & 1) == 0 )
  {
    sub_1B90010(&UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4A6F180 = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName_38026000(int32_t id, const MethodInfo *method)
{
  if ( (byte_4A6F181 & 1) == 0 )
  {
    sub_1B90010(&UIStandFigureRender_TypeInfo, method);
    byte_4A6F181 = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName_41112012(id, 0LL);
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
      sub_1B9026C(standFigureCamera, v4);
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
  System_String_o *AssetName_38025896; // x20

  if ( (byte_4A6F185 & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B90010(&ImageLimitCount_TypeInfo, v8);
    byte_4A6F185 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_38025896 = StandFigureManager__GetAssetName_38025896(svtId, ImageLimitCount, v10);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_38025896, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__LoadAsset_38026700(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_38025896; // x20

  if ( (byte_4A6F186 & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4A6F186 = 1;
  }
  AssetName_38025896 = StandFigureManager__GetAssetName_38025896(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_38025896, callback, 1, 0LL);
}


void __fastcall StandFigureManager__OnRenderEnd(
        StandFigureManager_o *this,
        UnityEngine_RenderTexture_o *renderTexture,
        const MethodInfo *method)
{
  StandFigureRenderWaitStatus_o *renderInfo; // x0
  ServantStatusBattleListViewItem_o *p_renderInfo; // x19
  int32_t v5; // w2
  int32_t v6; // w3

  p_renderInfo = (ServantStatusBattleListViewItem_o *)&this->fields.renderInfo;
  renderInfo = this->fields.renderInfo;
  if ( renderInfo )
  {
    StandFigureRenderWaitStatus__Callback(renderInfo, renderTexture, method);
    p_renderInfo->klass = 0LL;
    sub_1B8FFB4(p_renderInfo, 0, v5, v6);
  }
}


void __fastcall StandFigureManager__Reboot(StandFigureManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0

  if ( (byte_4A6F19A & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__, method);
    sub_1B90010(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__, v5);
    byte_4A6F19A = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1B9026C(0LL, method);
  if ( renderWaitList->fields._size >= 1 )
    System_Collections_Generic_Queue_object___Clear(
      renderWaitList,
      (const MethodInfo_36826A4 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
  this->fields.renderInfo = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.renderInfo, 0, v2, v3);
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
  System_String_o *AssetName_38025896; // x19

  if ( (byte_4A6F187 & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B90010(&ImageLimitCount_TypeInfo, v6);
    byte_4A6F187 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_38025896 = StandFigureManager__GetAssetName_38025896(svtId, ImageLimitCount, v8);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_38025896, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__ReleaseAsset_38027004(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  System_String_o *AssetName_38025896; // x19

  if ( (byte_4A6F188 & 1) == 0 )
  {
    sub_1B90010(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4A6F188 = 1;
  }
  AssetName_38025896 = StandFigureManager__GetAssetName_38025896(svtId, imageLimitCount, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_38025896, 0LL);
}


void __fastcall StandFigureManager__ReleaseCharaFigure(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *klass; // x20

  if ( (byte_4A6F199 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, v1);
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v2);
    byte_4A6F199 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
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
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      v4 = Instance[2].klass;
      if ( v4 )
      {
        UIStandFigureRender__ReleaseCharacter((UIStandFigureRender_o *)v4, 0LL);
        return;
      }
LABEL_13:
      sub_1B9026C(v4, v5);
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
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // [xsp+0h] [xbp-50h]

  if ( (byte_4A6F192 & 1) == 0 )
  {
    sub_1B90010(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v12);
    sub_1B90010(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_4A6F192 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v16 = (StandFigureRenderWaitStatus_o *)sub_1B9025C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_38032796(v16, 0LL, Id, faceType, 0, 0, textureList, callback, v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v18);
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

  if ( (byte_4A6F198 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&id);
    sub_1B90010(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_4A6F198 = 1;
  }
  v14 = (StandFigureRenderWaitStatus_o *)sub_1B9025C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_38032796(v14, renderTex, id, faceType, formId, 1, textureList, callback, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v16);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v14, v17);
}


bool __fastcall StandFigureManager__RenderStart(StandFigureManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A6F19C & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__, method);
    sub_1B90010(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__, v3);
    byte_4A6F19C = 1;
  }
  if ( this->fields.renderInfo )
    return 0;
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1B9026C(0LL, method);
  if ( renderWaitList->fields._size < 1 )
    return 0;
  v6 = System_Collections_Generic_Queue_object___Dequeue(
         renderWaitList,
         (const MethodInfo_3682B74 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__);
  this->fields.renderInfo = (struct StandFigureRenderWaitStatus_o *)v6;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.renderInfo, (int32_t)v6, v7, v8);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_38031416(
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

  if ( (byte_4A6F193 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&imageLimitCount);
    sub_1B90010(&StandFigureRenderWaitStatus_TypeInfo, v11);
    byte_4A6F193 = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v13 = (StandFigureRenderWaitStatus_o *)sub_1B9025C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_38032796(v13, 0LL, Id, faceType, 0, 0, textureList, callback, v17);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v15);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v13, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_38031636(
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

  if ( (byte_4A6F194 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&faceType);
    sub_1B90010(&StandFigureRenderWaitStatus_TypeInfo, v9);
    byte_4A6F194 = 1;
  }
  v10 = (StandFigureRenderWaitStatus_o *)sub_1B9025C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_38032796(v10, 0LL, id, faceType, 0, 0, textureList, callback, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v12);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v10, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_38031820(
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

  if ( (byte_4A6F195 & 1) == 0 )
  {
    sub_1B90010(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v14);
    sub_1B90010(&StandFigureRenderWaitStatus_TypeInfo, v15);
    byte_4A6F195 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v18 = (StandFigureRenderWaitStatus_o *)sub_1B9025C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_38032796(v18, renderTex, Id, faceType, 0, 0, textureList, callback, v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v20);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v18, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_38032136(
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

  if ( (byte_4A6F196 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    sub_1B90010(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_4A6F196 = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v15 = (StandFigureRenderWaitStatus_o *)sub_1B9025C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_38032796(v15, renderTex, Id, faceType, 0, 0, textureList, callback, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v17);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v15, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_38032360(
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

  if ( (byte_4A6F197 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&id);
    sub_1B90010(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_4A6F197 = 1;
  }
  v14 = (StandFigureRenderWaitStatus_o *)sub_1B9025C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_38032796(v14, renderTex, id, faceType, formId, 0, textureList, callback, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v16);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v14, v17);
}