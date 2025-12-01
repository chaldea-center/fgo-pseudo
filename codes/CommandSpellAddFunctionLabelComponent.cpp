void CommandSpellAddFunctionLabelComponent___ctor(
        CommandSpellAddFunctionLabelComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CommandSpellAddFunctionLabelComponent__Awake(
        CommandSpellAddFunctionLabelComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void CommandSpellAddFunctionLabelComponent__SetData(
        CommandSpellAddFunctionLabelComponent_o *this,
        BattleServantData_o *svtData,
        int32_t commandSpellId,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  ClassBoardCommandSpellMaster_o *Master_object; // x0
  __int64 v10; // x1
  ClassBoardCommandSpellMaster_o *v11; // x22
  bool IsAddFunctionCommandSpell; // w24
  int32_t battleGenderType; // w8
  UISprite_o *commandSpellIcon; // x23
  int32_t v15; // w24
  char v16; // w21
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  bool v19; // w24
  int v20; // w25
  AddSkillData_o *v21; // x8
  bool IsNullOrEmpty; // w0
  UILabel_o *addFunctionLabel; // x20
  char v24; // w21
  float v25; // s0 OVERLAPPED
  float v26; // s1
  float v27; // s2
  float v28; // s3
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CCA3A7 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_3670/*"COMMAND_SPELL_CAN_NOT_ADD_FUNCTION"*/);
    sub_1C713B0(&StringLiteral_3669/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/);
    byte_4CCA3A7 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  if ( !Master_object )
    goto LABEL_37;
  v11 = Master_object;
  IsAddFunctionCommandSpell = ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(Master_object, commandSpellId, 0);
  Master_object = (ClassBoardCommandSpellMaster_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
  if ( !Master_object )
    goto LABEL_37;
  if ( !IsAddFunctionCommandSpell )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  if ( !battleData )
    goto LABEL_37;
  battleGenderType = battleData->fields.battleGenderType;
  commandSpellIcon = this->fields.commandSpellIcon;
  if ( battleGenderType == 1 )
    v15 = 386;
  else
    v15 = 387;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_object = (ClassBoardCommandSpellMaster_o *)AtlasManager__SetSBuffIconByIconId(commandSpellIcon, v15, 0);
  if ( !svtData )
    goto LABEL_37;
  Master_object = (ClassBoardCommandSpellMaster_o *)BasicHelper__IsNullOrEmpty(
                                                      (System_Collections_ICollection_o *)svtData->fields.classBoardAddCommandSpells,
                                                      0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v16 = 1;
  }
  else
  {
    classBoardAddCommandSpells = svtData->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
      goto LABEL_37;
    max_length = classBoardAddCommandSpells->max_length;
    v19 = max_length > 0;
    if ( max_length >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)max_length )
          sub_1C71610(Master_object);
        v21 = classBoardAddCommandSpells->m_Items[v20];
        if ( !v21 )
          goto LABEL_37;
        Master_object = (ClassBoardCommandSpellMaster_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                            v11,
                                                            &entity,
                                                            v21->fields.id,
                                                            commandSpellId,
                                                            v21->fields.lv,
                                                            0);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          max_length = classBoardAddCommandSpells->max_length;
          v19 = ++v20 < max_length;
          if ( v20 < max_length )
            continue;
        }
        break;
      }
    }
    v16 = !v19;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)svtData->fields.classBoardAddCommandSpells,
                    0);
  addFunctionLabel = this->fields.addFunctionLabel;
  v24 = v16 | IsNullOrEmpty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( (v24 & 1) != 0 )
      goto LABEL_28;
    goto LABEL_32;
  }
  if ( (v24 & 1) == 0 )
  {
LABEL_32:
    Master_object = (ClassBoardCommandSpellMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3669/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/, 0);
    if ( addFunctionLabel )
    {
      UILabel__set_text(addFunctionLabel, (System_String_o *)Master_object, 0);
      Master_object = (ClassBoardCommandSpellMaster_o *)this->fields.commandSpellIcon;
      if ( Master_object )
      {
        v25 = 1.0;
        v26 = 1.0;
        v27 = 1.0;
        goto LABEL_35;
      }
    }
LABEL_37:
    sub_1C71608(Master_object, v10);
  }
LABEL_28:
  Master_object = (ClassBoardCommandSpellMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3670/*"COMMAND_SPELL_CAN_NOT_ADD_FUNCTION"*/, 0);
  if ( !addFunctionLabel )
    goto LABEL_37;
  UILabel__set_text(addFunctionLabel, (System_String_o *)Master_object, 0);
  Master_object = (ClassBoardCommandSpellMaster_o *)this->fields.commandSpellIcon;
  if ( !Master_object )
    goto LABEL_37;
  v25 = 0.5;
  v26 = 0.5;
  v27 = 0.5;
LABEL_35:
  v28 = 1.0;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v25, 0);
}