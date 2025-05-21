void __fastcall MasterFigureManagerOld___ctor(MasterFigureManagerOld_o *this, const MethodInfo *method)
{
  if ( (byte_4B43C36 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__, method);
    byte_4B43C36 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39166A0 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreateEnemyLocal(
        MasterFigureManagerOld_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t enemyFaceId,
        int32_t enemyBattleId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v12; // x1
  UnityEngine_Component_o *Local; // x0
  __int64 v14; // x1
  UIMasterFigureTextureOld_o *v15; // x22
  UnityEngine_Object_o *gameObject; // x23
  System_String_o *v17; // x0
  int32_t enemyFaceIda; // [xsp+Ch] [xbp-44h] BYREF
  System_Nullable_Vector3__o v20; // 0:x2.16

  enemyFaceIda = enemyFaceId;
  if ( (byte_4B43C35 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_14715/*"UIMasterFigureOld-Enemy("*/, parent);
    sub_1BDB878(&StringLiteral_767/*")"*/, v12);
    byte_4B43C35 = 1;
  }
  *(_QWORD *)&v20.fields.hasValue = 0LL;
  *(_QWORD *)&v20.fields.value.fields.y = 0LL;
  Local = (UnityEngine_Component_o *)MasterFigureManagerOld__CreateLocal(
                                       this,
                                       parent,
                                       v20,
                                       *(const MethodInfo **)&depth);
  if ( !Local
    || (v15 = (UIMasterFigureTextureOld_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        v17 = System_Int32__ToString((int32_t)&enemyFaceIda, 0LL),
        Local = (UnityEngine_Component_o *)System_String__Concat_62610508(
                                             (System_String_o *)StringLiteral_14715/*"UIMasterFigureOld-Enemy("*/,
                                             v17,
                                             (System_String_o *)StringLiteral_767/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_1BDBAD4(Local, v14);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFigureTextureOld__SetEnemy(v15, enemyFaceIda, enemyBattleId, callbackFunc, 0LL);
  UIMasterFigureTextureOld__SetDepth(v15, depth, 0LL);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreateEnemyPrefab(
        UnityEngine_GameObject_o *parent,
        int32_t enemyFaceId,
        int32_t enemyMasterBattleId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x6

  if ( (byte_4B43C32 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, *(_QWORD *)&enemyFaceId);
    byte_4B43C32 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v12);
  return MasterFigureManagerOld__CreateEnemyLocal(
           (MasterFigureManagerOld_o *)Instance,
           parent,
           enemyFaceId,
           enemyMasterBattleId,
           depth,
           callbackFunc,
           v13);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreateLocal(
        MasterFigureManagerOld_o *this,
        UnityEngine_GameObject_o *parent,
        System_Nullable_Vector3__o offset,
        const MethodInfo *method)
{
  __int64 v4; // x21
  __int64 v5; // x22
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *masterFigurePrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x24
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v22; // x1
  float v23; // s2
  float v24; // s1
  float v25; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v27; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v4 = *(_QWORD *)&offset.fields.value.fields.y;
  v5 = *(_QWORD *)&offset.fields.hasValue;
  if ( (byte_4B43C33 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___, parent);
    sub_1BDB878(&Method_System_Nullable_Vector3__GetValueOrDefault__, v8);
    sub_1BDB878(&Method_System_Nullable_Vector3__get_HasValue__, v9);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v11);
    sub_1BDB878(&StringLiteral_14713/*"UIMasterFigureOld"*/, v12);
    byte_4B43C33 = 1;
  }
  masterFigurePrefab = (Il2CppObject *)this->fields.masterFigurePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFigurePrefab,
                                             (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_19;
  v16 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
  transform = UnityEngine_GameObject__get_transform(v16, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v16, (System_String_o *)StringLiteral_14713/*"UIMasterFigureOld"*/, 0LL);
  if ( !parent )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( (_BYTE)v5 )
  {
    v23 = *((float *)&v4 + 1);
    v24 = *(float *)&v4;
    v25 = *((float *)&v5 + 1);
  }
  else
  {
    if ( !byte_4B3E911 )
    {
      sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v22);
      byte_4B3E911 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v25 = static_fields->zeroVector.fields.x;
    v24 = static_fields->zeroVector.fields.y;
    v23 = static_fields->zeroVector.fields.z;
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v25, 0LL);
  if ( !byte_4B3E917 )
  {
    sub_1BDB878(&UnityEngine_Quaternion_TypeInfo, v27);
    byte_4B3E917 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v30, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL), !Component_object) )
  {
LABEL_19:
    sub_1BDBAD4(gameObject, v15);
  }
  UIMasterFigureRenderOld__SetLayer((UIMasterFigureRenderOld_o *)Component_object, (int32_t)gameObject, 0LL);
  return (UIMasterFigureTextureOld_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreateLocal_39691300(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  char *Local; // x0
  __int64 v21; // x1
  UIMasterFigureTextureOld_o *v22; // x23
  UnityEngine_Object_o *gameObject; // x24
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  char *v26; // x25
  int32_t v27; // w1
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  int32_t v35; // [xsp+8h] [xbp-58h] BYREF
  int32_t v36; // [xsp+Ch] [xbp-54h] BYREF

  v35 = equipId;
  v36 = genderType;
  if ( (byte_4B43C34 & 1) == 0 )
  {
    sub_1BDB878(&string___TypeInfo, parent);
    sub_1BDB878(&StringLiteral_871/*"-"*/, v17);
    sub_1BDB878(&StringLiteral_767/*")"*/, v18);
    sub_1BDB878(&StringLiteral_14714/*"UIMasterFigureOld("*/, v19);
    byte_4B43C34 = 1;
  }
  Local = (char *)MasterFigureManagerOld__CreateLocal(this, parent, offset, *(const MethodInfo **)&equipId);
  if ( !Local )
    goto LABEL_13;
  v22 = (UIMasterFigureTextureOld_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0LL);
  Local = (char *)sub_1BDB920(string___TypeInfo, 5LL);
  if ( !Local )
    goto LABEL_13;
  v26 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v27 = StringLiteral_14714/*"UIMasterFigureOld("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14714/*"UIMasterFigureOld("*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(Local + 32), v27, v24, v25);
  Local = (char *)System_Int32__ToString((int32_t)&v36, 0LL);
  if ( *((_DWORD *)v26 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v26 + 5) = Local;
  sub_1BDB81C((CGThumbnailListItem_o *)(v26 + 40), (int32_t)Local, v24, v28);
  if ( *((_DWORD *)v26 + 6) <= 2u
    || (v30 = (int)StringLiteral_871/*"-"*/,
        *((_QWORD *)v26 + 6) = StringLiteral_871/*"-"*/,
        sub_1BDB81C((CGThumbnailListItem_o *)(v26 + 48), v30, v24, v29),
        Local = (char *)System_Int32__ToString((int32_t)&v35, 0LL),
        *((_DWORD *)v26 + 6) <= 3u)
    || (*((_QWORD *)v26 + 7) = Local,
        sub_1BDB81C((CGThumbnailListItem_o *)(v26 + 56), (int32_t)Local, v24, v31),
        *((_DWORD *)v26 + 6) <= 4u) )
  {
LABEL_12:
    sub_1BDBADC(Local, v21, v24);
  }
  v33 = StringLiteral_767/*")"*/;
  *((_QWORD *)v26 + 8) = StringLiteral_767/*")"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v26 + 64), v33, v24, v32);
  Local = (char *)System_String__Concat_62612776((System_String_array *)v26, 0LL);
  if ( !gameObject )
LABEL_13:
    sub_1BDBAD4(Local, v21);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFigureTextureOld__SetCharacter(
    v22,
    dispType,
    v36,
    v35,
    callbackFunc,
    overWriteEquipId,
    ignoreOriginalOffset,
    0LL);
  UIMasterFigureTextureOld__SetDepth(v22, depth, 0LL);
  return v22;
}


UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  System_Nullable_Vector3__o v7; // 0:x2.16

  if ( (byte_4B43C30 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, method);
    byte_4B43C30 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  *(_QWORD *)&v7.fields.hasValue = 0LL;
  *(_QWORD *)&v7.fields.value.fields.y = 0LL;
  return MasterFigureManagerOld__CreateLocal((MasterFigureManagerOld_o *)Instance, parent, v7, v5);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab_39691108(
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
  __int64 v18; // x1

  if ( (byte_4B43C31 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, *(_QWORD *)&dispType);
    byte_4B43C31 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v18);
  return MasterFigureManagerOld__CreateLocal_39691300(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFigureManagerOld__DownloadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4B43C2D & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4B43C2D = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_39558628(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFigureManagerOld__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4B43C2C & 1) == 0 )
  {
    sub_1BDB878(&UIMasterFigureRenderOld_TypeInfo, *(_QWORD *)&equipId);
    byte_4B43C2C = 1;
  }
  if ( !UIMasterFigureRenderOld_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFigureRenderOld_TypeInfo);
  return UIMasterFigureRenderOld__GetAssetNameList(genderType, equipId, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFigureManagerOld__LoadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4B43C2E & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4B43C2E = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_39560804(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFigureManagerOld__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4B43C2F & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4B43C2F = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_39563148(AssetName, 0LL);
}