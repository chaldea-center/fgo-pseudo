void __fastcall ClassBoardResourceContents___ctor(ClassBoardResourceContents_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardResourceContents__SetBoardUIAtlas(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *boardUiAtlasManagerUnit,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BoardUiAtlasManagerUnit_k__BackingField = boardUiAtlasManagerUnit;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._BoardUiAtlasManagerUnit_k__BackingField,
    (int32_t)boardUiAtlasManagerUnit,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__SetContents(
        ClassBoardResourceContents_o *this,
        ClassBoardSquare_o *square,
        ClassBoardLine_o *line,
        ClassBoardLock_o *lockAsset,
        ClassBoardBlank_o *blank,
        const MethodInfo *method)
{
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  this->fields._Square_k__BackingField = square;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)square, (int32_t)line, (const MethodInfo *)lockAsset);
  this->fields._Line_k__BackingField = line;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._Line_k__BackingField, (int32_t)line, v10, v11);
  this->fields._Lock_k__BackingField = lockAsset;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._Lock_k__BackingField, (int32_t)lockAsset, v12, v13);
  this->fields._Blank_k__BackingField = blank;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._Blank_k__BackingField, (int32_t)blank, v14, v15);
}


void __fastcall ClassBoardResourceContents__SetContentsBgModel(
        ClassBoardResourceContents_o *this,
        ClassBoardBackground_o *bgModel,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BgModel_k__BackingField = bgModel;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._BgModel_k__BackingField, (int32_t)bgModel, (int32_t)method, v3);
}


void __fastcall ClassBoardResourceContents__SetContentsBoardSelectView(
        ClassBoardResourceContents_o *this,
        UnityEngine_GameObject_o *boardSelectViewPrefab,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BoardSelectViewPrefab_k__BackingField = boardSelectViewPrefab;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._BoardSelectViewPrefab_k__BackingField,
    (int32_t)boardSelectViewPrefab,
    (int32_t)method,
    v3);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  this->fields._DisableOpenDialog_k__BackingField = classBoardDisableOpenDialog;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._DisableOpenDialog_k__BackingField,
    (int32_t)classBoardDisableOpenDialog,
    (int32_t)classBoardSquareOpenConfirmDialog,
    (const MethodInfo *)classBoardLockOpenConfirmDialog);
  this->fields._SquareOpenConfirmDialog_k__BackingField = classBoardSquareOpenConfirmDialog;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._SquareOpenConfirmDialog_k__BackingField,
    (int32_t)classBoardSquareOpenConfirmDialog,
    v12,
    v13);
  this->fields._LockOpenConfirmDialog_k__BackingField = classBoardLockOpenConfirmDialog;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._LockOpenConfirmDialog_k__BackingField,
    (int32_t)classBoardLockOpenConfirmDialog,
    v14,
    v15);
  this->fields._LockReleaseConditionDialog_k__BackingField = classBoardLockReleaseConditionDialog;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._LockReleaseConditionDialog_k__BackingField,
    (int32_t)classBoardLockReleaseConditionDialog,
    v16,
    v17);
  this->fields._SquareDetailDialog_k__BackingField = classBoardSquareDetailDialog;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._SquareDetailDialog_k__BackingField,
    (int32_t)classBoardSquareDetailDialog,
    v18,
    v19);
}


void __fastcall ClassBoardResourceContents__SetContentsFigure(
        ClassBoardResourceContents_o *this,
        ClassBoardFigureController_o *figureController,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FigureController_k__BackingField = figureController;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._FigureController_k__BackingField,
    (int32_t)figureController,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__SetContentsForwardIconAnimObject(
        ClassBoardResourceContents_o *this,
        UnityEngine_GameObject_o *prefab,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ForwardIconAnimObjectPrefab_k__BackingField = prefab;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._ForwardIconAnimObjectPrefab_k__BackingField,
    (int32_t)prefab,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__SetContentsFullReleaseEffect(
        ClassBoardResourceContents_o *this,
        ClassBoardFullReleaseEffectComponent_o *fullReleaseEffectComponent,
        ClassBoardFullReleaseEffectComponent_o *grandFullReleaseEffectComponent,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  this->fields._FullReleaseEffectComponent_k__BackingField = fullReleaseEffectComponent;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._FullReleaseEffectComponent_k__BackingField,
    (int32_t)fullReleaseEffectComponent,
    (int32_t)grandFullReleaseEffectComponent,
    method);
  this->fields._GrandFullReleaseEffectComponent_k__BackingField = grandFullReleaseEffectComponent;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._GrandFullReleaseEffectComponent_k__BackingField,
    (int32_t)grandFullReleaseEffectComponent,
    v6,
    v7);
}


