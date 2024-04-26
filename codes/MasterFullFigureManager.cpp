void __fastcall MasterFullFigureManager___ctor(MasterFullFigureManager_o *this, const MethodInfo *method)
{
  if ( (byte_4352261 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
    byte_4352261 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2CE9C98 *)Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreateLocal(
        MasterFullFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *masterFigurePrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x22
  UIMasterFullFigureRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_435225F & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_14872/*"UIMasterFullFigure"*/);
    byte_435225F = 1;
  }
  masterFigurePrefab = this->fields.masterFigurePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)masterFigurePrefab,
                                             (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_13;
  v8 = gameObject;
  Component_srcLineSprite = (UIMasterFullFigureRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            gameObject,
                                                            (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
  transform = UnityEngine_GameObject__get_transform(v8, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)StringLiteral_14872/*"UIMasterFullFigure"*/, 0LL);
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
    sub_B7076C(gameObject, v7);
  }
  UIMasterFullFigureRender__SetLayer(Component_srcLineSprite, (int32_t)gameObject, 0LL);
  return (UIMasterFullFigureTexture_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreateLocal_25833808(
        MasterFullFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UnityEngine_Component_o *Local; // x0
  __int64 v14; // x1
  UIMasterFullFigureTexture_o *v15; // x22
  UnityEngine_Object_o *gameObject; // x23
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array *v23; // x24
  System_String_o *v24; // x0
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x25
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x25
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  __int64 v55; // x0
  __int64 v56; // x0
  int32_t v57; // [xsp+8h] [xbp-38h] BYREF
  int32_t v58; // [xsp+Ch] [xbp-34h] BYREF

  v57 = equipId;
  v58 = genderType;
  if ( (byte_4352260 & 1) == 0 )
  {
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_14873/*"UIMasterFullFigure("*/);
    sub_B70694(&StringLiteral_760/*"-"*/);
    sub_B70694(&StringLiteral_663/*")"*/);
    byte_4352260 = 1;
  }
  Local = (UnityEngine_Component_o *)MasterFullFigureManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local
    || (v15 = (UIMasterFullFigureTexture_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        (Local = (UnityEngine_Component_o *)sub_B706AC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_30:
    sub_B7076C(Local, v14);
  }
  v23 = (System_String_array *)Local;
  v24 = (System_String_o *)StringLiteral_14873/*"UIMasterFullFigure("*/;
  if ( StringLiteral_14873/*"UIMasterFullFigure("*/ )
  {
    v24 = (System_String_o *)sub_B70754(StringLiteral_14873/*"UIMasterFullFigure("*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_29;
    v25 = (System_Int32_array **)StringLiteral_14873/*"UIMasterFullFigure("*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v23->max_length )
    goto LABEL_28;
  v23->m_Items[0] = (System_String_o *)v25;
  sub_B70630((BattleServantConfConponent_o *)v23->m_Items, v25, v17, v18, v19, v20, v21, v22);
  v24 = System_Int32__ToString((int32_t)&v58, 0LL);
  v32 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (System_String_o *)sub_B70754(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_29;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_28;
  v23->m_Items[1] = (System_String_o *)v32;
  sub_B70630((BattleServantConfConponent_o *)&v23->m_Items[1], v32, v26, v27, v28, v29, v30, v31);
  v24 = (System_String_o *)StringLiteral_760/*"-"*/;
  if ( StringLiteral_760/*"-"*/ )
  {
    v24 = (System_String_o *)sub_B70754(StringLiteral_760/*"-"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_29;
    v39 = (System_Int32_array **)StringLiteral_760/*"-"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_28;
  v23->m_Items[2] = (System_String_o *)v39;
  sub_B70630((BattleServantConfConponent_o *)&v23->m_Items[2], v39, v33, v34, v35, v36, v37, v38);
  v24 = System_Int32__ToString((int32_t)&v57, 0LL);
  v46 = (System_Int32_array **)v24;
  if ( v24 )
  {
    v24 = (System_String_o *)sub_B70754(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_29:
      v56 = sub_B7078C(v24);
      sub_B70738(v56, 0LL);
    }
  }
  if ( v23->max_length <= 3 )
    goto LABEL_28;
  v23->m_Items[3] = (System_String_o *)v46;
  sub_B70630((BattleServantConfConponent_o *)&v23->m_Items[3], v46, v40, v41, v42, v43, v44, v45);
  v24 = (System_String_o *)StringLiteral_663/*")"*/;
  if ( StringLiteral_663/*")"*/ )
  {
    v24 = (System_String_o *)sub_B70754(StringLiteral_663/*")"*/, v23->obj.klass->_1.element_class);
    if ( v24 )
    {
      v53 = (System_Int32_array **)StringLiteral_663/*")"*/;
      goto LABEL_25;
    }
    goto LABEL_29;
  }
  v53 = 0LL;
LABEL_25:
  if ( v23->max_length <= 4 )
  {
LABEL_28:
    v55 = sub_B70798(v24);
    sub_B70738(v55, 0LL);
  }
  v23->m_Items[4] = (System_String_o *)v53;
  sub_B70630((BattleServantConfConponent_o *)&v23->m_Items[4], v53, v47, v48, v49, v50, v51, v52);
  Local = (UnityEngine_Component_o *)System_String__Concat_44838292(v23, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFullFigureTexture__SetCharacter(v15, dispType, v58, v57, callbackFunc, 0LL);
  UIMasterFullFigureTexture__SetDepth(v15, depth, 0LL);
  return v15;
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  MasterFullFigureManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_435225D & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
    byte_435225D = 1;
  }
  Instance = (MasterFullFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v4);
  return MasterFullFigureManager__CreateLocal(Instance, parent, v5);
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab_25833656(
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

  if ( (byte_435225E & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
    byte_435225E = 1;
  }
  Instance = (MasterFullFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v14);
  return MasterFullFigureManager__CreateLocal_25833808(
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

  if ( (byte_435225A & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    byte_435225A = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_31201628(AssetName, callback, 0LL);
}


System_String_array *__fastcall MasterFullFigureManager__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4352259 & 1) == 0 )
  {
    sub_B70694(&UIMasterFullFigureRender_TypeInfo);
    byte_4352259 = 1;
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

  if ( (byte_435225B & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    byte_435225B = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_31203564(AssetName, callback, 1, 0LL);
}


void __fastcall MasterFullFigureManager__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_435225C & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    byte_435225C = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_31205608(AssetName, 0LL);
}