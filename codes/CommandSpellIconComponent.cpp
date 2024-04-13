void __fastcall CommandSpellIconComponent___ctor(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.Size.fields.x) = 3;
  *(_QWORD *)&this->fields.ImageTypeOld = 0xFFFFFFFF00000001LL;
  *(int32x2_t *)&this->fields.Size.fields.y = vdup_n_s32(0x42200000u);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommandSpellIconComponent__Awake(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *klass; // x20
  __int64 v16; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42E8C23 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentInChildren_UITexture___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E8C23 = 1;
  }
  ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                   (UnityEngine_Component_o *)this,
                                   (const MethodInfo_1ADE34C *)Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
  this->fields.disableSp = (struct UISprite_o *)ComponentInChildren_UIWidget;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.disableSp,
    (System_Int32_array **)ComponentInChildren_UIWidget,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
      sub_B5D69C(gameObject, v16);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
}


System_String_o *__fastcall CommandSpellIconComponent__GetSpellImageAssetStorageName(
        CommandSpellIconComponent_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *SpellImageFileName; // x0

  if ( (byte_42E8C28 & 1) == 0 )
  {
    this = (CommandSpellIconComponent_o *)sub_B5D5C4(&StringLiteral_4241/*"CommandSpell/"*/, tp, (_DWORD)method, v3);
    byte_42E8C28 = 1;
  }
  SpellImageFileName = CommandSpellIconComponent__GetSpellImageFileName(this, tp, method);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_4241/*"CommandSpell/"*/, SpellImageFileName, 0LL);
}


System_String_o *__fastcall CommandSpellIconComponent__GetSpellImageFileName(
        CommandSpellIconComponent_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E8C29 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, tp, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_23806/*"{0:0000}"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18036/*"cs_"*/, v8, v9, v10);
    byte_42E8C29 = 1;
  }
  v14 = tp;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12 = System_String__Format((System_String_o *)StringLiteral_23806/*"{0:0000}"*/, v11, 0LL);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_18036/*"cs_"*/, v12, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
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
  UnityEngine_Object_o *klass; // x21
  BattleDataDefine_c *v25; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  _BOOL8 v28; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_GameObject_o *v30; // x20

  if ( (byte_42E8C2D & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_18037/*"cs_txt_disable"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_2825/*"BattleAssetUIAtlas"*/, v21, v22, v23);
    byte_42E8C2D = 1;
  }
  klass = (UnityEngine_Object_o *)this[1].klass;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(klass, 0LL, 0LL) )
  {
    v25 = BattleDataDefine_TypeInfo;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v25 = BattleDataDefine_TypeInfo;
    }
    ASSET_BATTLE_COMMON = v25->static_fields->ASSET_BATTLE_COMMON;
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
                                      (System_String_o *)StringLiteral_2825/*"BattleAssetUIAtlas"*/,
                                      (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      if ( AssetStorage )
      {
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)AssetStorage,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
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
            UISprite__set_spriteName((UISprite_o *)AssetStorage, (System_String_o *)StringLiteral_18037/*"cs_txt_disable"*/, 0LL);
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
                  v30 = (UnityEngine_GameObject_o *)AssetStorage;
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
                      v28 = (_DWORD)AssetStorage != 0;
                      if ( !v30 )
                        goto LABEL_31;
                    }
                    else
                    {
                      v28 = 0LL;
                      if ( !v30 )
                        goto LABEL_31;
                    }
                    UnityEngine_GameObject__SetActive(v30, v28, 0LL);
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
    sub_B5D69C(AssetStorage, v28);
  }
}


