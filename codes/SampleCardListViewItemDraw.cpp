void SampleCardListViewItemDraw___ctor(SampleCardListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.cardId = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SampleCardListViewItemDraw__AddDepth(SampleCardListViewItemDraw_o *this, int32_t v, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  __int64 v6; // x1
  int max_length; // w8
  System_Object_array *v8; // x20
  __int64 v9; // x21

  if ( (byte_596DE22 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91732016);
    byte_596DE22 = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91732016);
  if ( !ComponentsInChildren_object )
    goto LABEL_10;
  max_length = ComponentsInChildren_object->max_length;
  v8 = ComponentsInChildren_object;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= max_length )
        sub_2213CE4(ComponentsInChildren_object);
      ComponentsInChildren_object = (System_Object_array *)v8->m_Items[v9];
      if ( !ComponentsInChildren_object )
        break;
      UIWidget__set_depth(
        (UIWidget_o *)ComponentsInChildren_object,
        LODWORD(ComponentsInChildren_object->m_Items[18]) + v,
        0);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_10:
    sub_2213CDC(ComponentsInChildren_object, v6);
  }
}


void SampleCardListViewItemDraw__EndLoadCard(
        SampleCardListViewItemDraw_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetData_o *cardData; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UITexture_o *cardImageTexture; // x20
  Il2CppObject *Object_object; // x0
  __int64 v19; // x1

  if ( (byte_596DE21 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D___);
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596DE21 = 1;
  }
  if ( data && System_String__op_Inequality(this->fields.cardFileName, data->fields.name, 0) )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, data, method);
    AssetManager__releaseAsset_47496972(data, 0);
  }
  else
  {
    cardData = this->fields.cardData;
    if ( cardData )
    {
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, data, method);
      AssetManager__releaseAsset_47496972(cardData, 0);
      this->fields.cardData = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.cardData, 0, v11, v12, v13, v14, v15, v16);
    }
    if ( data )
    {
      this->fields.cardData = data;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.cardData,
        (int32_t)data,
        (System_String_o *)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      cardImageTexture = this->fields.cardImageTexture;
      Object_object = AssetData__GetObject_object_(
                        data,
                        (const MethodInfo_37D239C *)Method_AssetData_GetObject_Texture2D___);
      if ( !cardImageTexture )
        sub_2213CDC(Object_object, v19);
      ((void (__fastcall *)(struct UITexture_o *, Il2CppObject *, const MethodInfo *))cardImageTexture->klass->vtable._27_set_mainTexture.methodPtr)(
        cardImageTexture,
        Object_object,
        cardImageTexture->klass->vtable._27_set_mainTexture.method);
    }
  }
}


void SampleCardListViewItemDraw__OnDestroy(SampleCardListViewItemDraw_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetData_o *cardData; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596DE1F & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596DE1F = 1;
  }
  cardData = this->fields.cardData;
  if ( cardData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    AssetManager__releaseAsset_47496972(cardData, 0);
    this->fields.cardData = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.cardData, 0, v10, v11, v12, v13, v14, v15);
  }
  this->fields.cardFileName = 0;
  this->fields.cardId = -1;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.cardFileName, 0, v2, v3, v4, v5, v6, v7);
}


void SampleCardListViewItemDraw__SetItem(
        SampleCardListViewItemDraw_o *this,
        SampleCardListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  SampleCardListViewItemDraw_o *v6; // x19
  int32_t v7; // w22
  int32_t isFront; // w8
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *cardFileName; // x20
  AssetLoader_LoadEndDataHandler_o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *Component_object; // x20
  int32_t v25; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_596DE20 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SampleCardListViewItemDraw_EndLoadCard__);
    this = (SampleCardListViewItemDraw_o *)sub_2213A60(&StringLiteral_14304/*"Test/card{0:d3}"*/);
    byte_596DE20 = 1;
  }
  if ( item )
    v7 = mode;
  else
    v7 = 0;
  if ( v7 )
  {
    isFront = v6->fields.isFront;
    if ( v6->fields.isFront )
    {
      if ( !item )
        goto LABEL_26;
      isFront = item->fields.cardId;
    }
    if ( v6->fields.cardId != isFront )
    {
      v6->fields.cardId = isFront;
      v25 = isFront;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v25);
      v10 = System_String__Format((System_String_o *)StringLiteral_14304/*"Test/card{0:d3}"*/, v9, 0);
      v6->fields.cardFileName = v10;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v6->fields.cardFileName,
        (int32_t)v10,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      cardFileName = v6->fields.cardFileName;
      v18 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(v18, (Il2CppObject *)v6, Method_SampleCardListViewItemDraw_EndLoadCard__, 0);
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v19, v20);
      AssetManager__loadAssetStorage(cardFileName, v18, 1, 0, 0);
    }
  }
  else
  {
    v6->fields.cardId = -1;
  }
  this = (SampleCardListViewItemDraw_o *)v6->fields.cardImageTexture;
  if ( !this )
    goto LABEL_26;
  this = (SampleCardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_26;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
  this = (SampleCardListViewItemDraw_o *)UnityEngine_Object__op_Inequality(
                                           (UnityEngine_Object_o *)Component_object,
                                           0,
                                           0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_26;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
  this = (SampleCardListViewItemDraw_o *)v6->fields.cardImageTexture;
  if ( !this )
LABEL_26:
    sub_2213CDC(this, item);
  v26.fields.r = 1.0;
  v26.fields.a = 1.0;
  if ( v7 == 1 )
    v26.fields.r = 0.5;
  v26.fields.g = v26.fields.r;
  v26.fields.b = v26.fields.r;
  UIWidget__set_color((UIWidget_o *)this, v26, 0);
}


bool SampleCardListViewItemDraw__get_IsFront(SampleCardListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.isFront;
}


void SampleCardListViewItemDraw__set_IsFront(SampleCardListViewItemDraw_o *this, bool value, const MethodInfo *method)
{
  this->fields.isFront = value;
}