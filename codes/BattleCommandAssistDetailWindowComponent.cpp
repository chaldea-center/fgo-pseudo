void BattleCommandAssistDetailWindowComponent___ctor(
        BattleCommandAssistDetailWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleCommandAssistDetailWindowComponent__SetCommandAssistInfo(
        BattleCommandAssistDetailWindowComponent_o *this,
        BattleCommandData_o *commandData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *commandAssistNameLabel; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *detailLabel; // x21
  __int64 v8; // x1
  UnityEngine_Object_o *closeLabel; // x21
  __int64 v10; // x1
  UnityEngine_Object_o *scrollView; // x21
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t EventId; // w21
  EventCommandAssistMaster_o *Master_object; // x0
  __int64 v16; // x1
  EventCommandAssistMaster_o *v17; // x22
  EventCommandAssistEntity_o *CurrentEntity; // x0
  int32_t commandAssistId; // w2
  EventCommandAssistEntity_o *v20; // x20
  EventCommandAssistEntity_o *MaxLevelEntity; // x0
  __int64 v22; // x1
  EventCommandAssistEntity_o *v23; // x22
  UILabel_o *v24; // x21
  System_String_o *v25; // x23
  Il2CppObject *name; // x24
  Il2CppObject *v27; // x25
  Il2CppObject *v28; // x0
  SkillLvEntity_o *Entity; // x0
  UILabel_o *v30; // x21
  UILabel_o *v31; // x20
  int32_t v32; // [xsp+8h] [xbp-58h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_593BD03 & 1) == 0 )
  {
    sub_21FFC50(&BattleData_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_3755/*"COMMAND_ASSIST_NAME"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    byte_593BD03 = 1;
  }
  commandAssistNameLabel = (UnityEngine_Object_o *)this->fields.commandAssistNameLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, commandData);
  if ( !UnityEngine_Object__op_Equality(commandAssistNameLabel, 0, 0) )
  {
    detailLabel = (UnityEngine_Object_o *)this->fields.detailLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( !UnityEngine_Object__op_Equality(detailLabel, 0, 0) )
    {
      closeLabel = (UnityEngine_Object_o *)this->fields.closeLabel;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( !UnityEngine_Object__op_Equality(closeLabel, 0, 0) )
      {
        scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
        if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
        {
          if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v12);
          EventId = BattleData__GetEventId(0);
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
          Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
          if ( !commandData )
            goto LABEL_45;
          v17 = Master_object;
          if ( !Master_object )
            goto LABEL_45;
          CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                            Master_object,
                            EventId,
                            commandData->fields.commandAssistId,
                            -1,
                            0,
                            0);
          commandAssistId = commandData->fields.commandAssistId;
          v20 = CurrentEntity;
          MaxLevelEntity = EventCommandAssistMaster__GetMaxLevelEntity(v17, EventId, commandAssistId, 0);
          if ( v20 && (v23 = MaxLevelEntity) != 0 )
          {
            v24 = this->fields.commandAssistNameLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
            v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3755/*"COMMAND_ASSIST_NAME"*/, 0);
            name = (Il2CppObject *)v20->fields.name;
            lv = v20->fields.lv;
            v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &lv);
            v32 = v23->fields.lv;
            v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v32);
            Master_object = (EventCommandAssistMaster_o *)System_String__Format_75484644(v25, name, v27, v28, 0);
            if ( !v24 )
              goto LABEL_45;
            UILabel__set_text(v24, (System_String_o *)Master_object, 0);
            Master_object = (EventCommandAssistMaster_o *)this->fields.commandAssistNameLabel;
            if ( !Master_object )
              goto LABEL_45;
            UILabel__SetCondensedScale((UILabel_o *)Master_object, 750, 0, 0);
          }
          else if ( !v20 )
          {
LABEL_36:
            v31 = this->fields.closeLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
            Master_object = (EventCommandAssistMaster_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/,
                                                            0);
            if ( v31 )
            {
              UILabel__set_text(v31, (System_String_o *)Master_object, 0);
              Master_object = (EventCommandAssistMaster_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
              if ( Master_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
                Master_object = (EventCommandAssistMaster_o *)this->fields.detailLabel;
                if ( Master_object )
                {
                  UIWidget__ResizeCollider((UIWidget_o *)Master_object, 0);
                  Master_object = (EventCommandAssistMaster_o *)this->fields.scrollView;
                  if ( Master_object )
                  {
                    UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0);
                    Master_object = (EventCommandAssistMaster_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
                    if ( Master_object )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
                      return;
                    }
                  }
                }
              }
            }
LABEL_45:
            sub_21FFECC(Master_object, v16);
          }
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
          Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillLvMaster___);
          if ( !Master_object )
            goto LABEL_45;
          Entity = SkillLvMaster__GetEntity(
                     (SkillLvMaster_o *)Master_object,
                     v20->fields.skillId,
                     v20->fields.skillLv,
                     0);
          if ( Entity )
          {
            v30 = this->fields.detailLabel;
            Master_object = (EventCommandAssistMaster_o *)SkillLvEntity__getDetail_49837896(
                                                            Entity,
                                                            v20->fields.skillLv,
                                                            0,
                                                            0);
            if ( !v30 )
              goto LABEL_45;
            UILabel__set_text(v30, (System_String_o *)Master_object, 0);
            Master_object = (EventCommandAssistMaster_o *)this->fields.detailLabel;
            if ( !Master_object )
              goto LABEL_45;
            UILabel__SetCondensedScale((UILabel_o *)Master_object, 656, 0, 0);
          }
          goto LABEL_36;
        }
      }
    }
  }
}


System_String_o *BattleCommandAssistDetailWindowComponent__get_closeBtnPath(
        BattleCommandAssistDetailWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_593BD04 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_18776/*"closeBtn"*/);
    byte_593BD04 = 1;
  }
  return (System_String_o *)StringLiteral_18776/*"closeBtn"*/;
}