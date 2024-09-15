void __fastcall CommandSpellIconComponent___ctor(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  this->fields.Size.fields.y = 40.0;
  *(_OWORD *)&this->fields.ImageType = xmmword_BACFF0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommandSpellIconComponent__Awake(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *ComponentInChildren_object__48599312; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_Object_o *notUseCommandSpellSpr; // x20
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4A2D3BA & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_Component_GetComponentInChildren_UITexture___, method);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v3);
    byte_4A2D3BA = 1;
  }
  ComponentInChildren_object__48599312 = UnityEngine_Component__GetComponentInChildren_object__48599312(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_2E59110 *)Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
  this->fields.myTexture = (struct UITexture_o *)ComponentInChildren_object__48599312;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.myTexture,
    (int32_t)ComponentInChildren_object__48599312,
    v5,
    v6);
  notUseCommandSpellSpr = (UnityEngine_Object_o *)this->fields.notUseCommandSpellSpr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(notUseCommandSpellSpr, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.notUseCommandSpellSpr;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1B7641C(gameObject, v8);
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

  if ( (byte_4A2D3BF & 1) == 0 )
  {
    this = (CommandSpellIconComponent_o *)sub_1B761C0(&StringLiteral_4621/*"CommandSpell/"*/, *(_QWORD *)&tp);
    byte_4A2D3BF = 1;
  }
  SpellImageFileName = CommandSpellIconComponent__GetSpellImageFileName(this, tp, method);
  return System_String__Concat_61535060((System_String_o *)StringLiteral_4621/*"CommandSpell/"*/, SpellImageFileName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandSpellIconComponent__GetSpellImageFileName(
        CommandSpellIconComponent_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A2D3C0 & 1) == 0 )
  {
    sub_1B761C0(&int_TypeInfo, *(_QWORD *)&tp);
    sub_1B761C0(&StringLiteral_24927/*"{0:0000}"*/, v6);
    sub_1B761C0(&StringLiteral_18378/*"cs_"*/, v7);
    byte_4A2D3C0 = 1;
  }
  v11 = tp;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, method, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_24927/*"{0:0000}"*/, v8, 0LL);
  return System_String__Concat_61535060((System_String_o *)StringLiteral_18378/*"cs_"*/, v9, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *notUseCommandSpellSpr; // x21
  BattleDataDefine_c *v12; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  _BOOL8 v15; // x1
  Il2CppObject *Component_object; // x21
  UnityEngine_GameObject_o *v17; // x20

  if ( (byte_4A2D3C4 & 1) == 0 )
  {
    sub_1B761C0(&Method_AssetData_GetObject_GameObject____75903216, data);
    sub_1B761C0(&AssetManager_TypeInfo, v5);
    sub_1B761C0(&BattleDataDefine_TypeInfo, v6);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v8);
    sub_1B761C0(&StringLiteral_18379/*"cs_txt_disable"*/, v9);
    sub_1B761C0(&StringLiteral_3227/*"BattleAssetUIAtlas"*/, v10);
    byte_4A2D3C4 = 1;
  }
  notUseCommandSpellSpr = (UnityEngine_Object_o *)this->fields.notUseCommandSpellSpr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(notUseCommandSpellSpr, 0LL, 0LL) )
  {
    v12 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v12 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v12->static_fields->ASSET_BATTLE_COMMON;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
    if ( AssetStorage )
    {
      AssetStorage = (AssetData_o *)AssetData__GetObject_object__48515452(
                                      AssetStorage,
                                      (System_String_o *)StringLiteral_3227/*"BattleAssetUIAtlas"*/,
                                      (const MethodInfo_2E4497C *)Method_AssetData_GetObject_GameObject____75903216);
      if ( AssetStorage )
      {
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)AssetStorage,
                             (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
            UISprite__set_spriteName((UISprite_o *)AssetStorage, (System_String_o *)StringLiteral_18379/*"cs_txt_disable"*/, 0LL);
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
                  v17 = (UnityEngine_GameObject_o *)AssetStorage;
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
                      v15 = (_DWORD)AssetStorage != 0;
                    }
                    else
                    {
                      v15 = 0LL;
                    }
                    if ( v17 )
                    {
                      UnityEngine_GameObject__SetActive(v17, v15, 0LL);
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
    sub_1B7641C(AssetStorage, v15);
  }
}


void __fastcall CommandSpellIconComponent__ReleaseAll(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *myTexture; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *v9; // x21
  ServantStatusBattleListViewItem_o *p_assetData; // x19
  struct AssetData_o *assetData; // t1
  __int64 v12; // x0
  __int64 v13; // x0
  UnityEngine_Object_o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  AssetData_o *klass; // x20

  if ( (byte_4A2D3B9 & 1) == 0 )
  {
    sub_1B761C0(&AssetManager_TypeInfo, method);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AssetManager__getInstance__, v4);
    sub_1B761C0(&StringLiteral_16261/*"_MaskTex"*/, v5);
    byte_4A2D3B9 = 1;
  }
  myTexture = (UnityEngine_Object_o *)this->fields.myTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(myTexture, 0LL, 0LL);
  if ( !v7 )
    goto LABEL_14;
  if ( !myTexture )
LABEL_27:
    sub_1B7641C(v7, v8);
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))myTexture->klass[1].vtable._1_Finalize.method)(
                                 myTexture,
                                 myTexture->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( !v7 )
  {
    if ( v9 )
    {
      UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v9, 0LL, 0LL);
      UnityEngine_Material__SetTexture((UnityEngine_Material_o *)v9, (System_String_o *)StringLiteral_16261/*"_MaskTex"*/, 0LL, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69287408(v9, 0LL);
      ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, Il2CppMethodPointer))myTexture->klass[1].vtable._2_GetHashCode.method)(
        myTexture,
        0LL,
        myTexture->klass[1].vtable._3_ToString.methodPtr);