void __fastcall CommandSpellIconComponent__ReleaseAll(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Object_o *disableSp; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *v17; // x21
  BattleServantConfConponent_o *p_callbackFunc; // x19
  struct System_Action_o *callbackFunc; // t1
  __int64 v20; // x20
  __int64 v21; // x20
  UnityEngine_Object_o *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  AssetData_o *klass; // x20

  if ( (byte_42E8C22 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__getInstance__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16207/*"_MaskTex"*/, v11, v12, v13);
    byte_42E8C22 = 1;
  }
  disableSp = (UnityEngine_Object_o *)this->fields.disableSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = UnityEngine_Object__op_Inequality(disableSp, 0LL, 0LL);
  if ( !v15 )
    goto LABEL_17;
  if ( !disableSp )
LABEL_32:
    sub_B5D69C(v15, v16);
  v17 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))disableSp->klass[1].vtable._1_Finalize.method)(
                                  disableSp,
                                  disableSp->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
  if ( !v15 )
  {
    if ( v17 )
    {
      UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v17, 0LL, 0LL);
      UnityEngine_Material__SetTexture((UnityEngine_Material_o *)v17, (System_String_o *)StringLiteral_16207/*"_MaskTex"*/, 0LL, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v17, 0LL);
      ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, Il2CppMethodPointer))disableSp->klass[1].vtable._2_GetHashCode.method)(
        disableSp,
        0LL,
        disableSp->klass[1].vtable._3_ToString.methodPtr);
LABEL_17:
      callbackFunc = this->fields.callbackFunc;
      p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
      if ( callbackFunc )
      {
        v20 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
          sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 3));
        v21 = **(_QWORD **)(v20 + 192);
        if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
          sub_AF52C4(v21);
        v22 = **(UnityEngine_Object_o ***)(v21 + 184);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Implicit(v22, 0LL) )
        {
          klass = (AssetData_o *)p_callbackFunc->klass;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          AssetManager__releaseAsset_30657564(klass, 0LL);
        }
        p_callbackFunc->klass = 0LL;
        sub_B5D560(p_callbackFunc, 0LL, v23, v24, v25, v26, v27, v28);
      }
      return;
    }
    goto LABEL_32;
  }
}


void __fastcall CommandSpellIconComponent__SetChangeCmdSpellData(
        CommandSpellIconComponent_o *this,
        int32_t cmdSpellImgId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t Value; // w21
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_42E8C26 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8776/*"MAX_COMMAND_SPELL"*/, cmdSpellImgId, (_DWORD)method, v3);
    byte_42E8C26 = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8776/*"MAX_COMMAND_SPELL"*/, 0LL);
  CommandSpellIconComponent__SetImageType(this, cmdSpellImgId, v7);
  CommandSpellIconComponent__SetRemain(this, Value, v8);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, entity);
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
  __int64 v3; // x3
  UnityEngine_Object_o *assetData; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42E8C27 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isDisp, (_DWORD)method, v3);
    byte_42E8C27 = 1;
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
      sub_B5D69C(gameObject, v7);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isDisp, 0LL);
  }
}


void __fastcall CommandSpellIconComponent__SetFullData(
        CommandSpellIconComponent_o *this,
        UserGameEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommandSpellIconComponent_o *v5; // x19
  int32_t SpellImageId; // w20
  int32_t Value; // w21
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  v5 = this;
  if ( (byte_42E8C25 & 1) == 0 )
  {
    this = (CommandSpellIconComponent_o *)sub_B5D5C4(&StringLiteral_8776/*"MAX_COMMAND_SPELL"*/, (_DWORD)entity, (_DWORD)method, v3);
    byte_42E8C25 = 1;
  }
  if ( !entity )
    sub_B5D69C(this, entity);
  SpellImageId = UserGameEntity__get_SpellImageId(entity, 0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8776/*"MAX_COMMAND_SPELL"*/, 0LL);
  CommandSpellIconComponent__SetImageType(v5, SpellImageId, v8);
  CommandSpellIconComponent__SetRemain(v5, Value, v9);
}


