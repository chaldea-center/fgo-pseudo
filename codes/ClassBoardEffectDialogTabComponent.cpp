void ClassBoardEffectDialogTabComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C46AA6 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardEffectDialogTabComponent_TypeInfo);
    sub_1C37058(&StringLiteral_17531/*"btn_tab_{0}"*/);
    byte_4C46AA6 = 1;
  }
  ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT = (struct System_String_o *)StringLiteral_17531/*"btn_tab_{0}"*/;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)ClassBoardEffectDialogTabComponent_TypeInfo->static_fields,
    StringLiteral_17531/*"btn_tab_{0}"*/,
    v1,
    v2);
  ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->DISABLED_COLOR = (struct UnityEngine_Color_o)xmmword_C0EE90;
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


void ClassBoardEffectDialogTabComponent__SetButtonEnable(
        ClassBoardEffectDialogTabComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UICommonButton_o *classButton; // x0
  UIWidget_o *buttonSprite; // x20
  struct UICommonButton_o *v7; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C46AA4 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardEffectDialogTabComponent_TypeInfo);
    sub_1C37058(&UnityEngine_GameObject___TypeInfo);
    byte_4C46AA4 = 1;
  }
  classButton = this->fields.classButton;
  if ( !classButton )
    goto LABEL_10;
  UICommonButton__SetEnable(classButton, isEnable, 0);
  if ( isEnable )
    return;
  buttonSprite = (UIWidget_o *)this->fields.buttonSprite;
  classButton = (UICommonButton_o *)ClassBoardEffectDialogTabComponent_TypeInfo;
  if ( !ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo);
    classButton = (UICommonButton_o *)ClassBoardEffectDialogTabComponent_TypeInfo;
  }
  if ( !buttonSprite
    || (UIWidget__set_color(
          buttonSprite,
          *(UnityEngine_Color_o *)(*(_QWORD *)&classButton[1].fields.specifyHoverColor.fields.b + 8LL),
          0),
        v7 = this->fields.classButton,
        classButton = (UICommonButton_o *)sub_1C37100(UnityEngine_GameObject___TypeInfo, 1),
        !v7) )
  {
LABEL_10:
    sub_1C372B4(classButton);
  }
  v7->fields.tweenTargets = (struct UnityEngine_GameObject_array *)classButton;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->fields.tweenTargets, (int32_t)classButton, v8, v9);
}


void ClassBoardEffectDialogTabComponent__SetButtonState(
        ClassBoardEffectDialogTabComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bgSprite; // x0
  bool v6; // w20

  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite || (bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0)) == 0 )
    sub_1C372B4(bgSprite);
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  ClassBoardBaseEntity_o *Entity; // x22
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  int v19; // w23
  UIWidget_o *buttonSprite; // x23
  struct UICommonButton_o *classButton; // x23
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UISprite_o *v24; // x23
  int32_t iconId; // w10
  System_String_o *TAB_BTN_NAME_FORMAT; // x22
  Il2CppObject *v27; // x0
  System_String_o *v28; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v30; // x2
  int32_t v31; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C46AA3 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&ClassBoardEffectDialogTabComponent_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_1C37058(&UnityEngine_GameObject___TypeInfo);
    sub_1C37058(&int_TypeInfo);
    byte_4C46AA3 = 1;
  }
  this->fields.effectListDialog = effectListDialog;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.effectListDialog,
    (int32_t)effectListDialog,
    baseId,
    (const MethodInfo *)isDisp);
  this->fields.baseId = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_28;
  Entity = (ClassBoardBaseEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                       Master_object,
                                       this->fields.baseId,
                                       (const MethodInfo_33A10A0 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
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
    v19 = (int)Master_object;
  }
  else
  {
    v19 = 0;
  }
  if ( !isSupport )
  {
    if ( !Entity )
      goto LABEL_28;
    if ( ((v19 | ClassBoardBaseEntity__IsOpen(Entity, 0)) & 1) == 0 )
    {
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardEffectDialogTabComponent_TypeInfo;
      buttonSprite = (UIWidget_o *)this->fields.buttonSprite;
      if ( !ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardEffectDialogTabComponent_TypeInfo;
      }
      if ( buttonSprite )
      {
        UIWidget__set_color(buttonSprite, *(UnityEngine_Color_o *)&Master_object[2].fields.list->monitor, 0);
        classButton = this->fields.classButton;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C37100(UnityEngine_GameObject___TypeInfo, 1);
        if ( classButton )
        {
          classButton->fields.tweenTargets = (struct UnityEngine_GameObject_array *)Master_object;
          sub_1C36FFC((CGThumbnailListItem_o *)&classButton->fields.tweenTargets, (int32_t)Master_object, v22, v23);
          goto LABEL_18;
        }
      }
LABEL_28:
      sub_1C372B4(Master_object);
    }
  }
LABEL_18:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardEffectDialogTabComponent_TypeInfo;
  v24 = this->fields.buttonSprite;
  if ( !ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo);
  if ( !Entity )
    goto LABEL_28;
  iconId = Entity->fields.iconId;
  TAB_BTN_NAME_FORMAT = ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT;
  v31 = iconId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v13, v14, v15, v16, v17, v18);
  v28 = System_String__Format(TAB_BTN_NAME_FORMAT, v27, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(v24, v28, 0);
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
  GameObjectExtensions__SetLocalScale_36134400(gameObject, 0.6, 0);
  if ( !isSupport )
    ClassBoardEffectDialogTabComponent__SetButtonState(this, isDisp, v30);
}


void ClassBoardEffectDialogTabComponent__onClickButton(
        ClassBoardEffectDialogTabComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  ClassBoardEffectListDialog_o *effectListDialog; // x0

  if ( (byte_4C46AA5 & 1) == 0 )
  {
    sub_1C37058(&Method_ClassBoardEffectDialogTabComponent_onClickButton__);
    byte_4C46AA5 = 1;
  }
  if ( !this->fields.isSelect )
  {
    v3 = Method_ClassBoardEffectDialogTabComponent_onClickButton__;
    if ( (*((_BYTE *)Method_ClassBoardEffectDialogTabComponent_onClickButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_ClassBoardEffectDialogTabComponent_onClickButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    effectListDialog = this->fields.effectListDialog;
    this->fields.isSelect = 1;
    if ( !effectListDialog )
      sub_1C372B4(0);
    ClassBoardEffectListDialog__ChangeTab(effectListDialog, this->fields.baseId, v5);
  }
}