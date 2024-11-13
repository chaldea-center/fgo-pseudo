void __fastcall SelecCommandWindowCommandCard___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  int64_t v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  unsigned int v13; // w8
  int64_t v14; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  unsigned int v26; // w8
  struct SelecCommandWindowCommandCard_StaticFields *static_fields; // x0
  __int128 v28; // [xsp+0h] [xbp-30h]

  if ( (byte_4B195C4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Color___TypeInfo, v1, v2);
    sub_1BCA7E0(&SelecCommandWindowCommandCard_TypeInfo, v3, v4);
    byte_4B195C4 = 1;
  }
  v5 = sub_1BCA888(UnityEngine_Color___TypeInfo, 3LL);
  if ( !v5 )
    goto LABEL_13;
  v13 = *(_DWORD *)(v5 + 24);
  v14 = v5;
  if ( !v13 )
    goto LABEL_12;
  *(_OWORD *)(v5 + 32) = xmmword_BD3660;
  if ( v13 == 1 )
    goto LABEL_12;
  __asm { FMOV            V0.4S, #1.0 }
  *(_OWORD *)(v5 + 48) = _Q0;
  if ( v13 <= 2 )
LABEL_12:
    sub_1BCAA44(v5, v14);
  *(_OWORD *)(v5 + 64) = _Q0;
  v28 = _Q0;
  SelecCommandWindowCommandCard_TypeInfo->static_fields->MessageColorsByCommandType = (struct UnityEngine_Color_array *)v5;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SelecCommandWindowCommandCard_TypeInfo->static_fields,
    v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v5 = sub_1BCA888(UnityEngine_Color___TypeInfo, 3LL);
  if ( !v5 )
LABEL_13:
    sub_1BCAA3C(v5, v6);
  v26 = *(_DWORD *)(v5 + 24);
  v14 = v5;
  if ( !v26 )
    goto LABEL_12;
  *(_OWORD *)(v5 + 32) = xmmword_BD3B30;
  if ( v26 == 1 )
    goto LABEL_12;
  *(_OWORD *)(v5 + 48) = v28;
  if ( v26 <= 2 )
    goto LABEL_12;
  *(_OWORD *)(v5 + 64) = v28;
  static_fields = SelecCommandWindowCommandCard_TypeInfo->static_fields;
  static_fields->MessageBgColorsByCommandType = (struct UnityEngine_Color_array *)v14;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->MessageBgColorsByCommandType,
    v14,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
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
  __int64 v8; // x2
  UnityEngine_Object_o *battleCommand; // x22
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x3
  BattleCommandData_o *v13; // x22
  BattleCommandComponent_o *v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_4B195C1 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleCommandData_TypeInfo, param, svtData);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B195C1 = 1;
  }
  battleCommand = (UnityEngine_Object_o *)this->fields.battleCommand;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, param);
  if ( UnityEngine_Object__op_Inequality(battleCommand, 0LL, 0LL) )
  {
    v13 = (BattleCommandData_o *)sub_1BCAA2C(BattleCommandData_TypeInfo, v10, v11, v12);
    BattleCommandData___ctor(v13, 0LL);
    if ( !param )
      goto LABEL_12;
    if ( !v13 )
      goto LABEL_12;
    v13->fields._type = param->fields.type;
    if ( !svtData
      || (v13->fields.svtlimit = BattleServantData__getCommandDispLimitCount(svtData, 0LL),
          v13->fields._loadsvtLimit = BattleServantData__getDispLimitCount(svtData, 1, 0LL),
          v13->fields.uniqueId = svtData->fields.uniqueId,
          v13->fields.svtId = BattleServantData__getSvtId(svtData, 0LL),
          v13->fields.imageSvtId = BattleServantData__GetCommandImageSvtId(svtData, 0LL),
          v13->fields.treasureDvc = param->fields.id,
          (v14 = this->fields.battleCommand) == 0LL) )
    {
LABEL_12:
      sub_1BCAA3C(v14, v15);
    }
    BattleCommandComponent__setData(v14, v13, svtData, 0, 0, 1, 1, 0LL);
  }
  SelecCommandWindowCommandCard__SetupMessageLabel(this, param, v11);
  SelecCommandWindowCommandCard__SetupMessageBgSprite(this, param, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelecCommandWindowCommandCard__SetupMessageBgSprite(
        SelecCommandWindowCommandCard_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_o *param,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *messageBgSprite; // x21
  UnityEngine_GameObject_o *IsNullOrEmpty; // x0
  __int64 v23; // x1
  System_String_o *v24; // x0
  char v25; // w21
  __int64 v26; // x1
  BattleDataDefine_c *v27; // x0
  System_String_o *ASSET_BATTLE_COMMON; // x21
  AssetData_o *AssetStorage; // x0
  __int64 v30; // x1
  Il2CppObject *Object_object__49237568; // x21
  __int64 v32; // x1
  UIWidget_o *v33; // x20
  SelecCommandWindowCommandCard_c *v34; // x0
  int v35; // s0
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B195C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, param, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_Color___, v7, v8);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_TryGetComponent_UIAtlas___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&SelecCommandWindowCommandCard_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_3251/*"BattleAssetUIAtlas"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_24121/*"td_change_message_bg_01"*/, v19, v20);
    byte_4B195C3 = 1;
  }
  component = 0LL;
  messageBgSprite = (UnityEngine_Object_o *)this->fields.messageBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, param);
  IsNullOrEmpty = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(messageBgSprite, 0LL, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !param )
      goto LABEL_29;
    v24 = SelectTreasureDeviceInfo_TdChangeParam__get_MessageDefaultEmpty(param, 0LL);
    IsNullOrEmpty = (UnityEngine_GameObject_o *)System_String__IsNullOrEmpty(v24, 0LL);
    if ( !this->fields.messageBgSprite )
      goto LABEL_29;
    v25 = (char)IsNullOrEmpty;
    IsNullOrEmpty = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.messageBgSprite, 0LL);
    if ( !IsNullOrEmpty )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(IsNullOrEmpty, (v25 ^ 1) & 1, 0LL);
    if ( (v25 & 1) == 0 )
    {
      v27 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v26);
        v27 = BattleDataDefine_TypeInfo;
      }
      ASSET_BATTLE_COMMON = v27->static_fields->ASSET_BATTLE_COMMON;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v26);
      AssetStorage = AssetManager__getAssetStorage(ASSET_BATTLE_COMMON, 0LL);
      if ( AssetStorage )
        Object_object__49237568 = AssetData__GetObject_object__49237568(
                                    AssetStorage,
                                    (System_String_o *)StringLiteral_3251/*"BattleAssetUIAtlas"*/,
                                    (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      else
        Object_object__49237568 = 0LL;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
      IsNullOrEmpty = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(
                                                    (UnityEngine_Object_o *)Object_object__49237568,
                                                    0LL,
                                                    0LL);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        if ( Object_object__49237568 )
        {
          if ( !UnityEngine_GameObject__TryGetComponent_object_(
                  (UnityEngine_GameObject_o *)Object_object__49237568,
                  &component,
                  (const MethodInfo_2F63960 *)Method_UnityEngine_GameObject_TryGetComponent_UIAtlas___) )
            return;
          IsNullOrEmpty = (UnityEngine_GameObject_o *)this->fields.messageBgSprite;
          if ( IsNullOrEmpty )
          {
            UISprite__set_atlas((UISprite_o *)IsNullOrEmpty, (UIAtlas_o *)component, 0LL);
            IsNullOrEmpty = (UnityEngine_GameObject_o *)this->fields.messageBgSprite;
            if ( IsNullOrEmpty )
            {
              UISprite__set_spriteName((UISprite_o *)IsNullOrEmpty, (System_String_o *)StringLiteral_24121/*"td_change_message_bg_01"*/, 0LL);
              v33 = (UIWidget_o *)this->fields.messageBgSprite;
              v34 = SelecCommandWindowCommandCard_TypeInfo;
              if ( !SelecCommandWindowCommandCard_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SelecCommandWindowCommandCard_TypeInfo, v32);
                v34 = SelecCommandWindowCommandCard_TypeInfo;
              }
              v40.fields.r = 1.0;
              v40.fields.g = 1.0;
              v40.fields.b = 1.0;
              v40.fields.a = 1.0;
              *(UnityEngine_Color_o *)&v35 = BasicHelper__IndexValue_Color_(
                                               v34->static_fields->MessageBgColorsByCommandType,
                                               param->fields.type - 1,
                                               v40,
                                               (const MethodInfo_2F016C0 *)Method_BasicHelper_IndexValue_Color___);
              if ( v33 )
              {
                UIWidget__set_color(v33, *(UnityEngine_Color_o *)&v35, 0LL);
                return;
              }
            }
          }
        }
LABEL_29:
        sub_1BCAA3C(IsNullOrEmpty, v23);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *messageLabel; // x21
  System_String_o *v10; // x0
  __int64 v11; // x1
  UILabel_o *v12; // x21
  __int64 v13; // x1
  UILabel_o *v14; // x20
  SelecCommandWindowCommandCard_c *v15; // x0
  int v16; // s0
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B195C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_Color___, param, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&SelecCommandWindowCommandCard_TypeInfo, v7, v8);
    byte_4B195C2 = 1;
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, param);
  v10 = (System_String_o *)UnityEngine_Object__op_Equality(messageLabel, 0LL, 0LL);
  if ( ((unsigned __int8)v10 & 1) == 0 )
  {
    if ( !param )
      goto LABEL_12;
    v12 = this->fields.messageLabel;
    v10 = SelectTreasureDeviceInfo_TdChangeParam__get_MessageDefaultEmpty(param, 0LL);
    if ( !v12 )
      goto LABEL_12;
    UILabel__set_text(v12, v10, 0LL);
    v14 = this->fields.messageLabel;
    v15 = SelecCommandWindowCommandCard_TypeInfo;
    if ( !SelecCommandWindowCommandCard_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SelecCommandWindowCommandCard_TypeInfo, v13);
      v15 = SelecCommandWindowCommandCard_TypeInfo;
    }
    v20.fields.r = 1.0;
    v20.fields.g = 1.0;
    v20.fields.b = 1.0;
    v20.fields.a = 1.0;
    *(UnityEngine_Color_o *)&v16 = BasicHelper__IndexValue_Color_(
                                     v15->static_fields->MessageColorsByCommandType,
                                     param->fields.type - 1,
                                     v20,
                                     (const MethodInfo_2F016C0 *)Method_BasicHelper_IndexValue_Color___);
    if ( !v14 )
LABEL_12:
      sub_1BCAA3C(v10, v11);
    UILabel__set_effectColor(v14, *(UnityEngine_Color_o *)&v16, 0LL);
  }
}