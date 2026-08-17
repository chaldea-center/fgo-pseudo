void CharaGraphManager___ctor(CharaGraphManager_o *this, const MethodInfo *method)
{
  if ( (byte_596F8F6 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
    byte_596F8F6 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_596F8F1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_15338/*"UICommandGraphTexture"*/);
    byte_596F8F1 = 1;
  }
  commandGraphPrefab = (Il2CppObject *)this->fields.commandGraphPrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, parent, *(_QWORD *)&commandCodeId);
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                        commandGraphPrefab,
                                        (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_15;
  v9 = layer;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       layer,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform(v9, 0);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0);
  if ( !layer )
    goto LABEL_15;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v9, (System_String_o *)StringLiteral_15338/*"UICommandGraphTexture"*/, 0);
  if ( !parent )
    goto LABEL_15;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_15;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_5969AE6 )
  {
    sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
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
    sub_2213CDC(layer, v8);
  UICharaGraphRender__SetLayer((UICharaGraphRender_o *)Component_object, (int32_t)layer, 0);
  return (UICharaGraphTexture_o *)Component_object;
}


UICharaGraphTexture_o *CharaGraphManager__CreateCommandTextureLocal_47626368(
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
  if ( (byte_596F8F2 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_789/*")"*/);
    this = (CharaGraphManager_o *)sub_2213A60(&StringLiteral_15339/*"UICommandGraphTexture("*/);
    byte_596F8F2 = 1;
  }
  commandCodeId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userCommandCodeEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent, userCommandCodeEntity);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v21, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v22.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v22.fields.fakeValue = 0,
        commandCodeId = userCommandCodeEntity->fields.commandCodeId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_75694928(
                                        (System_String_o *)StringLiteral_15339/*"UICommandGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_789/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_2213CDC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCommand((UICharaGraphTexture_o *)v15, userCommandCodeEntity, callbackFunc, 0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *CharaGraphManager__CreateCommandTextureLocal_47626832(
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
  if ( (byte_596F8F3 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_789/*")"*/);
    this = (CharaGraphManager_o *)sub_2213A60(&StringLiteral_15339/*"UICommandGraphTexture("*/);
    byte_596F8F3 = 1;
  }
  commandCodeId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userCommandCodeCollectionEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      parent,
      userCommandCodeCollectionEntity);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v21, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v22.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v22.fields.fakeValue = 0,
        commandCodeId = userCommandCodeCollectionEntity->fields.commandCodeId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_75694928(
                                        (System_String_o *)StringLiteral_15339/*"UICommandGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_789/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_2213CDC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCommand_50939632(
    (UICharaGraphTexture_o *)v15,
    userCommandCodeCollectionEntity,
    callbackFunc,
    0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *CharaGraphManager__CreateCommandTextureLocal_47627296(
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
  if ( (byte_596F8F4 & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_789/*")"*/);
    this = (CharaGraphManager_o *)sub_2213A60(&StringLiteral_15339/*"UICommandGraphTexture("*/);
    byte_596F8F4 = 1;
  }
  id = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !commandCodeEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent, commandCodeEntity);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v21, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v22.fields.currentCryptoKey = &id,
        *(_QWORD *)&v22.fields.fakeValue = 0,
        id = commandCodeEntity->fields.id,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_75694928(
                                        (System_String_o *)StringLiteral_15339/*"UICommandGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_789/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_2213CDC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCommand_50939780((UICharaGraphTexture_o *)v15, commandCodeEntity, callbackFunc, 0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0);
  return (UICharaGraphTexture_o *)v15;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *CharaGraphManager__CreateCommandTextureLocal_47627760(
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
  if ( (byte_596F8F5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_789/*")"*/);
    sub_2213A60(&StringLiteral_15339/*"UICommandGraphTexture("*/);
    byte_596F8F5 = 1;
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
        CommandTextureLocal = (UnityEngine_Component_o *)System_String__Concat_75694928(
                                                           (System_String_o *)StringLiteral_15339/*"UICommandGraphTexture("*/,
                                                           v14,
                                                           (System_String_o *)StringLiteral_789/*")"*/,
                                                           0),
        !gameObject) )
  {
    sub_2213CDC(CommandTextureLocal, v11);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)CommandTextureLocal, 0);
  UICharaGraphTexture__SetCommand_50939928(v12, commandCodeIda, callbackFunc, 0);
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

  if ( (byte_596F8EC & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_596F8EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v10);
  return CharaGraphManager__CreateCommandTextureLocal_47627760(
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
  __int64 v10; // x1
  __int64 v11; // x2
  ServantEntity_o *v12; // x21
  UnityEngine_Object_c *v13; // x0
  Il2CppObject *charaGraphPrefab; // x21
  Il2CppObject *v15; // x22
  __int64 v16; // x2
  Il2CppObject *v17; // x20
  Il2CppObject *Component_object; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F8ED & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_15335/*"UICharaGraphTexture"*/);
    byte_596F8ED = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0 )
  {
LABEL_30:
    sub_2213CDC(Instance, v8);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             svtId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Entity )
  {
    v15 = 0;
    goto LABEL_14;
  }
  v12 = (ServantEntity_o *)Entity;
  if ( ServantEntity__get_IsEnemyCollectionDetail((ServantEntity_o *)Entity, 0) )
  {
    v13 = UnityEngine_Object_TypeInfo;
    charaGraphPrefab = (Il2CppObject *)this->fields.charaGraphPrefab;
  }
  else
  {
    v15 = 0;
    if ( !ServantEntity__get_IsServantEquip(v12, 0) )
      goto LABEL_14;
    v13 = UnityEngine_Object_TypeInfo;
    charaGraphPrefab = (Il2CppObject *)this->fields.charaEquipGraphPrefab;
  }
  if ( !*(&v13->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v13, v10, v11);
  v15 = UnityEngine_Object__Instantiate_object_(
          charaGraphPrefab,
          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
LABEL_14:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  Instance = (DataManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v15, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v17 = (Il2CppObject *)this->fields.charaGraphPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v16);
    Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                  v17,
                                  (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v15 = (Il2CppObject *)Instance;
  }
  if ( !v15 )
    goto LABEL_30;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v15,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v15, 0);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v15, 0);
  if ( !Instance )
    goto LABEL_30;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v15, (System_String_o *)StringLiteral_15335/*"UICharaGraphTexture"*/, 0);
  if ( !parent )
    goto LABEL_30;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(parent, 0);
  if ( !transform )
    goto LABEL_30;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)Instance, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  UnityEngine_Transform__set_localPosition(transform, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_5969AE6 )
  {
    sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
    byte_5969AE6 = 1;
  }
  UnityEngine_Transform__set_localRotation(
    transform,
    UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
    0);
  v25.fields.x = x;
  v25.fields.y = y;
  v25.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v25, 0);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_layer(parent, 0);
  if ( !Component_object )
    goto LABEL_30;
  UICharaGraphRender__SetLayer((UICharaGraphRender_o *)Component_object, (int32_t)Instance, 0);
  return (UICharaGraphTexture_o *)Component_object;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_47624672(
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
  if ( (byte_596F8EE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_15336/*"UICharaGraphTexture("*/);
    sub_2213A60(&StringLiteral_789/*")"*/);
    byte_596F8EE = 1;
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
        TextureLocal = (UnityEngine_Component_o *)System_String__Concat_75696856(
                                                    (System_String_o *)StringLiteral_15336/*"UICharaGraphTexture("*/,
                                                    v21,
                                                    v22,
                                                    (System_String_o *)StringLiteral_789/*")"*/,
                                                    0),
        !gameObject) )
  {
    sub_2213CDC(TextureLocal, v18);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)TextureLocal, 0);
  UICharaGraphTexture__SetCharacter(v19, v25, v24, exceedCount, isOwn, callbackFunc, isRealName, 0);
  UICharaGraphTexture__SetDepth(v19, depth, 0);
  return v19;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_47625112(
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
  if ( (byte_596F8EF & 1) == 0 )
  {
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_15336/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_2213A60(&StringLiteral_789/*")"*/);
    byte_596F8EF = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userSvtEntity )
    goto LABEL_9;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent, userSvtEntity);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v12;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v21, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        *(_QWORD *)&v22.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v22.fields.fakeValue = 0,
        svtId = userSvtEntity->fields.svtId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_75694928(
                                        (System_String_o *)StringLiteral_15336/*"UICharaGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_789/*")"*/,
                                        0),
        !gameObject) )
  {
LABEL_9:
    sub_2213CDC(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_50938032((UICharaGraphTexture_o *)v15, userSvtEntity, callbackFunc, 0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *CharaGraphManager__CreateTextureLocal_47625664(
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
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  CharaGraphManager_o *v18; // x26
  const MethodInfo *v19; // x3
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UnityEngine_Component_o *v26; // x24
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  CharaGraphManager_o *v34; // x26
  int32_t v35; // w1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  int32_t v48; // w1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  int32_t v61; // w1
  int32_t ServantId; // [xsp+8h] [xbp-58h] BYREF
  int32_t imageLimitCounta; // [xsp+Ch] [xbp-54h] BYREF

  v18 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_596F8F0 & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1024/*"-I"*/);
    sub_2213A60(&StringLiteral_15336/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_2213A60(&StringLiteral_789/*")"*/);
    byte_596F8F0 = 1;
  }
  ServantId = 0;
  if ( !userSvtEntity )
    goto LABEL_14;
  ServantId = UserServantEntity__GetServantId(userSvtEntity, overrideTransformVal, 0);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v18, parent, ServantId, v19);
  if ( !this )
    goto LABEL_14;
  v26 = (UnityEngine_Component_o *)this;
  this[9].fields.m_CancellationTokenSource = (struct System_Threading_CancellationTokenSource_o *)overwriteStatus;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this[9].fields.m_CancellationTokenSource,
    (int32_t)overwriteStatus,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v26, 0);
  this = (CharaGraphManager_o *)sub_2213B20(string___TypeInfo, 5);
  if ( !this )
    goto LABEL_14;
  v34 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_13;
  v35 = StringLiteral_15336/*"UICharaGraphTexture("*/;
  this->fields.charaGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_15336/*"UICharaGraphTexture("*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.charaGraphPrefab, v35, v28, v29, v30, v31, v32, v33);
  this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&ServantId, 0);
  if ( ((__int64)v34->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
    goto LABEL_13;
  v34->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)this;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v34->fields.charaEquipGraphPrefab,
    (int32_t)this,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( LODWORD(v34->fields.m_CancellationTokenSource) <= 2
    || (v48 = StringLiteral_1024/*"-I"*/,
        v34->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)StringLiteral_1024/*"-I"*/,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v34->fields.commandGraphPrefab,
          v48,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47),
        this = (CharaGraphManager_o *)System_Int32__ToString((int32_t)&imageLimitCounta, 0),
        ((__int64)v34->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0)
    || (v34[1].klass = (CharaGraphManager_c *)this,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v34[1], (int32_t)this, v49, v50, v51, v52, v53, v54),
        LODWORD(v34->fields.m_CancellationTokenSource) <= 4) )
  {
LABEL_13:
    sub_2213CE4(this);
  }
  v61 = StringLiteral_789/*")"*/;
  v34[1].monitor = (void *)StringLiteral_789/*")"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v34[1].monitor, v61, v55, v56, v57, v58, v59, v60);
  this = (CharaGraphManager_o *)System_String__Concat_75697120((System_String_array *)v34, 0);
  if ( !gameObject )
LABEL_14:
    sub_2213CDC(this, parent);
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0);
  UICharaGraphTexture__SetCharacter_50938424(
    (UICharaGraphTexture_o *)v26,
    userSvtEntity,
    imageLimitCounta,
    callbackFunc,
    isRealName,
    isDisableGrand,
    isGrand,
    overrideTransformVal,
    0);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v26, depth, 0);
  return (UICharaGraphTexture_o *)v26;
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

  if ( (byte_596F8E6 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_596F8E6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v18);
  return CharaGraphManager__CreateTextureLocal_47624672(
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


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_47624988(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_596F8E7 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_596F8E7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v10);
  return CharaGraphManager__CreateTextureLocal_47625112(
           (CharaGraphManager_o *)Instance,
           parent,
           userSvtEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_47625456(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t isRealName,
        ServantOverwriteStatus_o *overwriteStatus,
        bool isDisableGrand,
        bool isGrand,
        int32_t overrideTransformVal,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v22; // [xsp+18h] [xbp-68h]

  if ( (byte_596F8E8 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_596F8E8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v20);
  return CharaGraphManager__CreateTextureLocal_47625664(
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
           overrideTransformVal,
           v22);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_47626244(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_596F8E9 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_596F8E9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v10);
  return CharaGraphManager__CreateCommandTextureLocal_47626368(
           (CharaGraphManager_o *)Instance,
           parent,
           userCommandCodeEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_47626708(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_596F8EA & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_596F8EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v10);
  return CharaGraphManager__CreateCommandTextureLocal_47626832(
           (CharaGraphManager_o *)Instance,
           parent,
           userCommandCodeCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *CharaGraphManager__CreateTexturePrefab_47627172(
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_596F8EB & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_596F8EB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v10);
  return CharaGraphManager__CreateCommandTextureLocal_47627296(
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *AssetName; // x20

  if ( (byte_596F8E4 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F8E4 = 1;
  }
  AssetName = CharaGraphManager__GetAssetName(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
  AssetManager__downloadAssetStorage(AssetName, callback, 1, 0);
}


void CharaGraphManager__DownloadCommandAsset(
        int32_t commandCodeId,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *CommandAssetName; // x20

  if ( (byte_596F8E5 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&UICharaGraphRender_TypeInfo);
    byte_596F8E5 = 1;
  }
  if ( !*(&UICharaGraphRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo, callback, method);
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5, v6);
  AssetManager__downloadAssetStorage(CommandAssetName, callback, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *CharaGraphManager__GetAssetName(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  if ( (byte_596F8E0 & 1) == 0 )
  {
    sub_2213A60(&UICharaGraphRender_TypeInfo);
    byte_596F8E0 = 1;
  }
  if ( !*(&UICharaGraphRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo, *(_QWORD *)&imageLimitCount, method);
  return UICharaGraphRender__GetAssetName(svtId, imageLimitCount, 0);
}


System_String_o *CharaGraphManager__GetAssetName_47623912(
        int32_t imageSvtId,
        System_Int32_array *imagePartsGroupIdxs,
        const MethodInfo *method)
{
  if ( (byte_596F8E1 & 1) == 0 )
  {
    sub_2213A60(&UICharaGraphRender_TypeInfo);
    byte_596F8E1 = 1;
  }
  if ( !*(&UICharaGraphRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo, imagePartsGroupIdxs, method);
  return UICharaGraphRender__GetAssetName_50926044(imageSvtId, imagePartsGroupIdxs, 0);
}


System_String_o *CharaGraphManager__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F8E2 & 1) == 0 )
  {
    sub_2213A60(&UICharaGraphRender_TypeInfo);
    byte_596F8E2 = 1;
  }
  if ( !*(&UICharaGraphRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo, method, v2);
  return UICharaGraphRender__GetCommandAssetName(commandCodeId, 0);
}


System_String_o *CharaGraphManager__GetExCharaGraphAssetName(int32_t svtId, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596F8E3 & 1) == 0 )
  {
    sub_2213A60(&UICharaGraphRender_TypeInfo);
    byte_596F8E3 = 1;
  }
  if ( !*(&UICharaGraphRender_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo, method, v2);
  return UICharaGraphRender__GetExCharaGraphAssetName(svtId, 0);
}