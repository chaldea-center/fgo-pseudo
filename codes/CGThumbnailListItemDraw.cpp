void __fastcall CGThumbnailListItemDraw___ctor(CGThumbnailListItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CGThumbnailListItemDraw__LoadAsset(
        CGThumbnailListItemDraw_o *this,
        CGThumbnailListItem_o *item,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  CGThumbnailListItemDraw_o *v6; // x20
  struct UITexture_o *cgThumbnailTexture; // x20

  v6 = this;
  if ( (byte_4AFD094 & 1) == 0 )
  {
    this = (CGThumbnailListItemDraw_o *)sub_1BC3008(&Method_AssetData_GetObject_Texture2D___, item);
    byte_4AFD094 = 1;
  }
  if ( !item )
    goto LABEL_9;
  this = (CGThumbnailListItemDraw_o *)System_String__op_Equality(
                                        v6->fields._LoadedTexturePath_k__BackingField,
                                        item->fields._ThumbnailSpritePath_k__BackingField,
                                        0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( assetData )
    {
      cgThumbnailTexture = v6->fields.cgThumbnailTexture;
      this = (CGThumbnailListItemDraw_o *)AssetData__GetObject_object_(
                                            assetData,
                                            (const MethodInfo_2FE3288 *)Method_AssetData_GetObject_Texture2D___);
      if ( cgThumbnailTexture )
      {
        ((void (__fastcall *)(struct UITexture_o *, CGThumbnailListItemDraw_o *, Il2CppMethodPointer))cgThumbnailTexture->klass->vtable._27_set_mainTexture.method)(
          cgThumbnailTexture,
          this,
          cgThumbnailTexture->klass->vtable._28_get_shader.methodPtr);
        return;
      }
    }
LABEL_9:
    sub_1BC3264(this, item);
  }
}


void __fastcall CGThumbnailListItemDraw__SetInput(
        CGThumbnailListItemDraw_o *this,
        CGThumbnailListItem_o *item,
        bool isInput,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *baseButton; // x21
  __int64 v9; // x1
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4AFD095 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_Collider___, item);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    byte_4AFD095 = 1;
  }
  if ( item )
  {
    baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(baseButton, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.baseButton;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL
        || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isInput, 0LL),
            (Component_object = (UnityEngine_Component_o *)this->fields.baseButton) == 0LL) )
      {
        sub_1BC3264(Component_object, v9);
      }
      ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))Component_object->klass[1]._1.implementedInterfaces)(
        Component_object,
        0LL,
        1LL,
        Component_object->klass[1]._1.interfaceOffsets);
    }
  }
}


