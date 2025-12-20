void CGThumbnailListItemDraw___ctor(CGThumbnailListItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CGThumbnailListItemDraw__LoadAsset(
        CGThumbnailListItemDraw_o *this,
        CGThumbnailListItem_o *item,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  CGThumbnailListItemDraw_o *v6; // x20
  struct UITexture_o *cgThumbnailTexture; // x20

  v6 = this;
  if ( (byte_4D2767E & 1) == 0 )
  {
    this = (CGThumbnailListItemDraw_o *)sub_1C94098(&Method_AssetData_GetObject_Texture2D___);
    byte_4D2767E = 1;
  }
  if ( !item )
    goto LABEL_9;
  this = (CGThumbnailListItemDraw_o *)System_String__op_Equality(
                                        v6->fields._LoadedTexturePath_k__BackingField,
                                        item->fields._ThumbnailSpritePath_k__BackingField,
                                        0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( assetData )
    {
      cgThumbnailTexture = v6->fields.cgThumbnailTexture;
      this = (CGThumbnailListItemDraw_o *)AssetData__GetObject_object_(
                                            assetData,
                                            (const MethodInfo_317D284 *)Method_AssetData_GetObject_Texture2D___);
      if ( cgThumbnailTexture )
      {
        ((void (__fastcall *)(struct UITexture_o *, CGThumbnailListItemDraw_o *, const MethodInfo *))cgThumbnailTexture->klass->vtable._27_set_mainTexture.methodPtr)(
          cgThumbnailTexture,
          this,
          cgThumbnailTexture->klass->vtable._27_set_mainTexture.method);
        return;
      }
    }
LABEL_9:
    sub_1C942F0(this, item);
  }
}


void CGThumbnailListItemDraw__SetInput(
        CGThumbnailListItemDraw_o *this,
        CGThumbnailListItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  UnityEngine_Object_o *baseButton; // x21
  __int64 v8; // x1
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4D2767F & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2767F = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(baseButton, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0),
            (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0) )
      {
        sub_1C942F0(Component_object, v8);
      }
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppClass **))Component_object->klass[1]._1.nestedTypes)(
        Component_object,
        0,
        1,
        Component_object->klass[1]._1.implementedInterfaces);
    }
  }
}


