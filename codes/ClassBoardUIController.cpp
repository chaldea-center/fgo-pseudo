void ClassBoardUIController___ctor(ClassBoardUIController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
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
    sub_1C2D6EC(effectListBtnSprite, value);
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
      sub_1C2D6EC(0, v6);
    UnityEngine_GameObject__SetActive(gameObject, value, 0);
  }
}


void ClassBoardUIController__ActivateShop18Button(
        ClassBoardUIController_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shop18BtnSprite; // x21
  UnityEngine_Object_o *grandScoreBtnSprite; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Component_o *v9; // x20
  bool activeSelf; // w0
  __int64 v11; // x8

  if ( (byte_4C2AD9D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AD9D = 1;
  }
  shop18BtnSprite = (UnityEngine_Object_o *)this->fields.shop18BtnSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shop18BtnSprite, 0, 0) )
  {
    grandScoreBtnSprite = (UnityEngine_Object_o *)this->fields.grandScoreBtnSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(grandScoreBtnSprite, 0, 0) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.shop18BtnSprite;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isDisp, 0),
            (gameObject = (UnityEngine_Component_o *)this->fields.grandScoreBtnSprite) == 0)
        || (v9 = (UnityEngine_Component_o *)this->fields.shop18BtnSprite,
            (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0) )
      {
        sub_1C2D6EC(gameObject, v7);
      }
      activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0);
      v11 = 192;
      if ( activeSelf )
        v11 = 196;
      ComponentHelper__SetLocalPositionY(v9, *(float *)((char *)&this->klass + v11), 0);
    }
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
      sub_1C2D6EC(0, v6);
    UnityEngine_GameObject__SetActive(gameObject, value, 0);
  }
}


void ClassBoardUIController__Awake(ClassBoardUIController_o *this, const MethodInfo *method)
{
  ;
}


void ClassBoardUIController__Init(ClassBoardUIController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x19
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *toGrandServantListBtnSprite; // x20
  _BOOL8 v6; // x0
  UnityEngine_Object_o *grandScoreBtnSprite; // x20
  _BOOL8 v8; // x0
  UnityEngine_Object_o *shop18BtnSprite; // x20
  _BOOL8 v10; // x0

  v2 = this;
  if ( (byte_4C2AD9C & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_17527/*"btn_to_grand_scoreboard"*/);
    sub_1C2D490(&StringLiteral_17487/*"btn_list"*/);
    sub_1C2D490(&StringLiteral_17504/*"btn_regression_hourglass"*/);
    this = (ClassBoardUIController_o *)sub_1C2D490(&StringLiteral_17526/*"btn_to_crown_formation"*/);
    byte_4C2AD9C = 1;
  }
  v2->fields.touchBlockCount = 0;
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit((const MethodInfo *)this);
  if ( !UiAtlasManagerUnit )
    goto LABEL_20;
  AtlasManagerUnit__SetUI(UiAtlasManagerUnit, v2->fields.effectListBtnSprite, (System_String_o *)StringLiteral_17487/*"btn_list"*/, 0);
  toGrandServantListBtnSprite = (UnityEngine_Object_o *)v2->fields.toGrandServantListBtnSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(toGrandServantListBtnSprite, 0, 0);
  if ( v6 )
  {
    UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit((const MethodInfo *)v6);
    if ( !UiAtlasManagerUnit )
      goto LABEL_20;
    AtlasManagerUnit__SetUI(
      UiAtlasManagerUnit,
      v2->fields.toGrandServantListBtnSprite,
      (System_String_o *)StringLiteral_17526/*"btn_to_crown_formation"*/,
      0);
  }
  grandScoreBtnSprite = (UnityEngine_Object_o *)v2->fields.grandScoreBtnSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(grandScoreBtnSprite, 0, 0);
  if ( v8 )
  {
    UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit((const MethodInfo *)v8);
    if ( !UiAtlasManagerUnit )
      goto LABEL_20;
    AtlasManagerUnit__SetUI(
      UiAtlasManagerUnit,
      v2->fields.grandScoreBtnSprite,
      (System_String_o *)StringLiteral_17527/*"btn_to_grand_scoreboard"*/,
      0);
  }
  shop18BtnSprite = (UnityEngine_Object_o *)v2->fields.shop18BtnSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality(shop18BtnSprite, 0, 0);
  if ( v10 )
  {
    UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit((const MethodInfo *)v10);
    if ( UiAtlasManagerUnit )
    {
      AtlasManagerUnit__SetUI(UiAtlasManagerUnit, v2->fields.shop18BtnSprite, (System_String_o *)StringLiteral_17504/*"btn_regression_hourglass"*/, 0);
      goto LABEL_19;
    }
LABEL_20:
    sub_1C2D6EC(UiAtlasManagerUnit, v4);
  }
LABEL_19:
  AndroidBackKeyManager__AddBackBtn(v2->fields.backBtn, 0);
}


