void __fastcall MasterFaceManager___ctor(MasterFaceManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1541A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MasterFaceManager___ctor__, method, v2);
    byte_4B1541A = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
}


UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreateLocal(
        MasterFaceManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *masterFacePrefab; // x20
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

  if ( (byte_4B15418 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___, parent, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_14892/*"UIMasterFace"*/, v9, v10);
    byte_4B15418 = 1;
  }
  masterFacePrefab = (Il2CppObject *)this->fields.masterFacePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFacePrefab,
                                             (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v14 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
  transform = UnityEngine_GameObject__get_transform(v14, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v14, (System_String_o *)StringLiteral_14892/*"UIMasterFace"*/, 0LL);
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
  UIMasterFaceRender__SetLayer((UIMasterFaceRender_o *)Component_object, (int32_t)gameObject, 0LL);
  return (UIMasterFaceTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreateLocal_38632296(
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  char *Local; // x0
  __int64 v22; // x1
  UIMasterFaceTexture_o *v23; // x23
  UnityEngine_Object_o *gameObject; // x24
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  char *v31; // x25
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  void *v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  int64_t v58; // x1
  int32_t v60; // [xsp+8h] [xbp-48h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-44h] BYREF

  v60 = equipId;
  v61 = genderType;
  if ( (byte_4B15419 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, parent, *(_QWORD *)&dispType);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_14893/*"UIMasterFace("*/, v19, v20);
    byte_4B15419 = 1;
  }
  Local = (char *)MasterFaceManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local )
    goto LABEL_13;
  v23 = (UIMasterFaceTexture_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0LL);
  Local = (char *)sub_1BCA888(string___TypeInfo, 5LL);
  if ( !Local )
    goto LABEL_13;
  v31 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v32 = StringLiteral_14893/*"UIMasterFace("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14893/*"UIMasterFace("*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(Local + 32), v32, v25, v26, v27, v28, v29, v30);
  Local = (char *)System_Int32__ToString((int32_t)&v61, 0LL);
  if ( *((_DWORD *)v31 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v31 + 5) = Local;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 40), (int64_t)Local, v33, v34, v35, v36, v37, v38);
  if ( *((_DWORD *)v31 + 6) <= 2u
    || (v45 = StringLiteral_915/*"-"*/,
        *((_QWORD *)v31 + 6) = StringLiteral_915/*"-"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 48), (int64_t)v45, v39, v40, v41, v42, v43, v44),
        Local = (char *)System_Int32__ToString((int32_t)&v60, 0LL),
        *((_DWORD *)v31 + 6) <= 3u)
    || (*((_QWORD *)v31 + 7) = Local,
        sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 56), (int64_t)Local, v46, v47, v48, v49, v50, v51),
        *((_DWORD *)v31 + 6) <= 4u) )
  {
LABEL_12:
    sub_1BCAA44(Local, v22);
  }
  v58 = StringLiteral_809/*")"*/;
  *((_QWORD *)v31 + 8) = StringLiteral_809/*")"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 64), v58, v52, v53, v54, v55, v56, v57);
  Local = (char *)System_String__Concat_62414748((System_String_array *)v31, 0LL);
  if ( !gameObject )
LABEL_13:
    sub_1BCAA3C(Local, v22);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFaceTexture__SetCharacter(v23, dispType, v61, v60, callbackFunc, overWriteImageId, 0LL);
  UIMasterFaceTexture__SetDepth(v23, depth, 0LL);
  return v23;
}


UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B15416 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__, method, v2);
    byte_4B15416 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  return MasterFaceManager__CreateLocal((MasterFaceManager_o *)Instance, parent, v6);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreatePrefab_38632128(
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

  if ( (byte_4B15417 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__,
      *(_QWORD *)&dispType,
      *(_QWORD *)&genderType);
    byte_4B15417 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v16);
  return MasterFaceManager__CreateLocal_38632296(
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
  __int64 v9; // x1
  System_String_array *AssetName; // x20

  if ( (byte_4B15413 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&genderType, *(_QWORD *)&equipId);
    byte_4B15413 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9);
  AssetManager__downloadAssetStorage_38510160(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFaceManager__GetAssetName(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4B15412 & 1) == 0 )
  {
    sub_1BCA7E0(&UIMasterFaceRender_TypeInfo, *(_QWORD *)&genderType, *(_QWORD *)&equipId);
    byte_4B15412 = 1;
  }
  if ( !UIMasterFaceRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo, *(_QWORD *)&genderType);
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
  __int64 v9; // x1
  System_String_array *AssetName; // x20

  if ( (byte_4B15414 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&genderType, *(_QWORD *)&equipId);
    byte_4B15414 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9);
  AssetManager__loadAssetStorage_38512336(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFaceManager__ReleaseAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_array *AssetName; // x19

  if ( (byte_4B15415 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&genderType, *(_QWORD *)&equipId);
    byte_4B15415 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
  AssetManager__releaseAssetStorage_38514680(AssetName, 0LL);
}