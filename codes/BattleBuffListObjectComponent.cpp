void __fastcall BattleBuffListObjectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1906D & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBuffListObjectComponent_TypeInfo, v1, v2);
    byte_4B1906D = 1;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v24; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x21
  struct UILabel_o *confLabel; // x8
  System_String_o *list; // x22
  int32_t mWidth; // w23
  int32_t mHeight; // w24
  BattleBuffListObjectComponent_c *v30; // x0
  int32_t v31; // w0
  int32_t v32; // w4
  struct UILabel_o *v33; // x8
  const MethodInfo *v34; // x2
  UILabel_o *atTurnLabel; // x21
  System_String_o *v36; // x0
  int32_t turn; // w8
  System_String_o *v38; // x22
  int v39; // w8
  Il2CppObject *v40; // x0
  UILabel_o *atCountLabel; // x21
  System_String_o *v42; // x22
  Il2CppObject *v43; // x0
  struct CondensedScaleLabel_o *atTurnCondensedScaleLabel; // x8
  UILabel_o *v45; // x21
  int32_t count; // [xsp+8h] [xbp-48h] BYREF
  int32_t v47; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1906B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBuffListObjectComponent_TypeInfo, buffData, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BuffMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_2844/*"BATTLE_BUFF_TURN"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_2838/*"BATTLE_BUFF_COUNT"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_2837/*"BATTLE_BUFF_BOOST"*/, v21, v22);
    byte_4B1906B = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, buffData);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !buffData )
    goto LABEL_43;
  if ( !Master_object )
    goto LABEL_43;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  buffData->fields.buffId,
                                                                  (const MethodInfo_31B2E40 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !this->fields.buffIcon )
    goto LABEL_43;
  v25 = Master_object;
  BattleServantBuffIconComponent__setIcon_44753512(this->fields.buffIcon, buffData, 0LL);
  if ( !v25 )
    goto LABEL_43;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.nameLabel;
  if ( !Master_object )
    goto LABEL_43;
  UILabel__set_text((UILabel_o *)Master_object, v25->fields._MasterName_k__BackingField, 0LL);
  confLabel = this->fields.confLabel;
  if ( !confLabel )
    goto LABEL_43;
  list = (System_String_o *)v25->fields.list;
  mWidth = confLabel->fields.mWidth;
  mHeight = confLabel->fields.mHeight;
  v30 = BattleBuffListObjectComponent_TypeInfo;
  if ( !BattleBuffListObjectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffListObjectComponent_TypeInfo, v24);
    confLabel = this->fields.confLabel;
    if ( !confLabel )
      goto LABEL_43;
    v30 = BattleBuffListObjectComponent_TypeInfo;
  }
  v31 = WrapControlText__CalcApproximateLabelHeight(
          list,
          mWidth,
          v30->static_fields->DEFAULT_FONT_SIZE,
          confLabel->fields.mSpacingY + v30->static_fields->DEFAULT_FONT_SIZE,
          2,
          0LL);
  v32 = mHeight <= v31 ? v31 : mHeight;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WrapControlText__textAdjust(
                                                                  this->fields.confLabel,
                                                                  (System_String_o *)v25->fields.list,
                                                                  BattleBuffListObjectComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
                                                                  BattleBuffListObjectComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE,
                                                                  v32,
                                                                  0LL);
  v33 = this->fields.confLabel;
  if ( !v33
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.atTurnLabel,
        this->fields._HeightOffset_k__BackingField = v33->fields.mHeight - mHeight,
        !Master_object)
    || (UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.atCountLabel) == 0LL) )
  {
LABEL_43:
    sub_1BCAA3C(Master_object, v24);
  }
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !buffData->fields.isHideParam )
  {
    if ( buffData->fields.turn >= 1 )
    {
      atTurnLabel = this->fields.atTurnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
      v36 = LocalizationManager__Get((System_String_o *)StringLiteral_2844/*"BATTLE_BUFF_TURN"*/, 0LL);
      turn = buffData->fields.turn;
      v38 = v36;
      if ( turn + 1 >= 0 )
        v39 = turn + 1;
      else
        v39 = turn + 2;
      v47 = BattleUtility__FloorToInt((float)(v39 >> 1), 0LL);
      v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v38, v40, 0LL);
      if ( !atTurnLabel )
        goto LABEL_43;
      UILabel__set_text(atTurnLabel, (System_String_o *)Master_object, 0LL);
    }
    if ( buffData->fields.count >= 1 )
    {
      atCountLabel = this->fields.atCountLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_2838/*"BATTLE_BUFF_COUNT"*/, 0LL);
      count = buffData->fields.count;
      v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &count);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Format(v42, v43, 0LL);
      if ( !atCountLabel )
        goto LABEL_43;
      UILabel__set_text(atCountLabel, (System_String_o *)Master_object, 0LL);
    }
  }
  if ( buffData->fields.turn <= 0 && buffData->fields.isBoost )
  {
    v45 = this->fields.atTurnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                    (System_String_o *)StringLiteral_2837/*"BATTLE_BUFF_BOOST"*/,
                                                                    0LL);
    if ( v45 )
    {
      UILabel__set_text(v45, (System_String_o *)Master_object, 0LL);
      goto LABEL_42;
    }
    goto LABEL_43;
  }
  atTurnCondensedScaleLabel = this->fields.atTurnCondensedScaleLabel;
  if ( !atTurnCondensedScaleLabel )
    goto LABEL_43;
  atTurnCondensedScaleLabel->fields.autoUpdate = 1;
