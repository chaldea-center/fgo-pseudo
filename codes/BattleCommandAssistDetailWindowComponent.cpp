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
  BattleData_c *inited; // x0
  int32_t EventId; // w21
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  EventCommandAssistMaster_o *v20; // x22
  EventCommandAssistEntity_o *CurrentEntity; // x0
  int32_t commandAssistId; // w2
  EventCommandAssistEntity_o *v23; // x20
  EventCommandAssistEntity_o *MaxLevelEntity; // x0
  EventCommandAssistEntity_o *v25; // x22
  UILabel_o *v26; // x21
  System_String_o *v27; // x0
  Il2CppObject *name; // x24
  System_String_o *v29; // x23
  Il2CppObject *v30; // x25
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  UILabel_o *v33; // x0
  SkillLvMaster_o *v34; // x0
  SkillLvEntity_o *Entity; // x0
  UILabel_o *v36; // x21
  System_String_o *Detail_23602036; // x0
  UILabel_o *v38; // x0
  UILabel_o *v39; // x20
  System_String_o *v40; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UIWidget_o *v42; // x0
  UIScrollView_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  int32_t v45; // [xsp+8h] [xbp-48h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F697B & 1) == 0 )
  {
    sub_B16FFC(&BattleData_TypeInfo, commandData);
    sub_B16FFC(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_3193/*"COMMAND_ASSIST_NAME"*/, v11);
    sub_B16FFC(&StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, v12);
    byte_40F697B = 1;
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
          inited = BattleData_TypeInfo;
          if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleData_TypeInfo->_2.cctor_finished )
          {
            inited = (BattleData_c *)j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
          }
          EventId = BattleData__GetEventId((const MethodInfo *)inited);
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
          if ( commandData )
          {
            v20 = Master_WarQuestSelectionMaster;
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
              v23 = CurrentEntity;
              MaxLevelEntity = EventCommandAssistMaster__GetMaxLevelEntity(v20, EventId, commandAssistId, 0LL);
              if ( MaxLevelEntity && v23 )
              {
                v25 = MaxLevelEntity;
                v26 = this->fields.commandAssistNameLabel;
                if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !LocalizationManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                }
                v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3193/*"COMMAND_ASSIST_NAME"*/, 0LL);
                name = (Il2CppObject *)v23->fields.name;
                v29 = v27;
                lv = v23->fields.lv;
                v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
                v45 = v25->fields.lv;
                v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
                v32 = System_String__Format_43744796(v29, name, v30, v31, 0LL);
                if ( !v26 )
                  goto LABEL_54;
                UILabel__set_text(v26, v32, 0LL);
                v33 = this->fields.commandAssistNameLabel;
                if ( !v33 )
                  goto LABEL_54;
                UILabel__SetCondensedScale(v33, 750, 0LL);
              }
              if ( v23 )
              {
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                v34 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
                if ( !v34 )
                  goto LABEL_54;
                Entity = SkillLvMaster__GetEntity(v34, v23->fields.skillId, v23->fields.skillLv, 0LL);
                if ( Entity )
                {
                  v36 = this->fields.detailLabel;
                  Detail_23602036 = SkillLvEntity__getDetail_23602036(Entity, v23->fields.skillLv, 0, 0LL);
                  if ( !v36 )
                    goto LABEL_54;
                  UILabel__set_text(v36, Detail_23602036, 0LL);
                  v38 = this->fields.detailLabel;
                  if ( !v38 )
                    goto LABEL_54;
                  UILabel__SetCondensedScale(v38, 656, 0LL);
                }
              }
              v39 = this->fields.closeLabel;
              if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !LocalizationManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              }
              v40 = LocalizationManager__Get((System_String_o *)StringLiteral_3252/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
              if ( v39 )
              {
                UILabel__set_text(v39, v40, 0LL);
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                if ( gameObject )
                {
                  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
                  v42 = (UIWidget_o *)this->fields.detailLabel;
                  if ( v42 )
                  {
                    UIWidget__ResizeCollider(v42, 0LL);
                    v43 = this->fields.scrollView;
                    if ( v43 )
                    {
                      UIScrollView__ResetPosition(v43, 0LL);
                      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                      if ( v44 )
                      {
                        UnityEngine_GameObject__SetActive(v44, 0, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_54:
          sub_B170D4();
        }
      }
    }
  }
}


System_String_o *__fastcall BattleCommandAssistDetailWindowComponent__get_closeBtnPath(
        BattleCommandAssistDetailWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40F697C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_17410/*"closeBtn"*/, method);
    byte_40F697C = 1;
  }
  return (System_String_o *)StringLiteral_17410/*"closeBtn"*/;
}