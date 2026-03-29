void CharaGraphManager___ctor(CharaGraphManager_o *this, const MethodInfo *method)
{
  if ( (byte_4D2FB37 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
    byte_4D2FB37 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3AC57E4 *)Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
}


UICharaGraphTexture_o *CharaGraphManager__CreateCommandTextureLocal(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  Il2CppObject *commandGraphPrefab; // x20
  UnityEngine_GameObject_o *layer; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x22
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12

  if ( (byte_4D2FB32 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_14831/*"UICommandGraphTexture"*/);
    byte_4D2FB32 = 1;
  }
  commandGraphPrefab = (Il2CppObject *)this->fields.commandGraphPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        commandGraphPrefab,
                                        (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_15;
  v9 = layer;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       layer,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform(v9, 0);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
  if ( !layer )
    goto LABEL_15;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0);
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v9, (System_String_o *)StringLiteral_14831/*"UICommandGraphTexture"*/, 0);
  if ( !parent )
    goto LABEL_15;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0);
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4D2A13F )
  {
    sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
    byte_4D2A13F = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  UnityEngine_Transform__set_localScale(transform, localScale, 0);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0);
  if ( !Component_object )
LABEL_15:
    sub_1C93D2C(layer, v8);
  UICharaGraphRender__SetLayer((UICharaGraphRender_o *)Component_object, (int32_t)layer, 0);
  return (UICharaGraphTexture_o *)Component_object;
}


UICharaGraphTexture_o *CharaGraphManager__CreateCommandTextureLocal_41381764(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CharaGraphManager_o *v15; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v17; // x2
  System_String_o *v18; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v10 = this;
  if ( (byte_4D2FB33 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&StringLiteral_757/*")"*/);
    this = (CharaGraphManager_o *)sub_1C93AD4(&StringLiteral_14832/*"UICommandGraphTexture("*/);
    byte_4D2FB33 = 1;
  }
  if ( !userCommandCodeEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v21, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v22.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v22.fields.fakeValue = 0,
        commandCodeId = userCommandCodeEntity->fields.commandCodeId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_64463988(
                                        (System_String_o *)StringLiteral_14832/*"UICommandGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_757/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_1C93D2C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCommand((UICharaGraphTexture_o *)v15, userCommandCodeEntity, callbackFunc, 0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *CharaGraphManager__CreateCommandTextureLocal_41382228(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CharaGraphManager_o *v15; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v17; // x2
  System_String_o *v18; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v10 = this;
  if ( (byte_4D2FB34 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&StringLiteral_757/*")"*/);
    this = (CharaGraphManager_o *)sub_1C93AD4(&StringLiteral_14832/*"UICommandGraphTexture("*/);
    byte_4D2FB34 = 1;
  }
  if ( !userCommandCodeCollectionEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v21, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v22.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v22.fields.fakeValue = 0,
        commandCodeId = userCommandCodeCollectionEntity->fields.commandCodeId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_64463988(
                                        (System_String_o *)StringLiteral_14832/*"UICommandGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_757/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_1C93D2C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCommand_44609716(
    (UICharaGraphTexture_o *)v15,
    userCommandCodeCollectionEntity,
    callbackFunc,
    0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *CharaGraphManager__CreateCommandTextureLocal_41382692(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CharaGraphManager_o *v15; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v17; // x2
  System_String_o *v18; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v10 = this;
  if ( (byte_4D2FB35 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&StringLiteral_757/*")"*/);
    this = (CharaGraphManager_o *)sub_1C93AD4(&StringLiteral_14832/*"UICommandGraphTexture("*/);
    byte_4D2FB35 = 1;
  }
  if ( !commandCodeEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v21, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v22.fields.currentCryptoKey = &id,
        *(_QWORD *)&v22.fields.fakeValue = 0,
        id = commandCodeEntity->fields.id,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_64463988(
                                        (System_String_o *)StringLiteral_14832/*"UICommandGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_757/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_1C93D2C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCommand_44609860((UICharaGraphTexture_o *)v15, commandCodeEntity, callbackFunc, 0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0);
  return (UICharaGraphTexture_o *)v15;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *CharaGraphManager__CreateCommandTextureLocal_41383156(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t commandCodeId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  UnityEngine_Component_o *CommandTextureLocal; // x0
  __int64 v11; // x1
  UICharaGraphTexture_o *v12; // x21
  UnityEngine_Object_o *gameObject; // x22
  System_String_o *v14; // x0
  int32_t commandCodeIda; // [xsp+Ch] [xbp-34h] BYREF

  commandCodeIda = commandCodeId;
  if ( (byte_4D2FB36 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_757/*")"*/);
    sub_1C93AD4(&StringLiteral_14832/*"UICommandGraphTexture("*/);
    byte_4D2FB36 = 1;
  }
  CommandTextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateCommandTextureLocal(
                                                     this,
                                                     parent,
                                                     commandCodeId,
                                                     *(const MethodInfo **)&depth);
  if ( !CommandTextureLocal
    || (v12 = (UICharaGraphTexture_o *)CommandTextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(CommandTextureLocal, 0),
        v14 = System_Int32__ToString((int32_t)&commandCodeIda, 0),
        CommandTextureLocal = (UnityEngine_Component_o *)System_String__Concat_64463988(
                                                           (System_String_o *)StringLiteral_14832/*"UICommandGraphTexture("*/,
                                                           v14,
                                                           (System_String_o *)StringLiteral_757/*")"*/,
                                                           0),
        !gameObject) )
  {
    sub_1C93D2C(CommandTextureLocal, v11);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)CommandTextureLocal, 0);
  UICharaGraphTexture__SetCommand_44610004(v12, commandCodeIda, callbackFunc, 0);
  UICharaGraphTexture__SetDepth(v12, depth, 0);
  return v12;
}


