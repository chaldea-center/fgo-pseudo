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
  UnityEngine_Object_o *commandAssistNameLabel; // x21
  __int64 v22; // x1
  UnityEngine_Object_o *detailLabel; // x21
  __int64 v24; // x1
  UnityEngine_Object_o *closeLabel; // x21
  __int64 v26; // x1
  UnityEngine_Object_o *scrollView; // x21
  __int64 v28; // x1
  __int64 v29; // x1
  int32_t EventId; // w21
  EventCommandAssistMaster_o *Master_object; // x0
  __int64 v32; // x1
  EventCommandAssistMaster_o *v33; // x22
  EventCommandAssistEntity_o *CurrentEntity; // x0
  int32_t commandAssistId; // w2
  EventCommandAssistEntity_o *v36; // x20
  EventCommandAssistEntity_o *MaxLevelEntity; // x0
  __int64 v38; // x1
  EventCommandAssistEntity_o *v39; // x22
  UILabel_o *v40; // x21
  System_String_o *v41; // x0
  Il2CppObject *name; // x24
  System_String_o *v43; // x23
  Il2CppObject *v44; // x25
  Il2CppObject *v45; // x0
  SkillLvEntity_o *Entity; // x0
  UILabel_o *v47; // x21
  UILabel_o *v48; // x20
  int32_t v49; // [xsp+8h] [xbp-58h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B19070 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleData_TypeInfo, commandData, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillLvMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&StringLiteral_3726/*"COMMAND_ASSIST_NAME"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v19, v20);
    byte_4B19070 = 1;
  }
  commandAssistNameLabel = (UnityEngine_Object_o *)this->fields.commandAssistNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, commandData);
  if ( !UnityEngine_Object__op_Equality(commandAssistNameLabel, 0LL, 0LL) )
  {
    detailLabel = (UnityEngine_Object_o *)this->fields.detailLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    if ( !UnityEngine_Object__op_Equality(detailLabel, 0LL, 0LL) )
    {
      closeLabel = (UnityEngine_Object_o *)this->fields.closeLabel;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      if ( !UnityEngine_Object__op_Equality(closeLabel, 0LL, 0LL) )
      {
        scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
        if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
        {
          if ( !BattleData_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v28);
          EventId = BattleData__GetEventId(0LL);
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
          Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
          if ( commandData )
          {
            v33 = Master_object;
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
              v36 = CurrentEntity;
              MaxLevelEntity = EventCommandAssistMaster__GetMaxLevelEntity(v33, EventId, commandAssistId, 0LL);
              if ( v36 )
              {
                v39 = MaxLevelEntity;
                if ( MaxLevelEntity )
                {
                  v40 = this->fields.commandAssistNameLabel;
                  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
                  v41 = LocalizationManager__Get((System_String_o *)StringLiteral_3726/*"COMMAND_ASSIST_NAME"*/, 0LL);
                  name = (Il2CppObject *)v36->fields.name;
                  v43 = v41;
                  lv = v36->fields.lv;
                  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &lv);
                  v49 = v39->fields.lv;
                  v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
                  Master_object = (EventCommandAssistMaster_o *)System_String__Format_62415660(v43, name, v44, v45, 0LL);
                  if ( !v40 )
                    goto LABEL_45;
                  UILabel__set_text(v40, (System_String_o *)Master_object, 0LL);
                  Master_object = (EventCommandAssistMaster_o *)this->fields.commandAssistNameLabel;
                  if ( !Master_object )
                    goto LABEL_45;
                  UILabel__SetCondensedScale((UILabel_o *)Master_object, 750, 0LL);
                }
              }
              if ( v36 )
              {
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v38);
                Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillLvMaster___);
                if ( !Master_object )
                  goto LABEL_45;
                Entity = SkillLvMaster__GetEntity(
                           (SkillLvMaster_o *)Master_object,
                           v36->fields.skillId,
                           v36->fields.skillLv,
                           0LL);
                if ( Entity )
                {
                  v47 = this->fields.detailLabel;
                  Master_object = (EventCommandAssistMaster_o *)SkillLvEntity__getDetail_40665920(
                                                                  Entity,
                                                                  v36->fields.skillLv,
                                                                  0,
                                                                  0LL);
                  if ( !v47 )
                    goto LABEL_45;
                  UILabel__set_text(v47, (System_String_o *)Master_object, 0LL);
                  Master_object = (EventCommandAssistMaster_o *)this->fields.detailLabel;
                  if ( !Master_object )
                    goto LABEL_45;
                  UILabel__SetCondensedScale((UILabel_o *)Master_object, 656, 0LL);
                }
              }
              v48 = this->fields.closeLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v38);
              Master_object = (EventCommandAssistMaster_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/,
                                                              0LL);
              if ( v48 )
              {
                UILabel__set_text(v48, (System_String_o *)Master_object, 0LL);
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
          sub_1BCAA3C(Master_object, v32);
        }
      }
    }
  }
}


System_String_o *__fastcall BattleCommandAssistDetailWindowComponent__get_closeBtnPath(
        BattleCommandAssistDetailWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19071 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_18203/*"closeBtn"*/, method, v2);
    byte_4B19071 = 1;
  }
  return (System_String_o *)StringLiteral_18203/*"closeBtn"*/;
}