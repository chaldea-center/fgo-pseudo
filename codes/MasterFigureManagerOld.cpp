void __fastcall MasterFigureManagerOld___ctor(MasterFigureManagerOld_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBBA3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__, (_DWORD)method, v2, v3);
    byte_42EBBA3 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreateEnemyLocal(
        MasterFigureManagerOld_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t enemyFaceId,
        int32_t enemyBattleId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Component_o *Local; // x0
  __int64 v16; // x1
  UIMasterFigureTextureOld_o *v17; // x22
  UnityEngine_Object_o *gameObject; // x23
  System_String_o *v19; // x0
  int32_t enemyFaceIda; // [xsp+Ch] [xbp-34h] BYREF
  System_Nullable_Vector3__o v22; // 0:x2.16

  enemyFaceIda = enemyFaceId;
  if ( (byte_42EBBA2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_14843/*"UIMasterFigureOld-Enemy("*/, (_DWORD)parent, enemyFaceId, *(_QWORD *)&enemyBattleId);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v12, v13, v14);
    byte_42EBBA2 = 1;
  }
  *(_QWORD *)&v22.fields.value.fields.x = 0LL;
  *(_QWORD *)&v22.fields.value.fields.z = 0LL;
  Local = (UnityEngine_Component_o *)MasterFigureManagerOld__CreateLocal(
                                       this,
                                       parent,
                                       v22,
                                       *(const MethodInfo **)&depth);
  if ( !Local
    || (v17 = (UIMasterFigureTextureOld_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        v19 = System_Int32__ToString((int32_t)&enemyFaceIda, 0LL),
        Local = (UnityEngine_Component_o *)System_String__Concat_44580072(
                                             (System_String_o *)StringLiteral_14843/*"UIMasterFigureOld-Enemy("*/,
                                             v19,
                                             (System_String_o *)StringLiteral_659/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_B5D69C(Local, v16);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFigureTextureOld__SetEnemy(v17, enemyFaceIda, enemyBattleId, callbackFunc, 0LL);
  UIMasterFigureTextureOld__SetDepth(v17, depth, 0LL);
  return v17;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreateEnemyPrefab(
        UnityEngine_GameObject_o *parent,
        int32_t enemyFaceId,
        int32_t enemyMasterBattleId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  MasterFigureManagerOld_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x6

  if ( (byte_42EBB9F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__,
      enemyFaceId,
      enemyMasterBattleId,
      *(_QWORD *)&depth);
    byte_42EBB9F = 1;
  }
  Instance = (MasterFigureManagerOld_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
  return MasterFigureManagerOld__CreateEnemyLocal(
           Instance,
           parent,
           enemyFaceId,
           enemyMasterBattleId,
           depth,
           callbackFunc,
           v13);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreateLocal(
        MasterFigureManagerOld_o *this,
        UnityEngine_GameObject_o *parent,
        System_Nullable_Vector3__o offset,
        const MethodInfo *method)
{
  __int64 v4; // x21
  __int64 v5; // x22
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct UnityEngine_GameObject_o *masterFigurePrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x1
  UnityEngine_GameObject_o *v26; // x24
  UIMasterFigureRenderOld_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  int v32; // s0
  int v33; // s1
  int v34; // s2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = *(_QWORD *)&offset.fields.value.fields.z;
  v5 = *(_QWORD *)&offset.fields.value.fields.x;
  if ( (byte_42EBBA0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___,
      (_DWORD)parent,
      LODWORD(offset.fields.value.fields.x),
      *(_QWORD *)&offset.fields.value.fields.z);
    sub_B5D5C4(&Method_System_Nullable_Vector3__GetValueOrDefault__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Nullable_Vector3__get_HasValue__, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_14841/*"UIMasterFigureOld"*/, v20, v21, v22);
    byte_42EBBA0 = 1;
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
    goto LABEL_16;
  v26 = gameObject;
  Component_srcLineSprite = (UIMasterFigureRenderOld_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           gameObject,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
  transform = UnityEngine_GameObject__get_transform(v26, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v26, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v26, (System_String_o *)StringLiteral_14841/*"UIMasterFigureOld"*/, 0LL);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( (v4 & 0xFF00000000LL) != 0 )
  {
    v33 = HIDWORD(v5);
    v32 = v5;
    v34 = v4;
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_zero(0LL);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v32, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v37.fields.x = x;
  v37.fields.y = y;
  v37.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v37, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL),
        !Component_srcLineSprite) )
  {
LABEL_16:
    sub_B5D69C(gameObject, v25);
  }
  UIMasterFigureRenderOld__SetLayer(Component_srcLineSprite, (int32_t)gameObject, 0LL);
  return (UIMasterFigureTextureOld_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreateLocal_31039412(
        MasterFigureManagerOld_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t overWriteEquipId,
        System_Nullable_Vector3__o offset,
        const MethodInfo *method)
{
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  UnityEngine_Component_o *Local; // x0
  __int64 v26; // x1
  UIMasterFigureTextureOld_o *v27; // x23
  UnityEngine_Object_o *gameObject; // x24
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array *v35; // x25
  System_String_o *v36; // x0
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x26
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x26
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  __int64 v67; // x0
  __int64 v68; // x0
  int32_t v69; // [xsp+8h] [xbp-48h] BYREF
  int32_t v70; // [xsp+Ch] [xbp-44h] BYREF

  v69 = equipId;
  v70 = genderType;
  if ( (byte_42EBBA1 & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)parent, dispType, *(_QWORD *)&genderType);
    sub_B5D5C4(&StringLiteral_755/*"-"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_14842/*"UIMasterFigureOld("*/, v22, v23, v24);
    byte_42EBBA1 = 1;
  }
  Local = (UnityEngine_Component_o *)MasterFigureManagerOld__CreateLocal(
                                       this,
                                       parent,
                                       offset,
                                       *(const MethodInfo **)&equipId);
  if ( !Local
    || (v27 = (UIMasterFigureTextureOld_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        (Local = (UnityEngine_Component_o *)sub_B5D5DC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_30:
    sub_B5D69C(Local, v26);
  }
  v35 = (System_String_array *)Local;
  v36 = (System_String_o *)StringLiteral_14842/*"UIMasterFigureOld("*/;
  if ( StringLiteral_14842/*"UIMasterFigureOld("*/ )
  {
    v36 = (System_String_o *)sub_B5D684(StringLiteral_14842/*"UIMasterFigureOld("*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_29;
    v37 = (System_Int32_array **)StringLiteral_14842/*"UIMasterFigureOld("*/;
  }
  else
  {
    v37 = 0LL;
  }
  if ( !v35->max_length )
    goto LABEL_28;
  v35->m_Items[0] = (System_String_o *)v37;
  sub_B5D560((BattleServantConfConponent_o *)v35->m_Items, v37, v29, v30, v31, v32, v33, v34);
  v36 = System_Int32__ToString((int32_t)&v70, 0LL);
  v44 = (System_Int32_array **)v36;
  if ( v36 )
  {
    v36 = (System_String_o *)sub_B5D684(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_29;
  }
  if ( v35->max_length <= 1 )
    goto LABEL_28;
  v35->m_Items[1] = (System_String_o *)v44;
  sub_B5D560((BattleServantConfConponent_o *)&v35->m_Items[1], v44, v38, v39, v40, v41, v42, v43);
  v36 = (System_String_o *)StringLiteral_755/*"-"*/;
  if ( StringLiteral_755/*"-"*/ )
  {
    v36 = (System_String_o *)sub_B5D684(StringLiteral_755/*"-"*/, v35->obj.klass->_1.element_class);
    if ( !v36 )
      goto LABEL_29;
    v51 = (System_Int32_array **)StringLiteral_755/*"-"*/;
  }
  else
  {
    v51 = 0LL;
  }
  if ( v35->max_length <= 2 )
    goto LABEL_28;
  v35->m_Items[2] = (System_String_o *)v51;
  sub_B5D560((BattleServantConfConponent_o *)&v35->m_Items[2], v51, v45, v46, v47, v48, v49, v50);
  v36 = System_Int32__ToString((int32_t)&v69, 0LL);
  v58 = (System_Int32_array **)v36;
  if ( v36 )
  {
    v36 = (System_String_o *)sub_B5D684(v36, v35->obj.klass->_1.element_class);
    if ( !v36 )
    {
LABEL_29:
      v68 = sub_B5D6BC(v36);
      sub_B5D668(v68, 0LL);
    }
  }
  if ( v35->max_length <= 3 )
    goto LABEL_28;
  v35->m_Items[3] = (System_String_o *)v58;
  sub_B5D560((BattleServantConfConponent_o *)&v35->m_Items[3], v58, v52, v53, v54, v55, v56, v57);
  v36 = (System_String_o *)StringLiteral_659/*")"*/;
  if ( StringLiteral_659/*")"*/ )
  {
    v36 = (System_String_o *)sub_B5D684(StringLiteral_659/*")"*/, v35->obj.klass->_1.element_class);
    if ( v36 )
    {
      v65 = (System_Int32_array **)StringLiteral_659/*")"*/;
      goto LABEL_25;
    }
    goto LABEL_29;
  }
  v65 = 0LL;
LABEL_25:
  if ( v35->max_length <= 4 )
  {
LABEL_28:
    v67 = sub_B5D6C8(v36);
    sub_B5D668(v67, 0LL);
  }
  v35->m_Items[4] = (System_String_o *)v65;
  sub_B5D560((BattleServantConfConponent_o *)&v35->m_Items[4], v65, v59, v60, v61, v62, v63, v64);
  Local = (UnityEngine_Component_o *)System_String__Concat_44657912(v35, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFigureTextureOld__SetCharacter(v27, dispType, v70, v69, callbackFunc, overWriteEquipId, 0LL);
  UIMasterFigureTextureOld__SetDepth(v27, depth, 0LL);
  return v27;
}


UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  MasterFigureManagerOld_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  System_Nullable_Vector3__o v9; // 0:x2.16

  if ( (byte_42EBB9D & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EBB9D = 1;
  }
  Instance = (MasterFigureManagerOld_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  *(_QWORD *)&v9.fields.value.fields.x = 0LL;
  *(_QWORD *)&v9.fields.value.fields.z = 0LL;
  return MasterFigureManagerOld__CreateLocal(Instance, parent, v9, v7);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab_31039236(
        UnityEngine_GameObject_o *parent,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t overWriteEquipId,
        System_Nullable_Vector3__o offset,
        const MethodInfo *method)
{
  MasterFigureManagerOld_o *Instance; // x0
  __int64 v17; // x1

  if ( (byte_42EBB9E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__,
      dispType,
      genderType,
      *(_QWORD *)&equipId);
    byte_42EBB9E = 1;
  }
  Instance = (MasterFigureManagerOld_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v17);
  return MasterFigureManagerOld__CreateLocal_31039412(
           Instance,
           parent,
           dispType,
           genderType,
           equipId,
           depth,
           callbackFunc,
           overWriteEquipId,
           offset,
           method);
}


void __fastcall MasterFigureManagerOld__DownloadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_42EBB9A & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, equipId, (_DWORD)callback, method);
    byte_42EBB9A = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_30662148(AssetName, callback, 0LL);
}


System_String_array *__fastcall MasterFigureManagerOld__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EBB99 & 1) == 0 )
  {
    sub_B5D5C4(&UIMasterFigureRenderOld_TypeInfo, equipId, (_DWORD)method, v3);
    byte_42EBB99 = 1;
  }
  if ( (BYTE3(UIMasterFigureRenderOld_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIMasterFigureRenderOld_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFigureRenderOld_TypeInfo);
  }
  return UIMasterFigureRenderOld__GetAssetNameList(genderType, equipId, 0, 0LL);
}


void __fastcall MasterFigureManagerOld__LoadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_42EBB9B & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, equipId, (_DWORD)callback, method);
    byte_42EBB9B = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30664084(AssetName, callback, 1, 0LL);
}


void __fastcall MasterFigureManagerOld__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_array *AssetName; // x19

  if ( (byte_42EBB9C & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, equipId, (_DWORD)method, v3);
    byte_42EBB9C = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_30666128(AssetName, 0LL);
}