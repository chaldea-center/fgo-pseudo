void MasterFigureManagerOld___ctor(MasterFigureManagerOld_o *this, const MethodInfo *method)
{
  if ( (byte_4D2FB52 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
    byte_4D2FB52 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3AC57E4 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
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
  __int64 v13; // x1
  UIMasterFigureTextureOld_o *v14; // x22
  UnityEngine_Object_o *gameObject; // x23
  System_String_o *v16; // x0
  int32_t enemyFaceIda; // [xsp+Ch] [xbp-44h] BYREF
  System_Nullable_Vector3__o v19; // 0:x2.16

  enemyFaceIda = enemyFaceId;
  if ( (byte_4D2FB51 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_14846/*"UIMasterFigureOld-Enemy("*/);
    sub_1C93AD4(&StringLiteral_757/*")"*/);
    byte_4D2FB51 = 1;
  }
  *(_QWORD *)&v19.fields.hasValue = 0;
  *(_QWORD *)&v19.fields.value.fields.y = 0;
  Local = (UnityEngine_Component_o *)MasterFigureManagerOld__CreateLocal(
                                       this,
                                       parent,
                                       v19,
                                       *(const MethodInfo **)&depth);
  if ( !Local
    || (v14 = (UIMasterFigureTextureOld_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0),
        v16 = System_Int32__ToString((int32_t)&enemyFaceIda, 0),
        Local = (UnityEngine_Component_o *)System_String__Concat_64463988(
                                             (System_String_o *)StringLiteral_14846/*"UIMasterFigureOld-Enemy("*/,
                                             v16,
                                             (System_String_o *)StringLiteral_757/*")"*/,
                                             0),
        !gameObject) )
  {
    sub_1C93D2C(Local, v13);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0);
  UIMasterFigureTextureOld__SetEnemy(v14, enemyFaceIda, enemyBattleId, callbackFunc, 0);
  UIMasterFigureTextureOld__SetDepth(v14, depth, 0);
  return v14;
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
  __int64 v12; // x1
  const MethodInfo *v13; // x6

  if ( (byte_4D2FB4E & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
    byte_4D2FB4E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v12);
  return MasterFigureManagerOld__CreateEnemyLocal(
           (MasterFigureManagerOld_o *)Instance,
           parent,
           enemyFaceId,
           enemyMasterBattleId,
           depth,
           callbackFunc,
           v13);
}


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
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x24
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x23
  float x; // s0
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12
  UnityEngine_Vector3_o v17; // 0:kr14_12.12
  UnityEngine_Vector3_o zeroVector; // 0:kr20_12.12
  __int64 v19; // 0:s1.4,4:s2.4

  v4 = *(_QWORD *)&offset.fields.value.fields.y;
  v5 = *(_QWORD *)&offset.fields.hasValue;
  if ( (byte_4D2FB4F & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
    sub_1C93AD4(&Method_System_Nullable_Vector3__GetValueOrDefault__);
    sub_1C93AD4(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_14844/*"UIMasterFigureOld"*/);
    byte_4D2FB4F = 1;
  }
  masterFigurePrefab = (Il2CppObject *)this->fields.masterFigurePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFigurePrefab,
                                             (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_19;
  v11 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
  transform = UnityEngine_GameObject__get_transform(v11, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0);
  if ( !gameObject )
    goto LABEL_19;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_14844/*"UIMasterFigureOld"*/, 0);
  if ( !parent )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0);
  if ( (_BYTE)v5 )
  {
    v19 = v4;
    x = *((float *)&v5 + 1);
  }
  else
  {
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
    x = zeroVector.fields.x;
    v19 = *(_QWORD *)&zeroVector.fields.y;
  }
  v17.fields.x = x;
  *(_QWORD *)&v17.fields.y = v19;
  UnityEngine_Transform__set_localPosition(transform, v17, 0);
  if ( !byte_4D2A13F )
  {
    sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
    byte_4D2A13F = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  UnityEngine_Transform__set_localScale(transform, localScale, 0);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0), !Component_object) )
  {
LABEL_19:
    sub_1C93D2C(gameObject, v10);
  }
  UIMasterFigureRenderOld__SetLayer((UIMasterFigureRenderOld_o *)Component_object, (int32_t)gameObject, 0);
  return (UIMasterFigureTextureOld_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *MasterFigureManagerOld__CreateLocal_41389952(
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
  __int64 v18; // x1
  UIMasterFigureTextureOld_o *v19; // x23
  UnityEngine_Object_o *gameObject; // x24
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  char *v27; // x25
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w1
  int32_t v56; // [xsp+8h] [xbp-58h] BYREF
  int32_t v57; // [xsp+Ch] [xbp-54h] BYREF

  v56 = equipId;
  v57 = genderType;
  if ( (byte_4D2FB50 & 1) == 0 )
  {
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_859/*"-"*/);
    sub_1C93AD4(&StringLiteral_757/*")"*/);
    sub_1C93AD4(&StringLiteral_14845/*"UIMasterFigureOld("*/);
    byte_4D2FB50 = 1;
  }
  Local = (char *)MasterFigureManagerOld__CreateLocal(this, parent, offset, *(const MethodInfo **)&equipId);
  if ( !Local )
    goto LABEL_13;
  v19 = (UIMasterFigureTextureOld_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0);
  Local = (char *)sub_1C93B7C(string___TypeInfo, 5);
  if ( !Local )
    goto LABEL_13;
  v27 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v28 = StringLiteral_14845/*"UIMasterFigureOld("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14845/*"UIMasterFigureOld("*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(Local + 32), v28, v21, v22, v23, v24, v25, v26);
  Local = (char *)System_Int32__ToString((int32_t)&v57, 0);
  if ( *((_DWORD *)v27 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v27 + 5) = Local;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 40), (int32_t)Local, v29, v30, v31, v32, v33, v34);
  if ( *((_DWORD *)v27 + 6) <= 2u
    || (v41 = (int)StringLiteral_859/*"-"*/,
        *((_QWORD *)v27 + 6) = StringLiteral_859/*"-"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 48), v41, v35, v36, v37, v38, v39, v40),
        Local = (char *)System_Int32__ToString((int32_t)&v56, 0),
        *((_DWORD *)v27 + 6) <= 3u)
    || (*((_QWORD *)v27 + 7) = Local,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 56), (int32_t)Local, v42, v43, v44, v45, v46, v47),
        *((_DWORD *)v27 + 6) <= 4u) )
  {
LABEL_12:
    sub_1C93D34(Local);
  }
  v54 = StringLiteral_757/*")"*/;
  *((_QWORD *)v27 + 8) = StringLiteral_757/*")"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 64), v54, v48, v49, v50, v51, v52, v53);
  Local = (char *)System_String__Concat_64466256((System_String_array *)v27, 0);
  if ( !gameObject )
LABEL_13:
    sub_1C93D2C(Local, v18);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0);
  UIMasterFigureTextureOld__SetCharacter(
    v19,
    dispType,
    v57,
    v56,
    callbackFunc,
    overWriteEquipId,
    ignoreOriginalOffset,
    0);
  UIMasterFigureTextureOld__SetDepth(v19, depth, 0);
  return v19;
}


UIMasterFigureTextureOld_o *MasterFigureManagerOld__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  System_Nullable_Vector3__o v7; // 0:x2.16

  if ( (byte_4D2FB4C & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
    byte_4D2FB4C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  *(_QWORD *)&v7.fields.hasValue = 0;
  *(_QWORD *)&v7.fields.value.fields.y = 0;
  return MasterFigureManagerOld__CreateLocal((MasterFigureManagerOld_o *)Instance, parent, v7, v5);
}


UIMasterFigureTextureOld_o *MasterFigureManagerOld__CreatePrefab_41389760(
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

  if ( (byte_4D2FB4D & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
    byte_4D2FB4D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v18);
  return MasterFigureManagerOld__CreateLocal_41389952(
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

  if ( (byte_4D2FB49 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D2FB49 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_41252580(AssetName, callback, 0);
}


System_String_array *MasterFigureManagerOld__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4D2FB48 & 1) == 0 )
  {
    sub_1C93AD4(&UIMasterFigureRenderOld_TypeInfo);
    byte_4D2FB48 = 1;
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

  if ( (byte_4D2FB4A & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D2FB4A = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_41254760(AssetName, callback, 1, 0);
}


void MasterFigureManagerOld__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4D2FB4B & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D2FB4B = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_41257108(AssetName, 0);
}