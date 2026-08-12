void SelecCommandWindowCommandCard___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  unsigned int v9; // w8
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  unsigned int v21; // w8
  struct UnityEngine_Color_array *v22; // x1
  struct SelecCommandWindowCommandCard_StaticFields *static_fields; // x0
  __int128 v24; // [xsp+0h] [xbp-30h]

  if ( (byte_597454F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Color___TypeInfo);
    sub_2213A60(&SelecCommandWindowCommandCard_TypeInfo);
    byte_597454F = 1;
  }
  v1 = sub_2213B20(UnityEngine_Color___TypeInfo, 3);
  if ( !v1 )
    goto LABEL_13;
  v9 = *(_DWORD *)(v1 + 24);
  if ( !v9 )
    goto LABEL_12;
  *(_OWORD *)(v1 + 32) = xmmword_E9D240;
  if ( v9 == 1 )
    goto LABEL_12;
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)(v1 + 48) = _Q0;
  if ( v9 <= 2 )
LABEL_12:
    sub_2213CE4(v1);
  *(_OWORD *)(v1 + 64) = _Q0;
  v24 = _Q0;
  SelecCommandWindowCommandCard_TypeInfo->static_fields->MessageColorsByCommandType = (struct UnityEngine_Color_array *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SelecCommandWindowCommandCard_TypeInfo->static_fields,
    v1,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
  v1 = sub_2213B20(UnityEngine_Color___TypeInfo, 3);
  if ( !v1 )
LABEL_13:
    sub_2213CDC(v1, v2);
  v21 = *(_DWORD *)(v1 + 24);
  v22 = (struct UnityEngine_Color_array *)v1;
  if ( !v21 )
    goto LABEL_12;
  *(_OWORD *)(v1 + 32) = xmmword_E9BFF0;
  if ( v21 == 1 )
    goto LABEL_12;
  *(_OWORD *)(v1 + 48) = v24;
  if ( v21 <= 2 )
    goto LABEL_12;
  *(_OWORD *)(v1 + 64) = v24;
  static_fields = SelecCommandWindowCommandCard_TypeInfo->static_fields;
  static_fields->MessageBgColorsByCommandType = v22;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->MessageBgColorsByCommandType,
    (int32_t)v22,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
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
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.r = (float)r / 255.0;
  result.fields.g = (float)g / 255.0;
  result.fields.b = (float)b / 255.0;
  result.fields.a = 1.0;
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
  __int64 v11; // x1
  int32_t DispLimitCount; // w0
  int32_t uniqueId; // w8
  int32_t CommandImageSvtId; // w8
  int32_t id; // w9
  const MethodInfo *v16; // x2

  if ( (byte_597454C & 1) == 0 )
  {
    sub_2213A60(&BattleCommandData_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597454C = 1;
  }
  battleCommand = (UnityEngine_Object_o *)this->fields.battleCommand;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, param);
  if ( UnityEngine_Object__op_Inequality(battleCommand, 0, 0) )
  {
    v9 = (BattleCommandData_o *)sub_2213CCC(BattleCommandData_TypeInfo);
    BattleCommandData___ctor(v9, 0);
    if ( !param )
      goto LABEL_12;
    if ( !v9 )
      goto LABEL_12;
    v9->fields._type = param->fields.type;
    if ( !svtData )
      goto LABEL_12;
    v9->fields.svtlimit = BattleServantData__getCommandDispLimitCount(svtData, 0);
    DispLimitCount = BattleServantData__getDispLimitCount(svtData, 1, 0);
    uniqueId = svtData->fields.uniqueId;
    v9->fields._loadsvtLimit = DispLimitCount;
    v9->fields.uniqueId = uniqueId;
    v9->fields.svtId = BattleServantData__getSvtId(svtData, 0);
    CommandImageSvtId = BattleServantData__GetCommandImageSvtId(svtData, 0);
    id = param->fields.id;
    v10 = this->fields.battleCommand;
    v9->fields.imageSvtId = CommandImageSvtId;
    v9->fields.treasureDvc = id;
    if ( !v10 )
LABEL_12:
      sub_2213CDC(v10, v11);
    BattleCommandComponent__setData(v10, v9, svtData, 0, 0, 1, 1, 0);
  }
  SelecCommandWindowCommandCard__SetupMessageLabel(this, param, v8);
  SelecCommandWindowCommandCard__SetupMessageBgSprite(this, param, v16);
}


