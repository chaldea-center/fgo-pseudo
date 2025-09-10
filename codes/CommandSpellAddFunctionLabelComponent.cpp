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
  __int64 v16; // x2
  char v17; // w21
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  bool v20; // w24
  int v21; // w25
  AddSkillData_o *v22; // x8
  bool IsNullOrEmpty; // w0
  UILabel_o *addFunctionLabel; // x20
  char v25; // w21
  float v26; // s0 OVERLAPPED
  float v27; // s1
  float v28; // s2
  float v29; // s3
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2A1AE & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3668/*"COMMAND_SPELL_CAN_NOT_ADD_FUNCTION"*/);
    sub_1C2D490(&StringLiteral_3667/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/);
    byte_4C2A1AE = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
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
    v17 = 1;
  }
  else
  {
    classBoardAddCommandSpells = svtData->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
      goto LABEL_37;
    max_length = classBoardAddCommandSpells->max_length;
    v20 = max_length > 0;
    if ( max_length >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= (unsigned int)max_length )
          sub_1C2D6F4(Master_object, v10, v16);
        v22 = classBoardAddCommandSpells->m_Items[v21];
        if ( !v22 )
          goto LABEL_37;
        Master_object = (ClassBoardCommandSpellMaster_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                            v11,
                                                            &entity,
                                                            v22->fields.id,
                                                            commandSpellId,
                                                            v22->fields.lv,
                                                            0);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          max_length = classBoardAddCommandSpells->max_length;
          v20 = ++v21 < max_length;
          if ( v21 < max_length )
            continue;
        }
        break;
      }
    }
    v17 = !v20;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)svtData->fields.classBoardAddCommandSpells,
                    0);
  addFunctionLabel = this->fields.addFunctionLabel;
  v25 = v17 | IsNullOrEmpty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( (v25 & 1) != 0 )
      goto LABEL_28;
    goto LABEL_32;
  }
  if ( (v25 & 1) == 0 )
  {
LABEL_32:
    Master_object = (ClassBoardCommandSpellMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3667/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/, 0);
    if ( addFunctionLabel )
    {
      UILabel__set_text(addFunctionLabel, (System_String_o *)Master_object, 0);
      Master_object = (ClassBoardCommandSpellMaster_o *)this->fields.commandSpellIcon;
      if ( Master_object )
      {
        v26 = 1.0;
        v27 = 1.0;
        v28 = 1.0;
        goto LABEL_35;
      }
    }
LABEL_37:
    sub_1C2D6EC(Master_object, v10);
  }
LABEL_28:
  Master_object = (ClassBoardCommandSpellMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3668/*"COMMAND_SPELL_CAN_NOT_ADD_FUNCTION"*/, 0);
  if ( !addFunctionLabel )
    goto LABEL_37;
  UILabel__set_text(addFunctionLabel, (System_String_o *)Master_object, 0);
  Master_object = (ClassBoardCommandSpellMaster_o *)this->fields.commandSpellIcon;
  if ( !Master_object )
    goto LABEL_37;
  v26 = 0.5;
  v27 = 0.5;
  v28 = 0.5;
LABEL_35:
  v29 = 1.0;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v26, 0);
}