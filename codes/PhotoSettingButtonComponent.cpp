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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  UILabel_o *changeServantButtonLabel; // x22
  System_String_o *myRoomControl; // x0
  __int64 v21; // x1
  UILabel_o *changeServantFaceButtonLabel; // x22
  UILabel_o *changeMasterSettingButtonLabel; // x22
  UILabel_o *exchangePositionButtonLabel; // x22
  UILabel_o *hideUiButtonLabel; // x22
  float v26; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B11BF2 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, *(_QWORD *)&type, useChangeServantFace);
    sub_1BCA7E0(&StringLiteral_17635/*"btn_Polaroid_bg"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_10506/*"PHOTO_SETTING_CHANGE_SERVANT_BUTTON"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_10509/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_10508/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_10505/*"PHOTO_SETTING_CHANGE_MASTER_SETTING_BUTTON"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_10507/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/, v17, v18);
    byte_4B11BF2 = 1;
  }
  changeServantButtonLabel = this->fields.changeServantButtonLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&type);
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10506/*"PHOTO_SETTING_CHANGE_SERVANT_BUTTON"*/, 0LL);
  if ( !changeServantButtonLabel )
    goto LABEL_32;
  UILabel__set_text(changeServantButtonLabel, myRoomControl, 0LL);
  changeServantFaceButtonLabel = this->fields.changeServantFaceButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10507/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/, 0LL);
  if ( !changeServantFaceButtonLabel )
    goto LABEL_32;
  UILabel__set_text(changeServantFaceButtonLabel, myRoomControl, 0LL);
  changeMasterSettingButtonLabel = this->fields.changeMasterSettingButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10505/*"PHOTO_SETTING_CHANGE_MASTER_SETTING_BUTTON"*/, 0LL);
  if ( !changeMasterSettingButtonLabel )
    goto LABEL_32;
  UILabel__set_text(changeMasterSettingButtonLabel, myRoomControl, 0LL);
  exchangePositionButtonLabel = this->fields.exchangePositionButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10508/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/, 0LL);
  if ( !exchangePositionButtonLabel )
    goto LABEL_32;
  UILabel__set_text(exchangePositionButtonLabel, myRoomControl, 0LL);
  hideUiButtonLabel = this->fields.hideUiButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10509/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/, 0LL);
  if ( !hideUiButtonLabel )
    goto LABEL_32;
  UILabel__set_text(hideUiButtonLabel, myRoomControl, 0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_32;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantButton,
    (System_String_o *)StringLiteral_17635/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_32;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButton,
    (System_String_o *)StringLiteral_17635/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_32;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeMasterSettingButton,
    (System_String_o *)StringLiteral_17635/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_32;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.exchangePositionButton,
    (System_String_o *)StringLiteral_17635/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_32;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.hideUiButton,
    (System_String_o *)StringLiteral_17635/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.changeServantFaceButton;
  v26 = useChangeServantFace ? 1.0 : 0.5;
  this->fields.isEnableChangeServantFaceButton = useChangeServantFace;
  if ( !myRoomControl )
    goto LABEL_32;
  v37.fields.a = 1.0;
  v37.fields.r = v26;
  v37.fields.g = v26;
  v37.fields.b = v26;
  UIWidget__set_color((UIWidget_o *)myRoomControl, v37, 0LL);
  myRoomControl = (System_String_o *)this->fields.changeServantFaceButtonLabel;
  if ( !myRoomControl )
    goto LABEL_32;
  v38.fields.a = 1.0;
  v38.fields.r = v26;
  v38.fields.g = v26;
  v38.fields.b = v26;
  UIWidget__set_color((UIWidget_o *)myRoomControl, v38, 0LL);
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
      v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
      v33.fields.x = this->fields.topButtonPosition.fields.x;
      v33.fields.z = this->fields.topButtonPosition.fields.z;
      v33.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v33.fields.y;
      GameObjectExtensions__SetLocalPosition(v28, v33, 0LL);
      myRoomControl = (System_String_o *)this->fields.changeMasterSettingButton;
      if ( myRoomControl )
      {
        v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
        v34.fields.x = this->fields.topButtonPosition.fields.x;
        v34.fields.z = this->fields.topButtonPosition.fields.z;
        v34.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
        this->fields.topButtonPosition.fields.y = v34.fields.y;
        GameObjectExtensions__SetLocalPosition(v29, v34, 0LL);
        goto LABEL_29;
      }
    }
LABEL_32:
    sub_1BCAA3C(myRoomControl, v21);
  }
LABEL_29:
  myRoomControl = (System_String_o *)this->fields.changeServantFaceButton;
  if ( !myRoomControl )
    goto LABEL_32;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
  v35.fields.x = this->fields.topButtonPosition.fields.x;
  v35.fields.z = this->fields.topButtonPosition.fields.z;
  v35.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v35.fields.y;
  GameObjectExtensions__SetLocalPosition(v30, v35, 0LL);
  myRoomControl = (System_String_o *)this->fields.changeServantButton;
  if ( !myRoomControl )
    goto LABEL_32;
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
  v36.fields.x = this->fields.topButtonPosition.fields.x;
  v36.fields.z = this->fields.topButtonPosition.fields.z;
  v36.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v36.fields.y;
  GameObjectExtensions__SetLocalPosition(v31, v36, 0LL);
}


void __fastcall PhotoSettingButtonComponent__Init(
        PhotoSettingButtonComponent_o *this,
        MyRoomControl_o *myRoom,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  this->fields.myRoomControl = myRoom;
  sub_1BCA784(&this->fields.myRoomControl, myRoom);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v5);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4B11BF5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PhotoSettingButtonComponent_OnClickChangeMasterSettingButton__, method, v2);
    byte_4B11BF5 = 1;
  }
  v4 = Method_PhotoSettingButtonComponent_OnClickChangeMasterSettingButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeMasterSettingButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_PhotoSettingButtonComponent_OnClickChangeMasterSettingButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1BCAA3C(0LL, v6);
  MyRoomControl__ChangeMasterSetting(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickChangeServantButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4B11BF3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PhotoSettingButtonComponent_OnClickChangeServantButton__, method, v2);
    byte_4B11BF3 = 1;
  }
  v4 = Method_PhotoSettingButtonComponent_OnClickChangeServantButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_PhotoSettingButtonComponent_OnClickChangeServantButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1BCAA3C(0LL, v6);
  MyRoomControl__ChangePhotoServant(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickChangeServantFaceButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  _BOOL4 isEnableChangeServantFaceButton; // w20
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4B11BF4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__, method, v2);
    byte_4B11BF4 = 1;
  }
  v4 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__;
  isEnableChangeServantFaceButton = this->fields.isEnableChangeServantFaceButton;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  if ( isEnableChangeServantFaceButton )
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_1BCAA3C(0LL, v7);
    MyRoomControl__ChangePhotoCampaignServantFace(myRoomControl, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
  }
}


void __fastcall PhotoSettingButtonComponent__OnClickExchangePositionButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4B11BF6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__, method, v2);
    byte_4B11BF6 = 1;
  }
  v4 = Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1BCAA3C(0LL, v6);
  MyRoomControl__ExchangePosition(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickHideUIButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_4B11BF7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PhotoSettingButtonComponent_OnClickHideUIButton__, method, v2);
    byte_4B11BF7 = 1;
  }
  v4 = Method_PhotoSettingButtonComponent_OnClickHideUIButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickHideUIButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_1BCAA3C(0LL, v6);
  MyRoomControl__HidePhotoUi(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent__SerializeFieldNotNullCheck(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  ;
}