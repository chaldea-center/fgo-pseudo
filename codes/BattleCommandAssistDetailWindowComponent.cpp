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
  int32_t EventId; // w21
  EventCommandAssistMaster_o *Master_object; // x0
  EventCommandAssistMaster_o *v19; // x22
  EventCommandAssistEntity_o *CurrentEntity; // x0
  int32_t commandAssistId; // w2
  EventCommandAssistEntity_o *v22; // x20
  EventCommandAssistEntity_o *MaxLevelEntity; // x0
  EventCommandAssistEntity_o *v24; // x22
  UILabel_o *v25; // x21
  System_String_o *v26; // x0
  Il2CppObject *name; // x24
  System_String_o *v28; // x23
  Il2CppObject *v29; // x25
  Il2CppObject *v30; // x0
  SkillLvEntity_o *Entity; // x0
  UILabel_o *v32; // x21
  UILabel_o *v33; // x20
  int32_t v34; // [xsp+8h] [xbp-58h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FF188 & 1) == 0 )
  {
    sub_1B640C8(&BattleData_TypeInfo, commandData);
    sub_1B640C8(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&int_TypeInfo, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_3673/*"COMMAND_ASSIST_NAME"*/, v11);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v12);
    byte_49FF188 = 1;
  }
  commandAssistNameLabel = (UnityEngine_Object_o *)this->fields.commandAssistNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(commandAssistNameLabel, 0LL, 0LL) )
  {
    detailLabel = (UnityEngine_Object_o *)this->fields.detailLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(detailLabel, 0LL, 0LL) )
    {
      closeLabel = (UnityEngine_Object_o *)this->fields.closeLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(closeLabel, 0LL, 0LL) )
      {
        scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
        {
          if ( !BattleData_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
          EventId = BattleData__GetEventId(0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
          if ( commandData )
          {
            v19 = Master_object;
            if ( Master_object )
            {
              CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                                Master_object,
                                EventId,
                                commandData->fields.commandAssistId,
                                -1,
                                0,
                                0LL);
              commandAssistId = commandData->fields.commandAssistId;
              v22 = CurrentEntity;
              MaxLevelEntity = EventCommandAssistMaster__GetMaxLevelEntity(v19, EventId, commandAssistId, 0LL);
              if ( v22 )
              {
                v24 = MaxLevelEntity;
                if ( MaxLevelEntity )
                {
                  v25 = this->fields.commandAssistNameLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                  v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3673/*"COMMAND_ASSIST_NAME"*/, 0LL);
                  name = (Il2CppObject *)v22->fields.name;
                  v28 = v26;
                  lv = v22->fields.lv;
                  v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
                  v34 = v24->fields.lv;
                  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
                  Master_object = (EventCommandAssistMaster_o *)System_String__Format_61389836(v28, name, v29, v30, 0LL);
                  if ( !v25 )
                    goto LABEL_45;
                  UILabel__set_text(v25, (System_String_o *)Master_object, 0LL);
                  Master_object = (EventCommandAssistMaster_o *)this->fields.commandAssistNameLabel;
                  if ( !Master_object )
                    goto LABEL_45;
                  UILabel__SetCondensedScale((UILabel_o *)Master_object, 750, 0LL);
                }
              }
              if ( v22 )
              {
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
                if ( !Master_object )
                  goto LABEL_45;
                Entity = SkillLvMaster__GetEntity(
                           (SkillLvMaster_o *)Master_object,
                           v22->fields.skillId,
                           v22->fields.skillLv,
                           0LL);
                if ( Entity )
                {
                  v32 = this->fields.detailLabel;
                  Master_object = (EventCommandAssistMaster_o *)SkillLvEntity__getDetail_39520556(
                                                                  Entity,
                                                                  v22->fields.skillLv,
                                                                  0,
                                                                  0LL);
                  if ( !v32 )
                    goto LABEL_45;
                  UILabel__set_text(v32, (System_String_o *)Master_object, 0LL);
                  Master_object = (EventCommandAssistMaster_o *)this->fields.detailLabel;
                  if ( !Master_object )
                    goto LABEL_45;
                  UILabel__SetCondensedScale((UILabel_o *)Master_object, 656, 0LL);
                }
              }
              v33 = this->fields.closeLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Master_object = (EventCommandAssistMaster_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/,
                                                              0LL);
              if ( v33 )
              {
                UILabel__set_text(v33, (System_String_o *)Master_object, 0LL);
                Master_object = (EventCommandAssistMaster_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
                if ( Master_object )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
                  Master_object = (EventCommandAssistMaster_o *)this->fields.detailLabel;
                  if ( Master_object )
                  {
                    UIWidget__ResizeCollider((UIWidget_o *)Master_object, 0LL);
                    Master_object = (EventCommandAssistMaster_o *)this->fields.scrollView;
                    if ( Master_object )
                    {
                      UIScrollView__ResetPosition((UIScrollView_o *)Master_object, 0LL);
                      Master_object = (EventCommandAssistMaster_o *)UnityEngine_Component__get_gameObject(
                                                                      (UnityEngine_Component_o *)this,
                                                                      0LL);
                      if ( Master_object )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_45:
          sub_1B64324(Master_object);
        }
      }
    }
  }
}


System_String_o *__fastcall BattleCommandAssistDetailWindowComponent__get_closeBtnPath(
        BattleCommandAssistDetailWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF189 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_17951/*"closeBtn"*/, method);
    byte_49FF189 = 1;
  }
  return (System_String_o *)StringLiteral_17951/*"closeBtn"*/;
}