void __fastcall PhotoSettingButtonComponent___ctor(PhotoSettingButtonComponent_o *this, const MethodInfo *method)
{
  this->fields.moveButtonPositionY = 61.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PhotoSettingButtonComponent__DispSettingButton(
        PhotoSettingButtonComponent_o *this,
        int32_t type,
        bool useChangeServantFace,
        const MethodInfo *method)
{
  UILabel_o *changeServantButtonLabel; // x22
  System_String_o *myRoomControl; // x0
  __int64 v9; // x1
  UILabel_o *changeServantFaceButtonLabel; // x22
  UILabel_o *changeMasterSettingButtonLabel; // x22
  UILabel_o *exchangePositionButtonLabel; // x22
  UILabel_o *hideUiButtonLabel; // x22
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s3
  float v18; // s8
  float v19; // s9
  float v20; // s10
  float v21; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4351B90 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_17204/*"btn_Polaroid_bg"*/);
    sub_B70694(&StringLiteral_10570/*"PHOTO_SETTING_CHANGE_SERVANT_BUTTON"*/);
    sub_B70694(&StringLiteral_10573/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/);
    sub_B70694(&StringLiteral_10572/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/);
    sub_B70694(&StringLiteral_10569/*"PHOTO_SETTING_CHANGE_MASTER_SETTING_BUTTON"*/);
    sub_B70694(&StringLiteral_10571/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/);
    byte_4351B90 = 1;
  }
  changeServantButtonLabel = this->fields.changeServantButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10570/*"PHOTO_SETTING_CHANGE_SERVANT_BUTTON"*/, 0LL);
  if ( !changeServantButtonLabel )
    goto LABEL_33;
  UILabel__set_text(changeServantButtonLabel, myRoomControl, 0LL);
  changeServantFaceButtonLabel = this->fields.changeServantFaceButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10571/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/, 0LL);
  if ( !changeServantFaceButtonLabel )
    goto LABEL_33;
  UILabel__set_text(changeServantFaceButtonLabel, myRoomControl, 0LL);
  changeMasterSettingButtonLabel = this->fields.changeMasterSettingButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10569/*"PHOTO_SETTING_CHANGE_MASTER_SETTING_BUTTON"*/, 0LL);
  if ( !changeMasterSettingButtonLabel )
    goto LABEL_33;
  UILabel__set_text(changeMasterSettingButtonLabel, myRoomControl, 0LL);
  exchangePositionButtonLabel = this->fields.exchangePositionButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10572/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/, 0LL);
  if ( !exchangePositionButtonLabel )
    goto LABEL_33;
  UILabel__set_text(exchangePositionButtonLabel, myRoomControl, 0LL);
  hideUiButtonLabel = this->fields.hideUiButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10573/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/, 0LL);
  if ( !hideUiButtonLabel )
    goto LABEL_33;
  UILabel__set_text(hideUiButtonLabel, myRoomControl, 0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_33;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantButton,
    (System_String_o *)StringLiteral_17204/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_33;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButton,
    (System_String_o *)StringLiteral_17204/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_33;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeMasterSettingButton,
    (System_String_o *)StringLiteral_17204/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_33;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.exchangePositionButton,
    (System_String_o *)StringLiteral_17204/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_33;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.hideUiButton,
    (System_String_o *)StringLiteral_17204/*"btn_Polaroid_bg"*/,
    0LL);
  this->fields.isEnableChangeServantFaceButton = useChangeServantFace;
  *(UnityEngine_Color_o *)&v14 = useChangeServantFace
                               ? UnityEngine_Color__get_white(0LL)
                               : UnityEngine_Color__get_gray(0LL);
  myRoomControl = (System_String_o *)this->fields.changeServantFaceButton;
  v18 = v14;
  v19 = v15;
  v20 = v16;
  v21 = v17;
  if ( !myRoomControl )
    goto LABEL_33;
  UIWidget__set_color((UIWidget_o *)myRoomControl, *(UnityEngine_Color_o *)&v14, 0LL);
  myRoomControl = (System_String_o *)this->fields.changeServantFaceButtonLabel;
  if ( !myRoomControl )
    goto LABEL_33;
  v32.fields.r = v18;
  v32.fields.g = v19;
  v32.fields.b = v20;
  v32.fields.a = v21;
  UIWidget__set_color((UIWidget_o *)myRoomControl, v32, 0LL);
  myRoomControl = (System_String_o *)this->fields.hideUiButton;
  if ( !myRoomControl )
    goto LABEL_33;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  myRoomControl = (System_String_o *)this->fields.changeMasterSettingButton;
  this->fields.topButtonPosition = LocalPosition;
  if ( !myRoomControl )
    goto LABEL_33;
  myRoomControl = (System_String_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)myRoomControl,
                                       0LL);
  if ( !myRoomControl )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myRoomControl, type == 1, 0LL);
  myRoomControl = (System_String_o *)this->fields.exchangePositionButton;
  if ( !myRoomControl )
    goto LABEL_33;
  myRoomControl = (System_String_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)myRoomControl,
                                       0LL);
  if ( !myRoomControl )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myRoomControl, type == 1, 0LL);
  if ( type == 1 )
  {
    myRoomControl = (System_String_o *)this->fields.exchangePositionButton;
    if ( myRoomControl )
    {
      v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
      v28.fields.x = this->fields.topButtonPosition.fields.x;
      v28.fields.z = this->fields.topButtonPosition.fields.z;
      v28.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v28.fields.y;
      GameObjectExtensions__SetLocalPosition(v23, v28, 0LL);
      myRoomControl = (System_String_o *)this->fields.changeMasterSettingButton;
      if ( myRoomControl )
      {
        v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
        v29.fields.x = this->fields.topButtonPosition.fields.x;
        v29.fields.z = this->fields.topButtonPosition.fields.z;
        v29.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
        this->fields.topButtonPosition.fields.y = v29.fields.y;
        GameObjectExtensions__SetLocalPosition(v24, v29, 0LL);
        goto LABEL_30;
      }
    }
LABEL_33:
    sub_B7076C(myRoomControl, v9);
  }
