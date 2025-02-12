void __fastcall MasterFullFigureManager___ctor(MasterFullFigureManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BB3903 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__, method);
    byte_4BB3903 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3869FF0 *)Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
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

  if ( (byte_4BB3901 & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___, parent);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v6);
    sub_1C13D24(&StringLiteral_14970/*"UIE_VertexTexturingIsAvailable"*/, v7);
    byte_4BB3901 = 1;
  }
  masterFigurePrefab = (Il2CppObject *)this->fields.masterFigurePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFigurePrefab,
                                             (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v11 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_14970/*"UIE_VertexTexturingIsAvailable"*/, 0LL);
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
  UIMasterFullFigureRender__SetLayer((UIMasterFullFigureRender_o *)Component_object, (int32_t)gameObject, 0LL);
  return (UIMasterFullFigureTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreateLocal_39067076(
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  char *v26; // x24
  int64_t v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  void *v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x1
  int32_t v55; // [xsp+8h] [xbp-48h] BYREF
  int32_t v56; // [xsp+Ch] [xbp-44h] BYREF

  v55 = equipId;
  v56 = genderType;
  if ( (byte_4BB3902 & 1) == 0 )
  {
    sub_1C13D24(&string___TypeInfo, parent);
    sub_1C13D24(&StringLiteral_14971/*"UIElements: Too many children recursively added that rely on persistent view data: "*/, v13);
    sub_1C13D24(&StringLiteral_918/*"-"*/, v14);
    sub_1C13D24(&StringLiteral_812/*")"*/, v15);
    byte_4BB3902 = 1;
  }
  Local = (char *)MasterFullFigureManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local )
    goto LABEL_13;
  v18 = (UIMasterFullFigureTexture_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0LL);
  Local = (char *)sub_1C13DCC(string___TypeInfo, 5LL);
  if ( !Local )
    goto LABEL_13;
  v26 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v27 = StringLiteral_14971/*"UIElements: Too many children recursively added that rely on persistent view data: "*/;
  *((_QWORD *)Local + 4) = StringLiteral_14971/*"UIElements: Too many children recursively added that rely on persistent view data: "*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(Local + 32), v27, v20, v21, v22, v23, v24, v25);
  Local = (char *)System_Int32__ToString((int32_t)&v56, 0LL);
  if ( *((_DWORD *)v26 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v26 + 5) = Local;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v26 + 40), (int64_t)Local, v28, v29, v30, v31, v32, v33);
  if ( *((_DWORD *)v26 + 6) <= 2u
    || (v40 = StringLiteral_918/*"-"*/,
        *((_QWORD *)v26 + 6) = StringLiteral_918/*"-"*/,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v26 + 48), (int64_t)v40, v34, v35, v36, v37, v38, v39),
        Local = (char *)System_Int32__ToString((int32_t)&v55, 0LL),
        *((_DWORD *)v26 + 6) <= 3u)
    || (*((_QWORD *)v26 + 7) = Local,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v26 + 56), (int64_t)Local, v41, v42, v43, v44, v45, v46),
        *((_DWORD *)v26 + 6) <= 4u) )
  {
LABEL_12:
    sub_1C13F88(Local, v17);
  }
  v53 = StringLiteral_812/*")"*/;
  *((_QWORD *)v26 + 8) = StringLiteral_812/*")"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v26 + 64), v53, v47, v48, v49, v50, v51, v52);
  Local = (char *)System_String__Concat_62981472((System_String_array *)v26, 0LL);
  if ( !gameObject )
LABEL_13:
    sub_1C13F80(Local, v17);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFullFigureTexture__SetCharacter(v18, dispType, v56, v55, callbackFunc, 0LL);
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

  if ( (byte_4BB38FF & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__, method);
    byte_4BB38FF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v4);
  return MasterFullFigureManager__CreateLocal((MasterFullFigureManager_o *)Instance, parent, v5);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab_39066928(
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

  if ( (byte_4BB3900 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__, *(_QWORD *)&dispType);
    byte_4BB3900 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v14);
  return MasterFullFigureManager__CreateLocal_39067076(
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

  if ( (byte_4BB38FC & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4BB38FC = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_38939776(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFullFigureManager__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4BB38FB & 1) == 0 )
  {
    sub_1C13D24(&UIMasterFullFigureRender_TypeInfo, *(_QWORD *)&equipId);
    byte_4BB38FB = 1;
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

  if ( (byte_4BB38FD & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4BB38FD = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_38941952(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFullFigureManager__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4BB38FE & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4BB38FE = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_38944296(AssetName, 0LL);
}