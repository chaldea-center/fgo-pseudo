void __fastcall MasterFullFigureManager___ctor(MasterFullFigureManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FB68D & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__, method);
    byte_49FB68D = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
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
  UnityEngine_GameObject_o *v10; // x22
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FB68B & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___, parent);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_14661/*"UIMasterFullFigure"*/, v7);
    byte_49FB68B = 1;
  }
  masterFigurePrefab = (Il2CppObject *)this->fields.masterFigurePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFigurePrefab,
                                             (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v10 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
  transform = UnityEngine_GameObject__get_transform(v10, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v10, (System_String_o *)StringLiteral_14661/*"UIMasterFullFigure"*/, 0LL);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v16);
    byte_49F7111 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_49F7117 )
  {
    sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v17);
    byte_49F7117 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v20, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL), !Component_object) )
  {
LABEL_16:
    sub_1B64324(gameObject);
  }
  UIMasterFullFigureRender__SetLayer((UIMasterFullFigureRender_o *)Component_object, (int32_t)gameObject, 0LL);
  return (UIMasterFullFigureTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreateLocal_37606404(
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
  UIMasterFullFigureTexture_o *v17; // x22
  UnityEngine_Object_o *gameObject; // x23
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  char *v22; // x24
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
  int32_t v35; // [xsp+8h] [xbp-48h] BYREF
  int32_t v36; // [xsp+Ch] [xbp-44h] BYREF

  v35 = equipId;
  v36 = genderType;
  if ( (byte_49FB68C & 1) == 0 )
  {
    sub_1B640C8(&string___TypeInfo, parent);
    sub_1B640C8(&StringLiteral_14662/*"UIMasterFullFigure("*/, v13);
    sub_1B640C8(&StringLiteral_920/*"-"*/, v14);
    sub_1B640C8(&StringLiteral_815/*")"*/, v15);
    byte_49FB68C = 1;
  }
  Local = (char *)MasterFullFigureManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local )
    goto LABEL_13;
  v17 = (UIMasterFullFigureTexture_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0LL);
  Local = (char *)sub_1B64170(string___TypeInfo, 5LL);
  if ( !Local )
    goto LABEL_13;
  v22 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v23 = StringLiteral_14662/*"UIMasterFullFigure("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14662/*"UIMasterFullFigure("*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(Local + 32), v23, v20, v21);
  Local = (char *)System_Int32__ToString((int32_t)&v36, 0LL);
  if ( *((_DWORD *)v22 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v22 + 5) = Local;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 40), (int32_t)Local, v24, v25);
  if ( *((_DWORD *)v22 + 6) <= 2u
    || (v28 = (int)StringLiteral_920/*"-"*/,
        *((_QWORD *)v22 + 6) = StringLiteral_920/*"-"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 48), v28, v26, v27),
        Local = (char *)System_Int32__ToString((int32_t)&v35, 0LL),
        *((_DWORD *)v22 + 6) <= 3u)
    || (*((_QWORD *)v22 + 7) = Local,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 56), (int32_t)Local, v29, v30),
        *((_DWORD *)v22 + 6) <= 4u) )
  {
LABEL_12:
    sub_1B6432C(Local, v19);
  }
  v33 = StringLiteral_815/*")"*/;
  *((_QWORD *)v22 + 8) = StringLiteral_815/*")"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 64), v33, v31, v32);
  Local = (char *)System_String__Concat_61388924((System_String_array *)v22, 0LL);
  if ( !gameObject )
LABEL_13:
    sub_1B64324(Local);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFullFigureTexture__SetCharacter(v17, dispType, v36, v35, callbackFunc, 0LL);
  UIMasterFullFigureTexture__SetDepth(v17, depth, 0LL);
  return v17;
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_49FB689 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__, method);
    byte_49FB689 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return MasterFullFigureManager__CreateLocal((MasterFullFigureManager_o *)Instance, parent, v4);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab_37606256(
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v14; // x7

  if ( (byte_49FB68A & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__, *(_QWORD *)&dispType);
    byte_49FB68A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return MasterFullFigureManager__CreateLocal_37606404(
           (MasterFullFigureManager_o *)Instance,
           parent,
           dispType,
           genderType,
           equipId,
           depth,
           callbackFunc,
           v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFullFigureManager__DownloadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_49FB686 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_49FB686 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_37481920(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFullFigureManager__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_49FB685 & 1) == 0 )
  {
    sub_1B640C8(&UIMasterFullFigureRender_TypeInfo, *(_QWORD *)&equipId);
    byte_49FB685 = 1;
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

  if ( (byte_49FB687 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_49FB687 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37484096(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFullFigureManager__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_49FB688 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_49FB688 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_37486440(AssetName, 0LL);
}