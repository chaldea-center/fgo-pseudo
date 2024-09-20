void __fastcall BattleBuffListObjectComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A5DF4A & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffListObjectComponent_TypeInfo);
    byte_4A5DF4A = 1;
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  struct UILabel_o *confLabel; // x8
  System_String_o *list; // x22
  int32_t mWidth; // w23
  int32_t mHeight; // w24
  BattleBuffListObjectComponent_c *v12; // x0
  int32_t v13; // w0
  int32_t v14; // w4
  struct UILabel_o *v15; // x8
  const MethodInfo *v16; // x2
  UILabel_o *atTurnLabel; // x21
  System_String_o *v18; // x0
  int32_t turn; // w8
  System_String_o *v20; // x22
  int v21; // w8
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  Il2CppObject *v25; // x0
  UILabel_o *atCountLabel; // x21
  System_String_o *v27; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  Il2CppObject *v31; // x0
  struct CondensedScaleLabel_o *atTurnCondensedScaleLabel; // x8
  UILabel_o *v33; // x21
  int32_t count; // [xsp+8h] [xbp-48h] BYREF
  int32_t v35; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5DF48 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffListObjectComponent_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_2823/*"BATTLE_BUFF_TURN"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_2817/*"BATTLE_BUFF_COUNT"*/);
    sub_1B885B0(&StringLiteral_2816/*"BATTLE_BUFF_BOOST"*/);
    byte_4A5DF48 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !buffData )
    goto LABEL_43;
  if ( !Master_object )
    goto LABEL_43;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  buffData->fields.buffId,
                                                                  (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !this->fields.buffIcon )
    goto LABEL_43;
  v7 = Master_object;
  BattleServantBuffIconComponent__setIcon_43967732(this->fields.buffIcon, buffData, 0LL);
  if ( !v7 )
    goto LABEL_43;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.nameLabel;
  if ( !Master_object )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)Master_object, v7->fields._MasterName_k__BackingField, 0LL);
  confLabel = this->fields.confLabel;
  if ( !confLabel )
    goto LABEL_43;
  list = (System_String_o *)v7->fields.list;
  mWidth = confLabel->fields.mWidth;
  mHeight = confLabel->fields.mHeight;
  v12 = BattleBuffListObjectComponent_TypeInfo;
  if ( !BattleBuffListObjectComponent_TypeInfo->_2.cctor_finished )
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
  v14 = mHeight <= v13 ? v13 : mHeight;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WrapControlText__textAdjust(
                                                                  this->fields.confLabel,
                                                                  (System_String_o *)v7->fields.list,
                                                                  BattleBuffListObjectComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
                                                                  BattleBuffListObjectComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
                                                                  v14,
                                                                  0LL);
  v15 = this->fields.confLabel;
  if ( !v15
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.atTurnLabel,
        this->fields._HeightOffset_k__BackingField = v15->fields.mHeight - mHeight,
        !Master_object)
    || (UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.atCountLabel) == 0LL) )
  {
LABEL_43:
    sub_1B8880C(Master_object, v6);
  }
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !buffData->fields.isHideParam )
  {
    if ( buffData->fields.turn >= 1 )
    {
      atTurnLabel = this->fields.atTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2823/*"BATTLE_BUFF_TURN"*/, 0LL);
      turn = buffData->fields.turn;
      v20 = v18;
      if ( turn + 1 >= 0 )
        v21 = turn + 1;
      else
        v21 = turn + 2;
      v35 = BattleUtility__FloorToInt((float)(v21 >> 1), 0LL);
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v22, v23, v24);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v20, v25, 0LL);
      if ( !atTurnLabel )
        goto LABEL_43;
      UILabel__set_text(atTurnLabel, (System_String_o *)Master_object, 0LL);
    }
    if ( buffData->fields.count >= 1 )
    {
      atCountLabel = this->fields.atCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_2817/*"BATTLE_BUFF_COUNT"*/, 0LL);
      count = buffData->fields.count;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &count, v28, v29, v30);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v27, v31, 0LL);
      if ( !atCountLabel )
        goto LABEL_43;
      UILabel__set_text(atCountLabel, (System_String_o *)Master_object, 0LL);
    }
  }
  if ( buffData->fields.turn <= 0 && buffData->fields.isBoost )
  {
    v33 = this->fields.atTurnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_2816/*"BATTLE_BUFF_BOOST"*/,
                                                                    0LL);
    if ( v33 )
    {
      UILabel__set_text(v33, (System_String_o *)Master_object, 0LL);
      goto LABEL_42;
    }
    goto LABEL_43;
  }
  atTurnCondensedScaleLabel = this->fields.atTurnCondensedScaleLabel;
  if ( !atTurnCondensedScaleLabel )
    goto LABEL_43;
  atTurnCondensedScaleLabel->fields.autoUpdate = 1;
LABEL_42:
  BattleBuffListObjectComponent__SetInterval(this, buffData->fields._IntervalData_k__BackingField, v16);
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
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x0
  int v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5DF49 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_2821/*"BATTLE_BUFF_INTERVAL_REMAIN"*/);
    sub_1B885B0(&StringLiteral_2822/*"BATTLE_BUFF_INTERVAL_TURN"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_2820/*"BATTLE_BUFF_INTERVAL_COUNT"*/);
    byte_4A5DF49 = 1;
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
      v8 = this->fields.remainLabel;
      if ( !v8 )
        goto LABEL_22;
      UILabel__set_text(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v8 = this->fields.intervalLabel;
      if ( !v8 )
        goto LABEL_22;
      UILabel__set_text(v8, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( interval )
      {
        IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
        if ( IntervalVal >= 1 )
        {
          v10 = IntervalVal;
          if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
            v11 = (System_String_o **)&StringLiteral_2822/*"BATTLE_BUFF_INTERVAL_TURN"*/;
          else
            v11 = (System_String_o **)&StringLiteral_2820/*"BATTLE_BUFF_INTERVAL_COUNT"*/;
          v12 = *v11;
          v13 = this->fields.remainLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v8 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2821/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, 0LL);
          if ( v13 )
          {
            UILabel__set_text(v13, (System_String_o *)v8, 0LL);
            v14 = this->fields.intervalLabel;
            v15 = LocalizationManager__Get(v12, 0LL);
            v20 = v10;
            v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v16, v17, v18);
            v8 = (UILabel_o *)System_String__Format(v15, v19, 0LL);
            if ( v14 )
            {
              UILabel__set_text(v14, (System_String_o *)v8, 0LL);
              return;
            }
          }
LABEL_22:
          sub_1B8880C(v8, v7);
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