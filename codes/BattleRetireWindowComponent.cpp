void __fastcall BattleRetireWindowComponent___ctor(BattleRetireWindowComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleRetireWindowComponent__CallbackConfirmDialog(
        BattleRetireWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_42B0309 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B0309 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields._data_k__BackingField) == 0LL) )
  {
    sub_B52A5C(Instance, v5);
  }
  BattleData__UpdateContinueItemInfo((BattleData_o *)Instance, 0LL);
  BattleRetireWindowComponent__Open(this, 0LL, v6);
  this->fields.isShowDeadLineDialog = 1;
}


void __fastcall BattleRetireWindowComponent__Open(
        BattleRetireWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *continueItemRoot; // x0
  struct BattleData_o *data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x8
  QuestEntity_o *v8; // x21
  bool HasFlag; // w0
  UILabel_o *v10; // x21
  __int64 *v11; // x8
  UILabel_o *continueCount; // x21
  UISprite_o *continueItemCountSpr; // x21
  int32_t ContinueItemImageId; // w22
  UILabel_o *checkGiveUpLabel; // x21
  int32_t ContinueItemNum; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B030A & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_2530/*"BATTLE_RETIRE_CHECKSTR"*/);
    sub_B52984(&StringLiteral_2531/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/);
    sub_B52984(&StringLiteral_969/*"0"*/);
    byte_42B030A = 1;
  }
  ContinueItemNum = 0;
  continueItemRoot = this->fields.continueItemRoot;
  if ( !continueItemRoot )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(continueItemRoot, 0, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.continueCount;
  if ( !continueItemRoot )
    goto LABEL_62;
  UILabel__set_text((UILabel_o *)continueItemRoot, (System_String_o *)StringLiteral_969/*"0"*/, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.giveUpTitleSpr;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)continueItemRoot,
                                                   0LL);
  if ( !continueItemRoot )
    goto LABEL_62;
  v17.fields.y = 77.0;
  v17.fields.x = 0.0;
  v17.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v17, 0LL);
  continueItemRoot = this->fields.okBtn;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(continueItemRoot, 0LL);
  if ( !continueItemRoot )
    goto LABEL_62;
  v18.fields.z = 0.0;
  v18.fields.x = 193.0;
  v18.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v18, 0LL);
  continueItemRoot = this->fields.cancelBtn;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(continueItemRoot, 0LL);
  if ( !continueItemRoot )
    goto LABEL_62;
  v19.fields.z = 0.0;
  v19.fields.y = -72.0;
  v19.fields.x = -193.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v19, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.giveUpBg;
  if ( !continueItemRoot )
    goto LABEL_62;
  UIWidget__set_height((UIWidget_o *)continueItemRoot, 239, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.continueItemDeadLineLabel;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)continueItemRoot, 0LL);
  if ( !continueItemRoot )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(continueItemRoot, 0, 0LL);
  continueItemRoot = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)continueItemRoot,
                                                   0LL);
  if ( !continueItemRoot )
    goto LABEL_62;
  v20.fields.y = 6.0;
  v20.fields.x = 0.0;
  v20.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v20, 0LL);
  this->fields.EnableContinueItem = 0;
  continueItemRoot = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)continueItemRoot,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  data_k__BackingField = this->fields._data_k__BackingField;
  if ( !data_k__BackingField )
    goto LABEL_62;
  battle_ent = data_k__BackingField->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_62;
  if ( !continueItemRoot )
    goto LABEL_62;
  continueItemRoot = (UnityEngine_GameObject_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   (DataMasterBase_WarMaster__WarEntity__int__o *)continueItemRoot,
                                                   battle_ent->fields.questId,
                                                   (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !this->fields._data_k__BackingField )
    goto LABEL_62;
  v8 = (QuestEntity_o *)continueItemRoot;
  continueItemRoot = (UnityEngine_GameObject_o *)BattleData__EnableContinueItem(this->fields._data_k__BackingField, 0LL);
  if ( ((unsigned __int8)continueItemRoot & 1) != 0 )
  {
    continueItemRoot = (UnityEngine_GameObject_o *)this->fields._data_k__BackingField;
    if ( !continueItemRoot )
      goto LABEL_62;
    continueItemRoot = (UnityEngine_GameObject_o *)BattleData__GetContinueItemNum((BattleData_o *)continueItemRoot, 0LL);
    if ( (int)continueItemRoot >= 1 )
    {
      continueItemRoot = (UnityEngine_GameObject_o *)this->fields._data_k__BackingField;
      if ( !continueItemRoot )
        goto LABEL_62;
      continueItemRoot = (UnityEngine_GameObject_o *)BattleData__isNgContinue((BattleData_o *)continueItemRoot, 0LL);
      if ( ((unsigned __int8)continueItemRoot & 1) == 0 )
      {
        continueItemRoot = this->fields.continueItemRoot;
        if ( continueItemRoot )
        {
          UnityEngine_GameObject__SetActive(continueItemRoot, 1, 0LL);
          continueItemRoot = (UnityEngine_GameObject_o *)this->fields._data_k__BackingField;
          if ( continueItemRoot )
          {
            continueCount = this->fields.continueCount;
            ContinueItemNum = BattleData__GetContinueItemNum((BattleData_o *)continueItemRoot, 0LL);
            continueItemRoot = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&ContinueItemNum, 0LL);
            if ( continueCount )
            {
              UILabel__set_text(continueCount, (System_String_o *)continueItemRoot, 0LL);
              continueItemRoot = (UnityEngine_GameObject_o *)this->fields._data_k__BackingField;
              if ( continueItemRoot )
              {
                continueItemCountSpr = this->fields.continueItemCountSpr;
                ContinueItemImageId = BattleData__GetContinueItemImageId((BattleData_o *)continueItemRoot, 0LL);
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetItem(continueItemCountSpr, ContinueItemImageId, 0LL);
                continueItemRoot = (UnityEngine_GameObject_o *)this->fields.giveUpTitleSpr;
                if ( continueItemRoot )
                {
                  continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)continueItemRoot,
                                                                   0LL);
                  if ( continueItemRoot )
                  {
                    v21.fields.y = 97.0;
                    v21.fields.x = 0.0;
                    v21.fields.z = 0.0;
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v21, 0LL);
                    continueItemRoot = this->fields.okBtn;
                    if ( continueItemRoot )
                    {
                      continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                       continueItemRoot,
                                                                       0LL);
                      if ( continueItemRoot )
                      {
                        v22.fields.z = 0.0;
                        v22.fields.x = 193.0;
                        v22.fields.y = -92.0;
                        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)continueItemRoot, v22, 0LL);
                        continueItemRoot = this->fields.cancelBtn;
                        if ( continueItemRoot )
                        {
                          continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                                           continueItemRoot,
                                                                           0LL);
                          if ( continueItemRoot )
                          {
                            v23.fields.z = 0.0;
                            v23.fields.x = -193.0;
                            v23.fields.y = -92.0;
                            UnityEngine_Transform__set_localPosition(
                              (UnityEngine_Transform_o *)continueItemRoot,
                              v23,
                              0LL);
                            continueItemRoot = (UnityEngine_GameObject_o *)this->fields.giveUpBg;
                            if ( continueItemRoot )
                            {
                              UIWidget__set_height((UIWidget_o *)continueItemRoot, 279, 0LL);
                              continueItemRoot = (UnityEngine_GameObject_o *)this->fields.checkGiveUpLabel;
                              if ( continueItemRoot )
                              {
                                continueItemRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                                                 (UnityEngine_Component_o *)continueItemRoot,
                                                                                 0LL);
                                if ( continueItemRoot )
                                {
                                  v24.fields.y = 26.0;
                                  v24.fields.x = 0.0;
                                  v24.fields.z = 0.0;
                                  UnityEngine_Transform__set_localPosition(
                                    (UnityEngine_Transform_o *)continueItemRoot,
                                    v24,
                                    0LL);
                                  this->fields.EnableContinueItem = 1;
                                  checkGiveUpLabel = this->fields.checkGiveUpLabel;
                                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  }
                                  continueItemRoot = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                                   (System_String_o *)StringLiteral_2530/*"BATTLE_RETIRE_CHECKSTR"*/,
                                                                                   0LL);
                                  if ( checkGiveUpLabel )
                                  {
                                    UILabel__set_text(checkGiveUpLabel, (System_String_o *)continueItemRoot, 0LL);
                                    continueItemRoot = (UnityEngine_GameObject_o *)this->fields.continueItemDeadLineLabel;
                                    if ( continueItemRoot )
                                    {
                                      continueItemRoot = UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)continueItemRoot,
                                                           0LL);
                                      if ( continueItemRoot )
                                      {
                                        UnityEngine_GameObject__SetActive(continueItemRoot, 1, 0LL);
                                        goto LABEL_38;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_62:
        sub_B52A5C(continueItemRoot, call);
      }
    }
  }
  if ( !v8 )
    goto LABEL_62;
  HasFlag = QuestEntity__HasFlag(v8, 0x40000000LL, 0LL);
  v10 = this->fields.checkGiveUpLabel;
  if ( HasFlag )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = &StringLiteral_2531/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = &StringLiteral_2530/*"BATTLE_RETIRE_CHECKSTR"*/;
  }
  continueItemRoot = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v11, 0LL);
  if ( !v10 )
    goto LABEL_62;
  UILabel__set_text(v10, (System_String_o *)continueItemRoot, 0LL);
LABEL_38:
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleRetireWindowComponent__Update(BattleRetireWindowComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *data_k__BackingField; // x20
  UILabel_o *continueItemDeadLineLabel; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  int64_t ContinueDeadLine; // x0
  Il2CppObject *RestTime; // x0
  int64_t v10; // x20
  CommonUI_o *Instance; // x20
  System_String_o *v12; // x21
  ErrorDialog_ClickDelegate_o *v13; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-40h]

  if ( (byte_42B0308 & 1) == 0 )
  {
    sub_B52984(&Method_BattleRetireWindowComponent_CallbackConfirmDialog__);
    sub_B52984(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_2430/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/);
    sub_B52984(&StringLiteral_2429/*"BATTLE_CONTINUE_ITEM_END_TIME"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B0308 = 1;
  }
  data_k__BackingField = (UnityEngine_Object_o *)this->fields._data_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(data_k__BackingField, 0LL, 0LL) && this->fields.EnableContinueItem )
  {
    continueItemDeadLineLabel = this->fields.continueItemDeadLineLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2430/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, 0LL);
    if ( !this->fields._data_k__BackingField )
      goto LABEL_25;
    v7 = v5;
    ContinueDeadLine = BattleData__GetContinueDeadLine(this->fields._data_k__BackingField, 0LL);
    RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
    v5 = System_String__Format(v7, RestTime, 0LL);
    if ( !continueItemDeadLineLabel )
      goto LABEL_25;
    UILabel__set_text(continueItemDeadLineLabel, v5, 0LL);
    v5 = (System_String_o *)this->fields._data_k__BackingField;
    if ( !v5 )
      goto LABEL_25;
    v10 = BattleData__GetContinueDeadLine((BattleData_o *)v5, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( v10 < NetworkManager__getTime(0LL) && !this->fields.isShowDeadLineDialog )
    {
      this->fields.isShowDeadLineDialog = 1;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_2429/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
      v13 = (ErrorDialog_ClickDelegate_o *)sub_B52A54(ErrorDialog_ClickDelegate_TypeInfo);
      ErrorDialog_ClickDelegate___ctor(
        v13,
        (Il2CppObject *)this,
        Method_BattleRetireWindowComponent_CallbackConfirmDialog__,
        0LL);
      if ( Instance )
      {
        effectDistance.fields.value = 0LL;
        *(_DWORD *)&effectDistance.fields.has_value = 0;
        CommonUI__OpenWarningDialog(
          Instance,
          (System_String_o *)StringLiteral_1/*""*/,
          v12,
          v13,
          0,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        return;
      }
LABEL_25:
      sub_B52A5C(v5, v6);
    }
  }
}


System_String_o *__fastcall BattleRetireWindowComponent__get_closeBtnPath(
        BattleRetireWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B030B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17101/*"btn_cancel"*/);
    byte_42B030B = 1;
  }
  return (System_String_o *)StringLiteral_17101/*"btn_cancel"*/;
}


BattleData_o *__fastcall BattleRetireWindowComponent__get_data(
        BattleRetireWindowComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._data_k__BackingField;
}


void __fastcall BattleRetireWindowComponent__set_data(
        BattleRetireWindowComponent_o *this,
        BattleData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._data_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._data_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}