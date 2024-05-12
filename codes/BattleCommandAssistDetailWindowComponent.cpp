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
  UnityEngine_Object_o *commandAssistNameLabel; // x21
  UnityEngine_Object_o *detailLabel; // x21
  UnityEngine_Object_o *closeLabel; // x21
  UnityEngine_Object_o *scrollView; // x21
  BattleData_c *v9; // x0
  int32_t EventId; // w21
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  EventCommandAssistMaster_o *v13; // x22
  EventCommandAssistEntity_o *CurrentEntity; // x0
  int32_t commandAssistId; // w2
  EventCommandAssistEntity_o *v16; // x20
  EventCommandAssistEntity_o *MaxLevelEntity; // x0
  EventCommandAssistEntity_o *v18; // x22
  UILabel_o *v19; // x21
  System_String_o *v20; // x0
  Il2CppObject *name; // x24
  System_String_o *v22; // x23
  __int64 v23; // x2
  Il2CppObject *v24; // x25
  __int64 v25; // x2
  Il2CppObject *v26; // x0
  SkillLvEntity_o *Entity; // x0
  UILabel_o *v28; // x21
  UILabel_o *v29; // x20
  int32_t v30; // [xsp+8h] [xbp-48h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4387D09 & 1) == 0 )
  {
    sub_B775C4(&BattleData_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_3327/*"COMMAND_ASSIST_NAME"*/);
    sub_B775C4(&StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4387D09 = 1;
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
          v9 = BattleData_TypeInfo;
          if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleData_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
          }
          EventId = BattleData__GetEventId((const MethodInfo *)v9);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
          if ( commandData )
          {
            v13 = Master_WarQuestSelectionMaster;
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
              v16 = CurrentEntity;
              MaxLevelEntity = EventCommandAssistMaster__GetMaxLevelEntity(v13, EventId, commandAssistId, 0LL);
              if ( MaxLevelEntity && v16 )
              {
                v18 = MaxLevelEntity;
                v19 = this->fields.commandAssistNameLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3327/*"COMMAND_ASSIST_NAME"*/, 0LL);
                name = (Il2CppObject *)v16->fields.name;
                v22 = v20;
                lv = v16->fields.lv;
                v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv, v23);
                v30 = v18->fields.lv;
                v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v25);
                Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)System_String__Format_44903000(
                                                                                 v22,
                                                                                 name,
                                                                                 v24,
                                                                                 v26,
                                                                                 0LL);
                if ( !v19 )
                  goto LABEL_54;
                UILabel__set_text(v19, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
                Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.commandAssistNameLabel;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_54;
                UILabel__SetCondensedScale((UILabel_o *)Master_WarQuestSelectionMaster, 750, 0LL);
              }
              if ( v16 )
              {
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillLvMaster___);
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_54;
                Entity = SkillLvMaster__GetEntity(
                           (SkillLvMaster_o *)Master_WarQuestSelectionMaster,
                           v16->fields.skillId,
                           v16->fields.skillLv,
                           0LL);
                if ( Entity )
                {
                  v28 = this->fields.detailLabel;
                  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)SkillLvEntity__getDetail_26832724(
                                                                                   Entity,
                                                                                   v16->fields.skillLv,
                                                                                   0,
                                                                                   0LL);
                  if ( !v28 )
                    goto LABEL_54;
                  UILabel__set_text(v28, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
                  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.detailLabel;
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_54;
                  UILabel__SetCondensedScale((UILabel_o *)Master_WarQuestSelectionMaster, 656, 0LL);
                }
              }
              v29 = this->fields.closeLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_3387/*"COMMON_CONFIRM_CLOSE"*/,
                                                                               0LL);
              if ( v29 )
              {
                UILabel__set_text(v29, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
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
          sub_B7769C(Master_WarQuestSelectionMaster, v12);
        }
      }
    }
  }
}


System_String_o *__fastcall BattleCommandAssistDetailWindowComponent__get_closeBtnPath(
        BattleCommandAssistDetailWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4387D0A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17827/*"closeBtn"*/);
    byte_4387D0A = 1;
  }
  return (System_String_o *)StringLiteral_17827/*"closeBtn"*/;
}