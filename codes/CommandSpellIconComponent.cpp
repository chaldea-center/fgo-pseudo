void __fastcall CommandSpellIconComponent___ctor(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.Size.fields.x) = 3;
  *(_QWORD *)&this->fields.ImageTypeOld = 0xFFFFFFFF00000001LL;
  *(int32x2_t *)&this->fields.Size.fields.y = vdup_n_s32(0x42200000u);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommandSpellIconComponent__Awake(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  UnityEngine_Object_o *klass; // x20
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_421487A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentInChildren_UITexture___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_421487A = 1;
  }
  ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                   (UnityEngine_Component_o *)this,
                                   (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
  this->fields.disableSp = (struct UISprite_o *)ComponentInChildren_UIWidget;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.disableSp,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this[1].klass;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B0D97C(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandSpellIconComponent__GetSpellImageAssetStorageName(
        CommandSpellIconComponent_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  System_String_o *SpellImageFileName; // x0

  if ( (byte_421487F & 1) == 0 )
  {
    this = (CommandSpellIconComponent_o *)sub_B0D8A4(&StringLiteral_4185/*"CommandSpell/"*/, *(_QWORD *)&tp);
    byte_421487F = 1;
  }
  SpellImageFileName = CommandSpellIconComponent__GetSpellImageFileName(this, tp, method);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_4185/*"CommandSpell/"*/, SpellImageFileName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandSpellIconComponent__GetSpellImageFileName(
        CommandSpellIconComponent_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4214880 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&tp);
    sub_B0D8A4(&StringLiteral_23573/*"{0:0000}"*/, v4);
    sub_B0D8A4(&StringLiteral_17873/*"cs_"*/, v5);
    byte_4214880 = 1;
  }
  v9 = tp;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_23573/*"{0:0000}"*/, v6, 0LL);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_17873/*"cs_"*/, v7, 0LL);
}


void __fastcall CommandSpellIconComponent__Initialize(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1

  CommandSpellIconComponent__SetImageType(this, this->fields.ImageTypeOld, v2);
  CommandSpellIconComponent__SetRemain(this, LODWORD(this->fields.Size.fields.x), v4);
  CommandSpellIconComponent__SetSize(this, *(UnityEngine_Vector2_o *)&this->fields.Size.fields.y, v5);
}


