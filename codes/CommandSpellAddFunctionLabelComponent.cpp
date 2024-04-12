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
  ClassBoardCommandSpellMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  ClassBoardCommandSpellMaster_o *v11; // x22
  bool IsAddFunctionCommandSpell; // w24
  int32_t battleGenderType; // w8
  UISprite_o *commandSpellIcon; // x23
  int32_t v15; // w24
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  unsigned int v18; // w24
  AddSkillData_o *v19; // x8
  char v20; // w21
  bool IsNullOrEmpty; // w0
  UILabel_o *addFunctionLabel; // x20
  UIWidget_o *v23; // x19
  int v24; // s0
  __int64 v28; // x0
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B0134 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_3287/*"COMMAND_SPELL_CAN_NOT_ADD_FUNCTION"*/);
    sub_B52984(&StringLiteral_3286/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/);
    byte_42B0134 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  v11 = Master_WarQuestSelectionMaster;
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
    v15 = 386;
  else
    v15 = 387;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)AtlasManager__SetSBuffIconByIconId(
                                                                       commandSpellIcon,
                                                                       v15,
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
    v20 = 1;
  }
  else
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        v28 = sub_B52A88(Master_WarQuestSelectionMaster);
        sub_B52A28(v28, 0LL);
      }
      v19 = classBoardAddCommandSpells->m_Items[v18];
      if ( !v19 )
        goto LABEL_42;
      Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)ClassBoardCommandSpellMaster__TryGetEntity(
                                                                           v11,
                                                                           &entity,
                                                                           v19->fields.id,
                                                                           commandSpellId,
                                                                           v19->fields.lv,
                                                                           0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        break;
      max_length = classBoardAddCommandSpells->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_25;
    }
    v20 = 0;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)svtData->fields.classBoardAddCommandSpells,
                    0LL);
  addFunctionLabel = this->fields.addFunctionLabel;
  if ( (v20 & 1) == 0 && !IsNullOrEmpty )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)LocalizationManager__Get(
                                                                         (System_String_o *)StringLiteral_3286/*"COMMAND_SPELL_CAN_ADD_FUNCTION"*/,
                                                                         0LL);
    if ( !addFunctionLabel )
      goto LABEL_42;
    UILabel__set_text(addFunctionLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    v23 = (UIWidget_o *)this->fields.commandSpellIcon;
    *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
    if ( !v23 )
      goto LABEL_42;
    goto LABEL_40;
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)LocalizationManager__Get(
                                                                       (System_String_o *)StringLiteral_3287/*"COMMAND_SPELL_CAN_NOT_ADD_FUNCTION"*/,
                                                                       0LL);
  if ( !addFunctionLabel
    || (UILabel__set_text(addFunctionLabel, (System_String_o *)Master_WarQuestSelectionMaster, 0LL),
        v23 = (UIWidget_o *)this->fields.commandSpellIcon,
        *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_gray(0LL),
        !v23) )
  {
LABEL_42:
    sub_B52A5C(Master_WarQuestSelectionMaster, v10);
  }
LABEL_40:
  UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v24, 0LL);
}