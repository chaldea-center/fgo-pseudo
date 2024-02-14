void __fastcall MasterFullFigureManager___ctor(MasterFullFigureManager_o *this, const MethodInfo *method)
{
  if ( (byte_4212A88 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__, method);
    byte_4212A88 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
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
  UnityEngine_GameObject_o *v10; // x22
  UIMasterFullFigureRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4212A86 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___, parent);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_14732/*"UIMasterFullFigure"*/, v7);
    byte_4212A86 = 1;
  }
  masterFigurePrefab = this->fields.masterFigurePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)masterFigurePrefab,
                                             (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_13;
  v10 = gameObject;
  Component_srcLineSprite = (UIMasterFullFigureRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            gameObject,
                                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
  transform = UnityEngine_GameObject__get_transform(v10, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v10, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v10, (System_String_o *)StringLiteral_14732/*"UIMasterFullFigure"*/, 0LL);
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
  UIMasterFullFigureRender__SetLayer(Component_srcLineSprite, (int32_t)gameObject, 0LL);
  return (UIMasterFullFigureTexture_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreateLocal_21012160(
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
  UIMasterFullFigureTexture_o *v17; // x22
  UnityEngine_Object_o *gameObject; // x23
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array *v25; // x24
  System_String_o *v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x25
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
  System_Int32_array **v48; // x25
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  __int64 v57; // x0
  __int64 v58; // x0
  int32_t v59; // [xsp+8h] [xbp-38h] BYREF
  int32_t v60; // [xsp+Ch] [xbp-34h] BYREF

  v59 = equipId;
  v60 = genderType;
  if ( (byte_4212A87 & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, parent);
    sub_B0D8A4(&StringLiteral_14733/*"UIMasterFullFigure("*/, v13);
    sub_B0D8A4(&StringLiteral_753/*"-"*/, v14);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v15);
    byte_4212A87 = 1;
  }
  Local = (UnityEngine_Component_o *)MasterFullFigureManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local
    || (v17 = (UIMasterFullFigureTexture_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        (Local = (UnityEngine_Component_o *)sub_B0D8BC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_30:
    sub_B0D97C(Local);
  }
  v25 = (System_String_array *)Local;
  v26 = (System_String_o *)StringLiteral_14733/*"UIMasterFullFigure("*/;
  if ( StringLiteral_14733/*"UIMasterFullFigure("*/ )
  {
    v26 = (System_String_o *)sub_B0D964(StringLiteral_14733/*"UIMasterFullFigure("*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_29;
    v27 = (System_Int32_array **)StringLiteral_14733/*"UIMasterFullFigure("*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v25->max_length )
    goto LABEL_28;
  v25->m_Items[0] = (System_String_o *)v27;
  sub_B0D840((BattleServantConfConponent_o *)v25->m_Items, v27, v19, v20, v21, v22, v23, v24);
  v26 = System_Int32__ToString((int32_t)&v60, 0LL);
  v34 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = (System_String_o *)sub_B0D964(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_29;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_28;
  v25->m_Items[1] = (System_String_o *)v34;
  sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[1], v34, v28, v29, v30, v31, v32, v33);
  v26 = (System_String_o *)StringLiteral_753/*"-"*/;
  if ( StringLiteral_753/*"-"*/ )
  {
    v26 = (System_String_o *)sub_B0D964(StringLiteral_753/*"-"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_29;
    v41 = (System_Int32_array **)StringLiteral_753/*"-"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_28;
  v25->m_Items[2] = (System_String_o *)v41;
  sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[2], v41, v35, v36, v37, v38, v39, v40);
  v26 = System_Int32__ToString((int32_t)&v59, 0LL);
  v48 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = (System_String_o *)sub_B0D964(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_29:
      v58 = sub_B0D99C();
      sub_B0D948(v58, 0LL);
    }
  }
  if ( v25->max_length <= 3 )
    goto LABEL_28;
  v25->m_Items[3] = (System_String_o *)v48;
  sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[3], v48, v42, v43, v44, v45, v46, v47);
  v26 = (System_String_o *)StringLiteral_658/*")"*/;
  if ( StringLiteral_658/*")"*/ )
  {
    v26 = (System_String_o *)sub_B0D964(StringLiteral_658/*")"*/, v25->obj.klass->_1.element_class);
    if ( v26 )
    {
      v55 = (System_Int32_array **)StringLiteral_658/*")"*/;
      goto LABEL_25;
    }
    goto LABEL_29;
  }
  v55 = 0LL;
LABEL_25:
  if ( v25->max_length <= 4 )
  {
LABEL_28:
    v57 = sub_B0D9A8(v26);
    sub_B0D948(v57, 0LL);
  }
  v25->m_Items[4] = (System_String_o *)v55;
  sub_B0D840((BattleServantConfConponent_o *)&v25->m_Items[4], v55, v49, v50, v51, v52, v53, v54);
  Local = (UnityEngine_Component_o *)System_String__Concat_43930028(v25, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFullFigureTexture__SetCharacter(v17, dispType, v60, v59, callbackFunc, 0LL);
  UIMasterFullFigureTexture__SetDepth(v17, depth, 0LL);
  return v17;
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  MasterFullFigureManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4212A84 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__, method);
    byte_4212A84 = 1;
  }
  Instance = (MasterFullFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return MasterFullFigureManager__CreateLocal(Instance, parent, v4);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab_21012008(
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  MasterFullFigureManager_o *Instance; // x0
  const MethodInfo *v14; // x7

  if ( (byte_4212A85 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__, *(_QWORD *)&dispType);
    byte_4212A85 = 1;
  }
  Instance = (MasterFullFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return MasterFullFigureManager__CreateLocal_21012160(
           Instance,
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

  if ( (byte_4212A81 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4212A81 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_29520984(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFullFigureManager__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4212A80 & 1) == 0 )
  {
    sub_B0D8A4(&UIMasterFullFigureRender_TypeInfo, *(_QWORD *)&equipId);
    byte_4212A80 = 1;
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

  if ( (byte_4212A82 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4212A82 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29522920(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFullFigureManager__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4212A83 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4212A83 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_29524964(AssetName, 0LL);
}