void __fastcall StandFigureManager___ctor(StandFigureManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5A49A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__);
    sub_1B885B0(&System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager___ctor__);
    byte_4A5A49A = 1;
  }
  v3 = (System_Collections_Generic_Queue_T__o *)sub_1B887FC(System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v3,
    (const MethodInfo_366F2A4 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__);
  this->fields.renderWaitList = (struct System_Collections_Generic_Queue_StandFigureRenderWaitStatus__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.renderWaitList, (int32_t)v3, v4, v5);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_StandFigureManager___ctor__);
}


void __fastcall StandFigureManager__AddRender(
        StandFigureManager_o *this,
        StandFigureRenderWaitStatus_o *info,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0

  if ( (byte_4A5A493 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__);
    byte_4A5A493 = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1B8880C(0LL, info);
  System_Collections_Generic_Queue_object___Enqueue(
    renderWaitList,
    (Il2CppObject *)info,
    (const MethodInfo_366F86C *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__);
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

  if ( (byte_4A5A495 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_12933/*"StandFigureM"*/);
    byte_4A5A495 = 1;
  }
  standFigureMPrefab = (Il2CppObject *)this->fields.standFigureMPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        standFigureMPrefab,
                                        (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_15;
  v8 = layer;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       layer,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___);
  transform = UnityEngine_GameObject__get_transform(v8, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !layer )
    goto LABEL_15;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_12933/*"StandFigureM"*/, 0LL);
  if ( !parent )
    goto LABEL_15;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0LL);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4A55CE7 )
  {
    sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
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
    sub_1B8880C(layer, v7);
  UIStandFigureRender__SetLayer((UIStandFigureRender_o *)Component_object, (int32_t)layer, 0LL);
  return (UIStandFigureM_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshLocal_37975824(
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
    sub_1B8880C(MeshLocal, v16);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)MeshLocal, 0LL);
  UIStandFigureM__SetCharacter_40954688(v17, svtId, imageLimitCount, faceType, callbackFunc, loadRequiredResource, 0LL);
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

  if ( (byte_4A5A481 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4A5A481 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  return StandFigureManager__CreateMeshLocal((StandFigureManager_o *)Instance, parent, v5);
}


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_37975596(
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

  if ( (byte_4A5A482 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4A5A482 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_1B8880C(ImageLimitCount, v16);
  return StandFigureManager__CreateMeshLocal_37975824(
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


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_37976004(
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

  if ( (byte_4A5A483 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4A5A483 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v16);
  return StandFigureManager__CreateMeshLocal_37975824(
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
        const MethodInfo *method)
{
  StandFigureManager_o *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  UnityEngine_Component_o *v20; // x23
  int32_t v21; // w24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v23; // x0
  int32_t imageIda; // [xsp+Ch] [xbp-54h] BYREF

  imageIda = imageId;
  if ( (byte_4A5A487 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1B885B0(&UIStandFigureRender_TypeInfo);
    sub_1B885B0(&StringLiteral_12936/*"StandFigureR("*/);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5A487 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v19);
  v20 = (UnityEngine_Component_o *)Instance;
  if ( isIgnoreFormChange )
  {
    v21 = 0;
  }
  else
  {
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    Instance = (StandFigureManager_o *)UIStandFigureRender__GetForm(imageId, 0, friendship, 0LL);
    v21 = (int)Instance;
  }
  if ( !v20
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v20, 0LL),
        v23 = System_Int32__ToString((int32_t)&imageIda, 0LL),
        Instance = (StandFigureManager_o *)System_String__Concat_61718292(
                                             (System_String_o *)StringLiteral_12936/*"StandFigureR("*/,
                                             v23,
                                             (System_String_o *)StringLiteral_814/*")"*/,
                                             0LL),
        !gameObject) )
  {
LABEL_12:
    sub_1B8880C(Instance, v18);
  }
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
  int32_t imageIda; // [xsp+Ch] [xbp-54h] BYREF

  imageIda = imageId;
  if ( (byte_4A5A488 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1B885B0(&StringLiteral_12936/*"StandFigureR("*/);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5A488 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance
    || (Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v16)) == 0LL
    || (v17 = (UIStandFigureR_o *)Instance,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL),
        v19 = System_Int32__ToString((int32_t)&imageIda, 0LL),
        Instance = (StandFigureManager_o *)System_String__Concat_61718292(
                                             (System_String_o *)StringLiteral_12936/*"StandFigureR("*/,
                                             v19,
                                             (System_String_o *)StringLiteral_814/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_1B8880C(Instance, v15);
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

  if ( (byte_4A5A497 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_12935/*"StandFigureR"*/);
    byte_4A5A497 = 1;
  }
  standFigureRPrefab = (Il2CppObject *)this->fields.standFigureRPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             standFigureRPrefab,
                                             (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v8 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  transform = UnityEngine_GameObject__get_transform(v8, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_12935/*"StandFigureR"*/, 0LL);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4A55CE7 )
  {
    sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
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
    sub_1B8880C(gameObject, v7);
  }
  UIStandFigureR__SetLayer((UIStandFigureR_o *)Component_object, (int32_t)gameObject, 0LL);
  UIStandFigureR__SetMaterial((UIStandFigureR_o *)Component_object, 0LL);
  return (UIStandFigureR_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_37977040(
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
  if ( (byte_4A5A498 & 1) == 0 )
  {
    sub_1B885B0(&UIStandFigureRender_TypeInfo);
    sub_1B885B0(&StringLiteral_12936/*"StandFigureR("*/);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5A498 = 1;
  }
  RenderLocal = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(
                                             this,
                                             parent,
                                             *(const MethodInfo **)&svtId);
  Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  if ( isIgnoreFormChange )
  {
    v22 = 0;
  }
  else
  {
    v23 = (int)Id;
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
    Id = (System_String_o *)UIStandFigureRender__GetForm(v23, 0, friendship, 0LL);
    v22 = (int)Id;
  }
  if ( !RenderLocal
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(RenderLocal, 0LL),
        v25 = System_Int32__ToString((int32_t)&v29, 0LL),
        v26 = System_Int32__ToString((int32_t)&v28, 0LL),
        Id = System_String__Concat_61720296(
               (System_String_o *)StringLiteral_12936/*"StandFigureR("*/,
               v25,
               v26,
               (System_String_o *)StringLiteral_814/*")"*/,
               0LL),
        !gameObject) )
  {
    sub_1B8880C(Id, v21);
  }
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_41041744(
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
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_37978556(
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
  int32_t v27; // [xsp+8h] [xbp-58h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-54h] BYREF

  v27 = imageLimitCount;
  v28 = svtId;
  if ( (byte_4A5A499 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12936/*"StandFigureR("*/);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5A499 = 1;
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
        Id = System_String__Concat_61720296(
               (System_String_o *)StringLiteral_12936/*"StandFigureR("*/,
               v24,
               v25,
               (System_String_o *)StringLiteral_814/*")"*/,
               0LL),
        !gameObject) )
  {
    sub_1B8880C(Id, v22);
  }
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_41041744(
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A5A484 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4A5A484 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  return StandFigureManager__CreateRenderLocal((StandFigureManager_o *)Instance, parent, v5);
}


UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_37976788(
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
  const MethodInfo *v20; // [xsp+10h] [xbp-70h]

  if ( (byte_4A5A485 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4A5A485 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_1B8880C(ImageLimitCount, v18);
  return StandFigureManager__CreateRenderLocal_37977040(
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
           v20);
}


UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_37977456(
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

  if ( (byte_4A5A486 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4A5A486 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v19);
  return StandFigureManager__CreateRenderLocal_37977040(
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


UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_37978368(
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

  if ( (byte_4A5A489 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4A5A489 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v20);
  return StandFigureManager__CreateRenderLocal_37978556(
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
  if ( (byte_4A5A496 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12934/*"StandFigureM("*/);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5A496 = 1;
  }
  v3 = System_Int32__ToString((int32_t)&v7, 0LL);
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  return System_String__Concat_61720296(
           (System_String_o *)StringLiteral_12934/*"StandFigureM("*/,
           v3,
           v4,
           (System_String_o *)StringLiteral_814/*")"*/,
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
  System_String_o *AssetName_37973776; // x20

  if ( (byte_4A5A47B & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    byte_4A5A47B = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_37973776 = StandFigureManager__GetAssetName_37973776(svtId, ImageLimitCount, v9);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_37973776, callback, 1, 0LL);
}


void __fastcall StandFigureManager__DownloadAsset_37974264(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_37973776; // x20

  if ( (byte_4A5A47C & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5A47C = 1;
  }
  AssetName_37973776 = StandFigureManager__GetAssetName_37973776(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_37973776, callback, 1, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        const MethodInfo *method)
{
  int32_t ImageLimitCount; // w20

  if ( (byte_4A5A477 & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&UIStandFigureRender_TypeInfo);
    byte_4A5A477 = 1;
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
  if ( (byte_4A5A47A & 1) == 0 )
  {
    sub_1B885B0(&UIStandFigureRender_TypeInfo);
    byte_4A5A47A = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName_41057032(svtId, imageLimitCount, formId, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName_37973776(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4A5A478 & 1) == 0 )
  {
    sub_1B885B0(&UIStandFigureRender_TypeInfo);
    byte_4A5A478 = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName_37973880(int32_t id, const MethodInfo *method)
{
  if ( (byte_4A5A479 & 1) == 0 )
  {
    sub_1B885B0(&UIStandFigureRender_TypeInfo);
    byte_4A5A479 = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName_41057800(id, 0LL);
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
      sub_1B8880C(standFigureCamera, v4);
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
  System_String_o *AssetName_37973776; // x20

  if ( (byte_4A5A47D & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    byte_4A5A47D = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_37973776 = StandFigureManager__GetAssetName_37973776(svtId, ImageLimitCount, v9);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_37973776, callback, 1, 0LL);
}


void __fastcall StandFigureManager__LoadAsset_37974580(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_37973776; // x20

  if ( (byte_4A5A47E & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5A47E = 1;
  }
  AssetName_37973776 = StandFigureManager__GetAssetName_37973776(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_37973776, callback, 1, 0LL);
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
    sub_1B88554(p_renderInfo, 0, v5, v6);
  }
}


void __fastcall StandFigureManager__Reboot(StandFigureManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0

  if ( (byte_4A5A492 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__);
    byte_4A5A492 = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1B8880C(0LL, method);
  if ( renderWaitList->fields._size >= 1 )
    System_Collections_Generic_Queue_object___Clear(
      renderWaitList,
      (const MethodInfo_366F52C *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
  this->fields.renderInfo = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.renderInfo, 0, v2, v3);
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
  System_String_o *AssetName_37973776; // x19

  if ( (byte_4A5A47F & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    byte_4A5A47F = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_37973776 = StandFigureManager__GetAssetName_37973776(svtId, ImageLimitCount, v7);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_37973776, 0LL);
}


void __fastcall StandFigureManager__ReleaseAsset_37974884(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  System_String_o *AssetName_37973776; // x19

  if ( (byte_4A5A480 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5A480 = 1;
  }
  AssetName_37973776 = StandFigureManager__GetAssetName_37973776(svtId, imageLimitCount, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_37973776, 0LL);
}


void __fastcall StandFigureManager__ReleaseCharaFigure(const MethodInfo *method)
{
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *v2; // x0
  __int64 v3; // x1
  UnityEngine_Object_o *klass; // x20

  if ( (byte_4A5A491 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_4A5A491 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
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
      sub_1B8880C(v2, v3);
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

  if ( (byte_4A5A48A & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1B885B0(&StandFigureRenderWaitStatus_TypeInfo);
    byte_4A5A48A = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v14 = (StandFigureRenderWaitStatus_o *)sub_1B887FC(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_37980676(v14, 0LL, Id, faceType, 0, 0, textureList, callback, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v16);
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

  if ( (byte_4A5A490 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1B885B0(&StandFigureRenderWaitStatus_TypeInfo);
    byte_4A5A490 = 1;
  }
  v13 = (StandFigureRenderWaitStatus_o *)sub_1B887FC(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_37980676(v13, renderTex, id, faceType, formId, 1, textureList, callback, v17);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v15);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v13, v16);
}


bool __fastcall StandFigureManager__RenderStart(StandFigureManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0
  Il2CppObject *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5A494 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__);
    byte_4A5A494 = 1;
  }
  if ( this->fields.renderInfo )
    return 0;
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1B8880C(0LL, method);
  if ( renderWaitList->fields._size < 1 )
    return 0;
  v5 = System_Collections_Generic_Queue_object___Dequeue(
         renderWaitList,
         (const MethodInfo_366F9FC *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__);
  this->fields.renderInfo = (struct StandFigureRenderWaitStatus_o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.renderInfo, (int32_t)v5, v6, v7);
  return 1;
}


void __fastcall StandFigureManager__Render_37979296(
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

  if ( (byte_4A5A48B & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1B885B0(&StandFigureRenderWaitStatus_TypeInfo);
    byte_4A5A48B = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v12 = (StandFigureRenderWaitStatus_o *)sub_1B887FC(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_37980676(v12, 0LL, Id, faceType, 0, 0, textureList, callback, v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v14);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v12, v15);
}


void __fastcall StandFigureManager__Render_37979516(
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

  if ( (byte_4A5A48C & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1B885B0(&StandFigureRenderWaitStatus_TypeInfo);
    byte_4A5A48C = 1;
  }
  v9 = (StandFigureRenderWaitStatus_o *)sub_1B887FC(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_37980676(v9, 0LL, id, faceType, 0, 0, textureList, callback, v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v11);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v9, v12);
}


void __fastcall StandFigureManager__Render_37979700(
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

  if ( (byte_4A5A48D & 1) == 0 )
  {
    sub_1B885B0(&ImageLimitCount_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1B885B0(&StandFigureRenderWaitStatus_TypeInfo);
    byte_4A5A48D = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v16 = (StandFigureRenderWaitStatus_o *)sub_1B887FC(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_37980676(v16, renderTex, Id, faceType, 0, 0, textureList, callback, v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v18);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v16, v19);
}


void __fastcall StandFigureManager__Render_37980016(
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

  if ( (byte_4A5A48E & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1B885B0(&StandFigureRenderWaitStatus_TypeInfo);
    byte_4A5A48E = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v14 = (StandFigureRenderWaitStatus_o *)sub_1B887FC(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_37980676(v14, renderTex, Id, faceType, 0, 0, textureList, callback, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v16);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v14, v17);
}


void __fastcall StandFigureManager__Render_37980240(
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

  if ( (byte_4A5A48F & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_1B885B0(&StandFigureRenderWaitStatus_TypeInfo);
    byte_4A5A48F = 1;
  }
  v13 = (StandFigureRenderWaitStatus_o *)sub_1B887FC(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_37980676(v13, renderTex, id, faceType, formId, 0, textureList, callback, v17);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v15);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v13, v16);
}