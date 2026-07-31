void CommandSpellIconComponent___ctor(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  this->fields.Size.fields.y = 40.0;
  *(_OWORD *)&this->fields.ImageType = xmmword_E92DD0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CommandSpellIconComponent__Awake(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *ComponentInChildren_object__58644924; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *notUseCommandSpellSpr; // x20
  __int64 v13; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_5937A91 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937A91 = 1;
  }
  ComponentInChildren_object__58644924 = UnityEngine_Component__GetComponentInChildren_object__58644924(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
  this->fields.myTexture = (struct UITexture_o *)ComponentInChildren_object__58644924;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.myTexture,
    (int32_t)ComponentInChildren_object__58644924,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  notUseCommandSpellSpr = (UnityEngine_Object_o *)this->fields.notUseCommandSpellSpr;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( UnityEngine_Object__op_Inequality(notUseCommandSpellSpr, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.notUseCommandSpellSpr;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_21FFECC(gameObject, v13);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
}


System_String_o *CommandSpellIconComponent__GetSpellImageAssetStorageName(
        CommandSpellIconComponent_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  System_String_o *SpellImageFileName; // x0

  if ( (byte_5937A96 & 1) == 0 )
  {
    this = (CommandSpellIconComponent_o *)sub_21FFC50(&StringLiteral_4761/*"CommandSpell/"*/);
    byte_5937A96 = 1;
  }
  SpellImageFileName = CommandSpellIconComponent__GetSpellImageFileName(this, tp, method);
  return System_String__Concat_75438412((System_String_o *)StringLiteral_4761/*"CommandSpell/"*/, SpellImageFileName, 0);
}


System_String_o *CommandSpellIconComponent__GetSpellImageFileName(
        CommandSpellIconComponent_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937A97 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26389/*"{0:0000}"*/);
    sub_21FFC50(&StringLiteral_19174/*"cs_"*/);
    byte_5937A97 = 1;
  }
  v7 = tp;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v7);
  v5 = System_String__Format((System_String_o *)StringLiteral_26389/*"{0:0000}"*/, v4, 0);
  return System_String__Concat_75438412((System_String_o *)StringLiteral_19174/*"cs_"*/, v5, 0);
}


void CommandSpellIconComponent__Initialize(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1

  CommandSpellIconComponent__SetImageType(this, this->fields.ImageType, v2);
  CommandSpellIconComponent__SetRemain(this, this->fields.Remain, v4);
  CommandSpellIconComponent__SetSize(this, this->fields.Size, v5);
}


