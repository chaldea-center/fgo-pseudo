void __fastcall CharaGraphManager___ctor(CharaGraphManager_o *this, const MethodInfo *method)
{
  if ( (byte_4354A6E & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
    byte_4354A6E = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2CE9C98 *)Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *commandGraphPrefab; // x20
  UnityEngine_GameObject_o *layer; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x22
  UICharaGraphRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4354A69 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_14861/*"UICommandGraphTexture"*/);
    byte_4354A69 = 1;
  }
  commandGraphPrefab = this->fields.commandGraphPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)commandGraphPrefab,
                                        (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_12;
  v9 = layer;
  Component_srcLineSprite = (UICharaGraphRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      layer,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform(v9, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v9, 0LL);
  if ( !layer )
    goto LABEL_12;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v9, (System_String_o *)StringLiteral_14861/*"UICommandGraphTexture"*/, 0LL);
  if ( !parent )
    goto LABEL_12;
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_12;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)layer, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v18, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_srcLineSprite )
LABEL_12:
    sub_B7076C(layer, v8);
  UICharaGraphRender__SetLayer(Component_srcLineSprite, (int32_t)layer, 0LL);
  return (UICharaGraphTexture_o *)Component_srcLineSprite;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_30577704(
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
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v10 = this;
  if ( (byte_4354A6A & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&StringLiteral_663/*")"*/);
    this = (CharaGraphManager_o *)sub_B70694(&StringLiteral_14862/*"UICommandGraphTexture("*/);
    byte_4354A6A = 1;
  }
  commandCodeId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userCommandCodeEntity )
    goto LABEL_10;
  v12 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v21, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v22.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v22.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeEntity->fields.commandCodeId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_44760452(
                                        (System_String_o *)StringLiteral_14862/*"UICommandGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_663/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B7076C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand((UICharaGraphTexture_o *)v15, userCommandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0LL);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_30578180(
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
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v10 = this;
  if ( (byte_4354A6B & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&StringLiteral_663/*")"*/);
    this = (CharaGraphManager_o *)sub_B70694(&StringLiteral_14862/*"UICommandGraphTexture("*/);
    byte_4354A6B = 1;
  }
  commandCodeId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userCommandCodeCollectionEntity )
    goto LABEL_10;
  v12 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v21, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v22.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v22.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeCollectionEntity->fields.commandCodeId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_44760452(
                                        (System_String_o *)StringLiteral_14862/*"UICommandGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_663/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B7076C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand_36442544(
    (UICharaGraphTexture_o *)v15,
    userCommandCodeCollectionEntity,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0LL);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_30578656(
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
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v10 = this;
  if ( (byte_4354A6C & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&StringLiteral_663/*")"*/);
    this = (CharaGraphManager_o *)sub_B70694(&StringLiteral_14862/*"UICommandGraphTexture("*/);
    byte_4354A6C = 1;
  }
  id = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !commandCodeEntity )
    goto LABEL_10;
  v12 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v11 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v21, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v22.fields.currentCryptoKey = &id,
        *(_QWORD *)&v22.fields.fakeValue = 0LL,
        id = commandCodeEntity->fields.id,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_44760452(
                                        (System_String_o *)StringLiteral_14862/*"UICommandGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_663/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B7076C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand_36442700((UICharaGraphTexture_o *)v15, commandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0LL);
  return (UICharaGraphTexture_o *)v15;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_30579132(
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
  int32_t commandCodeIda; // [xsp+Ch] [xbp-24h] BYREF

  commandCodeIda = commandCodeId;
  if ( (byte_4354A6D & 1) == 0 )
  {
    sub_B70694(&StringLiteral_663/*")"*/);
    sub_B70694(&StringLiteral_14862/*"UICommandGraphTexture("*/);
    byte_4354A6D = 1;
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
        CommandTextureLocal = (UnityEngine_Component_o *)System_String__Concat_44760452(
                                                           (System_String_o *)StringLiteral_14862/*"UICommandGraphTexture("*/,
                                                           v14,
                                                           (System_String_o *)StringLiteral_663/*")"*/,
                                                           0LL),
        !gameObject) )
  {
    sub_B7076C(CommandTextureLocal, v11);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)CommandTextureLocal, 0LL);
  UICharaGraphTexture__SetCommand_36442856(v12, commandCodeIda, callbackFunc, 0LL);
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
  CharaGraphManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4354A5E & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4354A5E = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_30579132(
           Instance,
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
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v10; // x21
  struct UnityEngine_GameObject_o *charaGraphPrefab; // x21
  UnityEngine_Object_o *v12; // x22
  struct UnityEngine_GameObject_o *v13; // x20
  UICharaGraphRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4354A5F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_14859/*"UICharaGraphTexture"*/);
    byte_4354A5F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
