void __fastcall MasterFigureManagerOld___ctor(MasterFigureManagerOld_o *this, const MethodInfo *method)
{
  if ( (byte_4212A56 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__, method);
    byte_4212A56 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
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
  int32_t enemyFaceIda; // [xsp+Ch] [xbp-34h] BYREF
  System_Nullable_Vector3__o v19; // 0:x2.16

  enemyFaceIda = enemyFaceId;
  if ( (byte_4212A55 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_14731/*"UIMasterFigureOld-Enemy("*/, parent);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v12);
    byte_4212A55 = 1;
  }
  *(_QWORD *)&v19.fields.value.fields.x = 0LL;
  *(_QWORD *)&v19.fields.value.fields.z = 0LL;
  Local = (UnityEngine_Component_o *)MasterFigureManagerOld__CreateLocal(
                                       this,
                                       parent,
                                       v19,
                                       *(const MethodInfo **)&depth);
  if ( !Local
    || (v14 = (UIMasterFigureTextureOld_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        v16 = System_Int32__ToString((int32_t)&enemyFaceIda, 0LL),
        Local = (UnityEngine_Component_o *)System_String__Concat_43852188(
                                             (System_String_o *)StringLiteral_14731/*"UIMasterFigureOld-Enemy("*/,
                                             v16,
                                             (System_String_o *)StringLiteral_658/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_B0D97C(Local);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
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

  if ( (byte_4212A52 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, *(_QWORD *)&enemyFaceId);
    byte_4212A52 = 1;
  }
  Instance = (MasterFigureManagerOld_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x24
  UIMasterFigureRenderOld_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  int v21; // s0
  int v22; // s1
  int v23; // s2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = *(_QWORD *)&offset.fields.value.fields.z;
  v5 = *(_QWORD *)&offset.fields.value.fields.x;
  if ( (byte_4212A53 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___, parent);
    sub_B0D8A4(&Method_System_Nullable_Vector3__GetValueOrDefault__, v8);
    sub_B0D8A4(&Method_System_Nullable_Vector3__get_HasValue__, v9);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_14729/*"UIMasterFigureOld"*/, v12);
    byte_4212A53 = 1;
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
    goto LABEL_16;
  v15 = gameObject;
  Component_srcLineSprite = (UIMasterFigureRenderOld_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           gameObject,
                                                           (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
  transform = UnityEngine_GameObject__get_transform(v15, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v15, (System_String_o *)StringLiteral_14729/*"UIMasterFigureOld"*/, 0LL);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( (v4 & 0xFF00000000LL) != 0 )
  {
    v22 = HIDWORD(v5);
    v21 = v5;
    v23 = v4;
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_zero(0LL);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v21, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v26, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL),
        !Component_srcLineSprite) )
  {
LABEL_16:
    sub_B0D97C(gameObject);
  }
  UIMasterFigureRenderOld__SetLayer(Component_srcLineSprite, (int32_t)gameObject, 0LL);
  return (UIMasterFigureTextureOld_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreateLocal_20993924(
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_array *v28; // x25
  System_String_o *v29; // x0
  System_Int32_array **v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x26
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x26
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  __int64 v60; // x0
  __int64 v61; // x0
  int32_t v62; // [xsp+8h] [xbp-48h] BYREF
  int32_t v63; // [xsp+Ch] [xbp-44h] BYREF

  v62 = equipId;
  v63 = genderType;
  if ( (byte_4212A54 & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, parent);
    sub_B0D8A4(&StringLiteral_753/*"-"*/, v16);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v17);
    sub_B0D8A4(&StringLiteral_14730/*"UIMasterFigureOld("*/, v18);
    byte_4212A54 = 1;
  }
  Local = (UnityEngine_Component_o *)MasterFigureManagerOld__CreateLocal(
                                       this,
                                       parent,
                                       offset,
                                       *(const MethodInfo **)&equipId);
  if ( !Local
    || (v20 = (UIMasterFigureTextureOld_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        (Local = (UnityEngine_Component_o *)sub_B0D8BC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_30:
    sub_B0D97C(Local);
  }
  v28 = (System_String_array *)Local;
  v29 = (System_String_o *)StringLiteral_14730/*"UIMasterFigureOld("*/;
  if ( StringLiteral_14730/*"UIMasterFigureOld("*/ )
  {
    v29 = (System_String_o *)sub_B0D964(StringLiteral_14730/*"UIMasterFigureOld("*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_29;
    v30 = (System_Int32_array **)StringLiteral_14730/*"UIMasterFigureOld("*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( !v28->max_length )
    goto LABEL_28;
  v28->m_Items[0] = (System_String_o *)v30;
  sub_B0D840((BattleServantConfConponent_o *)v28->m_Items, v30, v22, v23, v24, v25, v26, v27);
  v29 = System_Int32__ToString((int32_t)&v63, 0LL);
  v37 = (System_Int32_array **)v29;
  if ( v29 )
  {
    v29 = (System_String_o *)sub_B0D964(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_29;
  }
  if ( v28->max_length <= 1 )
    goto LABEL_28;
  v28->m_Items[1] = (System_String_o *)v37;
  sub_B0D840((BattleServantConfConponent_o *)&v28->m_Items[1], v37, v31, v32, v33, v34, v35, v36);
  v29 = (System_String_o *)StringLiteral_753/*"-"*/;
  if ( StringLiteral_753/*"-"*/ )
  {
    v29 = (System_String_o *)sub_B0D964(StringLiteral_753/*"-"*/, v28->obj.klass->_1.element_class);
    if ( !v29 )
      goto LABEL_29;
    v44 = (System_Int32_array **)StringLiteral_753/*"-"*/;
  }
  else
  {
    v44 = 0LL;
  }
  if ( v28->max_length <= 2 )
    goto LABEL_28;
  v28->m_Items[2] = (System_String_o *)v44;
  sub_B0D840((BattleServantConfConponent_o *)&v28->m_Items[2], v44, v38, v39, v40, v41, v42, v43);
  v29 = System_Int32__ToString((int32_t)&v62, 0LL);
  v51 = (System_Int32_array **)v29;
  if ( v29 )
  {
    v29 = (System_String_o *)sub_B0D964(v29, v28->obj.klass->_1.element_class);
    if ( !v29 )
    {
LABEL_29:
      v61 = sub_B0D99C();
      sub_B0D948(v61, 0LL);
    }
  }
  if ( v28->max_length <= 3 )
    goto LABEL_28;
  v28->m_Items[3] = (System_String_o *)v51;
  sub_B0D840((BattleServantConfConponent_o *)&v28->m_Items[3], v51, v45, v46, v47, v48, v49, v50);
  v29 = (System_String_o *)StringLiteral_658/*")"*/;
  if ( StringLiteral_658/*")"*/ )
  {
    v29 = (System_String_o *)sub_B0D964(StringLiteral_658/*")"*/, v28->obj.klass->_1.element_class);
    if ( v29 )
    {
      v58 = (System_Int32_array **)StringLiteral_658/*")"*/;
      goto LABEL_25;
    }
    goto LABEL_29;
  }
  v58 = 0LL;
LABEL_25:
  if ( v28->max_length <= 4 )
  {
LABEL_28:
    v60 = sub_B0D9A8(v29);
    sub_B0D948(v60, 0LL);
  }
  v28->m_Items[4] = (System_String_o *)v58;
  sub_B0D840((BattleServantConfConponent_o *)&v28->m_Items[4], v58, v52, v53, v54, v55, v56, v57);
  Local = (UnityEngine_Component_o *)System_String__Concat_43930028(v28, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFigureTextureOld__SetCharacter(v20, dispType, v63, v62, callbackFunc, overWriteEquipId, 0LL);
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

  if ( (byte_4212A50 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, method);
    byte_4212A50 = 1;
  }
  Instance = (MasterFigureManagerOld_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  *(_QWORD *)&v6.fields.value.fields.x = 0LL;
  *(_QWORD *)&v6.fields.value.fields.z = 0LL;
  return MasterFigureManagerOld__CreateLocal(Instance, parent, v6, v4);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab_20993748(
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

  if ( (byte_4212A51 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, *(_QWORD *)&dispType);
    byte_4212A51 = 1;
  }
  Instance = (MasterFigureManagerOld_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return MasterFigureManagerOld__CreateLocal_20993924(
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

  if ( (byte_4212A4D & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4212A4D = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_29520984(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFigureManagerOld__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4212A4C & 1) == 0 )
  {
    sub_B0D8A4(&UIMasterFigureRenderOld_TypeInfo, *(_QWORD *)&equipId);
    byte_4212A4C = 1;
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

  if ( (byte_4212A4E & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4212A4E = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29522920(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFigureManagerOld__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4212A4F & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4212A4F = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_29524964(AssetName, 0LL);
}