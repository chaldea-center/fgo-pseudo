void MasterFullFigureManager___ctor(MasterFullFigureManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CC6549 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
    byte_4CC6549 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A5F640 *)Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
}


UIMasterFullFigureTexture_o *MasterFullFigureManager__CreateLocal(
        MasterFullFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *masterFigurePrefab; // x20
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

  if ( (byte_4CC6547 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
    sub_1C713B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_14755/*"UIMasterFullFigure"*/);
    byte_4CC6547 = 1;
  }
  masterFigurePrefab = (Il2CppObject *)this->fields.masterFigurePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFigurePrefab,
                                             (const MethodInfo_31D7CB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v8 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
  transform = UnityEngine_GameObject__get_transform(v8, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_14755/*"UIMasterFullFigure"*/, 0);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0);
  if ( !byte_4CC0D09 )
  {
    sub_1C713B0(&UnityEngine_Vector3_TypeInfo);
    byte_4CC0D09 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4CC0D0F )
  {
    sub_1C713B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4CC0D0F = 1;
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
    sub_1C71608(gameObject, v7);
  }
  UIMasterFullFigureRender__SetLayer((UIMasterFullFigureRender_o *)Component_object, (int32_t)gameObject, 0);
  return (UIMasterFullFigureTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *MasterFullFigureManager__CreateLocal_40948236(
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
  __int64 v14; // x1
  UIMasterFullFigureTexture_o *v15; // x22
  UnityEngine_Object_o *gameObject; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  char *v23; // x24
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t v50; // w1
  int32_t v52; // [xsp+8h] [xbp-48h] BYREF
  int32_t v53; // [xsp+Ch] [xbp-44h] BYREF

  v52 = equipId;
  v53 = genderType;
  if ( (byte_4CC6548 & 1) == 0 )
  {
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_14756/*"UIMasterFullFigure("*/);
    sub_1C713B0(&StringLiteral_858/*"-"*/);
    sub_1C713B0(&StringLiteral_756/*")"*/);
    byte_4CC6548 = 1;
  }
  Local = (char *)MasterFullFigureManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local )
    goto LABEL_13;
  v15 = (UIMasterFullFigureTexture_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0);
  Local = (char *)sub_1C71458(string___TypeInfo, 5);
  if ( !Local )
    goto LABEL_13;
  v23 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v24 = StringLiteral_14756/*"UIMasterFullFigure("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14756/*"UIMasterFullFigure("*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(Local + 32), v24, v17, v18, v19, v20, v21, v22);
  Local = (char *)System_Int32__ToString((int32_t)&v53, 0);
  if ( *((_DWORD *)v23 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v23 + 5) = Local;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v23 + 40), (int32_t)Local, v25, v26, v27, v28, v29, v30);
  if ( *((_DWORD *)v23 + 6) <= 2u
    || (v37 = (int)StringLiteral_858/*"-"*/,
        *((_QWORD *)v23 + 6) = StringLiteral_858/*"-"*/,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v23 + 48), v37, v31, v32, v33, v34, v35, v36),
        Local = (char *)System_Int32__ToString((int32_t)&v52, 0),
        *((_DWORD *)v23 + 6) <= 3u)
    || (*((_QWORD *)v23 + 7) = Local,
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v23 + 56), (int32_t)Local, v38, v39, v40, v41, v42, v43),
        *((_DWORD *)v23 + 6) <= 4u) )
  {
LABEL_12:
    sub_1C71610(Local);
  }
  v50 = StringLiteral_756/*")"*/;
  *((_QWORD *)v23 + 8) = StringLiteral_756/*")"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v23 + 64), v50, v44, v45, v46, v47, v48, v49);
  Local = (char *)System_String__Concat_64072256((System_String_array *)v23, 0);
  if ( !gameObject )
LABEL_13:
    sub_1C71608(Local, v14);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0);
  UIMasterFullFigureTexture__SetCharacter(v15, dispType, v53, v52, callbackFunc, 0);
  UIMasterFullFigureTexture__SetDepth(v15, depth, 0);
  return v15;
}


UIMasterFullFigureTexture_o *MasterFullFigureManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4CC6545 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
    byte_4CC6545 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v4);
  return MasterFullFigureManager__CreateLocal((MasterFullFigureManager_o *)Instance, parent, v5);
}


UIMasterFullFigureTexture_o *MasterFullFigureManager__CreatePrefab_40948088(
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

  if ( (byte_4CC6546 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
    byte_4CC6546 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C71608(0, v14);
  return MasterFullFigureManager__CreateLocal_40948236(
           (MasterFullFigureManager_o *)Instance,
           parent,
           dispType,
           genderType,
           equipId,
           depth,
           callbackFunc,
           v15);
}


void MasterFullFigureManager__DownloadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4CC6542 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    byte_4CC6542 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_40812704(AssetName, callback, 0);
}


System_String_array *MasterFullFigureManager__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4CC6541 & 1) == 0 )
  {
    sub_1C713B0(&UIMasterFullFigureRender_TypeInfo);
    byte_4CC6541 = 1;
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

  if ( (byte_4CC6543 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    byte_4CC6543 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_40814884(AssetName, callback, 1, 0);
}


void MasterFullFigureManager__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4CC6544 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    byte_4CC6544 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_40817232(AssetName, 0);
}