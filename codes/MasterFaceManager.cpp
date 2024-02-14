void __fastcall MasterFaceManager___ctor(MasterFaceManager_o *this, const MethodInfo *method)
{
  if ( (byte_4212A4B & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_MasterFaceManager___ctor__, method);
    byte_4212A4B = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
}


UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreateLocal(
        MasterFaceManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *masterFacePrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v10; // x22
  UIMasterFaceRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4212A49 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___, parent);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_14727/*"UIMasterFace"*/, v7);
    byte_4212A49 = 1;
  }
  masterFacePrefab = this->fields.masterFacePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)masterFacePrefab,
                                             (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_13;
  v10 = gameObject;
  Component_srcLineSprite = (UIMasterFaceRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
  transform = UnityEngine_GameObject__get_transform(v10, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v10, (System_String_o *)StringLiteral_14727/*"UIMasterFace"*/, 0LL);
  if ( !parent )
    goto LABEL_13;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v19.fields.x = x;
  v19.fields.y = y;
  v19.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v19, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL),
        !Component_srcLineSprite) )
  {
LABEL_13:
    sub_B0D97C(gameObject);
  }
  UIMasterFaceRender__SetLayer(Component_srcLineSprite, (int32_t)gameObject, 0LL);
  return (UIMasterFaceTexture_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreateLocal_20991876(
        MasterFaceManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t overWriteImageId,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  UnityEngine_Component_o *Local; // x0
  UIMasterFaceTexture_o *v19; // x23
  UnityEngine_Object_o *gameObject; // x24
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array *v27; // x25
  System_String_o *v28; // x0
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x26
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x26
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  __int64 v59; // x0
  __int64 v60; // x0
  int32_t v61; // [xsp+8h] [xbp-48h] BYREF
  int32_t v62; // [xsp+Ch] [xbp-44h] BYREF

  v61 = equipId;
  v62 = genderType;
  if ( (byte_4212A4A & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, parent);
    sub_B0D8A4(&StringLiteral_753/*"-"*/, v15);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v16);
    sub_B0D8A4(&StringLiteral_14728/*"UIMasterFace("*/, v17);
    byte_4212A4A = 1;
  }
  Local = (UnityEngine_Component_o *)MasterFaceManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local
    || (v19 = (UIMasterFaceTexture_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        (Local = (UnityEngine_Component_o *)sub_B0D8BC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_30:
    sub_B0D97C(Local);
  }
  v27 = (System_String_array *)Local;
  v28 = (System_String_o *)StringLiteral_14728/*"UIMasterFace("*/;
  if ( StringLiteral_14728/*"UIMasterFace("*/ )
  {
    v28 = (System_String_o *)sub_B0D964(StringLiteral_14728/*"UIMasterFace("*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_29;
    v29 = (System_Int32_array **)StringLiteral_14728/*"UIMasterFace("*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( !v27->max_length )
    goto LABEL_28;
  v27->m_Items[0] = (System_String_o *)v29;
  sub_B0D840((BattleServantConfConponent_o *)v27->m_Items, v29, v21, v22, v23, v24, v25, v26);
  v28 = System_Int32__ToString((int32_t)&v62, 0LL);
  v36 = (System_Int32_array **)v28;
  if ( v28 )
  {
    v28 = (System_String_o *)sub_B0D964(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_29;
  }
  if ( v27->max_length <= 1 )
    goto LABEL_28;
  v27->m_Items[1] = (System_String_o *)v36;
  sub_B0D840((BattleServantConfConponent_o *)&v27->m_Items[1], v36, v30, v31, v32, v33, v34, v35);
  v28 = (System_String_o *)StringLiteral_753/*"-"*/;
  if ( StringLiteral_753/*"-"*/ )
  {
    v28 = (System_String_o *)sub_B0D964(StringLiteral_753/*"-"*/, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_29;
    v43 = (System_Int32_array **)StringLiteral_753/*"-"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( v27->max_length <= 2 )
    goto LABEL_28;
  v27->m_Items[2] = (System_String_o *)v43;
  sub_B0D840((BattleServantConfConponent_o *)&v27->m_Items[2], v43, v37, v38, v39, v40, v41, v42);
  v28 = System_Int32__ToString((int32_t)&v61, 0LL);
  v50 = (System_Int32_array **)v28;
  if ( v28 )
  {
    v28 = (System_String_o *)sub_B0D964(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
    {
LABEL_29:
      v60 = sub_B0D99C();
      sub_B0D948(v60, 0LL);
    }
  }
  if ( v27->max_length <= 3 )
    goto LABEL_28;
  v27->m_Items[3] = (System_String_o *)v50;
  sub_B0D840((BattleServantConfConponent_o *)&v27->m_Items[3], v50, v44, v45, v46, v47, v48, v49);
  v28 = (System_String_o *)StringLiteral_658/*")"*/;
  if ( StringLiteral_658/*")"*/ )
  {
    v28 = (System_String_o *)sub_B0D964(StringLiteral_658/*")"*/, v27->obj.klass->_1.element_class);
    if ( v28 )
    {
      v57 = (System_Int32_array **)StringLiteral_658/*")"*/;
      goto LABEL_25;
    }
    goto LABEL_29;
  }
  v57 = 0LL;
LABEL_25:
  if ( v27->max_length <= 4 )
  {
LABEL_28:
    v59 = sub_B0D9A8(v28);
    sub_B0D948(v59, 0LL);
  }
  v27->m_Items[4] = (System_String_o *)v57;
  sub_B0D840((BattleServantConfConponent_o *)&v27->m_Items[4], v57, v51, v52, v53, v54, v55, v56);
  Local = (UnityEngine_Component_o *)System_String__Concat_43930028(v27, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFaceTexture__SetCharacter(v19, dispType, v62, v61, callbackFunc, overWriteImageId, 0LL);
  UIMasterFaceTexture__SetDepth(v19, depth, 0LL);
  return v19;
}


UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  MasterFaceManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4212A47 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__, method);
    byte_4212A47 = 1;
  }
  Instance = (MasterFaceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return MasterFaceManager__CreateLocal(Instance, parent, v4);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreatePrefab_20991704(
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t overWriteImageId,
        const MethodInfo *method)
{
  MasterFaceManager_o *Instance; // x0
  const MethodInfo *v17; // [xsp+0h] [xbp-50h]

  if ( (byte_4212A48 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__, *(_QWORD *)&dispType);
    byte_4212A48 = 1;
  }
  Instance = (MasterFaceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return MasterFaceManager__CreateLocal_20991876(
           Instance,
           parent,
           dispType,
           genderType,
           equipId,
           depth,
           callbackFunc,
           overWriteImageId,
           v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFaceManager__DownloadAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4212A44 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_4212A44 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_29520984(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFaceManager__GetAssetName(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4212A43 & 1) == 0 )
  {
    sub_B0D8A4(&UIMasterFaceRender_TypeInfo, *(_QWORD *)&genderType);
    byte_4212A43 = 1;
  }
  if ( (BYTE3(UIMasterFaceRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIMasterFaceRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo);
  }
  return UIMasterFaceRender__GetAssetNameList(dispType, genderType, equipId, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFaceManager__LoadAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4212A45 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_4212A45 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29522920(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFaceManager__ReleaseAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4212A46 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_4212A46 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_29524964(AssetName, 0LL);
}