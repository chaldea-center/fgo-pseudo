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

  if ( item && item->fields.isCanPlay )
  {
    baseButton = this->fields.baseButton;
    if ( baseButton )
    {
      UICommonButton__SetEnable(baseButton, 1, 0LL);
      baseButton = this->fields.baseButton;
      if ( baseButton )
      {
        UICommonButton__SetColliderEnable(baseButton, isInput, 1, 0LL);
        return;
      }
    }
LABEL_8:
    sub_B5D69C(baseButton, item);
  }
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_8;
  UICommonButton__SetEnable(baseButton, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewItemDraw__SetItem(
        ServantStatusVoiceListViewItemDraw_o *this,
        ServantStatusVoiceListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusVoiceListViewItemDraw_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  struct VoiceEntity_o *voiceEntitiy; // x8
  unsigned int v23; // w8
  System_String_o **v24; // x8
  System_String_o *v25; // x21
  UILabel_o *nameLabel; // x21
  UnityEngine_Object_o *Component_WebViewObject; // x21
  UIWidget_o *playIconSprite; // x20
  int v29; // s0

  v6 = this;
  if ( (byte_42EBEFE & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenColor___, (_DWORD)item, mode, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_19967/*"img_txt_myroom"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_19973/*"img_txt_other"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_19909/*"img_txt_battle"*/, v16, v17, v18);
    this = (ServantStatusVoiceListViewItemDraw_o *)sub_B5D5C4(&StringLiteral_19998/*"img_txt_synthesis"*/, v19, v20, v21);
    byte_42EBEFE = 1;
  }
  if ( item && mode )
  {
    voiceEntitiy = item->fields.voiceEntitiy;
    if ( !voiceEntitiy )
      goto LABEL_27;
    v23 = voiceEntitiy->fields.svtVoiceType - 1;
    v24 = (System_String_o **)(v23 > 8 ? &StringLiteral_19973/*"img_txt_other"*/ : (&off_3F3FDC0)[v23]);
    this = (ServantStatusVoiceListViewItemDraw_o *)v6->fields.typeSpite;
    if ( !this )
      goto LABEL_27;
    v25 = *v24;
    UISprite__set_spriteName((UISprite_o *)this, *v24, 0LL);
    if ( v25 )
    {
      this = (ServantStatusVoiceListViewItemDraw_o *)v6->fields.typeSpite;
      if ( !this )
        goto LABEL_27;
      ((void (__fastcall *)(ServantStatusVoiceListViewItemDraw_o *, void *))this->klass[2]._1.typeMetadataHandle)(
        this,
        this->klass[2]._1.interopData);
    }
    nameLabel = v6->fields.nameLabel;
    this = (ServantStatusVoiceListViewItemDraw_o *)ServantStatusVoiceListViewItem__get_Name(
                                                     item,
                                                     (const MethodInfo *)item);
    if ( !nameLabel
      || (UILabel__set_text(nameLabel, (System_String_o *)this, 0LL),
          (this = (ServantStatusVoiceListViewItemDraw_o *)v6->fields.playIconSprite) == 0LL) )
    {
LABEL_27:
      sub_B5D69C(this, item);
    }
    Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                        (UnityEngine_Component_o *)this,
                                                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (ServantStatusVoiceListViewItemDraw_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_WebViewObject )
        goto LABEL_27;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_WebViewObject, 0, 0LL);
    }
    playIconSprite = (UIWidget_o *)v6->fields.playIconSprite;
    if ( item->fields.isPlay || !item->fields.isCanPlay )
    {
      *(UnityEngine_Color_o *)&v29 = UnityEngine_Color__get_gray(0LL);
      if ( !playIconSprite )
        goto LABEL_27;
    }
    else
    {
      *(UnityEngine_Color_o *)&v29 = UnityEngine_Color__get_white(0LL);
      if ( !playIconSprite )
        goto LABEL_27;
    }
    UIWidget__set_color(playIconSprite, *(UnityEngine_Color_o *)&v29, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewItemDraw__SetPlay(
        ServantStatusVoiceListViewItemDraw_o *this,
        ServantStatusVoiceListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *playIconSprite; // x0
  UnityEngine_GameObject_o *v5; // x19
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  float v10; // s5
  float v11; // s6
  float v12; // s7
  UnityEngine_Color_o v13; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  playIconSprite = (UnityEngine_Component_o *)this->fields.playIconSprite;
  if ( !playIconSprite
    || (playIconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(playIconSprite, 0LL), !item) )
  {
    sub_B5D69C(playIconSprite, item);
  }
  v5 = (UnityEngine_GameObject_o *)playIconSprite;
  if ( item->fields.isPlay || !item->fields.isCanPlay )
    *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_gray(0LL);
  else
    *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_white(0LL);
  v10 = v7;
  v11 = v8;
  v12 = v9;
  v13.fields.r = v6;
  v13.fields.g = v10;
  v13.fields.b = v11;
  v13.fields.a = v12;
  TweenColor__Begin(v5, 0.1, v13, 0LL);
}