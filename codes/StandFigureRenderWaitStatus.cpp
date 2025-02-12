void __fastcall StandFigureRenderWaitStatus___ctor(
        StandFigureRenderWaitStatus_o *this,
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // [xsp+0h] [xbp-20h]

  StandFigureRenderWaitStatus___ctor_39181156(this, 0LL, id, faceType, 0, 0, textureList, callback, v6);
}


void __fastcall StandFigureRenderWaitStatus___ctor_39180456(
        StandFigureRenderWaitStatus_o *this,
        UnityEngine_RenderTexture_o *renderTex,
        int32_t id,
        int32_t faceType,
        UnityEngine_Texture2D_array *textureList,
        StandFigureRenderWaitStatus_EndHandler_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v7; // [xsp+0h] [xbp-20h]

  StandFigureRenderWaitStatus___ctor_39181156(this, renderTex, id, faceType, 0, 0, textureList, callback, v7);
}


void __fastcall StandFigureRenderWaitStatus___ctor_39180920(
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

  StandFigureRenderWaitStatus___ctor_39181156(this, renderTex, id, faceType, formId, 0, textureList, callback, v8);
}


void __fastcall StandFigureRenderWaitStatus___ctor_39181156(
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  v16 = isFaceOnly;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.imageId = id;
  this->fields.faceType = faceType;
  this->fields.formId = formId;
  this->fields.textureList = textureList;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.textureList,
    (int64_t)textureList,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.renderTex = renderTex;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.renderTex, (int64_t)renderTex, v23, v24, v25, v26, v27, v28);
  this->fields.isFaceOnly = v16;
  if ( callback )
  {
    this->fields.callbackFunc = callback;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
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
      sub_1C1AE30(this, 0LL);
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
    sub_1C1AE30(this, 0LL);
  imageId = this->fields.imageId;
  faceType = this->fields.faceType;
  formId = this->fields.formId;
  textureList = this->fields.textureList;
  if ( this->fields.isFaceOnly )
    UIStandFigureRender__SetFace(standFigureRender, imageId, faceType, formId, textureList, 0LL);
  else
    UIStandFigureRender__SetCharacter(standFigureRender, imageId, faceType, formId, textureList, 0LL);
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

  if ( (byte_4BC6DAB & 1) == 0 )
  {
    sub_1C1ABD4(&StandFigureRenderWaitStatus_EndHandler_TypeInfo, value);
    byte_4BC6DAB = 1;
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
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C1B0F0(v8);
  StandFigureRenderWaitStatus__remove_callbackFunc(v11, v12, v13);
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

  if ( (byte_4BC6DAC & 1) == 0 )
  {
    sub_1C1ABD4(&StandFigureRenderWaitStatus_EndHandler_TypeInfo, value);
    byte_4BC6DAC = 1;
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
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C1B0F0(v8);
  StandFigureRenderWaitStatus__GetRenderTexture(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall StandFigureRenderWaitStatus_EndHandler___ctor(
        StandFigureRenderWaitStatus_EndHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C1AC94(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A5BEF4;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v15 = sub_1C1AC8C(v10);
        v16 = sub_1C1B148(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A5BFF0;
          else
            v13 = (Il2CppObject *)sub_1A5BFB4;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A5BF30;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A5BF04;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A5BED4;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5BE8C;
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
  return (System_IAsyncResult_o *)sub_1C1AB88(this, &v6, callback, object);
}


void __fastcall StandFigureRenderWaitStatus_EndHandler__EndInvoke(
        StandFigureRenderWaitStatus_EndHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
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