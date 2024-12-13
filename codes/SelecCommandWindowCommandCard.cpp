void __fastcall SelecCommandWindowCommandCard___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int64_t v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  unsigned int v11; // w8
  int64_t v12; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  unsigned int v24; // w8
  struct SelecCommandWindowCommandCard_StaticFields *static_fields; // x0
  __int128 v26; // [xsp+0h] [xbp-30h]

  if ( (byte_4B3A5A9 & 1) == 0 )
  {
    sub_1BD3458(&UnityEngine_Color___TypeInfo, v1);
    sub_1BD3458(&SelecCommandWindowCommandCard_TypeInfo, v2);
    byte_4B3A5A9 = 1;
  }
  v3 = sub_1BD3500(UnityEngine_Color___TypeInfo, 3LL);
  if ( !v3 )
    goto LABEL_13;
  v11 = *(_DWORD *)(v3 + 24);
  v12 = v3;
  if ( !v11 )
    goto LABEL_12;
  *(_OWORD *)(v3 + 32) = xmmword_BD8A90;
  if ( v11 == 1 )
    goto LABEL_12;
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)(v3 + 48) = _Q0;
  if ( v11 <= 2 )
LABEL_12:
    sub_1BD36BC(v3, v12);
  *(_OWORD *)(v3 + 64) = _Q0;
  v26 = _Q0;
  SelecCommandWindowCommandCard_TypeInfo->static_fields->MessageColorsByCommandType = (struct UnityEngine_Color_array *)v3;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)SelecCommandWindowCommandCard_TypeInfo->static_fields,
    v3,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v3 = sub_1BD3500(UnityEngine_Color___TypeInfo, 3LL);
  if ( !v3 )
LABEL_13:
    sub_1BD36B4(v3, v4);
  v24 = *(_DWORD *)(v3 + 24);
  v12 = v3;
  if ( !v24 )
    goto LABEL_12;
  *(_OWORD *)(v3 + 32) = xmmword_BD8F50;
  if ( v24 == 1 )
    goto LABEL_12;
  *(_OWORD *)(v3 + 48) = v26;
  if ( v24 <= 2 )
    goto LABEL_12;
  *(_OWORD *)(v3 + 64) = v26;
  static_fields = SelecCommandWindowCommandCard_TypeInfo->static_fields;
  static_fields->MessageBgColorsByCommandType = (struct UnityEngine_Color_array *)v12;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&static_fields->MessageBgColorsByCommandType,
    v12,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
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
  __int64 v7; // x1
  UnityEngine_Object_o *battleCommand; // x22
  const MethodInfo *v9; // x2
  BattleCommandData_o *v10; // x22
  BattleCommandComponent_o *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B3A5A6 & 1) == 0 )
  {
    sub_1BD3458(&BattleCommandData_TypeInfo, param);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v7);
    byte_4B3A5A6 = 1;
  }
  battleCommand = (UnityEngine_Object_o *)this->fields.battleCommand;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleCommand, 0LL, 0LL) )
  {
    v10 = (BattleCommandData_o *)sub_1BD36A4(BattleCommandData_TypeInfo);
    BattleCommandData___ctor(v10, 0LL);
    if ( !param )
      goto LABEL_12;
    if ( !v10 )
      goto LABEL_12;
    v10->fields._type = param->fields.type;
    if ( !svtData
      || (v10->fields.svtlimit = BattleServantData__getCommandDispLimitCount(svtData, 0LL),
          v10->fields._loadsvtLimit = BattleServantData__getDispLimitCount(svtData, 1, 0LL),
          v10->fields.uniqueId = svtData->fields.uniqueId,
          v10->fields.svtId = BattleServantData__getSvtId(svtData, 0LL),
          v10->fields.imageSvtId = BattleServantData__GetCommandImageSvtId(svtData, 0LL),
          v10->fields.treasureDvc = param->fields.id,
          (v11 = this->fields.battleCommand) == 0LL) )
    {
LABEL_12:
      sub_1BD36B4(v11, v12);
    }
    BattleCommandComponent__setData(v11, v10, svtData, 0, 0, 1, 1, 0LL);
  }
  SelecCommandWindowCommandCard__SetupMessageLabel(this, param, v9);
  SelecCommandWindowCommandCard__SetupMessageBgSprite(this, param, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelecCommandWindowCommandCard__SetupMessageBgSprite(
        SelecCommandWindowCommandCard_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_o *param,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *messageBgSprite; // x21
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v15; // x1
  System_String_o *v16; // x0
  char v17; // w21
  BattleDataDefine_c *v18; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__49362760; // x21
  UIWidget_o *v22; // x20
  SelecCommandWindowCommandCard_c *v23; // x0
  int v24; // s0
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B3A5A8 & 1) == 0 )
  {
    sub_1BD3458(&Method_AssetData_GetObject_GameObject____76969040, param);
    sub_1BD3458(&AssetManager_TypeInfo, v5);
    sub_1BD3458(&Method_BasicHelper_IndexValue_Color___, v6);
    sub_1BD3458(&BattleDataDefine_TypeInfo, v7);
    sub_1BD3458(&Method_UnityEngine_GameObject_TryGetComponent_UIAtlas___, v8);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v9);
    sub_1BD3458(&SelecCommandWindowCommandCard_TypeInfo, v10);
    sub_1BD3458(&StringLiteral_3258/*"BattleAssetUIAtlas"*/, v11);
    sub_1BD3458(&StringLiteral_24156/*"td_change_message_bg_01"*/, v12);
    byte_4B3A5A8 = 1;
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
    v16 = SelectTreasureDeviceInfo_TdChangeParam__get_MessageDefaultEmpty(param, 0LL);
    IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(v16, 0LL);
    if ( !this->fields.messageBgSprite )
      goto LABEL_29;
    v17 = (char)IsNullOrEmpty;
    IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.messageBgSprite, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(IsNullOrEmpty, (v17 ^ 1) & 1, 0LL);
    if ( (v17 & 1) == 0 )
    {
      v18 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v18 = BattleDataDefine_TypeInfo;
      }
      ASSET_BATTLE_COMMON = v18->static_fields->ASSET_BATTLE_COMMON;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
      if ( AssetStorage )
        Object_object__49362760 = AssetData__GetObject_object__49362760(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3258/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
      else
        Object_object__49362760 = 0LL;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsNullOrEmpty = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)Object_object__49362760,
                                                    0LL,
                                                    0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( Object_object__49362760 )
        {
          if ( !UnityEngine_GameObject__TryGetComponent_object_(
                  (UnityEngine_GameObject_o *)Object_object__49362760,
                  &component,
                  (const MethodInfo_2F82D0C *)Method_UnityEngine_GameObject_TryGetComponent_UIAtlas___) )
            return;
          IsNullOrEmpty = (UnityEngine_GameObject_o *)this->fields.messageBgSprite;
          if ( IsNullOrEmpty )
          {
            UISprite__set_atlas((UISprite_o *)IsNullOrEmpty, (UIAtlas_o *)component, 0LL);
            IsNullOrEmpty = (UnityEngine_GameObject_o *)this->fields.messageBgSprite;
            if ( IsNullOrEmpty )
            {
              UISprite__set_spriteName((UISprite_o *)IsNullOrEmpty, (System_String_o *)StringLiteral_24156/*"td_change_message_bg_01"*/, 0LL);
              v22 = (UIWidget_o *)this->fields.messageBgSprite;
              v23 = SelecCommandWindowCommandCard_TypeInfo;
              if ( !SelecCommandWindowCommandCard_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SelecCommandWindowCommandCard_TypeInfo);
                v23 = SelecCommandWindowCommandCard_TypeInfo;
              }
              v29.fields.r = 1.0;
              v29.fields.g = 1.0;
              v29.fields.b = 1.0;
              v29.fields.a = 1.0;
              *(UnityEngine_Color_o *)&v24 = BasicHelper__IndexValue_Color_(
                                               v23->static_fields->MessageBgColorsByCommandType,
                                               param->fields.type - 1,
                                               v29,
                                               (const MethodInfo_2F200B4 *)Method_BasicHelper_IndexValue_Color___);
              if ( v22 )
              {
                UIWidget__set_color(v22, *(UnityEngine_Color_o *)&v24, 0LL);
                return;
              }
            }
          }
        }