void CommandSpellIconComponent__NotUseCommandSpellDisplay(
        CommandSpellIconComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *notUseCommandSpellSpr; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  BattleDataDefine_c *v8; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  _BOOL8 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v15; // x20

  if ( (byte_5937A9B & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&BattleDataDefine_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_19175/*"cs_txt_disable"*/);
    sub_21FFC50(&StringLiteral_3226/*"BattleAssetUIAtlas"*/);
    byte_5937A9B = 1;
  }
  notUseCommandSpellSpr = (UnityEngine_Object_o *)this->fields.notUseCommandSpellSpr;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, data, method);
  if ( !UnityEngine_Object__op_Equality(notUseCommandSpellSpr, 0, 0) )
  {
    v8 = BattleDataDefine_TypeInfo;
    if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v6, v7);
      v8 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v8->static_fields->ASSET_BATTLE_COMMON;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v6, v7);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
    if ( AssetStorage )
    {
      AssetStorage = (AssetData_o *)AssetData__GetObject_object__58323140(
                                      AssetStorage,
                                      (System_String_o *)StringLiteral_3226/*"BattleAssetUIAtlas"*/,
                                      (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
      if ( AssetStorage )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)AssetStorage,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0) )
          return;
        AssetStorage = (AssetData_o *)this->fields.notUseCommandSpellSpr;
        if ( AssetStorage )
        {
          UISprite__set_atlas((UISprite_o *)AssetStorage, (UIAtlas_o *)Component_object, 0);
          AssetStorage = (AssetData_o *)this->fields.notUseCommandSpellSpr;
          if ( AssetStorage )
          {
            UISprite__set_spriteName((UISprite_o *)AssetStorage, (System_String_o *)StringLiteral_19175/*"cs_txt_disable"*/, 0);
            AssetStorage = (AssetData_o *)this->fields.notUseCommandSpellSpr;
            if ( AssetStorage )
            {
              ((void (__fastcall *)(AssetData_o *, void *))AssetStorage->klass[2]._1.parent)(
                AssetStorage,
                AssetStorage->klass[2]._1.generic_class);
              AssetStorage = (AssetData_o *)this->fields.notUseCommandSpellSpr;
              if ( AssetStorage )
              {
                AssetStorage = (AssetData_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)AssetStorage,
                                                0);
                if ( data )
                {
                  v15 = (UnityEngine_GameObject_o *)AssetStorage;
                  AssetStorage = (AssetData_o *)data->fields.quest_ent;
                  if ( AssetStorage )
                  {
                    AssetStorage = (AssetData_o *)QuestEntity__HasFlag((QuestEntity_o *)AssetStorage, 0x400000000LL, 0);
                    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
                    {
                      AssetStorage = (AssetData_o *)BattleData__GetOverwriteCommandSpellIcon(data, 0);
                      v11 = (_DWORD)AssetStorage != 0;
                    }
                    else
                    {
                      v11 = 0;
                    }
                    if ( v15 )
                    {
                      UnityEngine_GameObject__SetActive(v15, v11, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_21FFECC(AssetStorage, v11);
  }
}


void CommandSpellIconComponent__ReleaseAll(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *myTexture; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  long double v8; // q0
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  MissionNaviTransitionBoardItem_o *p_assetData; // x19
  struct AssetData_o *assetData; // t1
  __int64 v16; // x0
  __int64 v17; // x0
  UnityEngine_Object_o *v18; // x20
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  AssetData_o *klass; // x20

  if ( (byte_5937A90 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__getInstance__);
    sub_21FFC50(&StringLiteral_16884/*"_MaskTex"*/);
    byte_5937A90 = 1;
  }
  myTexture = (UnityEngine_Object_o *)this->fields.myTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(myTexture, 0, 0);
  if ( !v5 )
    goto LABEL_14;
  if ( !myTexture )
LABEL_27:
    sub_21FFECC(v5, v6);
  v11 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))myTexture->klass[1].vtable._0_Equals.method)(
                                  myTexture,
                                  myTexture->klass[1].vtable._1_Finalize.methodPtr);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  v5 = UnityEngine_Object__op_Equality(v11, 0, 0);
  if ( !v5 )
  {
    if ( v11 )
    {
      UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v11, 0, 0);
      UnityEngine_Material__SetTexture((UnityEngine_Material_o *)v11, (System_String_o *)StringLiteral_16884/*"_MaskTex"*/, 0, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
      UnityEngine_Object__Destroy_83246496(v11, 0);
      ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, Il2CppMethodPointer))myTexture->klass[1].vtable._1_Finalize.method)(
        myTexture,
        0,
        myTexture->klass[1].vtable._2_GetHashCode.methodPtr);
LABEL_14:
      assetData = this->fields.assetData;
      p_assetData = (MissionNaviTransitionBoardItem_o *)&this->fields.assetData;
      if ( assetData )
      {
        v16 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
        if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
          v16 = sub_2237AF8(v8);
        v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
        if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
          v17 = sub_2237AF8(v8);
        v18 = **(UnityEngine_Object_o ***)(v17 + 184);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
        if ( UnityEngine_Object__op_Implicit(v18, 0) )
        {
          klass = (AssetData_o *)p_assetData->klass;
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v19, v20);
          AssetManager__releaseAsset_47465556(klass, 0);
        }
        p_assetData->klass = 0;
        sub_21FFBF4(p_assetData, 0, v20, v21, v22, v23, v24, v25);
      }
      return;
    }
    goto LABEL_27;
  }
}


void CommandSpellIconComponent__SetChangeCmdSpellData(
        CommandSpellIconComponent_o *this,
        int32_t cmdSpellImgId,
        const MethodInfo *method)
{
  int32_t Value; // w21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_5937A94 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8958/*"MAX_COMMAND_SPELL"*/);
    byte_5937A94 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8958/*"MAX_COMMAND_SPELL"*/, 0);
  CommandSpellIconComponent__SetImageType(this, cmdSpellImgId, v6);
  CommandSpellIconComponent__SetRemain(this, Value, v7);
}


