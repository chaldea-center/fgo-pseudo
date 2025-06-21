void __fastcall MasterFullFigureManager___ctor(MasterFullFigureManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B1B6B8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__, method);
    byte_4B1B6B8 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38F8EF0 *)Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreateLocal(
        MasterFullFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *masterFigurePrefab; // x20
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

  if ( (byte_4B1B6B6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___, parent);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_14627/*"UIMasterFullFigure"*/, v7);
    byte_4B1B6B6 = 1;
  }
  masterFigurePrefab = (Il2CppObject *)this->fields.masterFigurePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFigurePrefab,
                                             (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v11 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_14627/*"UIMasterFullFigure"*/, 0LL);
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
  UIMasterFullFigureRender__SetLayer((UIMasterFullFigureRender_o *)Component_object, (int32_t)gameObject, 0LL);
  return (UIMasterFullFigureTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreateLocal_39861920(
        MasterFullFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  char *Local; // x0
  __int64 v17; // x1
  UIMasterFullFigureTexture_o *v18; // x22
  UnityEngine_Object_o *gameObject; // x23
  __int64 v20; // x2
  const MethodInfo *v21; // x3
  char *v22; // x24
  int32_t v23; // w1
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  int32_t v31; // [xsp+8h] [xbp-48h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-44h] BYREF

  v31 = equipId;
  v32 = genderType;
  if ( (byte_4B1B6B7 & 1) == 0 )
  {
    sub_1BCAFF8(&string___TypeInfo, parent);
    sub_1BCAFF8(&StringLiteral_14628/*"UIMasterFullFigure("*/, v13);
    sub_1BCAFF8(&StringLiteral_856/*"-"*/, v14);
    sub_1BCAFF8(&StringLiteral_754/*")"*/, v15);
    byte_4B1B6B7 = 1;
  }
  Local = (char *)MasterFullFigureManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local )
    goto LABEL_13;
  v18 = (UIMasterFullFigureTexture_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0LL);
  Local = (char *)sub_1BCB0A0(string___TypeInfo, 5LL);
  if ( !Local )
    goto LABEL_13;
  v22 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v23 = StringLiteral_14628/*"UIMasterFullFigure("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14628/*"UIMasterFullFigure("*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(Local + 32), v23, v20, v21);
  Local = (char *)System_Int32__ToString((int32_t)&v32, 0LL);
  if ( *((_DWORD *)v22 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v22 + 5) = Local;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 40), (int32_t)Local, v20, v24);
  if ( *((_DWORD *)v22 + 6) <= 2u
    || (v26 = (int)StringLiteral_856/*"-"*/,
        *((_QWORD *)v22 + 6) = StringLiteral_856/*"-"*/,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 48), v26, v20, v25),
        Local = (char *)System_Int32__ToString((int32_t)&v31, 0LL),
        *((_DWORD *)v22 + 6) <= 3u)
    || (*((_QWORD *)v22 + 7) = Local,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 56), (int32_t)Local, v20, v27),
        *((_DWORD *)v22 + 6) <= 4u) )
  {
LABEL_12:
    sub_1BCB25C(Local, v17, v20);
  }
  v29 = StringLiteral_754/*")"*/;
  *((_QWORD *)v22 + 8) = StringLiteral_754/*")"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 64), v29, v20, v28);
  Local = (char *)System_String__Concat_62490940((System_String_array *)v22, 0LL);
  if ( !gameObject )
LABEL_13:
    sub_1BCB254(Local, v17);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFullFigureTexture__SetCharacter(v18, dispType, v32, v31, callbackFunc, 0LL);
  UIMasterFullFigureTexture__SetDepth(v18, depth, 0LL);
  return v18;
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4B1B6B4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__, method);
    byte_4B1B6B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  return MasterFullFigureManager__CreateLocal((MasterFullFigureManager_o *)Instance, parent, v5);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab_39861772(
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x7

  if ( (byte_4B1B6B5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__, *(_QWORD *)&dispType);
    byte_4B1B6B5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v14);
  return MasterFullFigureManager__CreateLocal_39861920(
           (MasterFullFigureManager_o *)Instance,
           parent,
           dispType,
           genderType,
           equipId,
           depth,
           callbackFunc,
           v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFullFigureManager__DownloadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4B1B6B1 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4B1B6B1 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_39727092(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFullFigureManager__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4B1B6B0 & 1) == 0 )
  {
    sub_1BCAFF8(&UIMasterFullFigureRender_TypeInfo, *(_QWORD *)&equipId);
    byte_4B1B6B0 = 1;
  }
  if ( !UIMasterFullFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFullFigureRender_TypeInfo);
  return UIMasterFullFigureRender__GetAssetNameList(genderType, equipId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFullFigureManager__LoadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4B1B6B2 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4B1B6B2 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_39729272(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFullFigureManager__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4B1B6B3 & 1) == 0 )
  {
    sub_1BCAFF8(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4B1B6B3 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_39731636(AssetName, 0LL);
}