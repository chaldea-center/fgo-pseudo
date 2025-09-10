void BattleBuffListObjectComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C2A6A3 & 1) == 0 )
  {
    sub_1C2D490(&BattleBuffListObjectComponent_TypeInfo);
    byte_4C2A6A3 = 1;
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
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  struct UILabel_o *confLabel; // x22
  int32_t mHeight; // w23
  System_String_o *v10; // x21
  BattleBuffListObjectComponent_c *v11; // x0
  struct UILabel_o *v12; // x8
  const MethodInfo *v13; // x2
  UILabel_o *atTurnLabel; // x21
  System_String_o *v15; // x0
  int32_t turn; // w8
  System_String_o *v17; // x22
  int v18; // w8
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  UILabel_o *atCountLabel; // x21
  System_String_o *v24; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x0
  struct CondensedScaleLabel_o *atTurnCondensedScaleLabel; // x8
  UILabel_o *v30; // x21
  int32_t count; // [xsp+8h] [xbp-38h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2A6A1 & 1) == 0 )
  {
    sub_1C2D490(&BattleBuffListObjectComponent_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_2703/*"BATTLE_BUFF_TURN"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_2697/*"BATTLE_BUFF_COUNT"*/);
    sub_1C2D490(&StringLiteral_2696/*"BATTLE_BUFF_BOOST"*/);
    byte_4C2A6A1 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !buffData )
    goto LABEL_39;
  if ( !Master_object )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  buffData->fields.buffId,
                                                                  (const MethodInfo_3387D98 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !this->fields.buffIcon )
    goto LABEL_39;
  v7 = Master_object;
  BattleServantBuffIconComponent__setIcon_47194252(this->fields.buffIcon, buffData, 0);
  if ( !v7 )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.nameLabel;
  if ( !Master_object )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)Master_object, v7->fields._MasterName_k__BackingField, 0);
  confLabel = this->fields.confLabel;
  if ( !confLabel )
    goto LABEL_39;
  mHeight = confLabel->fields.mHeight;
  v10 = *(System_String_o **)&v7->fields.revision;
  v11 = BattleBuffListObjectComponent_TypeInfo;
  if ( !BattleBuffListObjectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffListObjectComponent_TypeInfo);
    v11 = BattleBuffListObjectComponent_TypeInfo;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WrapControlText__textAdjust(
                                                                  confLabel,
                                                                  v10,
                                                                  v11->static_fields->DEFAULT_FONT_SIZE,
                                                                  v11->static_fields->DEFAULT_FONT_SIZE,
                                                                  0);
  v12 = this->fields.confLabel;
  if ( !v12 )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.atTurnLabel;
  this->fields._HeightOffset_k__BackingField = v12->fields.mHeight - mHeight;
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
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_2703/*"BATTLE_BUFF_TURN"*/, 0);
      turn = buffData->fields.turn;
      v17 = v15;
      if ( turn + 1 >= 0 )
        v18 = turn + 1;
      else
        v18 = turn + 2;
      v32 = BattleUtility__FloorToInt((float)(v18 >> 1), 0);
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v19, v20, v21);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v17, v22, 0);
      if ( !atTurnLabel )
        goto LABEL_39;
      UILabel__set_text(atTurnLabel, (System_String_o *)Master_object, 0);
    }
    if ( buffData->fields.count >= 1 )
    {
      atCountLabel = this->fields.atCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2697/*"BATTLE_BUFF_COUNT"*/, 0);
      count = buffData->fields.count;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &count, v25, v26, v27);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v24, v28, 0);
      if ( !atCountLabel )
        goto LABEL_39;
      UILabel__set_text(atCountLabel, (System_String_o *)Master_object, 0);
    }
  }
  if ( buffData->fields.turn <= 0 && buffData->fields.isBoost )
  {
    v30 = this->fields.atTurnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_2696/*"BATTLE_BUFF_BOOST"*/,
                                                                    0);
    if ( v30 )
    {
      UILabel__set_text(v30, (System_String_o *)Master_object, 0);
      goto LABEL_38;
    }
LABEL_39:
    sub_1C2D6EC(Master_object, v6);
  }
  atTurnCondensedScaleLabel = this->fields.atTurnCondensedScaleLabel;
  if ( !atTurnCondensedScaleLabel )
    goto LABEL_39;
  atTurnCondensedScaleLabel->fields.autoUpdate = 1;
LABEL_38:
  BattleBuffListObjectComponent__SetInterval(this, buffData->fields._IntervalData_k__BackingField, v13);
}


void BattleBuffListObjectComponent__SetInterval(
        BattleBuffListObjectComponent_o *this,
        BattleBuffData_IntervalData_o *interval,
        const MethodInfo *method)
{
  UnityEngine_Object_o *remainLabel; // x21
  UnityEngine_Object_o *intervalLabel; // x21
  __int64 v7; // x1
  UILabel_o *v8; // x0
  int32_t IntervalVal; // w0
  int32_t v10; // w21
  System_String_o **v11; // x8
  System_String_o *v12; // x20
  UILabel_o *v13; // x22
  UILabel_o *v14; // x19
  System_String_o *v15; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2A6A2 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_2701/*"BATTLE_BUFF_INTERVAL_REMAIN"*/);
    sub_1C2D490(&StringLiteral_2702/*"BATTLE_BUFF_INTERVAL_TURN"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_2700/*"BATTLE_BUFF_INTERVAL_COUNT"*/);
    byte_4C2A6A2 = 1;
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
      v8 = this->fields.remainLabel;
      if ( !v8 )
        goto LABEL_22;
      UILabel__set_text(v8, (System_String_o *)StringLiteral_1/*""*/, 0);
      v8 = this->fields.intervalLabel;
      if ( !v8 )
        goto LABEL_22;
      UILabel__set_text(v8, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( interval )
      {
        IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0);
        if ( IntervalVal >= 1 )
        {
          v10 = IntervalVal;
          if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0) )
            v11 = (System_String_o **)&StringLiteral_2702/*"BATTLE_BUFF_INTERVAL_TURN"*/;
          else
            v11 = (System_String_o **)&StringLiteral_2700/*"BATTLE_BUFF_INTERVAL_COUNT"*/;
          v12 = *v11;
          v13 = this->fields.remainLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v8 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2701/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, 0);
          if ( v13 )
          {
            UILabel__set_text(v13, (System_String_o *)v8, 0);
            v14 = this->fields.intervalLabel;
            v15 = LocalizationManager__Get(v12, 0);
            v20 = v10;
            v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v16, v17, v18);
            v8 = (UILabel_o *)System_String__Format(v15, v19, 0);
            if ( v14 )
            {
              UILabel__set_text(v14, (System_String_o *)v8, 0);
              return;
            }
          }
LABEL_22:
          sub_1C2D6EC(v8, v7);
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