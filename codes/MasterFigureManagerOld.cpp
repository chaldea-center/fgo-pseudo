void __fastcall MasterFigureManagerOld___ctor(MasterFigureManagerOld_o *this, const MethodInfo *method)
{
  if ( (byte_418591A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__, method);
    byte_418591A = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld___ctor__);
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
  __int64 v14; // x1
  UIMasterFigureTextureOld_o *v15; // x22
  UnityEngine_Object_o *gameObject; // x23
  System_String_o *v17; // x0
  int32_t enemyFaceIda; // [xsp+Ch] [xbp-34h] BYREF
  System_Nullable_Vector3__o v20; // 0:x2.16

  enemyFaceIda = enemyFaceId;
  if ( (byte_4185919 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_14686/*"UIMasterFigureOld-Enemy("*/, parent);
    sub_B2C35C(&StringLiteral_652/*")"*/, v12);
    byte_4185919 = 1;
  }
  *(_QWORD *)&v20.fields.value.fields.x = 0LL;
  *(_QWORD *)&v20.fields.value.fields.z = 0LL;
  Local = (UnityEngine_Component_o *)MasterFigureManagerOld__CreateLocal(
                                       this,
                                       parent,
                                       v20,
                                       *(const MethodInfo **)&depth);
  if ( !Local
    || (v15 = (UIMasterFigureTextureOld_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        v17 = System_Int32__ToString((int32_t)&enemyFaceIda, 0LL),
        Local = (UnityEngine_Component_o *)System_String__Concat_44307816(
                                             (System_String_o *)StringLiteral_14686/*"UIMasterFigureOld-Enemy("*/,
                                             v17,
                                             (System_String_o *)StringLiteral_652/*")"*/,
                                             0LL),
        !gameObject) )
  {
    sub_B2C434(Local, v14);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFigureTextureOld__SetEnemy(v15, enemyFaceIda, enemyBattleId, callbackFunc, 0LL);
  UIMasterFigureTextureOld__SetDepth(v15, depth, 0LL);
  return v15;
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

  if ( (byte_4185916 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, *(_QWORD *)&enemyFaceId);
    byte_4185916 = 1;
  }
  Instance = (MasterFigureManagerOld_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v12);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct UnityEngine_GameObject_o *masterFigurePrefab; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  UnityEngine_GameObject_o *v16; // x24
  UIMasterFigureRenderOld_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  int v22; // s0
  int v23; // s1
  int v24; // s2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = *(_QWORD *)&offset.fields.value.fields.z;
  v5 = *(_QWORD *)&offset.fields.value.fields.x;
  if ( (byte_4185917 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___, parent);
    sub_B2C35C(&Method_System_Nullable_Vector3__GetValueOrDefault__, v8);
    sub_B2C35C(&Method_System_Nullable_Vector3__get_HasValue__, v9);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_14684/*"UIMasterFigureOld"*/, v12);
    byte_4185917 = 1;
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
    goto LABEL_16;
  v16 = gameObject;
  Component_srcLineSprite = (UIMasterFigureRenderOld_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           gameObject,
                                                           (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIMasterFigureTextureOld___);
  transform = UnityEngine_GameObject__get_transform(v16, 0LL);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
  if ( !gameObject )
    goto LABEL_16;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v16, (System_String_o *)StringLiteral_14684/*"UIMasterFigureOld"*/, 0LL);
  if ( !parent )
    goto LABEL_16;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_16;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)gameObject, 0LL);
  if ( (v4 & 0xFF00000000LL) != 0 )
  {
    v23 = HIDWORD(v5);
    v22 = v5;
    v24 = v4;
  }
  else
  {
    *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_zero(0LL);
  }
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v22, 0LL);
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
LABEL_16:
    sub_B2C434(gameObject, v15);
  }
  UIMasterFigureRenderOld__SetLayer(Component_srcLineSprite, (int32_t)gameObject, 0LL);
  return (UIMasterFigureTextureOld_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreateLocal_21041448(
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
  __int64 v20; // x1
  UIMasterFigureTextureOld_o *v21; // x23
  UnityEngine_Object_o *gameObject; // x24
  System_String_array *v23; // x25
  System_String_o *v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x26
  System_String_o *v27; // x1
  System_String_o *v28; // x26
  __int64 v29; // x1
  __int64 v31; // x0
  __int64 v32; // x0
  int32_t v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-44h] BYREF

  v33 = equipId;
  v34 = genderType;
  if ( (byte_4185918 & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, parent);
    sub_B2C35C(&StringLiteral_747/*"-"*/, v16);
    sub_B2C35C(&StringLiteral_652/*")"*/, v17);
    sub_B2C35C(&StringLiteral_14685/*"UIMasterFigureOld("*/, v18);
    byte_4185918 = 1;
  }
  Local = (UnityEngine_Component_o *)MasterFigureManagerOld__CreateLocal(
                                       this,
                                       parent,
                                       offset,
                                       *(const MethodInfo **)&equipId);
  if ( !Local
    || (v21 = (UIMasterFigureTextureOld_o *)Local,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Local, 0LL),
        (Local = (UnityEngine_Component_o *)sub_B2C374(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_30:
    sub_B2C434(Local, v20);
  }
  v23 = (System_String_array *)Local;
  v24 = (System_String_o *)StringLiteral_14685/*"UIMasterFigureOld("*/;
  if ( StringLiteral_14685/*"UIMasterFigureOld("*/ )
  {
    v24 = (System_String_o *)sub_B2C41C(StringLiteral_14685/*"UIMasterFigureOld("*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_29;
    v25 = StringLiteral_14685/*"UIMasterFigureOld("*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !v23->max_length )
    goto LABEL_28;
  v23->m_Items[0] = (System_String_o *)v25;
  sub_B2C2F8(v23->m_Items, v25);
  v24 = System_Int32__ToString((int32_t)&v34, 0LL);
  v26 = v24;
  if ( v24 )
  {
    v24 = (System_String_o *)sub_B2C41C(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_29;
  }
  if ( v23->max_length <= 1 )
    goto LABEL_28;
  v23->m_Items[1] = v26;
  sub_B2C2F8(&v23->m_Items[1], v26);
  v24 = (System_String_o *)StringLiteral_747/*"-"*/;
  if ( StringLiteral_747/*"-"*/ )
  {
    v24 = (System_String_o *)sub_B2C41C(StringLiteral_747/*"-"*/, v23->obj.klass->_1.element_class);
    if ( !v24 )
      goto LABEL_29;
    v27 = (System_String_o *)StringLiteral_747/*"-"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v23->max_length <= 2 )
    goto LABEL_28;
  v23->m_Items[2] = v27;
  sub_B2C2F8(&v23->m_Items[2], v27);
  v24 = System_Int32__ToString((int32_t)&v33, 0LL);
  v28 = v24;
  if ( v24 )
  {
    v24 = (System_String_o *)sub_B2C41C(v24, v23->obj.klass->_1.element_class);
    if ( !v24 )
    {
LABEL_29:
      v32 = sub_B2C454();
      sub_B2C400(v32, 0LL);
    }
  }
  if ( v23->max_length <= 3 )
    goto LABEL_28;
  v23->m_Items[3] = v28;
  sub_B2C2F8(&v23->m_Items[3], v28);
  v24 = (System_String_o *)StringLiteral_652/*")"*/;
  if ( StringLiteral_652/*")"*/ )
  {
    v24 = (System_String_o *)sub_B2C41C(StringLiteral_652/*")"*/, v23->obj.klass->_1.element_class);
    if ( v24 )
    {
      v29 = StringLiteral_652/*")"*/;
      goto LABEL_25;
    }
    goto LABEL_29;
  }
  v29 = 0LL;
LABEL_25:
  if ( v23->max_length <= 4 )
  {
LABEL_28:
    v31 = sub_B2C460(v24);
    sub_B2C400(v31, 0LL);
  }
  v23->m_Items[4] = (System_String_o *)v29;
  sub_B2C2F8(&v23->m_Items[4], v29);
  Local = (UnityEngine_Component_o *)System_String__Concat_44385656(v23, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)Local, 0LL);
  UIMasterFigureTextureOld__SetCharacter(v21, dispType, v34, v33, callbackFunc, overWriteEquipId, 0LL);
  UIMasterFigureTextureOld__SetDepth(v21, depth, 0LL);
  return v21;
}


UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab(
        UnityEngine_GameObject_o *parent,
        const MethodInfo *method)
{
  MasterFigureManagerOld_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  System_Nullable_Vector3__o v7; // 0:x2.16

  if ( (byte_4185914 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, method);
    byte_4185914 = 1;
  }
  Instance = (MasterFigureManagerOld_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  *(_QWORD *)&v7.fields.value.fields.x = 0LL;
  *(_QWORD *)&v7.fields.value.fields.z = 0LL;
  return MasterFigureManagerOld__CreateLocal(Instance, parent, v7, v5);
}


// local variable allocation has failed, the output may be wrong!
UIMasterFigureTextureOld_o *__fastcall MasterFigureManagerOld__CreatePrefab_21041272(
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

  if ( (byte_4185915 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__, *(_QWORD *)&dispType);
    byte_4185915 = 1;
  }
  Instance = (MasterFigureManagerOld_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_MasterFigureManagerOld__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v17);
  return MasterFigureManagerOld__CreateLocal_21041448(
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

  if ( (byte_4185911 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4185911 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage_30157268(AssetName, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall MasterFigureManagerOld__GetAssetName(
        int32_t genderType,
        int32_t equipId,
        const MethodInfo *method)
{
  if ( (byte_4185910 & 1) == 0 )
  {
    sub_B2C35C(&UIMasterFigureRenderOld_TypeInfo, *(_QWORD *)&equipId);
    byte_4185910 = 1;
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

  if ( (byte_4185912 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4185912 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30159204(AssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MasterFigureManagerOld__ReleaseAsset(int32_t genderType, int32_t equipId, const MethodInfo *method)
{
  System_String_array *AssetName; // x19

  if ( (byte_4185913 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&equipId);
    byte_4185913 = 1;
  }
  AssetName = MasterFigureManagerOld__GetAssetName(genderType, equipId, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage_30161248(AssetName, 0LL);
}