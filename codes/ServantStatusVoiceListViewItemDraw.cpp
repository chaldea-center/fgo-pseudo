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
    sub_2213CDC(baseButton, item);
  }
  baseButton = this->fields.baseButton;
  if ( !baseButton )
    goto LABEL_8;
  UICommonButton__SetEnable(baseButton, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Component_object; // x21
  float v15; // s3
  float v16; // s0 OVERLAPPED
  float v17; // s1
  float v18; // s2

  v6 = this;
  if ( (byte_596DFBB & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_21688/*"img_txt_myroom"*/);
    sub_2213A60(&StringLiteral_21694/*"img_txt_other"*/);
    sub_2213A60(&StringLiteral_21617/*"img_txt_battle"*/);
    this = (ServantStatusVoiceListViewItemDraw_o *)sub_2213A60(&StringLiteral_21723/*"img_txt_synthesis"*/);
    byte_596DFBB = 1;
  }
  if ( item && mode )
  {
    voiceEntitiy = item->fields.voiceEntitiy;
    if ( voiceEntitiy )
    {
      v8 = voiceEntitiy->fields.svtVoiceType - 1;
      v9 = (System_String_o **)(v8 > 8 ? &StringLiteral_21694/*"img_txt_other"*/ : (&off_52CA638)[v8]);
      this = (ServantStatusVoiceListViewItemDraw_o *)v6->fields.typeSpite;
      if ( this )
      {
        v10 = *v9;
        UISprite__set_spriteName((UISprite_o *)this, *v9, 0);
        if ( v10 )
        {
          this = (ServantStatusVoiceListViewItemDraw_o *)v6->fields.typeSpite;
          if ( !this )
            goto LABEL_27;
          ((void (__fastcall *)(ServantStatusVoiceListViewItemDraw_o *, void *))this->klass[2]._1.parent)(
            this,
            this->klass[2]._1.generic_class);
        }
        nameLabel = v6->fields.nameLabel;
        this = (ServantStatusVoiceListViewItemDraw_o *)ServantStatusVoiceListViewItem__get_Name(
                                                         item,
                                                         (const MethodInfo *)item);
        if ( nameLabel )
        {
          UILabel__set_text(nameLabel, (System_String_o *)this, 0);
          this = (ServantStatusVoiceListViewItemDraw_o *)v6->fields.playIconSprite;
          if ( this )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
            this = (ServantStatusVoiceListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                                             (UnityEngine_Object_o *)Component_object,
                                                             0,
                                                             0);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              if ( !Component_object )
                goto LABEL_27;
              UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
            }
            this = (ServantStatusVoiceListViewItemDraw_o *)v6->fields.playIconSprite;
            if ( item->fields.isPlay )
            {
              v15 = 1.0;
              v16 = 0.5;
              if ( this )
              {
LABEL_23:
                v17 = v16;
                v18 = v16;
                UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v16, 0);
                return;
              }
            }
            else
            {
              v15 = 1.0;
              v16 = 0.5;
              if ( item->fields.isCanPlay )
                v16 = 1.0;
              if ( this )
                goto LABEL_23;
            }
          }
        }
      }
    }
LABEL_27:
    sub_2213CDC(this, item);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusVoiceListViewItemDraw__SetPlay(
        ServantStatusVoiceListViewItemDraw_o *this,
        ServantStatusVoiceListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Component_o *playIconSprite; // x0
  float v5; // s4
  float v6; // s1 OVERLAPPED
  float v7; // s2
  float v8; // s3

  playIconSprite = (UnityEngine_Component_o *)this->fields.playIconSprite;
  if ( !playIconSprite
    || (playIconSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(playIconSprite, 0), !item) )
  {
    sub_2213CDC(playIconSprite, item);
  }
  if ( item->fields.isPlay )
  {
    v5 = 1.0;
    v6 = 0.5;
  }
  else
  {
    v5 = 1.0;
    if ( item->fields.isCanPlay )
      v6 = 1.0;
    else
      v6 = 0.5;
  }
  v7 = v6;
  v8 = v6;
  TweenColor__Begin((UnityEngine_GameObject_o *)playIconSprite, 0.1, *(UnityEngine_Color_o *)&v6, 0);
}