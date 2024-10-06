void __fastcall ClassBoardEffectDialogTabComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1

  if ( (byte_4A7328E & 1) == 0 )
  {
    sub_1B90010(&ClassBoardEffectDialogTabComponent_TypeInfo, v1);
    sub_1B90010(&StringLiteral_17572/*"btn_tab_{0}"*/, v4);
    byte_4A7328E = 1;
  }
  ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT = (struct System_String_o *)StringLiteral_17572/*"btn_tab_{0}"*/;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)ClassBoardEffectDialogTabComponent_TypeInfo->static_fields,
    StringLiteral_17572/*"btn_tab_{0}"*/,
    v2,
    v3);
  ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->DISABLED_COLOR = (struct UnityEngine_Color_o)xmmword_BB7960;
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
  __int64 v5; // x1
  UICommonButton_o *classButton; // x0
  UIWidget_o *buttonSprite; // x20
  struct UICommonButton_o *v8; // x19
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A7328C & 1) == 0 )
  {
    sub_1B90010(&ClassBoardEffectDialogTabComponent_TypeInfo, isEnable);
    sub_1B90010(&UnityEngine_GameObject___TypeInfo, v5);
    byte_4A7328C = 1;
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
        v8 = this->fields.classButton,
        classButton = (UICommonButton_o *)sub_1B900B8(UnityEngine_GameObject___TypeInfo, 1LL),
        !v8) )
  {
LABEL_10:
    sub_1B9026C(classButton, isEnable);
  }
  v8->fields.tweenTargets = (struct UnityEngine_GameObject_array *)classButton;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v8->fields.tweenTargets, (int32_t)classButton, v9, v10);
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
    sub_1B9026C(bgSprite, isEnable);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x22
  UIWidget_o *buttonSprite; // x23
  struct UICommonButton_o *classButton; // x23
  int32_t v25; // w2
  char v26; // w3
  UISprite_o *v27; // x23
  int list; // w10
  System_String_o *TAB_BTN_NAME_FORMAT; // x22
  Il2CppObject *v30; // x0
  System_String_o *v31; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v33; // x2
  int v34; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A7328B & 1) == 0 )
  {
    sub_1B90010(&AtlasManager_TypeInfo, effectListDialog);
    sub_1B90010(&ClassBoardEffectDialogTabComponent_TypeInfo, v11);
    sub_1B90010(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, v12);
    sub_1B90010(&DataManager_TypeInfo, v13);
    sub_1B90010(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__, v14);
    sub_1B90010(&UnityEngine_GameObject___TypeInfo, v15);
    sub_1B90010(&int_TypeInfo, v16);
    byte_4A7328B = 1;
  }
  this->fields.effectListDialog = effectListDialog;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields.effectListDialog,
    (int32_t)effectListDialog,
    baseId,
    isDisp);
  this->fields.baseId = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_24;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                  Master_object,
                                                                  this->fields.baseId,
                                                                  (const MethodInfo_312C5A8 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__GetEntity__);
  v22 = Master_object;
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
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B900B8(
                                                                        UnityEngine_GameObject___TypeInfo,
                                                                        1LL);
        if ( classButton )
        {
          classButton->fields.tweenTargets = (struct UnityEngine_GameObject_array *)Master_object;
          sub_1B8FFB4(
            (ServantStatusBattleListViewItem_o *)&classButton->fields.tweenTargets,
            (int32_t)Master_object,
            v25,
            v26);
          goto LABEL_14;
        }
      }
LABEL_24:
      sub_1B9026C(Master_object, v18);
    }
  }
LABEL_14:
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ClassBoardEffectDialogTabComponent_TypeInfo;
  v27 = this->fields.buttonSprite;
  if ( !ClassBoardEffectDialogTabComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectDialogTabComponent_TypeInfo);
  if ( !v22 )
    goto LABEL_24;
  list = (int)v22->fields.list;
  TAB_BTN_NAME_FORMAT = ClassBoardEffectDialogTabComponent_TypeInfo->static_fields->TAB_BTN_NAME_FORMAT;
  v34 = list;
  v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v19, v20, v21);
  v31 = System_String__Format(TAB_BTN_NAME_FORMAT, v30, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetClassIconSprite(v27, v31, 0LL);
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
  GameObjectExtensions__SetLocalScale_33772860(gameObject, 0.6, 0LL);
  if ( !isSupport )
    ClassBoardEffectDialogTabComponent__SetButtonState(this, isDisp, v33);
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

  if ( (byte_4A7328D & 1) == 0 )
  {
    sub_1B90010(&Method_ClassBoardEffectDialogTabComponent_onClickButton__, method);
    byte_4A7328D = 1;
  }
  if ( !this->fields.isSelect )
  {
    v3 = Method_ClassBoardEffectDialogTabComponent_onClickButton__;
    if ( (*((_BYTE *)Method_ClassBoardEffectDialogTabComponent_onClickButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028(Method_ClassBoardEffectDialogTabComponent_onClickButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    effectListDialog = this->fields.effectListDialog;
    this->fields.isSelect = 1;
    if ( !effectListDialog )
      sub_1B9026C(0LL, v5);
    ClassBoardEffectListDialog__ChangeTab(effectListDialog, this->fields.baseId, v6);
  }
}