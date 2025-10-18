void MasterFullFigureManager___ctor(MasterFullFigureManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C42122 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
    byte_4C42122 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39ED654 *)Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
}


UIMasterFullFigureTexture_o *MasterFullFigureManager__CreateLocal(
        MasterFullFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *masterFigurePrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v7; // x22
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C42120 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_14748/*"UIMasterFullFigure"*/);
    byte_4C42120 = 1;
  }
  masterFigurePrefab = (Il2CppObject *)this->fields.masterFigurePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFigurePrefab,
                                             (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v7 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
  transform = UnityEngine_GameObject__get_transform(v7, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v7, 0);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v7, (System_String_o *)StringLiteral_14748/*"UIMasterFullFigure"*/, 0);
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
  UIMasterFullFigureRender__SetLayer((UIMasterFullFigureRender_o *)Component_object, (int32_t)gameObject, 0);
  return (UIMasterFullFigureTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *MasterFullFigureManager__CreateLocal_40674876(
        MasterFullFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  char *Local; // x0
  UIMasterFullFigureTexture_o *v14; // x22
  UnityEngine_Object_o *gameObject; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  char *v18; // x24
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  int32_t v31; // [xsp+8h] [xbp-48h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-44h] BYREF

  v31 = equipId;
  v32 = genderType;
  if ( (byte_4C42121 & 1) == 0 )
  {
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_14749/*"UIMasterFullFigure("*/);
    sub_1C37058(&StringLiteral_861/*"-"*/);
    sub_1C37058(&StringLiteral_759/*")"*/);
    byte_4C42121 = 1;
  }
  Local = (char *)MasterFullFigureManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local )
    goto LABEL_13;
  v14 = (UIMasterFullFigureTexture_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0);
  Local = (char *)sub_1C37100(string___TypeInfo, 5);
  if ( !Local )
    goto LABEL_13;
  v18 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v19 = StringLiteral_14749/*"UIMasterFullFigure("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14749/*"UIMasterFullFigure("*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(Local + 32), v19, v16, v17);
  Local = (char *)System_Int32__ToString((int32_t)&v32, 0);
  if ( *((_DWORD *)v18 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v18 + 5) = Local;
  sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 40), (int32_t)Local, v20, v21);
  if ( *((_DWORD *)v18 + 6) <= 2u
    || (v24 = (int)StringLiteral_861/*"-"*/,
        *((_QWORD *)v18 + 6) = StringLiteral_861/*"-"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 48), v24, v22, v23),
        Local = (char *)System_Int32__ToString((int32_t)&v31, 0),
        *((_DWORD *)v18 + 6) <= 3u)
    || (*((_QWORD *)v18 + 7) = Local,
        sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 56), (int32_t)Local, v25, v26),
        *((_DWORD *)v18 + 6) <= 4u) )
  {
LABEL_12:
    sub_1C372BC(Local);
  }
  v29 = StringLiteral_759/*")"*/;
  *((_QWORD *)v18 + 8) = StringLiteral_759/*")"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v18 + 64), v29, v27, v28);
  Local = (char *)System_String__Concat_63602172((System_String_array *)v18, 0);
  if ( !gameObject )
LABEL_13:
    sub_1C372B4(Local);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0);
  UIMasterFullFigureTexture__SetCharacter(v14, dispType, v32, v31, callbackFunc, 0);
  UIMasterFullFigureTexture__SetDepth(v14, depth, 0);
  return v14;
}


UIMasterFullFigureTexture_o *MasterFullFigureManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C4211E & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
    byte_4C4211E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return MasterFullFigureManager__CreateLocal((MasterFullFigureManager_o *)Instance, parent, v4);
}


UIMasterFullFigureTexture_o *MasterFullFigureManager__CreatePrefab_40674728(
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v14; // x7

  if ( (byte_4C4211F & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
    byte_4C4211F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return MasterFullFigureManager__CreateLocal_40674876(
           (MasterFullFigureManager_o *)Instance,
           parent,
           dispType,
           genderType,
           equipId,
           depth,
           callbackFunc,
           v14);
}


void MasterFullFigureManager__DownloadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4C4211B & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C4211B = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_40539344(AssetName, callback, 0);
}


System_String_array *MasterFullFigureManager__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4C4211A & 1) == 0 )
  {
    sub_1C37058(&UIMasterFullFigureRender_TypeInfo);
    byte_4C4211A = 1;
  }
  if ( !UIMasterFullFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFullFigureRender_TypeInfo);
  return UIMasterFullFigureRender__GetAssetNameList(genderType, equipId, 0);
}


void MasterFullFigureManager__LoadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4C4211C & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C4211C = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40541524(AssetName, callback, 1, 0);
}


void MasterFullFigureManager__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4C4211D & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C4211D = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_40543872(AssetName, 0);
}