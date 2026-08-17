void ClassBoardUIController___ctor(ClassBoardUIController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardUIController__ActivateClassBoardResetButton(
        ClassBoardUIController_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *classBoardResetBtnSprite; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *grandScoreBtnSprite; // x21
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Component_o *v10; // x20
  bool activeSelf; // w0
  __int64 v12; // x8

  if ( (byte_5974768 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974768 = 1;
  }
  classBoardResetBtnSprite = (UnityEngine_Object_o *)this->fields.classBoardResetBtnSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp);
  if ( UnityEngine_Object__op_Inequality(classBoardResetBtnSprite, 0, 0) )
  {
    grandScoreBtnSprite = (UnityEngine_Object_o *)this->fields.grandScoreBtnSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(grandScoreBtnSprite, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.classBoardResetBtnSprite;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isDisp, 0),
            (gameObject = (UnityEngine_Component_o *)this->fields.grandScoreBtnSprite) == 0)
        || (v10 = (UnityEngine_Component_o *)this->fields.classBoardResetBtnSprite,
            (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0) )
      {
        sub_2213CDC(gameObject, v8);
      }
      activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0);
      v12 = 240;
      if ( activeSelf )
        v12 = 244;
      ComponentHelper__SetLocalPositionY(v10, *(float *)((char *)&this->klass + v12), 0);
    }
  }
}


void ClassBoardUIController__ActivateClassBoardSelectButton(
        ClassBoardUIController_o *this,
        bool isActive,
        const MethodInfo *method)
{
  GameObjectHelper__SetActiveSafely(this->fields.classBoardSelectButton, isActive, 0);
}


