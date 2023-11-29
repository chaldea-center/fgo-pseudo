void __fastcall CharaGraphManager___ctor(CharaGraphManager_o *this, const MethodInfo *method)
{
  if ( (byte_40FAF02 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CharaGraphManager___ctor__, method);
    byte_40FAF02 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
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
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x22
  UICharaGraphRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v14; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Transform_o *v18; // x0
  int32_t layer; // w0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FAEFD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___, parent);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_14616, v8);
    byte_40FAEFD = 1;
  }
  commandGraphPrefab = this->fields.commandGraphPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      (UnityEngine_UI_Dropdown_DropdownItem_o *)commandGraphPrefab,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v10 )
    goto LABEL_12;
  v11 = v10;
  Component_srcLineSprite = (UICharaGraphRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v10,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform(v11, 0LL);
  v14 = UnityEngine_GameObject__get_transform(v11, 0LL);
  if ( !v14 )
    goto LABEL_12;
  localScale = UnityEngine_Transform__get_localScale(v14, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v11, (System_String_o *)StringLiteral_14616, 0LL);
  if ( !parent )
    goto LABEL_12;
  v18 = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_12;
  UnityEngine_Transform__set_parent(transform, v18, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v23.fields.x = x;
  v23.fields.y = y;
  v23.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v23, 0LL);
  layer = UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_srcLineSprite )
