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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  UILabel_o *changeServantButtonLabel; // x22
  System_String_o *myRoomControl; // x0
  __int64 v27; // x1
  UILabel_o *changeServantFaceButtonLabel; // x22
  UILabel_o *changeMasterSettingButtonLabel; // x22
  UILabel_o *exchangePositionButtonLabel; // x22
  UILabel_o *hideUiButtonLabel; // x22
  float v32; // s0
  float v33; // s1
  float v34; // s2
  float v35; // s3
  float v36; // s8
  float v37; // s9
  float v38; // s10
  float v39; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E83CD & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, type, useChangeServantFace, method);
    sub_B5D5C4(&StringLiteral_17157/*"btn_Polaroid_bg"*/, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_10549/*"PHOTO_SETTING_CHANGE_SERVANT_BUTTON"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_10552/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_10551/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_10548/*"PHOTO_SETTING_CHANGE_MASTER_SETTING_BUTTON"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_10550/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/, v22, v23, v24);
    byte_42E83CD = 1;
  }
  changeServantButtonLabel = this->fields.changeServantButtonLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10549/*"PHOTO_SETTING_CHANGE_SERVANT_BUTTON"*/, 0LL);
  if ( !changeServantButtonLabel )
    goto LABEL_33;
  UILabel__set_text(changeServantButtonLabel, myRoomControl, 0LL);
  changeServantFaceButtonLabel = this->fields.changeServantFaceButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10550/*"PHOTO_SETTING_CHANGE_SERVANT_FACE_BUTTON"*/, 0LL);
  if ( !changeServantFaceButtonLabel )
    goto LABEL_33;
  UILabel__set_text(changeServantFaceButtonLabel, myRoomControl, 0LL);
  changeMasterSettingButtonLabel = this->fields.changeMasterSettingButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10548/*"PHOTO_SETTING_CHANGE_MASTER_SETTING_BUTTON"*/, 0LL);
  if ( !changeMasterSettingButtonLabel )
    goto LABEL_33;
  UILabel__set_text(changeMasterSettingButtonLabel, myRoomControl, 0LL);
  exchangePositionButtonLabel = this->fields.exchangePositionButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10551/*"PHOTO_SETTING_EXCHANGE_POSITION_BUTTON"*/, 0LL);
  if ( !exchangePositionButtonLabel )
    goto LABEL_33;
  UILabel__set_text(exchangePositionButtonLabel, myRoomControl, 0LL);
  hideUiButtonLabel = this->fields.hideUiButtonLabel;
  myRoomControl = LocalizationManager__Get((System_String_o *)StringLiteral_10552/*"PHOTO_SETTING_HIDE_UI_BUTTON"*/, 0LL);
  if ( !hideUiButtonLabel )
    goto LABEL_33;
  UILabel__set_text(hideUiButtonLabel, myRoomControl, 0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_33;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantButton,
    (System_String_o *)StringLiteral_17157/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_33;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeServantFaceButton,
    (System_String_o *)StringLiteral_17157/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_33;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.changeMasterSettingButton,
    (System_String_o *)StringLiteral_17157/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_33;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.exchangePositionButton,
    (System_String_o *)StringLiteral_17157/*"btn_Polaroid_bg"*/,
    0LL);
  myRoomControl = (System_String_o *)this->fields.myRoomControl;
  if ( !myRoomControl )
    goto LABEL_33;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)myRoomControl,
    this->fields.hideUiButton,
    (System_String_o *)StringLiteral_17157/*"btn_Polaroid_bg"*/,
    0LL);
  this->fields.isEnableChangeServantFaceButton = useChangeServantFace;
  *(UnityEngine_Color_o *)&v32 = useChangeServantFace
                               ? UnityEngine_Color__get_white(0LL)
                               : UnityEngine_Color__get_gray(0LL);
  myRoomControl = (System_String_o *)this->fields.changeServantFaceButton;
  v36 = v32;
  v37 = v33;
  v38 = v34;
  v39 = v35;
  if ( !myRoomControl )
    goto LABEL_33;
  UIWidget__set_color((UIWidget_o *)myRoomControl, *(UnityEngine_Color_o *)&v32, 0LL);
  myRoomControl = (System_String_o *)this->fields.changeServantFaceButtonLabel;
  if ( !myRoomControl )
    goto LABEL_33;
  v50.fields.r = v36;
  v50.fields.g = v37;
  v50.fields.b = v38;
  v50.fields.a = v39;
  UIWidget__set_color((UIWidget_o *)myRoomControl, v50, 0LL);
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
      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
      v46.fields.x = this->fields.topButtonPosition.fields.x;
      v46.fields.z = this->fields.topButtonPosition.fields.z;
      v46.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
      this->fields.topButtonPosition.fields.y = v46.fields.y;
      GameObjectExtensions__SetLocalPosition(v41, v46, 0LL);
      myRoomControl = (System_String_o *)this->fields.changeMasterSettingButton;
      if ( myRoomControl )
      {
        v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
        v47.fields.x = this->fields.topButtonPosition.fields.x;
        v47.fields.z = this->fields.topButtonPosition.fields.z;
        v47.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
        this->fields.topButtonPosition.fields.y = v47.fields.y;
        GameObjectExtensions__SetLocalPosition(v42, v47, 0LL);
        goto LABEL_30;
      }
    }
