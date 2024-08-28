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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UILabel_o *changeServantButtonLabel; // x22
  System_String_o *myRoomControl; // x0
  __int64 v15; // x1
  UILabel_o *changeServantFaceButtonLabel; // x22
  UILabel_o *changeMasterSettingButtonLabel; // x22
  UILabel_o *exchangePositionButtonLabel; // x22
  UILabel_o *hideUiButtonLabel; // x22
  float v20; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A04739 & 1) == 0 )
  {
    sub_1B686D4(&LocalizationManager_TypeInfo, *(_QWORD *)&type);
    sub_1B686D4(&StringLiteral_17397/*"btn_Polaroid_bg"*/, v7);
    sub_1B686D4(&StringLiteral_10328/*"PHOTO_SETTING_CHANGE_SERVANT_BUTTON"*/, v8);
    sub_1B686D4(&StringLiteral_10331/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/, v9);
    sub_1B686D4(&StringLiteral_10330/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/, v10);
    sub_1B686D4(&StringLiteral_10327/*"PHOTO_SETTING_CHANGE_MASTER_SETTING_BUTTON"*/, v11);
    sub_1B686D4(&StringLiteral_10329/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/, v12);
    byte_4A04739 = 1;
  }
  changeServantButtonLabel = this->fields.changeServantButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10328/*"PHOTO_SETTING_CHANGE_SERVANT_BUTTON"*/, 0LL);
  if ( !changeServantButtonLabel )
    goto LABEL_32;
  UILabel__set_text(changeServantButtonLabel, myRoomControl, 0LL);
  changeServantFaceButtonLabel = this->fields.changeServantFaceButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10329/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/, 0LL);
  if ( !changeServantFaceButtonLabel )
    goto LABEL_32;
  UILabel__set_text(changeServantFaceButtonLabel, myRoomControl, 0LL);
  changeMasterSettingButtonLabel = this->fields.changeMasterSettingButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10327/*"PHOTO_SETTING_CHANGE_MASTER_SETTING_BUTTON"*/, 0LL);
  if ( !changeMasterSettingButtonLabel )
    goto LABEL_32;
  UILabel__set_text(changeMasterSettingButtonLabel, myRoomControl, 0LL);
  exchangePositionButtonLabel = this->fields.exchangePositionButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10330/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/, 0LL);
  if ( !exchangePositionButtonLabel )
    goto LABEL_32;
  UILabel__set_text(exchangePositionButtonLabel, myRoomControl, 0LL);
  hideUiButtonLabel = this->fields.hideUiButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10331/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/, 0LL);
  if ( !hideUiButtonLabel )
    goto LABEL_32;
  UILabel__set_text(hideUiButtonLabel, myRoomControl, 0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_32;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantButton,
    (System_String_o *)StringLiteral_17397/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_32;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButton,
    (System_String_o *)StringLiteral_17397/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_32;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeMasterSettingButton,
    (System_String_o *)StringLiteral_17397/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_32;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.exchangePositionButton,
    (System_String_o *)StringLiteral_17397/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_32;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.hideUiButton,
    (System_String_o *)StringLiteral_17397/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.changeServantFaceButton;
  v20 = useChangeServantFace ? 1.0 : 0.5;
  this->fields.isEnableChangeServantFaceButton = useChangeServantFace;
  if ( !myRoomControl )
    goto LABEL_32;
  v31.fields.a = 1.0;
  v31.fields.r = v20;
  v31.fields.g = v20;
  v31.fields.b = v20;
  UIWidget__set_color((UIWidget_o *)myRoomControl, v31, 0LL);
  myRoomControl = (System_String_o *)this->fields.changeServantFaceButtonLabel;
  if ( !myRoomControl )
    goto LABEL_32;
  v32.fields.a = 1.0;
  v32.fields.r = v20;
  v32.fields.g = v20;
  v32.fields.b = v20;
  UIWidget__set_color((UIWidget_o *)myRoomControl, v32, 0LL);
  myRoomControl = (System_String_o *)this->fields.hideUiButton;
  if ( !myRoomControl )
    goto LABEL_32;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  myRoomControl = (System_String_o *)this->fields.changeMasterSettingButton;
  this->fields.topButtonPosition = LocalPosition;
  if ( !myRoomControl )
    goto LABEL_32;
  myRoomControl = (System_String_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)myRoomControl,
                                       0LL);
  if ( !myRoomControl )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myRoomControl, type == 1, 0LL);
  myRoomControl = (System_String_o *)this->fields.exchangePositionButton;
  if ( !myRoomControl )
    goto LABEL_32;
  myRoomControl = (System_String_o *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)myRoomControl,
                                       0LL);
  if ( !myRoomControl )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)myRoomControl, type == 1, 0LL);
  if ( type == 1 )
  {
    myRoomControl = (System_String_o *)this->fields.exchangePositionButton;
    if ( myRoomControl )
    {
      v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
      v27.fields.x = this->fields.topButtonPosition.fields.x;
      v27.fields.z = this->fields.topButtonPosition.fields.z;
      v27.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v27.fields.y;
      GameObjectExtensions__SetLocalPosition(v22, v27, 0LL);
      myRoomControl = (System_String_o *)this->fields.changeMasterSettingButton;
      if ( myRoomControl )
      {
        v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
        v28.fields.x = this->fields.topButtonPosition.fields.x;
        v28.fields.z = this->fields.topButtonPosition.fields.z;
        v28.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
        this->fields.topButtonPosition.fields.y = v28.fields.y;
        GameObjectExtensions__SetLocalPosition(v23, v28, 0LL);
        goto LABEL_29;
      }
    }
LABEL_32:
    sub_1B68930(myRoomControl, v15);
  }
