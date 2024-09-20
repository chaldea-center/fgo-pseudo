void __fastcall CharaGraphManager___ctor(CharaGraphManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A5A3A1 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
    byte_4A5A3A1 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal(
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

  if ( (byte_4A5A39C & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_14715/*"UICommandGraphTexture"*/);
    byte_4A5A39C = 1;
  }
  commandGraphPrefab = (Il2CppObject *)this->fields.commandGraphPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        commandGraphPrefab,
                                        (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_15;
  v9 = layer;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       layer,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform(v9, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  if ( !layer )
    goto LABEL_15;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v9, (System_String_o *)StringLiteral_14715/*"UICommandGraphTexture"*/, 0LL);
  if ( !parent )
    goto LABEL_15;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0LL);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4A55CE7 )
  {
    sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v17.fields.x = x;
  v17.fields.y = y;
  v17.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v17, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_object )
LABEL_15:
    sub_1B8880C(layer, v8);
  UICharaGraphRender__SetLayer((UICharaGraphRender_o *)Component_object, (int32_t)layer, 0LL);
  return (UICharaGraphTexture_o *)Component_object;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_37910836(
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
  if ( (byte_4A5A39D & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    this = (CharaGraphManager_o *)sub_1B885B0(&StringLiteral_14716/*"UICommandGraphTexture("*/);
    byte_4A5A39D = 1;
  }
  if ( !userCommandCodeEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v22.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v22.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeEntity->fields.commandCodeId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_61718292(
                                        (System_String_o *)StringLiteral_14716/*"UICommandGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_814/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B8880C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand((UICharaGraphTexture_o *)v15, userCommandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0LL);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_37911300(
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
  if ( (byte_4A5A39E & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    this = (CharaGraphManager_o *)sub_1B885B0(&StringLiteral_14716/*"UICommandGraphTexture("*/);
    byte_4A5A39E = 1;
  }
  if ( !userCommandCodeCollectionEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v22.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v22.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeCollectionEntity->fields.commandCodeId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_61718292(
                                        (System_String_o *)StringLiteral_14716/*"UICommandGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_814/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B8880C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand_40837792(
    (UICharaGraphTexture_o *)v15,
    userCommandCodeCollectionEntity,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0LL);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_37911764(
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
  if ( (byte_4A5A39F & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    this = (CharaGraphManager_o *)sub_1B885B0(&StringLiteral_14716/*"UICommandGraphTexture("*/);
    byte_4A5A39F = 1;
  }
  if ( !commandCodeEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v22.fields.currentCryptoKey = &id,
        *(_QWORD *)&v22.fields.fakeValue = 0LL,
        id = commandCodeEntity->fields.id,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_61718292(
                                        (System_String_o *)StringLiteral_14716/*"UICommandGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_814/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B8880C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand_40837936((UICharaGraphTexture_o *)v15, commandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0LL);
  return (UICharaGraphTexture_o *)v15;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_37912228(
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
  if ( (byte_4A5A3A0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_814/*")"*/);
    sub_1B885B0(&StringLiteral_14716/*"UICommandGraphTexture("*/);
    byte_4A5A3A0 = 1;
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
        CommandTextureLocal = (UnityEngine_Component_o *)System_String__Concat_61718292(
                                                           (System_String_o *)StringLiteral_14716/*"UICommandGraphTexture("*/,
                                                           v14,
                                                           (System_String_o *)StringLiteral_814/*")"*/,
                                                           0LL),
        !gameObject) )
  {
    sub_1B8880C(CommandTextureLocal, v11);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)CommandTextureLocal, 0LL);
  UICharaGraphTexture__SetCommand_40838080(v12, commandCodeIda, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth(v12, depth, 0LL);
  return v12;
}


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

  if ( (byte_4A5A391 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4A5A391 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_37912228(
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

  if ( (byte_4A5A392 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_14713/*"UICharaGraphTexture"*/);
    byte_4A5A392 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
LABEL_30:
    sub_1B8880C(Instance, v8);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
  {
    v13 = 0LL;
    goto LABEL_14;
  }
  v10 = (ServantEntity_o *)Entity;
  if ( ServantEntity__get_IsEnemyCollectionDetail((ServantEntity_o *)Entity, 0LL) )
  {
    v11 = UnityEngine_Object_TypeInfo;
    charaGraphPrefab = (Il2CppObject *)this->fields.charaGraphPrefab;
  }
  else
  {
    v13 = 0LL;
    if ( !ServantEntity__get_IsServantEquip(v10, 0LL) )
      goto LABEL_14;
    v11 = UnityEngine_Object_TypeInfo;
    charaGraphPrefab = (Il2CppObject *)this->fields.charaEquipGraphPrefab;
  }
  if ( !v11->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v11);
  v13 = UnityEngine_Object__Instantiate_object_(
          charaGraphPrefab,
          (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
LABEL_14:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v14 = (Il2CppObject *)this->fields.charaGraphPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                  v14,
                                  (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v13 = (Il2CppObject *)Instance;
  }
  if ( !v13 )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v13,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v13, 0LL);
  if ( !Instance )
    goto LABEL_30;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v13, (System_String_o *)StringLiteral_14713/*"UICharaGraphTexture"*/, 0LL);
  if ( !parent )
    goto LABEL_30;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_30;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)Instance, 0LL);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4A55CE7 )
  {
    sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0LL);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v22, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_object )
    goto LABEL_30;
  UICharaGraphRender__SetLayer((UICharaGraphRender_o *)Component_object, (int32_t)Instance, 0LL);
  return (UICharaGraphTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37905416(
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
  if ( (byte_4A5A393 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_14714/*"UICharaGraphTexture("*/);
    sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5A393 = 1;
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
        TextureLocal = (UnityEngine_Component_o *)System_String__Concat_61720296(
                                                    (System_String_o *)StringLiteral_14714/*"UICharaGraphTexture("*/,
                                                    v21,
                                                    v22,
                                                    (System_String_o *)StringLiteral_814/*")"*/,
                                                    0LL),
        !gameObject) )
  {
    sub_1B8880C(TextureLocal, v18);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)TextureLocal, 0LL);
  UICharaGraphTexture__SetCharacter(v19, v25, v24, exceedCount, isOwn, callbackFunc, isRealName, 0LL);
  UICharaGraphTexture__SetDepth(v19, depth, 0LL);
  return v19;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37905960(
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
  if ( (byte_4A5A394 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_14714/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5A394 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v22.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v22.fields.fakeValue = 0LL,
        svtId = userSvtEntity->fields.svtId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_61718292(
                                        (System_String_o *)StringLiteral_14714/*"UICharaGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_814/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B8880C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40835776((UICharaGraphTexture_o *)v15, userSvtEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0LL);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37906576(
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
  __int64 v14; // x25
  __int64 v15; // x26
  int32_t v16; // w0
  const MethodInfo *v17; // x3
  CharaGraphManager_o *v18; // x23
  UnityEngine_Object_o *gameObject; // x24
  int32_t v20; // w2
  int32_t v21; // w3
  CharaGraphManager_o *v22; // x25
  int32_t v23; // w1
  const MethodInfo *v24; // x2
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4A5A395 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1012/*"-I"*/);
    sub_1B885B0(&StringLiteral_14714/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5A395 = 1;
  }
  if ( !userSvtEntity )
    goto LABEL_16;
  v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v14;
  *(_QWORD *)&v38.fields.fakeValue = v15;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v38, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v16, v17);
  if ( !this )
    goto LABEL_16;
  v18 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1B88658(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v22 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v23 = StringLiteral_14714/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14714/*"UICharaGraphTexture("*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.charaGraphPrefab, v23, v20, v21);
  *(_QWORD *)&v39.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v39.fields.fakeValue = 0LL;
  svtId = userSvtEntity->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v39, v24);
  if ( LODWORD(v22->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v22->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->fields.charaEquipGraphPrefab, (int32_t)this, v25, v26);
  if ( LODWORD(v22->fields.m_CancellationTokenSource) <= 2
    || (v29 = StringLiteral_1012/*"-I"*/,
        v22->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1012/*"-I"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->fields.commandGraphPrefab, v29, v27, v28),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v22->fields.m_CancellationTokenSource) <= 3)
    || (v22[1].klass = (CharaGraphManager_c *)this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v22[1], (int32_t)this, v30, v31),
        LODWORD(v22->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1B88814(this, parent);
  }
  v34 = StringLiteral_814/*")"*/;
  v22[1].monitor = (void *)StringLiteral_814/*")"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v22[1].monitor, v34, v32, v33);
  this = (CharaGraphManager_o *)System_String__Concat_61720560((System_String_array *)v22, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1B8880C(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40836020(
    (UICharaGraphTexture_o *)v18,
    userSvtEntity,
    imageLimitCounta,
    callbackFunc,
    isRealName,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v18, depth, 0LL);
  return (UICharaGraphTexture_o *)v18;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37907280(
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
  if ( (byte_4A5A396 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_14714/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5A396 = 1;
  }
  if ( !userSvtCollectionEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v22.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v22.fields.fakeValue = 0LL,
        svtId = userSvtCollectionEntity->fields.svtId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_61718292(
                                        (System_String_o *)StringLiteral_14714/*"UICharaGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_814/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B8880C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40836280((UICharaGraphTexture_o *)v15, userSvtCollectionEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0LL);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37907756(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v11; // x23
  __int64 v12; // x24
  __int64 v13; // x25
  int32_t v14; // w0
  const MethodInfo *v15; // x3
  CharaGraphManager_o *v16; // x22
  UnityEngine_Object_o *gameObject; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  CharaGraphManager_o *v20; // x24
  int32_t v21; // w1
  const MethodInfo *v22; // x2
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  v11 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4A5A397 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1012/*"-I"*/);
    sub_1B885B0(&StringLiteral_14714/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5A397 = 1;
  }
  if ( !userSvtCollectionEntity )
    goto LABEL_16;
  v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v12;
  *(_QWORD *)&v36.fields.fakeValue = v13;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v36, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v11, parent, v14, v15);
  if ( !this )
    goto LABEL_16;
  v16 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1B88658(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v20 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v21 = StringLiteral_14714/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14714/*"UICharaGraphTexture("*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.charaGraphPrefab, v21, v18, v19);
  *(_QWORD *)&v37.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v37.fields.fakeValue = 0LL;
  svtId = userSvtCollectionEntity->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v37, v22);
  if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v20->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.charaEquipGraphPrefab, (int32_t)this, v23, v24);
  if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 2
    || (v27 = StringLiteral_1012/*"-I"*/,
        v20->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1012/*"-I"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.commandGraphPrefab, v27, v25, v26),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v20->fields.m_CancellationTokenSource) <= 3)
    || (v20[1].klass = (CharaGraphManager_c *)this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v20[1], (int32_t)this, v28, v29),
        LODWORD(v20->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1B88814(this, parent);
  }
  v32 = StringLiteral_814/*")"*/;
  v20[1].monitor = (void *)StringLiteral_814/*")"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20[1].monitor, v32, v30, v31);
  this = (CharaGraphManager_o *)System_String__Concat_61720560((System_String_array *)v20, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1B8880C(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40836532(
    (UICharaGraphTexture_o *)v16,
    userSvtCollectionEntity,
    imageLimitCounta,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v16, depth, 0LL);
  return (UICharaGraphTexture_o *)v16;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37908452(
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
  if ( (byte_4A5A398 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_14714/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5A398 = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_9;
  v11 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v21, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v22.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v22.fields.fakeValue = 0LL,
        svtId = servantLeaderInfo->fields.svtId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_61718292(
                                        (System_String_o *)StringLiteral_14714/*"UICharaGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_814/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B8880C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40836796((UICharaGraphTexture_o *)v15, servantLeaderInfo, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0LL);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37908928(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v11; // x23
  __int64 v12; // x24
  __int64 v13; // x25
  int32_t v14; // w0
  const MethodInfo *v15; // x3
  CharaGraphManager_o *v16; // x22
  UnityEngine_Object_o *gameObject; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  CharaGraphManager_o *v20; // x24
  int32_t v21; // w1
  const MethodInfo *v22; // x2
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  v11 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4A5A399 & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1012/*"-I"*/);
    sub_1B885B0(&StringLiteral_14714/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5A399 = 1;
  }
  if ( !servantLeaderInfo )
    goto LABEL_16;
  v12 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v36.fields.currentCryptoKey = v12;
  *(_QWORD *)&v36.fields.fakeValue = v13;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v36, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v11, parent, v14, v15);
  if ( !this )
    goto LABEL_16;
  v16 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1B88658(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v20 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v21 = StringLiteral_14714/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14714/*"UICharaGraphTexture("*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.charaGraphPrefab, v21, v18, v19);
  *(_QWORD *)&v37.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v37.fields.fakeValue = 0LL;
  svtId = servantLeaderInfo->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v37, v22);
  if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v20->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.charaEquipGraphPrefab, (int32_t)this, v23, v24);
  if ( LODWORD(v20->fields.m_CancellationTokenSource) <= 2
    || (v27 = StringLiteral_1012/*"-I"*/,
        v20->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1012/*"-I"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v20->fields.commandGraphPrefab, v27, v25, v26),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v20->fields.m_CancellationTokenSource) <= 3)
    || (v20[1].klass = (CharaGraphManager_c *)this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v20[1], (int32_t)this, v28, v29),
        LODWORD(v20->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1B88814(this, parent);
  }
  v32 = StringLiteral_814/*")"*/;
  v20[1].monitor = (void *)StringLiteral_814/*")"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v20[1].monitor, v32, v30, v31);
  this = (CharaGraphManager_o *)System_String__Concat_61720560((System_String_array *)v20, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1B8880C(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40836992(
    (UICharaGraphTexture_o *)v16,
    servantLeaderInfo,
    imageLimitCounta,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v16, depth, 0LL);
  return (UICharaGraphTexture_o *)v16;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37909632(
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
  if ( (byte_4A5A39A & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&StringLiteral_14714/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5A39A = 1;
  }
  if ( !equipTargetInfo )
    goto LABEL_9;
  v13 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v13;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v12, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        svtId = equipTargetInfo->fields.svtId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_61718292(
                                        (System_String_o *)StringLiteral_14714/*"UICharaGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_814/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_9:
    sub_1B8880C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40837220(
    (UICharaGraphTexture_o *)v17,
    equipTargetInfo,
    isNpcFollowerServantEquip,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_37910132(
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
  CharaGraphManager_o *v22; // x25
  int32_t v23; // w1
  const MethodInfo *v24; // x2
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-70h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4A5A39B & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1012/*"-I"*/);
    sub_1B885B0(&StringLiteral_14714/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_1B885B0(&StringLiteral_814/*")"*/);
    byte_4A5A39B = 1;
  }
  if ( !equipTargetInfo )
    goto LABEL_16;
  v14 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v14;
  *(_QWORD *)&v38.fields.fakeValue = v15;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v38, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v16, v17);
  if ( !this )
    goto LABEL_16;
  v18 = this;
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CharaGraphManager_o *)sub_1B88658(string___TypeInfo, 5LL);
  if ( !this )
    goto LABEL_16;
  v22 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_15;
  v23 = StringLiteral_14714/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_14714/*"UICharaGraphTexture("*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.charaGraphPrefab, v23, v20, v21);
  *(_QWORD *)&v39.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v39.fields.fakeValue = 0LL;
  svtId = equipTargetInfo->fields.svtId;
  this = (CharaGraphManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v39, v24);
  if ( LODWORD(v22->fields.m_CancellationTokenSource) <= 1 )
    goto LABEL_15;
  v22->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->fields.charaEquipGraphPrefab, (int32_t)this, v25, v26);
  if ( LODWORD(v22->fields.m_CancellationTokenSource) <= 2
    || (v29 = StringLiteral_1012/*"-I"*/,
        v22->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1012/*"-I"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->fields.commandGraphPrefab, v29, v27, v28),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0LL),
        LODWORD(v22->fields.m_CancellationTokenSource) <= 3)
    || (v22[1].klass = (CharaGraphManager_c *)this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v22[1], (int32_t)this, v30, v31),
        LODWORD(v22->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_15:
    sub_1B88814(this, parent);
  }
  v34 = StringLiteral_814/*")"*/;
  v22[1].monitor = (void *)StringLiteral_814/*")"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v22[1].monitor, v34, v32, v33);
  this = (CharaGraphManager_o *)System_String__Concat_61720560((System_String_array *)v22, 0LL);
  if ( !gameObject )
LABEL_16:
    sub_1B8880C(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_40837412(
    (UICharaGraphTexture_o *)v18,
    equipTargetInfo,
    imageLimitCounta,
    isNpcFollowerServantEquip,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v18, depth, 0LL);
  return (UICharaGraphTexture_o *)v18;
}


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

  if ( (byte_4A5A384 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4A5A384 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v18);
  return CharaGraphManager__CreateTextureLocal_37905416(
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


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37905732(
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

  if ( (byte_4A5A385 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4A5A385 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Entity = DataMasterBase_object__object__long___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                   userSvtId,
                   (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v10);
  }
  return CharaGraphManager__CreateTextureLocal_37905960(
           (CharaGraphManager_o *)Instance,
           parent,
           (UserServantEntity_o *)Entity,
           depth,
           callbackFunc,
           v12);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37906304(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4A5A386 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4A5A386 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_37905960(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37906428(
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

  if ( (byte_4A5A387 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4A5A387 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v14);
  return CharaGraphManager__CreateTextureLocal_37906576(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           isRealName,
           v15);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37907156(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4A5A388 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4A5A388 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_37907280(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37907624(
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

  if ( (byte_4A5A389 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4A5A389 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v12);
  return CharaGraphManager__CreateTextureLocal_37907756(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtCollectionEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           v13);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37908328(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4A5A38A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4A5A38A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_37908452(
           (CharaGraphManager_o *)Instance,
           parent,
           servantLeaderInfo,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37908796(
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

  if ( (byte_4A5A38B & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4A5A38B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v12);
  return CharaGraphManager__CreateTextureLocal_37908928(
           (CharaGraphManager_o *)Instance,
           parent,
           servantLeaderInfo,
           imageLimitCount,
           depth,
           callbackFunc,
           v13);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37909500(
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

  if ( (byte_4A5A38C & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4A5A38C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v12);
  return CharaGraphManager__CreateTextureLocal_37909632(
           (CharaGraphManager_o *)Instance,
           parent,
           equipTargetInfo,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v13);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37909984(
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

  if ( (byte_4A5A38D & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4A5A38D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v14);
  return CharaGraphManager__CreateTextureLocal_37910132(
           (CharaGraphManager_o *)Instance,
           parent,
           equipTargetInfo,
           imageLimitCount,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v15);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37910712(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4A5A38E & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4A5A38E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_37910836(
           (CharaGraphManager_o *)Instance,
           parent,
           userCommandCodeEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37911176(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4A5A38F & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4A5A38F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_37911300(
           (CharaGraphManager_o *)Instance,
           parent,
           userCommandCodeCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_37911640(
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4A5A390 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4A5A390 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_37911764(
           (CharaGraphManager_o *)Instance,
           parent,
           commandCodeEntity,
           depth,
           callbackFunc,
           v11);
}


void __fastcall CharaGraphManager__DownloadAsset(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName; // x20

  if ( (byte_4A5A37E & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5A37E = 1;
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
  System_String_o *CommandAssetName; // x20

  if ( (byte_4A5A37F & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    byte_4A5A37F = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(CommandAssetName, callback, 1, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetAssetName(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4A5A37A & 1) == 0 )
  {
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    byte_4A5A37A = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetAssetName_37904112(int32_t imageSvtId, const MethodInfo *method)
{
  if ( (byte_4A5A37B & 1) == 0 )
  {
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    byte_4A5A37B = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetAssetName_40824236(imageSvtId, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  if ( (byte_4A5A37C & 1) == 0 )
  {
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    byte_4A5A37C = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetExCharaGraphAssetName(int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4A5A37D & 1) == 0 )
  {
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    byte_4A5A37D = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  return UICharaGraphRender__GetExCharaGraphAssetName(svtId, 0LL);
}


void __fastcall CharaGraphManager__LoadAsset(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName; // x20

  if ( (byte_4A5A380 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5A380 = 1;
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
  System_String_o *CommandAssetName; // x20

  if ( (byte_4A5A381 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    byte_4A5A381 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(CommandAssetName, callback, 1, 0LL);
}


void __fastcall CharaGraphManager__ReleaseAsset(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  System_String_o *AssetName; // x19

  if ( (byte_4A5A382 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5A382 = 1;
  }
  AssetName = CharaGraphManager__GetAssetName(svtId, imageLimitCount, method);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName, 0LL);
}


void __fastcall CharaGraphManager__ReleaseCommandAsset(
        int32_t commandCodeId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  System_String_o *CommandAssetName; // x19

  if ( (byte_4A5A383 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UICharaGraphRender_TypeInfo);
    byte_4A5A383 = 1;
  }
  if ( !UICharaGraphRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(CommandAssetName, 0LL);
}