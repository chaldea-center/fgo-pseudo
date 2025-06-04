void __fastcall ClassBoardUIController___ctor(ClassBoardUIController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardUIController__ActivateEffectListButton(
        ClassBoardUIController_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Component_o *effectListBtnSprite; // x0

  effectListBtnSprite = (UnityEngine_Component_o *)this->fields.effectListBtnSprite;
  if ( !effectListBtnSprite
    || (effectListBtnSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(effectListBtnSprite, 0LL)) == 0LL )
  {
    sub_1BC3264(effectListBtnSprite, value);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)effectListBtnSprite, value, 0LL);
}


void __fastcall ClassBoardUIController__ActivateGrandScoreButton(
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
    gameObject = UnityEngine_Component__get_gameObject(grandScoreBtnSprite, 0LL);
    if ( !gameObject )
      sub_1BC3264(0LL, v6);
    UnityEngine_GameObject__SetActive(gameObject, value, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardUIController__ActivateShop18Button(
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

  if ( (byte_4B05951 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, isDisp);
    byte_4B05951 = 1;
  }
  shop18BtnSprite = (UnityEngine_Object_o *)this->fields.shop18BtnSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shop18BtnSprite, 0LL, 0LL) )
  {
    grandScoreBtnSprite = (UnityEngine_Object_o *)this->fields.grandScoreBtnSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(grandScoreBtnSprite, 0LL, 0LL) )
    {
      gameObject = (UnityEngine_Component_o *)this->fields.shop18BtnSprite;
      if ( !gameObject
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, isDisp, 0LL),
            (gameObject = (UnityEngine_Component_o *)this->fields.grandScoreBtnSprite) == 0LL)
        || (v9 = (UnityEngine_Component_o *)this->fields.shop18BtnSprite,
            (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL) )
      {
        sub_1BC3264(gameObject, v7);
      }
      activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0LL);
      v11 = 192LL;
      if ( activeSelf )
        v11 = 196LL;
      ComponentHelper__SetLocalPositionY(v9, *(float *)((char *)&this->klass + v11), 0LL);
    }
  }
}


void __fastcall ClassBoardUIController__ActivateToGrandServantListButton(
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
    gameObject = UnityEngine_Component__get_gameObject(toGrandServantListBtnSprite, 0LL);
    if ( !gameObject )
      sub_1BC3264(0LL, v6);
    UnityEngine_GameObject__SetActive(gameObject, value, 0LL);
  }
}


void __fastcall ClassBoardUIController__Awake(ClassBoardUIController_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall ClassBoardUIController__Init(ClassBoardUIController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AtlasManagerUnit_o *UiAtlasManagerUnit; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *toGrandServantListBtnSprite; // x20
  UnityEngine_Object_o *grandScoreBtnSprite; // x20
  UnityEngine_Object_o *shop18BtnSprite; // x20

  if ( (byte_4B05950 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_17377/*"btn_to_grand_scoreboard"*/, v3);
    sub_1BC3008(&StringLiteral_17338/*"btn_list"*/, v4);
    sub_1BC3008(&StringLiteral_17355/*"btn_regression_hourglass"*/, v5);
    sub_1BC3008(&StringLiteral_17376/*"btn_to_crown_formation"*/, v6);
    byte_4B05950 = 1;
  }
  this->fields.touchBlockCount = 0;
  UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
  if ( !UiAtlasManagerUnit )
    goto LABEL_20;
  AtlasManagerUnit__SetUI(
    UiAtlasManagerUnit,
    this->fields.effectListBtnSprite,
    (System_String_o *)StringLiteral_17338/*"btn_list"*/,
    0LL);
  toGrandServantListBtnSprite = (UnityEngine_Object_o *)this->fields.toGrandServantListBtnSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(toGrandServantListBtnSprite, 0LL, 0LL) )
  {
    UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
    if ( !UiAtlasManagerUnit )
      goto LABEL_20;
    AtlasManagerUnit__SetUI(
      UiAtlasManagerUnit,
      this->fields.toGrandServantListBtnSprite,
      (System_String_o *)StringLiteral_17376/*"btn_to_crown_formation"*/,
      0LL);
  }
  grandScoreBtnSprite = (UnityEngine_Object_o *)this->fields.grandScoreBtnSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandScoreBtnSprite, 0LL, 0LL) )
  {
    UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
    if ( !UiAtlasManagerUnit )
      goto LABEL_20;
    AtlasManagerUnit__SetUI(
      UiAtlasManagerUnit,
      this->fields.grandScoreBtnSprite,
      (System_String_o *)StringLiteral_17377/*"btn_to_grand_scoreboard"*/,
      0LL);
  }
  shop18BtnSprite = (UnityEngine_Object_o *)this->fields.shop18BtnSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shop18BtnSprite, 0LL, 0LL) )
  {
    UiAtlasManagerUnit = ClassBoardGlobalObject__get_UiAtlasManagerUnit(0LL);
    if ( UiAtlasManagerUnit )
    {
      AtlasManagerUnit__SetUI(
        UiAtlasManagerUnit,
        this->fields.shop18BtnSprite,
        (System_String_o *)StringLiteral_17355/*"btn_regression_hourglass"*/,
        0LL);
      goto LABEL_19;
    }
LABEL_20:
    sub_1BC3264(UiAtlasManagerUnit, v8);
  }