LABEL_29:
    sub_B7076C(Instance, v8);
  }
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity )
  {
    v10 = Entity;
    if ( ServantEntity__get_IsEnemyCollectionDetail(Entity, 0LL) )
    {
      charaGraphPrefab = this->fields.charaGraphPrefab;
    }
    else
    {
      v12 = 0LL;
      if ( !ServantEntity__get_IsServantEquip(v10, 0LL) )
        goto LABEL_15;
      charaGraphPrefab = this->fields.charaEquipGraphPrefab;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v12 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)charaGraphPrefab,
                                    (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  else
  {
    v12 = 0LL;
  }
LABEL_15:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v13 = this->fields.charaGraphPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  (UnityEngine_UI_Dropdown_DropdownItem_o *)v13,
                                  (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v12 = (UnityEngine_Object_o *)Instance;
  }
  if ( !v12 )
    goto LABEL_29;
  Component_srcLineSprite = (UICharaGraphRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)v12,
                                                      (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v12, 0LL);
  if ( !Instance )
    goto LABEL_29;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name(v12, (System_String_o *)StringLiteral_14859/*"UICharaGraphTexture"*/, 0LL);
  if ( !parent )
    goto LABEL_29;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_29;
  UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)Instance, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v22.fields.x = x;
  v22.fields.y = y;
  v22.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v22, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_29;
  UICharaGraphRender__SetLayer(Component_srcLineSprite, (int32_t)Instance, 0LL);
  return (UICharaGraphTexture_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_30571552(
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
  int32_t v24; // [xsp+8h] [xbp-48h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-44h] BYREF

  v24 = limitCount;
  v25 = svtId;
  if ( (byte_4354A60 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_14860/*"UICharaGraphTexture("*/);
    sub_B70694(&StringLiteral_663/*")"*/);
    byte_4354A60 = 1;
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
        TextureLocal = (UnityEngine_Component_o *)System_String__Concat_44761580(
                                                    (System_String_o *)StringLiteral_14860/*"UICharaGraphTexture("*/,
                                                    v21,
                                                    v22,
                                                    (System_String_o *)StringLiteral_663/*")"*/,
                                                    0LL),
        !gameObject) )
  {
    sub_B7076C(TextureLocal, v18);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)TextureLocal, 0LL);
  UICharaGraphTexture__SetCharacter(v19, v25, v24, exceedCount, isOwn, callbackFunc, isRealName, 0LL);
  UICharaGraphTexture__SetDepth(v19, depth, 0LL);
  return v19;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_30572104(
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
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v10 = this;
  if ( (byte_4354A61 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&StringLiteral_14860/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_B70694(&StringLiteral_663/*")"*/);
    byte_4354A61 = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userSvtEntity )
    goto LABEL_10;
  v12 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v21, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v22.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v22.fields.fakeValue = 0LL,
        svtId = userSvtEntity->fields.svtId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_44760452(
                                        (System_String_o *)StringLiteral_14860/*"UICharaGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_663/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B7076C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_36440380((UICharaGraphTexture_o *)v15, userSvtEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0LL);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_30572736(
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CharaGraphManager_o *v26; // x25
  System_String_o *v27; // x0
  System_Int32_array **v28; // x1
  const MethodInfo *v29; // x2
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x26
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x26
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  __int64 v59; // x0
  __int64 v60; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4354A62 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_806/*"-I"*/);
    sub_B70694(&StringLiteral_14860/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_B70694(&StringLiteral_663/*")"*/);
    byte_4354A62 = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userSvtEntity )
    goto LABEL_33;
  v15 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v15;
  *(_QWORD *)&v63.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v63, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v16, v17);
  if ( !this
    || (v18 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (this = (CharaGraphManager_o *)sub_B706AC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_33:
    sub_B7076C(this, parent);
  }
  v26 = this;
  v27 = (System_String_o *)StringLiteral_14860/*"UICharaGraphTexture("*/;
  if ( StringLiteral_14860/*"UICharaGraphTexture("*/ )
  {
    v27 = (System_String_o *)sub_B70754(StringLiteral_14860/*"UICharaGraphTexture("*/, v26->klass->_1.element_class);
    if ( !v27 )
      goto LABEL_34;
    v28 = (System_Int32_array **)StringLiteral_14860/*"UICharaGraphTexture("*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !LODWORD(v26->fields.charaGraphPrefab) )
    goto LABEL_32;
  v26->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)v28;
  sub_B70630((BattleServantConfConponent_o *)&v26->fields.charaEquipGraphPrefab, v28, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)&v64.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v64.fields.fakeValue = 0LL;
  svtId = userSvtEntity->fields.svtId;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v64, v29);
  v36 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (System_String_o *)sub_B70754(v27, v26->klass->_1.element_class);
    if ( !v27 )
      goto LABEL_34;
  }
  if ( LODWORD(v26->fields.charaGraphPrefab) <= 1 )
    goto LABEL_32;
  v26->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)v36;
  sub_B70630((BattleServantConfConponent_o *)&v26->fields.commandGraphPrefab, v36, v30, v31, v32, v33, v34, v35);
  v27 = (System_String_o *)StringLiteral_806/*"-I"*/;
  if ( StringLiteral_806/*"-I"*/ )
  {
    v27 = (System_String_o *)sub_B70754(StringLiteral_806/*"-I"*/, v26->klass->_1.element_class);
    if ( !v27 )
      goto LABEL_34;
    v43 = (System_Int32_array **)StringLiteral_806/*"-I"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( LODWORD(v26->fields.charaGraphPrefab) <= 2 )
    goto LABEL_32;
  v26[1].klass = (CharaGraphManager_c *)v43;
  sub_B70630((BattleServantConfConponent_o *)&v26[1], v43, v37, v38, v39, v40, v41, v42);
  v27 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v50 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (System_String_o *)sub_B70754(v27, v26->klass->_1.element_class);
    if ( !v27 )
    {
LABEL_34:
      v60 = sub_B7078C(v27);
      sub_B70738(v60, 0LL);
    }
  }
  if ( LODWORD(v26->fields.charaGraphPrefab) <= 3 )
    goto LABEL_32;
  v26[1].monitor = v50;
  sub_B70630((BattleServantConfConponent_o *)&v26[1].monitor, v50, v44, v45, v46, v47, v48, v49);
  v27 = (System_String_o *)StringLiteral_663/*")"*/;
  if ( StringLiteral_663/*")"*/ )
  {
    v27 = (System_String_o *)sub_B70754(StringLiteral_663/*")"*/, v26->klass->_1.element_class);
    if ( v27 )
    {
      v57 = (System_Int32_array **)StringLiteral_663/*")"*/;
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v57 = 0LL;
LABEL_29:
  if ( LODWORD(v26->fields.charaGraphPrefab) <= 4 )
  {
LABEL_32:
    v59 = sub_B70798(v27);
    sub_B70738(v59, 0LL);
  }
  *(_QWORD *)&v26[1].fields.m_CachedPtr = v57;
  sub_B70630((BattleServantConfConponent_o *)&v26[1].fields, v57, v51, v52, v53, v54, v55, v56);
  this = (CharaGraphManager_o *)System_String__Concat_44838292((System_String_array *)v26, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_36440644(
    (UICharaGraphTexture_o *)v18,
    userSvtEntity,
    imageLimitCounta,
    callbackFunc,
    isRealName,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v18, depth, 0LL);
  return (UICharaGraphTexture_o *)v18;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_30573608(
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
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v10 = this;
  if ( (byte_4354A63 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&StringLiteral_14860/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_B70694(&StringLiteral_663/*")"*/);
    byte_4354A63 = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userSvtCollectionEntity )
    goto LABEL_10;
  v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v21, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v22.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v22.fields.fakeValue = 0LL,
        svtId = userSvtCollectionEntity->fields.svtId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_44760452(
                                        (System_String_o *)StringLiteral_14860/*"UICharaGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_663/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B7076C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_36440924((UICharaGraphTexture_o *)v15, userSvtCollectionEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0LL);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_30574096(
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CharaGraphManager_o *v24; // x24
  System_String_o *v25; // x0
  System_Int32_array **v26; // x1
  const MethodInfo *v27; // x2
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x25
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x25
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  __int64 v57; // x0
  __int64 v58; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  v11 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4354A64 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_806/*"-I"*/);
    sub_B70694(&StringLiteral_14860/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_B70694(&StringLiteral_663/*")"*/);
    byte_4354A64 = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userSvtCollectionEntity )
    goto LABEL_33;
  v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v13;
  *(_QWORD *)&v61.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v61, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v11, parent, v14, v15);
  if ( !this
    || (v16 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (this = (CharaGraphManager_o *)sub_B706AC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_33:
    sub_B7076C(this, parent);
  }
  v24 = this;
  v25 = (System_String_o *)StringLiteral_14860/*"UICharaGraphTexture("*/;
  if ( StringLiteral_14860/*"UICharaGraphTexture("*/ )
  {
    v25 = (System_String_o *)sub_B70754(StringLiteral_14860/*"UICharaGraphTexture("*/, v24->klass->_1.element_class);
    if ( !v25 )
      goto LABEL_34;
    v26 = (System_Int32_array **)StringLiteral_14860/*"UICharaGraphTexture("*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !LODWORD(v24->fields.charaGraphPrefab) )
    goto LABEL_32;
  v24->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)v26;
  sub_B70630((BattleServantConfConponent_o *)&v24->fields.charaEquipGraphPrefab, v26, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)&v62.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v62.fields.fakeValue = 0LL;
  svtId = userSvtCollectionEntity->fields.svtId;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v62, v27);
  v34 = (System_Int32_array **)v25;
  if ( v25 )
  {
    v25 = (System_String_o *)sub_B70754(v25, v24->klass->_1.element_class);
    if ( !v25 )
      goto LABEL_34;
  }
  if ( LODWORD(v24->fields.charaGraphPrefab) <= 1 )
    goto LABEL_32;
  v24->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)v34;
  sub_B70630((BattleServantConfConponent_o *)&v24->fields.commandGraphPrefab, v34, v28, v29, v30, v31, v32, v33);
  v25 = (System_String_o *)StringLiteral_806/*"-I"*/;
  if ( StringLiteral_806/*"-I"*/ )
  {
    v25 = (System_String_o *)sub_B70754(StringLiteral_806/*"-I"*/, v24->klass->_1.element_class);
    if ( !v25 )
      goto LABEL_34;
    v41 = (System_Int32_array **)StringLiteral_806/*"-I"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( LODWORD(v24->fields.charaGraphPrefab) <= 2 )
    goto LABEL_32;
  v24[1].klass = (CharaGraphManager_c *)v41;
  sub_B70630((BattleServantConfConponent_o *)&v24[1], v41, v35, v36, v37, v38, v39, v40);
  v25 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v48 = (System_Int32_array **)v25;
  if ( v25 )
  {
    v25 = (System_String_o *)sub_B70754(v25, v24->klass->_1.element_class);
    if ( !v25 )
    {
LABEL_34:
      v58 = sub_B7078C(v25);
      sub_B70738(v58, 0LL);
    }
  }
  if ( LODWORD(v24->fields.charaGraphPrefab) <= 3 )
    goto LABEL_32;
  v24[1].monitor = v48;
  sub_B70630((BattleServantConfConponent_o *)&v24[1].monitor, v48, v42, v43, v44, v45, v46, v47);
  v25 = (System_String_o *)StringLiteral_663/*")"*/;
  if ( StringLiteral_663/*")"*/ )
  {
    v25 = (System_String_o *)sub_B70754(StringLiteral_663/*")"*/, v24->klass->_1.element_class);
    if ( v25 )
    {
      v55 = (System_Int32_array **)StringLiteral_663/*")"*/;
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v55 = 0LL;
LABEL_29:
  if ( LODWORD(v24->fields.charaGraphPrefab) <= 4 )
  {
LABEL_32:
    v57 = sub_B70798(v25);
    sub_B70738(v57, 0LL);
  }
  *(_QWORD *)&v24[1].fields.m_CachedPtr = v55;
  sub_B70630((BattleServantConfConponent_o *)&v24[1].fields, v55, v49, v50, v51, v52, v53, v54);
  this = (CharaGraphManager_o *)System_String__Concat_44838292((System_String_array *)v24, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_36441196(
    (UICharaGraphTexture_o *)v16,
    userSvtCollectionEntity,
    imageLimitCounta,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v16, depth, 0LL);
  return (UICharaGraphTexture_o *)v16;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_30574960(
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
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v10 = this;
  if ( (byte_4354A65 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&StringLiteral_14860/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_B70694(&StringLiteral_663/*")"*/);
    byte_4354A65 = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !servantLeaderInfo )
    goto LABEL_10;
  v12 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v21, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v13, v14);
  if ( !this
    || (v15 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v22.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v22.fields.fakeValue = 0LL,
        svtId = servantLeaderInfo->fields.svtId,
        v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v22, v17),
        this = (CharaGraphManager_o *)System_String__Concat_44760452(
                                        (System_String_o *)StringLiteral_14860/*"UICharaGraphTexture("*/,
                                        v18,
                                        (System_String_o *)StringLiteral_663/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B7076C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_36441472((UICharaGraphTexture_o *)v15, servantLeaderInfo, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v15, depth, 0LL);
  return (UICharaGraphTexture_o *)v15;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_30575448(
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CharaGraphManager_o *v24; // x24
  System_String_o *v25; // x0
  System_Int32_array **v26; // x1
  const MethodInfo *v27; // x2
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x25
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x25
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  __int64 v57; // x0
  __int64 v58; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  v11 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4354A66 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_806/*"-I"*/);
    sub_B70694(&StringLiteral_14860/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_B70694(&StringLiteral_663/*")"*/);
    byte_4354A66 = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !servantLeaderInfo )
    goto LABEL_33;
  v13 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v13;
  *(_QWORD *)&v61.fields.fakeValue = v12;
  v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v61, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v11, parent, v14, v15);
  if ( !this
    || (v16 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (this = (CharaGraphManager_o *)sub_B706AC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_33:
    sub_B7076C(this, parent);
  }
  v24 = this;
  v25 = (System_String_o *)StringLiteral_14860/*"UICharaGraphTexture("*/;
  if ( StringLiteral_14860/*"UICharaGraphTexture("*/ )
  {
    v25 = (System_String_o *)sub_B70754(StringLiteral_14860/*"UICharaGraphTexture("*/, v24->klass->_1.element_class);
    if ( !v25 )
      goto LABEL_34;
    v26 = (System_Int32_array **)StringLiteral_14860/*"UICharaGraphTexture("*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !LODWORD(v24->fields.charaGraphPrefab) )
    goto LABEL_32;
  v24->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)v26;
  sub_B70630((BattleServantConfConponent_o *)&v24->fields.charaEquipGraphPrefab, v26, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)&v62.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v62.fields.fakeValue = 0LL;
  svtId = servantLeaderInfo->fields.svtId;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v62, v27);
  v34 = (System_Int32_array **)v25;
  if ( v25 )
  {
    v25 = (System_String_o *)sub_B70754(v25, v24->klass->_1.element_class);
    if ( !v25 )
      goto LABEL_34;
  }
  if ( LODWORD(v24->fields.charaGraphPrefab) <= 1 )
    goto LABEL_32;
  v24->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)v34;
  sub_B70630((BattleServantConfConponent_o *)&v24->fields.commandGraphPrefab, v34, v28, v29, v30, v31, v32, v33);
  v25 = (System_String_o *)StringLiteral_806/*"-I"*/;
  if ( StringLiteral_806/*"-I"*/ )
  {
    v25 = (System_String_o *)sub_B70754(StringLiteral_806/*"-I"*/, v24->klass->_1.element_class);
    if ( !v25 )
      goto LABEL_34;
    v41 = (System_Int32_array **)StringLiteral_806/*"-I"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( LODWORD(v24->fields.charaGraphPrefab) <= 2 )
    goto LABEL_32;
  v24[1].klass = (CharaGraphManager_c *)v41;
  sub_B70630((BattleServantConfConponent_o *)&v24[1], v41, v35, v36, v37, v38, v39, v40);
  v25 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v48 = (System_Int32_array **)v25;
  if ( v25 )
  {
    v25 = (System_String_o *)sub_B70754(v25, v24->klass->_1.element_class);
    if ( !v25 )
    {
LABEL_34:
      v58 = sub_B7078C(v25);
      sub_B70738(v58, 0LL);
    }
  }
  if ( LODWORD(v24->fields.charaGraphPrefab) <= 3 )
    goto LABEL_32;
  v24[1].monitor = v48;
  sub_B70630((BattleServantConfConponent_o *)&v24[1].monitor, v48, v42, v43, v44, v45, v46, v47);
  v25 = (System_String_o *)StringLiteral_663/*")"*/;
  if ( StringLiteral_663/*")"*/ )
  {
    v25 = (System_String_o *)sub_B70754(StringLiteral_663/*")"*/, v24->klass->_1.element_class);
    if ( v25 )
    {
      v55 = (System_Int32_array **)StringLiteral_663/*")"*/;
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v55 = 0LL;
LABEL_29:
  if ( LODWORD(v24->fields.charaGraphPrefab) <= 4 )
  {
LABEL_32:
    v57 = sub_B70798(v25);
    sub_B70738(v57, 0LL);
  }
  *(_QWORD *)&v24[1].fields.m_CachedPtr = v55;
  sub_B70630((BattleServantConfConponent_o *)&v24[1].fields, v55, v49, v50, v51, v52, v53, v54);
  this = (CharaGraphManager_o *)System_String__Concat_44838292((System_String_array *)v24, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_36441688(
    (UICharaGraphTexture_o *)v16,
    servantLeaderInfo,
    imageLimitCounta,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v16, depth, 0LL);
  return (UICharaGraphTexture_o *)v16;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_30576320(
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
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v12 = this;
  if ( (byte_4354A67 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&StringLiteral_14860/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_B70694(&StringLiteral_663/*")"*/);
    byte_4354A67 = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !equipTargetInfo )
    goto LABEL_10;
  v14 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v12, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        svtId = equipTargetInfo->fields.svtId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_44760452(
                                        (System_String_o *)StringLiteral_14860/*"UICharaGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_663/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B7076C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_36441928(
    (UICharaGraphTexture_o *)v17,
    equipTargetInfo,
    isNpcFollowerServantEquip,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_30576832(
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
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CharaGraphManager_o *v26; // x25
  System_String_o *v27; // x0
  System_Int32_array **v28; // x1
  const MethodInfo *v29; // x2
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x26
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x26
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  __int64 v59; // x0
  __int64 v60; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4354A68 & 1) == 0 )
  {
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_806/*"-I"*/);
    sub_B70694(&StringLiteral_14860/*"UICharaGraphTexture("*/);
    this = (CharaGraphManager_o *)sub_B70694(&StringLiteral_663/*")"*/);
    byte_4354A68 = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !equipTargetInfo )
    goto LABEL_33;
  v15 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v63.fields.currentCryptoKey = v15;
  *(_QWORD *)&v63.fields.fakeValue = v14;
  v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v63, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v16, v17);
  if ( !this
    || (v18 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (this = (CharaGraphManager_o *)sub_B706AC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_33:
    sub_B7076C(this, parent);
  }
  v26 = this;
  v27 = (System_String_o *)StringLiteral_14860/*"UICharaGraphTexture("*/;
  if ( StringLiteral_14860/*"UICharaGraphTexture("*/ )
  {
    v27 = (System_String_o *)sub_B70754(StringLiteral_14860/*"UICharaGraphTexture("*/, v26->klass->_1.element_class);
    if ( !v27 )
      goto LABEL_34;
    v28 = (System_Int32_array **)StringLiteral_14860/*"UICharaGraphTexture("*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !LODWORD(v26->fields.charaGraphPrefab) )
    goto LABEL_32;
  v26->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)v28;
  sub_B70630((BattleServantConfConponent_o *)&v26->fields.charaEquipGraphPrefab, v28, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)&v64.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v64.fields.fakeValue = 0LL;
  svtId = equipTargetInfo->fields.svtId;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v64, v29);
  v36 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (System_String_o *)sub_B70754(v27, v26->klass->_1.element_class);
    if ( !v27 )
      goto LABEL_34;
  }
  if ( LODWORD(v26->fields.charaGraphPrefab) <= 1 )
    goto LABEL_32;
  v26->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)v36;
  sub_B70630((BattleServantConfConponent_o *)&v26->fields.commandGraphPrefab, v36, v30, v31, v32, v33, v34, v35);
  v27 = (System_String_o *)StringLiteral_806/*"-I"*/;
  if ( StringLiteral_806/*"-I"*/ )
  {
    v27 = (System_String_o *)sub_B70754(StringLiteral_806/*"-I"*/, v26->klass->_1.element_class);
    if ( !v27 )
      goto LABEL_34;
    v43 = (System_Int32_array **)StringLiteral_806/*"-I"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( LODWORD(v26->fields.charaGraphPrefab) <= 2 )
    goto LABEL_32;
  v26[1].klass = (CharaGraphManager_c *)v43;
  sub_B70630((BattleServantConfConponent_o *)&v26[1], v43, v37, v38, v39, v40, v41, v42);
  v27 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v50 = (System_Int32_array **)v27;
  if ( v27 )
  {
    v27 = (System_String_o *)sub_B70754(v27, v26->klass->_1.element_class);
    if ( !v27 )
    {
LABEL_34:
      v60 = sub_B7078C(v27);
      sub_B70738(v60, 0LL);
    }
  }
  if ( LODWORD(v26->fields.charaGraphPrefab) <= 3 )
    goto LABEL_32;
  v26[1].monitor = v50;
  sub_B70630((BattleServantConfConponent_o *)&v26[1].monitor, v50, v44, v45, v46, v47, v48, v49);
  v27 = (System_String_o *)StringLiteral_663/*")"*/;
  if ( StringLiteral_663/*")"*/ )
  {
    v27 = (System_String_o *)sub_B70754(StringLiteral_663/*")"*/, v26->klass->_1.element_class);
    if ( v27 )
    {
      v57 = (System_Int32_array **)StringLiteral_663/*")"*/;
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v57 = 0LL;
LABEL_29:
  if ( LODWORD(v26->fields.charaGraphPrefab) <= 4 )
  {
LABEL_32:
    v59 = sub_B70798(v27);
    sub_B70738(v59, 0LL);
  }
  *(_QWORD *)&v26[1].fields.m_CachedPtr = v57;
  sub_B70630((BattleServantConfConponent_o *)&v26[1].fields, v57, v51, v52, v53, v54, v55, v56);
  this = (CharaGraphManager_o *)System_String__Concat_44838292((System_String_array *)v26, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_36442132(
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
  CharaGraphManager_o *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v20; // [xsp+8h] [xbp-58h]

  if ( (byte_4354A51 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4354A51 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v18);
  return CharaGraphManager__CreateTextureLocal_30571552(
           Instance,
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


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_30571872(
        UnityEngine_GameObject_o *parent,
        int64_t userSvtId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  UserServantEntity_o *Entity; // x22
  const MethodInfo *v12; // x5

  if ( (byte_4354A52 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B70694(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4354A52 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   userSvtId,
                   (const MethodInfo_21C0668 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__)) == 0LL) )
  {
    sub_B7076C(Instance, v10);
  }
  return CharaGraphManager__CreateTextureLocal_30572104(
           (CharaGraphManager_o *)Instance,
           parent,
           Entity,
           depth,
           callbackFunc,
           v12);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_30572456(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4354A53 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4354A53 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_30572104(Instance, parent, userSvtEntity, depth, callbackFunc, v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_30572584(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t isRealName,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x7

  if ( (byte_4354A54 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4354A54 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v14);
  return CharaGraphManager__CreateTextureLocal_30572736(
           Instance,
           parent,
           userSvtEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           isRealName,
           v15);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_30573480(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4354A55 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4354A55 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_30573608(
           Instance,
           parent,
           userSvtCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_30573960(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x6

  if ( (byte_4354A56 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4354A56 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v12);
  return CharaGraphManager__CreateTextureLocal_30574096(
           Instance,
           parent,
           userSvtCollectionEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           v13);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_30574832(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4354A57 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4354A57 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_30574960(Instance, parent, servantLeaderInfo, depth, callbackFunc, v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_30575312(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x6

  if ( (byte_4354A58 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4354A58 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v12);
  return CharaGraphManager__CreateTextureLocal_30575448(
           Instance,
           parent,
           servantLeaderInfo,
           imageLimitCount,
           depth,
           callbackFunc,
           v13);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_30576184(
        UnityEngine_GameObject_o *parent,
        EquipTargetInfo_o *equipTargetInfo,
        int32_t depth,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x6

  if ( (byte_4354A59 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4354A59 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v12);
  return CharaGraphManager__CreateTextureLocal_30576320(
           Instance,
           parent,
           equipTargetInfo,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v13);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_30576680(
        UnityEngine_GameObject_o *parent,
        EquipTargetInfo_o *equipTargetInfo,
        int32_t imageLimitCount,
        int32_t depth,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x7

  if ( (byte_4354A5A & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4354A5A = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v14);
  return CharaGraphManager__CreateTextureLocal_30576832(
           Instance,
           parent,
           equipTargetInfo,
           imageLimitCount,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v15);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_30577576(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4354A5B & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4354A5B = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_30577704(
           Instance,
           parent,
           userCommandCodeEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_30578052(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4354A5C & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4354A5C = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_30578180(
           Instance,
           parent,
           userCommandCodeCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_30578528(
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_4354A5D & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
    byte_4354A5D = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_30578656(
           Instance,
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

  if ( (byte_4354A4B & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    byte_4354A4B = 1;
  }
  AssetName = CharaGraphManager__GetAssetName(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(AssetName, callback, 1, 0LL);
}


void __fastcall CharaGraphManager__DownloadCommandAsset(
        int32_t commandCodeId,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *CommandAssetName; // x20

  if ( (byte_4354A4C & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&UICharaGraphRender_TypeInfo);
    byte_4354A4C = 1;
  }
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  }
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__downloadAssetStorage(CommandAssetName, callback, 1, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetAssetName(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  if ( (byte_4354A47 & 1) == 0 )
  {
    sub_B70694(&UICharaGraphRender_TypeInfo);
    byte_4354A47 = 1;
  }
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  }
  return UICharaGraphRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetAssetName_30570112(int32_t imageSvtId, const MethodInfo *method)
{
  if ( (byte_4354A48 & 1) == 0 )
  {
    sub_B70694(&UICharaGraphRender_TypeInfo);
    byte_4354A48 = 1;
  }
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  }
  return UICharaGraphRender__GetAssetName_36426520(imageSvtId, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  if ( (byte_4354A49 & 1) == 0 )
  {
    sub_B70694(&UICharaGraphRender_TypeInfo);
    byte_4354A49 = 1;
  }
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  }
  return UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetExCharaGraphAssetName(int32_t svtId, const MethodInfo *method)
{
  if ( (byte_4354A4A & 1) == 0 )
  {
    sub_B70694(&UICharaGraphRender_TypeInfo);
    byte_4354A4A = 1;
  }
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  }
  return UICharaGraphRender__GetExCharaGraphAssetName(svtId, 0LL);
}


void __fastcall CharaGraphManager__LoadAsset(
        int32_t svtId,
        int32_t imageLimitCount,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *AssetName; // x20

  if ( (byte_4354A4D & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    byte_4354A4D = 1;
  }
  AssetName = CharaGraphManager__GetAssetName(svtId, imageLimitCount, (const MethodInfo *)callback);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName, callback, 1, 0LL);
}


void __fastcall CharaGraphManager__LoadCommandAsset(
        int32_t commandCodeId,
        AssetLoader_LoadEndDataHandler_o *callback,
        const MethodInfo *method)
{
  System_String_o *CommandAssetName; // x20

  if ( (byte_4354A4E & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&UICharaGraphRender_TypeInfo);
    byte_4354A4E = 1;
  }
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  }
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(CommandAssetName, callback, 1, 0LL);
}


void __fastcall CharaGraphManager__ReleaseAsset(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  System_String_o *AssetName; // x19

  if ( (byte_4354A4F & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    byte_4354A4F = 1;
  }
  AssetName = CharaGraphManager__GetAssetName(svtId, imageLimitCount, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(AssetName, 0LL);
}


void __fastcall CharaGraphManager__ReleaseCommandAsset(
        int32_t commandCodeId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  System_String_o *CommandAssetName; // x19

  if ( (byte_4354A50 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&UICharaGraphRender_TypeInfo);
    byte_4354A50 = 1;
  }
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  }
  CommandAssetName = UICharaGraphRender__GetCommandAssetName(commandCodeId, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(CommandAssetName, 0LL);
}