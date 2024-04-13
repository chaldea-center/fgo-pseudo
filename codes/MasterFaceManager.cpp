void __fastcall MasterFaceManager___ctor(MasterFaceManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBB98 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MasterFaceManager___ctor__, (_DWORD)method, v2, v3);
    byte_42EBB98 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_MasterFaceManager___ctor__);
}


UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreateLocal(
        MasterFaceManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct UnityEngine_GameObject_o *masterFacePrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x22
  UIMasterFaceRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EBB96 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___, (_DWORD)parent, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_14839/*"UIMasterFace"*/, v12, v13, v14);
    byte_42EBB96 = 1;
  }
  masterFacePrefab = this->fields.masterFacePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)masterFacePrefab,
                                             (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_13;
  v18 = gameObject;
  Component_srcLineSprite = (UIMasterFaceRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIMasterFaceTexture___);
  transform = UnityEngine_GameObject__get_transform(v18, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v18, (System_String_o *)StringLiteral_14839/*"UIMasterFace"*/, 0LL);
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
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v27, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL),
        !Component_srcLineSprite) )
  {
LABEL_13:
    sub_B5D69C(gameObject, v17);
  }
  UIMasterFaceRender__SetLayer(Component_srcLineSprite, (int32_t)gameObject, 0LL);
  return (UIMasterFaceTexture_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreateLocal_31037364(
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  UnityEngine_Component_o *Local; // x0
  __int64 v25; // x1
  UIMasterFaceTexture_o *v26; // x23
  UnityEngine_Object_o *gameObject; // x24
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array *v34; // x25
  System_String_o *v35; // x0
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x26
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x26
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x1
  __int64 v66; // x0
  __int64 v67; // x0
  int32_t v68; // [xsp+8h] [xbp-48h] BYREF
  int32_t v69; // [xsp+Ch] [xbp-44h] BYREF

  v68 = equipId;
  v69 = genderType;
  if ( (byte_42EBB97 & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)parent, dispType, *(_QWORD *)&genderType);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_14840/*"UIMasterFace("*/, v21, v22, v23);
    byte_42EBB97 = 1;
  }
  Local = (UnityEngine_Component_o *)MasterFaceManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local
    || (v26 = (UIMasterFaceTexture_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        (Local = (UnityEngine_Component_o *)sub_B5D5DC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_30:
    sub_B5D69C(Local, v25);
  }
  v34 = (System_String_array *)Local;
  v35 = (System_String_o *)StringLiteral_14840/*"UIMasterFace("*/;
  if ( StringLiteral_14840/*"UIMasterFace("*/ )
  {
    v35 = (System_String_o *)sub_B5D684(StringLiteral_14840/*"UIMasterFace("*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_29;
    v36 = (System_Int32_array **)StringLiteral_14840/*"UIMasterFace("*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( !v34->max_length )
    goto LABEL_28;
  v34->m_Items[0] = (System_String_o *)v36;
  sub_B5D560((BattleServantConfConponent_o *)v34->m_Items, v36, v28, v29, v30, v31, v32, v33);
  v35 = System_Int32__ToString((int32_t)&v69, 0LL);
  v43 = (System_Int32_array **)v35;
  if ( v35 )
  {
    v35 = (System_String_o *)sub_B5D684(v35, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_29;
  }
  if ( v34->max_length <= 1 )
    goto LABEL_28;
  v34->m_Items[1] = (System_String_o *)v43;
  sub_B5D560((BattleServantConfConponent_o *)&v34->m_Items[1], v43, v37, v38, v39, v40, v41, v42);
  v35 = (System_String_o *)StringLiteral_755/*"-"*/;
  if ( StringLiteral_755/*"-"*/ )
  {
    v35 = (System_String_o *)sub_B5D684(StringLiteral_755/*"-"*/, v34->obj.klass->_1.element_class);
    if ( !v35 )
      goto LABEL_29;
    v50 = (System_Int32_array **)StringLiteral_755/*"-"*/;
  }
  else
  {
    v50 = 0LL;
  }
  if ( v34->max_length <= 2 )
    goto LABEL_28;
  v34->m_Items[2] = (System_String_o *)v50;
  sub_B5D560((BattleServantConfConponent_o *)&v34->m_Items[2], v50, v44, v45, v46, v47, v48, v49);
  v35 = System_Int32__ToString((int32_t)&v68, 0LL);
  v57 = (System_Int32_array **)v35;
  if ( v35 )
  {
    v35 = (System_String_o *)sub_B5D684(v35, v34->obj.klass->_1.element_class);
    if ( !v35 )
    {
LABEL_29:
      v67 = sub_B5D6BC(v35);
      sub_B5D668(v67, 0LL);
    }
  }
  if ( v34->max_length <= 3 )
    goto LABEL_28;
  v34->m_Items[3] = (System_String_o *)v57;
  sub_B5D560((BattleServantConfConponent_o *)&v34->m_Items[3], v57, v51, v52, v53, v54, v55, v56);
  v35 = (System_String_o *)StringLiteral_659/*")"*/;
  if ( StringLiteral_659/*")"*/ )
  {
    v35 = (System_String_o *)sub_B5D684(StringLiteral_659/*")"*/, v34->obj.klass->_1.element_class);
    if ( v35 )
    {
      v64 = (System_Int32_array **)StringLiteral_659/*")"*/;
      goto LABEL_25;
    }
    goto LABEL_29;
  }
  v64 = 0LL;
LABEL_25:
  if ( v34->max_length <= 4 )
  {
LABEL_28:
    v66 = sub_B5D6C8(v35);
    sub_B5D668(v66, 0LL);
  }
  v34->m_Items[4] = (System_String_o *)v64;
  sub_B5D560((BattleServantConfConponent_o *)&v34->m_Items[4], v64, v58, v59, v60, v61, v62, v63);
  Local = (UnityEngine_Component_o *)System_String__Concat_44657912(v34, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFaceTexture__SetCharacter(v26, dispType, v69, v68, callbackFunc, overWriteImageId, 0LL);
  UIMasterFaceTexture__SetDepth(v26, depth, 0LL);
  return v26;
}


UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MasterFaceManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42EBB94 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EBB94 = 1;
  }
  Instance = (MasterFaceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  return MasterFaceManager__CreateLocal(Instance, parent, v7);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFaceTexture_o *__fastcall MasterFaceManager__CreatePrefab_31037192(
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

  if ( (byte_42EBB95 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__,
      dispType,
      genderType,
      *(_QWORD *)&equipId);
    byte_42EBB95 = 1;
  }
  Instance = (MasterFaceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MasterFaceManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v16);
  return MasterFaceManager__CreateLocal_31037364(
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

  if ( (byte_42EBB91 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, genderType, equipId, callback);
    byte_42EBB91 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_30662148(AssetName, callback, 0LL);
}


System_String_array *__fastcall MasterFaceManager__GetAssetName(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_42EBB90 & 1) == 0 )
  {
    sub_B5D5C4(&UIMasterFaceRender_TypeInfo, genderType, equipId, method);
    byte_42EBB90 = 1;
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

  if ( (byte_42EBB92 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, genderType, equipId, callback);
    byte_42EBB92 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30664084(AssetName, callback, 1, 0LL);
}


void __fastcall MasterFaceManager__ReleaseAsset(
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_42EBB93 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, genderType, equipId, method);
    byte_42EBB93 = 1;
  }
  AssetName = MasterFaceManager__GetAssetName(dispType, genderType, equipId, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_30666128(AssetName, 0LL);
}