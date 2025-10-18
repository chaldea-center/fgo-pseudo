void SelecCommandWindowCommandCard___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  unsigned int v4; // w8
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  unsigned int v12; // w8
  struct UnityEngine_Color_array *v13; // x1
  struct SelecCommandWindowCommandCard_StaticFields *static_fields; // x0
  __int128 v15; // [xsp+0h] [xbp-30h]

  if ( (byte_4C468C4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Color___TypeInfo);
    sub_1C37058(&SelecCommandWindowCommandCard_TypeInfo);
    byte_4C468C4 = 1;
  }
  v1 = sub_1C37100(UnityEngine_Color___TypeInfo, 3);
  if ( !v1 )
    goto LABEL_13;
  v4 = *(_DWORD *)(v1 + 24);
  if ( !v4 )
    goto LABEL_12;
  *(_OWORD *)(v1 + 32) = xmmword_C0F8A0;
  if ( v4 == 1 )
    goto LABEL_12;
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)(v1 + 48) = _Q0;
  if ( v4 <= 2 )
LABEL_12:
    sub_1C372BC(v1);
  *(_OWORD *)(v1 + 64) = _Q0;
  v15 = _Q0;
  SelecCommandWindowCommandCard_TypeInfo->static_fields->MessageColorsByCommandType = (struct UnityEngine_Color_array *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)SelecCommandWindowCommandCard_TypeInfo->static_fields, v1, v2, v3);
  v1 = sub_1C37100(UnityEngine_Color___TypeInfo, 3);
  if ( !v1 )
LABEL_13:
    sub_1C372B4(v1);
  v12 = *(_DWORD *)(v1 + 24);
  v13 = (struct UnityEngine_Color_array *)v1;
  if ( !v12 )
    goto LABEL_12;
  *(_OWORD *)(v1 + 32) = xmmword_C0FDF0;
  if ( v12 == 1 )
    goto LABEL_12;
  *(_OWORD *)(v1 + 48) = v15;
  if ( v12 <= 2 )
    goto LABEL_12;
  *(_OWORD *)(v1 + 64) = v15;
  static_fields = SelecCommandWindowCommandCard_TypeInfo->static_fields;
  static_fields->MessageBgColorsByCommandType = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->MessageBgColorsByCommandType, (int32_t)v13, v10, v11);
}


void SelecCommandWindowCommandCard___ctor(SelecCommandWindowCommandCard_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SelecCommandWindowCommandCard__AssertionForSerializeField(
        SelecCommandWindowCommandCard_o *this,
        const MethodInfo *method)
{
  ;
}


void SelecCommandWindowCommandCard__Awake(SelecCommandWindowCommandCard_o *this, const MethodInfo *method)
{
  ;
}


UnityEngine_Color_o SelecCommandWindowCommandCard__GetColorFromHex(
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


void SelecCommandWindowCommandCard__Setup(
        SelecCommandWindowCommandCard_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_o *param,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleCommand; // x22
  const MethodInfo *v8; // x2
  BattleCommandData_o *v9; // x22
  BattleCommandComponent_o *v10; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4C468C1 & 1) == 0 )
  {
    sub_1C37058(&BattleCommandData_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C468C1 = 1;
  }
  battleCommand = (UnityEngine_Object_o *)this->fields.battleCommand;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleCommand, 0, 0) )
  {
    v9 = (BattleCommandData_o *)sub_1C372A4(BattleCommandData_TypeInfo);
    BattleCommandData___ctor(v9, 0);
    if ( !param )
      goto LABEL_12;
    if ( !v9 )
      goto LABEL_12;
    v9->fields._type = param->fields.type;
    if ( !svtData
      || (v9->fields.svtlimit = BattleServantData__getCommandDispLimitCount(svtData, 0),
          v9->fields._loadsvtLimit = BattleServantData__getDispLimitCount(svtData, 1, 0),
          v9->fields.uniqueId = svtData->fields.uniqueId,
          v9->fields.svtId = BattleServantData__getSvtId(svtData, 0),
          v9->fields.imageSvtId = BattleServantData__GetCommandImageSvtId(svtData, 0),
          v9->fields.treasureDvc = param->fields.id,
          (v10 = this->fields.battleCommand) == 0) )
    {
LABEL_12:
      sub_1C372B4(v10);
    }
    BattleCommandComponent__setData(v10, v9, svtData, 0, 0, 1, 1, 0);
  }
  SelecCommandWindowCommandCard__SetupMessageLabel(this, param, v8);
  SelecCommandWindowCommandCard__SetupMessageBgSprite(this, param, v11);
}


