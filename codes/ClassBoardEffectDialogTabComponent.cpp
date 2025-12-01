void ClassBoardEffectDialogTabComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4CCAFC2 & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardEffectDialogTabComponent_TypeInfo);
    sub_1C713B0(&StringLiteral_17553/*"btn_tab_{0}"*/);
    byte_4CCAFC2 = 1;
  }
  ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT = (struct System_String_o *)StringLiteral_17553/*"btn_tab_{0}"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)ClassBoardEffectDialogTabComponent_TypeInfo->static_fields,
    StringLiteral_17553/*"btn_tab_{0}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->DISABLED_COLOR = (struct UnityEngine_Color_o)xmmword_CEF400;
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4CCAFC0 & 1) == 0 )
  {
    sub_1C713B0(&ClassBoardEffectDialogTabComponent_TypeInfo);
    sub_1C713B0(&UnityEngine_GameObject___TypeInfo);
    byte_4CCAFC0 = 1;
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
        classButton = (UICommonButton_o *)sub_1C71458(UnityEngine_GameObject___TypeInfo, 1),
        !v7) )
  {
LABEL_10:
    sub_1C71608(classButton, isEnable);
  }
  v7->fields.tweenTargets = (struct UnityEngine_GameObject_array *)classButton;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v7->fields.tweenTargets, (int32_t)classButton, v8, v9, v10, v11, v12, v13);
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
    sub_1C71608(bgSprite, isEnable);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v14; // x1
  ClassBoardBaseEntity_o *Entity; // x22
  int v16; // w23
  UIWidget_o *buttonSprite; // x23
  struct UICommonButton_o *classButton; // x23
  int32_t v19; // w2
  char v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  UISprite_o *v25; // x23
  int32_t iconId; // w10
  System_String_o *TAB_BTN_NAME_FORMAT; // x22
  Il2CppObject *v28; // x0
  System_String_o *v29; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v31; // x2
  int32_t v32; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CCAFBF & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&ClassBoardEffectDialogTabComponent_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_1C713B0(&UnityEngine_GameObject___TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    byte_4CCAFBF = 1;
  }
  this->fields.effectListDialog = effectListDialog;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.effectListDialog,
    (int32_t)effectListDialog,
    baseId,
    isDisp,
    (System_String_o *)isSupport,
    (int32_t)method,
    v6,
    v7);
  this->fields.baseId = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_28;
  Entity = (ClassBoardBaseEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                       Master_object,
                                       this->fields.baseId,
                                       (const MethodInfo_3408E80 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
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
    v16 = (int)Master_object;
  }
  else
  {
    v16 = 0;
  }
  if ( !isSupport )
  {
    if ( !Entity )
      goto LABEL_28;
    if ( ((v16 | ClassBoardBaseEntity__IsOpen(Entity, 0)) & 1) == 0 )
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
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C71458(UnityEngine_GameObject___TypeInfo, 1);
        if ( classButton )
        {
          classButton->fields.tweenTargets = (struct UnityEngine_GameObject_array *)Master_object;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&classButton->fields.tweenTargets,
            (int32_t)Master_object,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
          goto LABEL_18;
        }
      }
LABEL_28:
      sub_1C71608(Master_object, v14);
    }
  }
LABEL_18:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardEffectDialogTabComponent_TypeInfo;
  v25 = this->fields.buttonSprite;
  if ( !ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo);
  if ( !Entity )
    goto LABEL_28;
  iconId = Entity->fields.iconId;
  TAB_BTN_NAME_FORMAT = ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT;
  v32 = iconId;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v29 = System_String__Format(TAB_BTN_NAME_FORMAT, v28, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(v25, v29, 0);
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
  GameObjectExtensions__SetLocalScale_36391984(gameObject, 0.6, 0);
  if ( !isSupport )
    ClassBoardEffectDialogTabComponent__SetButtonState(this, isDisp, v31);
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

  if ( (byte_4CCAFC1 & 1) == 0 )
  {
    sub_1C713B0(&Method_ClassBoardEffectDialogTabComponent_onClickButton__);
    byte_4CCAFC1 = 1;
  }
  if ( !this->fields.isSelect )
  {
    v3 = Method_ClassBoardEffectDialogTabComponent_onClickButton__;
    if ( (*((_BYTE *)Method_ClassBoardEffectDialogTabComponent_onClickButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_ClassBoardEffectDialogTabComponent_onClickButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    effectListDialog = this->fields.effectListDialog;
    this->fields.isSelect = 1;
    if ( !effectListDialog )
      sub_1C71608(0, v5);
    ClassBoardEffectListDialog__ChangeTab(effectListDialog, this->fields.baseId, v6);
  }
}