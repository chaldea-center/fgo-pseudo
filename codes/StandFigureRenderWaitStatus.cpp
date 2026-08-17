void StandFigureRenderWaitStatus___ctor(
        StandFigureRenderWaitStatus_o *this,
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // [xsp+0h] [xbp-20h]

  StandFigureRenderWaitStatus___ctor_47717772(this, 0, id, faceType, 0, 0, textureList, callback, v6);
}


void StandFigureRenderWaitStatus___ctor_47716660(
        StandFigureRenderWaitStatus_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // [xsp+0h] [xbp-20h]

  StandFigureRenderWaitStatus___ctor_47717772(this, renderTex, id, faceType, 0, 0, textureList, callback, v7);
}


void StandFigureRenderWaitStatus___ctor_47717124(
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

  StandFigureRenderWaitStatus___ctor_47717772(this, renderTex, id, faceType, formId, 0, textureList, callback, v8);
}


void StandFigureRenderWaitStatus___ctor_47717376(
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
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.imageId = id;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  this->fields._MultiPortraitIndex_k__BackingField = multiPortraitIndex;
  this->fields.textureList = textureList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.textureList,
    (int32_t)textureList,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.renderTex = renderTex;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.renderTex,
    (int32_t)renderTex,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.isFaceOnly = isFaceOnly;
  this->fields.withEffect = withEffect;
  if ( callback )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
}


void StandFigureRenderWaitStatus___ctor_47717772(
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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.imageId = id;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  this->fields.textureList = textureList;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.textureList,
    (int32_t)textureList,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.renderTex = renderTex;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.renderTex,
    (int32_t)renderTex,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.isFaceOnly = isFaceOnly;
  if ( callback )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
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
      sub_2213CDC(this, 0);
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
  if ( this->fields.isFaceOnly )
  {
    if ( standFigureRender )
    {
      UIStandFigureRender__SetFace(
        standFigureRender,
        this->fields.imageId,
        this->fields.faceType,
        this->fields.formId,
        this->fields.textureList,
        0);
      return;
    }
LABEL_6:
    sub_2213CDC(this, standFigureRender);
  }
  if ( !standFigureRender )
    goto LABEL_6;
  UIStandFigureRender__SetCharacter(
    standFigureRender,
    this->fields.imageId,
    this->fields.faceType,
    this->fields.formId,
    this->fields.textureList,
    0);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  StandFigureRenderWaitStatus_o *v13; // x0
  StandFigureRenderWaitStatus_EndHandler_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596FA23 & 1) == 0 )
  {
    sub_2213A60(&StandFigureRenderWaitStatus_EndHandler_TypeInfo);
    byte_596FA23 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, StandFigureRenderWaitStatus_EndHandler_TypeInfo, v9, v10);
  StandFigureRenderWaitStatus__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  StandFigureRenderWaitStatus_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596FA24 & 1) == 0 )
  {
    sub_2213A60(&StandFigureRenderWaitStatus_EndHandler_TypeInfo);
    byte_596FA24 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, StandFigureRenderWaitStatus_EndHandler_TypeInfo, v9, v10);
  StandFigureRenderWaitStatus__get_MultiPortraitIndex(v13, v14);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_200CD1C;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( this->fields.method_is_virtual )
      {
        v15 = sub_2213B30(method);
        v16 = sub_22140B4(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_200CE14;
          else
            v13 = sub_200CDD8;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_200CD54;
        }
        else
        {
          v13 = sub_200CD2C;
        }
      }
      else
      {
        v13 = sub_200CD00;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_200CCB8;
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
  return (System_IAsyncResult_o *)sub_2213A14(this, &v6, callback, object);
}


void StandFigureRenderWaitStatus_EndHandler__EndInvoke(
        StandFigureRenderWaitStatus_EndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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