LABEL_29:
        sub_1BD36B4(IsNullOrEmpty, v15);
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
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *messageLabel; // x21
  System_String_o *v8; // x0
  __int64 v9; // x1
  UILabel_o *v10; // x21
  UILabel_o *v11; // x20
  SelecCommandWindowCommandCard_c *v12; // x0
  int v13; // s0
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B3A5A7 & 1) == 0 )
  {
    sub_1BD3458(&Method_BasicHelper_IndexValue_Color___, param);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v5);
    sub_1BD3458(&SelecCommandWindowCommandCard_TypeInfo, v6);
    byte_4B3A5A7 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (System_String_o *)UnityEngine_Object__op_Equality(messageLabel, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    if ( !param )
      goto LABEL_12;
    v10 = this->fields.messageLabel;
    v8 = SelectTreasureDeviceInfo_TdChangeParam__get_MessageDefaultEmpty(param, 0LL);
    if ( !v10 )
      goto LABEL_12;
    UILabel__set_text(v10, v8, 0LL);
    v11 = this->fields.messageLabel;
    v12 = SelecCommandWindowCommandCard_TypeInfo;
    if ( !SelecCommandWindowCommandCard_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SelecCommandWindowCommandCard_TypeInfo);
      v12 = SelecCommandWindowCommandCard_TypeInfo;
    }
    v17.fields.r = 1.0;
    v17.fields.g = 1.0;
    v17.fields.b = 1.0;
    v17.fields.a = 1.0;
    *(UnityEngine_Color_o *)&v13 = BasicHelper__IndexValue_Color_(
                                     v12->static_fields->MessageColorsByCommandType,
                                     param->fields.type - 1,
                                     v17,
                                     (const MethodInfo_2F200B4 *)Method_BasicHelper_IndexValue_Color___);
    if ( !v11 )
LABEL_12:
      sub_1BD36B4(v8, v9);
    UILabel__set_effectColor(v11, *(UnityEngine_Color_o *)&v13, 0LL);
  }
}