LABEL_29:
  myRoomControl = (System_String_o *)this->fields.changeServantFaceButton;
  if ( !myRoomControl )
    goto LABEL_32;
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
  v29.fields.x = this->fields.topButtonPosition.fields.x;
  v29.fields.z = this->fields.topButtonPosition.fields.z;
  v29.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v29.fields.y;
  GameObjectExtensions__SetLocalPosition(v24, v29, 0LL);
  myRoomControl = (System_String_o *)this->fields.changeServantButton;
  if ( !myRoomControl )
    goto LABEL_32;
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
  v30.fields.x = this->fields.topButtonPosition.fields.x;
  v30.fields.z = this->fields.topButtonPosition.fields.z;
  v30.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v30.fields.y;
  GameObjectExtensions__SetLocalPosition(v25, v30, 0LL);
}


void __fastcall PhotoSettingButtonComponent__Init(
        PhotoSettingButtonComponent_o *this,
        MyRoomControl_o *myRoom,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  this->fields.myRoomControl = myRoom;
  sub_1B68678(&this->fields.myRoomControl);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B68930(0LL, v5);
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

  if ( (byte_4A0473C & 1) == 0 )
  {
    sub_1B686D4(&Method_PhotoSettingButtonComponent_OnClickChangeMasterSettingButton__, method);
    byte_4A0473C = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeMasterSettingButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeMasterSettingButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_PhotoSettingButtonComponent_OnClickChangeMasterSettingButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1B68930(0LL, v5);
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

  if ( (byte_4A0473A & 1) == 0 )
  {
    sub_1B686D4(&Method_PhotoSettingButtonComponent_OnClickChangeServantButton__, method);
    byte_4A0473A = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_PhotoSettingButtonComponent_OnClickChangeServantButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1B68930(0LL, v5);
  MyRoomControl__ChangePhotoServant(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickChangeServantFaceButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isEnableChangeServantFaceButton; // w20
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4A0473B & 1) == 0 )
  {
    sub_1B686D4(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__, method);
    byte_4A0473B = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__;
  isEnableChangeServantFaceButton = this->fields.isEnableChangeServantFaceButton;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  if ( isEnableChangeServantFaceButton )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_1B68930(0LL, v6);
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

  if ( (byte_4A0473D & 1) == 0 )
  {
    sub_1B686D4(&Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__, method);
    byte_4A0473D = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1B68930(0LL, v5);
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

  if ( (byte_4A0473E & 1) == 0 )
  {
    sub_1B686D4(&Method_PhotoSettingButtonComponent_OnClickHideUIButton__, method);
    byte_4A0473E = 1;
  }
  v3 = Method_PhotoSettingButtonComponent_OnClickHideUIButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickHideUIButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B686EC(Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B686B8(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1B68930(0LL, v5);
  MyRoomControl__HidePhotoUi(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent__SerializeFieldNotNullCheck(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  ;
}