void __fastcall CGThumbnailListItemDraw__SetItem(
        CGThumbnailListItemDraw_o *this,
        CGThumbnailListItem_o *item,
        int32_t scaleType,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  UnityEngine_GameObject_o *cgThumbnailTexture; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_String_o *v22; // x1
  System_String_o *v23; // x23
  AssetLoader_LoadEndDataHandler_o *v24; // x24
  System_String_o *v25; // x23
  AssetLoader_LoadEndDataHandler_o *v26; // x24
  __int64 v27; // x2
  struct System_Single_array *notifyObjectSize; // x8
  int32_t max_length; // w10
  int v30; // w9
  __int64 v31; // x20
  float v32; // s8
  struct UnityEngine_Vector3_array *cgDiffNotifyPos; // x8
  struct UnityEngine_Vector3_array *movieDiffNotifyPos; // x8
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4AFD093 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, item);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_1BC3008(&Method_CGThumbnailListItemDraw___c__DisplayClass12_0__SetItem_b__0__, v9);
    sub_1BC3008(&Method_CGThumbnailListItemDraw___c__DisplayClass12_0__SetItem_b__1__, v10);
    sub_1BC3008(&CGThumbnailListItemDraw___c__DisplayClass12_0_TypeInfo, v11);
    byte_4AFD093 = 1;
  }
  v12 = sub_1BC3254(CGThumbnailListItemDraw___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_36;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = item;
  v17 = v12 + 24;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 24), (int32_t)item, v18, v19);
  cgThumbnailTexture = (UnityEngine_GameObject_o *)this->fields.cgThumbnailTexture;
  if ( !cgThumbnailTexture )
    goto LABEL_36;
  cgThumbnailTexture = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))cgThumbnailTexture->klass[2]._1.gc_desc)(
                                                     cgThumbnailTexture,
                                                     0LL,
                                                     cgThumbnailTexture->klass[2]._1.name);
  if ( !*(_QWORD *)v17 )
    goto LABEL_36;
  v22 = *(struct System_String_o **)(*(_QWORD *)v17 + 128LL);
  this->fields._LoadedTexturePath_k__BackingField = v22;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields._LoadedTexturePath_k__BackingField, (int32_t)v22, v20, v21);
  if ( !*(_QWORD *)v17 )
    goto LABEL_36;
  v23 = *(System_String_o **)(*(_QWORD *)v17 + 128LL);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v12,
    Method_CGThumbnailListItemDraw___c__DisplayClass12_0__SetItem_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  cgThumbnailTexture = (UnityEngine_GameObject_o *)AssetManager__getAssetStorage_39579800(v23, v24, 0LL);
  if ( ((unsigned __int8)cgThumbnailTexture & 1) == 0 )
  {
    if ( !*(_QWORD *)v17 )
      goto LABEL_36;
    v25 = *(System_String_o **)(*(_QWORD *)v17 + 128LL);
    v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v26,
      (Il2CppObject *)v12,
      Method_CGThumbnailListItemDraw___c__DisplayClass12_0__SetItem_b__1__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    cgThumbnailTexture = (UnityEngine_GameObject_o *)AssetManager__loadAssetStorage(v25, v26, 1, 0LL);
  }
  if ( !*(_QWORD *)v17 )
    goto LABEL_36;
  cgThumbnailTexture = this->fields.cgDiffNotifyObject;
  if ( !cgThumbnailTexture )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(cgThumbnailTexture, *(_BYTE *)(*(_QWORD *)v17 + 124LL), 0LL);
  if ( !*(_QWORD *)v17 )
    goto LABEL_36;
  cgThumbnailTexture = this->fields.movieNotifyObject;
  if ( !cgThumbnailTexture )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(cgThumbnailTexture, *(_DWORD *)(*(_QWORD *)v17 + 120LL) == 1, 0LL);
  if ( !scaleType )
    return;
  notifyObjectSize = this->fields.notifyObjectSize;
  if ( !notifyObjectSize )
    goto LABEL_36;
  max_length = notifyObjectSize->max_length;
  if ( max_length >= scaleType )
  {
    v30 = scaleType - 1;
    if ( scaleType - 1 >= (unsigned int)max_length )
      goto LABEL_37;
    cgThumbnailTexture = this->fields.cgDiffNotifyObject;
    if ( !cgThumbnailTexture )
      goto LABEL_36;
    v31 = v30;
    v32 = notifyObjectSize->m_Items[v30 + 1];
    cgThumbnailTexture = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(cgThumbnailTexture, 0LL);
    if ( !cgThumbnailTexture )
      goto LABEL_36;
    v35.fields.z = 0.0;
    v35.fields.x = v32;
    v35.fields.y = v32;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)cgThumbnailTexture, v35, 0LL);
    cgThumbnailTexture = this->fields.movieNotifyObject;
    if ( !cgThumbnailTexture )
      goto LABEL_36;
    cgThumbnailTexture = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(cgThumbnailTexture, 0LL);
    if ( !cgThumbnailTexture )
      goto LABEL_36;
    v36.fields.z = 0.0;
    v36.fields.x = v32;
    v36.fields.y = v32;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)cgThumbnailTexture, v36, 0LL);
    cgThumbnailTexture = this->fields.cgDiffNotifyObject;
    if ( !cgThumbnailTexture )
      goto LABEL_36;
    cgThumbnailTexture = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(cgThumbnailTexture, 0LL);
    cgDiffNotifyPos = this->fields.cgDiffNotifyPos;
    if ( !cgDiffNotifyPos )
      goto LABEL_36;
    if ( (unsigned int)v31 >= cgDiffNotifyPos->max_length )
      goto LABEL_37;
    if ( !cgThumbnailTexture )
      goto LABEL_36;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)cgThumbnailTexture,
      *(UnityEngine_Vector3_o *)&cgDiffNotifyPos->m_Items[v31].fields.y,
      0LL);
    cgThumbnailTexture = this->fields.movieNotifyObject;
    if ( !cgThumbnailTexture )
      goto LABEL_36;
    cgThumbnailTexture = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(cgThumbnailTexture, 0LL);
    movieDiffNotifyPos = this->fields.movieDiffNotifyPos;
    if ( !movieDiffNotifyPos )
      goto LABEL_36;
    if ( (unsigned int)v31 >= movieDiffNotifyPos->max_length )
LABEL_37:
      sub_1BC326C(cgThumbnailTexture, v14, v27);
    if ( cgThumbnailTexture )
    {
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)cgThumbnailTexture,
        *(UnityEngine_Vector3_o *)&movieDiffNotifyPos->m_Items[v31].fields.y,
        0LL);
      return;
    }
LABEL_36:
    sub_1BC3264(cgThumbnailTexture, v14);
  }
}


System_String_o *__fastcall CGThumbnailListItemDraw__get_LoadedTexturePath(
        CGThumbnailListItemDraw_o *this,
        const MethodInfo *method)
{
  return this->fields._LoadedTexturePath_k__BackingField;
}


void __fastcall CGThumbnailListItemDraw__set_LoadedTexturePath(
        CGThumbnailListItemDraw_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._LoadedTexturePath_k__BackingField = value;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields._LoadedTexturePath_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CGThumbnailListItemDraw___c__DisplayClass12_0___ctor(
        CGThumbnailListItemDraw___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CGThumbnailListItemDraw___c__DisplayClass12_0___SetItem_b__0(
        CGThumbnailListItemDraw___c__DisplayClass12_0_o *this,
        AssetData_o *loadedAssetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1BC3264(this, loadedAssetData);
  CGThumbnailListItemDraw__LoadAsset(this->fields.__4__this, this->fields.item, loadedAssetData, v3);
}


void __fastcall CGThumbnailListItemDraw___c__DisplayClass12_0___SetItem_b__1(
        CGThumbnailListItemDraw___c__DisplayClass12_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1BC3264(this, assetData);
  CGThumbnailListItemDraw__LoadAsset(this->fields.__4__this, this->fields.item, assetData, v3);
}