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

  if ( (byte_4CC4B5D & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78659824);
    byte_4CC4B5D = 1;
  }
  ComponentsInChildren_object = UnityEngine_Component__GetComponentsInChildren_object_(
                                  (UnityEngine_Component_o *)this,
                                  1,
                                  (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78659824);
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
        sub_1C71610(ComponentsInChildren_object);
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
    sub_1C71608(ComponentsInChildren_object, v6);
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

  if ( (byte_4CC4B5C & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_Texture2D___);
    sub_1C713B0(&AssetManager_TypeInfo);
    byte_4CC4B5C = 1;
  }
  if ( data && System_String__op_Inequality(this->fields.cardFileName, data->fields.name, 0) )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40808072(data, 0);
  }
  else
  {
    cardData = this->fields.cardData;
    if ( cardData )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40808072(cardData, 0);
      this->fields.cardData = 0;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.cardData, 0, v11, v12, v13, v14, v15, v16);
    }
    if ( data )
    {
      this->fields.cardData = data;
      sub_1C71354(
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
                        (const MethodInfo_312C09C *)Method_AssetData_GetObject_Texture2D___);
      if ( !cardImageTexture )
        sub_1C71608(Object_object, v19);
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

  if ( (byte_4CC4B5A & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    byte_4CC4B5A = 1;
  }
  cardData = this->fields.cardData;
  if ( cardData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40808072(cardData, 0);
    this->fields.cardData = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.cardData, 0, v10, v11, v12, v13, v14, v15);
  }
  this->fields.cardFileName = 0;
  p_cardFileName = &this->fields.cardFileName;
  *((_DWORD *)p_cardFileName - 2) = -1;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_cardFileName, 0, v2, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
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
  float v20; // s0 OVERLAPPED
  float v21; // s3
  float v22; // s1
  float v23; // s2
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  v6 = this;
  if ( (byte_4CC4B5B & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_TweenColor___);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SampleCardListViewItemDraw_EndLoadCard__);
    this = (SampleCardListViewItemDraw_o *)sub_1C713B0(&StringLiteral_13743/*"Test/card{0:d3}"*/);
    byte_4CC4B5B = 1;
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
      v24 = isFront;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
      v10 = System_String__Format((System_String_o *)StringLiteral_13743/*"Test/card{0:d3}"*/, v9, 0);
      v6->fields.cardFileName = v10;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v6->fields.cardFileName, (int32_t)v10, v11, v12, v13, v14, v15, v16);
      cardFileName = v6->fields.cardFileName;
      v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
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
                       (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenColor___);
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
  v20 = 1.0;
  if ( v7 == 1 )
    v20 = 0.5;
  if ( !this )
LABEL_26:
    sub_1C71608(this, item);
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