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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  UnityEngine_Object_o *commandAssistNameLabel; // x21
  UnityEngine_Object_o *detailLabel; // x21
  UnityEngine_Object_o *closeLabel; // x21
  UnityEngine_Object_o *scrollView; // x21
  BattleData_c *v34; // x0
  int32_t EventId; // w21
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v37; // x1
  EventCommandAssistMaster_o *v38; // x22
  EventCommandAssistEntity_o *CurrentEntity; // x0
  int32_t commandAssistId; // w2
  EventCommandAssistEntity_o *v41; // x20
  EventCommandAssistEntity_o *MaxLevelEntity; // x0
  EventCommandAssistEntity_o *v43; // x22
  UILabel_o *v44; // x21
  System_String_o *v45; // x0
  Il2CppObject *name; // x24
  System_String_o *v47; // x23
  Il2CppObject *v48; // x25
  Il2CppObject *v49; // x0
  SkillLvEntity_o *Entity; // x0
  UILabel_o *v51; // x21
  UILabel_o *v52; // x20
  int32_t v53; // [xsp+8h] [xbp-48h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E537B & 1) == 0 )
  {
    sub_B5D5C4(&BattleData_TypeInfo, (_DWORD)commandData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillLvMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&int_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_3267/*"COMMAND_ASSIST_NAME"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/, v27, v28, v29);
    byte_42E537B = 1;
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
          v34 = BattleData_TypeInfo;
          if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleData_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
          }
          EventId = BattleData__GetEventId((const MethodInfo *)v34);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
          if ( commandData )
          {
            v38 = Master_WarQuestSelectionMaster;
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
              v41 = CurrentEntity;
              MaxLevelEntity = EventCommandAssistMaster__GetMaxLevelEntity(v38, EventId, commandAssistId, 0LL);
              if ( MaxLevelEntity && v41 )
              {
                v43 = MaxLevelEntity;
                v44 = this->fields.commandAssistNameLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v45 = LocalizationManager__Get((System_String_o *)StringLiteral_3267/*"COMMAND_ASSIST_NAME"*/, 0LL);
                name = (Il2CppObject *)v41->fields.name;
                v47 = v45;
                lv = v41->fields.lv;
                v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
                v53 = v43->fields.lv;
                v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
                Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)System_String__Format_44578852(
                                                                                 v47,
                                                                                 name,
                                                                                 v48,
                                                                                 v49,
                                                                                 0LL);
                if ( !v44 )
                  goto LABEL_54;
                UILabel__set_text(v44, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
                Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.commandAssistNameLabel;
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_54;
                UILabel__SetCondensedScale((UILabel_o *)Master_WarQuestSelectionMaster, 750, 0LL);
              }
              if ( v41 )
              {
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillLvMaster___);
                if ( !Master_WarQuestSelectionMaster )
                  goto LABEL_54;
                Entity = SkillLvMaster__GetEntity(
                           (SkillLvMaster_o *)Master_WarQuestSelectionMaster,
                           v41->fields.skillId,
                           v41->fields.skillLv,
                           0LL);
                if ( Entity )
                {
                  v51 = this->fields.detailLabel;
                  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)SkillLvEntity__getDetail_26810736(
                                                                                   Entity,
                                                                                   v41->fields.skillLv,
                                                                                   0,
                                                                                   0LL);
                  if ( !v51 )
                    goto LABEL_54;
                  UILabel__set_text(v51, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
                  Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)this->fields.detailLabel;
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_54;
                  UILabel__SetCondensedScale((UILabel_o *)Master_WarQuestSelectionMaster, 656, 0LL);
                }
              }
              v52 = this->fields.closeLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)LocalizationManager__Get(
                                                                               (System_String_o *)StringLiteral_3327/*"COMMON_CONFIRM_CLOSE"*/,
                                                                               0LL);
              if ( v52 )
              {
                UILabel__set_text(v52, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
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
          sub_B5D69C(Master_WarQuestSelectionMaster, v37);
        }
      }
    }
  }
}


System_String_o *__fastcall BattleCommandAssistDetailWindowComponent__get_closeBtnPath(
        BattleCommandAssistDetailWindowComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E537C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17695/*"closeBtn"*/, (_DWORD)method, v2, v3);
    byte_42E537C = 1;
  }
  return (System_String_o *)StringLiteral_17695/*"closeBtn"*/;
}