LABEL_30:
  myRoomControl = (System_String_o *)this->fields.changeServantFaceButton;
  if ( !myRoomControl )
    goto LABEL_33;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
  v30.fields.x = this->fields.topButtonPosition.fields.x;
  v30.fields.z = this->fields.topButtonPosition.fields.z;
  v30.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v30.fields.y;
  GameObjectExtensions__SetLocalPosition(v25, v30, 0LL);
  myRoomControl = (System_String_o *)this->fields.changeServantButton;
  if ( !myRoomControl )
    goto LABEL_33;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
  v31.fields.x = this->fields.topButtonPosition.fields.x;
  v31.fields.z = this->fields.topButtonPosition.fields.z;
  v31.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v31.fields.y;
  GameObjectExtensions__SetLocalPosition(v26, v31, 0LL);
}


void __fastcall PhotoSettingButtonComponent__Init(
        PhotoSettingButtonComponent_o *this,
        MyRoomControl_o *myRoom,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1

  this->fields.myRoomControl = myRoom;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.myRoomControl,
    (System_Int32_array **)myRoom,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7076C(0LL, v10);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall PhotoSettingButtonComponent__MoveSettingButtonDisplay(
        PhotoSettingButtonComponent_o *this,
        UnityEngine_GameObject_o *button,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o v3; // 0:s0.4,4:s1.4,8:s2.4

  v3.fields.x = this->fields.topButtonPosition.fields.x;
  v3.fields.z = this->fields.topButtonPosition.fields.z;
  v3.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v3.fields.y;
  GameObjectExtensions__SetLocalPosition(button, v3, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickChangeMasterSettingButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4351B93 & 1) == 0 )
  {
    sub_B70694(&Method_PhotoSettingButtonComponent_OnClickChangeMasterSettingButton__);
    byte_4351B93 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeMasterSettingButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeMasterSettingButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B7069C(Method_PhotoSettingButtonComponent_OnClickChangeMasterSettingButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_B7076C(0LL, v5);
  MyRoomControl__ChangeMasterSetting(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickChangeServantButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4351B91 & 1) == 0 )
  {
    sub_B70694(&Method_PhotoSettingButtonComponent_OnClickChangeServantButton__);
    byte_4351B91 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B7069C(Method_PhotoSettingButtonComponent_OnClickChangeServantButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_B7076C(0LL, v5);
  MyRoomControl__ChangePhotoServant(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickChangeServantFaceButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _BOOL4 isEnableChangeServantFaceButton; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4351B92 & 1) == 0 )
  {
    sub_B70694(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
    byte_4351B92 = 1;
  }
  isEnableChangeServantFaceButton = this->fields.isEnableChangeServantFaceButton;
  v4 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__ + 75) & 2) != 0 )
    v4 = (_QWORD *)sub_B7069C(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_B70678(v4, v4[3]);
  if ( isEnableChangeServantFaceButton )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_B7076C(0LL, v6);
    MyRoomControl__ChangePhotoCampaignServantFace(myRoomControl, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0LL);
  }
}


void __fastcall PhotoSettingButtonComponent__OnClickExchangePositionButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4351B94 & 1) == 0 )
  {
    sub_B70694(&Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
    byte_4351B94 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B7069C(Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_B7076C(0LL, v5);
  MyRoomControl__ExchangePosition(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickHideUIButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4351B95 & 1) == 0 )
  {
    sub_B70694(&Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
    byte_4351B95 = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickHideUIButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickHideUIButton__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B7069C(Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_B70678(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_B7076C(0LL, v5);
  MyRoomControl__HidePhotoUi(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent__SerializeFieldNotNullCheck(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  ;
}