void SelecCommandWindowCommandCard__SetupMessageBgSprite(
        SelecCommandWindowCommandCard_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_o *param,
        const MethodInfo *method)
{
  UnityEngine_Object_o *messageBgSprite; // x21
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  System_String_o *v7; // x0
  char v8; // w21
  BattleDataDefine_c *v9; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__51154888; // x21
  UIWidget_o *v13; // x20
  SelecCommandWindowCommandCard_c *v14; // x0
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C468C3 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_BasicHelper_IndexValue_Color___);
    sub_1C37058(&BattleDataDefine_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_TryGetComponent_UIAtlas___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SelecCommandWindowCommandCard_TypeInfo);
    sub_1C37058(&StringLiteral_3107/*"BattleAssetUIAtlas"*/);
    sub_1C37058(&StringLiteral_24016/*"td_change_message_bg_01"*/);
    byte_4C468C3 = 1;
  }
  component = 0;
  messageBgSprite = (UnityEngine_Object_o *)this->fields.messageBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  IsNullOrEmpty = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(messageBgSprite, 0, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !param )
      goto LABEL_29;
    v7 = SelectTreasureDeviceInfo_TdChangeParam__get_MessageDefaultEmpty(param, 0);
    IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(v7, 0);
    if ( !this->fields.messageBgSprite )
      goto LABEL_29;
    v8 = (char)IsNullOrEmpty;
    IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.messageBgSprite, 0);
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(IsNullOrEmpty, (v8 ^ 1) & 1, 0);
    if ( (v8 & 1) == 0 )
    {
      v9 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v9 = BattleDataDefine_TypeInfo;
      }
      ASSET_BATTLE_COMMON = v9->static_fields->ASSET_BATTLE_COMMON;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
      if ( AssetStorage )
        Object_object__51154888 = AssetData__GetObject_object__51154888(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3107/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
      else
        Object_object__51154888 = 0;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsNullOrEmpty = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)Object_object__51154888,
                                                    0,
                                                    0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( Object_object__51154888 )
        {
          if ( !UnityEngine_GameObject__TryGetComponent_object_(
                  (UnityEngine_GameObject_o *)Object_object__51154888,
                  &component,
                  (const MethodInfo_3140468 *)Method_UnityEngine_GameObject_TryGetComponent_UIAtlas___) )
            return;
          IsNullOrEmpty = (UnityEngine_GameObject_o *)this->fields.messageBgSprite;
          if ( IsNullOrEmpty )
          {
            UISprite__set_atlas((UISprite_o *)IsNullOrEmpty, (UIAtlas_o *)component, 0);
            IsNullOrEmpty = (UnityEngine_GameObject_o *)this->fields.messageBgSprite;
            if ( IsNullOrEmpty )
            {
              UISprite__set_spriteName((UISprite_o *)IsNullOrEmpty, (System_String_o *)StringLiteral_24016/*"td_change_message_bg_01"*/, 0);
              v13 = (UIWidget_o *)this->fields.messageBgSprite;
              v14 = SelecCommandWindowCommandCard_TypeInfo;
              if ( !SelecCommandWindowCommandCard_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SelecCommandWindowCommandCard_TypeInfo);
                v14 = SelecCommandWindowCommandCard_TypeInfo;
              }
              v16.fields.r = 1.0;
              v16.fields.g = 1.0;
              v16.fields.b = 1.0;
              v16.fields.a = 1.0;
              v17 = BasicHelper__IndexValue_Color_(
                      v14->static_fields->MessageBgColorsByCommandType,
                      param->fields.type - 1,
                      v16,
                      (const MethodInfo_30D6060 *)Method_BasicHelper_IndexValue_Color___);
              if ( v13 )
              {
                UIWidget__set_color(v13, v17, 0);
                return;
              }
            }
          }
        }
LABEL_29:
        sub_1C372B4(IsNullOrEmpty);
      }
    }
  }
}


void SelecCommandWindowCommandCard__SetupMessageLabel(
        SelecCommandWindowCommandCard_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_o *param,
        const MethodInfo *method)
{
  UnityEngine_Object_o *messageLabel; // x21
  System_String_o *v6; // x0
  UILabel_o *v7; // x21
  UILabel_o *v8; // x20
  SelecCommandWindowCommandCard_c *v9; // x0
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C468C2 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_IndexValue_Color___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SelecCommandWindowCommandCard_TypeInfo);
    byte_4C468C2 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (System_String_o *)UnityEngine_Object__op_Equality(messageLabel, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( !param )
      goto LABEL_12;
    v7 = this->fields.messageLabel;
    v6 = SelectTreasureDeviceInfo_TdChangeParam__get_MessageDefaultEmpty(param, 0);
    if ( !v7 )
      goto LABEL_12;
    UILabel__set_text(v7, v6, 0);
    v8 = this->fields.messageLabel;
    v9 = SelecCommandWindowCommandCard_TypeInfo;
    if ( !SelecCommandWindowCommandCard_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SelecCommandWindowCommandCard_TypeInfo);
      v9 = SelecCommandWindowCommandCard_TypeInfo;
    }
    v10.fields.r = 1.0;
    v10.fields.g = 1.0;
    v10.fields.b = 1.0;
    v10.fields.a = 1.0;
    v11 = BasicHelper__IndexValue_Color_(
            v9->static_fields->MessageColorsByCommandType,
            param->fields.type - 1,
            v10,
            (const MethodInfo_30D6060 *)Method_BasicHelper_IndexValue_Color___);
    if ( !v8 )
LABEL_12:
      sub_1C372B4(v6);
    UILabel__set_effectColor(v8, v11, 0);
  }
}