void __fastcall ClassBoardResourceContents__SetContentsGrandBgModel(
        ClassBoardResourceContents_o *this,
        ClassBoardBackground_o *grandBgModel,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GrandBgModel_k__BackingField = grandBgModel;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._GrandBgModel_k__BackingField,
    (int32_t)grandBgModel,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__SetContentsGrandBoardDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardQuestOpenConfirmDialog_o *classBoardQuestOpenConfirmDialog,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ClassBoardQuestOpenConfirmDialog_k__BackingField = classBoardQuestOpenConfirmDialog;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._ClassBoardQuestOpenConfirmDialog_k__BackingField,
    (int32_t)classBoardQuestOpenConfirmDialog,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__SetContentsGrandGraph(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *grandGraphAtlasManagerUnit,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GrandGraphAtlasManagerUnit_k__BackingField = grandGraphAtlasManagerUnit;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._GrandGraphAtlasManagerUnit_k__BackingField,
    (int32_t)grandGraphAtlasManagerUnit,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__SetContentsUI(
        ClassBoardResourceContents_o *this,
        ClassBoardUIController_o *uiController,
        AtlasManagerUnit_o *boardUiAtlasManagerUnit,
        AtlasManagerUnit_o *iconAtlasManagerUnit,
        AtlasManagerUnit_o *classUiAtlasManagerUnit,
        const MethodInfo *method)
{
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  this->fields._BoardUiController_k__BackingField = uiController;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._BoardUiController_k__BackingField,
    (int32_t)uiController,
    (int32_t)boardUiAtlasManagerUnit,
    (const MethodInfo *)iconAtlasManagerUnit);
  this->fields._BoardUiAtlasManagerUnit_k__BackingField = boardUiAtlasManagerUnit;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._BoardUiAtlasManagerUnit_k__BackingField,
    (int32_t)boardUiAtlasManagerUnit,
    v10,
    v11);
  this->fields._IconAtlasManagerUnit_k__BackingField = iconAtlasManagerUnit;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._IconAtlasManagerUnit_k__BackingField,
    (int32_t)iconAtlasManagerUnit,
    v12,
    v13);
  this->fields._ClassUiAtlasManagerUnit_k__BackingField = classUiAtlasManagerUnit;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._ClassUiAtlasManagerUnit_k__BackingField,
    (int32_t)classUiAtlasManagerUnit,
    v14,
    v15);
}


void __fastcall ClassBoardResourceContents__SetGrandContents(
        ClassBoardResourceContents_o *this,
        ClassBoardSquare_o *square,
        ClassBoardLine_o *line,
        ClassBoardLock_o *lockAsset,
        ClassBoardBlank_o *blank,
        const MethodInfo *method)
{
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  this->fields._GrandSquare_k__BackingField = square;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._GrandSquare_k__BackingField,
    (int32_t)square,
    (int32_t)line,
    (const MethodInfo *)lockAsset);
  this->fields._GrandLine_k__BackingField = line;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._GrandLine_k__BackingField, (int32_t)line, v10, v11);
  this->fields._GrandLock_k__BackingField = lockAsset;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._GrandLock_k__BackingField, (int32_t)lockAsset, v12, v13);
  this->fields._GrandBlank_k__BackingField = blank;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._GrandBlank_k__BackingField, (int32_t)blank, v14, v15);
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


