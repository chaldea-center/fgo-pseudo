void __fastcall ClassBoardResourceContents___ctor(ClassBoardResourceContents_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardResourceContents__SetBoardUIAtlas(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *boardUiAtlasManagerUnit,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BoardUiAtlasManagerUnit_k__BackingField = boardUiAtlasManagerUnit;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._BoardUiAtlasManagerUnit_k__BackingField,
    (System_Int32_array **)boardUiAtlasManagerUnit,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__SetContents(
        ClassBoardResourceContents_o *this,
        ClassBoardSquare_o *square,
        ClassBoardLine_o *line,
        ClassBoardLock_o *lockAsset,
        ClassBoardBlank_o *blank,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  this->fields._Square_k__BackingField = square;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)square,
    (System_String_array **)line,
    (System_String_array **)lockAsset,
    (System_Boolean_array **)blank,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields._Line_k__BackingField = line;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Line_k__BackingField,
    (System_Int32_array **)line,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._Lock_k__BackingField = lockAsset;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Lock_k__BackingField,
    (System_Int32_array **)lockAsset,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._Blank_k__BackingField = blank;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Blank_k__BackingField,
    (System_Int32_array **)blank,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void __fastcall ClassBoardResourceContents__SetContentsBgModel(
        ClassBoardResourceContents_o *this,
        ClassBoardBackground_o *bgModel,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BgModel_k__BackingField = bgModel;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._BgModel_k__BackingField,
    (System_Int32_array **)bgModel,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__SetContentsBoardSelectView(
        ClassBoardResourceContents_o *this,
        UnityEngine_GameObject_o *boardSelectViewPrefab,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BoardSelectViewPrefab_k__BackingField = boardSelectViewPrefab;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._BoardSelectViewPrefab_k__BackingField,
    (System_Int32_array **)boardSelectViewPrefab,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__SetContentsDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardDisableOpenDialog_o *classBoardDisableOpenDialog,
        ClassBoardSquareOpenConfirmDialog_o *classBoardSquareOpenConfirmDialog,
        ClassBoardLockOpenConfirmDialog_o *classBoardLockOpenConfirmDialog,
        ClassBoardLockReleaseConditionDialog_o *classBoardLockReleaseConditionDialog,
        ClassBoardSquareDetailDialog_o *classBoardSquareDetailDialog,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  this->fields._DisableOpenDialog_k__BackingField = classBoardDisableOpenDialog;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._DisableOpenDialog_k__BackingField,
    (System_Int32_array **)classBoardDisableOpenDialog,
    (System_String_array **)classBoardSquareOpenConfirmDialog,
    (System_String_array **)classBoardLockOpenConfirmDialog,
    (System_Boolean_array **)classBoardLockReleaseConditionDialog,
    (System_Int32_array **)classBoardSquareDetailDialog,
    (System_Int32_array *)method,
    v7);
  this->fields._SquareOpenConfirmDialog_k__BackingField = classBoardSquareOpenConfirmDialog;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._SquareOpenConfirmDialog_k__BackingField,
    (System_Int32_array **)classBoardSquareOpenConfirmDialog,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields._LockOpenConfirmDialog_k__BackingField = classBoardLockOpenConfirmDialog;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._LockOpenConfirmDialog_k__BackingField,
    (System_Int32_array **)classBoardLockOpenConfirmDialog,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields._LockReleaseConditionDialog_k__BackingField = classBoardLockReleaseConditionDialog;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._LockReleaseConditionDialog_k__BackingField,
    (System_Int32_array **)classBoardLockReleaseConditionDialog,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields._SquareDetailDialog_k__BackingField = classBoardSquareDetailDialog;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._SquareDetailDialog_k__BackingField,
    (System_Int32_array **)classBoardSquareDetailDialog,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


void __fastcall ClassBoardResourceContents__SetContentsForwardIconAnimObject(
        ClassBoardResourceContents_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ForwardIconAnimObjectPrefab_k__BackingField = prefab;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ForwardIconAnimObjectPrefab_k__BackingField,
    (System_Int32_array **)prefab,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__SetContentsUI(
        ClassBoardResourceContents_o *this,
        ClassBoardUIController_o *uiController,
        AtlasManagerUnit_o *boardUiAtlasManagerUnit,
        AtlasManagerUnit_o *iconAtlasManagerUnit,
        AtlasManagerUnit_o *classUiAtlasManagerUnit,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  this->fields._BoardUiController_k__BackingField = uiController;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._BoardUiController_k__BackingField,
    (System_Int32_array **)uiController,
    (System_String_array **)boardUiAtlasManagerUnit,
    (System_String_array **)iconAtlasManagerUnit,
    (System_Boolean_array **)classUiAtlasManagerUnit,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields._BoardUiAtlasManagerUnit_k__BackingField = boardUiAtlasManagerUnit;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._BoardUiAtlasManagerUnit_k__BackingField,
    (System_Int32_array **)boardUiAtlasManagerUnit,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._IconAtlasManagerUnit_k__BackingField = iconAtlasManagerUnit;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._IconAtlasManagerUnit_k__BackingField,
    (System_Int32_array **)iconAtlasManagerUnit,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._ClassUiAtlasManagerUnit_k__BackingField = classUiAtlasManagerUnit;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ClassUiAtlasManagerUnit_k__BackingField,
    (System_Int32_array **)classUiAtlasManagerUnit,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


ClassBoardBackground_o *__fastcall ClassBoardResourceContents__get_BgModel(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._BgModel_k__BackingField;
}


ClassBoardBlank_o *__fastcall ClassBoardResourceContents__get_Blank(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._Blank_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ClassBoardResourceContents__get_BoardSelectViewPrefab(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._BoardSelectViewPrefab_k__BackingField;
}


AtlasManagerUnit_o *__fastcall ClassBoardResourceContents__get_BoardUiAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._BoardUiAtlasManagerUnit_k__BackingField;
}


ClassBoardUIController_o *__fastcall ClassBoardResourceContents__get_BoardUiController(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._BoardUiController_k__BackingField;
}


AtlasManagerUnit_o *__fastcall ClassBoardResourceContents__get_ClassUiAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._ClassUiAtlasManagerUnit_k__BackingField;
}


ClassBoardDisableOpenDialog_o *__fastcall ClassBoardResourceContents__get_DisableOpenDialog(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._DisableOpenDialog_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ClassBoardResourceContents__get_ForwardIconAnimObjectPrefab(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._ForwardIconAnimObjectPrefab_k__BackingField;
}


AtlasManagerUnit_o *__fastcall ClassBoardResourceContents__get_IconAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._IconAtlasManagerUnit_k__BackingField;
}


ClassBoardLine_o *__fastcall ClassBoardResourceContents__get_Line(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._Line_k__BackingField;
}


ClassBoardLock_o *__fastcall ClassBoardResourceContents__get_Lock(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._Lock_k__BackingField;
}


ClassBoardLockOpenConfirmDialog_o *__fastcall ClassBoardResourceContents__get_LockOpenConfirmDialog(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._LockOpenConfirmDialog_k__BackingField;
}


ClassBoardLockReleaseConditionDialog_o *__fastcall ClassBoardResourceContents__get_LockReleaseConditionDialog(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._LockReleaseConditionDialog_k__BackingField;
}


ClassBoardSquare_o *__fastcall ClassBoardResourceContents__get_Square(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._Square_k__BackingField;
}


ClassBoardSquareDetailDialog_o *__fastcall ClassBoardResourceContents__get_SquareDetailDialog(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._SquareDetailDialog_k__BackingField;
}


ClassBoardSquareOpenConfirmDialog_o *__fastcall ClassBoardResourceContents__get_SquareOpenConfirmDialog(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._SquareOpenConfirmDialog_k__BackingField;
}


void __fastcall ClassBoardResourceContents__set_BgModel(
        ClassBoardResourceContents_o *this,
        ClassBoardBackground_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BgModel_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._BgModel_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__set_Blank(
        ClassBoardResourceContents_o *this,
        ClassBoardBlank_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Blank_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Blank_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__set_BoardSelectViewPrefab(
        ClassBoardResourceContents_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BoardSelectViewPrefab_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._BoardSelectViewPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__set_BoardUiAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BoardUiAtlasManagerUnit_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._BoardUiAtlasManagerUnit_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__set_BoardUiController(
        ClassBoardResourceContents_o *this,
        ClassBoardUIController_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BoardUiController_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._BoardUiController_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__set_ClassUiAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ClassUiAtlasManagerUnit_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ClassUiAtlasManagerUnit_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__set_DisableOpenDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardDisableOpenDialog_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._DisableOpenDialog_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._DisableOpenDialog_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__set_ForwardIconAnimObjectPrefab(
        ClassBoardResourceContents_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ForwardIconAnimObjectPrefab_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._ForwardIconAnimObjectPrefab_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__set_IconAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._IconAtlasManagerUnit_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._IconAtlasManagerUnit_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__set_Line(
        ClassBoardResourceContents_o *this,
        ClassBoardLine_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Line_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Line_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__set_Lock(
        ClassBoardResourceContents_o *this,
        ClassBoardLock_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Lock_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._Lock_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__set_LockOpenConfirmDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardLockOpenConfirmDialog_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._LockOpenConfirmDialog_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._LockOpenConfirmDialog_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__set_LockReleaseConditionDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardLockReleaseConditionDialog_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._LockReleaseConditionDialog_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._LockReleaseConditionDialog_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__set_Square(
        ClassBoardResourceContents_o *this,
        ClassBoardSquare_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Square_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__set_SquareDetailDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardSquareDetailDialog_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SquareDetailDialog_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._SquareDetailDialog_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__set_SquareOpenConfirmDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardSquareOpenConfirmDialog_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SquareOpenConfirmDialog_k__BackingField = value;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._SquareOpenConfirmDialog_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}