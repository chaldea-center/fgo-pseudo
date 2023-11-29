void __fastcall MasterFullFigureManager___ctor(MasterFullFigureManager_o *this, const MethodInfo *method)
{
  if ( (byte_40FB1EF & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__, method);
    byte_40FB1EF = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_MasterFullFigureManager___ctor__);
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
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x22
  UIMasterFullFigureRender_o *Component_srcLineSprite; // x20
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

  if ( (byte_40FB1ED & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___, parent);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_14627, v7);
    byte_40FB1ED = 1;
  }
  masterFigurePrefab = this->fields.masterFigurePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     (UnityEngine_UI_Dropdown_DropdownItem_o *)masterFigurePrefab,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v9 )
    goto LABEL_13;
  v10 = v9;
  Component_srcLineSprite = (UIMasterFullFigureRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            v9,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFullFigureTexture___);
  transform = UnityEngine_GameObject__get_transform(v10, 0LL);
  v13 = UnityEngine_GameObject__get_transform(v10, 0LL);
  if ( !v13 )
    goto LABEL_13;
  localScale = UnityEngine_Transform__get_localScale(v13, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v10, (System_String_o *)StringLiteral_14627, 0LL);
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
  UIMasterFullFigureRender__SetLayer(Component_srcLineSprite, layer, 0LL);
  return (UIMasterFullFigureTexture_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreateLocal_27262876(
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
  __int64 v19; // x2
  __int64 v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array *v27; // x24
  System_String_o *v28; // x0
  System_Int32_array **v29; // x1
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x25
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x25
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_o *v52; // x0
  int32_t v54; // [xsp+8h] [xbp-38h] BYREF
  int32_t v55; // [xsp+Ch] [xbp-34h] BYREF

  v54 = equipId;
  v55 = genderType;
  if ( (byte_40FB1EE & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, parent);
    sub_B16FFC(&StringLiteral_14628, v13);
    sub_B16FFC(&StringLiteral_746, v14);
    sub_B16FFC(&StringLiteral_651, v15);
    byte_40FB1EE = 1;
  }
  Local = (UnityEngine_Component_o *)MasterFullFigureManager__CreateLocal(this, parent, *(const MethodInfo **)&dispType);
  if ( !Local
    || (v17 = (UIMasterFullFigureTexture_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        (v20 = sub_B17014(string___TypeInfo, 5LL, v19)) == 0) )
  {
LABEL_30:
    sub_B170D4();
  }
  v27 = (System_String_array *)v20;
  v28 = (System_String_o *)StringLiteral_14628;
  if ( StringLiteral_14628 )
  {
    v28 = (System_String_o *)sub_B170BC(StringLiteral_14628, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_29;
    v29 = (System_Int32_array **)StringLiteral_14628;
  }
  else
  {
    v29 = 0LL;
  }
  if ( !v27->max_length )
    goto LABEL_28;
  v27->m_Items[0] = (System_String_o *)v29;
  sub_B16F98((BattleServantConfConponent_o *)v27->m_Items, v29, v21, v22, v23, v24, v25, v26);
  v28 = System_Int32__ToString((int32_t)&v55, 0LL);
  v35 = (System_Int32_array **)v28;
  if ( v28 )
  {
    v28 = (System_String_o *)sub_B170BC(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_29;
  }
  if ( v27->max_length <= 1 )
    goto LABEL_28;
  v27->m_Items[1] = (System_String_o *)v35;
  sub_B16F98((BattleServantConfConponent_o *)&v27->m_Items[1], v35, v21, v30, v31, v32, v33, v34);
  v28 = (System_String_o *)StringLiteral_746;
  if ( StringLiteral_746 )
  {
    v28 = (System_String_o *)sub_B170BC(StringLiteral_746, v27->obj.klass->_1.element_class);
    if ( !v28 )
      goto LABEL_29;
    v29 = (System_Int32_array **)StringLiteral_746;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v27->max_length <= 2 )
    goto LABEL_28;
  v27->m_Items[2] = (System_String_o *)v29;
  sub_B16F98((BattleServantConfConponent_o *)&v27->m_Items[2], v29, v21, v36, v37, v38, v39, v40);
  v28 = System_Int32__ToString((int32_t)&v54, 0LL);
  v46 = (System_Int32_array **)v28;
  if ( v28 )
  {
    v28 = (System_String_o *)sub_B170BC(v28, v27->obj.klass->_1.element_class);
    if ( !v28 )
    {
LABEL_29:
      sub_B170F4(v28);
      sub_B170A0();
    }
  }
  if ( v27->max_length <= 3 )
    goto LABEL_28;
  v27->m_Items[3] = (System_String_o *)v46;
  sub_B16F98((BattleServantConfConponent_o *)&v27->m_Items[3], v46, v21, v41, v42, v43, v44, v45);
  v28 = (System_String_o *)StringLiteral_651;
  if ( StringLiteral_651 )
  {
    v28 = (System_String_o *)sub_B170BC(StringLiteral_651, v27->obj.klass->_1.element_class);
    if ( v28 )
    {
      v29 = (System_Int32_array **)StringLiteral_651;
      goto LABEL_25;
    }
    goto LABEL_29;
  }
  v29 = 0LL;
LABEL_25:
  if ( v27->max_length <= 4 )
  {
LABEL_28:
    sub_B17100(v28, v29, v21);
    sub_B170A0();
  }
  v27->m_Items[4] = (System_String_o *)v29;
  sub_B16F98((BattleServantConfConponent_o *)&v27->m_Items[4], v29, v21, v47, v48, v49, v50, v51);
  v52 = System_String__Concat_43823856(v27, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_Object__set_name(gameObject, v52, 0LL);
  UIMasterFullFigureTexture__SetCharacter(v17, dispType, v55, v54, callbackFunc, 0LL);
  UIMasterFullFigureTexture__SetDepth(v17, depth, 0LL);
  return v17;
}


UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  MasterFullFigureManager_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_40FB1EB & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__, method);
    byte_40FB1EB = 1;
  }
  Instance = (MasterFullFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return MasterFullFigureManager__CreateLocal(Instance, parent, v4);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFullFigureTexture_o *__fastcall MasterFullFigureManager__CreatePrefab_27262724(
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

  if ( (byte_40FB1EC & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__, *(_QWORD *)&dispType);
    byte_40FB1EC = 1;
  }
  Instance = (MasterFullFigureManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MasterFullFigureManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return MasterFullFigureManager__CreateLocal_27262876(
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

  if ( (byte_40FB1E8 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_40FB1E8 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_29951960(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFullFigureManager__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_40FB1E7 & 1) == 0 )
  {
    sub_B16FFC(&UIMasterFullFigureRender_TypeInfo, *(_QWORD *)&equipId);
    byte_40FB1E7 = 1;
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

  if ( (byte_40FB1E9 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_40FB1E9 = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29953896(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFullFigureManager__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_40FB1EA & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_40FB1EA = 1;
  }
  AssetName = MasterFullFigureManager__GetAssetName(genderType, equipId, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_29955940(AssetName, 0LL);
}