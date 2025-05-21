void __fastcall CharaGraphManager___ctor(CharaGraphManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B43C1B & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CharaGraphManager___ctor__, method);
    byte_4B43C1B = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39166A0 *)Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
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

  if ( (byte_4B43C16 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___, parent);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_14700/*"UICommandGraphTexture"*/, v8);
    byte_4B43C16 = 1;
  }
  commandGraphPrefab = (Il2CppObject *)this->fields.commandGraphPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        commandGraphPrefab,
                                        (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_15;
  v12 = layer;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       layer,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform(v12, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v12, 0LL);
  if ( !layer )
    goto LABEL_15;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v12, (System_String_o *)StringLiteral_14700/*"UICommandGraphTexture"*/, 0LL);
  if ( !parent )
    goto LABEL_15;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0LL);
  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v18);
    byte_4B3E911 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B3E917 )
  {
    sub_1BDB878(&UnityEngine_Quaternion_TypeInfo, v19);
    byte_4B3E917 = 1;
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
    sub_1BDBAD4(layer, v11);
  UICharaGraphRender__SetLayer((UICharaGraphRender_o *)Component_object, (int32_t)layer, 0LL);
  return (UICharaGraphTexture_o *)Component_object;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_39683112(
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
  if ( (byte_4B43C17 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1BDB878(&StringLiteral_767/*")"*/, v11);
    this = (CharaGraphManager_o *)sub_1BDB878(&StringLiteral_14701/*"UICommandGraphTexture("*/, v12);
    byte_4B43C17 = 1;
  }
  if ( !userCommandCodeEntity )
    goto LABEL_9;
  v13 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeEntity->fields.commandCodeId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_62610508(
                                        (System_String_o *)StringLiteral_14701/*"UICommandGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_767/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1BDBAD4(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand((UICharaGraphTexture_o *)v17, userCommandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_39683576(
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
  if ( (byte_4B43C18 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1BDB878(&StringLiteral_767/*")"*/, v11);
    this = (CharaGraphManager_o *)sub_1BDB878(&StringLiteral_14701/*"UICommandGraphTexture("*/, v12);
    byte_4B43C18 = 1;
  }
  if ( !userCommandCodeCollectionEntity )
    goto LABEL_9;
  v13 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeCollectionEntity->fields.commandCodeId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_62610508(
                                        (System_String_o *)StringLiteral_14701/*"UICommandGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_767/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1BDBAD4(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand_42854168(
    (UICharaGraphTexture_o *)v17,
    userCommandCodeCollectionEntity,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_39684040(
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
  if ( (byte_4B43C19 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1BDB878(&StringLiteral_767/*")"*/, v11);
    this = (CharaGraphManager_o *)sub_1BDB878(&StringLiteral_14701/*"UICommandGraphTexture("*/, v12);
    byte_4B43C19 = 1;
  }
  if ( !commandCodeEntity )
    goto LABEL_9;
  v13 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &id,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        id = commandCodeEntity->fields.id,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_62610508(
                                        (System_String_o *)StringLiteral_14701/*"UICommandGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_767/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1BDBAD4(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand_42854312((UICharaGraphTexture_o *)v17, commandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_39684504(
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
  if ( (byte_4B43C1A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_767/*")"*/, parent);
    sub_1BDB878(&StringLiteral_14701/*"UICommandGraphTexture("*/, v10);
    byte_4B43C1A = 1;
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
        CommandTextureLocal = (UnityEngine_Component_o *)System_String__Concat_62610508(
                                                           (System_String_o *)StringLiteral_14701/*"UICommandGraphTexture("*/,
                                                           v15,
                                                           (System_String_o *)StringLiteral_767/*")"*/,
                                                           0LL),
        !gameObject) )
  {
    sub_1BDBAD4(CommandTextureLocal, v12);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)CommandTextureLocal, 0LL);
  UICharaGraphTexture__SetCommand_42854456(v13, commandCodeIda, callbackFunc, 0LL);
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

  if ( (byte_4B43C0B & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, *(_QWORD *)&commandCodeId);
    byte_4B43C0B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_39684504(
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

  if ( (byte_4B43C0C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantMaster___, parent);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___, v8);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BDB878(&StringLiteral_14698/*"UICharaGraphTexture"*/, v12);
    byte_4B43C0C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
LABEL_30:
    sub_1BDBAD4(Instance, v14);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_32E1E3C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
          (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
                                  (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v19 = (Il2CppObject *)Instance;
  }
  if ( !v19 )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v19,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v19, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v19, 0LL);
  if ( !Instance )
    goto LABEL_30;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v19, (System_String_o *)StringLiteral_14698/*"UICharaGraphTexture"*/, 0LL);
  if ( !parent )
    goto LABEL_30;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_30;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)Instance, 0LL);
  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v26);
    byte_4B3E911 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B3E917 )
  {
    sub_1BDB878(&UnityEngine_Quaternion_TypeInfo, v27);
    byte_4B3E917 = 1;
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
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_39677512(
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
  if ( (byte_4B43C0D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_14699/*"UICharaGraphTexture("*/, parent);
    sub_1BDB878(&StringLiteral_767/*")"*/, v17);
    byte_4B43C0D = 1;
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
        TextureLocal = (UnityEngine_Component_o *)System_String__Concat_62612512(
                                                    (System_String_o *)StringLiteral_14699/*"UICharaGraphTexture("*/,
                                                    v22,
                                                    v23,
                                                    (System_String_o *)StringLiteral_767/*")"*/,
                                                    0LL),
        !gameObject) )
  {
    sub_1BDBAD4(TextureLocal, v19);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)TextureLocal, 0LL);
  UICharaGraphTexture__SetCharacter(v20, v26, v25, exceedCount, isOwn, callbackFunc, isRealName, 0LL);
  UICharaGraphTexture__SetDepth(v20, depth, 0LL);
  return v20;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_39678056(
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
  if ( (byte_4B43C0E & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1BDB878(&StringLiteral_14699/*"UICharaGraphTexture("*/, v11);
    this = (CharaGraphManager_o *)sub_1BDB878(&StringLiteral_767/*")"*/, v12);
    byte_4B43C0E = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_9;
  v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        svtId = userSvtEntity->fields.svtId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_62610508(
                                        (System_String_o *)StringLiteral_14699/*"UICharaGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_767/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1BDBAD4(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_42851356((UICharaGraphTexture_o *)v17, userSvtEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_39678724(
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x26
  __int64 v23; // x27
  int32_t v24; // w0
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UnityEngine_Component_o *v28; // x23
  UnityEngine_Object_o *gameObject; // x24
  __int64 v30; // x2
  const MethodInfo *v31; // x3
  CharaGraphManager_o *v32; // x25
  int32_t v33; // w1
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16

  v17 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4B43C0F & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1BDB878(&string___TypeInfo, v18);
    sub_1BDB878(&StringLiteral_961/*"-I"*/, v19);
    sub_1BDB878(&StringLiteral_14699/*"UICharaGraphTexture("*/, v20);
    this = (CharaGraphManager_o *)sub_1BDB878(&StringLiteral_767/*")"*/, v21);
    byte_4B43C0F = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_16;
  v22 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v44.fields.currentCryptoKey = v22;
  *(_QWORD *)&v44.fields.fakeValue = v23;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v44, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v17, parent, v24, v25);
  if ( !this )
    goto LABEL_16;
  v28 = (UnityEngine_Component_o *)this;
  this[9].fields.m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o *)overwriteStatus;
  sub_1BDB81C((CGThumbnailListItem_o *)&this[9].fields.m_CancellationTokenSource, (int32_t)overwriteStatus, v26, v27);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v28, 0LL);
  this = (CharaGraphManager_o *)sub_1BDB920(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v32 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v33 = StringLiteral_14699/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14699/*"UICharaGraphTexture("*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.charaGraphPrefab, v33, v30, v31);
  *(_QWORD *)&v45.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v45.fields.fakeValue = 0LL;
  svtId = userSvtEntity->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v45, v34);
  if ( LODWORD(v32->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v32->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v32->fields.charaEquipGraphPrefab, (int32_t)this, v30, v35);
  if ( LODWORD(v32->fields.m_CancellationTokenSource) <= 2
    || (v37 = StringLiteral_961/*"-I"*/,
        v32->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_961/*"-I"*/,
        sub_1BDB81C((CGThumbnailListItem_o *)&v32->fields.commandGraphPrefab, v37, v30, v36),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v32->fields.m_CancellationTokenSource) <= 3)
    || (v32[1].klass = (CharaGraphManager_c *)this,
        sub_1BDB81C((CGThumbnailListItem_o *)&v32[1], (int32_t)this, v30, v38),
        LODWORD(v32->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1BDBADC(this, parent, v30);
  }
  v40 = StringLiteral_767/*")"*/;
  v32[1].monitor = (void *)StringLiteral_767/*")"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v32[1].monitor, v40, v30, v39);
  this = (CharaGraphManager_o *)System_String__Concat_62612776((System_String_array *)v32, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1BDBAD4(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_42851736(
    (UICharaGraphTexture_o *)v28,
    userSvtEntity,
    imageLimitCounta,
    callbackFunc,
    isRealName,
    isDisableGrand,
    isGrand,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v28, depth, 0LL);
  return (UICharaGraphTexture_o *)v28;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_39679476(
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
  if ( (byte_4B43C10 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1BDB878(&StringLiteral_14699/*"UICharaGraphTexture("*/, v11);
    this = (CharaGraphManager_o *)sub_1BDB878(&StringLiteral_767/*")"*/, v12);
    byte_4B43C10 = 1;
  }
  if ( !userSvtCollectionEntity )
    goto LABEL_9;
  v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        svtId = userSvtCollectionEntity->fields.svtId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_62610508(
                                        (System_String_o *)StringLiteral_14699/*"UICharaGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_767/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1BDBAD4(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_42852316((UICharaGraphTexture_o *)v17, userSvtCollectionEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_39679968(
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x25
  __int64 v19; // x26
  int32_t v20; // w0
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UnityEngine_Component_o *v24; // x22
  UnityEngine_Object_o *gameObject; // x23
  __int64 v26; // x2
  const MethodInfo *v27; // x3
  CharaGraphManager_o *v28; // x24
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

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4B43C11 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1BDB878(&string___TypeInfo, v14);
    sub_1BDB878(&StringLiteral_961/*"-I"*/, v15);
    sub_1BDB878(&StringLiteral_14699/*"UICharaGraphTexture("*/, v16);
    this = (CharaGraphManager_o *)sub_1BDB878(&StringLiteral_767/*")"*/, v17);
    byte_4B43C11 = 1;
  }
  if ( !userSvtCollectionEntity )
    goto LABEL_16;
  v18 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v18;
  *(_QWORD *)&v40.fields.fakeValue = v19;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v40, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v20, v21);
  if ( !this )
    goto LABEL_16;
  v24 = (UnityEngine_Component_o *)this;
  this[9].fields.m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o *)overwriteStatus;
  sub_1BDB81C((CGThumbnailListItem_o *)&this[9].fields.m_CancellationTokenSource, (int32_t)overwriteStatus, v22, v23);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v24, 0LL);
  this = (CharaGraphManager_o *)sub_1BDB920(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v28 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v29 = StringLiteral_14699/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14699/*"UICharaGraphTexture("*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.charaGraphPrefab, v29, v26, v27);
  *(_QWORD *)&v41.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v41.fields.fakeValue = 0LL;
  svtId = userSvtCollectionEntity->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v41, v30);
  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v28->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v28->fields.charaEquipGraphPrefab, (int32_t)this, v26, v31);
  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 2
    || (v33 = StringLiteral_961/*"-I"*/,
        v28->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_961/*"-I"*/,
        sub_1BDB81C((CGThumbnailListItem_o *)&v28->fields.commandGraphPrefab, v33, v26, v32),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v28->fields.m_CancellationTokenSource) <= 3)
    || (v28[1].klass = (CharaGraphManager_c *)this,
        sub_1BDB81C((CGThumbnailListItem_o *)&v28[1], (int32_t)this, v26, v34),
        LODWORD(v28->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1BDBADC(this, parent, v26);
  }
  v36 = StringLiteral_767/*")"*/;
  v28[1].monitor = (void *)StringLiteral_767/*")"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v28[1].monitor, v36, v26, v35);
  this = (CharaGraphManager_o *)System_String__Concat_62612776((System_String_array *)v28, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1BDBAD4(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_42852652(
    (UICharaGraphTexture_o *)v24,
    userSvtCollectionEntity,
    imageLimitCounta,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v24, depth, 0LL);
  return (UICharaGraphTexture_o *)v24;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_39680688(
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
  if ( (byte_4B43C12 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1BDB878(&StringLiteral_14699/*"UICharaGraphTexture("*/, v11);
    this = (CharaGraphManager_o *)sub_1BDB878(&StringLiteral_767/*")"*/, v12);
    byte_4B43C12 = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_9;
  v13 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        svtId = servantLeaderInfo->fields.svtId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_62610508(
                                        (System_String_o *)StringLiteral_14699/*"UICharaGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_767/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1BDBAD4(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_42852996((UICharaGraphTexture_o *)v17, servantLeaderInfo, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_39681180(
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x25
  __int64 v19; // x26
  int32_t v20; // w0
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UnityEngine_Component_o *v24; // x22
  UnityEngine_Object_o *gameObject; // x23
  __int64 v26; // x2
  const MethodInfo *v27; // x3
  CharaGraphManager_o *v28; // x24
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

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4B43C13 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1BDB878(&string___TypeInfo, v14);
    sub_1BDB878(&StringLiteral_961/*"-I"*/, v15);
    sub_1BDB878(&StringLiteral_14699/*"UICharaGraphTexture("*/, v16);
    this = (CharaGraphManager_o *)sub_1BDB878(&StringLiteral_767/*")"*/, v17);
    byte_4B43C13 = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_16;
  v18 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = v18;
  *(_QWORD *)&v40.fields.fakeValue = v19;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v40, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v20, v21);
  if ( !this )
    goto LABEL_16;
  v24 = (UnityEngine_Component_o *)this;
  this[9].fields.m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o *)overwriteStatus;
  sub_1BDB81C((CGThumbnailListItem_o *)&this[9].fields.m_CancellationTokenSource, (int32_t)overwriteStatus, v22, v23);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v24, 0LL);
  this = (CharaGraphManager_o *)sub_1BDB920(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v28 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v29 = StringLiteral_14699/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14699/*"UICharaGraphTexture("*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.charaGraphPrefab, v29, v26, v27);
  *(_QWORD *)&v41.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v41.fields.fakeValue = 0LL;
  svtId = servantLeaderInfo->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v41, v30);
  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v28->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v28->fields.charaEquipGraphPrefab, (int32_t)this, v26, v31);
  if ( LODWORD(v28->fields.m_CancellationTokenSource) <= 2
    || (v33 = StringLiteral_961/*"-I"*/,
        v28->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_961/*"-I"*/,
        sub_1BDB81C((CGThumbnailListItem_o *)&v28->fields.commandGraphPrefab, v33, v26, v32),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v28->fields.m_CancellationTokenSource) <= 3)
    || (v28[1].klass = (CharaGraphManager_c *)this,
        sub_1BDB81C((CGThumbnailListItem_o *)&v28[1], (int32_t)this, v26, v34),
        LODWORD(v28->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1BDBADC(this, parent, v26);
  }
  v36 = StringLiteral_767/*")"*/;
  v28[1].monitor = (void *)StringLiteral_767/*")"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v28[1].monitor, v36, v26, v35);
  this = (CharaGraphManager_o *)System_String__Concat_62612776((System_String_array *)v28, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1BDBAD4(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_42853244(
    (UICharaGraphTexture_o *)v24,
    servantLeaderInfo,
    imageLimitCounta,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v24, depth, 0LL);
  return (UICharaGraphTexture_o *)v24;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_39681908(
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
  if ( (byte_4B43C14 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1BDB878(&StringLiteral_14699/*"UICharaGraphTexture("*/, v13);
    this = (CharaGraphManager_o *)sub_1BDB878(&StringLiteral_767/*")"*/, v14);
    byte_4B43C14 = 1;
  }
  if ( !equipTargetInfo )
    goto LABEL_9;
  v15 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  *(_QWORD *)&v25.fields.fakeValue = v16;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v25, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v12, parent, v17, v18);
  if ( !this
    || (v19 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v26.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v26.fields.fakeValue = 0LL,
        svtId = equipTargetInfo->fields.svtId,
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v21),
        this = (CharaGraphManager_o *)System_String__Concat_62610508(
                                        (System_String_o *)StringLiteral_14699/*"UICharaGraphTexture("*/,
                                        v22,
                                        (System_String_o *)StringLiteral_767/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1BDBAD4(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_42853572(
    (UICharaGraphTexture_o *)v19,
    equipTargetInfo,
    isNpcFollowerServantEquip,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v19, depth, 0LL);
  return (UICharaGraphTexture_o *)v19;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_39682408(
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
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  CharaGraphManager_o *v26; // x25
  int32_t v27; // w1
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  int32_t v31; // w1
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  int32_t v34; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4B43C15 & 1) == 0 )
  {
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1BDB878(&string___TypeInfo, v14);
    sub_1BDB878(&StringLiteral_961/*"-I"*/, v15);
    sub_1BDB878(&StringLiteral_14699/*"UICharaGraphTexture("*/, v16);
    this = (CharaGraphManager_o *)sub_1BDB878(&StringLiteral_767/*")"*/, v17);
    byte_4B43C15 = 1;
  }
  if ( !equipTargetInfo )
    goto LABEL_16;
  v18 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v18;
  *(_QWORD *)&v38.fields.fakeValue = v19;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v38, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v20, v21);
  if ( !this )
    goto LABEL_16;
  v22 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1BDB920(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v26 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v27 = StringLiteral_14699/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14699/*"UICharaGraphTexture("*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.charaGraphPrefab, v27, v24, v25);
  *(_QWORD *)&v39.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v39.fields.fakeValue = 0LL;
  svtId = equipTargetInfo->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v39, v28);
  if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v26->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1BDB81C((CGThumbnailListItem_o *)&v26->fields.charaEquipGraphPrefab, (int32_t)this, v24, v29);
  if ( LODWORD(v26->fields.m_CancellationTokenSource) <= 2
    || (v31 = StringLiteral_961/*"-I"*/,
        v26->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_961/*"-I"*/,
        sub_1BDB81C((CGThumbnailListItem_o *)&v26->fields.commandGraphPrefab, v31, v24, v30),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v26->fields.m_CancellationTokenSource) <= 3)
    || (v26[1].klass = (CharaGraphManager_c *)this,
        sub_1BDB81C((CGThumbnailListItem_o *)&v26[1], (int32_t)this, v24, v32),
        LODWORD(v26->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1BDBADC(this, parent, v24);
  }
  v34 = StringLiteral_767/*")"*/;
  v26[1].monitor = (void *)StringLiteral_767/*")"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v26[1].monitor, v34, v24, v33);
  this = (CharaGraphManager_o *)System_String__Concat_62612776((System_String_array *)v26, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1BDBAD4(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_42853768(
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

  if ( (byte_4B43BFE & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4B43BFE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v18);
  return CharaGraphManager__CreateTextureLocal_39677512(
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


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_39677828(
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

  if ( (byte_4B43BFF & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, v11);
    byte_4B43BFF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   userSvtId,
                   (const MethodInfo_32E4398 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(Instance, v13);
  }
  return CharaGraphManager__CreateTextureLocal_39678056(
           (CharaGraphManager_o *)Instance,
           parent,
           (UserServantEntity_o *)Entity,
           depth,
           callbackFunc,
           v15);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_39678400(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B43C00 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtEntity);
    byte_4B43C00 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_39678056(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_39678524(
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

  if ( (byte_4B43C01 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtEntity);
    byte_4B43C01 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v19);
  return CharaGraphManager__CreateTextureLocal_39678724(
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


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_39679352(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B43C02 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtCollectionEntity);
    byte_4B43C02 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_39679476(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_39679820(
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

  if ( (byte_4B43C03 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtCollectionEntity);
    byte_4B43C03 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v14);
  return CharaGraphManager__CreateTextureLocal_39679968(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtCollectionEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           overwriteStatus,
           v15);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_39680564(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B43C04 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, servantLeaderInfo);
    byte_4B43C04 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_39680688(
           (CharaGraphManager_o *)Instance,
           parent,
           servantLeaderInfo,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_39681032(
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

  if ( (byte_4B43C05 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, servantLeaderInfo);
    byte_4B43C05 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v14);
  return CharaGraphManager__CreateTextureLocal_39681180(
           (CharaGraphManager_o *)Instance,
           parent,
           servantLeaderInfo,
           imageLimitCount,
           depth,
           callbackFunc,
           overwriteStatus,
           v15);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_39681776(
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

  if ( (byte_4B43C06 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, equipTargetInfo);
    byte_4B43C06 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v12);
  return CharaGraphManager__CreateTextureLocal_39681908(
           (CharaGraphManager_o *)Instance,
           parent,
           equipTargetInfo,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v13);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_39682260(
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

  if ( (byte_4B43C07 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, equipTargetInfo);
    byte_4B43C07 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v14);
  return CharaGraphManager__CreateTextureLocal_39682408(
           (CharaGraphManager_o *)Instance,
           parent,
           equipTargetInfo,
           imageLimitCount,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v15);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_39682988(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B43C08 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userCommandCodeEntity);
    byte_4B43C08 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_39683112(
           (CharaGraphManager_o *)Instance,
           parent,
           userCommandCodeEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_39683452(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B43C09 & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userCommandCodeCollectionEntity);
    byte_4B43C09 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_39683576(
           (CharaGraphManager_o *)Instance,
           parent,
           userCommandCodeCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_39683916(
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4B43C0A & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, commandCodeEntity);
    byte_4B43C0A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_39684040(
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

  if ( (byte_4B43BF8 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4B43BF8 = 1;
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

  if ( (byte_4B43BF9 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, callback);
    sub_1BDB878(&UICharaGraphRender_TypeInfo, v5);
    byte_4B43BF9 = 1;
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
  if ( (byte_4B43BF4 & 1) == 0 )
  {
    sub_1BDB878(&UICharaGraphRender_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4B43BF4 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetAssetName_39676192(
        int32_t imageSvtId,
        System_Int32_array *imagePartsGroupIdxs,
        const MethodInfo *method)
{
  if ( (byte_4B43BF5 & 1) == 0 )
  {
    sub_1BDB878(&UICharaGraphRender_TypeInfo, imagePartsGroupIdxs);
    byte_4B43BF5 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetAssetName_42839456(imageSvtId, imagePartsGroupIdxs, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  if ( (byte_4B43BF6 & 1) == 0 )
  {
    sub_1BDB878(&UICharaGraphRender_TypeInfo, method);
    byte_4B43BF6 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetExCharaGraphAssetName(int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4B43BF7 & 1) == 0 )
  {
    sub_1BDB878(&UICharaGraphRender_TypeInfo, method);
    byte_4B43BF7 = 1;
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

  if ( (byte_4B43BFA & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4B43BFA = 1;
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

  if ( (byte_4B43BFB & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, callback);
    sub_1BDB878(&UICharaGraphRender_TypeInfo, v5);
    byte_4B43BFB = 1;
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

  if ( (byte_4B43BFC & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4B43BFC = 1;
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

  if ( (byte_4B43BFD & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    sub_1BDB878(&UICharaGraphRender_TypeInfo, v4);
    byte_4B43BFD = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(CommandAssetName, 0LL);
}