LABEL_42:
  BattleBuffListObjectComponent__SetInterval(this, buffData->fields._IntervalData_k__BackingField, v34);
}


void __fastcall BattleBuffListObjectComponent__SetInterval(
        BattleBuffListObjectComponent_o *this,
        BattleBuffData_IntervalData_o *interval,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *remainLabel; // x21
  __int64 v18; // x1
  UnityEngine_Object_o *intervalLabel; // x21
  __int64 v20; // x1
  UILabel_o *v21; // x0
  int32_t IntervalVal; // w0
  int v23; // w21
  __int64 v24; // x1
  System_String_o **v25; // x8
  System_String_o *v26; // x20
  UILabel_o *v27; // x22
  UILabel_o *v28; // x19
  System_String_o *v29; // x20
  Il2CppObject *v30; // x0
  int v31; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1906C & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, interval, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_2842/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_2843/*"BATTLE_BUFF_INTERVAL_TURN"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_2841/*"BATTLE_BUFF_INTERVAL_COUNT"*/, v15, v16);
    byte_4B1906C = 1;
  }
  remainLabel = (UnityEngine_Object_o *)this->fields.remainLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, interval);
  if ( !UnityEngine_Object__op_Equality(remainLabel, 0LL, 0LL) )
  {
    intervalLabel = (UnityEngine_Object_o *)this->fields.intervalLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( !UnityEngine_Object__op_Equality(intervalLabel, 0LL, 0LL) )
    {
      v21 = this->fields.remainLabel;
      if ( !v21 )
        goto LABEL_22;
      UILabel__set_text(v21, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v21 = this->fields.intervalLabel;
      if ( !v21 )
        goto LABEL_22;
      UILabel__set_text(v21, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( interval )
      {
        IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
        if ( IntervalVal >= 1 )
        {
          v23 = IntervalVal;
          if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
            v25 = (System_String_o **)&StringLiteral_2843/*"BATTLE_BUFF_INTERVAL_TURN"*/;
          else
            v25 = (System_String_o **)&StringLiteral_2841/*"BATTLE_BUFF_INTERVAL_COUNT"*/;
          v26 = *v25;
          v27 = this->fields.remainLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
          v21 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2842/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, 0LL);
          if ( v27 )
          {
            UILabel__set_text(v27, (System_String_o *)v21, 0LL);
            v28 = this->fields.intervalLabel;
            v29 = LocalizationManager__Get(v26, 0LL);
            v31 = v23;
            v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
            v21 = (UILabel_o *)System_String__Format(v29, v30, 0LL);
            if ( v28 )
            {
              UILabel__set_text(v28, (System_String_o *)v21, 0LL);
              return;
            }
          }
LABEL_22:
          sub_1BCAA3C(v21, v20);
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