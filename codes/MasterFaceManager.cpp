void MasterFaceManager___ctor(MasterFaceManager_o *this, const MethodInfo *method)
{
  if ( (byte_59377A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
    byte_59377A4 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
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

  if ( (byte_59377A2 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_15317/*"UIMasterFace"*/);
    byte_59377A2 = 1;
  }
  masterFacePrefab = (Il2CppObject *)this->fields.masterFacePrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent, method);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFacePrefab,
                                             (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v8 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
  transform = UnityEngine_GameObject__get_transform(v8, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_15317/*"UIMasterFace"*/, 0);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0);
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_5931946 )
  {
    sub_21FFC50(&UnityEngine_Quaternion_TypeInfo);
    byte_5931946 = 1;
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
    sub_21FFECC(gameObject, v7);
  }
  UIMasterFaceRender__SetLayer((UIMasterFaceRender_o *)Component_object, (int32_t)gameObject, 0);
  return (UIMasterFaceTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *MasterFaceManager__CreateLocal_47601484(
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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  char *v25; // x25
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t v39; // w1
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t v52; // w1
  int32_t v54; // [xsp+8h] [xbp-48h] BYREF
  int32_t v55; // [xsp+Ch] [xbp-44h] BYREF

  v54 = equipId;
  v55 = genderType;
  if ( (byte_59377A3 & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_923/*"-"*/);
    sub_21FFC50(&StringLiteral_789/*")"*/);
    sub_21FFC50(&StringLiteral_15318/*"UIMasterFace("*/);
    byte_59377A3 = 1;
  }
  Local = (char *)MasterFaceManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local )
    goto LABEL_13;
  v17 = (UIMasterFaceTexture_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0);
  Local = (char *)sub_21FFD10(string___TypeInfo, 5);
  if ( !Local )
    goto LABEL_13;
  v25 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v26 = StringLiteral_15318/*"UIMasterFace("*/;
  *((_QWORD *)Local + 4) = StringLiteral_15318/*"UIMasterFace("*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(Local + 32), v26, v19, v20, v21, v22, v23, v24);
  Local = (char *)System_Int32__ToString((int32_t)&v55, 0);
  if ( (*((_DWORD *)v25 + 6) & 0xFFFFFFFE) == 0 )
    goto LABEL_12;
  *((_QWORD *)v25 + 5) = Local;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 40), (int32_t)Local, v27, v28, v29, v30, v31, v32);
  if ( *((_DWORD *)v25 + 6) <= 2u
    || (v39 = (int)StringLiteral_923/*"-"*/,
        *((_QWORD *)v25 + 6) = StringLiteral_923/*"-"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 48), v39, v33, v34, v35, v36, v37, v38),
        Local = (char *)System_Int32__ToString((int32_t)&v54, 0),
        (*((_DWORD *)v25 + 6) & 0xFFFFFFFC) == 0)
    || (*((_QWORD *)v25 + 7) = Local,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 56), (int32_t)Local, v40, v41, v42, v43, v44, v45),
        *((_DWORD *)v25 + 6) <= 4u) )
  {
LABEL_12:
    sub_21FFED4(Local);
  }
  v52 = StringLiteral_789/*")"*/;
  *((_QWORD *)v25 + 8) = StringLiteral_789/*")"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 64), v52, v46, v47, v48, v49, v50, v51);
  Local = (char *)System_String__Concat_75483816((System_String_array *)v25, 0);
  if ( !gameObject )
LABEL_13:
    sub_21FFECC(Local, v16);
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

  if ( (byte_59377A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
    byte_59377A0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  return MasterFaceManager__CreateLocal((MasterFaceManager_o *)Instance, parent, v5);
}


UIMasterFaceTexture_o *MasterFaceManager__CreatePrefab_47601316(
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

  if ( (byte_59377A1 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
    byte_59377A1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v16);
  return MasterFaceManager__CreateLocal_47601484(
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_array *AssetName; // x20

  if ( (byte_593779D & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_593779D = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9, v10);
  AssetManager__downloadAssetStorage_47470156(AssetName, callback, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *MasterFaceManager__GetAssetName(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_593779C & 1) == 0 )
  {
    sub_21FFC50(&UIMasterFaceRender_TypeInfo);
    byte_593779C = 1;
  }
  if ( !*(&UIMasterFaceRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo, *(_QWORD *)&genderType, *(_QWORD *)&equipId);
  return UIMasterFaceRender__GetAssetNameList(dispType, genderType, equipId, 0, 0);
}


void MasterFaceManager__LoadAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_array *AssetName; // x20

  if ( (byte_593779E & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_593779E = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9, v10);
  AssetManager__loadAssetStorage_47472372(AssetName, callback, 1, 0);
}


void MasterFaceManager__ReleaseAsset(int32_t dispType, int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_array *AssetName; // x19

  if ( (byte_593779F & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_593779F = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, method);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
  AssetManager__releaseAssetStorage_47474708(AssetName, 0);
}