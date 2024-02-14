void __fastcall CharaGraphManager___ctor(CharaGraphManager_o *this, const MethodInfo *method)
{
  if ( (byte_4214234 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CharaGraphManager___ctor__, method);
    byte_4214234 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
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
  struct UnityEngine_GameObject_o *commandGraphPrefab; // x20
  UnityEngine_GameObject_o *layer; // x0
  UnityEngine_GameObject_o *v11; // x22
  UICharaGraphRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421422F & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___, parent);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_14721/*"UICommandGraphTexture"*/, v8);
    byte_421422F = 1;
  }
  commandGraphPrefab = this->fields.commandGraphPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)commandGraphPrefab,
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_12;
  v11 = layer;
  Component_srcLineSprite = (UICharaGraphRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      layer,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !layer )
    goto LABEL_12;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_14721/*"UICommandGraphTexture"*/, 0LL);
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
  v20.fields.x = x;
  v20.fields.y = y;
  v20.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v20, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_srcLineSprite )
LABEL_12:
    sub_B0D97C(layer);
  UICharaGraphRender__SetLayer(Component_srcLineSprite, (int32_t)layer, 0LL);
  return (UICharaGraphTexture_o *)Component_srcLineSprite;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_24041636(
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
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v10 = this;
  if ( (byte_4214230 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v11);
    this = (CharaGraphManager_o *)sub_B0D8A4(&StringLiteral_14722/*"UICommandGraphTexture("*/, v12);
    byte_4214230 = 1;
  }
  commandCodeId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userCommandCodeEntity )
    goto LABEL_10;
  v14 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeEntity->fields.commandCodeId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_43852188(
                                        (System_String_o *)StringLiteral_14722/*"UICommandGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_658/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand((UICharaGraphTexture_o *)v17, userCommandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_24042112(
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
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v10 = this;
  if ( (byte_4214231 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v11);
    this = (CharaGraphManager_o *)sub_B0D8A4(&StringLiteral_14722/*"UICommandGraphTexture("*/, v12);
    byte_4214231 = 1;
  }
  commandCodeId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userCommandCodeCollectionEntity )
    goto LABEL_10;
  v14 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeCollectionEntity->fields.commandCodeId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_43852188(
                                        (System_String_o *)StringLiteral_14722/*"UICommandGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_658/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand_35244812(
    (UICharaGraphTexture_o *)v17,
    userCommandCodeCollectionEntity,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_24042588(
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
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v10 = this;
  if ( (byte_4214232 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v11);
    this = (CharaGraphManager_o *)sub_B0D8A4(&StringLiteral_14722/*"UICommandGraphTexture("*/, v12);
    byte_4214232 = 1;
  }
  id = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !commandCodeEntity )
    goto LABEL_10;
  v14 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &id,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        id = commandCodeEntity->fields.id,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_43852188(
                                        (System_String_o *)StringLiteral_14722/*"UICommandGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_658/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand_35244968((UICharaGraphTexture_o *)v17, commandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_24043064(
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
  int32_t commandCodeIda; // [xsp+Ch] [xbp-24h] BYREF

  commandCodeIda = commandCodeId;
  if ( (byte_4214233 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_658/*")"*/, parent);
    sub_B0D8A4(&StringLiteral_14722/*"UICommandGraphTexture("*/, v10);
    byte_4214233 = 1;
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
        CommandTextureLocal = (UnityEngine_Component_o *)System_String__Concat_43852188(
                                                           (System_String_o *)StringLiteral_14722/*"UICommandGraphTexture("*/,
                                                           v14,
                                                           (System_String_o *)StringLiteral_658/*")"*/,
                                                           0LL),
        !gameObject) )
  {
    sub_B0D97C(CommandTextureLocal);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)CommandTextureLocal, 0LL);
  UICharaGraphTexture__SetCommand_35245124(v12, commandCodeIda, callbackFunc, 0LL);
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
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_4214224 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, *(_QWORD *)&commandCodeId);
    byte_4214224 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return CharaGraphManager__CreateCommandTextureLocal_24043064(
           Instance,
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
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v15; // x21
  struct UnityEngine_GameObject_o *charaGraphPrefab; // x21
  UnityEngine_Object_o *v17; // x22
  struct UnityEngine_GameObject_o *v18; // x20
  UICharaGraphRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4214225 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, parent);
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___, v8);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&StringLiteral_14719/*"UICharaGraphTexture"*/, v12);
    byte_4214225 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