LABEL_33:
    sub_B5D69C(myRoomControl, v27);
  }
LABEL_30:
  myRoomControl = (System_String_o *)this->fields.changeServantFaceButton;
  if ( !myRoomControl )
    goto LABEL_33;
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
  v48.fields.x = this->fields.topButtonPosition.fields.x;
  v48.fields.z = this->fields.topButtonPosition.fields.z;
  v48.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v48.fields.y;
  GameObjectExtensions__SetLocalPosition(v43, v48, 0LL);
  myRoomControl = (System_String_o *)this->fields.changeServantButton;
  if ( !myRoomControl )
    goto LABEL_33;
  v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)myRoomControl, 0LL);
  v49.fields.x = this->fields.topButtonPosition.fields.x;
  v49.fields.z = this->fields.topButtonPosition.fields.z;
  v49.fields.y = this->fields.topButtonPosition.fields.y + this->fields.moveButtonPositionY;
  this->fields.topButtonPosition.fields.y = v49.fields.y;
  GameObjectExtensions__SetLocalPosition(v44, v49, 0LL);
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
  sub_B5D560(
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
    sub_B5D69C(0LL, v10);
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
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_42E83D0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PhotoSettingButtonComponent_OnClickChangeMasterSettingButton__, (_DWORD)method, v2, v3);
    byte_42E83D0 = 1;
  }
  v5 = Method_PhotoSettingButtonComponent_OnClickChangeMasterSettingButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeMasterSettingButton__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B5D5CC(Method_PhotoSettingButtonComponent_OnClickChangeMasterSettingButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_B5D69C(0LL, v7);
  MyRoomControl__ChangeMasterSetting(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickChangeServantButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_42E83CE & 1) == 0 )
  {
    sub_B5D5C4(&Method_PhotoSettingButtonComponent_OnClickChangeServantButton__, (_DWORD)method, v2, v3);
    byte_42E83CE = 1;
  }
  v5 = Method_PhotoSettingButtonComponent_OnClickChangeServantButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantButton__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B5D5CC(Method_PhotoSettingButtonComponent_OnClickChangeServantButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_B5D69C(0LL, v7);
  MyRoomControl__ChangePhotoServant(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickChangeServantFaceButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 isEnableChangeServantFaceButton; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_42E83CF & 1) == 0 )
  {
    sub_B5D5C4(&Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__, (_DWORD)method, v2, v3);
    byte_42E83CF = 1;
  }
  isEnableChangeServantFaceButton = this->fields.isEnableChangeServantFaceButton;
  v6 = Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B5D5CC(Method_PhotoSettingButtonComponent_OnClickChangeServantFaceButton__);
  v7 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v6, v6[3]);
  if ( isEnableChangeServantFaceButton )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    myRoomControl = this->fields.myRoomControl;
    if ( !myRoomControl )
      sub_B5D69C(0LL, v8);
    MyRoomControl__ChangePhotoCampaignServantFace(myRoomControl, 0LL);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
  }
}


void __fastcall PhotoSettingButtonComponent__OnClickExchangePositionButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_42E83D1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__, (_DWORD)method, v2, v3);
    byte_42E83D1 = 1;
  }
  v5 = Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B5D5CC(Method_PhotoSettingButtonComponent_OnClickExchangePositionButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_B5D69C(0LL, v7);
  MyRoomControl__ExchangePosition(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent__OnClickHideUIButton(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  MyRoomControl_o *myRoomControl; // x0

  if ( (byte_42E83D2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_PhotoSettingButtonComponent_OnClickHideUIButton__, (_DWORD)method, v2, v3);
    byte_42E83D2 = 1;
  }
  v5 = Method_PhotoSettingButtonComponent_OnClickHideUIButton__;
  if ( (*((_BYTE *)Method_PhotoSettingButtonComponent_OnClickHideUIButton__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B5D5CC(Method_PhotoSettingButtonComponent_OnClickHideUIButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  myRoomControl = this->fields.myRoomControl;
  if ( !myRoomControl )
    sub_B5D69C(0LL, v7);
  MyRoomControl__HidePhotoUi(myRoomControl, 0LL);
}


void __fastcall PhotoSettingButtonComponent__SerializeFieldNotNullCheck(
        PhotoSettingButtonComponent_o *this,
        const MethodInfo *method)
{
  ;
}