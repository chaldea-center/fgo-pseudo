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
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FA5EB & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentInChildren_UITexture___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40FA5EB = 1;
  }
  ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                   (UnityEngine_Component_o *)this,
                                   (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_UITexture___);
  this->fields.disableSp = (struct UISprite_o *)ComponentInChildren_UIWidget;
  sub_B16F98(
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
    v12 = (UnityEngine_Component_o *)this[1].klass;
    if ( !v12 || (gameObject = UnityEngine_Component__get_gameObject(v12, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CommandSpellIconComponent__GetSpellImageAssetStorageName(
        CommandSpellIconComponent_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  System_String_o *SpellImageFileName; // x0

  if ( (byte_40FA5F0 & 1) == 0 )
  {
    this = (CommandSpellIconComponent_o *)sub_B16FFC(&StringLiteral_4152, *(_QWORD *)&tp);
    byte_40FA5F0 = 1;
  }
  SpellImageFileName = CommandSpellIconComponent__GetSpellImageFileName(this, tp, method);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_4152, SpellImageFileName, 0LL);
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

  if ( (byte_40FA5F1 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&tp);
    sub_B16FFC(&StringLiteral_23401, v4);
    sub_B16FFC(&StringLiteral_17749, v5);
    byte_40FA5F1 = 1;
  }
  v9 = tp;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  v7 = System_String__Format((System_String_o *)StringLiteral_23401, v6, 0LL);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_17749, v7, 0LL);
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
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  CommandSpellIconComponent_c *v17; // x0
  CommandSpellIconComponent_c *v18; // x0
  CommandSpellIconComponent_c *v19; // x0
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x20
  QuestEntity_o *quest_ent; // x0
  bool v24; // w1

  if ( (byte_40FA5F5 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, data);
    sub_B16FFC(&AssetManager_TypeInfo, v5);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_17750, v9);
    sub_B16FFC(&StringLiteral_2758, v10);
    byte_40FA5F5 = 1;
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
      Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                     AssetStorage,
                                                                     (System_String_o *)StringLiteral_2758,
                                                                     (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      if ( Object_WarBoardWaitTimeSetting )
      {
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            Object_WarBoardWaitTimeSetting,
                                                            (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
          return;
        v17 = this[1].klass;
        if ( v17 )
        {
          UISprite__set_atlas((UISprite_o *)v17, (UIAtlas_o *)Component_srcLineSprite, 0LL);
          v18 = this[1].klass;
          if ( v18 )
          {
            UISprite__set_spriteName((UISprite_o *)v18, (System_String_o *)StringLiteral_17750, 0LL);
            v19 = this[1].klass;
            if ( v19 )
            {
              (*((void (__fastcall **)(CommandSpellIconComponent_c *, _QWORD))v19->_1.image + 105))(
                v19,
                *((_QWORD *)v19->_1.image + 106));
              v20 = (UnityEngine_Component_o *)this[1].klass;
              if ( v20 )
              {
                gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
                if ( data )
                {
                  v22 = gameObject;
                  quest_ent = data->fields.quest_ent;
                  if ( quest_ent )
                  {
                    if ( QuestEntity__HasFlag(quest_ent, 0x400000000LL, 0LL) )
                    {
                      v24 = BattleData__GetOverwriteCommandSpellIcon(data, 0LL) != 0;
                      if ( !v22 )
                        goto LABEL_31;
                    }
                    else
                    {
                      v24 = 0;
                      if ( !v22 )
                        goto LABEL_31;
                    }
                    UnityEngine_GameObject__SetActive(v22, v24, 0LL);
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
    sub_B170D4();
  }
}


void __fastcall CommandSpellIconComponent__ReleaseAll(CommandSpellIconComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *disableSp; // x20
  UnityEngine_Material_o *v7; // x21
  BattleServantConfConponent_o *p_callbackFunc; // x19
  struct System_Action_o *callbackFunc; // t1
  __int64 v10; // x20
  __int64 v11; // x20
  UnityEngine_Object_o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  AssetData_o *klass; // x20

  if ( (byte_40FA5EA & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__getInstance__, v4);
    sub_B16FFC(&StringLiteral_15952, v5);
    byte_40FA5EA = 1;
  }
  disableSp = (UnityEngine_Object_o *)this->fields.disableSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(disableSp, 0LL, 0LL) )
    goto LABEL_17;
  if ( !disableSp )
LABEL_32:
    sub_B170D4();
  v7 = (UnityEngine_Material_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))disableSp->klass[1].vtable._1_Finalize.method)(
                                   disableSp,
                                   disableSp->klass[1].vtable._2_GetHashCode.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v7, 0LL, 0LL) )
  {
    if ( v7 )
    {
      UnityEngine_Material__set_mainTexture(v7, 0LL, 0LL);
      UnityEngine_Material__SetTexture(v7, (System_String_o *)StringLiteral_15952, 0LL, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)v7, 0LL);
      ((void (__fastcall *)(UnityEngine_Object_o *, _QWORD, Il2CppMethodPointer))disableSp->klass[1].vtable._2_GetHashCode.method)(
        disableSp,
        0LL,
        disableSp->klass[1].vtable._3_ToString.methodPtr);
LABEL_17:
      callbackFunc = this->fields.callbackFunc;
      p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
      if ( callbackFunc )
      {
        v10 = *((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 3);
        if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
          sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_AssetManager__getInstance__ + 3));
        v11 = **(_QWORD **)(v10 + 192);
        if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
          sub_AAFCFC(v11);
        v12 = **(UnityEngine_Object_o ***)(v11 + 184);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Implicit(v12, 0LL) )
        {
          klass = (AssetData_o *)p_callbackFunc->klass;
          if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AssetManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          }
          AssetManager__releaseAsset_29947376(klass, 0LL);
        }
        p_callbackFunc->klass = 0LL;
        sub_B16F98(p_callbackFunc, 0LL, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_40FA5EE & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8657, *(_QWORD *)&cmdSpellImgId);
    byte_40FA5EE = 1;
  }
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8657, 0LL);
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
    sub_B170D4();
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
  int32_t SpellImageIdBattle; // w0
  int32_t v8; // w22
  int32_t v9; // w21
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  if ( !entity || (SpellImageIdBattle = UserGameEntity__get_SpellImageIdBattle(entity, 0LL), !battleData) )
    sub_B170D4();
  v8 = SpellImageIdBattle;
  v9 = BattleData__CheckCurrentTemporaryCommandSpell(battleData, entity, 0LL);
  CommandSpellIconComponent__SetImageType(this, v8, v10);
  CommandSpellIconComponent__SetRemain(this, v9, v11);
  CommandSpellIconComponent__NotUseCommandSpellDisplay(this, battleData, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellIconComponent__SetDispDisableSp(
        CommandSpellIconComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *assetData; // x21
  UnityEngine_Component_o *v6; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FA5EF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isDisp);
    byte_40FA5EF = 1;
  }
  assetData = (UnityEngine_Object_o *)this->fields.assetData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(assetData, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Component_o *)this->fields.assetData;
    if ( !v6 || (gameObject = UnityEngine_Component__get_gameObject(v6, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, isDisp, 0LL);
  }
}


void __fastcall CommandSpellIconComponent__SetFullData(
        CommandSpellIconComponent_o *this,
        UserGameEntity_o *entity,
        const MethodInfo *method)
{
  int32_t SpellImageId; // w20
  int32_t Value; // w21
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_40FA5ED & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8657, entity);
    byte_40FA5ED = 1;
  }
  if ( !entity )
    sub_B170D4();
  SpellImageId = UserGameEntity__get_SpellImageId(entity, 0LL);
  Value = ConstantMaster__getValue((System_String_o *)StringLiteral_8657, 0LL);
  CommandSpellIconComponent__SetImageType(this, SpellImageId, v7);
  CommandSpellIconComponent__SetRemain(this, Value, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellIconComponent__SetImageType(
        CommandSpellIconComponent_o *this,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2
  System_String_o *SpellImageAssetStorageName; // x21
  const MethodInfo *v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  AssetLoader_LoadEndDataHandler_o *v24; // x19

  if ( (byte_40FA5F2 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&tp);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_B16FFC(&Method_CommandSpellIconComponent___c__DisplayClass23_0__SetImageType_b__0__, v8);
    sub_B16FFC(&CommandSpellIconComponent___c__DisplayClass23_0_TypeInfo, v9);
    byte_40FA5F2 = 1;
  }
  v10 = sub_B170CC(CommandSpellIconComponent___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&tp, method, v3, v4);
  CommandSpellIconComponent___c__DisplayClass23_0___ctor((CommandSpellIconComponent___c__DisplayClass23_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B170D4();
  *(_QWORD *)(v10 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_DWORD *)(v10 + 24) = tp;
  if ( this->fields.Remain != tp )
  {
    this->fields.ImageTypeOld = tp;
    this->fields.Remain = *(_DWORD *)(v10 + 24);
    SpellImageAssetStorageName = CommandSpellIconComponent__GetSpellImageAssetStorageName(
                                   this,
                                   *(_DWORD *)(v10 + 24),
                                   v17);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    if ( AssetManager__isExistAssetStorage(SpellImageAssetStorageName, 0LL) )
    {
      CommandSpellIconComponent__ReleaseAll(this, v19);
      v24 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v20, v21, v22, v23);
      AssetLoader_LoadEndDataHandler___ctor(
        v24,
        (Il2CppObject *)v10,
        Method_CommandSpellIconComponent___c__DisplayClass23_0__SetImageType_b__0__,
        0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__loadAssetStorage(SpellImageAssetStorageName, v24, 1, 0LL);
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
  UnityEngine_Rect_o v10; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Rect_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FA5F3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&count);
    byte_40FA5F3 = 1;
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
    v11.fields.m_Width = 0.5;
    v11.fields.m_YMin = (float)(((unsigned int)count >> 1) & 1) * 0.5;
    v11.fields.m_XMin = (float)((count & 1) == 0) * 0.5;
    v11.fields.m_Height = 0.5;
    *(_QWORD *)&v10.fields.m_XMin = 0LL;
    *(_QWORD *)&v10.fields.m_Width = 0LL;
    UnityEngine_Rect___ctor(v11, v6, v7, v8, v9, (const MethodInfo *)&v10);
    if ( !disableSp )
      sub_B170D4();
    UITexture__set_uvRect(disableSp, v10, 0LL);
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
  if ( (byte_40FA5EC & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, entity);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_17750, v11);
    byte_40FA5EC = 1;
  }
  *(_QWORD *)result = 0LL;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6043 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, entity);
    byte_40F6043 = 1;
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
        sub_B170D4();
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
      AtlasManager__SetEventSprite((UISprite_o *)v17, (System_String_o *)StringLiteral_17750, 0LL);
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
    sub_B170D4();
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
  UnityEngine_Material_o *v19; // x22
  UnityEngine_Shader_o *v20; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4

  v6 = this;
  if ( (byte_40FA5F4 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_Texture2D____66802808, data);
    sub_B16FFC(&UnityEngine_Material_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_16070, v9);
    sub_B16FFC(&StringLiteral_4519, v10);
    this = (CommandSpellIconComponent_o *)sub_B16FFC(&StringLiteral_15952, v11);
    byte_40FA5F4 = 1;
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
                                                                  (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
      v16 = System_String__Concat_43743732(v14, (System_String_o *)StringLiteral_16070, 0LL);
      v17 = AssetData__GetObject_WarBoardWaitTimeSetting_(
              data,
              v16,
              (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_Texture2D____66802808);
      if ( !disableSp )
        goto LABEL_17;
      v18 = (UnityEngine_Texture_o *)v17;
      v19 = (UnityEngine_Material_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppMethodPointer))disableSp->klass[1].vtable._1_Finalize.method)(
                                        disableSp,
                                        disableSp->klass[1].vtable._2_GetHashCode.methodPtr);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
      {
        v20 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_4519, 0LL);
        v19 = (UnityEngine_Material_o *)sub_B170CC(UnityEngine_Material_TypeInfo, v21, v22, v23, v24);
        UnityEngine_Material___ctor(v19, v20, 0LL);
        ((void (__fastcall *)(UnityEngine_Object_o *, UnityEngine_Material_o *, Il2CppMethodPointer))disableSp->klass[1].vtable._2_GetHashCode.method)(
          disableSp,
          v19,
          disableSp->klass[1].vtable._3_ToString.methodPtr);
      }
      if ( !v19 )
LABEL_17:
        sub_B170D4();
      UnityEngine_Material__set_mainTexture(v19, Object_WarBoardWaitTimeSetting, 0LL);
      UnityEngine_Material__SetTexture(v19, (System_String_o *)StringLiteral_15952, v18, 0LL);
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
  CommandSpellIconComponent_o *v11; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this->fields.callbackFunc = (struct System_Action_o *)data,
        sub_B16F98(
          (BattleServantConfConponent_o *)&_4__this->fields.callbackFunc,
          (System_Int32_array **)data,
          (System_String_array **)method,
          v3,
          v4,
          v5,
          v6,
          v7),
        (v11 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  CommandSpellIconComponent__SetTexture(v11, data, this->fields.tp, 0LL);
}