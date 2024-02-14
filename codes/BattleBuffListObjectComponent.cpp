void __fastcall BattleBuffListObjectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4217E8C & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffListObjectComponent_TypeInfo, v1);
    byte_4217E8C = 1;
  }
  BattleBuffListObjectComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE = 17;
}


void __fastcall BattleBuffListObjectComponent___ctor(BattleBuffListObjectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleBuffListObjectComponent__SetData(
        BattleBuffListObjectComponent_o *this,
        BattleBuffData_ShowBuffData_o *buffData,
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
  __int64 v13; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x21
  struct UILabel_o *confLabel; // x8
  int32_t mHeight; // w22
  int32_t mWidth; // w23
  System_String_o *list; // x24
  BattleBuffListObjectComponent_c *v20; // x0
  int32_t v21; // w0
  UILabel_o *v22; // x23
  System_String_o *v23; // x21
  int32_t DEFAULT_FONT_SIZE; // w24
  int32_t v25; // w0
  struct UILabel_o *v26; // x8
  const MethodInfo *v27; // x2
  UILabel_o *atTurnLabel; // x21
  System_String_o *v29; // x0
  int32_t turn; // w8
  System_String_o *v31; // x22
  int v32; // w8
  Il2CppObject *v33; // x0
  UILabel_o *atCountLabel; // x21
  System_String_o *v35; // x22
  Il2CppObject *v36; // x0
  UILabel_o *v37; // x21
  int32_t count; // [xsp+8h] [xbp-38h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4217E8A & 1) == 0 )
  {
    sub_B0D8A4(&BattleBuffListObjectComponent_TypeInfo, buffData);
    sub_B0D8A4(&Method_DataManager_GetMaster_BuffMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v7);
    sub_B0D8A4(&int_TypeInfo, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_2392/*"BATTLE_BUFF_TURN"*/, v10);
    sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    sub_B0D8A4(&StringLiteral_2386/*"BATTLE_BUFF_COUNT"*/, v12);
    sub_B0D8A4(&StringLiteral_2385/*"BATTLE_BUFF_BOOST"*/, v13);
    byte_4217E8A = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !buffData )
    goto LABEL_43;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_43;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    buffData->fields.buffId,
                                                                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !this->fields.buffIcon )
    goto LABEL_43;
  v15 = Master_WarQuestSelectionMaster;
  BattleServantBuffIconComponent__setIcon_20694856(this->fields.buffIcon, buffData, 0LL);
  if ( !v15 )
    goto LABEL_43;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.nameLabel;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v15->fields._MasterName_k__BackingField, 0LL);
  confLabel = this->fields.confLabel;
  if ( !confLabel )
    goto LABEL_43;
  mWidth = confLabel->fields.mWidth;
  mHeight = confLabel->fields.mHeight;
  list = (System_String_o *)v15->fields.list;
  v20 = BattleBuffListObjectComponent_TypeInfo;
  if ( (BYTE3(BattleBuffListObjectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffListObjectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffListObjectComponent_TypeInfo);
    confLabel = this->fields.confLabel;
    if ( !confLabel )
      goto LABEL_43;
    v20 = BattleBuffListObjectComponent_TypeInfo;
  }
  v21 = WrapControlText__CalcApproximateLabelHeight(
          list,
          mWidth,
          v20->static_fields->DEFAULT_FONT_SIZE,
          confLabel->fields.mSpacingY + v20->static_fields->DEFAULT_FONT_SIZE,
          2,
          0LL);
  v22 = this->fields.confLabel;
  v23 = (System_String_o *)v15->fields.list;
  DEFAULT_FONT_SIZE = BattleBuffListObjectComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE;
  v25 = UnityEngine_Mathf__Max_40819140(mHeight, v21, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)WrapControlText__textAdjust(
                                                                                    v22,
                                                                                    v23,
                                                                                    DEFAULT_FONT_SIZE,
                                                                                    DEFAULT_FONT_SIZE,
                                                                                    v25,
                                                                                    0LL);
  v26 = this->fields.confLabel;
  if ( !v26
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.atTurnLabel,
        this->fields._HeightOffset_k__BackingField = v26->fields.mHeight - mHeight,
        !Master_WarQuestSelectionMaster)
    || (UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.atCountLabel) == 0LL) )
  {
LABEL_43:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !buffData->fields.isHideParam )
  {
    if ( buffData->fields.turn >= 1 )
    {
      atTurnLabel = this->fields.atTurnLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v29 = LocalizationManager__Get((System_String_o *)StringLiteral_2392/*"BATTLE_BUFF_TURN"*/, 0LL);
      turn = buffData->fields.turn;
      v31 = v29;
      if ( turn + 1 >= 0 )
        v32 = turn + 1;
      else
        v32 = turn + 2;
      v39 = BattleUtility__FloorToInt((float)(v32 >> 1), 0LL);
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                        v31,
                                                                                        v33,
                                                                                        0LL);
      if ( !atTurnLabel )
        goto LABEL_43;
      UILabel__set_text(atTurnLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    }
    if ( buffData->fields.count >= 1 )
    {
      atCountLabel = this->fields.atCountLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v35 = LocalizationManager__Get((System_String_o *)StringLiteral_2386/*"BATTLE_BUFF_COUNT"*/, 0LL);
      count = buffData->fields.count;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &count);
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                        v35,
                                                                                        v36,
                                                                                        0LL);
      if ( !atCountLabel )
        goto LABEL_43;
      UILabel__set_text(atCountLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    }
  }
  if ( buffData->fields.turn <= 0 && buffData->fields.isBoost )
  {
    v37 = this->fields.atTurnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                      (System_String_o *)StringLiteral_2385/*"BATTLE_BUFF_BOOST"*/,
                                                                                      0LL);
    if ( v37 )
    {
      UILabel__set_text(v37, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
      goto LABEL_42;
    }
    goto LABEL_43;
  }
