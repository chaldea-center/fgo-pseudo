void __fastcall BattleBuffListObjectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B69AD2 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleBuffListObjectComponent_TypeInfo, v1);
    byte_4B69AD2 = 1;
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  struct UILabel_o *confLabel; // x22
  int32_t mHeight; // w23
  System_String_o *list; // x21
  BattleBuffListObjectComponent_c *v20; // x0
  struct UILabel_o *v21; // x8
  const MethodInfo *v22; // x2
  UILabel_o *atTurnLabel; // x21
  System_String_o *v24; // x0
  int32_t turn; // w8
  System_String_o *v26; // x22
  int v27; // w8
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  UILabel_o *atCountLabel; // x21
  System_String_o *v33; // x22
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  struct CondensedScaleLabel_o *atTurnCondensedScaleLabel; // x8
  UILabel_o *v39; // x21
  int32_t count; // [xsp+8h] [xbp-38h] BYREF
  int32_t v41; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B69AD0 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleBuffListObjectComponent_TypeInfo, buffData);
    sub_1BE4ACC(&Method_DataManager_GetMaster_BuffMaster___, v5);
    sub_1BE4ACC(&DataManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v7);
    sub_1BE4ACC(&int_TypeInfo, v8);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_2850/*"BATTLE_BUFF_TURN"*/, v10);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v11);
    sub_1BE4ACC(&StringLiteral_2844/*"BATTLE_BUFF_COUNT"*/, v12);
    sub_1BE4ACC(&StringLiteral_2843/*"BATTLE_BUFF_BOOST"*/, v13);
    byte_4B69AD0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !buffData )
    goto LABEL_39;
  if ( !Master_object )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  buffData->fields.buffId,
                                                                  (const MethodInfo_31FD7C4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !this->fields.buffIcon )
    goto LABEL_39;
  v16 = Master_object;
  BattleServantBuffIconComponent__setIcon_45022160(this->fields.buffIcon, buffData, 0LL);
  if ( !v16 )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.nameLabel;
  if ( !Master_object )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)Master_object, v16->fields._MasterName_k__BackingField, 0LL);
  confLabel = this->fields.confLabel;
  if ( !confLabel )
    goto LABEL_39;
  mHeight = confLabel->fields.mHeight;
  list = (System_String_o *)v16->fields.list;
  v20 = BattleBuffListObjectComponent_TypeInfo;
  if ( !BattleBuffListObjectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffListObjectComponent_TypeInfo);
    v20 = BattleBuffListObjectComponent_TypeInfo;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WrapControlText__textAdjust(
                                                                  confLabel,
                                                                  list,
                                                                  v20->static_fields->DEFAULT_FONT_SIZE,
                                                                  v20->static_fields->DEFAULT_FONT_SIZE,
                                                                  0LL);
  v21 = this->fields.confLabel;
  if ( !v21 )
    goto LABEL_39;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.atTurnLabel;
  this->fields._HeightOffset_k__BackingField = v21->fields.mHeight - mHeight;
  if ( !Master_object )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.atCountLabel;
  if ( !Master_object )
    goto LABEL_39;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !buffData->fields.isHideParam )
  {
    if ( buffData->fields.turn >= 1 )
    {
      atTurnLabel = this->fields.atTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2850/*"BATTLE_BUFF_TURN"*/, 0LL);
      turn = buffData->fields.turn;
      v26 = v24;
      if ( turn + 1 >= 0 )
        v27 = turn + 1;
      else
        v27 = turn + 2;
      v41 = BattleUtility__FloorToInt((float)(v27 >> 1), 0LL);
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41, v28, v29, v30);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v26, v31, 0LL);
      if ( !atTurnLabel )
        goto LABEL_39;
      UILabel__set_text(atTurnLabel, (System_String_o *)Master_object, 0LL);
    }
    if ( buffData->fields.count >= 1 )
    {
      atCountLabel = this->fields.atCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_2844/*"BATTLE_BUFF_COUNT"*/, 0LL);
      count = buffData->fields.count;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &count, v34, v35, v36);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v33, v37, 0LL);
      if ( !atCountLabel )
        goto LABEL_39;
      UILabel__set_text(atCountLabel, (System_String_o *)Master_object, 0LL);
    }
  }
  if ( buffData->fields.turn <= 0 && buffData->fields.isBoost )
  {
    v39 = this->fields.atTurnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_2843/*"BATTLE_BUFF_BOOST"*/,
                                                                    0LL);
    if ( v39 )
    {
      UILabel__set_text(v39, (System_String_o *)Master_object, 0LL);
      goto LABEL_38;
    }
LABEL_39:
    sub_1BE4D28(Master_object, v15);
  }
  atTurnCondensedScaleLabel = this->fields.atTurnCondensedScaleLabel;
  if ( !atTurnCondensedScaleLabel )
    goto LABEL_39;
  atTurnCondensedScaleLabel->fields.autoUpdate = 1;
LABEL_38:
  BattleBuffListObjectComponent__SetInterval(this, buffData->fields._IntervalData_k__BackingField, v22);
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
  __int64 v13; // x1
  UILabel_o *v14; // x0
  int32_t IntervalVal; // w0
  int v16; // w21
  System_String_o **v17; // x8
  System_String_o *v18; // x20
  UILabel_o *v19; // x22
  UILabel_o *v20; // x19
  System_String_o *v21; // x20
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  int v26; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B69AD1 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, interval);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v5);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_2848/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, v7);
    sub_1BE4ACC(&StringLiteral_2849/*"BATTLE_BUFF_INTERVAL_TURN"*/, v8);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v9);
    sub_1BE4ACC(&StringLiteral_2847/*"BATTLE_BUFF_INTERVAL_COUNT"*/, v10);
    byte_4B69AD1 = 1;
  }
  remainLabel = (UnityEngine_Object_o *)this->fields.remainLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(remainLabel, 0LL, 0LL) )
  {
    intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(intervalLabel, 0LL, 0LL) )
    {
      v14 = this->fields.remainLabel;
      if ( !v14 )
        goto LABEL_22;
      UILabel__set_text(v14, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v14 = this->fields.intervalLabel;
      if ( !v14 )
        goto LABEL_22;
      UILabel__set_text(v14, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( interval )
      {
        IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
        if ( IntervalVal >= 1 )
        {
          v16 = IntervalVal;
          if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
            v17 = (System_String_o **)&StringLiteral_2849/*"BATTLE_BUFF_INTERVAL_TURN"*/;
          else
            v17 = (System_String_o **)&StringLiteral_2847/*"BATTLE_BUFF_INTERVAL_COUNT"*/;
          v18 = *v17;
          v19 = this->fields.remainLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v14 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2848/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, 0LL);
          if ( v19 )
          {
            UILabel__set_text(v19, (System_String_o *)v14, 0LL);
            v20 = this->fields.intervalLabel;
            v21 = LocalizationManager__Get(v18, 0LL);
            v26 = v16;
            v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v22, v23, v24);
            v14 = (UILabel_o *)System_String__Format(v21, v25, 0LL);
            if ( v20 )
            {
              UILabel__set_text(v20, (System_String_o *)v14, 0LL);
              return;
            }
          }
LABEL_22:
          sub_1BE4D28(v14, v13);
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