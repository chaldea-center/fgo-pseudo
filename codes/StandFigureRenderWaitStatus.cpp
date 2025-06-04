void __fastcall StandFigureRenderWaitStatus___ctor(
        StandFigureRenderWaitStatus_o *this,
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // [xsp+0h] [xbp-20h]

  StandFigureRenderWaitStatus___ctor_39787104(this, 0LL, id, faceType, 0, 0, textureList, callback, v6);
}


void __fastcall StandFigureRenderWaitStatus___ctor_39785992(
        StandFigureRenderWaitStatus_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // [xsp+0h] [xbp-20h]

  StandFigureRenderWaitStatus___ctor_39787104(this, renderTex, id, faceType, 0, 0, textureList, callback, v7);
}


void __fastcall StandFigureRenderWaitStatus___ctor_39786456(
        StandFigureRenderWaitStatus_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        int32_t formId,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v8; // [xsp+0h] [xbp-20h]

  StandFigureRenderWaitStatus___ctor_39787104(this, renderTex, id, faceType, formId, 0, textureList, callback, v8);
}


void __fastcall StandFigureRenderWaitStatus___ctor_39786708(
        StandFigureRenderWaitStatus_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        int32_t formId,
        int32_t multiPortraitIndex,
        bool isFaceOnly,
        bool withEffect,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  bool v17; // w27
  bool v18; // w28
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  v17 = isFaceOnly;
  v18 = withEffect;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.imageId = id;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  this->fields._MultiPortraitIndex_k__BackingField = multiPortraitIndex;
  this->fields.textureList = textureList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.textureList, (int32_t)textureList, v19, v20);
  this->fields.renderTex = renderTex;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.renderTex, (int32_t)renderTex, v21, v22);
  this->fields.isFaceOnly = v17;
  this->fields.withEffect = v18;
  if ( callback )
  {
    this->fields.callbackFunc = callback;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v23, v24);
  }
}


void __fastcall StandFigureRenderWaitStatus___ctor_39787104(
        StandFigureRenderWaitStatus_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        int32_t formId,
        bool isFaceOnly,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  bool v16; // w26
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  v16 = isFaceOnly;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.imageId = id;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  this->fields.textureList = textureList;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.textureList, (int32_t)textureList, v17, v18);
  this->fields.renderTex = renderTex;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.renderTex, (int32_t)renderTex, v19, v20);
  this->fields.isFaceOnly = v16;
  if ( callback )
  {
    this->fields.callbackFunc = callback;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v21, v22);
  }
}


void __fastcall StandFigureRenderWaitStatus__Callback(
        StandFigureRenderWaitStatus_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        const MethodInfo *method)
{
  struct StandFigureRenderWaitStatus_EndHandler_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_RenderTexture_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      renderTex,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
  else
  {
    if ( !renderTex )
      sub_1BC3264(this, 0LL);
    UnityEngine_RenderTexture__Release(renderTex, 0LL);
  }
}


UnityEngine_RenderTexture_o *__fastcall StandFigureRenderWaitStatus__GetRenderTexture(
        StandFigureRenderWaitStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.renderTex;
}


bool __fastcall StandFigureRenderWaitStatus__IsFaceOnly(StandFigureRenderWaitStatus_o *this, const MethodInfo *method)
{
  return this->fields.isFaceOnly;
}


void __fastcall StandFigureRenderWaitStatus__SetCharacter(
        StandFigureRenderWaitStatus_o *this,
        UIStandFigureRender_o *standFigureRender,
        const MethodInfo *method)
{
  int32_t faceType; // w2
  int32_t imageId; // w8
  int32_t formId; // w3
  UnityEngine_Texture2D_array *textureList; // x4

  if ( !standFigureRender )
    sub_1BC3264(this, 0LL);
  imageId = this->fields.imageId;
  faceType = this->fields.faceType;
  formId = this->fields.formId;
  textureList = this->fields.textureList;
  if ( this->fields.isFaceOnly )
    UIStandFigureRender__SetFace(standFigureRender, imageId, faceType, formId, textureList, 0LL);
  else
    UIStandFigureRender__SetCharacter(standFigureRender, imageId, faceType, formId, textureList, 0LL);
}


