void __fastcall MasterFigureManagerOld___ctor(MasterFigureManagerOld_o *this, const MethodInfo *method)
{
  if ( (byte_4B363BF & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__, method);
    byte_4B363BF = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37FE060 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
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
  if ( (byte_4B363BE & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_14915/*"UIMasterFigureOld-Enemy("*/, parent);
    sub_1BD3458(&StringLiteral_809/*")"*/, v12);
    byte_4B363BE = 1;
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
        Local = (UnityEngine_Component_o *)System_String__Concat_62536508(
                                             (System_String_o *)StringLiteral_14915/*"UIMasterFigureOld-Enemy("*/,
                                             v17,
                                             (System_String_o *)StringLiteral_809/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_1BD36B4(Local, v14);
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

  if ( (byte_4B363BB & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, *(_QWORD *)&enemyFaceId);
    byte_4B363BB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v12);
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
  if ( (byte_4B363BC & 1) == 0 )
  {
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___, parent);
    sub_1BD3458(&Method_System_Nullable_Vector3__GetValueOrDefault__, v8);
    sub_1BD3458(&Method_System_Nullable_Vector3__get_HasValue__, v9);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v11);
    sub_1BD3458(&StringLiteral_14913/*"UIMasterFigureOld"*/, v12);
    byte_4B363BC = 1;
  }
  masterFigurePrefab = (Il2CppObject *)this->fields.masterFigurePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFigurePrefab,
                                             (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_19;
  v16 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
  transform = UnityEngine_GameObject__get_transform(v16, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v16, (System_String_o *)StringLiteral_14913/*"UIMasterFigureOld"*/, 0LL);
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
    if ( !byte_4B31941 )
    {
      sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v22);
      byte_4B31941 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v25 = static_fields->zeroVector.fields.x;
    v24 = static_fields->zeroVector.fields.y;
    v23 = static_fields->zeroVector.fields.z;
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v25, 0LL);
  if ( !byte_4B31947 )
  {
    sub_1BD3458(&UnityEngine_Quaternion_TypeInfo, v27);
    byte_4B31947 = 1;
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
    sub_1BD36B4(gameObject, v15);
  }
  UIMasterFigureRenderOld__SetLayer((UIMasterFigureRenderOld_o *)Component_object, (int32_t)gameObject, 0LL);
  return (UIMasterFigureTextureOld_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreateLocal_38702536(
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  char *v30; // x25
  int64_t v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  void *v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x1
  int32_t v59; // [xsp+8h] [xbp-58h] BYREF
  int32_t v60; // [xsp+Ch] [xbp-54h] BYREF

  v59 = equipId;
  v60 = genderType;
  if ( (byte_4B363BD & 1) == 0 )
  {
    sub_1BD3458(&string___TypeInfo, parent);
    sub_1BD3458(&StringLiteral_915/*"-"*/, v17);
    sub_1BD3458(&StringLiteral_809/*")"*/, v18);
    sub_1BD3458(&StringLiteral_14914/*"UIMasterFigureOld("*/, v19);
    byte_4B363BD = 1;
  }
  Local = (char *)MasterFigureManagerOld__CreateLocal(this, parent, offset, *(const MethodInfo **)&equipId);
  if ( !Local )
    goto LABEL_13;
  v22 = (UIMasterFigureTextureOld_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0LL);
  Local = (char *)sub_1BD3500(string___TypeInfo, 5LL);
  if ( !Local )
    goto LABEL_13;
  v30 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v31 = StringLiteral_14914/*"UIMasterFigureOld("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14914/*"UIMasterFigureOld("*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(Local + 32), v31, v24, v25, v26, v27, v28, v29);
  Local = (char *)System_Int32__ToString((int32_t)&v60, 0LL);
  if ( *((_DWORD *)v30 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v30 + 5) = Local;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v30 + 40), (int64_t)Local, v32, v33, v34, v35, v36, v37);
  if ( *((_DWORD *)v30 + 6) <= 2u
    || (v44 = StringLiteral_915/*"-"*/,
        *((_QWORD *)v30 + 6) = StringLiteral_915/*"-"*/,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v30 + 48), (int64_t)v44, v38, v39, v40, v41, v42, v43),
        Local = (char *)System_Int32__ToString((int32_t)&v59, 0LL),
        *((_DWORD *)v30 + 6) <= 3u)
    || (*((_QWORD *)v30 + 7) = Local,
        sub_1BD33FC((PartyOrganizationUtility_o *)(v30 + 56), (int64_t)Local, v45, v46, v47, v48, v49, v50),
        *((_DWORD *)v30 + 6) <= 4u) )
  {
LABEL_12:
    sub_1BD36BC(Local, v21);
  }
  v57 = StringLiteral_809/*")"*/;
  *((_QWORD *)v30 + 8) = StringLiteral_809/*")"*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v30 + 64), v57, v51, v52, v53, v54, v55, v56);
  Local = (char *)System_String__Concat_62538776((System_String_array *)v30, 0LL);
  if ( !gameObject )
LABEL_13:
    sub_1BD36B4(Local, v21);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFigureTextureOld__SetCharacter(
    v22,
    dispType,
    v60,
    v59,
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

  if ( (byte_4B363B9 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, method);
    byte_4B363B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v4);
  *(_QWORD *)&v7.fields.hasValue = 0LL;
  *(_QWORD *)&v7.fields.value.fields.y = 0LL;
  return MasterFigureManagerOld__CreateLocal((MasterFigureManagerOld_o *)Instance, parent, v7, v5);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab_38702344(
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

  if ( (byte_4B363BA & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, *(_QWORD *)&dispType);
    byte_4B363BA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v18);
  return MasterFigureManagerOld__CreateLocal_38702536(
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

  if ( (byte_4B363B6 & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4B363B6 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_38578472(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFigureManagerOld__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4B363B5 & 1) == 0 )
  {
    sub_1BD3458(&UIMasterFigureRenderOld_TypeInfo, *(_QWORD *)&equipId);
    byte_4B363B5 = 1;
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

  if ( (byte_4B363B7 & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4B363B7 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_38580648(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFigureManagerOld__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4B363B8 & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4B363B8 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_38582992(AssetName, 0LL);
}