LABEL_19:
  AndroidBackKeyManager__AddBackBtn(this->fields.backBtn, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardUIController__IsOpenQuestOpenDialog(
        ClassBoardUIController_o *this,
        int32_t baseId,
        int32_t *questId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  int32_t QuestOpenDialogCondSignNum; // w21
  bool result; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B0595D & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, *(_QWORD *)&baseId);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v6);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v8);
    byte_4B0595D = 1;
  }
  entity = 0LL;
  *questId = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_16;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          baseId,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity
    || (*questId = ClassBoardBaseEntity__GetQuestOpenDialogTransitionQuestId((ClassBoardBaseEntity_o *)entity, 0LL),
        (Master_object = entity) == 0LL) )
  {
LABEL_16:
    sub_1BC3264(Master_object, v10);
  }
  QuestOpenDialogCondSignNum = ClassBoardBaseEntity__GetQuestOpenDialogCondSignNum(
                                 (ClassBoardBaseEntity_o *)entity,
                                 0LL);
  result = 0;
  if ( QuestOpenDialogCondSignNum >= 1 && *questId >= 1 )
  {
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return CondType__CountClassBoardSquareReleased(baseId, 0LL) == QuestOpenDialogCondSignNum;
  }
  return result;
}


void __fastcall ClassBoardUIController__OnClickBack(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B05959 & 1) == 0 )
  {
    sub_1BC3008(&Method_ClassBoardUIController_OnClickBack__, method);
    byte_4B05959 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickBack__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BC3020(Method_ClassBoardUIController_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
  ActionExtensions__Call(this->fields.onClickBack, 0LL);
}


void __fastcall ClassBoardUIController__OnClickEffectListButton(
        ClassBoardUIController_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B05955 & 1) == 0 )
  {
    sub_1BC3008(&Method_ClassBoardUIController_OnClickEffectListButton__, method);
    byte_4B05955 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickEffectListButton__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickEffectListButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BC3020(Method_ClassBoardUIController_OnClickEffectListButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  ActionExtensions__Call(this->fields.onClickEffectList, 0LL);
}


void __fastcall ClassBoardUIController__OnClickGrandScoreButton(
        ClassBoardUIController_o *this,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v2; // x19
  __int64 v3; // x1
  struct UISprite_o *grandScoreBtnSprite; // x8
  bool v5; // w0
  _QWORD *v6; // x8
  bool v7; // w20
  System_Reflection_MethodBase_o *v8; // x0

  v2 = this;
  if ( (byte_4B05957 & 1) == 0 )
  {
    sub_1BC3008(&Method_ClassBoardUIController_OnClickGrandScoreButton__, method);
    this = (ClassBoardUIController_o *)sub_1BC3008(&StringLiteral_17378/*"btn_to_grand_scoreboard_blackout"*/, v3);
    byte_4B05957 = 1;
  }
  grandScoreBtnSprite = v2->fields.grandScoreBtnSprite;
  if ( !grandScoreBtnSprite )
    sub_1BC3264(this, method);
  v5 = System_String__op_Equality(grandScoreBtnSprite->fields.mSpriteName, (System_String_o *)StringLiteral_17378/*"btn_to_grand_scoreboard_blackout"*/, 0LL);
  v6 = Method_ClassBoardUIController_OnClickGrandScoreButton__;
  v7 = v5;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickGrandScoreButton__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BC3020(Method_ClassBoardUIController_OnClickGrandScoreButton__);
  v8 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v6, v6[4]);
  if ( v7 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
    ActionExtensions__Call(v2->fields.onClickGrandScoreButton, 0LL);
  }
}


