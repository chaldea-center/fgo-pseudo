void CharaGraphManager___ctor(CharaGraphManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C26436 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
    byte_4C26436 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39D40E4 *)Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
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
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C26431 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_14728/*"UICommandGraphTexture"*/);
    byte_4C26431 = 1;
  }
  commandGraphPrefab = (Il2CppObject *)this->fields.commandGraphPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        commandGraphPrefab,
                                        (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_15;
  v9 = layer;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       layer,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform(v9, 0);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
  if ( !layer )
    goto LABEL_15;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v9, (System_String_o *)StringLiteral_14728/*"UICommandGraphTexture"*/, 0);
  if ( !parent )
    goto LABEL_15;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0);
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4C20DA7 )
  {
    sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
    byte_4C20DA7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v17, 0);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0);
  if ( !Component_object )
LABEL_15:
    sub_1C2D6EC(layer, v8);
  UICharaGraphRender__SetLayer((UICharaGraphRender_o *)Component_object, (int32_t)layer, 0);
  return (UICharaGraphTexture_o *)Component_object;
}


UICharaGraphTexture_o *CharaGraphManager__CreateCommandTextureLocal_40442844(
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
  if ( (byte_4C26432 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_759/*")"*/);
    this = (CharaGraphManager_o *)sub_1C2D490(&StringLiteral_14729/*"UICommandGraphTexture("*/);
    byte_4C26432 = 1;
  }
  if ( !userCommandCodeEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v21, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v22.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v22.fields.fakeValue = 0,
        commandCodeId = userCommandCodeEntity->fields.commandCodeId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_63496112(
                                        (System_String_o *)StringLiteral_14729/*"UICommandGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_759/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_1C2D6EC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCommand((UICharaGraphTexture_o *)v15, userCommandCodeEntity, callbackFunc, 0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *CharaGraphManager__CreateCommandTextureLocal_40443308(
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
  if ( (byte_4C26433 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_759/*")"*/);
    this = (CharaGraphManager_o *)sub_1C2D490(&StringLiteral_14729/*"UICommandGraphTexture("*/);
    byte_4C26433 = 1;
  }
  if ( !userCommandCodeCollectionEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v21, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v22.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v22.fields.fakeValue = 0,
        commandCodeId = userCommandCodeCollectionEntity->fields.commandCodeId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_63496112(
                                        (System_String_o *)StringLiteral_14729/*"UICommandGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_759/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_1C2D6EC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCommand_43686708(
    (UICharaGraphTexture_o *)v15,
    userCommandCodeCollectionEntity,
    callbackFunc,
    0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *CharaGraphManager__CreateCommandTextureLocal_40443772(
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
  if ( (byte_4C26434 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_759/*")"*/);
    this = (CharaGraphManager_o *)sub_1C2D490(&StringLiteral_14729/*"UICommandGraphTexture("*/);
    byte_4C26434 = 1;
  }
  if ( !commandCodeEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v21, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v22.fields.currentCryptoKey = &id,
        *(_QWORD *)&v22.fields.fakeValue = 0,
        id = commandCodeEntity->fields.id,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_63496112(
                                        (System_String_o *)StringLiteral_14729/*"UICommandGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_759/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_1C2D6EC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCommand_43686852((UICharaGraphTexture_o *)v15, commandCodeEntity, callbackFunc, 0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0);
  return (UICharaGraphTexture_o *)v15;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *CharaGraphManager__CreateCommandTextureLocal_40444236(
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
  if ( (byte_4C26435 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_759/*")"*/);
    sub_1C2D490(&StringLiteral_14729/*"UICommandGraphTexture("*/);
    byte_4C26435 = 1;
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
        CommandTextureLocal = (UnityEngine_Component_o *)System_String__Concat_63496112(
                                                           (System_String_o *)StringLiteral_14729/*"UICommandGraphTexture("*/,
                                                           v14,
                                                           (System_String_o *)StringLiteral_759/*")"*/,
                                                           0),
        !gameObject) )
  {
    sub_1C2D6EC(CommandTextureLocal, v11);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)CommandTextureLocal, 0);
  UICharaGraphTexture__SetCommand_43686996(v12, commandCodeIda, callbackFunc, 0);
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

  if ( (byte_4C26426 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4C26426 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v10);
  return CharaGraphManager__CreateCommandTextureLocal_40444236(
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
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C26427 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_14726/*"UICharaGraphTexture"*/);
    byte_4C26427 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0 )
  {
LABEL_30:
    sub_1C2D6EC(Instance, v8);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
          (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                                  (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v13 = (Il2CppObject *)Instance;
  }
  if ( !v13 )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v13,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0);
  if ( !Instance )
    goto LABEL_30;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v13, (System_String_o *)StringLiteral_14726/*"UICharaGraphTexture"*/, 0);
  if ( !parent )
    goto LABEL_30;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_30;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)Instance, 0);
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4C20DA7 )
  {
    sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
    byte_4C20DA7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v22, 0);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_layer(parent, 0);
  if ( !Component_object )
    goto LABEL_30;
  UICharaGraphRender__SetLayer((UICharaGraphRender_o *)Component_object, (int32_t)Instance, 0);
  return (UICharaGraphTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_40437244(
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
  if ( (byte_4C26428 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_14727/*"UICharaGraphTexture("*/);
    sub_1C2D490(&StringLiteral_759/*")"*/);
    byte_4C26428 = 1;
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
        TextureLocal = (UnityEngine_Component_o *)System_String__Concat_63498116(
                                                    (System_String_o *)StringLiteral_14727/*"UICharaGraphTexture("*/,
                                                    v21,
                                                    v22,
                                                    (System_String_o *)StringLiteral_759/*")"*/,
                                                    0),
        !gameObject) )
  {
    sub_1C2D6EC(TextureLocal, v18);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)TextureLocal, 0);
  UICharaGraphTexture__SetCharacter(v19, v25, v24, exceedCount, isOwn, callbackFunc, isRealName, 0);
  UICharaGraphTexture__SetDepth(v19, depth, 0);
  return v19;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_40437788(
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
  if ( (byte_4C26429 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_14727/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1C2D490(&StringLiteral_759/*")"*/);
    byte_4C26429 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v21, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v22.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v22.fields.fakeValue = 0,
        svtId = userSvtEntity->fields.svtId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_63496112(
                                        (System_String_o *)StringLiteral_14727/*"UICharaGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_759/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_1C2D6EC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_43683896((UICharaGraphTexture_o *)v15, userSvtEntity, callbackFunc, 0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_40438456(
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
  const MethodInfo *v23; // x3
  UnityEngine_Component_o *v24; // x23
  UnityEngine_Object_o *gameObject; // x24
  __int64 v26; // x2
  const MethodInfo *v27; // x3
  CharaGraphManager_o *v28; // x25
  int32_t v29; // w1
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  int32_t v36; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v17 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4C2642A & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_951/*"-I"*/);
    sub_1C2D490(&StringLiteral_14727/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1C2D490(&StringLiteral_759/*")"*/);
    byte_4C2642A = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_16;
  v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v18;
  *(_QWORD *)&v40.fields.fakeValue = v19;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v40, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v17, parent, v20, v21);
  if ( !this )
    goto LABEL_16;
  v24 = (UnityEngine_Component_o *)this;
  this[9].fields.m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o *)overwriteStatus;
  sub_1C2D434((CGThumbnailListItem_o *)&this[9].fields.m_CancellationTokenSource, (int32_t)overwriteStatus, v22, v23);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v24, 0);
  this = (CharaGraphManager_o *)sub_1C2D538(string___TypeInfo, 5);
  if ( !this )
    goto LABEL_16;
  v28 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v29 = StringLiteral_14727/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14727/*"UICharaGraphTexture("*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.charaGraphPrefab, v29, v26, v27);
  *(_QWORD *)&v41.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v41.fields.fakeValue = 0;
  svtId = userSvtEntity->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v41, v30);
  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v28->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1C2D434((CGThumbnailListItem_o *)&v28->fields.charaEquipGraphPrefab, (int32_t)this, v26, v31);
  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 2
    || (v33 = StringLiteral_951/*"-I"*/,
        v28->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_951/*"-I"*/,
        sub_1C2D434((CGThumbnailListItem_o *)&v28->fields.commandGraphPrefab, v33, v26, v32),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0),
        LODWORD(v28->fields.m_CancellationTokenSource) <= 3)
    || (v28[1].klass = (CharaGraphManager_c *)this,
        sub_1C2D434((CGThumbnailListItem_o *)&v28[1], (int32_t)this, v26, v34),
        LODWORD(v28->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1C2D6F4(this, parent, v26);
  }
  v36 = StringLiteral_759/*")"*/;
  v28[1].monitor = (void *)StringLiteral_759/*")"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v28[1].monitor, v36, v26, v35);
  this = (CharaGraphManager_o *)System_String__Concat_63498380((System_String_array *)v28, 0);
  if ( !gameObject )
LABEL_16:
    sub_1C2D6EC(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_43684276(
    (UICharaGraphTexture_o *)v24,
    userSvtEntity,
    imageLimitCounta,
    callbackFunc,
    isRealName,
    isDisableGrand,
    isGrand,
    0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v24, depth, 0);
  return (UICharaGraphTexture_o *)v24;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_40439208(
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
  if ( (byte_4C2642B & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_14727/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1C2D490(&StringLiteral_759/*")"*/);
    byte_4C2642B = 1;
  }
  if ( !userSvtCollectionEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v21, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v22.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v22.fields.fakeValue = 0,
        svtId = userSvtCollectionEntity->fields.svtId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_63496112(
                                        (System_String_o *)StringLiteral_14727/*"UICharaGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_759/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_1C2D6EC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_43684856((UICharaGraphTexture_o *)v15, userSvtCollectionEntity, callbackFunc, 0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_40439700(
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
  const MethodInfo *v19; // x3
  UnityEngine_Component_o *v20; // x22
  UnityEngine_Object_o *gameObject; // x23
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  CharaGraphManager_o *v24; // x24
  int32_t v25; // w1
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4C2642C & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_951/*"-I"*/);
    sub_1C2D490(&StringLiteral_14727/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1C2D490(&StringLiteral_759/*")"*/);
    byte_4C2642C = 1;
  }
  if ( !userSvtCollectionEntity )
    goto LABEL_16;
  v14 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v14;
  *(_QWORD *)&v36.fields.fakeValue = v15;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v36, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v16, v17);
  if ( !this )
    goto LABEL_16;
  v20 = (UnityEngine_Component_o *)this;
  this[9].fields.m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o *)overwriteStatus;
  sub_1C2D434((CGThumbnailListItem_o *)&this[9].fields.m_CancellationTokenSource, (int32_t)overwriteStatus, v18, v19);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v20, 0);
  this = (CharaGraphManager_o *)sub_1C2D538(string___TypeInfo, 5);
  if ( !this )
    goto LABEL_16;
  v24 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v25 = StringLiteral_14727/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14727/*"UICharaGraphTexture("*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.charaGraphPrefab, v25, v22, v23);
  *(_QWORD *)&v37.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v37.fields.fakeValue = 0;
  svtId = userSvtCollectionEntity->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v37, v26);
  if ( LODWORD(v24->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v24->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1C2D434((CGThumbnailListItem_o *)&v24->fields.charaEquipGraphPrefab, (int32_t)this, v22, v27);
  if ( LODWORD(v24->fields.m_CancellationTokenSource) <= 2
    || (v29 = StringLiteral_951/*"-I"*/,
        v24->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_951/*"-I"*/,
        sub_1C2D434((CGThumbnailListItem_o *)&v24->fields.commandGraphPrefab, v29, v22, v28),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0),
        LODWORD(v24->fields.m_CancellationTokenSource) <= 3)
    || (v24[1].klass = (CharaGraphManager_c *)this,
        sub_1C2D434((CGThumbnailListItem_o *)&v24[1], (int32_t)this, v22, v30),
        LODWORD(v24->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1C2D6F4(this, parent, v22);
  }
  v32 = StringLiteral_759/*")"*/;
  v24[1].monitor = (void *)StringLiteral_759/*")"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v24[1].monitor, v32, v22, v31);
  this = (CharaGraphManager_o *)System_String__Concat_63498380((System_String_array *)v24, 0);
  if ( !gameObject )
LABEL_16:
    sub_1C2D6EC(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_43685192(
    (UICharaGraphTexture_o *)v20,
    userSvtCollectionEntity,
    imageLimitCounta,
    callbackFunc,
    0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v20, depth, 0);
  return (UICharaGraphTexture_o *)v20;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_40440420(
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
  if ( (byte_4C2642D & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_14727/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1C2D490(&StringLiteral_759/*")"*/);
    byte_4C2642D = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_9;
  v11 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v21, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v22.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v22.fields.fakeValue = 0,
        svtId = servantLeaderInfo->fields.svtId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_63496112(
                                        (System_String_o *)StringLiteral_14727/*"UICharaGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_759/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_1C2D6EC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_43685536((UICharaGraphTexture_o *)v15, servantLeaderInfo, callbackFunc, 0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_40440912(
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
  const MethodInfo *v19; // x3
  UnityEngine_Component_o *v20; // x22
  UnityEngine_Object_o *gameObject; // x23
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  CharaGraphManager_o *v24; // x24
  int32_t v25; // w1
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4C2642E & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_951/*"-I"*/);
    sub_1C2D490(&StringLiteral_14727/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1C2D490(&StringLiteral_759/*")"*/);
    byte_4C2642E = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_16;
  v14 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v14;
  *(_QWORD *)&v36.fields.fakeValue = v15;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v36, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v16, v17);
  if ( !this )
    goto LABEL_16;
  v20 = (UnityEngine_Component_o *)this;
  this[9].fields.m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o *)overwriteStatus;
  sub_1C2D434((CGThumbnailListItem_o *)&this[9].fields.m_CancellationTokenSource, (int32_t)overwriteStatus, v18, v19);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v20, 0);
  this = (CharaGraphManager_o *)sub_1C2D538(string___TypeInfo, 5);
  if ( !this )
    goto LABEL_16;
  v24 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v25 = StringLiteral_14727/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14727/*"UICharaGraphTexture("*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.charaGraphPrefab, v25, v22, v23);
  *(_QWORD *)&v37.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v37.fields.fakeValue = 0;
  svtId = servantLeaderInfo->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v37, v26);
  if ( LODWORD(v24->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v24->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1C2D434((CGThumbnailListItem_o *)&v24->fields.charaEquipGraphPrefab, (int32_t)this, v22, v27);
  if ( LODWORD(v24->fields.m_CancellationTokenSource) <= 2
    || (v29 = StringLiteral_951/*"-I"*/,
        v24->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_951/*"-I"*/,
        sub_1C2D434((CGThumbnailListItem_o *)&v24->fields.commandGraphPrefab, v29, v22, v28),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0),
        LODWORD(v24->fields.m_CancellationTokenSource) <= 3)
    || (v24[1].klass = (CharaGraphManager_c *)this,
        sub_1C2D434((CGThumbnailListItem_o *)&v24[1], (int32_t)this, v22, v30),
        LODWORD(v24->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1C2D6F4(this, parent, v22);
  }
  v32 = StringLiteral_759/*")"*/;
  v24[1].monitor = (void *)StringLiteral_759/*")"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v24[1].monitor, v32, v22, v31);
  this = (CharaGraphManager_o *)System_String__Concat_63498380((System_String_array *)v24, 0);
  if ( !gameObject )
LABEL_16:
    sub_1C2D6EC(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_43685784(
    (UICharaGraphTexture_o *)v20,
    servantLeaderInfo,
    imageLimitCounta,
    callbackFunc,
    0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v20, depth, 0);
  return (UICharaGraphTexture_o *)v20;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_40441640(
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
  if ( (byte_4C2642F & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&StringLiteral_14727/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1C2D490(&StringLiteral_759/*")"*/);
    byte_4C2642F = 1;
  }
  if ( !equipTargetInfo )
    goto LABEL_9;
  v13 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v23, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v12, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v24.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v24.fields.fakeValue = 0,
        svtId = equipTargetInfo->fields.svtId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_63496112(
                                        (System_String_o *)StringLiteral_14727/*"UICharaGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_759/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_1C2D6EC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_43686112(
    (UICharaGraphTexture_o *)v17,
    equipTargetInfo,
    isNpcFollowerServantEquip,
    callbackFunc,
    0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_40442140(
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
  __int64 v20; // x2
  const MethodInfo *v21; // x3
  CharaGraphManager_o *v22; // x25
  int32_t v23; // w1
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4C26430 & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_951/*"-I"*/);
    sub_1C2D490(&StringLiteral_14727/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1C2D490(&StringLiteral_759/*")"*/);
    byte_4C26430 = 1;
  }
  if ( !equipTargetInfo )
    goto LABEL_16;
  v14 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v14;
  *(_QWORD *)&v34.fields.fakeValue = v15;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v34, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v16, v17);
  if ( !this )
    goto LABEL_16;
  v18 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (CharaGraphManager_o *)sub_1C2D538(string___TypeInfo, 5);
  if ( !this )
    goto LABEL_16;
  v22 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v23 = StringLiteral_14727/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14727/*"UICharaGraphTexture("*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.charaGraphPrefab, v23, v20, v21);
  *(_QWORD *)&v35.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v35.fields.fakeValue = 0;
  svtId = equipTargetInfo->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v35, v24);
  if ( LODWORD(v22->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v22->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1C2D434((CGThumbnailListItem_o *)&v22->fields.charaEquipGraphPrefab, (int32_t)this, v20, v25);
  if ( LODWORD(v22->fields.m_CancellationTokenSource) <= 2
    || (v27 = StringLiteral_951/*"-I"*/,
        v22->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_951/*"-I"*/,
        sub_1C2D434((CGThumbnailListItem_o *)&v22->fields.commandGraphPrefab, v27, v20, v26),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0),
        LODWORD(v22->fields.m_CancellationTokenSource) <= 3)
    || (v22[1].klass = (CharaGraphManager_c *)this,
        sub_1C2D434((CGThumbnailListItem_o *)&v22[1], (int32_t)this, v20, v28),
        LODWORD(v22->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1C2D6F4(this, parent, v20);
  }
  v30 = StringLiteral_759/*")"*/;
  v22[1].monitor = (void *)StringLiteral_759/*")"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v22[1].monitor, v30, v20, v29);
  this = (CharaGraphManager_o *)System_String__Concat_63498380((System_String_array *)v22, 0);
  if ( !gameObject )
LABEL_16:
    sub_1C2D6EC(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_43686308(
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

  if ( (byte_4C26419 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4C26419 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v18);
  return CharaGraphManager__CreateTextureLocal_40437244(
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


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_40437560(
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

  if ( (byte_4C2641A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4C2641A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   userSvtId,
                   (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v10);
  }
  return CharaGraphManager__CreateTextureLocal_40437788(
           (CharaGraphManager_o *)Instance,
           parent,
           (UserServantEntity_o *)Entity,
           depth,
           callbackFunc,
           v12);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_40438132(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4C2641B & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4C2641B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v10);
  return CharaGraphManager__CreateTextureLocal_40437788(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_40438256(
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

  if ( (byte_4C2641C & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4C2641C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v19);
  return CharaGraphManager__CreateTextureLocal_40438456(
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


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_40439084(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4C2641D & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4C2641D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v10);
  return CharaGraphManager__CreateTextureLocal_40439208(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_40439552(
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

  if ( (byte_4C2641E & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4C2641E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v14);
  return CharaGraphManager__CreateTextureLocal_40439700(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtCollectionEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           overwriteStatus,
           v15);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_40440296(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4C2641F & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4C2641F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v10);
  return CharaGraphManager__CreateTextureLocal_40440420(
           (CharaGraphManager_o *)Instance,
           parent,
           servantLeaderInfo,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_40440764(
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

  if ( (byte_4C26420 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4C26420 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v14);
  return CharaGraphManager__CreateTextureLocal_40440912(
           (CharaGraphManager_o *)Instance,
           parent,
           servantLeaderInfo,
           imageLimitCount,
           depth,
           callbackFunc,
           overwriteStatus,
           v15);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_40441508(
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

  if ( (byte_4C26421 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4C26421 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v12);
  return CharaGraphManager__CreateTextureLocal_40441640(
           (CharaGraphManager_o *)Instance,
           parent,
           equipTargetInfo,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v13);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_40441992(
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

  if ( (byte_4C26422 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4C26422 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v14);
  return CharaGraphManager__CreateTextureLocal_40442140(
           (CharaGraphManager_o *)Instance,
           parent,
           equipTargetInfo,
           imageLimitCount,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v15);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_40442720(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4C26423 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4C26423 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v10);
  return CharaGraphManager__CreateCommandTextureLocal_40442844(
           (CharaGraphManager_o *)Instance,
           parent,
           userCommandCodeEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_40443184(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4C26424 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4C26424 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v10);
  return CharaGraphManager__CreateCommandTextureLocal_40443308(
           (CharaGraphManager_o *)Instance,
           parent,
           userCommandCodeCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_40443648(
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4C26425 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4C26425 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v10);
  return CharaGraphManager__CreateCommandTextureLocal_40443772(
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

  if ( (byte_4C26413 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C26413 = 1;
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

  if ( (byte_4C26414 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&UICharaGraphRender_TypeInfo);
    byte_4C26414 = 1;
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
  if ( (byte_4C2640F & 1) == 0 )
  {
    sub_1C2D490(&UICharaGraphRender_TypeInfo);
    byte_4C2640F = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetAssetName(svtId, imageLimitCount, 0);
}


System_String_o *CharaGraphManager__GetAssetName_40435924(
        int32_t imageSvtId,
        System_Int32_array *imagePartsGroupIdxs,
        const MethodInfo *method)
{
  if ( (byte_4C26410 & 1) == 0 )
  {
    sub_1C2D490(&UICharaGraphRender_TypeInfo);
    byte_4C26410 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetAssetName_43671852(imageSvtId, imagePartsGroupIdxs, 0);
}


System_String_o *CharaGraphManager__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  if ( (byte_4C26411 & 1) == 0 )
  {
    sub_1C2D490(&UICharaGraphRender_TypeInfo);
    byte_4C26411 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetCommandAssetName(commandCodeId, 0);
}


System_String_o *CharaGraphManager__GetExCharaGraphAssetName(int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4C26412 & 1) == 0 )
  {
    sub_1C2D490(&UICharaGraphRender_TypeInfo);
    byte_4C26412 = 1;
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

  if ( (byte_4C26415 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C26415 = 1;
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

  if ( (byte_4C26416 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&UICharaGraphRender_TypeInfo);
    byte_4C26416 = 1;
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

  if ( (byte_4C26417 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C26417 = 1;
  }
  AssetName = CharaGraphManager__GetAssetName(svtId, imageLimitCount, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName, 0);
}


void CharaGraphManager__ReleaseCommandAsset(int32_t commandCodeId, int32_t imageLimitCount, const MethodInfo *method)
{
  System_String_o *CommandAssetName; // x19

  if ( (byte_4C26418 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&UICharaGraphRender_TypeInfo);
    byte_4C26418 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(CommandAssetName, 0);
}