ClassBoardQuestOpenConfirmDialog_o *__fastcall ClassBoardResourceContents__get_ClassBoardQuestOpenConfirmDialog(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._ClassBoardQuestOpenConfirmDialog_k__BackingField;
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


ClassBoardFigureController_o *__fastcall ClassBoardResourceContents__get_FigureController(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._FigureController_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall ClassBoardResourceContents__get_ForwardIconAnimObjectPrefab(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._ForwardIconAnimObjectPrefab_k__BackingField;
}


ClassBoardFullReleaseEffectComponent_o *__fastcall ClassBoardResourceContents__get_FullReleaseEffectComponent(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._FullReleaseEffectComponent_k__BackingField;
}


ClassBoardBackground_o *__fastcall ClassBoardResourceContents__get_GrandBgModel(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandBgModel_k__BackingField;
}


ClassBoardBlank_o *__fastcall ClassBoardResourceContents__get_GrandBlank(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandBlank_k__BackingField;
}


ClassBoardFullReleaseEffectComponent_o *__fastcall ClassBoardResourceContents__get_GrandFullReleaseEffectComponent(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandFullReleaseEffectComponent_k__BackingField;
}


AtlasManagerUnit_o *__fastcall ClassBoardResourceContents__get_GrandGraphAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandGraphAtlasManagerUnit_k__BackingField;
}


ClassBoardLine_o *__fastcall ClassBoardResourceContents__get_GrandLine(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandLine_k__BackingField;
}


ClassBoardLock_o *__fastcall ClassBoardResourceContents__get_GrandLock(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandLock_k__BackingField;
}


ClassBoardSquare_o *__fastcall ClassBoardResourceContents__get_GrandSquare(
        ClassBoardResourceContents_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandSquare_k__BackingField;
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
  const MethodInfo *v3; // x3

  this->fields._BgModel_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._BgModel_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ClassBoardResourceContents__set_Blank(
        ClassBoardResourceContents_o *this,
        ClassBoardBlank_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Blank_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._Blank_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ClassBoardResourceContents__set_BoardSelectViewPrefab(
        ClassBoardResourceContents_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BoardSelectViewPrefab_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._BoardSelectViewPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__set_BoardUiAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BoardUiAtlasManagerUnit_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._BoardUiAtlasManagerUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__set_BoardUiController(
        ClassBoardResourceContents_o *this,
        ClassBoardUIController_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BoardUiController_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._BoardUiController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__set_ClassBoardQuestOpenConfirmDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardQuestOpenConfirmDialog_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ClassBoardQuestOpenConfirmDialog_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._ClassBoardQuestOpenConfirmDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__set_ClassUiAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ClassUiAtlasManagerUnit_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._ClassUiAtlasManagerUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__set_DisableOpenDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardDisableOpenDialog_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._DisableOpenDialog_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._DisableOpenDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__set_FigureController(
        ClassBoardResourceContents_o *this,
        ClassBoardFigureController_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FigureController_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._FigureController_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__set_ForwardIconAnimObjectPrefab(
        ClassBoardResourceContents_o *this,
        UnityEngine_GameObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ForwardIconAnimObjectPrefab_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._ForwardIconAnimObjectPrefab_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__set_FullReleaseEffectComponent(
        ClassBoardResourceContents_o *this,
        ClassBoardFullReleaseEffectComponent_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._FullReleaseEffectComponent_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._FullReleaseEffectComponent_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__set_GrandBgModel(
        ClassBoardResourceContents_o *this,
        ClassBoardBackground_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GrandBgModel_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._GrandBgModel_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ClassBoardResourceContents__set_GrandBlank(
        ClassBoardResourceContents_o *this,
        ClassBoardBlank_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GrandBlank_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._GrandBlank_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ClassBoardResourceContents__set_GrandFullReleaseEffectComponent(
        ClassBoardResourceContents_o *this,
        ClassBoardFullReleaseEffectComponent_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GrandFullReleaseEffectComponent_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._GrandFullReleaseEffectComponent_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__set_GrandGraphAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GrandGraphAtlasManagerUnit_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._GrandGraphAtlasManagerUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__set_GrandLine(
        ClassBoardResourceContents_o *this,
        ClassBoardLine_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GrandLine_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._GrandLine_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ClassBoardResourceContents__set_GrandLock(
        ClassBoardResourceContents_o *this,
        ClassBoardLock_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GrandLock_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._GrandLock_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ClassBoardResourceContents__set_GrandSquare(
        ClassBoardResourceContents_o *this,
        ClassBoardSquare_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._GrandSquare_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._GrandSquare_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ClassBoardResourceContents__set_IconAtlasManagerUnit(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._IconAtlasManagerUnit_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._IconAtlasManagerUnit_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__set_Line(
        ClassBoardResourceContents_o *this,
        ClassBoardLine_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Line_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._Line_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ClassBoardResourceContents__set_Lock(
        ClassBoardResourceContents_o *this,
        ClassBoardLock_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Lock_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._Lock_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ClassBoardResourceContents__set_LockOpenConfirmDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardLockOpenConfirmDialog_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._LockOpenConfirmDialog_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._LockOpenConfirmDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__set_LockReleaseConditionDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardLockReleaseConditionDialog_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._LockReleaseConditionDialog_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._LockReleaseConditionDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__set_Square(
        ClassBoardResourceContents_o *this,
        ClassBoardSquare_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Square_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall ClassBoardResourceContents__set_SquareDetailDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardSquareDetailDialog_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SquareDetailDialog_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._SquareDetailDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall ClassBoardResourceContents__set_SquareOpenConfirmDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardSquareOpenConfirmDialog_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._SquareOpenConfirmDialog_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._SquareOpenConfirmDialog_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}