void ClassBoardUIController__ActivateClassScoreButton(
        ClassBoardUIController_o *this,
        bool isActive,
        const MethodInfo *method)
{
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.classScoreBtnSprite, isActive, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardUIController__ActivateEffectListButton(
        ClassBoardUIController_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Component_o *effectListBtnSprite; // x0

  effectListBtnSprite = (UnityEngine_Component_o *)this->fields.effectListBtnSprite;
  if ( !effectListBtnSprite
    || (effectListBtnSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(effectListBtnSprite, 0)) == 0 )
  {
    sub_2213CDC(effectListBtnSprite, value);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectListBtnSprite, value, 0);
}


void ClassBoardUIController__ActivateGrandScoreButton(
        ClassBoardUIController_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Component_o *grandScoreBtnSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  grandScoreBtnSprite = (UnityEngine_Component_o *)this->fields.grandScoreBtnSprite;
  if ( grandScoreBtnSprite )
  {
    gameObject = UnityEngine_Component__get_gameObject(grandScoreBtnSprite, 0);
    if ( !gameObject )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(gameObject, value, 0);
  }
}


void ClassBoardUIController__ActivateToGrandServantListButton(
        ClassBoardUIController_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Component_o *toGrandServantListBtnSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  toGrandServantListBtnSprite = (UnityEngine_Component_o *)this->fields.toGrandServantListBtnSprite;
  if ( toGrandServantListBtnSprite )
  {
    gameObject = UnityEngine_Component__get_gameObject(toGrandServantListBtnSprite, 0);
    if ( !gameObject )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(gameObject, value, 0);
  }
}


void ClassBoardUIController__Awake(ClassBoardUIController_o *this, const MethodInfo *method)
{
  ;
}


void ClassBoardUIController__ChangeDisplayBackButtonClose(ClassBoardUIController_o *this, const MethodInfo *method)
{
  GameObjectHelper__SetActiveSafely(this->fields.backBtnClose, 1, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.backBtnToClassScoreSprite, 0, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.backBtnToGrandScoreSprite, 0, 0);
}


void ClassBoardUIController__ChangeDisplayBackButtonToClassScore(
        ClassBoardUIController_o *this,
        const MethodInfo *method)
{
  GameObjectHelper__SetActiveSafely(this->fields.backBtnClose, 0, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.backBtnToClassScoreSprite, 1, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.backBtnToGrandScoreSprite, 0, 0);
}


void ClassBoardUIController__ChangeDisplayBackButtonToGrandScore(
        ClassBoardUIController_o *this,
        const MethodInfo *method)
{
  GameObjectHelper__SetActiveSafely(this->fields.backBtnClose, 0, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.backBtnToClassScoreSprite, 0, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.backBtnToGrandScoreSprite, 1, 0);
}


void ClassBoardUIController__Init(ClassBoardUIController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x19
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *toGrandServantListBtnSprite; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *grandScoreBtnSprite; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *classScoreBtnSprite; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *classBoardResetBtnSprite; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  UnityEngine_Object_o *backBtnToClassScoreSprite; // x20
  _BOOL8 v19; // x0
  __int64 v20; // x1
  UnityEngine_Object_o *backBtnToGrandScoreSprite; // x20
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v25; // x0

  v2 = this;
  if ( (byte_5974767 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18303/*"btn_to_grand_scoreboard"*/);
    sub_2213A60(&StringLiteral_18300/*"btn_to_class_scoreboard"*/);
    sub_2213A60(&StringLiteral_18262/*"btn_list"*/);
    sub_2213A60(&StringLiteral_18278/*"btn_regression_hourglass"*/);
    sub_2213A60(&StringLiteral_18302/*"btn_to_crown_formation"*/);
    this = (ClassBoardUIController_o *)sub_2213A60(&StringLiteral_18304/*"btn_to_grand_scoreboard_2"*/);
    byte_5974767 = 1;
  }
  v2->fields.touchBlockCount = 0;
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit((const MethodInfo *)this);
  if ( !UiAtlasManagerUnit )
    goto LABEL_37;
  AtlasManagerUnit__SetUI(UiAtlasManagerUnit, v2->fields.effectListBtnSprite, (System_String_o *)StringLiteral_18262/*"btn_list"*/, 0);
  toGrandServantListBtnSprite = (UnityEngine_Object_o *)v2->fields.toGrandServantListBtnSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = UnityEngine_Object__op_Inequality(toGrandServantListBtnSprite, 0, 0);
  if ( v7 )
  {
    UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit((const MethodInfo *)v7);
    if ( !UiAtlasManagerUnit )
      goto LABEL_37;
    AtlasManagerUnit__SetUI(
      UiAtlasManagerUnit,
      v2->fields.toGrandServantListBtnSprite,
      (System_String_o *)StringLiteral_18302/*"btn_to_crown_formation"*/,
      0);
  }
  grandScoreBtnSprite = (UnityEngine_Object_o *)v2->fields.grandScoreBtnSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  v10 = UnityEngine_Object__op_Inequality(grandScoreBtnSprite, 0, 0);
  if ( v10 )
  {
    UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit((const MethodInfo *)v10);
    if ( !UiAtlasManagerUnit )
      goto LABEL_37;
    AtlasManagerUnit__SetUI(
      UiAtlasManagerUnit,
      v2->fields.grandScoreBtnSprite,
      (System_String_o *)StringLiteral_18303/*"btn_to_grand_scoreboard"*/,
      0);
  }
  classScoreBtnSprite = (UnityEngine_Object_o *)v2->fields.classScoreBtnSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v13 = UnityEngine_Object__op_Inequality(classScoreBtnSprite, 0, 0);
  if ( v13 )
  {
    UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit((const MethodInfo *)v13);
    if ( !UiAtlasManagerUnit )
      goto LABEL_37;
    AtlasManagerUnit__SetUI(
      UiAtlasManagerUnit,
      v2->fields.classScoreBtnSprite,
      (System_String_o *)StringLiteral_18300/*"btn_to_class_scoreboard"*/,
      0);
  }
  classBoardResetBtnSprite = (UnityEngine_Object_o *)v2->fields.classBoardResetBtnSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  v16 = UnityEngine_Object__op_Inequality(classBoardResetBtnSprite, 0, 0);
  if ( v16 )
  {
    UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit((const MethodInfo *)v16);
    if ( !UiAtlasManagerUnit )
      goto LABEL_37;
    AtlasManagerUnit__SetUI(
      UiAtlasManagerUnit,
      v2->fields.classBoardResetBtnSprite,
      (System_String_o *)StringLiteral_18278/*"btn_regression_hourglass"*/,
      0);
  }
  backBtnToClassScoreSprite = (UnityEngine_Object_o *)v2->fields.backBtnToClassScoreSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  v19 = UnityEngine_Object__op_Inequality(backBtnToClassScoreSprite, 0, 0);
  if ( v19 )
  {
    UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit((const MethodInfo *)v19);
    if ( !UiAtlasManagerUnit )
      goto LABEL_37;
    AtlasManagerUnit__SetUI(
      UiAtlasManagerUnit,
      v2->fields.backBtnToClassScoreSprite,
      (System_String_o *)StringLiteral_18300/*"btn_to_class_scoreboard"*/,
      0);
  }
  backBtnToGrandScoreSprite = (UnityEngine_Object_o *)v2->fields.backBtnToGrandScoreSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  v22 = UnityEngine_Object__op_Inequality(backBtnToGrandScoreSprite, 0, 0);
  if ( v22 )
  {
    UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit((const MethodInfo *)v22);
    if ( !UiAtlasManagerUnit )
      goto LABEL_37;
    AtlasManagerUnit__SetUI(
      UiAtlasManagerUnit,
      v2->fields.backBtnToGrandScoreSprite,
      (System_String_o *)StringLiteral_18304/*"btn_to_grand_scoreboard_2"*/,
      0);
  }
  ClassBoardUIController__ChangeDisplayBackButtonClose(v2, v23);
  AndroidBackKeyManager__AddBackBtn(v2->fields.backBtnClose, 0);
  UiAtlasManagerUnit = (AtlasManagerUnit_o *)v2->fields.backBtnToClassScoreSprite;
  if ( !UiAtlasManagerUnit
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)UiAtlasManagerUnit, 0),
        AndroidBackKeyManager__AddBackBtn(gameObject, 0),
        (UiAtlasManagerUnit = (AtlasManagerUnit_o *)v2->fields.backBtnToGrandScoreSprite) == 0) )
  {
LABEL_37:
    sub_2213CDC(UiAtlasManagerUnit, v4);
  }
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)UiAtlasManagerUnit, 0);
  AndroidBackKeyManager__AddBackBtn(v25, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ClassBoardUIController__IsOpenQuestOpenDialog(
        ClassBoardUIController_o *this,
        int32_t baseId,
        int32_t *questId,
        const MethodInfo *method)
{
  DataManager_c *v6; // x0
  int v7; // w8
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x8
  __int64 v11; // x1
  int32_t QuestOpenDialogCondSignNum; // w21
  bool result; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5974777 & 1) == 0 )
  {
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    byte_5974777 = 1;
  }
  v6 = DataManager_TypeInfo;
  *questId = 0;
  v7 = *(&v6->_2.cctor_finished + 1);
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(v6, *(_QWORD *)&baseId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          baseId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity
    || (Master_object = (Il2CppObject *)ClassBoardBaseEntity__GetQuestOpenDialogTransitionQuestId(
                                          (ClassBoardBaseEntity_o *)entity,
                                          0),
        v10 = entity,
        *questId = (int)Master_object,
        !v10) )
  {
LABEL_16:
    sub_2213CDC(Master_object, v9);
  }
  QuestOpenDialogCondSignNum = ClassBoardBaseEntity__GetQuestOpenDialogCondSignNum((ClassBoardBaseEntity_o *)v10, 0);
  result = 0;
  if ( *questId >= 1 && QuestOpenDialogCondSignNum >= 1 )
  {
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11);
    return CondType__CountClassBoardSquareReleased(baseId, 0) == QuestOpenDialogCondSignNum;
  }
  return result;
}


