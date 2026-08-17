void MasterFigureManagerOld___ctor(MasterFigureManagerOld_o *this, const MethodInfo *method)
{
  if ( (byte_596F911 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
    byte_596F911 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
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
  if ( (byte_596F910 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_15351/*"UIMasterFigureOld-Enemy("*/);
    sub_2213A60(&StringLiteral_789/*")"*/);
    byte_596F910 = 1;
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
        Local = (UnityEngine_Component_o *)System_String__Concat_75694928(
                                             (System_String_o *)StringLiteral_15351/*"UIMasterFigureOld-Enemy("*/,
                                             v16,
                                             (System_String_o *)StringLiteral_789/*")"*/,
                                             0),
        !gameObject) )
  {
    sub_2213CDC(Local, v13);
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

  if ( (byte_596F90D & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
    byte_596F90D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v12);
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
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v17; // kr00_8
  float v18; // s0 OVERLAPPED
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  v4 = *(_QWORD *)&offset.fields.value.fields.y;
  v5 = *(_QWORD *)&offset.fields.hasValue;
  if ( (byte_596F90E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
    sub_2213A60(&Method_System_Nullable_Vector3__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_15349/*"UIMasterFigureOld"*/);
    byte_596F90E = 1;
  }
  masterFigurePrefab = (Il2CppObject *)this->fields.masterFigurePrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent, *(_QWORD *)&offset.fields.hasValue);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFigurePrefab,
                                             (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_19;
  v11 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
  transform = UnityEngine_GameObject__get_transform(v11, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0);
  if ( !gameObject )
    goto LABEL_19;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_15349/*"UIMasterFigureOld"*/, 0);
  if ( !parent )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0);
  if ( (_BYTE)v5 )
  {
    v17 = v4;
    v18 = *((float *)&v5 + 1);
  }
  else
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v18 = static_fields->zeroVector.fields.x;
    v17 = *(_QWORD *)&static_fields->zeroVector.fields.y;
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v18, 0);
  if ( !byte_5969AE6 )
  {
    sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
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
    sub_2213CDC(gameObject, v10);
  }
  UIMasterFigureRenderOld__SetLayer((UIMasterFigureRenderOld_o *)Component_object, (int32_t)gameObject, 0);
  return (UIMasterFigureTextureOld_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *MasterFigureManagerOld__CreateLocal_47634436(
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
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  char *v27; // x25
  int32_t v28; // w1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t v54; // w1
  int32_t v56; // [xsp+8h] [xbp-58h] BYREF
  int32_t v57; // [xsp+Ch] [xbp-54h] BYREF

  v56 = equipId;
  v57 = genderType;
  if ( (byte_596F90F & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_923/*"-"*/);
    sub_2213A60(&StringLiteral_789/*")"*/);
    sub_2213A60(&StringLiteral_15350/*"UIMasterFigureOld("*/);
    byte_596F90F = 1;
  }
  Local = (char *)MasterFigureManagerOld__CreateLocal(this, parent, offset, *(const MethodInfo **)&equipId);
  if ( !Local )
    goto LABEL_13;
  v19 = (UIMasterFigureTextureOld_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0);
  Local = (char *)sub_2213B20(string___TypeInfo, 5);
  if ( !Local )
    goto LABEL_13;
  v27 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v28 = StringLiteral_15350/*"UIMasterFigureOld("*/;
  *((_QWORD *)Local + 4) = StringLiteral_15350/*"UIMasterFigureOld("*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(Local + 32), v28, v21, v22, v23, v24, v25, v26);
  Local = (char *)System_Int32__ToString((int32_t)&v57, 0);
  if ( (*((_DWORD *)v27 + 6) & 0xFFFFFFFE) == 0 )
    goto LABEL_12;
  *((_QWORD *)v27 + 5) = Local;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 40), (int32_t)Local, v29, v30, v31, v32, v33, v34);
  if ( *((_DWORD *)v27 + 6) <= 2u
    || (v41 = (int)StringLiteral_923/*"-"*/,
        *((_QWORD *)v27 + 6) = StringLiteral_923/*"-"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 48), v41, v35, v36, v37, v38, v39, v40),
        Local = (char *)System_Int32__ToString((int32_t)&v56, 0),
        (*((_DWORD *)v27 + 6) & 0xFFFFFFFC) == 0)
    || (*((_QWORD *)v27 + 7) = Local,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 56), (int32_t)Local, v42, v43, v44, v45, v46, v47),
        *((_DWORD *)v27 + 6) <= 4u) )
  {
LABEL_12:
    sub_2213CE4(Local);
  }
  v54 = StringLiteral_789/*")"*/;
  *((_QWORD *)v27 + 8) = StringLiteral_789/*")"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 64), v54, v48, v49, v50, v51, v52, v53);
  Local = (char *)System_String__Concat_75697120((System_String_array *)v27, 0);
  if ( !gameObject )
LABEL_13:
    sub_2213CDC(Local, v18);
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

  if ( (byte_596F90B & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
    byte_596F90B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  *(_QWORD *)&v7.fields.hasValue = 0;
  *(_QWORD *)&v7.fields.value.fields.y = 0;
  return MasterFigureManagerOld__CreateLocal((MasterFigureManagerOld_o *)Instance, parent, v7, v5);
}


UIMasterFigureTextureOld_o *MasterFigureManagerOld__CreatePrefab_47634244(
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

  if ( (byte_596F90C & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
    byte_596F90C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v18);
  return MasterFigureManagerOld__CreateLocal_47634436(
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_array *AssetName; // x20

  if ( (byte_596F908 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F908 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
  AssetManager__downloadAssetStorage_47501572(AssetName, callback, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *MasterFigureManagerOld__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_596F907 & 1) == 0 )
  {
    sub_2213A60(&UIMasterFigureRenderOld_TypeInfo);
    byte_596F907 = 1;
  }
  if ( !*(&UIMasterFigureRenderOld_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIMasterFigureRenderOld_TypeInfo, *(_QWORD *)&equipId, method);
  return UIMasterFigureRenderOld__GetAssetNameList(genderType, equipId, 0, 0);
}


void MasterFigureManagerOld__LoadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_array *AssetName; // x20

  if ( (byte_596F909 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F909 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
  AssetManager__loadAssetStorage_47503780(AssetName, callback, 1, 0);
}


void MasterFigureManagerOld__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_array *AssetName; // x19

  if ( (byte_596F90A & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F90A = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, method);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5, v6);
  AssetManager__releaseAssetStorage_47506132(AssetName, 0);
}