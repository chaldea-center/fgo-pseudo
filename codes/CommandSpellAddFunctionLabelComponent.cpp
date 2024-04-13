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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  ClassBoardCommandSpellMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v25; // x1
  ClassBoardCommandSpellMaster_o *v26; // x22
  bool IsAddFunctionCommandSpell; // w24
  int32_t battleGenderType; // w8
  UISprite_o *commandSpellIcon; // x23
  int32_t v30; // w24
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  unsigned int v33; // w24
  AddSkillData_o *v34; // x8
  char v35; // w21
  bool IsNullOrEmpty; // w0
  UILabel_o *addFunctionLabel; // x20
  UIWidget_o *v38; // x19
  int v39; // s0
  __int64 v43; // x0
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8C15 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)svtData, commandSpellId, battleData);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_3320/*"COMMAND_SPELL_CAN_NOT_ADD_FUNCTION"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_3319/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/, v21, v22, v23);
    byte_42E8C15 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  v26 = Master_WarQuestSelectionMaster;
  IsAddFunctionCommandSpell = ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                Master_WarQuestSelectionMaster,
                                commandSpellId,
                                0LL);
  Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)UnityEngine_Component__get_gameObject(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  if ( !IsAddFunctionCommandSpell )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
  if ( !battleData )
    goto LABEL_42;
  battleGenderType = battleData->fields.battleGenderType;
  commandSpellIcon = this->fields.commandSpellIcon;
  if ( battleGenderType == 1 )
    v30 = 386;
  else
    v30 = 387;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)AtlasManager__SetSBuffIconByIconId(
                                                                       commandSpellIcon,
                                                                       v30,
                                                                       0LL);
  if ( !svtData )
    goto LABEL_42;
  Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)BasicHelper__IsNullOrEmpty(
                                                                       (System_Collections_ICollection_o *)svtData->fields.classBoardAddCommandSpells,
                                                                       0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    goto LABEL_25;
  classBoardAddCommandSpells = svtData->fields.classBoardAddCommandSpells;
  if ( !classBoardAddCommandSpells )
    goto LABEL_42;
  max_length = classBoardAddCommandSpells->max_length;
  if ( max_length < 1 )
  {
LABEL_25:
    v35 = 1;
  }
  else
  {
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= max_length )
      {
        v43 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v43, 0LL);
      }
      v34 = classBoardAddCommandSpells->m_Items[v33];
      if ( !v34 )
        goto LABEL_42;
      Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                                           v26,
                                                                           &entity,
                                                                           v34->fields.id,
                                                                           commandSpellId,
                                                                           v34->fields.lv,
                                                                           0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        break;
      max_length = classBoardAddCommandSpells->max_length;
      if ( (int)++v33 >= max_length )
        goto LABEL_25;
    }
    v35 = 0;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)svtData->fields.classBoardAddCommandSpells,
                    0LL);
  addFunctionLabel = this->fields.addFunctionLabel;
  if ( (v35 & 1) == 0 && !IsNullOrEmpty )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_3319/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/,
                                                                         0LL);
    if ( !addFunctionLabel )
      goto LABEL_42;
    UILabel__set_text(addFunctionLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    v38 = (UIWidget_o *)this->fields.commandSpellIcon;
    *(UnityEngine_Color_o *)&v39 = UnityEngine_Color__get_white(0LL);
    if ( !v38 )
      goto LABEL_42;
    goto LABEL_40;
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_3320/*"COMMAND_SPELL_CAN_NOT_ADD_FUNCTION"*/,
                                                                       0LL);
  if ( !addFunctionLabel
    || (UILabel__set_text(addFunctionLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL),
        v38 = (UIWidget_o *)this->fields.commandSpellIcon,
        *(UnityEngine_Color_o *)&v39 = UnityEngine_Color__get_gray(0LL),
        !v38) )
  {
LABEL_42:
    sub_B5D69C(Master_WarQuestSelectionMaster, v25);
  }
LABEL_40:
  UIWidget__set_color(v38, *(UnityEngine_Color_o *)&v39, 0LL);
}