bool ClassBoardUIController__IsOpenQuestOpenDialog(
        ClassBoardUIController_o *this,
        int32_t baseId,
        int32_t *questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  int32_t QuestOpenDialogCondSignNum; // w21
  bool result; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2ADA9 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
    byte_4C2ADA9 = 1;
  }
  entity = 0;
  *questId = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          baseId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity
    || (*questId = ClassBoardBaseEntity__GetQuestOpenDialogTransitionQuestId((ClassBoardBaseEntity_o *)entity, 0),
        (Master_object = entity) == 0) )
  {
LABEL_16:
    sub_1C2D6EC(Master_object, v7);
  }
  QuestOpenDialogCondSignNum = ClassBoardBaseEntity__GetQuestOpenDialogCondSignNum((ClassBoardBaseEntity_o *)entity, 0);
  result = 0;
  if ( QuestOpenDialogCondSignNum >= 1 && *questId >= 1 )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__CountClassBoardSquareReleased(baseId, 0) == QuestOpenDialogCondSignNum;
  }
  return result;
}


void ClassBoardUIController__OnClickBack(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C2ADA5 & 1) == 0 )
  {
    sub_1C2D490(&Method_ClassBoardUIController_OnClickBack__);
    byte_4C2ADA5 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickBack__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_ClassBoardUIController_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  ActionExtensions__Call(this->fields.onClickBack, 0);
}


void ClassBoardUIController__OnClickEffectListButton(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C2ADA1 & 1) == 0 )
  {
    sub_1C2D490(&Method_ClassBoardUIController_OnClickEffectListButton__);
    byte_4C2ADA1 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickEffectListButton__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickEffectListButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_ClassBoardUIController_OnClickEffectListButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ActionExtensions__Call(this->fields.onClickEffectList, 0);
}


void ClassBoardUIController__OnClickGrandScoreButton(ClassBoardUIController_o *this, const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x19
  struct UISprite_o *grandScoreBtnSprite; // x8
  bool v4; // w0
  _QWORD *v5; // x8
  bool v6; // w20
  System_Reflection_MethodBase_o *v7; // x0

  v2 = this;
  if ( (byte_4C2ADA3 & 1) == 0 )
  {
    sub_1C2D490(&Method_ClassBoardUIController_OnClickGrandScoreButton__);
    this = (ClassBoardUIController_o *)sub_1C2D490(&StringLiteral_17528/*"btn_to_grand_scoreboard_blackout"*/);
    byte_4C2ADA3 = 1;
  }
  grandScoreBtnSprite = v2->fields.grandScoreBtnSprite;
  if ( !grandScoreBtnSprite )
    sub_1C2D6EC(this, method);
  v4 = System_String__op_Equality(grandScoreBtnSprite->fields.mSpriteName, (System_String_o *)StringLiteral_17528/*"btn_to_grand_scoreboard_blackout"*/, 0);
  v5 = Method_ClassBoardUIController_OnClickGrandScoreButton__;
  v6 = v4;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickGrandScoreButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C2D4A8(Method_ClassBoardUIController_OnClickGrandScoreButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
  if ( v6 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    ActionExtensions__Call(v2->fields.onClickGrandScoreButton, 0);
  }
}


void ClassBoardUIController__OnClickHelp(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C2ADA2 & 1) == 0 )
  {
    sub_1C2D490(&Method_ClassBoardUIController_OnClickHelp__);
    byte_4C2ADA2 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickHelp__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_ClassBoardUIController_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ActionExtensions__Call(this->fields.onClickHelp, 0);
}


void ClassBoardUIController__OnClickShop18Button(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C2ADA4 & 1) == 0 )
  {
    sub_1C2D490(&Method_ClassBoardUIController_OnClickShop18Button__);
    byte_4C2ADA4 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickShop18Button__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickShop18Button__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_ClassBoardUIController_OnClickShop18Button__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  ActionExtensions__Call(this->fields.onClickShop18Button, 0);
}