void __fastcall ClassBoardUIController__OnClickHelp(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B05956 & 1) == 0 )
  {
    sub_1BC3008(&Method_ClassBoardUIController_OnClickHelp__, method);
    byte_4B05956 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickHelp__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickHelp__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BC3020(Method_ClassBoardUIController_OnClickHelp__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  ActionExtensions__Call(this->fields.onClickHelp, 0LL);
}


void __fastcall ClassBoardUIController__OnClickShop18Button(ClassBoardUIController_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B05958 & 1) == 0 )
  {
    sub_1BC3008(&Method_ClassBoardUIController_OnClickShop18Button__, method);
    byte_4B05958 = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickShop18Button__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickShop18Button__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BC3020(Method_ClassBoardUIController_OnClickShop18Button__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  ActionExtensions__Call(this->fields.onClickShop18Button, 0LL);
}


void __fastcall ClassBoardUIController__OnClickToGrandServantList(
        ClassBoardUIController_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_4B0595A & 1) == 0 )
  {
    sub_1BC3008(&Method_ClassBoardUIController_OnClickToGrandServantList__, method);
    byte_4B0595A = 1;
  }
  v3 = Method_ClassBoardUIController_OnClickToGrandServantList__;
  if ( (*((_BYTE *)Method_ClassBoardUIController_OnClickToGrandServantList__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1BC3020(Method_ClassBoardUIController_OnClickToGrandServantList__);
  v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  ActionExtensions__Call(this->fields.onClickToGrandServantList, 0LL);
}


void __fastcall ClassBoardUIController__OpenEffectList(ClassBoardUIController_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.onClickEffectList, 0LL);
}


void __fastcall ClassBoardUIController__OpenMissionClearDialog(
        ClassBoardUIController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x21
  System_String_o *Empty; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1

  if ( (byte_4B0595C & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, callback);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1BC3008(&string_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_3380/*"CLASS_BOARD_MISSION_CLEAR_MESSAGE"*/, v6);
    byte_4B0595C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3380/*"CLASS_BOARD_MISSION_CLEAR_MESSAGE"*/, 0LL);
  if ( !Instance )
    sub_1BC3264(v9, v10);
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)Instance,
    Empty,
    v9,
    callback,
    -1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0LL,
    0.0,
    0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardUIController__SetCameraWorkBlock(
        ClassBoardUIController_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *MapCamera; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x19

  if ( (byte_4B0595B & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, value);
    byte_4B0595B = 1;
  }
  ClassBoardPageSwitcher__SetCameraWorkBlockNum(value, (const MethodInfo *)value);
  MapCamera = (UnityEngine_Object_o *)ClassBoardGlobalObject__get_MapCamera(0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(MapCamera, 0LL, 0LL) )
  {
    v5 = (__int64)ClassBoardGlobalObject__get_MapCamera(0LL);
    v7 = v5;
    if ( !byte_4B059E3 )
    {
      v5 = sub_1BC3008(&ClassBoardPageSwitcher_TypeInfo, v6);
      byte_4B059E3 = 1;
    }
    if ( !v7 )
      sub_1BC3264(v5, v6);
    *(_BYTE *)(v7 + 97) = ClassBoardPageSwitcher_TypeInfo->static_fields->cameraWorkBlockNum < 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardUIController__SetGrandScoreButton(
        ClassBoardUIController_o *this,
        int32_t grandBaseId,
        AtlasManagerUnit_o *atlasManagerUnit,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Master_object; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x0
  UISprite_o *grandScoreBtnSprite; // x20
  __int64 *v15; // x8

  if ( (byte_4B05954 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, *(_QWORD *)&grandBaseId);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__, v8);
    sub_1BC3008(&StringLiteral_17377/*"btn_to_grand_scoreboard"*/, v9);
    sub_1BC3008(&StringLiteral_17378/*"btn_to_grand_scoreboard_blackout"*/, v10);
    byte_4B05954 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_12;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
             grandBaseId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  if ( !Entity )
    return;
  grandScoreBtnSprite = this->fields.grandScoreBtnSprite;
  Master_object = (Il2CppObject *)ClassBoardBaseEntity__IsOpen((ClassBoardBaseEntity_o *)Entity, 0LL);
  if ( !atlasManagerUnit )
LABEL_12:
    sub_1BC3264(Master_object, v12);
  v15 = &StringLiteral_17377/*"btn_to_grand_scoreboard"*/;
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    v15 = &StringLiteral_17378/*"btn_to_grand_scoreboard_blackout"*/;
  AtlasManagerUnit__SetUI(atlasManagerUnit, grandScoreBtnSprite, (System_String_o *)*v15, 0LL);
}


void __fastcall ClassBoardUIController__SetHeaderMessage(
        ClassBoardUIController_o *this,
        AtlasManagerUnit_o *atlasManagerUnit,
        System_String_o *message,
        bool isGrand,
        bool isSettedGrandSvt,
        const MethodInfo *method)
{
  __int64 v11; // x1
  UnityEngine_Component_o *headerMessageBgSprite; // x0
  UnityEngine_Object_o *underMessageLabel; // x24
  unsigned __int8 v14; // w24
  UnityEngine_Component_o *parent; // x0
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Component_o *transform; // x0

  if ( (byte_4B05952 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, atlasManagerUnit);
    sub_1BC3008(&StringLiteral_20171/*"img_commonbg_11"*/, v11);
    byte_4B05952 = 1;
  }
  headerMessageBgSprite = (UnityEngine_Component_o *)this->fields.headerMessageBgSprite;
  if ( !headerMessageBgSprite )
    goto LABEL_18;
  headerMessageBgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(headerMessageBgSprite, 0LL);
  if ( !headerMessageBgSprite )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)headerMessageBgSprite, !isGrand, 0LL);
  underMessageLabel = (UnityEngine_Object_o *)this->fields.underMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  headerMessageBgSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(underMessageLabel, 0LL, 0LL);
  if ( !this->fields.headerMessageLabel )
    goto LABEL_18;
  v14 = (unsigned __int8)headerMessageBgSprite;
  headerMessageBgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this->fields.headerMessageLabel,
                                                       0LL);
  if ( !headerMessageBgSprite )
    goto LABEL_18;
  parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                        (UnityEngine_Transform_o *)headerMessageBgSprite,
                                        0LL);
  if ( (v14 & isGrand & isSettedGrandSvt & 1) == 0 )
  {
    BasicHelper__SetActiveSafely(parent, 1, 0LL);
    headerMessageBgSprite = (UnityEngine_Component_o *)this->fields.underMessageLabel;
    if ( headerMessageBgSprite )
    {
      transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(headerMessageBgSprite, 0LL);
      BasicHelper__SetActiveSafely(transform, 0, 0LL);
    }
    if ( atlasManagerUnit )
    {
      AtlasManagerUnit__SetUI(
        atlasManagerUnit,
        this->fields.headerMessageBgSprite,
        (System_String_o *)StringLiteral_20171/*"img_commonbg_11"*/,
        0LL);
      headerMessageBgSprite = (UnityEngine_Component_o *)this->fields.headerMessageLabel;
      if ( headerMessageBgSprite )
        goto LABEL_17;
    }
LABEL_18:
    sub_1BC3264(headerMessageBgSprite, atlasManagerUnit);
  }
  BasicHelper__SetActiveSafely(parent, 0, 0LL);
  headerMessageBgSprite = (UnityEngine_Component_o *)this->fields.underMessageLabel;
  if ( !headerMessageBgSprite )
    goto LABEL_18;
  v16 = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(headerMessageBgSprite, 0LL);
  BasicHelper__SetActiveSafely(v16, 1, 0LL);
  headerMessageBgSprite = (UnityEngine_Component_o *)this->fields.underMessageLabel;
  if ( !headerMessageBgSprite )
    goto LABEL_18;
