void __fastcall CharaGraphManager___ctor(CharaGraphManager_o *this, const MethodInfo *method)
{
  if ( (byte_49FB669 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CharaGraphManager___ctor__, method);
    byte_49FB669 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
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
  UnityEngine_GameObject_o *v11; // x22
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FB664 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___, parent);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_14644/*"UICommandGraphTexture"*/, v8);
    byte_49FB664 = 1;
  }
  commandGraphPrefab = (Il2CppObject *)this->fields.commandGraphPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        commandGraphPrefab,
                                        (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_15;
  v11 = layer;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       layer,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !layer )
    goto LABEL_15;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_14644/*"UICommandGraphTexture"*/, 0LL);
  if ( !parent )
    goto LABEL_15;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0LL);
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49F7111 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_49F7117 )
  {
    sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v18);
    byte_49F7117 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v21.fields.x = x;
  v21.fields.y = y;
  v21.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v21, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_object )
LABEL_15:
    sub_1B64324(layer);
  UICharaGraphRender__SetLayer((UICharaGraphRender_o *)Component_object, (int32_t)layer, 0LL);
  return (UICharaGraphTexture_o *)Component_object;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_37596012(
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
  if ( (byte_49FB665 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B640C8(&StringLiteral_815/*")"*/, v11);
    this = (CharaGraphManager_o *)sub_1B640C8(&StringLiteral_14645/*"UICommandGraphTexture("*/, v12);
    byte_49FB665 = 1;
  }
  if ( !userCommandCodeEntity )
    goto LABEL_9;
  v13 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeEntity->fields.commandCodeId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_61386656(
                                        (System_String_o *)StringLiteral_14645/*"UICommandGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_815/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B64324(this);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand((UICharaGraphTexture_o *)v17, userCommandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_37596476(
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
  if ( (byte_49FB666 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B640C8(&StringLiteral_815/*")"*/, v11);
    this = (CharaGraphManager_o *)sub_1B640C8(&StringLiteral_14645/*"UICommandGraphTexture("*/, v12);
    byte_49FB666 = 1;
  }
  if ( !userCommandCodeCollectionEntity )
    goto LABEL_9;
  v13 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeCollectionEntity->fields.commandCodeId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_61386656(
                                        (System_String_o *)StringLiteral_14645/*"UICommandGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_815/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B64324(this);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand_40504772(
    (UICharaGraphTexture_o *)v17,
    userCommandCodeCollectionEntity,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_37596940(
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
  if ( (byte_49FB667 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B640C8(&StringLiteral_815/*")"*/, v11);
    this = (CharaGraphManager_o *)sub_1B640C8(&StringLiteral_14645/*"UICommandGraphTexture("*/, v12);
    byte_49FB667 = 1;
  }
  if ( !commandCodeEntity )
    goto LABEL_9;
  v13 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v14 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &id,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        id = commandCodeEntity->fields.id,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_61386656(
                                        (System_String_o *)StringLiteral_14645/*"UICommandGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_815/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B64324(this);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand_40504920((UICharaGraphTexture_o *)v17, commandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_37597404(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t commandCodeId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v10; // x1
  UnityEngine_Component_o *CommandTextureLocal; // x0
  UICharaGraphTexture_o *v12; // x21
  UnityEngine_Object_o *gameObject; // x22
  System_String_o *v14; // x0
  int32_t commandCodeIda; // [xsp+Ch] [xbp-34h] BYREF

  commandCodeIda = commandCodeId;
  if ( (byte_49FB668 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_815/*")"*/, parent);
    sub_1B640C8(&StringLiteral_14645/*"UICommandGraphTexture("*/, v10);
    byte_49FB668 = 1;
  }
  CommandTextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateCommandTextureLocal(
                                                     this,
                                                     parent,
                                                     commandCodeId,
                                                     *(const MethodInfo **)&depth);
  if ( !CommandTextureLocal
    || (v12 = (UICharaGraphTexture_o *)CommandTextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(CommandTextureLocal, 0LL),
        v14 = System_Int32__ToString((int32_t)&commandCodeIda, 0LL),
        CommandTextureLocal = (UnityEngine_Component_o *)System_String__Concat_61386656(
                                                           (System_String_o *)StringLiteral_14645/*"UICommandGraphTexture("*/,
                                                           v14,
                                                           (System_String_o *)StringLiteral_815/*")"*/,
                                                           0LL),
        !gameObject) )
  {
    sub_1B64324(CommandTextureLocal);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)CommandTextureLocal, 0LL);
  UICharaGraphTexture__SetCommand_40505068(v12, commandCodeIda, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth(v12, depth, 0LL);
  return v12;
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
  const MethodInfo *v10; // x5

  if ( (byte_49FB659 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, *(_QWORD *)&commandCodeId);
    byte_49FB659 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return CharaGraphManager__CreateCommandTextureLocal_37597404(
           (CharaGraphManager_o *)Instance,
           parent,
           commandCodeId,
           depth,
           callbackFunc,
           v10);
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
  Il2CppObject *Entity; // x0
  ServantEntity_o *v15; // x21
  UnityEngine_Object_c *v16; // x0
  Il2CppObject *charaGraphPrefab; // x21
  Il2CppObject *v18; // x22
  Il2CppObject *v19; // x20
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v25; // x1
  __int64 v26; // x1
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FB65A & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, parent);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___, v8);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&StringLiteral_14642/*"UICharaGraphTexture"*/, v12);
    byte_49FB65A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