void ClassBoardUIController__OnClickToGrandServantList(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4C2ADA6 & 1) == 0 )
  {
    sub_1C2D490(&Method_ClassBoardUIController_OnClickToGrandServantList__);
    byte_4C2ADA6 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickToGrandServantList__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickToGrandServantList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_ClassBoardUIController_OnClickToGrandServantList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  Il2CppObject *Instance; // x21
  System_String_o *Empty; // x20
  System_String_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_4C2ADA8 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_3408/*"CLASS_BOARD_MISSION_CLEAR_MESSAGE"*/);
    byte_4C2ADA8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3408/*"CLASS_BOARD_MISSION_CLEAR_MESSAGE"*/, 0);
  if ( !Instance )
    sub_1C2D6EC(v6, v7);
  CommonUI__OpenNotificationDialog((CommonUI_o *)Instance, Empty, v6, callback, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0.0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardUIController__SetCameraWorkBlock(ClassBoardUIController_o *this, bool value, const MethodInfo *method)
{
  const MethodInfo *v4; // x0
  UnityEngine_Object_o *MapCamera; // x19
  _BOOL8 v6; // x0
  MapCamera_o *v7; // x0
  __int64 v8; // x1
  MapCamera_o *v9; // x19

  if ( (byte_4C2ADA7 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2ADA7 = 1;
  }
  ClassBoardPageSwitcher__SetCameraWorkBlockNum(value, (const MethodInfo *)value);
  MapCamera = (UnityEngine_Object_o *)ClassBoardGlobalObject__get_MapCamera(v4);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(MapCamera, 0, 0);
  if ( v6 )
  {
    v7 = ClassBoardGlobalObject__get_MapCamera((const MethodInfo *)v6);
    v9 = v7;
    if ( !byte_4C2ADF4 )
    {
      v7 = (MapCamera_o *)sub_1C2D490(&ClassBoardPageSwitcher_TypeInfo);
      byte_4C2ADF4 = 1;
    }
    if ( !v9 )
      sub_1C2D6EC(v7, v8);
    v9->fields._IsTouchEnable_k__BackingField = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


void ClassBoardUIController__SetGrandScoreButton(
        ClassBoardUIController_o *this,
        int32_t grandBaseId,
        AtlasManagerUnit_o *atlasManagerUnit,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  UISprite_o *grandScoreBtnSprite; // x20
  __int64 *v11; // x8

  if ( (byte_4C2ADA0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_1C2D490(&StringLiteral_17527/*"btn_to_grand_scoreboard"*/);
    sub_1C2D490(&StringLiteral_17528/*"btn_to_grand_scoreboard_blackout"*/);
    byte_4C2ADA0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             grandBaseId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  if ( !Entity )
    return;
  grandScoreBtnSprite = this->fields.grandScoreBtnSprite;
  Master_object = (Il2CppObject *)ClassBoardBaseEntity__IsOpen((ClassBoardBaseEntity_o *)Entity, 0);
  if ( !atlasManagerUnit )
LABEL_12:
    sub_1C2D6EC(Master_object, v8);
  v11 = &StringLiteral_17527/*"btn_to_grand_scoreboard"*/;
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    v11 = &StringLiteral_17528/*"btn_to_grand_scoreboard_blackout"*/;
  AtlasManagerUnit__SetUI(atlasManagerUnit, grandScoreBtnSprite, (System_String_o *)*v11, 0);
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
  UnityEngine_Object_o *underMessageLabel; // x24
  unsigned __int8 v13; // w24
  UnityEngine_Component_o *parent; // x0
  UnityEngine_Component_o *v15; // x0
  UnityEngine_Component_o *transform; // x0

  if ( (byte_4C2AD9E & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_20353/*"img_commonbg_11"*/);
    byte_4C2AD9E = 1;
  }
  headerMessageBgSprite = (UnityEngine_Component_o *)this->fields.headerMessageBgSprite;
  if ( !headerMessageBgSprite )
    goto LABEL_18;
  headerMessageBgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(headerMessageBgSprite, 0);
  if ( !headerMessageBgSprite )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)headerMessageBgSprite, !isGrand, 0);
  underMessageLabel = (UnityEngine_Object_o *)this->fields.underMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  headerMessageBgSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(underMessageLabel, 0, 0);
  if ( !this->fields.headerMessageLabel )
    goto LABEL_18;
  v13 = (unsigned __int8)headerMessageBgSprite;
  headerMessageBgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this->fields.headerMessageLabel,
                                                       0);
  if ( !headerMessageBgSprite )
    goto LABEL_18;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                        (UnityEngine_Transform_o *)headerMessageBgSprite,
                                        0);
  if ( (v13 & isGrand & isSettedGrandSvt & 1) == 0 )
  {
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
        (System_String_o *)StringLiteral_20353/*"img_commonbg_11"*/,
        0);
      headerMessageBgSprite = (UnityEngine_Component_o *)this->fields.headerMessageLabel;
      if ( headerMessageBgSprite )
        goto LABEL_17;
    }
LABEL_18:
    sub_1C2D6EC(headerMessageBgSprite, atlasManagerUnit);
  }
  BasicHelper__SetActiveSafely(parent, 0, 0);
  headerMessageBgSprite = (UnityEngine_Component_o *)this->fields.underMessageLabel;
  if ( !headerMessageBgSprite )
    goto LABEL_18;
  v15 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(headerMessageBgSprite, 0);
  BasicHelper__SetActiveSafely(v15, 1, 0);
  headerMessageBgSprite = (UnityEngine_Component_o *)this->fields.underMessageLabel;
  if ( !headerMessageBgSprite )
    goto LABEL_18;
LABEL_17:
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
    sub_1C2D6EC(this, atlasManagerUnit);
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
  if ( (byte_4C2AD9F & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (ClassBoardUIController_o *)sub_1C2D490(&StringLiteral_20406/*"img_item_bg"*/);
    byte_4C2AD9F = 1;
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
          sub_1C2D6F4(this, dispItemIds, atlasManagerUnit);
        v14 = m_Items[v11];
        if ( !v14 || !atlasManagerUnit )
          break;
        this = (ClassBoardUIController_o *)AtlasManagerUnit__SetUI(
                                             atlasManagerUnit,
                                             v14->fields.baseSp,
                                             (System_String_o *)StringLiteral_20406/*"img_item_bg"*/,
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
    sub_1C2D6EC(this, dispItemIds);
  }
LABEL_25:
  headerItemGrid = (UnityEngine_Object_o *)v8->fields.headerItemGrid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(headerItemGrid, 0, 0) )
  {
    this = (ClassBoardUIController_o *)v8->fields.headerItemGrid;
    if ( !this )
      goto LABEL_43;
    UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0);
  }
  headerItemParent = (UnityEngine_Object_o *)v8->fields.headerItemParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  const MethodInfo *v3; // x3

  this->fields.onClickBack = action;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onClickBack, (int32_t)action, (int32_t)method, v3);
}


