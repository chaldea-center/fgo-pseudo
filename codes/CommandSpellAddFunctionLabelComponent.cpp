void __fastcall CommandSpellAddFunctionLabelComponent___ctor(
        CommandSpellAddFunctionLabelComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommandSpellAddFunctionLabelComponent__Awake(
        CommandSpellAddFunctionLabelComponent_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommandSpellAddFunctionLabelComponent__SetData(
        CommandSpellAddFunctionLabelComponent_o *this,
        BattleServantData_o *svtData,
        int32_t commandSpellId,
        BattleData_o *battleData,
        const MethodInfo *method)
{
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
  ClassBoardCommandSpellMaster_o *Master_object; // x0
  __int64 v20; // x1
  ClassBoardCommandSpellMaster_o *v21; // x22
  bool IsAddFunctionCommandSpell; // w24
  int32_t battleGenderType; // w8
  UISprite_o *commandSpellIcon; // x23
  int32_t v25; // w24
  char v26; // w21
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  bool v29; // w24
  int v30; // w25
  AddSkillData_o *v31; // x8
  bool IsNullOrEmpty; // w0
  __int64 v33; // x1
  UILabel_o *addFunctionLabel; // x20
  char v35; // w21
  float v36; // s0
  float v37; // s1
  float v38; // s2
  float v39; // s3
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18CEB & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, svtData, *(_QWORD *)&commandSpellId);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_3779/*"COMMAND_SPELL_CAN_NOT_ADD_FUNCTION"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_3778/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/, v17, v18);
    byte_4B18CEB = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, svtData);
  Master_object = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  if ( !Master_object )
    goto LABEL_37;
  v21 = Master_object;
  IsAddFunctionCommandSpell = ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                Master_object,
                                commandSpellId,
                                0LL);
  Master_object = (ClassBoardCommandSpellMaster_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
  if ( !Master_object )
    goto LABEL_37;
  if ( !IsAddFunctionCommandSpell )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  if ( !battleData )
    goto LABEL_37;
  battleGenderType = battleData->fields.battleGenderType;
  commandSpellIcon = this->fields.commandSpellIcon;
  if ( battleGenderType == 1 )
    v25 = 386;
  else
    v25 = 387;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v20);
  Master_object = (ClassBoardCommandSpellMaster_o *)AtlasManager__SetSBuffIconByIconId(commandSpellIcon, v25, 0LL);
  if ( !svtData )
    goto LABEL_37;
  Master_object = (ClassBoardCommandSpellMaster_o *)BasicHelper__IsNullOrEmpty(
                                                      (System_Collections_ICollection_o *)svtData->fields.classBoardAddCommandSpells,
                                                      0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v26 = 1;
  }
  else
  {
    classBoardAddCommandSpells = svtData->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
      goto LABEL_37;
    max_length = classBoardAddCommandSpells->max_length;
    v29 = max_length > 0;
    if ( max_length >= 1 )
    {
      v30 = 0;
      while ( 1 )
      {
        if ( v30 >= (unsigned int)max_length )
          sub_1BCAA44(Master_object, v20);
        v31 = classBoardAddCommandSpells->m_Items[v30];
        if ( !v31 )
          goto LABEL_37;
        Master_object = (ClassBoardCommandSpellMaster_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                            v21,
                                                            &entity,
                                                            v31->fields.id,
                                                            commandSpellId,
                                                            v31->fields.lv,
                                                            0LL);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          max_length = classBoardAddCommandSpells->max_length;
          v29 = ++v30 < max_length;
          if ( v30 < max_length )
            continue;
        }
        break;
      }
    }
    v26 = !v29;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)svtData->fields.classBoardAddCommandSpells,
                    0LL);
  addFunctionLabel = this->fields.addFunctionLabel;
  v35 = v26 | IsNullOrEmpty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v33);
    if ( (v35 & 1) != 0 )
      goto LABEL_28;
    goto LABEL_32;
  }
  if ( (v35 & 1) == 0 )
  {
LABEL_32:
    Master_object = (ClassBoardCommandSpellMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3778/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/,
                                                        0LL);
    if ( addFunctionLabel )
    {
      UILabel__set_text(addFunctionLabel, (System_String_o *)Master_object, 0LL);
      Master_object = (ClassBoardCommandSpellMaster_o *)this->fields.commandSpellIcon;
      if ( Master_object )
      {
        v36 = 1.0;
        v37 = 1.0;
        v38 = 1.0;
        goto LABEL_35;
      }
    }
LABEL_37:
    sub_1BCAA3C(Master_object, v20);
  }
LABEL_28:
  Master_object = (ClassBoardCommandSpellMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3779/*"COMMAND_SPELL_CAN_NOT_ADD_FUNCTION"*/, 0LL);
  if ( !addFunctionLabel )
    goto LABEL_37;
  UILabel__set_text(addFunctionLabel, (System_String_o *)Master_object, 0LL);
  Master_object = (ClassBoardCommandSpellMaster_o *)this->fields.commandSpellIcon;
  if ( !Master_object )
    goto LABEL_37;
  v36 = 0.5;
  v37 = 0.5;
  v38 = 0.5;
LABEL_35:
  v39 = 1.0;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v36, 0LL);
}