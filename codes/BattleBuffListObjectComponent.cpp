void __fastcall BattleBuffListObjectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A018A8 & 1) == 0 )
  {
    sub_1B64A00(&BattleBuffListObjectComponent_TypeInfo, v1);
    byte_4A018A8 = 1;
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
  struct UILabel_o *confLabel; // x8
  System_String_o *list; // x22
  int32_t mWidth; // w23
  int32_t mHeight; // w24
  BattleBuffListObjectComponent_c *v21; // x0
  int32_t v22; // w0
  int32_t v23; // w4
  struct UILabel_o *v24; // x8
  const MethodInfo *v25; // x2
  UILabel_o *atTurnLabel; // x21
  System_String_o *v27; // x0
  int32_t turn; // w8
  System_String_o *v29; // x22
  int v30; // w8
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x0
  UILabel_o *atCountLabel; // x21
  System_String_o *v36; // x22
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  struct CondensedScaleLabel_o *atTurnCondensedScaleLabel; // x8
  UILabel_o *v42; // x21
  int32_t count; // [xsp+8h] [xbp-48h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A018A6 & 1) == 0 )
  {
    sub_1B64A00(&BattleBuffListObjectComponent_TypeInfo, buffData);
    sub_1B64A00(&Method_DataManager_GetMaster_BuffMaster___, v5);
    sub_1B64A00(&DataManager_TypeInfo, v6);
    sub_1B64A00(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v7);
    sub_1B64A00(&int_TypeInfo, v8);
    sub_1B64A00(&LocalizationManager_TypeInfo, v9);
    sub_1B64A00(&StringLiteral_2806/*"BATTLE_BUFF_TURN"*/, v10);
    sub_1B64A00(&StringLiteral_1/*""*/, v11);
    sub_1B64A00(&StringLiteral_2800/*"BATTLE_BUFF_COUNT"*/, v12);
    sub_1B64A00(&StringLiteral_2799/*"BATTLE_BUFF_BOOST"*/, v13);
    byte_4A018A6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !buffData )
    goto LABEL_43;
  if ( !Master_object )
    goto LABEL_43;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  buffData->fields.buffId,
                                                                  (const MethodInfo_30D6798 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !this->fields.buffIcon )
    goto LABEL_43;
  v16 = Master_object;
  BattleServantBuffIconComponent__setIcon_43610908(this->fields.buffIcon, buffData, 0LL);
  if ( !v16 )
    goto LABEL_43;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.nameLabel;
  if ( !Master_object )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)Master_object, v16->fields._MasterName_k__BackingField, 0LL);
  confLabel = this->fields.confLabel;
  if ( !confLabel )
    goto LABEL_43;
  list = (System_String_o *)v16->fields.list;
  mWidth = confLabel->fields.mWidth;
  mHeight = confLabel->fields.mHeight;
  v21 = BattleBuffListObjectComponent_TypeInfo;
  if ( !BattleBuffListObjectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffListObjectComponent_TypeInfo);
    confLabel = this->fields.confLabel;
    if ( !confLabel )
      goto LABEL_43;
    v21 = BattleBuffListObjectComponent_TypeInfo;
  }
  v22 = WrapControlText__CalcApproximateLabelHeight(
          list,
          mWidth,
          v21->static_fields->DEFAULT_FONT_SIZE,
          confLabel->fields.mSpacingY + v21->static_fields->DEFAULT_FONT_SIZE,
          2,
          0LL);
  v23 = mHeight <= v22 ? v22 : mHeight;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WrapControlText__textAdjust(
                                                                  this->fields.confLabel,
                                                                  (System_String_o *)v16->fields.list,
                                                                  BattleBuffListObjectComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
                                                                  BattleBuffListObjectComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
                                                                  v23,
                                                                  0LL);
  v24 = this->fields.confLabel;
  if ( !v24
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.atTurnLabel,
        this->fields._HeightOffset_k__BackingField = v24->fields.mHeight - mHeight,
        !Master_object)
    || (UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.atCountLabel) == 0LL) )
  {
LABEL_43:
    sub_1B64C5C(Master_object, v15);
  }
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !buffData->fields.isHideParam )
  {
    if ( buffData->fields.turn >= 1 )
    {
      atTurnLabel = this->fields.atTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2806/*"BATTLE_BUFF_TURN"*/, 0LL);
      turn = buffData->fields.turn;
      v29 = v27;
      if ( turn + 1 >= 0 )
        v30 = turn + 1;
      else
        v30 = turn + 2;
      v44 = BattleUtility__FloorToInt((float)(v30 >> 1), 0LL);
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44, v31, v32, v33);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v29, v34, 0LL);
      if ( !atTurnLabel )
        goto LABEL_43;
      UILabel__set_text(atTurnLabel, (System_String_o *)Master_object, 0LL);
    }
    if ( buffData->fields.count >= 1 )
    {
      atCountLabel = this->fields.atCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2800/*"BATTLE_BUFF_COUNT"*/, 0LL);
      count = buffData->fields.count;
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &count, v37, v38, v39);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v36, v40, 0LL);
      if ( !atCountLabel )
        goto LABEL_43;
      UILabel__set_text(atCountLabel, (System_String_o *)Master_object, 0LL);
    }
  }
  if ( buffData->fields.turn <= 0 && buffData->fields.isBoost )
  {
    v42 = this->fields.atTurnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_2799/*"BATTLE_BUFF_BOOST"*/,
                                                                    0LL);
    if ( v42 )
    {
      UILabel__set_text(v42, (System_String_o *)Master_object, 0LL);
      goto LABEL_42;
    }
    goto LABEL_43;
  }
  atTurnCondensedScaleLabel = this->fields.atTurnCondensedScaleLabel;
  if ( !atTurnCondensedScaleLabel )
    goto LABEL_43;
  atTurnCondensedScaleLabel->fields.autoUpdate = 1;
LABEL_42:
  BattleBuffListObjectComponent__SetInterval(this, buffData->fields._IntervalData_k__BackingField, v25);
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

  if ( (byte_4A018A7 & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, interval);
    sub_1B64A00(&LocalizationManager_TypeInfo, v5);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_2804/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, v7);
    sub_1B64A00(&StringLiteral_2805/*"BATTLE_BUFF_INTERVAL_TURN"*/, v8);
    sub_1B64A00(&StringLiteral_1/*""*/, v9);
    sub_1B64A00(&StringLiteral_2803/*"BATTLE_BUFF_INTERVAL_COUNT"*/, v10);
    byte_4A018A7 = 1;
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
            v17 = (System_String_o **)&StringLiteral_2805/*"BATTLE_BUFF_INTERVAL_TURN"*/;
          else
            v17 = (System_String_o **)&StringLiteral_2803/*"BATTLE_BUFF_INTERVAL_COUNT"*/;
          v18 = *v17;
          v19 = this->fields.remainLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v14 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2804/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, 0LL);
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
          sub_1B64C5C(v14, v13);
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