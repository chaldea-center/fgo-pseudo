void __fastcall MasterFigureManagerOld___ctor(MasterFigureManagerOld_o *this, const MethodInfo *method)
{
  if ( (byte_49FB684 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__, method);
    byte_49FB684 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
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
  UIMasterFigureTextureOld_o *v14; // x22
  UnityEngine_Object_o *gameObject; // x23
  System_String_o *v16; // x0
  int32_t enemyFaceIda; // [xsp+Ch] [xbp-44h] BYREF
  System_Nullable_Vector3__o v19; // 0:x2.16

  enemyFaceIda = enemyFaceId;
  if ( (byte_49FB683 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_14660/*"UIMasterFigureOld-Enemy("*/, parent);
    sub_1B640C8(&StringLiteral_815/*")"*/, v12);
    byte_49FB683 = 1;
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
        Local = (UnityEngine_Component_o *)System_String__Concat_61386656(
                                             (System_String_o *)StringLiteral_14660/*"UIMasterFigureOld-Enemy("*/,
                                             v16,
                                             (System_String_o *)StringLiteral_815/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_1B64324(Local);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFigureTextureOld__SetEnemy(v14, enemyFaceIda, enemyBattleId, callbackFunc, 0LL);
  UIMasterFigureTextureOld__SetDepth(v14, depth, 0LL);
  return v14;
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
  const MethodInfo *v12; // x6

  if ( (byte_49FB680 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, *(_QWORD *)&enemyFaceId);
    byte_49FB680 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return MasterFigureManagerOld__CreateEnemyLocal(
           (MasterFigureManagerOld_o *)Instance,
           parent,
           enemyFaceId,
           enemyMasterBattleId,
           depth,
           callbackFunc,
           v12);
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
  UnityEngine_GameObject_o *v15; // x24
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v21; // x1
  float v22; // s2
  float v23; // s1
  float v24; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v26; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  v4 = *(_QWORD *)&offset.fields.value.fields.y;
  v5 = *(_QWORD *)&offset.fields.hasValue;
  if ( (byte_49FB681 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___, parent);
    sub_1B640C8(&Method_System_Nullable_Vector3__GetValueOrDefault__, v8);
    sub_1B640C8(&Method_System_Nullable_Vector3__get_HasValue__, v9);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_14658/*"UIMasterFigureOld"*/, v12);
    byte_49FB681 = 1;
  }
  masterFigurePrefab = (Il2CppObject *)this->fields.masterFigurePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFigurePrefab,
                                             (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_19;
  v15 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
  transform = UnityEngine_GameObject__get_transform(v15, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v15, (System_String_o *)StringLiteral_14658/*"UIMasterFigureOld"*/, 0LL);
  if ( !parent )
    goto LABEL_19;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_19;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( (_BYTE)v5 )
  {
    v22 = *((float *)&v4 + 1);
    v23 = *(float *)&v4;
    v24 = *((float *)&v5 + 1);
  }
  else
  {
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v21);
      byte_49F7111 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v24 = static_fields->zeroVector.fields.x;
    v23 = static_fields->zeroVector.fields.y;
    v22 = static_fields->zeroVector.fields.z;
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v24, 0LL);
  if ( !byte_49F7117 )
  {
    sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v26);
    byte_49F7117 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v29, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL), !Component_object) )
  {
LABEL_19:
    sub_1B64324(gameObject);
  }
  UIMasterFigureRenderOld__SetLayer((UIMasterFigureRenderOld_o *)Component_object, (int32_t)gameObject, 0LL);
  return (UIMasterFigureTextureOld_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreateLocal_37604180(
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
  __int64 v17; // x1
  __int64 v18; // x1
  char *Local; // x0
  UIMasterFigureTextureOld_o *v20; // x23
  UnityEngine_Object_o *gameObject; // x24
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  char *v25; // x25
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w1
  int32_t v38; // [xsp+8h] [xbp-58h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-54h] BYREF

  v38 = equipId;
  v39 = genderType;
  if ( (byte_49FB682 & 1) == 0 )
  {
    sub_1B640C8(&string___TypeInfo, parent);
    sub_1B640C8(&StringLiteral_920/*"-"*/, v16);
    sub_1B640C8(&StringLiteral_815/*")"*/, v17);
    sub_1B640C8(&StringLiteral_14659/*"UIMasterFigureOld("*/, v18);
    byte_49FB682 = 1;
  }
  Local = (char *)MasterFigureManagerOld__CreateLocal(this, parent, offset, *(const MethodInfo **)&equipId);
  if ( !Local )
    goto LABEL_13;
  v20 = (UIMasterFigureTextureOld_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0LL);
  Local = (char *)sub_1B64170(string___TypeInfo, 5LL);
  if ( !Local )
    goto LABEL_13;
  v25 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v26 = StringLiteral_14659/*"UIMasterFigureOld("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14659/*"UIMasterFigureOld("*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(Local + 32), v26, v23, v24);
  Local = (char *)System_Int32__ToString((int32_t)&v39, 0LL);
  if ( *((_DWORD *)v25 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v25 + 5) = Local;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 40), (int32_t)Local, v27, v28);
  if ( *((_DWORD *)v25 + 6) <= 2u
    || (v31 = (int)StringLiteral_920/*"-"*/,
        *((_QWORD *)v25 + 6) = StringLiteral_920/*"-"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 48), v31, v29, v30),
        Local = (char *)System_Int32__ToString((int32_t)&v38, 0LL),
        *((_DWORD *)v25 + 6) <= 3u)
    || (*((_QWORD *)v25 + 7) = Local,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 56), (int32_t)Local, v32, v33),
        *((_DWORD *)v25 + 6) <= 4u) )
  {
LABEL_12:
    sub_1B6432C(Local, v22);
  }
  v36 = StringLiteral_815/*")"*/;
  *((_QWORD *)v25 + 8) = StringLiteral_815/*")"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 64), v36, v34, v35);
  Local = (char *)System_String__Concat_61388924((System_String_array *)v25, 0LL);
  if ( !gameObject )
LABEL_13:
    sub_1B64324(Local);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFigureTextureOld__SetCharacter(v20, dispType, v39, v38, callbackFunc, overWriteEquipId, 0LL);
  UIMasterFigureTextureOld__SetDepth(v20, depth, 0LL);
  return v20;
}


UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x4
  System_Nullable_Vector3__o v6; // 0:x2.16

  if ( (byte_49FB67E & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, method);
    byte_49FB67E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  *(_QWORD *)&v6.fields.hasValue = 0LL;
  *(_QWORD *)&v6.fields.value.fields.y = 0LL;
  return MasterFigureManagerOld__CreateLocal((MasterFigureManagerOld_o *)Instance, parent, v6, v4);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab_37604008(
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

  if ( (byte_49FB67F & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, *(_QWORD *)&dispType);
    byte_49FB67F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return MasterFigureManagerOld__CreateLocal_37604180(
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
  System_String_array *AssetName; // x20

  if ( (byte_49FB67B & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_49FB67B = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_37481920(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFigureManagerOld__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_49FB67A & 1) == 0 )
  {
    sub_1B640C8(&UIMasterFigureRenderOld_TypeInfo, *(_QWORD *)&equipId);
    byte_49FB67A = 1;
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

  if ( (byte_49FB67C & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_49FB67C = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37484096(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFigureManagerOld__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_49FB67D & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_49FB67D = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_37486440(AssetName, 0LL);
}