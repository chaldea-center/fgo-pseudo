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
  int v9; // w8
  ClassBoardCommandSpellMaster_o *Master_object; // x0
  __int64 v11; // x1
  ClassBoardCommandSpellMaster_o *v12; // x22
  bool IsAddFunctionCommandSpell; // w24
  UISprite_o *commandSpellIcon; // x24
  int32_t v15; // w23
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  _BOOL4 v18; // w24
  __int64 v19; // x25
  AddSkillData_o *v20; // x8
  __int64 v21; // x1
  UILabel_o *v22; // x20
  float v23; // s0 OVERLAPPED
  float v24; // s1
  float v25; // s2
  float v26; // s3
  UILabel_o *addFunctionLabel; // x20
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5973879 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_3817/*"COMMAND_SPELL_CAN_NOT_ADD_FUNCTION"*/);
    sub_2213A60(&StringLiteral_3816/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/);
    byte_5973879 = 1;
  }
  v9 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, svtData);
  Master_object = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  if ( !Master_object )
    goto LABEL_39;
  v12 = Master_object;
  IsAddFunctionCommandSpell = ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(Master_object, commandSpellId, 0);
  Master_object = (ClassBoardCommandSpellMaster_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
  if ( IsAddFunctionCommandSpell )
  {
    if ( !Master_object )
      goto LABEL_39;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    if ( !battleData )
      goto LABEL_39;
    commandSpellIcon = this->fields.commandSpellIcon;
    if ( battleData->fields.battleGenderType == 1 )
      v15 = 386;
    else
      v15 = 387;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
    Master_object = (ClassBoardCommandSpellMaster_o *)AtlasManager__SetSBuffIconByIconId(commandSpellIcon, v15, 0);
    if ( !svtData )
      goto LABEL_39;
    Master_object = (ClassBoardCommandSpellMaster_o *)BasicHelper__IsNullOrEmpty(
                                                        (System_Collections_ICollection_o *)svtData->fields.classBoardAddCommandSpells,
                                                        0);
    classBoardAddCommandSpells = svtData->fields.classBoardAddCommandSpells;
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      if ( !classBoardAddCommandSpells )
        goto LABEL_39;
      max_length = classBoardAddCommandSpells->max_length;
      v18 = max_length < 1;
      if ( max_length >= 1 )
      {
        v19 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v19 >= max_length )
            sub_2213CE4(Master_object);
          v20 = classBoardAddCommandSpells->m_Items[v19];
          if ( !v20 )
            goto LABEL_39;
          Master_object = (ClassBoardCommandSpellMaster_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                              v12,
                                                              &entity,
                                                              v20->fields.id,
                                                              commandSpellId,
                                                              v20->fields.lv,
                                                              0);
          if ( ((unsigned __int8)Master_object & 1) != 0 )
            break;
          max_length = classBoardAddCommandSpells->max_length;
          v18 = (int)++v19 >= max_length;
          if ( (int)v19 >= max_length )
            goto LABEL_23;
        }
        if ( ((v18
             | BasicHelper__IsNullOrEmpty(
                 (System_Collections_ICollection_o *)svtData->fields.classBoardAddCommandSpells,
                 0))
            & 1) == 0 )
        {
          addFunctionLabel = this->fields.addFunctionLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
          Master_object = (ClassBoardCommandSpellMaster_o *)LocalizationManager__Get(
                                                              (System_String_o *)StringLiteral_3816/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/,
                                                              0);
          if ( addFunctionLabel )
          {
            UILabel__set_text(addFunctionLabel, (System_String_o *)Master_object, 0);
            Master_object = (ClassBoardCommandSpellMaster_o *)this->fields.commandSpellIcon;
            if ( Master_object )
            {
              v23 = 1.0;
              v24 = 1.0;
              v25 = 1.0;
              goto LABEL_30;
            }
          }
          goto LABEL_39;
        }
LABEL_25:
        v22 = this->fields.addFunctionLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
        Master_object = (ClassBoardCommandSpellMaster_o *)LocalizationManager__Get(
                                                            (System_String_o *)StringLiteral_3817/*"COMMAND_SPELL_CAN_NOT_ADD_FUNCTION"*/,
                                                            0);
        if ( v22 )
        {
          UILabel__set_text(v22, (System_String_o *)Master_object, 0);
          Master_object = (ClassBoardCommandSpellMaster_o *)this->fields.commandSpellIcon;
          if ( Master_object )
          {
            v23 = 0.5;
            v24 = 0.5;
            v25 = 0.5;
LABEL_30:
            v26 = 1.0;
            UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v23, 0);
            return;
          }
        }
LABEL_39:
        sub_2213CDC(Master_object, v11);
      }
LABEL_23:
      classBoardAddCommandSpells = svtData->fields.classBoardAddCommandSpells;
    }
    BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)classBoardAddCommandSpells, 0);
    goto LABEL_25;
  }
  if ( !Master_object )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
}