void __fastcall CommandSpellIconComponent__SetImageType(
        CommandSpellIconComponent_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2
  System_String_o *SpellImageAssetStorageName; // x21
  const MethodInfo *v26; // x1
  AssetLoader_LoadEndDataHandler_o *v27; // x19

  if ( (byte_42E8C2A & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, tp, (_DWORD)method, v3);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_CommandSpellIconComponent___c__DisplayClass23_0__SetImageType_b__0__, v9, v10, v11);
    sub_B5D5C4(&CommandSpellIconComponent___c__DisplayClass23_0_TypeInfo, v12, v13, v14);
    byte_42E8C2A = 1;
  }
  v15 = sub_B5D694(CommandSpellIconComponent___c__DisplayClass23_0_TypeInfo);
  CommandSpellIconComponent___c__DisplayClass23_0___ctor((CommandSpellIconComponent___c__DisplayClass23_0_o *)v15, 0LL);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v15 + 24) = tp;
  if ( this->fields.Remain != tp )
  {
    this->fields.ImageTypeOld = tp;
    this->fields.Remain = *(_DWORD *)(v15 + 24);
    SpellImageAssetStorageName = CommandSpellIconComponent__GetSpellImageAssetStorageName(
                                   this,
                                   *(_DWORD *)(v15 + 24),
                                   v24);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( AssetManager__isExistAssetStorage(SpellImageAssetStorageName, 0LL) )
    {
      CommandSpellIconComponent__ReleaseAll(this, v26);
      v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v27,
        (Il2CppObject *)v15,
        Method_CommandSpellIconComponent___c__DisplayClass23_0__SetImageType_b__0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage(SpellImageAssetStorageName, v27, 1, 0LL);
    }
  }
}


