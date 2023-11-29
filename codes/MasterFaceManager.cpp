void __fastcall MasterFaceManager___ctor(MasterFaceManager_o *this, const MethodInfo *method)
{
  if ( (byte_40FB1B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MasterFaceManager___ctor__, method);
    byte_40FB1B2 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
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
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x22
  UIMasterFaceRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v13; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t layer; // w0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FB1B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___, parent);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_14622, v7);
    byte_40FB1B0 = 1;
  }
  masterFacePrefab = this->fields.masterFacePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)masterFacePrefab,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v9 )
    goto LABEL_13;
  v10 = v9;
  Component_srcLineSprite = (UIMasterFaceRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v9,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
  transform = UnityEngine_GameObject__get_transform(v10, 0LL);
  v13 = UnityEngine_GameObject__get_transform(v10, 0LL);
  if ( !v13 )
    goto LABEL_13;
  localScale = UnityEngine_Transform__get_localScale(v13, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v10, (System_String_o *)StringLiteral_14622, 0LL);
  if ( !parent )
    goto LABEL_13;
  v17 = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_13;
  UnityEngine_Transform__set_parent(transform, v17, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v23, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject || (layer = UnityEngine_GameObject__get_layer(gameObject, 0LL), !Component_srcLineSprite) )
LABEL_13:
    sub_B170D4();
  UIMasterFaceRender__SetLayer(Component_srcLineSprite, layer, 0LL);
  return (UIMasterFaceTexture_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreateLocal_27242548(
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
  __int64 v21; // x2
  __int64 v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array *v29; // x25
  System_String_o *v30; // x0
  System_Int32_array **v31; // x1
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x26
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x26
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_o *v54; // x0
  int32_t v56; // [xsp+8h] [xbp-48h] BYREF
  int32_t v57; // [xsp+Ch] [xbp-44h] BYREF

  v56 = equipId;
  v57 = genderType;
  if ( (byte_40FB1B1 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, parent);
    sub_B16FFC(&StringLiteral_746, v15);
    sub_B16FFC(&StringLiteral_651, v16);
    sub_B16FFC(&StringLiteral_14623, v17);
    byte_40FB1B1 = 1;
  }
  Local = (UnityEngine_Component_o *)MasterFaceManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local
    || (v19 = (UIMasterFaceTexture_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        (v22 = sub_B17014(string___TypeInfo, 5LL, v21)) == 0) )
  {
LABEL_30:
    sub_B170D4();
  }
  v29 = (System_String_array *)v22;
  v30 = (System_String_o *)StringLiteral_14623;
  if ( StringLiteral_14623 )
  {
    v30 = (System_String_o *)sub_B170BC(StringLiteral_14623, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_29;
    v31 = (System_Int32_array **)StringLiteral_14623;
  }
  else
  {
    v31 = 0LL;
  }
  if ( !v29->max_length )
    goto LABEL_28;
  v29->m_Items[0] = (System_String_o *)v31;
  sub_B16F98((BattleServantConfConponent_o *)v29->m_Items, v31, v23, v24, v25, v26, v27, v28);
  v30 = System_Int32__ToString((int32_t)&v57, 0LL);
  v37 = (System_Int32_array **)v30;
  if ( v30 )
  {
    v30 = (System_String_o *)sub_B170BC(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_29;
  }
  if ( v29->max_length <= 1 )
    goto LABEL_28;
  v29->m_Items[1] = (System_String_o *)v37;
  sub_B16F98((BattleServantConfConponent_o *)&v29->m_Items[1], v37, v23, v32, v33, v34, v35, v36);
  v30 = (System_String_o *)StringLiteral_746;
  if ( StringLiteral_746 )
  {
    v30 = (System_String_o *)sub_B170BC(StringLiteral_746, v29->obj.klass->_1.element_class);
    if ( !v30 )
      goto LABEL_29;
    v31 = (System_Int32_array **)StringLiteral_746;
  }
  else
  {
    v31 = 0LL;
  }
  if ( v29->max_length <= 2 )
    goto LABEL_28;
  v29->m_Items[2] = (System_String_o *)v31;
  sub_B16F98((BattleServantConfConponent_o *)&v29->m_Items[2], v31, v23, v38, v39, v40, v41, v42);
  v30 = System_Int32__ToString((int32_t)&v56, 0LL);
  v48 = (System_Int32_array **)v30;
  if ( v30 )
  {
    v30 = (System_String_o *)sub_B170BC(v30, v29->obj.klass->_1.element_class);
    if ( !v30 )
    {
LABEL_29:
      sub_B170F4(v30);
      sub_B170A0();
    }
  }
  if ( v29->max_length <= 3 )
    goto LABEL_28;
  v29->m_Items[3] = (System_String_o *)v48;
  sub_B16F98((BattleServantConfConponent_o *)&v29->m_Items[3], v48, v23, v43, v44, v45, v46, v47);
  v30 = (System_String_o *)StringLiteral_651;
  if ( StringLiteral_651 )
  {
    v30 = (System_String_o *)sub_B170BC(StringLiteral_651, v29->obj.klass->_1.element_class);
    if ( v30 )
    {
      v31 = (System_Int32_array **)StringLiteral_651;
      goto LABEL_25;
    }
    goto LABEL_29;
  }
  v31 = 0LL;
LABEL_25:
  if ( v29->max_length <= 4 )
  {
LABEL_28:
    sub_B17100(v30, v31, v23);
    sub_B170A0();
  }
  v29->m_Items[4] = (System_String_o *)v31;
  sub_B16F98((BattleServantConfConponent_o *)&v29->m_Items[4], v31, v23, v49, v50, v51, v52, v53);
  v54 = System_String__Concat_43823856(v29, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_Object__set_name(gameObject, v54, 0LL);
  UIMasterFaceTexture__SetCharacter(v19, dispType, v57, v56, callbackFunc, overWriteImageId, 0LL);
  UIMasterFaceTexture__SetDepth(v19, depth, 0LL);
  return v19;
}


UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  MasterFaceManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40FB1AE & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__, method);
    byte_40FB1AE = 1;
  }
  Instance = (MasterFaceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return MasterFaceManager__CreateLocal(Instance, parent, v4);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreatePrefab_27242376(
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

  if ( (byte_40FB1AF & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__, *(_QWORD *)&dispType);
    byte_40FB1AF = 1;
  }
  Instance = (MasterFaceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return MasterFaceManager__CreateLocal_27242548(
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

  if ( (byte_40FB1AB & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_40FB1AB = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_29951960(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFaceManager__GetAssetName(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_40FB1AA & 1) == 0 )
  {
    sub_B16FFC(&UIMasterFaceRender_TypeInfo, *(_QWORD *)&genderType);
    byte_40FB1AA = 1;
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

  if ( (byte_40FB1AC & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_40FB1AC = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29953896(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFaceManager__ReleaseAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_40FB1AD & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&genderType);
    byte_40FB1AD = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_29955940(AssetName, 0LL);
}