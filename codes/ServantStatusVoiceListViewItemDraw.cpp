void __fastcall ServantStatusVoiceListViewItemDraw___ctor(
        ServantStatusVoiceListViewItemDraw_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusVoiceListViewItemDraw__SetInput(
        ServantStatusVoiceListViewItemDraw_o *this,
        ServantStatusVoiceListViewItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UICommonButton_o *baseButton; // x0
  UICommonButton_o *v7; // x0
  UICommonButton_o *v8; // x0

  if ( item && item->fields.isCanPlay )
  {
    baseButton = this->fields.baseButton;
    if ( baseButton )
    {
      UICommonButton__SetEnable(baseButton, 1, 0LL);
      v7 = this->fields.baseButton;
      if ( v7 )
      {
        UICommonButton__SetColliderEnable(v7, isInput, 1, 0LL);
        return;
      }
    }
LABEL_8:
    sub_B170D4();
  }
  v8 = this->fields.baseButton;
  if ( !v8 )
    goto LABEL_8;
  UICommonButton__SetEnable(v8, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewItemDraw__SetItem(
        ServantStatusVoiceListViewItemDraw_o *this,
        ServantStatusVoiceListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct VoiceEntity_o *voiceEntitiy; // x8
  unsigned int v13; // w8
  System_String_o **v14; // x8
  UISprite_o *typeSpite; // x0
  System_String_o *v16; // x21
  const MethodInfo *v17; // x1
  struct UISprite_o *v18; // x0
  UILabel_o *nameLabel; // x21
  System_String_o *Name; // x0
  UnityEngine_Component_o *playIconSprite; // x0
  UnityEngine_Behaviour_o *Component_WebViewObject; // x21
  UIWidget_o *v23; // x20
  int v24; // s0

  if ( (byte_40FCA9F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenColor___, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_19644/*"img_txt_myroom"*/, v8);
    sub_B16FFC(&StringLiteral_19650/*"img_txt_other"*/, v9);
    sub_B16FFC(&StringLiteral_19586/*"img_txt_battle"*/, v10);
    sub_B16FFC(&StringLiteral_19675/*"img_txt_synthesis"*/, v11);
    byte_40FCA9F = 1;
  }
  if ( item && mode )
  {
    voiceEntitiy = item->fields.voiceEntitiy;
    if ( !voiceEntitiy )
      goto LABEL_27;
    v13 = voiceEntitiy->fields.svtVoiceType - 1;
    v14 = (System_String_o **)(v13 > 8 ? &StringLiteral_19650/*"img_txt_other"*/ : (&off_3D6A9C0)[v13]);
    typeSpite = this->fields.typeSpite;
    if ( !typeSpite )
      goto LABEL_27;
    v16 = *v14;
    UISprite__set_spriteName(typeSpite, *v14, 0LL);
    if ( v16 )
    {
      v18 = this->fields.typeSpite;
      if ( !v18 )
        goto LABEL_27;
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v18->klass->vtable._33_MakePixelPerfect.method)(
        v18,
        v18->klass->vtable._34_get_minWidth.methodPtr);
    }
    nameLabel = this->fields.nameLabel;
    Name = ServantStatusVoiceListViewItem__get_Name(item, v17);
    if ( !nameLabel
      || (UILabel__set_text(nameLabel, Name, 0LL),
          (playIconSprite = (UnityEngine_Component_o *)this->fields.playIconSprite) == 0LL) )
    {
LABEL_27:
      sub_B170D4();
    }
    Component_WebViewObject = (UnityEngine_Behaviour_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                           playIconSprite,
                                                           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
    {
      if ( !Component_WebViewObject )
        goto LABEL_27;
      UnityEngine_Behaviour__set_enabled(Component_WebViewObject, 0, 0LL);
    }
    v23 = (UIWidget_o *)this->fields.playIconSprite;
    if ( item->fields.isPlay || !item->fields.isCanPlay )
    {
      *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_gray(0LL);
      if ( !v23 )
        goto LABEL_27;
    }
    else
    {
      *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_white(0LL);
      if ( !v23 )
        goto LABEL_27;
    }
    UIWidget__set_color(v23, *(UnityEngine_Color_o *)&v24, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewItemDraw__SetPlay(
        ServantStatusVoiceListViewItemDraw_o *this,
        ServantStatusVoiceListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *playIconSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v6; // x19
  float v7; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s3
  float v11; // s5
  float v12; // s6
  float v13; // s7
  UnityEngine_Color_o v14; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  playIconSprite = (UnityEngine_Component_o *)this->fields.playIconSprite;
  if ( !playIconSprite || (gameObject = UnityEngine_Component__get_gameObject(playIconSprite, 0LL), !item) )
    sub_B170D4();
  v6 = gameObject;
  if ( item->fields.isPlay || !item->fields.isCanPlay )
    *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
  v11 = v8;
  v12 = v9;
  v13 = v10;
  v14.fields.r = v7;
  v14.fields.g = v11;
  v14.fields.b = v12;
  v14.fields.a = v13;
  TweenColor__Begin(v6, 0.1, v14, 0LL);
}