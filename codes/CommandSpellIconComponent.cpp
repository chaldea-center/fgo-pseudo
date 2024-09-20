void __fastcall CommandSpellIconComponent___ctor(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  this->fields.Size.fields.y = 40.0;
  *(_OWORD *)&this->fields.ImageType = xmmword_BB4760;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommandSpellIconComponent__Awake(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  UnityEngine_Object_o *notUseCommandSpellSpr; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4A5A5D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A5D8 = 1;
  }
  ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
  this->fields.myTexture = (struct UITexture_o *)ComponentInChildren_object__48719376;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.myTexture,
    (int32_t)ComponentInChildren_object__48719376,
    v4,
    v5);
  notUseCommandSpellSpr = (UnityEngine_Object_o *)this->fields.notUseCommandSpellSpr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(notUseCommandSpellSpr, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.notUseCommandSpellSpr;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1B8880C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
}


System_String_o *__fastcall CommandSpellIconComponent__GetSpellImageAssetStorageName(
        CommandSpellIconComponent_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  System_String_o *SpellImageFileName; // x0

  if ( (byte_4A5A5DD & 1) == 0 )
  {
    this = (CommandSpellIconComponent_o *)sub_1B885B0(&StringLiteral_4622/*"CommandSpell/"*/);
    byte_4A5A5DD = 1;
  }
  SpellImageFileName = CommandSpellIconComponent__GetSpellImageFileName(this, tp, method);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_4622/*"CommandSpell/"*/, SpellImageFileName, 0LL);
}


System_String_o *__fastcall CommandSpellIconComponent__GetSpellImageFileName(
        CommandSpellIconComponent_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5A5DE & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_24940/*"{0:0000}"*/);
    sub_1B885B0(&StringLiteral_18384/*"cs_"*/);
    byte_4A5A5DE = 1;
  }
  v9 = tp;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, method, v3, v4);
  v7 = System_String__Format((System_String_o *)StringLiteral_24940/*"{0:0000}"*/, v6, 0LL);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_18384/*"cs_"*/, v7, 0LL);
}


void __fastcall CommandSpellIconComponent__Initialize(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x1

  CommandSpellIconComponent__SetImageType(this, this->fields.ImageType, v2);
  CommandSpellIconComponent__SetRemain(this, this->fields.Remain, v4);
  CommandSpellIconComponent__SetSize(this, this->fields.Size, v5);
}


