void __fastcall MasterFullFigureManager___ctor(MasterFullFigureManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8970 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__, (_DWORD)method, v2, v3);
    byte_42E8970 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreateLocal(
        MasterFullFigureManager_o *this,
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
  struct UnityEngine_GameObject_o *masterFigurePrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x22
  UIMasterFullFigureRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E896E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___,
      (_DWORD)parent,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_14844/*"UIMasterFullFigure"*/, v12, v13, v14);
    byte_42E896E = 1;
  }
  masterFigurePrefab = this->fields.masterFigurePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)masterFigurePrefab,
                                             (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_13;
  v18 = gameObject;
  Component_srcLineSprite = (UIMasterFullFigureRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            gameObject,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
  transform = UnityEngine_GameObject__get_transform(v18, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v18, (System_String_o *)StringLiteral_14844/*"UIMasterFullFigure"*/, 0LL);
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
  UIMasterFullFigureRender__SetLayer(Component_srcLineSprite, (int32_t)gameObject, 0LL);
  return (UIMasterFullFigureTexture_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreateLocal_25267652(
        MasterFullFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  UnityEngine_Component_o *Local; // x0
  __int64 v23; // x1
  UIMasterFullFigureTexture_o *v24; // x22
  UnityEngine_Object_o *gameObject; // x23
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array *v32; // x24
  System_String_o *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x25
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x25
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x1
  __int64 v64; // x0
  __int64 v65; // x0
  int32_t v66; // [xsp+8h] [xbp-38h] BYREF
  int32_t v67; // [xsp+Ch] [xbp-34h] BYREF

  v66 = equipId;
  v67 = genderType;
  if ( (byte_42E896F & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)parent, dispType, *(_QWORD *)&genderType);
    sub_B5D5C4(&StringLiteral_14845/*"UIMasterFullFigure("*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v19, v20, v21);
    byte_42E896F = 1;
  }
  Local = (UnityEngine_Component_o *)MasterFullFigureManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local
    || (v24 = (UIMasterFullFigureTexture_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        (Local = (UnityEngine_Component_o *)sub_B5D5DC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_30:
    sub_B5D69C(Local, v23);
  }
  v32 = (System_String_array *)Local;
  v33 = (System_String_o *)StringLiteral_14845/*"UIMasterFullFigure("*/;
  if ( StringLiteral_14845/*"UIMasterFullFigure("*/ )
  {
    v33 = (System_String_o *)sub_B5D684(StringLiteral_14845/*"UIMasterFullFigure("*/, v32->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_29;
    v34 = (System_Int32_array **)StringLiteral_14845/*"UIMasterFullFigure("*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( !v32->max_length )
    goto LABEL_28;
  v32->m_Items[0] = (System_String_o *)v34;
  sub_B5D560((BattleServantConfConponent_o *)v32->m_Items, v34, v26, v27, v28, v29, v30, v31);
  v33 = System_Int32__ToString((int32_t)&v67, 0LL);
  v41 = (System_Int32_array **)v33;
  if ( v33 )
  {
    v33 = (System_String_o *)sub_B5D684(v33, v32->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_29;
  }
  if ( v32->max_length <= 1 )
    goto LABEL_28;
  v32->m_Items[1] = (System_String_o *)v41;
  sub_B5D560((BattleServantConfConponent_o *)&v32->m_Items[1], v41, v35, v36, v37, v38, v39, v40);
  v33 = (System_String_o *)StringLiteral_755/*"-"*/;
  if ( StringLiteral_755/*"-"*/ )
  {
    v33 = (System_String_o *)sub_B5D684(StringLiteral_755/*"-"*/, v32->obj.klass->_1.element_class);
    if ( !v33 )
      goto LABEL_29;
    v48 = (System_Int32_array **)StringLiteral_755/*"-"*/;
  }
  else
  {
    v48 = 0LL;
  }
  if ( v32->max_length <= 2 )
    goto LABEL_28;
  v32->m_Items[2] = (System_String_o *)v48;
  sub_B5D560((BattleServantConfConponent_o *)&v32->m_Items[2], v48, v42, v43, v44, v45, v46, v47);
  v33 = System_Int32__ToString((int32_t)&v66, 0LL);
  v55 = (System_Int32_array **)v33;
  if ( v33 )
  {
    v33 = (System_String_o *)sub_B5D684(v33, v32->obj.klass->_1.element_class);
    if ( !v33 )
    {
LABEL_29:
      v65 = sub_B5D6BC(v33);
      sub_B5D668(v65, 0LL);
    }
  }
  if ( v32->max_length <= 3 )
    goto LABEL_28;
  v32->m_Items[3] = (System_String_o *)v55;
  sub_B5D560((BattleServantConfConponent_o *)&v32->m_Items[3], v55, v49, v50, v51, v52, v53, v54);
  v33 = (System_String_o *)StringLiteral_659/*")"*/;
  if ( StringLiteral_659/*")"*/ )
  {
    v33 = (System_String_o *)sub_B5D684(StringLiteral_659/*")"*/, v32->obj.klass->_1.element_class);
    if ( v33 )
    {
      v62 = (System_Int32_array **)StringLiteral_659/*")"*/;
      goto LABEL_25;
    }
    goto LABEL_29;
  }
  v62 = 0LL;
LABEL_25:
  if ( v32->max_length <= 4 )
  {
LABEL_28:
    v64 = sub_B5D6C8(v33);
    sub_B5D668(v64, 0LL);
  }
  v32->m_Items[4] = (System_String_o *)v62;
  sub_B5D560((BattleServantConfConponent_o *)&v32->m_Items[4], v62, v56, v57, v58, v59, v60, v61);
  Local = (UnityEngine_Component_o *)System_String__Concat_44657912(v32, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFullFigureTexture__SetCharacter(v24, dispType, v67, v66, callbackFunc, 0LL);
  UIMasterFullFigureTexture__SetDepth(v24, depth, 0LL);
  return v24;
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MasterFullFigureManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_42E896C & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E896C = 1;
  }
  Instance = (MasterFullFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  return MasterFullFigureManager__CreateLocal(Instance, parent, v7);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab_25267500(
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  MasterFullFigureManager_o *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x7

  if ( (byte_42E896D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__,
      dispType,
      genderType,
      *(_QWORD *)&equipId);
    byte_42E896D = 1;
  }
  Instance = (MasterFullFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v14);
  return MasterFullFigureManager__CreateLocal_25267652(
           Instance,
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

  if ( (byte_42E8969 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, equipId, (_DWORD)callback, method);
    byte_42E8969 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_30662148(AssetName, callback, 0LL);
}


System_String_array *__fastcall MasterFullFigureManager__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E8968 & 1) == 0 )
  {
    sub_B5D5C4(&UIMasterFullFigureRender_TypeInfo, equipId, (_DWORD)method, v3);
    byte_42E8968 = 1;
  }
  if ( (BYTE3(UIMasterFullFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIMasterFullFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFullFigureRender_TypeInfo);
  }
  return UIMasterFullFigureRender__GetAssetNameList(genderType, equipId, 0LL);
}


void __fastcall MasterFullFigureManager__LoadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_42E896A & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, equipId, (_DWORD)callback, method);
    byte_42E896A = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30664084(AssetName, callback, 1, 0LL);
}


void __fastcall MasterFullFigureManager__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_array *AssetName; // x19

  if ( (byte_42E896B & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, equipId, (_DWORD)method, v3);
    byte_42E896B = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_30666128(AssetName, 0LL);
}