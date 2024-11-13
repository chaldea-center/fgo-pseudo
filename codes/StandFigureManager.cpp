void __fastcall StandFigureManager___ctor(StandFigureManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Queue_T__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B15506 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_StandFigureManager___ctor__, v7, v8);
    byte_4B15506 = 1;
  }
  v9 = (System_Collections_Generic_Queue_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
  System_Collections_Generic_Queue_object____ctor(
    v9,
    (const MethodInfo_3713DF0 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__);
  this->fields.renderWaitList = (struct System_Collections_Generic_Queue_StandFigureRenderWaitStatus__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.renderWaitList, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_StandFigureManager___ctor__);
}


void __fastcall StandFigureManager__AddRender(
        StandFigureManager_o *this,
        StandFigureRenderWaitStatus_o *info,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0

  if ( (byte_4B154FF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__, info, method);
    byte_4B154FF = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1BCAA3C(0LL, info);
  System_Collections_Generic_Queue_object___Enqueue(
    renderWaitList,
    (Il2CppObject *)info,
    (const MethodInfo_37143B8 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__);
}


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshLocal(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *standFigureMPrefab; // x20
  UnityEngine_GameObject_o *layer; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x22
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B15501 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___, parent, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_13093/*"StandFigureM"*/, v9, v10);
    byte_4B15501 = 1;
  }
  standFigureMPrefab = (Il2CppObject *)this->fields.standFigureMPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        standFigureMPrefab,
                                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_15;
  v14 = layer;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       layer,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___);
  transform = UnityEngine_GameObject__get_transform(v14, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  if ( !layer )
    goto LABEL_15;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v14, (System_String_o *)StringLiteral_13093/*"StandFigureM"*/, 0LL);
  if ( !parent )
    goto LABEL_15;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v21);
    byte_4B109C1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B109C7 )
  {
    sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v22, v23);
    byte_4B109C7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v26, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_object )
LABEL_15:
    sub_1BCAA3C(layer, v13);
  UIStandFigureRender__SetLayer((UIStandFigureRender_o *)Component_object, (int32_t)layer, 0LL);
  return (UIStandFigureM_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshLocal_38691728(
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
    sub_1BCAA3C(MeshLocal, v16);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)MeshLocal, 0LL);
  UIStandFigureM__SetCharacter_41758244(v17, svtId, imageLimitCount, faceType, callbackFunc, loadRequiredResource, 0LL);
  UIStandFigureRender__SetDepth((UIStandFigureRender_o *)v17, (float)panelDepth, 0LL);
  return v17;
}


UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B154ED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, method, v2);
    byte_4B154ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  return StandFigureManager__CreateMeshLocal((StandFigureManager_o *)Instance, parent, v6);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_38691500(
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
  __int64 v16; // x1
  Il2CppObject *Instance; // x25
  __int64 ImageLimitCount; // x0
  __int64 v19; // x1
  const MethodInfo *v21; // [xsp+0h] [xbp-60h]

  if ( (byte_4B154EE & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v14, v15);
    byte_4B154EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v16);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_1BCAA3C(ImageLimitCount, v19);
  return StandFigureManager__CreateMeshLocal_38691728(
           (StandFigureManager_o *)Instance,
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
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_38691908(
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

  if ( (byte_4B154EF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&imageLimitCount);
    byte_4B154EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v16);
  return StandFigureManager__CreateMeshLocal_38691728(
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  StandFigureManager_o *Instance; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  UnityEngine_Component_o *v26; // x23
  int32_t v27; // w24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v29; // x0
  int32_t imageIda; // [xsp+Ch] [xbp-54h] BYREF

  imageIda = imageId;
  if ( (byte_4B154F3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__,
      *(_QWORD *)&imageId,
      *(_QWORD *)&offsetKind);
    sub_1BCA7E0(&UIStandFigureRender_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_13096/*"StandFigureR("*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v21, v22);
    byte_4B154F3 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v25);
  v26 = (UnityEngine_Component_o *)Instance;
  if ( isIgnoreFormChange )
  {
    v27 = 0;
  }
  else
  {
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v24);
    Instance = (StandFigureManager_o *)UIStandFigureRender__GetForm(imageId, 0, friendship, 0LL);
    v27 = (int)Instance;
  }
  if ( !v26
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v26, 0LL),
        v29 = System_Int32__ToString((int32_t)&imageIda, 0LL),
        Instance = (StandFigureManager_o *)System_String__Concat_62412480(
                                             (System_String_o *)StringLiteral_13096/*"StandFigureR("*/,
                                             v29,
                                             (System_String_o *)StringLiteral_809/*")"*/,
                                             0LL),
        !gameObject) )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v24);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
  UIStandFigureR__SetCharacterForImageId(
    (UIStandFigureR_o *)v26,
    imageIda,
    offsetKind,
    faceType,
    v27,
    callbackFunc,
    0,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)v26, depth, 0LL);
  return (UIStandFigureR_o *)v26;
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  StandFigureManager_o *Instance; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  UIStandFigureR_o *v21; // x24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v23; // x0
  int32_t imageIda; // [xsp+Ch] [xbp-54h] BYREF

  imageIda = imageId;
  if ( (byte_4B154F4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__,
      *(_QWORD *)&imageId,
      *(_QWORD *)&formId);
    sub_1BCA7E0(&StringLiteral_13096/*"StandFigureR("*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v16, v17);
    byte_4B154F4 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance
    || (Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v20)) == 0LL
    || (v21 = (UIStandFigureR_o *)Instance,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL),
        v23 = System_Int32__ToString((int32_t)&imageIda, 0LL),
        Instance = (StandFigureManager_o *)System_String__Concat_62412480(
                                             (System_String_o *)StringLiteral_13096/*"StandFigureR("*/,
                                             v23,
                                             (System_String_o *)StringLiteral_809/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_1BCAA3C(Instance, v19);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Instance, 0LL);
  UIStandFigureR__SetCharacterForImageId(v21, imageIda, offsetKind, faceType, formId, callbackFunc, 0, 0LL);
  UIStandFigureR__SetDepth(v21, depth, 0LL);
  return v21;
}


UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal(
        StandFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *standFigureRPrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x22
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B15503 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___, parent, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_13095/*"StandFigureR"*/, v9, v10);
    byte_4B15503 = 1;
  }
  standFigureRPrefab = (Il2CppObject *)this->fields.standFigureRPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             standFigureRPrefab,
                                             (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v14 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  transform = UnityEngine_GameObject__get_transform(v14, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v14, (System_String_o *)StringLiteral_13095/*"StandFigureR"*/, 0LL);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v21);
    byte_4B109C1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B109C7 )
  {
    sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v22, v23);
    byte_4B109C7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v26, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL), !Component_object) )
  {
LABEL_16:
    sub_1BCAA3C(gameObject, v13);
  }
  UIStandFigureR__SetLayer((UIStandFigureR_o *)Component_object, (int32_t)gameObject, 0LL);
  UIStandFigureR__SetMaterial((UIStandFigureR_o *)Component_object, 0LL);
  return (UIStandFigureR_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_38692944(
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
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Component_o *RenderLocal; // x23
  System_String_o *Id; // x0
  __int64 v25; // x1
  int32_t v26; // w24
  int32_t v27; // w24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v29; // x26
  System_String_o *v30; // x0
  int32_t v32; // [xsp+8h] [xbp-58h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-54h] BYREF

  v32 = imageLimitCount;
  v33 = svtId;
  if ( (byte_4B15504 & 1) == 0 )
  {
    sub_1BCA7E0(&UIStandFigureRender_TypeInfo, parent, *(_QWORD *)&svtId);
    sub_1BCA7E0(&StringLiteral_13096/*"StandFigureR("*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v21, v22);
    byte_4B15504 = 1;
  }
  RenderLocal = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(
                                             this,
                                             parent,
                                             *(const MethodInfo **)&svtId);
  Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  if ( isIgnoreFormChange )
  {
    v26 = 0;
  }
  else
  {
    v27 = (int)Id;
    if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v25);
    Id = (System_String_o *)UIStandFigureRender__GetForm(v27, 0, friendship, 0LL);
    v26 = (int)Id;
  }
  if ( !RenderLocal
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(RenderLocal, 0LL),
        v29 = System_Int32__ToString((int32_t)&v33, 0LL),
        v30 = System_Int32__ToString((int32_t)&v32, 0LL),
        Id = System_String__Concat_62414484(
               (System_String_o *)StringLiteral_13096/*"StandFigureR("*/,
               v29,
               v30,
               (System_String_o *)StringLiteral_809/*")"*/,
               0LL),
        !gameObject) )
  {
    sub_1BCAA3C(Id, v25);
  }
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_41769072(
    (UIStandFigureR_o *)RenderLocal,
    v33,
    v32,
    offsetKind,
    faceType,
    v26,
    callbackFunc,
    0LL);
  UIStandFigureR__SetDepth((UIStandFigureR_o *)RenderLocal, depth, 0LL);
  return (UIStandFigureR_o *)RenderLocal;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_38694460(
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
  __int64 v21; // x2
  UnityEngine_Component_o *RenderLocal; // x23
  System_String_o *Id; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *v26; // x25
  System_String_o *v27; // x0
  int32_t v29; // [xsp+8h] [xbp-58h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-54h] BYREF

  v29 = imageLimitCount;
  v30 = svtId;
  if ( (byte_4B15505 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13096/*"StandFigureR("*/, parent, *(_QWORD *)&svtId);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v20, v21);
    byte_4B15505 = 1;
  }
  RenderLocal = (UnityEngine_Component_o *)StandFigureManager__CreateRenderLocal(
                                             this,
                                             parent,
                                             *(const MethodInfo **)&svtId);
  Id = (System_String_o *)ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  if ( !RenderLocal
    || (gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(RenderLocal, 0LL),
        v26 = System_Int32__ToString((int32_t)&v30, 0LL),
        v27 = System_Int32__ToString((int32_t)&v29, 0LL),
        Id = System_String__Concat_62414484(
               (System_String_o *)StringLiteral_13096/*"StandFigureR("*/,
               v26,
               v27,
               (System_String_o *)StringLiteral_809/*")"*/,
               0LL),
        !gameObject) )
  {
    sub_1BCAA3C(Id, v24);
  }
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_41769072(
    (UIStandFigureR_o *)RenderLocal,
    v30,
    v29,
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B154F0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, method, v2);
    byte_4B154F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  return StandFigureManager__CreateRenderLocal((StandFigureManager_o *)Instance, parent, v6);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_38692692(
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
  __int64 v18; // x1
  Il2CppObject *Instance; // x26
  __int64 ImageLimitCount; // x0
  __int64 v21; // x1
  const MethodInfo *v23; // [xsp+10h] [xbp-70h]

  if ( (byte_4B154F1 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v16, v17);
    byte_4B154F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, v18);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_1BCAA3C(ImageLimitCount, v21);
  return StandFigureManager__CreateRenderLocal_38692944(
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
           v23);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_38693360(
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

  if ( (byte_4B154F2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&imageLimitCount);
    byte_4B154F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v19);
  return StandFigureManager__CreateRenderLocal_38692944(
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
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_38694272(
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

  if ( (byte_4B154F5 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&imageLimitCount);
    byte_4B154F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v20);
  return StandFigureManager__CreateRenderLocal_38694460(
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
  __int64 v4; // x2
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  int32_t v8; // [xsp+8h] [xbp-28h] BYREF
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v8 = imageLimitCount;
  v9 = svtId;
  if ( (byte_4B15502 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13094/*"StandFigureM("*/, *(_QWORD *)&imageLimitCount, method);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v3, v4);
    byte_4B15502 = 1;
  }
  v5 = System_Int32__ToString((int32_t)&v9, 0LL);
  v6 = System_Int32__ToString((int32_t)&v8, 0LL);
  return System_String__Concat_62414484(
           (System_String_o *)StringLiteral_13094/*"StandFigureM("*/,
           v5,
           v6,
           (System_String_o *)StringLiteral_809/*")"*/,
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
  __int64 v9; // x2
  int32_t ImageLimitCount; // w0
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  System_String_o *AssetName_38689680; // x20

  if ( (byte_4B154E7 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&lv);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v8, v9);
    byte_4B154E7 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_38689680 = StandFigureManager__GetAssetName_38689680(svtId, ImageLimitCount, v11);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12);
  AssetManager__downloadAssetStorage(AssetName_38689680, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__DownloadAsset_38690168(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *AssetName_38689680; // x20

  if ( (byte_4B154E8 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount, callback);
    byte_4B154E8 = 1;
  }
  AssetName_38689680 = StandFigureManager__GetAssetName_38689680(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
  AssetManager__downloadAssetStorage(AssetName_38689680, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StandFigureManager__GetAssetName(
        int32_t svtId,
        int32_t limitCount,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  int32_t ImageLimitCount; // w20

  if ( (byte_4B154E3 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&lv);
    sub_1BCA7E0(&UIStandFigureRender_TypeInfo, v6, v7);
    byte_4B154E3 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, v8);
  return UIStandFigureRender__GetAssetName(svtId, ImageLimitCount, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StandFigureManager__GetAssetNameByForm(
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t formId,
        const MethodInfo *method)
{
  if ( (byte_4B154E6 & 1) == 0 )
  {
    sub_1BCA7E0(&UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount, *(_QWORD *)&formId);
    byte_4B154E6 = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount);
  return UIStandFigureRender__GetAssetName_41784252(svtId, imageLimitCount, formId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StandFigureManager__GetAssetName_38689680(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4B154E4 & 1) == 0 )
  {
    sub_1BCA7E0(&UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount, method);
    byte_4B154E4 = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount);
  return UIStandFigureRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName_38689784(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B154E5 & 1) == 0 )
  {
    sub_1BCA7E0(&UIStandFigureRender_TypeInfo, method, v2);
    byte_4B154E5 = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo, method);
  return UIStandFigureRender__GetAssetName_41785020(id, 0LL);
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
      sub_1BCAA3C(standFigureCamera, v4);
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
  __int64 v9; // x2
  int32_t ImageLimitCount; // w0
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  System_String_o *AssetName_38689680; // x20

  if ( (byte_4B154E9 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&lv);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v8, v9);
    byte_4B154E9 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_38689680 = StandFigureManager__GetAssetName_38689680(svtId, ImageLimitCount, v11);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12);
  AssetManager__loadAssetStorage(AssetName_38689680, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__LoadAsset_38690484(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *AssetName_38689680; // x20

  if ( (byte_4B154EA & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount, callback);
    byte_4B154EA = 1;
  }
  AssetName_38689680 = StandFigureManager__GetAssetName_38689680(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
  AssetManager__loadAssetStorage(AssetName_38689680, callback, 1, 0LL);
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
    sub_1BCA784(p_renderInfo, 0LL, v5, v6, v7, v8, v9, v10);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0

  if ( (byte_4B154FE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__, v9, v10);
    byte_4B154FE = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1BCAA3C(0LL, method);
  if ( renderWaitList->fields._size >= 1 )
    System_Collections_Generic_Queue_object___Clear(
      renderWaitList,
      (const MethodInfo_3714078 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
  this->fields.renderInfo = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.renderInfo, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v7; // x2
  int32_t ImageLimitCount; // w0
  const MethodInfo *v9; // x2
  __int64 v10; // x1
  System_String_o *AssetName_38689680; // x19

  if ( (byte_4B154EB & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&lv);
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, v6, v7);
    byte_4B154EB = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_38689680 = StandFigureManager__GetAssetName_38689680(svtId, ImageLimitCount, v9);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10);
  AssetManager__releaseAssetStorage(AssetName_38689680, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__ReleaseAsset_38690788(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *AssetName_38689680; // x19

  if ( (byte_4B154EC & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount, method);
    byte_4B154EC = 1;
  }
  AssetName_38689680 = StandFigureManager__GetAssetName_38689680(svtId, imageLimitCount, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
  AssetManager__releaseAssetStorage(AssetName_38689680, 0LL);
}


void __fastcall StandFigureManager__ReleaseCharaFigure(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *klass; // x20

  if ( (byte_4B154FD & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v3, v4);
    byte_4B154FD = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = (UnityEngine_Object_c *)UnityEngine_Object__op_Inequality(Instance, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    if ( !Instance )
      goto LABEL_13;
    klass = (UnityEngine_Object_o *)Instance[2].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
    {
      v7 = Instance[2].klass;
      if ( v7 )
      {
        UIStandFigureRender__ReleaseCharacter((UIStandFigureRender_o *)v7, 0LL);
        return;
      }
LABEL_13:
      sub_1BCAA3C(v7, v8);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t ImageLimitCount; // w0
  int32_t Id; // w23
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  StandFigureRenderWaitStatus_o *v21; // x22
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // [xsp+0h] [xbp-50h]

  if ( (byte_4B154F6 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount, *(_QWORD *)&lv);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&StandFigureRenderWaitStatus_TypeInfo, v14, v15);
    byte_4B154F6 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v21 = (StandFigureRenderWaitStatus_o *)sub_1BCAA2C(StandFigureRenderWaitStatus_TypeInfo, v18, v19, v20);
  StandFigureRenderWaitStatus___ctor_38696580(v21, 0LL, Id, faceType, 0, 0, textureList, callback, v25);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v23);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v21, v24);
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
  __int64 v14; // x2
  StandFigureRenderWaitStatus_o *v15; // x25
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // [xsp+0h] [xbp-60h]

  if ( (byte_4B154FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&id, *(_QWORD *)&faceType);
    sub_1BCA7E0(&StandFigureRenderWaitStatus_TypeInfo, v13, v14);
    byte_4B154FC = 1;
  }
  v15 = (StandFigureRenderWaitStatus_o *)sub_1BCAA2C(
                                           StandFigureRenderWaitStatus_TypeInfo,
                                           *(_QWORD *)&id,
                                           *(_QWORD *)&faceType,
                                           *(_QWORD *)&formId);
  StandFigureRenderWaitStatus___ctor_38696580(v15, renderTex, id, faceType, formId, 1, textureList, callback, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v17);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v15, v18);
}


bool __fastcall StandFigureManager__RenderStart(StandFigureManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0
  Il2CppObject *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B15500 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__, v4, v5);
    byte_4B15500 = 1;
  }
  if ( this->fields.renderInfo )
    return 0;
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1BCAA3C(0LL, method);
  if ( renderWaitList->fields._size < 1 )
    return 0;
  v8 = System_Collections_Generic_Queue_object___Dequeue(
         renderWaitList,
         (const MethodInfo_3714548 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__);
  this->fields.renderInfo = (struct StandFigureRenderWaitStatus_o *)v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.renderInfo, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_38695200(
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  int32_t Id; // w23
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  StandFigureRenderWaitStatus_o *v17; // x22
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // [xsp+0h] [xbp-60h]

  if ( (byte_4B154F7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__,
      *(_QWORD *)&imageLimitCount,
      *(_QWORD *)&faceType);
    sub_1BCA7E0(&StandFigureRenderWaitStatus_TypeInfo, v11, v12);
    byte_4B154F7 = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v17 = (StandFigureRenderWaitStatus_o *)sub_1BCAA2C(StandFigureRenderWaitStatus_TypeInfo, v14, v15, v16);
  StandFigureRenderWaitStatus___ctor_38696580(v17, 0LL, Id, faceType, 0, 0, textureList, callback, v21);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v19);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v17, v20);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_38695420(
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  StandFigureRenderWaitStatus_o *v11; // x23
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // [xsp+0h] [xbp-50h]

  if ( (byte_4B154F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&faceType, textureList);
    sub_1BCA7E0(&StandFigureRenderWaitStatus_TypeInfo, v9, v10);
    byte_4B154F8 = 1;
  }
  v11 = (StandFigureRenderWaitStatus_o *)sub_1BCAA2C(
                                           StandFigureRenderWaitStatus_TypeInfo,
                                           *(_QWORD *)&faceType,
                                           textureList,
                                           callback);
  StandFigureRenderWaitStatus___ctor_38696580(v11, 0LL, id, faceType, 0, 0, textureList, callback, v15);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v13);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v11, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_38695604(
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int32_t ImageLimitCount; // w0
  int32_t Id; // w24
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  StandFigureRenderWaitStatus_o *v23; // x23
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // [xsp+0h] [xbp-60h]

  if ( (byte_4B154F9 & 1) == 0 )
  {
    sub_1BCA7E0(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v14, v15);
    sub_1BCA7E0(&StandFigureRenderWaitStatus_TypeInfo, v16, v17);
    byte_4B154F9 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v23 = (StandFigureRenderWaitStatus_o *)sub_1BCAA2C(StandFigureRenderWaitStatus_TypeInfo, v20, v21, v22);
  StandFigureRenderWaitStatus___ctor_38696580(v23, renderTex, Id, faceType, 0, 0, textureList, callback, v27);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v25);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v23, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_38695920(
        UnityEngine_RenderTexture_o *renderTex,
        int32_t svtId,
        int32_t imageLimitCount,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t Id; // w24
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  StandFigureRenderWaitStatus_o *v19; // x23
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // [xsp+0h] [xbp-60h]

  if ( (byte_4B154FA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&imageLimitCount);
    sub_1BCA7E0(&StandFigureRenderWaitStatus_TypeInfo, v13, v14);
    byte_4B154FA = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v19 = (StandFigureRenderWaitStatus_o *)sub_1BCAA2C(StandFigureRenderWaitStatus_TypeInfo, v16, v17, v18);
  StandFigureRenderWaitStatus___ctor_38696580(v19, renderTex, Id, faceType, 0, 0, textureList, callback, v23);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v21);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v19, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_38696144(
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        int32_t formId,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  StandFigureRenderWaitStatus_o *v15; // x25
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // [xsp+0h] [xbp-60h]

  if ( (byte_4B154FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&id, *(_QWORD *)&faceType);
    sub_1BCA7E0(&StandFigureRenderWaitStatus_TypeInfo, v13, v14);
    byte_4B154FB = 1;
  }
  v15 = (StandFigureRenderWaitStatus_o *)sub_1BCAA2C(
                                           StandFigureRenderWaitStatus_TypeInfo,
                                           *(_QWORD *)&id,
                                           *(_QWORD *)&faceType,
                                           *(_QWORD *)&formId);
  StandFigureRenderWaitStatus___ctor_38696580(v15, renderTex, id, faceType, formId, 0, textureList, callback, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v17);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v15, v18);
}