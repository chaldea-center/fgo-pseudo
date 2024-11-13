void __fastcall MasterFigureManagerOld___ctor(MasterFigureManagerOld_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15425 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__, method, v2);
    byte_4B15425 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
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
  __int64 v13; // x2
  UnityEngine_Component_o *Local; // x0
  __int64 v15; // x1
  UIMasterFigureTextureOld_o *v16; // x22
  UnityEngine_Object_o *gameObject; // x23
  System_String_o *v18; // x0
  int32_t enemyFaceIda; // [xsp+Ch] [xbp-44h] BYREF
  System_Nullable_Vector3__o v21; // 0:x2.16

  enemyFaceIda = enemyFaceId;
  if ( (byte_4B15424 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_14896/*"UIMasterFigureOld-Enemy("*/, parent, *(_QWORD *)&enemyFaceId);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v12, v13);
    byte_4B15424 = 1;
  }
  *(_QWORD *)&v21.fields.hasValue = 0LL;
  *(_QWORD *)&v21.fields.value.fields.y = 0LL;
  Local = (UnityEngine_Component_o *)MasterFigureManagerOld__CreateLocal(
                                       this,
                                       parent,
                                       v21,
                                       *(const MethodInfo **)&depth);
  if ( !Local
    || (v16 = (UIMasterFigureTextureOld_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        v18 = System_Int32__ToString((int32_t)&enemyFaceIda, 0LL),
        Local = (UnityEngine_Component_o *)System_String__Concat_62412480(
                                             (System_String_o *)StringLiteral_14896/*"UIMasterFigureOld-Enemy("*/,
                                             v18,
                                             (System_String_o *)StringLiteral_809/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_1BCAA3C(Local, v15);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFigureTextureOld__SetEnemy(v16, enemyFaceIda, enemyBattleId, callbackFunc, 0LL);
  UIMasterFigureTextureOld__SetDepth(v16, depth, 0LL);
  return v16;
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

  if ( (byte_4B15421 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__,
      *(_QWORD *)&enemyFaceId,
      *(_QWORD *)&enemyMasterBattleId);
    byte_4B15421 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v12);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *masterFigurePrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  UnityEngine_GameObject_o *v21; // x24
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v27; // x1
  __int64 v28; // x2
  float v29; // s2
  float v30; // s1
  float v31; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  v4 = *(_QWORD *)&offset.fields.value.fields.y;
  v5 = *(_QWORD *)&offset.fields.hasValue;
  if ( (byte_4B15422 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___,
      parent,
      *(_QWORD *)&offset.fields.hasValue);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__GetValueOrDefault__, v8, v9);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_HasValue__, v10, v11);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_14894/*"UIMasterFigureOld"*/, v16, v17);
    byte_4B15422 = 1;
  }
  masterFigurePrefab = (Il2CppObject *)this->fields.masterFigurePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFigurePrefab,
                                             (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_19;
  v21 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
  transform = UnityEngine_GameObject__get_transform(v21, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v21, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v21, (System_String_o *)StringLiteral_14894/*"UIMasterFigureOld"*/, 0LL);
  if ( !parent )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( (_BYTE)v5 )
  {
    v29 = *((float *)&v4 + 1);
    v30 = *(float *)&v4;
    v31 = *((float *)&v5 + 1);
  }
  else
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v27, v28);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v31 = static_fields->zeroVector.fields.x;
    v30 = static_fields->zeroVector.fields.y;
    v29 = static_fields->zeroVector.fields.z;
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v31, 0LL);
  if ( !byte_4B109C7 )
  {
    sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v33, v34);
    byte_4B109C7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v37, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL), !Component_object) )
  {
LABEL_19:
    sub_1BCAA3C(gameObject, v20);
  }
  UIMasterFigureRenderOld__SetLayer((UIMasterFigureRenderOld_o *)Component_object, (int32_t)gameObject, 0LL);
  return (UIMasterFigureTextureOld_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreateLocal_38634204(
        MasterFigureManagerOld_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t overWriteEquipId,
        System_Nullable_Vector3__o offset,
        const MethodInfo *method)
{
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  char *Local; // x0
  __int64 v23; // x1
  UIMasterFigureTextureOld_o *v24; // x23
  UnityEngine_Object_o *gameObject; // x24
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  char *v32; // x25
  int64_t v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  void *v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x1
  int32_t v61; // [xsp+8h] [xbp-58h] BYREF
  int32_t v62; // [xsp+Ch] [xbp-54h] BYREF

  v61 = equipId;
  v62 = genderType;
  if ( (byte_4B15423 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, parent, *(_QWORD *)&dispType);
    sub_1BCA7E0(&StringLiteral_915/*"-"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_14895/*"UIMasterFigureOld("*/, v20, v21);
    byte_4B15423 = 1;
  }
  Local = (char *)MasterFigureManagerOld__CreateLocal(this, parent, offset, *(const MethodInfo **)&equipId);
  if ( !Local )
    goto LABEL_13;
  v24 = (UIMasterFigureTextureOld_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0LL);
  Local = (char *)sub_1BCA888(string___TypeInfo, 5LL);
  if ( !Local )
    goto LABEL_13;
  v32 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v33 = StringLiteral_14895/*"UIMasterFigureOld("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14895/*"UIMasterFigureOld("*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(Local + 32), v33, v26, v27, v28, v29, v30, v31);
  Local = (char *)System_Int32__ToString((int32_t)&v62, 0LL);
  if ( *((_DWORD *)v32 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v32 + 5) = Local;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 40), (int64_t)Local, v34, v35, v36, v37, v38, v39);
  if ( *((_DWORD *)v32 + 6) <= 2u
    || (v46 = StringLiteral_915/*"-"*/,
        *((_QWORD *)v32 + 6) = StringLiteral_915/*"-"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 48), (int64_t)v46, v40, v41, v42, v43, v44, v45),
        Local = (char *)System_Int32__ToString((int32_t)&v61, 0LL),
        *((_DWORD *)v32 + 6) <= 3u)
    || (*((_QWORD *)v32 + 7) = Local,
        sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 56), (int64_t)Local, v47, v48, v49, v50, v51, v52),
        *((_DWORD *)v32 + 6) <= 4u) )
  {
LABEL_12:
    sub_1BCAA44(Local, v23);
  }
  v59 = StringLiteral_809/*")"*/;
  *((_QWORD *)v32 + 8) = StringLiteral_809/*")"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 64), v59, v53, v54, v55, v56, v57, v58);
  Local = (char *)System_String__Concat_62414748((System_String_array *)v32, 0LL);
  if ( !gameObject )
LABEL_13:
    sub_1BCAA3C(Local, v23);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFigureTextureOld__SetCharacter(v24, dispType, v62, v61, callbackFunc, overWriteEquipId, 0LL);
  UIMasterFigureTextureOld__SetDepth(v24, depth, 0LL);
  return v24;
}


UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  System_Nullable_Vector3__o v8; // 0:x2.16

  if ( (byte_4B1541F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, method, v2);
    byte_4B1541F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  *(_QWORD *)&v8.fields.hasValue = 0LL;
  *(_QWORD *)&v8.fields.value.fields.y = 0LL;
  return MasterFigureManagerOld__CreateLocal((MasterFigureManagerOld_o *)Instance, parent, v8, v6);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab_38634032(
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t overWriteEquipId,
        System_Nullable_Vector3__o offset,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v17; // x1

  if ( (byte_4B15420 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__,
      *(_QWORD *)&dispType,
      *(_QWORD *)&genderType);
    byte_4B15420 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v17);
  return MasterFigureManagerOld__CreateLocal_38634204(
           (MasterFigureManagerOld_o *)Instance,
           parent,
           dispType,
           genderType,
           equipId,
           depth,
           callbackFunc,
           overWriteEquipId,
           offset,
           method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFigureManagerOld__DownloadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_array *AssetName; // x20

  if ( (byte_4B1541C & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&equipId, callback);
    byte_4B1541C = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
  AssetManager__downloadAssetStorage_38510160(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFigureManagerOld__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4B1541B & 1) == 0 )
  {
    sub_1BCA7E0(&UIMasterFigureRenderOld_TypeInfo, *(_QWORD *)&equipId, method);
    byte_4B1541B = 1;
  }
  if ( !UIMasterFigureRenderOld_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFigureRenderOld_TypeInfo, *(_QWORD *)&equipId);
  return UIMasterFigureRenderOld__GetAssetNameList(genderType, equipId, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFigureManagerOld__LoadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_array *AssetName; // x20

  if ( (byte_4B1541D & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&equipId, callback);
    byte_4B1541D = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
  AssetManager__loadAssetStorage_38512336(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFigureManagerOld__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_array *AssetName; // x19

  if ( (byte_4B1541E & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&equipId, method);
    byte_4B1541E = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
  AssetManager__releaseAssetStorage_38514680(AssetName, 0LL);
}