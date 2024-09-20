void __fastcall SelecCommandWindowCommandCard___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  unsigned int v5; // w8
  struct UnityEngine_Color_array *v6; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  unsigned int v14; // w8
  struct SelecCommandWindowCommandCard_StaticFields *static_fields; // x0
  __int128 v16; // [xsp+0h] [xbp-30h]

  if ( (byte_4A5E496 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Color___TypeInfo);
    sub_1B885B0(&SelecCommandWindowCommandCard_TypeInfo);
    byte_4A5E496 = 1;
  }
  v1 = sub_1B88658(UnityEngine_Color___TypeInfo, 3LL);
  if ( !v1 )
    goto LABEL_13;
  v5 = *(_DWORD *)(v1 + 24);
  v6 = (struct UnityEngine_Color_array *)v1;
  if ( !v5 )
    goto LABEL_12;
  *(_OWORD *)(v1 + 32) = xmmword_BB5490;
  if ( v5 == 1 )
    goto LABEL_12;
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)(v1 + 48) = _Q0;
  if ( v5 <= 2 )
LABEL_12:
    sub_1B88814(v1, v6);
  *(_OWORD *)(v1 + 64) = _Q0;
  v16 = _Q0;
  SelecCommandWindowCommandCard_TypeInfo->static_fields->MessageColorsByCommandType = (struct UnityEngine_Color_array *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)SelecCommandWindowCommandCard_TypeInfo->static_fields, v1, v3, v4);
  v1 = sub_1B88658(UnityEngine_Color___TypeInfo, 3LL);
  if ( !v1 )
LABEL_13:
    sub_1B8880C(v1, v2);
  v14 = *(_DWORD *)(v1 + 24);
  v6 = (struct UnityEngine_Color_array *)v1;
  if ( !v14 )
    goto LABEL_12;
  *(_OWORD *)(v1 + 32) = xmmword_BB5940;
  if ( v14 == 1 )
    goto LABEL_12;
  *(_OWORD *)(v1 + 48) = v16;
  if ( v14 <= 2 )
    goto LABEL_12;
  *(_OWORD *)(v1 + 64) = v16;
  static_fields = SelecCommandWindowCommandCard_TypeInfo->static_fields;
  static_fields->MessageBgColorsByCommandType = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->MessageBgColorsByCommandType, (int32_t)v6, v12, v13);
}


