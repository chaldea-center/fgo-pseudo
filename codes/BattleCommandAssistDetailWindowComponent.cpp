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
  UnityEngine_Object_o *detailLabel; // x21
  UnityEngine_Object_o *closeLabel; // x21
  UnityEngine_Object_o *scrollView; // x21
  int32_t EventId; // w21
  EventCommandAssistMaster_o *Master_object; // x0
  __int64 v11; // x1
  EventCommandAssistMaster_o *v12; // x22
  EventCommandAssistEntity_o *CurrentEntity; // x0
  int32_t commandAssistId; // w2
  EventCommandAssistEntity_o *v15; // x20
  EventCommandAssistEntity_o *MaxLevelEntity; // x0
  EventCommandAssistEntity_o *v17; // x22
  UILabel_o *v18; // x21
  System_String_o *v19; // x0
  Il2CppObject *name; // x24
  System_String_o *v21; // x23
  Il2CppObject *v22; // x25
  Il2CppObject *v23; // x0
  SkillLvEntity_o *Entity; // x0
  UILabel_o *v25; // x21
  UILabel_o *v26; // x20
  int32_t v27; // [xsp+8h] [xbp-58h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D33F03 & 1) == 0 )
  {
    sub_1C93AD4(&BattleData_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_3639/*"COMMAND_ASSIST_NAME"*/);
    sub_1C93AD4(&StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4D33F03 = 1;
  }
  commandAssistNameLabel = (UnityEngine_Object_o *)this->fields.commandAssistNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(commandAssistNameLabel, 0, 0) )
  {
    detailLabel = (UnityEngine_Object_o *)this->fields.detailLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(detailLabel, 0, 0) )
    {
      closeLabel = (UnityEngine_Object_o *)this->fields.closeLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(closeLabel, 0, 0) )
      {
        scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(scrollView, 0, 0) )
        {
          if ( !BattleData_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
          EventId = BattleData__GetEventId(0);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
          if ( commandData )
          {
            v12 = Master_object;
            if ( Master_object )
            {
              CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                                Master_object,
                                EventId,
                                commandData->fields.commandAssistId,
                                -1,
                                0,
                                0);
              commandAssistId = commandData->fields.commandAssistId;
              v15 = CurrentEntity;
              MaxLevelEntity = EventCommandAssistMaster__GetMaxLevelEntity(v12, EventId, commandAssistId, 0);
              if ( v15 )
              {
                v17 = MaxLevelEntity;
                if ( MaxLevelEntity )
                {
                  v18 = this->fields.commandAssistNameLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3639/*"COMMAND_ASSIST_NAME"*/, 0);
                  name = (Il2CppObject *)v15->fields.name;
                  v21 = v19;
                  lv = v15->fields.lv;
                  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
                  v27 = v17->fields.lv;
                  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
                  Master_object = (EventCommandAssistMaster_o *)System_String__Format_64467100(v21, name, v22, v23, 0);
                  if ( !v18 )
                    goto LABEL_45;
                  UILabel__set_text(v18, (System_String_o *)Master_object, 0);
                  Master_object = (EventCommandAssistMaster_o *)this->fields.commandAssistNameLabel;
                  if ( !Master_object )
                    goto LABEL_45;
                  UILabel__SetCondensedScale((UILabel_o *)Master_object, 750, 0, 0);
                }
              }
              if ( v15 )
              {
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_SkillLvMaster___);
                if ( !Master_object )
                  goto LABEL_45;
                Entity = SkillLvMaster__GetEntity(
                           (SkillLvMaster_o *)Master_object,
                           v15->fields.skillId,
                           v15->fields.skillLv,
                           0);
                if ( Entity )
                {
                  v25 = this->fields.detailLabel;
                  Master_object = (EventCommandAssistMaster_o *)SkillLvEntity__getDetail_43584536(
                                                                  Entity,
                                                                  v15->fields.skillLv,
                                                                  0,
                                                                  0);
                  if ( !v25 )
                    goto LABEL_45;
                  UILabel__set_text(v25, (System_String_o *)Master_object, 0);
                  Master_object = (EventCommandAssistMaster_o *)this->fields.detailLabel;
                  if ( !Master_object )
                    goto LABEL_45;
                  UILabel__SetCondensedScale((UILabel_o *)Master_object, 656, 0, 0);
                }
              }
              v26 = this->fields.closeLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Master_object = (EventCommandAssistMaster_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/,
                                                              0);
              if ( v26 )
              {
                UILabel__set_text(v26, (System_String_o *)Master_object, 0);
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
            }
          }
LABEL_45:
          sub_1C93D2C(Master_object, v11);
        }
      }
    }
  }
}


System_String_o *BattleCommandAssistDetailWindowComponent__get_closeBtnPath(
        BattleCommandAssistDetailWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D33F04 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18161/*"closeBtn"*/);
    byte_4D33F04 = 1;
  }
  return (System_String_o *)StringLiteral_18161/*"closeBtn"*/;
}