LABEL_12:
    sub_B170D4();
  UICharaGraphRender__SetLayer(Component_srcLineSprite, layer, 0LL);
  return (UICharaGraphTexture_o *)Component_srcLineSprite;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_26887952(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Component_o *CommandTextureLocal; // x0
  UICharaGraphTexture_o *v18; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v20; // x2
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40FAEFE & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B16FFC(&StringLiteral_651, v11);
    sub_B16FFC(&StringLiteral_14617, v12);
    byte_40FAEFE = 1;
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
  *(_QWORD *)&v25.fields.currentCryptoKey = v14;
  *(_QWORD *)&v25.fields.fakeValue = v13;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v25, 0LL);
  CommandTextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateCommandTextureLocal(this, parent, v15, v16);
  if ( !CommandTextureLocal
    || (v18 = (UICharaGraphTexture_o *)CommandTextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(CommandTextureLocal, 0LL),
        *(_QWORD *)&v26.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v26.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeEntity->fields.commandCodeId,
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v20),
        v22 = System_String__Concat_43746016(
                (System_String_o *)StringLiteral_14617,
                v21,
                (System_String_o *)StringLiteral_651,
                0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_Object__set_name(gameObject, v22, 0LL);
  UICharaGraphTexture__SetCommand(v18, userCommandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth(v18, depth, 0LL);
  return v18;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_26888428(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Component_o *CommandTextureLocal; // x0
  UICharaGraphTexture_o *v18; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v20; // x2
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40FAEFF & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B16FFC(&StringLiteral_651, v11);
    sub_B16FFC(&StringLiteral_14617, v12);
    byte_40FAEFF = 1;
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
  *(_QWORD *)&v25.fields.currentCryptoKey = v14;
  *(_QWORD *)&v25.fields.fakeValue = v13;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v25, 0LL);
  CommandTextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateCommandTextureLocal(this, parent, v15, v16);
  if ( !CommandTextureLocal
    || (v18 = (UICharaGraphTexture_o *)CommandTextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(CommandTextureLocal, 0LL),
        *(_QWORD *)&v26.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v26.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeCollectionEntity->fields.commandCodeId,
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v20),
        v22 = System_String__Concat_43746016(
                (System_String_o *)StringLiteral_14617,
                v21,
                (System_String_o *)StringLiteral_651,
                0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_Object__set_name(gameObject, v22, 0LL);
  UICharaGraphTexture__SetCommand_35081976(v18, userCommandCodeCollectionEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth(v18, depth, 0LL);
  return v18;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_26888904(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Component_o *CommandTextureLocal; // x0
  UICharaGraphTexture_o *v18; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v20; // x2
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40FAF00 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B16FFC(&StringLiteral_651, v11);
    sub_B16FFC(&StringLiteral_14617, v12);
    byte_40FAF00 = 1;
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
  *(_QWORD *)&v25.fields.currentCryptoKey = v14;
  *(_QWORD *)&v25.fields.fakeValue = v13;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v25, 0LL);
  CommandTextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateCommandTextureLocal(this, parent, v15, v16);
  if ( !CommandTextureLocal
    || (v18 = (UICharaGraphTexture_o *)CommandTextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(CommandTextureLocal, 0LL),
        *(_QWORD *)&v26.fields.currentCryptoKey = &id,
        *(_QWORD *)&v26.fields.fakeValue = 0LL,
        id = commandCodeEntity->fields.id,
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v20),
        v22 = System_String__Concat_43746016(
                (System_String_o *)StringLiteral_14617,
                v21,
                (System_String_o *)StringLiteral_651,
                0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_Object__set_name(gameObject, v22, 0LL);
  UICharaGraphTexture__SetCommand_35082132(v18, commandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth(v18, depth, 0LL);
  return v18;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_26889380(
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
  System_String_o *v15; // x0
  int32_t commandCodeIda; // [xsp+Ch] [xbp-24h] BYREF

  commandCodeIda = commandCodeId;
  if ( (byte_40FAF01 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_651, parent);
    sub_B16FFC(&StringLiteral_14617, v10);
    byte_40FAF01 = 1;
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
        v15 = System_String__Concat_43746016(
                (System_String_o *)StringLiteral_14617,
                v14,
                (System_String_o *)StringLiteral_651,
                0LL),
        !gameObject) )
  {
    sub_B170D4();
  }
  UnityEngine_Object__set_name(gameObject, v15, 0LL);
  UICharaGraphTexture__SetCommand_35082288(v12, commandCodeIda, callbackFunc, 0LL);
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

  if ( (byte_40FAEF2 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, *(_QWORD *)&commandCodeId);
    byte_40FAEF2 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return CharaGraphManager__CreateCommandTextureLocal_26889380(
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v16; // x21
  struct UnityEngine_GameObject_o *charaGraphPrefab; // x21
  UnityEngine_Object_o *v18; // x22
  struct UnityEngine_GameObject_o *v19; // x20
  UICharaGraphRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  UnityEngine_Transform_o *v22; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Transform_o *v26; // x0
  int32_t layer; // w0
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FAEF3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, parent);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&StringLiteral_14614, v12);
    byte_40FAEF3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
LABEL_29:
    sub_B170D4();
  }
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                MasterData_WarQuestSelectionMaster,
                                svtId,
                                (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity )
  {
    v16 = Entity;
    if ( ServantEntity__get_IsEnemyCollectionDetail(Entity, 0LL) )
    {
      charaGraphPrefab = this->fields.charaGraphPrefab;
    }
    else
    {
      v18 = 0LL;
      if ( !ServantEntity__get_IsServantEquip(v16, 0LL) )
        goto LABEL_15;
      charaGraphPrefab = this->fields.charaEquipGraphPrefab;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v18 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)charaGraphPrefab,
                                    (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  else
  {
    v18 = 0LL;
  }
LABEL_15:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v18, 0LL, 0LL) )
  {
    v19 = this->fields.charaGraphPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v18 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)v19,
                                    (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  if ( !v18 )
    goto LABEL_29;
  Component_srcLineSprite = (UICharaGraphRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)v18,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v18, 0LL);
  v22 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v18, 0LL);
  if ( !v22 )
    goto LABEL_29;
  localScale = UnityEngine_Transform__get_localScale(v22, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name(v18, (System_String_o *)StringLiteral_14614, 0LL);
  if ( !parent )
    goto LABEL_29;
  v26 = UnityEngine_GameObject__get_transform(parent, 0LL);
  if ( !transform )
    goto LABEL_29;
  UnityEngine_Transform__set_parent(transform, v26, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(transform, zero, 0LL);
  identity = UnityEngine_Quaternion__get_identity(0LL);
  UnityEngine_Transform__set_localRotation(transform, identity, 0LL);
  v31.fields.x = x;
  v31.fields.y = y;
  v31.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v31, 0LL);
  layer = UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_29;
  UICharaGraphRender__SetLayer(Component_srcLineSprite, layer, 0LL);
  return (UICharaGraphTexture_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26881800(
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
  System_String_o *v23; // x0
  int32_t v25; // [xsp+8h] [xbp-48h] BYREF
  int32_t v26; // [xsp+Ch] [xbp-44h] BYREF

  v25 = limitCount;
  v26 = svtId;
  if ( (byte_40FAEF4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_14615, parent);
    sub_B16FFC(&StringLiteral_651, v17);
    byte_40FAEF4 = 1;
  }
  TextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateTextureLocal(
                                              this,
                                              parent,
                                              svtId,
                                              *(const MethodInfo **)&limitCount);
  if ( !TextureLocal
    || (v19 = (UICharaGraphTexture_o *)TextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(TextureLocal, 0LL),
        v21 = System_Int32__ToString((int32_t)&v26, 0LL),
        v22 = System_Int32__ToString((int32_t)&v25, 0LL),
        v23 = System_String__Concat_43747144(
                (System_String_o *)StringLiteral_14615,
                v21,
                v22,
                (System_String_o *)StringLiteral_651,
                0LL),
        !gameObject) )
  {
    sub_B170D4();
  }
  UnityEngine_Object__set_name(gameObject, v23, 0LL);
  UICharaGraphTexture__SetCharacter(v19, v26, v25, exceedCount, isOwn, callbackFunc, isRealName, 0LL);
  UICharaGraphTexture__SetDepth(v19, depth, 0LL);
  return v19;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26882352(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t v15; // w0
  const MethodInfo *v16; // x3
  UnityEngine_Component_o *TextureLocal; // x0
  UICharaGraphTexture_o *v18; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v20; // x2
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40FAEF5 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B16FFC(&StringLiteral_14615, v11);
    sub_B16FFC(&StringLiteral_651, v12);
    byte_40FAEF5 = 1;
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
  *(_QWORD *)&v25.fields.currentCryptoKey = v14;
  *(_QWORD *)&v25.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v25, 0LL);
  TextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateTextureLocal(this, parent, v15, v16);
  if ( !TextureLocal
    || (v18 = (UICharaGraphTexture_o *)TextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(TextureLocal, 0LL),
        *(_QWORD *)&v26.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v26.fields.fakeValue = 0LL,
        svtId = userSvtEntity->fields.svtId,
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v20),
        v22 = System_String__Concat_43746016(
                (System_String_o *)StringLiteral_14615,
                v21,
                (System_String_o *)StringLiteral_651,
                0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_Object__set_name(gameObject, v22, 0LL);
  UICharaGraphTexture__SetCharacter_35079812(v18, userSvtEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth(v18, depth, 0LL);
  return v18;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26882984(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        int32_t isRealName,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x25
  __int64 v19; // x26
  int32_t v20; // w0
  const MethodInfo *v21; // x3
  UnityEngine_Component_o *TextureLocal; // x0
  UICharaGraphTexture_o *v23; // x23
  UnityEngine_Object_o *gameObject; // x24
  __int64 v25; // x2
  __int64 v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array *v33; // x25
  System_String_o *v34; // x0
  System_Int32_array **v35; // x1
  const MethodInfo *v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x26
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x26
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_o *v59; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  imageLimitCounta = imageLimitCount;
  if ( (byte_40FAEF6 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B16FFC(&string___TypeInfo, v14);
    sub_B16FFC(&StringLiteral_791, v15);
    sub_B16FFC(&StringLiteral_14615, v16);
    sub_B16FFC(&StringLiteral_651, v17);
    byte_40FAEF6 = 1;
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
  *(_QWORD *)&v63.fields.currentCryptoKey = v19;
  *(_QWORD *)&v63.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v63, 0LL);
  TextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateTextureLocal(this, parent, v20, v21);
  if ( !TextureLocal
    || (v23 = (UICharaGraphTexture_o *)TextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(TextureLocal, 0LL),
        (v26 = sub_B17014(string___TypeInfo, 5LL, v25)) == 0) )
  {
LABEL_33:
    sub_B170D4();
  }
  v33 = (System_String_array *)v26;
  v34 = (System_String_o *)StringLiteral_14615;
  if ( StringLiteral_14615 )
  {
    v34 = (System_String_o *)sub_B170BC(StringLiteral_14615, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_34;
    v35 = (System_Int32_array **)StringLiteral_14615;
  }
  else
  {
    v35 = 0LL;
  }
  if ( !v33->max_length )
    goto LABEL_32;
  v33->m_Items[0] = (System_String_o *)v35;
  sub_B16F98((BattleServantConfConponent_o *)v33->m_Items, v35, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)&v64.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v64.fields.fakeValue = 0LL;
  svtId = userSvtEntity->fields.svtId;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v64, v36);
  v42 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = (System_String_o *)sub_B170BC(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_34;
  }
  if ( v33->max_length <= 1 )
    goto LABEL_32;
  v33->m_Items[1] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v33->m_Items[1], v42, v27, v37, v38, v39, v40, v41);
  v34 = (System_String_o *)StringLiteral_791;
  if ( StringLiteral_791 )
  {
    v34 = (System_String_o *)sub_B170BC(StringLiteral_791, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_34;
    v35 = (System_Int32_array **)StringLiteral_791;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v33->max_length <= 2 )
    goto LABEL_32;
  v33->m_Items[2] = (System_String_o *)v35;
  sub_B16F98((BattleServantConfConponent_o *)&v33->m_Items[2], v35, v27, v43, v44, v45, v46, v47);
  v34 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v53 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = (System_String_o *)sub_B170BC(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
    {
LABEL_34:
      sub_B170F4(v34);
      sub_B170A0();
    }
  }
  if ( v33->max_length <= 3 )
    goto LABEL_32;
  v33->m_Items[3] = (System_String_o *)v53;
  sub_B16F98((BattleServantConfConponent_o *)&v33->m_Items[3], v53, v27, v48, v49, v50, v51, v52);
  v34 = (System_String_o *)StringLiteral_651;
  if ( StringLiteral_651 )
  {
    v34 = (System_String_o *)sub_B170BC(StringLiteral_651, v33->obj.klass->_1.element_class);
    if ( v34 )
    {
      v35 = (System_Int32_array **)StringLiteral_651;
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v35 = 0LL;
LABEL_29:
  if ( v33->max_length <= 4 )
  {
LABEL_32:
    sub_B17100(v34, v35, v27);
    sub_B170A0();
  }
  v33->m_Items[4] = (System_String_o *)v35;
  sub_B16F98((BattleServantConfConponent_o *)&v33->m_Items[4], v35, v27, v54, v55, v56, v57, v58);
  v59 = System_String__Concat_43823856(v33, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_Object__set_name(gameObject, v59, 0LL);
  UICharaGraphTexture__SetCharacter_35080076(v23, userSvtEntity, imageLimitCounta, callbackFunc, isRealName, 0LL);
  UICharaGraphTexture__SetDepth(v23, depth, 0LL);
  return v23;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26883856(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t v15; // w0
  const MethodInfo *v16; // x3
  UnityEngine_Component_o *TextureLocal; // x0
  UICharaGraphTexture_o *v18; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v20; // x2
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40FAEF7 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B16FFC(&StringLiteral_14615, v11);
    sub_B16FFC(&StringLiteral_651, v12);
    byte_40FAEF7 = 1;
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
  *(_QWORD *)&v25.fields.currentCryptoKey = v14;
  *(_QWORD *)&v25.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v25, 0LL);
  TextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateTextureLocal(this, parent, v15, v16);
  if ( !TextureLocal
    || (v18 = (UICharaGraphTexture_o *)TextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(TextureLocal, 0LL),
        *(_QWORD *)&v26.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v26.fields.fakeValue = 0LL,
        svtId = userSvtCollectionEntity->fields.svtId,
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v20),
        v22 = System_String__Concat_43746016(
                (System_String_o *)StringLiteral_14615,
                v21,
                (System_String_o *)StringLiteral_651,
                0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_Object__set_name(gameObject, v22, 0LL);
  UICharaGraphTexture__SetCharacter_35080356(v18, userSvtCollectionEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth(v18, depth, 0LL);
  return v18;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26884344(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x24
  __int64 v17; // x25
  int32_t v18; // w0
  const MethodInfo *v19; // x3
  UnityEngine_Component_o *TextureLocal; // x0
  UICharaGraphTexture_o *v21; // x22
  UnityEngine_Object_o *gameObject; // x23
  __int64 v23; // x2
  __int64 v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array *v31; // x24
  System_String_o *v32; // x0
  System_Int32_array **v33; // x1
  const MethodInfo *v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x25
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x25
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_o *v57; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  imageLimitCounta = imageLimitCount;
  if ( (byte_40FAEF8 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B16FFC(&string___TypeInfo, v12);
    sub_B16FFC(&StringLiteral_791, v13);
    sub_B16FFC(&StringLiteral_14615, v14);
    sub_B16FFC(&StringLiteral_651, v15);
    byte_40FAEF8 = 1;
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
  *(_QWORD *)&v61.fields.currentCryptoKey = v17;
  *(_QWORD *)&v61.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v61, 0LL);
  TextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateTextureLocal(this, parent, v18, v19);
  if ( !TextureLocal
    || (v21 = (UICharaGraphTexture_o *)TextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(TextureLocal, 0LL),
        (v24 = sub_B17014(string___TypeInfo, 5LL, v23)) == 0) )
  {
LABEL_33:
    sub_B170D4();
  }
  v31 = (System_String_array *)v24;
  v32 = (System_String_o *)StringLiteral_14615;
  if ( StringLiteral_14615 )
  {
    v32 = (System_String_o *)sub_B170BC(StringLiteral_14615, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_34;
    v33 = (System_Int32_array **)StringLiteral_14615;
  }
  else
  {
    v33 = 0LL;
  }
  if ( !v31->max_length )
    goto LABEL_32;
  v31->m_Items[0] = (System_String_o *)v33;
  sub_B16F98((BattleServantConfConponent_o *)v31->m_Items, v33, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)&v62.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v62.fields.fakeValue = 0LL;
  svtId = userSvtCollectionEntity->fields.svtId;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v62, v34);
  v40 = (System_Int32_array **)v32;
  if ( v32 )
  {
    v32 = (System_String_o *)sub_B170BC(v32, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_34;
  }
  if ( v31->max_length <= 1 )
    goto LABEL_32;
  v31->m_Items[1] = (System_String_o *)v40;
  sub_B16F98((BattleServantConfConponent_o *)&v31->m_Items[1], v40, v25, v35, v36, v37, v38, v39);
  v32 = (System_String_o *)StringLiteral_791;
  if ( StringLiteral_791 )
  {
    v32 = (System_String_o *)sub_B170BC(StringLiteral_791, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_34;
    v33 = (System_Int32_array **)StringLiteral_791;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v31->max_length <= 2 )
    goto LABEL_32;
  v31->m_Items[2] = (System_String_o *)v33;
  sub_B16F98((BattleServantConfConponent_o *)&v31->m_Items[2], v33, v25, v41, v42, v43, v44, v45);
  v32 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v51 = (System_Int32_array **)v32;
  if ( v32 )
  {
    v32 = (System_String_o *)sub_B170BC(v32, v31->obj.klass->_1.element_class);
    if ( !v32 )
    {
LABEL_34:
      sub_B170F4(v32);
      sub_B170A0();
    }
  }
  if ( v31->max_length <= 3 )
    goto LABEL_32;
  v31->m_Items[3] = (System_String_o *)v51;
  sub_B16F98((BattleServantConfConponent_o *)&v31->m_Items[3], v51, v25, v46, v47, v48, v49, v50);
  v32 = (System_String_o *)StringLiteral_651;
  if ( StringLiteral_651 )
  {
    v32 = (System_String_o *)sub_B170BC(StringLiteral_651, v31->obj.klass->_1.element_class);
    if ( v32 )
    {
      v33 = (System_Int32_array **)StringLiteral_651;
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v33 = 0LL;
LABEL_29:
  if ( v31->max_length <= 4 )
  {
LABEL_32:
    sub_B17100(v32, v33, v25);
    sub_B170A0();
  }
  v31->m_Items[4] = (System_String_o *)v33;
  sub_B16F98((BattleServantConfConponent_o *)&v31->m_Items[4], v33, v25, v52, v53, v54, v55, v56);
  v57 = System_String__Concat_43823856(v31, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_Object__set_name(gameObject, v57, 0LL);
  UICharaGraphTexture__SetCharacter_35080628(v21, userSvtCollectionEntity, imageLimitCounta, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth(v21, depth, 0LL);
  return v21;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26885208(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  __int64 v14; // x25
  int32_t v15; // w0
  const MethodInfo *v16; // x3
  UnityEngine_Component_o *TextureLocal; // x0
  UICharaGraphTexture_o *v18; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v20; // x2
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40FAEF9 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B16FFC(&StringLiteral_14615, v11);
    sub_B16FFC(&StringLiteral_651, v12);
    byte_40FAEF9 = 1;
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
  *(_QWORD *)&v25.fields.currentCryptoKey = v14;
  *(_QWORD *)&v25.fields.fakeValue = v13;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v25, 0LL);
  TextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateTextureLocal(this, parent, v15, v16);
  if ( !TextureLocal
    || (v18 = (UICharaGraphTexture_o *)TextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(TextureLocal, 0LL),
        *(_QWORD *)&v26.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v26.fields.fakeValue = 0LL,
        svtId = servantLeaderInfo->fields.svtId,
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v26, v20),
        v22 = System_String__Concat_43746016(
                (System_String_o *)StringLiteral_14615,
                v21,
                (System_String_o *)StringLiteral_651,
                0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_Object__set_name(gameObject, v22, 0LL);
  UICharaGraphTexture__SetCharacter_35080904(v18, servantLeaderInfo, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth(v18, depth, 0LL);
  return v18;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26885696(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x24
  __int64 v17; // x25
  int32_t v18; // w0
  const MethodInfo *v19; // x3
  UnityEngine_Component_o *TextureLocal; // x0
  UICharaGraphTexture_o *v21; // x22
  UnityEngine_Object_o *gameObject; // x23
  __int64 v23; // x2
  __int64 v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array *v31; // x24
  System_String_o *v32; // x0
  System_Int32_array **v33; // x1
  const MethodInfo *v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x25
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x25
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_o *v57; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  imageLimitCounta = imageLimitCount;
  if ( (byte_40FAEFA & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B16FFC(&string___TypeInfo, v12);
    sub_B16FFC(&StringLiteral_791, v13);
    sub_B16FFC(&StringLiteral_14615, v14);
    sub_B16FFC(&StringLiteral_651, v15);
    byte_40FAEFA = 1;
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
  *(_QWORD *)&v61.fields.currentCryptoKey = v17;
  *(_QWORD *)&v61.fields.fakeValue = v16;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v61, 0LL);
  TextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateTextureLocal(this, parent, v18, v19);
  if ( !TextureLocal
    || (v21 = (UICharaGraphTexture_o *)TextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(TextureLocal, 0LL),
        (v24 = sub_B17014(string___TypeInfo, 5LL, v23)) == 0) )
  {
LABEL_33:
    sub_B170D4();
  }
  v31 = (System_String_array *)v24;
  v32 = (System_String_o *)StringLiteral_14615;
  if ( StringLiteral_14615 )
  {
    v32 = (System_String_o *)sub_B170BC(StringLiteral_14615, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_34;
    v33 = (System_Int32_array **)StringLiteral_14615;
  }
  else
  {
    v33 = 0LL;
  }
  if ( !v31->max_length )
    goto LABEL_32;
  v31->m_Items[0] = (System_String_o *)v33;
  sub_B16F98((BattleServantConfConponent_o *)v31->m_Items, v33, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)&v62.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v62.fields.fakeValue = 0LL;
  svtId = servantLeaderInfo->fields.svtId;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v62, v34);
  v40 = (System_Int32_array **)v32;
  if ( v32 )
  {
    v32 = (System_String_o *)sub_B170BC(v32, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_34;
  }
  if ( v31->max_length <= 1 )
    goto LABEL_32;
  v31->m_Items[1] = (System_String_o *)v40;
  sub_B16F98((BattleServantConfConponent_o *)&v31->m_Items[1], v40, v25, v35, v36, v37, v38, v39);
  v32 = (System_String_o *)StringLiteral_791;
  if ( StringLiteral_791 )
  {
    v32 = (System_String_o *)sub_B170BC(StringLiteral_791, v31->obj.klass->_1.element_class);
    if ( !v32 )
      goto LABEL_34;
    v33 = (System_Int32_array **)StringLiteral_791;
  }
  else
  {
    v33 = 0LL;
  }
  if ( v31->max_length <= 2 )
    goto LABEL_32;
  v31->m_Items[2] = (System_String_o *)v33;
  sub_B16F98((BattleServantConfConponent_o *)&v31->m_Items[2], v33, v25, v41, v42, v43, v44, v45);
  v32 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v51 = (System_Int32_array **)v32;
  if ( v32 )
  {
    v32 = (System_String_o *)sub_B170BC(v32, v31->obj.klass->_1.element_class);
    if ( !v32 )
    {
LABEL_34:
      sub_B170F4(v32);
      sub_B170A0();
    }
  }
  if ( v31->max_length <= 3 )
    goto LABEL_32;
  v31->m_Items[3] = (System_String_o *)v51;
  sub_B16F98((BattleServantConfConponent_o *)&v31->m_Items[3], v51, v25, v46, v47, v48, v49, v50);
  v32 = (System_String_o *)StringLiteral_651;
  if ( StringLiteral_651 )
  {
    v32 = (System_String_o *)sub_B170BC(StringLiteral_651, v31->obj.klass->_1.element_class);
    if ( v32 )
    {
      v33 = (System_Int32_array **)StringLiteral_651;
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v33 = 0LL;
LABEL_29:
  if ( v31->max_length <= 4 )
  {
LABEL_32:
    sub_B17100(v32, v33, v25);
    sub_B170A0();
  }
  v31->m_Items[4] = (System_String_o *)v33;
  sub_B16F98((BattleServantConfConponent_o *)&v31->m_Items[4], v33, v25, v52, v53, v54, v55, v56);
  v57 = System_String__Concat_43823856(v31, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_Object__set_name(gameObject, v57, 0LL);
  UICharaGraphTexture__SetCharacter_35081120(v21, servantLeaderInfo, imageLimitCounta, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth(v21, depth, 0LL);
  return v21;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26886568(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        EquipTargetInfo_o *equipTargetInfo,
        int32_t depth,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x25
  __int64 v16; // x26
  int32_t v17; // w0
  const MethodInfo *v18; // x3
  UnityEngine_Component_o *TextureLocal; // x0
  UICharaGraphTexture_o *v20; // x23
  UnityEngine_Object_o *gameObject; // x24
  const MethodInfo *v22; // x2
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_40FAEFB & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B16FFC(&StringLiteral_14615, v13);
    sub_B16FFC(&StringLiteral_651, v14);
    byte_40FAEFB = 1;
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
  *(_QWORD *)&v27.fields.currentCryptoKey = v16;
  *(_QWORD *)&v27.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL);
  TextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateTextureLocal(this, parent, v17, v18);
  if ( !TextureLocal
    || (v20 = (UICharaGraphTexture_o *)TextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(TextureLocal, 0LL),
        *(_QWORD *)&v28.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v28.fields.fakeValue = 0LL,
        svtId = equipTargetInfo->fields.svtId,
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v28, v22),
        v24 = System_String__Concat_43746016(
                (System_String_o *)StringLiteral_14615,
                v23,
                (System_String_o *)StringLiteral_651,
                0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B170D4();
  }
  UnityEngine_Object__set_name(gameObject, v24, 0LL);
  UICharaGraphTexture__SetCharacter_35081360(v20, equipTargetInfo, isNpcFollowerServantEquip, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth(v20, depth, 0LL);
  return v20;
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26887080(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        EquipTargetInfo_o *equipTargetInfo,
        int32_t imageLimitCount,
        int32_t depth,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x25
  __int64 v19; // x26
  int32_t v20; // w0
  const MethodInfo *v21; // x3
  UnityEngine_Component_o *TextureLocal; // x0
  UICharaGraphTexture_o *v23; // x23
  UnityEngine_Object_o *gameObject; // x24
  __int64 v25; // x2
  __int64 v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array *v33; // x25
  System_String_o *v34; // x0
  System_Int32_array **v35; // x1
  const MethodInfo *v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x26
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x26
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_o *v59; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  imageLimitCounta = imageLimitCount;
  if ( (byte_40FAEFC & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, parent);
    sub_B16FFC(&string___TypeInfo, v14);
    sub_B16FFC(&StringLiteral_791, v15);
    sub_B16FFC(&StringLiteral_14615, v16);
    sub_B16FFC(&StringLiteral_651, v17);
    byte_40FAEFC = 1;
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
  *(_QWORD *)&v63.fields.currentCryptoKey = v19;
  *(_QWORD *)&v63.fields.fakeValue = v18;
  v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v63, 0LL);
  TextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateTextureLocal(this, parent, v20, v21);
  if ( !TextureLocal
    || (v23 = (UICharaGraphTexture_o *)TextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(TextureLocal, 0LL),
        (v26 = sub_B17014(string___TypeInfo, 5LL, v25)) == 0) )
  {
LABEL_33:
    sub_B170D4();
  }
  v33 = (System_String_array *)v26;
  v34 = (System_String_o *)StringLiteral_14615;
  if ( StringLiteral_14615 )
  {
    v34 = (System_String_o *)sub_B170BC(StringLiteral_14615, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_34;
    v35 = (System_Int32_array **)StringLiteral_14615;
  }
  else
  {
    v35 = 0LL;
  }
  if ( !v33->max_length )
    goto LABEL_32;
  v33->m_Items[0] = (System_String_o *)v35;
  sub_B16F98((BattleServantConfConponent_o *)v33->m_Items, v35, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)&v64.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v64.fields.fakeValue = 0LL;
  svtId = equipTargetInfo->fields.svtId;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v64, v36);
  v42 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = (System_String_o *)sub_B170BC(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_34;
  }
  if ( v33->max_length <= 1 )
    goto LABEL_32;
  v33->m_Items[1] = (System_String_o *)v42;
  sub_B16F98((BattleServantConfConponent_o *)&v33->m_Items[1], v42, v27, v37, v38, v39, v40, v41);
  v34 = (System_String_o *)StringLiteral_791;
  if ( StringLiteral_791 )
  {
    v34 = (System_String_o *)sub_B170BC(StringLiteral_791, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_34;
    v35 = (System_Int32_array **)StringLiteral_791;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v33->max_length <= 2 )
    goto LABEL_32;
  v33->m_Items[2] = (System_String_o *)v35;
  sub_B16F98((BattleServantConfConponent_o *)&v33->m_Items[2], v35, v27, v43, v44, v45, v46, v47);
  v34 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v53 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = (System_String_o *)sub_B170BC(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
    {
LABEL_34:
      sub_B170F4(v34);
      sub_B170A0();
    }
  }
  if ( v33->max_length <= 3 )
    goto LABEL_32;
  v33->m_Items[3] = (System_String_o *)v53;
  sub_B16F98((BattleServantConfConponent_o *)&v33->m_Items[3], v53, v27, v48, v49, v50, v51, v52);
  v34 = (System_String_o *)StringLiteral_651;
  if ( StringLiteral_651 )
  {
    v34 = (System_String_o *)sub_B170BC(StringLiteral_651, v33->obj.klass->_1.element_class);
    if ( v34 )
    {
      v35 = (System_Int32_array **)StringLiteral_651;
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v35 = 0LL;
LABEL_29:
  if ( v33->max_length <= 4 )
  {
LABEL_32:
    sub_B17100(v34, v35, v27);
    sub_B170A0();
  }
  v33->m_Items[4] = (System_String_o *)v35;
  sub_B16F98((BattleServantConfConponent_o *)&v33->m_Items[4], v35, v27, v54, v55, v56, v57, v58);
  v59 = System_String__Concat_43823856(v33, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_Object__set_name(gameObject, v59, 0LL);
  UICharaGraphTexture__SetCharacter_35081564(
    v23,
    equipTargetInfo,
    imageLimitCounta,
    isNpcFollowerServantEquip,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth(v23, depth, 0LL);
  return v23;
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

  if ( (byte_40FAEE5 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, *(_QWORD *)&svtId);
    byte_40FAEE5 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return CharaGraphManager__CreateTextureLocal_26881800(
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


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26882120(
        UnityEngine_GameObject_o *parent,
        int64_t userSvtId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x22
  CharaGraphManager_o *v15; // x0
  const MethodInfo *v16; // x5

  if ( (byte_40FAEE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, v11);
    byte_40FAEE6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   userSvtId,
                   (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        (v15 = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  return CharaGraphManager__CreateTextureLocal_26882352(v15, parent, Entity, depth, callbackFunc, v16);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26882704(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_40FAEE7 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtEntity);
    byte_40FAEE7 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return CharaGraphManager__CreateTextureLocal_26882352(Instance, parent, userSvtEntity, depth, callbackFunc, v10);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26882832(
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

  if ( (byte_40FAEE8 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtEntity);
    byte_40FAEE8 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return CharaGraphManager__CreateTextureLocal_26882984(
           Instance,
           parent,
           userSvtEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           isRealName,
           v14);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26883728(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_40FAEE9 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtCollectionEntity);
    byte_40FAEE9 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return CharaGraphManager__CreateTextureLocal_26883856(
           Instance,
           parent,
           userSvtCollectionEntity,
           depth,
           callbackFunc,
           v10);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26884208(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v12; // x6

  if ( (byte_40FAEEA & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userSvtCollectionEntity);
    byte_40FAEEA = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return CharaGraphManager__CreateTextureLocal_26884344(
           Instance,
           parent,
           userSvtCollectionEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           v12);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26885080(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_40FAEEB & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, servantLeaderInfo);
    byte_40FAEEB = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return CharaGraphManager__CreateTextureLocal_26885208(Instance, parent, servantLeaderInfo, depth, callbackFunc, v10);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26885560(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v12; // x6

  if ( (byte_40FAEEC & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, servantLeaderInfo);
    byte_40FAEEC = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return CharaGraphManager__CreateTextureLocal_26885696(
           Instance,
           parent,
           servantLeaderInfo,
           imageLimitCount,
           depth,
           callbackFunc,
           v12);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26886432(
        UnityEngine_GameObject_o *parent,
        EquipTargetInfo_o *equipTargetInfo,
        int32_t depth,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v12; // x6

  if ( (byte_40FAEED & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, equipTargetInfo);
    byte_40FAEED = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return CharaGraphManager__CreateTextureLocal_26886568(
           Instance,
           parent,
           equipTargetInfo,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v12);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26886928(
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

  if ( (byte_40FAEEE & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, equipTargetInfo);
    byte_40FAEEE = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return CharaGraphManager__CreateTextureLocal_26887080(
           Instance,
           parent,
           equipTargetInfo,
           imageLimitCount,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v14);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26887824(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_40FAEEF & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userCommandCodeEntity);
    byte_40FAEEF = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return CharaGraphManager__CreateCommandTextureLocal_26887952(
           Instance,
           parent,
           userCommandCodeEntity,
           depth,
           callbackFunc,
           v10);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26888300(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_40FAEF0 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, userCommandCodeCollectionEntity);
    byte_40FAEF0 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return CharaGraphManager__CreateCommandTextureLocal_26888428(
           Instance,
           parent,
           userCommandCodeCollectionEntity,
           depth,
           callbackFunc,
           v10);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26888776(
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  const MethodInfo *v10; // x5

  if ( (byte_40FAEF1 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, commandCodeEntity);
    byte_40FAEF1 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  return CharaGraphManager__CreateCommandTextureLocal_26888904(
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

  if ( (byte_40FAEDF & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_40FAEDF = 1;
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

  if ( (byte_40FAEE0 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, callback);
    sub_B16FFC(&UICharaGraphRender_TypeInfo, v5);
    byte_40FAEE0 = 1;
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
  if ( (byte_40FAEDB & 1) == 0 )
  {
    sub_B16FFC(&UICharaGraphRender_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_40FAEDB = 1;
  }
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  }
  return UICharaGraphRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetAssetName_26880360(int32_t imageSvtId, const MethodInfo *method)
{
  if ( (byte_40FAEDC & 1) == 0 )
  {
    sub_B16FFC(&UICharaGraphRender_TypeInfo, method);
    byte_40FAEDC = 1;
  }
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  }
  return UICharaGraphRender__GetAssetName_35066544(imageSvtId, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  if ( (byte_40FAEDD & 1) == 0 )
  {
    sub_B16FFC(&UICharaGraphRender_TypeInfo, method);
    byte_40FAEDD = 1;
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
  if ( (byte_40FAEDE & 1) == 0 )
  {
    sub_B16FFC(&UICharaGraphRender_TypeInfo, method);
    byte_40FAEDE = 1;
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

  if ( (byte_40FAEE1 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_40FAEE1 = 1;
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

  if ( (byte_40FAEE2 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, callback);
    sub_B16FFC(&UICharaGraphRender_TypeInfo, v5);
    byte_40FAEE2 = 1;
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

  if ( (byte_40FAEE3 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    byte_40FAEE3 = 1;
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

  if ( (byte_40FAEE4 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&imageLimitCount);
    sub_B16FFC(&UICharaGraphRender_TypeInfo, v4);
    byte_40FAEE4 = 1;
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