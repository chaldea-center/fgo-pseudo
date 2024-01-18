void __fastcall MasterFullFigureManager___ctor(MasterFullFigureManager_o *this, const MethodInfo *method)
{
  if ( (byte_418594C & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__, method);
    byte_418594C = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreateLocal(
        MasterFullFigureManager_o *this,
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *masterFigurePrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x22
  UIMasterFullFigureRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418594A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___, parent);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_14687/*"UIMasterFullFigure"*/, v7);
    byte_418594A = 1;
  }
  masterFigurePrefab = this->fields.masterFigurePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)masterFigurePrefab,
                                             (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_13;
  v11 = gameObject;
  Component_srcLineSprite = (UIMasterFullFigureRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            gameObject,
                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_14687/*"UIMasterFullFigure"*/, 0LL);
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
  UIMasterFullFigureRender__SetLayer(Component_srcLineSprite, (int32_t)gameObject, 0LL);
  return (UIMasterFullFigureTexture_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreateLocal_21059684(
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
  UnityEngine_Component_o *Local; // x0
  __int64 v17; // x1
  UIMasterFullFigureTexture_o *v18; // x22
  UnityEngine_Object_o *gameObject; // x23
  System_String_array *v20; // x24
  System_String_o *v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x25
  System_String_o *v24; // x1
  System_String_o *v25; // x25
  __int64 v26; // x1
  __int64 v28; // x0
  __int64 v29; // x0
  int32_t v30; // [xsp+8h] [xbp-38h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-34h] BYREF

  v30 = equipId;
  v31 = genderType;
  if ( (byte_418594B & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, parent);
    sub_B2C35C(&StringLiteral_14688/*"UIMasterFullFigure("*/, v13);
    sub_B2C35C(&StringLiteral_747/*"-"*/, v14);
    sub_B2C35C(&StringLiteral_652/*")"*/, v15);
    byte_418594B = 1;
  }
  Local = (UnityEngine_Component_o *)MasterFullFigureManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local
    || (v18 = (UIMasterFullFigureTexture_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        (Local = (UnityEngine_Component_o *)sub_B2C374(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_30:
    sub_B2C434(Local, v17);
  }
  v20 = (System_String_array *)Local;
  v21 = (System_String_o *)StringLiteral_14688/*"UIMasterFullFigure("*/;
  if ( StringLiteral_14688/*"UIMasterFullFigure("*/ )
  {
    v21 = (System_String_o *)sub_B2C41C(StringLiteral_14688/*"UIMasterFullFigure("*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_29;
    v22 = StringLiteral_14688/*"UIMasterFullFigure("*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v20->max_length )
    goto LABEL_28;
  v20->m_Items[0] = (System_String_o *)v22;
  sub_B2C2F8(v20->m_Items, v22);
  v21 = System_Int32__ToString((int32_t)&v31, 0LL);
  v23 = v21;
  if ( v21 )
  {
    v21 = (System_String_o *)sub_B2C41C(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_29;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_28;
  v20->m_Items[1] = v23;
  sub_B2C2F8(&v20->m_Items[1], v23);
  v21 = (System_String_o *)StringLiteral_747/*"-"*/;
  if ( StringLiteral_747/*"-"*/ )
  {
    v21 = (System_String_o *)sub_B2C41C(StringLiteral_747/*"-"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_29;
    v24 = (System_String_o *)StringLiteral_747/*"-"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v20->max_length <= 2 )
    goto LABEL_28;
  v20->m_Items[2] = v24;
  sub_B2C2F8(&v20->m_Items[2], v24);
  v21 = System_Int32__ToString((int32_t)&v30, 0LL);
  v25 = v21;
  if ( v21 )
  {
    v21 = (System_String_o *)sub_B2C41C(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
    {
LABEL_29:
      v29 = sub_B2C454();
      sub_B2C400(v29, 0LL);
    }
  }
  if ( v20->max_length <= 3 )
    goto LABEL_28;
  v20->m_Items[3] = v25;
  sub_B2C2F8(&v20->m_Items[3], v25);
  v21 = (System_String_o *)StringLiteral_652/*")"*/;
  if ( StringLiteral_652/*")"*/ )
  {
    v21 = (System_String_o *)sub_B2C41C(StringLiteral_652/*")"*/, v20->obj.klass->_1.element_class);
    if ( v21 )
    {
      v26 = StringLiteral_652/*")"*/;
      goto LABEL_25;
    }
    goto LABEL_29;
  }
  v26 = 0LL;
LABEL_25:
  if ( v20->max_length <= 4 )
  {
LABEL_28:
    v28 = sub_B2C460(v21);
    sub_B2C400(v28, 0LL);
  }
  v20->m_Items[4] = (System_String_o *)v26;
  sub_B2C2F8(&v20->m_Items[4], v26);
  Local = (UnityEngine_Component_o *)System_String__Concat_44385656(v20, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFullFigureTexture__SetCharacter(v18, dispType, v31, v30, callbackFunc, 0LL);
  UIMasterFullFigureTexture__SetDepth(v18, depth, 0LL);
  return v18;
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  MasterFullFigureManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4185948 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__, method);
    byte_4185948 = 1;
  }
  Instance = (MasterFullFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  return MasterFullFigureManager__CreateLocal(Instance, parent, v5);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab_21059532(
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

  if ( (byte_4185949 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__, *(_QWORD *)&dispType);
    byte_4185949 = 1;
  }
  Instance = (MasterFullFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v14);
  return MasterFullFigureManager__CreateLocal_21059684(
           Instance,
           parent,
           dispType,
           genderType,
           equipId,
           depth,
           callbackFunc,
           v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFullFigureManager__DownloadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_4185945 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4185945 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_30157268(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFullFigureManager__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4185944 & 1) == 0 )
  {
    sub_B2C35C(&UIMasterFullFigureRender_TypeInfo, *(_QWORD *)&equipId);
    byte_4185944 = 1;
  }
  if ( (BYTE3(UIMasterFullFigureRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIMasterFullFigureRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFullFigureRender_TypeInfo);
  }
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

  if ( (byte_4185946 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4185946 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30159204(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFullFigureManager__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4185947 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4185947 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_30161248(AssetName, 0LL);
}