void __fastcall BattleCommandAssistDetailWindowComponent___ctor(
        BattleCommandAssistDetailWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleCommandAssistDetailWindowComponent__SetCommandAssistInfo(
        BattleCommandAssistDetailWindowComponent_o *this,
        BattleCommandData_o *commandData,
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
  UnityEngine_Object_o *commandAssistNameLabel; // x21
  UnityEngine_Object_o *detailLabel; // x21
  UnityEngine_Object_o *closeLabel; // x21
  UnityEngine_Object_o *scrollView; // x21
  BattleData_c *v17; // x0
  int32_t EventId; // w21
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v20; // x1
  EventCommandAssistMaster_o *v21; // x22
  EventCommandAssistEntity_o *CurrentEntity; // x0
  int32_t commandAssistId; // w2
  EventCommandAssistEntity_o *v24; // x20
  EventCommandAssistEntity_o *MaxLevelEntity; // x0
  EventCommandAssistEntity_o *v26; // x22
  UILabel_o *v27; // x21
  System_String_o *v28; // x0
  Il2CppObject *name; // x24
  System_String_o *v30; // x23
  Il2CppObject *v31; // x25
  Il2CppObject *v32; // x0
  SkillLvEntity_o *Entity; // x0
  UILabel_o *v34; // x21
  UILabel_o *v35; // x20
  int32_t v36; // [xsp+8h] [xbp-48h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_418425B & 1) == 0 )
  {
    sub_B2C35C(&BattleData_TypeInfo, commandData);
    sub_B2C35C(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&int_TypeInfo, v8);
    sub_B2C35C(&LocalizationManager_TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_3202/*"COMMAND_ASSIST_NAME"*/, v11);
    sub_B2C35C(&StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/, v12);
    byte_418425B = 1;
  }
  commandAssistNameLabel = (UnityEngine_Object_o *)this->fields.commandAssistNameLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(commandAssistNameLabel, 0LL, 0LL) )
  {
    detailLabel = (UnityEngine_Object_o *)this->fields.detailLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(detailLabel, 0LL, 0LL) )
    {
      closeLabel = (UnityEngine_Object_o *)this->fields.closeLabel;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(closeLabel, 0LL, 0LL) )
      {
        scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
        {
          v17 = BattleData_TypeInfo;
          if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleData_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
          }
          EventId = BattleData__GetEventId((const MethodInfo *)v17);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
          if ( commandData )
          {
            v21 = Master_WarQuestSelectionMaster;
            if ( Master_WarQuestSelectionMaster )
            {
              CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                                Master_WarQuestSelectionMaster,
                                EventId,
                                commandData->fields.commandAssistId,
                                -1,
                                0,
                                0LL);
              commandAssistId = commandData->fields.commandAssistId;
              v24 = CurrentEntity;
              MaxLevelEntity = EventCommandAssistMaster__GetMaxLevelEntity(v21, EventId, commandAssistId, 0LL);
              if ( MaxLevelEntity && v24 )
              {
                v26 = MaxLevelEntity;
                v27 = this->fields.commandAssistNameLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3202/*"COMMAND_ASSIST_NAME"*/, 0LL);
                name = (Il2CppObject *)v24->fields.name;
                v30 = v28;
                lv = v24->fields.lv;
                v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
                v36 = v26->fields.lv;
                v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
                Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)System_String__Format_44306596(
                                                                                 v30,
                                                                                 name,
                                                                                 v31,
                                                                                 v32,
                                                                                 0LL);
                if ( !v27 )
                  goto LABEL_54;
                UILabel__set_text(v27, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
                Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.commandAssistNameLabel;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_54;
                UILabel__SetCondensedScale((UILabel_o *)Master_WarQuestSelectionMaster, 750, 0LL);
              }
              if ( v24 )
              {
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_54;
                Entity = SkillLvMaster__GetEntity(
                           (SkillLvMaster_o *)Master_WarQuestSelectionMaster,
                           v24->fields.skillId,
                           v24->fields.skillLv,
                           0LL);
                if ( Entity )
                {
                  v34 = this->fields.detailLabel;
                  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)SkillLvEntity__getDetail_23775852(
                                                                                   Entity,
                                                                                   v24->fields.skillLv,
                                                                                   0,
                                                                                   0LL);
                  if ( !v34 )
                    goto LABEL_54;
                  UILabel__set_text(v34, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
                  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.detailLabel;
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_54;
                  UILabel__SetCondensedScale((UILabel_o *)Master_WarQuestSelectionMaster, 656, 0LL);
                }
              }
              v35 = this->fields.closeLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_3261/*"COMMON_CONFIRM_CLOSE"*/,
                                                                               0LL);
              if ( v35 )
              {
                UILabel__set_text(v35, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
                Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)UnityEngine_Component__get_gameObject(
                                                                                 (UnityEngine_Component_o *)this,
                                                                                 0LL);
                if ( Master_WarQuestSelectionMaster )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
                  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.detailLabel;
                  if ( Master_WarQuestSelectionMaster )
                  {
                    UIWidget__ResizeCollider((UIWidget_o *)Master_WarQuestSelectionMaster, 0LL);
                    Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.scrollView;
                    if ( Master_WarQuestSelectionMaster )
                    {
                      UIScrollView__ResetPosition((UIScrollView_o *)Master_WarQuestSelectionMaster, 0LL);
                      Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)UnityEngine_Component__get_gameObject(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       0LL);
                      if ( Master_WarQuestSelectionMaster )
                      {
                        UnityEngine_GameObject__SetActive(
                          (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                          0,
                          0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_54:
          sub_B2C434(Master_WarQuestSelectionMaster, v20);
        }
      }
    }
  }
}


System_String_o *__fastcall BattleCommandAssistDetailWindowComponent__get_closeBtnPath(
        BattleCommandAssistDetailWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_418425C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17476/*"closeBtn"*/, method);
    byte_418425C = 1;
  }
  return (System_String_o *)StringLiteral_17476/*"closeBtn"*/;
}