// local variable allocation has failed, the output may be wrong!
void CommandSpellIconComponent__SetChangeCurrentCmdSepll(
        CommandSpellIconComponent_o *this,
        int32_t cmdSpellImgId,
        int32_t cmdRemain,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x2

  CommandSpellIconComponent__SetImageType(this, cmdSpellImgId, *(const MethodInfo **)&cmdRemain);
  CommandSpellIconComponent__SetRemain(this, cmdRemain, v8);
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


void CommandSpellIconComponent__SetData(
        CommandSpellIconComponent_o *this,
        UserGameEntity_o *entity,
        const MethodInfo *method)
{
  UserGameEntity_o *v3; // x20
  int32_t SpellImageId; // w21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( !entity )
    sub_21FFECC(this, 0);
  v3 = entity;
  SpellImageId = UserGameEntity__get_SpellImageId(entity, 0);
  LODWORD(v3) = UserGameEntity__getCommandSpell(v3, 0);
  CommandSpellIconComponent__SetImageType(this, SpellImageId, v6);
  CommandSpellIconComponent__SetRemain(this, (int32_t)v3, v7);
}


void CommandSpellIconComponent__SetDataBattle(
        CommandSpellIconComponent_o *this,
        UserGameEntity_o *entity,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  CommandSpellIconComponent_o *v5; // x20
  int32_t v7; // w22
  int32_t v8; // w21
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( !entity
    || (v5 = this, this = (CommandSpellIconComponent_o *)UserGameEntity__get_SpellImageIdBattle(entity, 0), !battleData) )
  {
    sub_21FFECC(this, entity);
  }
  v7 = (int)this;
  v8 = BattleData__CheckCurrentTemporaryCommandSpell(battleData, entity, 0);
  CommandSpellIconComponent__SetImageType(v5, v7, v9);
  CommandSpellIconComponent__SetRemain(v5, v8, v10);
  CommandSpellIconComponent__NotUseCommandSpellDisplay(v5, battleData, v11);
}


// local variable allocation has failed, the output may be wrong!
void CommandSpellIconComponent__SetDispDisableSp(
        CommandSpellIconComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *disableSp; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_5937A95 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937A95 = 1;
  }
  disableSp = (UnityEngine_Object_o *)this->fields.disableSp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, method);
  if ( UnityEngine_Object__op_Inequality(disableSp, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.disableSp;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_21FFECC(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isDisp, 0);
  }
}


void CommandSpellIconComponent__SetFullData(
        CommandSpellIconComponent_o *this,
        UserGameEntity_o *entity,
        const MethodInfo *method)
{
  CommandSpellIconComponent_o *v4; // x19
  int32_t SpellImageId; // w20
  int32_t Value; // w21
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  v4 = this;
  if ( (byte_5937A93 & 1) == 0 )
  {
    this = (CommandSpellIconComponent_o *)sub_21FFC50(&StringLiteral_8958/*"MAX_COMMAND_SPELL"*/);
    byte_5937A93 = 1;
  }
  if ( !entity )
    sub_21FFECC(this, entity);
  SpellImageId = UserGameEntity__get_SpellImageId(entity, 0);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8958/*"MAX_COMMAND_SPELL"*/, 0);
  CommandSpellIconComponent__SetImageType(v4, SpellImageId, v7);
  CommandSpellIconComponent__SetRemain(v4, Value, v8);
}