void ClassBoardUIController__OnClickBack(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_5974772 & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardUIController_OnClickBack__);
    byte_5974772 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickBack__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ClassBoardUIController_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  ActionExtensions__Call(this->fields.onClickBack, 0);
}


void ClassBoardUIController__OnClickClassBoardResetButton(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_5974771 & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardUIController_OnClickClassBoardResetButton__);
    byte_5974771 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickClassBoardResetButton__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickClassBoardResetButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ClassBoardUIController_OnClickClassBoardResetButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ActionExtensions__Call(this->fields.onClickClassBoardResetButton, 0);
}


void ClassBoardUIController__OnClickClassBoardSelectButton(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct System_Action_o *onClickClassBoardSelectButton; // x8

  if ( (byte_5974773 & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardUIController_OnClickClassBoardSelectButton__);
    byte_5974773 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickClassBoardSelectButton__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickClassBoardSelectButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ClassBoardUIController_OnClickClassBoardSelectButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  onClickClassBoardSelectButton = this->fields.onClickClassBoardSelectButton;
  if ( onClickClassBoardSelectButton )
    ((void (__fastcall *)(intptr_t, intptr_t))onClickClassBoardSelectButton->fields.invoke_impl)(
      onClickClassBoardSelectButton->fields.method_code,
      onClickClassBoardSelectButton->fields.method);
}


void ClassBoardUIController__OnClickClassScoreButton(ClassBoardUIController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x19
  struct UISprite_o *classScoreBtnSprite; // x8
  bool v4; // w8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  v2 = this;
  if ( (byte_5974770 & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardUIController_OnClickClassScoreButton__);
    this = (ClassBoardUIController_o *)sub_2213A60(&StringLiteral_18301/*"btn_to_class_scoreboard_blackout"*/);
    byte_5974770 = 1;
  }
  classScoreBtnSprite = v2->fields.classScoreBtnSprite;
  if ( !classScoreBtnSprite )
    sub_2213CDC(this, method);
  v4 = System_String__op_Equality(classScoreBtnSprite->fields.mSpriteName, (System_String_o *)StringLiteral_18301/*"btn_to_class_scoreboard_blackout"*/, 0);
  v5 = Method_ClassBoardUIController_OnClickClassScoreButton__;
  if ( v4 )
  {
    if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickClassScoreButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_ClassBoardUIController_OnClickClassScoreButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickClassScoreButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_ClassBoardUIController_OnClickClassScoreButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    ActionExtensions__Call(v2->fields.onClickClassScoreButton, 0);
  }
}


void ClassBoardUIController__OnClickEffectListButton(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_597476D & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardUIController_OnClickEffectListButton__);
    byte_597476D = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickEffectListButton__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickEffectListButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ClassBoardUIController_OnClickEffectListButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ActionExtensions__Call(this->fields.onClickEffectList, 0);
}