void __fastcall CommandSpellIconComponent__NotUseCommandSpellDisplay(
        CommandSpellIconComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *klass; // x21
  BattleDataDefine_c *v12; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *v16; // x20
  bool v17; // w1

  if ( (byte_4214884 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, data);
    sub_B0D8A4(&AssetManager_TypeInfo, v5);
    sub_B0D8A4(&BattleDataDefine_TypeInfo, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_17874/*"cs_txt_disable"*/, v9);
    sub_B0D8A4(&StringLiteral_2781/*"BattleAssetUIAtlas"*/, v10);
    byte_4214884 = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
  {
    v12 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v12 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v12->static_fields->ASSET_BATTLE_COMMON;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
    if ( AssetStorage )
    {
      AssetStorage = (AssetData_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      AssetStorage,
                                      (System_String_o *)StringLiteral_2781/*"BattleAssetUIAtlas"*/,
                                      (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
      if ( AssetStorage )
      {
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)AssetStorage,
                                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
          return;
        AssetStorage = (AssetData_o *)this[1].klass;
        if ( AssetStorage )
        {
          UISprite__set_atlas((UISprite_o *)AssetStorage, (UIAtlas_o *)Component_srcLineSprite, 0LL);
          AssetStorage = (AssetData_o *)this[1].klass;
          if ( AssetStorage )
          {
            UISprite__set_spriteName((UISprite_o *)AssetStorage, (System_String_o *)StringLiteral_17874/*"cs_txt_disable"*/, 0LL);
            AssetStorage = (AssetData_o *)this[1].klass;
            if ( AssetStorage )
            {
              ((void (__fastcall *)(AssetData_o *, void *))AssetStorage->klass[2]._1.typeMetadataHandle)(
                AssetStorage,
                AssetStorage->klass[2]._1.interopData);
              AssetStorage = (AssetData_o *)this[1].klass;
              if ( AssetStorage )
              {
                AssetStorage = (AssetData_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)AssetStorage,
                                                0LL);
                if ( data )
                {
                  v16 = (UnityEngine_GameObject_o *)AssetStorage;
                  AssetStorage = (AssetData_o *)data->fields.quest_ent;
                  if ( AssetStorage )
                  {
                    AssetStorage = (AssetData_o *)QuestEntity__HasFlag(
                                                    (QuestEntity_o *)AssetStorage,
                                                    0x400000000LL,
                                                    0LL);
                    if ( ((unsigned __int8)AssetStorage & 1) != 0 )
                    {
                      AssetStorage = (AssetData_o *)BattleData__GetOverwriteCommandSpellIcon(data, 0LL);
                      v17 = (_DWORD)AssetStorage != 0;
                      if ( !v16 )
                        goto LABEL_31;
                    }
                    else
                    {
                      v17 = 0;
                      if ( !v16 )
                        goto LABEL_31;
                    }
                    UnityEngine_GameObject__SetActive(v16, v17, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_31:
    sub_B0D97C(AssetStorage);
  }
}


void __fastcall CommandSpellIconComponent__ReleaseAll(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *disableSp; // x20
  _BOOL8 v7; // x0
  UnityEngine_Object_o *v8; // x21
  BattleServantConfConponent_o *p_callbackFunc; // x19
  struct System_Action_o *callbackFunc; // t1
  __int64 v11; // x20
  __int64 v12; // x20
  UnityEngine_Object_o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  AssetData_o *klass; // x20

  if ( (byte_4214879 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AssetManager__getInstance__, v4);
    sub_B0D8A4(&StringLiteral_16063/*"_MaskTex"*/, v5);
    byte_4214879 = 1;
  }
  disableSp = (UnityEngine_Object_o *)this->fields.disableSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(disableSp, 0LL, 0LL);
  if ( !v7 )
    goto LABEL_17;
  if ( !disableSp )
LABEL_32:
    sub_B0D97C(v7);
  v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))disableSp->klass[1].vtable._1_Finalize.method)(
                                 disableSp,
                                 disableSp->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
  if ( !v7 )
  {
    if ( v8 )
    {
      UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v8, 0LL, 0LL);
      UnityEngine_Material__SetTexture((UnityEngine_Material_o *)v8, (System_String_o *)StringLiteral_16063/*"_MaskTex"*/, 0LL, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v8, 0LL);
      ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, Il2CppMethodPointer))disableSp->klass[1].vtable._2_GetHashCode.method)(
        disableSp,
        0LL,
        disableSp->klass[1].vtable._3_ToString.methodPtr);
LABEL_17:
      callbackFunc = this->fields.callbackFunc;
      p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
      if ( callbackFunc )
      {
        v11 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
          sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 3));
        v12 = **(_QWORD **)(v11 + 192);
        if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
          sub_AA65A4(v12);
        v13 = **(UnityEngine_Object_o ***)(v12 + 184);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Implicit(v13, 0LL) )
        {
          klass = (AssetData_o *)p_callbackFunc->klass;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          AssetManager__releaseAsset_29516400(klass, 0LL);
        }
        p_callbackFunc->klass = 0LL;
        sub_B0D840(p_callbackFunc, 0LL, v14, v15, v16, v17, v18, v19);
      }
      return;
    }
    goto LABEL_32;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellIconComponent__SetChangeCmdSpellData(
        CommandSpellIconComponent_o *this,
        int32_t cmdSpellImgId,
        const MethodInfo *method)
{
  int32_t Value; // w21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_421487D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_8708/*"MAX_COMMAND_SPELL"*/, *(_QWORD *)&cmdSpellImgId);
    byte_421487D = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8708/*"MAX_COMMAND_SPELL"*/, 0LL);
  CommandSpellIconComponent__SetImageType(this, cmdSpellImgId, v6);
  CommandSpellIconComponent__SetRemain(this, Value, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellIconComponent__SetChangeCurrentCmdSepll(
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
    System_Action__Invoke(callback, 0LL);
}


void __fastcall CommandSpellIconComponent__SetData(
        CommandSpellIconComponent_o *this,
        UserGameEntity_o *entity,
        const MethodInfo *method)
{
  UserGameEntity_o *v3; // x20
  int32_t SpellImageId; // w21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( !entity )
    sub_B0D97C(this);
  v3 = entity;
  SpellImageId = UserGameEntity__get_SpellImageId(entity, 0LL);
  LODWORD(v3) = UserGameEntity__getCommandSpell(v3, 0LL);
  CommandSpellIconComponent__SetImageType(this, SpellImageId, v6);
  CommandSpellIconComponent__SetRemain(this, (int32_t)v3, v7);
}


void __fastcall CommandSpellIconComponent__SetDataBattle(
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
    || (v5 = this, this = (CommandSpellIconComponent_o *)UserGameEntity__get_SpellImageIdBattle(entity, 0LL),
                   !battleData) )
  {
    sub_B0D97C(this);
  }
  v7 = (int)this;
  v8 = BattleData__CheckCurrentTemporaryCommandSpell(battleData, entity, 0LL);
  CommandSpellIconComponent__SetImageType(v5, v7, v9);
  CommandSpellIconComponent__SetRemain(v5, v8, v10);
  CommandSpellIconComponent__NotUseCommandSpellDisplay(v5, battleData, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellIconComponent__SetDispDisableSp(
        CommandSpellIconComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *assetData; // x21
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_421487E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isDisp);
    byte_421487E = 1;
  }
  assetData = (UnityEngine_Object_o *)this->fields.assetData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(assetData, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.assetData;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B0D97C(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isDisp, 0LL);
  }
}


void __fastcall CommandSpellIconComponent__SetFullData(
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
  if ( (byte_421487C & 1) == 0 )
  {
    this = (CommandSpellIconComponent_o *)sub_B0D8A4(&StringLiteral_8708/*"MAX_COMMAND_SPELL"*/, entity);
    byte_421487C = 1;
  }
  if ( !entity )
    sub_B0D97C(this);
  SpellImageId = UserGameEntity__get_SpellImageId(entity, 0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8708/*"MAX_COMMAND_SPELL"*/, 0LL);
  CommandSpellIconComponent__SetImageType(v4, SpellImageId, v7);
  CommandSpellIconComponent__SetRemain(v4, Value, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellIconComponent__SetImageType(
        CommandSpellIconComponent_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2
  System_String_o *SpellImageAssetStorageName; // x21
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  AssetLoader_LoadEndDataHandler_o *v21; // x19

  if ( (byte_4214881 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&tp);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_B0D8A4(&Method_CommandSpellIconComponent___c__DisplayClass23_0__SetImageType_b__0__, v6);
    sub_B0D8A4(&CommandSpellIconComponent___c__DisplayClass23_0_TypeInfo, v7);
    byte_4214881 = 1;
  }
  v8 = sub_B0D974(CommandSpellIconComponent___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&tp, method);
  CommandSpellIconComponent___c__DisplayClass23_0___ctor((CommandSpellIconComponent___c__DisplayClass23_0_o *)v8, 0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  *(_QWORD *)(v8 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v8 + 24) = tp;
  if ( this->fields.Remain != tp )
  {
    this->fields.ImageTypeOld = tp;
    this->fields.Remain = *(_DWORD *)(v8 + 24);
    SpellImageAssetStorageName = CommandSpellIconComponent__GetSpellImageAssetStorageName(
                                   this,
                                   *(_DWORD *)(v8 + 24),
                                   v16);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( AssetManager__isExistAssetStorage(SpellImageAssetStorageName, 0LL) )
    {
      CommandSpellIconComponent__ReleaseAll(this, v18);
      v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v19, v20);
      AssetLoader_LoadEndDataHandler___ctor(
        v21,
        (Il2CppObject *)v8,
        Method_CommandSpellIconComponent___c__DisplayClass23_0__SetImageType_b__0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage(SpellImageAssetStorageName, v21, 1, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellIconComponent__SetRemain(
        CommandSpellIconComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  UITexture_o *disableSp; // x19
  float v6; // s4
  float v7; // s5
  float v8; // s6
  float v9; // s7
  __int64 v10; // x0
  UnityEngine_Rect_o v11; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Rect_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4214882 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
    byte_4214882 = 1;
  }
  LODWORD(this->fields.Size.fields.x) = count;
  disableSp = (UITexture_o *)this->fields.disableSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)disableSp, 0LL, 0LL) )
  {
    v12.fields.m_Width = 0.5;
    v12.fields.m_YMin = (float)(((unsigned int)count >> 1) & 1) * 0.5;
    v12.fields.m_XMin = (float)((count & 1) == 0) * 0.5;
    v12.fields.m_Height = 0.5;
    *(_QWORD *)&v11.fields.m_XMin = 0LL;
    *(_QWORD *)&v11.fields.m_Width = 0LL;
    UnityEngine_Rect___ctor(v12, v6, v7, v8, v9, (const MethodInfo *)&v11);
    if ( !disableSp )
      sub_B0D97C(v10);
    UITexture__set_uvRect(disableSp, v11, 0LL);
  }
}


bool __fastcall CommandSpellIconComponent__SetRevocationData(
        CommandSpellIconComponent_o *this,
        UserGameEntity_o *entity,
        System_String_o *overwriteImageId,
        int32_t overwriteSpellCount,
        const MethodInfo *method)
{
  System_String_o *v6; // x21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0
  bool v13; // w22
  const MethodInfo *v14; // x2
  UnityEngine_Object_o *assetData; // x23
  const MethodInfo *v16; // x2
  struct AssetData_o *v17; // x23
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  v6 = overwriteImageId;
  if ( (byte_421487B & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, entity);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_17874/*"cs_txt_disable"*/, v11);
    byte_421487B = 1;
  }
  *(_QWORD *)result = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421083E )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, entity);
    byte_421083E = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  if ( v12->static_fields->_DispState_k__BackingField == 2 )
  {
    if ( (overwriteSpellCount & 0x80000000) != 0 )
    {
      if ( !entity )
        sub_B0D97C(v12);
      result[0] = UserGameEntity__get_SpellImageId(entity, 0LL);
      v6 = System_Int32__ToString((int32_t)result, 0LL);
      overwriteSpellCount = UserGameEntity__getCommandSpell(entity, 0LL);
      v13 = 0;
    }
    else
    {
      v13 = 1;
    }
    assetData = (UnityEngine_Object_o *)this->fields.assetData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(assetData, 0LL, 0LL) )
    {
      v17 = this->fields.assetData;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite((UISprite_o *)v17, (System_String_o *)StringLiteral_17874/*"cs_txt_disable"*/, 0LL);
    }
    CommandSpellIconComponent__SetDispDisableSp(this, v13, v16);
    result[1] = 0;
    System_Int32__TryParse(v6, &result[1], 0LL);
    CommandSpellIconComponent__SetImageType(this, result[1], v18);
    CommandSpellIconComponent__SetRemain(this, overwriteSpellCount, v19);
  }
  else
  {
    CommandSpellIconComponent__SetDispDisableSp(this, 0, (const MethodInfo *)overwriteImageId);
    CommandSpellIconComponent__SetData(this, entity, v14);
    return 0;
  }
  return v13;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellIconComponent__SetSize(
        CommandSpellIconComponent_o *this,
        UnityEngine_Vector2_o sz,
        const MethodInfo *method)
{
  UIWidget_o *disableSp; // x19
  float y; // s8
  double x; // d0
  double v6; // d0

  disableSp = (UIWidget_o *)this->fields.disableSp;
  if ( !disableSp )
    sub_B0D97C(this);
  y = sz.fields.y;
  if ( sz.fields.x == INFINITY )
    x = -sz.fields.x;
  else
    x = sz.fields.x;
  UIWidget__set_width((UIWidget_o *)this->fields.disableSp, (int)x, 0LL);
  v6 = y;
  if ( y == INFINITY )
    v6 = -INFINITY;
  UIWidget__set_height(disableSp, (int)v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellIconComponent__SetTexture(
        CommandSpellIconComponent_o *this,
        AssetData_o *data,
        int32_t tp,
        const MethodInfo *method)
{
  CommandSpellIconComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *SpellImageFileName; // x0
  UnityEngine_Object_o *disableSp; // x19
  System_String_o *v14; // x22
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x20
  System_String_o *v16; // x0
  WarBoardWaitTimeSetting_o *v17; // x0
  UnityEngine_Texture_o *v18; // x21
  UnityEngine_Object_o *v19; // x22
  UnityEngine_Shader_o *v20; // x23
  __int64 v21; // x1
  __int64 v22; // x2

  v6 = this;
  if ( (byte_4214883 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_Texture2D____67951464, data);
    sub_B0D8A4(&UnityEngine_Material_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_16181/*"_alpha"*/, v9);
    sub_B0D8A4(&StringLiteral_4552/*"Custom/SpriteWithMask"*/, v10);
    this = (CommandSpellIconComponent_o *)sub_B0D8A4(&StringLiteral_16063/*"_MaskTex"*/, v11);
    byte_4214883 = 1;
  }
  if ( data )
  {
    SpellImageFileName = CommandSpellIconComponent__GetSpellImageFileName(this, tp, *(const MethodInfo **)&tp);
    disableSp = (UnityEngine_Object_o *)v6->fields.disableSp;
    v14 = SpellImageFileName;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(disableSp, 0LL, 0LL) )
    {
      Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                  data,
                                                                  v14,
                                                                  (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
      v16 = System_String__Concat_43849904(v14, (System_String_o *)StringLiteral_16181/*"_alpha"*/, 0LL);
      v17 = AssetData__GetObject_WarBoardWaitTimeSetting_(
              data,
              v16,
              (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_Texture2D____67951464);
      if ( !disableSp )
        goto LABEL_17;
      v18 = (UnityEngine_Texture_o *)v17;
      v19 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))disableSp->klass[1].vtable._1_Finalize.method)(
                                      disableSp,
                                      disableSp->klass[1].vtable._2_GetHashCode.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v17 = (WarBoardWaitTimeSetting_o *)UnityEngine_Object__op_Equality(v19, 0LL, 0LL);
      if ( ((unsigned __int8)v17 & 1) != 0 )
      {
        v20 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4552/*"Custom/SpriteWithMask"*/, 0LL);
        v19 = (UnityEngine_Object_o *)sub_B0D974(UnityEngine_Material_TypeInfo, v21, v22);
        UnityEngine_Material___ctor((UnityEngine_Material_o *)v19, v20, 0LL);
        v17 = (WarBoardWaitTimeSetting_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, UnityEngine_Object_o *, Il2CppMethodPointer))disableSp->klass[1].vtable._2_GetHashCode.method)(
                                             disableSp,
                                             v19,
                                             disableSp->klass[1].vtable._3_ToString.methodPtr);
      }
      if ( !v19 )
LABEL_17:
        sub_B0D97C(v17);
      UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v19, Object_WarBoardWaitTimeSetting, 0LL);
      UnityEngine_Material__SetTexture((UnityEngine_Material_o *)v19, (System_String_o *)StringLiteral_16063/*"_MaskTex"*/, v18, 0LL);
    }
  }
}


void __fastcall CommandSpellIconComponent___c__DisplayClass23_0___ctor(
        CommandSpellIconComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CommandSpellIconComponent___c__DisplayClass23_0___SetImageType_b__0(
        CommandSpellIconComponent___c__DisplayClass23_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct CommandSpellIconComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.callbackFunc = (struct System_Action_o *)data,
        sub_B0D840(&_4__this->fields.callbackFunc, data),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(_4__this);
  }
  CommandSpellIconComponent__SetTexture(_4__this, data, this->fields.tp, 0LL);
}