LABEL_30:
    sub_1B64324(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
  {
    v18 = 0LL;
    goto LABEL_14;
  }
  v15 = (ServantEntity_o *)Entity;
  if ( ServantEntity__get_IsEnemyCollectionDetail((ServantEntity_o *)Entity, 0LL) )
  {
    v16 = UnityEngine_Object_TypeInfo;
    charaGraphPrefab = (Il2CppObject *)this->fields.charaGraphPrefab;
  }
  else
  {
    v18 = 0LL;
    if ( !ServantEntity__get_IsServantEquip(v15, 0LL) )
      goto LABEL_14;
    v16 = UnityEngine_Object_TypeInfo;
    charaGraphPrefab = (Il2CppObject *)this->fields.charaEquipGraphPrefab;
  }
  if ( !v16->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v16);
  v18 = UnityEngine_Object__Instantiate_object_(
          charaGraphPrefab,
          (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
LABEL_14:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v18, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v19 = (Il2CppObject *)this->fields.charaGraphPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                  v19,
                                  (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v18 = (Il2CppObject *)Instance;
  }
  if ( !v18 )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v18,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v18, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v18, 0LL);
  if ( !Instance )
    goto LABEL_30;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v18, (System_String_o *)StringLiteral_14642/*"UICharaGraphTexture"*/, 0LL);
  if ( !parent )
    goto LABEL_30;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_30;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)Instance, 0LL);
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v25);
    byte_49F7111 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_49F7117 )
  {
    sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v26);
    byte_49F7117 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v29.fields.x = x;
  v29.fields.y = y;
  v29.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v29, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_object )
    goto LABEL_30;
  UICharaGraphRender__SetLayer((UICharaGraphRender_o *)Component_object, (int32_t)Instance, 0LL);
  return (UICharaGraphTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37590592(
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
  UICharaGraphTexture_o *v19; // x23
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *v21; // x25
  System_String_o *v22; // x0
  int32_t v24; // [xsp+8h] [xbp-58h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-54h] BYREF

  v24 = limitCount;
  v25 = svtId;
  if ( (byte_49FB65B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_14643/*"UICharaGraphTexture("*/, parent);
    sub_1B640C8(&StringLiteral_815/*")"*/, v17);
    byte_49FB65B = 1;
  }
  TextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateTextureLocal(
                                              this,
                                              parent,
                                              svtId,
                                              *(const MethodInfo **)&limitCount);
  if ( !TextureLocal
    || (v19 = (UICharaGraphTexture_o *)TextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(TextureLocal, 0LL),
        v21 = System_Int32__ToString((int32_t)&v25, 0LL),
        v22 = System_Int32__ToString((int32_t)&v24, 0LL),
        TextureLocal = (UnityEngine_Component_o *)System_String__Concat_61388660(
                                                    (System_String_o *)StringLiteral_14643/*"UICharaGraphTexture("*/,
                                                    v21,
                                                    v22,
                                                    (System_String_o *)StringLiteral_815/*")"*/,
                                                    0LL),
        !gameObject) )
  {
    sub_1B64324(TextureLocal);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)TextureLocal, 0LL);
  UICharaGraphTexture__SetCharacter(v19, v25, v24, exceedCount, isOwn, callbackFunc, isRealName, 0LL);
  UICharaGraphTexture__SetDepth(v19, depth, 0LL);
  return v19;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37591136(
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
  if ( (byte_49FB65C & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B640C8(&StringLiteral_14643/*"UICharaGraphTexture("*/, v11);
    this = (CharaGraphManager_o *)sub_1B640C8(&StringLiteral_815/*")"*/, v12);
    byte_49FB65C = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_9;
  v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        svtId = userSvtEntity->fields.svtId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_61386656(
                                        (System_String_o *)StringLiteral_14643/*"UICharaGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_815/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B64324(this);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40502744((UICharaGraphTexture_o *)v17, userSvtEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37591752(
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
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  CharaGraphManager_o *v27; // x25
  int32_t v28; // w1
  const MethodInfo *v29; // x2
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_49FB65D & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B640C8(&string___TypeInfo, v14);
    sub_1B640C8(&StringLiteral_1013/*"-I"*/, v15);
    sub_1B640C8(&StringLiteral_14643/*"UICharaGraphTexture("*/, v16);
    this = (CharaGraphManager_o *)sub_1B640C8(&StringLiteral_815/*")"*/, v17);
    byte_49FB65D = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_16;
  v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v18;
  *(_QWORD *)&v43.fields.fakeValue = v19;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v43, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v20, v21);
  if ( !this )
    goto LABEL_16;
  v22 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1B64170(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v27 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v28 = StringLiteral_14643/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14643/*"UICharaGraphTexture("*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.charaGraphPrefab, v28, v25, v26);
  *(_QWORD *)&v44.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v44.fields.fakeValue = 0LL;
  svtId = userSvtEntity->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v44, v29);
  if ( LODWORD(v27->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v27->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->fields.charaEquipGraphPrefab, (int32_t)this, v30, v31);
  if ( LODWORD(v27->fields.m_CancellationTokenSource) <= 2
    || (v34 = StringLiteral_1013/*"-I"*/,
        v27->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1013/*"-I"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->fields.commandGraphPrefab, v34, v32, v33),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v27->fields.m_CancellationTokenSource) <= 3)
    || (v27[1].klass = (CharaGraphManager_c *)this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27[1], (int32_t)this, v35, v36),
        LODWORD(v27->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1B6432C(this, v24);
  }
  v39 = StringLiteral_815/*")"*/;
  v27[1].monitor = (void *)StringLiteral_815/*")"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27[1].monitor, v39, v37, v38);
  this = (CharaGraphManager_o *)System_String__Concat_61388924((System_String_array *)v27, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1B64324(this);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40502984(
    (UICharaGraphTexture_o *)v22,
    userSvtEntity,
    imageLimitCounta,
    callbackFunc,
    isRealName,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v22, depth, 0LL);
  return (UICharaGraphTexture_o *)v22;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37592456(
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
  if ( (byte_49FB65E & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B640C8(&StringLiteral_14643/*"UICharaGraphTexture("*/, v11);
    this = (CharaGraphManager_o *)sub_1B640C8(&StringLiteral_815/*")"*/, v12);
    byte_49FB65E = 1;
  }
  if ( !userSvtCollectionEntity )
    goto LABEL_9;
  v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        svtId = userSvtCollectionEntity->fields.svtId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_61386656(
                                        (System_String_o *)StringLiteral_14643/*"UICharaGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_815/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B64324(this);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40503240((UICharaGraphTexture_o *)v17, userSvtCollectionEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37592932(
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
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  CharaGraphManager_o *v25; // x24
  int32_t v26; // w1
  const MethodInfo *v27; // x2
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  v11 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_49FB65F & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B640C8(&string___TypeInfo, v12);
    sub_1B640C8(&StringLiteral_1013/*"-I"*/, v13);
    sub_1B640C8(&StringLiteral_14643/*"UICharaGraphTexture("*/, v14);
    this = (CharaGraphManager_o *)sub_1B640C8(&StringLiteral_815/*")"*/, v15);
    byte_49FB65F = 1;
  }
  if ( !userSvtCollectionEntity )
    goto LABEL_16;
  v16 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v16;
  *(_QWORD *)&v41.fields.fakeValue = v17;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v41, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v11, parent, v18, v19);
  if ( !this )
    goto LABEL_16;
  v20 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1B64170(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v25 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v26 = StringLiteral_14643/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14643/*"UICharaGraphTexture("*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.charaGraphPrefab, v26, v23, v24);
  *(_QWORD *)&v42.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v42.fields.fakeValue = 0LL;
  svtId = userSvtCollectionEntity->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v42, v27);
  if ( LODWORD(v25->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v25->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->fields.charaEquipGraphPrefab, (int32_t)this, v28, v29);
  if ( LODWORD(v25->fields.m_CancellationTokenSource) <= 2
    || (v32 = StringLiteral_1013/*"-I"*/,
        v25->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1013/*"-I"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->fields.commandGraphPrefab, v32, v30, v31),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v25->fields.m_CancellationTokenSource) <= 3)
    || (v25[1].klass = (CharaGraphManager_c *)this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25[1], (int32_t)this, v33, v34),
        LODWORD(v25->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1B6432C(this, v22);
  }
  v37 = StringLiteral_815/*")"*/;
  v25[1].monitor = (void *)StringLiteral_815/*")"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25[1].monitor, v37, v35, v36);
  this = (CharaGraphManager_o *)System_String__Concat_61388924((System_String_array *)v25, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1B64324(this);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40503496(
    (UICharaGraphTexture_o *)v20,
    userSvtCollectionEntity,
    imageLimitCounta,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v20, depth, 0LL);
  return (UICharaGraphTexture_o *)v20;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37593628(
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
  if ( (byte_49FB660 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B640C8(&StringLiteral_14643/*"UICharaGraphTexture("*/, v11);
    this = (CharaGraphManager_o *)sub_1B640C8(&StringLiteral_815/*")"*/, v12);
    byte_49FB660 = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_9;
  v13 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        svtId = servantLeaderInfo->fields.svtId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_61386656(
                                        (System_String_o *)StringLiteral_14643/*"UICharaGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_815/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B64324(this);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40503764((UICharaGraphTexture_o *)v17, servantLeaderInfo, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37594104(
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
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  CharaGraphManager_o *v25; // x24
  int32_t v26; // w1
  const MethodInfo *v27; // x2
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  v11 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_49FB661 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B640C8(&string___TypeInfo, v12);
    sub_1B640C8(&StringLiteral_1013/*"-I"*/, v13);
    sub_1B640C8(&StringLiteral_14643/*"UICharaGraphTexture("*/, v14);
    this = (CharaGraphManager_o *)sub_1B640C8(&StringLiteral_815/*")"*/, v15);
    byte_49FB661 = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_16;
  v16 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v16;
  *(_QWORD *)&v41.fields.fakeValue = v17;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v41, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v11, parent, v18, v19);
  if ( !this )
    goto LABEL_16;
  v20 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1B64170(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v25 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v26 = StringLiteral_14643/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14643/*"UICharaGraphTexture("*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.charaGraphPrefab, v26, v23, v24);
  *(_QWORD *)&v42.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v42.fields.fakeValue = 0LL;
  svtId = servantLeaderInfo->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v42, v27);
  if ( LODWORD(v25->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v25->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->fields.charaEquipGraphPrefab, (int32_t)this, v28, v29);
  if ( LODWORD(v25->fields.m_CancellationTokenSource) <= 2
    || (v32 = StringLiteral_1013/*"-I"*/,
        v25->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1013/*"-I"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->fields.commandGraphPrefab, v32, v30, v31),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v25->fields.m_CancellationTokenSource) <= 3)
    || (v25[1].klass = (CharaGraphManager_c *)this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25[1], (int32_t)this, v33, v34),
        LODWORD(v25->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1B6432C(this, v22);
  }
  v37 = StringLiteral_815/*")"*/;
  v25[1].monitor = (void *)StringLiteral_815/*")"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25[1].monitor, v37, v35, v36);
  this = (CharaGraphManager_o *)System_String__Concat_61388924((System_String_array *)v25, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1B64324(this);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40503964(
    (UICharaGraphTexture_o *)v20,
    servantLeaderInfo,
    imageLimitCounta,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v20, depth, 0LL);
  return (UICharaGraphTexture_o *)v20;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37594808(
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
  if ( (byte_49FB662 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B640C8(&StringLiteral_14643/*"UICharaGraphTexture("*/, v13);
    this = (CharaGraphManager_o *)sub_1B640C8(&StringLiteral_815/*")"*/, v14);
    byte_49FB662 = 1;
  }
  if ( !equipTargetInfo )
    goto LABEL_9;
  v15 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v15;
  *(_QWORD *)&v25.fields.fakeValue = v16;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v25, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v12, parent, v17, v18);
  if ( !this
    || (v19 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v26.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v26.fields.fakeValue = 0LL,
        svtId = equipTargetInfo->fields.svtId,
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v21),
        this = (CharaGraphManager_o *)System_String__Concat_61386656(
                                        (System_String_o *)StringLiteral_14643/*"UICharaGraphTexture("*/,
                                        v22,
                                        (System_String_o *)StringLiteral_815/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B64324(this);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40504188(
    (UICharaGraphTexture_o *)v19,
    equipTargetInfo,
    isNpcFollowerServantEquip,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v19, depth, 0LL);
  return (UICharaGraphTexture_o *)v19;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37595308(
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
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  CharaGraphManager_o *v27; // x25
  int32_t v28; // w1
  const MethodInfo *v29; // x2
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_49FB663 & 1) == 0 )
  {
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_1B640C8(&string___TypeInfo, v14);
    sub_1B640C8(&StringLiteral_1013/*"-I"*/, v15);
    sub_1B640C8(&StringLiteral_14643/*"UICharaGraphTexture("*/, v16);
    this = (CharaGraphManager_o *)sub_1B640C8(&StringLiteral_815/*")"*/, v17);
    byte_49FB663 = 1;
  }
  if ( !equipTargetInfo )
    goto LABEL_16;
  v18 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v18;
  *(_QWORD *)&v43.fields.fakeValue = v19;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v43, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v20, v21);
  if ( !this )
    goto LABEL_16;
  v22 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1B64170(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v27 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v28 = StringLiteral_14643/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14643/*"UICharaGraphTexture("*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.charaGraphPrefab, v28, v25, v26);
  *(_QWORD *)&v44.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v44.fields.fakeValue = 0LL;
  svtId = equipTargetInfo->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v44, v29);
  if ( LODWORD(v27->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v27->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->fields.charaEquipGraphPrefab, (int32_t)this, v30, v31);
  if ( LODWORD(v27->fields.m_CancellationTokenSource) <= 2
    || (v34 = StringLiteral_1013/*"-I"*/,
        v27->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1013/*"-I"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27->fields.commandGraphPrefab, v34, v32, v33),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v27->fields.m_CancellationTokenSource) <= 3)
    || (v27[1].klass = (CharaGraphManager_c *)this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27[1], (int32_t)this, v35, v36),
        LODWORD(v27->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1B6432C(this, v24);
  }
  v39 = StringLiteral_815/*")"*/;
  v27[1].monitor = (void *)StringLiteral_815/*")"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27[1].monitor, v39, v37, v38);
  this = (CharaGraphManager_o *)System_String__Concat_61388924((System_String_array *)v27, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1B64324(this);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40504384(
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
  const MethodInfo *v19; // [xsp+8h] [xbp-68h]

  if ( (byte_49FB64C & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, *(_QWORD *)&svtId);
    byte_49FB64C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return CharaGraphManager__CreateTextureLocal_37590592(
           (CharaGraphManager_o *)Instance,
           parent,
           svtId,
           limitCount,
           exceedCount,
           isOwn,
           depth,
           callbackFunc,
           isRealName,
           v19);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37590908(
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
  Il2CppObject *Entity; // x22
  const MethodInfo *v14; // x5

  if ( (byte_49FB64D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, v11);
    byte_49FB64D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   userSvtId,
                   (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  return CharaGraphManager__CreateTextureLocal_37591136(
           (CharaGraphManager_o *)Instance,
           parent,
           (UserServantEntity_o *)Entity,
           depth,
           callbackFunc,
           v14);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37591480(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_49FB64E & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtEntity);
    byte_49FB64E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return CharaGraphManager__CreateTextureLocal_37591136(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtEntity,
           depth,
           callbackFunc,
           v10);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37591604(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t isRealName,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v14; // x7

  if ( (byte_49FB64F & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtEntity);
    byte_49FB64F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return CharaGraphManager__CreateTextureLocal_37591752(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           isRealName,
           v14);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37592332(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_49FB650 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtCollectionEntity);
    byte_49FB650 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return CharaGraphManager__CreateTextureLocal_37592456(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtCollectionEntity,
           depth,
           callbackFunc,
           v10);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37592800(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v12; // x6

  if ( (byte_49FB651 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtCollectionEntity);
    byte_49FB651 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return CharaGraphManager__CreateTextureLocal_37592932(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtCollectionEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           v12);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37593504(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_49FB652 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, servantLeaderInfo);
    byte_49FB652 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return CharaGraphManager__CreateTextureLocal_37593628(
           (CharaGraphManager_o *)Instance,
           parent,
           servantLeaderInfo,
           depth,
           callbackFunc,
           v10);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37593972(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v12; // x6

  if ( (byte_49FB653 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, servantLeaderInfo);
    byte_49FB653 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return CharaGraphManager__CreateTextureLocal_37594104(
           (CharaGraphManager_o *)Instance,
           parent,
           servantLeaderInfo,
           imageLimitCount,
           depth,
           callbackFunc,
           v12);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37594676(
        UnityEngine_GameObject_o *parent,
        EquipTargetInfo_o *equipTargetInfo,
        int32_t depth,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v12; // x6

  if ( (byte_49FB654 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, equipTargetInfo);
    byte_49FB654 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return CharaGraphManager__CreateTextureLocal_37594808(
           (CharaGraphManager_o *)Instance,
           parent,
           equipTargetInfo,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v12);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37595160(
        UnityEngine_GameObject_o *parent,
        EquipTargetInfo_o *equipTargetInfo,
        int32_t imageLimitCount,
        int32_t depth,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v14; // x7

  if ( (byte_49FB655 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, equipTargetInfo);
    byte_49FB655 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return CharaGraphManager__CreateTextureLocal_37595308(
           (CharaGraphManager_o *)Instance,
           parent,
           equipTargetInfo,
           imageLimitCount,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v14);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37595888(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_49FB656 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userCommandCodeEntity);
    byte_49FB656 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return CharaGraphManager__CreateCommandTextureLocal_37596012(
           (CharaGraphManager_o *)Instance,
           parent,
           userCommandCodeEntity,
           depth,
           callbackFunc,
           v10);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37596352(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_49FB657 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userCommandCodeCollectionEntity);
    byte_49FB657 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return CharaGraphManager__CreateCommandTextureLocal_37596476(
           (CharaGraphManager_o *)Instance,
           parent,
           userCommandCodeCollectionEntity,
           depth,
           callbackFunc,
           v10);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37596816(
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_49FB658 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, commandCodeEntity);
    byte_49FB658 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return CharaGraphManager__CreateCommandTextureLocal_37596940(
           (CharaGraphManager_o *)Instance,
           parent,
           commandCodeEntity,
           depth,
           callbackFunc,
           v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphManager__DownloadAsset(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName; // x20

  if ( (byte_49FB646 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_49FB646 = 1;
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

  if ( (byte_49FB647 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, callback);
    sub_1B640C8(&UICharaGraphRender_TypeInfo, v5);
    byte_49FB647 = 1;
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
  if ( (byte_49FB642 & 1) == 0 )
  {
    sub_1B640C8(&UICharaGraphRender_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_49FB642 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetAssetName_37589288(int32_t imageSvtId, const MethodInfo *method)
{
  if ( (byte_49FB643 & 1) == 0 )
  {
    sub_1B640C8(&UICharaGraphRender_TypeInfo, method);
    byte_49FB643 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetAssetName_40491196(imageSvtId, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  if ( (byte_49FB644 & 1) == 0 )
  {
    sub_1B640C8(&UICharaGraphRender_TypeInfo, method);
    byte_49FB644 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetExCharaGraphAssetName(int32_t svtId, const MethodInfo *method)
{
  if ( (byte_49FB645 & 1) == 0 )
  {
    sub_1B640C8(&UICharaGraphRender_TypeInfo, method);
    byte_49FB645 = 1;
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

  if ( (byte_49FB648 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_49FB648 = 1;
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

  if ( (byte_49FB649 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, callback);
    sub_1B640C8(&UICharaGraphRender_TypeInfo, v5);
    byte_49FB649 = 1;
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

  if ( (byte_49FB64A & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_49FB64A = 1;
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

  if ( (byte_49FB64B & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    sub_1B640C8(&UICharaGraphRender_TypeInfo, v4);
    byte_49FB64B = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(CommandAssetName, 0LL);
}