void ClassBoardUIController__OnClickGrandScoreButton(ClassBoardUIController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x19
  struct UISprite_o *grandScoreBtnSprite; // x8
  bool v4; // w8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  v2 = this;
  if ( (byte_597476F & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardUIController_OnClickGrandScoreButton__);
    this = (ClassBoardUIController_o *)sub_2213A60(&StringLiteral_18305/*"btn_to_grand_scoreboard_blackout"*/);
    byte_597476F = 1;
  }
  grandScoreBtnSprite = v2->fields.grandScoreBtnSprite;
  if ( !grandScoreBtnSprite )
    sub_2213CDC(this, method);
  v4 = System_String__op_Equality(grandScoreBtnSprite->fields.mSpriteName, (System_String_o *)StringLiteral_18305/*"btn_to_grand_scoreboard_blackout"*/, 0);
  v5 = Method_ClassBoardUIController_OnClickGrandScoreButton__;
  if ( v4 )
  {
    if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickGrandScoreButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_ClassBoardUIController_OnClickGrandScoreButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
  else
  {
    if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickGrandScoreButton__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_2213A78(Method_ClassBoardUIController_OnClickGrandScoreButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    ActionExtensions__Call(v2->fields.onClickGrandScoreButton, 0);
  }
}


void ClassBoardUIController__OnClickHelp(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_597476E & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardUIController_OnClickHelp__);
    byte_597476E = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickHelp__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ClassBoardUIController_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ActionExtensions__Call(this->fields.onClickHelp, 0);
}


void ClassBoardUIController__OnClickToGrandServantList(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_5974774 & 1) == 0 )
  {
    sub_2213A60(&Method_ClassBoardUIController_OnClickToGrandServantList__);
    byte_5974774 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickToGrandServantList__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickToGrandServantList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_2213A78(Method_ClassBoardUIController_OnClickToGrandServantList__);
  v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ActionExtensions__Call(this->fields.onClickToGrandServantList, 0);
}


void ClassBoardUIController__OpenEffectList(ClassBoardUIController_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onClickEffectList, 0);
}


void ClassBoardUIController__OpenMissionClearDialog(
        ClassBoardUIController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x21
  System_String_o *v6; // x20
  System_String_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_5974776 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_3550/*"CLASS_BOARD_MISSION_CLEAR_MESSAGE"*/);
    byte_5974776 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = **(System_String_o ***)(qword_5984390 + 184);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3550/*"CLASS_BOARD_MISSION_CLEAR_MESSAGE"*/, 0);
  if ( !Instance )
    sub_2213CDC(v7, v8);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, v6, v7, callback, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
}