void CommandSpellIconComponent__SetImageType(CommandSpellIconComponent_o *this, int32_t tp, const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x2
  int32_t ImageTypeOld; // w8
  __int64 v16; // x1
  __int64 v17; // x2
  System_String_o *SpellImageAssetStorageName; // x21
  const MethodInfo *v19; // x1
  AssetLoader_LoadEndDataHandler_o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2

  if ( (byte_5937A98 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_CommandSpellIconComponent___c__DisplayClass23_0__SetImageType_b__0__);
    sub_21FFC50(&CommandSpellIconComponent___c__DisplayClass23_0_TypeInfo);
    byte_5937A98 = 1;
  }
  v5 = sub_21FFEBC(CommandSpellIconComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  ImageTypeOld = this->fields.ImageTypeOld;
  *(_DWORD *)(v5 + 24) = tp;
  if ( ImageTypeOld != tp )
  {
    this->fields.ImageType = tp;
    this->fields.ImageTypeOld = tp;
    SpellImageAssetStorageName = CommandSpellIconComponent__GetSpellImageAssetStorageName(this, tp, v14);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v16, v17);
    if ( AssetManager__isExistAssetStorage(SpellImageAssetStorageName, 0) )
    {
      CommandSpellIconComponent__ReleaseAll(this, v19);
      v20 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v20,
        (Il2CppObject *)v5,
        Method_CommandSpellIconComponent___c__DisplayClass23_0__SetImageType_b__0__,
        0);
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v21, v22);
      AssetManager__loadAssetStorage(SpellImageAssetStorageName, v20, 1, 0, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void CommandSpellIconComponent__SetRemain(CommandSpellIconComponent_o *this, int32_t count, const MethodInfo *method)
{
  UnityEngine_Object_c *v5; // x0
  UnityEngine_Object_o *myTexture; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Rect_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5937A99 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937A99 = 1;
  }
  v5 = UnityEngine_Object_TypeInfo;
  myTexture = (UnityEngine_Object_o *)this->fields.myTexture;
  this->fields.Remain = count;
  if ( !*(&v5->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&count, method);
  v7 = UnityEngine_Object__op_Inequality(myTexture, 0, 0);
  if ( v7 )
  {
    if ( !myTexture )
      sub_21FFECC(v7, v8);
    v9.fields.m_YMin = vcvts_n_f32_s32(((unsigned int)count >> 1) & 1, 1u);
    v9.fields.m_XMin = vcvts_n_f32_s32((count & 1) == 0, 1u);
    v9.fields.m_Width = 0.5;
    v9.fields.m_Height = 0.5;
    UITexture__set_uvRect((UITexture_o *)myTexture, v9, 0);
  }
}


bool CommandSpellIconComponent__SetRevocationData(
        CommandSpellIconComponent_o *this,
        UserGameEntity_o *entity,
        System_String_o *overwriteImageId,
        int32_t overwriteSpellCount,
        const MethodInfo *method)
{
  System_String_o *v6; // x21
  TerminalPramsManager_c *v9; // x0
  int32_t CommandSpell; // w23
  UnityEngine_Object_o *disableSp; // x24
  bool v12; // w22
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  UISprite_o *v15; // x24
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  v6 = overwriteImageId;
  if ( (byte_5937A92 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_19175/*"cs_txt_disable"*/);
    byte_5937A92 = 1;
  }
  *(_QWORD *)result = 0;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, entity, overwriteImageId);
  if ( !byte_5934F89 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934F89 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, entity, overwriteImageId);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->_DispState_k__BackingField == 2 )
  {
    CommandSpell = overwriteSpellCount;
    if ( overwriteSpellCount < 0 )
    {
      if ( !entity )
        sub_21FFECC(v9, entity);
      result[0] = UserGameEntity__get_SpellImageId(entity, 0);
      v6 = System_Int32__ToString((int32_t)result, 0);
      CommandSpell = UserGameEntity__getCommandSpell(entity, 0);
    }
    disableSp = (UnityEngine_Object_o *)this->fields.disableSp;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, entity, overwriteImageId);
    v12 = overwriteSpellCount >= 0;
    if ( UnityEngine_Object__op_Inequality(disableSp, 0, 0) )
    {
      v15 = this->fields.disableSp;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13, v14);
      AtlasManager__SetEventSprite(v15, (System_String_o *)StringLiteral_19175/*"cs_txt_disable"*/, 0);
    }
    CommandSpellIconComponent__SetDispDisableSp(this, overwriteSpellCount >= 0, v14);
    result[1] = 0;
    System_Int32__TryParse(v6, &result[1], 0);
    CommandSpellIconComponent__SetImageType(this, result[1], v16);
    CommandSpellIconComponent__SetRemain(this, CommandSpell, v17);
  }
  else
  {
    CommandSpellIconComponent__SetDispDisableSp(this, 0, (const MethodInfo *)overwriteImageId);
    CommandSpellIconComponent__SetData(this, entity, v18);
    return 0;
  }
  return v12;
}


void CommandSpellIconComponent__SetSize(
        CommandSpellIconComponent_o *this,
        UnityEngine_Vector2_o sz,
        const MethodInfo *method)
{
  UIWidget_o *myTexture; // x19
  UIWidget_o *v4; // x0
  float y; // s8
  int32_t x; // w1
  int32_t v7; // w1

  myTexture = (UIWidget_o *)this->fields.myTexture;
  if ( !myTexture )
    sub_21FFECC(this, method);
  v4 = (UIWidget_o *)this->fields.myTexture;
  y = sz.fields.y;
  if ( sz.fields.x == INFINITY )
    x = 0x80000000;
  else
    x = (int)sz.fields.x;
  UIWidget__set_width(v4, x, 0);
  if ( y == INFINITY )
    v7 = 0x80000000;
  else
    v7 = (int)y;
  UIWidget__set_height(myTexture, v7, 0);
}


