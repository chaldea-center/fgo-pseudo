void __fastcall BattleBuffListObjectComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC1B4 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffListObjectComponent_TypeInfo, v1, v2, v3);
    byte_42EC1B4 = 1;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v34; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v35; // x21
  struct UILabel_o *confLabel; // x8
  int32_t mHeight; // w22
  int32_t mWidth; // w23
  System_String_o *list; // x24
  BattleBuffListObjectComponent_c *v40; // x0
  int32_t v41; // w0
  UILabel_o *v42; // x23
  System_String_o *v43; // x21
  int32_t DEFAULT_FONT_SIZE; // w24
  int32_t v45; // w0
  struct UILabel_o *v46; // x8
  const MethodInfo *v47; // x2
  UILabel_o *atTurnLabel; // x21
  System_String_o *v49; // x0
  int32_t turn; // w8
  System_String_o *v51; // x22
  int v52; // w8
  Il2CppObject *v53; // x0
  UILabel_o *atCountLabel; // x21
  System_String_o *v55; // x22
  Il2CppObject *v56; // x0
  UILabel_o *v57; // x21
  int32_t count; // [xsp+8h] [xbp-38h] BYREF
  int32_t v59; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EC1B2 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBuffListObjectComponent_TypeInfo, (_DWORD)buffData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_BuffMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&int_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_2421/*"BATTLE_BUFF_TURN"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_1/*""*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_2415/*"BATTLE_BUFF_COUNT"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_2414/*"BATTLE_BUFF_BOOST"*/, v30, v31, v32);
    byte_42EC1B2 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !buffData )
    goto LABEL_43;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_43;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    buffData->fields.buffId,
                                                                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !this->fields.buffIcon )
    goto LABEL_43;
  v35 = Master_WarQuestSelectionMaster;
  BattleServantBuffIconComponent__setIcon_21093468(this->fields.buffIcon, buffData, 0LL);
  if ( !v35 )
    goto LABEL_43;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.nameLabel;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, v35->fields._MasterName_k__BackingField, 0LL);
  confLabel = this->fields.confLabel;
  if ( !confLabel )
    goto LABEL_43;
  mWidth = confLabel->fields.mWidth;
  mHeight = confLabel->fields.mHeight;
  list = (System_String_o *)v35->fields.list;
  v40 = BattleBuffListObjectComponent_TypeInfo;
  if ( (BYTE3(BattleBuffListObjectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffListObjectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffListObjectComponent_TypeInfo);
    confLabel = this->fields.confLabel;
    if ( !confLabel )
      goto LABEL_43;
    v40 = BattleBuffListObjectComponent_TypeInfo;
  }
  v41 = WrapControlText__CalcApproximateLabelHeight(
          list,
          mWidth,
          v40->static_fields->DEFAULT_FONT_SIZE,
          confLabel->fields.mSpacingY + v40->static_fields->DEFAULT_FONT_SIZE,
          2,
          0LL);
  v42 = this->fields.confLabel;
  v43 = (System_String_o *)v35->fields.list;
  DEFAULT_FONT_SIZE = BattleBuffListObjectComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE;
  v45 = UnityEngine_Mathf__Max_41629432(mHeight, v41, 0LL);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)WrapControlText__textAdjust(
                                                                                    v42,
                                                                                    v43,
                                                                                    DEFAULT_FONT_SIZE,
                                                                                    DEFAULT_FONT_SIZE,
                                                                                    v45,
                                                                                    0LL);
  v46 = this->fields.confLabel;
  if ( !v46
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.atTurnLabel,
        this->fields._HeightOffset_k__BackingField = v46->fields.mHeight - mHeight,
        !Master_WarQuestSelectionMaster)
    || (UILabel__set_text((UILabel_o *)Master_WarQuestSelectionMaster, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)this->fields.atCountLabel) == 0LL) )
  {
LABEL_43:
    sub_B5D69C(Master_WarQuestSelectionMaster, v34);
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
      v49 = LocalizationManager__Get((System_String_o *)StringLiteral_2421/*"BATTLE_BUFF_TURN"*/, 0LL);
      turn = buffData->fields.turn;
      v51 = v49;
      if ( turn + 1 >= 0 )
        v52 = turn + 1;
      else
        v52 = turn + 2;
      v59 = BattleUtility__FloorToInt((float)(v52 >> 1), 0LL);
      v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                        v51,
                                                                                        v53,
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
      v55 = LocalizationManager__Get((System_String_o *)StringLiteral_2415/*"BATTLE_BUFF_COUNT"*/, 0LL);
      count = buffData->fields.count;
      v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &count);
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_String__Format(
                                                                                        v55,
                                                                                        v56,
                                                                                        0LL);
      if ( !atCountLabel )
        goto LABEL_43;
      UILabel__set_text(atCountLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    }
  }
  if ( buffData->fields.turn <= 0 && buffData->fields.isBoost )
  {
    v57 = this->fields.atTurnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)LocalizationManager__Get(
                                                                                      (System_String_o *)StringLiteral_2414/*"BATTLE_BUFF_BOOST"*/,
                                                                                      0LL);
    if ( v57 )
    {
      UILabel__set_text(v57, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
      goto LABEL_42;
    }
    goto LABEL_43;
  }
LABEL_42:
  BattleBuffListObjectComponent__SetInterval(this, buffData->fields._IntervalData_k__BackingField, v47);
}


void __fastcall BattleBuffListObjectComponent__SetInterval(
        BattleBuffListObjectComponent_o *this,
        BattleBuffData_IntervalData_o *interval,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  UnityEngine_Object_o *remainLabel; // x21
  UnityEngine_Object_o *intervalLabel; // x21
  __int64 v26; // x1
  UILabel_o *v27; // x0
  int32_t IntervalVal; // w0
  int v29; // w21
  System_String_o **v30; // x8
  System_String_o *v31; // x20
  UILabel_o *v32; // x22
  UILabel_o *v33; // x19
  System_String_o *v34; // x20
  Il2CppObject *v35; // x0
  int v36; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EC1B3 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)interval, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_2419/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_2420/*"BATTLE_BUFF_INTERVAL_TURN"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_2418/*"BATTLE_BUFF_INTERVAL_COUNT"*/, v21, v22, v23);
    byte_42EC1B3 = 1;
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
      v27 = this->fields.remainLabel;
      if ( !v27 )
        goto LABEL_25;
      UILabel__set_text(v27, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v27 = this->fields.intervalLabel;
      if ( !v27 )
        goto LABEL_25;
      UILabel__set_text(v27, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( interval )
      {
        IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
        if ( IntervalVal >= 1 )
        {
          v29 = IntervalVal;
          if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
            v30 = (System_String_o **)&StringLiteral_2420/*"BATTLE_BUFF_INTERVAL_TURN"*/;
          else
            v30 = (System_String_o **)&StringLiteral_2418/*"BATTLE_BUFF_INTERVAL_COUNT"*/;
          v31 = *v30;
          v32 = this->fields.remainLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v27 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2419/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, 0LL);
          if ( v32 )
          {
            UILabel__set_text(v32, (System_String_o *)v27, 0LL);
            v33 = this->fields.intervalLabel;
            v34 = LocalizationManager__Get(v31, 0LL);
            v36 = v29;
            v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
            v27 = (UILabel_o *)System_String__Format(v34, v35, 0LL);
            if ( v33 )
            {
              UILabel__set_text(v33, (System_String_o *)v27, 0LL);
              return;
            }
          }
LABEL_25:
          sub_B5D69C(v27, v26);
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