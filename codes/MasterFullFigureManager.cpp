void MasterFullFigureManager___ctor(MasterFullFigureManager_o *this, const MethodInfo *method)
{
  if ( (byte_596F91A & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
    byte_596F91A = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
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
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12

  if ( (byte_596F918 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_15352/*"UIMasterFullFigure"*/);
    byte_596F918 = 1;
  }
  masterFigurePrefab = (Il2CppObject *)this->fields.masterFigurePrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent, method);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFigurePrefab,
                                             (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v8 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
  transform = UnityEngine_GameObject__get_transform(v8, 0);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0);
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_15352/*"UIMasterFullFigure"*/, 0);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_5969AE6 )
  {
    sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
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
LABEL_16:
    sub_2213CDC(gameObject, v7);
  }
  UIMasterFullFigureRender__SetLayer((UIMasterFullFigureRender_o *)Component_object, (int32_t)gameObject, 0);
  return (UIMasterFullFigureTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *MasterFullFigureManager__CreateLocal_47636668(
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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  char *v23; // x24
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  int32_t v50; // w1
  int32_t v52; // [xsp+8h] [xbp-48h] BYREF
  int32_t v53; // [xsp+Ch] [xbp-44h] BYREF

  v52 = equipId;
  v53 = genderType;
  if ( (byte_596F919 & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_15353/*"UIMasterFullFigure("*/);
    sub_2213A60(&StringLiteral_923/*"-"*/);
    sub_2213A60(&StringLiteral_789/*")"*/);
    byte_596F919 = 1;
  }
  Local = (char *)MasterFullFigureManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local )
    goto LABEL_13;
  v15 = (UIMasterFullFigureTexture_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0);
  Local = (char *)sub_2213B20(string___TypeInfo, 5);
  if ( !Local )
    goto LABEL_13;
  v23 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v24 = StringLiteral_15353/*"UIMasterFullFigure("*/;
  *((_QWORD *)Local + 4) = StringLiteral_15353/*"UIMasterFullFigure("*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(Local + 32), v24, v17, v18, v19, v20, v21, v22);
  Local = (char *)System_Int32__ToString((int32_t)&v53, 0);
  if ( (*((_DWORD *)v23 + 6) & 0xFFFFFFFE) == 0 )
    goto LABEL_12;
  *((_QWORD *)v23 + 5) = Local;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 40), (int32_t)Local, v25, v26, v27, v28, v29, v30);
  if ( *((_DWORD *)v23 + 6) <= 2u
    || (v37 = (int)StringLiteral_923/*"-"*/,
        *((_QWORD *)v23 + 6) = StringLiteral_923/*"-"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 48), v37, v31, v32, v33, v34, v35, v36),
        Local = (char *)System_Int32__ToString((int32_t)&v52, 0),
        (*((_DWORD *)v23 + 6) & 0xFFFFFFFC) == 0)
    || (*((_QWORD *)v23 + 7) = Local,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 56), (int32_t)Local, v38, v39, v40, v41, v42, v43),
        *((_DWORD *)v23 + 6) <= 4u) )
  {
LABEL_12:
    sub_2213CE4(Local);
  }
  v50 = StringLiteral_789/*")"*/;
  *((_QWORD *)v23 + 8) = StringLiteral_789/*")"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 64), v50, v44, v45, v46, v47, v48, v49);
  Local = (char *)System_String__Concat_75697120((System_String_array *)v23, 0);
  if ( !gameObject )
LABEL_13:
    sub_2213CDC(Local, v14);
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

  if ( (byte_596F916 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
    byte_596F916 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  return MasterFullFigureManager__CreateLocal((MasterFullFigureManager_o *)Instance, parent, v5);
}


UIMasterFullFigureTexture_o *MasterFullFigureManager__CreatePrefab_47636520(
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

  if ( (byte_596F917 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
    byte_596F917 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v14);
  return MasterFullFigureManager__CreateLocal_47636668(
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_array *AssetName; // x20

  if ( (byte_596F913 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F913 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
  AssetManager__downloadAssetStorage_47501572(AssetName, callback, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *MasterFullFigureManager__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_596F912 & 1) == 0 )
  {
    sub_2213A60(&UIMasterFullFigureRender_TypeInfo);
    byte_596F912 = 1;
  }
  if ( !*(&UIMasterFullFigureRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UIMasterFullFigureRender_TypeInfo, *(_QWORD *)&equipId, method);
  return UIMasterFullFigureRender__GetAssetNameList(genderType, equipId, 0);
}


void MasterFullFigureManager__LoadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_array *AssetName; // x20

  if ( (byte_596F914 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F914 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
  AssetManager__loadAssetStorage_47503780(AssetName, callback, 1, 0);
}


void MasterFullFigureManager__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_array *AssetName; // x19

  if ( (byte_596F915 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F915 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, method);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5, v6);
  AssetManager__releaseAssetStorage_47506132(AssetName, 0);
}