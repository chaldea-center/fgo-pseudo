void __fastcall BattleBuffListObjectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418AD11 & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffListObjectComponent_TypeInfo, v1);
    byte_418AD11 = 1;
  }
  BattleBuffListObjectComponent_TypeInfo->static_fields->DEFAULT_FONT_SIZE = 17;
}


void __fastcall BattleBuffListObjectComponent___ctor(BattleBuffListObjectComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
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
  Il2CppObject *v22; // x0
  int v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418AD10 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, interval);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_2380/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, v7);
    sub_B2C35C(&StringLiteral_2381/*"BATTLE_BUFF_INTERVAL_TURN"*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    sub_B2C35C(&StringLiteral_2379/*"BATTLE_BUFF_INTERVAL_COUNT"*/, v10);
    byte_418AD10 = 1;
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
      v14 = this->fields.remainLabel;
      if ( !v14 )
        goto LABEL_25;
      UILabel__set_text(v14, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      v14 = this->fields.intervalLabel;
      if ( !v14 )
        goto LABEL_25;
      UILabel__set_text(v14, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( interval )
      {
        IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
        if ( IntervalVal >= 1 )
        {
          v16 = IntervalVal;
          if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
            v17 = (System_String_o **)&StringLiteral_2381/*"BATTLE_BUFF_INTERVAL_TURN"*/;
          else
            v17 = (System_String_o **)&StringLiteral_2379/*"BATTLE_BUFF_INTERVAL_COUNT"*/;
          v18 = *v17;
          v19 = this->fields.remainLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v14 = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2380/*"BATTLE_BUFF_INTERVAL_REMAIN"*/, 0LL);
          if ( v19 )
          {
            UILabel__set_text(v19, (System_String_o *)v14, 0LL);
            v20 = this->fields.intervalLabel;
            v21 = LocalizationManager__Get(v18, 0LL);
            v23 = v16;
            v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
            v14 = (UILabel_o *)System_String__Format(v21, v22, 0LL);
            if ( v20 )
            {
              UILabel__set_text(v20, (System_String_o *)v14, 0LL);
              return;
            }
          }
LABEL_25:
          sub_B2C434(v14, v13);
        }
      }
    }
  }
}


void __fastcall BattleBuffListObjectComponent__setData(
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  DataManager_o *v16; // x21
  UILabel_o *confLabel; // x22
  System_String_o *lookup; // x21
  BattleBuffListObjectComponent_c *v19; // x0
  const MethodInfo *v20; // x2
  UILabel_o *atTurnLabel; // x21
  System_String_o *v22; // x0
  int32_t turn; // w8
  System_String_o *v24; // x22
  int v25; // w8
  Il2CppObject *v26; // x0
  UILabel_o *atCountLabel; // x21
  System_String_o *v28; // x22
  Il2CppObject *v29; // x0
  UILabel_o *v30; // x21
  int32_t count; // [xsp+8h] [xbp-28h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418AD0F & 1) == 0 )
  {
    sub_B2C35C(&BattleBuffListObjectComponent_TypeInfo, buffData);
    sub_B2C35C(&Method_DataManager_GetMasterData_BuffMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_2382/*"BATTLE_BUFF_TURN"*/, v10);
    sub_B2C35C(&StringLiteral_1/*""*/, v11);
    sub_B2C35C(&StringLiteral_2376/*"BATTLE_BUFF_COUNT"*/, v12);
    sub_B2C35C(&StringLiteral_2375/*"BATTLE_BUFF_BOOST"*/, v13);
    byte_418AD0F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !buffData )
    goto LABEL_38;
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                buffData->fields.buffId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !this->fields.buffIcon )
    goto LABEL_38;
  v16 = Instance;
  BattleServantBuffIconComponent__setIcon_21208020(this->fields.buffIcon, buffData, 0LL);
  if ( !v16 )
    goto LABEL_38;
  Instance = (DataManager_o *)this->fields.nameLabel;
  if ( !Instance )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)v16->fields.datalist, 0LL);
  confLabel = this->fields.confLabel;
  lookup = (System_String_o *)v16->fields.lookup;
  v19 = BattleBuffListObjectComponent_TypeInfo;
  if ( (BYTE3(BattleBuffListObjectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffListObjectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffListObjectComponent_TypeInfo);
    v19 = BattleBuffListObjectComponent_TypeInfo;
  }
  WrapControlText__textAdjust(confLabel, lookup, v19->static_fields->DEFAULT_FONT_SIZE, 0, 0, 0LL);
  Instance = (DataManager_o *)this->fields.atTurnLabel;
  if ( !Instance )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  Instance = (DataManager_o *)this->fields.atCountLabel;
  if ( !Instance )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2382/*"BATTLE_BUFF_TURN"*/, 0LL);
      turn = buffData->fields.turn;
      v24 = v22;
      if ( turn + 1 >= 0 )
        v25 = turn + 1;
      else
        v25 = turn + 2;
      v32 = BattleUtility__FloorToInt((float)(v25 >> 1), 0LL);
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
      Instance = (DataManager_o *)System_String__Format(v24, v26, 0LL);
      if ( !atTurnLabel )
        goto LABEL_38;
      UILabel__set_text(atTurnLabel, (System_String_o *)Instance, 0LL);
    }
    if ( buffData->fields.count >= 1 )
    {
      atCountLabel = this->fields.atCountLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_2376/*"BATTLE_BUFF_COUNT"*/, 0LL);
      count = buffData->fields.count;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &count);
      Instance = (DataManager_o *)System_String__Format(v28, v29, 0LL);
      if ( !atCountLabel )
        goto LABEL_38;
      UILabel__set_text(atCountLabel, (System_String_o *)Instance, 0LL);
    }
  }
  if ( buffData->fields.turn <= 0 && buffData->fields.isBoost )
  {
    v30 = this->fields.atTurnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Instance = (DataManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2375/*"BATTLE_BUFF_BOOST"*/, 0LL);
    if ( v30 )
    {
      UILabel__set_text(v30, (System_String_o *)Instance, 0LL);
      goto LABEL_37;
    }
LABEL_38:
    sub_B2C434(Instance, v15);
  }
LABEL_37:
  BattleBuffListObjectComponent__SetInterval(this, buffData->fields._IntervalData_k__BackingField, v20);
}