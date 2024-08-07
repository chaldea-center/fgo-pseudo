void __fastcall StandFigureManager___ctor(StandFigureManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Queue_T__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FDE7A & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__, method);
    sub_1B64A00(&System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo, v3);
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager___ctor__, v4);
    byte_49FDE7A = 1;
  }
  v5 = (System_Collections_Generic_Queue_T__o *)sub_1B64C4C(System_Collections_Generic_Queue_StandFigureRenderWaitStatus__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v5,
    (const MethodInfo_3624E10 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus___ctor__);
  this->fields.renderWaitList = (struct System_Collections_Generic_Queue_StandFigureRenderWaitStatus__o *)v5;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.renderWaitList, (int32_t)v5, v6, v7);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EED48 *)Method_SingletonMonoBehaviour_StandFigureManager___ctor__);
}


void __fastcall StandFigureManager__AddRender(
        StandFigureManager_o *this,
        StandFigureRenderWaitStatus_o *info,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0

  if ( (byte_49FDE73 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__, info);
    byte_49FDE73 = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1B64C5C(0LL, info);
  System_Collections_Generic_Queue_object___Enqueue(
    renderWaitList,
    (Il2CppObject *)info,
    (const MethodInfo_36253D8 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Enqueue__);
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

  if ( (byte_49FDE75 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___, parent);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_12874/*"StandFigureM"*/, v7);
    byte_49FDE75 = 1;
  }
  standFigureMPrefab = (Il2CppObject *)this->fields.standFigureMPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        standFigureMPrefab,
                                        (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_15;
  v11 = layer;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       layer,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureM___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !layer )
    goto LABEL_15;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_12874/*"StandFigureM"*/, 0LL);
  if ( !parent )
    goto LABEL_15;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0LL);
  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49F9821 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_49F9827 )
  {
    sub_1B64A00(&UnityEngine_Quaternion_TypeInfo, v18);
    byte_49F9827 = 1;
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
    sub_1B64C5C(layer, v10);
  UIStandFigureRender__SetLayer((UIStandFigureRender_o *)Component_object, (int32_t)layer, 0LL);
  return (UIStandFigureM_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshLocal_37665888(
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
    sub_1B64C5C(MeshLocal, v16);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)MeshLocal, 0LL);
  UIStandFigureM__SetCharacter_40628576(v17, svtId, imageLimitCount, faceType, callbackFunc, loadRequiredResource, 0LL);
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

  if ( (byte_49FDE61 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, method);
    byte_49FDE61 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v4);
  return StandFigureManager__CreateMeshLocal((StandFigureManager_o *)Instance, parent, v5);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_37665660(
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

  if ( (byte_49FDE62 & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v14);
    byte_49FDE62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_1B64C5C(ImageLimitCount, v17);
  return StandFigureManager__CreateMeshLocal_37665888(
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
UIStandFigureM_o *__fastcall StandFigureManager__CreateMeshPrefab_37666068(
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

  if ( (byte_49FDE63 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    byte_49FDE63 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v16);
  return StandFigureManager__CreateMeshLocal_37665888(
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
  if ( (byte_49FDE67 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&imageId);
    sub_1B64A00(&UIStandFigureRender_TypeInfo, v17);
    sub_1B64A00(&StringLiteral_12877/*"StandFigureR("*/, v18);
    sub_1B64A00(&StringLiteral_815/*")"*/, v19);
    byte_49FDE67 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
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
        Instance = (StandFigureManager_o *)System_String__Concat_61396396(
                                             (System_String_o *)StringLiteral_12877/*"StandFigureR("*/,
                                             v26,
                                             (System_String_o *)StringLiteral_815/*")"*/,
                                             0LL),
        !gameObject) )
  {
LABEL_12:
    sub_1B64C5C(Instance, v21);
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
  if ( (byte_49FDE68 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&imageId);
    sub_1B64A00(&StringLiteral_12877/*"StandFigureR("*/, v14);
    sub_1B64A00(&StringLiteral_815/*")"*/, v15);
    byte_49FDE68 = 1;
  }
  Instance = (StandFigureManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance
    || (Instance = (StandFigureManager_o *)StandFigureManager__CreateRenderLocal(Instance, parent, v18)) == 0LL
    || (v19 = (UIStandFigureR_o *)Instance,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Instance,
                                               0LL),
        v21 = System_Int32__ToString((int32_t)&imageIda, 0LL),
        Instance = (StandFigureManager_o *)System_String__Concat_61396396(
                                             (System_String_o *)StringLiteral_12877/*"StandFigureR("*/,
                                             v21,
                                             (System_String_o *)StringLiteral_815/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_1B64C5C(Instance, v17);
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

  if ( (byte_49FDE77 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___, parent);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_12876/*"StandFigureR"*/, v7);
    byte_49FDE77 = 1;
  }
  standFigureRPrefab = (Il2CppObject *)this->fields.standFigureRPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             standFigureRPrefab,
                                             (const MethodInfo_2EBE594 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v11 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_UIStandFigureR___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_12876/*"StandFigureR"*/, 0LL);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49F9821 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_49F9827 )
  {
    sub_1B64A00(&UnityEngine_Quaternion_TypeInfo, v18);
    byte_49F9827 = 1;
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
    sub_1B64C5C(gameObject, v10);
  }
  UIStandFigureR__SetLayer((UIStandFigureR_o *)Component_object, (int32_t)gameObject, 0LL);
  UIStandFigureR__SetMaterial((UIStandFigureR_o *)Component_object, 0LL);
  return (UIStandFigureR_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_37667104(
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
  if ( (byte_49FDE78 & 1) == 0 )
  {
    sub_1B64A00(&UIStandFigureRender_TypeInfo, parent);
    sub_1B64A00(&StringLiteral_12877/*"StandFigureR("*/, v19);
    sub_1B64A00(&StringLiteral_815/*")"*/, v20);
    byte_49FDE78 = 1;
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
        Id = System_String__Concat_61398400(
               (System_String_o *)StringLiteral_12877/*"StandFigureR("*/,
               v27,
               v28,
               (System_String_o *)StringLiteral_815/*")"*/,
               0LL),
        !gameObject) )
  {
    sub_1B64C5C(Id, v23);
  }
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_40646976(
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
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderLocal_37668424(
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
  if ( (byte_49FDE79 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_12877/*"StandFigureR("*/, parent);
    sub_1B64A00(&StringLiteral_815/*")"*/, v20);
    byte_49FDE79 = 1;
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
        Id = System_String__Concat_61398400(
               (System_String_o *)StringLiteral_12877/*"StandFigureR("*/,
               v25,
               v26,
               (System_String_o *)StringLiteral_815/*")"*/,
               0LL),
        !gameObject) )
  {
    sub_1B64C5C(Id, v23);
  }
  UnityEngine_Object__set_name(gameObject, Id, 0LL);
  UIStandFigureR__SetCharacter_40646976(
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

  if ( (byte_49FDE64 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, method);
    byte_49FDE64 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v4);
  return StandFigureManager__CreateRenderLocal((StandFigureManager_o *)Instance, parent, v5);
}


// local variable allocation has failed, the output may be wrong!
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_37612660(
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

  if ( (byte_49FDE66 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    byte_49FDE66 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v19);
  return StandFigureManager__CreateRenderLocal_37667104(
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
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_37666852(
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

  if ( (byte_49FDE65 & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v16);
    byte_49FDE65 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  if ( !Instance )
    sub_1B64C5C(ImageLimitCount, v19);
  return StandFigureManager__CreateRenderLocal_37667104(
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
UIStandFigureR_o *__fastcall StandFigureManager__CreateRenderPrefab_37668236(
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

  if ( (byte_49FDE69 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    byte_49FDE69 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v20);
  return StandFigureManager__CreateRenderLocal_37668424(
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
  if ( (byte_49FDE76 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_12875/*"StandFigureM("*/, *(_QWORD *)&imageLimitCount);
    sub_1B64A00(&StringLiteral_815/*")"*/, v3);
    byte_49FDE76 = 1;
  }
  v4 = System_Int32__ToString((int32_t)&v8, 0LL);
  v5 = System_Int32__ToString((int32_t)&v7, 0LL);
  return System_String__Concat_61398400(
           (System_String_o *)StringLiteral_12875/*"StandFigureM("*/,
           v4,
           v5,
           (System_String_o *)StringLiteral_815/*")"*/,
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
  System_String_o *AssetName_37663840; // x20

  if ( (byte_49FDE5B & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v8);
    byte_49FDE5B = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_37663840 = StandFigureManager__GetAssetName_37663840(svtId, ImageLimitCount, v10);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_37663840, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__DownloadAsset_37664328(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_37663840; // x20

  if ( (byte_49FDE5C & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_49FDE5C = 1;
  }
  AssetName_37663840 = StandFigureManager__GetAssetName_37663840(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName_37663840, callback, 1, 0LL);
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

  if ( (byte_49FDE57 & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B64A00(&UIStandFigureRender_TypeInfo, v6);
    byte_49FDE57 = 1;
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
  if ( (byte_49FDE5A & 1) == 0 )
  {
    sub_1B64A00(&UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_49FDE5A = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName_40659260(svtId, imageLimitCount, formId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall StandFigureManager__GetAssetName_37663840(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  if ( (byte_49FDE58 & 1) == 0 )
  {
    sub_1B64A00(&UIStandFigureRender_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_49FDE58 = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall StandFigureManager__GetAssetName_37663944(int32_t id, const MethodInfo *method)
{
  if ( (byte_49FDE59 & 1) == 0 )
  {
    sub_1B64A00(&UIStandFigureRender_TypeInfo, method);
    byte_49FDE59 = 1;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  return UIStandFigureRender__GetAssetName_40660028(id, 0LL);
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
      sub_1B64C5C(standFigureCamera, v4);
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
  System_String_o *AssetName_37663840; // x20

  if ( (byte_49FDE5D & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v8);
    byte_49FDE5D = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_37663840 = StandFigureManager__GetAssetName_37663840(svtId, ImageLimitCount, v10);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_37663840, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__LoadAsset_37664644(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName_37663840; // x20

  if ( (byte_49FDE5E & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_49FDE5E = 1;
  }
  AssetName_37663840 = StandFigureManager__GetAssetName_37663840(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName_37663840, callback, 1, 0LL);
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
    sub_1B649A4(p_renderInfo, 0, v5, v6);
  }
}


void __fastcall StandFigureManager__Reboot(StandFigureManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0

  if ( (byte_49FDE72 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__, method);
    sub_1B64A00(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__, v5);
    byte_49FDE72 = 1;
  }
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1B64C5C(0LL, method);
  if ( renderWaitList->fields._size >= 1 )
    System_Collections_Generic_Queue_object___Clear(
      renderWaitList,
      (const MethodInfo_3625098 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Clear__);
  this->fields.renderInfo = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.renderInfo, 0, v2, v3);
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
  System_String_o *AssetName_37663840; // x19

  if ( (byte_49FDE5F & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v6);
    byte_49FDE5F = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  AssetName_37663840 = StandFigureManager__GetAssetName_37663840(svtId, ImageLimitCount, v8);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_37663840, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__ReleaseAsset_37664948(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  System_String_o *AssetName_37663840; // x19

  if ( (byte_49FDE60 & 1) == 0 )
  {
    sub_1B64A00(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_49FDE60 = 1;
  }
  AssetName_37663840 = StandFigureManager__GetAssetName_37663840(svtId, imageLimitCount, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName_37663840, 0LL);
}


void __fastcall StandFigureManager__ReleaseCharaFigure(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UnityEngine_Object_o *Instance; // x19
  UnityEngine_Object_c *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *klass; // x20

  if ( (byte_49FDE71 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v1);
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v2);
    byte_49FDE71 = 1;
  }
  Instance = (UnityEngine_Object_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
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
      sub_1B64C5C(v4, v5);
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

  if ( (byte_49FDE6A & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, *(_QWORD *)&limitCount);
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v12);
    sub_1B64A00(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_49FDE6A = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v16 = (StandFigureRenderWaitStatus_o *)sub_1B64C4C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_37670544(v16, 0LL, Id, faceType, 0, 0, textureList, callback, v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v18);
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

  if ( (byte_49FDE70 & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&id);
    sub_1B64A00(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_49FDE70 = 1;
  }
  v14 = (StandFigureRenderWaitStatus_o *)sub_1B64C4C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_37670544(v14, renderTex, id, faceType, formId, 1, textureList, callback, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v16);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v14, v17);
}


bool __fastcall StandFigureManager__RenderStart(StandFigureManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Queue_T__o *renderWaitList; // x0
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FDE74 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__, method);
    sub_1B64A00(&Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__get_Count__, v3);
    byte_49FDE74 = 1;
  }
  if ( this->fields.renderInfo )
    return 0;
  renderWaitList = (System_Collections_Generic_Queue_T__o *)this->fields.renderWaitList;
  if ( !renderWaitList )
    sub_1B64C5C(0LL, method);
  if ( renderWaitList->fields._size < 1 )
    return 0;
  v6 = System_Collections_Generic_Queue_object___Dequeue(
         renderWaitList,
         (const MethodInfo_3625568 *)Method_System_Collections_Generic_Queue_StandFigureRenderWaitStatus__Dequeue__);
  this->fields.renderInfo = (struct StandFigureRenderWaitStatus_o *)v6;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.renderInfo, (int32_t)v6, v7, v8);
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_37669164(
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

  if ( (byte_49FDE6B & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&imageLimitCount);
    sub_1B64A00(&StandFigureRenderWaitStatus_TypeInfo, v11);
    byte_49FDE6B = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v13 = (StandFigureRenderWaitStatus_o *)sub_1B64C4C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_37670544(v13, 0LL, Id, faceType, 0, 0, textureList, callback, v17);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v15);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v13, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_37669384(
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

  if ( (byte_49FDE6C & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&faceType);
    sub_1B64A00(&StandFigureRenderWaitStatus_TypeInfo, v9);
    byte_49FDE6C = 1;
  }
  v10 = (StandFigureRenderWaitStatus_o *)sub_1B64C4C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_37670544(v10, 0LL, id, faceType, 0, 0, textureList, callback, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v12);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v10, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_37669568(
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

  if ( (byte_49FDE6D & 1) == 0 )
  {
    sub_1B64A00(&ImageLimitCount_TypeInfo, *(_QWORD *)&svtId);
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, v14);
    sub_1B64A00(&StandFigureRenderWaitStatus_TypeInfo, v15);
    byte_49FDE6D = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  ImageLimitCount = ImageLimitCount__GetImageLimitCount(svtId, limitCount, 0LL);
  Id = ServantScriptMaster__getId(svtId, ImageLimitCount, 0LL);
  v18 = (StandFigureRenderWaitStatus_o *)sub_1B64C4C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_37670544(v18, renderTex, Id, faceType, 0, 0, textureList, callback, v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v20);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v18, v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_37669884(
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

  if ( (byte_49FDE6E & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&svtId);
    sub_1B64A00(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_49FDE6E = 1;
  }
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0LL);
  v15 = (StandFigureRenderWaitStatus_o *)sub_1B64C4C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_37670544(v15, renderTex, Id, faceType, 0, 0, textureList, callback, v19);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v17);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v15, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureManager__Render_37670108(
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

  if ( (byte_49FDE6F & 1) == 0 )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__, *(_QWORD *)&id);
    sub_1B64A00(&StandFigureRenderWaitStatus_TypeInfo, v13);
    byte_49FDE6F = 1;
  }
  v14 = (StandFigureRenderWaitStatus_o *)sub_1B64C4C(StandFigureRenderWaitStatus_TypeInfo);
  StandFigureRenderWaitStatus___ctor_37670544(v14, renderTex, id, faceType, formId, 0, textureList, callback, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v16);
  StandFigureManager__AddRender((StandFigureManager_o *)Instance, v14, v17);
}