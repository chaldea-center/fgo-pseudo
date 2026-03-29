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
  unsigned int v9; // w21

  if ( (byte_4D2E0B1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79080888);
    byte_4D2E0B1 = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_319BF30 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____79080888);
  if ( !ComponentsInChildren_object )
    goto LABEL_11;
  max_length = ComponentsInChildren_object->max_length;
  v8 = ComponentsInChildren_object;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C93D34(ComponentsInChildren_object);
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
LABEL_11:
    sub_1C93D2C(ComponentsInChildren_object, v6);
  }
}


void SampleCardListViewItemDraw__EndLoadCard(
        SampleCardListViewItemDraw_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetData_o *cardData; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct UITexture_o *cardImageTexture; // x20
  Il2CppObject *Object_object; // x0
  __int64 v19; // x1

  if ( (byte_4D2E0B0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_AssetData_GetObject_Texture2D___);
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D2E0B0 = 1;
  }
  if ( data && System_String__op_Inequality(this->fields.cardFileName, data->fields.name, 0) )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41247948(data, 0);
  }
  else
  {
    cardData = this->fields.cardData;
    if ( cardData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_41247948(cardData, 0);
      this->fields.cardData = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.cardData, 0, v11, v12, v13, v14, v15, v16);
    }
    if ( data )
    {
      this->fields.cardData = data;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.cardData,
        (int32_t)data,
        (int32_t)method,
        v3,
        v4,
        v5,
        v6,
        v7);
      cardImageTexture = this->fields.cardImageTexture;
      Object_object = AssetData__GetObject_object_(
                        data,
                        (const MethodInfo_3185994 *)Method_AssetData_GetObject_Texture2D___);
      if ( !cardImageTexture )
        sub_1C93D2C(Object_object, v19);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetData_o *cardData; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_String_o **p_cardFileName; // x19

  if ( (byte_4D2E0AE & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    byte_4D2E0AE = 1;
  }
  cardData = this->fields.cardData;
  if ( cardData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41247948(cardData, 0);
    this->fields.cardData = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.cardData, 0, v10, v11, v12, v13, v14, v15);
  }
  this->fields.cardFileName = 0;
  p_cardFileName = &this->fields.cardFileName;
  *((_DWORD *)p_cardFileName - 2) = -1;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_cardFileName, 0, v2, v3, v4, v5, v6, v7);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_String_o *cardFileName; // x20
  AssetLoader_LoadEndDataHandler_o *v18; // x21
  Il2CppObject *Component_object; // x20
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v6 = this;
  if ( (byte_4D2E0AF & 1) == 0 )
  {
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SampleCardListViewItemDraw_EndLoadCard__);
    this = (SampleCardListViewItemDraw_o *)sub_1C93AD4(&StringLiteral_13833/*"Test/card{0:d3}"*/);
    byte_4D2E0AF = 1;
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
      v20 = isFront;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
      v10 = System_String__Format((System_String_o *)StringLiteral_13833/*"Test/card{0:d3}"*/, v9, 0);
      v6->fields.cardFileName = v10;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v6->fields.cardFileName, (int32_t)v10, v11, v12, v13, v14, v15, v16);
      cardFileName = v6->fields.cardFileName;
      v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(v18, (Il2CppObject *)v6, Method_SampleCardListViewItemDraw_EndLoadCard__, 0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(cardFileName, v18, 1, 0);
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
                       (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
  this = (SampleCardListViewItemDraw_o *)v6->fields.cardImageTexture;
  v21.fields.r = 1.0;
  if ( v7 == 1 )
    v21.fields.r = 0.5;
  if ( !this )
LABEL_26:
    sub_1C93D2C(this, item);
  v21.fields.a = 1.0;
  v21.fields.g = v21.fields.r;
  v21.fields.b = v21.fields.r;
  UIWidget__set_color((UIWidget_o *)this, v21, 0);
}


bool SampleCardListViewItemDraw__get_IsFront(SampleCardListViewItemDraw_o *this, const MethodInfo *method)
{
  return this->fields.isFront;
}


void SampleCardListViewItemDraw__set_IsFront(SampleCardListViewItemDraw_o *this, bool value, const MethodInfo *method)
{
  this->fields.isFront = value;
}