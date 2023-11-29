void __fastcall BattleBuffListObjectComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FD459 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffListObjectComponent_TypeInfo, v1);
    byte_40FD459 = 1;
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
  UILabel_o *v13; // x0
  UILabel_o *v14; // x0
  int32_t IntervalVal; // w0
  int v16; // w21
  System_String_o **v17; // x8
  System_String_o *v18; // x20
  UILabel_o *v19; // x22
  System_String_o *v20; // x0
  UILabel_o *v21; // x19
  System_String_o *v22; // x20
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  int v25; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FD458 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, interval);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_2370, v7);
    sub_B16FFC(&StringLiteral_2371, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    sub_B16FFC(&StringLiteral_2369, v10);
    byte_40FD458 = 1;
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
      v13 = this->fields.remainLabel;
      if ( !v13 )
        goto LABEL_25;
      UILabel__set_text(v13, (System_String_o *)StringLiteral_1, 0LL);
      v14 = this->fields.intervalLabel;
      if ( !v14 )
        goto LABEL_25;
      UILabel__set_text(v14, (System_String_o *)StringLiteral_1, 0LL);
      if ( interval )
      {
        IntervalVal = BattleBuffData_IntervalData__GetIntervalVal(interval, 0LL);
        if ( IntervalVal >= 1 )
        {
          v16 = IntervalVal;
          if ( BattleBuffData_IntervalData__get_HasIntervalTurn(interval, 0LL) )
            v17 = (System_String_o **)&StringLiteral_2371;
          else
            v17 = (System_String_o **)&StringLiteral_2369;
          v18 = *v17;
          v19 = this->fields.remainLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2370, 0LL);
          if ( v19 )
          {
            UILabel__set_text(v19, v20, 0LL);
            v21 = this->fields.intervalLabel;
            v22 = LocalizationManager__Get(v18, 0LL);
            v25 = v16;
            v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
            v24 = System_String__Format(v22, v23, 0LL);
            if ( v21 )
            {
              UILabel__set_text(v21, v24, 0LL);
              return;
            }
          }
LABEL_25:
          sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v17; // x21
  UILabel_o *nameLabel; // x0
  UILabel_o *confLabel; // x22
  System_String_o *name; // x21
  BattleBuffListObjectComponent_c *v21; // x0
  UILabel_o *atTurnLabel; // x0
  UILabel_o *atCountLabel; // x0
  const MethodInfo *v24; // x2
  UILabel_o *v25; // x21
  System_String_o *v26; // x0
  int32_t turn; // w8
  System_String_o *v28; // x22
  int v29; // w8
  Il2CppObject *v30; // x0
  System_String_o *v31; // x0
  UILabel_o *v32; // x21
  System_String_o *v33; // x22
  Il2CppObject *v34; // x0
  System_String_o *v35; // x0
  UILabel_o *v36; // x21
  System_String_o *v37; // x0
  int32_t count; // [xsp+8h] [xbp-28h] BYREF
  int32_t v39; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FD457 & 1) == 0 )
  {
    sub_B16FFC(&BattleBuffListObjectComponent_TypeInfo, buffData);
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6);
    sub_B16FFC(&int_TypeInfo, v7);
    sub_B16FFC(&LocalizationManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_2372, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    sub_B16FFC(&StringLiteral_2366, v12);
    sub_B16FFC(&StringLiteral_2365, v13);
    byte_40FD457 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !buffData )
    goto LABEL_38;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             buffData->fields.buffId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !this->fields.buffIcon )
    goto LABEL_38;
  v17 = Entity;
  BattleServantBuffIconComponent__setIcon_22678936(this->fields.buffIcon, buffData, 0LL);
  if ( !v17 )
    goto LABEL_38;
  nameLabel = this->fields.nameLabel;
  if ( !nameLabel )
    goto LABEL_38;
  UILabel__set_text(nameLabel, v17->fields.age, 0LL);
  confLabel = this->fields.confLabel;
  name = v17->fields.name;
  v21 = BattleBuffListObjectComponent_TypeInfo;
  if ( (BYTE3(BattleBuffListObjectComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBuffListObjectComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffListObjectComponent_TypeInfo);
    v21 = BattleBuffListObjectComponent_TypeInfo;
  }
  WrapControlText__textAdjust(confLabel, name, v21->static_fields->DEFAULT_FONT_SIZE, 0, 0, 0LL);
  atTurnLabel = this->fields.atTurnLabel;
  if ( !atTurnLabel )
    goto LABEL_38;
  UILabel__set_text(atTurnLabel, (System_String_o *)StringLiteral_1, 0LL);
  atCountLabel = this->fields.atCountLabel;
  if ( !atCountLabel )
    goto LABEL_38;
  UILabel__set_text(atCountLabel, (System_String_o *)StringLiteral_1, 0LL);
  if ( !buffData->fields.isHideParam )
  {
    if ( buffData->fields.turn >= 1 )
    {
      v25 = this->fields.atTurnLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2372, 0LL);
      turn = buffData->fields.turn;
      v28 = v26;
      if ( turn + 1 >= 0 )
        v29 = turn + 1;
      else
        v29 = turn + 2;
      v39 = BattleUtility__FloorToInt((float)(v29 >> 1), 0LL);
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
      v31 = System_String__Format(v28, v30, 0LL);
      if ( !v25 )
        goto LABEL_38;
      UILabel__set_text(v25, v31, 0LL);
    }
    if ( buffData->fields.count >= 1 )
    {
      v32 = this->fields.atCountLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v33 = LocalizationManager__Get((System_String_o *)StringLiteral_2366, 0LL);
      count = buffData->fields.count;
      v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &count);
      v35 = System_String__Format(v33, v34, 0LL);
      if ( !v32 )
        goto LABEL_38;
      UILabel__set_text(v32, v35, 0LL);
    }
  }
  if ( buffData->fields.turn <= 0 && buffData->fields.isBoost )
  {
    v36 = this->fields.atTurnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_2365, 0LL);
    if ( v36 )
    {
      UILabel__set_text(v36, v37, 0LL);
      goto LABEL_37;
    }
LABEL_38:
    sub_B170D4();
  }
LABEL_37:
  BattleBuffListObjectComponent__SetInterval(this, buffData->fields._IntervalData_k__BackingField, v24);
}