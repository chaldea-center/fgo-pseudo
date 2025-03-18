void __fastcall ClassBoardResourceContents___ctor(ClassBoardResourceContents_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardResourceContents__SetBoardUIAtlas(
        ClassBoardResourceContents_o *this,
        AtlasManagerUnit_o *boardUiAtlasManagerUnit,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BoardUiAtlasManagerUnit_k__BackingField = boardUiAtlasManagerUnit;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._BoardUiAtlasManagerUnit_k__BackingField,
    (int64_t)boardUiAtlasManagerUnit,
    (int64_t)method,
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  this->fields._Square_k__BackingField = square;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields,
    (int64_t)square,
    (int64_t)line,
    (int32_t)lockAsset,
    (System_String_o *)blank,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields._Line_k__BackingField = line;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._Line_k__BackingField,
    (int64_t)line,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._Lock_k__BackingField = lockAsset;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._Lock_k__BackingField,
    (int64_t)lockAsset,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._Blank_k__BackingField = blank;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._Blank_k__BackingField,
    (int64_t)blank,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BgModel_k__BackingField = bgModel;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._BgModel_k__BackingField,
    (int64_t)bgModel,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BoardSelectViewPrefab_k__BackingField = boardSelectViewPrefab;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._BoardSelectViewPrefab_k__BackingField,
    (int64_t)boardSelectViewPrefab,
    (int64_t)method,
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
  PartyListViewItem_o *v7; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  this->fields._DisableOpenDialog_k__BackingField = classBoardDisableOpenDialog;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._DisableOpenDialog_k__BackingField,
    (int64_t)classBoardDisableOpenDialog,
    (int64_t)classBoardSquareOpenConfirmDialog,
    (int32_t)classBoardLockOpenConfirmDialog,
    (System_String_o *)classBoardLockReleaseConditionDialog,
    (BattleSetupInfo_o *)classBoardSquareDetailDialog,
    (FollowerInfo_o *)method,
    v7);
  this->fields._SquareOpenConfirmDialog_k__BackingField = classBoardSquareOpenConfirmDialog;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._SquareOpenConfirmDialog_k__BackingField,
    (int64_t)classBoardSquareOpenConfirmDialog,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields._LockOpenConfirmDialog_k__BackingField = classBoardLockOpenConfirmDialog;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._LockOpenConfirmDialog_k__BackingField,
    (int64_t)classBoardLockOpenConfirmDialog,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields._LockReleaseConditionDialog_k__BackingField = classBoardLockReleaseConditionDialog;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._LockReleaseConditionDialog_k__BackingField,
    (int64_t)classBoardLockReleaseConditionDialog,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields._SquareDetailDialog_k__BackingField = classBoardSquareDetailDialog;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._SquareDetailDialog_k__BackingField,
    (int64_t)classBoardSquareDetailDialog,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ForwardIconAnimObjectPrefab_k__BackingField = prefab;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._ForwardIconAnimObjectPrefab_k__BackingField,
    (int64_t)prefab,
    (int64_t)method,
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
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  this->fields._BoardUiController_k__BackingField = uiController;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._BoardUiController_k__BackingField,
    (int64_t)uiController,
    (int64_t)boardUiAtlasManagerUnit,
    (int32_t)iconAtlasManagerUnit,
    (System_String_o *)classUiAtlasManagerUnit,
    (BattleSetupInfo_o *)method,
    v6,
    v7);
  this->fields._BoardUiAtlasManagerUnit_k__BackingField = boardUiAtlasManagerUnit;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._BoardUiAtlasManagerUnit_k__BackingField,
    (int64_t)boardUiAtlasManagerUnit,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields._IconAtlasManagerUnit_k__BackingField = iconAtlasManagerUnit;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._IconAtlasManagerUnit_k__BackingField,
    (int64_t)iconAtlasManagerUnit,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields._ClassUiAtlasManagerUnit_k__BackingField = classUiAtlasManagerUnit;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._ClassUiAtlasManagerUnit_k__BackingField,
    (int64_t)classUiAtlasManagerUnit,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BgModel_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._BgModel_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Blank_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._Blank_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BoardSelectViewPrefab_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._BoardSelectViewPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BoardUiAtlasManagerUnit_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._BoardUiAtlasManagerUnit_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BoardUiController_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._BoardUiController_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ClassUiAtlasManagerUnit_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._ClassUiAtlasManagerUnit_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._DisableOpenDialog_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._DisableOpenDialog_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ForwardIconAnimObjectPrefab_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._ForwardIconAnimObjectPrefab_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._IconAtlasManagerUnit_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._IconAtlasManagerUnit_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Line_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._Line_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Lock_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._Lock_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._LockOpenConfirmDialog_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._LockOpenConfirmDialog_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._LockReleaseConditionDialog_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._LockReleaseConditionDialog_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Square_k__BackingField = value;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall ClassBoardResourceContents__set_SquareDetailDialog(
        ClassBoardResourceContents_o *this,
        ClassBoardSquareDetailDialog_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SquareDetailDialog_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._SquareDetailDialog_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SquareOpenConfirmDialog_k__BackingField = value;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._SquareOpenConfirmDialog_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}