void __fastcall CommandSpellIconComponent__NotUseCommandSpellDisplay(
        CommandSpellIconComponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *notUseCommandSpellSpr; // x21
  BattleDataDefine_c *v6; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  _BOOL8 v9; // x1
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v11; // x20

  if ( (byte_4A5A5E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_18385/*"cs_txt_disable"*/);
    sub_1B885B0(&StringLiteral_3227/*"BattleAssetUIAtlas"*/);
    byte_4A5A5E2 = 1;
  }
  notUseCommandSpellSpr = (UnityEngine_Object_o *)this->fields.notUseCommandSpellSpr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(notUseCommandSpellSpr, 0LL, 0LL) )
  {
    v6 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v6 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v6->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
    if ( AssetStorage )
    {
      AssetStorage = (AssetData_o *)AssetData__GetObject_object__48635516(
                                      AssetStorage,
                                      (System_String_o *)StringLiteral_3227/*"BattleAssetUIAtlas"*/,
                                      (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
      if ( AssetStorage )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)AssetStorage,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          return;
        AssetStorage = (AssetData_o *)this->fields.notUseCommandSpellSpr;
        if ( AssetStorage )
        {
          UISprite__set_atlas((UISprite_o *)AssetStorage, (UIAtlas_o *)Component_object, 0LL);
          AssetStorage = (AssetData_o *)this->fields.notUseCommandSpellSpr;
          if ( AssetStorage )
          {
            UISprite__set_spriteName((UISprite_o *)AssetStorage, (System_String_o *)StringLiteral_18385/*"cs_txt_disable"*/, 0LL);
            AssetStorage = (AssetData_o *)this->fields.notUseCommandSpellSpr;
            if ( AssetStorage )
            {
              ((void (__fastcall *)(AssetData_o *, void *))AssetStorage->klass[2]._1.typeMetadataHandle)(
                AssetStorage,
                AssetStorage->klass[2]._1.interopData);
              AssetStorage = (AssetData_o *)this->fields.notUseCommandSpellSpr;
              if ( AssetStorage )
              {
                AssetStorage = (AssetData_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)AssetStorage,
                                                0LL);
                if ( data )
                {
                  v11 = (UnityEngine_GameObject_o *)AssetStorage;
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
                      v9 = (_DWORD)AssetStorage != 0;
                    }
                    else
                    {
                      v9 = 0LL;
                    }
                    if ( v11 )
                    {
                      UnityEngine_GameObject__SetActive(v11, v9, 0LL);
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
    sub_1B8880C(AssetStorage, v9);
  }
}


void __fastcall CommandSpellIconComponent__ReleaseAll(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *myTexture; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x21
  ServantStatusBattleListViewItem_o *p_assetData; // x19
  struct AssetData_o *assetData; // t1
  __int64 v9; // x0
  __int64 v10; // x0
  UnityEngine_Object_o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  AssetData_o *klass; // x20

  if ( (byte_4A5A5D7 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__getInstance__);
    sub_1B885B0(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4A5A5D7 = 1;
  }
  myTexture = (UnityEngine_Object_o *)this->fields.myTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(myTexture, 0LL, 0LL);
  if ( !v4 )
    goto LABEL_14;
  if ( !myTexture )
LABEL_27:
    sub_1B8880C(v4, v5);
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))myTexture->klass[1].vtable._1_Finalize.method)(
                                 myTexture,
                                 myTexture->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
  if ( !v4 )
  {
    if ( v6 )
    {
      UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v6, 0LL, 0LL);
      UnityEngine_Material__SetTexture((UnityEngine_Material_o *)v6, (System_String_o *)StringLiteral_16267/*"_MaskTex"*/, 0LL, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v6, 0LL);
      ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, Il2CppMethodPointer))myTexture->klass[1].vtable._2_GetHashCode.method)(
        myTexture,
        0LL,
        myTexture->klass[1].vtable._3_ToString.methodPtr);
LABEL_14:
      assetData = this->fields.assetData;
      p_assetData = (ServantStatusBattleListViewItem_o *)&this->fields.assetData;
      if ( assetData )
      {
        v9 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
          v9 = sub_1BDA48C(v9);
        v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
        if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
          v10 = sub_1BDA48C(v10);
        v11 = **(UnityEngine_Object_o ***)(v10 + 184);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Implicit(v11, 0LL) )
        {
          klass = (AssetData_o *)p_assetData->klass;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_37790656(klass, 0LL);
        }
        p_assetData->klass = 0LL;
        sub_1B88554(p_assetData, 0, v12, v13);
      }
      return;
    }
    goto LABEL_27;
  }
}


void __fastcall CommandSpellIconComponent__SetChangeCmdSpellData(
        CommandSpellIconComponent_o *this,
        int32_t cmdSpellImgId,
        const MethodInfo *method)
{
  int32_t Value; // w21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( (byte_4A5A5DB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8579/*"MAX_COMMAND_SPELL"*/);
    byte_4A5A5DB = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8579/*"MAX_COMMAND_SPELL"*/, 0LL);
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
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, entity);
  }
  v7 = (int)this;
  v8 = BattleData__CheckCurrentTemporaryCommandSpell(battleData, entity, 0LL);
  CommandSpellIconComponent__SetImageType(v5, v7, v9);
  CommandSpellIconComponent__SetRemain(v5, v8, v10);
  CommandSpellIconComponent__NotUseCommandSpellDisplay(v5, battleData, v11);
}


void __fastcall CommandSpellIconComponent__SetDispDisableSp(
        CommandSpellIconComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *disableSp; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4A5A5DC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A5DC = 1;
  }
  disableSp = (UnityEngine_Object_o *)this->fields.disableSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(disableSp, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.disableSp;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1B8880C(gameObject, v6);
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
  if ( (byte_4A5A5DA & 1) == 0 )
  {
    this = (CommandSpellIconComponent_o *)sub_1B885B0(&StringLiteral_8579/*"MAX_COMMAND_SPELL"*/);
    byte_4A5A5DA = 1;
  }
  if ( !entity )
    sub_1B8880C(this, entity);
  SpellImageId = UserGameEntity__get_SpellImageId(entity, 0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8579/*"MAX_COMMAND_SPELL"*/, 0LL);
  CommandSpellIconComponent__SetImageType(v4, SpellImageId, v7);
  CommandSpellIconComponent__SetRemain(v4, Value, v8);
}


