void __fastcall CharaGraphManager___ctor(CharaGraphManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E96EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CharaGraphManager___ctor__, (_DWORD)method, v2, v3);
    byte_42E96EA = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_CharaGraphManager___ctor__);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct UnityEngine_GameObject_o *commandGraphPrefab; // x20
  UnityEngine_GameObject_o *layer; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x22
  UICharaGraphRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E96E5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___,
      (_DWORD)parent,
      commandCodeId,
      method);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_14833/*"UICommandGraphTexture"*/, v12, v13, v14);
    byte_42E96E5 = 1;
  }
  commandGraphPrefab = this->fields.commandGraphPrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  layer = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)commandGraphPrefab,
                                        (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !layer )
    goto LABEL_12;
  v18 = layer;
  Component_srcLineSprite = (UICharaGraphRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      layer,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform(v18, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v18, 0LL);
  if ( !layer )
    goto LABEL_12;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)layer, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name((UnityEngine_Object_o *)v18, (System_String_o *)StringLiteral_14833/*"UICommandGraphTexture"*/, 0LL);
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
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v27, 0LL);
  layer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_srcLineSprite )
LABEL_12:
    sub_B5D69C(layer, v17);
  UICharaGraphRender__SetLayer(Component_srcLineSprite, (int32_t)layer, 0LL);
  return (UICharaGraphTexture_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_26720924(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x24
  __int64 v18; // x25
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  CharaGraphManager_o *v21; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v23; // x2
  System_String_o *v24; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v10 = this;
  if ( (byte_42E96E6 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)parent,
      (_DWORD)userCommandCodeEntity,
      *(_QWORD *)&depth);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v11, v12, v13);
    this = (CharaGraphManager_o *)sub_B5D5C4(&StringLiteral_14834/*"UICommandGraphTexture("*/, v14, v15, v16);
    byte_42E96E6 = 1;
  }
  commandCodeId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userCommandCodeEntity )
    goto LABEL_10;
  v18 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&userCommandCodeEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v19, v20);
  if ( !this
    || (v21 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v28.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v28.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeEntity->fields.commandCodeId,
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v28, v23),
        this = (CharaGraphManager_o *)System_String__Concat_44580072(
                                        (System_String_o *)StringLiteral_14834/*"UICommandGraphTexture("*/,
                                        v24,
                                        (System_String_o *)StringLiteral_659/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B5D69C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand((UICharaGraphTexture_o *)v21, userCommandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v21, depth, 0LL);
  return (UICharaGraphTexture_o *)v21;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_26721400(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x24
  __int64 v18; // x25
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  CharaGraphManager_o *v21; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v23; // x2
  System_String_o *v24; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o commandCodeId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v10 = this;
  if ( (byte_42E96E7 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)parent,
      (_DWORD)userCommandCodeCollectionEntity,
      *(_QWORD *)&depth);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v11, v12, v13);
    this = (CharaGraphManager_o *)sub_B5D5C4(&StringLiteral_14834/*"UICommandGraphTexture("*/, v14, v15, v16);
    byte_42E96E7 = 1;
  }
  commandCodeId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userCommandCodeCollectionEntity )
    goto LABEL_10;
  v18 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&userCommandCodeCollectionEntity->fields.commandCodeId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v19, v20);
  if ( !this
    || (v21 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v28.fields.currentCryptoKey = &commandCodeId,
        *(_QWORD *)&v28.fields.fakeValue = 0LL,
        commandCodeId = userCommandCodeCollectionEntity->fields.commandCodeId,
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v28, v23),
        this = (CharaGraphManager_o *)System_String__Concat_44580072(
                                        (System_String_o *)StringLiteral_14834/*"UICommandGraphTexture("*/,
                                        v24,
                                        (System_String_o *)StringLiteral_659/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B5D69C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand_35990016(
    (UICharaGraphTexture_o *)v21,
    userCommandCodeCollectionEntity,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v21, depth, 0LL);
  return (UICharaGraphTexture_o *)v21;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_26721876(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x24
  __int64 v18; // x25
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  CharaGraphManager_o *v21; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v23; // x2
  System_String_o *v24; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o id; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v10 = this;
  if ( (byte_42E96E8 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)parent,
      (_DWORD)commandCodeEntity,
      *(_QWORD *)&depth);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v11, v12, v13);
    this = (CharaGraphManager_o *)sub_B5D5C4(&StringLiteral_14834/*"UICommandGraphTexture("*/, v14, v15, v16);
    byte_42E96E8 = 1;
  }
  id = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !commandCodeEntity )
    goto LABEL_10;
  v18 = *(_QWORD *)&commandCodeEntity->fields.id.fields.currentCryptoKey;
  v17 = *(_QWORD *)&commandCodeEntity->fields.id.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateCommandTextureLocal(v10, parent, v19, v20);
  if ( !this
    || (v21 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v28.fields.currentCryptoKey = &id,
        *(_QWORD *)&v28.fields.fakeValue = 0LL,
        id = commandCodeEntity->fields.id,
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v28, v23),
        this = (CharaGraphManager_o *)System_String__Concat_44580072(
                                        (System_String_o *)StringLiteral_14834/*"UICommandGraphTexture("*/,
                                        v24,
                                        (System_String_o *)StringLiteral_659/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B5D69C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCommand_35990172((UICharaGraphTexture_o *)v21, commandCodeEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v21, depth, 0LL);
  return (UICharaGraphTexture_o *)v21;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateCommandTextureLocal_26722352(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        int32_t commandCodeId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_Component_o *CommandTextureLocal; // x0
  __int64 v14; // x1
  UICharaGraphTexture_o *v15; // x21
  UnityEngine_Object_o *gameObject; // x22
  System_String_o *v17; // x0
  int32_t commandCodeIda; // [xsp+Ch] [xbp-24h] BYREF

  commandCodeIda = commandCodeId;
  if ( (byte_42E96E9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_659/*")"*/, (_DWORD)parent, commandCodeId, *(_QWORD *)&depth);
    sub_B5D5C4(&StringLiteral_14834/*"UICommandGraphTexture("*/, v10, v11, v12);
    byte_42E96E9 = 1;
  }
  CommandTextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateCommandTextureLocal(
                                                     this,
                                                     parent,
                                                     commandCodeId,
                                                     *(const MethodInfo **)&depth);
  if ( !CommandTextureLocal
    || (v15 = (UICharaGraphTexture_o *)CommandTextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(CommandTextureLocal, 0LL),
        v17 = System_Int32__ToString((int32_t)&commandCodeIda, 0LL),
        CommandTextureLocal = (UnityEngine_Component_o *)System_String__Concat_44580072(
                                                           (System_String_o *)StringLiteral_14834/*"UICommandGraphTexture("*/,
                                                           v17,
                                                           (System_String_o *)StringLiteral_659/*")"*/,
                                                           0LL),
        !gameObject) )
  {
    sub_B5D69C(CommandTextureLocal, v14);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)CommandTextureLocal, 0LL);
  UICharaGraphTexture__SetCommand_35990328(v15, commandCodeIda, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth(v15, depth, 0LL);
  return v15;
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

  if ( (byte_42E96DA & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, commandCodeId, depth, callbackFunc);
    byte_42E96DA = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_26722352(
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  ServantEntity_o *Entity; // x0
  ServantEntity_o *v28; // x21
  struct UnityEngine_GameObject_o *charaGraphPrefab; // x21
  UnityEngine_Object_o *v30; // x22
  struct UnityEngine_GameObject_o *v31; // x20
  UICharaGraphRender_o *Component_srcLineSprite; // x20
  UnityEngine_Transform_o *transform; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E96DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)parent, svtId, method);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_14831/*"UICharaGraphTexture"*/, v22, v23, v24);
    byte_42E96DB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL )
  {
LABEL_29:
    sub_B5D69C(Instance, v26);
  }
  Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                svtId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( Entity )
  {
    v28 = Entity;
    if ( ServantEntity__get_IsEnemyCollectionDetail(Entity, 0LL) )
    {
      charaGraphPrefab = this->fields.charaGraphPrefab;
    }
    else
    {
      v30 = 0LL;
      if ( !ServantEntity__get_IsServantEquip(v28, 0LL) )
        goto LABEL_15;
      charaGraphPrefab = this->fields.charaEquipGraphPrefab;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v30 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)charaGraphPrefab,
                                    (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  else
  {
    v30 = 0LL;
  }
LABEL_15:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Equality(v30, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v31 = this->fields.charaGraphPrefab;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                  (UnityEngine_UI_Dropdown_DropdownItem_o *)v31,
                                  (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v30 = (UnityEngine_Object_o *)Instance;
  }
  if ( !v30 )
    goto LABEL_29;
  Component_srcLineSprite = (UICharaGraphRender_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)v30,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UICharaGraphTexture___);
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30, 0LL);
  if ( !Instance )
    goto LABEL_29;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  UnityEngine_Object__set_name(v30, (System_String_o *)StringLiteral_14831/*"UICharaGraphTexture"*/, 0LL);
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
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = z;
  UnityEngine_Transform__set_localScale(transform, v40, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_layer(parent, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_29;
  UICharaGraphRender__SetLayer(Component_srcLineSprite, (int32_t)Instance, 0LL);
  return (UICharaGraphTexture_o *)Component_srcLineSprite;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26714772(
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_Component_o *TextureLocal; // x0
  __int64 v21; // x1
  UICharaGraphTexture_o *v22; // x23
  UnityEngine_Object_o *gameObject; // x24
  System_String_o *v24; // x25
  System_String_o *v25; // x0
  int32_t v27; // [xsp+8h] [xbp-48h] BYREF
  int32_t v28; // [xsp+Ch] [xbp-44h] BYREF

  v27 = limitCount;
  v28 = svtId;
  if ( (byte_42E96DC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_14832/*"UICharaGraphTexture("*/, (_DWORD)parent, svtId, *(_QWORD *)&limitCount);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v17, v18, v19);
    byte_42E96DC = 1;
  }
  TextureLocal = (UnityEngine_Component_o *)CharaGraphManager__CreateTextureLocal(
                                              this,
                                              parent,
                                              svtId,
                                              *(const MethodInfo **)&limitCount);
  if ( !TextureLocal
    || (v22 = (UICharaGraphTexture_o *)TextureLocal,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(TextureLocal, 0LL),
        v24 = System_Int32__ToString((int32_t)&v28, 0LL),
        v25 = System_Int32__ToString((int32_t)&v27, 0LL),
        TextureLocal = (UnityEngine_Component_o *)System_String__Concat_44581200(
                                                    (System_String_o *)StringLiteral_14832/*"UICharaGraphTexture("*/,
                                                    v24,
                                                    v25,
                                                    (System_String_o *)StringLiteral_659/*")"*/,
                                                    0LL),
        !gameObject) )
  {
    sub_B5D69C(TextureLocal, v21);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)TextureLocal, 0LL);
  UICharaGraphTexture__SetCharacter(v22, v28, v27, exceedCount, isOwn, callbackFunc, isRealName, 0LL);
  UICharaGraphTexture__SetDepth(v22, depth, 0LL);
  return v22;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26715324(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x24
  __int64 v18; // x25
  int32_t v19; // w0
  const MethodInfo *v20; // x3
  CharaGraphManager_o *v21; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v23; // x2
  System_String_o *v24; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v10 = this;
  if ( (byte_42E96DD & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)parent,
      (_DWORD)userSvtEntity,
      *(_QWORD *)&depth);
    sub_B5D5C4(&StringLiteral_14832/*"UICharaGraphTexture("*/, v11, v12, v13);
    this = (CharaGraphManager_o *)sub_B5D5C4(&StringLiteral_659/*")"*/, v14, v15, v16);
    byte_42E96DD = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userSvtEntity )
    goto LABEL_10;
  v18 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v19, v20);
  if ( !this
    || (v21 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v28.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v28.fields.fakeValue = 0LL,
        svtId = userSvtEntity->fields.svtId,
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v28, v23),
        this = (CharaGraphManager_o *)System_String__Concat_44580072(
                                        (System_String_o *)StringLiteral_14832/*"UICharaGraphTexture("*/,
                                        v24,
                                        (System_String_o *)StringLiteral_659/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B5D69C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_35987852((UICharaGraphTexture_o *)v21, userSvtEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v21, depth, 0LL);
  return (UICharaGraphTexture_o *)v21;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26715956(
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x25
  __int64 v27; // x26
  int32_t v28; // w0
  const MethodInfo *v29; // x3
  CharaGraphManager_o *v30; // x23
  UnityEngine_Object_o *gameObject; // x24
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  CharaGraphManager_o *v38; // x25
  System_String_o *v39; // x0
  System_Int32_array **v40; // x1
  const MethodInfo *v41; // x2
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x26
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x26
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x1
  __int64 v71; // x0
  __int64 v72; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_42E96DE & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)parent,
      (_DWORD)userSvtEntity,
      *(_QWORD *)&imageLimitCount);
    sub_B5D5C4(&string___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_801/*"-I"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_14832/*"UICharaGraphTexture("*/, v20, v21, v22);
    this = (CharaGraphManager_o *)sub_B5D5C4(&StringLiteral_659/*")"*/, v23, v24, v25);
    byte_42E96DE = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userSvtEntity )
    goto LABEL_33;
  v27 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&userSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v75.fields.currentCryptoKey = v27;
  *(_QWORD *)&v75.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v75, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v28, v29);
  if ( !this
    || (v30 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (this = (CharaGraphManager_o *)sub_B5D5DC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_33:
    sub_B5D69C(this, parent);
  }
  v38 = this;
  v39 = (System_String_o *)StringLiteral_14832/*"UICharaGraphTexture("*/;
  if ( StringLiteral_14832/*"UICharaGraphTexture("*/ )
  {
    v39 = (System_String_o *)sub_B5D684(StringLiteral_14832/*"UICharaGraphTexture("*/, v38->klass->_1.element_class);
    if ( !v39 )
      goto LABEL_34;
    v40 = (System_Int32_array **)StringLiteral_14832/*"UICharaGraphTexture("*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( !LODWORD(v38->fields.charaGraphPrefab) )
    goto LABEL_32;
  v38->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)v40;
  sub_B5D560((BattleServantConfConponent_o *)&v38->fields.charaEquipGraphPrefab, v40, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)&v76.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v76.fields.fakeValue = 0LL;
  svtId = userSvtEntity->fields.svtId;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v76, v41);
  v48 = (System_Int32_array **)v39;
  if ( v39 )
  {
    v39 = (System_String_o *)sub_B5D684(v39, v38->klass->_1.element_class);
    if ( !v39 )
      goto LABEL_34;
  }
  if ( LODWORD(v38->fields.charaGraphPrefab) <= 1 )
    goto LABEL_32;
  v38->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)v48;
  sub_B5D560((BattleServantConfConponent_o *)&v38->fields.commandGraphPrefab, v48, v42, v43, v44, v45, v46, v47);
  v39 = (System_String_o *)StringLiteral_801/*"-I"*/;
  if ( StringLiteral_801/*"-I"*/ )
  {
    v39 = (System_String_o *)sub_B5D684(StringLiteral_801/*"-I"*/, v38->klass->_1.element_class);
    if ( !v39 )
      goto LABEL_34;
    v55 = (System_Int32_array **)StringLiteral_801/*"-I"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( LODWORD(v38->fields.charaGraphPrefab) <= 2 )
    goto LABEL_32;
  v38[1].klass = (CharaGraphManager_c *)v55;
  sub_B5D560((BattleServantConfConponent_o *)&v38[1], v55, v49, v50, v51, v52, v53, v54);
  v39 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v62 = (System_Int32_array **)v39;
  if ( v39 )
  {
    v39 = (System_String_o *)sub_B5D684(v39, v38->klass->_1.element_class);
    if ( !v39 )
    {
LABEL_34:
      v72 = sub_B5D6BC(v39);
      sub_B5D668(v72, 0LL);
    }
  }
  if ( LODWORD(v38->fields.charaGraphPrefab) <= 3 )
    goto LABEL_32;
  v38[1].monitor = v62;
  sub_B5D560((BattleServantConfConponent_o *)&v38[1].monitor, v62, v56, v57, v58, v59, v60, v61);
  v39 = (System_String_o *)StringLiteral_659/*")"*/;
  if ( StringLiteral_659/*")"*/ )
  {
    v39 = (System_String_o *)sub_B5D684(StringLiteral_659/*")"*/, v38->klass->_1.element_class);
    if ( v39 )
    {
      v69 = (System_Int32_array **)StringLiteral_659/*")"*/;
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v69 = 0LL;
LABEL_29:
  if ( LODWORD(v38->fields.charaGraphPrefab) <= 4 )
  {
LABEL_32:
    v71 = sub_B5D6C8(v39);
    sub_B5D668(v71, 0LL);
  }
  *(_QWORD *)&v38[1].fields.m_CachedPtr = v69;
  sub_B5D560((BattleServantConfConponent_o *)&v38[1].fields, v69, v63, v64, v65, v66, v67, v68);
  this = (CharaGraphManager_o *)System_String__Concat_44657912((System_String_array *)v38, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_35988116(
    (UICharaGraphTexture_o *)v30,
    userSvtEntity,
    imageLimitCounta,
    callbackFunc,
    isRealName,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v30, depth, 0LL);
  return (UICharaGraphTexture_o *)v30;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26716828(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x24
  __int64 v18; // x25
  int32_t v19; // w0
  const MethodInfo *v20; // x3
  CharaGraphManager_o *v21; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v23; // x2
  System_String_o *v24; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v10 = this;
  if ( (byte_42E96DF & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)parent,
      (_DWORD)userSvtCollectionEntity,
      *(_QWORD *)&depth);
    sub_B5D5C4(&StringLiteral_14832/*"UICharaGraphTexture("*/, v11, v12, v13);
    this = (CharaGraphManager_o *)sub_B5D5C4(&StringLiteral_659/*")"*/, v14, v15, v16);
    byte_42E96DF = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userSvtCollectionEntity )
    goto LABEL_10;
  v18 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v19, v20);
  if ( !this
    || (v21 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v28.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v28.fields.fakeValue = 0LL,
        svtId = userSvtCollectionEntity->fields.svtId,
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v28, v23),
        this = (CharaGraphManager_o *)System_String__Concat_44580072(
                                        (System_String_o *)StringLiteral_14832/*"UICharaGraphTexture("*/,
                                        v24,
                                        (System_String_o *)StringLiteral_659/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B5D69C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_35988396((UICharaGraphTexture_o *)v21, userSvtCollectionEntity, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v21, depth, 0LL);
  return (UICharaGraphTexture_o *)v21;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26717316(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v11; // x23
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x24
  __int64 v25; // x25
  int32_t v26; // w0
  const MethodInfo *v27; // x3
  CharaGraphManager_o *v28; // x22
  UnityEngine_Object_o *gameObject; // x23
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  CharaGraphManager_o *v36; // x24
  System_String_o *v37; // x0
  System_Int32_array **v38; // x1
  const MethodInfo *v39; // x2
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x25
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x25
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  __int64 v69; // x0
  __int64 v70; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  v11 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_42E96E0 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)parent,
      (_DWORD)userSvtCollectionEntity,
      *(_QWORD *)&imageLimitCount);
    sub_B5D5C4(&string___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_801/*"-I"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_14832/*"UICharaGraphTexture("*/, v18, v19, v20);
    this = (CharaGraphManager_o *)sub_B5D5C4(&StringLiteral_659/*")"*/, v21, v22, v23);
    byte_42E96E0 = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !userSvtCollectionEntity )
    goto LABEL_33;
  v25 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&userSvtCollectionEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v73.fields.currentCryptoKey = v25;
  *(_QWORD *)&v73.fields.fakeValue = v24;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v73, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v11, parent, v26, v27);
  if ( !this
    || (v28 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (this = (CharaGraphManager_o *)sub_B5D5DC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_33:
    sub_B5D69C(this, parent);
  }
  v36 = this;
  v37 = (System_String_o *)StringLiteral_14832/*"UICharaGraphTexture("*/;
  if ( StringLiteral_14832/*"UICharaGraphTexture("*/ )
  {
    v37 = (System_String_o *)sub_B5D684(StringLiteral_14832/*"UICharaGraphTexture("*/, v36->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_34;
    v38 = (System_Int32_array **)StringLiteral_14832/*"UICharaGraphTexture("*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( !LODWORD(v36->fields.charaGraphPrefab) )
    goto LABEL_32;
  v36->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)v38;
  sub_B5D560((BattleServantConfConponent_o *)&v36->fields.charaEquipGraphPrefab, v38, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)&v74.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v74.fields.fakeValue = 0LL;
  svtId = userSvtCollectionEntity->fields.svtId;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v74, v39);
  v46 = (System_Int32_array **)v37;
  if ( v37 )
  {
    v37 = (System_String_o *)sub_B5D684(v37, v36->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_34;
  }
  if ( LODWORD(v36->fields.charaGraphPrefab) <= 1 )
    goto LABEL_32;
  v36->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)v46;
  sub_B5D560((BattleServantConfConponent_o *)&v36->fields.commandGraphPrefab, v46, v40, v41, v42, v43, v44, v45);
  v37 = (System_String_o *)StringLiteral_801/*"-I"*/;
  if ( StringLiteral_801/*"-I"*/ )
  {
    v37 = (System_String_o *)sub_B5D684(StringLiteral_801/*"-I"*/, v36->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_34;
    v53 = (System_Int32_array **)StringLiteral_801/*"-I"*/;
  }
  else
  {
    v53 = 0LL;
  }
  if ( LODWORD(v36->fields.charaGraphPrefab) <= 2 )
    goto LABEL_32;
  v36[1].klass = (CharaGraphManager_c *)v53;
  sub_B5D560((BattleServantConfConponent_o *)&v36[1], v53, v47, v48, v49, v50, v51, v52);
  v37 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v60 = (System_Int32_array **)v37;
  if ( v37 )
  {
    v37 = (System_String_o *)sub_B5D684(v37, v36->klass->_1.element_class);
    if ( !v37 )
    {
LABEL_34:
      v70 = sub_B5D6BC(v37);
      sub_B5D668(v70, 0LL);
    }
  }
  if ( LODWORD(v36->fields.charaGraphPrefab) <= 3 )
    goto LABEL_32;
  v36[1].monitor = v60;
  sub_B5D560((BattleServantConfConponent_o *)&v36[1].monitor, v60, v54, v55, v56, v57, v58, v59);
  v37 = (System_String_o *)StringLiteral_659/*")"*/;
  if ( StringLiteral_659/*")"*/ )
  {
    v37 = (System_String_o *)sub_B5D684(StringLiteral_659/*")"*/, v36->klass->_1.element_class);
    if ( v37 )
    {
      v67 = (System_Int32_array **)StringLiteral_659/*")"*/;
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v67 = 0LL;
LABEL_29:
  if ( LODWORD(v36->fields.charaGraphPrefab) <= 4 )
  {
LABEL_32:
    v69 = sub_B5D6C8(v37);
    sub_B5D668(v69, 0LL);
  }
  *(_QWORD *)&v36[1].fields.m_CachedPtr = v67;
  sub_B5D560((BattleServantConfConponent_o *)&v36[1].fields, v67, v61, v62, v63, v64, v65, v66);
  this = (CharaGraphManager_o *)System_String__Concat_44657912((System_String_array *)v36, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_35988668(
    (UICharaGraphTexture_o *)v28,
    userSvtCollectionEntity,
    imageLimitCounta,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v28, depth, 0LL);
  return (UICharaGraphTexture_o *)v28;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26718180(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v10; // x23
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x24
  __int64 v18; // x25
  int32_t v19; // w0
  const MethodInfo *v20; // x3
  CharaGraphManager_o *v21; // x22
  UnityEngine_Object_o *gameObject; // x23
  const MethodInfo *v23; // x2
  System_String_o *v24; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v10 = this;
  if ( (byte_42E96E1 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)parent,
      (_DWORD)servantLeaderInfo,
      *(_QWORD *)&depth);
    sub_B5D5C4(&StringLiteral_14832/*"UICharaGraphTexture("*/, v11, v12, v13);
    this = (CharaGraphManager_o *)sub_B5D5C4(&StringLiteral_659/*")"*/, v14, v15, v16);
    byte_42E96E1 = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !servantLeaderInfo )
    goto LABEL_10;
  v18 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v17 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v27, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v10, parent, v19, v20);
  if ( !this
    || (v21 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v28.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v28.fields.fakeValue = 0LL,
        svtId = servantLeaderInfo->fields.svtId,
        v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v28, v23),
        this = (CharaGraphManager_o *)System_String__Concat_44580072(
                                        (System_String_o *)StringLiteral_14832/*"UICharaGraphTexture("*/,
                                        v24,
                                        (System_String_o *)StringLiteral_659/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B5D69C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_35988944((UICharaGraphTexture_o *)v21, servantLeaderInfo, callbackFunc, 0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v21, depth, 0LL);
  return (UICharaGraphTexture_o *)v21;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26718668(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t imageLimitCount,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v11; // x23
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int64 v24; // x24
  __int64 v25; // x25
  int32_t v26; // w0
  const MethodInfo *v27; // x3
  CharaGraphManager_o *v28; // x22
  UnityEngine_Object_o *gameObject; // x23
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  CharaGraphManager_o *v36; // x24
  System_String_o *v37; // x0
  System_Int32_array **v38; // x1
  const MethodInfo *v39; // x2
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x25
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x25
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  __int64 v69; // x0
  __int64 v70; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  v11 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_42E96E2 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)parent,
      (_DWORD)servantLeaderInfo,
      *(_QWORD *)&imageLimitCount);
    sub_B5D5C4(&string___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_801/*"-I"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_14832/*"UICharaGraphTexture("*/, v18, v19, v20);
    this = (CharaGraphManager_o *)sub_B5D5C4(&StringLiteral_659/*")"*/, v21, v22, v23);
    byte_42E96E2 = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !servantLeaderInfo )
    goto LABEL_33;
  v25 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v73.fields.currentCryptoKey = v25;
  *(_QWORD *)&v73.fields.fakeValue = v24;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v73, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v11, parent, v26, v27);
  if ( !this
    || (v28 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (this = (CharaGraphManager_o *)sub_B5D5DC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_33:
    sub_B5D69C(this, parent);
  }
  v36 = this;
  v37 = (System_String_o *)StringLiteral_14832/*"UICharaGraphTexture("*/;
  if ( StringLiteral_14832/*"UICharaGraphTexture("*/ )
  {
    v37 = (System_String_o *)sub_B5D684(StringLiteral_14832/*"UICharaGraphTexture("*/, v36->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_34;
    v38 = (System_Int32_array **)StringLiteral_14832/*"UICharaGraphTexture("*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( !LODWORD(v36->fields.charaGraphPrefab) )
    goto LABEL_32;
  v36->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)v38;
  sub_B5D560((BattleServantConfConponent_o *)&v36->fields.charaEquipGraphPrefab, v38, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)&v74.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v74.fields.fakeValue = 0LL;
  svtId = servantLeaderInfo->fields.svtId;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v74, v39);
  v46 = (System_Int32_array **)v37;
  if ( v37 )
  {
    v37 = (System_String_o *)sub_B5D684(v37, v36->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_34;
  }
  if ( LODWORD(v36->fields.charaGraphPrefab) <= 1 )
    goto LABEL_32;
  v36->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)v46;
  sub_B5D560((BattleServantConfConponent_o *)&v36->fields.commandGraphPrefab, v46, v40, v41, v42, v43, v44, v45);
  v37 = (System_String_o *)StringLiteral_801/*"-I"*/;
  if ( StringLiteral_801/*"-I"*/ )
  {
    v37 = (System_String_o *)sub_B5D684(StringLiteral_801/*"-I"*/, v36->klass->_1.element_class);
    if ( !v37 )
      goto LABEL_34;
    v53 = (System_Int32_array **)StringLiteral_801/*"-I"*/;
  }
  else
  {
    v53 = 0LL;
  }
  if ( LODWORD(v36->fields.charaGraphPrefab) <= 2 )
    goto LABEL_32;
  v36[1].klass = (CharaGraphManager_c *)v53;
  sub_B5D560((BattleServantConfConponent_o *)&v36[1], v53, v47, v48, v49, v50, v51, v52);
  v37 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v60 = (System_Int32_array **)v37;
  if ( v37 )
  {
    v37 = (System_String_o *)sub_B5D684(v37, v36->klass->_1.element_class);
    if ( !v37 )
    {
LABEL_34:
      v70 = sub_B5D6BC(v37);
      sub_B5D668(v70, 0LL);
    }
  }
  if ( LODWORD(v36->fields.charaGraphPrefab) <= 3 )
    goto LABEL_32;
  v36[1].monitor = v60;
  sub_B5D560((BattleServantConfConponent_o *)&v36[1].monitor, v60, v54, v55, v56, v57, v58, v59);
  v37 = (System_String_o *)StringLiteral_659/*")"*/;
  if ( StringLiteral_659/*")"*/ )
  {
    v37 = (System_String_o *)sub_B5D684(StringLiteral_659/*")"*/, v36->klass->_1.element_class);
    if ( v37 )
    {
      v67 = (System_Int32_array **)StringLiteral_659/*")"*/;
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v67 = 0LL;
LABEL_29:
  if ( LODWORD(v36->fields.charaGraphPrefab) <= 4 )
  {
LABEL_32:
    v69 = sub_B5D6C8(v37);
    sub_B5D668(v69, 0LL);
  }
  *(_QWORD *)&v36[1].fields.m_CachedPtr = v67;
  sub_B5D560((BattleServantConfConponent_o *)&v36[1].fields, v67, v61, v62, v63, v64, v65, v66);
  this = (CharaGraphManager_o *)System_String__Concat_44657912((System_String_array *)v36, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_35989160(
    (UICharaGraphTexture_o *)v28,
    servantLeaderInfo,
    imageLimitCounta,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v28, depth, 0LL);
  return (UICharaGraphTexture_o *)v28;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26719540(
        CharaGraphManager_o *this,
        UnityEngine_GameObject_o *parent,
        EquipTargetInfo_o *equipTargetInfo,
        int32_t depth,
        bool isNpcFollowerServantEquip,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *v12; // x24
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 v19; // x25
  __int64 v20; // x26
  int32_t v21; // w0
  const MethodInfo *v22; // x3
  CharaGraphManager_o *v23; // x23
  UnityEngine_Object_o *gameObject; // x24
  const MethodInfo *v25; // x2
  System_String_o *v26; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  v12 = this;
  if ( (byte_42E96E3 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)parent,
      (_DWORD)equipTargetInfo,
      *(_QWORD *)&depth);
    sub_B5D5C4(&StringLiteral_14832/*"UICharaGraphTexture("*/, v13, v14, v15);
    this = (CharaGraphManager_o *)sub_B5D5C4(&StringLiteral_659/*")"*/, v16, v17, v18);
    byte_42E96E3 = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !equipTargetInfo )
    goto LABEL_10;
  v20 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v29.fields.currentCryptoKey = v20;
  *(_QWORD *)&v29.fields.fakeValue = v19;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v29, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v12, parent, v21, v22);
  if ( !this
    || (v23 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        *(_QWORD *)&v30.fields.currentCryptoKey = &svtId,
        *(_QWORD *)&v30.fields.fakeValue = 0LL,
        svtId = equipTargetInfo->fields.svtId,
        v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v30, v25),
        this = (CharaGraphManager_o *)System_String__Concat_44580072(
                                        (System_String_o *)StringLiteral_14832/*"UICharaGraphTexture("*/,
                                        v26,
                                        (System_String_o *)StringLiteral_659/*")"*/,
                                        0LL),
        !gameObject) )
  {
LABEL_10:
    sub_B5D69C(this, parent);
  }
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_35989400(
    (UICharaGraphTexture_o *)v23,
    equipTargetInfo,
    isNpcFollowerServantEquip,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v23, depth, 0LL);
  return (UICharaGraphTexture_o *)v23;
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTextureLocal_26720052(
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x25
  __int64 v27; // x26
  int32_t v28; // w0
  const MethodInfo *v29; // x3
  CharaGraphManager_o *v30; // x23
  UnityEngine_Object_o *gameObject; // x24
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  CharaGraphManager_o *v38; // x25
  System_String_o *v39; // x0
  System_Int32_array **v40; // x1
  const MethodInfo *v41; // x2
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x26
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x26
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x1
  __int64 v71; // x0
  __int64 v72; // x0
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+0h] [xbp-60h] BYREF
  int32_t imageLimitCounta; // [xsp+1Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  v13 = this;
  imageLimitCounta = imageLimitCount;
  if ( (byte_42E96E4 & 1) == 0 )
  {
    sub_B5D5C4(
      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
      (_DWORD)parent,
      (_DWORD)equipTargetInfo,
      *(_QWORD *)&imageLimitCount);
    sub_B5D5C4(&string___TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_801/*"-I"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_14832/*"UICharaGraphTexture("*/, v20, v21, v22);
    this = (CharaGraphManager_o *)sub_B5D5C4(&StringLiteral_659/*")"*/, v23, v24, v25);
    byte_42E96E4 = 1;
  }
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  if ( !equipTargetInfo )
    goto LABEL_33;
  v27 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.currentCryptoKey;
  v26 = *(_QWORD *)&equipTargetInfo->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v75.fields.currentCryptoKey = v27;
  *(_QWORD *)&v75.fields.fakeValue = v26;
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v75, 0LL);
  this = (CharaGraphManager_o *)CharaGraphManager__CreateTextureLocal(v13, parent, v28, v29);
  if ( !this
    || (v30 = this,
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        (this = (CharaGraphManager_o *)sub_B5D5DC(string___TypeInfo, 5LL)) == 0LL) )
  {
LABEL_33:
    sub_B5D69C(this, parent);
  }
  v38 = this;
  v39 = (System_String_o *)StringLiteral_14832/*"UICharaGraphTexture("*/;
  if ( StringLiteral_14832/*"UICharaGraphTexture("*/ )
  {
    v39 = (System_String_o *)sub_B5D684(StringLiteral_14832/*"UICharaGraphTexture("*/, v38->klass->_1.element_class);
    if ( !v39 )
      goto LABEL_34;
    v40 = (System_Int32_array **)StringLiteral_14832/*"UICharaGraphTexture("*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( !LODWORD(v38->fields.charaGraphPrefab) )
    goto LABEL_32;
  v38->fields.charaEquipGraphPrefab = (struct UnityEngine_GameObject_o *)v40;
  sub_B5D560((BattleServantConfConponent_o *)&v38->fields.charaEquipGraphPrefab, v40, v32, v33, v34, v35, v36, v37);
  *(_QWORD *)&v76.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v76.fields.fakeValue = 0LL;
  svtId = equipTargetInfo->fields.svtId;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v76, v41);
  v48 = (System_Int32_array **)v39;
  if ( v39 )
  {
    v39 = (System_String_o *)sub_B5D684(v39, v38->klass->_1.element_class);
    if ( !v39 )
      goto LABEL_34;
  }
  if ( LODWORD(v38->fields.charaGraphPrefab) <= 1 )
    goto LABEL_32;
  v38->fields.commandGraphPrefab = (struct UnityEngine_GameObject_o *)v48;
  sub_B5D560((BattleServantConfConponent_o *)&v38->fields.commandGraphPrefab, v48, v42, v43, v44, v45, v46, v47);
  v39 = (System_String_o *)StringLiteral_801/*"-I"*/;
  if ( StringLiteral_801/*"-I"*/ )
  {
    v39 = (System_String_o *)sub_B5D684(StringLiteral_801/*"-I"*/, v38->klass->_1.element_class);
    if ( !v39 )
      goto LABEL_34;
    v55 = (System_Int32_array **)StringLiteral_801/*"-I"*/;
  }
  else
  {
    v55 = 0LL;
  }
  if ( LODWORD(v38->fields.charaGraphPrefab) <= 2 )
    goto LABEL_32;
  v38[1].klass = (CharaGraphManager_c *)v55;
  sub_B5D560((BattleServantConfConponent_o *)&v38[1], v55, v49, v50, v51, v52, v53, v54);
  v39 = System_Int32__ToString((int32_t)&imageLimitCounta, 0LL);
  v62 = (System_Int32_array **)v39;
  if ( v39 )
  {
    v39 = (System_String_o *)sub_B5D684(v39, v38->klass->_1.element_class);
    if ( !v39 )
    {
LABEL_34:
      v72 = sub_B5D6BC(v39);
      sub_B5D668(v72, 0LL);
    }
  }
  if ( LODWORD(v38->fields.charaGraphPrefab) <= 3 )
    goto LABEL_32;
  v38[1].monitor = v62;
  sub_B5D560((BattleServantConfConponent_o *)&v38[1].monitor, v62, v56, v57, v58, v59, v60, v61);
  v39 = (System_String_o *)StringLiteral_659/*")"*/;
  if ( StringLiteral_659/*")"*/ )
  {
    v39 = (System_String_o *)sub_B5D684(StringLiteral_659/*")"*/, v38->klass->_1.element_class);
    if ( v39 )
    {
      v69 = (System_Int32_array **)StringLiteral_659/*")"*/;
      goto LABEL_29;
    }
    goto LABEL_34;
  }
  v69 = 0LL;
LABEL_29:
  if ( LODWORD(v38->fields.charaGraphPrefab) <= 4 )
  {
LABEL_32:
    v71 = sub_B5D6C8(v39);
    sub_B5D668(v71, 0LL);
  }
  *(_QWORD *)&v38[1].fields.m_CachedPtr = v69;
  sub_B5D560((BattleServantConfConponent_o *)&v38[1].fields, v69, v63, v64, v65, v66, v67, v68);
  this = (CharaGraphManager_o *)System_String__Concat_44657912((System_String_array *)v38, 0LL);
  if ( !gameObject )
    goto LABEL_33;
  UnityEngine_Object__set_name(gameObject, (System_String_o *)this, 0LL);
  UICharaGraphTexture__SetCharacter_35989604(
    (UICharaGraphTexture_o *)v30,
    equipTargetInfo,
    imageLimitCounta,
    isNpcFollowerServantEquip,
    callbackFunc,
    0LL);
  UICharaGraphTexture__SetDepth((UICharaGraphTexture_o *)v30, depth, 0LL);
  return (UICharaGraphTexture_o *)v30;
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
  __int64 v18; // x1
  const MethodInfo *v20; // [xsp+8h] [xbp-58h]

  if ( (byte_42E96CD & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      svtId,
      limitCount,
      *(_QWORD *)&exceedCount);
    byte_42E96CD = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v18);
  return CharaGraphManager__CreateTextureLocal_26714772(
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


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26715092(
        UnityEngine_GameObject_o *parent,
        int64_t userSvtId,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  UserServantEntity_o *Entity; // x22
  const MethodInfo *v21; // x5

  if ( (byte_42E96CE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, depth, callbackFunc);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__, v15, v16, v17);
    byte_42E96CE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                   (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                   userSvtId,
                   (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(Instance, v19);
  }
  return CharaGraphManager__CreateTextureLocal_26715324(
           (CharaGraphManager_o *)Instance,
           parent,
           Entity,
           depth,
           callbackFunc,
           v21);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26715676(
        UnityEngine_GameObject_o *parent,
        UserServantEntity_o *userSvtEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_42E96CF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      (_DWORD)userSvtEntity,
      depth,
      callbackFunc);
    byte_42E96CF = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_26715324(Instance, parent, userSvtEntity, depth, callbackFunc, v11);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26715804(
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

  if ( (byte_42E96D0 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      (_DWORD)userSvtEntity,
      imageLimitCount,
      *(_QWORD *)&depth);
    byte_42E96D0 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v14);
  return CharaGraphManager__CreateTextureLocal_26715956(
           Instance,
           parent,
           userSvtEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           isRealName,
           v15);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26716700(
        UnityEngine_GameObject_o *parent,
        UserServantCollectionEntity_o *userSvtCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_42E96D1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      (_DWORD)userSvtCollectionEntity,
      depth,
      callbackFunc);
    byte_42E96D1 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_26716828(
           Instance,
           parent,
           userSvtCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26717180(
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

  if ( (byte_42E96D2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      (_DWORD)userSvtCollectionEntity,
      imageLimitCount,
      *(_QWORD *)&depth);
    byte_42E96D2 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
  return CharaGraphManager__CreateTextureLocal_26717316(
           Instance,
           parent,
           userSvtCollectionEntity,
           imageLimitCount,
           depth,
           callbackFunc,
           v13);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26718052(
        UnityEngine_GameObject_o *parent,
        ServantLeaderInfo_o *servantLeaderInfo,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_42E96D3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      (_DWORD)servantLeaderInfo,
      depth,
      callbackFunc);
    byte_42E96D3 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  return CharaGraphManager__CreateTextureLocal_26718180(Instance, parent, servantLeaderInfo, depth, callbackFunc, v11);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26718532(
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

  if ( (byte_42E96D4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      (_DWORD)servantLeaderInfo,
      imageLimitCount,
      *(_QWORD *)&depth);
    byte_42E96D4 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
  return CharaGraphManager__CreateTextureLocal_26718668(
           Instance,
           parent,
           servantLeaderInfo,
           imageLimitCount,
           depth,
           callbackFunc,
           v13);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26719404(
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

  if ( (byte_42E96D5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      (_DWORD)equipTargetInfo,
      depth,
      isNpcFollowerServantEquip);
    byte_42E96D5 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
  return CharaGraphManager__CreateTextureLocal_26719540(
           Instance,
           parent,
           equipTargetInfo,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v13);
}


// local variable allocation has failed, the output may be wrong!
UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26719900(
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

  if ( (byte_42E96D6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      (_DWORD)equipTargetInfo,
      imageLimitCount,
      *(_QWORD *)&depth);
    byte_42E96D6 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v14);
  return CharaGraphManager__CreateTextureLocal_26720052(
           Instance,
           parent,
           equipTargetInfo,
           imageLimitCount,
           depth,
           isNpcFollowerServantEquip,
           callbackFunc,
           v15);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26720796(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeEntity_o *userCommandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_42E96D7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      (_DWORD)userCommandCodeEntity,
      depth,
      callbackFunc);
    byte_42E96D7 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_26720924(
           Instance,
           parent,
           userCommandCodeEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26721272(
        UnityEngine_GameObject_o *parent,
        UserCommandCodeCollectionEntity_o *userCommandCodeCollectionEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_42E96D8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      (_DWORD)userCommandCodeCollectionEntity,
      depth,
      callbackFunc);
    byte_42E96D8 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_26721400(
           Instance,
           parent,
           userCommandCodeCollectionEntity,
           depth,
           callbackFunc,
           v11);
}


UICharaGraphTexture_o *__fastcall CharaGraphManager__CreateTexturePrefab_26721748(
        UnityEngine_GameObject_o *parent,
        CommandCodeEntity_o *commandCodeEntity,
        int32_t depth,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  CharaGraphManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x5

  if ( (byte_42E96D9 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__,
      (_DWORD)commandCodeEntity,
      depth,
      callbackFunc);
    byte_42E96D9 = 1;
  }
  Instance = (CharaGraphManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CharaGraphManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  return CharaGraphManager__CreateCommandTextureLocal_26721876(
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

  if ( (byte_42E96C7 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, imageLimitCount, (_DWORD)callback, method);
    byte_42E96C7 = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *CommandAssetName; // x20

  if ( (byte_42E96C8 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&UICharaGraphRender_TypeInfo, v6, v7, v8);
    byte_42E96C8 = 1;
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
  __int64 v3; // x3

  if ( (byte_42E96C3 & 1) == 0 )
  {
    sub_B5D5C4(&UICharaGraphRender_TypeInfo, imageLimitCount, (_DWORD)method, v3);
    byte_42E96C3 = 1;
  }
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  }
  return UICharaGraphRender__GetAssetName(svtId, imageLimitCount, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetAssetName_26713332(int32_t imageSvtId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E96C4 & 1) == 0 )
  {
    sub_B5D5C4(&UICharaGraphRender_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E96C4 = 1;
  }
  if ( (BYTE3(UICharaGraphRender_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UICharaGraphRender_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UICharaGraphRender_TypeInfo);
  }
  return UICharaGraphRender__GetAssetName_35973992(imageSvtId, 0LL);
}


System_String_o *__fastcall CharaGraphManager__GetCommandAssetName(int32_t commandCodeId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E96C5 & 1) == 0 )
  {
    sub_B5D5C4(&UICharaGraphRender_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E96C5 = 1;
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E96C6 & 1) == 0 )
  {
    sub_B5D5C4(&UICharaGraphRender_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E96C6 = 1;
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

  if ( (byte_42E96C9 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, imageLimitCount, (_DWORD)callback, method);
    byte_42E96C9 = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *CommandAssetName; // x20

  if ( (byte_42E96CA & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&UICharaGraphRender_TypeInfo, v6, v7, v8);
    byte_42E96CA = 1;
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
  __int64 v3; // x3
  System_String_o *AssetName; // x19

  if ( (byte_42E96CB & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, imageLimitCount, (_DWORD)method, v3);
    byte_42E96CB = 1;
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *CommandAssetName; // x19

  if ( (byte_42E96CC & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, imageLimitCount, (_DWORD)method, v3);
    sub_B5D5C4(&UICharaGraphRender_TypeInfo, v5, v6, v7);
    byte_42E96CC = 1;
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