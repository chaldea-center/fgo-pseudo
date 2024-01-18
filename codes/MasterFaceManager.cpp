void __fastcall MasterFaceManager___ctor(MasterFaceManager_o *this, const MethodInfo *method)
{
  if ( (byte_418590F & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MasterFaceManager___ctor__, method);
    byte_418590F = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
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
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x22
  UIMasterFaceRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418590D & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___, parent);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_14682/*"UIMasterFace"*/, v7);
    byte_418590D = 1;
  }
  masterFacePrefab = this->fields.masterFacePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)masterFacePrefab,
                                             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_13;
  v11 = gameObject;
  Component_srcLineSprite = (UIMasterFaceRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_14682/*"UIMasterFace"*/, 0LL);
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
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v20, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL),
        !Component_srcLineSprite) )
  {
LABEL_13:
    sub_B2C434(gameObject, v10);
  }
  UIMasterFaceRender__SetLayer(Component_srcLineSprite, (int32_t)gameObject, 0LL);
  return (UIMasterFaceTexture_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreateLocal_21039400(
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
  __int64 v19; // x1
  UIMasterFaceTexture_o *v20; // x23
  UnityEngine_Object_o *gameObject; // x24
  System_String_array *v22; // x25
  System_String_o *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x26
  System_String_o *v26; // x1
  System_String_o *v27; // x26
  __int64 v28; // x1
  __int64 v30; // x0
  __int64 v31; // x0
  int32_t v32; // [xsp+8h] [xbp-48h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-44h] BYREF

  v32 = equipId;
  v33 = genderType;
  if ( (byte_418590E & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, parent);
    sub_B2C35C(&StringLiteral_747/*"-"*/, v15);
    sub_B2C35C(&StringLiteral_652/*")"*/, v16);
    sub_B2C35C(&StringLiteral_14683/*"UIMasterFace("*/, v17);
    byte_418590E = 1;
  }
  Local = (UnityEngine_Component_o *)MasterFaceManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local
    || (v20 = (UIMasterFaceTexture_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        (Local = (UnityEngine_Component_o *)sub_B2C374(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_30:
    sub_B2C434(Local, v19);
  }
  v22 = (System_String_array *)Local;
  v23 = (System_String_o *)StringLiteral_14683/*"UIMasterFace("*/;
  if ( StringLiteral_14683/*"UIMasterFace("*/ )
  {
    v23 = (System_String_o *)sub_B2C41C(StringLiteral_14683/*"UIMasterFace("*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_29;
    v24 = StringLiteral_14683/*"UIMasterFace("*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( !v22->max_length )
    goto LABEL_28;
  v22->m_Items[0] = (System_String_o *)v24;
  sub_B2C2F8(v22->m_Items, v24);
  v23 = System_Int32__ToString((int32_t)&v33, 0LL);
  v25 = v23;
  if ( v23 )
  {
    v23 = (System_String_o *)sub_B2C41C(v23, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_29;
  }
  if ( v22->max_length <= 1 )
    goto LABEL_28;
  v22->m_Items[1] = v25;
  sub_B2C2F8(&v22->m_Items[1], v25);
  v23 = (System_String_o *)StringLiteral_747/*"-"*/;
  if ( StringLiteral_747/*"-"*/ )
  {
    v23 = (System_String_o *)sub_B2C41C(StringLiteral_747/*"-"*/, v22->obj.klass->_1.element_class);
    if ( !v23 )
      goto LABEL_29;
    v26 = (System_String_o *)StringLiteral_747/*"-"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( v22->max_length <= 2 )
    goto LABEL_28;
  v22->m_Items[2] = v26;
  sub_B2C2F8(&v22->m_Items[2], v26);
  v23 = System_Int32__ToString((int32_t)&v32, 0LL);
  v27 = v23;
  if ( v23 )
  {
    v23 = (System_String_o *)sub_B2C41C(v23, v22->obj.klass->_1.element_class);
    if ( !v23 )
    {
LABEL_29:
      v31 = sub_B2C454();
      sub_B2C400(v31, 0LL);
    }
  }
  if ( v22->max_length <= 3 )
    goto LABEL_28;
  v22->m_Items[3] = v27;
  sub_B2C2F8(&v22->m_Items[3], v27);
  v23 = (System_String_o *)StringLiteral_652/*")"*/;
  if ( StringLiteral_652/*")"*/ )
  {
    v23 = (System_String_o *)sub_B2C41C(StringLiteral_652/*")"*/, v22->obj.klass->_1.element_class);
    if ( v23 )
    {
      v28 = StringLiteral_652/*")"*/;
      goto LABEL_25;
    }
    goto LABEL_29;
  }
  v28 = 0LL;
LABEL_25:
  if ( v22->max_length <= 4 )
  {
LABEL_28:
    v30 = sub_B2C460(v23);
    sub_B2C400(v30, 0LL);
  }
  v22->m_Items[4] = (System_String_o *)v28;
  sub_B2C2F8(&v22->m_Items[4], v28);
  Local = (UnityEngine_Component_o *)System_String__Concat_44385656(v22, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFaceTexture__SetCharacter(v20, dispType, v33, v32, callbackFunc, overWriteImageId, 0LL);
  UIMasterFaceTexture__SetDepth(v20, depth, 0LL);
  return v20;
}


UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  MasterFaceManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_418590B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__, method);
    byte_418590B = 1;
  }
  Instance = (MasterFaceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return MasterFaceManager__CreateLocal(Instance, parent, v5);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreatePrefab_21039228(
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

  if ( (byte_418590C & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__, *(_QWORD *)&dispType);
    byte_418590C = 1;
  }
  Instance = (MasterFaceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v16);
  return MasterFaceManager__CreateLocal_21039400(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFaceManager__DownloadAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4185908 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_4185908 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_30157268(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFaceManager__GetAssetName(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4185907 & 1) == 0 )
  {
    sub_B2C35C(&UIMasterFaceRender_TypeInfo, *(_QWORD *)&genderType);
    byte_4185907 = 1;
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

  if ( (byte_4185909 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_4185909 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30159204(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFaceManager__ReleaseAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_418590A & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_418590A = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_30161248(AssetName, 0LL);
}