void __fastcall CommandSpellIconComponent__SetImageType(
        CommandSpellIconComponent_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2
  System_String_o *SpellImageAssetStorageName; // x21
  const MethodInfo *v12; // x1
  AssetLoader_LoadEndDataHandler_o *v13; // x19

  if ( (byte_4A5A5DF & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_CommandSpellIconComponent___c__DisplayClass23_0__SetImageType_b__0__);
    sub_1B885B0(&CommandSpellIconComponent___c__DisplayClass23_0_TypeInfo);
    byte_4A5A5DF = 1;
  }
  v5 = sub_1B887FC(CommandSpellIconComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = tp;
  if ( this->fields.ImageTypeOld != tp )
  {
    this->fields.ImageType = tp;
    this->fields.ImageTypeOld = tp;
    SpellImageAssetStorageName = CommandSpellIconComponent__GetSpellImageAssetStorageName(this, tp, v10);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__isExistAssetStorage(SpellImageAssetStorageName, 0LL) )
    {
      CommandSpellIconComponent__ReleaseAll(this, v12);
      v13 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v13,
        (Il2CppObject *)v5,
        Method_CommandSpellIconComponent___c__DisplayClass23_0__SetImageType_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(SpellImageAssetStorageName, v13, 1, 0LL);
    }
  }
}


