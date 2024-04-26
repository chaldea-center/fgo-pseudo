void __fastcall BattleBuffListObjectComponent___cctor(const MethodInfo *method)
{
  if ( (byte_43554B4 & 1) == 0 )
  {
    sub_B70694(&BattleBuffListObjectComponent_TypeInfo);
    byte_43554B4 = 1;
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v7; // x21
  struct UILabel_o *confLabel; // x8
  int32_t mHeight; // w22
  int32_t mWidth; // w23
  System_String_o *list; // x24
  BattleBuffListObjectComponent_c *v12; // x0
  int32_t v13; // w0
  UILabel_o *v14; // x23
  System_String_o *v15; // x21
  int32_t DEFAULT_FONT_SIZE; // w24
  int32_t v17; // w0
  struct UILabel_o *v18; // x8
  const MethodInfo *v19; // x2
  UILabel_o *atTurnLabel; // x21
  System_String_o *v21; // x0
  int32_t turn; // w8
  System_String_o *v23; // x22
  int v24; // w8
  __int64 v25; // x2
  Il2CppObject *v26; // x0
  UILabel_o *atCountLabel; // x21
  System_String_o *v28; // x22
  __int64 v29; // x2
  Il2CppObject *v30; // x0
  UILabel_o *v31; // x21
  int32_t count; // [xsp+8h] [xbp-38h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_43554B2 & 1) == 0 )
  {
    sub_B70694(&BattleBuffListObjectComponent_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_BuffMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_2428/*"BATTLE_BUFF_TURN"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_2422/*"BATTLE_BUFF_COUNT"*/);
    sub_B70694(&StringLiteral_2421/*"BATTLE_BUFF_BOOST"*/);
    byte_43554B2 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !buffData )
    goto LABEL_43;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_43;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    buffData->fields.buffId,
                                                                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !this->fields.buffIcon )
    goto LABEL_43;
  v7 = Master_WarQuestSelectionMaster;
  BattleServantBuffIconComponent__setIcon_20629452(this->fields.buffIcon, buffData, 0LL);
  if ( !v7 )
    goto LABEL_43;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.nameLabel;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v7->fields._MasterName_k__BackingField, 0LL);
  confLabel = this->fields.confLabel;
  if ( !confLabel )
    goto LABEL_43;
  mWidth = confLabel->fields.mWidth;
  mHeight = confLabel->fields.mHeight;
  list = (System_String_o *)v7->fields.list;
  v12 = BattleBuffListObjectComponent_TypeInfo;
  if ( (BYTE3(BattleBuffListObjectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffListObjectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffListObjectComponent_TypeInfo);
    confLabel = this->fields.confLabel;
    if ( !confLabel )
      goto LABEL_43;
    v12 = BattleBuffListObjectComponent_TypeInfo;
  }
  v13 = WrapControlText__CalcApproximateLabelHeight(
          list,
          mWidth,
          v12->static_fields->DEFAULT_FONT_SIZE,
          confLabel->fields.mSpacingY + v12->static_fields->DEFAULT_FONT_SIZE,
          2,
          0LL);
  v14 = this->fields.confLabel;
  v15 = (System_String_o *)v7->fields.list;
  DEFAULT_FONT_SIZE = BattleBuffListObjectComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE;
  v17 = UnityEngine_Mathf__Max_41127884(mHeight, v13, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)WrapControlText__textAdjust(
                                                                                    v14,
                                                                                    v15,
                                                                                    DEFAULT_FONT_SIZE,
                                                                                    DEFAULT_FONT_SIZE,
                                                                                    v17,
                                                                                    0LL);
  v18 = this->fields.confLabel;
  if ( !v18
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.atTurnLabel,
        this->fields._HeightOffset_k__BackingField = v18->fields.mHeight - mHeight,
        !Master_WarQuestSelectionMaster)
    || (UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.atCountLabel) == 0LL) )
  {
LABEL_43:
    sub_B7076C(Master_WarQuestSelectionMaster, v6);
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
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2428/*"BATTLE_BUFF_TURN"*/, 0LL);
      turn = buffData->fields.turn;
      v23 = v21;
      if ( turn + 1 >= 0 )
        v24 = turn + 1;
      else
        v24 = turn + 2;
      v33 = BattleUtility__FloorToInt((float)(v24 >> 1), 0LL);
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v25);
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                        v23,
                                                                                        v26,
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
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_2422/*"BATTLE_BUFF_COUNT"*/, 0LL);
      count = buffData->fields.count;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &count, v29);
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                        v28,
                                                                                        v30,
                                                                                        0LL);
      if ( !atCountLabel )
        goto LABEL_43;
      UILabel__set_text(atCountLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    }
  }
  if ( buffData->fields.turn <= 0 && buffData->fields.isBoost )
  {
    v31 = this->fields.atTurnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                      (System_String_o *)StringLiteral_2421/*"BATTLE_BUFF_BOOST"*/,
                                                                                      0LL);
    if ( v31 )
    {
      UILabel__set_text(v31, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
      goto LABEL_42;
    }
    goto LABEL_43;
  }
LABEL_42:
  BattleBuffListObjectComponent__SetInterval(this, buffData->fields._IntervalData_k__BackingField, v19);
}


void __fastcall BattleBuffListObjectComponent__SetInterval(
        BattleBuffListObjectComponent_o *this,
        BattleBuffData_IntervalData_o *interval,
        const MethodInfo *method)
{
  UnityEngine_Object_o *remainLabel; // x21
  UnityEngine_Object_o *intervalLabel; // x21
  __int64 v7; // x1
  UILabel_o *v8; // x0
  int32_t IntervalVal; // w0
  int v10; // w21
  System_String_o **v11; // x8
  System_String_o *v12; // x20
  UILabel_o *v13; // x22
  UILabel_o *v14; // x19
  System_String_o *v15; // x20
  __int64 v16; // x2
  Il2CppObject *v17; // x0
  int v18; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43554B3 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_2426/*"BATTLE_BUFF_INTERVAL_REMAIN"*/);
    sub_B70694(&StringLiteral_2427/*"BATTLE_BUFF_INTERVAL_TURN"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_2425/*"BATTLE_BUFF_INTERVAL_COUNT"*/);
    byte_43554B3 = 1;
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
      v8 = this->fields.remainLabel;
      if ( !v8 )
        goto LABEL_25;
      UILabel__set_text(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v8 = this->fields.intervalLabel;
      if ( !v8 )
        goto LABEL_25;
      UILabel__set_text(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( interval )
      {
        IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
        if ( IntervalVal >= 1 )
        {
          v10 = IntervalVal;
          if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
            v11 = (System_String_o **)&StringLiteral_2427/*"BATTLE_BUFF_INTERVAL_TURN"*/;
          else
            v11 = (System_String_o **)&StringLiteral_2425/*"BATTLE_BUFF_INTERVAL_COUNT"*/;
          v12 = *v11;
          v13 = this->fields.remainLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v8 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2426/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, 0LL);
          if ( v13 )
          {
            UILabel__set_text(v13, (System_String_o *)v8, 0LL);
            v14 = this->fields.intervalLabel;
            v15 = LocalizationManager__Get(v12, 0LL);
            v18 = v10;
            v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v16);
            v8 = (UILabel_o *)System_String__Format(v15, v17, 0LL);
            if ( v14 )
            {
              UILabel__set_text(v14, (System_String_o *)v8, 0LL);
              return;
            }
          }
LABEL_25:
          sub_B7076C(v8, v7);
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