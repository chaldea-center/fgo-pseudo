void ClassBoardResourceContents___ctor(ClassBoardResourceContents_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardResourceContents__SetBoardUIAtlas(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *boardUiAtlasManagerUnit,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BoardUiAtlasManagerUnit_k__BackingField = boardUiAtlasManagerUnit;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._BoardUiAtlasManagerUnit_k__BackingField,
    (int32_t)boardUiAtlasManagerUnit,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__SetContents(
        ClassBoardResourceContents_o *this,
        ClassBoardSquare_o *square,
        ClassBoardLine_o *line,
        ClassBoardLock_o *lockAsset,
        ClassBoardBlank_o *blank,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  this->fields._Square_k__BackingField = square;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields,
    (int32_t)square,
    (int32_t)line,
    (int32_t)lockAsset,
    (System_String_o *)blank,
    (int32_t)method,
    v6,
    v7);
  this->fields._Line_k__BackingField = line;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._Line_k__BackingField,
    (int32_t)line,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._Lock_k__BackingField = lockAsset;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._Lock_k__BackingField,
    (int32_t)lockAsset,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._Blank_k__BackingField = blank;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._Blank_k__BackingField,
    (int32_t)blank,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void ClassBoardResourceContents__SetContentsBgModel(
        ClassBoardResourceContents_o *this,
        ClassBoardBackground_o *bgModel,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BgModel_k__BackingField = bgModel;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._BgModel_k__BackingField,
    (int32_t)bgModel,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__SetContentsBoardSelectView(
        ClassBoardResourceContents_o *this,
        UnityEngine_GameObject_o *boardSelectViewPrefab,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BoardSelectViewPrefab_k__BackingField = boardSelectViewPrefab;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._BoardSelectViewPrefab_k__BackingField,
    (int32_t)boardSelectViewPrefab,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__SetContentsDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardDisableOpenDialog_o *classBoardDisableOpenDialog,
        ClassBoardSquareOpenConfirmDialog_o *classBoardSquareOpenConfirmDialog,
        ClassBoardLockOpenConfirmDialog_o *classBoardLockOpenConfirmDialog,
        ClassBoardLockReleaseConditionDialog_o *classBoardLockReleaseConditionDialog,
        ClassBoardSquareDetailDialog_o *classBoardSquareDetailDialog,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7

  this->fields._DisableOpenDialog_k__BackingField = classBoardDisableOpenDialog;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._DisableOpenDialog_k__BackingField,
    (int32_t)classBoardDisableOpenDialog,
    (int32_t)classBoardSquareOpenConfirmDialog,
    (int32_t)classBoardLockOpenConfirmDialog,
    (System_String_o *)classBoardLockReleaseConditionDialog,
    (int32_t)classBoardSquareDetailDialog,
    (int64_t)method,
    v7);
  this->fields._SquareOpenConfirmDialog_k__BackingField = classBoardSquareOpenConfirmDialog;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._SquareOpenConfirmDialog_k__BackingField,
    (int32_t)classBoardSquareOpenConfirmDialog,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields._LockOpenConfirmDialog_k__BackingField = classBoardLockOpenConfirmDialog;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._LockOpenConfirmDialog_k__BackingField,
    (int32_t)classBoardLockOpenConfirmDialog,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields._LockReleaseConditionDialog_k__BackingField = classBoardLockReleaseConditionDialog;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._LockReleaseConditionDialog_k__BackingField,
    (int32_t)classBoardLockReleaseConditionDialog,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields._SquareDetailDialog_k__BackingField = classBoardSquareDetailDialog;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._SquareDetailDialog_k__BackingField,
    (int32_t)classBoardSquareDetailDialog,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


void ClassBoardResourceContents__SetContentsFigure(
        ClassBoardResourceContents_o *this,
        ClassBoardFigureController_o *figureController,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._FigureController_k__BackingField = figureController;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._FigureController_k__BackingField,
    (int32_t)figureController,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__SetContentsForwardIconAnimObject(
        ClassBoardResourceContents_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ForwardIconAnimObjectPrefab_k__BackingField = prefab;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ForwardIconAnimObjectPrefab_k__BackingField,
    (int32_t)prefab,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__SetContentsFullReleaseEffect(
        ClassBoardResourceContents_o *this,
        ClassBoardFullReleaseEffectComponent_o *fullReleaseEffectComponent,
        ClassBoardFullReleaseEffectComponent_o *grandFullReleaseEffectComponent,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  this->fields._FullReleaseEffectComponent_k__BackingField = fullReleaseEffectComponent;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._FullReleaseEffectComponent_k__BackingField,
    (int32_t)fullReleaseEffectComponent,
    (int32_t)grandFullReleaseEffectComponent,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields._GrandFullReleaseEffectComponent_k__BackingField = grandFullReleaseEffectComponent;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandFullReleaseEffectComponent_k__BackingField,
    (int32_t)grandFullReleaseEffectComponent,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void ClassBoardResourceContents__SetContentsGrandBgModel(
        ClassBoardResourceContents_o *this,
        ClassBoardBackground_o *grandBgModel,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._GrandBgModel_k__BackingField = grandBgModel;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandBgModel_k__BackingField,
    (int32_t)grandBgModel,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__SetContentsGrandBoardDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardQuestOpenConfirmDialog_o *classBoardQuestOpenConfirmDialog,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ClassBoardQuestOpenConfirmDialog_k__BackingField = classBoardQuestOpenConfirmDialog;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ClassBoardQuestOpenConfirmDialog_k__BackingField,
    (int32_t)classBoardQuestOpenConfirmDialog,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__SetContentsGrandGraph(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *grandGraphAtlasManagerUnit,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._GrandGraphAtlasManagerUnit_k__BackingField = grandGraphAtlasManagerUnit;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandGraphAtlasManagerUnit_k__BackingField,
    (int32_t)grandGraphAtlasManagerUnit,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__SetContentsUI(
        ClassBoardResourceContents_o *this,
        ClassBoardUIController_o *uiController,
        AtlasManagerUnit_o *boardUiAtlasManagerUnit,
        AtlasManagerUnit_o *iconAtlasManagerUnit,
        AtlasManagerUnit_o *classUiAtlasManagerUnit,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  this->fields._BoardUiController_k__BackingField = uiController;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._BoardUiController_k__BackingField,
    (int32_t)uiController,
    (int32_t)boardUiAtlasManagerUnit,
    (int32_t)iconAtlasManagerUnit,
    (System_String_o *)classUiAtlasManagerUnit,
    (int32_t)method,
    v6,
    v7);
  this->fields._BoardUiAtlasManagerUnit_k__BackingField = boardUiAtlasManagerUnit;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._BoardUiAtlasManagerUnit_k__BackingField,
    (int32_t)boardUiAtlasManagerUnit,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._IconAtlasManagerUnit_k__BackingField = iconAtlasManagerUnit;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._IconAtlasManagerUnit_k__BackingField,
    (int32_t)iconAtlasManagerUnit,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._ClassUiAtlasManagerUnit_k__BackingField = classUiAtlasManagerUnit;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ClassUiAtlasManagerUnit_k__BackingField,
    (int32_t)classUiAtlasManagerUnit,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


void ClassBoardResourceContents__SetGrandContents(
        ClassBoardResourceContents_o *this,
        ClassBoardSquare_o *square,
        ClassBoardLine_o *line,
        ClassBoardLock_o *lockAsset,
        ClassBoardBlank_o *blank,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  this->fields._GrandSquare_k__BackingField = square;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandSquare_k__BackingField,
    (int32_t)square,
    (int32_t)line,
    (int32_t)lockAsset,
    (System_String_o *)blank,
    (int32_t)method,
    v6,
    v7);
  this->fields._GrandLine_k__BackingField = line;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandLine_k__BackingField,
    (int32_t)line,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._GrandLock_k__BackingField = lockAsset;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandLock_k__BackingField,
    (int32_t)lockAsset,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._GrandBlank_k__BackingField = blank;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandBlank_k__BackingField,
    (int32_t)blank,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


ClassBoardBackground_o *ClassBoardResourceContents__get_BgModel(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._BgModel_k__BackingField;
}


ClassBoardBlank_o *ClassBoardResourceContents__get_Blank(ClassBoardResourceContents_o *this, const MethodInfo *method)
{
  return this->fields._Blank_k__BackingField;
}


UnityEngine_GameObject_o *ClassBoardResourceContents__get_BoardSelectViewPrefab(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._BoardSelectViewPrefab_k__BackingField;
}


AtlasManagerUnit_o *ClassBoardResourceContents__get_BoardUiAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._BoardUiAtlasManagerUnit_k__BackingField;
}


ClassBoardUIController_o *ClassBoardResourceContents__get_BoardUiController(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._BoardUiController_k__BackingField;
}


ClassBoardQuestOpenConfirmDialog_o *ClassBoardResourceContents__get_ClassBoardQuestOpenConfirmDialog(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._ClassBoardQuestOpenConfirmDialog_k__BackingField;
}


AtlasManagerUnit_o *ClassBoardResourceContents__get_ClassUiAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._ClassUiAtlasManagerUnit_k__BackingField;
}


ClassBoardDisableOpenDialog_o *ClassBoardResourceContents__get_DisableOpenDialog(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._DisableOpenDialog_k__BackingField;
}


ClassBoardFigureController_o *ClassBoardResourceContents__get_FigureController(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._FigureController_k__BackingField;
}


UnityEngine_GameObject_o *ClassBoardResourceContents__get_ForwardIconAnimObjectPrefab(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._ForwardIconAnimObjectPrefab_k__BackingField;
}


ClassBoardFullReleaseEffectComponent_o *ClassBoardResourceContents__get_FullReleaseEffectComponent(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._FullReleaseEffectComponent_k__BackingField;
}


ClassBoardBackground_o *ClassBoardResourceContents__get_GrandBgModel(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandBgModel_k__BackingField;
}


ClassBoardBlank_o *ClassBoardResourceContents__get_GrandBlank(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandBlank_k__BackingField;
}


ClassBoardFullReleaseEffectComponent_o *ClassBoardResourceContents__get_GrandFullReleaseEffectComponent(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandFullReleaseEffectComponent_k__BackingField;
}


AtlasManagerUnit_o *ClassBoardResourceContents__get_GrandGraphAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandGraphAtlasManagerUnit_k__BackingField;
}


ClassBoardLine_o *ClassBoardResourceContents__get_GrandLine(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandLine_k__BackingField;
}


ClassBoardLock_o *ClassBoardResourceContents__get_GrandLock(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandLock_k__BackingField;
}


ClassBoardSquare_o *ClassBoardResourceContents__get_GrandSquare(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandSquare_k__BackingField;
}


AtlasManagerUnit_o *ClassBoardResourceContents__get_IconAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._IconAtlasManagerUnit_k__BackingField;
}


ClassBoardLine_o *ClassBoardResourceContents__get_Line(ClassBoardResourceContents_o *this, const MethodInfo *method)
{
  return this->fields._Line_k__BackingField;
}


ClassBoardLock_o *ClassBoardResourceContents__get_Lock(ClassBoardResourceContents_o *this, const MethodInfo *method)
{
  return this->fields._Lock_k__BackingField;
}


ClassBoardLockOpenConfirmDialog_o *ClassBoardResourceContents__get_LockOpenConfirmDialog(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._LockOpenConfirmDialog_k__BackingField;
}


ClassBoardLockReleaseConditionDialog_o *ClassBoardResourceContents__get_LockReleaseConditionDialog(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._LockReleaseConditionDialog_k__BackingField;
}


ClassBoardSquare_o *ClassBoardResourceContents__get_Square(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._Square_k__BackingField;
}


ClassBoardSquareDetailDialog_o *ClassBoardResourceContents__get_SquareDetailDialog(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._SquareDetailDialog_k__BackingField;
}


ClassBoardSquareOpenConfirmDialog_o *ClassBoardResourceContents__get_SquareOpenConfirmDialog(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._SquareOpenConfirmDialog_k__BackingField;
}


void ClassBoardResourceContents__set_BgModel(
        ClassBoardResourceContents_o *this,
        ClassBoardBackground_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BgModel_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._BgModel_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_Blank(
        ClassBoardResourceContents_o *this,
        ClassBoardBlank_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Blank_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._Blank_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_BoardSelectViewPrefab(
        ClassBoardResourceContents_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BoardSelectViewPrefab_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._BoardSelectViewPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_BoardUiAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BoardUiAtlasManagerUnit_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._BoardUiAtlasManagerUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_BoardUiController(
        ClassBoardResourceContents_o *this,
        ClassBoardUIController_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BoardUiController_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._BoardUiController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_ClassBoardQuestOpenConfirmDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardQuestOpenConfirmDialog_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ClassBoardQuestOpenConfirmDialog_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ClassBoardQuestOpenConfirmDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_ClassUiAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ClassUiAtlasManagerUnit_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ClassUiAtlasManagerUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_DisableOpenDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardDisableOpenDialog_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._DisableOpenDialog_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._DisableOpenDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_FigureController(
        ClassBoardResourceContents_o *this,
        ClassBoardFigureController_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._FigureController_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._FigureController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_ForwardIconAnimObjectPrefab(
        ClassBoardResourceContents_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ForwardIconAnimObjectPrefab_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ForwardIconAnimObjectPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_FullReleaseEffectComponent(
        ClassBoardResourceContents_o *this,
        ClassBoardFullReleaseEffectComponent_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._FullReleaseEffectComponent_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._FullReleaseEffectComponent_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_GrandBgModel(
        ClassBoardResourceContents_o *this,
        ClassBoardBackground_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._GrandBgModel_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandBgModel_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_GrandBlank(
        ClassBoardResourceContents_o *this,
        ClassBoardBlank_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._GrandBlank_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandBlank_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_GrandFullReleaseEffectComponent(
        ClassBoardResourceContents_o *this,
        ClassBoardFullReleaseEffectComponent_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._GrandFullReleaseEffectComponent_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandFullReleaseEffectComponent_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_GrandGraphAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._GrandGraphAtlasManagerUnit_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandGraphAtlasManagerUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_GrandLine(
        ClassBoardResourceContents_o *this,
        ClassBoardLine_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._GrandLine_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandLine_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_GrandLock(
        ClassBoardResourceContents_o *this,
        ClassBoardLock_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._GrandLock_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandLock_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_GrandSquare(
        ClassBoardResourceContents_o *this,
        ClassBoardSquare_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._GrandSquare_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._GrandSquare_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_IconAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._IconAtlasManagerUnit_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._IconAtlasManagerUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_Line(
        ClassBoardResourceContents_o *this,
        ClassBoardLine_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Line_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._Line_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_Lock(
        ClassBoardResourceContents_o *this,
        ClassBoardLock_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Lock_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._Lock_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_LockOpenConfirmDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardLockOpenConfirmDialog_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._LockOpenConfirmDialog_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._LockOpenConfirmDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_LockReleaseConditionDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardLockReleaseConditionDialog_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._LockReleaseConditionDialog_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._LockReleaseConditionDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_Square(
        ClassBoardResourceContents_o *this,
        ClassBoardSquare_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Square_k__BackingField = value;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void ClassBoardResourceContents__set_SquareDetailDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardSquareDetailDialog_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SquareDetailDialog_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._SquareDetailDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_SquareOpenConfirmDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardSquareOpenConfirmDialog_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SquareOpenConfirmDialog_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._SquareOpenConfirmDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}