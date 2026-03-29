void ServantStatusVoiceListViewItemDraw___ctor(ServantStatusVoiceListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantStatusVoiceListViewItemDraw__SetInput(
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
      UICommonButton__SetEnable(baseButton, 1, 0);
      baseButton = this->fields.baseButton;
      if ( baseButton )
      {
        UICommonButton__SetColliderEnable(baseButton, isInput, 1, 0);
        return;
      }
    }
LABEL_8:
    sub_1C93D2C(baseButton, item);
  }
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_8;
  UICommonButton__SetEnable(baseButton, 0, 0);
}


void ServantStatusVoiceListViewItemDraw__SetItem(
        ServantStatusVoiceListViewItemDraw_o *this,
        ServantStatusVoiceListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusVoiceListViewItemDraw_o *v6; // x20
  struct VoiceEntity_o *voiceEntitiy; // x8
  unsigned int v8; // w8
  System_String_o **v9; // x8
  System_String_o *v10; // x21
  UILabel_o *nameLabel; // x21
  Il2CppObject *Component_object; // x21
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4D2E5D2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_20924/*"img_txt_myroom"*/);
    sub_1C93AD4(&StringLiteral_20930/*"img_txt_other"*/);
    sub_1C93AD4(&StringLiteral_20856/*"img_txt_battle"*/);
    this = (ServantStatusVoiceListViewItemDraw_o *)sub_1C93AD4(&StringLiteral_20959/*"img_txt_synthesis"*/);
    byte_4D2E5D2 = 1;
  }
  if ( item && mode )
  {
    voiceEntitiy = item->fields.voiceEntitiy;
    if ( !voiceEntitiy )
      goto LABEL_26;
    v8 = voiceEntitiy->fields.svtVoiceType - 1;
    v9 = (System_String_o **)(v8 > 8 ? &StringLiteral_20930/*"img_txt_other"*/ : (&off_4741928)[v8]);
    this = (ServantStatusVoiceListViewItemDraw_o *)v6->fields.typeSpite;
    if ( !this )
      goto LABEL_26;
    v10 = *v9;
    UISprite__set_spriteName((UISprite_o *)this, *v9, 0);
    if ( v10 )
    {
      this = (ServantStatusVoiceListViewItemDraw_o *)v6->fields.typeSpite;
      if ( !this )
        goto LABEL_26;
      ((void (__fastcall *)(ServantStatusVoiceListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
        this,
        this->klass[2]._1.generic_class);
    }
    nameLabel = v6->fields.nameLabel;
    this = (ServantStatusVoiceListViewItemDraw_o *)ServantStatusVoiceListViewItem__get_Name(
                                                     item,
                                                     (const MethodInfo *)item);
    if ( !nameLabel
      || (UILabel__set_text(nameLabel, (System_String_o *)this, 0),
          (this = (ServantStatusVoiceListViewItemDraw_o *)v6->fields.playIconSprite) == 0) )
    {
LABEL_26:
      sub_1C93D2C(this, item);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ServantStatusVoiceListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0,
                                                     0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_26;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
    }
    this = (ServantStatusVoiceListViewItemDraw_o *)v6->fields.playIconSprite;
    if ( item->fields.isPlay || !item->fields.isCanPlay )
    {
      v14.fields.a = 1.0;
      v14.fields.r = 0.5;
      if ( !this )
        goto LABEL_26;
    }
    else
    {
      v14.fields.r = 1.0;
      v14.fields.a = 1.0;
      if ( !this )
        goto LABEL_26;
    }
    v14.fields.g = v14.fields.r;
    v14.fields.b = v14.fields.r;
    UIWidget__set_color((UIWidget_o *)this, v14, 0);
  }
}


void ServantStatusVoiceListViewItemDraw__SetPlay(
        ServantStatusVoiceListViewItemDraw_o *this,
        ServantStatusVoiceListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *playIconSprite; // x0
  UnityEngine_Color_o v6; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  playIconSprite = (UnityEngine_Component_o *)this->fields.playIconSprite;
  if ( !playIconSprite
    || (playIconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(playIconSprite, 0), !item) )
  {
    sub_1C93D2C(playIconSprite, item);
  }
  if ( item->fields.isPlay || !item->fields.isCanPlay )
  {
    v6.fields.a = 1.0;
    v6.fields.r = 0.5;
  }
  else
  {
    v6.fields.r = 1.0;
    v6.fields.a = 1.0;
  }
  v6.fields.g = v6.fields.r;
  v6.fields.b = v6.fields.r;
  TweenColor__Begin((UnityEngine_GameObject_o *)playIconSprite, 0.1, v6, 0);
}