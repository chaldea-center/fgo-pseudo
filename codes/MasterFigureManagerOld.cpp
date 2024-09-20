void __fastcall MasterFigureManagerOld___ctor(MasterFigureManagerOld_o *this, const MethodInfo *method)
{
  if ( (byte_4A5A3BC & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
    byte_4A5A3BC = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
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
  UnityEngine_Component_o *Local; // x0
  __int64 v13; // x1
  UIMasterFigureTextureOld_o *v14; // x22
  UnityEngine_Object_o *gameObject; // x23
  System_String_o *v16; // x0
  int32_t enemyFaceIda; // [xsp+Ch] [xbp-44h] BYREF
  System_Nullable_Vector3__o v19; // 0:x2.16

  enemyFaceIda = enemyFaceId;
  if ( (byte_4A5A3BB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_14731/*"UIMasterFigureOld-Enemy("*/);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5A3BB = 1;
  }
  *(_QWORD *)&v19.fields.hasValue = 0LL;
  *(_QWORD *)&v19.fields.value.fields.y = 0LL;
  Local = (UnityEngine_Component_o *)MasterFigureManagerOld__CreateLocal(
                                       this,
                                       parent,
                                       v19,
                                       *(const MethodInfo **)&depth);
  if ( !Local
    || (v14 = (UIMasterFigureTextureOld_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        v16 = System_Int32__ToString((int32_t)&enemyFaceIda, 0LL),
        Local = (UnityEngine_Component_o *)System_String__Concat_61718292(
                                             (System_String_o *)StringLiteral_14731/*"UIMasterFigureOld-Enemy("*/,
                                             v16,
                                             (System_String_o *)StringLiteral_814/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_1B8880C(Local, v13);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFigureTextureOld__SetEnemy(v14, enemyFaceIda, enemyBattleId, callbackFunc, 0LL);
  UIMasterFigureTextureOld__SetDepth(v14, depth, 0LL);
  return v14;
}


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

  if ( (byte_4A5A3B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
    byte_4A5A3B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v12);
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
  Il2CppObject *masterFigurePrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x24
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  float v17; // s2
  float v18; // s1
  float v19; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  v4 = *(_QWORD *)&offset.fields.value.fields.y;
  v5 = *(_QWORD *)&offset.fields.hasValue;
  if ( (byte_4A5A3B9 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
    sub_1B885B0(&Method_System_Nullable_Vector3__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_14729/*"UIMasterFigureOld"*/);
    byte_4A5A3B9 = 1;
  }
  masterFigurePrefab = (Il2CppObject *)this->fields.masterFigurePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFigurePrefab,
                                             (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_19;
  v11 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_14729/*"UIMasterFigureOld"*/, 0LL);
  if ( !parent )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( (_BYTE)v5 )
  {
    v17 = *((float *)&v4 + 1);
    v18 = *(float *)&v4;
    v19 = *((float *)&v5 + 1);
  }
  else
  {
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v19 = static_fields->zeroVector.fields.x;
    v18 = static_fields->zeroVector.fields.y;
    v17 = static_fields->zeroVector.fields.z;
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v19, 0LL);
  if ( !byte_4A55CE7 )
  {
    sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v23, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL), !Component_object) )
  {
LABEL_19:
    sub_1B8880C(gameObject, v10);
  }
  UIMasterFigureRenderOld__SetLayer((UIMasterFigureRenderOld_o *)Component_object, (int32_t)gameObject, 0LL);
  return (UIMasterFigureTextureOld_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreateLocal_37919004(
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
  char *Local; // x0
  __int64 v17; // x1
  UIMasterFigureTextureOld_o *v18; // x23
  UnityEngine_Object_o *gameObject; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  char *v22; // x25
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w1
  int32_t v35; // [xsp+8h] [xbp-58h] BYREF
  int32_t v36; // [xsp+Ch] [xbp-54h] BYREF

  v35 = equipId;
  v36 = genderType;
  if ( (byte_4A5A3BA & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_919/*"-"*/);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    sub_1B885B0(&StringLiteral_14730/*"UIMasterFigureOld("*/);
    byte_4A5A3BA = 1;
  }
  Local = (char *)MasterFigureManagerOld__CreateLocal(this, parent, offset, *(const MethodInfo **)&equipId);
  if ( !Local )
    goto LABEL_13;
  v18 = (UIMasterFigureTextureOld_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0LL);
  Local = (char *)sub_1B88658(string___TypeInfo, 5LL);
  if ( !Local )
    goto LABEL_13;
  v22 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v23 = StringLiteral_14730/*"UIMasterFigureOld("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14730/*"UIMasterFigureOld("*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(Local + 32), v23, v20, v21);
  Local = (char *)System_Int32__ToString((int32_t)&v36, 0LL);
  if ( *((_DWORD *)v22 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v22 + 5) = Local;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 40), (int32_t)Local, v24, v25);
  if ( *((_DWORD *)v22 + 6) <= 2u
    || (v28 = (int)StringLiteral_919/*"-"*/,
        *((_QWORD *)v22 + 6) = StringLiteral_919/*"-"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 48), v28, v26, v27),
        Local = (char *)System_Int32__ToString((int32_t)&v35, 0LL),
        *((_DWORD *)v22 + 6) <= 3u)
    || (*((_QWORD *)v22 + 7) = Local,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 56), (int32_t)Local, v29, v30),
        *((_DWORD *)v22 + 6) <= 4u) )
  {
LABEL_12:
    sub_1B88814(Local, v17);
  }
  v33 = StringLiteral_814/*")"*/;
  *((_QWORD *)v22 + 8) = StringLiteral_814/*")"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 64), v33, v31, v32);
  Local = (char *)System_String__Concat_61720560((System_String_array *)v22, 0LL);
  if ( !gameObject )
LABEL_13:
    sub_1B8880C(Local, v17);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFigureTextureOld__SetCharacter(v18, dispType, v36, v35, callbackFunc, overWriteEquipId, 0LL);
  UIMasterFigureTextureOld__SetDepth(v18, depth, 0LL);
  return v18;
}


UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  System_Nullable_Vector3__o v7; // 0:x2.16

  if ( (byte_4A5A3B6 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
    byte_4A5A3B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  *(_QWORD *)&v7.fields.hasValue = 0LL;
  *(_QWORD *)&v7.fields.value.fields.y = 0LL;
  return MasterFigureManagerOld__CreateLocal((MasterFigureManagerOld_o *)Instance, parent, v7, v5);
}


UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab_37918832(
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

  if ( (byte_4A5A3B7 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
    byte_4A5A3B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v17);
  return MasterFigureManagerOld__CreateLocal_37919004(
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


void __fastcall MasterFigureManagerOld__DownloadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4A5A3B3 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5A3B3 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_37795112(AssetName, callback, 0LL);
}


System_String_array *__fastcall MasterFigureManagerOld__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4A5A3B2 & 1) == 0 )
  {
    sub_1B885B0(&UIMasterFigureRenderOld_TypeInfo);
    byte_4A5A3B2 = 1;
  }
  if ( !UIMasterFigureRenderOld_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFigureRenderOld_TypeInfo);
  return UIMasterFigureRenderOld__GetAssetNameList(genderType, equipId, 0, 0LL);
}


void __fastcall MasterFigureManagerOld__LoadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4A5A3B4 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5A3B4 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37797288(AssetName, callback, 1, 0LL);
}


void __fastcall MasterFigureManagerOld__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4A5A3B5 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5A3B5 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_37799632(AssetName, 0LL);
}