void CGThumbnailListItemDraw__SetItem(
        CGThumbnailListItemDraw_o *this,
        CGThumbnailListItem_o *item,
        int32_t scaleType,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v8; // x22
  UnityEngine_GameObject_o *cgThumbnailTexture; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_String_o *v30; // x1
  System_String_o *v31; // x23
  AssetLoader_LoadEndDataHandler_o *v32; // x24
  System_String_o *v33; // x23
  AssetLoader_LoadEndDataHandler_o *v34; // x24
  struct System_Single_array *notifyObjectSize; // x8
  int32_t max_length; // w10
  int v37; // w9
  __int64 v38; // x20
  float v39; // s8
  struct UnityEngine_Vector3_array *cgDiffNotifyPos; // x8
  struct UnityEngine_Vector3_array *movieDiffNotifyPos; // x8
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2767D & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&Method_CGThumbnailListItemDraw___c__DisplayClass12_0__SetItem_b__0__);
    sub_1C94098(&Method_CGThumbnailListItemDraw___c__DisplayClass12_0__SetItem_b__1__);
    sub_1C94098(&CGThumbnailListItemDraw___c__DisplayClass12_0_TypeInfo);
    byte_4D2767D = 1;
  }
  v8 = sub_1C942E4(CGThumbnailListItemDraw___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  if ( !v8 )
    goto LABEL_36;
  *(_QWORD *)(v8 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v8 + 16), (int32_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = item;
  v17 = v8 + 24;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v8 + 24), (int32_t)item, v18, v19, v20, v21, v22, v23);
  cgThumbnailTexture = (UnityEngine_GameObject_o *)this->fields.cgThumbnailTexture;
  if ( !cgThumbnailTexture )
    goto LABEL_36;
  cgThumbnailTexture = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))cgThumbnailTexture->klass[1].vtable._3_ToString.method)(
                                                     cgThumbnailTexture,
                                                     0,
                                                     cgThumbnailTexture->klass[2]._1.image);
  if ( !*(_QWORD *)v17 )
    goto LABEL_36;
  v30 = *(struct System_String_o **)(*(_QWORD *)v17 + 136LL);
  this->fields._LoadedTexturePath_k__BackingField = v30;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._LoadedTexturePath_k__BackingField,
    (int32_t)v30,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !*(_QWORD *)v17 )
    goto LABEL_36;
  v31 = *(System_String_o **)(*(_QWORD *)v17 + 136LL);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v8,
    Method_CGThumbnailListItemDraw___c__DisplayClass12_0__SetItem_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  cgThumbnailTexture = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage_41293932(v31, v32, 0);
  if ( ((unsigned __int8)cgThumbnailTexture & 1) == 0 )
  {
    if ( !*(_QWORD *)v17 )
      goto LABEL_36;
    v33 = *(System_String_o **)(*(_QWORD *)v17 + 136LL);
    v34 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v34,
      (Il2CppObject *)v8,
      Method_CGThumbnailListItemDraw___c__DisplayClass12_0__SetItem_b__1__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    cgThumbnailTexture = (UnityEngine_GameObject_o *)AssetManager__loadAssetStorage(v33, v34, 1, 0);
  }
  if ( !*(_QWORD *)v17 )
    goto LABEL_36;
  cgThumbnailTexture = this->fields.cgDiffNotifyObject;
  if ( !cgThumbnailTexture )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(cgThumbnailTexture, *(_BYTE *)(*(_QWORD *)v17 + 132LL), 0);
  if ( !*(_QWORD *)v17 )
    goto LABEL_36;
  cgThumbnailTexture = this->fields.movieNotifyObject;
  if ( !cgThumbnailTexture )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(cgThumbnailTexture, *(_DWORD *)(*(_QWORD *)v17 + 128LL) == 1, 0);
  if ( !scaleType )
    return;
  notifyObjectSize = this->fields.notifyObjectSize;
  if ( !notifyObjectSize )
    goto LABEL_36;
  max_length = notifyObjectSize->max_length;
  if ( max_length >= scaleType )
  {
    v37 = scaleType - 1;
    if ( scaleType - 1 >= (unsigned int)max_length )
      goto LABEL_37;
    cgThumbnailTexture = this->fields.cgDiffNotifyObject;
    if ( !cgThumbnailTexture )
      goto LABEL_36;
    v38 = v37;
    v39 = notifyObjectSize->m_Items[v37];
    cgThumbnailTexture = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(cgThumbnailTexture, 0);
    if ( !cgThumbnailTexture )
      goto LABEL_36;
    v42.fields.z = 0.0;
    v42.fields.x = v39;
    v42.fields.y = v39;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)cgThumbnailTexture, v42, 0);
    cgThumbnailTexture = this->fields.movieNotifyObject;
    if ( !cgThumbnailTexture )
      goto LABEL_36;
    cgThumbnailTexture = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(cgThumbnailTexture, 0);
    if ( !cgThumbnailTexture )
      goto LABEL_36;
    v43.fields.z = 0.0;
    v43.fields.x = v39;
    v43.fields.y = v39;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)cgThumbnailTexture, v43, 0);
    cgThumbnailTexture = this->fields.cgDiffNotifyObject;
    if ( !cgThumbnailTexture )
      goto LABEL_36;
    cgThumbnailTexture = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(cgThumbnailTexture, 0);
    cgDiffNotifyPos = this->fields.cgDiffNotifyPos;
    if ( !cgDiffNotifyPos )
      goto LABEL_36;
    if ( (unsigned int)v38 >= LODWORD(cgDiffNotifyPos->max_length) )
      goto LABEL_37;
    if ( !cgThumbnailTexture )
      goto LABEL_36;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)cgThumbnailTexture,
      cgDiffNotifyPos->m_Items[v38],
      0);
    cgThumbnailTexture = this->fields.movieNotifyObject;
    if ( !cgThumbnailTexture )
      goto LABEL_36;
    cgThumbnailTexture = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(cgThumbnailTexture, 0);
    movieDiffNotifyPos = this->fields.movieDiffNotifyPos;
    if ( !movieDiffNotifyPos )
      goto LABEL_36;
    if ( (unsigned int)v38 >= LODWORD(movieDiffNotifyPos->max_length) )
LABEL_37:
      sub_1C942F8(cgThumbnailTexture);
    if ( cgThumbnailTexture )
    {
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)cgThumbnailTexture,
        movieDiffNotifyPos->m_Items[v38],
        0);
      return;
    }
LABEL_36:
    sub_1C942F0(cgThumbnailTexture, v10);
  }
}


System_String_o *CGThumbnailListItemDraw__get_LoadedTexturePath(
        CGThumbnailListItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields._LoadedTexturePath_k__BackingField;
}


void CGThumbnailListItemDraw__set_LoadedTexturePath(
        CGThumbnailListItemDraw_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._LoadedTexturePath_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._LoadedTexturePath_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CGThumbnailListItemDraw___c__DisplayClass12_0___ctor(
        CGThumbnailListItemDraw___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CGThumbnailListItemDraw___c__DisplayClass12_0___SetItem_b__0(
        CGThumbnailListItemDraw___c__DisplayClass12_0_o *this,
        AssetData_o *loadedAssetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1C942F0(this, loadedAssetData);
  CGThumbnailListItemDraw__LoadAsset(this->fields.__4__this, this->fields.item, loadedAssetData, v3);
}


void CGThumbnailListItemDraw___c__DisplayClass12_0___SetItem_b__1(
        CGThumbnailListItemDraw___c__DisplayClass12_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1C942F0(this, assetData);
  CGThumbnailListItemDraw__LoadAsset(this->fields.__4__this, this->fields.item, assetData, v3);
}