bool __fastcall StandFigureRenderWaitStatus__WithEffect(StandFigureRenderWaitStatus_o *this, const MethodInfo *method)
{
  return this->fields.withEffect;
}


void __fastcall StandFigureRenderWaitStatus__add_callbackFunc(
        StandFigureRenderWaitStatus_o *this,
        StandFigureRenderWaitStatus_EndHandler_o *value,
        const MethodInfo *method)
{
  struct StandFigureRenderWaitStatus_EndHandler_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct StandFigureRenderWaitStatus_EndHandler_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  StandFigureRenderWaitStatus_o *v11; // x0
  StandFigureRenderWaitStatus_EndHandler_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B012C6 & 1) == 0 )
  {
    sub_1BC3008(&StandFigureRenderWaitStatus_EndHandler_TypeInfo, value);
    byte_4B012C6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (StandFigureRenderWaitStatus_EndHandler_c *)v8->klass != StandFigureRenderWaitStatus_EndHandler_TypeInfo )
        break;
    }
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
  StandFigureRenderWaitStatus__remove_callbackFunc(v11, v12, v13);
}


bool __fastcall StandFigureRenderWaitStatus__get_IsSub(StandFigureRenderWaitStatus_o *this, const MethodInfo *method)
{
  return this->fields._MultiPortraitIndex_k__BackingField > 0;
}


int32_t __fastcall StandFigureRenderWaitStatus__get_MultiPortraitIndex(
        StandFigureRenderWaitStatus_o *this,
        const MethodInfo *method)
{
  return this->fields._MultiPortraitIndex_k__BackingField;
}


void __fastcall StandFigureRenderWaitStatus__remove_callbackFunc(
        StandFigureRenderWaitStatus_o *this,
        StandFigureRenderWaitStatus_EndHandler_o *value,
        const MethodInfo *method)
{
  struct StandFigureRenderWaitStatus_EndHandler_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct StandFigureRenderWaitStatus_EndHandler_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  StandFigureRenderWaitStatus_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B012C7 & 1) == 0 )
  {
    sub_1BC3008(&StandFigureRenderWaitStatus_EndHandler_TypeInfo, value);
    byte_4B012C7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (StandFigureRenderWaitStatus_EndHandler_c *)v8->klass != StandFigureRenderWaitStatus_EndHandler_TypeInfo )
        break;
    }
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
  StandFigureRenderWaitStatus__get_MultiPortraitIndex(v11, v12);
}


void __fastcall StandFigureRenderWaitStatus__set_MultiPortraitIndex(
        StandFigureRenderWaitStatus_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MultiPortraitIndex_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureRenderWaitStatus_EndHandler___ctor(
        StandFigureRenderWaitStatus_EndHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1A0D34C;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v11 = sub_1BC30C0(v6);
        v12 = sub_1BC357C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_1A0D448;
          else
            v9 = (Il2CppObject *)sub_1A0D40C;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_1A0D388;
        }
        else
        {
          v9 = (Il2CppObject *)sub_1A0D35C;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_1A0D32C;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0D2E4;
}


System_IAsyncResult_o *__fastcall StandFigureRenderWaitStatus_EndHandler__BeginInvoke(
        StandFigureRenderWaitStatus_EndHandler_o *this,
        UnityEngine_RenderTexture_o *texture,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UnityEngine_RenderTexture_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = texture;
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, &v6, callback, object);
}


void __fastcall StandFigureRenderWaitStatus_EndHandler__EndInvoke(
        StandFigureRenderWaitStatus_EndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall StandFigureRenderWaitStatus_EndHandler__Invoke(
        StandFigureRenderWaitStatus_EndHandler_o *this,
        UnityEngine_RenderTexture_o *texture,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, UnityEngine_RenderTexture_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    texture,
    *(_QWORD *)&this->fields.extra_arg);
}