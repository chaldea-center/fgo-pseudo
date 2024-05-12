void __fastcall MasterFaceManager___ctor(MasterFaceManager_o *this, const MethodInfo *method)
{
  if ( (byte_438E615 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
    byte_438E615 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2D168A8 *)Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
}


UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreateLocal(
        MasterFaceManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *masterFacePrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x22
  UIMasterFaceRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438E613 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_14935/*"UIMasterFace"*/);
    byte_438E613 = 1;
  }
  masterFacePrefab = this->fields.masterFacePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)masterFacePrefab,
                                             (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_13;
  v8 = gameObject;
  Component_srcLineSprite = (UIMasterFaceRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
  transform = UnityEngine_GameObject__get_transform(v8, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_14935/*"UIMasterFace"*/, 0LL);
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
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v17, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL),
        !Component_srcLineSprite) )
  {
LABEL_13:
    sub_B7769C(gameObject, v7);
  }
  UIMasterFaceRender__SetLayer(Component_srcLineSprite, (int32_t)gameObject, 0LL);
  return (UIMasterFaceTexture_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreateLocal_31345956(
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
  UnityEngine_Component_o *Local; // x0
  __int64 v16; // x1
  UIMasterFaceTexture_o *v17; // x23
  UnityEngine_Object_o *gameObject; // x24
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array *v25; // x25
  System_String_o *v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x26
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x26
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  __int64 v57; // x0
  __int64 v58; // x0
  int32_t v59; // [xsp+8h] [xbp-48h] BYREF
  int32_t v60; // [xsp+Ch] [xbp-44h] BYREF

  v59 = equipId;
  v60 = genderType;
  if ( (byte_438E614 & 1) == 0 )
  {
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_762/*"-"*/);
    sub_B775C4(&StringLiteral_665/*")"*/);
    sub_B775C4(&StringLiteral_14936/*"UIMasterFace("*/);
    byte_438E614 = 1;
  }
  Local = (UnityEngine_Component_o *)MasterFaceManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local
    || (v17 = (UIMasterFaceTexture_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        (Local = (UnityEngine_Component_o *)sub_B775DC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_30:
    sub_B7769C(Local, v16);
  }
  v25 = (System_String_array *)Local;
  v26 = (System_String_o *)StringLiteral_14936/*"UIMasterFace("*/;
  if ( StringLiteral_14936/*"UIMasterFace("*/ )
  {
    v26 = (System_String_o *)sub_B77684(StringLiteral_14936/*"UIMasterFace("*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_29;
    v27 = (System_Int32_array **)StringLiteral_14936/*"UIMasterFace("*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v25->max_length )
    goto LABEL_28;
  v25->m_Items[0] = (System_String_o *)v27;
  sub_B77560((BattleServantConfConponent_o *)v25->m_Items, v27, v19, v20, v21, v22, v23, v24);
  v26 = System_Int32__ToString((int32_t)&v60, 0LL);
  v34 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = (System_String_o *)sub_B77684(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_29;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_28;
  v25->m_Items[1] = (System_String_o *)v34;
  sub_B77560((BattleServantConfConponent_o *)&v25->m_Items[1], v34, v28, v29, v30, v31, v32, v33);
  v26 = (System_String_o *)StringLiteral_762/*"-"*/;
  if ( StringLiteral_762/*"-"*/ )
  {
    v26 = (System_String_o *)sub_B77684(StringLiteral_762/*"-"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_29;
    v41 = (System_Int32_array **)StringLiteral_762/*"-"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_28;
  v25->m_Items[2] = (System_String_o *)v41;
  sub_B77560((BattleServantConfConponent_o *)&v25->m_Items[2], v41, v35, v36, v37, v38, v39, v40);
  v26 = System_Int32__ToString((int32_t)&v59, 0LL);
  v48 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = (System_String_o *)sub_B77684(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_29:
      v58 = sub_B776BC(v26);
      sub_B77668(v58, 0LL);
    }
  }
  if ( v25->max_length <= 3 )
    goto LABEL_28;
  v25->m_Items[3] = (System_String_o *)v48;
  sub_B77560((BattleServantConfConponent_o *)&v25->m_Items[3], v48, v42, v43, v44, v45, v46, v47);
  v26 = (System_String_o *)StringLiteral_665/*")"*/;
  if ( StringLiteral_665/*")"*/ )
  {
    v26 = (System_String_o *)sub_B77684(StringLiteral_665/*")"*/, v25->obj.klass->_1.element_class);
    if ( v26 )
    {
      v55 = (System_Int32_array **)StringLiteral_665/*")"*/;
      goto LABEL_25;
    }
    goto LABEL_29;
  }
  v55 = 0LL;
LABEL_25:
  if ( v25->max_length <= 4 )
  {
LABEL_28:
    v57 = sub_B776C8(v26);
    sub_B77668(v57, 0LL);
  }
  v25->m_Items[4] = (System_String_o *)v55;
  sub_B77560((BattleServantConfConponent_o *)&v25->m_Items[4], v55, v49, v50, v51, v52, v53, v54);
  Local = (UnityEngine_Component_o *)System_String__Concat_44982964(v25, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFaceTexture__SetCharacter(v17, dispType, v60, v59, callbackFunc, overWriteImageId, 0LL);
  UIMasterFaceTexture__SetDepth(v17, depth, 0LL);
  return v17;
}


UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  MasterFaceManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_438E611 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
    byte_438E611 = 1;
  }
  Instance = (MasterFaceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
  return MasterFaceManager__CreateLocal(Instance, parent, v5);
}


UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreatePrefab_31345784(
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
  __int64 v16; // x1
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]

  if ( (byte_438E612 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
    byte_438E612 = 1;
  }
  Instance = (MasterFaceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v16);
  return MasterFaceManager__CreateLocal_31345956(
           Instance,
           parent,
           dispType,
           genderType,
           equipId,
           depth,
           callbackFunc,
           overWriteImageId,
           v18);
}


void __fastcall MasterFaceManager__DownloadAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_438E60E & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438E60E = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_24407060(AssetName, callback, 0LL);
}


System_String_array *__fastcall MasterFaceManager__GetAssetName(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_438E60D & 1) == 0 )
  {
    sub_B775C4(&UIMasterFaceRender_TypeInfo);
    byte_438E60D = 1;
  }
  if ( (BYTE3(UIMasterFaceRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIMasterFaceRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFaceRender_TypeInfo);
  }
  return UIMasterFaceRender__GetAssetNameList(dispType, genderType, equipId, 0, 0LL);
}


void __fastcall MasterFaceManager__LoadAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_438E60F & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438E60F = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_24408996(AssetName, callback, 1, 0LL);
}


void __fastcall MasterFaceManager__ReleaseAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_438E610 & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_438E610 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_24411040(AssetName, 0LL);
}