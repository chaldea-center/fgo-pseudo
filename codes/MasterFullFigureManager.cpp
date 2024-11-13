void __fastcall MasterFullFigureManager___ctor(MasterFullFigureManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1542E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__, method, v2);
    byte_4B1542E = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreateLocal(
        MasterFullFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *masterFigurePrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x22
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1542C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___, parent, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_14897/*"UIMasterFullFigure"*/, v9, v10);
    byte_4B1542C = 1;
  }
  masterFigurePrefab = (Il2CppObject *)this->fields.masterFigurePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFigurePrefab,
                                             (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v14 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
  transform = UnityEngine_GameObject__get_transform(v14, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v14, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v14, (System_String_o *)StringLiteral_14897/*"UIMasterFullFigure"*/, 0LL);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v21);
    byte_4B109C1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B109C7 )
  {
    sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v22, v23);
    byte_4B109C7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v26, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL), !Component_object) )
  {
LABEL_16:
    sub_1BCAA3C(gameObject, v13);
  }
  UIMasterFullFigureRender__SetLayer((UIMasterFullFigureRender_o *)Component_object, (int32_t)gameObject, 0LL);
  return (UIMasterFullFigureTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreateLocal_38636428(
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  char *Local; // x0
  __int64 v20; // x1
  UIMasterFullFigureTexture_o *v21; // x22
  UnityEngine_Object_o *gameObject; // x23
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  char *v29; // x24
  int64_t v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  void *v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x1
  int32_t v58; // [xsp+8h] [xbp-48h] BYREF
  int32_t v59; // [xsp+Ch] [xbp-44h] BYREF

  v58 = equipId;
  v59 = genderType;
  if ( (byte_4B1542D & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, parent, *(_QWORD *)&dispType);
    sub_1BCA7E0(&StringLiteral_14898/*"UIMasterFullFigure("*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v17, v18);
    byte_4B1542D = 1;
  }
  Local = (char *)MasterFullFigureManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local )
    goto LABEL_13;
  v21 = (UIMasterFullFigureTexture_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0LL);
  Local = (char *)sub_1BCA888(string___TypeInfo, 5LL);
  if ( !Local )
    goto LABEL_13;
  v29 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v30 = StringLiteral_14898/*"UIMasterFullFigure("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14898/*"UIMasterFullFigure("*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(Local + 32), v30, v23, v24, v25, v26, v27, v28);
  Local = (char *)System_Int32__ToString((int32_t)&v59, 0LL);
  if ( *((_DWORD *)v29 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v29 + 5) = Local;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 40), (int64_t)Local, v31, v32, v33, v34, v35, v36);
  if ( *((_DWORD *)v29 + 6) <= 2u
    || (v43 = StringLiteral_915/*"-"*/,
        *((_QWORD *)v29 + 6) = StringLiteral_915/*"-"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 48), (int64_t)v43, v37, v38, v39, v40, v41, v42),
        Local = (char *)System_Int32__ToString((int32_t)&v58, 0LL),
        *((_DWORD *)v29 + 6) <= 3u)
    || (*((_QWORD *)v29 + 7) = Local,
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 56), (int64_t)Local, v44, v45, v46, v47, v48, v49),
        *((_DWORD *)v29 + 6) <= 4u) )
  {
LABEL_12:
    sub_1BCAA44(Local, v20);
  }
  v56 = StringLiteral_809/*")"*/;
  *((_QWORD *)v29 + 8) = StringLiteral_809/*")"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 64), v56, v50, v51, v52, v53, v54, v55);
  Local = (char *)System_String__Concat_62414748((System_String_array *)v29, 0LL);
  if ( !gameObject )
LABEL_13:
    sub_1BCAA3C(Local, v20);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFullFigureTexture__SetCharacter(v21, dispType, v59, v58, callbackFunc, 0LL);
  UIMasterFullFigureTexture__SetDepth(v21, depth, 0LL);
  return v21;
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B1542A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__, method, v2);
    byte_4B1542A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  return MasterFullFigureManager__CreateLocal((MasterFullFigureManager_o *)Instance, parent, v6);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab_38636280(
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

  if ( (byte_4B1542B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__,
      *(_QWORD *)&dispType,
      *(_QWORD *)&genderType);
    byte_4B1542B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v14);
  return MasterFullFigureManager__CreateLocal_38636428(
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
  __int64 v7; // x1
  System_String_array *AssetName; // x20

  if ( (byte_4B15427 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&equipId, callback);
    byte_4B15427 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
  AssetManager__downloadAssetStorage_38510160(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFullFigureManager__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4B15426 & 1) == 0 )
  {
    sub_1BCA7E0(&UIMasterFullFigureRender_TypeInfo, *(_QWORD *)&equipId, method);
    byte_4B15426 = 1;
  }
  if ( !UIMasterFullFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFullFigureRender_TypeInfo, *(_QWORD *)&equipId);
  return UIMasterFullFigureRender__GetAssetNameList(genderType, equipId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFullFigureManager__LoadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_array *AssetName; // x20

  if ( (byte_4B15428 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&equipId, callback);
    byte_4B15428 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
  AssetManager__loadAssetStorage_38512336(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFullFigureManager__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_array *AssetName; // x19

  if ( (byte_4B15429 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&equipId, method);
    byte_4B15429 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
  AssetManager__releaseAssetStorage_38514680(AssetName, 0LL);
}