LABEL_42:
  BattleBuffListObjectComponent__SetInterval(this, buffData->fields._IntervalData_k__BackingField, v27);
}


void __fastcall BattleBuffListObjectComponent__SetInterval(
        BattleBuffListObjectComponent_o *this,
        BattleBuffData_IntervalData_o *interval,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *remainLabel; // x21
  UnityEngine_Object_o *intervalLabel; // x21
  UILabel_o *v13; // x0
  int32_t IntervalVal; // w0
  int v15; // w21
  System_String_o **v16; // x8
  System_String_o *v17; // x20
  UILabel_o *v18; // x22
  UILabel_o *v19; // x19
  System_String_o *v20; // x20
  Il2CppObject *v21; // x0
  int v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4217E8B & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, interval);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_2390/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, v7);
    sub_B0D8A4(&StringLiteral_2391/*"BATTLE_BUFF_INTERVAL_TURN"*/, v8);
    sub_B0D8A4(&StringLiteral_1/*""*/, v9);
    sub_B0D8A4(&StringLiteral_2389/*"BATTLE_BUFF_INTERVAL_COUNT"*/, v10);
    byte_4217E8B = 1;
  }
  remainLabel = (UnityEngine_Object_o *)this->fields.remainLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(remainLabel, 0LL, 0LL) )
  {
    intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(intervalLabel, 0LL, 0LL) )
    {
      v13 = this->fields.remainLabel;
      if ( !v13 )
        goto LABEL_25;
      UILabel__set_text(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v13 = this->fields.intervalLabel;
      if ( !v13 )
        goto LABEL_25;
      UILabel__set_text(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( interval )
      {
        IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
        if ( IntervalVal >= 1 )
        {
          v15 = IntervalVal;
          if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
            v16 = (System_String_o **)&StringLiteral_2391/*"BATTLE_BUFF_INTERVAL_TURN"*/;
          else
            v16 = (System_String_o **)&StringLiteral_2389/*"BATTLE_BUFF_INTERVAL_COUNT"*/;
          v17 = *v16;
          v18 = this->fields.remainLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v13 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2390/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, 0LL);
          if ( v18 )
          {
            UILabel__set_text(v18, (System_String_o *)v13, 0LL);
            v19 = this->fields.intervalLabel;
            v20 = LocalizationManager__Get(v17, 0LL);
            v22 = v15;
            v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
            v13 = (UILabel_o *)System_String__Format(v20, v21, 0LL);
            if ( v19 )
            {
              UILabel__set_text(v19, (System_String_o *)v13, 0LL);
              return;
            }
          }
LABEL_25:
          sub_B0D97C(v13);
        }
      }
    }
  }
}


int32_t __fastcall BattleBuffListObjectComponent__get_HeightOffset(
        BattleBuffListObjectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._HeightOffset_k__BackingField;
}


void __fastcall BattleBuffListObjectComponent__set_HeightOffset(
        BattleBuffListObjectComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._HeightOffset_k__BackingField = value;
}