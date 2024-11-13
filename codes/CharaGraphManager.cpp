void __fastcall CharaGraphManager___ctor(CharaGraphManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1540A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CharaGraphManager___ctor__, method, v2);
    byte_4B1540A = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *commandGraphPrefab; // x20
  UnityEngine_GameObject_o *layer; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x22
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B15405 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___, parent, *(_QWORD *)&commandCodeId);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_14880/*"UICommandGraphTexture"*/, v10, v11);
    byte_4B15405 = 1;
  }
  commandGraphPrefab = (Il2CppObject *)this->fields.commandGraphPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent);
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        commandGraphPrefab,
                                        (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_15;
  v15 = layer;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       layer,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform(v15, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v15, 0LL);
  if ( !layer )
    goto LABEL_15;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v15, (System_String_o *)StringLiteral_14880/*"UICommandGraphTexture"*/, 0LL);
  if ( !parent )
    goto LABEL_15;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v21, v22);
    byte_4B109C1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B109C7 )
  {
    sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v23, v24);
    byte_4B109C7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v27, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_object )
LABEL_15:
    sub_1BCAA3C(layer, v14);
  UICharaGraphRender__SetLayer((UICharaGraphRender_o *)Component_object, (int32_t)layer, 0LL);
  return (UICharaGraphTexture_o *)Component_object;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_38626036(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x24
  __int64 v16; // x25
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CharaGraphManager_o *v19; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v21; // x2
  System_String_o *v22; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v10 = this;
  if ( (byte_4B15406 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent, userCommandCodeEntity);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v11, v12);
    this = (CharaGraphManager_o *)sub_1BCA7E0(&StringLiteral_14881/*"UICommandGraphTexture("*/, v13, v14);
    byte_4B15406 = 1;
  }
  if ( !userCommandCodeEntity )
    goto LABEL_9;
  v15 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  *(_QWORD *)&v25.fields.fakeValue = v16;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v17, v18);
  if ( !this
    || (v19 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v26.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v26.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeEntity->fields.commandCodeId,
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v21),
        this = (CharaGraphManager_o *)System_String__Concat_62412480(
                                        (System_String_o *)StringLiteral_14881/*"UICommandGraphTexture("*/,
                                        v22,
                                        (System_String_o *)StringLiteral_809/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1BCAA3C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand((UICharaGraphTexture_o *)v19, userCommandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v19, depth, 0LL);
  return (UICharaGraphTexture_o *)v19;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_38626500(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x24
  __int64 v16; // x25
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CharaGraphManager_o *v19; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v21; // x2
  System_String_o *v22; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v10 = this;
  if ( (byte_4B15407 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent, userCommandCodeCollectionEntity);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v11, v12);
    this = (CharaGraphManager_o *)sub_1BCA7E0(&StringLiteral_14881/*"UICommandGraphTexture("*/, v13, v14);
    byte_4B15407 = 1;
  }
  if ( !userCommandCodeCollectionEntity )
    goto LABEL_9;
  v15 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  *(_QWORD *)&v25.fields.fakeValue = v16;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v17, v18);
  if ( !this
    || (v19 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v26.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v26.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeCollectionEntity->fields.commandCodeId,
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v21),
        this = (CharaGraphManager_o *)System_String__Concat_62412480(
                                        (System_String_o *)StringLiteral_14881/*"UICommandGraphTexture("*/,
                                        v22,
                                        (System_String_o *)StringLiteral_809/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1BCAA3C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand_41559620(
    (UICharaGraphTexture_o *)v19,
    userCommandCodeCollectionEntity,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v19, depth, 0LL);
  return (UICharaGraphTexture_o *)v19;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_38626964(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x24
  __int64 v16; // x25
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CharaGraphManager_o *v19; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v21; // x2
  System_String_o *v22; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v10 = this;
  if ( (byte_4B15408 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent, commandCodeEntity);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v11, v12);
    this = (CharaGraphManager_o *)sub_1BCA7E0(&StringLiteral_14881/*"UICommandGraphTexture("*/, v13, v14);
    byte_4B15408 = 1;
  }
  if ( !commandCodeEntity )
    goto LABEL_9;
  v15 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v16 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  *(_QWORD *)&v25.fields.fakeValue = v16;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v17, v18);
  if ( !this
    || (v19 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v26.fields.currentCryptoKey = &id,
        *(_QWORD *)&v26.fields.fakeValue = 0LL,
        id = commandCodeEntity->fields.id,
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v21),
        this = (CharaGraphManager_o *)System_String__Concat_62412480(
                                        (System_String_o *)StringLiteral_14881/*"UICommandGraphTexture("*/,
                                        v22,
                                        (System_String_o *)StringLiteral_809/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1BCAA3C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand_41559764((UICharaGraphTexture_o *)v19, commandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v19, depth, 0LL);
  return (UICharaGraphTexture_o *)v19;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_38627428(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t commandCodeId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Component_o *CommandTextureLocal; // x0
  __int64 v13; // x1
  UICharaGraphTexture_o *v14; // x21
  UnityEngine_Object_o *gameObject; // x22
  System_String_o *v16; // x0
  int32_t commandCodeIda; // [xsp+Ch] [xbp-34h] BYREF

  commandCodeIda = commandCodeId;
  if ( (byte_4B15409 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_809/*")"*/, parent, *(_QWORD *)&commandCodeId);
    sub_1BCA7E0(&StringLiteral_14881/*"UICommandGraphTexture("*/, v10, v11);
    byte_4B15409 = 1;
  }
  CommandTextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateCommandTextureLocal(
                                                     this,
                                                     parent,
                                                     commandCodeId,
                                                     *(const MethodInfo **)&depth);
  if ( !CommandTextureLocal
    || (v14 = (UICharaGraphTexture_o *)CommandTextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(CommandTextureLocal, 0LL),
        v16 = System_Int32__ToString((int32_t)&commandCodeIda, 0LL),
        CommandTextureLocal = (UnityEngine_Component_o *)System_String__Concat_62412480(
                                                           (System_String_o *)StringLiteral_14881/*"UICommandGraphTexture("*/,
                                                           v16,
                                                           (System_String_o *)StringLiteral_809/*")"*/,
                                                           0LL),
        !gameObject) )
  {
    sub_1BCAA3C(CommandTextureLocal, v13);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)CommandTextureLocal, 0LL);
  UICharaGraphTexture__SetCommand_41559908(v14, commandCodeIda, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth(v14, depth, 0LL);
  return v14;
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

  if ( (byte_4B153FA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      *(_QWORD *)&commandCodeId,
      *(_QWORD *)&depth);
    byte_4B153FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_38627428(
           (CharaGraphManager_o *)Instance,
           parent,
           commandCodeId,
           depth,
           callbackFunc,
           v11);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  Il2CppObject *Entity; // x0
  __int64 v22; // x1
  ServantEntity_o *v23; // x21
  UnityEngine_Object_c *v24; // x0
  Il2CppObject *charaGraphPrefab; // x21
  Il2CppObject *v26; // x22
  Il2CppObject *v27; // x20
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B153FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, parent, *(_QWORD *)&svtId);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&StringLiteral_14878/*"UICharaGraphTexture"*/, v17, v18);
    byte_4B153FB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
LABEL_30:
    sub_1BCAA3C(Instance, v20);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
  {
    v26 = 0LL;
    goto LABEL_14;
  }
  v23 = (ServantEntity_o *)Entity;
  if ( ServantEntity__get_IsEnemyCollectionDetail((ServantEntity_o *)Entity, 0LL) )
  {
    v24 = UnityEngine_Object_TypeInfo;
    charaGraphPrefab = (Il2CppObject *)this->fields.charaGraphPrefab;
  }
  else
  {
    v26 = 0LL;
    if ( !ServantEntity__get_IsServantEquip(v23, 0LL) )
      goto LABEL_14;
    v24 = UnityEngine_Object_TypeInfo;
    charaGraphPrefab = (Il2CppObject *)this->fields.charaEquipGraphPrefab;
  }
  if ( !v24->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v24, v22);
  v26 = UnityEngine_Object__Instantiate_object_(
          charaGraphPrefab,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
LABEL_14:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  Instance = (DataManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v26, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v27 = (Il2CppObject *)this->fields.charaGraphPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                  v27,
                                  (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v26 = (Il2CppObject *)Instance;
  }
  if ( !v26 )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v26,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v26, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v26, 0LL);
  if ( !Instance )
    goto LABEL_30;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v26, (System_String_o *)StringLiteral_14878/*"UICharaGraphTexture"*/, 0LL);
  if ( !parent )
    goto LABEL_30;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_30;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)Instance, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v33, v34);
    byte_4B109C1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B109C7 )
  {
    sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, v35, v36);
    byte_4B109C7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v39.fields.x = x;
  v39.fields.y = y;
  v39.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v39, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_object )
    goto LABEL_30;
  UICharaGraphRender__SetLayer((UICharaGraphRender_o *)Component_object, (int32_t)Instance, 0LL);
  return (UICharaGraphTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_38620616(
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
  __int64 v18; // x2
  UnityEngine_Component_o *TextureLocal; // x0
  __int64 v20; // x1
  UICharaGraphTexture_o *v21; // x23
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *v23; // x25
  System_String_o *v24; // x0
  int32_t v26; // [xsp+8h] [xbp-58h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-54h] BYREF

  v26 = limitCount;
  v27 = svtId;
  if ( (byte_4B153FC & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_14879/*"UICharaGraphTexture("*/, parent, *(_QWORD *)&svtId);
    sub_1BCA7E0(&StringLiteral_809/*")"*/, v17, v18);
    byte_4B153FC = 1;
  }
  TextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateTextureLocal(
                                              this,
                                              parent,
                                              svtId,
                                              *(const MethodInfo **)&limitCount);
  if ( !TextureLocal
    || (v21 = (UICharaGraphTexture_o *)TextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(TextureLocal, 0LL),
        v23 = System_Int32__ToString((int32_t)&v27, 0LL),
        v24 = System_Int32__ToString((int32_t)&v26, 0LL),
        TextureLocal = (UnityEngine_Component_o *)System_String__Concat_62414484(
                                                    (System_String_o *)StringLiteral_14879/*"UICharaGraphTexture("*/,
                                                    v23,
                                                    v24,
                                                    (System_String_o *)StringLiteral_809/*")"*/,
                                                    0LL),
        !gameObject) )
  {
    sub_1BCAA3C(TextureLocal, v20);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)TextureLocal, 0LL);
  UICharaGraphTexture__SetCharacter(v21, v27, v26, exceedCount, isOwn, callbackFunc, isRealName, 0LL);
  UICharaGraphTexture__SetDepth(v21, depth, 0LL);
  return v21;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_38621160(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x24
  __int64 v16; // x25
  int32_t v17; // w0
  const MethodInfo *v18; // x3
  CharaGraphManager_o *v19; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v21; // x2
  System_String_o *v22; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v10 = this;
  if ( (byte_4B153FD & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent, userSvtEntity);
    sub_1BCA7E0(&StringLiteral_14879/*"UICharaGraphTexture("*/, v11, v12);
    this = (CharaGraphManager_o *)sub_1BCA7E0(&StringLiteral_809/*")"*/, v13, v14);
    byte_4B153FD = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_9;
  v15 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  *(_QWORD *)&v25.fields.fakeValue = v16;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v17, v18);
  if ( !this
    || (v19 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v26.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v26.fields.fakeValue = 0LL,
        svtId = userSvtEntity->fields.svtId,
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v21),
        this = (CharaGraphManager_o *)System_String__Concat_62412480(
                                        (System_String_o *)StringLiteral_14879/*"UICharaGraphTexture("*/,
                                        v22,
                                        (System_String_o *)StringLiteral_809/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1BCAA3C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_41557604((UICharaGraphTexture_o *)v19, userSvtEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v19, depth, 0LL);
  return (UICharaGraphTexture_o *)v19;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_38621776(
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x25
  __int64 v23; // x26
  int32_t v24; // w0
  const MethodInfo *v25; // x3
  CharaGraphManager_o *v26; // x23
  UnityEngine_Object_o *gameObject; // x24
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  CharaGraphManager_o *v34; // x25
  int64_t v35; // x1
  const MethodInfo *v36; // x2
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4B153FE & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent, userSvtEntity);
    sub_1BCA7E0(&string___TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_1008/*"-I"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_14879/*"UICharaGraphTexture("*/, v18, v19);
    this = (CharaGraphManager_o *)sub_1BCA7E0(&StringLiteral_809/*")"*/, v20, v21);
    byte_4B153FE = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_16;
  v22 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
  *(_QWORD *)&v66.fields.currentCryptoKey = v22;
  *(_QWORD *)&v66.fields.fakeValue = v23;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v24, v25);
  if ( !this )
    goto LABEL_16;
  v26 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1BCA888(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v34 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v35 = StringLiteral_14879/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14879/*"UICharaGraphTexture("*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.charaGraphPrefab, v35, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)&v67.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v67.fields.fakeValue = 0LL;
  svtId = userSvtEntity->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v67, v36);
  if ( LODWORD(v34->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v34->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v34->fields.charaEquipGraphPrefab,
    (int64_t)this,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( LODWORD(v34->fields.m_CancellationTokenSource) <= 2
    || (v49 = StringLiteral_1008/*"-I"*/,
        v34->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1008/*"-I"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)&v34->fields.commandGraphPrefab, v49, v43, v44, v45, v46, v47, v48),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v34->fields.m_CancellationTokenSource) <= 3)
    || (v34[1].klass = (CharaGraphManager_c *)this,
        sub_1BCA784((PartyOrganizationUtility_o *)&v34[1], (int64_t)this, v50, v51, v52, v53, v54, v55),
        LODWORD(v34->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1BCAA44(this, parent);
  }
  v62 = StringLiteral_809/*")"*/;
  v34[1].monitor = (void *)StringLiteral_809/*")"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v34[1].monitor, v62, v56, v57, v58, v59, v60, v61);
  this = (CharaGraphManager_o *)System_String__Concat_62414748((System_String_array *)v34, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1BCAA3C(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_41557848(
    (UICharaGraphTexture_o *)v26,
    userSvtEntity,
    imageLimitCounta,
    callbackFunc,
    isRealName,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v26, depth, 0LL);
  return (UICharaGraphTexture_o *)v26;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_38622480(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x24
  __int64 v16; // x25
  int32_t v17; // w0
  const MethodInfo *v18; // x3
  CharaGraphManager_o *v19; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v21; // x2
  System_String_o *v22; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v10 = this;
  if ( (byte_4B153FF & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent, userSvtCollectionEntity);
    sub_1BCA7E0(&StringLiteral_14879/*"UICharaGraphTexture("*/, v11, v12);
    this = (CharaGraphManager_o *)sub_1BCA7E0(&StringLiteral_809/*")"*/, v13, v14);
    byte_4B153FF = 1;
  }
  if ( !userSvtCollectionEntity )
    goto LABEL_9;
  v15 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  *(_QWORD *)&v25.fields.fakeValue = v16;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v17, v18);
  if ( !this
    || (v19 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v26.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v26.fields.fakeValue = 0LL,
        svtId = userSvtCollectionEntity->fields.svtId,
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v21),
        this = (CharaGraphManager_o *)System_String__Concat_62412480(
                                        (System_String_o *)StringLiteral_14879/*"UICharaGraphTexture("*/,
                                        v22,
                                        (System_String_o *)StringLiteral_809/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1BCAA3C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_41558108((UICharaGraphTexture_o *)v19, userSvtCollectionEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v19, depth, 0LL);
  return (UICharaGraphTexture_o *)v19;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_38622956(
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x24
  __int64 v21; // x25
  int32_t v22; // w0
  const MethodInfo *v23; // x3
  CharaGraphManager_o *v24; // x22
  UnityEngine_Object_o *gameObject; // x23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  CharaGraphManager_o *v32; // x24
  int64_t v33; // x1
  const MethodInfo *v34; // x2
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  v11 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4B15400 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent, userSvtCollectionEntity);
    sub_1BCA7E0(&string___TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_1008/*"-I"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_14879/*"UICharaGraphTexture("*/, v16, v17);
    this = (CharaGraphManager_o *)sub_1BCA7E0(&StringLiteral_809/*")"*/, v18, v19);
    byte_4B15400 = 1;
  }
  if ( !userSvtCollectionEntity )
    goto LABEL_16;
  v20 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
  *(_QWORD *)&v64.fields.currentCryptoKey = v20;
  *(_QWORD *)&v64.fields.fakeValue = v21;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v64, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v11, parent, v22, v23);
  if ( !this )
    goto LABEL_16;
  v24 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1BCA888(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v32 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v33 = StringLiteral_14879/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14879/*"UICharaGraphTexture("*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.charaGraphPrefab, v33, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)&v65.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v65.fields.fakeValue = 0LL;
  svtId = userSvtCollectionEntity->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v65, v34);
  if ( LODWORD(v32->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v32->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v32->fields.charaEquipGraphPrefab,
    (int64_t)this,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( LODWORD(v32->fields.m_CancellationTokenSource) <= 2
    || (v47 = StringLiteral_1008/*"-I"*/,
        v32->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1008/*"-I"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)&v32->fields.commandGraphPrefab, v47, v41, v42, v43, v44, v45, v46),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v32->fields.m_CancellationTokenSource) <= 3)
    || (v32[1].klass = (CharaGraphManager_c *)this,
        sub_1BCA784((PartyOrganizationUtility_o *)&v32[1], (int64_t)this, v48, v49, v50, v51, v52, v53),
        LODWORD(v32->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1BCAA44(this, parent);
  }
  v60 = StringLiteral_809/*")"*/;
  v32[1].monitor = (void *)StringLiteral_809/*")"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v32[1].monitor, v60, v54, v55, v56, v57, v58, v59);
  this = (CharaGraphManager_o *)System_String__Concat_62414748((System_String_array *)v32, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1BCAA3C(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_41558360(
    (UICharaGraphTexture_o *)v24,
    userSvtCollectionEntity,
    imageLimitCounta,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v24, depth, 0LL);
  return (UICharaGraphTexture_o *)v24;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_38623652(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x24
  __int64 v16; // x25
  int32_t v17; // w0
  const MethodInfo *v18; // x3
  CharaGraphManager_o *v19; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v21; // x2
  System_String_o *v22; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v10 = this;
  if ( (byte_4B15401 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent, servantLeaderInfo);
    sub_1BCA7E0(&StringLiteral_14879/*"UICharaGraphTexture("*/, v11, v12);
    this = (CharaGraphManager_o *)sub_1BCA7E0(&StringLiteral_809/*")"*/, v13, v14);
    byte_4B15401 = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_9;
  v15 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  *(_QWORD *)&v25.fields.fakeValue = v16;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v25, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v17, v18);
  if ( !this
    || (v19 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v26.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v26.fields.fakeValue = 0LL,
        svtId = servantLeaderInfo->fields.svtId,
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v21),
        this = (CharaGraphManager_o *)System_String__Concat_62412480(
                                        (System_String_o *)StringLiteral_14879/*"UICharaGraphTexture("*/,
                                        v22,
                                        (System_String_o *)StringLiteral_809/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1BCAA3C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_41558624((UICharaGraphTexture_o *)v19, servantLeaderInfo, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v19, depth, 0LL);
  return (UICharaGraphTexture_o *)v19;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_38624128(
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x24
  __int64 v21; // x25
  int32_t v22; // w0
  const MethodInfo *v23; // x3
  CharaGraphManager_o *v24; // x22
  UnityEngine_Object_o *gameObject; // x23
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  CharaGraphManager_o *v32; // x24
  int64_t v33; // x1
  const MethodInfo *v34; // x2
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  v11 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4B15402 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent, servantLeaderInfo);
    sub_1BCA7E0(&string___TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_1008/*"-I"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_14879/*"UICharaGraphTexture("*/, v16, v17);
    this = (CharaGraphManager_o *)sub_1BCA7E0(&StringLiteral_809/*")"*/, v18, v19);
    byte_4B15402 = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_16;
  v20 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
  *(_QWORD *)&v64.fields.currentCryptoKey = v20;
  *(_QWORD *)&v64.fields.fakeValue = v21;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v64, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v11, parent, v22, v23);
  if ( !this )
    goto LABEL_16;
  v24 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1BCA888(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v32 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v33 = StringLiteral_14879/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14879/*"UICharaGraphTexture("*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.charaGraphPrefab, v33, v26, v27, v28, v29, v30, v31);
  *(_QWORD *)&v65.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v65.fields.fakeValue = 0LL;
  svtId = servantLeaderInfo->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v65, v34);
  if ( LODWORD(v32->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v32->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v32->fields.charaEquipGraphPrefab,
    (int64_t)this,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( LODWORD(v32->fields.m_CancellationTokenSource) <= 2
    || (v47 = StringLiteral_1008/*"-I"*/,
        v32->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1008/*"-I"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)&v32->fields.commandGraphPrefab, v47, v41, v42, v43, v44, v45, v46),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v32->fields.m_CancellationTokenSource) <= 3)
    || (v32[1].klass = (CharaGraphManager_c *)this,
        sub_1BCA784((PartyOrganizationUtility_o *)&v32[1], (int64_t)this, v48, v49, v50, v51, v52, v53),
        LODWORD(v32->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1BCAA44(this, parent);
  }
  v60 = StringLiteral_809/*")"*/;
  v32[1].monitor = (void *)StringLiteral_809/*")"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v32[1].monitor, v60, v54, v55, v56, v57, v58, v59);
  this = (CharaGraphManager_o *)System_String__Concat_62414748((System_String_array *)v32, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1BCAA3C(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_41558820(
    (UICharaGraphTexture_o *)v24,
    servantLeaderInfo,
    imageLimitCounta,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v24, depth, 0LL);
  return (UICharaGraphTexture_o *)v24;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_38624832(
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x25
  __int64 v18; // x26
  int32_t v19; // w0
  const MethodInfo *v20; // x3
  CharaGraphManager_o *v21; // x23
  UnityEngine_Object_o *gameObject; // x24
  const MethodInfo *v23; // x2
  System_String_o *v24; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v12 = this;
  if ( (byte_4B15403 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent, equipTargetInfo);
    sub_1BCA7E0(&StringLiteral_14879/*"UICharaGraphTexture("*/, v13, v14);
    this = (CharaGraphManager_o *)sub_1BCA7E0(&StringLiteral_809/*")"*/, v15, v16);
    byte_4B15403 = 1;
  }
  if ( !equipTargetInfo )
    goto LABEL_9;
  v17 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
  *(_QWORD *)&v27.fields.currentCryptoKey = v17;
  *(_QWORD *)&v27.fields.fakeValue = v18;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v27, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v12, parent, v19, v20);
  if ( !this
    || (v21 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v28.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v28.fields.fakeValue = 0LL,
        svtId = equipTargetInfo->fields.svtId,
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v28, v23),
        this = (CharaGraphManager_o *)System_String__Concat_62412480(
                                        (System_String_o *)StringLiteral_14879/*"UICharaGraphTexture("*/,
                                        v24,
                                        (System_String_o *)StringLiteral_809/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1BCAA3C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_41559048(
    (UICharaGraphTexture_o *)v21,
    equipTargetInfo,
    isNpcFollowerServantEquip,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v21, depth, 0LL);
  return (UICharaGraphTexture_o *)v21;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_38625332(
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
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x25
  __int64 v23; // x26
  int32_t v24; // w0
  const MethodInfo *v25; // x3
  CharaGraphManager_o *v26; // x23
  UnityEngine_Object_o *gameObject; // x24
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  CharaGraphManager_o *v34; // x25
  int64_t v35; // x1
  const MethodInfo *v36; // x2
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4B15404 & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent, equipTargetInfo);
    sub_1BCA7E0(&string___TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_1008/*"-I"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_14879/*"UICharaGraphTexture("*/, v18, v19);
    this = (CharaGraphManager_o *)sub_1BCA7E0(&StringLiteral_809/*")"*/, v20, v21);
    byte_4B15404 = 1;
  }
  if ( !equipTargetInfo )
    goto LABEL_16;
  v22 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
  *(_QWORD *)&v66.fields.currentCryptoKey = v22;
  *(_QWORD *)&v66.fields.fakeValue = v23;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v66, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v24, v25);
  if ( !this )
    goto LABEL_16;
  v26 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1BCA888(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v34 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v35 = StringLiteral_14879/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14879/*"UICharaGraphTexture("*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.charaGraphPrefab, v35, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)&v67.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v67.fields.fakeValue = 0LL;
  svtId = equipTargetInfo->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v67, v36);
  if ( LODWORD(v34->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v34->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v34->fields.charaEquipGraphPrefab,
    (int64_t)this,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  if ( LODWORD(v34->fields.m_CancellationTokenSource) <= 2
    || (v49 = StringLiteral_1008/*"-I"*/,
        v34->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1008/*"-I"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)&v34->fields.commandGraphPrefab, v49, v43, v44, v45, v46, v47, v48),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v34->fields.m_CancellationTokenSource) <= 3)
    || (v34[1].klass = (CharaGraphManager_c *)this,
        sub_1BCA784((PartyOrganizationUtility_o *)&v34[1], (int64_t)this, v50, v51, v52, v53, v54, v55),
        LODWORD(v34->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1BCAA44(this, parent);
  }
  v62 = StringLiteral_809/*")"*/;
  v34[1].monitor = (void *)StringLiteral_809/*")"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v34[1].monitor, v62, v56, v57, v58, v59, v60, v61);
  this = (CharaGraphManager_o *)System_String__Concat_62414748((System_String_array *)v34, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1BCAA3C(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_41559240(
    (UICharaGraphTexture_o *)v26,
    equipTargetInfo,
    imageLimitCounta,
    isNpcFollowerServantEquip,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v26, depth, 0LL);
  return (UICharaGraphTexture_o *)v26;
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

  if ( (byte_4B153ED & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      *(_QWORD *)&svtId,
      *(_QWORD *)&limitCount);
    byte_4B153ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v18);
  return CharaGraphManager__CreateTextureLocal_38620616(
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


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_38620932(
        UnityEngine_GameObject_o *parent,
        int64_t userSvtId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *Entity; // x22
  const MethodInfo *v18; // x5

  if ( (byte_4B153EE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, *(_QWORD *)&depth);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, v13, v14);
    byte_4B153EE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   userSvtId,
                   (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v16);
  }
  return CharaGraphManager__CreateTextureLocal_38621160(
           (CharaGraphManager_o *)Instance,
           parent,
           (UserServantEntity_o *)Entity,
           depth,
           callbackFunc,
           v18);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_38621504(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B153EF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtEntity, *(_QWORD *)&depth);
    byte_4B153EF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_38621160(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtEntity,
           depth,
           callbackFunc,
           v11);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_38621628(
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

  if ( (byte_4B153F0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      userSvtEntity,
      *(_QWORD *)&imageLimitCount);
    byte_4B153F0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v14);
  return CharaGraphManager__CreateTextureLocal_38621776(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           isRealName,
           v15);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_38622356(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B153F1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      userSvtCollectionEntity,
      *(_QWORD *)&depth);
    byte_4B153F1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_38622480(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_38622824(
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

  if ( (byte_4B153F2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      userSvtCollectionEntity,
      *(_QWORD *)&imageLimitCount);
    byte_4B153F2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v12);
  return CharaGraphManager__CreateTextureLocal_38622956(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtCollectionEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           v13);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_38623528(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B153F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, servantLeaderInfo, *(_QWORD *)&depth);
    byte_4B153F3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_38623652(
           (CharaGraphManager_o *)Instance,
           parent,
           servantLeaderInfo,
           depth,
           callbackFunc,
           v11);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_38623996(
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

  if ( (byte_4B153F4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      servantLeaderInfo,
      *(_QWORD *)&imageLimitCount);
    byte_4B153F4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v12);
  return CharaGraphManager__CreateTextureLocal_38624128(
           (CharaGraphManager_o *)Instance,
           parent,
           servantLeaderInfo,
           imageLimitCount,
           depth,
           callbackFunc,
           v13);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_38624700(
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

  if ( (byte_4B153F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, equipTargetInfo, *(_QWORD *)&depth);
    byte_4B153F5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v12);
  return CharaGraphManager__CreateTextureLocal_38624832(
           (CharaGraphManager_o *)Instance,
           parent,
           equipTargetInfo,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v13);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_38625184(
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

  if ( (byte_4B153F6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      equipTargetInfo,
      *(_QWORD *)&imageLimitCount);
    byte_4B153F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v14);
  return CharaGraphManager__CreateTextureLocal_38625332(
           (CharaGraphManager_o *)Instance,
           parent,
           equipTargetInfo,
           imageLimitCount,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v15);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_38625912(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B153F7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      userCommandCodeEntity,
      *(_QWORD *)&depth);
    byte_4B153F7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_38626036(
           (CharaGraphManager_o *)Instance,
           parent,
           userCommandCodeEntity,
           depth,
           callbackFunc,
           v11);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_38626376(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B153F8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      userCommandCodeCollectionEntity,
      *(_QWORD *)&depth);
    byte_4B153F8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_38626500(
           (CharaGraphManager_o *)Instance,
           parent,
           userCommandCodeCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_38626840(
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B153F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, commandCodeEntity, *(_QWORD *)&depth);
    byte_4B153F9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_38626964(
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
  __int64 v7; // x1
  System_String_o *AssetName; // x20

  if ( (byte_4B153E7 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount, callback);
    byte_4B153E7 = 1;
  }
  AssetName = CharaGraphManager__GetAssetName(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
  AssetManager__downloadAssetStorage(AssetName, callback, 1, 0LL);
}


void __fastcall CharaGraphManager__DownloadCommandAsset(
        int32_t commandCodeId,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *CommandAssetName; // x20

  if ( (byte_4B153E8 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, callback, method);
    sub_1BCA7E0(&UICharaGraphRender_TypeInfo, v5, v6);
    byte_4B153E8 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo, callback);
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
  AssetManager__downloadAssetStorage(CommandAssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CharaGraphManager__GetAssetName(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4B153E3 & 1) == 0 )
  {
    sub_1BCA7E0(&UICharaGraphRender_TypeInfo, *(_QWORD *)&imageLimitCount, method);
    byte_4B153E3 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo, *(_QWORD *)&imageLimitCount);
  return UICharaGraphRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetAssetName_38619312(int32_t imageSvtId, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B153E4 & 1) == 0 )
  {
    sub_1BCA7E0(&UICharaGraphRender_TypeInfo, method, v2);
    byte_4B153E4 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo, method);
  return UICharaGraphRender__GetAssetName_41546064(imageSvtId, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B153E5 & 1) == 0 )
  {
    sub_1BCA7E0(&UICharaGraphRender_TypeInfo, method, v2);
    byte_4B153E5 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo, method);
  return UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetExCharaGraphAssetName(int32_t svtId, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B153E6 & 1) == 0 )
  {
    sub_1BCA7E0(&UICharaGraphRender_TypeInfo, method, v2);
    byte_4B153E6 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo, method);
  return UICharaGraphRender__GetExCharaGraphAssetName(svtId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphManager__LoadAsset(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *AssetName; // x20

  if ( (byte_4B153E9 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount, callback);
    byte_4B153E9 = 1;
  }
  AssetName = CharaGraphManager__GetAssetName(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
  AssetManager__loadAssetStorage(AssetName, callback, 1, 0LL);
}


void __fastcall CharaGraphManager__LoadCommandAsset(
        int32_t commandCodeId,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *CommandAssetName; // x20

  if ( (byte_4B153EA & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, callback, method);
    sub_1BCA7E0(&UICharaGraphRender_TypeInfo, v5, v6);
    byte_4B153EA = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo, callback);
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
  AssetManager__loadAssetStorage(CommandAssetName, callback, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphManager__ReleaseAsset(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *AssetName; // x19

  if ( (byte_4B153EB & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount, method);
    byte_4B153EB = 1;
  }
  AssetName = CharaGraphManager__GetAssetName(svtId, imageLimitCount, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
  AssetManager__releaseAssetStorage(AssetName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphManager__ReleaseCommandAsset(
        int32_t commandCodeId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  System_String_o *CommandAssetName; // x19

  if ( (byte_4B153EC & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount, method);
    sub_1BCA7E0(&UICharaGraphRender_TypeInfo, v4, v5);
    byte_4B153EC = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo, *(_QWORD *)&imageLimitCount);
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6);
  AssetManager__releaseAssetStorage(CommandAssetName, 0LL);
}