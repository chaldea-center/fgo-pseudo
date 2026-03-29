void MasterFaceManager___ctor(MasterFaceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4D2FB47 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
    byte_4D2FB47 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3AC57E4 *)Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
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
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12

  if ( (byte_4D2FB45 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_14842/*"UIMasterFace"*/);
    byte_4D2FB45 = 1;
  }
  masterFacePrefab = (Il2CppObject *)this->fields.masterFacePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFacePrefab,
                                             (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v8 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
  transform = UnityEngine_GameObject__get_transform(v8, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_14842/*"UIMasterFace"*/, 0);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0);
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4D2A13F )
  {
    sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
    byte_4D2A13F = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  UnityEngine_Transform__set_localScale(transform, localScale, 0);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0), !Component_object) )
  {
LABEL_16:
    sub_1C93D2C(gameObject, v7);
  }
  UIMasterFaceRender__SetLayer((UIMasterFaceRender_o *)Component_object, (int32_t)gameObject, 0);
  return (UIMasterFaceTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *MasterFaceManager__CreateLocal_41388024(
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
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  char *v25; // x25
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w1
  int32_t v54; // [xsp+8h] [xbp-48h] BYREF
  int32_t v55; // [xsp+Ch] [xbp-44h] BYREF

  v54 = equipId;
  v55 = genderType;
  if ( (byte_4D2FB46 & 1) == 0 )
  {
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_859/*"-"*/);
    sub_1C93AD4(&StringLiteral_757/*")"*/);
    sub_1C93AD4(&StringLiteral_14843/*"UIMasterFace("*/);
    byte_4D2FB46 = 1;
  }
  Local = (char *)MasterFaceManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local )
    goto LABEL_13;
  v17 = (UIMasterFaceTexture_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0);
  Local = (char *)sub_1C93B7C(string___TypeInfo, 5);
  if ( !Local )
    goto LABEL_13;
  v25 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v26 = StringLiteral_14843/*"UIMasterFace("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14843/*"UIMasterFace("*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(Local + 32), v26, v19, v20, v21, v22, v23, v24);
  Local = (char *)System_Int32__ToString((int32_t)&v55, 0);
  if ( *((_DWORD *)v25 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v25 + 5) = Local;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 40), (int32_t)Local, v27, v28, v29, v30, v31, v32);
  if ( *((_DWORD *)v25 + 6) <= 2u
    || (v39 = (int)StringLiteral_859/*"-"*/,
        *((_QWORD *)v25 + 6) = StringLiteral_859/*"-"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 48), v39, v33, v34, v35, v36, v37, v38),
        Local = (char *)System_Int32__ToString((int32_t)&v54, 0),
        *((_DWORD *)v25 + 6) <= 3u)
    || (*((_QWORD *)v25 + 7) = Local,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 56), (int32_t)Local, v40, v41, v42, v43, v44, v45),
        *((_DWORD *)v25 + 6) <= 4u) )
  {
LABEL_12:
    sub_1C93D34(Local);
  }
  v52 = StringLiteral_757/*")"*/;
  *((_QWORD *)v25 + 8) = StringLiteral_757/*")"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 64), v52, v46, v47, v48, v49, v50, v51);
  Local = (char *)System_String__Concat_64466256((System_String_array *)v25, 0);
  if ( !gameObject )
LABEL_13:
    sub_1C93D2C(Local, v16);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0);
  UIMasterFaceTexture__SetCharacter(v17, dispType, v55, v54, callbackFunc, overWriteImageId, 0);
  UIMasterFaceTexture__SetDepth(v17, depth, 0);
  return v17;
}


UIMasterFaceTexture_o *MasterFaceManager__CreatePrefab(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4D2FB43 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
    byte_4D2FB43 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  return MasterFaceManager__CreateLocal((MasterFaceManager_o *)Instance, parent, v5);
}


UIMasterFaceTexture_o *MasterFaceManager__CreatePrefab_41387856(
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

  if ( (byte_4D2FB44 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
    byte_4D2FB44 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v16);
  return MasterFaceManager__CreateLocal_41388024(
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

  if ( (byte_4D2FB40 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D2FB40 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_41252580(AssetName, callback, 0);
}


System_String_array *MasterFaceManager__GetAssetName(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4D2FB3F & 1) == 0 )
  {
    sub_1C93AD4(&UIMasterFaceRender_TypeInfo);
    byte_4D2FB3F = 1;
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

  if ( (byte_4D2FB41 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D2FB41 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_41254760(AssetName, callback, 1, 0);
}


void MasterFaceManager__ReleaseAsset(int32_t dispType, int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4D2FB42 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D2FB42 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_41257108(AssetName, 0);
}