LABEL_14:
      assetData = this->fields.assetData;
      p_assetData = (ServantStatusBattleListViewItem_o *)&this->fields.assetData;
      if ( assetData )
      {
        v12 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 4);
        if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
          v12 = sub_1BC809C(v12);
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
        if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
          v13 = sub_1BC809C(v13);
        v14 = **(UnityEngine_Object_o ***)(v13 + 184);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Implicit(v14, 0LL) )
        {
          klass = (AssetData_o *)p_assetData->klass;
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          AssetManager__releaseAsset_37612260(klass, 0LL);
        }
        p_assetData->klass = 0LL;
        sub_1B76164(p_assetData, 0, v15, v16);
      }
      return;
    }
    goto LABEL_27;
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

  if ( (byte_4A2D3BD & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_8578/*"MAX_COMMAND_SPELL"*/, *(_QWORD *)&cmdSpellImgId);
    byte_4A2D3BD = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8578/*"MAX_COMMAND_SPELL"*/, 0LL);
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
    sub_1B7641C(this, 0LL);
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
    sub_1B7641C(this, entity);
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
  UnityEngine_Object_o *disableSp; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4A2D3BE & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4A2D3BE = 1;
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
      sub_1B7641C(gameObject, v6);
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
  if ( (byte_4A2D3BC & 1) == 0 )
  {
    this = (CommandSpellIconComponent_o *)sub_1B761C0(&StringLiteral_8578/*"MAX_COMMAND_SPELL"*/, entity);
    byte_4A2D3BC = 1;
  }
  if ( !entity )
    sub_1B7641C(this, entity);
  SpellImageId = UserGameEntity__get_SpellImageId(entity, 0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8578/*"MAX_COMMAND_SPELL"*/, 0LL);
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
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2
  System_String_o *SpellImageAssetStorageName; // x21
  const MethodInfo *v15; // x1
  AssetLoader_LoadEndDataHandler_o *v16; // x19

  if ( (byte_4A2D3C1 & 1) == 0 )
  {
    sub_1B761C0(&AssetManager_TypeInfo, *(_QWORD *)&tp);
    sub_1B761C0(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B761C0(&Method_CommandSpellIconComponent___c__DisplayClass23_0__SetImageType_b__0__, v6);
    sub_1B761C0(&CommandSpellIconComponent___c__DisplayClass23_0_TypeInfo, v7);
    byte_4A2D3C1 = 1;
  }
  v8 = sub_1B7640C(CommandSpellIconComponent___c__DisplayClass23_0_TypeInfo);
  CommandSpellIconComponent___c__DisplayClass23_0___ctor((CommandSpellIconComponent___c__DisplayClass23_0_o *)v8, 0LL);
  if ( !v8 )
    sub_1B7641C(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_DWORD *)(v8 + 24) = tp;
  if ( this->fields.ImageTypeOld != tp )
  {
    this->fields.ImageType = tp;
    this->fields.ImageTypeOld = tp;
    SpellImageAssetStorageName = CommandSpellIconComponent__GetSpellImageAssetStorageName(this, tp, v13);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    if ( AssetManager__isExistAssetStorage(SpellImageAssetStorageName, 0LL) )
    {
      CommandSpellIconComponent__ReleaseAll(this, v15);
      v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B7640C(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v16,
        (Il2CppObject *)v8,
        Method_CommandSpellIconComponent___c__DisplayClass23_0__SetImageType_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(SpellImageAssetStorageName, v16, 1, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellIconComponent__SetRemain(
        CommandSpellIconComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  UnityEngine_Object_o *myTexture; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Rect_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A2D3C2 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
    byte_4A2D3C2 = 1;
  }
  this->fields.Remain = count;
  myTexture = (UnityEngine_Object_o *)this->fields.myTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(myTexture, 0LL, 0LL);
  if ( v6 )
  {
    if ( !myTexture )
      sub_1B7641C(v6, v7);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0
  int32_t CommandSpell; // w23
  UnityEngine_Object_o *disableSp; // x24
  bool v15; // w22
  const MethodInfo *v16; // x2
  UISprite_o *v17; // x24
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  v6 = overwriteImageId;
  if ( (byte_4A2D3BB & 1) == 0 )
  {
    sub_1B761C0(&AtlasManager_TypeInfo, entity);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v9);
    sub_1B761C0(&TerminalPramsManager_TypeInfo, v10);
    sub_1B761C0(&StringLiteral_18379/*"cs_txt_disable"*/, v11);
    byte_4A2D3BB = 1;
  }
  *(_QWORD *)result = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A2ADE5 )
  {
    sub_1B761C0(&TerminalPramsManager_TypeInfo, entity);
    byte_4A2ADE5 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  if ( v12->static_fields->_DispState_k__BackingField == 2 )
  {
    CommandSpell = overwriteSpellCount;
    if ( (overwriteSpellCount & 0x80000000) != 0 )
    {
      if ( !entity )
        sub_1B7641C(v12, entity);
      result[0] = UserGameEntity__get_SpellImageId(entity, 0LL);
      v6 = System_Int32__ToString((int32_t)result, 0LL);
      CommandSpell = UserGameEntity__getCommandSpell(entity, 0LL);
    }
    disableSp = (UnityEngine_Object_o *)this->fields.disableSp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = overwriteSpellCount >= 0;
    if ( UnityEngine_Object__op_Inequality(disableSp, 0LL, 0LL) )
    {
      v17 = this->fields.disableSp;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v17, (System_String_o *)StringLiteral_18379/*"cs_txt_disable"*/, 0LL);
    }
    CommandSpellIconComponent__SetDispDisableSp(this, overwriteSpellCount >= 0, v16);
    result[1] = 0;
    System_Int32__TryParse(v6, &result[1], 0LL);
    CommandSpellIconComponent__SetImageType(this, result[1], v18);
    CommandSpellIconComponent__SetRemain(this, CommandSpell, v19);
  }
  else
  {
    CommandSpellIconComponent__SetDispDisableSp(this, 0, (const MethodInfo *)overwriteImageId);
    CommandSpellIconComponent__SetData(this, entity, v20);
    return 0;
  }
  return v15;
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
    sub_1B7641C(this, method);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_String_o *SpellImageFileName; // x0
  UnityEngine_Object_o *myTexture; // x19
  System_String_o *v14; // x22
  Il2CppObject *Object_object__48515452; // x20
  System_String_o *v16; // x0
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  UnityEngine_Texture_o *v19; // x21
  UnityEngine_Object_o *v20; // x22
  UnityEngine_Shader_o *v21; // x23

  v6 = this;
  if ( (byte_4A2D3C3 & 1) == 0 )
  {
    sub_1B761C0(&Method_AssetData_GetObject_Texture2D____75903240, data);
    sub_1B761C0(&UnityEngine_Material_TypeInfo, v7);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v8);
    sub_1B761C0(&StringLiteral_16520/*"_alpha"*/, v9);
    sub_1B761C0(&StringLiteral_4974/*"Custom/SpriteWithMask"*/, v10);
    this = (CommandSpellIconComponent_o *)sub_1B761C0(&StringLiteral_16261/*"_MaskTex"*/, v11);
    byte_4A2D3C3 = 1;
  }
  if ( data )
  {
    SpellImageFileName = CommandSpellIconComponent__GetSpellImageFileName(this, tp, *(const MethodInfo **)&tp);
    myTexture = (UnityEngine_Object_o *)v6->fields.myTexture;
    v14 = SpellImageFileName;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(myTexture, 0LL, 0LL) )
    {
      Object_object__48515452 = AssetData__GetObject_object__48515452(
                                  data,
                                  v14,
                                  (const MethodInfo_2E4497C *)Method_AssetData_GetObject_Texture2D____75903240);
      v16 = System_String__Concat_61535060(v14, (System_String_o *)StringLiteral_16520/*"_alpha"*/, 0LL);
      v17 = AssetData__GetObject_object__48515452(
              data,
              v16,
              (const MethodInfo_2E4497C *)Method_AssetData_GetObject_Texture2D____75903240);
      if ( !myTexture )
        goto LABEL_15;
      v19 = (UnityEngine_Texture_o *)v17;
      v20 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))myTexture->klass[1].vtable._1_Finalize.method)(
                                      myTexture,
                                      myTexture->klass[1].vtable._2_GetHashCode.methodPtr);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v17 = (Il2CppObject *)UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
      if ( ((unsigned __int8)v17 & 1) != 0 )
      {
        v21 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4974/*"Custom/SpriteWithMask"*/, 0LL);
        v20 = (UnityEngine_Object_o *)sub_1B7640C(UnityEngine_Material_TypeInfo);
        UnityEngine_Material___ctor((UnityEngine_Material_o *)v20, v21, 0LL);
        v17 = (Il2CppObject *)((__int64 (__fastcall *)(UnityEngine_Object_o *, UnityEngine_Object_o *, Il2CppMethodPointer))myTexture->klass[1].vtable._2_GetHashCode.method)(
                                myTexture,
                                v20,
                                myTexture->klass[1].vtable._3_ToString.methodPtr);
      }
      if ( !v20 )
LABEL_15:
        sub_1B7641C(v17, v18);
      UnityEngine_Material__set_mainTexture(
        (UnityEngine_Material_o *)v20,
        (UnityEngine_Texture_o *)Object_object__48515452,
        0LL);
      UnityEngine_Material__SetTexture((UnityEngine_Material_o *)v20, (System_String_o *)StringLiteral_16261/*"_MaskTex"*/, v19, 0LL);
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

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.assetData = data,
        sub_1B76164(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.assetData,
          (int32_t)data,
          (int32_t)method,
          v3),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B7641C(_4__this, data);
  }
  CommandSpellIconComponent__SetTexture(_4__this, data, this->fields.tp, 0LL);
}