void __fastcall CommandSpellIconComponent__SetRemain(
        CommandSpellIconComponent_o *this,
        int32_t count,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UITexture_o *disableSp; // x19
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s7
  __int64 v11; // x0
  __int64 v12; // x1
  UnityEngine_Rect_o v13; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Rect_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E8C2B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, count, (_DWORD)method, v3);
    byte_42E8C2B = 1;
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
    v14.fields.m_Width = 0.5;
    v14.fields.m_YMin = (float)(((unsigned int)count >> 1) & 1) * 0.5;
    v14.fields.m_XMin = (float)((count & 1) == 0) * 0.5;
    v14.fields.m_Height = 0.5;
    *(_QWORD *)&v13.fields.m_XMin = 0LL;
    *(_QWORD *)&v13.fields.m_Width = 0LL;
    UnityEngine_Rect___ctor(v14, v7, v8, v9, v10, (const MethodInfo *)&v13);
    if ( !disableSp )
      sub_B5D69C(v11, v12);
    UITexture__set_uvRect(disableSp, v13, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommandSpellIconComponent__SetRevocationData(
        CommandSpellIconComponent_o *this,
        UserGameEntity_o *entity,
        System_String_o *overwriteImageId,
        int32_t overwriteSpellCount,
        const MethodInfo *method)
{
  int32_t CommandSpell; // w20
  System_String_o *v6; // x21
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  TerminalPramsManager_c *v18; // x0
  bool v19; // w22
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *assetData; // x23
  const MethodInfo *v22; // x2
  struct AssetData_o *v23; // x23
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  CommandSpell = overwriteSpellCount;
  v6 = overwriteImageId;
  if ( (byte_42E8C24 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)entity, (_DWORD)overwriteImageId, *(_QWORD *)&overwriteSpellCount);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_18037/*"cs_txt_disable"*/, v15, v16, v17);
    byte_42E8C24 = 1;
  }
  *(_QWORD *)result = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B1F )
  {
    sub_B5D5C4(
      &TerminalPramsManager_TypeInfo,
      (_DWORD)entity,
      (_DWORD)overwriteImageId,
      *(_QWORD *)&overwriteSpellCount);
    byte_42E4B1F = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  if ( v18->static_fields->_DispState_k__BackingField == 2 )
  {
    if ( (CommandSpell & 0x80000000) != 0 )
    {
      if ( !entity )
        sub_B5D69C(v18, entity);
      result[0] = UserGameEntity__get_SpellImageId(entity, 0LL);
      v6 = System_Int32__ToString((int32_t)result, 0LL);
      CommandSpell = UserGameEntity__getCommandSpell(entity, 0LL);
      v19 = 0;
    }
    else
    {
      v19 = 1;
    }
    assetData = (UnityEngine_Object_o *)this->fields.assetData;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(assetData, 0LL, 0LL) )
    {
      v23 = this->fields.assetData;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite((UISprite_o *)v23, (System_String_o *)StringLiteral_18037/*"cs_txt_disable"*/, 0LL);
    }
    CommandSpellIconComponent__SetDispDisableSp(this, v19, v22);
    result[1] = 0;
    System_Int32__TryParse(v6, &result[1], 0LL);
    CommandSpellIconComponent__SetImageType(this, result[1], v24);
    CommandSpellIconComponent__SetRemain(this, CommandSpell, v25);
  }
  else
  {
    CommandSpellIconComponent__SetDispDisableSp(this, 0, (const MethodInfo *)overwriteImageId);
    CommandSpellIconComponent__SetData(this, entity, v20);
    return 0;
  }
  return v19;
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
    sub_B5D69C(this, method);
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
  System_String_o *SpellImageFileName; // x0
  UnityEngine_Object_o *disableSp; // x19
  System_String_o *v24; // x22
  UnityEngine_Texture_o *Object_WarBoardWaitTimeSetting; // x20
  System_String_o *v26; // x0
  WarBoardWaitTimeSetting_o *v27; // x0
  __int64 v28; // x1
  UnityEngine_Texture_o *v29; // x21
  UnityEngine_Object_o *v30; // x22
  UnityEngine_Shader_o *v31; // x23

  v6 = this;
  if ( (byte_42E8C2C & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_Texture2D____68807528, (_DWORD)data, tp, method);
    sub_B5D5C4(&UnityEngine_Material_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_16326/*"_alpha"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_4609/*"Custom/SpriteWithMask"*/, v16, v17, v18);
    this = (CommandSpellIconComponent_o *)sub_B5D5C4(&StringLiteral_16207/*"_MaskTex"*/, v19, v20, v21);
    byte_42E8C2C = 1;
  }
  if ( data )
  {
    SpellImageFileName = CommandSpellIconComponent__GetSpellImageFileName(this, tp, *(const MethodInfo **)&tp);
    disableSp = (UnityEngine_Object_o *)v6->fields.disableSp;
    v24 = SpellImageFileName;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(disableSp, 0LL, 0LL) )
    {
      Object_WarBoardWaitTimeSetting = (UnityEngine_Texture_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                  data,
                                                                  v24,
                                                                  (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
      v26 = System_String__Concat_44577788(v24, (System_String_o *)StringLiteral_16326/*"_alpha"*/, 0LL);
      v27 = AssetData__GetObject_WarBoardWaitTimeSetting_(
              data,
              v26,
              (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_Texture2D____68807528);
      if ( !disableSp )
        goto LABEL_17;
      v29 = (UnityEngine_Texture_o *)v27;
      v30 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))disableSp->klass[1].vtable._1_Finalize.method)(
                                      disableSp,
                                      disableSp->klass[1].vtable._2_GetHashCode.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v27 = (WarBoardWaitTimeSetting_o *)UnityEngine_Object__op_Equality(v30, 0LL, 0LL);
      if ( ((unsigned __int8)v27 & 1) != 0 )
      {
        v31 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4609/*"Custom/SpriteWithMask"*/, 0LL);
        v30 = (UnityEngine_Object_o *)sub_B5D694(UnityEngine_Material_TypeInfo);
        UnityEngine_Material___ctor((UnityEngine_Material_o *)v30, v31, 0LL);
        v27 = (WarBoardWaitTimeSetting_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, UnityEngine_Object_o *, Il2CppMethodPointer))disableSp->klass[1].vtable._2_GetHashCode.method)(
                                             disableSp,
                                             v30,
                                             disableSp->klass[1].vtable._3_ToString.methodPtr);
      }
      if ( !v30 )
LABEL_17:
        sub_B5D69C(v27, v28);
      UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v30, Object_WarBoardWaitTimeSetting, 0LL);
      UnityEngine_Material__SetTexture((UnityEngine_Material_o *)v30, (System_String_o *)StringLiteral_16207/*"_MaskTex"*/, v29, 0LL);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct CommandSpellIconComponent_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.callbackFunc = (struct System_Action_o *)data,
        sub_B5D560(
          (BattleServantConfConponent_o *)&_4__this->fields.callbackFunc,
          (System_Int32_array **)data,
          (System_String_array **)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(_4__this, data);
  }
  CommandSpellIconComponent__SetTexture(_4__this, data, this->fields.tp, 0LL);
}