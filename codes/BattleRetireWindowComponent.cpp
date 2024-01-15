void __fastcall BattleRetireWindowComponent___ctor(BattleRetireWindowComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRetireWindowComponent__CallbackConfirmDialog(
        BattleRetireWindowComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  BattleData_o *data_k__BackingField; // x0
  const MethodInfo *v6; // x2

  if ( (byte_40FA40F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_40FA40F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseConfirmDialog(Instance, 0LL), (data_k__BackingField = this->fields._data_k__BackingField) == 0LL) )
  {
    sub_B170D4();
  }
  BattleData__UpdateContinueItemInfo(data_k__BackingField, 0LL);
  BattleRetireWindowComponent__Open(this, 0LL, v6);
  this->fields.isShowDeadLineDialog = 1;
}


void __fastcall BattleRetireWindowComponent__Open(
        BattleRetireWindowComponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *continueItemRoot; // x0
  UILabel_o *continueCount; // x0
  UnityEngine_Component_o *giveUpTitleSpr; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *okBtn; // x0
  UnityEngine_Transform_o *v17; // x0
  UnityEngine_GameObject_o *cancelBtn; // x0
  UnityEngine_Transform_o *v19; // x0
  UIWidget_o *giveUpBg; // x0
  UnityEngine_Component_o *continueItemDeadLineLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *checkGiveUpLabel; // x0
  UnityEngine_Transform_o *v24; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct BattleData_o *data_k__BackingField; // x8
  struct BattleEntity_o *battle_ent; // x8
  WarEntity_o *Entity; // x0
  QuestEntity_o *v30; // x21
  BattleData_o *v31; // x0
  BattleData_o *v32; // x0
  bool HasFlag; // w0
  UILabel_o *v34; // x21
  __int64 *v35; // x8
  System_String_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  BattleData_o *v38; // x0
  UILabel_o *v39; // x21
  System_String_o *v40; // x0
  BattleData_o *v41; // x0
  UISprite_o *continueItemCountSpr; // x21
  int32_t ContinueItemImageId; // w22
  UnityEngine_Component_o *v44; // x0
  UnityEngine_Transform_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_Transform_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_Transform_o *v49; // x0
  UIWidget_o *v50; // x0
  UnityEngine_Component_o *v51; // x0
  UnityEngine_Transform_o *v52; // x0
  UILabel_o *v53; // x21
  System_String_o *v54; // x0
  UnityEngine_Component_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  int32_t ContinueItemNum; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA410 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, call);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&StringLiteral_2488/*"BATTLE_RETIRE_CHECKSTR"*/, v9);
    sub_B16FFC(&StringLiteral_2489/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/, v10);
    sub_B16FFC(&StringLiteral_951/*"0"*/, v11);
    byte_40FA410 = 1;
  }
  ContinueItemNum = 0;
  continueItemRoot = this->fields.continueItemRoot;
  if ( !continueItemRoot )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(continueItemRoot, 0, 0LL);
  continueCount = this->fields.continueCount;
  if ( !continueCount )
    goto LABEL_62;
  UILabel__set_text(continueCount, (System_String_o *)StringLiteral_951/*"0"*/, 0LL);
  giveUpTitleSpr = (UnityEngine_Component_o *)this->fields.giveUpTitleSpr;
  if ( !giveUpTitleSpr )
    goto LABEL_62;
  transform = UnityEngine_Component__get_transform(giveUpTitleSpr, 0LL);
  if ( !transform )
    goto LABEL_62;
  v58.fields.y = 77.0;
  v58.fields.x = 0.0;
  v58.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(transform, v58, 0LL);
  okBtn = this->fields.okBtn;
  if ( !okBtn )
    goto LABEL_62;
  v17 = UnityEngine_GameObject__get_transform(okBtn, 0LL);
  if ( !v17 )
    goto LABEL_62;
  v59.fields.z = 0.0;
  v59.fields.x = 193.0;
  v59.fields.y = -72.0;
  UnityEngine_Transform__set_localPosition(v17, v59, 0LL);
  cancelBtn = this->fields.cancelBtn;
  if ( !cancelBtn )
    goto LABEL_62;
  v19 = UnityEngine_GameObject__get_transform(cancelBtn, 0LL);
  if ( !v19 )
    goto LABEL_62;
  v60.fields.z = 0.0;
  v60.fields.y = -72.0;
  v60.fields.x = -193.0;
  UnityEngine_Transform__set_localPosition(v19, v60, 0LL);
  giveUpBg = (UIWidget_o *)this->fields.giveUpBg;
  if ( !giveUpBg )
    goto LABEL_62;
  UIWidget__set_height(giveUpBg, 239, 0LL);
  continueItemDeadLineLabel = (UnityEngine_Component_o *)this->fields.continueItemDeadLineLabel;
  if ( !continueItemDeadLineLabel )
    goto LABEL_62;
  gameObject = UnityEngine_Component__get_gameObject(continueItemDeadLineLabel, 0LL);
  if ( !gameObject )
    goto LABEL_62;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  checkGiveUpLabel = (UnityEngine_Component_o *)this->fields.checkGiveUpLabel;
  if ( !checkGiveUpLabel )
    goto LABEL_62;
  v24 = UnityEngine_Component__get_transform(checkGiveUpLabel, 0LL);
  if ( !v24 )
    goto LABEL_62;
  v61.fields.y = 6.0;
  v61.fields.x = 0.0;
  v61.fields.z = 0.0;
  UnityEngine_Transform__set_localPosition(v24, v61, 0LL);
  this->fields.EnableContinueItem = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  data_k__BackingField = this->fields._data_k__BackingField;
  if ( !data_k__BackingField )
    goto LABEL_62;
  battle_ent = data_k__BackingField->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_62;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_62;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             battle_ent->fields.questId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( !this->fields._data_k__BackingField )
    goto LABEL_62;
  v30 = (QuestEntity_o *)Entity;
  if ( BattleData__EnableContinueItem(this->fields._data_k__BackingField, 0LL) )
  {
    v31 = this->fields._data_k__BackingField;
    if ( !v31 )
      goto LABEL_62;
    if ( BattleData__GetContinueItemNum(v31, 0LL) >= 1 )
    {
      v32 = this->fields._data_k__BackingField;
      if ( !v32 )
        goto LABEL_62;
      if ( !BattleData__isNgContinue(v32, 0LL) )
      {
        v37 = this->fields.continueItemRoot;
        if ( v37 )
        {
          UnityEngine_GameObject__SetActive(v37, 1, 0LL);
          v38 = this->fields._data_k__BackingField;
          if ( v38 )
          {
            v39 = this->fields.continueCount;
            ContinueItemNum = BattleData__GetContinueItemNum(v38, 0LL);
            v40 = System_Int32__ToString((int32_t)&ContinueItemNum, 0LL);
            if ( v39 )
            {
              UILabel__set_text(v39, v40, 0LL);
              v41 = this->fields._data_k__BackingField;
              if ( v41 )
              {
                continueItemCountSpr = this->fields.continueItemCountSpr;
                ContinueItemImageId = BattleData__GetContinueItemImageId(v41, 0LL);
                if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !AtlasManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                }
                AtlasManager__SetItem(continueItemCountSpr, ContinueItemImageId, 0LL);
                v44 = (UnityEngine_Component_o *)this->fields.giveUpTitleSpr;
                if ( v44 )
                {
                  v45 = UnityEngine_Component__get_transform(v44, 0LL);
                  if ( v45 )
                  {
                    v62.fields.y = 97.0;
                    v62.fields.x = 0.0;
                    v62.fields.z = 0.0;
                    UnityEngine_Transform__set_localPosition(v45, v62, 0LL);
                    v46 = this->fields.okBtn;
                    if ( v46 )
                    {
                      v47 = UnityEngine_GameObject__get_transform(v46, 0LL);
                      if ( v47 )
                      {
                        v63.fields.z = 0.0;
                        v63.fields.x = 193.0;
                        v63.fields.y = -92.0;
                        UnityEngine_Transform__set_localPosition(v47, v63, 0LL);
                        v48 = this->fields.cancelBtn;
                        if ( v48 )
                        {
                          v49 = UnityEngine_GameObject__get_transform(v48, 0LL);
                          if ( v49 )
                          {
                            v64.fields.z = 0.0;
                            v64.fields.x = -193.0;
                            v64.fields.y = -92.0;
                            UnityEngine_Transform__set_localPosition(v49, v64, 0LL);
                            v50 = (UIWidget_o *)this->fields.giveUpBg;
                            if ( v50 )
                            {
                              UIWidget__set_height(v50, 279, 0LL);
                              v51 = (UnityEngine_Component_o *)this->fields.checkGiveUpLabel;
                              if ( v51 )
                              {
                                v52 = UnityEngine_Component__get_transform(v51, 0LL);
                                if ( v52 )
                                {
                                  v65.fields.y = 26.0;
                                  v65.fields.x = 0.0;
                                  v65.fields.z = 0.0;
                                  UnityEngine_Transform__set_localPosition(v52, v65, 0LL);
                                  this->fields.EnableContinueItem = 1;
                                  v53 = this->fields.checkGiveUpLabel;
                                  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                                    && !LocalizationManager_TypeInfo->_2.cctor_finished )
                                  {
                                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                  }
                                  v54 = LocalizationManager__Get((System_String_o *)StringLiteral_2488/*"BATTLE_RETIRE_CHECKSTR"*/, 0LL);
                                  if ( v53 )
                                  {
                                    UILabel__set_text(v53, v54, 0LL);
                                    v55 = (UnityEngine_Component_o *)this->fields.continueItemDeadLineLabel;
                                    if ( v55 )
                                    {
                                      v56 = UnityEngine_Component__get_gameObject(v55, 0LL);
                                      if ( v56 )
                                      {
                                        UnityEngine_GameObject__SetActive(v56, 1, 0LL);
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
        sub_B170D4();
      }
    }
  }
  if ( !v30 )
    goto LABEL_62;
  HasFlag = QuestEntity__HasFlag(v30, 0x40000000LL, 0LL);
  v34 = this->fields.checkGiveUpLabel;
  if ( HasFlag )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v35 = &StringLiteral_2489/*"BATTLE_RETIRE_CONSUME_COST_CHECKSTR"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v35 = &StringLiteral_2488/*"BATTLE_RETIRE_CHECKSTR"*/;
  }
  v36 = LocalizationManager__Get((System_String_o *)*v35, 0LL);
  if ( !v34 )
    goto LABEL_62;
  UILabel__set_text(v34, v36, 0LL);
LABEL_38:
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleRetireWindowComponent__Update(BattleRetireWindowComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *data_k__BackingField; // x20
  UILabel_o *continueItemDeadLineLabel; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x21
  int64_t ContinueDeadLine; // x0
  Il2CppObject *RestTime; // x0
  System_String_o *v17; // x0
  BattleData_o *v18; // x0
  int64_t v19; // x20
  CommonUI_o *Instance; // x20
  System_String_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  ErrorDialog_ClickDelegate_o *v26; // x22
  System_Nullable_Vector2__o effectDistance; // [xsp+0h] [xbp-40h]

  if ( (byte_40FA40E & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleRetireWindowComponent_CallbackConfirmDialog__, method);
    sub_B16FFC(&ErrorDialog_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&LocalizationManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_2389/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, v8);
    sub_B16FFC(&StringLiteral_2388/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40FA40E = 1;
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
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_2389/*"BATTLE_CONTINUE_ITEM_GIVEUP"*/, 0LL);
    if ( !this->fields._data_k__BackingField )
      goto LABEL_25;
    v14 = v13;
    ContinueDeadLine = BattleData__GetContinueDeadLine(this->fields._data_k__BackingField, 0LL);
    RestTime = (Il2CppObject *)LocalizationManager__GetRestTime(ContinueDeadLine, 0LL);
    v17 = System_String__Format(v14, RestTime, 0LL);
    if ( !continueItemDeadLineLabel )
      goto LABEL_25;
    UILabel__set_text(continueItemDeadLineLabel, v17, 0LL);
    v18 = this->fields._data_k__BackingField;
    if ( !v18 )
      goto LABEL_25;
    v19 = BattleData__GetContinueDeadLine(v18, 0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( v19 < NetworkManager__getTime(0LL) && !this->fields.isShowDeadLineDialog )
    {
      this->fields.isShowDeadLineDialog = 1;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2388/*"BATTLE_CONTINUE_ITEM_END_TIME"*/, 0LL);
      v26 = (ErrorDialog_ClickDelegate_o *)sub_B170CC(ErrorDialog_ClickDelegate_TypeInfo, v22, v23, v24, v25);
      ErrorDialog_ClickDelegate___ctor(
        v26,
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
          v21,
          v26,
          0,
          0,
          -1.0,
          1,
          effectDistance,
          0LL);
        return;
      }
LABEL_25:
      sub_B170D4();
    }
  }
}


System_String_o *__fastcall BattleRetireWindowComponent__get_closeBtnPath(
        BattleRetireWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FA411 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16917/*"btn_cancel"*/, method);
    byte_40FA411 = 1;
  }
  return (System_String_o *)StringLiteral_16917/*"btn_cancel"*/;
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._data_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}