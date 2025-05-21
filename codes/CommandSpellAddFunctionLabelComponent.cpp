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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ClassBoardCommandSpellMaster_o *Master_object; // x0
  __int64 v15; // x1
  ClassBoardCommandSpellMaster_o *v16; // x22
  bool IsAddFunctionCommandSpell; // w24
  int32_t battleGenderType; // w8
  UISprite_o *commandSpellIcon; // x23
  int32_t v20; // w24
  __int64 v21; // x2
  char v22; // w21
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  bool v25; // w24
  int v26; // w25
  AddSkillData_o *v27; // x8
  bool IsNullOrEmpty; // w0
  UILabel_o *addFunctionLabel; // x20
  char v30; // w21
  float v31; // s0
  float v32; // s1
  float v33; // s2
  float v34; // s3
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B47823 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, svtData);
    sub_1BDB878(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v9);
    sub_1BDB878(&DataManager_TypeInfo, v10);
    sub_1BDB878(&LocalizationManager_TypeInfo, v11);
    sub_1BDB878(&StringLiteral_3707/*"COMMAND_SPELL_CAN_NOT_ADD_FUNCTION"*/, v12);
    sub_1BDB878(&StringLiteral_3706/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/, v13);
    byte_4B47823 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  if ( !Master_object )
    goto LABEL_37;
  v16 = Master_object;
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
    v20 = 386;
  else
    v20 = 387;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_object = (ClassBoardCommandSpellMaster_o *)AtlasManager__SetSBuffIconByIconId(commandSpellIcon, v20, 0LL);
  if ( !svtData )
    goto LABEL_37;
  Master_object = (ClassBoardCommandSpellMaster_o *)BasicHelper__IsNullOrEmpty(
                                                      (System_Collections_ICollection_o *)svtData->fields.classBoardAddCommandSpells,
                                                      0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v22 = 1;
  }
  else
  {
    classBoardAddCommandSpells = svtData->fields.classBoardAddCommandSpells;
    if ( !classBoardAddCommandSpells )
      goto LABEL_37;
    max_length = classBoardAddCommandSpells->max_length;
    v25 = max_length > 0;
    if ( max_length >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        if ( v26 >= (unsigned int)max_length )
          sub_1BDBADC(Master_object, v15, v21);
        v27 = classBoardAddCommandSpells->m_Items[v26];
        if ( !v27 )
          goto LABEL_37;
        Master_object = (ClassBoardCommandSpellMaster_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                            v16,
                                                            &entity,
                                                            v27->fields.id,
                                                            commandSpellId,
                                                            v27->fields.lv,
                                                            0LL);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          max_length = classBoardAddCommandSpells->max_length;
          v25 = ++v26 < max_length;
          if ( v26 < max_length )
            continue;
        }
        break;
      }
    }
    v22 = !v25;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)svtData->fields.classBoardAddCommandSpells,
                    0LL);
  addFunctionLabel = this->fields.addFunctionLabel;
  v30 = v22 | IsNullOrEmpty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( (v30 & 1) != 0 )
      goto LABEL_28;
    goto LABEL_32;
  }
  if ( (v30 & 1) == 0 )
  {
LABEL_32:
    Master_object = (ClassBoardCommandSpellMaster_o *)LocalizationManager__Get(
                                                        (System_String_o *)StringLiteral_3706/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/,
                                                        0LL);
    if ( addFunctionLabel )
    {
      UILabel__set_text(addFunctionLabel, (System_String_o *)Master_object, 0LL);
      Master_object = (ClassBoardCommandSpellMaster_o *)this->fields.commandSpellIcon;
      if ( Master_object )
      {
        v31 = 1.0;
        v32 = 1.0;
        v33 = 1.0;
        goto LABEL_35;
      }
    }
LABEL_37:
    sub_1BDBAD4(Master_object, v15);
  }
LABEL_28:
  Master_object = (ClassBoardCommandSpellMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3707/*"COMMAND_SPELL_CAN_NOT_ADD_FUNCTION"*/, 0LL);
  if ( !addFunctionLabel )
    goto LABEL_37;
  UILabel__set_text(addFunctionLabel, (System_String_o *)Master_object, 0LL);
  Master_object = (ClassBoardCommandSpellMaster_o *)this->fields.commandSpellIcon;
  if ( !Master_object )
    goto LABEL_37;
  v31 = 0.5;
  v32 = 0.5;
  v33 = 0.5;
LABEL_35:
  v34 = 1.0;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v31, 0LL);
}