void __fastcall SelecCommandWindowCommandCard___ctor(SelecCommandWindowCommandCard_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SelecCommandWindowCommandCard__AssertionForSerializeField(
        SelecCommandWindowCommandCard_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SelecCommandWindowCommandCard__Awake(SelecCommandWindowCommandCard_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_Color_o __fastcall SelecCommandWindowCommandCard__GetColorFromHex(
        int32_t r,
        int32_t g,
        int32_t b,
        const MethodInfo *method)
{
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = (float)r / 255.0;
  v5 = (float)g / 255.0;
  v6 = (float)b / 255.0;
  v7 = 1.0;
  result.fields.a = v7;
  result.fields.b = v6;
  result.fields.g = v5;
  result.fields.r = v4;
  return result;
}


void __fastcall SelecCommandWindowCommandCard__Setup(
        SelecCommandWindowCommandCard_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_o *param,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleCommand; // x22
  const MethodInfo *v8; // x2
  BattleCommandData_o *v9; // x22
  BattleCommandComponent_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4A5E493 & 1) == 0 )
  {
    sub_1B885B0(&BattleCommandData_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E493 = 1;
  }
  battleCommand = (UnityEngine_Object_o *)this->fields.battleCommand;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleCommand, 0LL, 0LL) )
  {
    v9 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
    BattleCommandData___ctor(v9, 0LL);
    if ( !param )
      goto LABEL_12;
    if ( !v9 )
      goto LABEL_12;
    v9->fields._type = param->fields.type;
    if ( !svtData
      || (v9->fields.svtlimit = BattleServantData__getCommandDispLimitCount(svtData, 0LL),
          v9->fields._loadsvtLimit = BattleServantData__getDispLimitCount(svtData, 1, 0LL),
          v9->fields.uniqueId = svtData->fields.uniqueId,
          v9->fields.svtId = BattleServantData__getSvtId(svtData, 0LL),
          v9->fields.imageSvtId = BattleServantData__GetCommandImageSvtId(svtData, 0LL),
          v9->fields.treasureDvc = param->fields.id,
          (v10 = this->fields.battleCommand) == 0LL) )
    {
LABEL_12:
      sub_1B8880C(v10, v11);
    }
    BattleCommandComponent__setData(v10, v9, svtData, 0, 0, 1, 1, 0LL);
  }
  SelecCommandWindowCommandCard__SetupMessageLabel(this, param, v8);
  SelecCommandWindowCommandCard__SetupMessageBgSprite(this, param, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelecCommandWindowCommandCard__SetupMessageBgSprite(
        SelecCommandWindowCommandCard_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_o *param,
        const MethodInfo *method)
{
  UnityEngine_Object_o *messageBgSprite; // x21
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  System_String_o *v8; // x0
  char v9; // w21
  BattleDataDefine_c *v10; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__48635516; // x21
  UIWidget_o *v14; // x20
  SelecCommandWindowCommandCard_c *v15; // x0
  int v16; // s0
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E495 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_IndexValue_Color___);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_TryGetComponent_UIAtlas___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SelecCommandWindowCommandCard_TypeInfo);
    sub_1B885B0(&StringLiteral_3227/*"BattleAssetUIAtlas"*/);
    sub_1B885B0(&StringLiteral_23872/*"td_change_message_bg_01"*/);
    byte_4A5E495 = 1;
  }
  component = 0LL;
  messageBgSprite = (UnityEngine_Object_o *)this->fields.messageBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsNullOrEmpty = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(messageBgSprite, 0LL, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !param )
      goto LABEL_29;
    v8 = SelectTreasureDeviceInfo_TdChangeParam__get_MessageDefaultEmpty(param, 0LL);
    IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(v8, 0LL);
    if ( !this->fields.messageBgSprite )
      goto LABEL_29;
    v9 = (char)IsNullOrEmpty;
    IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.messageBgSprite, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(IsNullOrEmpty, (v9 ^ 1) & 1, 0LL);
    if ( (v9 & 1) == 0 )
    {
      v10 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v10 = BattleDataDefine_TypeInfo;
      }
      ASSET_BATTLE_COMMON = v10->static_fields->ASSET_BATTLE_COMMON;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
      if ( AssetStorage )
        Object_object__48635516 = AssetData__GetObject_object__48635516(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3227/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
      else
        Object_object__48635516 = 0LL;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsNullOrEmpty = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)Object_object__48635516,
                                                    0LL,
                                                    0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( Object_object__48635516 )
        {
          if ( !UnityEngine_GameObject__TryGetComponent_object_(
                  (UnityEngine_GameObject_o *)Object_object__48635516,
                  &component,
                  (const MethodInfo_2ED0148 *)Method_UnityEngine_GameObject_TryGetComponent_UIAtlas___) )
            return;
          IsNullOrEmpty = (UnityEngine_GameObject_o *)this->fields.messageBgSprite;
          if ( IsNullOrEmpty )
          {
            UISprite__set_atlas((UISprite_o *)IsNullOrEmpty, (UIAtlas_o *)component, 0LL);
            IsNullOrEmpty = (UnityEngine_GameObject_o *)this->fields.messageBgSprite;
            if ( IsNullOrEmpty )
            {
              UISprite__set_spriteName((UISprite_o *)IsNullOrEmpty, (System_String_o *)StringLiteral_23872/*"td_change_message_bg_01"*/, 0LL);
              v14 = (UIWidget_o *)this->fields.messageBgSprite;
              v15 = SelecCommandWindowCommandCard_TypeInfo;
              if ( !SelecCommandWindowCommandCard_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SelecCommandWindowCommandCard_TypeInfo);
                v15 = SelecCommandWindowCommandCard_TypeInfo;
              }
              v21.fields.r = 1.0;
              v21.fields.g = 1.0;
              v21.fields.b = 1.0;
              v21.fields.a = 1.0;
              *(UnityEngine_Color_o *)&v16 = BasicHelper__IndexValue_Color_(
                                               v15->static_fields->MessageBgColorsByCommandType,
                                               param->fields.type - 1,
                                               v21,
                                               (const MethodInfo_2E6E5BC *)Method_BasicHelper_IndexValue_Color___);
              if ( v14 )
              {
                UIWidget__set_color(v14, *(UnityEngine_Color_o *)&v16, 0LL);
                return;
              }
            }
          }
        }
LABEL_29:
        sub_1B8880C(IsNullOrEmpty, v7);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelecCommandWindowCommandCard__SetupMessageLabel(
        SelecCommandWindowCommandCard_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_o *param,
        const MethodInfo *method)
{
  UnityEngine_Object_o *messageLabel; // x21
  System_String_o *v6; // x0
  __int64 v7; // x1
  UILabel_o *v8; // x21
  UILabel_o *v9; // x20
  SelecCommandWindowCommandCard_c *v10; // x0
  int v11; // s0
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E494 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_Color___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SelecCommandWindowCommandCard_TypeInfo);
    byte_4A5E494 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (System_String_o *)UnityEngine_Object__op_Equality(messageLabel, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( !param )
      goto LABEL_12;
    v8 = this->fields.messageLabel;
    v6 = SelectTreasureDeviceInfo_TdChangeParam__get_MessageDefaultEmpty(param, 0LL);
    if ( !v8 )
      goto LABEL_12;
    UILabel__set_text(v8, v6, 0LL);
    v9 = this->fields.messageLabel;
    v10 = SelecCommandWindowCommandCard_TypeInfo;
    if ( !SelecCommandWindowCommandCard_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SelecCommandWindowCommandCard_TypeInfo);
      v10 = SelecCommandWindowCommandCard_TypeInfo;
    }
    v15.fields.r = 1.0;
    v15.fields.g = 1.0;
    v15.fields.b = 1.0;
    v15.fields.a = 1.0;
    *(UnityEngine_Color_o *)&v11 = BasicHelper__IndexValue_Color_(
                                     v10->static_fields->MessageColorsByCommandType,
                                     param->fields.type - 1,
                                     v15,
                                     (const MethodInfo_2E6E5BC *)Method_BasicHelper_IndexValue_Color___);
    if ( !v9 )
LABEL_12:
      sub_1B8880C(v6, v7);
    UILabel__set_effectColor(v9, *(UnityEngine_Color_o *)&v11, 0LL);
  }
}