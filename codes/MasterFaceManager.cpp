void MasterFaceManager___ctor(MasterFaceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C4210E & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
    byte_4C4210E = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39ED654 *)Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
}


UIMasterFaceTexture_o *MasterFaceManager__CreateLocal(
        MasterFaceManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *masterFacePrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x22
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4210C & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_14743/*"UIMasterFace"*/);
    byte_4C4210C = 1;
  }
  masterFacePrefab = (Il2CppObject *)this->fields.masterFacePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFacePrefab,
                                             (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v7 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
  transform = UnityEngine_GameObject__get_transform(v7, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v7, (System_String_o *)StringLiteral_14743/*"UIMasterFace"*/, 0);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0);
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4C3C927 )
  {
    sub_1C37058(&UnityEngine_Quaternion_TypeInfo);
    byte_4C3C927 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  v15.fields.x = x;
  v15.fields.y = y;
  v15.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v15, 0);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0), !Component_object) )
  {
LABEL_16:
    sub_1C372B4(gameObject);
  }
  UIMasterFaceRender__SetLayer((UIMasterFaceRender_o *)Component_object, (int32_t)gameObject, 0);
  return (UIMasterFaceTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *MasterFaceManager__CreateLocal_40670716(
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
  UIMasterFaceTexture_o *v16; // x23
  UnityEngine_Object_o *gameObject; // x24
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  char *v20; // x25
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  int32_t v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-44h] BYREF

  v33 = equipId;
  v34 = genderType;
  if ( (byte_4C4210D & 1) == 0 )
  {
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_861/*"-"*/);
    sub_1C37058(&StringLiteral_759/*")"*/);
    sub_1C37058(&StringLiteral_14744/*"UIMasterFace("*/);
    byte_4C4210D = 1;
  }
  Local = (char *)MasterFaceManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local )
    goto LABEL_13;
  v16 = (UIMasterFaceTexture_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0);
  Local = (char *)sub_1C37100(string___TypeInfo, 5);
  if ( !Local )
    goto LABEL_13;
  v20 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v21 = StringLiteral_14744/*"UIMasterFace("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14744/*"UIMasterFace("*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(Local + 32), v21, v18, v19);
  Local = (char *)System_Int32__ToString((int32_t)&v34, 0);
  if ( *((_DWORD *)v20 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v20 + 5) = Local;
  sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 40), (int32_t)Local, v22, v23);
  if ( *((_DWORD *)v20 + 6) <= 2u
    || (v26 = (int)StringLiteral_861/*"-"*/,
        *((_QWORD *)v20 + 6) = StringLiteral_861/*"-"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 48), v26, v24, v25),
        Local = (char *)System_Int32__ToString((int32_t)&v33, 0),
        *((_DWORD *)v20 + 6) <= 3u)
    || (*((_QWORD *)v20 + 7) = Local,
        sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 56), (int32_t)Local, v27, v28),
        *((_DWORD *)v20 + 6) <= 4u) )
  {
LABEL_12:
    sub_1C372BC(Local);
  }
  v31 = StringLiteral_759/*")"*/;
  *((_QWORD *)v20 + 8) = StringLiteral_759/*")"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 64), v31, v29, v30);
  Local = (char *)System_String__Concat_63602172((System_String_array *)v20, 0);
  if ( !gameObject )
LABEL_13:
    sub_1C372B4(Local);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0);
  UIMasterFaceTexture__SetCharacter(v16, dispType, v34, v33, callbackFunc, overWriteImageId, 0);
  UIMasterFaceTexture__SetDepth(v16, depth, 0);
  return v16;
}


UIMasterFaceTexture_o *MasterFaceManager__CreatePrefab(UnityEngine_GameObject_o *parent, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C4210A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
    byte_4C4210A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return MasterFaceManager__CreateLocal((MasterFaceManager_o *)Instance, parent, v4);
}


UIMasterFaceTexture_o *MasterFaceManager__CreatePrefab_40670548(
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
  const MethodInfo *v17; // [xsp+0h] [xbp-60h]

  if ( (byte_4C4210B & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
    byte_4C4210B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return MasterFaceManager__CreateLocal_40670716(
           (MasterFaceManager_o *)Instance,
           parent,
           dispType,
           genderType,
           equipId,
           depth,
           callbackFunc,
           overWriteImageId,
           v17);
}


void MasterFaceManager__DownloadAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4C42107 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C42107 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_40539344(AssetName, callback, 0);
}


System_String_array *MasterFaceManager__GetAssetName(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4C42106 & 1) == 0 )
  {
    sub_1C37058(&UIMasterFaceRender_TypeInfo);
    byte_4C42106 = 1;
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

  if ( (byte_4C42108 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C42108 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40541524(AssetName, callback, 1, 0);
}


void MasterFaceManager__ReleaseAsset(int32_t dispType, int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4C42109 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C42109 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_40543872(AssetName, 0);
}