UICharaGraphTexture_o *CharaGraphManager__CreateCommandTexturePrefab(
        UnityEngine_GameObject_o *parent,
        int32_t commandCodeId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4D2FB27 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4D2FB27 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v10);
  return CharaGraphManager__CreateCommandTextureLocal_41383156(
           (CharaGraphManager_o *)Instance,
           parent,
           commandCodeId,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  ServantEntity_o *v10; // x21
  UnityEngine_Object_c *v11; // x0
  Il2CppObject *charaGraphPrefab; // x21
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x20
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Vector3_o localScale; // 0:kr00_12.12

  if ( (byte_4D2FB28 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_14829/*"UICharaGraphTexture"*/);
    byte_4D2FB28 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0 )
  {
LABEL_30:
    sub_1C93D2C(Instance, v8);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
  {
    v13 = 0;
    goto LABEL_14;
  }
  v10 = (ServantEntity_o *)Entity;
  if ( ServantEntity__get_IsEnemyCollectionDetail((ServantEntity_o *)Entity, 0) )
  {
    v11 = UnityEngine_Object_TypeInfo;
    charaGraphPrefab = (Il2CppObject *)this->fields.charaGraphPrefab;
  }
  else
  {
    v13 = 0;
    if ( !ServantEntity__get_IsServantEquip(v10, 0) )
      goto LABEL_14;
    v11 = UnityEngine_Object_TypeInfo;
    charaGraphPrefab = (Il2CppObject *)this->fields.charaEquipGraphPrefab;
  }
  if ( !v11->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v11);
  v13 = UnityEngine_Object__Instantiate_object_(
          charaGraphPrefab,
          (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
LABEL_14:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v14 = (Il2CppObject *)this->fields.charaGraphPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                  v14,
                                  (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v13 = (Il2CppObject *)Instance;
  }
  if ( !v13 )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v13,
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0);
  if ( !Instance )
    goto LABEL_30;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0);
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v13, (System_String_o *)StringLiteral_14829/*"UICharaGraphTexture"*/, 0);
  if ( !parent )
    goto LABEL_30;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_30;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)Instance, 0);
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4D2A13F )
  {
    sub_1C93AD4(&UnityEngine_Quaternion_TypeInfo);
    byte_4D2A13F = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  UnityEngine_Transform__set_localScale(transform, localScale, 0);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_layer(parent, 0);
  if ( !Component_object )
    goto LABEL_30;
  UICharaGraphRender__SetLayer((UICharaGraphRender_o *)Component_object, (int32_t)Instance, 0);
  return (UICharaGraphTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_41376164(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        bool isOwn,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t isRealName,
        const MethodInfo *method)
{
  UnityEngine_Component_o *TextureLocal; // x0
  __int64 v18; // x1
  UICharaGraphTexture_o *v19; // x23
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *v21; // x25
  System_String_o *v22; // x0
  int32_t v24; // [xsp+8h] [xbp-58h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-54h] BYREF

  v24 = limitCount;
  v25 = svtId;
  if ( (byte_4D2FB29 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_14830/*"UICharaGraphTexture("*/);
    sub_1C93AD4(&StringLiteral_757/*")"*/);
    byte_4D2FB29 = 1;
  }
  TextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateTextureLocal(
                                              this,
                                              parent,
                                              svtId,
                                              *(const MethodInfo **)&limitCount);
  if ( !TextureLocal
    || (v19 = (UICharaGraphTexture_o *)TextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(TextureLocal, 0),
        v21 = System_Int32__ToString((int32_t)&v25, 0),
        v22 = System_Int32__ToString((int32_t)&v24, 0),
        TextureLocal = (UnityEngine_Component_o *)System_String__Concat_64465992(
                                                    (System_String_o *)StringLiteral_14830/*"UICharaGraphTexture("*/,
                                                    v21,
                                                    v22,
                                                    (System_String_o *)StringLiteral_757/*")"*/,
                                                    0),
        !gameObject) )
  {
    sub_1C93D2C(TextureLocal, v18);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)TextureLocal, 0);
  UICharaGraphTexture__SetCharacter(v19, v25, v24, exceedCount, isOwn, callbackFunc, isRealName, 0);
  UICharaGraphTexture__SetDepth(v19, depth, 0);
  return v19;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_41376708(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w0
  const MethodInfo *v14; // x3
  CharaGraphManager_o *v15; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v17; // x2
  System_String_o *v18; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v10 = this;
  if ( (byte_4D2FB2A & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&StringLiteral_14830/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1C93AD4(&StringLiteral_757/*")"*/);
    byte_4D2FB2A = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v21, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v22.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v22.fields.fakeValue = 0,
        svtId = userSvtEntity->fields.svtId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_64463988(
                                        (System_String_o *)StringLiteral_14830/*"UICharaGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_757/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_1C93D2C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_44606904((UICharaGraphTexture_o *)v15, userSvtEntity, callbackFunc, 0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_41377376(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t isRealName,
        ServantOverwriteStatus_o *overwriteStatus,
        bool isDisableGrand,
        bool isGrand,
        const MethodInfo *method)
{
  CharaGraphManager_o *v17; // x25
  __int64 v18; // x26
  __int64 v19; // x27
  int32_t v20; // w0
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  UnityEngine_Component_o *v28; // x23
  UnityEngine_Object_o *gameObject; // x24
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  CharaGraphManager_o *v36; // x25
  int32_t v37; // w1
  const MethodInfo *v38; // x2
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int32_t v51; // w1
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  int32_t v64; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  v17 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4D2FB2B & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_949/*"-I"*/);
    sub_1C93AD4(&StringLiteral_14830/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1C93AD4(&StringLiteral_757/*")"*/);
    byte_4D2FB2B = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_16;
  v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v68.fields.currentCryptoKey = v18;
  *(_QWORD *)&v68.fields.fakeValue = v19;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v68, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v17, parent, v20, v21);
  if ( !this )
    goto LABEL_16;
  v28 = (UnityEngine_Component_o *)this;
  *((_QWORD *)this + 66) = overwriteStatus;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)((char *)this + 528),
    (int32_t)overwriteStatus,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v28, 0);
  this = (CharaGraphManager_o *)sub_1C93B7C(string___TypeInfo, 5);
  if ( !this )
    goto LABEL_16;
  v36 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v37 = StringLiteral_14830/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14830/*"UICharaGraphTexture("*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.charaGraphPrefab, v37, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)&v69.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v69.fields.fakeValue = 0;
  svtId = userSvtEntity->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v69, v38);
  if ( LODWORD(v36->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v36->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v36->fields.charaEquipGraphPrefab,
    (int32_t)this,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( LODWORD(v36->fields.m_CancellationTokenSource) <= 2
    || (v51 = StringLiteral_949/*"-I"*/,
        v36->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_949/*"-I"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v36->fields.commandGraphPrefab, v51, v45, v46, v47, v48, v49, v50),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0),
        LODWORD(v36->fields.m_CancellationTokenSource) <= 3)
    || (v36[1].klass = (CharaGraphManager_c *)this,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v36[1], (int32_t)this, v52, v53, v54, v55, v56, v57),
        LODWORD(v36->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1C93D34(this);
  }
  v64 = StringLiteral_757/*")"*/;
  v36[1].monitor = (void *)StringLiteral_757/*")"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v36[1].monitor, v64, v58, v59, v60, v61, v62, v63);
  this = (CharaGraphManager_o *)System_String__Concat_64466256((System_String_array *)v36, 0);
  if ( !gameObject )
LABEL_16:
    sub_1C93D2C(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_44607284(
    (UICharaGraphTexture_o *)v28,
    userSvtEntity,
    imageLimitCounta,
    callbackFunc,
    isRealName,
    isDisableGrand,
    isGrand,
    0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v28, depth, 0);
  return (UICharaGraphTexture_o *)v28;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_41378128(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w0
  const MethodInfo *v14; // x3
  CharaGraphManager_o *v15; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v17; // x2
  System_String_o *v18; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v10 = this;
  if ( (byte_4D2FB2C & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&StringLiteral_14830/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1C93AD4(&StringLiteral_757/*")"*/);
    byte_4D2FB2C = 1;
  }
  if ( !userSvtCollectionEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v21, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v22.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v22.fields.fakeValue = 0,
        svtId = userSvtCollectionEntity->fields.svtId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_64463988(
                                        (System_String_o *)StringLiteral_14830/*"UICharaGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_757/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_1C93D2C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_44607864((UICharaGraphTexture_o *)v15, userSvtCollectionEntity, callbackFunc, 0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_41378620(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        ServantOverwriteStatus_o *overwriteStatus,
        const MethodInfo *method)
{
  CharaGraphManager_o *v13; // x24
  __int64 v14; // x25
  __int64 v15; // x26
  int32_t v16; // w0
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_Component_o *v24; // x22
  UnityEngine_Object_o *gameObject; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  CharaGraphManager_o *v32; // x24
  int32_t v33; // w1
  const MethodInfo *v34; // x2
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4D2FB2D & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_949/*"-I"*/);
    sub_1C93AD4(&StringLiteral_14830/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1C93AD4(&StringLiteral_757/*")"*/);
    byte_4D2FB2D = 1;
  }
  if ( !userSvtCollectionEntity )
    goto LABEL_16;
  v14 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v64.fields.currentCryptoKey = v14;
  *(_QWORD *)&v64.fields.fakeValue = v15;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v64, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v16, v17);
  if ( !this )
    goto LABEL_16;
  v24 = (UnityEngine_Component_o *)this;
  *((_QWORD *)this + 66) = overwriteStatus;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)((char *)this + 528),
    (int32_t)overwriteStatus,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v24, 0);
  this = (CharaGraphManager_o *)sub_1C93B7C(string___TypeInfo, 5);
  if ( !this )
    goto LABEL_16;
  v32 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v33 = StringLiteral_14830/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14830/*"UICharaGraphTexture("*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.charaGraphPrefab, v33, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)&v65.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v65.fields.fakeValue = 0;
  svtId = userSvtCollectionEntity->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v65, v34);
  if ( LODWORD(v32->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v32->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v32->fields.charaEquipGraphPrefab,
    (int32_t)this,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( LODWORD(v32->fields.m_CancellationTokenSource) <= 2
    || (v47 = StringLiteral_949/*"-I"*/,
        v32->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_949/*"-I"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32->fields.commandGraphPrefab, v47, v41, v42, v43, v44, v45, v46),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0),
        LODWORD(v32->fields.m_CancellationTokenSource) <= 3)
    || (v32[1].klass = (CharaGraphManager_c *)this,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32[1], (int32_t)this, v48, v49, v50, v51, v52, v53),
        LODWORD(v32->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1C93D34(this);
  }
  v60 = StringLiteral_757/*")"*/;
  v32[1].monitor = (void *)StringLiteral_757/*")"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32[1].monitor, v60, v54, v55, v56, v57, v58, v59);
  this = (CharaGraphManager_o *)System_String__Concat_64466256((System_String_array *)v32, 0);
  if ( !gameObject )
LABEL_16:
    sub_1C93D2C(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_44608200(
    (UICharaGraphTexture_o *)v24,
    userSvtCollectionEntity,
    imageLimitCounta,
    callbackFunc,
    0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v24, depth, 0);
  return (UICharaGraphTexture_o *)v24;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_41379340(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x24
  __int64 v12; // x25
  int32_t v13; // w0
  const MethodInfo *v14; // x3
  CharaGraphManager_o *v15; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v17; // x2
  System_String_o *v18; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v10 = this;
  if ( (byte_4D2FB2E & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&StringLiteral_14830/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1C93AD4(&StringLiteral_757/*")"*/);
    byte_4D2FB2E = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_9;
  v11 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v21, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v22.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v22.fields.fakeValue = 0,
        svtId = servantLeaderInfo->fields.svtId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_64463988(
                                        (System_String_o *)StringLiteral_14830/*"UICharaGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_757/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_1C93D2C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_44608544((UICharaGraphTexture_o *)v15, servantLeaderInfo, callbackFunc, 0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_41379832(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        ServantOverwriteStatus_o *overwriteStatus,
        const MethodInfo *method)
{
  CharaGraphManager_o *v13; // x24
  __int64 v14; // x25
  __int64 v15; // x26
  int32_t v16; // w0
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_Component_o *v24; // x22
  UnityEngine_Object_o *gameObject; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  CharaGraphManager_o *v32; // x24
  int32_t v33; // w1
  const MethodInfo *v34; // x2
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4D2FB2F & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_949/*"-I"*/);
    sub_1C93AD4(&StringLiteral_14830/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1C93AD4(&StringLiteral_757/*")"*/);
    byte_4D2FB2F = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_16;
  v14 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v64.fields.currentCryptoKey = v14;
  *(_QWORD *)&v64.fields.fakeValue = v15;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v64, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v16, v17);
  if ( !this )
    goto LABEL_16;
  v24 = (UnityEngine_Component_o *)this;
  *((_QWORD *)this + 66) = overwriteStatus;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)((char *)this + 528),
    (int32_t)overwriteStatus,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v24, 0);
  this = (CharaGraphManager_o *)sub_1C93B7C(string___TypeInfo, 5);
  if ( !this )
    goto LABEL_16;
  v32 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v33 = StringLiteral_14830/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14830/*"UICharaGraphTexture("*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.charaGraphPrefab, v33, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)&v65.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v65.fields.fakeValue = 0;
  svtId = servantLeaderInfo->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v65, v34);
  if ( LODWORD(v32->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v32->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v32->fields.charaEquipGraphPrefab,
    (int32_t)this,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( LODWORD(v32->fields.m_CancellationTokenSource) <= 2
    || (v47 = StringLiteral_949/*"-I"*/,
        v32->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_949/*"-I"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32->fields.commandGraphPrefab, v47, v41, v42, v43, v44, v45, v46),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0),
        LODWORD(v32->fields.m_CancellationTokenSource) <= 3)
    || (v32[1].klass = (CharaGraphManager_c *)this,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32[1], (int32_t)this, v48, v49, v50, v51, v52, v53),
        LODWORD(v32->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1C93D34(this);
  }
  v60 = StringLiteral_757/*")"*/;
  v32[1].monitor = (void *)StringLiteral_757/*")"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32[1].monitor, v60, v54, v55, v56, v57, v58, v59);
  this = (CharaGraphManager_o *)System_String__Concat_64466256((System_String_array *)v32, 0);
  if ( !gameObject )
LABEL_16:
    sub_1C93D2C(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_44608792(
    (UICharaGraphTexture_o *)v24,
    servantLeaderInfo,
    imageLimitCounta,
    callbackFunc,
    0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v24, depth, 0);
  return (UICharaGraphTexture_o *)v24;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_41380560(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        EquipTargetInfo_o *equipTargetInfo,
        int32_t depth,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v12; // x24
  __int64 v13; // x25
  __int64 v14; // x26
  int32_t v15; // w0
  const MethodInfo *v16; // x3
  CharaGraphManager_o *v17; // x23
  UnityEngine_Object_o *gameObject; // x24
  const MethodInfo *v19; // x2
  System_String_o *v20; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v12 = this;
  if ( (byte_4D2FB30 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&StringLiteral_14830/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1C93AD4(&StringLiteral_757/*")"*/);
    byte_4D2FB30 = 1;
  }
  if ( !equipTargetInfo )
    goto LABEL_9;
  v13 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v23, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v12, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v24.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v24.fields.fakeValue = 0,
        svtId = equipTargetInfo->fields.svtId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_64463988(
                                        (System_String_o *)StringLiteral_14830/*"UICharaGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_757/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_1C93D2C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_44609120(
    (UICharaGraphTexture_o *)v17,
    equipTargetInfo,
    isNpcFollowerServantEquip,
    callbackFunc,
    0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_41381060(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        EquipTargetInfo_o *equipTargetInfo,
        int32_t imageLimitCount,
        int32_t depth,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v13; // x24
  __int64 v14; // x25
  __int64 v15; // x26
  int32_t v16; // w0
  const MethodInfo *v17; // x3
  CharaGraphManager_o *v18; // x23
  UnityEngine_Object_o *gameObject; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  CharaGraphManager_o *v26; // x25
  int32_t v27; // w1
  const MethodInfo *v28; // x2
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4D2FB31 & 1) == 0 )
  {
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_949/*"-I"*/);
    sub_1C93AD4(&StringLiteral_14830/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1C93AD4(&StringLiteral_757/*")"*/);
    byte_4D2FB31 = 1;
  }
  if ( !equipTargetInfo )
    goto LABEL_16;
  v14 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v58.fields.currentCryptoKey = v14;
  *(_QWORD *)&v58.fields.fakeValue = v15;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v58, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v16, v17);
  if ( !this )
    goto LABEL_16;
  v18 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (CharaGraphManager_o *)sub_1C93B7C(string___TypeInfo, 5);
  if ( !this )
    goto LABEL_16;
  v26 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v27 = StringLiteral_14830/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14830/*"UICharaGraphTexture("*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.charaGraphPrefab, v27, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)&v59.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v59.fields.fakeValue = 0;
  svtId = equipTargetInfo->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v59, v28);
  if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v26->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v26->fields.charaEquipGraphPrefab,
    (int32_t)this,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 2
    || (v41 = StringLiteral_949/*"-I"*/,
        v26->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_949/*"-I"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v26->fields.commandGraphPrefab, v41, v35, v36, v37, v38, v39, v40),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0),
        LODWORD(v26->fields.m_CancellationTokenSource) <= 3)
    || (v26[1].klass = (CharaGraphManager_c *)this,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v26[1], (int32_t)this, v42, v43, v44, v45, v46, v47),
        LODWORD(v26->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1C93D34(this);
  }
  v54 = StringLiteral_757/*")"*/;
  v26[1].monitor = (void *)StringLiteral_757/*")"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v26[1].monitor, v54, v48, v49, v50, v51, v52, v53);
  this = (CharaGraphManager_o *)System_String__Concat_64466256((System_String_array *)v26, 0);
  if ( !gameObject )
LABEL_16:
    sub_1C93D2C(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_44609316(
    (UICharaGraphTexture_o *)v18,
    equipTargetInfo,
    imageLimitCounta,
    isNpcFollowerServantEquip,
    callbackFunc,
    0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v18, depth, 0);
  return (UICharaGraphTexture_o *)v18;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab(
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
        bool isOwn,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t isRealName,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v20; // [xsp+8h] [xbp-68h]

  if ( (byte_4D2FB1A & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4D2FB1A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v18);
  return CharaGraphManager__CreateTextureLocal_41376164(
           (CharaGraphManager_o *)Instance,
           parent,
           svtId,
           limitCount,
           exceedCount,
           isOwn,
           depth,
           callbackFunc,
           isRealName,
           v20);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_41376480(
        UnityEngine_GameObject_o *parent,
        int64_t userSvtId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x22
  const MethodInfo *v12; // x5

  if ( (byte_4D2FB1B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4D2FB1B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   userSvtId,
                   (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__)) == 0) )
  {
    sub_1C93D2C(Instance, v10);
  }
  return CharaGraphManager__CreateTextureLocal_41376708(
           (CharaGraphManager_o *)Instance,
           parent,
           (UserServantEntity_o *)Entity,
           depth,
           callbackFunc,
           v12);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_41377052(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4D2FB1C & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4D2FB1C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v10);
  return CharaGraphManager__CreateTextureLocal_41376708(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_41377176(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t isRealName,
        ServantOverwriteStatus_o *overwriteStatus,
        bool isDisableGrand,
        bool isGrand,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  const MethodInfo *v21; // [xsp+10h] [xbp-70h]

  if ( (byte_4D2FB1D & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4D2FB1D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v19);
  return CharaGraphManager__CreateTextureLocal_41377376(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           isRealName,
           overwriteStatus,
           isDisableGrand,
           isGrand,
           v21);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_41378004(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4D2FB1E & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4D2FB1E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v10);
  return CharaGraphManager__CreateTextureLocal_41378128(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_41378472(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        ServantOverwriteStatus_o *overwriteStatus,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x7

  if ( (byte_4D2FB1F & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4D2FB1F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v14);
  return CharaGraphManager__CreateTextureLocal_41378620(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtCollectionEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           overwriteStatus,
           v15);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_41379216(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4D2FB20 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4D2FB20 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v10);
  return CharaGraphManager__CreateTextureLocal_41379340(
           (CharaGraphManager_o *)Instance,
           parent,
           servantLeaderInfo,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_41379684(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        ServantOverwriteStatus_o *overwriteStatus,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x7

  if ( (byte_4D2FB21 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4D2FB21 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v14);
  return CharaGraphManager__CreateTextureLocal_41379832(
           (CharaGraphManager_o *)Instance,
           parent,
           servantLeaderInfo,
           imageLimitCount,
           depth,
           callbackFunc,
           overwriteStatus,
           v15);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_41380428(
        UnityEngine_GameObject_o *parent,
        EquipTargetInfo_o *equipTargetInfo,
        int32_t depth,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x6

  if ( (byte_4D2FB22 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4D2FB22 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v12);
  return CharaGraphManager__CreateTextureLocal_41380560(
           (CharaGraphManager_o *)Instance,
           parent,
           equipTargetInfo,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v13);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_41380912(
        UnityEngine_GameObject_o *parent,
        EquipTargetInfo_o *equipTargetInfo,
        int32_t imageLimitCount,
        int32_t depth,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x7

  if ( (byte_4D2FB23 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4D2FB23 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v14);
  return CharaGraphManager__CreateTextureLocal_41381060(
           (CharaGraphManager_o *)Instance,
           parent,
           equipTargetInfo,
           imageLimitCount,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v15);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_41381640(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4D2FB24 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4D2FB24 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v10);
  return CharaGraphManager__CreateCommandTextureLocal_41381764(
           (CharaGraphManager_o *)Instance,
           parent,
           userCommandCodeEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_41382104(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4D2FB25 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4D2FB25 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v10);
  return CharaGraphManager__CreateCommandTextureLocal_41382228(
           (CharaGraphManager_o *)Instance,
           parent,
           userCommandCodeCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_41382568(
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4D2FB26 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4D2FB26 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v10);
  return CharaGraphManager__CreateCommandTextureLocal_41382692(
           (CharaGraphManager_o *)Instance,
           parent,
           commandCodeEntity,
           depth,
           callbackFunc,
           v11);
}


void CharaGraphManager__DownloadAsset(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName; // x20

  if ( (byte_4D2FB14 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D2FB14 = 1;
  }
  AssetName = CharaGraphManager__GetAssetName(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName, callback, 1, 0);
}


void CharaGraphManager__DownloadCommandAsset(
        int32_t commandCodeId,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *CommandAssetName; // x20

  if ( (byte_4D2FB15 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&UICharaGraphRender_TypeInfo);
    byte_4D2FB15 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(CommandAssetName, callback, 1, 0);
}


System_String_o *CharaGraphManager__GetAssetName(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  if ( (byte_4D2FB10 & 1) == 0 )
  {
    sub_1C93AD4(&UICharaGraphRender_TypeInfo);
    byte_4D2FB10 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetAssetName(svtId, imageLimitCount, 0);
}


System_String_o *CharaGraphManager__GetAssetName_41374844(
        int32_t imageSvtId,
        System_Int32_array *imagePartsGroupIdxs,
        const MethodInfo *method)
{
  if ( (byte_4D2FB11 & 1) == 0 )
  {
    sub_1C93AD4(&UICharaGraphRender_TypeInfo);
    byte_4D2FB11 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetAssetName_44594868(imageSvtId, imagePartsGroupIdxs, 0);
}


System_String_o *CharaGraphManager__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  if ( (byte_4D2FB12 & 1) == 0 )
  {
    sub_1C93AD4(&UICharaGraphRender_TypeInfo);
    byte_4D2FB12 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetCommandAssetName(commandCodeId, 0);
}


System_String_o *CharaGraphManager__GetExCharaGraphAssetName(int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4D2FB13 & 1) == 0 )
  {
    sub_1C93AD4(&UICharaGraphRender_TypeInfo);
    byte_4D2FB13 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetExCharaGraphAssetName(svtId, 0);
}


void CharaGraphManager__LoadAsset(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName; // x20

  if ( (byte_4D2FB16 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D2FB16 = 1;
  }
  AssetName = CharaGraphManager__GetAssetName(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName, callback, 1, 0);
}


void CharaGraphManager__LoadCommandAsset(
        int32_t commandCodeId,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *CommandAssetName; // x20

  if ( (byte_4D2FB17 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&UICharaGraphRender_TypeInfo);
    byte_4D2FB17 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(CommandAssetName, callback, 1, 0);
}


void CharaGraphManager__ReleaseAsset(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  System_String_o *AssetName; // x19

  if ( (byte_4D2FB18 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D2FB18 = 1;
  }
  AssetName = CharaGraphManager__GetAssetName(svtId, imageLimitCount, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName, 0);
}


void CharaGraphManager__ReleaseCommandAsset(int32_t commandCodeId, int32_t imageLimitCount, const MethodInfo *method)
{
  System_String_o *CommandAssetName; // x19

  if ( (byte_4D2FB19 & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&UICharaGraphRender_TypeInfo);
    byte_4D2FB19 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(CommandAssetName, 0);
}