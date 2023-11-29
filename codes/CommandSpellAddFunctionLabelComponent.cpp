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
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t battleGenderType; // w8
  UISprite_o *commandSpellIcon; // x23
  int32_t v20; // w24
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  struct AddSkillData_array *classBoardAddCommandSpells; // x23
  int max_length; // w8
  unsigned int v26; // w24
  AddSkillData_o *v27; // x8
  char v28; // w21
  bool v29; // w0
  UILabel_o *addFunctionLabel; // x20
  System_String_o *v31; // x0
  UIWidget_o *v32; // x19
  int v33; // s0
  System_String_o *v37; // x0
  ClassBoardCommandSpellEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA5DD & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, svtData);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&LocalizationManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_3246, v12);
    sub_B16FFC(&StringLiteral_3245, v13);
    byte_40FA5DD = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  v15 = Master_WarQuestSelectionMaster;
  IsAddFunctionCommandSpell = ClassBoardCommandSpellMaster__IsAddFunctionCommandSpell(
                                Master_WarQuestSelectionMaster,
                                commandSpellId,
                                0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_42;
  if ( !IsAddFunctionCommandSpell )
  {
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    return;
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( !battleData )
    goto LABEL_42;
  battleGenderType = battleData->fields.battleGenderType;
  commandSpellIcon = this->fields.commandSpellIcon;
  if ( battleGenderType == 1 )
    v20 = 386;
  else
    v20 = 387;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetSBuffIconByIconId(commandSpellIcon, v20, 0LL);
  if ( !svtData )
    goto LABEL_42;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)svtData->fields.classBoardAddCommandSpells,
                    0LL);
  if ( IsNullOrEmpty )
    goto LABEL_25;
  classBoardAddCommandSpells = svtData->fields.classBoardAddCommandSpells;
  if ( !classBoardAddCommandSpells )
    goto LABEL_42;
  max_length = classBoardAddCommandSpells->max_length;
  if ( max_length < 1 )
  {
LABEL_25:
    v28 = 1;
  }
  else
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= max_length )
      {
        sub_B17100(IsNullOrEmpty, v22, v23);
        sub_B170A0();
      }
      v27 = classBoardAddCommandSpells->m_Items[v26];
      if ( !v27 )
        goto LABEL_42;
      IsNullOrEmpty = ClassBoardCommandSpellMaster__TryGetEntity(
                        v15,
                        &entity,
                        v27->fields.id,
                        commandSpellId,
                        v27->fields.lv,
                        0LL);
      if ( IsNullOrEmpty )
        break;
      max_length = classBoardAddCommandSpells->max_length;
      if ( (int)++v26 >= max_length )
        goto LABEL_25;
    }
    v28 = 0;
  }
  v29 = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)svtData->fields.classBoardAddCommandSpells, 0LL);
  addFunctionLabel = this->fields.addFunctionLabel;
  if ( (v28 & 1) == 0 && !v29 )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3245, 0LL);
    if ( !addFunctionLabel )
      goto LABEL_42;
    UILabel__set_text(addFunctionLabel, v31, 0LL);
    v32 = (UIWidget_o *)this->fields.commandSpellIcon;
    *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_white(0LL);
    if ( !v32 )
      goto LABEL_42;
    goto LABEL_40;
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_3246, 0LL);
  if ( !addFunctionLabel
    || (UILabel__set_text(addFunctionLabel, v37, 0LL),
        v32 = (UIWidget_o *)this->fields.commandSpellIcon,
        *(UnityEngine_Color_o *)&v33 = UnityEngine_Color__get_gray(0LL),
        !v32) )
  {
LABEL_42:
    sub_B170D4();
  }
LABEL_40:
  UIWidget__set_color(v32, *(UnityEngine_Color_o *)&v33, 0LL);
}