void SelecCommandWindowCommandCard__SetupMessageBgSprite(
        SelecCommandWindowCommandCard_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_o *param,
        const MethodInfo *method)
{
  UnityEngine_Object_o *messageBgSprite; // x21
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  System_String_o *v8; // x0
  char v9; // w21
  __int64 v10; // x1
  BattleDataDefine_c *v11; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  __int64 v14; // x1
  Il2CppObject *Object_object__58532980; // x21
  __int64 v16; // x1
  UIWidget_o *v17; // x20
  SelecCommandWindowCommandCard_c *v18; // x0
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_597454E & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_BasicHelper_IndexValue_Color___);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_TryGetComponent_UIAtlas___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SelecCommandWindowCommandCard_TypeInfo);
    sub_2213A60(&StringLiteral_3230/*"BattleAssetUIAtlas"*/);
    sub_2213A60(&StringLiteral_25295/*"td_change_message_bg_01"*/);
    byte_597454E = 1;
  }
  messageBgSprite = (UnityEngine_Object_o *)this->fields.messageBgSprite;
  component = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, param);
  IsNullOrEmpty = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(messageBgSprite, 0, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !param )
      goto LABEL_29;
    v8 = SelectTreasureDeviceInfo_TdChangeParam__get_MessageDefaultEmpty(param, 0);
    IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(v8, 0);
    if ( !this->fields.messageBgSprite )
      goto LABEL_29;
    v9 = (char)IsNullOrEmpty;
    IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.messageBgSprite, 0);
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(IsNullOrEmpty, (v9 ^ 1) & 1, 0);
    if ( (v9 & 1) == 0 )
    {
      v11 = BattleDataDefine_TypeInfo;
      if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v10);
        v11 = BattleDataDefine_TypeInfo;
      }
      ASSET_BATTLE_COMMON = v11->static_fields->ASSET_BATTLE_COMMON;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10);
      AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0);
      if ( AssetStorage )
        Object_object__58532980 = AssetData__GetObject_object__58532980(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3230/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
      else
        Object_object__58532980 = 0;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      IsNullOrEmpty = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)Object_object__58532980,
                                                    0,
                                                    0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( Object_object__58532980 )
        {
          if ( !UnityEngine_GameObject__TryGetComponent_object_(
                  (UnityEngine_GameObject_o *)Object_object__58532980,
                  &component,
                  (const MethodInfo_38B7F30 *)Method_UnityEngine_GameObject_TryGetComponent_UIAtlas___) )
            return;
          IsNullOrEmpty = (UnityEngine_GameObject_o *)this->fields.messageBgSprite;
          if ( IsNullOrEmpty )
          {
            UISprite__set_atlas((UISprite_o *)IsNullOrEmpty, (UIAtlas_o *)component, 0);
            IsNullOrEmpty = (UnityEngine_GameObject_o *)this->fields.messageBgSprite;
            if ( IsNullOrEmpty )
            {
              UISprite__set_spriteName((UISprite_o *)IsNullOrEmpty, (System_String_o *)StringLiteral_25295/*"td_change_message_bg_01"*/, 0);
              v17 = (UIWidget_o *)this->fields.messageBgSprite;
              v18 = SelecCommandWindowCommandCard_TypeInfo;
              if ( !*(&SelecCommandWindowCommandCard_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(SelecCommandWindowCommandCard_TypeInfo, v16);
                v18 = SelecCommandWindowCommandCard_TypeInfo;
              }
              v20.fields.r = 1.0;
              v20.fields.g = 1.0;
              v20.fields.b = 1.0;
              v20.fields.a = 1.0;
              v21 = BasicHelper__IndexValue_Color_(
                      v18->static_fields->MessageBgColorsByCommandType,
                      param->fields.type - 1,
                      v20,
                      (const MethodInfo_3814B44 *)Method_BasicHelper_IndexValue_Color___);
              if ( v17 )
              {
                UIWidget__set_color(v17, v21, 0);
                return;
              }
            }
          }
        }
LABEL_29:
        sub_2213CDC(IsNullOrEmpty, v7);
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
  __int64 v7; // x1
  UILabel_o *v8; // x21
  __int64 v9; // x1
  UILabel_o *v10; // x20
  SelecCommandWindowCommandCard_c *v11; // x0
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_597454D & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_Color___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SelecCommandWindowCommandCard_TypeInfo);
    byte_597454D = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, param);
  v6 = (System_String_o *)UnityEngine_Object__op_Equality(messageLabel, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    if ( !param )
      goto LABEL_12;
    v8 = this->fields.messageLabel;
    v6 = SelectTreasureDeviceInfo_TdChangeParam__get_MessageDefaultEmpty(param, 0);
    if ( !v8 )
      goto LABEL_12;
    UILabel__set_text(v8, v6, 0);
    v10 = this->fields.messageLabel;
    v11 = SelecCommandWindowCommandCard_TypeInfo;
    if ( !*(&SelecCommandWindowCommandCard_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SelecCommandWindowCommandCard_TypeInfo, v9);
      v11 = SelecCommandWindowCommandCard_TypeInfo;
    }
    v12.fields.r = 1.0;
    v12.fields.g = 1.0;
    v12.fields.b = 1.0;
    v12.fields.a = 1.0;
    v13 = BasicHelper__IndexValue_Color_(
            v11->static_fields->MessageColorsByCommandType,
            param->fields.type - 1,
            v12,
            (const MethodInfo_3814B44 *)Method_BasicHelper_IndexValue_Color___);
    if ( !v10 )
LABEL_12:
      sub_2213CDC(v6, v7);
    UILabel__set_effectColor(v10, v13, 0);
  }
}