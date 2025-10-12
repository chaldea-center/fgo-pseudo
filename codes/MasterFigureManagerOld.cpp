void MasterFigureManagerOld___ctor(MasterFigureManagerOld_o *this, const MethodInfo *method)
{
  if ( (byte_4C36B29 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
    byte_4C36B29 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39E2DEC *)Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *MasterFigureManagerOld__CreateEnemyLocal(
        MasterFigureManagerOld_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t enemyFaceId,
        int32_t enemyBattleId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UnityEngine_Component_o *Local; // x0
  UIMasterFigureTextureOld_o *v13; // x22
  UnityEngine_Object_o *gameObject; // x23
  System_String_o *v15; // x0
  int32_t enemyFaceIda; // [xsp+Ch] [xbp-44h] BYREF
  System_Nullable_Vector3__o v18; // 0:x2.16

  enemyFaceIda = enemyFaceId;
  if ( (byte_4C36B28 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_14746/*"UIMasterFigureOld-Enemy("*/);
    sub_1C32C20(&StringLiteral_759/*")"*/);
    byte_4C36B28 = 1;
  }
  *(_QWORD *)&v18.fields.hasValue = 0;
  *(_QWORD *)&v18.fields.value.fields.y = 0;
  Local = (UnityEngine_Component_o *)MasterFigureManagerOld__CreateLocal(
                                       this,
                                       parent,
                                       v18,
                                       *(const MethodInfo **)&depth);
  if ( !Local
    || (v13 = (UIMasterFigureTextureOld_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0),
        v15 = System_Int32__ToString((int32_t)&enemyFaceIda, 0),
        Local = (UnityEngine_Component_o *)System_String__Concat_63556792(
                                             (System_String_o *)StringLiteral_14746/*"UIMasterFigureOld-Enemy("*/,
                                             v15,
                                             (System_String_o *)StringLiteral_759/*")"*/,
                                             0),
        !gameObject) )
  {
    sub_1C32E7C(Local);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0);
  UIMasterFigureTextureOld__SetEnemy(v13, enemyFaceIda, enemyBattleId, callbackFunc, 0);
  UIMasterFigureTextureOld__SetDepth(v13, depth, 0);
  return v13;
}


UIMasterFigureTextureOld_o *MasterFigureManagerOld__CreateEnemyPrefab(
        UnityEngine_GameObject_o *parent,
        int32_t enemyFaceId,
        int32_t enemyMasterBattleId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v12; // x6

  if ( (byte_4C36B25 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
    byte_4C36B25 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  return MasterFigureManagerOld__CreateEnemyLocal(
           (MasterFigureManagerOld_o *)Instance,
           parent,
           enemyFaceId,
           enemyMasterBattleId,
           depth,
           callbackFunc,
           v12);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *MasterFigureManagerOld__CreateLocal(
        MasterFigureManagerOld_o *this,
        UnityEngine_GameObject_o *parent,
        System_Nullable_Vector3__o offset,
        const MethodInfo *method)
{
  __int64 v4; // x21
  __int64 v5; // x22
  Il2CppObject *masterFigurePrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x24
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v16; // s2
  float v17; // s1
  float v18; // s0 OVERLAPPED
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v4 = *(_QWORD *)&offset.fields.value.fields.y;
  v5 = *(_QWORD *)&offset.fields.hasValue;
  if ( (byte_4C36B26 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
    sub_1C32C20(&Method_System_Nullable_Vector3__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_14744/*"UIMasterFigureOld"*/);
    byte_4C36B26 = 1;
  }
  masterFigurePrefab = (Il2CppObject *)this->fields.masterFigurePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFigurePrefab,
                                             (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_19;
  v10 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
  transform = UnityEngine_GameObject__get_transform(v10, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0);
  if ( !gameObject )
    goto LABEL_19;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v10, (System_String_o *)StringLiteral_14744/*"UIMasterFigureOld"*/, 0);
  if ( !parent )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0);
  if ( (_BYTE)v5 )
  {
    v16 = *((float *)&v4 + 1);
    v17 = *(float *)&v4;
    v18 = *((float *)&v5 + 1);
  }
  else
  {
    if ( !byte_4C313D1 )
    {
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v18 = static_fields->zeroVector.fields.x;
    v17 = static_fields->zeroVector.fields.y;
    v16 = static_fields->zeroVector.fields.z;
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v18, 0);
  if ( !byte_4C313D7 )
  {
    sub_1C32C20(&UnityEngine_Quaternion_TypeInfo);
    byte_4C313D7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v22, 0);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0), !Component_object) )
  {
LABEL_19:
    sub_1C32E7C(gameObject);
  }
  UIMasterFigureRenderOld__SetLayer((UIMasterFigureRenderOld_o *)Component_object, (int32_t)gameObject, 0);
  return (UIMasterFigureTextureOld_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *MasterFigureManagerOld__CreateLocal_40573260(
        MasterFigureManagerOld_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t overWriteEquipId,
        System_Nullable_Vector3__o offset,
        bool ignoreOriginalOffset,
        const MethodInfo *method)
{
  char *Local; // x0
  UIMasterFigureTextureOld_o *v18; // x23
  UnityEngine_Object_o *gameObject; // x24
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  char *v22; // x25
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  int32_t v35; // [xsp+8h] [xbp-58h] BYREF
  int32_t v36; // [xsp+Ch] [xbp-54h] BYREF

  v35 = equipId;
  v36 = genderType;
  if ( (byte_4C36B27 & 1) == 0 )
  {
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_861/*"-"*/);
    sub_1C32C20(&StringLiteral_759/*")"*/);
    sub_1C32C20(&StringLiteral_14745/*"UIMasterFigureOld("*/);
    byte_4C36B27 = 1;
  }
  Local = (char *)MasterFigureManagerOld__CreateLocal(this, parent, offset, *(const MethodInfo **)&equipId);
  if ( !Local )
    goto LABEL_13;
  v18 = (UIMasterFigureTextureOld_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0);
  Local = (char *)sub_1C32CC8(string___TypeInfo, 5);
  if ( !Local )
    goto LABEL_13;
  v22 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v23 = StringLiteral_14745/*"UIMasterFigureOld("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14745/*"UIMasterFigureOld("*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(Local + 32), v23, v20, v21);
  Local = (char *)System_Int32__ToString((int32_t)&v36, 0);
  if ( *((_DWORD *)v22 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v22 + 5) = Local;
  sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 40), (int32_t)Local, v24, v25);
  if ( *((_DWORD *)v22 + 6) <= 2u
    || (v28 = (int)StringLiteral_861/*"-"*/,
        *((_QWORD *)v22 + 6) = StringLiteral_861/*"-"*/,
        sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 48), v28, v26, v27),
        Local = (char *)System_Int32__ToString((int32_t)&v35, 0),
        *((_DWORD *)v22 + 6) <= 3u)
    || (*((_QWORD *)v22 + 7) = Local,
        sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 56), (int32_t)Local, v29, v30),
        *((_DWORD *)v22 + 6) <= 4u) )
  {
LABEL_12:
    sub_1C32E84(Local);
  }
  v33 = StringLiteral_759/*")"*/;
  *((_QWORD *)v22 + 8) = StringLiteral_759/*")"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)(v22 + 64), v33, v31, v32);
  Local = (char *)System_String__Concat_63559060((System_String_array *)v22, 0);
  if ( !gameObject )
LABEL_13:
    sub_1C32E7C(Local);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0);
  UIMasterFigureTextureOld__SetCharacter(
    v18,
    dispType,
    v36,
    v35,
    callbackFunc,
    overWriteEquipId,
    ignoreOriginalOffset,
    0);
  UIMasterFigureTextureOld__SetDepth(v18, depth, 0);
  return v18;
}


UIMasterFigureTextureOld_o *MasterFigureManagerOld__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x4
  System_Nullable_Vector3__o v6; // 0:x2.16

  if ( (byte_4C36B23 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
    byte_4C36B23 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  *(_QWORD *)&v6.fields.hasValue = 0;
  *(_QWORD *)&v6.fields.value.fields.y = 0;
  return MasterFigureManagerOld__CreateLocal((MasterFigureManagerOld_o *)Instance, parent, v6, v4);
}


UIMasterFigureTextureOld_o *MasterFigureManagerOld__CreatePrefab_40573068(
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t overWriteEquipId,
        System_Nullable_Vector3__o offset,
        bool ignoreOriginalOffset,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C36B24 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
    byte_4C36B24 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  return MasterFigureManagerOld__CreateLocal_40573260(
           (MasterFigureManagerOld_o *)Instance,
           parent,
           dispType,
           genderType,
           equipId,
           depth,
           callbackFunc,
           overWriteEquipId,
           offset,
           ignoreOriginalOffset,
           method);
}


void MasterFigureManagerOld__DownloadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4C36B20 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C36B20 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_40439960(AssetName, callback, 0);
}


System_String_array *MasterFigureManagerOld__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4C36B1F & 1) == 0 )
  {
    sub_1C32C20(&UIMasterFigureRenderOld_TypeInfo);
    byte_4C36B1F = 1;
  }
  if ( !UIMasterFigureRenderOld_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFigureRenderOld_TypeInfo);
  return UIMasterFigureRenderOld__GetAssetNameList(genderType, equipId, 0, 0);
}


void MasterFigureManagerOld__LoadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4C36B21 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C36B21 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40442140(AssetName, callback, 1, 0);
}


void MasterFigureManagerOld__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4C36B22 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C36B22 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_40444488(AssetName, 0);
}