void __fastcall CommandSpellIconComponent__SetRemain(
        CommandSpellIconComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_Object_o *myTexture; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Rect_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5A5E0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A5E0 = 1;
  }
  this->fields.Remain = count;
  myTexture = (UnityEngine_Object_o *)this->fields.myTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(myTexture, 0LL, 0LL);
  if ( v6 )
  {
    if ( !myTexture )
      sub_1B8880C(v6, v7);
    v8.fields.m_Width = 0.5;
    v8.fields.m_YMin = (float)(((unsigned int)count >> 1) & 1) * 0.5;
    v8.fields.m_XMin = (float)((count & 1) == 0) * 0.5;
    v8.fields.m_Height = 0.5;
    UITexture__set_uvRect((UITexture_o *)myTexture, v8, 0LL);
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
  TerminalPramsManager_c *v9; // x0
  int32_t CommandSpell; // w23
  UnityEngine_Object_o *disableSp; // x24
  bool v12; // w22
  const MethodInfo *v13; // x2
  UISprite_o *v14; // x24
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x2
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  v6 = overwriteImageId;
  if ( (byte_4A5A5D9 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_18385/*"cs_txt_disable"*/);
    byte_4A5A5D9 = 1;
  }
  *(_QWORD *)result = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57FF0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57FF0 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->_DispState_k__BackingField == 2 )
  {
    CommandSpell = overwriteSpellCount;
    if ( (overwriteSpellCount & 0x80000000) != 0 )
    {
      if ( !entity )
        sub_1B8880C(v9, entity);
      result[0] = UserGameEntity__get_SpellImageId(entity, 0LL);
      v6 = System_Int32__ToString((int32_t)result, 0LL);
      CommandSpell = UserGameEntity__getCommandSpell(entity, 0LL);
    }
    disableSp = (UnityEngine_Object_o *)this->fields.disableSp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = overwriteSpellCount >= 0;
    if ( UnityEngine_Object__op_Inequality(disableSp, 0LL, 0LL) )
    {
      v14 = this->fields.disableSp;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v14, (System_String_o *)StringLiteral_18385/*"cs_txt_disable"*/, 0LL);
    }
    CommandSpellIconComponent__SetDispDisableSp(this, overwriteSpellCount >= 0, v13);
    result[1] = 0;
    System_Int32__TryParse(v6, &result[1], 0LL);
    CommandSpellIconComponent__SetImageType(this, result[1], v15);
    CommandSpellIconComponent__SetRemain(this, CommandSpell, v16);
  }
  else
  {
    CommandSpellIconComponent__SetDispDisableSp(this, 0, (const MethodInfo *)overwriteImageId);
    CommandSpellIconComponent__SetData(this, entity, v17);
    return 0;
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellIconComponent__SetSize(
        CommandSpellIconComponent_o *this,
        UnityEngine_Vector2_o sz,
        const MethodInfo *method)
{
  UIWidget_o *myTexture; // x19
  int32_t x; // w1
  float v5; // s1
  float v6; // s8
  int32_t v7; // w1

  myTexture = (UIWidget_o *)this->fields.myTexture;
  if ( !myTexture )
    sub_1B8880C(this, method);
  if ( sz.fields.x == INFINITY )
    x = 0x80000000;
  else
    x = (int)sz.fields.x;
  v6 = v5;
  UIWidget__set_width((UIWidget_o *)this->fields.myTexture, x, 0LL);
  if ( v6 == INFINITY )
    v7 = 0x80000000;
  else
    v7 = (int)v6;
  UIWidget__set_height(myTexture, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellIconComponent__SetTexture(
        CommandSpellIconComponent_o *this,
        AssetData_o *data,
        int32_t tp,
        const MethodInfo *method)
{
  CommandSpellIconComponent_o *v6; // x19
  System_String_o *SpellImageFileName; // x0
  UnityEngine_Object_o *myTexture; // x19
  System_String_o *v9; // x22
  Il2CppObject *Object_object__48635516; // x20
  System_String_o *v11; // x0
  Il2CppObject *v12; // x0
  __int64 v13; // x1
  UnityEngine_Texture_o *v14; // x21
  UnityEngine_Object_o *v15; // x22
  UnityEngine_Shader_o *v16; // x23

  v6 = this;
  if ( (byte_4A5A5E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_Texture2D____76085376);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16526/*"_alpha"*/);
    sub_1B885B0(&StringLiteral_4975/*"Custom/SpriteWithMask"*/);
    this = (CommandSpellIconComponent_o *)sub_1B885B0(&StringLiteral_16267/*"_MaskTex"*/);
    byte_4A5A5E1 = 1;
  }
  if ( data )
  {
    SpellImageFileName = CommandSpellIconComponent__GetSpellImageFileName(this, tp, *(const MethodInfo **)&tp);
    myTexture = (UnityEngine_Object_o *)v6->fields.myTexture;
    v9 = SpellImageFileName;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(myTexture, 0LL, 0LL) )
    {
      Object_object__48635516 = AssetData__GetObject_object__48635516(
                                  data,
                                  v9,
                                  (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
      v11 = System_String__Concat_61707032(v9, (System_String_o *)StringLiteral_16526/*"_alpha"*/, 0LL);
      v12 = AssetData__GetObject_object__48635516(
              data,
              v11,
              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_Texture2D____76085376);
      if ( !myTexture )
        goto LABEL_15;
      v14 = (UnityEngine_Texture_o *)v12;
      v15 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))myTexture->klass[1].vtable._1_Finalize.method)(
                                      myTexture,
                                      myTexture->klass[1].vtable._2_GetHashCode.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = (Il2CppObject *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)v12 & 1) != 0 )
      {
        v16 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4975/*"Custom/SpriteWithMask"*/, 0LL);
        v15 = (UnityEngine_Object_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
        UnityEngine_Material___ctor((UnityEngine_Material_o *)v15, v16, 0LL);
        v12 = (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Object_o *, UnityEngine_Object_o *, Il2CppMethodPointer))myTexture->klass[1].vtable._2_GetHashCode.method)(
                                myTexture,
                                v15,
                                myTexture->klass[1].vtable._3_ToString.methodPtr);
      }
      if ( !v15 )
LABEL_15:
        sub_1B8880C(v12, v13);
      UnityEngine_Material__set_mainTexture(
        (UnityEngine_Material_o *)v15,
        (UnityEngine_Texture_o *)Object_object__48635516,
        0LL);
      UnityEngine_Material__SetTexture((UnityEngine_Material_o *)v15, (System_String_o *)StringLiteral_16267/*"_MaskTex"*/, v14, 0LL);
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
  int32_t v3; // w3
  struct CommandSpellIconComponent_o *_4__this; // x0
  const MethodInfo *v7; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.assetData = data,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.assetData,
          (int32_t)data,
          (int32_t)method,
          v3),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B8880C(_4__this, data);
  }
  CommandSpellIconComponent__SetTexture(_4__this, data, this->fields.tp, v7);
}