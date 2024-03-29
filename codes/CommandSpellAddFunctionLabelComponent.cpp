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
  ClassBoardCommandSpellMaster_o *Master_WarQuestSelectionMaster; // x0
  ClassBoardCommandSpellMaster_o *v15; // x22
  bool IsAddFunctionCommandSpell; // w24
  int32_t battleGenderType; // w8
  UISprite_o *commandSpellIcon; // x23
  int32_t v19; // w24
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  unsigned int v22; // w24
  AddSkillData_o *v23; // x8
  char v24; // w21
  bool IsNullOrEmpty; // w0
  UILabel_o *addFunctionLabel; // x20
  UIWidget_o *v27; // x19
  int v28; // s0
  __int64 v32; // x0
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421486C & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, svtData);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_3267/*"COMMAND_SPELL_CAN_NOT_ADD_FUNCTION"*/, v12);
    sub_B0D8A4(&StringLiteral_3266/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/, v13);
    byte_421486C = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  v15 = Master_WarQuestSelectionMaster;
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
    v19 = 386;
  else
    v19 = 387;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)AtlasManager__SetSBuffIconByIconId(
                                                                       commandSpellIcon,
                                                                       v19,
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
    v24 = 1;
  }
  else
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= max_length )
      {
        v32 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v32, 0LL);
      }
      v23 = classBoardAddCommandSpells->m_Items[v22];
      if ( !v23 )
        goto LABEL_42;
      Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                                           v15,
                                                                           &entity,
                                                                           v23->fields.id,
                                                                           commandSpellId,
                                                                           v23->fields.lv,
                                                                           0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        break;
      max_length = classBoardAddCommandSpells->max_length;
      if ( (int)++v22 >= max_length )
        goto LABEL_25;
    }
    v24 = 0;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)svtData->fields.classBoardAddCommandSpells,
                    0LL);
  addFunctionLabel = this->fields.addFunctionLabel;
  if ( (v24 & 1) == 0 && !IsNullOrEmpty )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_3266/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/,
                                                                         0LL);
    if ( !addFunctionLabel )
      goto LABEL_42;
    UILabel__set_text(addFunctionLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    v27 = (UIWidget_o *)this->fields.commandSpellIcon;
    *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_white(0LL);
    if ( !v27 )
      goto LABEL_42;
    goto LABEL_40;
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_3267/*"COMMAND_SPELL_CAN_NOT_ADD_FUNCTION"*/,
                                                                       0LL);
  if ( !addFunctionLabel
    || (UILabel__set_text(addFunctionLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL),
        v27 = (UIWidget_o *)this->fields.commandSpellIcon,
        *(UnityEngine_Color_o *)&v28 = UnityEngine_Color__get_gray(0LL),
        !v27) )
  {
LABEL_42:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
LABEL_40:
  UIWidget__set_color(v27, *(UnityEngine_Color_o *)&v28, 0LL);
}