void ClassBoardUIController__SetOnClickEffectList(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onClickEffectList = action;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onClickEffectList, (int32_t)action, (int32_t)method, v3);
}


void ClassBoardUIController__SetOnClickGrandScoreButton(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onClickGrandScoreButton = action;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onClickGrandScoreButton, (int32_t)action, (int32_t)method, v3);
}


void ClassBoardUIController__SetOnClickHelp(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onClickHelp = action;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onClickHelp, (int32_t)action, (int32_t)method, v3);
}


void ClassBoardUIController__SetOnClickShop18Button(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onClickShop18Button = action;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onClickShop18Button, (int32_t)action, (int32_t)method, v3);
}


void ClassBoardUIController__SetOnClickToGrandServantList(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onClickToGrandServantList = action;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onClickToGrandServantList, (int32_t)action, (int32_t)method, v3);
}


void ClassBoardUIController__TouchDisable(ClassBoardUIController_o *this, const MethodInfo *method)
{
  int32_t v2; // w8
  bool v3; // nf
  UnityEngine_GameObject_o *touchBlock; // x0

  v2 = this->fields.touchBlockCount + 1;
  v3 = this->fields.touchBlockCount < 0;
  this->fields.touchBlockCount = v2;
  if ( v3 == __OFSUB__(v2, 1) )
  {
    touchBlock = this->fields.touchBlock;
    if ( !touchBlock )
      sub_1C2D6EC(0, method);
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
      sub_1C2D6EC(0, method);
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
        sub_1C2D6F4(this, isGrand, method);
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
    sub_1C2D6EC(this, isGrand);
  }
}


bool ClassBoardUIController__get_IsTouchEnable(ClassBoardUIController_o *this, const MethodInfo *method)
{
  return this->fields.touchBlockCount < 1;
}