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
    sub_1BCAA3C(baseButton, item);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct VoiceEntity_o *voiceEntitiy; // x8
  unsigned int v18; // w8
  System_String_o **v19; // x8
  System_String_o *v20; // x21
  UILabel_o *nameLabel; // x21
  __int64 v22; // x1
  Il2CppObject *Component_object; // x21
  float v24; // s3
  float v25; // s0
  float v26; // s1
  float v27; // s2

  v6 = this;
  if ( (byte_4B13D1D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_TweenColor___, item, *(_QWORD *)&mode);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_20782/*"img_txt_myroom"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_20788/*"img_txt_other"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_20724/*"img_txt_battle"*/, v13, v14);
    this = (ServantStatusVoiceListViewItemDraw_o *)sub_1BCA7E0(&StringLiteral_20816/*"img_txt_synthesis"*/, v15, v16);
    byte_4B13D1D = 1;
  }
  if ( item && mode )
  {
    voiceEntitiy = item->fields.voiceEntitiy;
    if ( !voiceEntitiy )
      goto LABEL_26;
    v18 = voiceEntitiy->fields.svtVoiceType - 1;
    v19 = (System_String_o **)(v18 > 8 ? &StringLiteral_20788/*"img_txt_other"*/ : (&off_455AEA0)[v18]);
    this = (ServantStatusVoiceListViewItemDraw_o *)v6->fields.typeSpite;
    if ( !this )
      goto LABEL_26;
    v20 = *v19;
    UISprite__set_spriteName((UISprite_o *)this, *v19, 0LL);
    if ( v20 )
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
      sub_1BCAA3C(this, item);
    }
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
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
      v24 = 1.0;
      v25 = 0.5;
      if ( !this )
        goto LABEL_26;
    }
    else
    {
      v25 = 1.0;
      v24 = 1.0;
      if ( !this )
        goto LABEL_26;
    }
    v26 = v25;
    v27 = v25;
    UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v25, 0LL);
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
    sub_1BCAA3C(playIconSprite, item);
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