void ClassBoardUIController__SetCameraWorkBlock(ClassBoardUIController_o *this, bool value, const MethodInfo *method)
{
  struct ClassBoardPageSwitcher_StaticFields *static_fields; // x8
  int v5; // w9
  __int64 v6; // x1
  UnityEngine_Object_o *MapCamera; // x19
  _BOOL8 v8; // x0
  MapCamera_o *v9; // x0
  __int64 v10; // x1
  MapCamera_o *v11; // x19

  if ( (byte_5974775 & 1) == 0 )
  {
    this = (ClassBoardUIController_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974775 = 1;
  }
  if ( (byte_59746F3 & 1) == 0 )
  {
    this = (ClassBoardUIController_o *)sub_2213A60(&ClassBoardPageSwitcher_TypeInfo);
    byte_59746F3 = 1;
  }
  static_fields = ClassBoardPageSwitcher_TypeInfo->static_fields;
  if ( value )
    v5 = static_fields->cameraWorkBlockNum + 1;
  else
    v5 = static_fields->cameraWorkBlockNum - 1;
  static_fields->cameraWorkBlockNum = v5 & ~(v5 >> 31);
  MapCamera = (UnityEngine_Object_o *)ClassBoardGlobalObject__get_MapCamera((const MethodInfo *)this);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__op_Inequality(MapCamera, 0, 0);
  if ( v8 )
  {
    v9 = ClassBoardGlobalObject__get_MapCamera((const MethodInfo *)v8);
    v11 = v9;
    if ( !byte_5974778 )
    {
      v9 = (MapCamera_o *)sub_2213A60(&ClassBoardPageSwitcher_TypeInfo);
      byte_5974778 = 1;
    }
    if ( !v11 )
      sub_2213CDC(v9, v10);
    v11->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardUIController__SetClassScoreButton(
        ClassBoardUIController_o *this,
        int32_t classBaseId,
        AtlasManagerUnit_o *atlasManagerUnit,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  UISprite_o *classScoreBtnSprite; // x22
  ClassBoardBaseEntity_o *v11; // x21
  __int64 *v12; // x8
  UISprite_o *backBtnToClassScoreSprite; // x20
  __int64 *v14; // x8

  if ( (byte_597476C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_2213A60(&StringLiteral_18300/*"btn_to_class_scoreboard"*/);
    sub_2213A60(&StringLiteral_18301/*"btn_to_class_scoreboard_blackout"*/);
    byte_597476C = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&classBaseId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_16;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             classBaseId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  if ( !Entity )
    return;
  classScoreBtnSprite = this->fields.classScoreBtnSprite;
  v11 = (ClassBoardBaseEntity_o *)Entity;
  Master_object = (Il2CppObject *)ClassBoardBaseEntity__IsOpen((ClassBoardBaseEntity_o *)Entity, 0);
  if ( !atlasManagerUnit )
LABEL_16:
    sub_2213CDC(Master_object, v8);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
    v12 = &StringLiteral_18300/*"btn_to_class_scoreboard"*/;
  else
    v12 = &StringLiteral_18301/*"btn_to_class_scoreboard_blackout"*/;
  AtlasManagerUnit__SetUI(atlasManagerUnit, classScoreBtnSprite, (System_String_o *)*v12, 0);
  backBtnToClassScoreSprite = this->fields.backBtnToClassScoreSprite;
  if ( ClassBoardBaseEntity__IsOpen(v11, 0) )
    v14 = &StringLiteral_18300/*"btn_to_class_scoreboard"*/;
  else
    v14 = &StringLiteral_18301/*"btn_to_class_scoreboard_blackout"*/;
  AtlasManagerUnit__SetUI(atlasManagerUnit, backBtnToClassScoreSprite, (System_String_o *)*v14, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardUIController__SetGrandScoreButton(
        ClassBoardUIController_o *this,
        int32_t grandBaseId,
        AtlasManagerUnit_o *atlasManagerUnit,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  UISprite_o *grandScoreBtnSprite; // x22
  ClassBoardBaseEntity_o *v11; // x21
  __int64 *v12; // x8
  UISprite_o *backBtnToGrandScoreSprite; // x20
  System_String_o **v14; // x8

  if ( (byte_597476B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_2213A60(&StringLiteral_18303/*"btn_to_grand_scoreboard"*/);
    sub_2213A60(&StringLiteral_18305/*"btn_to_grand_scoreboard_blackout"*/);
    sub_2213A60(&StringLiteral_18306/*"btn_to_grand_scoreboard_blackout_2"*/);
    sub_2213A60(&StringLiteral_18304/*"btn_to_grand_scoreboard_2"*/);
    byte_597476B = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&grandBaseId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             grandBaseId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  if ( !Entity )
    return;
  grandScoreBtnSprite = this->fields.grandScoreBtnSprite;
  v11 = (ClassBoardBaseEntity_o *)Entity;
  Master_object = (Il2CppObject *)ClassBoardBaseEntity__IsOpen((ClassBoardBaseEntity_o *)Entity, 0);
  if ( !atlasManagerUnit )
LABEL_15:
    sub_2213CDC(Master_object, v8);
  v12 = &StringLiteral_18303/*"btn_to_grand_scoreboard"*/;
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    v12 = &StringLiteral_18305/*"btn_to_grand_scoreboard_blackout"*/;
  AtlasManagerUnit__SetUI(atlasManagerUnit, grandScoreBtnSprite, (System_String_o *)*v12, 0);
  backBtnToGrandScoreSprite = this->fields.backBtnToGrandScoreSprite;
  if ( ClassBoardBaseEntity__IsOpen(v11, 0) )
    v14 = (System_String_o **)&StringLiteral_18304/*"btn_to_grand_scoreboard_2"*/;
  else
    v14 = (System_String_o **)&StringLiteral_18306/*"btn_to_grand_scoreboard_blackout_2"*/;
  AtlasManagerUnit__SetUI(atlasManagerUnit, backBtnToGrandScoreSprite, *v14, 0);
}


void ClassBoardUIController__SetHeaderMessage(
        ClassBoardUIController_o *this,
        AtlasManagerUnit_o *atlasManagerUnit,
        System_String_o *message,
        bool isGrand,
        bool isSettedGrandSvt,
        const MethodInfo *method)
{
  UnityEngine_Component_o *headerMessageBgSprite; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *underMessageLabel; // x24
  bool v14; // w8
  UnityEngine_Component_o *v15; // x0
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Component_o *parent; // x0
  UnityEngine_Component_o *transform; // x0

  if ( (byte_5974769 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21351/*"img_commonbg_11"*/);
    byte_5974769 = 1;
  }
  headerMessageBgSprite = (UnityEngine_Component_o *)this->fields.headerMessageBgSprite;
  if ( !headerMessageBgSprite )
    goto LABEL_22;
  headerMessageBgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(headerMessageBgSprite, 0);
  if ( !headerMessageBgSprite )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)headerMessageBgSprite, !isGrand, 0);
  underMessageLabel = (UnityEngine_Object_o *)this->fields.underMessageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  v14 = UnityEngine_Object__op_Inequality(underMessageLabel, 0, 0);
  headerMessageBgSprite = (UnityEngine_Component_o *)this->fields.headerMessageLabel;
  if ( !v14 || !isSettedGrandSvt || !isGrand )
  {
    if ( headerMessageBgSprite )
    {
      headerMessageBgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(headerMessageBgSprite, 0);
      if ( headerMessageBgSprite )
      {
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                              (UnityEngine_Transform_o *)headerMessageBgSprite,
                                              0);
        BasicHelper__SetActiveSafely(parent, 1, 0);
        headerMessageBgSprite = (UnityEngine_Component_o *)this->fields.underMessageLabel;
        if ( headerMessageBgSprite )
        {
          transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(headerMessageBgSprite, 0);
          BasicHelper__SetActiveSafely(transform, 0, 0);
        }
        if ( atlasManagerUnit )
        {
          AtlasManagerUnit__SetUI(
            atlasManagerUnit,
            this->fields.headerMessageBgSprite,
            (System_String_o *)StringLiteral_21351/*"img_commonbg_11"*/,
            0);
          headerMessageBgSprite = (UnityEngine_Component_o *)this->fields.headerMessageLabel;
          if ( headerMessageBgSprite )
            goto LABEL_21;
        }
      }
    }
LABEL_22:
    sub_2213CDC(headerMessageBgSprite, atlasManagerUnit);
  }
  if ( !headerMessageBgSprite )
    goto LABEL_22;
  headerMessageBgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(headerMessageBgSprite, 0);
  if ( !headerMessageBgSprite )
    goto LABEL_22;
  v15 = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                     (UnityEngine_Transform_o *)headerMessageBgSprite,
                                     0);
  BasicHelper__SetActiveSafely(v15, 0, 0);
  headerMessageBgSprite = (UnityEngine_Component_o *)this->fields.underMessageLabel;
  if ( !headerMessageBgSprite )
    goto LABEL_22;
  v16 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(headerMessageBgSprite, 0);
  BasicHelper__SetActiveSafely(v16, 1, 0);
  headerMessageBgSprite = (UnityEngine_Component_o *)this->fields.underMessageLabel;
  if ( !headerMessageBgSprite )
    goto LABEL_22;
LABEL_21:
  UILabel__set_text((UILabel_o *)headerMessageBgSprite, message, 0);
}


void ClassBoardUIController__SetHeaderTitle(
        ClassBoardUIController_o *this,
        AtlasManagerUnit_o *atlasManagerUnit,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v4; // x19

  if ( !atlasManagerUnit
    || (v4 = this,
        AtlasManagerUnit__SetUI(atlasManagerUnit, this->fields.headerTitleSprite, spriteName, 0),
        (this = (ClassBoardUIController_o *)v4->fields.headerTitleSprite) == 0) )
  {
    sub_2213CDC(this, atlasManagerUnit);
  }
  ((void (__fastcall *)(ClassBoardUIController_o *, void *))this->klass[2]._1.parent)(
    this,
    this->klass[2]._1.generic_class);
}


void ClassBoardUIController__SetItemList(
        ClassBoardUIController_o *this,
        System_Int32_array *dispItemIds,
        AtlasManagerUnit_o *atlasManagerUnit,
        bool isGrand,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v8; // x20
  struct EventItemComponent_array *headerItemComponentList; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v11; // x24
  EventItemComponent_o **m_Items; // x26
  unsigned __int64 max_length_low; // x9
  EventItemComponent_o *v14; // x8
  bool v15; // w1
  UnityEngine_Object_o *headerItemGrid; // x21
  UnityEngine_Object_o *headerItemParent; // x21
  UnityEngine_Object_o *headerGrandItemParent; // x21

  v8 = this;
  if ( (byte_597476A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (ClassBoardUIController_o *)sub_2213A60(&StringLiteral_21403/*"img_item_bg"*/);
    byte_597476A = 1;
  }
  if ( !isGrand || (headerItemComponentList = v8->fields.headerGrandItemComponentList) == 0 )
  {
    headerItemComponentList = v8->fields.headerItemComponentList;
    if ( !headerItemComponentList )
      goto LABEL_43;
  }
  max_length = headerItemComponentList->max_length;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    m_Items = headerItemComponentList->m_Items;
    while ( dispItemIds )
    {
      max_length_low = LODWORD(dispItemIds->max_length);
      if ( (__int64)v11 >= (int)max_length_low )
      {
        if ( v11 >= (unsigned int)max_length )
          goto LABEL_44;
        this = (ClassBoardUIController_o *)m_Items[v11];
        if ( !this )
          break;
        this = (ClassBoardUIController_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          break;
        v15 = 0;
      }
      else
      {
        if ( v11 >= max_length_low || v11 >= (unsigned int)max_length )
          goto LABEL_44;
        this = (ClassBoardUIController_o *)m_Items[v11];
        if ( !this )
          break;
        EventItemComponent__Set((EventItemComponent_o *)this, dispItemIds->m_Items[v11], 0);
        if ( v11 >= LODWORD(headerItemComponentList->max_length) )
LABEL_44:
          sub_2213CE4(this);
        v14 = m_Items[v11];
        if ( !v14 || !atlasManagerUnit )
          break;
        this = (ClassBoardUIController_o *)AtlasManagerUnit__SetUI(
                                             atlasManagerUnit,
                                             v14->fields.baseSp,
                                             (System_String_o *)StringLiteral_21403/*"img_item_bg"*/,
                                             0);
        if ( v11 >= LODWORD(headerItemComponentList->max_length) )
          goto LABEL_44;
        this = (ClassBoardUIController_o *)m_Items[v11];
        if ( !this )
          break;
        this = (ClassBoardUIController_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          break;
        v15 = 1;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v15, 0);
      LODWORD(max_length) = headerItemComponentList->max_length;
      if ( (__int64)++v11 >= (int)max_length )
        goto LABEL_25;
    }
LABEL_43:
    sub_2213CDC(this, dispItemIds);
  }
LABEL_25:
  headerItemGrid = (UnityEngine_Object_o *)v8->fields.headerItemGrid;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, dispItemIds);
  if ( UnityEngine_Object__op_Inequality(headerItemGrid, 0, 0) )
  {
    this = (ClassBoardUIController_o *)v8->fields.headerItemGrid;
    if ( !this )
      goto LABEL_43;
    UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0);
  }
  headerItemParent = (UnityEngine_Object_o *)v8->fields.headerItemParent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, dispItemIds);
  if ( UnityEngine_Object__op_Inequality(headerItemParent, 0, 0) )
  {
    this = (ClassBoardUIController_o *)v8->fields.headerItemParent;
    if ( !this )
      goto LABEL_43;
    this = (ClassBoardUIController_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !isGrand, 0);
  }
  headerGrandItemParent = (UnityEngine_Object_o *)v8->fields.headerGrandItemParent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, dispItemIds);
  if ( UnityEngine_Object__op_Inequality(headerGrandItemParent, 0, 0) )
  {
    this = (ClassBoardUIController_o *)v8->fields.headerGrandItemParent;
    if ( !this )
      goto LABEL_43;
    this = (ClassBoardUIController_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0);
    if ( !this )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isGrand, 0);
  }
}


void ClassBoardUIController__SetOnClickBack(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onClickBack = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickBack,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardUIController__SetOnClickClassBoardResetButton(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onClickClassBoardResetButton = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickClassBoardResetButton,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardUIController__SetOnClickClassBoardSelectButton(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onClickClassBoardSelectButton = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickClassBoardSelectButton,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardUIController__SetOnClickClassScoreButton(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onClickClassScoreButton = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickClassScoreButton,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardUIController__SetOnClickEffectList(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onClickEffectList = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickEffectList,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardUIController__SetOnClickGrandScoreButton(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onClickGrandScoreButton = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickGrandScoreButton,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardUIController__SetOnClickHelp(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onClickHelp = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickHelp,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardUIController__SetOnClickToGrandServantList(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.onClickToGrandServantList = action;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickToGrandServantList,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardUIController__TouchDisable(ClassBoardUIController_o *this, const MethodInfo *method)
{
  unsigned int touchBlockCount; // w9
  UnityEngine_GameObject_o *touchBlock; // x0

  touchBlockCount = this->fields.touchBlockCount;
  this->fields.touchBlockCount = touchBlockCount + 1;
  if ( touchBlockCount <= 0x7FFFFFFE )
  {
    touchBlock = this->fields.touchBlock;
    if ( !touchBlock )
      sub_2213CDC(0, method);
    UnityEngine_GameObject__SetActive(touchBlock, 1, 0);
  }
}


void ClassBoardUIController__TouchEnable(ClassBoardUIController_o *this, const MethodInfo *method)
{
  int32_t v2; // w8
  bool v3; // zf
  UnityEngine_GameObject_o *touchBlock; // x0

  v2 = this->fields.touchBlockCount - 1;
  v3 = this->fields.touchBlockCount == 1;
  this->fields.touchBlockCount = v2;
  if ( v2 < 0 || v3 )
  {
    touchBlock = this->fields.touchBlock;
    if ( !touchBlock )
      sub_2213CDC(0, method);
    UnityEngine_GameObject__SetActive(touchBlock, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardUIController__UpdateItemList(ClassBoardUIController_o *this, bool isGrand, const MethodInfo *method)
{
  struct EventItemComponent_array *headerItemComponentList; // x19
  int max_length; // w8
  unsigned int v5; // w20
  Il2CppClass **v6; // x21
  ClassBoardUIController_o **v7; // x21
  ClassBoardUIController_o *v8; // t1

  if ( !isGrand || (headerItemComponentList = this->fields.headerGrandItemComponentList) == 0 )
  {
    headerItemComponentList = this->fields.headerItemComponentList;
    if ( !headerItemComponentList )
      goto LABEL_15;
  }
  max_length = headerItemComponentList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
LABEL_16:
        sub_2213CE4(this);
      v6 = &headerItemComponentList->obj.klass + (int)v5;
      v8 = (ClassBoardUIController_o *)v6[4];
      v7 = (ClassBoardUIController_o **)(v6 + 4);
      this = v8;
      if ( !v8 )
        break;
      this = (ClassBoardUIController_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        break;
      this = (ClassBoardUIController_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v5 >= LODWORD(headerItemComponentList->max_length) )
          goto LABEL_16;
        this = *v7;
        if ( !*v7 )
          break;
        EventItemComponent__UpdateDisp((EventItemComponent_o *)this, 0);
      }
      max_length = headerItemComponentList->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_15:
    sub_2213CDC(this, isGrand);
  }
}


bool ClassBoardUIController__get_IsTouchEnable(ClassBoardUIController_o *this, const MethodInfo *method)
{
  return this->fields.touchBlockCount < 1;
}