LABEL_17:
  UILabel__set_text((UILabel_o *)headerMessageBgSprite, message, 0LL);
}


void __fastcall ClassBoardUIController__SetHeaderTitle(
        ClassBoardUIController_o *this,
        AtlasManagerUnit_o *atlasManagerUnit,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v4; // x19

  if ( !atlasManagerUnit
    || (v4 = this,
        AtlasManagerUnit__SetUI(atlasManagerUnit, this->fields.headerTitleSprite, spriteName, 0LL),
        (this = (ClassBoardUIController_o *)v4->fields.headerTitleSprite) == 0LL) )
  {
    sub_1BC3264(this, atlasManagerUnit);
  }
  ((void (__fastcall *)(ClassBoardUIController_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
}


void __fastcall ClassBoardUIController__SetItemList(
        ClassBoardUIController_o *this,
        System_Int32_array *dispItemIds,
        AtlasManagerUnit_o *atlasManagerUnit,
        bool isGrand,
        const MethodInfo *method)
{
  ClassBoardUIController_o *v8; // x20
  __int64 v9; // x1
  struct EventItemComponent_array *headerItemComponentList; // x23
  __int64 v11; // x8
  unsigned __int64 v12; // x24
  EventItemComponent_o **m_Items; // x26
  unsigned __int64 max_length; // x9
  EventItemComponent_o *v15; // x8
  bool v16; // w1
  UnityEngine_Object_o *headerItemGrid; // x21
  UnityEngine_Object_o *headerItemParent; // x21
  UnityEngine_Object_o *headerGrandItemParent; // x21

  v8 = this;
  if ( (byte_4B05953 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, dispItemIds);
    this = (ClassBoardUIController_o *)sub_1BC3008(&StringLiteral_20220/*"img_item_bg"*/, v9);
    byte_4B05953 = 1;
  }
  if ( !isGrand || (headerItemComponentList = v8->fields.headerGrandItemComponentList) == 0LL )
  {
    headerItemComponentList = v8->fields.headerItemComponentList;
    if ( !headerItemComponentList )
      goto LABEL_43;
  }
  v11 = *(_QWORD *)&headerItemComponentList->max_length;
  if ( (int)v11 >= 1 )
  {
    v12 = 0LL;
    m_Items = headerItemComponentList->m_Items;
    while ( dispItemIds )
    {
      max_length = dispItemIds->max_length;
      if ( (__int64)v12 >= (int)max_length )
      {
        if ( v12 >= (unsigned int)v11 )
          goto LABEL_44;
        this = (ClassBoardUIController_o *)m_Items[v12];
        if ( !this )
          break;
        this = (ClassBoardUIController_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          break;
        v16 = 0;
      }
      else
      {
        if ( v12 >= max_length || v12 >= (unsigned int)v11 )
          goto LABEL_44;
        this = (ClassBoardUIController_o *)m_Items[v12];
        if ( !this )
          break;
        EventItemComponent__Set((EventItemComponent_o *)this, dispItemIds->m_Items[v12 + 1], 0LL);
        if ( v12 >= headerItemComponentList->max_length )
LABEL_44:
          sub_1BC326C(this, dispItemIds, atlasManagerUnit);
        v15 = m_Items[v12];
        if ( !v15 || !atlasManagerUnit )
          break;
        this = (ClassBoardUIController_o *)AtlasManagerUnit__SetUI(
                                             atlasManagerUnit,
                                             v15->fields.baseSp,
                                             (System_String_o *)StringLiteral_20220/*"img_item_bg"*/,
                                             0LL);
        if ( v12 >= headerItemComponentList->max_length )
          goto LABEL_44;
        this = (ClassBoardUIController_o *)m_Items[v12];
        if ( !this )
          break;
        this = (ClassBoardUIController_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          break;
        v16 = 1;
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v16, 0LL);
      LODWORD(v11) = headerItemComponentList->max_length;
      if ( (__int64)++v12 >= (int)v11 )
        goto LABEL_25;
    }
LABEL_43:
    sub_1BC3264(this, dispItemIds);
  }
LABEL_25:
  headerItemGrid = (UnityEngine_Object_o *)v8->fields.headerItemGrid;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(headerItemGrid, 0LL, 0LL) )
  {
    this = (ClassBoardUIController_o *)v8->fields.headerItemGrid;
    if ( !this )
      goto LABEL_43;
    UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0LL);
  }
  headerItemParent = (UnityEngine_Object_o *)v8->fields.headerItemParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(headerItemParent, 0LL, 0LL) )
  {
    this = (ClassBoardUIController_o *)v8->fields.headerItemParent;
    if ( !this )
      goto LABEL_43;
    this = (ClassBoardUIController_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !isGrand, 0LL);
  }
  headerGrandItemParent = (UnityEngine_Object_o *)v8->fields.headerGrandItemParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(headerGrandItemParent, 0LL, 0LL) )
  {
    this = (ClassBoardUIController_o *)v8->fields.headerGrandItemParent;
    if ( !this )
      goto LABEL_43;
    this = (ClassBoardUIController_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    if ( !this )
      goto LABEL_43;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isGrand, 0LL);
  }
}


void __fastcall ClassBoardUIController__SetOnClickBack(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onClickBack = action;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onClickBack, (int32_t)action, (int32_t)method, v3);
}


