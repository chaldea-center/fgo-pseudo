void __fastcall MasterFigureManagerOld___ctor(MasterFigureManagerOld_o *this, const MethodInfo *method)
{
  if ( (byte_42B30DC & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
    byte_42B30DC = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
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
  UnityEngine_Component_o *Local; // x0
  __int64 v13; // x1
  UIMasterFigureTextureOld_o *v14; // x22
  UnityEngine_Object_o *gameObject; // x23
  System_String_o *v16; // x0
  int32_t enemyFaceIda; // [xsp+Ch] [xbp-34h] BYREF
  System_Nullable_Vector3__o v19; // 0:x2.16

  enemyFaceIda = enemyFaceId;
  if ( (byte_42B30DB & 1) == 0 )
  {
    sub_B52984(&StringLiteral_14784/*"UIMasterFigureOld-Enemy("*/);
    sub_B52984(&StringLiteral_661/*")"*/);
    byte_42B30DB = 1;
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
        Local = (UnityEngine_Component_o *)System_String__Concat_44570600(
                                             (System_String_o *)StringLiteral_14784/*"UIMasterFigureOld-Enemy("*/,
                                             v16,
                                             (System_String_o *)StringLiteral_661/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_B52A5C(Local, v13);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFigureTextureOld__SetEnemy(v14, enemyFaceIda, enemyBattleId, callbackFunc, 0LL);
  UIMasterFigureTextureOld__SetDepth(v14, depth, 0LL);
  return v14;
}


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

  if ( (byte_42B30D8 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
    byte_42B30D8 = 1;
  }
  Instance = (MasterFigureManagerOld_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v12);
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
  struct UnityEngine_GameObject_o *masterFigurePrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x24
  UIMasterFigureRenderOld_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  int v17; // s0
  int v18; // s1
  int v19; // s2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = *(_QWORD *)&offset.fields.value.fields.z;
  v5 = *(_QWORD *)&offset.fields.value.fields.x;
  if ( (byte_42B30D9 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
    sub_B52984(&Method_System_Nullable_Vector3__GetValueOrDefault__);
    sub_B52984(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_14782/*"UIMasterFigureOld"*/);
    byte_42B30D9 = 1;
  }
  masterFigurePrefab = this->fields.masterFigurePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                             (UnityEngine_UI_Dropdown_DropdownItem_o *)masterFigurePrefab,
                                             (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !gameObject )
    goto LABEL_16;
  v11 = gameObject;
  Component_srcLineSprite = (UIMasterFigureRenderOld_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           gameObject,
                                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_14782/*"UIMasterFigureOld"*/, 0LL);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( (v4 & 0xFF00000000LL) != 0 )
  {
    v18 = HIDWORD(v5);
    v17 = v5;
    v19 = v4;
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v17, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v22, 0LL);
  gameObject = UnityEngine_GameObject__get_gameObject(parent, 0LL);
  if ( !gameObject
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL),
        !Component_srcLineSprite) )
  {
LABEL_16:
    sub_B52A5C(gameObject, v10);
  }
  UIMasterFigureRenderOld__SetLayer(Component_srcLineSprite, (int32_t)gameObject, 0LL);
  return (UIMasterFigureTextureOld_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreateLocal_30655900(
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
  UnityEngine_Component_o *Local; // x0
  __int64 v17; // x1
  UIMasterFigureTextureOld_o *v18; // x23
  UnityEngine_Object_o *gameObject; // x24
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array *v26; // x25
  System_String_o *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x26
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x26
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  __int64 v58; // x0
  __int64 v59; // x0
  int32_t v60; // [xsp+8h] [xbp-48h] BYREF
  int32_t v61; // [xsp+Ch] [xbp-44h] BYREF

  v60 = equipId;
  v61 = genderType;
  if ( (byte_42B30DA & 1) == 0 )
  {
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_757/*"-"*/);
    sub_B52984(&StringLiteral_661/*")"*/);
    sub_B52984(&StringLiteral_14783/*"UIMasterFigureOld("*/);
    byte_42B30DA = 1;
  }
  Local = (UnityEngine_Component_o *)MasterFigureManagerOld__CreateLocal(
                                       this,
                                       parent,
                                       offset,
                                       *(const MethodInfo **)&equipId);
  if ( !Local
    || (v18 = (UIMasterFigureTextureOld_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        (Local = (UnityEngine_Component_o *)sub_B5299C(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_30:
    sub_B52A5C(Local, v17);
  }
  v26 = (System_String_array *)Local;
  v27 = (System_String_o *)StringLiteral_14783/*"UIMasterFigureOld("*/;
  if ( StringLiteral_14783/*"UIMasterFigureOld("*/ )
  {
    v27 = (System_String_o *)sub_B52A44(StringLiteral_14783/*"UIMasterFigureOld("*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_29;
    v28 = (System_Int32_array **)StringLiteral_14783/*"UIMasterFigureOld("*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !v26->max_length )
    goto LABEL_28;
  v26->m_Items[0] = (System_String_o *)v28;
  sub_B52920((BattleServantConfConponent_o *)v26->m_Items, v28, v20, v21, v22, v23, v24, v25);
  v27 = System_Int32__ToString((int32_t)&v61, 0LL);
  v35 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (System_String_o *)sub_B52A44(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_29;
  }
  if ( v26->max_length <= 1 )
    goto LABEL_28;
  v26->m_Items[1] = (System_String_o *)v35;
  sub_B52920((BattleServantConfConponent_o *)&v26->m_Items[1], v35, v29, v30, v31, v32, v33, v34);
  v27 = (System_String_o *)StringLiteral_757/*"-"*/;
  if ( StringLiteral_757/*"-"*/ )
  {
    v27 = (System_String_o *)sub_B52A44(StringLiteral_757/*"-"*/, v26->obj.klass->_1.element_class);
    if ( !v27 )
      goto LABEL_29;
    v42 = (System_Int32_array **)StringLiteral_757/*"-"*/;
  }
  else
  {
    v42 = 0LL;
  }
  if ( v26->max_length <= 2 )
    goto LABEL_28;
  v26->m_Items[2] = (System_String_o *)v42;
  sub_B52920((BattleServantConfConponent_o *)&v26->m_Items[2], v42, v36, v37, v38, v39, v40, v41);
  v27 = System_Int32__ToString((int32_t)&v60, 0LL);
  v49 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (System_String_o *)sub_B52A44(v27, v26->obj.klass->_1.element_class);
    if ( !v27 )
    {
LABEL_29:
      v59 = sub_B52A7C(v27);
      sub_B52A28(v59, 0LL);
    }
  }
  if ( v26->max_length <= 3 )
    goto LABEL_28;
  v26->m_Items[3] = (System_String_o *)v49;
  sub_B52920((BattleServantConfConponent_o *)&v26->m_Items[3], v49, v43, v44, v45, v46, v47, v48);
  v27 = (System_String_o *)StringLiteral_661/*")"*/;
  if ( StringLiteral_661/*")"*/ )
  {
    v27 = (System_String_o *)sub_B52A44(StringLiteral_661/*")"*/, v26->obj.klass->_1.element_class);
    if ( v27 )
    {
      v56 = (System_Int32_array **)StringLiteral_661/*")"*/;
      goto LABEL_25;
    }
    goto LABEL_29;
  }
  v56 = 0LL;
LABEL_25:
  if ( v26->max_length <= 4 )
  {
LABEL_28:
    v58 = sub_B52A88(v27);
    sub_B52A28(v58, 0LL);
  }
  v26->m_Items[4] = (System_String_o *)v56;
  sub_B52920((BattleServantConfConponent_o *)&v26->m_Items[4], v56, v50, v51, v52, v53, v54, v55);
  Local = (UnityEngine_Component_o *)System_String__Concat_44648440(v26, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFigureTextureOld__SetCharacter(v18, dispType, v61, v60, callbackFunc, overWriteEquipId, 0LL);
  UIMasterFigureTextureOld__SetDepth(v18, depth, 0LL);
  return v18;
}


UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  MasterFigureManagerOld_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  System_Nullable_Vector3__o v7; // 0:x2.16

  if ( (byte_42B30D6 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
    byte_42B30D6 = 1;
  }
  Instance = (MasterFigureManagerOld_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  *(_QWORD *)&v7.fields.value.fields.x = 0LL;
  *(_QWORD *)&v7.fields.value.fields.z = 0LL;
  return MasterFigureManagerOld__CreateLocal(Instance, parent, v7, v5);
}


UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab_30655724(
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

  if ( (byte_42B30D7 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
    byte_42B30D7 = 1;
  }
  Instance = (MasterFigureManagerOld_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v17);
  return MasterFigureManagerOld__CreateLocal_30655900(
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

  if ( (byte_42B30D3 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    byte_42B30D3 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_30364520(AssetName, callback, 0LL);
}


System_String_array *__fastcall MasterFigureManagerOld__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_42B30D2 & 1) == 0 )
  {
    sub_B52984(&UIMasterFigureRenderOld_TypeInfo);
    byte_42B30D2 = 1;
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

  if ( (byte_42B30D4 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    byte_42B30D4 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30366456(AssetName, callback, 1, 0LL);
}


void __fastcall MasterFigureManagerOld__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_42B30D5 & 1) == 0 )
  {
    sub_B52984(&AssetManager_TypeInfo);
    byte_42B30D5 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_30368500(AssetName, 0LL);
}