LABEL_29:
    sub_B0D97C(Instance);
  }
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity )
  {
    v15 = Entity;
    if ( ServantEntity__get_IsEnemyCollectionDetail(Entity, 0LL) )
    {
      charaGraphPrefab = this->fields.charaGraphPrefab;
    }
    else
    {
      v17 = 0LL;
      if ( !ServantEntity__get_IsServantEquip(v15, 0LL) )
        goto LABEL_15;
      charaGraphPrefab = this->fields.charaEquipGraphPrefab;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v17 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)charaGraphPrefab,
                                    (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  else
  {
    v17 = 0LL;
  }
LABEL_15:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v18 = this->fields.charaGraphPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  (UnityEngine_UI_Dropdown_DropdownItem_o *)v18,
                                  (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v17 = (UnityEngine_Object_o *)Instance;
  }
  if ( !v17 )
    goto LABEL_29;
  Component_srcLineSprite = (UICharaGraphRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)v17,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v17, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v17, 0LL);
  if ( !Instance )
    goto LABEL_29;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name(v17, (System_String_o *)StringLiteral_14719/*"UICharaGraphTexture"*/, 0LL);
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
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v27, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_29;
  UICharaGraphRender__SetLayer(Component_srcLineSprite, (int32_t)Instance, 0LL);
  return (UICharaGraphTexture_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_24035484(
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
  int32_t v24; // [xsp+8h] [xbp-48h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-44h] BYREF

  v24 = limitCount;
  v25 = svtId;
  if ( (byte_4214226 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_14720/*"UICharaGraphTexture("*/, parent);
    sub_B0D8A4(&StringLiteral_658/*")"*/, v17);
    byte_4214226 = 1;
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
        TextureLocal = (UnityEngine_Component_o *)System_String__Concat_43853316(
                                                    (System_String_o *)StringLiteral_14720/*"UICharaGraphTexture("*/,
                                                    v21,
                                                    v22,
                                                    (System_String_o *)StringLiteral_658/*")"*/,
                                                    0LL),
        !gameObject) )
  {
    sub_B0D97C(TextureLocal);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)TextureLocal, 0LL);
  UICharaGraphTexture__SetCharacter(v19, v25, v24, exceedCount, isOwn, callbackFunc, isRealName, 0LL);
  UICharaGraphTexture__SetDepth(v19, depth, 0LL);
  return v19;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_24036036(
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
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v10 = this;
  if ( (byte_4214227 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B0D8A4(&StringLiteral_14720/*"UICharaGraphTexture("*/, v11);
    this = (CharaGraphManager_o *)sub_B0D8A4(&StringLiteral_658/*")"*/, v12);
    byte_4214227 = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userSvtEntity )
    goto LABEL_10;
  v14 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        svtId = userSvtEntity->fields.svtId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_43852188(
                                        (System_String_o *)StringLiteral_14720/*"UICharaGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_658/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_35242648((UICharaGraphTexture_o *)v17, userSvtEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_24036668(
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  CharaGraphManager_o *v30; // x25
  System_String_o *v31; // x0
  System_Int32_array **v32; // x1
  const MethodInfo *v33; // x2
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x26
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x26
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  __int64 v63; // x0
  __int64 v64; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_4214228 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B0D8A4(&string___TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_799/*"-I"*/, v15);
    sub_B0D8A4(&StringLiteral_14720/*"UICharaGraphTexture("*/, v16);
    this = (CharaGraphManager_o *)sub_B0D8A4(&StringLiteral_658/*")"*/, v17);
    byte_4214228 = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userSvtEntity )
    goto LABEL_33;
  v19 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v67.fields.currentCryptoKey = v19;
  *(_QWORD *)&v67.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v67, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v20, v21);
  if ( !this
    || (v22 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (this = (CharaGraphManager_o *)sub_B0D8BC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_33:
    sub_B0D97C(this);
  }
  v30 = this;
  v31 = (System_String_o *)StringLiteral_14720/*"UICharaGraphTexture("*/;
  if ( StringLiteral_14720/*"UICharaGraphTexture("*/ )
  {
    v31 = (System_String_o *)sub_B0D964(StringLiteral_14720/*"UICharaGraphTexture("*/, v30->klass->_1.element_class);
    if ( !v31 )
      goto LABEL_34;
    v32 = (System_Int32_array **)StringLiteral_14720/*"UICharaGraphTexture("*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( !LODWORD(v30->fields.charaGraphPrefab) )
    goto LABEL_32;
  v30->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)v32;
  sub_B0D840((BattleServantConfConponent_o *)&v30->fields.charaEquipGraphPrefab, v32, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)&v68.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v68.fields.fakeValue = 0LL;
  svtId = userSvtEntity->fields.svtId;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v68, v33);
  v40 = (System_Int32_array **)v31;
  if ( v31 )
  {
    v31 = (System_String_o *)sub_B0D964(v31, v30->klass->_1.element_class);
    if ( !v31 )
      goto LABEL_34;
  }
  if ( LODWORD(v30->fields.charaGraphPrefab) <= 1 )
    goto LABEL_32;
  v30->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)v40;
  sub_B0D840((BattleServantConfConponent_o *)&v30->fields.commandGraphPrefab, v40, v34, v35, v36, v37, v38, v39);
  v31 = (System_String_o *)StringLiteral_799/*"-I"*/;
  if ( StringLiteral_799/*"-I"*/ )
  {
    v31 = (System_String_o *)sub_B0D964(StringLiteral_799/*"-I"*/, v30->klass->_1.element_class);
    if ( !v31 )
      goto LABEL_34;
    v47 = (System_Int32_array **)StringLiteral_799/*"-I"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( LODWORD(v30->fields.charaGraphPrefab) <= 2 )
    goto LABEL_32;
  v30[1].klass = (CharaGraphManager_c *)v47;
  sub_B0D840((BattleServantConfConponent_o *)&v30[1], v47, v41, v42, v43, v44, v45, v46);
  v31 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v54 = (System_Int32_array **)v31;
  if ( v31 )
  {
    v31 = (System_String_o *)sub_B0D964(v31, v30->klass->_1.element_class);
    if ( !v31 )
    {
LABEL_34:
      v64 = sub_B0D99C(v31);
      sub_B0D948(v64, 0LL);
    }
  }
  if ( LODWORD(v30->fields.charaGraphPrefab) <= 3 )
    goto LABEL_32;
  v30[1].monitor = v54;
  sub_B0D840((BattleServantConfConponent_o *)&v30[1].monitor, v54, v48, v49, v50, v51, v52, v53);
  v31 = (System_String_o *)StringLiteral_658/*")"*/;
  if ( StringLiteral_658/*")"*/ )
  {
    v31 = (System_String_o *)sub_B0D964(StringLiteral_658/*")"*/, v30->klass->_1.element_class);
    if ( v31 )
    {
      v61 = (System_Int32_array **)StringLiteral_658/*")"*/;
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v61 = 0LL;
LABEL_29:
  if ( LODWORD(v30->fields.charaGraphPrefab) <= 4 )
  {
LABEL_32:
    v63 = sub_B0D9A8(v31);
    sub_B0D948(v63, 0LL);
  }
  *(_QWORD *)&v30[1].fields.m_CachedPtr = v61;
  sub_B0D840((BattleServantConfConponent_o *)&v30[1].fields, v61, v55, v56, v57, v58, v59, v60);
  this = (CharaGraphManager_o *)System_String__Concat_43930028((System_String_array *)v30, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_35242912(
    (UICharaGraphTexture_o *)v22,
    userSvtEntity,
    imageLimitCounta,
    callbackFunc,
    isRealName,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v22, depth, 0LL);
  return (UICharaGraphTexture_o *)v22;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_24037540(
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
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v10 = this;
  if ( (byte_4214229 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B0D8A4(&StringLiteral_14720/*"UICharaGraphTexture("*/, v11);
    this = (CharaGraphManager_o *)sub_B0D8A4(&StringLiteral_658/*")"*/, v12);
    byte_4214229 = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userSvtCollectionEntity )
    goto LABEL_10;
  v14 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        svtId = userSvtCollectionEntity->fields.svtId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_43852188(
                                        (System_String_o *)StringLiteral_14720/*"UICharaGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_658/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_35243192((UICharaGraphTexture_o *)v17, userSvtCollectionEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_24038028(
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CharaGraphManager_o *v28; // x24
  System_String_o *v29; // x0
  System_Int32_array **v30; // x1
  const MethodInfo *v31; // x2
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x25
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x25
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  __int64 v61; // x0
  __int64 v62; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  v11 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_421422A & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B0D8A4(&string___TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_799/*"-I"*/, v13);
    sub_B0D8A4(&StringLiteral_14720/*"UICharaGraphTexture("*/, v14);
    this = (CharaGraphManager_o *)sub_B0D8A4(&StringLiteral_658/*")"*/, v15);
    byte_421422A = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userSvtCollectionEntity )
    goto LABEL_33;
  v17 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v65.fields.currentCryptoKey = v17;
  *(_QWORD *)&v65.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v65, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v11, parent, v18, v19);
  if ( !this
    || (v20 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (this = (CharaGraphManager_o *)sub_B0D8BC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_33:
    sub_B0D97C(this);
  }
  v28 = this;
  v29 = (System_String_o *)StringLiteral_14720/*"UICharaGraphTexture("*/;
  if ( StringLiteral_14720/*"UICharaGraphTexture("*/ )
  {
    v29 = (System_String_o *)sub_B0D964(StringLiteral_14720/*"UICharaGraphTexture("*/, v28->klass->_1.element_class);
    if ( !v29 )
      goto LABEL_34;
    v30 = (System_Int32_array **)StringLiteral_14720/*"UICharaGraphTexture("*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( !LODWORD(v28->fields.charaGraphPrefab) )
    goto LABEL_32;
  v28->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)v30;
  sub_B0D840((BattleServantConfConponent_o *)&v28->fields.charaEquipGraphPrefab, v30, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)&v66.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v66.fields.fakeValue = 0LL;
  svtId = userSvtCollectionEntity->fields.svtId;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v66, v31);
  v38 = (System_Int32_array **)v29;
  if ( v29 )
  {
    v29 = (System_String_o *)sub_B0D964(v29, v28->klass->_1.element_class);
    if ( !v29 )
      goto LABEL_34;
  }
  if ( LODWORD(v28->fields.charaGraphPrefab) <= 1 )
    goto LABEL_32;
  v28->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)v38;
  sub_B0D840((BattleServantConfConponent_o *)&v28->fields.commandGraphPrefab, v38, v32, v33, v34, v35, v36, v37);
  v29 = (System_String_o *)StringLiteral_799/*"-I"*/;
  if ( StringLiteral_799/*"-I"*/ )
  {
    v29 = (System_String_o *)sub_B0D964(StringLiteral_799/*"-I"*/, v28->klass->_1.element_class);
    if ( !v29 )
      goto LABEL_34;
    v45 = (System_Int32_array **)StringLiteral_799/*"-I"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( LODWORD(v28->fields.charaGraphPrefab) <= 2 )
    goto LABEL_32;
  v28[1].klass = (CharaGraphManager_c *)v45;
  sub_B0D840((BattleServantConfConponent_o *)&v28[1], v45, v39, v40, v41, v42, v43, v44);
  v29 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v52 = (System_Int32_array **)v29;
  if ( v29 )
  {
    v29 = (System_String_o *)sub_B0D964(v29, v28->klass->_1.element_class);
    if ( !v29 )
    {
LABEL_34:
      v62 = sub_B0D99C(v29);
      sub_B0D948(v62, 0LL);
    }
  }
  if ( LODWORD(v28->fields.charaGraphPrefab) <= 3 )
    goto LABEL_32;
  v28[1].monitor = v52;
  sub_B0D840((BattleServantConfConponent_o *)&v28[1].monitor, v52, v46, v47, v48, v49, v50, v51);
  v29 = (System_String_o *)StringLiteral_658/*")"*/;
  if ( StringLiteral_658/*")"*/ )
  {
    v29 = (System_String_o *)sub_B0D964(StringLiteral_658/*")"*/, v28->klass->_1.element_class);
    if ( v29 )
    {
      v59 = (System_Int32_array **)StringLiteral_658/*")"*/;
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v59 = 0LL;
LABEL_29:
  if ( LODWORD(v28->fields.charaGraphPrefab) <= 4 )
  {
LABEL_32:
    v61 = sub_B0D9A8(v29);
    sub_B0D948(v61, 0LL);
  }
  *(_QWORD *)&v28[1].fields.m_CachedPtr = v59;
  sub_B0D840((BattleServantConfConponent_o *)&v28[1].fields, v59, v53, v54, v55, v56, v57, v58);
  this = (CharaGraphManager_o *)System_String__Concat_43930028((System_String_array *)v28, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_35243464(
    (UICharaGraphTexture_o *)v20,
    userSvtCollectionEntity,
    imageLimitCounta,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v20, depth, 0LL);
  return (UICharaGraphTexture_o *)v20;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_24038892(
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
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v10 = this;
  if ( (byte_421422B & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B0D8A4(&StringLiteral_14720/*"UICharaGraphTexture("*/, v11);
    this = (CharaGraphManager_o *)sub_B0D8A4(&StringLiteral_658/*")"*/, v12);
    byte_421422B = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !servantLeaderInfo )
    goto LABEL_10;
  v14 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v14;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v23, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v15, v16);
  if ( !this
    || (v17 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v24.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v24.fields.fakeValue = 0LL,
        svtId = servantLeaderInfo->fields.svtId,
        v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v24, v19),
        this = (CharaGraphManager_o *)System_String__Concat_43852188(
                                        (System_String_o *)StringLiteral_14720/*"UICharaGraphTexture("*/,
                                        v20,
                                        (System_String_o *)StringLiteral_658/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_35243740((UICharaGraphTexture_o *)v17, servantLeaderInfo, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v17, depth, 0LL);
  return (UICharaGraphTexture_o *)v17;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_24039380(
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CharaGraphManager_o *v28; // x24
  System_String_o *v29; // x0
  System_Int32_array **v30; // x1
  const MethodInfo *v31; // x2
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x25
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x25
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  __int64 v61; // x0
  __int64 v62; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  v11 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_421422C & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B0D8A4(&string___TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_799/*"-I"*/, v13);
    sub_B0D8A4(&StringLiteral_14720/*"UICharaGraphTexture("*/, v14);
    this = (CharaGraphManager_o *)sub_B0D8A4(&StringLiteral_658/*")"*/, v15);
    byte_421422C = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !servantLeaderInfo )
    goto LABEL_33;
  v17 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v65.fields.currentCryptoKey = v17;
  *(_QWORD *)&v65.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v65, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v11, parent, v18, v19);
  if ( !this
    || (v20 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (this = (CharaGraphManager_o *)sub_B0D8BC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_33:
    sub_B0D97C(this);
  }
  v28 = this;
  v29 = (System_String_o *)StringLiteral_14720/*"UICharaGraphTexture("*/;
  if ( StringLiteral_14720/*"UICharaGraphTexture("*/ )
  {
    v29 = (System_String_o *)sub_B0D964(StringLiteral_14720/*"UICharaGraphTexture("*/, v28->klass->_1.element_class);
    if ( !v29 )
      goto LABEL_34;
    v30 = (System_Int32_array **)StringLiteral_14720/*"UICharaGraphTexture("*/;
  }
  else
  {
    v30 = 0LL;
  }
  if ( !LODWORD(v28->fields.charaGraphPrefab) )
    goto LABEL_32;
  v28->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)v30;
  sub_B0D840((BattleServantConfConponent_o *)&v28->fields.charaEquipGraphPrefab, v30, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)&v66.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v66.fields.fakeValue = 0LL;
  svtId = servantLeaderInfo->fields.svtId;
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v66, v31);
  v38 = (System_Int32_array **)v29;
  if ( v29 )
  {
    v29 = (System_String_o *)sub_B0D964(v29, v28->klass->_1.element_class);
    if ( !v29 )
      goto LABEL_34;
  }
  if ( LODWORD(v28->fields.charaGraphPrefab) <= 1 )
    goto LABEL_32;
  v28->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)v38;
  sub_B0D840((BattleServantConfConponent_o *)&v28->fields.commandGraphPrefab, v38, v32, v33, v34, v35, v36, v37);
  v29 = (System_String_o *)StringLiteral_799/*"-I"*/;
  if ( StringLiteral_799/*"-I"*/ )
  {
    v29 = (System_String_o *)sub_B0D964(StringLiteral_799/*"-I"*/, v28->klass->_1.element_class);
    if ( !v29 )
      goto LABEL_34;
    v45 = (System_Int32_array **)StringLiteral_799/*"-I"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( LODWORD(v28->fields.charaGraphPrefab) <= 2 )
    goto LABEL_32;
  v28[1].klass = (CharaGraphManager_c *)v45;
  sub_B0D840((BattleServantConfConponent_o *)&v28[1], v45, v39, v40, v41, v42, v43, v44);
  v29 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v52 = (System_Int32_array **)v29;
  if ( v29 )
  {
    v29 = (System_String_o *)sub_B0D964(v29, v28->klass->_1.element_class);
    if ( !v29 )
    {
LABEL_34:
      v62 = sub_B0D99C(v29);
      sub_B0D948(v62, 0LL);
    }
  }
  if ( LODWORD(v28->fields.charaGraphPrefab) <= 3 )
    goto LABEL_32;
  v28[1].monitor = v52;
  sub_B0D840((BattleServantConfConponent_o *)&v28[1].monitor, v52, v46, v47, v48, v49, v50, v51);
  v29 = (System_String_o *)StringLiteral_658/*")"*/;
  if ( StringLiteral_658/*")"*/ )
  {
    v29 = (System_String_o *)sub_B0D964(StringLiteral_658/*")"*/, v28->klass->_1.element_class);
    if ( v29 )
    {
      v59 = (System_Int32_array **)StringLiteral_658/*")"*/;
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v59 = 0LL;
LABEL_29:
  if ( LODWORD(v28->fields.charaGraphPrefab) <= 4 )
  {
LABEL_32:
    v61 = sub_B0D9A8(v29);
    sub_B0D948(v61, 0LL);
  }
  *(_QWORD *)&v28[1].fields.m_CachedPtr = v59;
  sub_B0D840((BattleServantConfConponent_o *)&v28[1].fields, v59, v53, v54, v55, v56, v57, v58);
  this = (CharaGraphManager_o *)System_String__Concat_43930028((System_String_array *)v28, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_35243956(
    (UICharaGraphTexture_o *)v20,
    servantLeaderInfo,
    imageLimitCounta,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v20, depth, 0LL);
  return (UICharaGraphTexture_o *)v20;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_24040252(
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
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v12 = this;
  if ( (byte_421422D & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B0D8A4(&StringLiteral_14720/*"UICharaGraphTexture("*/, v13);
    this = (CharaGraphManager_o *)sub_B0D8A4(&StringLiteral_658/*")"*/, v14);
    byte_421422D = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !equipTargetInfo )
    goto LABEL_10;
  v16 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v25.fields.currentCryptoKey = v16;
  *(_QWORD *)&v25.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v25, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v12, parent, v17, v18);
  if ( !this
    || (v19 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v26.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v26.fields.fakeValue = 0LL,
        svtId = equipTargetInfo->fields.svtId,
        v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v21),
        this = (CharaGraphManager_o *)System_String__Concat_43852188(
                                        (System_String_o *)StringLiteral_14720/*"UICharaGraphTexture("*/,
                                        v22,
                                        (System_String_o *)StringLiteral_658/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_35244196(
    (UICharaGraphTexture_o *)v19,
    equipTargetInfo,
    isNpcFollowerServantEquip,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v19, depth, 0LL);
  return (UICharaGraphTexture_o *)v19;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_24040764(
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  CharaGraphManager_o *v30; // x25
  System_String_o *v31; // x0
  System_Int32_array **v32; // x1
  const MethodInfo *v33; // x2
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x26
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x26
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  __int64 v63; // x0
  __int64 v64; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_421422E & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B0D8A4(&string___TypeInfo, v14);
    sub_B0D8A4(&StringLiteral_799/*"-I"*/, v15);
    sub_B0D8A4(&StringLiteral_14720/*"UICharaGraphTexture("*/, v16);
    this = (CharaGraphManager_o *)sub_B0D8A4(&StringLiteral_658/*")"*/, v17);
    byte_421422E = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !equipTargetInfo )
    goto LABEL_33;
  v19 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v67.fields.currentCryptoKey = v19;
  *(_QWORD *)&v67.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v67, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v20, v21);
  if ( !this
    || (v22 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (this = (CharaGraphManager_o *)sub_B0D8BC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_33:
    sub_B0D97C(this);
  }
  v30 = this;
  v31 = (System_String_o *)StringLiteral_14720/*"UICharaGraphTexture("*/;
  if ( StringLiteral_14720/*"UICharaGraphTexture("*/ )
  {
    v31 = (System_String_o *)sub_B0D964(StringLiteral_14720/*"UICharaGraphTexture("*/, v30->klass->_1.element_class);
    if ( !v31 )
      goto LABEL_34;
    v32 = (System_Int32_array **)StringLiteral_14720/*"UICharaGraphTexture("*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( !LODWORD(v30->fields.charaGraphPrefab) )
    goto LABEL_32;
  v30->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)v32;
  sub_B0D840((BattleServantConfConponent_o *)&v30->fields.charaEquipGraphPrefab, v32, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)&v68.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v68.fields.fakeValue = 0LL;
  svtId = equipTargetInfo->fields.svtId;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v68, v33);
  v40 = (System_Int32_array **)v31;
  if ( v31 )
  {
    v31 = (System_String_o *)sub_B0D964(v31, v30->klass->_1.element_class);
    if ( !v31 )
      goto LABEL_34;
  }
  if ( LODWORD(v30->fields.charaGraphPrefab) <= 1 )
    goto LABEL_32;
  v30->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)v40;
  sub_B0D840((BattleServantConfConponent_o *)&v30->fields.commandGraphPrefab, v40, v34, v35, v36, v37, v38, v39);
  v31 = (System_String_o *)StringLiteral_799/*"-I"*/;
  if ( StringLiteral_799/*"-I"*/ )
  {
    v31 = (System_String_o *)sub_B0D964(StringLiteral_799/*"-I"*/, v30->klass->_1.element_class);
    if ( !v31 )
      goto LABEL_34;
    v47 = (System_Int32_array **)StringLiteral_799/*"-I"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( LODWORD(v30->fields.charaGraphPrefab) <= 2 )
    goto LABEL_32;
  v30[1].klass = (CharaGraphManager_c *)v47;
  sub_B0D840((BattleServantConfConponent_o *)&v30[1], v47, v41, v42, v43, v44, v45, v46);
  v31 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v54 = (System_Int32_array **)v31;
  if ( v31 )
  {
    v31 = (System_String_o *)sub_B0D964(v31, v30->klass->_1.element_class);
    if ( !v31 )
    {
LABEL_34:
      v64 = sub_B0D99C(v31);
      sub_B0D948(v64, 0LL);
    }
  }
  if ( LODWORD(v30->fields.charaGraphPrefab) <= 3 )
    goto LABEL_32;
  v30[1].monitor = v54;
  sub_B0D840((BattleServantConfConponent_o *)&v30[1].monitor, v54, v48, v49, v50, v51, v52, v53);
  v31 = (System_String_o *)StringLiteral_658/*")"*/;
  if ( StringLiteral_658/*")"*/ )
  {
    v31 = (System_String_o *)sub_B0D964(StringLiteral_658/*")"*/, v30->klass->_1.element_class);
    if ( v31 )
    {
      v61 = (System_Int32_array **)StringLiteral_658/*")"*/;
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v61 = 0LL;
LABEL_29:
  if ( LODWORD(v30->fields.charaGraphPrefab) <= 4 )
  {
LABEL_32:
    v63 = sub_B0D9A8(v31);
    sub_B0D948(v63, 0LL);
  }
  *(_QWORD *)&v30[1].fields.m_CachedPtr = v61;
  sub_B0D840((BattleServantConfConponent_o *)&v30[1].fields, v61, v55, v56, v57, v58, v59, v60);
  this = (CharaGraphManager_o *)System_String__Concat_43930028((System_String_array *)v30, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_35244400(
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
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v19; // [xsp+8h] [xbp-58h]

  if ( (byte_4214217 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, *(_QWORD *)&svtId);
    byte_4214217 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return CharaGraphManager__CreateTextureLocal_24035484(
           Instance,
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


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_24035804(
        UnityEngine_GameObject_o *parent,
        int64_t userSvtId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x22
  const MethodInfo *v14; // x5

  if ( (byte_4214218 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, v11);
    byte_4214218 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   userSvtId,
                   (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  return CharaGraphManager__CreateTextureLocal_24036036(
           (CharaGraphManager_o *)Instance,
           parent,
           Entity,
           depth,
           callbackFunc,
           v14);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_24036388(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_4214219 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtEntity);
    byte_4214219 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return CharaGraphManager__CreateTextureLocal_24036036(Instance, parent, userSvtEntity, depth, callbackFunc, v10);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_24036516(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t isRealName,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v14; // x7

  if ( (byte_421421A & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtEntity);
    byte_421421A = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return CharaGraphManager__CreateTextureLocal_24036668(
           Instance,
           parent,
           userSvtEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           isRealName,
           v14);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_24037412(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_421421B & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtCollectionEntity);
    byte_421421B = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return CharaGraphManager__CreateTextureLocal_24037540(
           Instance,
           parent,
           userSvtCollectionEntity,
           depth,
           callbackFunc,
           v10);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_24037892(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v12; // x6

  if ( (byte_421421C & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtCollectionEntity);
    byte_421421C = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return CharaGraphManager__CreateTextureLocal_24038028(
           Instance,
           parent,
           userSvtCollectionEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           v12);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_24038764(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_421421D & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, servantLeaderInfo);
    byte_421421D = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return CharaGraphManager__CreateTextureLocal_24038892(Instance, parent, servantLeaderInfo, depth, callbackFunc, v10);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_24039244(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v12; // x6

  if ( (byte_421421E & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, servantLeaderInfo);
    byte_421421E = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return CharaGraphManager__CreateTextureLocal_24039380(
           Instance,
           parent,
           servantLeaderInfo,
           imageLimitCount,
           depth,
           callbackFunc,
           v12);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_24040116(
        UnityEngine_GameObject_o *parent,
        EquipTargetInfo_o *equipTargetInfo,
        int32_t depth,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v12; // x6

  if ( (byte_421421F & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, equipTargetInfo);
    byte_421421F = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return CharaGraphManager__CreateTextureLocal_24040252(
           Instance,
           parent,
           equipTargetInfo,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v12);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_24040612(
        UnityEngine_GameObject_o *parent,
        EquipTargetInfo_o *equipTargetInfo,
        int32_t imageLimitCount,
        int32_t depth,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v14; // x7

  if ( (byte_4214220 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, equipTargetInfo);
    byte_4214220 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return CharaGraphManager__CreateTextureLocal_24040764(
           Instance,
           parent,
           equipTargetInfo,
           imageLimitCount,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v14);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_24041508(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_4214221 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userCommandCodeEntity);
    byte_4214221 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return CharaGraphManager__CreateCommandTextureLocal_24041636(
           Instance,
           parent,
           userCommandCodeEntity,
           depth,
           callbackFunc,
           v10);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_24041984(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_4214222 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userCommandCodeCollectionEntity);
    byte_4214222 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return CharaGraphManager__CreateCommandTextureLocal_24042112(
           Instance,
           parent,
           userCommandCodeCollectionEntity,
           depth,
           callbackFunc,
           v10);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_24042460(
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_4214223 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, commandCodeEntity);
    byte_4214223 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  return CharaGraphManager__CreateCommandTextureLocal_24042588(
           Instance,
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

  if ( (byte_4214211 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4214211 = 1;
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
  __int64 v5; // x1
  System_String_o *CommandAssetName; // x20

  if ( (byte_4214212 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, callback);
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, v5);
    byte_4214212 = 1;
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CharaGraphManager__GetAssetName(
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  if ( (byte_421420D & 1) == 0 )
  {
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_421420D = 1;
  }
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  }
  return UICharaGraphRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetAssetName_24034044(int32_t imageSvtId, const MethodInfo *method)
{
  if ( (byte_421420E & 1) == 0 )
  {
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, method);
    byte_421420E = 1;
  }
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  }
  return UICharaGraphRender__GetAssetName_35229380(imageSvtId, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  if ( (byte_421420F & 1) == 0 )
  {
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, method);
    byte_421420F = 1;
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
  if ( (byte_4214210 & 1) == 0 )
  {
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, method);
    byte_4214210 = 1;
  }
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  }
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

  if ( (byte_4214213 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4214213 = 1;
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
  __int64 v5; // x1
  System_String_o *CommandAssetName; // x20

  if ( (byte_4214214 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, callback);
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, v5);
    byte_4214214 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphManager__ReleaseAsset(int32_t svtId, int32_t imageLimitCount, const MethodInfo *method)
{
  System_String_o *AssetName; // x19

  if ( (byte_4214215 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_4214215 = 1;
  }
  AssetName = CharaGraphManager__GetAssetName(svtId, imageLimitCount, method);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4214216 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    sub_B0D8A4(&UICharaGraphRender_TypeInfo, v4);
    byte_4214216 = 1;
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