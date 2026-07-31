void ClassBoardResourceContents___ctor(ClassBoardResourceContents_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardResourceContents__SetBoardUIAtlas(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *boardUiAtlasManagerUnit,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BoardUiAtlasManagerUnit_k__BackingField = boardUiAtlasManagerUnit;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BoardUiAtlasManagerUnit_k__BackingField,
    (int32_t)boardUiAtlasManagerUnit,
    (System_String_o *)method,
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
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  this->fields._Square_k__BackingField = square;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)square,
    (System_String_o *)line,
    (System_String_o *)lockAsset,
    (int32_t)blank,
    (int32_t)method,
    v6,
    v7);
  this->fields._Line_k__BackingField = line;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Line_k__BackingField,
    (int32_t)line,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._Lock_k__BackingField = lockAsset;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Lock_k__BackingField,
    (int32_t)lockAsset,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._Blank_k__BackingField = blank;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Blank_k__BackingField,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BgModel_k__BackingField = bgModel;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BgModel_k__BackingField,
    (int32_t)bgModel,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BoardSelectViewPrefab_k__BackingField = boardSelectViewPrefab;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BoardSelectViewPrefab_k__BackingField,
    (int32_t)boardSelectViewPrefab,
    (System_String_o *)method,
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
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  this->fields._DisableOpenDialog_k__BackingField = classBoardDisableOpenDialog;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DisableOpenDialog_k__BackingField,
    (int32_t)classBoardDisableOpenDialog,
    (System_String_o *)classBoardSquareOpenConfirmDialog,
    (System_String_o *)classBoardLockOpenConfirmDialog,
    (int32_t)classBoardLockReleaseConditionDialog,
    (int32_t)classBoardSquareDetailDialog,
    (bool)method,
    v7);
  this->fields._SquareOpenConfirmDialog_k__BackingField = classBoardSquareOpenConfirmDialog;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SquareOpenConfirmDialog_k__BackingField,
    (int32_t)classBoardSquareOpenConfirmDialog,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields._LockOpenConfirmDialog_k__BackingField = classBoardLockOpenConfirmDialog;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._LockOpenConfirmDialog_k__BackingField,
    (int32_t)classBoardLockOpenConfirmDialog,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields._LockReleaseConditionDialog_k__BackingField = classBoardLockReleaseConditionDialog;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._LockReleaseConditionDialog_k__BackingField,
    (int32_t)classBoardLockReleaseConditionDialog,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields._SquareDetailDialog_k__BackingField = classBoardSquareDetailDialog;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SquareDetailDialog_k__BackingField,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._FigureController_k__BackingField = figureController;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FigureController_k__BackingField,
    (int32_t)figureController,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ForwardIconAnimObjectPrefab_k__BackingField = prefab;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ForwardIconAnimObjectPrefab_k__BackingField,
    (int32_t)prefab,
    (System_String_o *)method,
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  this->fields._FullReleaseEffectComponent_k__BackingField = fullReleaseEffectComponent;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FullReleaseEffectComponent_k__BackingField,
    (int32_t)fullReleaseEffectComponent,
    (System_String_o *)grandFullReleaseEffectComponent,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields._GrandFullReleaseEffectComponent_k__BackingField = grandFullReleaseEffectComponent;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandFullReleaseEffectComponent_k__BackingField,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GrandBgModel_k__BackingField = grandBgModel;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandBgModel_k__BackingField,
    (int32_t)grandBgModel,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ClassBoardQuestOpenConfirmDialog_k__BackingField = classBoardQuestOpenConfirmDialog;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ClassBoardQuestOpenConfirmDialog_k__BackingField,
    (int32_t)classBoardQuestOpenConfirmDialog,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GrandGraphAtlasManagerUnit_k__BackingField = grandGraphAtlasManagerUnit;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandGraphAtlasManagerUnit_k__BackingField,
    (int32_t)grandGraphAtlasManagerUnit,
    (System_String_o *)method,
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
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  this->fields._BoardUiController_k__BackingField = uiController;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BoardUiController_k__BackingField,
    (int32_t)uiController,
    (System_String_o *)boardUiAtlasManagerUnit,
    (System_String_o *)iconAtlasManagerUnit,
    (int32_t)classUiAtlasManagerUnit,
    (int32_t)method,
    v6,
    v7);
  this->fields._BoardUiAtlasManagerUnit_k__BackingField = boardUiAtlasManagerUnit;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BoardUiAtlasManagerUnit_k__BackingField,
    (int32_t)boardUiAtlasManagerUnit,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._IconAtlasManagerUnit_k__BackingField = iconAtlasManagerUnit;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._IconAtlasManagerUnit_k__BackingField,
    (int32_t)iconAtlasManagerUnit,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._ClassUiAtlasManagerUnit_k__BackingField = classUiAtlasManagerUnit;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ClassUiAtlasManagerUnit_k__BackingField,
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
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  this->fields._GrandSquare_k__BackingField = square;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandSquare_k__BackingField,
    (int32_t)square,
    (System_String_o *)line,
    (System_String_o *)lockAsset,
    (int32_t)blank,
    (int32_t)method,
    v6,
    v7);
  this->fields._GrandLine_k__BackingField = line;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandLine_k__BackingField,
    (int32_t)line,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._GrandLock_k__BackingField = lockAsset;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandLock_k__BackingField,
    (int32_t)lockAsset,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._GrandBlank_k__BackingField = blank;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandBlank_k__BackingField,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BgModel_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BgModel_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Blank_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Blank_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BoardSelectViewPrefab_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BoardSelectViewPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BoardUiAtlasManagerUnit_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BoardUiAtlasManagerUnit_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BoardUiController_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BoardUiController_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ClassBoardQuestOpenConfirmDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ClassBoardQuestOpenConfirmDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ClassUiAtlasManagerUnit_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ClassUiAtlasManagerUnit_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._DisableOpenDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._DisableOpenDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._FigureController_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FigureController_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ForwardIconAnimObjectPrefab_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ForwardIconAnimObjectPrefab_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._FullReleaseEffectComponent_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._FullReleaseEffectComponent_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GrandBgModel_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandBgModel_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GrandBlank_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandBlank_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GrandFullReleaseEffectComponent_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandFullReleaseEffectComponent_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GrandGraphAtlasManagerUnit_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandGraphAtlasManagerUnit_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GrandLine_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandLine_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GrandLock_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandLock_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._GrandSquare_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GrandSquare_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._IconAtlasManagerUnit_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._IconAtlasManagerUnit_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Line_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Line_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Lock_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Lock_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._LockOpenConfirmDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._LockOpenConfirmDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._LockReleaseConditionDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._LockReleaseConditionDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Square_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardResourceContents__set_SquareDetailDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardSquareDetailDialog_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SquareDetailDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SquareDetailDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SquareOpenConfirmDialog_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SquareOpenConfirmDialog_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}