void __fastcall ClassBoardUIController__SetOnClickEffectList(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onClickEffectList = action;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onClickEffectList, (int32_t)action, (int32_t)method, v3);
}


void __fastcall ClassBoardUIController__SetOnClickGrandScoreButton(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onClickGrandScoreButton = action;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onClickGrandScoreButton, (int32_t)action, (int32_t)method, v3);
}


void __fastcall ClassBoardUIController__SetOnClickHelp(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onClickHelp = action;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onClickHelp, (int32_t)action, (int32_t)method, v3);
}


void __fastcall ClassBoardUIController__SetOnClickShop18Button(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onClickShop18Button = action;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onClickShop18Button, (int32_t)action, (int32_t)method, v3);
}


void __fastcall ClassBoardUIController__SetOnClickToGrandServantList(
        ClassBoardUIController_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.onClickToGrandServantList = action;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.onClickToGrandServantList, (int32_t)action, (int32_t)method, v3);
}


void __fastcall ClassBoardUIController__TouchDisable(ClassBoardUIController_o *this, const MethodInfo *method)
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
      sub_1BC3264(0LL, method);
    UnityEngine_GameObject__SetActive(touchBlock, 1, 0LL);
  }
}


void __fastcall ClassBoardUIController__TouchEnable(ClassBoardUIController_o *this, const MethodInfo *method)
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
      sub_1BC3264(0LL, method);
    UnityEngine_GameObject__SetActive(touchBlock, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardUIController__UpdateItemList(
        ClassBoardUIController_o *this,
        bool isGrand,
        const MethodInfo *method)
{
  struct EventItemComponent_array *headerItemComponentList; // x19
  int max_length; // w8
  il2cpp_array_size_t v5; // w20
  Il2CppClass **v6; // x21
  ClassBoardUIController_o **v7; // x21
  ClassBoardUIController_o *v8; // t1

  if ( !isGrand || (headerItemComponentList = this->fields.headerGrandItemComponentList) == 0LL )
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
        sub_1BC326C(this, isGrand, method);
      v6 = &headerItemComponentList->obj.klass + (int)v5;
      v8 = (ClassBoardUIController_o *)v6[4];
      v7 = (ClassBoardUIController_o **)(v6 + 4);
      this = v8;
      if ( !v8 )
        break;
      this = (ClassBoardUIController_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        break;
      this = (ClassBoardUIController_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v5 >= headerItemComponentList->max_length )
          goto LABEL_16;
        this = *v7;
        if ( !*v7 )
          break;
        EventItemComponent__UpdateDisp((EventItemComponent_o *)this, 0LL);
      }
      max_length = headerItemComponentList->max_length;
      if ( (int)++v5 >= max_length )
        return;
    }
LABEL_15:
    sub_1BC3264(this, isGrand);
  }
}


bool __fastcall ClassBoardUIController__get_IsTouchEnable(ClassBoardUIController_o *this, const MethodInfo *method)
{
  return this->fields.touchBlockCount < 1;
}