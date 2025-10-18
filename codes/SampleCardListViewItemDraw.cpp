void SampleCardListViewItemDraw___ctor(SampleCardListViewItemDraw_o *this, const MethodInfo *method)
{
  this->fields.cardId = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SampleCardListViewItemDraw__AddDepth(SampleCardListViewItemDraw_o *this, int32_t v, const MethodInfo *method)
{
  System_Object_array *ComponentsInChildren_object; // x0
  int max_length; // w8
  System_Object_array *v7; // x20
  unsigned int v8; // w21

  if ( (byte_4C40756 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78127760);
    byte_4C40756 = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_30DF14C *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78127760);
  if ( !ComponentsInChildren_object )
    goto LABEL_11;
  max_length = ComponentsInChildren_object->max_length;
  v7 = ComponentsInChildren_object;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C372BC(ComponentsInChildren_object);
      ComponentsInChildren_object = (System_Object_array *)v7->m_Items[v8];
      if ( !ComponentsInChildren_object )
        break;
      UIWidget__set_depth(
        (UIWidget_o *)ComponentsInChildren_object,
        LODWORD(ComponentsInChildren_object->m_Items[18]) + v,
        0);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_11:
    sub_1C372B4(ComponentsInChildren_object);
  }
}


void SampleCardListViewItemDraw__EndLoadCard(
        SampleCardListViewItemDraw_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *cardData; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UITexture_o *cardImageTexture; // x20
  Il2CppObject *Object_object; // x0

  if ( (byte_4C40755 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D___);
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C40755 = 1;
  }
  if ( data && System_String__op_Inequality(this->fields.cardFileName, data->fields.name, 0) )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(data, 0);
  }
  else
  {
    cardData = this->fields.cardData;
    if ( cardData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40534712(cardData, 0);
      this->fields.cardData = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cardData, 0, v7, v8);
    }
    if ( data )
    {
      this->fields.cardData = data;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cardData, (int32_t)data, (int32_t)method, v3);
      cardImageTexture = this->fields.cardImageTexture;
      Object_object = AssetData__GetObject_object_(
                        data,
                        (const MethodInfo_30C8EC0 *)Method_AssetData_GetObject_Texture2D___);
      if ( !cardImageTexture )
        sub_1C372B4(Object_object);
      ((void (__fastcall *)(struct UITexture_o *, Il2CppObject *, const MethodInfo *))cardImageTexture->klass->vtable._27_set_mainTexture.methodPtr)(
        cardImageTexture,
        Object_object,
        cardImageTexture->klass->vtable._27_set_mainTexture.method);
    }
  }
}


void SampleCardListViewItemDraw__OnDestroy(SampleCardListViewItemDraw_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  AssetData_o *cardData; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_String_o **p_cardFileName; // x19

  if ( (byte_4C40753 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C40753 = 1;
  }
  cardData = this->fields.cardData;
  if ( cardData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(cardData, 0);
    this->fields.cardData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cardData, 0, v6, v7);
  }
  this->fields.cardFileName = 0;
  p_cardFileName = &this->fields.cardFileName;
  *((_DWORD *)p_cardFileName - 2) = -1;
  sub_1C36FFC((CGThumbnailListItem_o *)p_cardFileName, 0, v2, v3);
}


// local variable allocation has failed, the output may be wrong!
void SampleCardListViewItemDraw__SetItem(
        SampleCardListViewItemDraw_o *this,
        SampleCardListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  SampleCardListViewItemDraw_o *v10; // x19
  int32_t v11; // w22
  int32_t isFront; // w8
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *cardFileName; // x20
  AssetLoader_LoadEndDataHandler_o *v18; // x21
  Il2CppObject *Component_object; // x20
  float v20; // s0 OVERLAPPED
  float v21; // s3
  float v22; // s1
  float v23; // s2
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v10 = this;
  if ( (byte_4C40754 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SampleCardListViewItemDraw_EndLoadCard__);
    this = (SampleCardListViewItemDraw_o *)sub_1C37058(&StringLiteral_13734/*"Test/card{0:d3}"*/);
    byte_4C40754 = 1;
  }
  if ( item )
    v11 = mode;
  else
    v11 = 0;
  if ( v11 )
  {
    isFront = v10->fields.isFront;
    if ( v10->fields.isFront )
    {
      if ( !item )
        goto LABEL_26;
      isFront = item->fields.cardId;
    }
    if ( v10->fields.cardId != isFront )
    {
      v10->fields.cardId = isFront;
      v24 = isFront;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, *(_QWORD *)&mode, method, v4, v5, v6, v7);
      v14 = System_String__Format((System_String_o *)StringLiteral_13734/*"Test/card{0:d3}"*/, v13, 0);
      v10->fields.cardFileName = v14;
      sub_1C36FFC((CGThumbnailListItem_o *)&v10->fields.cardFileName, (int32_t)v14, v15, v16);
      cardFileName = v10->fields.cardFileName;
      v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v18,
        (Il2CppObject *)v10,
        Method_SampleCardListViewItemDraw_EndLoadCard__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(cardFileName, v18, 1, 0);
    }
  }
  else
  {
    v10->fields.cardId = -1;
  }
  this = (SampleCardListViewItemDraw_o *)v10->fields.cardImageTexture;
  if ( !this )
    goto LABEL_26;
  this = (SampleCardListViewItemDraw_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_26;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  this = (SampleCardListViewItemDraw_o *)v10->fields.cardImageTexture;
  v20 = 1.0;
  if ( v11 == 1 )
    v20 = 0.5;
  if ( !this )
LABEL_26:
    sub_1C372B4(this);
  v21 = 1.0;
  v22 = v20;
  v23 = v20;
  UIWidget__set_color((UIWidget_o *)this, *(UnityEngine_Color_o *)&v20, 0);
}


bool SampleCardListViewItemDraw__get_IsFront(SampleCardListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.isFront;
}


void SampleCardListViewItemDraw__set_IsFront(SampleCardListViewItemDraw_o *this, bool value, const MethodInfo *method)
{
  this->fields.isFront = value;
}