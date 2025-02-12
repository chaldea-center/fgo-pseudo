void __fastcall MasterFaceManager___ctor(MasterFaceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BB38EF & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_MasterFaceManager___ctor__, method);
    byte_4BB38EF = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3869FF0 *)Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
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

  if ( (byte_4BB38ED & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___, parent);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&StringLiteral_14965/*"UICommandGraphTexture"*/, v7);
    byte_4BB38ED = 1;
  }
  masterFacePrefab = (Il2CppObject *)this->fields.masterFacePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFacePrefab,
                                             (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v11 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_14965/*"UICommandGraphTexture"*/, 0LL);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v17);
    byte_4BAEDA1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4BAEDA7 )
  {
    sub_1C13D24(&UnityEngine_Quaternion_TypeInfo, v18);
    byte_4BAEDA7 = 1;
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
    sub_1C13F80(gameObject, v10);
  }
  UIMasterFaceRender__SetLayer((UIMasterFaceRender_o *)Component_object, (int32_t)gameObject, 0LL);
  return (UIMasterFaceTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreateLocal_39062916(
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  char *v28; // x25
  int64_t v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  void *v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x1
  int32_t v57; // [xsp+8h] [xbp-48h] BYREF
  int32_t v58; // [xsp+Ch] [xbp-44h] BYREF

  v57 = equipId;
  v58 = genderType;
  if ( (byte_4BB38EE & 1) == 0 )
  {
    sub_1C13D24(&string___TypeInfo, parent);
    sub_1C13D24(&StringLiteral_918/*"-"*/, v15);
    sub_1C13D24(&StringLiteral_812/*")"*/, v16);
    sub_1C13D24(&StringLiteral_14966/*"UICommandGraphTexture("*/, v17);
    byte_4BB38EE = 1;
  }
  Local = (char *)MasterFaceManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local )
    goto LABEL_13;
  v20 = (UIMasterFaceTexture_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0LL);
  Local = (char *)sub_1C13DCC(string___TypeInfo, 5LL);
  if ( !Local )
    goto LABEL_13;
  v28 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v29 = StringLiteral_14966/*"UICommandGraphTexture("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14966/*"UICommandGraphTexture("*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(Local + 32), v29, v22, v23, v24, v25, v26, v27);
  Local = (char *)System_Int32__ToString((int32_t)&v58, 0LL);
  if ( *((_DWORD *)v28 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v28 + 5) = Local;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v28 + 40), (int64_t)Local, v30, v31, v32, v33, v34, v35);
  if ( *((_DWORD *)v28 + 6) <= 2u
    || (v42 = StringLiteral_918/*"-"*/,
        *((_QWORD *)v28 + 6) = StringLiteral_918/*"-"*/,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v28 + 48), (int64_t)v42, v36, v37, v38, v39, v40, v41),
        Local = (char *)System_Int32__ToString((int32_t)&v57, 0LL),
        *((_DWORD *)v28 + 6) <= 3u)
    || (*((_QWORD *)v28 + 7) = Local,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v28 + 56), (int64_t)Local, v43, v44, v45, v46, v47, v48),
        *((_DWORD *)v28 + 6) <= 4u) )
  {
LABEL_12:
    sub_1C13F88(Local, v19);
  }
  v55 = StringLiteral_812/*")"*/;
  *((_QWORD *)v28 + 8) = StringLiteral_812/*")"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v28 + 64), v55, v49, v50, v51, v52, v53, v54);
  Local = (char *)System_String__Concat_62981472((System_String_array *)v28, 0LL);
  if ( !gameObject )
LABEL_13:
    sub_1C13F80(Local, v19);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFaceTexture__SetCharacter(v20, dispType, v58, v57, callbackFunc, overWriteImageId, 0LL);
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

  if ( (byte_4BB38EB & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__, method);
    byte_4BB38EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v4);
  return MasterFaceManager__CreateLocal((MasterFaceManager_o *)Instance, parent, v5);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreatePrefab_39062748(
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

  if ( (byte_4BB38EC & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__, *(_QWORD *)&dispType);
    byte_4BB38EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v16);
  return MasterFaceManager__CreateLocal_39062916(
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

  if ( (byte_4BB38E8 & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_4BB38E8 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_38939776(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFaceManager__GetAssetName(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4BB38E7 & 1) == 0 )
  {
    sub_1C13D24(&UIMasterFaceRender_TypeInfo, *(_QWORD *)&genderType);
    byte_4BB38E7 = 1;
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

  if ( (byte_4BB38E9 & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_4BB38E9 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_38941952(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFaceManager__ReleaseAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4BB38EA & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_4BB38EA = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_38944296(AssetName, 0LL);
}