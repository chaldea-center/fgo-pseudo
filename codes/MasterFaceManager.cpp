void MasterFaceManager___ctor(MasterFaceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C55EB0 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
    byte_4C55EB0 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39FFA90 *)Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
}


UIMasterFaceTexture_o *MasterFaceManager__CreateLocal(
        MasterFaceManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *masterFacePrefab; // x20
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

  if ( (byte_4C55EAE & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_14753/*"UIMasterFace"*/);
    byte_4C55EAE = 1;
  }
  masterFacePrefab = (Il2CppObject *)this->fields.masterFacePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFacePrefab,
                                             (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v8 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
  transform = UnityEngine_GameObject__get_transform(v8, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_14753/*"UIMasterFace"*/, 0);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0);
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4C506A7 )
  {
    sub_1C3E564(&UnityEngine_Quaternion_TypeInfo);
    byte_4C506A7 = 1;
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
    sub_1C3E7C0(gameObject, v7);
  }
  UIMasterFaceRender__SetLayer((UIMasterFaceRender_o *)Component_object, (int32_t)gameObject, 0);
  return (UIMasterFaceTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *MasterFaceManager__CreateLocal_40716976(
        MasterFaceManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t overWriteImageId,
        const MethodInfo *method)
{
  char *Local; // x0
  __int64 v16; // x1
  UIMasterFaceTexture_o *v17; // x23
  UnityEngine_Object_o *gameObject; // x24
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  char *v21; // x25
  int32_t v22; // w1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  int32_t v34; // [xsp+8h] [xbp-48h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-44h] BYREF

  v34 = equipId;
  v35 = genderType;
  if ( (byte_4C55EAF & 1) == 0 )
  {
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_861/*"-"*/);
    sub_1C3E564(&StringLiteral_759/*")"*/);
    sub_1C3E564(&StringLiteral_14754/*"UIMasterFace("*/);
    byte_4C55EAF = 1;
  }
  Local = (char *)MasterFaceManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local )
    goto LABEL_13;
  v17 = (UIMasterFaceTexture_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0);
  Local = (char *)sub_1C3E60C(string___TypeInfo, 5);
  if ( !Local )
    goto LABEL_13;
  v21 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v22 = StringLiteral_14754/*"UIMasterFace("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14754/*"UIMasterFace("*/;
  sub_1C3E508((CGThumbnailListItem_o *)(Local + 32), v22, v19, v20);
  Local = (char *)System_Int32__ToString((int32_t)&v35, 0);
  if ( *((_DWORD *)v21 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v21 + 5) = Local;
  sub_1C3E508((CGThumbnailListItem_o *)(v21 + 40), (int32_t)Local, v23, v24);
  if ( *((_DWORD *)v21 + 6) <= 2u
    || (v27 = (int)StringLiteral_861/*"-"*/,
        *((_QWORD *)v21 + 6) = StringLiteral_861/*"-"*/,
        sub_1C3E508((CGThumbnailListItem_o *)(v21 + 48), v27, v25, v26),
        Local = (char *)System_Int32__ToString((int32_t)&v34, 0),
        *((_DWORD *)v21 + 6) <= 3u)
    || (*((_QWORD *)v21 + 7) = Local,
        sub_1C3E508((CGThumbnailListItem_o *)(v21 + 56), (int32_t)Local, v28, v29),
        *((_DWORD *)v21 + 6) <= 4u) )
  {
LABEL_12:
    sub_1C3E7C8(Local, v16);
  }
  v32 = StringLiteral_759/*")"*/;
  *((_QWORD *)v21 + 8) = StringLiteral_759/*")"*/;
  sub_1C3E508((CGThumbnailListItem_o *)(v21 + 64), v32, v30, v31);
  Local = (char *)System_String__Concat_63676984((System_String_array *)v21, 0);
  if ( !gameObject )
LABEL_13:
    sub_1C3E7C0(Local, v16);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0);
  UIMasterFaceTexture__SetCharacter(v17, dispType, v35, v34, callbackFunc, overWriteImageId, 0);
  UIMasterFaceTexture__SetDepth(v17, depth, 0);
  return v17;
}


UIMasterFaceTexture_o *MasterFaceManager__CreatePrefab(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4C55EAC & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
    byte_4C55EAC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
  return MasterFaceManager__CreateLocal((MasterFaceManager_o *)Instance, parent, v5);
}


UIMasterFaceTexture_o *MasterFaceManager__CreatePrefab_40716808(
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t overWriteImageId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]

  if ( (byte_4C55EAD & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
    byte_4C55EAD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v16);
  return MasterFaceManager__CreateLocal_40716976(
           (MasterFaceManager_o *)Instance,
           parent,
           dispType,
           genderType,
           equipId,
           depth,
           callbackFunc,
           overWriteImageId,
           v18);
}


void MasterFaceManager__DownloadAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4C55EA9 & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C55EA9 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_40585604(AssetName, callback, 0);
}


System_String_array *MasterFaceManager__GetAssetName(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4C55EA8 & 1) == 0 )
  {
    sub_1C3E564(&UIMasterFaceRender_TypeInfo);
    byte_4C55EA8 = 1;
  }
  if ( !UIMasterFaceRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo);
  return UIMasterFaceRender__GetAssetNameList(dispType, genderType, equipId, 0, 0);
}


void MasterFaceManager__LoadAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4C55EAA & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C55EAA = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40587784(AssetName, callback, 1, 0);
}


void MasterFaceManager__ReleaseAsset(int32_t dispType, int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4C55EAB & 1) == 0 )
  {
    sub_1C3E564(&AssetManager_TypeInfo);
    byte_4C55EAB = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_40590132(AssetName, 0);
}