void BattleBuffListObjectComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C463D4 & 1) == 0 )
  {
    sub_1C37058(&BattleBuffListObjectComponent_TypeInfo);
    byte_4C463D4 = 1;
  }
  BattleBuffListObjectComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE = 17;
}


void BattleBuffListObjectComponent___ctor(BattleBuffListObjectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleBuffListObjectComponent__SetData(
        BattleBuffListObjectComponent_o *this,
        BattleBuffData_ShowBuffData_o *buffData,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  struct UILabel_o *confLabel; // x22
  int32_t mHeight; // w23
  System_String_o *v9; // x21
  BattleBuffListObjectComponent_c *v10; // x0
  struct UILabel_o *v11; // x8
  const MethodInfo *v12; // x2
  UILabel_o *atTurnLabel; // x21
  System_String_o *v14; // x0
  int32_t turn; // w8
  System_String_o *v16; // x22
  int v17; // w8
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x0
  UILabel_o *atCountLabel; // x21
  System_String_o *v26; // x22
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  Il2CppObject *v33; // x0
  struct CondensedScaleLabel_o *atTurnCondensedScaleLabel; // x8
  UILabel_o *v35; // x21
  int32_t count; // [xsp+8h] [xbp-38h] BYREF
  int32_t v37; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C463D2 & 1) == 0 )
  {
    sub_1C37058(&BattleBuffListObjectComponent_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_2706/*"BATTLE_BUFF_TURN"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_2700/*"BATTLE_BUFF_COUNT"*/);
    sub_1C37058(&StringLiteral_2699/*"BATTLE_BUFF_BOOST"*/);
    byte_4C463D2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !buffData )
    goto LABEL_39;
  if ( !Master_object )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  buffData->fields.buffId,
                                                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !this->fields.buffIcon )
    goto LABEL_39;
  v6 = Master_object;
  BattleServantBuffIconComponent__setIcon_47458360(this->fields.buffIcon, buffData, 0);
  if ( !v6 )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.nameLabel;
  if ( !Master_object )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)Master_object, v6->fields._MasterName_k__BackingField, 0);
  confLabel = this->fields.confLabel;
  if ( !confLabel )
    goto LABEL_39;
  mHeight = confLabel->fields.mHeight;
  v9 = *(System_String_o **)&v6->fields.revision;
  v10 = BattleBuffListObjectComponent_TypeInfo;
  if ( !BattleBuffListObjectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffListObjectComponent_TypeInfo);
    v10 = BattleBuffListObjectComponent_TypeInfo;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WrapControlText__textAdjust(
                                                                  confLabel,
                                                                  v9,
                                                                  v10->static_fields->DEFAULT_FONT_SIZE,
                                                                  v10->static_fields->DEFAULT_FONT_SIZE,
                                                                  0);
  v11 = this->fields.confLabel;
  if ( !v11 )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.atTurnLabel;
  this->fields._HeightOffset_k__BackingField = v11->fields.mHeight - mHeight;
  if ( !Master_object )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.atCountLabel;
  if ( !Master_object )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !buffData->fields.isHideParam )
  {
    if ( buffData->fields.turn >= 1 )
    {
      atTurnLabel = this->fields.atTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2706/*"BATTLE_BUFF_TURN"*/, 0);
      turn = buffData->fields.turn;
      v16 = v14;
      if ( turn + 1 >= 0 )
        v17 = turn + 1;
      else
        v17 = turn + 2;
      v37 = BattleUtility__FloorToInt((float)(v17 >> 1), 0);
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v18, v19, v20, v21, v22, v23);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v16, v24, 0);
      if ( !atTurnLabel )
        goto LABEL_39;
      UILabel__set_text(atTurnLabel, (System_String_o *)Master_object, 0);
    }
    if ( buffData->fields.count >= 1 )
    {
      atCountLabel = this->fields.atCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2700/*"BATTLE_BUFF_COUNT"*/, 0);
      count = buffData->fields.count;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &count, v27, v28, v29, v30, v31, v32);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v26, v33, 0);
      if ( !atCountLabel )
        goto LABEL_39;
      UILabel__set_text(atCountLabel, (System_String_o *)Master_object, 0);
    }
  }
  if ( buffData->fields.turn <= 0 && buffData->fields.isBoost )
  {
    v35 = this->fields.atTurnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_2699/*"BATTLE_BUFF_BOOST"*/,
                                                                    0);
    if ( v35 )
    {
      UILabel__set_text(v35, (System_String_o *)Master_object, 0);
      goto LABEL_38;
    }