// local variable allocation has failed, the output may be wrong!
void CommandSpellIconComponent__SetTexture(
        CommandSpellIconComponent_o *this,
        AssetData_o *data,
        int32_t tp,
        const MethodInfo *method)
{
  CommandSpellIconComponent_o *v6; // x19
  System_String_o *SpellImageFileName; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *myTexture; // x19
  System_String_o *v11; // x22
  Il2CppObject *Object_object__58323140; // x21
  System_String_o *v13; // x0
  Il2CppObject *v14; // x0
  __int64 v15; // x1
  UnityEngine_Texture_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  UnityEngine_Object_o *v19; // x22
  UnityEngine_Shader_o *v20; // x23

  v6 = this;
  if ( (byte_5937A9A & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_Texture2D____91482152);
    sub_21FFC50(&UnityEngine_Material_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_17171/*"_alpha"*/);
    sub_21FFC50(&StringLiteral_5116/*"Custom/SpriteWithMask"*/);
    this = (CommandSpellIconComponent_o *)sub_21FFC50(&StringLiteral_16884/*"_MaskTex"*/);
    byte_5937A9A = 1;
  }
  if ( data )
  {
    SpellImageFileName = CommandSpellIconComponent__GetSpellImageFileName(this, tp, *(const MethodInfo **)&tp);
    myTexture = (UnityEngine_Object_o *)v6->fields.myTexture;
    v11 = SpellImageFileName;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( UnityEngine_Object__op_Inequality(myTexture, 0, 0) )
    {
      Object_object__58323140 = AssetData__GetObject_object__58323140(
                                  data,
                                  v11,
                                  (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
      v13 = System_String__Concat_75438412(v11, (System_String_o *)StringLiteral_17171/*"_alpha"*/, 0);
      v14 = AssetData__GetObject_object__58323140(
              data,
              v13,
              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_Texture2D____91482152);
      if ( !myTexture )
        goto LABEL_15;
      v16 = (UnityEngine_Texture_o *)v14;
      v19 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))myTexture->klass[1].vtable._0_Equals.method)(
                                      myTexture,
                                      myTexture->klass[1].vtable._1_Finalize.methodPtr);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17, v18);
      v14 = (Il2CppObject *)UnityEngine_Object__op_Equality(v19, 0, 0);
      if ( ((unsigned __int8)v14 & 1) != 0 )
      {
        v20 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5116/*"Custom/SpriteWithMask"*/, 0);
        v19 = (UnityEngine_Object_o *)sub_21FFEBC(UnityEngine_Material_TypeInfo);
        UnityEngine_Material___ctor((UnityEngine_Material_o *)v19, v20, 0);
        v14 = (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Object_o *, UnityEngine_Object_o *, Il2CppMethodPointer))myTexture->klass[1].vtable._1_Finalize.method)(
                                myTexture,
                                v19,
                                myTexture->klass[1].vtable._2_GetHashCode.methodPtr);
      }
      if ( !v19 )
LABEL_15:
        sub_21FFECC(v14, v15);
      UnityEngine_Material__set_mainTexture(
        (UnityEngine_Material_o *)v19,
        (UnityEngine_Texture_o *)Object_object__58323140,
        0);
      UnityEngine_Material__SetTexture((UnityEngine_Material_o *)v19, (System_String_o *)StringLiteral_16884/*"_MaskTex"*/, v16, 0);
    }
  }
}


void CommandSpellIconComponent___c__DisplayClass23_0___ctor(
        CommandSpellIconComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CommandSpellIconComponent___c__DisplayClass23_0___SetImageType_b__0(
        CommandSpellIconComponent___c__DisplayClass23_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct CommandSpellIconComponent_o *_4__this; // x0
  const MethodInfo *v11; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.assetData = data,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.assetData,
          (int32_t)data,
          (System_String_o *)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_21FFECC(_4__this, data);
  }
  CommandSpellIconComponent__SetTexture(_4__this, data, this->fields.tp, v11);
}