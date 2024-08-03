void __fastcall BattleBuffListObjectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FF185 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffListObjectComponent_TypeInfo, v1);
    byte_49FF185 = 1;
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
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x21
  struct UILabel_o *confLabel; // x8
  System_String_o *list; // x22
  int32_t mWidth; // w23
  int32_t mHeight; // w24
  BattleBuffListObjectComponent_c *v20; // x0
  int32_t v21; // w0
  int32_t v22; // w4
  struct UILabel_o *v23; // x8
  const MethodInfo *v24; // x2
  UILabel_o *atTurnLabel; // x21
  System_String_o *v26; // x0
  int32_t turn; // w8
  System_String_o *v28; // x22
  int v29; // w8
  Il2CppObject *v30; // x0
  UILabel_o *atCountLabel; // x21
  System_String_o *v32; // x22
  Il2CppObject *v33; // x0
  struct CondensedScaleLabel_o *atTurnCondensedScaleLabel; // x8
  UILabel_o *v35; // x21
  int32_t count; // [xsp+8h] [xbp-48h] BYREF
  int32_t v37; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FF183 & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffListObjectComponent_TypeInfo, buffData);
    sub_1B640C8(&Method_DataManager_GetMaster_BuffMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_2806/*"BATTLE_BUFF_TURN"*/, v10);
    sub_1B640C8(&StringLiteral_1/*""*/, v11);
    sub_1B640C8(&StringLiteral_2800/*"BATTLE_BUFF_COUNT"*/, v12);
    sub_1B640C8(&StringLiteral_2799/*"BATTLE_BUFF_BOOST"*/, v13);
    byte_49FF183 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !buffData )
    goto LABEL_43;
  if ( !Master_object )
    goto LABEL_43;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  buffData->fields.buffId,
                                                                  (const MethodInfo_30D3EA4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !this->fields.buffIcon )
    goto LABEL_43;
  v15 = Master_object;
  BattleServantBuffIconComponent__setIcon_43602588(this->fields.buffIcon, buffData, 0LL);
  if ( !v15 )
    goto LABEL_43;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.nameLabel;
  if ( !Master_object )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)Master_object, v15->fields._MasterName_k__BackingField, 0LL);
  confLabel = this->fields.confLabel;
  if ( !confLabel )
    goto LABEL_43;
  list = (System_String_o *)v15->fields.list;
  mWidth = confLabel->fields.mWidth;
  mHeight = confLabel->fields.mHeight;
  v20 = BattleBuffListObjectComponent_TypeInfo;
  if ( !BattleBuffListObjectComponent_TypeInfo->_2.cctor_finished )
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
  v22 = mHeight <= v21 ? v21 : mHeight;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WrapControlText__textAdjust(
                                                                  this->fields.confLabel,
                                                                  (System_String_o *)v15->fields.list,
                                                                  BattleBuffListObjectComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
                                                                  BattleBuffListObjectComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
                                                                  v22,
                                                                  0LL);
  v23 = this->fields.confLabel;
  if ( !v23
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.atTurnLabel,
        this->fields._HeightOffset_k__BackingField = v23->fields.mHeight - mHeight,
        !Master_object)
    || (UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.atCountLabel) == 0LL) )
  {
LABEL_43:
    sub_1B64324(Master_object);
  }
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !buffData->fields.isHideParam )
  {
    if ( buffData->fields.turn >= 1 )
    {
      atTurnLabel = this->fields.atTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2806/*"BATTLE_BUFF_TURN"*/, 0LL);
      turn = buffData->fields.turn;
      v28 = v26;
      if ( turn + 1 >= 0 )
        v29 = turn + 1;
      else
        v29 = turn + 2;
      v37 = BattleUtility__FloorToInt((float)(v29 >> 1), 0LL);
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v28, v30, 0LL);
      if ( !atTurnLabel )
        goto LABEL_43;
      UILabel__set_text(atTurnLabel, (System_String_o *)Master_object, 0LL);
    }
    if ( buffData->fields.count >= 1 )
    {
      atCountLabel = this->fields.atCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v32 = LocalizationManager__Get((System_String_o *)StringLiteral_2800/*"BATTLE_BUFF_COUNT"*/, 0LL);
      count = buffData->fields.count;
      v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &count);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v32, v33, 0LL);
      if ( !atCountLabel )
        goto LABEL_43;
      UILabel__set_text(atCountLabel, (System_String_o *)Master_object, 0LL);
    }
  }
  if ( buffData->fields.turn <= 0 && buffData->fields.isBoost )
  {
    v35 = this->fields.atTurnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_2799/*"BATTLE_BUFF_BOOST"*/,
                                                                    0LL);
    if ( v35 )
    {
      UILabel__set_text(v35, (System_String_o *)Master_object, 0LL);
      goto LABEL_42;
    }
    goto LABEL_43;
  }
  atTurnCondensedScaleLabel = this->fields.atTurnCondensedScaleLabel;
  if ( !atTurnCondensedScaleLabel )
    goto LABEL_43;
  atTurnCondensedScaleLabel->fields.autoUpdate = 1;
LABEL_42:
  BattleBuffListObjectComponent__SetInterval(this, buffData->fields._IntervalData_k__BackingField, v24);
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

  if ( (byte_49FF184 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, interval);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_2804/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, v7);
    sub_1B640C8(&StringLiteral_2805/*"BATTLE_BUFF_INTERVAL_TURN"*/, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    sub_1B640C8(&StringLiteral_2803/*"BATTLE_BUFF_INTERVAL_COUNT"*/, v10);
    byte_49FF184 = 1;
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
      v13 = this->fields.remainLabel;
      if ( !v13 )
        goto LABEL_22;
      UILabel__set_text(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v13 = this->fields.intervalLabel;
      if ( !v13 )
        goto LABEL_22;
      UILabel__set_text(v13, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( interval )
      {
        IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
        if ( IntervalVal >= 1 )
        {
          v15 = IntervalVal;
          if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
            v16 = (System_String_o **)&StringLiteral_2805/*"BATTLE_BUFF_INTERVAL_TURN"*/;
          else
            v16 = (System_String_o **)&StringLiteral_2803/*"BATTLE_BUFF_INTERVAL_COUNT"*/;
          v17 = *v16;
          v18 = this->fields.remainLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v13 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2804/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, 0LL);
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
LABEL_22:
          sub_1B64324(v13);
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