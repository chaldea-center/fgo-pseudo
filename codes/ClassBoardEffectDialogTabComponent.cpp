void ClassBoardEffectDialogTabComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_593C44A & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardEffectDialogTabComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_18261/*"btn_tab_{0}"*/);
    byte_593C44A = 1;
  }
  v7 = StringLiteral_18261/*"btn_tab_{0}"*/;
  ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT = (struct System_String_o *)StringLiteral_18261/*"btn_tab_{0}"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ClassBoardEffectDialogTabComponent_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->DISABLED_COLOR = (struct UnityEngine_Color_o)xmmword_E93E50;
}


void ClassBoardEffectDialogTabComponent___ctor(ClassBoardEffectDialogTabComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ClassBoardEffectDialogTabComponent__Awake(ClassBoardEffectDialogTabComponent_o *this, const MethodInfo *method)
{
  ;
}


int32_t ClassBoardEffectDialogTabComponent__GetBaseId(
        ClassBoardEffectDialogTabComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.baseId;
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardEffectDialogTabComponent__SetButtonEnable(
        ClassBoardEffectDialogTabComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UICommonButton_o *classButton; // x0
  UIWidget_o *buttonSprite; // x20
  struct UICommonButton_o *v7; // x19
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593C448 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardEffectDialogTabComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_GameObject___TypeInfo);
    byte_593C448 = 1;
  }
  classButton = this->fields.classButton;
  if ( !classButton )
    goto LABEL_10;
  UICommonButton__SetEnable(classButton, isEnable, 0);
  if ( isEnable )
    return;
  buttonSprite = (UIWidget_o *)this->fields.buttonSprite;
  classButton = (UICommonButton_o *)ClassBoardEffectDialogTabComponent_TypeInfo;
  if ( !*(&ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo, isEnable);
  if ( !buttonSprite
    || (UIWidget__set_color(buttonSprite, ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->DISABLED_COLOR, 0),
        v7 = this->fields.classButton,
        classButton = (UICommonButton_o *)sub_21FFD10(UnityEngine_GameObject___TypeInfo, 1),
        !v7) )
  {
LABEL_10:
    sub_21FFECC(classButton, isEnable);
  }
  v7->fields.tweenTargets = (struct UnityEngine_GameObject_array *)classButton;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v7->fields.tweenTargets,
    (int32_t)classButton,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardEffectDialogTabComponent__SetButtonState(
        ClassBoardEffectDialogTabComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bgSprite; // x0
  bool v6; // w20

  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite || (bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0)) == 0 )
    sub_21FFECC(bgSprite, isEnable);
  v6 = isEnable;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, v6, 0);
  this->fields.isSelect = v6;
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardEffectDialogTabComponent__Setup(
        ClassBoardEffectDialogTabComponent_o *this,
        ClassBoardEffectListDialog_o *effectListDialog,
        int32_t baseId,
        bool isDisp,
        bool isSupport,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  __int64 v13; // x1
  DataManager_c *v14; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v16; // x1
  ClassBoardBaseEntity_o *Entity; // x22
  int v18; // w23
  UIWidget_o *buttonSprite; // x23
  struct UICommonButton_o *classButton; // x23
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  char v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  UISprite_o *v27; // x23
  int32_t iconId; // w10
  System_String_o *TAB_BTN_NAME_FORMAT; // x22
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  System_String_o *v32; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v34; // x2
  int32_t v35; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_593C447 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&ClassBoardEffectDialogTabComponent_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_21FFC50(&UnityEngine_GameObject___TypeInfo);
    byte_593C447 = 1;
  }
  this->fields.effectListDialog = effectListDialog;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.effectListDialog,
    (int32_t)effectListDialog,
    *(System_String_o **)&baseId,
    (System_String_o *)isDisp,
    isSupport,
    (int32_t)method,
    v6,
    v7);
  v14 = DataManager_TypeInfo;
  this->fields.baseId = baseId;
  if ( !*(&v14->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v14, v13);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_28;
  Entity = (ClassBoardBaseEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                       Master_object,
                                       this->fields.baseId,
                                       (const MethodInfo_3EDD388 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_28;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardBaseMaster__GetGrandClassBoardBaseEntity(
                                                                  (ClassBoardBaseMaster_o *)Master_object,
                                                                  baseId,
                                                                  0);
  if ( Master_object )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardBaseEntity__IsOpen(
                                                                    (ClassBoardBaseEntity_o *)Master_object,
                                                                    0);
    v18 = (int)Master_object;
  }
  else
  {
    v18 = 0;
  }
  if ( !isSupport )
  {
    if ( !Entity )
      goto LABEL_28;
    if ( ((ClassBoardBaseEntity__IsOpen(Entity, 0) | v18) & 1) == 0 )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardEffectDialogTabComponent_TypeInfo;
      buttonSprite = (UIWidget_o *)this->fields.buttonSprite;
      if ( !*(&ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo, v16);
      if ( buttonSprite )
      {
        UIWidget__set_color(buttonSprite, ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->DISABLED_COLOR, 0);
        classButton = this->fields.classButton;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_21FFD10(UnityEngine_GameObject___TypeInfo, 1);
        if ( classButton )
        {
          classButton->fields.tweenTargets = (struct UnityEngine_GameObject_array *)Master_object;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&classButton->fields.tweenTargets,
            (int32_t)Master_object,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          goto LABEL_18;
        }
      }
LABEL_28:
      sub_21FFECC(Master_object, v16);
    }
  }
LABEL_18:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardEffectDialogTabComponent_TypeInfo;
  v27 = this->fields.buttonSprite;
  if ( !*(&ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo, v16);
  if ( !Entity )
    goto LABEL_28;
  iconId = Entity->fields.iconId;
  TAB_BTN_NAME_FORMAT = ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT;
  v35 = iconId;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v35);
  v32 = System_String__Format(TAB_BTN_NAME_FORMAT, v30, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31);
  AtlasManager__SetClassIconSprite(v27, v32, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.buttonSprite;
  if ( !Master_object )
    goto LABEL_28;
  (*(void (__fastcall **)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))&Master_object->klass[1]._2.element_size)(
    Master_object,
    *(_QWORD *)&Master_object->klass[1]._2.static_fields_size);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.buttonSprite;
  if ( !Master_object )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalScale_42878128(gameObject, 0.6, 0);
  if ( !isSupport )
    ClassBoardEffectDialogTabComponent__SetButtonState(this, isDisp, v34);
}


void ClassBoardEffectDialogTabComponent__onClickButton(
        ClassBoardEffectDialogTabComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  ClassBoardEffectListDialog_o *effectListDialog; // x0

  if ( (byte_593C449 & 1) == 0 )
  {
    sub_21FFC50(&Method_ClassBoardEffectDialogTabComponent_onClickButton__);
    byte_593C449 = 1;
  }
  if ( !this->fields.isSelect )
  {
    v3 = Method_ClassBoardEffectDialogTabComponent_onClickButton__;
    if ( (*((_BYTE *)Method_ClassBoardEffectDialogTabComponent_onClickButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ClassBoardEffectDialogTabComponent_onClickButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    effectListDialog = this->fields.effectListDialog;
    this->fields.isSelect = 1;
    if ( !effectListDialog )
      sub_21FFECC(0, v5);
    ClassBoardEffectListDialog__ChangeTab(effectListDialog, this->fields.baseId, v6);
  }
}