LABEL_39:
    sub_1C372B4(Master_object);
  }
  atTurnCondensedScaleLabel = this->fields.atTurnCondensedScaleLabel;
  if ( !atTurnCondensedScaleLabel )
    goto LABEL_39;
  atTurnCondensedScaleLabel->fields.autoUpdate = 1;
LABEL_38:
  BattleBuffListObjectComponent__SetInterval(this, buffData->fields._IntervalData_k__BackingField, v12);
}


void BattleBuffListObjectComponent__SetInterval(
        BattleBuffListObjectComponent_o *this,
        BattleBuffData_IntervalData_o *interval,
        const MethodInfo *method)
{
  UnityEngine_Object_o *remainLabel; // x21
  UnityEngine_Object_o *intervalLabel; // x21
  UILabel_o *v7; // x0
  int32_t IntervalVal; // w0
  int32_t v9; // w21
  System_String_o **v10; // x8
  System_String_o *v11; // x20
  UILabel_o *v12; // x22
  UILabel_o *v13; // x19
  System_String_o *v14; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x0
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C463D3 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_2704/*"BATTLE_BUFF_INTERVAL_REMAIN"*/);
    sub_1C37058(&StringLiteral_2705/*"BATTLE_BUFF_INTERVAL_TURN"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_2703/*"BATTLE_BUFF_INTERVAL_COUNT"*/);
    byte_4C463D3 = 1;
  }
  remainLabel = (UnityEngine_Object_o *)this->fields.remainLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(remainLabel, 0, 0) )
  {
    intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(intervalLabel, 0, 0) )
    {
      v7 = this->fields.remainLabel;
      if ( !v7 )
        goto LABEL_22;
      UILabel__set_text(v7, (System_String_o *)StringLiteral_1/*""*/, 0);
      v7 = this->fields.intervalLabel;
      if ( !v7 )
        goto LABEL_22;
      UILabel__set_text(v7, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( interval )
      {
        IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0);
        if ( IntervalVal >= 1 )
        {
          v9 = IntervalVal;
          if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0) )
            v10 = (System_String_o **)&StringLiteral_2705/*"BATTLE_BUFF_INTERVAL_TURN"*/;
          else
            v10 = (System_String_o **)&StringLiteral_2703/*"BATTLE_BUFF_INTERVAL_COUNT"*/;
          v11 = *v10;
          v12 = this->fields.remainLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v7 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2704/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, 0);
          if ( v12 )
          {
            UILabel__set_text(v12, (System_String_o *)v7, 0);
            v13 = this->fields.intervalLabel;
            v14 = LocalizationManager__Get(v11, 0);
            v22 = v9;
            v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v15, v16, v17, v18, v19, v20);
            v7 = (UILabel_o *)System_String__Format(v14, v21, 0);
            if ( v13 )
            {
              UILabel__set_text(v13, (System_String_o *)v7, 0);
              return;
            }
          }
LABEL_22:
          sub_1C372B4(v7);
        }
      }
    }
  }
}


int32_t BattleBuffListObjectComponent__get_HeightOffset(
        BattleBuffListObjectComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._HeightOffset_k__BackingField;
}


void BattleBuffListObjectComponent__set_HeightOffset(
        BattleBuffListObjectComponent_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._HeightOffset_k__BackingField = value;
}