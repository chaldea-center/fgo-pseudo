void __fastcall MasterFaceManager___ctor(MasterFaceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B1B6A4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_MasterFaceManager___ctor__, method);
    byte_4B1B6A4 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38F8EF0 *)Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
}


UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreateLocal(
        MasterFaceManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *masterFacePrefab; // x20
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

  if ( (byte_4B1B6A2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___, parent);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_14622/*"UIMasterFace"*/, v7);
    byte_4B1B6A2 = 1;
  }
  masterFacePrefab = (Il2CppObject *)this->fields.masterFacePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFacePrefab,
                                             (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v11 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_14622/*"UIMasterFace"*/, 0LL);
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
  UIMasterFaceRender__SetLayer((UIMasterFaceRender_o *)Component_object, (int32_t)gameObject, 0LL);
  return (UIMasterFaceTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreateLocal_39857760(
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  char *Local; // x0
  __int64 v19; // x1
  UIMasterFaceTexture_o *v20; // x23
  UnityEngine_Object_o *gameObject; // x24
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  char *v24; // x25
  int32_t v25; // w1
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  int32_t v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-44h] BYREF

  v33 = equipId;
  v34 = genderType;
  if ( (byte_4B1B6A3 & 1) == 0 )
  {
    sub_1BCAFF8(&string___TypeInfo, parent);
    sub_1BCAFF8(&StringLiteral_856/*"-"*/, v15);
    sub_1BCAFF8(&StringLiteral_754/*")"*/, v16);
    sub_1BCAFF8(&StringLiteral_14623/*"UIMasterFace("*/, v17);
    byte_4B1B6A3 = 1;
  }
  Local = (char *)MasterFaceManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local )
    goto LABEL_13;
  v20 = (UIMasterFaceTexture_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0LL);
  Local = (char *)sub_1BCB0A0(string___TypeInfo, 5LL);
  if ( !Local )
    goto LABEL_13;
  v24 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v25 = StringLiteral_14623/*"UIMasterFace("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14623/*"UIMasterFace("*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(Local + 32), v25, v22, v23);
  Local = (char *)System_Int32__ToString((int32_t)&v34, 0LL);
  if ( *((_DWORD *)v24 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v24 + 5) = Local;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 40), (int32_t)Local, v22, v26);
  if ( *((_DWORD *)v24 + 6) <= 2u
    || (v28 = (int)StringLiteral_856/*"-"*/,
        *((_QWORD *)v24 + 6) = StringLiteral_856/*"-"*/,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 48), v28, v22, v27),
        Local = (char *)System_Int32__ToString((int32_t)&v33, 0LL),
        *((_DWORD *)v24 + 6) <= 3u)
    || (*((_QWORD *)v24 + 7) = Local,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 56), (int32_t)Local, v22, v29),
        *((_DWORD *)v24 + 6) <= 4u) )
  {
LABEL_12:
    sub_1BCB25C(Local, v19, v22);
  }
  v31 = StringLiteral_754/*")"*/;
  *((_QWORD *)v24 + 8) = StringLiteral_754/*")"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 64), v31, v22, v30);
  Local = (char *)System_String__Concat_62490940((System_String_array *)v24, 0LL);
  if ( !gameObject )
LABEL_13:
    sub_1BCB254(Local, v19);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFaceTexture__SetCharacter(v20, dispType, v34, v33, callbackFunc, overWriteImageId, 0LL);
  UIMasterFaceTexture__SetDepth(v20, depth, 0LL);
  return v20;
}


UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4B1B6A0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__, method);
    byte_4B1B6A0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  return MasterFaceManager__CreateLocal((MasterFaceManager_o *)Instance, parent, v5);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreatePrefab_39857592(
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

  if ( (byte_4B1B6A1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__, *(_QWORD *)&dispType);
    byte_4B1B6A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v16);
  return MasterFaceManager__CreateLocal_39857760(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFaceManager__DownloadAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4B1B69D & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_4B1B69D = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_39727092(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFaceManager__GetAssetName(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4B1B69C & 1) == 0 )
  {
    sub_1BCAFF8(&UIMasterFaceRender_TypeInfo, *(_QWORD *)&genderType);
    byte_4B1B69C = 1;
  }
  if ( !UIMasterFaceRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo);
  return UIMasterFaceRender__GetAssetNameList(dispType, genderType, equipId, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFaceManager__LoadAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4B1B69E & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_4B1B69E = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_39729272(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFaceManager__ReleaseAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4B1B69F & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_4B1B69F = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_39731636(AssetName, 0LL);
}