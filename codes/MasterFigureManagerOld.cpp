void __fastcall MasterFigureManagerOld___ctor(MasterFigureManagerOld_o *this, const MethodInfo *method)
{
  if ( (byte_40FB1BD & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__, method);
    byte_40FB1BD = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
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
  __int64 v12; // x1
  UnityEngine_Component_o *Local; // x0
  UIMasterFigureTextureOld_o *v14; // x22
  UnityEngine_Object_o *gameObject; // x23
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  int32_t enemyFaceIda; // [xsp+Ch] [xbp-34h] BYREF
  System_Nullable_Vector3__o v20; // 0:x2.16

  enemyFaceIda = enemyFaceId;
  if ( (byte_40FB1BC & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_14626, parent);
    sub_B16FFC(&StringLiteral_651, v12);
    byte_40FB1BC = 1;
  }
  *(_QWORD *)&v20.fields.value.fields.x = 0LL;
  *(_QWORD *)&v20.fields.value.fields.z = 0LL;
  Local = (UnityEngine_Component_o *)MasterFigureManagerOld__CreateLocal(
                                       this,
                                       parent,
                                       v20,
                                       *(const MethodInfo **)&depth);
  if ( !Local
    || (v14 = (UIMasterFigureTextureOld_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        v16 = System_Int32__ToString((int32_t)&enemyFaceIda, 0LL),
        v17 = System_String__Concat_43746016(
                (System_String_o *)StringLiteral_14626,
                v16,
                (System_String_o *)StringLiteral_651,
                0LL),
        !gameObject) )
  {
    sub_B170D4();
  }
  UnityEngine_Object__set_name(gameObject, v17, 0LL);
  UIMasterFigureTextureOld__SetEnemy(v14, enemyFaceIda, enemyBattleId, callbackFunc, 0LL);
  UIMasterFigureTextureOld__SetDepth(v14, depth, 0LL);
  return v14;
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
  const MethodInfo *v12; // x6

  if ( (byte_40FB1B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, *(_QWORD *)&enemyFaceId);
    byte_40FB1B9 = 1;
  }
  Instance = (MasterFigureManagerOld_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return MasterFigureManagerOld__CreateEnemyLocal(
           Instance,
           parent,
           enemyFaceId,
           enemyMasterBattleId,
           depth,
           callbackFunc,
           v12);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UnityEngine_GameObject_o *masterFigurePrefab; // x20
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x24
  UIMasterFigureRenderOld_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v18; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Transform_o *v22; // x0
  int v23; // s0
  int v24; // s1
  int v25; // s2
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t layer; // w0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = *(_QWORD *)&offset.fields.value.fields.z;
  v5 = *(_QWORD *)&offset.fields.value.fields.x;
  if ( (byte_40FB1BA & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___, parent);
    sub_B16FFC(&Method_System_Nullable_Vector3__GetValueOrDefault__, v8);
    sub_B16FFC(&Method_System_Nullable_Vector3__get_HasValue__, v9);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_14624, v12);
    byte_40FB1BA = 1;
  }
  masterFigurePrefab = this->fields.masterFigurePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)masterFigurePrefab,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v14 )
    goto LABEL_16;
  v15 = v14;
  Component_srcLineSprite = (UIMasterFigureRenderOld_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           v14,
                                                           (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
  transform = UnityEngine_GameObject__get_transform(v15, 0LL);
  v18 = UnityEngine_GameObject__get_transform(v15, 0LL);
  if ( !v18 )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale(v18, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v15, (System_String_o *)StringLiteral_14624, 0LL);
  if ( !parent )
    goto LABEL_16;
  v22 = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, v22, 0LL);
  if ( (v4 & 0xFF00000000LL) != 0 )
  {
    v24 = HIDWORD(v5);
    v23 = v5;
    v25 = v4;
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v23, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v30, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject || (layer = UnityEngine_GameObject__get_layer(gameObject, 0LL), !Component_srcLineSprite) )
LABEL_16:
    sub_B170D4();
  UIMasterFigureRenderOld__SetLayer(Component_srcLineSprite, layer, 0LL);
  return (UIMasterFigureTextureOld_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreateLocal_27244596(
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Component_o *Local; // x0
  UIMasterFigureTextureOld_o *v20; // x23
  UnityEngine_Object_o *gameObject; // x24
  __int64 v22; // x2
  __int64 v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array *v30; // x25
  System_String_o *v31; // x0
  System_Int32_array **v32; // x1
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x26
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x26
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_o *v55; // x0
  int32_t v57; // [xsp+8h] [xbp-48h] BYREF
  int32_t v58; // [xsp+Ch] [xbp-44h] BYREF

  v57 = equipId;
  v58 = genderType;
  if ( (byte_40FB1BB & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, parent);
    sub_B16FFC(&StringLiteral_746, v16);
    sub_B16FFC(&StringLiteral_651, v17);
    sub_B16FFC(&StringLiteral_14625, v18);
    byte_40FB1BB = 1;
  }
  Local = (UnityEngine_Component_o *)MasterFigureManagerOld__CreateLocal(
                                       this,
                                       parent,
                                       offset,
                                       *(const MethodInfo **)&equipId);
  if ( !Local
    || (v20 = (UIMasterFigureTextureOld_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        (v23 = sub_B17014(string___TypeInfo, 5LL, v22)) == 0) )
  {
LABEL_30:
    sub_B170D4();
  }
  v30 = (System_String_array *)v23;
  v31 = (System_String_o *)StringLiteral_14625;
  if ( StringLiteral_14625 )
  {
    v31 = (System_String_o *)sub_B170BC(StringLiteral_14625, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_29;
    v32 = (System_Int32_array **)StringLiteral_14625;
  }
  else
  {
    v32 = 0LL;
  }
  if ( !v30->max_length )
    goto LABEL_28;
  v30->m_Items[0] = (System_String_o *)v32;
  sub_B16F98((BattleServantConfConponent_o *)v30->m_Items, v32, v24, v25, v26, v27, v28, v29);
  v31 = System_Int32__ToString((int32_t)&v58, 0LL);
  v38 = (System_Int32_array **)v31;
  if ( v31 )
  {
    v31 = (System_String_o *)sub_B170BC(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_29;
  }
  if ( v30->max_length <= 1 )
    goto LABEL_28;
  v30->m_Items[1] = (System_String_o *)v38;
  sub_B16F98((BattleServantConfConponent_o *)&v30->m_Items[1], v38, v24, v33, v34, v35, v36, v37);
  v31 = (System_String_o *)StringLiteral_746;
  if ( StringLiteral_746 )
  {
    v31 = (System_String_o *)sub_B170BC(StringLiteral_746, v30->obj.klass->_1.element_class);
    if ( !v31 )
      goto LABEL_29;
    v32 = (System_Int32_array **)StringLiteral_746;
  }
  else
  {
    v32 = 0LL;
  }
  if ( v30->max_length <= 2 )
    goto LABEL_28;
  v30->m_Items[2] = (System_String_o *)v32;
  sub_B16F98((BattleServantConfConponent_o *)&v30->m_Items[2], v32, v24, v39, v40, v41, v42, v43);
  v31 = System_Int32__ToString((int32_t)&v57, 0LL);
  v49 = (System_Int32_array **)v31;
  if ( v31 )
  {
    v31 = (System_String_o *)sub_B170BC(v31, v30->obj.klass->_1.element_class);
    if ( !v31 )
    {
LABEL_29:
      sub_B170F4(v31);
      sub_B170A0();
    }
  }
  if ( v30->max_length <= 3 )
    goto LABEL_28;
  v30->m_Items[3] = (System_String_o *)v49;
  sub_B16F98((BattleServantConfConponent_o *)&v30->m_Items[3], v49, v24, v44, v45, v46, v47, v48);
  v31 = (System_String_o *)StringLiteral_651;
  if ( StringLiteral_651 )
  {
    v31 = (System_String_o *)sub_B170BC(StringLiteral_651, v30->obj.klass->_1.element_class);
    if ( v31 )
    {
      v32 = (System_Int32_array **)StringLiteral_651;
      goto LABEL_25;
    }
    goto LABEL_29;
  }
  v32 = 0LL;
LABEL_25:
  if ( v30->max_length <= 4 )
  {
LABEL_28:
    sub_B17100(v31, v32, v24);
    sub_B170A0();
  }
  v30->m_Items[4] = (System_String_o *)v32;
  sub_B16F98((BattleServantConfConponent_o *)&v30->m_Items[4], v32, v24, v50, v51, v52, v53, v54);
  v55 = System_String__Concat_43823856(v30, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_Object__set_name(gameObject, v55, 0LL);
  UIMasterFigureTextureOld__SetCharacter(v20, dispType, v58, v57, callbackFunc, overWriteEquipId, 0LL);
  UIMasterFigureTextureOld__SetDepth(v20, depth, 0LL);
  return v20;
}


UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  MasterFigureManagerOld_o *Instance; // x0
  const MethodInfo *v4; // x4
  System_Nullable_Vector3__o v6; // 0:x2.16

  if ( (byte_40FB1B7 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, method);
    byte_40FB1B7 = 1;
  }
  Instance = (MasterFigureManagerOld_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  *(_QWORD *)&v6.fields.value.fields.x = 0LL;
  *(_QWORD *)&v6.fields.value.fields.z = 0LL;
  return MasterFigureManagerOld__CreateLocal(Instance, parent, v6, v4);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab_27244420(
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

  if ( (byte_40FB1B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, *(_QWORD *)&dispType);
    byte_40FB1B8 = 1;
  }
  Instance = (MasterFigureManagerOld_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return MasterFigureManagerOld__CreateLocal_27244596(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFigureManagerOld__DownloadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_40FB1B4 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_40FB1B4 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_29951960(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFigureManagerOld__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_40FB1B3 & 1) == 0 )
  {
    sub_B16FFC(&UIMasterFigureRenderOld_TypeInfo, *(_QWORD *)&equipId);
    byte_40FB1B3 = 1;
  }
  if ( (BYTE3(UIMasterFigureRenderOld_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UIMasterFigureRenderOld_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFigureRenderOld_TypeInfo);
  }
  return UIMasterFigureRenderOld__GetAssetNameList(genderType, equipId, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFigureManagerOld__LoadAsset(
        int32_t genderType,
        int32_t equipId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array *AssetName; // x20

  if ( (byte_40FB1B5 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_40FB1B5 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29953896(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFigureManagerOld__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_40FB1B6 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_40FB1B6 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_29955940(AssetName, 0LL);
}