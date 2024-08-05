void __fastcall CharaGraphManager___ctor(CharaGraphManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FD761 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CharaGraphManager___ctor__, method);
    byte_49FD761 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EE730 *)Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *commandGraphPrefab; // x20
  UnityEngine_GameObject_o *layer; // x0
  __int64 v11; // x1
  UnityEngine_GameObject_o *v12; // x22
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FD75C & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___, parent);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v7);
    sub_1B64870(&StringLiteral_14648/*"UICommandGraphTexture"*/, v8);
    byte_49FD75C = 1;
  }
  commandGraphPrefab = (Il2CppObject *)this->fields.commandGraphPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        commandGraphPrefab,
                                        (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_15;
  v12 = layer;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       layer,
                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform(v12, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
  if ( !layer )
    goto LABEL_15;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v12, (System_String_o *)StringLiteral_14648/*"UICommandGraphTexture"*/, 0LL);
  if ( !parent )
    goto LABEL_15;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0LL);
  if ( !byte_49F9201 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, v18);
    byte_49F9201 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_49F9207 )
  {
    sub_1B64870(&UnityEngine_Quaternion_TypeInfo, v19);
    byte_49F9207 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v22, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_object )
LABEL_15:
    sub_1B64ACC(layer, v11);
  UICharaGraphRender__SetLayer((UICharaGraphRender_o *)Component_object, (int32_t)layer, 0LL);
  return (UICharaGraphTexture_o *)Component_object;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_37600392(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CharaGraphManager_o *v17; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v19; // x2
  System_String_o *v20; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v10 = this;
  if ( (byte_49FD75D & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B64870(&StringLiteral_815/*")"*/, v11);
    this = (CharaGraphManager_o *)sub_1B64870(&StringLiteral_14649/*"UICommandGraphTexture("*/, v12);
    byte_49FD75D = 1;
  }
  if ( !userCommandCodeEntity )
    goto LABEL_9;
  v13 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeEntity->fields.commandCodeId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_61394836(
                                        (System_String_o *)StringLiteral_14649/*"UICommandGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_815/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B64ACC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand((UICharaGraphTexture_o *)v17, userCommandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_37600856(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CharaGraphManager_o *v17; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v19; // x2
  System_String_o *v20; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v10 = this;
  if ( (byte_49FD75E & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B64870(&StringLiteral_815/*")"*/, v11);
    this = (CharaGraphManager_o *)sub_1B64870(&StringLiteral_14649/*"UICommandGraphTexture("*/, v12);
    byte_49FD75E = 1;
  }
  if ( !userCommandCodeCollectionEntity )
    goto LABEL_9;
  v13 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeCollectionEntity->fields.commandCodeId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_61394836(
                                        (System_String_o *)StringLiteral_14649/*"UICommandGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_815/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B64ACC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand_40509904(
    (UICharaGraphTexture_o *)v17,
    userCommandCodeCollectionEntity,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_37601320(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CharaGraphManager_o *v17; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v19; // x2
  System_String_o *v20; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v10 = this;
  if ( (byte_49FD75F & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B64870(&StringLiteral_815/*")"*/, v11);
    this = (CharaGraphManager_o *)sub_1B64870(&StringLiteral_14649/*"UICommandGraphTexture("*/, v12);
    byte_49FD75F = 1;
  }
  if ( !commandCodeEntity )
    goto LABEL_9;
  v13 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &id,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        id = commandCodeEntity->fields.id,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_61394836(
                                        (System_String_o *)StringLiteral_14649/*"UICommandGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_815/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B64ACC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand_40510052((UICharaGraphTexture_o *)v17, commandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_37601784(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t commandCodeId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v10; // x1
  UnityEngine_Component_o *CommandTextureLocal; // x0
  __int64 v12; // x1
  UICharaGraphTexture_o *v13; // x21
  UnityEngine_Object_o *gameObject; // x22
  System_String_o *v15; // x0
  int32_t commandCodeIda; // [xsp+Ch] [xbp-34h] BYREF

  commandCodeIda = commandCodeId;
  if ( (byte_49FD760 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_815/*")"*/, parent);
    sub_1B64870(&StringLiteral_14649/*"UICommandGraphTexture("*/, v10);
    byte_49FD760 = 1;
  }
  CommandTextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateCommandTextureLocal(
                                                     this,
                                                     parent,
                                                     commandCodeId,
                                                     *(const MethodInfo **)&depth);
  if ( !CommandTextureLocal
    || (v13 = (UICharaGraphTexture_o *)CommandTextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(CommandTextureLocal, 0LL),
        v15 = System_Int32__ToString((int32_t)&commandCodeIda, 0LL),
        CommandTextureLocal = (UnityEngine_Component_o *)System_String__Concat_61394836(
                                                           (System_String_o *)StringLiteral_14649/*"UICommandGraphTexture("*/,
                                                           v15,
                                                           (System_String_o *)StringLiteral_815/*")"*/,
                                                           0LL),
        !gameObject) )
  {
    sub_1B64ACC(CommandTextureLocal, v12);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)CommandTextureLocal, 0LL);
  UICharaGraphTexture__SetCommand_40510200(v13, commandCodeIda, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth(v13, depth, 0LL);
  return v13;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTexturePrefab(
        UnityEngine_GameObject_o *parent,
        int32_t commandCodeId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_49FD751 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, *(_QWORD *)&commandCodeId);
    byte_49FD751 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_37601784(
           (CharaGraphManager_o *)Instance,
           parent,
           commandCodeId,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x0
  ServantEntity_o *v16; // x21
  UnityEngine_Object_c *v17; // x0
  Il2CppObject *charaGraphPrefab; // x21
  Il2CppObject *v19; // x22
  Il2CppObject *v20; // x20
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v26; // x1
  __int64 v27; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FD752 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantMaster___, parent);
    sub_1B64870(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___, v8);
    sub_1B64870(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B64870(&StringLiteral_14646/*"UICharaGraphTexture"*/, v12);
    byte_49FD752 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
LABEL_30:
    sub_1B64ACC(Instance, v14);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
  {
    v19 = 0LL;
    goto LABEL_14;
  }
  v16 = (ServantEntity_o *)Entity;
  if ( ServantEntity__get_IsEnemyCollectionDetail((ServantEntity_o *)Entity, 0LL) )
  {
    v17 = UnityEngine_Object_TypeInfo;
    charaGraphPrefab = (Il2CppObject *)this->fields.charaGraphPrefab;
  }
  else
  {
    v19 = 0LL;
    if ( !ServantEntity__get_IsServantEquip(v16, 0LL) )
      goto LABEL_14;
    v17 = UnityEngine_Object_TypeInfo;
    charaGraphPrefab = (Il2CppObject *)this->fields.charaEquipGraphPrefab;
  }
  if ( !v17->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v17);
  v19 = UnityEngine_Object__Instantiate_object_(
          charaGraphPrefab,
          (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
LABEL_14:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v20 = (Il2CppObject *)this->fields.charaGraphPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                  v20,
                                  (const MethodInfo_2EBDF7C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v19 = (Il2CppObject *)Instance;
  }
  if ( !v19 )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v19,
                       (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v19, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v19, 0LL);
  if ( !Instance )
    goto LABEL_30;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v19, (System_String_o *)StringLiteral_14646/*"UICharaGraphTexture"*/, 0LL);
  if ( !parent )
    goto LABEL_30;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_30;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)Instance, 0LL);
  if ( !byte_49F9201 )
  {
    sub_1B64870(&UnityEngine_Vector3_TypeInfo, v26);
    byte_49F9201 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_49F9207 )
  {
    sub_1B64870(&UnityEngine_Quaternion_TypeInfo, v27);
    byte_49F9207 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v30.fields.x = x;
  v30.fields.y = y;
  v30.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v30, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_object )
    goto LABEL_30;
  UICharaGraphRender__SetLayer((UICharaGraphRender_o *)Component_object, (int32_t)Instance, 0LL);
  return (UICharaGraphTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37594972(
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
  __int64 v17; // x1
  UnityEngine_Component_o *TextureLocal; // x0
  __int64 v19; // x1
  UICharaGraphTexture_o *v20; // x23
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *v22; // x25
  System_String_o *v23; // x0
  int32_t v25; // [xsp+8h] [xbp-58h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-54h] BYREF

  v25 = limitCount;
  v26 = svtId;
  if ( (byte_49FD753 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_14647/*"UICharaGraphTexture("*/, parent);
    sub_1B64870(&StringLiteral_815/*")"*/, v17);
    byte_49FD753 = 1;
  }
  TextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateTextureLocal(
                                              this,
                                              parent,
                                              svtId,
                                              *(const MethodInfo **)&limitCount);
  if ( !TextureLocal
    || (v20 = (UICharaGraphTexture_o *)TextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(TextureLocal, 0LL),
        v22 = System_Int32__ToString((int32_t)&v26, 0LL),
        v23 = System_Int32__ToString((int32_t)&v25, 0LL),
        TextureLocal = (UnityEngine_Component_o *)System_String__Concat_61396840(
                                                    (System_String_o *)StringLiteral_14647/*"UICharaGraphTexture("*/,
                                                    v22,
                                                    v23,
                                                    (System_String_o *)StringLiteral_815/*")"*/,
                                                    0LL),
        !gameObject) )
  {
    sub_1B64ACC(TextureLocal, v19);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)TextureLocal, 0LL);
  UICharaGraphTexture__SetCharacter(v20, v26, v25, exceedCount, isOwn, callbackFunc, isRealName, 0LL);
  UICharaGraphTexture__SetDepth(v20, depth, 0LL);
  return v20;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37595516(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t v15; // w0
  const MethodInfo *v16; // x3
  CharaGraphManager_o *v17; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v19; // x2
  System_String_o *v20; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v10 = this;
  if ( (byte_49FD754 & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B64870(&StringLiteral_14647/*"UICharaGraphTexture("*/, v11);
    this = (CharaGraphManager_o *)sub_1B64870(&StringLiteral_815/*")"*/, v12);
    byte_49FD754 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_9;
  v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        svtId = userSvtEntity->fields.svtId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_61394836(
                                        (System_String_o *)StringLiteral_14647/*"UICharaGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_815/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B64ACC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40507876((UICharaGraphTexture_o *)v17, userSvtEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37596132(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t isRealName,
        const MethodInfo *method)
{
  CharaGraphManager_o *v13; // x24
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x25
  __int64 v19; // x26
  int32_t v20; // w0
  const MethodInfo *v21; // x3
  CharaGraphManager_o *v22; // x23
  UnityEngine_Object_o *gameObject; // x24
  int32_t v24; // w2
  int32_t v25; // w3
  CharaGraphManager_o *v26; // x25
  int32_t v27; // w1
  const MethodInfo *v28; // x2
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_49FD755 & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B64870(&string___TypeInfo, v14);
    sub_1B64870(&StringLiteral_1013/*"-I"*/, v15);
    sub_1B64870(&StringLiteral_14647/*"UICharaGraphTexture("*/, v16);
    this = (CharaGraphManager_o *)sub_1B64870(&StringLiteral_815/*")"*/, v17);
    byte_49FD755 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_16;
  v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v18;
  *(_QWORD *)&v42.fields.fakeValue = v19;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v42, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v20, v21);
  if ( !this )
    goto LABEL_16;
  v22 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1B64918(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v26 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v27 = StringLiteral_14647/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14647/*"UICharaGraphTexture("*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.charaGraphPrefab, v27, v24, v25);
  *(_QWORD *)&v43.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v43.fields.fakeValue = 0LL;
  svtId = userSvtEntity->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v43, v28);
  if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v26->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v26->fields.charaEquipGraphPrefab, (int32_t)this, v29, v30);
  if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 2
    || (v33 = StringLiteral_1013/*"-I"*/,
        v26->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1013/*"-I"*/,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v26->fields.commandGraphPrefab, v33, v31, v32),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v26->fields.m_CancellationTokenSource) <= 3)
    || (v26[1].klass = (CharaGraphManager_c *)this,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v26[1], (int32_t)this, v34, v35),
        LODWORD(v26->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1B64AD4(this, parent);
  }
  v38 = StringLiteral_815/*")"*/;
  v26[1].monitor = (void *)StringLiteral_815/*")"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v26[1].monitor, v38, v36, v37);
  this = (CharaGraphManager_o *)System_String__Concat_61397104((System_String_array *)v26, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1B64ACC(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40508116(
    (UICharaGraphTexture_o *)v22,
    userSvtEntity,
    imageLimitCounta,
    callbackFunc,
    isRealName,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v22, depth, 0LL);
  return (UICharaGraphTexture_o *)v22;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37596836(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t v15; // w0
  const MethodInfo *v16; // x3
  CharaGraphManager_o *v17; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v19; // x2
  System_String_o *v20; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v10 = this;
  if ( (byte_49FD756 & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B64870(&StringLiteral_14647/*"UICharaGraphTexture("*/, v11);
    this = (CharaGraphManager_o *)sub_1B64870(&StringLiteral_815/*")"*/, v12);
    byte_49FD756 = 1;
  }
  if ( !userSvtCollectionEntity )
    goto LABEL_9;
  v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        svtId = userSvtCollectionEntity->fields.svtId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_61394836(
                                        (System_String_o *)StringLiteral_14647/*"UICharaGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_815/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B64ACC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40508372((UICharaGraphTexture_o *)v17, userSvtCollectionEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37597312(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v11; // x23
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x24
  __int64 v17; // x25
  int32_t v18; // w0
  const MethodInfo *v19; // x3
  CharaGraphManager_o *v20; // x22
  UnityEngine_Object_o *gameObject; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  CharaGraphManager_o *v24; // x24
  int32_t v25; // w1
  const MethodInfo *v26; // x2
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v11 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_49FD757 & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B64870(&string___TypeInfo, v12);
    sub_1B64870(&StringLiteral_1013/*"-I"*/, v13);
    sub_1B64870(&StringLiteral_14647/*"UICharaGraphTexture("*/, v14);
    this = (CharaGraphManager_o *)sub_1B64870(&StringLiteral_815/*")"*/, v15);
    byte_49FD757 = 1;
  }
  if ( !userSvtCollectionEntity )
    goto LABEL_16;
  v16 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v16;
  *(_QWORD *)&v40.fields.fakeValue = v17;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v40, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v11, parent, v18, v19);
  if ( !this )
    goto LABEL_16;
  v20 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1B64918(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v24 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v25 = StringLiteral_14647/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14647/*"UICharaGraphTexture("*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.charaGraphPrefab, v25, v22, v23);
  *(_QWORD *)&v41.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v41.fields.fakeValue = 0LL;
  svtId = userSvtCollectionEntity->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v41, v26);
  if ( LODWORD(v24->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v24->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v24->fields.charaEquipGraphPrefab, (int32_t)this, v27, v28);
  if ( LODWORD(v24->fields.m_CancellationTokenSource) <= 2
    || (v31 = StringLiteral_1013/*"-I"*/,
        v24->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1013/*"-I"*/,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v24->fields.commandGraphPrefab, v31, v29, v30),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v24->fields.m_CancellationTokenSource) <= 3)
    || (v24[1].klass = (CharaGraphManager_c *)this,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v24[1], (int32_t)this, v32, v33),
        LODWORD(v24->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1B64AD4(this, parent);
  }
  v36 = StringLiteral_815/*")"*/;
  v24[1].monitor = (void *)StringLiteral_815/*")"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v24[1].monitor, v36, v34, v35);
  this = (CharaGraphManager_o *)System_String__Concat_61397104((System_String_array *)v24, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1B64ACC(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40508628(
    (UICharaGraphTexture_o *)v20,
    userSvtCollectionEntity,
    imageLimitCounta,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v20, depth, 0LL);
  return (UICharaGraphTexture_o *)v20;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37598008(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t v15; // w0
  const MethodInfo *v16; // x3
  CharaGraphManager_o *v17; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v19; // x2
  System_String_o *v20; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v10 = this;
  if ( (byte_49FD758 & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B64870(&StringLiteral_14647/*"UICharaGraphTexture("*/, v11);
    this = (CharaGraphManager_o *)sub_1B64870(&StringLiteral_815/*")"*/, v12);
    byte_49FD758 = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_9;
  v13 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        svtId = servantLeaderInfo->fields.svtId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_61394836(
                                        (System_String_o *)StringLiteral_14647/*"UICharaGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_815/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B64ACC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40508896((UICharaGraphTexture_o *)v17, servantLeaderInfo, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37598484(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v11; // x23
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x24
  __int64 v17; // x25
  int32_t v18; // w0
  const MethodInfo *v19; // x3
  CharaGraphManager_o *v20; // x22
  UnityEngine_Object_o *gameObject; // x23
  int32_t v22; // w2
  int32_t v23; // w3
  CharaGraphManager_o *v24; // x24
  int32_t v25; // w1
  const MethodInfo *v26; // x2
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  v11 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_49FD759 & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B64870(&string___TypeInfo, v12);
    sub_1B64870(&StringLiteral_1013/*"-I"*/, v13);
    sub_1B64870(&StringLiteral_14647/*"UICharaGraphTexture("*/, v14);
    this = (CharaGraphManager_o *)sub_1B64870(&StringLiteral_815/*")"*/, v15);
    byte_49FD759 = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_16;
  v16 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v16;
  *(_QWORD *)&v40.fields.fakeValue = v17;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v40, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v11, parent, v18, v19);
  if ( !this )
    goto LABEL_16;
  v20 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1B64918(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v24 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v25 = StringLiteral_14647/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14647/*"UICharaGraphTexture("*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.charaGraphPrefab, v25, v22, v23);
  *(_QWORD *)&v41.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v41.fields.fakeValue = 0LL;
  svtId = servantLeaderInfo->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v41, v26);
  if ( LODWORD(v24->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v24->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v24->fields.charaEquipGraphPrefab, (int32_t)this, v27, v28);
  if ( LODWORD(v24->fields.m_CancellationTokenSource) <= 2
    || (v31 = StringLiteral_1013/*"-I"*/,
        v24->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1013/*"-I"*/,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v24->fields.commandGraphPrefab, v31, v29, v30),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v24->fields.m_CancellationTokenSource) <= 3)
    || (v24[1].klass = (CharaGraphManager_c *)this,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v24[1], (int32_t)this, v32, v33),
        LODWORD(v24->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1B64AD4(this, parent);
  }
  v36 = StringLiteral_815/*")"*/;
  v24[1].monitor = (void *)StringLiteral_815/*")"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v24[1].monitor, v36, v34, v35);
  this = (CharaGraphManager_o *)System_String__Concat_61397104((System_String_array *)v24, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1B64ACC(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40509096(
    (UICharaGraphTexture_o *)v20,
    servantLeaderInfo,
    imageLimitCounta,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v20, depth, 0LL);
  return (UICharaGraphTexture_o *)v20;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37599188(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        EquipTargetInfo_o *equipTargetInfo,
        int32_t depth,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v12; // x24
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x25
  __int64 v16; // x26
  int32_t v17; // w0
  const MethodInfo *v18; // x3
  CharaGraphManager_o *v19; // x23
  UnityEngine_Object_o *gameObject; // x24
  const MethodInfo *v21; // x2
  System_String_o *v22; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v12 = this;
  if ( (byte_49FD75A & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B64870(&StringLiteral_14647/*"UICharaGraphTexture("*/, v13);
    this = (CharaGraphManager_o *)sub_1B64870(&StringLiteral_815/*")"*/, v14);
    byte_49FD75A = 1;
  }
  if ( !equipTargetInfo )
    goto LABEL_9;
  v15 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  *(_QWORD *)&v25.fields.fakeValue = v16;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v25, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v12, parent, v17, v18);
  if ( !this
    || (v19 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v26.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v26.fields.fakeValue = 0LL,
        svtId = equipTargetInfo->fields.svtId,
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v21),
        this = (CharaGraphManager_o *)System_String__Concat_61394836(
                                        (System_String_o *)StringLiteral_14647/*"UICharaGraphTexture("*/,
                                        v22,
                                        (System_String_o *)StringLiteral_815/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B64ACC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40509320(
    (UICharaGraphTexture_o *)v19,
    equipTargetInfo,
    isNpcFollowerServantEquip,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v19, depth, 0LL);
  return (UICharaGraphTexture_o *)v19;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37599688(
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x25
  __int64 v19; // x26
  int32_t v20; // w0
  const MethodInfo *v21; // x3
  CharaGraphManager_o *v22; // x23
  UnityEngine_Object_o *gameObject; // x24
  int32_t v24; // w2
  int32_t v25; // w3
  CharaGraphManager_o *v26; // x25
  int32_t v27; // w1
  const MethodInfo *v28; // x2
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_49FD75B & 1) == 0 )
  {
    sub_1B64870(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B64870(&string___TypeInfo, v14);
    sub_1B64870(&StringLiteral_1013/*"-I"*/, v15);
    sub_1B64870(&StringLiteral_14647/*"UICharaGraphTexture("*/, v16);
    this = (CharaGraphManager_o *)sub_1B64870(&StringLiteral_815/*")"*/, v17);
    byte_49FD75B = 1;
  }
  if ( !equipTargetInfo )
    goto LABEL_16;
  v18 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v42.fields.currentCryptoKey = v18;
  *(_QWORD *)&v42.fields.fakeValue = v19;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46180532(v42, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v20, v21);
  if ( !this )
    goto LABEL_16;
  v22 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1B64918(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v26 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v27 = StringLiteral_14647/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14647/*"UICharaGraphTexture("*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.charaGraphPrefab, v27, v24, v25);
  *(_QWORD *)&v43.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v43.fields.fakeValue = 0LL;
  svtId = equipTargetInfo->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v43, v28);
  if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v26->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v26->fields.charaEquipGraphPrefab, (int32_t)this, v29, v30);
  if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 2
    || (v33 = StringLiteral_1013/*"-I"*/,
        v26->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1013/*"-I"*/,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v26->fields.commandGraphPrefab, v33, v31, v32),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v26->fields.m_CancellationTokenSource) <= 3)
    || (v26[1].klass = (CharaGraphManager_c *)this,
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v26[1], (int32_t)this, v34, v35),
        LODWORD(v26->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1B64AD4(this, parent);
  }
  v38 = StringLiteral_815/*")"*/;
  v26[1].monitor = (void *)StringLiteral_815/*")"*/;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v26[1].monitor, v38, v36, v37);
  this = (CharaGraphManager_o *)System_String__Concat_61397104((System_String_array *)v26, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1B64ACC(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40509516(
    (UICharaGraphTexture_o *)v22,
    equipTargetInfo,
    imageLimitCounta,
    isNpcFollowerServantEquip,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v22, depth, 0LL);
  return (UICharaGraphTexture_o *)v22;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab(
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

  if ( (byte_49FD744 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, *(_QWORD *)&svtId);
    byte_49FD744 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v18);
  return CharaGraphManager__CreateTextureLocal_37594972(
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


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37595288(
        UnityEngine_GameObject_o *parent,
        int64_t userSvtId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x22
  const MethodInfo *v15; // x5

  if ( (byte_49FD745 & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1B64870(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B64870(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, v11);
    byte_49FD745 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   userSvtId,
                   (const MethodInfo_30D632C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__)) == 0LL) )
  {
    sub_1B64ACC(Instance, v13);
  }
  return CharaGraphManager__CreateTextureLocal_37595516(
           (CharaGraphManager_o *)Instance,
           parent,
           (UserServantEntity_o *)Entity,
           depth,
           callbackFunc,
           v15);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37595860(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_49FD746 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtEntity);
    byte_49FD746 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_37595516(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37595984(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t isRealName,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x7

  if ( (byte_49FD747 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtEntity);
    byte_49FD747 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v14);
  return CharaGraphManager__CreateTextureLocal_37596132(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           isRealName,
           v15);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37596712(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_49FD748 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtCollectionEntity);
    byte_49FD748 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_37596836(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37597180(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x6

  if ( (byte_49FD749 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtCollectionEntity);
    byte_49FD749 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v12);
  return CharaGraphManager__CreateTextureLocal_37597312(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtCollectionEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           v13);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37597884(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_49FD74A & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, servantLeaderInfo);
    byte_49FD74A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_37598008(
           (CharaGraphManager_o *)Instance,
           parent,
           servantLeaderInfo,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37598352(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x6

  if ( (byte_49FD74B & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, servantLeaderInfo);
    byte_49FD74B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v12);
  return CharaGraphManager__CreateTextureLocal_37598484(
           (CharaGraphManager_o *)Instance,
           parent,
           servantLeaderInfo,
           imageLimitCount,
           depth,
           callbackFunc,
           v13);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37599056(
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

  if ( (byte_49FD74C & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, equipTargetInfo);
    byte_49FD74C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v12);
  return CharaGraphManager__CreateTextureLocal_37599188(
           (CharaGraphManager_o *)Instance,
           parent,
           equipTargetInfo,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v13);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37599540(
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

  if ( (byte_49FD74D & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, equipTargetInfo);
    byte_49FD74D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v14);
  return CharaGraphManager__CreateTextureLocal_37599688(
           (CharaGraphManager_o *)Instance,
           parent,
           equipTargetInfo,
           imageLimitCount,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v15);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37600268(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_49FD74E & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userCommandCodeEntity);
    byte_49FD74E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_37600392(
           (CharaGraphManager_o *)Instance,
           parent,
           userCommandCodeEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37600732(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_49FD74F & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userCommandCodeCollectionEntity);
    byte_49FD74F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_37600856(
           (CharaGraphManager_o *)Instance,
           parent,
           userCommandCodeCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37601196(
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_49FD750 & 1) == 0 )
  {
    sub_1B64870(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, commandCodeEntity);
    byte_49FD750 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64ACC(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_37601320(
           (CharaGraphManager_o *)Instance,
           parent,
           commandCodeEntity,
           depth,
           callbackFunc,
           v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphManager__DownloadAsset(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName; // x20

  if ( (byte_49FD73E & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_49FD73E = 1;
  }
  AssetName = CharaGraphManager__GetAssetName(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName, callback, 1, 0LL);
}


void __fastcall CharaGraphManager__DownloadCommandAsset(
        int32_t commandCodeId,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *CommandAssetName; // x20

  if ( (byte_49FD73F & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, callback);
    sub_1B64870(&UICharaGraphRender_TypeInfo, v5);
    byte_49FD73F = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(CommandAssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CharaGraphManager__GetAssetName(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  if ( (byte_49FD73A & 1) == 0 )
  {
    sub_1B64870(&UICharaGraphRender_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_49FD73A = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetAssetName_37593668(int32_t imageSvtId, const MethodInfo *method)
{
  if ( (byte_49FD73B & 1) == 0 )
  {
    sub_1B64870(&UICharaGraphRender_TypeInfo, method);
    byte_49FD73B = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetAssetName_40496328(imageSvtId, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  if ( (byte_49FD73C & 1) == 0 )
  {
    sub_1B64870(&UICharaGraphRender_TypeInfo, method);
    byte_49FD73C = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetExCharaGraphAssetName(int32_t svtId, const MethodInfo *method)
{
  if ( (byte_49FD73D & 1) == 0 )
  {
    sub_1B64870(&UICharaGraphRender_TypeInfo, method);
    byte_49FD73D = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetExCharaGraphAssetName(svtId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphManager__LoadAsset(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName; // x20

  if ( (byte_49FD740 & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_49FD740 = 1;
  }
  AssetName = CharaGraphManager__GetAssetName(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName, callback, 1, 0LL);
}


void __fastcall CharaGraphManager__LoadCommandAsset(
        int32_t commandCodeId,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *CommandAssetName; // x20

  if ( (byte_49FD741 & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, callback);
    sub_1B64870(&UICharaGraphRender_TypeInfo, v5);
    byte_49FD741 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(CommandAssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphManager__ReleaseAsset(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  System_String_o *AssetName; // x19

  if ( (byte_49FD742 & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_49FD742 = 1;
  }
  AssetName = CharaGraphManager__GetAssetName(svtId, imageLimitCount, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphManager__ReleaseCommandAsset(
        int32_t commandCodeId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *CommandAssetName; // x19

  if ( (byte_49FD743 & 1) == 0 )
  {
    sub_1B64870(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    sub_1B64870(&UICharaGraphRender_TypeInfo, v4);
    byte_49FD743 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(CommandAssetName, 0LL);
}