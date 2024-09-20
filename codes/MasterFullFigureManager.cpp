void __fastcall MasterFullFigureManager___ctor(MasterFullFigureManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A5A3C5 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
    byte_4A5A3C5 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreateLocal(
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

  if ( (byte_4A5A3C3 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_14732/*"UIMasterFullFigure"*/);
    byte_4A5A3C3 = 1;
  }
  masterFigurePrefab = (Il2CppObject *)this->fields.masterFigurePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                             masterFigurePrefab,
                                             (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v8 = gameObject;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
  transform = UnityEngine_GameObject__get_transform(v8, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_14732/*"UIMasterFullFigure"*/, 0LL);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4A55CE7 )
  {
    sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v16.fields.x = x;
  v16.fields.y = y;
  v16.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v16, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL), !Component_object) )
  {
LABEL_16:
    sub_1B8880C(gameObject, v7);
  }
  UIMasterFullFigureRender__SetLayer((UIMasterFullFigureRender_o *)Component_object, (int32_t)gameObject, 0LL);
  return (UIMasterFullFigureTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreateLocal_37921228(
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
  char *v19; // x24
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  int32_t v32; // [xsp+8h] [xbp-48h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-44h] BYREF

  v32 = equipId;
  v33 = genderType;
  if ( (byte_4A5A3C4 & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_14733/*"UIMasterFullFigure("*/);
    sub_1B885B0(&StringLiteral_919/*"-"*/);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5A3C4 = 1;
  }
  Local = (char *)MasterFullFigureManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local )
    goto LABEL_13;
  v15 = (UIMasterFullFigureTexture_o *)Local;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Local, 0LL);
  Local = (char *)sub_1B88658(string___TypeInfo, 5LL);
  if ( !Local )
    goto LABEL_13;
  v19 = Local;
  if ( !*((_DWORD *)Local + 6) )
    goto LABEL_12;
  v20 = StringLiteral_14733/*"UIMasterFullFigure("*/;
  *((_QWORD *)Local + 4) = StringLiteral_14733/*"UIMasterFullFigure("*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(Local + 32), v20, v17, v18);
  Local = (char *)System_Int32__ToString((int32_t)&v33, 0LL);
  if ( *((_DWORD *)v19 + 6) <= 1u )
    goto LABEL_12;
  *((_QWORD *)v19 + 5) = Local;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 40), (int32_t)Local, v21, v22);
  if ( *((_DWORD *)v19 + 6) <= 2u
    || (v25 = (int)StringLiteral_919/*"-"*/,
        *((_QWORD *)v19 + 6) = StringLiteral_919/*"-"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 48), v25, v23, v24),
        Local = (char *)System_Int32__ToString((int32_t)&v32, 0LL),
        *((_DWORD *)v19 + 6) <= 3u)
    || (*((_QWORD *)v19 + 7) = Local,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 56), (int32_t)Local, v26, v27),
        *((_DWORD *)v19 + 6) <= 4u) )
  {
LABEL_12:
    sub_1B88814(Local, v14);
  }
  v30 = StringLiteral_814/*")"*/;
  *((_QWORD *)v19 + 8) = StringLiteral_814/*")"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 64), v30, v28, v29);
  Local = (char *)System_String__Concat_61720560((System_String_array *)v19, 0LL);
  if ( !gameObject )
LABEL_13:
    sub_1B8880C(Local, v14);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFullFigureTexture__SetCharacter(v15, dispType, v33, v32, callbackFunc, 0LL);
  UIMasterFullFigureTexture__SetDepth(v15, depth, 0LL);
  return v15;
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4A5A3C1 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
    byte_4A5A3C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  return MasterFullFigureManager__CreateLocal((MasterFullFigureManager_o *)Instance, parent, v5);
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab_37921080(
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

  if ( (byte_4A5A3C2 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
    byte_4A5A3C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v14);
  return MasterFullFigureManager__CreateLocal_37921228(
           (MasterFullFigureManager_o *)Instance,
           parent,
           dispType,
           genderType,
           equipId,
           depth,
           callbackFunc,
           v15);
}


void __fastcall MasterFullFigureManager__DownloadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4A5A3BE & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5A3BE = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_37795112(AssetName, callback, 0LL);
}


System_String_array *__fastcall MasterFullFigureManager__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4A5A3BD & 1) == 0 )
  {
    sub_1B885B0(&UIMasterFullFigureRender_TypeInfo);
    byte_4A5A3BD = 1;
  }
  if ( !UIMasterFullFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIMasterFullFigureRender_TypeInfo);
  return UIMasterFullFigureRender__GetAssetNameList(genderType, equipId, 0LL);
}


void __fastcall MasterFullFigureManager__LoadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4A5A3BF & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5A3BF = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37797288(AssetName, callback, 1, 0LL);
}


void __fastcall MasterFullFigureManager__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4A5A3C0 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5A3C0 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_37799632(AssetName, 0LL);
}