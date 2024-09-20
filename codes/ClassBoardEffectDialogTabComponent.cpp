void __fastcall ClassBoardEffectDialogTabComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5E575 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardEffectDialogTabComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_17547/*"btn_tab_{0}"*/);
    byte_4A5E575 = 1;
  }
  ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT = (struct System_String_o *)StringLiteral_17547/*"btn_tab_{0}"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ClassBoardEffectDialogTabComponent_TypeInfo->static_fields,
    StringLiteral_17547/*"btn_tab_{0}"*/,
    v1,
    v2);
  ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->DISABLED_COLOR = (struct UnityEngine_Color_o)xmmword_BB4AE0;
}


void __fastcall ClassBoardEffectDialogTabComponent___ctor(
        ClassBoardEffectDialogTabComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ClassBoardEffectDialogTabComponent__Awake(
        ClassBoardEffectDialogTabComponent_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall ClassBoardEffectDialogTabComponent__GetBaseId(
        ClassBoardEffectDialogTabComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.baseId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectDialogTabComponent__SetButtonEnable(
        ClassBoardEffectDialogTabComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UICommonButton_o *classButton; // x0
  UIWidget_o *buttonSprite; // x20
  struct UICommonButton_o *v7; // x19
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5E573 & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardEffectDialogTabComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    byte_4A5E573 = 1;
  }
  classButton = this->fields.classButton;
  if ( !classButton )
    goto LABEL_10;
  UICommonButton__SetEnable(classButton, isEnable, 0LL);
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
          0LL),
        v7 = this->fields.classButton,
        classButton = (UICommonButton_o *)sub_1B88658(UnityEngine_GameObject___TypeInfo, 1LL),
        !v7) )
  {
LABEL_10:
    sub_1B8880C(classButton, isEnable);
  }
  v7->fields.tweenTargets = (struct UnityEngine_GameObject_array *)classButton;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v7->fields.tweenTargets, (int32_t)classButton, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectDialogTabComponent__SetButtonState(
        ClassBoardEffectDialogTabComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bgSprite; // x0
  bool v6; // w20

  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite || (bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0LL)) == 0LL )
    sub_1B8880C(bgSprite, isEnable);
  v6 = isEnable;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, v6, 0LL);
  this->fields.isSelect = v6;
}


void __fastcall ClassBoardEffectDialogTabComponent__Setup(
        ClassBoardEffectDialogTabComponent_o *this,
        ClassBoardEffectListDialog_o *effectListDialog,
        int32_t baseId,
        bool isDisp,
        bool isSupport,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x22
  UIWidget_o *buttonSprite; // x23
  struct UICommonButton_o *classButton; // x23
  int32_t v19; // w2
  char v20; // w3
  UISprite_o *v21; // x23
  int list; // w10
  System_String_o *TAB_BTN_NAME_FORMAT; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v27; // x2
  int v28; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A5E572 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&ClassBoardEffectDialogTabComponent_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    byte_4A5E572 = 1;
  }
  this->fields.effectListDialog = effectListDialog;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.effectListDialog,
    (int32_t)effectListDialog,
    baseId,
    isDisp);
  this->fields.baseId = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_24;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  this->fields.baseId,
                                                                  (const MethodInfo_311D934 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  v16 = Master_object;
  if ( !isSupport )
  {
    if ( !Master_object )
      goto LABEL_24;
    if ( !ClassBoardBaseEntity__IsOpen((ClassBoardBaseEntity_o *)Master_object, 0LL) )
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
        UIWidget__set_color(buttonSprite, *(UnityEngine_Color_o *)&Master_object[2].fields._lookup->monitor, 0LL);
        classButton = this->fields.classButton;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B88658(
                                                                        UnityEngine_GameObject___TypeInfo,
                                                                        1LL);
        if ( classButton )
        {
          classButton->fields.tweenTargets = (struct UnityEngine_GameObject_array *)Master_object;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&classButton->fields.tweenTargets,
            (int32_t)Master_object,
            v19,
            v20);
          goto LABEL_14;
        }
      }
LABEL_24:
      sub_1B8880C(Master_object, v12);
    }
  }
LABEL_14:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardEffectDialogTabComponent_TypeInfo;
  v21 = this->fields.buttonSprite;
  if ( !ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo);
  if ( !v16 )
    goto LABEL_24;
  list = (int)v16->fields.list;
  TAB_BTN_NAME_FORMAT = ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT;
  v28 = list;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v13, v14, v15);
  v25 = System_String__Format(TAB_BTN_NAME_FORMAT, v24, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(v21, v25, 0LL);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.buttonSprite;
  if ( !Master_object )
    goto LABEL_24;
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppMethodPointer))Master_object->klass[1].vtable._5_ForForceDerived.method)(
    Master_object,
    Master_object->klass[1].vtable._6_preProcess.methodPtr);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.buttonSprite;
  if ( !Master_object )
    goto LABEL_24;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalScale_33726240(gameObject, 0.6, 0LL);
  if ( !isSupport )
    ClassBoardEffectDialogTabComponent__SetButtonState(this, isDisp, v27);
}


void __fastcall ClassBoardEffectDialogTabComponent__onClickButton(
        ClassBoardEffectDialogTabComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  ClassBoardEffectListDialog_o *effectListDialog; // x0

  if ( (byte_4A5E574 & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardEffectDialogTabComponent_onClickButton__);
    byte_4A5E574 = 1;
  }
  if ( !this->fields.isSelect )
  {
    v3 = Method_ClassBoardEffectDialogTabComponent_onClickButton__;
    if ( (*((_BYTE *)Method_ClassBoardEffectDialogTabComponent_onClickButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ClassBoardEffectDialogTabComponent_onClickButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    effectListDialog = this->fields.effectListDialog;
    this->fields.isSelect = 1;
    if ( !effectListDialog )
      sub_1B8880C(0LL, v5);
    ClassBoardEffectListDialog__ChangeTab(effectListDialog, this->fields.baseId, v6);
  }
}