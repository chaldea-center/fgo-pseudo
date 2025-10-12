void StandFigureRenderWaitStatus___ctor(
        StandFigureRenderWaitStatus_o *this,
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // [xsp+0h] [xbp-20h]

  StandFigureRenderWaitStatus___ctor_40652616(this, 0, id, faceType, 0, 0, textureList, callback, v6);
}


void StandFigureRenderWaitStatus___ctor_40651504(
        StandFigureRenderWaitStatus_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // [xsp+0h] [xbp-20h]

  StandFigureRenderWaitStatus___ctor_40652616(this, renderTex, id, faceType, 0, 0, textureList, callback, v7);
}


void StandFigureRenderWaitStatus___ctor_40651968(
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

  StandFigureRenderWaitStatus___ctor_40652616(this, renderTex, id, faceType, formId, 0, textureList, callback, v8);
}


void StandFigureRenderWaitStatus___ctor_40652220(
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
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.imageId = id;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  this->fields._MultiPortraitIndex_k__BackingField = multiPortraitIndex;
  this->fields.textureList = textureList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.textureList, (int32_t)textureList, v19, v20);
  this->fields.renderTex = renderTex;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.renderTex, (int32_t)renderTex, v21, v22);
  this->fields.isFaceOnly = v17;
  this->fields.withEffect = v18;
  if ( callback )
  {
    this->fields.callbackFunc = callback;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v23, v24);
  }
}


void StandFigureRenderWaitStatus___ctor_40652616(
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
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.imageId = id;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  this->fields.textureList = textureList;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.textureList, (int32_t)textureList, v17, v18);
  this->fields.renderTex = renderTex;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.renderTex, (int32_t)renderTex, v19, v20);
  this->fields.isFaceOnly = v16;
  if ( callback )
  {
    this->fields.callbackFunc = callback;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v21, v22);
  }
}


void StandFigureRenderWaitStatus__Callback(
        StandFigureRenderWaitStatus_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        const MethodInfo *method)
{
  struct StandFigureRenderWaitStatus_EndHandler_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    ((void (__fastcall *)(intptr_t, UnityEngine_RenderTexture_o *, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      renderTex,
      callbackFunc->fields.method);
  }
  else
  {
    if ( !renderTex )
      sub_1C32E7C(this);
    UnityEngine_RenderTexture__Release(renderTex, 0);
  }
}


UnityEngine_RenderTexture_o *StandFigureRenderWaitStatus__GetRenderTexture(
        StandFigureRenderWaitStatus_o *this,
        const MethodInfo *method)
{
  return this->fields.renderTex;
}


bool StandFigureRenderWaitStatus__IsFaceOnly(StandFigureRenderWaitStatus_o *this, const MethodInfo *method)
{
  return this->fields.isFaceOnly;
}


void StandFigureRenderWaitStatus__SetCharacter(
        StandFigureRenderWaitStatus_o *this,
        UIStandFigureRender_o *standFigureRender,
        const MethodInfo *method)
{
  int32_t faceType; // w2
  int32_t imageId; // w8
  int32_t formId; // w3
  UnityEngine_Texture2D_array *textureList; // x4

  if ( !standFigureRender )
    sub_1C32E7C(this);
  imageId = this->fields.imageId;
  faceType = this->fields.faceType;
  formId = this->fields.formId;
  textureList = this->fields.textureList;
  if ( this->fields.isFaceOnly )
    UIStandFigureRender__SetFace(standFigureRender, imageId, faceType, formId, textureList, 0);
  else
    UIStandFigureRender__SetCharacter(standFigureRender, imageId, faceType, formId, textureList, 0);
}


bool StandFigureRenderWaitStatus__WithEffect(StandFigureRenderWaitStatus_o *this, const MethodInfo *method)
{
  return this->fields.withEffect;
}


void StandFigureRenderWaitStatus__add_callbackFunc(
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

  if ( (byte_4C36C33 & 1) == 0 )
  {
    sub_1C32C20(&StandFigureRenderWaitStatus_EndHandler_TypeInfo);
    byte_4C36C33 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (StandFigureRenderWaitStatus_EndHandler_c *)v8->klass != StandFigureRenderWaitStatus_EndHandler_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  StandFigureRenderWaitStatus__remove_callbackFunc(v11, v12, v13);
}


bool StandFigureRenderWaitStatus__get_IsSub(StandFigureRenderWaitStatus_o *this, const MethodInfo *method)
{
  return this->fields._MultiPortraitIndex_k__BackingField > 0;
}


int32_t StandFigureRenderWaitStatus__get_MultiPortraitIndex(
        StandFigureRenderWaitStatus_o *this,
        const MethodInfo *method)
{
  return this->fields._MultiPortraitIndex_k__BackingField;
}


void StandFigureRenderWaitStatus__remove_callbackFunc(
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

  if ( (byte_4C36C34 & 1) == 0 )
  {
    sub_1C32C20(&StandFigureRenderWaitStatus_EndHandler_TypeInfo);
    byte_4C36C34 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (StandFigureRenderWaitStatus_EndHandler_c *)v8->klass != StandFigureRenderWaitStatus_EndHandler_TypeInfo )
        break;
    }
    v9 = sub_1C6CE78(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  StandFigureRenderWaitStatus__get_MultiPortraitIndex(v11, v12);
}


void StandFigureRenderWaitStatus__set_MultiPortraitIndex(
        StandFigureRenderWaitStatus_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._MultiPortraitIndex_k__BackingField = value;
}


void StandFigureRenderWaitStatus_EndHandler___ctor(
        StandFigureRenderWaitStatus_EndHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A7720C;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( this->fields.method_is_virtual )
      {
        v11 = sub_1C32CD8(method);
        v12 = sub_1C33194(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A77308;
          else
            v9 = sub_1A772CC;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A77248;
        }
        else
        {
          v9 = sub_1A7721C;
        }
      }
      else
      {
        v9 = sub_1A771EC;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A771A4;
}


System_IAsyncResult_o *StandFigureRenderWaitStatus_EndHandler__BeginInvoke(
        StandFigureRenderWaitStatus_EndHandler_o *this,
        UnityEngine_RenderTexture_o *texture,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  UnityEngine_RenderTexture_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = texture;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v6, callback, object);
}


void StandFigureRenderWaitStatus_EndHandler__EndInvoke(
        StandFigureRenderWaitStatus_EndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void StandFigureRenderWaitStatus_EndHandler__Invoke(
        StandFigureRenderWaitStatus_EndHandler_o *this,
        UnityEngine_RenderTexture_o *texture,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, UnityEngine_RenderTexture_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    texture,
    this->fields.method);
}