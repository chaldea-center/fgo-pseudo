void __fastcall MasterFaceManager___ctor(MasterFaceManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FD771 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_MasterFaceManager___ctor__, method);
    byte_49FD771 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EE730 *)Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
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

  if ( (byte_49FD76F & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___, parent);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64870(&StringLiteral_14660/*"UIMasterFace"*/, v7);
    byte_49FD76F = 1;
  }
  masterFacePrefab = (Il2CppObject *)this->fields.masterFacePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFacePrefab,
                                             (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v11 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_14660/*"UIMasterFace"*/, 0LL);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !byte_49F9201 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49F9201 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_49F9207 )
  {
    sub_1B64870(&UnityEngine_Quaternion_TypeInfo, v18);
    byte_49F9207 = 1;
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
    sub_1B64ACC(gameObject, v10);
  }
  UIMasterFaceRender__SetLayer((UIMasterFaceRender_o *)Component_object, (int32_t)gameObject, 0LL);
  return (UIMasterFaceTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreateLocal_37606652(
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
  int32_t v22; // w2
  int32_t v23; // w3
  char *v24; // x25
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  int32_t v37; // [xsp+8h] [xbp-48h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-44h] BYREF

  v37 = equipId;
  v38 = genderType;
  if ( (byte_49FD770 & 1) == 0 )
  {
    sub_1B64870(&string___TypeInfo, parent);
    sub_1B64870(&StringLiteral_920/*"-"*/, v15);
    sub_1B64870(&StringLiteral_815/*")"*/, v16);
    sub_1B64870(&StringLiteral_14661/*"UIMasterFace("*/, v17);
    byte_49FD770 = 1;
  }
  Local = (char *)MasterFaceManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local )
    goto LABEL_13;
  v20 = (UIMasterFaceTexture_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0LL);
  Local = (char *)sub_1B64918(string___TypeInfo, 5LL);
  if ( !Local )
    goto LABEL_13;
  v24 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v25 = StringLiteral_14661/*"UIMasterFace("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14661/*"UIMasterFace("*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(Local + 32), v25, v22, v23);
  Local = (char *)System_Int32__ToString((int32_t)&v38, 0LL);
  if ( *((_DWORD *)v24 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v24 + 5) = Local;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 40), (int32_t)Local, v26, v27);
  if ( *((_DWORD *)v24 + 6) <= 2u
    || (v30 = (int)StringLiteral_920/*"-"*/,
        *((_QWORD *)v24 + 6) = StringLiteral_920/*"-"*/,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 48), v30, v28, v29),
        Local = (char *)System_Int32__ToString((int32_t)&v37, 0LL),
        *((_DWORD *)v24 + 6) <= 3u)
    || (*((_QWORD *)v24 + 7) = Local,
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 56), (int32_t)Local, v31, v32),
        *((_DWORD *)v24 + 6) <= 4u) )
  {
LABEL_12:
    sub_1B64AD4(Local, v19);
  }
  v35 = StringLiteral_815/*")"*/;
  *((_QWORD *)v24 + 8) = StringLiteral_815/*")"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v24 + 64), v35, v33, v34);
  Local = (char *)System_String__Concat_61397104((System_String_array *)v24, 0LL);
  if ( !gameObject )
LABEL_13:
    sub_1B64ACC(Local, v19);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFaceTexture__SetCharacter(v20, dispType, v38, v37, callbackFunc, overWriteImageId, 0LL);
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

  if ( (byte_49FD76D & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__, method);
    byte_49FD76D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v4);
  return MasterFaceManager__CreateLocal((MasterFaceManager_o *)Instance, parent, v5);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreatePrefab_37606484(
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

  if ( (byte_49FD76E & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__, *(_QWORD *)&dispType);
    byte_49FD76E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v16);
  return MasterFaceManager__CreateLocal_37606652(
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

  if ( (byte_49FD76A & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_49FD76A = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_37486300(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFaceManager__GetAssetName(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_49FD769 & 1) == 0 )
  {
    sub_1B64870(&UIMasterFaceRender_TypeInfo, *(_QWORD *)&genderType);
    byte_49FD769 = 1;
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

  if ( (byte_49FD76B & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_49FD76B = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37488476(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFaceManager__ReleaseAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_49FD76C & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_49FD76C = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_37490820(AssetName, 0LL);
}