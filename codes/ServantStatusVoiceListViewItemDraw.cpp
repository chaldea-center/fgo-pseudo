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
    sub_1B00F28(baseButton, item);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct VoiceEntity_o *voiceEntitiy; // x8
  unsigned int v13; // w8
  System_String_o **v14; // x8
  System_String_o *v15; // x21
  UILabel_o *nameLabel; // x21
  Il2CppObject *Component_object; // x21
  float v18; // s3
  float v19; // s0
  float v20; // s1
  float v21; // s2

  v6 = this;
  if ( (byte_48E0473 & 1) == 0 )
  {
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponent_TweenColor___, item);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B00CCC(&StringLiteral_20281/*"img_txt_myroom"*/, v8);
    sub_1B00CCC(&StringLiteral_20287/*"img_txt_other"*/, v9);
    sub_1B00CCC(&StringLiteral_20223/*"img_txt_battle"*/, v10);
    this = (ServantStatusVoiceListViewItemDraw_o *)sub_1B00CCC(&StringLiteral_20312/*"img_txt_synthesis"*/, v11);
    byte_48E0473 = 1;
  }
  if ( item && mode )
  {
    voiceEntitiy = item->fields.voiceEntitiy;
    if ( !voiceEntitiy )
      goto LABEL_26;
    v13 = voiceEntitiy->fields.svtVoiceType - 1;
    v14 = (System_String_o **)(v13 > 8 ? &StringLiteral_20287/*"img_txt_other"*/ : (&off_4357EA8)[v13]);
    this = (ServantStatusVoiceListViewItemDraw_o *)v6->fields.typeSpite;
    if ( !this )
      goto LABEL_26;
    v15 = *v14;
    UISprite__set_spriteName((UISprite_o *)this, *v14, 0LL);
    if ( v15 )
    {
      this = (ServantStatusVoiceListViewItemDraw_o *)v6->fields.typeSpite;
      if ( !this )
        goto LABEL_26;
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
LABEL_26:
      sub_1B00F28(this, item);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2D596B4 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (ServantStatusVoiceListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0LL,
                                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_26;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
    }
    this = (ServantStatusVoiceListViewItemDraw_o *)v6->fields.playIconSprite;
    if ( item->fields.isPlay || !item->fields.isCanPlay )
    {
      v18 = 1.0;
      v19 = 0.5;
      if ( !this )
        goto LABEL_26;
    }
    else
    {
      v19 = 1.0;
      v18 = 1.0;
      if ( !this )
        goto LABEL_26;
    }
    v20 = v19;
    v21 = v19;
    UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v19, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusVoiceListViewItemDraw__SetPlay(
        ServantStatusVoiceListViewItemDraw_o *this,
        ServantStatusVoiceListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *playIconSprite; // x0
  float v5; // s4
  float v6; // s1
  float v7; // s2
  float v8; // s3

  playIconSprite = (UnityEngine_Component_o *)this->fields.playIconSprite;
  if ( !playIconSprite
    || (playIconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(playIconSprite, 0LL), !item) )
  {
    sub_1B00F28(playIconSprite, item);
  }
  if ( item->fields.isPlay || !item->fields.isCanPlay )
  {
    v5 = 1.0;
    v6 = 0.5;
  }
  else
  {
    v6 = 1.0;
    v5 = 1.0;
  }
  v7 = v6;
  v8 = v6;
  TweenColor__Begin((UnityEngine_GameObject_o *)playIconSprite, 0.1, *(UnityEngine_Color_o *)&v6, 0LL);
}